/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef TAG_FROM_STRING_HPP
#define TAG_FROM_STRING_HPP

#include<memory>
#include<type_traits>
#include<cassert>

// ***********************************************************
// ***************    Tag-From-String-Conveter     ***********
// ***********************************************************
namespace {
    /* TagFromStringConveter class allows to convert
     * a string object into an appropriate Tag object
     * (for specified prospective Tags types).
     * 
     * Template Parameters:
     * 
     * PossibleTags 
     *    - types for which TagFromStringConveter
     *      attempts to convert string into.
     * Result
     *    - the base type of all PossibleTags,
     *      used for establishing the convert return type
     *      being std::shared_ptr<Result>
     * 
     * For conversions TagFromStringConveter calls
     * shared_ptr<PossibleTag> PossibleTag::from_string(string) 
     * functions that should be provided.
     * (And should return shared_ptr<PossibleTag>(null_ptr)
     *  when the pertinent conversion is not possible.)
     * 
     * Caveats: If no conversion in possible than
     *          TagFromStringConveter::convert() call
     *          returns std::shared_ptr<Result>(nullptr).
     */

    /* struct TagFromStringConveter template 
     * -- general form:
     */
    template<class Result, class... PossibleTags>
    struct TagFromStringConveter;

    /* struct TagFromStringConveter template -- 
     * -- specializations that allow recursive call:    
     */
    template<class Result, class PossibleTag, class... OtherPossibleTags>
    struct TagFromStringConveter<Result, PossibleTag, OtherPossibleTags...> {
        static std::shared_ptr<Result> convert(const std::string & str);
    };

    template<class Result>
    struct TagFromStringConveter<Result> {
        static std::shared_ptr<Result> convert(const std::string & str);
    };

    // member functions TagFromStringConveter::<...>convert(...) implementations:

    template<class Result, class PossibleTag, class... OtherPossibleTags>
    std::shared_ptr<Result>
    TagFromStringConveter<Result, PossibleTag, OtherPossibleTags...>::convert(
            const std::string & str) {
        // class PossibleTag must be a subclass of class Result
        // (If the assertion fails,
        //  a conversion from shared_ptr<PossibleBit> into shared_ptr<Result>
        //  is bound to fail.)
        static_assert(std::is_base_of<Result, PossibleTag>::value,
                "PossibleTag must be a Result subclass.");
        if (std::shared_ptr<Result> p = PossibleTag::from_string(str)) return p;
        return TagFromStringConveter<Result, OtherPossibleTags...>::convert(str);
    }

    template<class Result>
    std::shared_ptr<Result>
    TagFromStringConveter<Result>::convert(
            const std::string & str) {
        // As there is no PossibleBits classes to examine
        // the conversion is not possible and 
        // according to our convention the result is null_ptr.        
        return nullptr;
    }

} // end of namesapce.

namespace el_stat_prop {

    // ***********************************************************
    // ***************     Tag-From-String-Conveter    ***********
    // ***************    << Simple API function >>    ***********
    // ***********************************************************

    /*     Simple usage (API) of tag_from_string(...) function:
     * 
     * Function tag_from_string together with struct PossibleTagList
     * form a simple wrapper of TagFromStringConveter.
     * 
     * 
     * struct TagBase;
     * 
     * struct Tag1 : TagBase {
     *    static std::shared_ptr<Tag1> from_string(const std::string&);
     * };
     * 
     * struct Tag2 : TagBase {
     *    static std::shared_ptr<Tag2> from_string(const std::string&);
     * };
     * 
     * struct Tag2 : TagBase {
     *    static std::shared_ptr<Tag3> from_string(const std::string&);
     * };
     * 
     * ... in some function: ...
     * 
     * string token = "...";
     * using PossibleTagsList = PossibleTagList<Tag1, Tag2, Tag3>;
     * auto tag = tag_from_string<TagBase, PossibleTagsList>(token);
     */

    template<class...Types>
    struct PossibleTagList {
        template <class Result>
        using converter_t = TagFromStringConveter<Result, Types...>;
    };

    template<class Result, class PossibleTagList>
    std::shared_ptr<Result> tag_from_string(const std::string & str) {
        using converter_t = typename PossibleTagList::template converter_t<Result>;
        return converter_t::convert(str);
    }

} // end of namespace el_stat_prop

#endif
