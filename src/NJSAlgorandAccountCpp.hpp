// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from idl.djinni

#ifndef DJINNI_GENERATED_NJSALGORANDACCOUNT_HPP
#define DJINNI_GENERATED_NJSALGORANDACCOUNT_HPP


#include "../include/AlgorandOperationType.hpp"
#include "../include/TimePeriod.hpp"
#include "NJSAlgorandAssetAmountCallback.hpp"
#include "NJSAlgorandAssetAmountListCallback.hpp"
#include "NJSAlgorandAssetParamsCallback.hpp"
#include "NJSAlgorandAssetParamsListCallback.hpp"
#include "NJSAlgorandTransactionCallback.hpp"
#include "NJSAlgorandTransactionCpp.hpp"
#include "NJSAmountCallback.hpp"
#include "NJSBoolCallback.hpp"
#include "NJSStringCallback.hpp"
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../include/AlgorandAccount.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSAlgorandAccount final {
public:

    static void Initialize(Local<Object> target);
    NJSAlgorandAccount() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::AlgorandAccount> &object);
    static Nan::Persistent<ObjectTemplate> AlgorandAccount_prototype;

private:
    /**
     * Get the maximum amount spendable in one transaction
     * @param callback, Callback returning the maximum amount spendable
     * @param operationType, the type of the operation
     */
    static NAN_METHOD(getSpendableBalance);

    /**
     * Get information about a specific asset
     * @param assetId, the unique identifier of the asset to look for
     * @param callback, Callback returning the information about the queried asset
     */
    static NAN_METHOD(getAsset);

    /**
     * Check if address has a specific asset
     * @param address, the address to check
     * @param assetId, the unique identifier of the asset to look for
     * @param callback, Callback returning the true if the address hold the asset
     */
    static NAN_METHOD(hasAsset);

    /**
     * Check if address can receive the given amount:
     * it may not be enough to reach the minimum balance, if the account has 0 ALGO
     * @param address, the address to check
     * @param amount, the amount to test
     * @param callback, Callback returning the true if the address hold the asset
     */
    static NAN_METHOD(isAmountValid);

    /**
     * Get balance of account for a particular asset.
     * @param assetId, the unique identifier of the asset on the algorand network
     * @param callback, if getAssetBalance succeeds, Callback returning an Amount object which represents account's balance
     */
    static NAN_METHOD(getAssetBalance);

    /**
     * Get balance of account for a particular asset at a precise interval with a certain granularity
     * @param assetId, the unique identifier of the asset on the algorand network
     * @param start, lower bound of search range
     * @param end, upper bound of search range
     * @param precision, granularity at which we want results
     * @param callback, ListCallback returning a list of Amount objects which represents account's balance
     */
    static NAN_METHOD(getAssetBalanceHistory);

    /**
     * Get balances of all assets to which account is registered
     * @param callback, ListCallback returning a list of AlgorandAssetAmount objects representing the different balances
     */
    static NAN_METHOD(getAssetsBalances);

    /**
     * Get information about the assets created by account
     * @param callback, ListCallback returning a list of AlgorandAssetParams objects representing the assets created by account
     */
    static NAN_METHOD(getCreatedAssets);

    /**
     * Get the pending rewards for account
     * @param callback, Callback returning the amount of pending rewards in MicroAlgos
     */
    static NAN_METHOD(getPendingRewards);

    /**
     * Get the total rewards of MicroAlgos account has received, including pending rewards.
     * @param callback, Callback returning the total rewards in MicroAlgos.
     */
    static NAN_METHOD(getTotalRewards);

    /**
     * Get an estimation (in MicroAlgos) of the fees needed to broadcast a given transaction to the algorand network
     * @param transaction, the transaction for which fees are estimated
     * @param callback, Callback returning the fees in MicroAlgos for the specified transaction
     */
    static NAN_METHOD(getFeeEstimate);

    /**
     * Build a raw signed transaction from a raw unsigned transaction and the signature
     * @param rawUnsignedTransaction, the msgpack-encoded unsigned transaction
     * @param signature, the signature of the transaction
     * @return binary, the msgpack-encoded signed transaction
     */
    static NAN_METHOD(buildRawSignedTransaction);

    /**
     * Broadcast a raw transaction to the algorand network
     * @param transaction, the msgpack-encoded transaction
     * @param callback, Callback returning the id of the transaction in case of success, an error message otherwise
     */
    static NAN_METHOD(broadcastRawTransaction);

    /**
     * Broadcast an AlgorandTransaction object to the algorand network
     * @param transaction, the transaction to broadcast
     * @param callback, Callback returning the fees in MicroAlgos for the specified transaction
     */
    static NAN_METHOD(broadcastTransaction);

    /**
     * Create a new transaction
     * @param callback, The new transaction
     */
    static NAN_METHOD(createTransaction);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSALGORANDACCOUNT_HPP
