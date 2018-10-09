/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_SHELL_ACD_INDEX_GENERATOR_HPP
#define NIEDOIDA_CORE_KIT_SHELL_ACD_INDEX_GENERATOR_HPP

#include <iterator>
#include <cassert>
#include <map>

#include <boost/array.hpp>

namespace niedoida {

    namespace core {

/**
 * @defgroup shell_ACD_iteration Shell ACD Iteration
 * @ingroup core_kit
 * @{
 */

/**
 * @brief Types of shell ACDs
 *
 */
        enum ShellACDType {
            SHELL_ACD_TYPE_ACC,
            SHELL_ACD_TYPE_ACD
        };

        inline
        ShellACDType shell_ACD_type(unsigned P, unsigned R, unsigned S)
        {
            if(R != S)
                return SHELL_ACD_TYPE_ACD;
            else 
                return SHELL_ACD_TYPE_ACC;
        }

/**
 * @brief Information about a shell ACD
 *
 */
        typedef boost::array<unsigned, 3> ShellACDIndex;

/**
 * @brief Iterator over permutationally-unique shell ACDs 
 *
 */
        class ShellACDIndexGenerator: 
            public std::iterator<std::input_iterator_tag, ShellACDIndex>
        {
        public:
            ShellACDIndexGenerator(std::size_t, std::size_t);

            bool operator == (const ShellACDIndexGenerator&) const;
            bool operator != (const ShellACDIndexGenerator&) const;

            const ShellACDIndex& operator* () const;

            ShellACDIndexGenerator& operator++ ();
            ShellACDIndexGenerator operator++ (int);

            ShellACDIndexGenerator make_end() const;

        private:
            void inc();

            std::size_t _n;
            std::size_t _n_aux;
            ShellACDIndex _i;
        };

        inline
        ShellACDIndexGenerator::ShellACDIndexGenerator(
            std::size_t no_shells, std::size_t no_shells_aux):
            _n(no_shells),
            _n_aux(no_shells_aux)
        {
            _i[0] = 0;
            _i[1] = 0;
            _i[2] = 0;
        }

        inline
        bool ShellACDIndexGenerator::operator == (
            const ShellACDIndexGenerator& rhs) const
        {
            assert(_n == rhs._n);
            assert(_n_aux == rhs._n_aux);

            return _i[0] == rhs._i[0] && _i[1] == rhs._i[1] && _i[2] == rhs._i[2];
        }

        inline
        bool ShellACDIndexGenerator::operator != (
            const ShellACDIndexGenerator& rhs) const
        {
            return !(*this == rhs);
        }

        inline
        const ShellACDIndex& ShellACDIndexGenerator::operator* () const
        {
            return _i;
        }

        inline
        ShellACDIndexGenerator& ShellACDIndexGenerator::operator++ ()
        {
            inc();
            return *this;
        }

        inline
        ShellACDIndexGenerator ShellACDIndexGenerator::operator++ (int)
        {
            const ShellACDIndexGenerator t = *this;
            inc();
            return t;
        }


        inline
        ShellACDIndexGenerator ShellACDIndexGenerator::make_end() const
        {
            ShellACDIndexGenerator t(*this);

            t._i[0] = _n_aux;
            t._i[1] = 0;
            t._i[2] = 0;

            return t;
        }

        inline
        void ShellACDIndexGenerator::inc()
        {
            if (_i[0] == _n_aux)
                return;
    
            if(_i[2] + 1 < _n) {
                _i[2] += 1;
            } else {
                if(_i[1] + 1 < _n) {
                    _i[1] += 1;
                    _i[2] = _i[1];
                } else {
                    _i[0] += 1;
                    _i[1] = 0;
                    _i[2] = 0;
                }
            }
        }

/**
 * @}
 */


        template <class SQIG = ShellACDIndexGenerator>
        class ShellACDIndexGeneratorCache {
        public:
            ShellACDIndexGeneratorCache(const SQIG& b);
            ~ShellACDIndexGeneratorCache();

            void store(unsigned long n, const SQIG& i);
    
            SQIG get(unsigned long n);

        private:
            typedef std::map<unsigned long, SQIG*> Map;
            Map _rep;
        };

        template <class SQIG>
        ShellACDIndexGeneratorCache<SQIG>::ShellACDIndexGeneratorCache(const SQIG& b)
        {
            _rep[0] = new SQIG(b);
        }

        template <class SQIG>
        ShellACDIndexGeneratorCache<SQIG>::~ShellACDIndexGeneratorCache()
        {
            for (typename Map::iterator i = _rep.begin(); i != _rep.end(); ++i)
                delete (*i).second;
        }

        template <class SQIG>
        void ShellACDIndexGeneratorCache<SQIG>::store(unsigned long n, const SQIG& i)
        {
            _rep[n] = new SQIG(i);
        }

        template <class SQIG>
        SQIG ShellACDIndexGeneratorCache<SQIG>::get(unsigned long n)
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
