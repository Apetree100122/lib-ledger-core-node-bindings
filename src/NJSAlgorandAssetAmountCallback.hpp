// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_NJSALGORANDASSETAMOUNTCALLBACK_HPP
#define DJINNI_GENERATED_NJSALGORANDASSETAMOUNTCALLBACK_HPP


#include "../include/../utils/optional.hpp"
#include "../include/AlgorandAssetAmount.hpp"
#include "../include/Error.hpp"

#include <nan.h>
#include <node.h>
#include "../include/AlgorandAssetAmountCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSAlgorandAssetAmountCallback: public ledger::core::api::AlgorandAssetAmountCallback {
public:

    static void Initialize(Local<Object> target);

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::AlgorandAssetAmountCallback> &object);
    static Nan::Persistent<ObjectTemplate> AlgorandAssetAmountCallback_prototype;
    ~NJSAlgorandAssetAmountCallback()
    {
        pers_resolver.Reset();
    };
    NJSAlgorandAssetAmountCallback(Local<Promise::Resolver> resolver){pers_resolver.Reset(resolver);};

    /**
     * Method triggered when main task complete.
     * @params result optional of type T, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    void onCallback(const std::experimental::optional<::ledger::core::api::AlgorandAssetAmount> & result, const std::experimental::optional<::ledger::core::api::Error> & error);

private:
    /**
     * Method triggered when main task complete.
     * @params result optional of type T, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    static NAN_METHOD(onCallback);

    static NAN_METHOD(New);

    Nan::Persistent<Promise::Resolver> pers_resolver;
};
#endif //DJINNI_GENERATED_NJSALGORANDASSETAMOUNTCALLBACK_HPP
