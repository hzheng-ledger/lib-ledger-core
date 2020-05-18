// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#ifndef DJINNI_GENERATED_NJSCOSMOSLIKETRANSACTION_HPP
#define DJINNI_GENERATED_NJSCOSMOSLIKETRANSACTION_HPP


#include "NJSAmountCpp.hpp"
#include "NJSBigIntCpp.hpp"
#include "NJSCosmosLikeMessageCpp.hpp"
#include <chrono>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../include/CosmosLikeTransaction.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSCosmosLikeTransaction final {
public:

    static void Initialize(Local<Object> target);
    NJSCosmosLikeTransaction() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::CosmosLikeTransaction> &object);
    static Nan::Persistent<ObjectTemplate> CosmosLikeTransaction_prototype;

private:
    /** Get the time when the transaction was issued or the time of the block including this transaction */
    static NAN_METHOD(getDate);

    /** Get Fee (in drop) */
    static NAN_METHOD(getFee);

    /** Get gas Wanted (maximum gas advertised in transaction) */
    static NAN_METHOD(getGas);

    /** Get gas used (gas actually used in the transaction) */
    static NAN_METHOD(getGasUsed);

    /** Get gas Wanted (in BigInt form) */
    static NAN_METHOD(getGasWanted);

    /** Get the hash of the transaction. */
    static NAN_METHOD(getHash);

    /** Get memo */
    static NAN_METHOD(getMemo);

    /** Get the list of messages */
    static NAN_METHOD(getMessages);

    /** Get Signing public Key */
    static NAN_METHOD(getSigningPubKey);

    /** Serialize the transaction to be signed */
    static NAN_METHOD(serializeForSignature);

    /** Set signature of transaction, when a signature is set it can be broadcasted */
    static NAN_METHOD(setSignature);

    static NAN_METHOD(setDERSignature);

    /**
     * Serialize the transaction to be broadcast
     * @param mode The supported broadcast modes include
     *        "block"(return after tx commit), (https://docs.cosmos.network/master/basics/tx-lifecycle.html#commit)
     *        "sync"(return afer CheckTx), (https://docs.cosmos.network/master/basics/tx-lifecycle.html#types-of-checks) and
     *        "async"(return right away).
     * @return string the json payload to broadcast on the network
     */
    static NAN_METHOD(serializeForBroadcast);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSCOSMOSLIKETRANSACTION_HPP
