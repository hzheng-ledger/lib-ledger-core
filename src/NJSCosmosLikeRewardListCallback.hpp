// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_NJSCOSMOSLIKEREWARDLISTCALLBACK_HPP
#define DJINNI_GENERATED_NJSCOSMOSLIKEREWARDLISTCALLBACK_HPP


#include "../include/../utils/optional.hpp"
#include "../include/CosmosLikeReward.hpp"
#include "../include/Error.hpp"
#include "NJSCosmosLikeRewardCpp.hpp"
#include <memory>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../include/CosmosLikeRewardListCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSCosmosLikeRewardListCallback: public ledger::core::api::CosmosLikeRewardListCallback {
public:

    static void Initialize(Local<Object> target);

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::CosmosLikeRewardListCallback> &object);
    static Nan::Persistent<ObjectTemplate> CosmosLikeRewardListCallback_prototype;
    ~NJSCosmosLikeRewardListCallback()
    {
        pers_resolver.Reset();
    };
    NJSCosmosLikeRewardListCallback(Local<Promise::Resolver> resolver){pers_resolver.Reset(resolver);};

    /**
     * Method triggered when main task complete.
     * @params result optional of type list<T>, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    void onCallback(const std::experimental::optional<std::vector<std::shared_ptr<::ledger::core::api::CosmosLikeReward>>> & result, const std::experimental::optional<::ledger::core::api::Error> & error);

private:
    /**
     * Method triggered when main task complete.
     * @params result optional of type list<T>, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    static NAN_METHOD(onCallback);

    static NAN_METHOD(New);

    Nan::Persistent<Promise::Resolver> pers_resolver;
};
#endif //DJINNI_GENERATED_NJSCOSMOSLIKEREWARDLISTCALLBACK_HPP
