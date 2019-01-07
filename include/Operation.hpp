// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#ifndef DJINNI_GENERATED_OPERATION_HPP
#define DJINNI_GENERATED_OPERATION_HPP

#include "../utils/optional.hpp"
#include <chrono>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

namespace ledger { namespace core { namespace api {

class Amount;
class BitcoinLikeOperation;
class EthereumLikeOperation;
class Preferences;
class TrustIndicator;
enum class OperationType;
enum class WalletType;
struct Currency;

/**Class representing an operation */
class Operation {
public:
    virtual ~Operation() {}

    /**
     *Get id's operation
     *@return string
     */
    virtual std::string getUid() = 0;

    /**
     *Get account's index in user's wallet
     *@return 32 bits integer
     */
    virtual int32_t getAccountIndex() = 0;

    /**
     *Get type of operation
     *@return OperationType object (for more details refer to OperationType)
     */
    virtual OperationType getOperationType() = 0;

    /**
     *Return date on which operation was issued
     *@return date object
     */
    virtual std::chrono::system_clock::time_point getDate() = 0;

    /**
     *Get senders of operation
     *@return List of string, list of all senders
     */
    virtual std::vector<std::string> getSenders() = 0;

    /**
     *Get recipients of operation
     *@return List of string, list of all recipients
     */
    virtual std::vector<std::string> getRecipients() = 0;

    /**
     *Get amount of operation
     *@return Amount object
     */
    virtual std::shared_ptr<Amount> getAmount() = 0;

    /**
     *Get fees of operation
     *@return Optional Amount object
     */
    virtual std::shared_ptr<Amount> getFees() = 0;

    /**
     *Get preferences of operation
     *@return Prefences object
     */
    virtual std::shared_ptr<Preferences> getPreferences() = 0;

    /**
     *Get trust indicator of operation
     *@return TrustIndicator object
     */
    virtual std::shared_ptr<TrustIndicator> getTrust() = 0;

    /**
     *Get block height on which operation was included
     *@return Optional 64 bits integer, height of block in which operation was validated
     */
    virtual std::experimental::optional<int64_t> getBlockHeight() = 0;

    /**
     *Convert operation as Bitcoin operation
     *@return BitcoinLikeOperation object
     */
    virtual std::shared_ptr<BitcoinLikeOperation> asBitcoinLikeOperation() = 0;

    /**
     *Convert operation as Ethereum operation
     *@return EthereumLikeOperation object
     */
    virtual std::shared_ptr<EthereumLikeOperation> asEthereumLikeOperation() = 0;

    virtual bool isInstanceOfBitcoinLikeOperation() = 0;

    /**
     *Same as asBitcoinLikeOperation for ethereum
     *# asEthereumLikeOperation(): Callback<EthereumLikeOperation>;
     *Same as isInstanceOfBitcoinLikeOperation for ethereum
     */
    virtual bool isInstanceOfEthereumLikeOperation() = 0;

    /**
     *Same as asBitcoinLikeOperation for ripple
     *# asRippleLikeOperation(): Callback<RippleLikeOperation>;
     *Same as isInstanceOfBitcoinLikeOperation for ripple
     */
    virtual bool isInstanceOfRippleLikeOperation() = 0;

    /**
     *Tells if the operation is complete
     *@return boolean
     */
    virtual bool isComplete() = 0;

    /**
     *Get type of wallet from which operation was issued
     *@return WalletType object
     */
    virtual WalletType getWalletType() = 0;

    virtual Currency getCurrency() = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_OPERATION_HPP
