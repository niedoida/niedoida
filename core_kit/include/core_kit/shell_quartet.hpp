/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_SHELL_QUARTET_HPP
#define NIEDOIDA_CORE_KIT_SHELL_QUARTET_HPP

#include <boost/array.hpp>


namespace niedoida {

    namespace core {
       
        class ShellQuartetIndexGenerator;
        class SignificantShellQuartetIndexGenerator;

        enum ShellQuartetType {
            SHELL_QUARTET_TYPE_AAAA,
            SHELL_QUARTET_TYPE_ABAB,
            SHELL_QUARTET_TYPE_AACC,
            SHELL_QUARTET_TYPE_ABCD,
            SHELL_QUARTET_TYPE_ABCC,
            SHELL_QUARTET_TYPE_AACD
        };



        inline
        ShellQuartetType shell_quartet_type(unsigned P, unsigned Q,
                                            unsigned R, unsigned S)
        {
            // determine shell quartet type
            if (P != R || Q != S) {
                if (P != Q && R != S)
                    return SHELL_QUARTET_TYPE_ABCD;
                else if (P != Q)
                    return SHELL_QUARTET_TYPE_ABCC;
                else if (R != S)
                    return SHELL_QUARTET_TYPE_AACD;
                else
                    return SHELL_QUARTET_TYPE_AACC;
            } else {
                if (P != Q)
                    return SHELL_QUARTET_TYPE_ABAB;
                else
                    return SHELL_QUARTET_TYPE_AAAA;
            }
        }

        typedef boost::array<unsigned, 4> ShellQuartetIndex;

        template <class SQIG = ShellQuartetIndexGenerator>
        class ShellQuartetIndexGeneratorCache {
        public:
            ShellQuartetIndexGeneratorCache(const SQIG& b);
            ~ShellQuartetIndexGeneratorCache();

            void store(unsigned long n, const SQIG& i);
    
            SQIG get(unsigned long n);

        private:
            typedef std::map<unsigned long, SQIG*> Map;
            Map _rep;
        };

        template <class SQIG>
        ShellQuartetIndexGeneratorCache<SQIG>::ShellQuartetIndexGeneratorCache(const SQIG& b)
        {
            _rep[0] = new SQIG(b);
        }

        template <class SQIG>
        ShellQuartetIndexGeneratorCache<SQIG>::~ShellQuartetIndexGeneratorCache()
        {
            for (typename Map::iterator i = _rep.begin(); i != _rep.end(); ++i)
                delete (*i).second;
        }

        template <class SQIG>
        void ShellQuartetIndexGeneratorCache<SQIG>::store(unsigned long n, const SQIG& i)
        {
            _rep[n] = new SQIG(i);
        }

        template <class SQIG>
        SQIG ShellQuartetIndexGeneratorCache<SQIG>::get(unsigned long n)
        {
            typename Map::const_reverse_iterator i = _rep.rbegin();

            while ((*i).first > n)
                ++i;

            SQIG g = *(*i).second;
    
            std::advance(g, n - (*i).first);

            return g;
        }

    }
}

#endif
