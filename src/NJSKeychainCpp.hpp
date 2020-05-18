// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#ifndef DJINNI_GENERATED_NJSKEYCHAIN_HPP
#define DJINNI_GENERATED_NJSKEYCHAIN_HPP


#include <memory>
#include <string>

#include <nan.h>
#include <node.h>
#include "../include/Keychain.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSKeychain final {
public:

    static void Initialize(Local<Object> target);
    NJSKeychain() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::Keychain> &object);
    static Nan::Persistent<ObjectTemplate> Keychain_prototype;

private:
    /** Check whether an address is contained. */
    static NAN_METHOD(contains);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSKEYCHAIN_HPP
