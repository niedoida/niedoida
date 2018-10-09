/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_MISC_KIT_MISC_UTILS_HPP
#define NIEDOIDA_MISC_KIT_MISC_UTILS_HPP

#include <functional>
#include <string>
#include <boost/algorithm/string.hpp>

namespace niedoida {
    namespace misc {
        struct lt_string_nocase: 
            public std::binary_function<const std::string&, const std::string&, bool> {

            bool operator ()(const std::string& a, const std::string& b) const
            {
                using namespace boost::algorithm;
                return lexicographical_compare(a, b, is_iless());
            }
        };
        
        template <typename V, typename L = std::less<typename V::value_type> >
        class indirect_less {
        public:
            typedef typename V::size_type size_type;

            indirect_less(const V& v, const L& l = std::less<typename V::value_type>()):
                _v(v), _l(l) {}

            bool operator ()(size_type lhs, size_type rhs) const
            {
                return _l(_v[lhs], _v[rhs]);
            }

        private:
            const V& _v;
            const L _l;
        };

        template <typename T, typename F = std::less<T> >
        struct abs_less {
            inline
            bool operator ()(T lhs, T rhs)
            {
                using std::abs;
                F less;
                return less(abs(lhs), abs(rhs));
            }
        };

    }
}

#endif

