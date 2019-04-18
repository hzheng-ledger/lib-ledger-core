// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from path_resolver.djinni

#include "NJSPathResolver.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;

std::string NJSPathResolver::resolveDatabasePath(const std::string & path)
{
    Nan::HandleScope scope;
    //Wrap parameters
    auto arg_0 = Nan::New<String>(path).ToLocalChecked();
    Handle<Value> args[1] = {arg_0};
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSPathResolver::resolveDatabasePath fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("resolveDatabasePath").ToLocalChecked()).ToLocalChecked();
    auto result_resolveDatabasePath = Nan::CallAsFunction(calling_funtion->ToObject(),local_njs_impl,1,args);
    if(result_resolveDatabasePath.IsEmpty())
    {
        Nan::ThrowError("NJSPathResolver::resolveDatabasePath call failed");
    }
    auto checkedResult_resolveDatabasePath = result_resolveDatabasePath.ToLocalChecked();
    String::Utf8Value string_fResult_resolveDatabasePath(checkedResult_resolveDatabasePath->ToString());
    auto fResult_resolveDatabasePath = std::string(*string_fResult_resolveDatabasePath);
    return fResult_resolveDatabasePath;
}

std::string NJSPathResolver::resolveLogFilePath(const std::string & path)
{
    Nan::HandleScope scope;
    //Wrap parameters
    auto arg_0 = Nan::New<String>(path).ToLocalChecked();
    Handle<Value> args[1] = {arg_0};
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSPathResolver::resolveLogFilePath fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("resolveLogFilePath").ToLocalChecked()).ToLocalChecked();
    auto result_resolveLogFilePath = Nan::CallAsFunction(calling_funtion->ToObject(),local_njs_impl,1,args);
    if(result_resolveLogFilePath.IsEmpty())
    {
        Nan::ThrowError("NJSPathResolver::resolveLogFilePath call failed");
    }
    auto checkedResult_resolveLogFilePath = result_resolveLogFilePath.ToLocalChecked();
    String::Utf8Value string_fResult_resolveLogFilePath(checkedResult_resolveLogFilePath->ToString());
    auto fResult_resolveLogFilePath = std::string(*string_fResult_resolveLogFilePath);
    return fResult_resolveLogFilePath;
}

std::string NJSPathResolver::resolvePreferencesPath(const std::string & path)
{
    Nan::HandleScope scope;
    //Wrap parameters
    auto arg_0 = Nan::New<String>(path).ToLocalChecked();
    Handle<Value> args[1] = {arg_0};
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSPathResolver::resolvePreferencesPath fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("resolvePreferencesPath").ToLocalChecked()).ToLocalChecked();
    auto result_resolvePreferencesPath = Nan::CallAsFunction(calling_funtion->ToObject(),local_njs_impl,1,args);
    if(result_resolvePreferencesPath.IsEmpty())
    {
        Nan::ThrowError("NJSPathResolver::resolvePreferencesPath call failed");
    }
    auto checkedResult_resolvePreferencesPath = result_resolvePreferencesPath.ToLocalChecked();
    String::Utf8Value string_fResult_resolvePreferencesPath(checkedResult_resolvePreferencesPath->ToString());
    auto fResult_resolvePreferencesPath = std::string(*string_fResult_resolvePreferencesPath);
    return fResult_resolvePreferencesPath;
}

NAN_METHOD(NJSPathResolver::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSPathResolver function can only be called as constructor (use New)");
    }

    if(!info[0]->IsObject())
    {
        return Nan::ThrowError("NJSPathResolver::New requires an implementation from node");
    }
    auto node_instance = std::make_shared<NJSPathResolver>(info[0]->ToObject());
    djinni::js::ObjectWrapper<NJSPathResolver>::Wrap(node_instance, info.This());
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSPathResolver::PathResolver_prototype;

Local<Object> NJSPathResolver::wrap(const std::shared_ptr<ledger::core::api::PathResolver> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(PathResolver_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        djinni::js::ObjectWrapper<ledger::core::api::PathResolver>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSPathResolver::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

void NJSPathResolver::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSPathResolver::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSPathResolver").ToLocalChecked());
    Nan::SetPrototypeMethod(func_template,"New", New);
    //Set object prototype
    PathResolver_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSPathResolver").ToLocalChecked(), func_template->GetFunction());
}