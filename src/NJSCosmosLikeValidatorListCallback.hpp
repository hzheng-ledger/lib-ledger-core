// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_NJSCOSMOSLIKEVALIDATORLISTCALLBACK_HPP
#define DJINNI_GENERATED_NJSCOSMOSLIKEVALIDATORLISTCALLBACK_HPP


#include "../include/../utils/optional.hpp"
#include "../include/CosmosLikeValidator.hpp"
#include "../include/Error.hpp"
#include <chrono>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../include/CosmosLikeValidatorListCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSCosmosLikeValidatorListCallback: public ledger::core::api::CosmosLikeValidatorListCallback {
public:

    static void Initialize(Local<Object> target);

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::CosmosLikeValidatorListCallback> &object);
    static Nan::Persistent<ObjectTemplate> CosmosLikeValidatorListCallback_prototype;
    ~NJSCosmosLikeValidatorListCallback()
    {
        pers_resolver.Reset();
    };
    NJSCosmosLikeValidatorListCallback(Local<Promise::Resolver> resolver){pers_resolver.Reset(resolver);};

    /**
     * Method triggered when main task complete.
     * @params result optional of type list<T>, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    void onCallback(const std::experimental::optional<std::vector<::ledger::core::api::CosmosLikeValidator>> & result, const std::experimental::optional<::ledger::core::api::Error> & error);

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
#endif //DJINNI_GENERATED_NJSCOSMOSLIKEVALIDATORLISTCALLBACK_HPP
