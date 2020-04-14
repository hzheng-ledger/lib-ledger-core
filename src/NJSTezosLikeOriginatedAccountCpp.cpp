// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tezos_like_wallet.djinni

#include "NJSTezosLikeOriginatedAccountCpp.hpp"
#include "NJSObjectWrapper.hpp"
#include "NJSHexUtils.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSTezosLikeOriginatedAccount::getAddress) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSTezosLikeOriginatedAccount::getAddress needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeOriginatedAccount>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTezosLikeOriginatedAccount::getAddress : implementation of TezosLikeOriginatedAccount is not valid");
    }

    auto result = cpp_impl->getAddress();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSTezosLikeOriginatedAccount::getPublicKey) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSTezosLikeOriginatedAccount::getPublicKey needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeOriginatedAccount>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTezosLikeOriginatedAccount::getPublicKey : implementation of TezosLikeOriginatedAccount is not valid");
    }

    auto result = cpp_impl->getPublicKey();

    //Wrap result in node object
    Local<Value> arg_0;
    if(result)
    {
        auto arg_0_optional = (result).value();
        auto arg_0_tmp = Nan::New<String>(arg_0_optional).ToLocalChecked();
        arg_0 = arg_0_tmp;
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSTezosLikeOriginatedAccount::getBalance) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSTezosLikeOriginatedAccount::getBalance needs 0 arguments");
    }

    //Check if parameters have correct types

    //Create promise and set it into Callback
    auto arg_0_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSAmountCallback *njs_ptr_arg_0 = new NJSAmountCallback(arg_0_resolver);
    std::shared_ptr<NJSAmountCallback> arg_0(njs_ptr_arg_0);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeOriginatedAccount>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTezosLikeOriginatedAccount::getBalance : implementation of TezosLikeOriginatedAccount is not valid");
    }
    cpp_impl->getBalance(arg_0);
    info.GetReturnValue().Set(arg_0_resolver->GetPromise());
}
NAN_METHOD(NJSTezosLikeOriginatedAccount::getBalanceHistory) {

    //Check if method called with right number of arguments
    if(info.Length() != 3)
    {
        return Nan::ThrowError("NJSTezosLikeOriginatedAccount::getBalanceHistory needs 3 arguments");
    }

    //Check if parameters have correct types
    auto time_arg_0 = Nan::To<int32_t>(info[0]).FromJust();
    auto arg_0 = chrono::system_clock::time_point(chrono::milliseconds(time_arg_0));
    auto time_arg_1 = Nan::To<int32_t>(info[1]).FromJust();
    auto arg_1 = chrono::system_clock::time_point(chrono::milliseconds(time_arg_1));
    auto arg_2 = (ledger::core::api::TimePeriod)Nan::To<int>(info[2]).FromJust();

    //Create promise and set it into Callback
    auto arg_3_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSAmountListCallback *njs_ptr_arg_3 = new NJSAmountListCallback(arg_3_resolver);
    std::shared_ptr<NJSAmountListCallback> arg_3(njs_ptr_arg_3);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeOriginatedAccount>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTezosLikeOriginatedAccount::getBalanceHistory : implementation of TezosLikeOriginatedAccount is not valid");
    }
    cpp_impl->getBalanceHistory(arg_0,arg_1,arg_2,arg_3);
    info.GetReturnValue().Set(arg_3_resolver->GetPromise());
}
NAN_METHOD(NJSTezosLikeOriginatedAccount::isSpendable) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSTezosLikeOriginatedAccount::isSpendable needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeOriginatedAccount>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTezosLikeOriginatedAccount::isSpendable : implementation of TezosLikeOriginatedAccount is not valid");
    }

    auto result = cpp_impl->isSpendable();

    //Wrap result in node object
    auto arg_0 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSTezosLikeOriginatedAccount::isDelegatable) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSTezosLikeOriginatedAccount::isDelegatable needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeOriginatedAccount>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTezosLikeOriginatedAccount::isDelegatable : implementation of TezosLikeOriginatedAccount is not valid");
    }

    auto result = cpp_impl->isDelegatable();

    //Wrap result in node object
    auto arg_0 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSTezosLikeOriginatedAccount::queryOperations) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSTezosLikeOriginatedAccount::queryOperations needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeOriginatedAccount>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTezosLikeOriginatedAccount::queryOperations : implementation of TezosLikeOriginatedAccount is not valid");
    }

    auto result = cpp_impl->queryOperations();

    //Wrap result in node object
    auto arg_0 = NJSOperationQuery::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSTezosLikeOriginatedAccount::buildTransaction) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSTezosLikeOriginatedAccount::buildTransaction needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeOriginatedAccount>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTezosLikeOriginatedAccount::buildTransaction : implementation of TezosLikeOriginatedAccount is not valid");
    }

    auto result = cpp_impl->buildTransaction();

    //Wrap result in node object
    auto arg_0 = NJSTezosLikeTransactionBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSTezosLikeOriginatedAccount::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSTezosLikeOriginatedAccount function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSTezosLikeOriginatedAccount::TezosLikeOriginatedAccount_prototype;

Local<Object> NJSTezosLikeOriginatedAccount::wrap(const std::shared_ptr<ledger::core::api::TezosLikeOriginatedAccount> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(TezosLikeOriginatedAccount_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::TezosLikeOriginatedAccount>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSTezosLikeOriginatedAccount::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSTezosLikeOriginatedAccount::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeOriginatedAccount>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSTezosLikeOriginatedAccount::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSTezosLikeOriginatedAccount::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSTezosLikeOriginatedAccount").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"getAddress", getAddress);
    Nan::SetPrototypeMethod(func_template,"getPublicKey", getPublicKey);
    Nan::SetPrototypeMethod(func_template,"getBalance", getBalance);
    Nan::SetPrototypeMethod(func_template,"getBalanceHistory", getBalanceHistory);
    Nan::SetPrototypeMethod(func_template,"isSpendable", isSpendable);
    Nan::SetPrototypeMethod(func_template,"isDelegatable", isDelegatable);
    Nan::SetPrototypeMethod(func_template,"queryOperations", queryOperations);
    Nan::SetPrototypeMethod(func_template,"buildTransaction", buildTransaction);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    TezosLikeOriginatedAccount_prototype.Reset(objectTemplate);

    //Add template to target
    Nan::Set(target, Nan::New<String>("NJSTezosLikeOriginatedAccount").ToLocalChecked(), Nan::GetFunction(func_template).ToLocalChecked());
}