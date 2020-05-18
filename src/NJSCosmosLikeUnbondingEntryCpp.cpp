// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#include "NJSCosmosLikeUnbondingEntryCpp.hpp"
#include "NJSObjectWrapper.hpp"
#include "NJSHexUtils.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSCosmosLikeUnbondingEntry::getCreationHeight) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSCosmosLikeUnbondingEntry::getCreationHeight needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::CosmosLikeUnbondingEntry>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSCosmosLikeUnbondingEntry::getCreationHeight : implementation of CosmosLikeUnbondingEntry is not valid");
    }

    auto result = cpp_impl->getCreationHeight();

    //Wrap result in node object
    auto arg_0 = NJSBigInt::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSCosmosLikeUnbondingEntry::getCompletionTime) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSCosmosLikeUnbondingEntry::getCompletionTime needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::CosmosLikeUnbondingEntry>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSCosmosLikeUnbondingEntry::getCompletionTime : implementation of CosmosLikeUnbondingEntry is not valid");
    }

    auto result = cpp_impl->getCompletionTime();

    //Wrap result in node object
    auto date_arg_0 = chrono::duration_cast<chrono::milliseconds>(result.time_since_epoch()).count();
    auto arg_0 = Nan::New<Date>(date_arg_0).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSCosmosLikeUnbondingEntry::getInitialBalance) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSCosmosLikeUnbondingEntry::getInitialBalance needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::CosmosLikeUnbondingEntry>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSCosmosLikeUnbondingEntry::getInitialBalance : implementation of CosmosLikeUnbondingEntry is not valid");
    }

    auto result = cpp_impl->getInitialBalance();

    //Wrap result in node object
    auto arg_0 = NJSBigInt::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSCosmosLikeUnbondingEntry::getBalance) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSCosmosLikeUnbondingEntry::getBalance needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::CosmosLikeUnbondingEntry>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSCosmosLikeUnbondingEntry::getBalance : implementation of CosmosLikeUnbondingEntry is not valid");
    }

    auto result = cpp_impl->getBalance();

    //Wrap result in node object
    auto arg_0 = NJSBigInt::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSCosmosLikeUnbondingEntry::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSCosmosLikeUnbondingEntry function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSCosmosLikeUnbondingEntry::CosmosLikeUnbondingEntry_prototype;

Local<Object> NJSCosmosLikeUnbondingEntry::wrap(const std::shared_ptr<ledger::core::api::CosmosLikeUnbondingEntry> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(CosmosLikeUnbondingEntry_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::CosmosLikeUnbondingEntry>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSCosmosLikeUnbondingEntry::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSCosmosLikeUnbondingEntry::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<ledger::core::api::CosmosLikeUnbondingEntry>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSCosmosLikeUnbondingEntry::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSCosmosLikeUnbondingEntry::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSCosmosLikeUnbondingEntry").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"getCreationHeight", getCreationHeight);
    Nan::SetPrototypeMethod(func_template,"getCompletionTime", getCompletionTime);
    Nan::SetPrototypeMethod(func_template,"getInitialBalance", getInitialBalance);
    Nan::SetPrototypeMethod(func_template,"getBalance", getBalance);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    CosmosLikeUnbondingEntry_prototype.Reset(objectTemplate);

    //Add template to target
    Nan::Set(target, Nan::New<String>("NJSCosmosLikeUnbondingEntry").ToLocalChecked(), Nan::GetFunction(func_template).ToLocalChecked());
}
