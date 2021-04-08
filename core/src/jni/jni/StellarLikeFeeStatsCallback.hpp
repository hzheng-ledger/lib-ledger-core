// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_STELLARLIKEFEESTATSCALLBACK_HPP_JNI_
#define DJINNI_GENERATED_STELLARLIKEFEESTATSCALLBACK_HPP_JNI_

#include "../../api/StellarLikeFeeStatsCallback.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class StellarLikeFeeStatsCallback final : ::djinni::JniInterface<::ledger::core::api::StellarLikeFeeStatsCallback, StellarLikeFeeStatsCallback> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::StellarLikeFeeStatsCallback>;
    using CppOptType = std::shared_ptr<::ledger::core::api::StellarLikeFeeStatsCallback>;
    using JniType = jobject;

    using Boxed = StellarLikeFeeStatsCallback;

    ~StellarLikeFeeStatsCallback();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<StellarLikeFeeStatsCallback>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<StellarLikeFeeStatsCallback>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    StellarLikeFeeStatsCallback();
    friend ::djinni::JniClass<StellarLikeFeeStatsCallback>;
    friend ::djinni::JniInterface<::ledger::core::api::StellarLikeFeeStatsCallback, StellarLikeFeeStatsCallback>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::ledger::core::api::StellarLikeFeeStatsCallback
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void onCallback(const std::experimental::optional<::ledger::core::api::StellarLikeFeeStats> & result, const std::experimental::optional<::ledger::core::api::Error> & error) override;

    private:
        friend ::djinni::JniInterface<::ledger::core::api::StellarLikeFeeStatsCallback, ::djinni_generated::StellarLikeFeeStatsCallback>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("StellarLikeFeeStatsCallback") };
    const jmethodID method_onCallback { ::djinni::jniGetMethodID(clazz.get(), "onCallback", "(LStellarLikeFeeStats;LError;)V") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_STELLARLIKEFEESTATSCALLBACK_HPP_JNI_
