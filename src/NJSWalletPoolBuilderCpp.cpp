// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet_pool.djinni

#include "NJSWalletPoolBuilderCpp.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSWalletPoolBuilder::setHttpClient) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSWalletPoolBuilder::setHttpClient needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_0 = djinni::js::ObjectWrapper<ledger::core::api::HttpClient>::Unwrap(njs_arg_0);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::WalletPoolBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPoolBuilder::setHttpClient : implementation of WalletPoolBuilder is not valid");
    }

    auto result = cpp_impl->setHttpClient(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSWalletPoolBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSWalletPoolBuilder::setWebsocketClient) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSWalletPoolBuilder::setWebsocketClient needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_0 = djinni::js::ObjectWrapper<ledger::core::api::WebSocketClient>::Unwrap(njs_arg_0);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::WalletPoolBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPoolBuilder::setWebsocketClient : implementation of WalletPoolBuilder is not valid");
    }

    auto result = cpp_impl->setWebsocketClient(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSWalletPoolBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSWalletPoolBuilder::setPathResolver) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSWalletPoolBuilder::setPathResolver needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_0 = djinni::js::ObjectWrapper<ledger::core::api::PathResolver>::Unwrap(njs_arg_0);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::WalletPoolBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPoolBuilder::setPathResolver : implementation of WalletPoolBuilder is not valid");
    }

    auto result = cpp_impl->setPathResolver(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSWalletPoolBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSWalletPoolBuilder::setLogPrinter) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSWalletPoolBuilder::setLogPrinter needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_0 = djinni::js::ObjectWrapper<ledger::core::api::LogPrinter>::Unwrap(njs_arg_0);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::WalletPoolBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPoolBuilder::setLogPrinter : implementation of WalletPoolBuilder is not valid");
    }

    auto result = cpp_impl->setLogPrinter(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSWalletPoolBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSWalletPoolBuilder::setThreadDispatcher) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSWalletPoolBuilder::setThreadDispatcher needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_0 = djinni::js::ObjectWrapper<ledger::core::api::ThreadDispatcher>::Unwrap(njs_arg_0);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::WalletPoolBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPoolBuilder::setThreadDispatcher : implementation of WalletPoolBuilder is not valid");
    }

    auto result = cpp_impl->setThreadDispatcher(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSWalletPoolBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSWalletPoolBuilder::setName) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSWalletPoolBuilder::setName needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::WalletPoolBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPoolBuilder::setName : implementation of WalletPoolBuilder is not valid");
    }

    auto result = cpp_impl->setName(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSWalletPoolBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSWalletPoolBuilder::setPassword) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSWalletPoolBuilder::setPassword needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::WalletPoolBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPoolBuilder::setPassword : implementation of WalletPoolBuilder is not valid");
    }

    auto result = cpp_impl->setPassword(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSWalletPoolBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSWalletPoolBuilder::setRandomNumberGenerator) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSWalletPoolBuilder::setRandomNumberGenerator needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_0 = djinni::js::ObjectWrapper<ledger::core::api::RandomNumberGenerator>::Unwrap(njs_arg_0);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::WalletPoolBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPoolBuilder::setRandomNumberGenerator : implementation of WalletPoolBuilder is not valid");
    }

    auto result = cpp_impl->setRandomNumberGenerator(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSWalletPoolBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSWalletPoolBuilder::setDatabaseBackend) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSWalletPoolBuilder::setDatabaseBackend needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_0 = djinni::js::ObjectWrapper<ledger::core::api::DatabaseBackend>::Unwrap(njs_arg_0);
    if(!arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSDatabaseBackend failed");
    }


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::WalletPoolBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPoolBuilder::setDatabaseBackend : implementation of WalletPoolBuilder is not valid");
    }

    auto result = cpp_impl->setDatabaseBackend(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSWalletPoolBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSWalletPoolBuilder::setConfiguration) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSWalletPoolBuilder::setConfiguration needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_0 = djinni::js::ObjectWrapper<ledger::core::api::DynamicObject>::Unwrap(njs_arg_0);
    if(!arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSDynamicObject failed");
    }


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::WalletPoolBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPoolBuilder::setConfiguration : implementation of WalletPoolBuilder is not valid");
    }

    auto result = cpp_impl->setConfiguration(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSWalletPoolBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSWalletPoolBuilder::build) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWalletPoolBuilder::build needs 0 arguments");
    }

    //Check if parameters have correct types

    //Create promise and set it into Callback
    auto arg_0_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSWalletPoolCallback *njs_ptr_arg_0 = new NJSWalletPoolCallback(arg_0_resolver);
    std::shared_ptr<NJSWalletPoolCallback> arg_0(njs_ptr_arg_0);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::WalletPoolBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPoolBuilder::build : implementation of WalletPoolBuilder is not valid");
    }
    cpp_impl->build(arg_0);
    info.GetReturnValue().Set(arg_0_resolver->GetPromise());
}
NAN_METHOD(NJSWalletPoolBuilder::createInstance) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWalletPoolBuilder::createInstance needs 0 arguments");
    }

    //Check if parameters have correct types

    auto result = ledger::core::api::WalletPoolBuilder::createInstance();

    //Wrap result in node object
    auto arg_0 = NJSWalletPoolBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSWalletPoolBuilder::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSWalletPoolBuilder function can only be called as constructor (use New)");
    }

    //Check if NJSWalletPoolBuilder::New called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWalletPoolBuilder::New needs same number of arguments as ledger::core::api::WalletPoolBuilder::createInstance method");
    }

    //Unwrap objects to get C++ classes

    //Call factory
    auto cpp_instance = ledger::core::api::WalletPoolBuilder::createInstance();
    djinni::js::ObjectWrapper<ledger::core::api::WalletPoolBuilder>::Wrap(cpp_instance, info.This());
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSWalletPoolBuilder::WalletPoolBuilder_prototype;

Local<Object> NJSWalletPoolBuilder::wrap(const std::shared_ptr<ledger::core::api::WalletPoolBuilder> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(WalletPoolBuilder_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        djinni::js::ObjectWrapper<ledger::core::api::WalletPoolBuilder>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSWalletPoolBuilder::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSWalletPoolBuilder::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<ledger::core::api::WalletPoolBuilder>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSWalletPoolBuilder::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSWalletPoolBuilder::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSWalletPoolBuilder").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"setHttpClient", setHttpClient);
    Nan::SetPrototypeMethod(func_template,"setWebsocketClient", setWebsocketClient);
    Nan::SetPrototypeMethod(func_template,"setPathResolver", setPathResolver);
    Nan::SetPrototypeMethod(func_template,"setLogPrinter", setLogPrinter);
    Nan::SetPrototypeMethod(func_template,"setThreadDispatcher", setThreadDispatcher);
    Nan::SetPrototypeMethod(func_template,"setName", setName);
    Nan::SetPrototypeMethod(func_template,"setPassword", setPassword);
    Nan::SetPrototypeMethod(func_template,"setRandomNumberGenerator", setRandomNumberGenerator);
    Nan::SetPrototypeMethod(func_template,"setDatabaseBackend", setDatabaseBackend);
    Nan::SetPrototypeMethod(func_template,"setConfiguration", setConfiguration);
    Nan::SetPrototypeMethod(func_template,"build", build);
    Nan::SetPrototypeMethod(func_template,"createInstance", createInstance);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    WalletPoolBuilder_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSWalletPoolBuilder").ToLocalChecked(), func_template->GetFunction());
}