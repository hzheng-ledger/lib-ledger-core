// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tezos_like_wallet.djinni

#ifndef DJINNI_GENERATED_NJSTEZOSLIKEORIGINATEDACCOUNT_HPP
#define DJINNI_GENERATED_NJSTEZOSLIKEORIGINATEDACCOUNT_HPP


#include "../include/../utils/optional.hpp"
#include "../include/TimePeriod.hpp"
#include "NJSAmountCallback.hpp"
#include "NJSAmountListCallback.hpp"
#include "NJSOperationQueryCpp.hpp"
#include "NJSTezosLikeTransactionBuilderCpp.hpp"
#include <chrono>
#include <memory>
#include <string>

#include <nan.h>
#include <node.h>
#include "../include/TezosLikeOriginatedAccount.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSTezosLikeOriginatedAccount final {
public:

    static void Initialize(Local<Object> target);
    NJSTezosLikeOriginatedAccount() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::TezosLikeOriginatedAccount> &object);
    static Nan::Persistent<ObjectTemplate> TezosLikeOriginatedAccount_prototype;

private:
    /** Get address of originated account (prefixed with KT) */
    static NAN_METHOD(getAddress);

    /**
     * Get publicKey of originated account
     * Could be empty if not yet revealed
     */
    static NAN_METHOD(getPublicKey);

    /** Get balance of originated account */
    static NAN_METHOD(getBalance);

    /** Get balance history of originated account */
    static NAN_METHOD(getBalanceHistory);

    /**
     * Know if possible to spend from this account
     * By default originations from libcore set it to true
     */
    static NAN_METHOD(isSpendable);

    /**
     * Know if possible to delegate from this account
     * By default originations from libcore set it to true
     */
    static NAN_METHOD(isDelegatable);

    /** Get related operations to account */
    static NAN_METHOD(queryOperations);

    /** Get builder to construct transaction on originated account */
    static NAN_METHOD(buildTransaction);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSTEZOSLIKEORIGINATEDACCOUNT_HPP