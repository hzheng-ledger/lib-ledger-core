// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from messages.djinni

#ifndef DJINNI_GENERATED_COSMOSLIKEMSGMULTISEND_HPP_JNI_
#define DJINNI_GENERATED_COSMOSLIKEMSGMULTISEND_HPP_JNI_

#include "../../api/CosmosLikeMsgMultiSend.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class CosmosLikeMsgMultiSend final {
public:
    using CppType = ::ledger::core::api::CosmosLikeMsgMultiSend;
    using JniType = jobject;

    using Boxed = CosmosLikeMsgMultiSend;

    ~CosmosLikeMsgMultiSend();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    CosmosLikeMsgMultiSend();
    friend ::djinni::JniClass<CosmosLikeMsgMultiSend>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("CosmosLikeMsgMultiSend") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/util/ArrayList;Ljava/util/ArrayList;)V") };
    const jfieldID field_inputs { ::djinni::jniGetFieldID(clazz.get(), "inputs", "Ljava/util/ArrayList;") };
    const jfieldID field_outputs { ::djinni::jniGetFieldID(clazz.get(), "outputs", "Ljava/util/ArrayList;") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_COSMOSLIKEMSGMULTISEND_HPP_JNI_
