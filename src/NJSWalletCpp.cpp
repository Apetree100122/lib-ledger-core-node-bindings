// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#include "NJSWalletCpp.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSWallet::getName) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWallet::getName needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<Wallet>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWallet::getName : implementation of Wallet is not valid");
    }

    auto result = cpp_impl->getName();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSWallet::getAccount) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSWallet::getAccount needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int32_t>(info[0]).FromJust();

    //Create promise and set it into Callback
    auto arg_1_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSAccountCallback *njs_ptr_arg_1 = new NJSAccountCallback(arg_1_resolver);
    std::shared_ptr<NJSAccountCallback> arg_1(njs_ptr_arg_1);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<Wallet>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWallet::getAccount : implementation of Wallet is not valid");
    }
    cpp_impl->getAccount(arg_0,arg_1);
    info.GetReturnValue().Set(arg_1_resolver->GetPromise());
}
NAN_METHOD(NJSWallet::getAccountCount) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWallet::getAccountCount needs 0 arguments");
    }

    //Check if parameters have correct types

    //Create promise and set it into Callback
    auto arg_0_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSI32Callback *njs_ptr_arg_0 = new NJSI32Callback(arg_0_resolver);
    std::shared_ptr<NJSI32Callback> arg_0(njs_ptr_arg_0);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<Wallet>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWallet::getAccountCount : implementation of Wallet is not valid");
    }
    cpp_impl->getAccountCount(arg_0);
    info.GetReturnValue().Set(arg_0_resolver->GetPromise());
}
NAN_METHOD(NJSWallet::getAccounts) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSWallet::getAccounts needs 2 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int32_t>(info[0]).FromJust();
    auto arg_1 = Nan::To<int32_t>(info[1]).FromJust();

    //Create promise and set it into Callback
    auto arg_2_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSAccountListCallback *njs_ptr_arg_2 = new NJSAccountListCallback(arg_2_resolver);
    std::shared_ptr<NJSAccountListCallback> arg_2(njs_ptr_arg_2);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<Wallet>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWallet::getAccounts : implementation of Wallet is not valid");
    }
    cpp_impl->getAccounts(arg_0,arg_1,arg_2);
    info.GetReturnValue().Set(arg_2_resolver->GetPromise());
}
NAN_METHOD(NJSWallet::getNextAccountIndex) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWallet::getNextAccountIndex needs 0 arguments");
    }

    //Check if parameters have correct types

    //Create promise and set it into Callback
    auto arg_0_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSI32Callback *njs_ptr_arg_0 = new NJSI32Callback(arg_0_resolver);
    std::shared_ptr<NJSI32Callback> arg_0(njs_ptr_arg_0);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<Wallet>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWallet::getNextAccountIndex : implementation of Wallet is not valid");
    }
    cpp_impl->getNextAccountIndex(arg_0);
    info.GetReturnValue().Set(arg_0_resolver->GetPromise());
}
NAN_METHOD(NJSWallet::getEventBus) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWallet::getEventBus needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<Wallet>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWallet::getEventBus : implementation of Wallet is not valid");
    }

    auto result = cpp_impl->getEventBus();

    //Wrap result in node object
    auto arg_0 = NJSEventBus::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSWallet::isSynchronizing) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWallet::isSynchronizing needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<Wallet>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWallet::isSynchronizing : implementation of Wallet is not valid");
    }

    auto result = cpp_impl->isSynchronizing();

    //Wrap result in node object
    auto arg_0 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSWallet::synchronize) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWallet::synchronize needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<Wallet>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWallet::synchronize : implementation of Wallet is not valid");
    }

    auto result = cpp_impl->synchronize();

    //Wrap result in node object
    auto arg_0 = NJSEventBus::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSWallet::getPreferences) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWallet::getPreferences needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<Wallet>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWallet::getPreferences : implementation of Wallet is not valid");
    }

    auto result = cpp_impl->getPreferences();

    //Wrap result in node object
    auto arg_0 = NJSPreferences::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSWallet::getLogger) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWallet::getLogger needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<Wallet>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWallet::getLogger : implementation of Wallet is not valid");
    }

    auto result = cpp_impl->getLogger();

    //Wrap result in node object
    auto arg_0 = NJSLogger::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSWallet::getAccountPreferences) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSWallet::getAccountPreferences needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int32_t>(info[0]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<Wallet>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWallet::getAccountPreferences : implementation of Wallet is not valid");
    }

    auto result = cpp_impl->getAccountPreferences(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSPreferences::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSWallet::asBitcoinLikeWallet) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWallet::asBitcoinLikeWallet needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<Wallet>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWallet::asBitcoinLikeWallet : implementation of Wallet is not valid");
    }

    auto result = cpp_impl->asBitcoinLikeWallet();

    //Wrap result in node object
    auto arg_0 = NJSBitcoinLikeWallet::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSWallet::getCurrency) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWallet::getCurrency needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<Wallet>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWallet::getCurrency : implementation of Wallet is not valid");
    }

    auto result = cpp_impl->getCurrency();

    //Wrap result in node object
    auto arg_0 = Nan::New<Object>();
    auto arg_0_1 = Nan::New<Integer>((int)result.walletType);
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("walletType").ToLocalChecked(), arg_0_1);
    auto arg_0_2 = Nan::New<String>(result.name).ToLocalChecked();
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("name").ToLocalChecked(), arg_0_2);
    auto arg_0_3 = Nan::New<Int32>(result.bip44CoinType);
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("bip44CoinType").ToLocalChecked(), arg_0_3);
    auto arg_0_4 = Nan::New<String>(result.paymentUriScheme).ToLocalChecked();
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("paymentUriScheme").ToLocalChecked(), arg_0_4);
    Local<Array> arg_0_5 = Nan::New<Array>();
    for(size_t arg_0_5_id = 0; arg_0_5_id < result.units.size(); arg_0_5_id++)
    {
        auto arg_0_5_elem = Nan::New<Object>();
        auto arg_0_5_elem_1 = Nan::New<String>(result.units[arg_0_5_id].name).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_5_elem, Nan::New<String>("name").ToLocalChecked(), arg_0_5_elem_1);
        auto arg_0_5_elem_2 = Nan::New<String>(result.units[arg_0_5_id].symbol).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_5_elem, Nan::New<String>("symbol").ToLocalChecked(), arg_0_5_elem_2);
        auto arg_0_5_elem_3 = Nan::New<String>(result.units[arg_0_5_id].code).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_5_elem, Nan::New<String>("code").ToLocalChecked(), arg_0_5_elem_3);
        auto arg_0_5_elem_4 = Nan::New<Int32>(result.units[arg_0_5_id].numberOfDecimal);
        Nan::DefineOwnProperty(arg_0_5_elem, Nan::New<String>("numberOfDecimal").ToLocalChecked(), arg_0_5_elem_4);

        arg_0_5->Set((int)arg_0_5_id,arg_0_5_elem);
    }

    Nan::DefineOwnProperty(arg_0, Nan::New<String>("units").ToLocalChecked(), arg_0_5);
    Local<Value> arg_0_6;
    if(result.bitcoinLikeNetworkParameters)
    {
        auto arg_0_6_optional = (result.bitcoinLikeNetworkParameters).value();
        auto arg_0_6_tmp = Nan::New<Object>();
        auto arg_0_6_tmp_1 = Nan::New<String>(arg_0_6_optional.Identifier).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_6_tmp, Nan::New<String>("Identifier").ToLocalChecked(), arg_0_6_tmp_1);
        Local<Array> arg_0_6_tmp_2 = Nan::New<Array>();
        for(size_t arg_0_6_tmp_2_id = 0; arg_0_6_tmp_2_id < arg_0_6_optional.P2PKHVersion.size(); arg_0_6_tmp_2_id++)
        {
            auto arg_0_6_tmp_2_elem = Nan::New<Uint32>(arg_0_6_optional.P2PKHVersion[arg_0_6_tmp_2_id]);
            arg_0_6_tmp_2->Set((int)arg_0_6_tmp_2_id,arg_0_6_tmp_2_elem);
        }

        Nan::DefineOwnProperty(arg_0_6_tmp, Nan::New<String>("P2PKHVersion").ToLocalChecked(), arg_0_6_tmp_2);
        Local<Array> arg_0_6_tmp_3 = Nan::New<Array>();
        for(size_t arg_0_6_tmp_3_id = 0; arg_0_6_tmp_3_id < arg_0_6_optional.P2SHVersion.size(); arg_0_6_tmp_3_id++)
        {
            auto arg_0_6_tmp_3_elem = Nan::New<Uint32>(arg_0_6_optional.P2SHVersion[arg_0_6_tmp_3_id]);
            arg_0_6_tmp_3->Set((int)arg_0_6_tmp_3_id,arg_0_6_tmp_3_elem);
        }

        Nan::DefineOwnProperty(arg_0_6_tmp, Nan::New<String>("P2SHVersion").ToLocalChecked(), arg_0_6_tmp_3);
        Local<Array> arg_0_6_tmp_4 = Nan::New<Array>();
        for(size_t arg_0_6_tmp_4_id = 0; arg_0_6_tmp_4_id < arg_0_6_optional.XPUBVersion.size(); arg_0_6_tmp_4_id++)
        {
            auto arg_0_6_tmp_4_elem = Nan::New<Uint32>(arg_0_6_optional.XPUBVersion[arg_0_6_tmp_4_id]);
            arg_0_6_tmp_4->Set((int)arg_0_6_tmp_4_id,arg_0_6_tmp_4_elem);
        }

        Nan::DefineOwnProperty(arg_0_6_tmp, Nan::New<String>("XPUBVersion").ToLocalChecked(), arg_0_6_tmp_4);
        auto arg_0_6_tmp_5 = Nan::New<Integer>((int)arg_0_6_optional.FeePolicy);
        Nan::DefineOwnProperty(arg_0_6_tmp, Nan::New<String>("FeePolicy").ToLocalChecked(), arg_0_6_tmp_5);
        auto arg_0_6_tmp_6 = Nan::New<Number>(arg_0_6_optional.DustAmount);
        Nan::DefineOwnProperty(arg_0_6_tmp, Nan::New<String>("DustAmount").ToLocalChecked(), arg_0_6_tmp_6);
        auto arg_0_6_tmp_7 = Nan::New<String>(arg_0_6_optional.MessagePrefix).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_6_tmp, Nan::New<String>("MessagePrefix").ToLocalChecked(), arg_0_6_tmp_7);
        auto arg_0_6_tmp_8 = Nan::New<Boolean>(arg_0_6_optional.UsesTimestampedTransaction);
        Nan::DefineOwnProperty(arg_0_6_tmp, Nan::New<String>("UsesTimestampedTransaction").ToLocalChecked(), arg_0_6_tmp_8);
        auto arg_0_6_tmp_9 = Nan::New<Number>(arg_0_6_optional.TimestampDelay);
        Nan::DefineOwnProperty(arg_0_6_tmp, Nan::New<String>("TimestampDelay").ToLocalChecked(), arg_0_6_tmp_9);
        Local<Array> arg_0_6_tmp_10 = Nan::New<Array>();
        for(size_t arg_0_6_tmp_10_id = 0; arg_0_6_tmp_10_id < arg_0_6_optional.SigHash.size(); arg_0_6_tmp_10_id++)
        {
            auto arg_0_6_tmp_10_elem = Nan::New<Uint32>(arg_0_6_optional.SigHash[arg_0_6_tmp_10_id]);
            arg_0_6_tmp_10->Set((int)arg_0_6_tmp_10_id,arg_0_6_tmp_10_elem);
        }

        Nan::DefineOwnProperty(arg_0_6_tmp, Nan::New<String>("SigHash").ToLocalChecked(), arg_0_6_tmp_10);
        Local<Array> arg_0_6_tmp_11 = Nan::New<Array>();
        for(size_t arg_0_6_tmp_11_id = 0; arg_0_6_tmp_11_id < arg_0_6_optional.AdditionalBIPs.size(); arg_0_6_tmp_11_id++)
        {
            auto arg_0_6_tmp_11_elem = Nan::New<String>(arg_0_6_optional.AdditionalBIPs[arg_0_6_tmp_11_id]).ToLocalChecked();
            arg_0_6_tmp_11->Set((int)arg_0_6_tmp_11_id,arg_0_6_tmp_11_elem);
        }

        Nan::DefineOwnProperty(arg_0_6_tmp, Nan::New<String>("AdditionalBIPs").ToLocalChecked(), arg_0_6_tmp_11);

        arg_0_6 = arg_0_6_tmp;
    }

    Nan::DefineOwnProperty(arg_0, Nan::New<String>("bitcoinLikeNetworkParameters").ToLocalChecked(), arg_0_6);
    Local<Value> arg_0_7;
    if(result.ethereumLikeNetworkParameters)
    {
        auto arg_0_7_optional = (result.ethereumLikeNetworkParameters).value();
        auto arg_0_7_tmp = Nan::New<Object>();
        auto arg_0_7_tmp_1 = Nan::New<String>(arg_0_7_optional.Identifier).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_7_tmp, Nan::New<String>("Identifier").ToLocalChecked(), arg_0_7_tmp_1);
        auto arg_0_7_tmp_2 = Nan::New<String>(arg_0_7_optional.MessagePrefix).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_7_tmp, Nan::New<String>("MessagePrefix").ToLocalChecked(), arg_0_7_tmp_2);
        auto arg_0_7_tmp_3 = Nan::New<String>(arg_0_7_optional.ChainID).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_7_tmp, Nan::New<String>("ChainID").ToLocalChecked(), arg_0_7_tmp_3);
        Local<Array> arg_0_7_tmp_4 = Nan::New<Array>();
        for(size_t arg_0_7_tmp_4_id = 0; arg_0_7_tmp_4_id < arg_0_7_optional.XPUBVersion.size(); arg_0_7_tmp_4_id++)
        {
            auto arg_0_7_tmp_4_elem = Nan::New<Uint32>(arg_0_7_optional.XPUBVersion[arg_0_7_tmp_4_id]);
            arg_0_7_tmp_4->Set((int)arg_0_7_tmp_4_id,arg_0_7_tmp_4_elem);
        }

        Nan::DefineOwnProperty(arg_0_7_tmp, Nan::New<String>("XPUBVersion").ToLocalChecked(), arg_0_7_tmp_4);
        Local<Array> arg_0_7_tmp_5 = Nan::New<Array>();
        for(size_t arg_0_7_tmp_5_id = 0; arg_0_7_tmp_5_id < arg_0_7_optional.AdditionalEIPs.size(); arg_0_7_tmp_5_id++)
        {
            auto arg_0_7_tmp_5_elem = Nan::New<String>(arg_0_7_optional.AdditionalEIPs[arg_0_7_tmp_5_id]).ToLocalChecked();
            arg_0_7_tmp_5->Set((int)arg_0_7_tmp_5_id,arg_0_7_tmp_5_elem);
        }

        Nan::DefineOwnProperty(arg_0_7_tmp, Nan::New<String>("AdditionalEIPs").ToLocalChecked(), arg_0_7_tmp_5);
        auto arg_0_7_tmp_6 = Nan::New<Number>(arg_0_7_optional.TimestampDelay);
        Nan::DefineOwnProperty(arg_0_7_tmp, Nan::New<String>("TimestampDelay").ToLocalChecked(), arg_0_7_tmp_6);

        arg_0_7 = arg_0_7_tmp;
    }

    Nan::DefineOwnProperty(arg_0, Nan::New<String>("ethereumLikeNetworkParameters").ToLocalChecked(), arg_0_7);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSWallet::isInstanceOfBitcoinLikeWallet) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWallet::isInstanceOfBitcoinLikeWallet needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<Wallet>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWallet::isInstanceOfBitcoinLikeWallet : implementation of Wallet is not valid");
    }

    auto result = cpp_impl->isInstanceOfBitcoinLikeWallet();

    //Wrap result in node object
    auto arg_0 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSWallet::isInstanceOfEthereumLikeWallet) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWallet::isInstanceOfEthereumLikeWallet needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<Wallet>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWallet::isInstanceOfEthereumLikeWallet : implementation of Wallet is not valid");
    }

    auto result = cpp_impl->isInstanceOfEthereumLikeWallet();

    //Wrap result in node object
    auto arg_0 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSWallet::isInstanceOfRippleLikeWallet) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWallet::isInstanceOfRippleLikeWallet needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<Wallet>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWallet::isInstanceOfRippleLikeWallet : implementation of Wallet is not valid");
    }

    auto result = cpp_impl->isInstanceOfRippleLikeWallet();

    //Wrap result in node object
    auto arg_0 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSWallet::getWalletType) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWallet::getWalletType needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<Wallet>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWallet::getWalletType : implementation of Wallet is not valid");
    }

    auto result = cpp_impl->getWalletType();

    //Wrap result in node object
    auto arg_0 = Nan::New<Integer>((int)result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSWallet::getLastBlock) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWallet::getLastBlock needs 0 arguments");
    }

    //Check if parameters have correct types

    //Create promise and set it into Callback
    auto arg_0_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSBlockCallback *njs_ptr_arg_0 = new NJSBlockCallback(arg_0_resolver);
    std::shared_ptr<NJSBlockCallback> arg_0(njs_ptr_arg_0);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<Wallet>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWallet::getLastBlock : implementation of Wallet is not valid");
    }
    cpp_impl->getLastBlock(arg_0);
    info.GetReturnValue().Set(arg_0_resolver->GetPromise());
}
NAN_METHOD(NJSWallet::getAccountCreationInfo) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSWallet::getAccountCreationInfo needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int32_t>(info[0]).FromJust();

    //Create promise and set it into Callback
    auto arg_1_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSAccountCreationInfoCallback *njs_ptr_arg_1 = new NJSAccountCreationInfoCallback(arg_1_resolver);
    std::shared_ptr<NJSAccountCreationInfoCallback> arg_1(njs_ptr_arg_1);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<Wallet>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWallet::getAccountCreationInfo : implementation of Wallet is not valid");
    }
    cpp_impl->getAccountCreationInfo(arg_0,arg_1);
    info.GetReturnValue().Set(arg_1_resolver->GetPromise());
}
NAN_METHOD(NJSWallet::getExtendedKeyAccountCreationInfo) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSWallet::getExtendedKeyAccountCreationInfo needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int32_t>(info[0]).FromJust();

    //Create promise and set it into Callback
    auto arg_1_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSExtendedKeyAccountCreationInfoCallback *njs_ptr_arg_1 = new NJSExtendedKeyAccountCreationInfoCallback(arg_1_resolver);
    std::shared_ptr<NJSExtendedKeyAccountCreationInfoCallback> arg_1(njs_ptr_arg_1);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<Wallet>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWallet::getExtendedKeyAccountCreationInfo : implementation of Wallet is not valid");
    }
    cpp_impl->getExtendedKeyAccountCreationInfo(arg_0,arg_1);
    info.GetReturnValue().Set(arg_1_resolver->GetPromise());
}
NAN_METHOD(NJSWallet::getNextAccountCreationInfo) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWallet::getNextAccountCreationInfo needs 0 arguments");
    }

    //Check if parameters have correct types

    //Create promise and set it into Callback
    auto arg_0_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSAccountCreationInfoCallback *njs_ptr_arg_0 = new NJSAccountCreationInfoCallback(arg_0_resolver);
    std::shared_ptr<NJSAccountCreationInfoCallback> arg_0(njs_ptr_arg_0);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<Wallet>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWallet::getNextAccountCreationInfo : implementation of Wallet is not valid");
    }
    cpp_impl->getNextAccountCreationInfo(arg_0);
    info.GetReturnValue().Set(arg_0_resolver->GetPromise());
}
NAN_METHOD(NJSWallet::getNextExtendedKeyAccountCreationInfo) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWallet::getNextExtendedKeyAccountCreationInfo needs 0 arguments");
    }

    //Check if parameters have correct types

    //Create promise and set it into Callback
    auto arg_0_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSExtendedKeyAccountCreationInfoCallback *njs_ptr_arg_0 = new NJSExtendedKeyAccountCreationInfoCallback(arg_0_resolver);
    std::shared_ptr<NJSExtendedKeyAccountCreationInfoCallback> arg_0(njs_ptr_arg_0);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<Wallet>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWallet::getNextExtendedKeyAccountCreationInfo : implementation of Wallet is not valid");
    }
    cpp_impl->getNextExtendedKeyAccountCreationInfo(arg_0);
    info.GetReturnValue().Set(arg_0_resolver->GetPromise());
}
NAN_METHOD(NJSWallet::newAccountWithInfo) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSWallet::newAccountWithInfo needs 1 arguments");
    }

    //Check if parameters have correct types

    auto field_arg_0_1 = Nan::Get(info[0]->ToObject(), Nan::New<String>("index").ToLocalChecked()).ToLocalChecked();
    auto arg_0_1 = Nan::To<int32_t>(field_arg_0_1).FromJust();

    auto field_arg_0_2 = Nan::Get(info[0]->ToObject(), Nan::New<String>("owners").ToLocalChecked()).ToLocalChecked();
    vector<std::string> arg_0_2;
    Local<Array> arg_0_2_container = Local<Array>::Cast(field_arg_0_2);
    for(uint32_t arg_0_2_id = 0; arg_0_2_id < arg_0_2_container->Length(); arg_0_2_id++)
    {
        if(arg_0_2_container->Get(arg_0_2_id)->IsString())
        {
            String::Utf8Value string_arg_0_2_elem(arg_0_2_container->Get(arg_0_2_id)->ToString());
            auto arg_0_2_elem = std::string(*string_arg_0_2_elem);
            arg_0_2.emplace_back(arg_0_2_elem);
        }
    }


    auto field_arg_0_3 = Nan::Get(info[0]->ToObject(), Nan::New<String>("derivations").ToLocalChecked()).ToLocalChecked();
    vector<std::string> arg_0_3;
    Local<Array> arg_0_3_container = Local<Array>::Cast(field_arg_0_3);
    for(uint32_t arg_0_3_id = 0; arg_0_3_id < arg_0_3_container->Length(); arg_0_3_id++)
    {
        if(arg_0_3_container->Get(arg_0_3_id)->IsString())
        {
            String::Utf8Value string_arg_0_3_elem(arg_0_3_container->Get(arg_0_3_id)->ToString());
            auto arg_0_3_elem = std::string(*string_arg_0_3_elem);
            arg_0_3.emplace_back(arg_0_3_elem);
        }
    }


    auto field_arg_0_4 = Nan::Get(info[0]->ToObject(), Nan::New<String>("publicKeys").ToLocalChecked()).ToLocalChecked();
    vector<std::vector<uint8_t>> arg_0_4;
    Local<Array> arg_0_4_container = Local<Array>::Cast(field_arg_0_4);
    for(uint32_t arg_0_4_id = 0; arg_0_4_id < arg_0_4_container->Length(); arg_0_4_id++)
    {
        if(arg_0_4_container->Get(arg_0_4_id)->IsObject())
        {
            vector<uint8_t> arg_0_4_elem;
            Local<Array> arg_0_4_elem_container = Local<Array>::Cast(arg_0_4_container->Get(arg_0_4_id));
            for(uint32_t arg_0_4_elem_id = 0; arg_0_4_elem_id < arg_0_4_elem_container->Length(); arg_0_4_elem_id++)
            {
                if(arg_0_4_elem_container->Get(arg_0_4_elem_id)->IsUint32())
                {
                    auto arg_0_4_elem_elem = Nan::To<uint32_t>(arg_0_4_elem_container->Get(arg_0_4_elem_id)).FromJust();
                    arg_0_4_elem.emplace_back(arg_0_4_elem_elem);
                }
            }

            arg_0_4.emplace_back(arg_0_4_elem);
        }
    }


    auto field_arg_0_5 = Nan::Get(info[0]->ToObject(), Nan::New<String>("chainCodes").ToLocalChecked()).ToLocalChecked();
    vector<std::vector<uint8_t>> arg_0_5;
    Local<Array> arg_0_5_container = Local<Array>::Cast(field_arg_0_5);
    for(uint32_t arg_0_5_id = 0; arg_0_5_id < arg_0_5_container->Length(); arg_0_5_id++)
    {
        if(arg_0_5_container->Get(arg_0_5_id)->IsObject())
        {
            vector<uint8_t> arg_0_5_elem;
            Local<Array> arg_0_5_elem_container = Local<Array>::Cast(arg_0_5_container->Get(arg_0_5_id));
            for(uint32_t arg_0_5_elem_id = 0; arg_0_5_elem_id < arg_0_5_elem_container->Length(); arg_0_5_elem_id++)
            {
                if(arg_0_5_elem_container->Get(arg_0_5_elem_id)->IsUint32())
                {
                    auto arg_0_5_elem_elem = Nan::To<uint32_t>(arg_0_5_elem_container->Get(arg_0_5_elem_id)).FromJust();
                    arg_0_5_elem.emplace_back(arg_0_5_elem_elem);
                }
            }

            arg_0_5.emplace_back(arg_0_5_elem);
        }
    }

    AccountCreationInfo arg_0(arg_0_1, arg_0_2, arg_0_3, arg_0_4, arg_0_5);


    //Create promise and set it into Callback
    auto arg_1_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSAccountCallback *njs_ptr_arg_1 = new NJSAccountCallback(arg_1_resolver);
    std::shared_ptr<NJSAccountCallback> arg_1(njs_ptr_arg_1);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<Wallet>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWallet::newAccountWithInfo : implementation of Wallet is not valid");
    }
    cpp_impl->newAccountWithInfo(arg_0,arg_1);
    info.GetReturnValue().Set(arg_1_resolver->GetPromise());
}
NAN_METHOD(NJSWallet::newAccountWithExtendedKeyInfo) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSWallet::newAccountWithExtendedKeyInfo needs 1 arguments");
    }

    //Check if parameters have correct types

    auto field_arg_0_1 = Nan::Get(info[0]->ToObject(), Nan::New<String>("index").ToLocalChecked()).ToLocalChecked();
    auto arg_0_1 = Nan::To<int32_t>(field_arg_0_1).FromJust();

    auto field_arg_0_2 = Nan::Get(info[0]->ToObject(), Nan::New<String>("owners").ToLocalChecked()).ToLocalChecked();
    vector<std::string> arg_0_2;
    Local<Array> arg_0_2_container = Local<Array>::Cast(field_arg_0_2);
    for(uint32_t arg_0_2_id = 0; arg_0_2_id < arg_0_2_container->Length(); arg_0_2_id++)
    {
        if(arg_0_2_container->Get(arg_0_2_id)->IsString())
        {
            String::Utf8Value string_arg_0_2_elem(arg_0_2_container->Get(arg_0_2_id)->ToString());
            auto arg_0_2_elem = std::string(*string_arg_0_2_elem);
            arg_0_2.emplace_back(arg_0_2_elem);
        }
    }


    auto field_arg_0_3 = Nan::Get(info[0]->ToObject(), Nan::New<String>("derivations").ToLocalChecked()).ToLocalChecked();
    vector<std::string> arg_0_3;
    Local<Array> arg_0_3_container = Local<Array>::Cast(field_arg_0_3);
    for(uint32_t arg_0_3_id = 0; arg_0_3_id < arg_0_3_container->Length(); arg_0_3_id++)
    {
        if(arg_0_3_container->Get(arg_0_3_id)->IsString())
        {
            String::Utf8Value string_arg_0_3_elem(arg_0_3_container->Get(arg_0_3_id)->ToString());
            auto arg_0_3_elem = std::string(*string_arg_0_3_elem);
            arg_0_3.emplace_back(arg_0_3_elem);
        }
    }


    auto field_arg_0_4 = Nan::Get(info[0]->ToObject(), Nan::New<String>("extendedKeys").ToLocalChecked()).ToLocalChecked();
    vector<std::string> arg_0_4;
    Local<Array> arg_0_4_container = Local<Array>::Cast(field_arg_0_4);
    for(uint32_t arg_0_4_id = 0; arg_0_4_id < arg_0_4_container->Length(); arg_0_4_id++)
    {
        if(arg_0_4_container->Get(arg_0_4_id)->IsString())
        {
            String::Utf8Value string_arg_0_4_elem(arg_0_4_container->Get(arg_0_4_id)->ToString());
            auto arg_0_4_elem = std::string(*string_arg_0_4_elem);
            arg_0_4.emplace_back(arg_0_4_elem);
        }
    }

    ExtendedKeyAccountCreationInfo arg_0(arg_0_1, arg_0_2, arg_0_3, arg_0_4);


    //Create promise and set it into Callback
    auto arg_1_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSAccountCallback *njs_ptr_arg_1 = new NJSAccountCallback(arg_1_resolver);
    std::shared_ptr<NJSAccountCallback> arg_1(njs_ptr_arg_1);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<Wallet>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWallet::newAccountWithExtendedKeyInfo : implementation of Wallet is not valid");
    }
    cpp_impl->newAccountWithExtendedKeyInfo(arg_0,arg_1);
    info.GetReturnValue().Set(arg_1_resolver->GetPromise());
}
NAN_METHOD(NJSWallet::eraseDataSince) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSWallet::eraseDataSince needs 1 arguments");
    }

    //Check if parameters have correct types
    auto time_arg_0 = Nan::To<int32_t>(info[0]).FromJust();
    auto arg_0 = chrono::system_clock::time_point(chrono::milliseconds(time_arg_0));

    //Create promise and set it into Callback
    auto arg_1_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSErrorCodeCallback *njs_ptr_arg_1 = new NJSErrorCodeCallback(arg_1_resolver);
    std::shared_ptr<NJSErrorCodeCallback> arg_1(njs_ptr_arg_1);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<Wallet>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWallet::eraseDataSince : implementation of Wallet is not valid");
    }
    cpp_impl->eraseDataSince(arg_0,arg_1);
    info.GetReturnValue().Set(arg_1_resolver->GetPromise());
}

NAN_METHOD(NJSWallet::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSWallet function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSWallet::Wallet_prototype;

Local<Object> NJSWallet::wrap(const std::shared_ptr<ledger::core::api::Wallet> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(Wallet_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        djinni::js::ObjectWrapper<ledger::core::api::Wallet>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSWallet::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSWallet::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<Wallet>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSWallet::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSWallet::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSWallet").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"getName", getName);
    Nan::SetPrototypeMethod(func_template,"getAccount", getAccount);
    Nan::SetPrototypeMethod(func_template,"getAccountCount", getAccountCount);
    Nan::SetPrototypeMethod(func_template,"getAccounts", getAccounts);
    Nan::SetPrototypeMethod(func_template,"getNextAccountIndex", getNextAccountIndex);
    Nan::SetPrototypeMethod(func_template,"getEventBus", getEventBus);
    Nan::SetPrototypeMethod(func_template,"isSynchronizing", isSynchronizing);
    Nan::SetPrototypeMethod(func_template,"synchronize", synchronize);
    Nan::SetPrototypeMethod(func_template,"getPreferences", getPreferences);
    Nan::SetPrototypeMethod(func_template,"getLogger", getLogger);
    Nan::SetPrototypeMethod(func_template,"getAccountPreferences", getAccountPreferences);
    Nan::SetPrototypeMethod(func_template,"asBitcoinLikeWallet", asBitcoinLikeWallet);
    Nan::SetPrototypeMethod(func_template,"getCurrency", getCurrency);
    Nan::SetPrototypeMethod(func_template,"isInstanceOfBitcoinLikeWallet", isInstanceOfBitcoinLikeWallet);
    Nan::SetPrototypeMethod(func_template,"isInstanceOfEthereumLikeWallet", isInstanceOfEthereumLikeWallet);
    Nan::SetPrototypeMethod(func_template,"isInstanceOfRippleLikeWallet", isInstanceOfRippleLikeWallet);
    Nan::SetPrototypeMethod(func_template,"getWalletType", getWalletType);
    Nan::SetPrototypeMethod(func_template,"getLastBlock", getLastBlock);
    Nan::SetPrototypeMethod(func_template,"getAccountCreationInfo", getAccountCreationInfo);
    Nan::SetPrototypeMethod(func_template,"getExtendedKeyAccountCreationInfo", getExtendedKeyAccountCreationInfo);
    Nan::SetPrototypeMethod(func_template,"getNextAccountCreationInfo", getNextAccountCreationInfo);
    Nan::SetPrototypeMethod(func_template,"getNextExtendedKeyAccountCreationInfo", getNextExtendedKeyAccountCreationInfo);
    Nan::SetPrototypeMethod(func_template,"newAccountWithInfo", newAccountWithInfo);
    Nan::SetPrototypeMethod(func_template,"newAccountWithExtendedKeyInfo", newAccountWithExtendedKeyInfo);
    Nan::SetPrototypeMethod(func_template,"eraseDataSince", eraseDataSince);
    //Set object prototype
    Wallet_prototype.Reset(objectTemplate);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);

    //Add template to target
    target->Set(Nan::New<String>("NJSWallet").ToLocalChecked(), func_template->GetFunction());
}
