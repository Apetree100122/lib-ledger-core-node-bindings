// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from memo.djinni

#ifndef DJINNI_GENERATED_RIPPLELIKEMEMO_HPP
#define DJINNI_GENERATED_RIPPLELIKEMEMO_HPP

#include <iostream>
#include <string>
#include <utility>

namespace ledger { namespace core { namespace api {

/**
 * A ripple memo.
 *
 * <https://developers.ripple.com/transaction-common-fields.html#memos-field>
 */
struct RippleLikeMemo final {
    /** Data carried by the memo. */
    std::string data;
    /** Format of the memo. */
    std::string fmt;
    /** Type of the memo. */
    std::string ty;

    RippleLikeMemo(std::string data_,
                   std::string fmt_,
                   std::string ty_)
    : data(std::move(data_))
    , fmt(std::move(fmt_))
    , ty(std::move(ty_))
    {}

    RippleLikeMemo(const RippleLikeMemo& cpy) {
       this->data = cpy.data;
       this->fmt = cpy.fmt;
       this->ty = cpy.ty;
    }

    RippleLikeMemo() = default;


    RippleLikeMemo& operator=(const RippleLikeMemo& cpy) {
       this->data = cpy.data;
       this->fmt = cpy.fmt;
       this->ty = cpy.ty;
       return *this;
    }

    template <class Archive>
    void load(Archive& archive) {
        archive(data, fmt, ty);
    }

    template <class Archive>
    void save(Archive& archive) const {
        archive(data, fmt, ty);
    }
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_RIPPLELIKEMEMO_HPP
