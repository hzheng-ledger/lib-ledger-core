/*
 *
 * RippleLikeKeychain
 *
 * Created by El Khalil Bellakrid on 05/01/2019.
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2019 Ledger
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */


#ifndef LEDGER_CORE_RIPPLELIKEKEYCHAIN_H
#define LEDGER_CORE_RIPPLELIKEKEYCHAIN_H


#include <string>
#include <vector>
#include <utils/DerivationScheme.hpp>
#include <utils/Option.hpp>
#include <preferences/Preferences.hpp>
#include <api/Configuration.hpp>
#include <api/DynamicObject.hpp>
#include <api/Currency.hpp>
#include <api/AccountCreationInfo.hpp>
#include <api/ExtendedKeyAccountCreationInfo.hpp>
#include <api/Keychain.hpp>
#include <api/RippleLikeExtendedPublicKey.hpp>
#include <ripple/RippleLikeAddress.h>

namespace ledger {
    namespace core {

        class RippleLikeKeychain: public api::Keychain {

        public:
            using Address = std::shared_ptr<RippleLikeAddress>;

            RippleLikeKeychain(const std::shared_ptr<api::DynamicObject> &configuration,
                               const api::Currency &params,
                               int account,
                               const std::shared_ptr<Preferences> &preferences);


            RippleLikeKeychain(const std::shared_ptr<api::DynamicObject> &configuration,
                               const api::Currency &params,
                               int account,
                               const std::shared_ptr<api::RippleLikeExtendedPublicKey> &xpub,
                               const std::shared_ptr<Preferences> &preferences);

            RippleLikeKeychain(const std::shared_ptr<api::DynamicObject> &configuration,
                               const api::Currency &params,
                               int account,
                               const std::string &accountAddress,
                               const std::shared_ptr<Preferences> &preferences);

            std::vector<Address> getAllObservableAddresses(uint32_t from, uint32_t to);

            std::vector<std::string> getAllObservableAddressString(uint32_t from, uint32_t to);

            Address getAddress() const;

            Option<std::string> getAddressDerivationPath(const std::string &address) const;

            std::shared_ptr<api::RippleLikeExtendedPublicKey> getExtendedPublicKey() const;

            int getAccountIndex() const;

            const api::RippleLikeNetworkParameters &getNetworkParameters() const;

            const api::Currency &getCurrency() const;

            Option<std::vector<uint8_t>> getPublicKey(const std::string &address) const;


            std::shared_ptr<api::DynamicObject> getConfiguration() const;

            const DerivationScheme &getDerivationScheme() const;

            const DerivationScheme &getFullDerivationScheme() const;

            std::string getRestoreKey() const;

            bool contains(const std::string &address) const;

            int32_t getOutputSizeAsSignedTxInput() const;

            std::shared_ptr<Preferences> getPreferences() const;

        protected:            

            DerivationScheme &getDerivationScheme();

        private:
            RippleLikeKeychain::Address derive();

            const api::Currency _currency;
            DerivationScheme _scheme;
            DerivationScheme _fullScheme;
            int _account;
            std::shared_ptr<Preferences> _preferences;
            std::shared_ptr<api::DynamicObject> _configuration;
            std::shared_ptr<api::RippleLikeExtendedPublicKey> _xpub;
            std::string _localPath;
            std::string _address;
        };
    }
}


#endif //LEDGER_CORE_RIPPLELIKEKEYCHAIN_H
