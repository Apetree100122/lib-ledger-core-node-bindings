// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tezos_like_wallet.djinni

#ifndef DJINNI_GENERATED_TEZOSCONFIGURATIONDEFAULTS_HPP
#define DJINNI_GENERATED_TEZOSCONFIGURATIONDEFAULTS_HPP

#include <string>
#ifndef LIBCORE_EXPORT
    #if defined(_MSC_VER)
       #include <libcore_export.h>
    #else
       #define LIBCORE_EXPORT
    #endif
#endif

namespace ledger { namespace core { namespace api {

class LIBCORE_EXPORT TezosConfigurationDefaults {
public:
    virtual ~TezosConfigurationDefaults() {}

    static std::string const TEZOS_DEFAULT_API_ENDPOINT;

    static std::string const TEZOS_DEFAULT_API_VERSION;

    static std::string const TZSTATS_API_ENDPOINT;

    static std::string const TEZOS_DEFAULT_NODE;

    static std::string const TEZOS_OBSERVER_NODE_ENDPOINT_S3;

    static std::string const TEZOS_OBSERVER_WS_ENDPOINT_S2;

    static std::string const TEZOS_OBSERVER_WS_ENDPOINT_S3;

    static std::string const TEZOS_XPUB_CURVE_ED25519;

    static std::string const TEZOS_XPUB_CURVE_SECP256K1;

    static std::string const TEZOS_XPUB_CURVE_P256;

    /**
     * Taken from some existing XTZ wallets
     * http://tezos.gitlab.io/protocols/005_babylon.html#gas-cost-changes
     */
    static std::string const TEZOS_DEFAULT_FEES;

    static std::string const TEZOS_DEFAULT_MAX_FEES;

    static std::string const TEZOS_DEFAULT_GAS_LIMIT;

    static std::string const TEZOS_DEFAULT_STORAGE_LIMIT;

    static std::string const TEZOS_PROTOCOL_UPDATE_BABYLON;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_TEZOSCONFIGURATIONDEFAULTS_HPP
