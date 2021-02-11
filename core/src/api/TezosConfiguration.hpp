// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tezos_like_wallet.djinni

#ifndef DJINNI_GENERATED_TEZOSCONFIGURATION_HPP
#define DJINNI_GENERATED_TEZOSCONFIGURATION_HPP

#include <string>
#ifndef LIBCORE_EXPORT
    #if defined(_MSC_VER)
       #include <libcore_export.h>
    #else
       #define LIBCORE_EXPORT
    #endif
#endif

namespace ledger { namespace core { namespace api {

class LIBCORE_EXPORT TezosConfiguration {
public:
    virtual ~TezosConfiguration() {}

    static std::string const BCD_API;

    static std::string const TEZOS_XPUB_CURVE;

    static std::string const TEZOS_PROTOCOL_UPDATE;

    static std::string const TEZOS_NODE;

    static std::string const TEZOS_COUNTER_STRATEGY;

    static std::string const TEZOS_OPTIMISTIC_COUNTER_TIMEOUT;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_TEZOSCONFIGURATION_HPP
