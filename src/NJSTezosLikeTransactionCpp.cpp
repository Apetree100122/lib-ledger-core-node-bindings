// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tezos_like_wallet.djinni

#include "NJSTezosLikeTransactionCpp.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSTezosLikeTransaction::getType) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSTezosLikeTransaction::getType needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTezosLikeTransaction::getType : implementation of TezosLikeTransaction is not valid");
    }

    auto result = cpp_impl->getType();

    //Wrap result in node object
    auto arg_0 = Nan::New<Integer>((int)result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSTezosLikeTransaction::getHash) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSTezosLikeTransaction::getHash needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTezosLikeTransaction::getHash : implementation of TezosLikeTransaction is not valid");
    }

    auto result = cpp_impl->getHash();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSTezosLikeTransaction::getFees) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSTezosLikeTransaction::getFees needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTezosLikeTransaction::getFees : implementation of TezosLikeTransaction is not valid");
    }

    auto result = cpp_impl->getFees();

    //Wrap result in node object
    auto arg_0 = NJSAmount::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSTezosLikeTransaction::getReceiver) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSTezosLikeTransaction::getReceiver needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTezosLikeTransaction::getReceiver : implementation of TezosLikeTransaction is not valid");
    }

    auto result = cpp_impl->getReceiver();

    //Wrap result in node object
    auto arg_0 = NJSTezosLikeAddress::wrap(result);



    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSTezosLikeTransaction::getSender) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSTezosLikeTransaction::getSender needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTezosLikeTransaction::getSender : implementation of TezosLikeTransaction is not valid");
    }

    auto result = cpp_impl->getSender();

    //Wrap result in node object
    auto arg_0 = NJSTezosLikeAddress::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSTezosLikeTransaction::getValue) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSTezosLikeTransaction::getValue needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTezosLikeTransaction::getValue : implementation of TezosLikeTransaction is not valid");
    }

    auto result = cpp_impl->getValue();

    //Wrap result in node object
    auto arg_0 = NJSAmount::wrap(result);



    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSTezosLikeTransaction::serialize) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSTezosLikeTransaction::serialize needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTezosLikeTransaction::serialize : implementation of TezosLikeTransaction is not valid");
    }

    auto result = cpp_impl->serialize();

    //Wrap result in node object
    Local<Array> arg_0 = Nan::New<Array>();
    for(size_t arg_0_id = 0; arg_0_id < result.size(); arg_0_id++)
    {
        auto arg_0_elem = Nan::New<Uint32>(result[arg_0_id]);
        arg_0->Set((int)arg_0_id,arg_0_elem);
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSTezosLikeTransaction::setSignature) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSTezosLikeTransaction::setSignature needs 1 arguments");
    }

    //Check if parameters have correct types
    vector<uint8_t> arg_0;
    Local<Array> arg_0_container = Local<Array>::Cast(info[0]);
    for(uint32_t arg_0_id = 0; arg_0_id < arg_0_container->Length(); arg_0_id++)
    {
        if(arg_0_container->Get(arg_0_id)->IsUint32())
        {
            auto arg_0_elem = Nan::To<uint32_t>(arg_0_container->Get(arg_0_id)).FromJust();
            arg_0.emplace_back(arg_0_elem);
        }
    }


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTezosLikeTransaction::setSignature : implementation of TezosLikeTransaction is not valid");
    }
    cpp_impl->setSignature(arg_0);
}
NAN_METHOD(NJSTezosLikeTransaction::getDate) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSTezosLikeTransaction::getDate needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTezosLikeTransaction::getDate : implementation of TezosLikeTransaction is not valid");
    }

    auto result = cpp_impl->getDate();

    //Wrap result in node object
    auto date_arg_0 = chrono::duration_cast<chrono::milliseconds>(result.time_since_epoch()).count();
    auto arg_0 = Nan::New<Date>(date_arg_0).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSTezosLikeTransaction::getSigningPubKey) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSTezosLikeTransaction::getSigningPubKey needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTezosLikeTransaction::getSigningPubKey : implementation of TezosLikeTransaction is not valid");
    }

    auto result = cpp_impl->getSigningPubKey();

    //Wrap result in node object
    Local<Array> arg_0 = Nan::New<Array>();
    for(size_t arg_0_id = 0; arg_0_id < result.size(); arg_0_id++)
    {
        auto arg_0_elem = Nan::New<Uint32>(result[arg_0_id]);
        arg_0->Set((int)arg_0_id,arg_0_elem);
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSTezosLikeTransaction::getCounter) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSTezosLikeTransaction::getCounter needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTezosLikeTransaction::getCounter : implementation of TezosLikeTransaction is not valid");
    }

    auto result = cpp_impl->getCounter();

    //Wrap result in node object
    auto arg_0 = NJSBigInt::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSTezosLikeTransaction::getGasLimit) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSTezosLikeTransaction::getGasLimit needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTezosLikeTransaction::getGasLimit : implementation of TezosLikeTransaction is not valid");
    }

    auto result = cpp_impl->getGasLimit();

    //Wrap result in node object
    auto arg_0 = NJSAmount::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSTezosLikeTransaction::getStorageLimit) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSTezosLikeTransaction::getStorageLimit needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTezosLikeTransaction::getStorageLimit : implementation of TezosLikeTransaction is not valid");
    }

    auto result = cpp_impl->getStorageLimit();

    //Wrap result in node object
    auto arg_0 = NJSBigInt::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSTezosLikeTransaction::getBlockHash) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSTezosLikeTransaction::getBlockHash needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTezosLikeTransaction::getBlockHash : implementation of TezosLikeTransaction is not valid");
    }

    auto result = cpp_impl->getBlockHash();

    //Wrap result in node object
    Local<Value> arg_0;
    if(result)
    {
        auto arg_0_optional = (result).value();
        auto arg_0_tmp = Nan::New<String>(arg_0_optional).ToLocalChecked();
        arg_0 = arg_0_tmp;
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSTezosLikeTransaction::getStatus) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSTezosLikeTransaction::getStatus needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSTezosLikeTransaction::getStatus : implementation of TezosLikeTransaction is not valid");
    }

    auto result = cpp_impl->getStatus();

    //Wrap result in node object
    auto arg_0 = Nan::New<Int32>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSTezosLikeTransaction::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSTezosLikeTransaction function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSTezosLikeTransaction::TezosLikeTransaction_prototype;

Local<Object> NJSTezosLikeTransaction::wrap(const std::shared_ptr<ledger::core::api::TezosLikeTransaction> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(TezosLikeTransaction_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::TezosLikeTransaction>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSTezosLikeTransaction::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSTezosLikeTransaction::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<ledger::core::api::TezosLikeTransaction>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSTezosLikeTransaction::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSTezosLikeTransaction::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSTezosLikeTransaction").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"getType", getType);
    Nan::SetPrototypeMethod(func_template,"getHash", getHash);
    Nan::SetPrototypeMethod(func_template,"getFees", getFees);
    Nan::SetPrototypeMethod(func_template,"getReceiver", getReceiver);
    Nan::SetPrototypeMethod(func_template,"getSender", getSender);
    Nan::SetPrototypeMethod(func_template,"getValue", getValue);
    Nan::SetPrototypeMethod(func_template,"serialize", serialize);
    Nan::SetPrototypeMethod(func_template,"setSignature", setSignature);
    Nan::SetPrototypeMethod(func_template,"getDate", getDate);
    Nan::SetPrototypeMethod(func_template,"getSigningPubKey", getSigningPubKey);
    Nan::SetPrototypeMethod(func_template,"getCounter", getCounter);
    Nan::SetPrototypeMethod(func_template,"getGasLimit", getGasLimit);
    Nan::SetPrototypeMethod(func_template,"getStorageLimit", getStorageLimit);
    Nan::SetPrototypeMethod(func_template,"getBlockHash", getBlockHash);
    Nan::SetPrototypeMethod(func_template,"getStatus", getStatus);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    TezosLikeTransaction_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSTezosLikeTransaction").ToLocalChecked(), func_template->GetFunction(Nan::GetCurrentContext()).ToLocalChecked());
}
