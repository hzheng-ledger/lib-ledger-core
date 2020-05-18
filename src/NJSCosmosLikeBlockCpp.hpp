// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#ifndef DJINNI_GENERATED_NJSCOSMOSLIKEBLOCK_HPP
#define DJINNI_GENERATED_NJSCOSMOSLIKEBLOCK_HPP


#include <chrono>
#include <cstdint>
#include <memory>
#include <string>

#include <nan.h>
#include <node.h>
#include "../include/CosmosLikeBlock.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSCosmosLikeBlock final {
public:

    static void Initialize(Local<Object> target);
    NJSCosmosLikeBlock() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::CosmosLikeBlock> &object);
    static Nan::Persistent<ObjectTemplate> CosmosLikeBlock_prototype;

private:
    /**
     *Hash of block
     *@return string representing hash of this block
     */
    static NAN_METHOD(getHash);

    /**
     *Height of block in blockchain
     *@return 64 bits integer, height of block
     */
    static NAN_METHOD(getHeight);

    /**
     *Timestamp when block was mined
     *@return Date object, date when block was appended to blockchain
     */
    static NAN_METHOD(getTime);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSCOSMOSLIKEBLOCK_HPP
