// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from preferences.djinni

#include "NJSPreferencesEditorCpp.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSPreferencesEditor::putString) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSPreferencesEditor::putString needs 2 arguments");
    }

    //Check if parameters have correct types
    Nan::Utf8String string_arg_0(info[0]->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_0 = std::string(*string_arg_0);
    Nan::Utf8String string_arg_1(info[1]->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_1 = std::string(*string_arg_1);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::PreferencesEditor>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSPreferencesEditor::putString : implementation of PreferencesEditor is not valid");
    }

    auto result = cpp_impl->putString(arg_0,arg_1);

    //Wrap result in node object
    auto arg_2 = NJSPreferencesEditor::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_2);
}
NAN_METHOD(NJSPreferencesEditor::putInt) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSPreferencesEditor::putInt needs 2 arguments");
    }

    //Check if parameters have correct types
    Nan::Utf8String string_arg_0(info[0]->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_0 = std::string(*string_arg_0);
    auto arg_1 = Nan::To<int32_t>(info[1]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::PreferencesEditor>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSPreferencesEditor::putInt : implementation of PreferencesEditor is not valid");
    }

    auto result = cpp_impl->putInt(arg_0,arg_1);

    //Wrap result in node object
    auto arg_2 = NJSPreferencesEditor::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_2);
}
NAN_METHOD(NJSPreferencesEditor::putLong) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSPreferencesEditor::putLong needs 2 arguments");
    }

    //Check if parameters have correct types
    Nan::Utf8String string_arg_0(info[0]->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_0 = std::string(*string_arg_0);
    auto arg_1 = Nan::To<int64_t>(info[1]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::PreferencesEditor>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSPreferencesEditor::putLong : implementation of PreferencesEditor is not valid");
    }

    auto result = cpp_impl->putLong(arg_0,arg_1);

    //Wrap result in node object
    auto arg_2 = NJSPreferencesEditor::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_2);
}
NAN_METHOD(NJSPreferencesEditor::putBoolean) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSPreferencesEditor::putBoolean needs 2 arguments");
    }

    //Check if parameters have correct types
    Nan::Utf8String string_arg_0(info[0]->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_0 = std::string(*string_arg_0);
    auto arg_1 = Nan::To<bool>(info[1]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::PreferencesEditor>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSPreferencesEditor::putBoolean : implementation of PreferencesEditor is not valid");
    }

    auto result = cpp_impl->putBoolean(arg_0,arg_1);

    //Wrap result in node object
    auto arg_2 = NJSPreferencesEditor::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_2);
}
NAN_METHOD(NJSPreferencesEditor::putStringArray) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSPreferencesEditor::putStringArray needs 2 arguments");
    }

    //Check if parameters have correct types
    Nan::Utf8String string_arg_0(info[0]->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_0 = std::string(*string_arg_0);
    vector<std::string> arg_1;
    Local<Array> arg_1_container = Local<Array>::Cast(info[1]);
    for(uint32_t arg_1_id = 0; arg_1_id < arg_1_container->Length(); arg_1_id++)
    {
        if(arg_1_container->Get(arg_1_id)->IsString())
        {
            Nan::Utf8String string_arg_1_elem(arg_1_container->Get(arg_1_id)->ToString(Nan::GetCurrentContext()).ToLocalChecked());
            auto arg_1_elem = std::string(*string_arg_1_elem);
            arg_1.emplace_back(arg_1_elem);
        }
    }


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::PreferencesEditor>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSPreferencesEditor::putStringArray : implementation of PreferencesEditor is not valid");
    }

    auto result = cpp_impl->putStringArray(arg_0,arg_1);

    //Wrap result in node object
    auto arg_2 = NJSPreferencesEditor::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_2);
}
NAN_METHOD(NJSPreferencesEditor::putData) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSPreferencesEditor::putData needs 2 arguments");
    }

    //Check if parameters have correct types
    Nan::Utf8String string_arg_0(info[0]->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_0 = std::string(*string_arg_0);
    vector<uint8_t> arg_1;
    Local<Array> arg_1_container = Local<Array>::Cast(info[1]);
    for(uint32_t arg_1_id = 0; arg_1_id < arg_1_container->Length(); arg_1_id++)
    {
        if(arg_1_container->Get(arg_1_id)->IsUint32())
        {
            auto arg_1_elem = Nan::To<uint32_t>(arg_1_container->Get(arg_1_id)).FromJust();
            arg_1.emplace_back(arg_1_elem);
        }
    }


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::PreferencesEditor>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSPreferencesEditor::putData : implementation of PreferencesEditor is not valid");
    }

    auto result = cpp_impl->putData(arg_0,arg_1);

    //Wrap result in node object
    auto arg_2 = NJSPreferencesEditor::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_2);
}
NAN_METHOD(NJSPreferencesEditor::remove) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSPreferencesEditor::remove needs 1 arguments");
    }

    //Check if parameters have correct types
    Nan::Utf8String string_arg_0(info[0]->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::PreferencesEditor>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSPreferencesEditor::remove : implementation of PreferencesEditor is not valid");
    }

    auto result = cpp_impl->remove(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSPreferencesEditor::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSPreferencesEditor::commit) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSPreferencesEditor::commit needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::PreferencesEditor>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSPreferencesEditor::commit : implementation of PreferencesEditor is not valid");
    }
    cpp_impl->commit();
}
NAN_METHOD(NJSPreferencesEditor::clear) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSPreferencesEditor::clear needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::PreferencesEditor>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSPreferencesEditor::clear : implementation of PreferencesEditor is not valid");
    }
    cpp_impl->clear();
}

NAN_METHOD(NJSPreferencesEditor::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSPreferencesEditor function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSPreferencesEditor::PreferencesEditor_prototype;

Local<Object> NJSPreferencesEditor::wrap(const std::shared_ptr<ledger::core::api::PreferencesEditor> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(PreferencesEditor_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::PreferencesEditor>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSPreferencesEditor::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSPreferencesEditor::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<ledger::core::api::PreferencesEditor>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSPreferencesEditor::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSPreferencesEditor::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSPreferencesEditor").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"putString", putString);
    Nan::SetPrototypeMethod(func_template,"putInt", putInt);
    Nan::SetPrototypeMethod(func_template,"putLong", putLong);
    Nan::SetPrototypeMethod(func_template,"putBoolean", putBoolean);
    Nan::SetPrototypeMethod(func_template,"putStringArray", putStringArray);
    Nan::SetPrototypeMethod(func_template,"putData", putData);
    Nan::SetPrototypeMethod(func_template,"remove", remove);
    Nan::SetPrototypeMethod(func_template,"commit", commit);
    Nan::SetPrototypeMethod(func_template,"clear", clear);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    PreferencesEditor_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSPreferencesEditor").ToLocalChecked(), func_template->GetFunction(Nan::GetCurrentContext()).ToLocalChecked());
}
