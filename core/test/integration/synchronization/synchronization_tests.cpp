/*
 *
 * synchronization_tests
 * ledger-core
 *
 * Created by Pierre Pollastri on 24/07/2017.
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2016 Ledger
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */

#include <gtest/gtest.h>
#include "../BaseFixture.h"
#include <set>
#include <wallet/bitcoin/api_impl/BitcoinLikeTransactionApi.h>

class BitcoinLikeWalletSynchronization : public BaseFixture {

};

TEST_F(BitcoinLikeWalletSynchronization, MediumXpubSynchronization) {
    auto pool = newDefaultPool();
    {
        auto wallet = wait(pool->createWallet("e847815f-488a-4301-b67c-378a5e9c8a61", "bitcoin",
                                              api::DynamicObject::newInstance()));
        std::set<std::string> emittedOperations;
        {
            auto nextIndex = wait(wallet->getNextAccountIndex());
            EXPECT_EQ(nextIndex, 0);

            auto account = createBitcoinLikeAccount(wallet, nextIndex, P2PKH_MEDIUM_XPUB_INFO);

            auto receiver = make_receiver([&](const std::shared_ptr<api::Event> &event) {
                if (event->getCode() == api::EventCode::NEW_OPERATION) {
                    auto uid = event->getPayload()->getString(
                            api::Account::EV_NEW_OP_UID).value();
                    EXPECT_EQ(emittedOperations.find(uid), emittedOperations.end());
                }
            });

            pool->getEventBus()->subscribe(dispatcher->getMainExecutionContext(),receiver);

            receiver.reset();
            receiver = make_receiver([=](const std::shared_ptr<api::Event> &event) {
                fmt::print("Received event {}\n", api::to_string(event->getCode()));
                if (event->getCode() == api::EventCode::SYNCHRONIZATION_STARTED)
                    return;
                EXPECT_NE(event->getCode(), api::EventCode::SYNCHRONIZATION_FAILED);
                EXPECT_EQ(event->getCode(),
                          api::EventCode::SYNCHRONIZATION_SUCCEED_ON_PREVIOUSLY_EMPTY_ACCOUNT);
                dispatcher->stop();
            });

            account->synchronize()->subscribe(dispatcher->getMainExecutionContext(),receiver);

            dispatcher->waitUntilStopped();
        }
    }
}

TEST_F(BitcoinLikeWalletSynchronization, SynchronizeOnceAtATime) {
    auto pool = newDefaultPool();
    {
        auto wallet = wait(pool->createWallet("e847815f-488a-4301-b67c-378a5e9c8a62", "bitcoin",
                                              api::DynamicObject::newInstance()));
        {
            auto nextIndex = wait(wallet->getNextAccountIndex());
            EXPECT_EQ(nextIndex, 0);
            auto account = createBitcoinLikeAccount(wallet, nextIndex, P2PKH_MEDIUM_XPUB_INFO);
            pool->getEventBus()->subscribe(dispatcher->getMainExecutionContext(),
                                           make_receiver([](const std::shared_ptr<api::Event> &event) {
                                               fmt::print("Received event {}\n", api::to_string(event->getCode()));
                                           }));
            auto bus = account->synchronize();
            bus->subscribe(dispatcher->getMainExecutionContext(),
                                              make_receiver([=](const std::shared_ptr<api::Event> &event) {
                                                  fmt::print("Received event {}\n", api::to_string(event->getCode()));
                                                  if (event->getCode() == api::EventCode::SYNCHRONIZATION_STARTED)
                                                      return;
                                                  EXPECT_NE(event->getCode(), api::EventCode::SYNCHRONIZATION_FAILED);
                                                  EXPECT_EQ(event->getCode(),
                                                            api::EventCode::SYNCHRONIZATION_SUCCEED_ON_PREVIOUSLY_EMPTY_ACCOUNT);
                                                  dispatcher->stop();
                                              }));
            EXPECT_EQ(bus, account->synchronize());
            dispatcher->waitUntilStopped();
        }
    }
}

TEST_F(BitcoinLikeWalletSynchronization, SynchronizeAndFreshResetAll) {
    {
        auto pool = newDefaultPool();
        auto wallet = wait(pool->createWallet("e847815f-488a-4301-b67c-378a5e9c8a62", "bitcoin",
                                              api::DynamicObject::newInstance()));
        {
            auto nextIndex = wait(wallet->getNextAccountIndex());
            EXPECT_EQ(nextIndex, 0);
            auto account = createBitcoinLikeAccount(wallet, nextIndex, P2PKH_MEDIUM_XPUB_INFO);
            pool->getEventBus()->subscribe(dispatcher->getMainExecutionContext(),
                                           make_receiver([](const std::shared_ptr<api::Event> &event) {
                                               fmt::print("Received event {}\n", api::to_string(event->getCode()));
                                           }));
            auto bus = account->synchronize();
            bus->subscribe(dispatcher->getMainExecutionContext(),
                                              make_receiver([=](const std::shared_ptr<api::Event> &event) {
                                                  fmt::print("Received event {}\n", api::to_string(event->getCode()));
                                                  if (event->getCode() == api::EventCode::SYNCHRONIZATION_STARTED)
                                                      return;
                                                  EXPECT_NE(event->getCode(), api::EventCode::SYNCHRONIZATION_FAILED);
                                                  EXPECT_EQ(event->getCode(),
                                                            api::EventCode::SYNCHRONIZATION_SUCCEED_ON_PREVIOUSLY_EMPTY_ACCOUNT);
                                                  dispatcher->stop();
                                              }));
            EXPECT_EQ(bus, account->synchronize());
            dispatcher->waitUntilStopped();

            // reset everything
            EXPECT_EQ(wait(pool->getWalletCount()), 1);
            pool->freshResetAll();
        }
    }
    {
        auto pool = newDefaultPool();
        EXPECT_EQ(wait(pool->getWalletCount()), 0);
    }
}

TEST_F(BitcoinLikeWalletSynchronization, SynchronizeFromLastBlock) {
    auto pool = newDefaultPool();
    {
        auto wallet = wait(pool->createWallet("e847815f-488a-4301-b67c-378a5e9c8a63", "bitcoin",
                                              api::DynamicObject::newInstance()));
        createBitcoinLikeAccount(wallet, 0, P2PKH_MEDIUM_XPUB_INFO);
        auto synchronize = [wallet, pool, this] (bool expectNewOp) {
            auto account = wait(wallet->getAccount(0));
            auto numberOfOp = 0;

            auto receiverNumberOp = make_receiver([&numberOfOp](const std::shared_ptr<api::Event> &event) {
                numberOfOp += 1;
            });

            pool->getEventBus()->subscribe(dispatcher->getMainExecutionContext(),receiverNumberOp);

            auto bus = account->synchronize();

            auto receiver = make_receiver([=, &numberOfOp](const std::shared_ptr<api::Event> &event) {
                fmt::print("Received event {}\n", api::to_string(event->getCode()));
                if (event->getCode() == api::EventCode::SYNCHRONIZATION_STARTED)
                    return;
                EXPECT_NE(event->getCode(), api::EventCode::SYNCHRONIZATION_FAILED);
                EXPECT_EQ(expectNewOp, (numberOfOp > 0));
                dispatcher->stop();
            });

            bus->subscribe(dispatcher->getMainExecutionContext(),receiver);
            EXPECT_EQ(bus, account->synchronize());
            dispatcher->waitUntilStopped();
            return bus;
        };
        auto b1 = synchronize(true);
        auto b2 = synchronize(false);
        EXPECT_NE(b1, b2);
    }
}

TEST_F(BitcoinLikeWalletSynchronization, TestNetSynchronization) {
    auto pool = newDefaultPool();
    {
        auto wallet = wait(pool->createWallet("e847815f-488a-4301-b67c-378a5e9c8a61", "bitcoin_testnet",
                                              api::DynamicObject::newInstance()));
        std::set<std::string> emittedOperations;
        {
            auto nextIndex = wait(wallet->getNextAccountIndex());
            auto info = wait(wallet->getNextExtendedKeyAccountCreationInfo());
            info.extendedKeys.push_back("tpubDCJarhe7f951cUufTWeGKh1w6hDgdBcJfvQgyMczbxWvwvLdryxZuchuNK3KmTKXwBNH6Ze6tHGrUqvKGJd1VvSZUhTVx58DrLn9hR16DVr");
            EXPECT_EQ(nextIndex, 0);
            auto account = createBitcoinLikeAccount(wallet, nextIndex, info);

            auto receiver = make_receiver([&](const std::shared_ptr<api::Event> &event) {
                if (event->getCode() == api::EventCode::NEW_OPERATION) {
                    auto uid = event->getPayload()->getString(
                            api::Account::EV_NEW_OP_UID).value();
                    EXPECT_EQ(emittedOperations.find(uid), emittedOperations.end());
                }
            });

            pool->getEventBus()->subscribe(dispatcher->getMainExecutionContext(),receiver);

            receiver.reset();
            receiver = make_receiver([=](const std::shared_ptr<api::Event> &event) {
                fmt::print("Received event {}\n", api::to_string(event->getCode()));
                if (event->getCode() == api::EventCode::SYNCHRONIZATION_STARTED)
                    return;
                EXPECT_NE(event->getCode(), api::EventCode::SYNCHRONIZATION_FAILED);
                //EXPECT_EQ(event->getCode(),
                //          api::EventCode::SYNCHRONIZATION_SUCCEED_ON_PREVIOUSLY_EMPTY_ACCOUNT);
                auto amount = wait(account->getBalance());
                auto ops = wait(std::dynamic_pointer_cast<OperationQuery>(account->queryOperations()->complete())->execute());
                std::cout << "Amount: " << amount->toLong() << std::endl;
                std::cout << "Ops: " << ops.size() << std::endl;
                for (auto& op : ops) {
                    std::cout << "op: " << op->asBitcoinLikeOperation()->getTransaction()->getHash() << std::endl;
                    std::cout << " amount: " << op->getAmount()->toLong() << std::endl;
                    std::cout << " type: " << api::to_string(op->getOperationType()) << std::endl;
                }
                dispatcher->stop();
            });

            account->synchronize()->subscribe(dispatcher->getMainExecutionContext(),receiver);

            dispatcher->waitUntilStopped();
        }
    }
}

TEST_F(BitcoinLikeWalletSynchronization, BTCParsingAndSerialization) {
    auto pool = newDefaultPool();
    auto wallet = wait(pool->createWallet("testnet_wallet", "bitcoin", DynamicObject::newInstance()));
    {
        auto strTx = "0100000001c76ec87ab18aa0398a2cbfa68625576fdc3bf276b467fc016010ad675678157d010000006b483045022100e0c4a6449841f4a435b23dc2cd4a6c26a8e12e25783dbd02072332c794012ca202202246876625e726ef9a89f854d59d2aee1787c9807d82d953732e56dbc296657001210212b8ae5848c5ce1422643aed011c9b1cbb7da9a5feba0cad0c130a11e8c4091dffffffff02400d03000000000017a914b800848ce7130e91d55422e1f3d72e813dc250e187b9dc2b00000000001976a9140265b33d266d56c25416d493ccb42992faa3f24a88ac00000000";
        auto tx = BitcoinLikeTransactionApi::parseRawSignedTransaction(wallet->getCurrency(), hex::toByteArray(strTx), 0);
        EXPECT_EQ(hex::toString(tx->serialize()), strTx);
    }
}

TEST_F(BitcoinLikeWalletSynchronization, XSTParsingAndSerialization) {
    auto pool = newDefaultPool();
    auto wallet = wait(pool->createWallet("testnet_wallet", "stealthcoin", DynamicObject::newInstance()));
    {
        auto strTx = "01000000ae71115b01f9d2e90eef51048962392b2ac2cbe476aacb06d750e0794aeb5da5a2afaf19da000000006b483045022100be2faab00cc32a4f6f0249d70f3b6d1fc66bf50dcd6ae011d0287a4a581e5c7a02203cd71132619de1e8a1a84c481529f32d4e29b495f835d5b0da7655203a0a7dda01210269568d231762330f7aed9cf0acfb2512f2d7889eb18adb778589ab5cca66fb3dffffffff0200127a00000000001976a914b4949cd1e6c07826ceee84929a7c6babcccc5ec388ac6094b500000000001976a91417cb2228c292d617f98f4b89b448650e0a480e0788ac00000000";
        auto tx = BitcoinLikeTransactionApi::parseRawSignedTransaction(wallet->getCurrency(), hex::toByteArray(strTx), 0);
        EXPECT_EQ(hex::toString(tx->serialize()), strTx);
    }
    {
        auto strTx = "020000000182e7df21c65cf7e3639317a49574ba258379a2b5441fbde9e0f62155721b108301000000494830450221009e07fe210eac41865fe249ae1133162309f73d3ce27c1ebabc64cc2f3bd8beaa02201a47870fb4f706852eab758e25d5d32a0c021ed1b22ecf793b6e0aaa26ee34a901ffffffff02000000000000000000e230922c000000002321037b513a37787fcc91f78f667c3dbf7d22576cfcc4e533c33f243a21f5dcc3d89eac00000000";
        auto tx = BitcoinLikeTransactionApi::parseRawSignedTransaction(wallet->getCurrency(), hex::toByteArray(strTx), 0);
        EXPECT_EQ(hex::toString(tx->serialize()), strTx);
    }
}