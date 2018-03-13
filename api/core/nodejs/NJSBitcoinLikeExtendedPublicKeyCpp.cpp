// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from addresses.djinni

#include "NJSBitcoinLikeExtendedPublicKeyCpp.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSBitcoinLikeExtendedPublicKey::derive) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBitcoinLikeExtendedPublicKey::derive needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeExtendedPublicKey* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeExtendedPublicKey>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeExtendedPublicKey::derive : implementation of BitcoinLikeExtendedPublicKey is not valid");
    }

    auto result = cpp_impl->derive(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSBitcoinLikeAddress::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeAddress>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSBitcoinLikeExtendedPublicKey::toBase58) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeExtendedPublicKey::toBase58 needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeExtendedPublicKey* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeExtendedPublicKey>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeExtendedPublicKey::toBase58 : implementation of BitcoinLikeExtendedPublicKey is not valid");
    }

    auto result = cpp_impl->toBase58();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeExtendedPublicKey::getRootPath) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeExtendedPublicKey::getRootPath needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeExtendedPublicKey* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeExtendedPublicKey>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeExtendedPublicKey::getRootPath : implementation of BitcoinLikeExtendedPublicKey is not valid");
    }

    auto result = cpp_impl->getRootPath();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeExtendedPublicKey::fromBase58) {

    //Check if method called with right number of arguments
    if(info.Length() != 3)
    {
        return Nan::ThrowError("NJSBitcoinLikeExtendedPublicKey::fromBase58 needs 3 arguments");
    }

    //Check if parameters have correct types

    auto field_arg_0_1 = Nan::Get(info[0]->ToObject(), Nan::New<String>("Identifier").ToLocalChecked()).ToLocalChecked();
    String::Utf8Value string_arg_0_1(field_arg_0_1->ToString());
    auto arg_0_1 = std::string(*string_arg_0_1);

    auto field_arg_0_2 = Nan::Get(info[0]->ToObject(), Nan::New<String>("P2PKHVersion").ToLocalChecked()).ToLocalChecked();
    vector<uint8_t> arg_0_2;
    Local<Array> arg_0_2_container = Local<Array>::Cast(field_arg_0_2);
    for(uint32_t arg_0_2_id = 0; arg_0_2_id < arg_0_2_container->Length(); arg_0_2_id++)
    {
        if(arg_0_2_container->Get(arg_0_2_id)->IsUint32())
        {
            auto arg_0_2_elem = Nan::To<uint32_t>(arg_0_2_container->Get(arg_0_2_id)).FromJust();
            arg_0_2.emplace_back(arg_0_2_elem);
        }
    }


    auto field_arg_0_3 = Nan::Get(info[0]->ToObject(), Nan::New<String>("P2SHVersion").ToLocalChecked()).ToLocalChecked();
    vector<uint8_t> arg_0_3;
    Local<Array> arg_0_3_container = Local<Array>::Cast(field_arg_0_3);
    for(uint32_t arg_0_3_id = 0; arg_0_3_id < arg_0_3_container->Length(); arg_0_3_id++)
    {
        if(arg_0_3_container->Get(arg_0_3_id)->IsUint32())
        {
            auto arg_0_3_elem = Nan::To<uint32_t>(arg_0_3_container->Get(arg_0_3_id)).FromJust();
            arg_0_3.emplace_back(arg_0_3_elem);
        }
    }


    auto field_arg_0_4 = Nan::Get(info[0]->ToObject(), Nan::New<String>("XPUBVersion").ToLocalChecked()).ToLocalChecked();
    vector<uint8_t> arg_0_4;
    Local<Array> arg_0_4_container = Local<Array>::Cast(field_arg_0_4);
    for(uint32_t arg_0_4_id = 0; arg_0_4_id < arg_0_4_container->Length(); arg_0_4_id++)
    {
        if(arg_0_4_container->Get(arg_0_4_id)->IsUint32())
        {
            auto arg_0_4_elem = Nan::To<uint32_t>(arg_0_4_container->Get(arg_0_4_id)).FromJust();
            arg_0_4.emplace_back(arg_0_4_elem);
        }
    }


    auto field_arg_0_5 = Nan::Get(info[0]->ToObject(), Nan::New<String>("FeePolicy").ToLocalChecked()).ToLocalChecked();
    auto arg_0_5 = (ledger::core::api::BitcoinLikeFeePolicy)Nan::To<int>(field_arg_0_5).FromJust();

    auto field_arg_0_6 = Nan::Get(info[0]->ToObject(), Nan::New<String>("DustAmount").ToLocalChecked()).ToLocalChecked();
    auto arg_0_6 = Nan::To<int64_t>(field_arg_0_6).FromJust();

    auto field_arg_0_7 = Nan::Get(info[0]->ToObject(), Nan::New<String>("MessagePrefix").ToLocalChecked()).ToLocalChecked();
    String::Utf8Value string_arg_0_7(field_arg_0_7->ToString());
    auto arg_0_7 = std::string(*string_arg_0_7);

    auto field_arg_0_8 = Nan::Get(info[0]->ToObject(), Nan::New<String>("UsesTimestampedTransaction").ToLocalChecked()).ToLocalChecked();
    auto arg_0_8 = Nan::To<bool>(field_arg_0_8).FromJust();
    BitcoinLikeNetworkParameters arg_0(arg_0_1, arg_0_2, arg_0_3, arg_0_4, arg_0_5, arg_0_6, arg_0_7, arg_0_8);

    String::Utf8Value string_arg_1(info[1]->ToString());
    auto arg_1 = std::string(*string_arg_1);
    String::Utf8Value string_arg_2(info[2]->ToString());
    auto arg_2 = std::string(*string_arg_2);

    auto result = BitcoinLikeExtendedPublicKey::fromBase58(arg_0,arg_1,arg_2);

    //Wrap result in node object
    auto arg_3_wrap = NJSBitcoinLikeExtendedPublicKey::wrap(result);
    auto arg_3 = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeExtendedPublicKey>(arg_3_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_3);
}

NAN_METHOD(NJSBitcoinLikeExtendedPublicKey::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSBitcoinLikeExtendedPublicKey function can only be called as constructor (use New)");
    }

    //Check if NJSBitcoinLikeExtendedPublicKey::New called with right number of arguments
    if(info.Length() != 3)
    {
        return Nan::ThrowError("NJSBitcoinLikeExtendedPublicKey::New needs same number of arguments as ledger::core::api::BitcoinLikeExtendedPublicKey::fromBase58 method");
    }

    //Unwrap objects to get C++ classes

    auto field_arg_0_1 = Nan::Get(info[0]->ToObject(), Nan::New<String>("Identifier").ToLocalChecked()).ToLocalChecked();
    String::Utf8Value string_arg_0_1(field_arg_0_1->ToString());
    auto arg_0_1 = std::string(*string_arg_0_1);

    auto field_arg_0_2 = Nan::Get(info[0]->ToObject(), Nan::New<String>("P2PKHVersion").ToLocalChecked()).ToLocalChecked();
    vector<uint8_t> arg_0_2;
    Local<Array> arg_0_2_container = Local<Array>::Cast(field_arg_0_2);
    for(uint32_t arg_0_2_id = 0; arg_0_2_id < arg_0_2_container->Length(); arg_0_2_id++)
    {
        if(arg_0_2_container->Get(arg_0_2_id)->IsUint32())
        {
            auto arg_0_2_elem = Nan::To<uint32_t>(arg_0_2_container->Get(arg_0_2_id)).FromJust();
            arg_0_2.emplace_back(arg_0_2_elem);
        }
    }


    auto field_arg_0_3 = Nan::Get(info[0]->ToObject(), Nan::New<String>("P2SHVersion").ToLocalChecked()).ToLocalChecked();
    vector<uint8_t> arg_0_3;
    Local<Array> arg_0_3_container = Local<Array>::Cast(field_arg_0_3);
    for(uint32_t arg_0_3_id = 0; arg_0_3_id < arg_0_3_container->Length(); arg_0_3_id++)
    {
        if(arg_0_3_container->Get(arg_0_3_id)->IsUint32())
        {
            auto arg_0_3_elem = Nan::To<uint32_t>(arg_0_3_container->Get(arg_0_3_id)).FromJust();
            arg_0_3.emplace_back(arg_0_3_elem);
        }
    }


    auto field_arg_0_4 = Nan::Get(info[0]->ToObject(), Nan::New<String>("XPUBVersion").ToLocalChecked()).ToLocalChecked();
    vector<uint8_t> arg_0_4;
    Local<Array> arg_0_4_container = Local<Array>::Cast(field_arg_0_4);
    for(uint32_t arg_0_4_id = 0; arg_0_4_id < arg_0_4_container->Length(); arg_0_4_id++)
    {
        if(arg_0_4_container->Get(arg_0_4_id)->IsUint32())
        {
            auto arg_0_4_elem = Nan::To<uint32_t>(arg_0_4_container->Get(arg_0_4_id)).FromJust();
            arg_0_4.emplace_back(arg_0_4_elem);
        }
    }


    auto field_arg_0_5 = Nan::Get(info[0]->ToObject(), Nan::New<String>("FeePolicy").ToLocalChecked()).ToLocalChecked();
    auto arg_0_5 = (ledger::core::api::BitcoinLikeFeePolicy)Nan::To<int>(field_arg_0_5).FromJust();

    auto field_arg_0_6 = Nan::Get(info[0]->ToObject(), Nan::New<String>("DustAmount").ToLocalChecked()).ToLocalChecked();
    auto arg_0_6 = Nan::To<int64_t>(field_arg_0_6).FromJust();

    auto field_arg_0_7 = Nan::Get(info[0]->ToObject(), Nan::New<String>("MessagePrefix").ToLocalChecked()).ToLocalChecked();
    String::Utf8Value string_arg_0_7(field_arg_0_7->ToString());
    auto arg_0_7 = std::string(*string_arg_0_7);

    auto field_arg_0_8 = Nan::Get(info[0]->ToObject(), Nan::New<String>("UsesTimestampedTransaction").ToLocalChecked()).ToLocalChecked();
    auto arg_0_8 = Nan::To<bool>(field_arg_0_8).FromJust();
    BitcoinLikeNetworkParameters arg_0(arg_0_1, arg_0_2, arg_0_3, arg_0_4, arg_0_5, arg_0_6, arg_0_7, arg_0_8);

    String::Utf8Value string_arg_1(info[1]->ToString());
    auto arg_1 = std::string(*string_arg_1);
    String::Utf8Value string_arg_2(info[2]->ToString());
    auto arg_2 = std::string(*string_arg_2);

    //Call factory
    auto cpp_instance = ledger::core::api::BitcoinLikeExtendedPublicKey::fromBase58(arg_0,arg_1,arg_2);
    NJSBitcoinLikeExtendedPublicKey *node_instance = new NJSBitcoinLikeExtendedPublicKey(cpp_instance);

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}


Nan::Persistent<ObjectTemplate> NJSBitcoinLikeExtendedPublicKey::BitcoinLikeExtendedPublicKey_prototype;

Handle<Object> NJSBitcoinLikeExtendedPublicKey::wrap(const std::shared_ptr<ledger::core::api::BitcoinLikeExtendedPublicKey> &object) {
    Nan::HandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(BitcoinLikeExtendedPublicKey_prototype);

    Handle<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        NJSBitcoinLikeExtendedPublicKey *new_obj = new NJSBitcoinLikeExtendedPublicKey(object);
        if(new_obj)
        {
            new_obj->Wrap(obj);
            new_obj->Ref();
        }
    }
    else
    {
        Nan::ThrowError("NJSBitcoinLikeExtendedPublicKey::wrap: object template not valid");
    }
    return obj;
}

void NJSBitcoinLikeExtendedPublicKey::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSBitcoinLikeExtendedPublicKey::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSBitcoinLikeExtendedPublicKey").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"derive", derive);
    Nan::SetPrototypeMethod(func_template,"toBase58", toBase58);
    Nan::SetPrototypeMethod(func_template,"getRootPath", getRootPath);
    Nan::SetPrototypeMethod(func_template,"fromBase58", fromBase58);
    //Set object prototype
    BitcoinLikeExtendedPublicKey_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSBitcoinLikeExtendedPublicKey").ToLocalChecked(), func_template->GetFunction());
}
