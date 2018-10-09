/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef IS_STRING_HPP
#define IS_STRING_HPP

#include<type_traits>

// Solution inspiration/source:
// https://stackoverflow.com/questions/8097534/type-trait-for-strings

namespace yaml_inputter {

    template <typename T>
    struct is_string : public std::integral_constant<bool,
    std::is_same<char*, typename std::decay<T>::type >::value ||
    std::is_same<const char*, typename std::decay<T>::type >::value ||
    std::is_same<std::string, typename std::remove_reference<T>::type >::value ||
    std::is_same<const std::string, typename std::remove_reference<T>::type >::value
    > {
    };

/*
assert(!is_string< int >::value);
assert(is_string< char * >::value);
assert(is_string< char const * >::value);
assert(is_string< char * const >::value);
assert(is_string< char const * const >::value);
assert(is_string< char (&)[5] >::value);
assert(is_string< char const (&)[5] >::value);
 */

} // end of namespace yaml_inputter

#endif 

