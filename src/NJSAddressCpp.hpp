// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#ifndef DJINNI_GENERATED_NJSADDRESS_HPP
#define DJINNI_GENERATED_NJSADDRESS_HPP


#include "../include/../utils/optional.hpp"
#include "../include/BitcoinLikeNetworkParameters.hpp"
#include "../include/CosmosLikeNetworkParameters.hpp"
#include "../include/Currency.hpp"
#include "../include/CurrencyUnit.hpp"
#include "../include/EthereumLikeNetworkParameters.hpp"
#include "../include/RippleLikeNetworkParameters.hpp"
#include "../include/StellarLikeNetworkParameters.hpp"
#include "../include/TezosLikeNetworkParameters.hpp"
#include "NJSBitcoinLikeAddressCpp.hpp"
#include "NJSStellarLikeAddressCpp.hpp"
#include <memory>
#include <string>

#include <nan.h>
#include <node.h>
#include "../include/Address.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSAddress final {
public:

    static void Initialize(Local<Object> target);
    NJSAddress() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::Address> &object);
    static Nan::Persistent<ObjectTemplate> Address_prototype;

private:
    /**
     * Gets an optional derivation path (if the address is owned by an account).
     * @return The derivation path of the address
     */
    static NAN_METHOD(getDerivationPath);

    /**
     * Serialize the address to a string. The serialization method depends of the underlying currency and
     * format (Base58, Bech32, Ethereum...).
     */
    static NAN_METHOD(toString);

    static NAN_METHOD(asBitcoinLikeAddress);

    static NAN_METHOD(isInstanceOfBitcoinLikeAddress);

    /** Cast the address to a stellar like one */
    static NAN_METHOD(asStellarLikeAddress);

    static NAN_METHOD(isInstanceOfStellarLikeAddress);

    static NAN_METHOD(getCurrency);

    /**
     * Attempt to parse a string address. If the address can be parse return it otherwise return a NONE
     * (depending on you host this may be a null, nil, None...).
     * @param address The string to parse
     * @param currency The currency used to parse the address
     * @return If successful returns the address object otherwise null.
     */
    static NAN_METHOD(parse);

    /**
     * Checks if the given string formatted address is valid or not.
     * @param address The string to parse
     * @param currency The currency used to parse the address
     * @return If successful returns true, false otherwise.
     */
    static NAN_METHOD(isValid);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSADDRESS_HPP
