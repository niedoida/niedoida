/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef USING_SELF_TYPE_MACRO_HPP
#define USING_SELF_TYPE_MACRO_HPP

#include<type_traits>

// In g++ code decltype(*this) works even in static functions.
// This may be not fully portable.
// https://stackoverflow.com/questions/21143835/can-i-implement-an-autonomous-self-member-type-in-c

#define SELF_TYPE std::remove_reference<decltype(*this)>::type

#define USING_SELF_TYPE \
    static auto using_self_type_helper() -> decltype(*this); \
    using type = typename std::remove_reference<decltype(using_self_type_helper())>::type;

/*
 * Simple usage (API) of 
 * SELF_TYPE and USING_SELF_TYPE macros:
 * 
 * 
 * Example 1:
 * 
 * struct A {
 *      USING_SELF_TYPE
 * };
 * 
 * Example 2:
 *  
 * struct B {
 *   auto foo() -> SELF_TYPE;
 * };
 * 
 */

#endif