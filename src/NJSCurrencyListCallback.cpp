// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#include "NJSCurrencyListCallback.hpp"
#include "NJSObjectWrapper.hpp"
#include "NJSHexUtils.hpp"

using namespace v8;
using namespace node;
using namespace std;

void NJSCurrencyListCallback::onCallback(const std::experimental::optional<std::vector<::ledger::core::api::Currency>> & result, const std::experimental::optional<::ledger::core::api::Error> & error)
{
    Nan::HandleScope scope;
    //Wrap parameters
    Local<Value> arg_0;
    if(result)
    {
        auto arg_0_optional = (result).value();
        Local<Array> arg_0_tmp = Nan::New<Array>();
        for(size_t arg_0_tmp_id = 0; arg_0_tmp_id < arg_0_optional.size(); arg_0_tmp_id++)
        {
            auto arg_0_tmp_elem = Nan::New<Object>();
            auto arg_0_tmp_elem_1 = Nan::New<Integer>((int)arg_0_optional[arg_0_tmp_id].walletType);
            Nan::DefineOwnProperty(arg_0_tmp_elem, Nan::New<String>("walletType").ToLocalChecked(), arg_0_tmp_elem_1);
            auto arg_0_tmp_elem_2 = Nan::New<String>(arg_0_optional[arg_0_tmp_id].name).ToLocalChecked();
            Nan::DefineOwnProperty(arg_0_tmp_elem, Nan::New<String>("name").ToLocalChecked(), arg_0_tmp_elem_2);
            auto arg_0_tmp_elem_3 = Nan::New<Int32>(arg_0_optional[arg_0_tmp_id].bip44CoinType);
            Nan::DefineOwnProperty(arg_0_tmp_elem, Nan::New<String>("bip44CoinType").ToLocalChecked(), arg_0_tmp_elem_3);
            auto arg_0_tmp_elem_4 = Nan::New<String>(arg_0_optional[arg_0_tmp_id].paymentUriScheme).ToLocalChecked();
            Nan::DefineOwnProperty(arg_0_tmp_elem, Nan::New<String>("paymentUriScheme").ToLocalChecked(), arg_0_tmp_elem_4);
            Local<Array> arg_0_tmp_elem_5 = Nan::New<Array>();
            for(size_t arg_0_tmp_elem_5_id = 0; arg_0_tmp_elem_5_id < arg_0_optional[arg_0_tmp_id].units.size(); arg_0_tmp_elem_5_id++)
            {
                auto arg_0_tmp_elem_5_elem = Nan::New<Object>();
                auto arg_0_tmp_elem_5_elem_1 = Nan::New<String>(arg_0_optional[arg_0_tmp_id].units[arg_0_tmp_elem_5_id].name).ToLocalChecked();
                Nan::DefineOwnProperty(arg_0_tmp_elem_5_elem, Nan::New<String>("name").ToLocalChecked(), arg_0_tmp_elem_5_elem_1);
                auto arg_0_tmp_elem_5_elem_2 = Nan::New<String>(arg_0_optional[arg_0_tmp_id].units[arg_0_tmp_elem_5_id].symbol).ToLocalChecked();
                Nan::DefineOwnProperty(arg_0_tmp_elem_5_elem, Nan::New<String>("symbol").ToLocalChecked(), arg_0_tmp_elem_5_elem_2);
                auto arg_0_tmp_elem_5_elem_3 = Nan::New<String>(arg_0_optional[arg_0_tmp_id].units[arg_0_tmp_elem_5_id].code).ToLocalChecked();
                Nan::DefineOwnProperty(arg_0_tmp_elem_5_elem, Nan::New<String>("code").ToLocalChecked(), arg_0_tmp_elem_5_elem_3);
                auto arg_0_tmp_elem_5_elem_4 = Nan::New<Int32>(arg_0_optional[arg_0_tmp_id].units[arg_0_tmp_elem_5_id].numberOfDecimal);
                Nan::DefineOwnProperty(arg_0_tmp_elem_5_elem, Nan::New<String>("numberOfDecimal").ToLocalChecked(), arg_0_tmp_elem_5_elem_4);

                Nan::Set(arg_0_tmp_elem_5, (int)arg_0_tmp_elem_5_id,arg_0_tmp_elem_5_elem);
            }

            Nan::DefineOwnProperty(arg_0_tmp_elem, Nan::New<String>("units").ToLocalChecked(), arg_0_tmp_elem_5);
            Local<Value> arg_0_tmp_elem_6;
            if(arg_0_optional[arg_0_tmp_id].bitcoinLikeNetworkParameters)
            {
                auto arg_0_tmp_elem_6_optional = (arg_0_optional[arg_0_tmp_id].bitcoinLikeNetworkParameters).value();
                auto arg_0_tmp_elem_6_tmp = Nan::New<Object>();
                auto arg_0_tmp_elem_6_tmp_1 = Nan::New<String>(arg_0_tmp_elem_6_optional.Identifier).ToLocalChecked();
                Nan::DefineOwnProperty(arg_0_tmp_elem_6_tmp, Nan::New<String>("Identifier").ToLocalChecked(), arg_0_tmp_elem_6_tmp_1);
                auto arg_0_tmp_elem_6_tmp_2 = Nan::New<String>("0x" + djinni::js::hex::toString(arg_0_tmp_elem_6_optional.P2PKHVersion)).ToLocalChecked();

                Nan::DefineOwnProperty(arg_0_tmp_elem_6_tmp, Nan::New<String>("P2PKHVersion").ToLocalChecked(), arg_0_tmp_elem_6_tmp_2);
                auto arg_0_tmp_elem_6_tmp_3 = Nan::New<String>("0x" + djinni::js::hex::toString(arg_0_tmp_elem_6_optional.P2SHVersion)).ToLocalChecked();

                Nan::DefineOwnProperty(arg_0_tmp_elem_6_tmp, Nan::New<String>("P2SHVersion").ToLocalChecked(), arg_0_tmp_elem_6_tmp_3);
                auto arg_0_tmp_elem_6_tmp_4 = Nan::New<String>("0x" + djinni::js::hex::toString(arg_0_tmp_elem_6_optional.XPUBVersion)).ToLocalChecked();

                Nan::DefineOwnProperty(arg_0_tmp_elem_6_tmp, Nan::New<String>("XPUBVersion").ToLocalChecked(), arg_0_tmp_elem_6_tmp_4);
                auto arg_0_tmp_elem_6_tmp_5 = Nan::New<Integer>((int)arg_0_tmp_elem_6_optional.FeePolicy);
                Nan::DefineOwnProperty(arg_0_tmp_elem_6_tmp, Nan::New<String>("FeePolicy").ToLocalChecked(), arg_0_tmp_elem_6_tmp_5);
                auto arg_0_tmp_elem_6_tmp_6 = Nan::New<Number>(arg_0_tmp_elem_6_optional.DustAmount);
                Nan::DefineOwnProperty(arg_0_tmp_elem_6_tmp, Nan::New<String>("DustAmount").ToLocalChecked(), arg_0_tmp_elem_6_tmp_6);
                auto arg_0_tmp_elem_6_tmp_7 = Nan::New<String>(arg_0_tmp_elem_6_optional.MessagePrefix).ToLocalChecked();
                Nan::DefineOwnProperty(arg_0_tmp_elem_6_tmp, Nan::New<String>("MessagePrefix").ToLocalChecked(), arg_0_tmp_elem_6_tmp_7);
                auto arg_0_tmp_elem_6_tmp_8 = Nan::New<Boolean>(arg_0_tmp_elem_6_optional.UsesTimestampedTransaction);
                Nan::DefineOwnProperty(arg_0_tmp_elem_6_tmp, Nan::New<String>("UsesTimestampedTransaction").ToLocalChecked(), arg_0_tmp_elem_6_tmp_8);
                auto arg_0_tmp_elem_6_tmp_9 = Nan::New<Number>(arg_0_tmp_elem_6_optional.TimestampDelay);
                Nan::DefineOwnProperty(arg_0_tmp_elem_6_tmp, Nan::New<String>("TimestampDelay").ToLocalChecked(), arg_0_tmp_elem_6_tmp_9);
                auto arg_0_tmp_elem_6_tmp_10 = Nan::New<String>("0x" + djinni::js::hex::toString(arg_0_tmp_elem_6_optional.SigHash)).ToLocalChecked();

                Nan::DefineOwnProperty(arg_0_tmp_elem_6_tmp, Nan::New<String>("SigHash").ToLocalChecked(), arg_0_tmp_elem_6_tmp_10);
                Local<Array> arg_0_tmp_elem_6_tmp_11 = Nan::New<Array>();
                for(size_t arg_0_tmp_elem_6_tmp_11_id = 0; arg_0_tmp_elem_6_tmp_11_id < arg_0_tmp_elem_6_optional.AdditionalBIPs.size(); arg_0_tmp_elem_6_tmp_11_id++)
                {
                    auto arg_0_tmp_elem_6_tmp_11_elem = Nan::New<String>(arg_0_tmp_elem_6_optional.AdditionalBIPs[arg_0_tmp_elem_6_tmp_11_id]).ToLocalChecked();
                    Nan::Set(arg_0_tmp_elem_6_tmp_11, (int)arg_0_tmp_elem_6_tmp_11_id,arg_0_tmp_elem_6_tmp_11_elem);
                }

                Nan::DefineOwnProperty(arg_0_tmp_elem_6_tmp, Nan::New<String>("AdditionalBIPs").ToLocalChecked(), arg_0_tmp_elem_6_tmp_11);

                arg_0_tmp_elem_6 = arg_0_tmp_elem_6_tmp;
            }

            Nan::DefineOwnProperty(arg_0_tmp_elem, Nan::New<String>("bitcoinLikeNetworkParameters").ToLocalChecked(), arg_0_tmp_elem_6);
            Local<Value> arg_0_tmp_elem_7;
            if(arg_0_optional[arg_0_tmp_id].cosmosLikeNetworkParameters)
            {
                auto arg_0_tmp_elem_7_optional = (arg_0_optional[arg_0_tmp_id].cosmosLikeNetworkParameters).value();
                auto arg_0_tmp_elem_7_tmp = Nan::New<Object>();
                auto arg_0_tmp_elem_7_tmp_1 = Nan::New<String>(arg_0_tmp_elem_7_optional.Identifier).ToLocalChecked();
                Nan::DefineOwnProperty(arg_0_tmp_elem_7_tmp, Nan::New<String>("Identifier").ToLocalChecked(), arg_0_tmp_elem_7_tmp_1);
                auto arg_0_tmp_elem_7_tmp_2 = Nan::New<String>(arg_0_tmp_elem_7_optional.MessagePrefix).ToLocalChecked();
                Nan::DefineOwnProperty(arg_0_tmp_elem_7_tmp, Nan::New<String>("MessagePrefix").ToLocalChecked(), arg_0_tmp_elem_7_tmp_2);
                auto arg_0_tmp_elem_7_tmp_3 = Nan::New<String>("0x" + djinni::js::hex::toString(arg_0_tmp_elem_7_optional.XPUBVersion)).ToLocalChecked();

                Nan::DefineOwnProperty(arg_0_tmp_elem_7_tmp, Nan::New<String>("XPUBVersion").ToLocalChecked(), arg_0_tmp_elem_7_tmp_3);
                auto arg_0_tmp_elem_7_tmp_4 = Nan::New<String>("0x" + djinni::js::hex::toString(arg_0_tmp_elem_7_optional.PubKeyPrefix)).ToLocalChecked();

                Nan::DefineOwnProperty(arg_0_tmp_elem_7_tmp, Nan::New<String>("PubKeyPrefix").ToLocalChecked(), arg_0_tmp_elem_7_tmp_4);
                auto arg_0_tmp_elem_7_tmp_5 = Nan::New<String>("0x" + djinni::js::hex::toString(arg_0_tmp_elem_7_optional.AddressPrefix)).ToLocalChecked();

                Nan::DefineOwnProperty(arg_0_tmp_elem_7_tmp, Nan::New<String>("AddressPrefix").ToLocalChecked(), arg_0_tmp_elem_7_tmp_5);
                auto arg_0_tmp_elem_7_tmp_6 = Nan::New<String>(arg_0_tmp_elem_7_optional.ChainId).ToLocalChecked();
                Nan::DefineOwnProperty(arg_0_tmp_elem_7_tmp, Nan::New<String>("ChainId").ToLocalChecked(), arg_0_tmp_elem_7_tmp_6);
                Local<Array> arg_0_tmp_elem_7_tmp_7 = Nan::New<Array>();
                for(size_t arg_0_tmp_elem_7_tmp_7_id = 0; arg_0_tmp_elem_7_tmp_7_id < arg_0_tmp_elem_7_optional.AdditionalCIPs.size(); arg_0_tmp_elem_7_tmp_7_id++)
                {
                    auto arg_0_tmp_elem_7_tmp_7_elem = Nan::New<String>(arg_0_tmp_elem_7_optional.AdditionalCIPs[arg_0_tmp_elem_7_tmp_7_id]).ToLocalChecked();
                    Nan::Set(arg_0_tmp_elem_7_tmp_7, (int)arg_0_tmp_elem_7_tmp_7_id,arg_0_tmp_elem_7_tmp_7_elem);
                }

                Nan::DefineOwnProperty(arg_0_tmp_elem_7_tmp, Nan::New<String>("AdditionalCIPs").ToLocalChecked(), arg_0_tmp_elem_7_tmp_7);

                arg_0_tmp_elem_7 = arg_0_tmp_elem_7_tmp;
            }

            Nan::DefineOwnProperty(arg_0_tmp_elem, Nan::New<String>("cosmosLikeNetworkParameters").ToLocalChecked(), arg_0_tmp_elem_7);
            Local<Value> arg_0_tmp_elem_8;
            if(arg_0_optional[arg_0_tmp_id].ethereumLikeNetworkParameters)
            {
                auto arg_0_tmp_elem_8_optional = (arg_0_optional[arg_0_tmp_id].ethereumLikeNetworkParameters).value();
                auto arg_0_tmp_elem_8_tmp = Nan::New<Object>();
                auto arg_0_tmp_elem_8_tmp_1 = Nan::New<String>(arg_0_tmp_elem_8_optional.Identifier).ToLocalChecked();
                Nan::DefineOwnProperty(arg_0_tmp_elem_8_tmp, Nan::New<String>("Identifier").ToLocalChecked(), arg_0_tmp_elem_8_tmp_1);
                auto arg_0_tmp_elem_8_tmp_2 = Nan::New<String>(arg_0_tmp_elem_8_optional.MessagePrefix).ToLocalChecked();
                Nan::DefineOwnProperty(arg_0_tmp_elem_8_tmp, Nan::New<String>("MessagePrefix").ToLocalChecked(), arg_0_tmp_elem_8_tmp_2);
                auto arg_0_tmp_elem_8_tmp_3 = Nan::New<String>(arg_0_tmp_elem_8_optional.ChainID).ToLocalChecked();
                Nan::DefineOwnProperty(arg_0_tmp_elem_8_tmp, Nan::New<String>("ChainID").ToLocalChecked(), arg_0_tmp_elem_8_tmp_3);
                auto arg_0_tmp_elem_8_tmp_4 = Nan::New<String>("0x" + djinni::js::hex::toString(arg_0_tmp_elem_8_optional.XPUBVersion)).ToLocalChecked();

                Nan::DefineOwnProperty(arg_0_tmp_elem_8_tmp, Nan::New<String>("XPUBVersion").ToLocalChecked(), arg_0_tmp_elem_8_tmp_4);
                Local<Array> arg_0_tmp_elem_8_tmp_5 = Nan::New<Array>();
                for(size_t arg_0_tmp_elem_8_tmp_5_id = 0; arg_0_tmp_elem_8_tmp_5_id < arg_0_tmp_elem_8_optional.AdditionalEIPs.size(); arg_0_tmp_elem_8_tmp_5_id++)
                {
                    auto arg_0_tmp_elem_8_tmp_5_elem = Nan::New<String>(arg_0_tmp_elem_8_optional.AdditionalEIPs[arg_0_tmp_elem_8_tmp_5_id]).ToLocalChecked();
                    Nan::Set(arg_0_tmp_elem_8_tmp_5, (int)arg_0_tmp_elem_8_tmp_5_id,arg_0_tmp_elem_8_tmp_5_elem);
                }

                Nan::DefineOwnProperty(arg_0_tmp_elem_8_tmp, Nan::New<String>("AdditionalEIPs").ToLocalChecked(), arg_0_tmp_elem_8_tmp_5);
                auto arg_0_tmp_elem_8_tmp_6 = Nan::New<Number>(arg_0_tmp_elem_8_optional.TimestampDelay);
                Nan::DefineOwnProperty(arg_0_tmp_elem_8_tmp, Nan::New<String>("TimestampDelay").ToLocalChecked(), arg_0_tmp_elem_8_tmp_6);

                arg_0_tmp_elem_8 = arg_0_tmp_elem_8_tmp;
            }

            Nan::DefineOwnProperty(arg_0_tmp_elem, Nan::New<String>("ethereumLikeNetworkParameters").ToLocalChecked(), arg_0_tmp_elem_8);
            Local<Value> arg_0_tmp_elem_9;
            if(arg_0_optional[arg_0_tmp_id].rippleLikeNetworkParameters)
            {
                auto arg_0_tmp_elem_9_optional = (arg_0_optional[arg_0_tmp_id].rippleLikeNetworkParameters).value();
                auto arg_0_tmp_elem_9_tmp = Nan::New<Object>();
                auto arg_0_tmp_elem_9_tmp_1 = Nan::New<String>(arg_0_tmp_elem_9_optional.Identifier).ToLocalChecked();
                Nan::DefineOwnProperty(arg_0_tmp_elem_9_tmp, Nan::New<String>("Identifier").ToLocalChecked(), arg_0_tmp_elem_9_tmp_1);
                auto arg_0_tmp_elem_9_tmp_2 = Nan::New<String>(arg_0_tmp_elem_9_optional.MessagePrefix).ToLocalChecked();
                Nan::DefineOwnProperty(arg_0_tmp_elem_9_tmp, Nan::New<String>("MessagePrefix").ToLocalChecked(), arg_0_tmp_elem_9_tmp_2);
                auto arg_0_tmp_elem_9_tmp_3 = Nan::New<String>("0x" + djinni::js::hex::toString(arg_0_tmp_elem_9_optional.XPUBVersion)).ToLocalChecked();

                Nan::DefineOwnProperty(arg_0_tmp_elem_9_tmp, Nan::New<String>("XPUBVersion").ToLocalChecked(), arg_0_tmp_elem_9_tmp_3);
                Local<Array> arg_0_tmp_elem_9_tmp_4 = Nan::New<Array>();
                for(size_t arg_0_tmp_elem_9_tmp_4_id = 0; arg_0_tmp_elem_9_tmp_4_id < arg_0_tmp_elem_9_optional.AdditionalRIPs.size(); arg_0_tmp_elem_9_tmp_4_id++)
                {
                    auto arg_0_tmp_elem_9_tmp_4_elem = Nan::New<String>(arg_0_tmp_elem_9_optional.AdditionalRIPs[arg_0_tmp_elem_9_tmp_4_id]).ToLocalChecked();
                    Nan::Set(arg_0_tmp_elem_9_tmp_4, (int)arg_0_tmp_elem_9_tmp_4_id,arg_0_tmp_elem_9_tmp_4_elem);
                }

                Nan::DefineOwnProperty(arg_0_tmp_elem_9_tmp, Nan::New<String>("AdditionalRIPs").ToLocalChecked(), arg_0_tmp_elem_9_tmp_4);
                auto arg_0_tmp_elem_9_tmp_5 = Nan::New<Number>(arg_0_tmp_elem_9_optional.TimestampDelay);
                Nan::DefineOwnProperty(arg_0_tmp_elem_9_tmp, Nan::New<String>("TimestampDelay").ToLocalChecked(), arg_0_tmp_elem_9_tmp_5);

                arg_0_tmp_elem_9 = arg_0_tmp_elem_9_tmp;
            }

            Nan::DefineOwnProperty(arg_0_tmp_elem, Nan::New<String>("rippleLikeNetworkParameters").ToLocalChecked(), arg_0_tmp_elem_9);
            Local<Value> arg_0_tmp_elem_10;
            if(arg_0_optional[arg_0_tmp_id].tezosLikeNetworkParameters)
            {
                auto arg_0_tmp_elem_10_optional = (arg_0_optional[arg_0_tmp_id].tezosLikeNetworkParameters).value();
                auto arg_0_tmp_elem_10_tmp = Nan::New<Object>();
                auto arg_0_tmp_elem_10_tmp_1 = Nan::New<String>(arg_0_tmp_elem_10_optional.Identifier).ToLocalChecked();
                Nan::DefineOwnProperty(arg_0_tmp_elem_10_tmp, Nan::New<String>("Identifier").ToLocalChecked(), arg_0_tmp_elem_10_tmp_1);
                auto arg_0_tmp_elem_10_tmp_2 = Nan::New<String>(arg_0_tmp_elem_10_optional.MessagePrefix).ToLocalChecked();
                Nan::DefineOwnProperty(arg_0_tmp_elem_10_tmp, Nan::New<String>("MessagePrefix").ToLocalChecked(), arg_0_tmp_elem_10_tmp_2);
                auto arg_0_tmp_elem_10_tmp_3 = Nan::New<String>("0x" + djinni::js::hex::toString(arg_0_tmp_elem_10_optional.XPUBVersion)).ToLocalChecked();

                Nan::DefineOwnProperty(arg_0_tmp_elem_10_tmp, Nan::New<String>("XPUBVersion").ToLocalChecked(), arg_0_tmp_elem_10_tmp_3);
                auto arg_0_tmp_elem_10_tmp_4 = Nan::New<String>("0x" + djinni::js::hex::toString(arg_0_tmp_elem_10_optional.ImplicitPrefix)).ToLocalChecked();

                Nan::DefineOwnProperty(arg_0_tmp_elem_10_tmp, Nan::New<String>("ImplicitPrefix").ToLocalChecked(), arg_0_tmp_elem_10_tmp_4);
                auto arg_0_tmp_elem_10_tmp_5 = Nan::New<String>("0x" + djinni::js::hex::toString(arg_0_tmp_elem_10_optional.OriginatedPrefix)).ToLocalChecked();

                Nan::DefineOwnProperty(arg_0_tmp_elem_10_tmp, Nan::New<String>("OriginatedPrefix").ToLocalChecked(), arg_0_tmp_elem_10_tmp_5);
                Local<Array> arg_0_tmp_elem_10_tmp_6 = Nan::New<Array>();
                for(size_t arg_0_tmp_elem_10_tmp_6_id = 0; arg_0_tmp_elem_10_tmp_6_id < arg_0_tmp_elem_10_optional.AdditionalTIPs.size(); arg_0_tmp_elem_10_tmp_6_id++)
                {
                    auto arg_0_tmp_elem_10_tmp_6_elem = Nan::New<String>(arg_0_tmp_elem_10_optional.AdditionalTIPs[arg_0_tmp_elem_10_tmp_6_id]).ToLocalChecked();
                    Nan::Set(arg_0_tmp_elem_10_tmp_6, (int)arg_0_tmp_elem_10_tmp_6_id,arg_0_tmp_elem_10_tmp_6_elem);
                }

                Nan::DefineOwnProperty(arg_0_tmp_elem_10_tmp, Nan::New<String>("AdditionalTIPs").ToLocalChecked(), arg_0_tmp_elem_10_tmp_6);
                auto arg_0_tmp_elem_10_tmp_7 = Nan::New<Number>(arg_0_tmp_elem_10_optional.TimestampDelay);
                Nan::DefineOwnProperty(arg_0_tmp_elem_10_tmp, Nan::New<String>("TimestampDelay").ToLocalChecked(), arg_0_tmp_elem_10_tmp_7);

                arg_0_tmp_elem_10 = arg_0_tmp_elem_10_tmp;
            }

            Nan::DefineOwnProperty(arg_0_tmp_elem, Nan::New<String>("tezosLikeNetworkParameters").ToLocalChecked(), arg_0_tmp_elem_10);
            Local<Value> arg_0_tmp_elem_11;
            if(arg_0_optional[arg_0_tmp_id].stellarLikeNetworkParameters)
            {
                auto arg_0_tmp_elem_11_optional = (arg_0_optional[arg_0_tmp_id].stellarLikeNetworkParameters).value();
                auto arg_0_tmp_elem_11_tmp = Nan::New<Object>();
                auto arg_0_tmp_elem_11_tmp_1 = Nan::New<String>(arg_0_tmp_elem_11_optional.Identifier).ToLocalChecked();
                Nan::DefineOwnProperty(arg_0_tmp_elem_11_tmp, Nan::New<String>("Identifier").ToLocalChecked(), arg_0_tmp_elem_11_tmp_1);
                auto arg_0_tmp_elem_11_tmp_2 = Nan::New<String>("0x" + djinni::js::hex::toString(arg_0_tmp_elem_11_optional.Version)).ToLocalChecked();

                Nan::DefineOwnProperty(arg_0_tmp_elem_11_tmp, Nan::New<String>("Version").ToLocalChecked(), arg_0_tmp_elem_11_tmp_2);
                auto arg_0_tmp_elem_11_tmp_3 = Nan::New<String>("0x" + djinni::js::hex::toString(arg_0_tmp_elem_11_optional.MuxedVersion)).ToLocalChecked();

                Nan::DefineOwnProperty(arg_0_tmp_elem_11_tmp, Nan::New<String>("MuxedVersion").ToLocalChecked(), arg_0_tmp_elem_11_tmp_3);
                auto arg_0_tmp_elem_11_tmp_4 = Nan::New<Number>(arg_0_tmp_elem_11_optional.BaseReserve);
                Nan::DefineOwnProperty(arg_0_tmp_elem_11_tmp, Nan::New<String>("BaseReserve").ToLocalChecked(), arg_0_tmp_elem_11_tmp_4);
                auto arg_0_tmp_elem_11_tmp_5 = Nan::New<Number>(arg_0_tmp_elem_11_optional.BaseFee);
                Nan::DefineOwnProperty(arg_0_tmp_elem_11_tmp, Nan::New<String>("BaseFee").ToLocalChecked(), arg_0_tmp_elem_11_tmp_5);
                Local<Array> arg_0_tmp_elem_11_tmp_6 = Nan::New<Array>();
                for(size_t arg_0_tmp_elem_11_tmp_6_id = 0; arg_0_tmp_elem_11_tmp_6_id < arg_0_tmp_elem_11_optional.AdditionalSEPs.size(); arg_0_tmp_elem_11_tmp_6_id++)
                {
                    auto arg_0_tmp_elem_11_tmp_6_elem = Nan::New<String>(arg_0_tmp_elem_11_optional.AdditionalSEPs[arg_0_tmp_elem_11_tmp_6_id]).ToLocalChecked();
                    Nan::Set(arg_0_tmp_elem_11_tmp_6, (int)arg_0_tmp_elem_11_tmp_6_id,arg_0_tmp_elem_11_tmp_6_elem);
                }

                Nan::DefineOwnProperty(arg_0_tmp_elem_11_tmp, Nan::New<String>("AdditionalSEPs").ToLocalChecked(), arg_0_tmp_elem_11_tmp_6);
                auto arg_0_tmp_elem_11_tmp_7 = Nan::New<String>(arg_0_tmp_elem_11_optional.NetworkPassphrase).ToLocalChecked();
                Nan::DefineOwnProperty(arg_0_tmp_elem_11_tmp, Nan::New<String>("NetworkPassphrase").ToLocalChecked(), arg_0_tmp_elem_11_tmp_7);

                arg_0_tmp_elem_11 = arg_0_tmp_elem_11_tmp;
            }

            Nan::DefineOwnProperty(arg_0_tmp_elem, Nan::New<String>("stellarLikeNetworkParameters").ToLocalChecked(), arg_0_tmp_elem_11);

            Nan::Set(arg_0_tmp, (int)arg_0_tmp_id,arg_0_tmp_elem);
        }

        arg_0 = arg_0_tmp;
    }

    Local<Value> arg_1;
    if(error)
    {
        auto arg_1_optional = (error).value();
        auto arg_1_tmp = Nan::New<Object>();
        auto arg_1_tmp_1 = Nan::New<Integer>((int)arg_1_optional.code);
        Nan::DefineOwnProperty(arg_1_tmp, Nan::New<String>("code").ToLocalChecked(), arg_1_tmp_1);
        auto arg_1_tmp_2 = Nan::New<String>(arg_1_optional.message).ToLocalChecked();
        Nan::DefineOwnProperty(arg_1_tmp, Nan::New<String>("message").ToLocalChecked(), arg_1_tmp_2);

        arg_1 = arg_1_tmp;
    }

    auto local_resolver = Nan::New<Promise::Resolver>(pers_resolver);
    if(error)
    {
        auto rejected = local_resolver->Reject(Nan::GetCurrentContext(), arg_1);
        rejected.FromJust();
    }
    else
    {
        auto resolve = local_resolver->Resolve(Nan::GetCurrentContext(), arg_0);
        resolve.FromJust();
    }
}

NAN_METHOD(NJSCurrencyListCallback::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSCurrencyListCallback function can only be called as constructor (use New)");
    }

    auto resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    auto node_instance = std::make_shared<NJSCurrencyListCallback>(resolver);
    djinni::js::ObjectWrapper<NJSCurrencyListCallback>::Wrap(node_instance, info.This());
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSCurrencyListCallback::CurrencyListCallback_prototype;

Local<Object> NJSCurrencyListCallback::wrap(const std::shared_ptr<ledger::core::api::CurrencyListCallback> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(CurrencyListCallback_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::CurrencyListCallback>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSCurrencyListCallback::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

void NJSCurrencyListCallback::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSCurrencyListCallback::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSCurrencyListCallback").ToLocalChecked());
    Nan::SetPrototypeMethod(func_template,"New", New);
    //Set object prototype
    CurrencyListCallback_prototype.Reset(objectTemplate);

    //Add template to target
    Nan::Set(target, Nan::New<String>("NJSCurrencyListCallback").ToLocalChecked(), Nan::GetFunction(func_template).ToLocalChecked());
}
