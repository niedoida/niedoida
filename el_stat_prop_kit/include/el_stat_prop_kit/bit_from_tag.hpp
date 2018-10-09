/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef BIT_FROM_TAG_HPP
#define BIT_FROM_TAG_HPP

#include<memory>
#include<type_traits>
#include<cassert>

#include"el_stat_prop_kit/tag_abstract_base.hpp"
#include"el_stat_prop_kit/adapter.hpp"

// ***********************************************************
// *****************    Bit-From-Tag-Conveter     ************
// ***********************************************************

namespace {

    using namespace el_stat_prop;

    /* struct TagFromStringConveter template 
     * -- general form:
     */
    template<class Result, class... PossibleBits>
    struct BitFormTagConverter;

    /* struct TagFromStringConveter template -- 
     * -- specializations that allow recursive call:    
     */
    template<class Result, class PossibleBit, class... OtherPossibleBits>
    struct BitFormTagConverter<Result, PossibleBit, OtherPossibleBits...> {
        static std::shared_ptr<Result> convert(
                const TagAbstractBase& tag,
                const SystemAdapterAbstractBase& system);
    };

    template<class Result>
    struct BitFormTagConverter<Result> {
        static std::shared_ptr<Result> convert(
                const TagAbstractBase& tag,
                const SystemAdapterAbstractBase& system);
    };

    // member functions TagFromStringConveter::<...>convert(...) implementations:

    template<class Result, class PossibleBit, class... OtherPossibleBits>
    std::shared_ptr<Result>
    BitFormTagConverter<Result, PossibleBit, OtherPossibleBits...>::convert(
            const TagAbstractBase& tag,
            const SystemAdapterAbstractBase& system) {
        // class PossibleBit must be a subclass of class Result
        // (If the assertion fails,
        //  a conversion from shared_ptr<PossibleBit> into shared_ptr<Result>
        //  is bound to fail.)
        static_assert(
                std::is_base_of<Result, PossibleBit>::value,
                "PossibleTag must be a Result subclass.");
        // The PossibleBit must define tag_t dependent type.
        const typename PossibleBit::tag_t * tag_casted;
        // typename PossibleBit::tag_t has to be derrived from class TagAbstractBase
        // (If the assertion fail, the following dynamic_cast will fail)
        static_assert(
                std::is_base_of<TagAbstractBase, typename PossibleBit::tag_t>::value,
                "PossibleBit::tag_t must be a subclass of TagAbstractBase");
        tag_casted = dynamic_cast<const typename PossibleBit::tag_t*> (&tag);
        if (tag_casted)
            return std::make_shared<PossibleBit>(*tag_casted, system);
        else
            return BitFormTagConverter<Result, OtherPossibleBits...>::convert(tag, system);

    } // end of static convert(...) member function

    template<class Result>
    std::shared_ptr<Result>
    BitFormTagConverter<Result>::convert(
            const TagAbstractBase& tag,
            const SystemAdapterAbstractBase& system) {
        // As there is no PossibleBits classes to examine
        // the conversion is not possible and 
        // according to our convention the result is null_ptr.
        return nullptr;
    } // end of static convert(...) member function

} // end of namespace

// ***********************************************************
// ***************      Bit-From-Tag-Conveter      ***********
// ***************    << Simple API function >>    ***********
// ***********************************************************

namespace el_stat_prop {

    template<class...Types>
    struct PossibleBitsList {
        template<class Result>
        using converter_t = BitFormTagConverter<Result, Types...>;
    };

    template<class Result, class PossibleBitsList>
    std::shared_ptr<Result> bit_from_tag(
            const TagAbstractBase& tag,
            const SystemAdapterAbstractBase& system) {
        using converter_t = typename PossibleBitsList::template converter_t<Result>;
        return converter_t::convert(tag, system);
    }

} // end of namespace el_stat_prop
#endif

