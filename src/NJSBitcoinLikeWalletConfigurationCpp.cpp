// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#include "NJSBitcoinLikeWalletConfigurationCpp.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;


NAN_METHOD(NJSBitcoinLikeWalletConfiguration::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSBitcoinLikeWalletConfiguration function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSBitcoinLikeWalletConfiguration::BitcoinLikeWalletConfiguration_prototype;

Local<Object> NJSBitcoinLikeWalletConfiguration::wrap(const std::shared_ptr<ledger::core::api::BitcoinLikeWalletConfiguration> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(BitcoinLikeWalletConfiguration_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeWalletConfiguration>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSBitcoinLikeWalletConfiguration::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSBitcoinLikeWalletConfiguration::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeWalletConfiguration>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSBitcoinLikeWalletConfiguration::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSBitcoinLikeWalletConfiguration::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSBitcoinLikeWalletConfiguration").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    BitcoinLikeWalletConfiguration_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSBitcoinLikeWalletConfiguration").ToLocalChecked(), func_template->GetFunction(Nan::GetCurrentContext()).ToLocalChecked());
}
