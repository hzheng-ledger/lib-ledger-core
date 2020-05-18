// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#include "NJSCosmosLikeRewardCpp.hpp"
#include "NJSObjectWrapper.hpp"
#include "NJSHexUtils.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSCosmosLikeReward::getDelegatorAddress) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSCosmosLikeReward::getDelegatorAddress needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::CosmosLikeReward>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSCosmosLikeReward::getDelegatorAddress : implementation of CosmosLikeReward is not valid");
    }

    auto result = cpp_impl->getDelegatorAddress();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSCosmosLikeReward::getValidatorAddress) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSCosmosLikeReward::getValidatorAddress needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::CosmosLikeReward>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSCosmosLikeReward::getValidatorAddress : implementation of CosmosLikeReward is not valid");
    }

    auto result = cpp_impl->getValidatorAddress();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSCosmosLikeReward::getRewardAmount) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSCosmosLikeReward::getRewardAmount needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::CosmosLikeReward>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSCosmosLikeReward::getRewardAmount : implementation of CosmosLikeReward is not valid");
    }

    auto result = cpp_impl->getRewardAmount();

    //Wrap result in node object
    auto arg_0 = NJSAmount::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSCosmosLikeReward::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSCosmosLikeReward function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSCosmosLikeReward::CosmosLikeReward_prototype;

Local<Object> NJSCosmosLikeReward::wrap(const std::shared_ptr<ledger::core::api::CosmosLikeReward> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(CosmosLikeReward_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::CosmosLikeReward>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSCosmosLikeReward::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSCosmosLikeReward::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<ledger::core::api::CosmosLikeReward>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSCosmosLikeReward::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSCosmosLikeReward::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSCosmosLikeReward").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"getDelegatorAddress", getDelegatorAddress);
    Nan::SetPrototypeMethod(func_template,"getValidatorAddress", getValidatorAddress);
    Nan::SetPrototypeMethod(func_template,"getRewardAmount", getRewardAmount);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    CosmosLikeReward_prototype.Reset(objectTemplate);

    //Add template to target
    Nan::Set(target, Nan::New<String>("NJSCosmosLikeReward").ToLocalChecked(), Nan::GetFunction(func_template).ToLocalChecked());
}
