// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from preferences.djinni

#ifndef DJINNI_GENERATED_PREFERENCESCHANGETYPE_HPP_JNI_
#define DJINNI_GENERATED_PREFERENCESCHANGETYPE_HPP_JNI_

#include "../../api/PreferencesChangeType.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class PreferencesChangeType final : ::djinni::JniEnum {
public:
    using CppType = ::ledger::core::api::PreferencesChangeType;
    using JniType = jobject;

    using Boxed = PreferencesChangeType;

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return static_cast<CppType>(::djinni::JniClass<PreferencesChangeType>::get().ordinal(jniEnv, j)); }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, CppType c) { return ::djinni::JniClass<PreferencesChangeType>::get().create(jniEnv, static_cast<jint>(c)); }

private:
    PreferencesChangeType() : JniEnum("co/ledger/core/PreferencesChangeType") {}
    friend ::djinni::JniClass<PreferencesChangeType>;
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_PREFERENCESCHANGETYPE_HPP_JNI_
