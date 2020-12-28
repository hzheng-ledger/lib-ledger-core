// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from idl.djinni

#ifndef DJINNI_GENERATED_ALGORANDASSETPARAMS_HPP
#define DJINNI_GENERATED_ALGORANDASSETPARAMS_HPP

#include "../utils/optional.hpp"
#include <iostream>
#include <string>
#include <utility>

namespace ledger { namespace core { namespace api {

struct AlgorandAssetParams final {
    /** The unique asset identifier */
    std::experimental::optional<std::string> assetId;
    /** The name of this asset, as supplied by the creator */
    std::experimental::optional<std::string> assetName;
    /** The name of a unit of this asset, as supplied by the creator */
    std::experimental::optional<std::string> unitName;
    /** A URL where more information about the asset can be retrieved */
    std::experimental::optional<std::string> url;
    /** Specifies whether holdings in this asset are frozen by default */
    bool defaultFrozen;
    /** The total number of units of this asset */
    std::experimental::optional<std::string> total;
    /** The number of digits to use after the decimal point when displaying this asset */
    std::experimental::optional<std::string> decimals;
    /** The address that created this asset. */
    std::experimental::optional<std::string> creatorAddress;
    /** The address used to manage the keys of this asset and to destroy it */
    std::experimental::optional<std::string> managerAddress;
    /** The address used to freeze holdings of this asset. If empty, freezing is not permitted. */
    std::experimental::optional<std::string> freezeAddress;
    /** The address used to clawback holdings of this asset. If empty, clawback is not permitted. */
    std::experimental::optional<std::string> clawbackAddress;
    /** The address holding reserve (non-minted) units of this asset */
    std::experimental::optional<std::string> reserveAddress;
    /** Some unspecified asset metadata (32 bytes in Base64) */
    std::experimental::optional<std::string> metadataHash;

    AlgorandAssetParams(std::experimental::optional<std::string> assetId_,
                        std::experimental::optional<std::string> assetName_,
                        std::experimental::optional<std::string> unitName_,
                        std::experimental::optional<std::string> url_,
                        bool defaultFrozen_,
                        std::experimental::optional<std::string> total_,
                        std::experimental::optional<std::string> decimals_,
                        std::experimental::optional<std::string> creatorAddress_,
                        std::experimental::optional<std::string> managerAddress_,
                        std::experimental::optional<std::string> freezeAddress_,
                        std::experimental::optional<std::string> clawbackAddress_,
                        std::experimental::optional<std::string> reserveAddress_,
                        std::experimental::optional<std::string> metadataHash_)
    : assetId(std::move(assetId_))
    , assetName(std::move(assetName_))
    , unitName(std::move(unitName_))
    , url(std::move(url_))
    , defaultFrozen(std::move(defaultFrozen_))
    , total(std::move(total_))
    , decimals(std::move(decimals_))
    , creatorAddress(std::move(creatorAddress_))
    , managerAddress(std::move(managerAddress_))
    , freezeAddress(std::move(freezeAddress_))
    , clawbackAddress(std::move(clawbackAddress_))
    , reserveAddress(std::move(reserveAddress_))
    , metadataHash(std::move(metadataHash_))
    {}

    AlgorandAssetParams(const AlgorandAssetParams& cpy) {
       this->assetId = cpy.assetId;
       this->assetName = cpy.assetName;
       this->unitName = cpy.unitName;
       this->url = cpy.url;
       this->defaultFrozen = cpy.defaultFrozen;
       this->total = cpy.total;
       this->decimals = cpy.decimals;
       this->creatorAddress = cpy.creatorAddress;
       this->managerAddress = cpy.managerAddress;
       this->freezeAddress = cpy.freezeAddress;
       this->clawbackAddress = cpy.clawbackAddress;
       this->reserveAddress = cpy.reserveAddress;
       this->metadataHash = cpy.metadataHash;
    }

    AlgorandAssetParams() = default;


    AlgorandAssetParams& operator=(const AlgorandAssetParams& cpy) {
       this->assetId = cpy.assetId;
       this->assetName = cpy.assetName;
       this->unitName = cpy.unitName;
       this->url = cpy.url;
       this->defaultFrozen = cpy.defaultFrozen;
       this->total = cpy.total;
       this->decimals = cpy.decimals;
       this->creatorAddress = cpy.creatorAddress;
       this->managerAddress = cpy.managerAddress;
       this->freezeAddress = cpy.freezeAddress;
       this->clawbackAddress = cpy.clawbackAddress;
       this->reserveAddress = cpy.reserveAddress;
       this->metadataHash = cpy.metadataHash;
       return *this;
    }

    template <class Archive>
    void load(Archive& archive) {
        archive(assetId, assetName, unitName, url, defaultFrozen, total, decimals, creatorAddress, managerAddress, freezeAddress, clawbackAddress, reserveAddress, metadataHash);
    }

    template <class Archive>
    void save(Archive& archive) const {
        archive(assetId, assetName, unitName, url, defaultFrozen, total, decimals, creatorAddress, managerAddress, freezeAddress, clawbackAddress, reserveAddress, metadataHash);
    }
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_ALGORANDASSETPARAMS_HPP
