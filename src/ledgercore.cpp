// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni

#include <nan.h>
#include <node.h>

#include "NJSTezosLikeTransactionCpp.hpp"
#include "NJSTezosLikeOperationCpp.hpp"
#include "NJSTezosLikeBlockCpp.hpp"
#include "NJSTezosLikeTransactionBuilderCpp.hpp"
#include "NJSTezosLikeTransactionCallback.hpp"
#include "NJSTezosLikeAccountCpp.hpp"
#include "NJSStringCallback.hpp"
#include "NJSBigIntCallback.hpp"
#include "NJSTezosLikeOriginatedAccountCpp.hpp"
#include "NJSAmountCallback.hpp"
#include "NJSAmountListCallback.hpp"
#include "NJSTezosConfigurationCpp.hpp"
#include "NJSTezosConfigurationDefaultsCpp.hpp"
#include "NJSRippleLikeTransactionCpp.hpp"
#include "NJSRippleLikeOperationCpp.hpp"
#include "NJSRippleLikeBlockCpp.hpp"
#include "NJSRippleLikeTransactionBuilderCpp.hpp"
#include "NJSRippleLikeTransactionCallback.hpp"
#include "NJSRippleLikeAccountCpp.hpp"
#include "NJSBoolCallback.hpp"
#include "NJSRippleConfigurationCpp.hpp"
#include "NJSRippleConfigurationDefaultsCpp.hpp"
#include "NJSSecp256k1Cpp.hpp"
#include "NJSNetworksCpp.hpp"
#include "NJSHashAlgorithmHelper.hpp"
#include "NJSStellarLikeBlockCpp.hpp"
#include "NJSStellarLikeMemoCpp.hpp"
#include "NJSStellarLikeTransactionCpp.hpp"
#include "NJSStellarLikeTransactionBuilderCpp.hpp"
#include "NJSStellarLikeTransactionCallback.hpp"
#include "NJSStellarLikeOperationCpp.hpp"
#include "NJSStellarLikeAccountCpp.hpp"
#include "NJSStellarLikeFeeStatsCallback.hpp"
#include "NJSStellarLikeAccountSignerListCallback.hpp"
#include "NJSStellarLikeWalletCpp.hpp"
#include "NJSStellarLikeAddressCpp.hpp"
#include "NJSAlgorandBlockchainExplorerEnginesCpp.hpp"
#include "NJSAlgorandTransactionCpp.hpp"
#include "NJSAlgorandOperationCpp.hpp"
#include "NJSAlgorandAddressCpp.hpp"
#include "NJSAlgorandAccountCpp.hpp"
#include "NJSAlgorandAssetParamsCallback.hpp"
#include "NJSAlgorandAssetAmountCallback.hpp"
#include "NJSAlgorandAssetAmountListCallback.hpp"
#include "NJSAlgorandAssetParamsListCallback.hpp"
#include "NJSAlgorandTransactionCallback.hpp"
#include "NJSAlgorandWalletCpp.hpp"
#include "NJSEventCpp.hpp"
#include "NJSEventReceiver.hpp"
#include "NJSEventBusCpp.hpp"
#include "NJSEventPublisherCpp.hpp"
#include "NJSSynchronizationStatusCpp.hpp"
#include "NJSDerivationPathCpp.hpp"
#include "NJSTrustIndicatorCpp.hpp"
#include "NJSOperationCpp.hpp"
#include "NJSQueryFilterCpp.hpp"
#include "NJSOperationQueryCpp.hpp"
#include "NJSOperationListCallback.hpp"
#include "NJSAddressCpp.hpp"
#include "NJSKeychainCpp.hpp"
#include "NJSAccountCpp.hpp"
#include "NJSAddressListCallback.hpp"
#include "NJSBlockCallback.hpp"
#include "NJSErrorCodeCallback.hpp"
#include "NJSWalletCpp.hpp"
#include "NJSAccountCallback.hpp"
#include "NJSI32Callback.hpp"
#include "NJSAccountListCallback.hpp"
#include "NJSAccountCreationInfoCallback.hpp"
#include "NJSExtendedKeyAccountCreationInfoCallback.hpp"
#include "NJSDynamicArrayCpp.hpp"
#include "NJSDynamicObjectCpp.hpp"
#include "NJSStellarConfigurationCpp.hpp"
#include "NJSBlockchainExplorerEnginesCpp.hpp"
#include "NJSBlockchainObserverEnginesCpp.hpp"
#include "NJSKeychainEnginesCpp.hpp"
#include "NJSSynchronizerEnginesCpp.hpp"
#include "NJSSynchronizationEnginesCpp.hpp"
#include "NJSConfigurationDefaultsCpp.hpp"
#include "NJSConfigurationCpp.hpp"
#include "NJSPoolConfigurationCpp.hpp"
#include "NJSDatabaseError.hpp"
#include "NJSDatabaseBlob.hpp"
#include "NJSDatabaseColumn.hpp"
#include "NJSDatabaseResultRow.hpp"
#include "NJSDatabaseResultSet.hpp"
#include "NJSDatabaseStatement.hpp"
#include "NJSDatabaseConnection.hpp"
#include "NJSDatabaseConnectionPool.hpp"
#include "NJSDatabaseEngine.hpp"
#include "NJSDatabaseBackendCpp.hpp"
#include "NJSEthereumPublicKeyProvider.hpp"
#include "NJSCosmosLikeMessageCpp.hpp"
#include "NJSCosmosLikeTransactionCpp.hpp"
#include "NJSCosmosLikeOperationCpp.hpp"
#include "NJSCosmosLikeBlockCpp.hpp"
#include "NJSCosmosLikeTransactionBuilderCpp.hpp"
#include "NJSCosmosLikeTransactionCallback.hpp"
#include "NJSCosmosLikeAccountCpp.hpp"
#include "NJSCosmosLikeValidatorListCallback.hpp"
#include "NJSCosmosLikeValidatorCallback.hpp"
#include "NJSCosmosLikeDelegationListCallback.hpp"
#include "NJSCosmosLikeRewardListCallback.hpp"
#include "NJSCosmosLikeUnbondingListCallback.hpp"
#include "NJSCosmosLikeRedelegationListCallback.hpp"
#include "NJSCosmosLikeDelegationCpp.hpp"
#include "NJSCosmosLikeRewardCpp.hpp"
#include "NJSCosmosLikeUnbondingCpp.hpp"
#include "NJSCosmosLikeUnbondingEntryCpp.hpp"
#include "NJSCosmosLikeRedelegationCpp.hpp"
#include "NJSCosmosLikeRedelegationEntryCpp.hpp"
#include "NJSCosmosConfigurationDefaultsCpp.hpp"
#include "NJSCosmosLikeWalletCpp.hpp"
#include "NJSERC20LikeAccountCpp.hpp"
#include "NJSBinaryCallback.hpp"
#include "NJSERC20LikeOperationCpp.hpp"
#include "NJSGetEthreumLikeWalletCallback.hpp"
#include "NJSEthereumLikeWalletCpp.hpp"
#include "NJSEthereumLikeTransactionCpp.hpp"
#include "NJSInternalTransactionCpp.hpp"
#include "NJSEthereumLikeOperationCpp.hpp"
#include "NJSEthereumLikeBlockCpp.hpp"
#include "NJSEthereumLikeTransactionBuilderCpp.hpp"
#include "NJSEthereumLikeTransactionCallback.hpp"
#include "NJSEthereumLikeAccountCpp.hpp"
#include "NJSBigIntListCallback.hpp"
#include "NJSBitcoinLikeScriptChunkCpp.hpp"
#include "NJSBitcoinLikeScriptCpp.hpp"
#include "NJSTezosLikeAddressCpp.hpp"
#include "NJSTezosLikeExtendedPublicKeyCpp.hpp"
#include "NJSRippleLikeAddressCpp.hpp"
#include "NJSRippleLikeExtendedPublicKeyCpp.hpp"
#include "NJSEthereumLikeAddressCpp.hpp"
#include "NJSEthereumLikeExtendedPublicKeyCpp.hpp"
#include "NJSCosmosLikeAddressCpp.hpp"
#include "NJSCosmosLikeExtendedPublicKeyCpp.hpp"
#include "NJSBitcoinLikeAddressCpp.hpp"
#include "NJSBitcoinLikeExtendedPublicKeyCpp.hpp"
#include "NJSAmountCpp.hpp"
#include "NJSRandomNumberGenerator.hpp"
#include "NJSPreferencesCpp.hpp"
#include "NJSPreferencesEditorCpp.hpp"
#include "NJSPreferencesBackendCpp.hpp"
#include "NJSBitcoinLikeWalletConfigurationCpp.hpp"
#include "NJSBitcoinLikeInputCpp.hpp"
#include "NJSBitcoinLikeOutputCpp.hpp"
#include "NJSBitcoinLikeBlockCpp.hpp"
#include "NJSBitcoinLikeTransactionCpp.hpp"
#include "NJSBitcoinLikeOperationCpp.hpp"
#include "NJSBitcoinLikeTransactionBuilderCpp.hpp"
#include "NJSBitcoinLikeTransactionCallback.hpp"
#include "NJSBitcoinLikeAccountCpp.hpp"
#include "NJSBitcoinLikeOutputListCallback.hpp"
#include "NJSBitcoinLikeWalletCpp.hpp"
#include "NJSWalletPoolCpp.hpp"
#include "NJSWalletListCallback.hpp"
#include "NJSWalletCallback.hpp"
#include "NJSCurrencyListCallback.hpp"
#include "NJSCurrencyCallback.hpp"
#include "NJSWalletPoolBuilderCpp.hpp"
#include "NJSWalletPoolCallback.hpp"
#include "NJSWebSocketConnectionCpp.hpp"
#include "NJSWebSocketClient.hpp"
#include "NJSHttpUrlConnection.hpp"
#include "NJSHttpRequestCpp.hpp"
#include "NJSHttpClient.hpp"
#include "NJSBigIntCpp.hpp"
#include "NJSPathResolver.hpp"
#include "NJSRunnableCpp.hpp"
#include "NJSLock.hpp"
#include "NJSExecutionContext.hpp"
#include "NJSThreadDispatcher.hpp"
#include "NJSLogPrinter.hpp"
#include "NJSLoggerCpp.hpp"
#include "NJSLedgerCoreCpp.hpp"

using namespace v8;
using namespace node;

static void initAll(Local<Object> target)
{
    Nan::HandleScope scope;
    NJSTezosLikeTransaction::Initialize(target);
    NJSTezosLikeOperation::Initialize(target);
    NJSTezosLikeBlock::Initialize(target);
    NJSTezosLikeTransactionBuilder::Initialize(target);
    NJSTezosLikeTransactionCallback::Initialize(target);
    NJSTezosLikeAccount::Initialize(target);
    NJSStringCallback::Initialize(target);
    NJSBigIntCallback::Initialize(target);
    NJSTezosLikeOriginatedAccount::Initialize(target);
    NJSAmountCallback::Initialize(target);
    NJSAmountListCallback::Initialize(target);
    NJSTezosConfiguration::Initialize(target);
    NJSTezosConfigurationDefaults::Initialize(target);
    NJSRippleLikeTransaction::Initialize(target);
    NJSRippleLikeOperation::Initialize(target);
    NJSRippleLikeBlock::Initialize(target);
    NJSRippleLikeTransactionBuilder::Initialize(target);
    NJSRippleLikeTransactionCallback::Initialize(target);
    NJSRippleLikeAccount::Initialize(target);
    NJSBoolCallback::Initialize(target);
    NJSRippleConfiguration::Initialize(target);
    NJSRippleConfigurationDefaults::Initialize(target);
    NJSSecp256k1::Initialize(target);
    NJSNetworks::Initialize(target);
    NJSHashAlgorithmHelper::Initialize(target);
    NJSStellarLikeBlock::Initialize(target);
    NJSStellarLikeMemo::Initialize(target);
    NJSStellarLikeTransaction::Initialize(target);
    NJSStellarLikeTransactionBuilder::Initialize(target);
    NJSStellarLikeTransactionCallback::Initialize(target);
    NJSStellarLikeOperation::Initialize(target);
    NJSStellarLikeAccount::Initialize(target);
    NJSStellarLikeFeeStatsCallback::Initialize(target);
    NJSStellarLikeAccountSignerListCallback::Initialize(target);
    NJSStellarLikeWallet::Initialize(target);
    NJSStellarLikeAddress::Initialize(target);
    NJSAlgorandBlockchainExplorerEngines::Initialize(target);
    NJSAlgorandTransaction::Initialize(target);
    NJSAlgorandOperation::Initialize(target);
    NJSAlgorandAddress::Initialize(target);
    NJSAlgorandAccount::Initialize(target);
    NJSAlgorandAssetParamsCallback::Initialize(target);
    NJSAlgorandAssetAmountCallback::Initialize(target);
    NJSAlgorandAssetAmountListCallback::Initialize(target);
    NJSAlgorandAssetParamsListCallback::Initialize(target);
    NJSAlgorandTransactionCallback::Initialize(target);
    NJSAlgorandWallet::Initialize(target);
    NJSEvent::Initialize(target);
    NJSEventReceiver::Initialize(target);
    NJSEventBus::Initialize(target);
    NJSEventPublisher::Initialize(target);
    NJSSynchronizationStatus::Initialize(target);
    NJSDerivationPath::Initialize(target);
    NJSTrustIndicator::Initialize(target);
    NJSOperation::Initialize(target);
    NJSQueryFilter::Initialize(target);
    NJSOperationQuery::Initialize(target);
    NJSOperationListCallback::Initialize(target);
    NJSAddress::Initialize(target);
    NJSKeychain::Initialize(target);
    NJSAccount::Initialize(target);
    NJSAddressListCallback::Initialize(target);
    NJSBlockCallback::Initialize(target);
    NJSErrorCodeCallback::Initialize(target);
    NJSWallet::Initialize(target);
    NJSAccountCallback::Initialize(target);
    NJSI32Callback::Initialize(target);
    NJSAccountListCallback::Initialize(target);
    NJSAccountCreationInfoCallback::Initialize(target);
    NJSExtendedKeyAccountCreationInfoCallback::Initialize(target);
    NJSDynamicArray::Initialize(target);
    NJSDynamicObject::Initialize(target);
    NJSStellarConfiguration::Initialize(target);
    NJSBlockchainExplorerEngines::Initialize(target);
    NJSBlockchainObserverEngines::Initialize(target);
    NJSKeychainEngines::Initialize(target);
    NJSSynchronizerEngines::Initialize(target);
    NJSSynchronizationEngines::Initialize(target);
    NJSConfigurationDefaults::Initialize(target);
    NJSConfiguration::Initialize(target);
    NJSPoolConfiguration::Initialize(target);
    NJSDatabaseError::Initialize(target);
    NJSDatabaseBlob::Initialize(target);
    NJSDatabaseColumn::Initialize(target);
    NJSDatabaseResultRow::Initialize(target);
    NJSDatabaseResultSet::Initialize(target);
    NJSDatabaseStatement::Initialize(target);
    NJSDatabaseConnection::Initialize(target);
    NJSDatabaseConnectionPool::Initialize(target);
    NJSDatabaseEngine::Initialize(target);
    NJSDatabaseBackend::Initialize(target);
    NJSEthereumPublicKeyProvider::Initialize(target);
    NJSCosmosLikeMessage::Initialize(target);
    NJSCosmosLikeTransaction::Initialize(target);
    NJSCosmosLikeOperation::Initialize(target);
    NJSCosmosLikeBlock::Initialize(target);
    NJSCosmosLikeTransactionBuilder::Initialize(target);
    NJSCosmosLikeTransactionCallback::Initialize(target);
    NJSCosmosLikeAccount::Initialize(target);
    NJSCosmosLikeValidatorListCallback::Initialize(target);
    NJSCosmosLikeValidatorCallback::Initialize(target);
    NJSCosmosLikeDelegationListCallback::Initialize(target);
    NJSCosmosLikeRewardListCallback::Initialize(target);
    NJSCosmosLikeUnbondingListCallback::Initialize(target);
    NJSCosmosLikeRedelegationListCallback::Initialize(target);
    NJSCosmosLikeDelegation::Initialize(target);
    NJSCosmosLikeReward::Initialize(target);
    NJSCosmosLikeUnbonding::Initialize(target);
    NJSCosmosLikeUnbondingEntry::Initialize(target);
    NJSCosmosLikeRedelegation::Initialize(target);
    NJSCosmosLikeRedelegationEntry::Initialize(target);
    NJSCosmosConfigurationDefaults::Initialize(target);
    NJSCosmosLikeWallet::Initialize(target);
    NJSERC20LikeAccount::Initialize(target);
    NJSBinaryCallback::Initialize(target);
    NJSERC20LikeOperation::Initialize(target);
    NJSGetEthreumLikeWalletCallback::Initialize(target);
    NJSEthereumLikeWallet::Initialize(target);
    NJSEthereumLikeTransaction::Initialize(target);
    NJSInternalTransaction::Initialize(target);
    NJSEthereumLikeOperation::Initialize(target);
    NJSEthereumLikeBlock::Initialize(target);
    NJSEthereumLikeTransactionBuilder::Initialize(target);
    NJSEthereumLikeTransactionCallback::Initialize(target);
    NJSEthereumLikeAccount::Initialize(target);
    NJSBigIntListCallback::Initialize(target);
    NJSBitcoinLikeScriptChunk::Initialize(target);
    NJSBitcoinLikeScript::Initialize(target);
    NJSTezosLikeAddress::Initialize(target);
    NJSTezosLikeExtendedPublicKey::Initialize(target);
    NJSRippleLikeAddress::Initialize(target);
    NJSRippleLikeExtendedPublicKey::Initialize(target);
    NJSEthereumLikeAddress::Initialize(target);
    NJSEthereumLikeExtendedPublicKey::Initialize(target);
    NJSCosmosLikeAddress::Initialize(target);
    NJSCosmosLikeExtendedPublicKey::Initialize(target);
    NJSBitcoinLikeAddress::Initialize(target);
    NJSBitcoinLikeExtendedPublicKey::Initialize(target);
    NJSAmount::Initialize(target);
    NJSRandomNumberGenerator::Initialize(target);
    NJSPreferences::Initialize(target);
    NJSPreferencesEditor::Initialize(target);
    NJSPreferencesBackend::Initialize(target);
    NJSBitcoinLikeWalletConfiguration::Initialize(target);
    NJSBitcoinLikeInput::Initialize(target);
    NJSBitcoinLikeOutput::Initialize(target);
    NJSBitcoinLikeBlock::Initialize(target);
    NJSBitcoinLikeTransaction::Initialize(target);
    NJSBitcoinLikeOperation::Initialize(target);
    NJSBitcoinLikeTransactionBuilder::Initialize(target);
    NJSBitcoinLikeTransactionCallback::Initialize(target);
    NJSBitcoinLikeAccount::Initialize(target);
    NJSBitcoinLikeOutputListCallback::Initialize(target);
    NJSBitcoinLikeWallet::Initialize(target);
    NJSWalletPool::Initialize(target);
    NJSWalletListCallback::Initialize(target);
    NJSWalletCallback::Initialize(target);
    NJSCurrencyListCallback::Initialize(target);
    NJSCurrencyCallback::Initialize(target);
    NJSWalletPoolBuilder::Initialize(target);
    NJSWalletPoolCallback::Initialize(target);
    NJSWebSocketConnection::Initialize(target);
    NJSWebSocketClient::Initialize(target);
    NJSHttpUrlConnection::Initialize(target);
    NJSHttpRequest::Initialize(target);
    NJSHttpClient::Initialize(target);
    NJSBigInt::Initialize(target);
    NJSPathResolver::Initialize(target);
    NJSRunnable::Initialize(target);
    NJSLock::Initialize(target);
    NJSExecutionContext::Initialize(target);
    NJSThreadDispatcher::Initialize(target);
    NJSLogPrinter::Initialize(target);
    NJSLogger::Initialize(target);
    NJSLedgerCore::Initialize(target);
}
NODE_MODULE(ledgercore,initAll);
