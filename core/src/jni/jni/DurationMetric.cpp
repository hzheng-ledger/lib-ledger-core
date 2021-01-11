// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#include "DurationMetric.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

DurationMetric::DurationMetric() = default;

DurationMetric::~DurationMetric() = default;

auto DurationMetric::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<DurationMetric>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::I64::fromCpp(jniEnv, c.total_ms)),
                                                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c.count)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto DurationMetric::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 3);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<DurationMetric>::get();
    return {::djinni::I64::toCpp(jniEnv, jniEnv->GetLongField(j, data.field_totalMs)),
            ::djinni::I32::toCpp(jniEnv, jniEnv->GetIntField(j, data.field_count))};
}

}  // namespace djinni_generated
