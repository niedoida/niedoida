/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_SHELL_PAIR_INDEX_GENERATOR_HPP
#define NIEDOIDA_CORE_KIT_SHELL_PAIR_INDEX_GENERATOR_HPP

#include <iterator>
#include <cassert>

#include <boost/array.hpp>


namespace niedoida {

    namespace core {

/**
 * @defgroup shell_pairs_iteration Shell Pairs Iteration
 * @ingroup core_kit
 * @{
 */


/**
 * @brief Information about a shell pair
 *
 */
        typedef boost::array<unsigned, 2> ShellPairIndex;

/**
 * @brief Iterator over permutationally-unique diagonal shell pairs
 *
 */
        class DiagonalShellPairIndexGenerator: 
            public std::iterator<std::input_iterator_tag, ShellPairIndex>
        {
        public:
            DiagonalShellPairIndexGenerator(std::size_t no_shells);

            bool operator == (const DiagonalShellPairIndexGenerator&) const;
            bool operator != (const DiagonalShellPairIndexGenerator&) const;

            const ShellPairIndex& operator* () const;

            DiagonalShellPairIndexGenerator& operator++ ();
            DiagonalShellPairIndexGenerator operator++ (int);

            DiagonalShellPairIndexGenerator make_end() const;

        private:
            void inc();

            std::size_t _n;
            ShellPairIndex _i;
        };

        inline
        DiagonalShellPairIndexGenerator::DiagonalShellPairIndexGenerator(
            std::size_t no_shells):
            _n(no_shells)
        {
            _i[0] = _i[1] = 0;
        }

        inline
        bool DiagonalShellPairIndexGenerator::operator == (
            const DiagonalShellPairIndexGenerator& rhs) const
        {
            assert(_n == rhs._n);

            return _i[0] == rhs._i[0];
        }

        inline
        bool DiagonalShellPairIndexGenerator::operator != (
            const DiagonalShellPairIndexGenerator& rhs) const
        {
            return !(*this == rhs);
        }

        inline
        const ShellPairIndex& DiagonalShellPairIndexGenerator::operator* () const
        {
            return _i;
        }

        inline
        DiagonalShellPairIndexGenerator& DiagonalShellPairIndexGenerator::operator++ ()
        {
            inc();
            return *this;
        }

        inline
        DiagonalShellPairIndexGenerator DiagonalShellPairIndexGenerator::operator++ (int)
        {
            const DiagonalShellPairIndexGenerator t = *this;
            inc();
            return t;
        }


        inline
        DiagonalShellPairIndexGenerator DiagonalShellPairIndexGenerator::make_end() const
        {
            DiagonalShellPairIndexGenerator t(*this);
            t._i[0] = t._i[1] = _n;
            return t;
        }

        inline
        void DiagonalShellPairIndexGenerator::inc()
        {
            if (_i[0] == _n)
                return;

            _i[0] += 1;
            _i[1] = _i[0];
        }

/**
 * @brief Iterator over permutationally-unique off-diagonal shell pairs
 *
 */
        class OffDiagonalShellPairIndexGenerator: 
            public std::iterator<std::input_iterator_tag, ShellPairIndex>
        {
        public:
            OffDiagonalShellPairIndexGenerator(std::size_t);

            bool operator == (const OffDiagonalShellPairIndexGenerator&) const;
            bool operator != (const OffDiagonalShellPairIndexGenerator&) const;

            const ShellPairIndex& operator* () const;

            OffDiagonalShellPairIndexGenerator& operator++ ();
            OffDiagonalShellPairIndexGenerator operator++ (int);

            OffDiagonalShellPairIndexGenerator make_end() const;

        private:
            void inc();

            std::size_t _n;
            ShellPairIndex _i;
        };

        inline
        OffDiagonalShellPairIndexGenerator::OffDiagonalShellPairIndexGenerator(
            std::size_t no_shells):
            _n(no_shells)
        {
            _i[0] = 0;
            _i[1] = 1;
        }

        inline
        bool OffDiagonalShellPairIndexGenerator::operator == (
            const OffDiagonalShellPairIndexGenerator& rhs) const
        {
            assert(_n == rhs._n);

            return _i[0] == rhs._i[0] && _i[1] == rhs._i[1];
        }

        inline
        bool OffDiagonalShellPairIndexGenerator::operator != (
            const OffDiagonalShellPairIndexGenerator& rhs) const
        {
            return !(*this == rhs);
        }

        inline
        const ShellPairIndex& OffDiagonalShellPairIndexGenerator::operator* () const
        {
            return _i;
        }

        inline
        OffDiagonalShellPairIndexGenerator& OffDiagonalShellPairIndexGenerator::operator++ ()
        {
            inc();
            return *this;
        }

        inline
        OffDiagonalShellPairIndexGenerator OffDiagonalShellPairIndexGenerator::operator++ (int)
        {
            const OffDiagonalShellPairIndexGenerator t = *this;
            inc();
            return t;
        }


        inline
        OffDiagonalShellPairIndexGenerator OffDiagonalShellPairIndexGenerator::make_end() const
        {
            OffDiagonalShellPairIndexGenerator t(*this);

            t._i[0] = 0;
            t._i[1] = _n;

            return t;
        }

        inline
        void OffDiagonalShellPairIndexGenerator::inc()
        {
            if (_i[1] == _n)
                return;

            if (_i[0] + 1 < _i[1]) {
                _i[0] += 1;
            } else {
                _i[0] = 0;
                _i[1] += 1;
            }
        }

/**
 * @brief Iterator over (all) permutationally-unique shell pairs
 *
 */
        class ShellPairIndexGenerator: 
            public std::iterator<std::input_iterator_tag, ShellPairIndex>
        {
        public:
            ShellPairIndexGenerator(std::size_t);

            bool operator == (const ShellPairIndexGenerator&) const;
            bool operator != (const ShellPairIndexGenerator&) const;

            const ShellPairIndex& operator* () const;

            ShellPairIndexGenerator& operator++ ();
            ShellPairIndexGenerator operator++ (int);

            ShellPairIndexGenerator make_end() const;

        private:
            void inc();

            std::size_t _n;
            ShellPairIndex _i;
        };

        inline
        ShellPairIndexGenerator::ShellPairIndexGenerator(
            std::size_t no_shells):
            _n(no_shells)
        {
            _i[0] = 0;
            _i[1] = 0;
        }

        inline
        bool ShellPairIndexGenerator::operator == (
            const ShellPairIndexGenerator& rhs) const
        {
            assert(_n == rhs._n);

            return _i[0] == rhs._i[0] && _i[1] == rhs._i[1];
        }

        inline
        bool ShellPairIndexGenerator::operator != (
            const ShellPairIndexGenerator& rhs) const
        {
            return !(*this == rhs);
        }

        inline
        const ShellPairIndex& ShellPairIndexGenerator::operator* () const
        {
            return _i;
        }

        inline
        ShellPairIndexGenerator& ShellPairIndexGenerator::operator++ ()
        {
            inc();
            return *this;
        }

        inline
        ShellPairIndexGenerator ShellPairIndexGenerator::operator++ (int)
        {
            const ShellPairIndexGenerator t = *this;
            inc();
            return t;
        }


        inline
        ShellPairIndexGenerator ShellPairIndexGenerator::make_end() const
        {
            ShellPairIndexGenerator t(*this);

            t._i[0] = 0;
            t._i[1] = _n;

            return t;
        }

        inline
        void ShellPairIndexGenerator::inc()
        {
            if (_i[1] == _n)
                return;

            if (_i[0] < _i[1]) {
                _i[0] += 1;
            } else {
                _i[0] = 0;
                _i[1] += 1;
            }
        }

        template <class SQIG = ShellPairIndexGenerator>
        class ShellPairIndexGeneratorCache {
        public:
            ShellPairIndexGeneratorCache(const SQIG& b);
            ~ShellPairIndexGeneratorCache();

            void store(unsigned long n, const SQIG& i);
    
            SQIG get(unsigned long n);

        private:
            typedef std::map<unsigned long, SQIG*> Map;
            Map _rep;
        };

        template <class SQIG>
        ShellPairIndexGeneratorCache<SQIG>::ShellPairIndexGeneratorCache(const SQIG& b)
        {
            _rep[0] = new SQIG(b);
        }

        template <class SQIG>
        ShellPairIndexGeneratorCache<SQIG>::~ShellPairIndexGeneratorCache()
        {
            for (typename Map::iterator i = _rep.begin(); i != _rep.end(); ++i)
                delete (*i).second;
        }

        template <class SQIG>
        void ShellPairIndexGeneratorCache<SQIG>::store(unsigned long n, const SQIG& i)
        {
            _rep[n] = new SQIG(i);
        }

        template <class SQIG>
        SQIG ShellPairIndexGeneratorCache<SQIG>::get(unsigned long n)
        {
            typename Map::const_reverse_iterator i = _rep.rbegin();

            while ((*i).first > n)
                ++i;

            SQIG g = *(*i).second;
    
            std::advance(g, n - (*i).first);

            return g;
        }

/**
 * @brief Iterator over all mixed shell pairs
 *%
 */
        class MixedShellPairIndexGenerator: 
            public std::iterator<std::input_iterator_tag, ShellPairIndex>
        {
        public:
            MixedShellPairIndexGenerator(std::size_t, std::size_t);

            bool operator == (const MixedShellPairIndexGenerator&) const;
            bool operator != (const MixedShellPairIndexGenerator&) const;

            const ShellPairIndex& operator* () const;

            MixedShellPairIndexGenerator& operator++ ();
            MixedShellPairIndexGenerator operator++ (int);

            MixedShellPairIndexGenerator make_end() const;

        private:
            void inc();

            std::size_t _n_1;
            std::size_t _n_2;
            ShellPairIndex _i;
        };

        inline
        MixedShellPairIndexGenerator::MixedShellPairIndexGenerator(
            std::size_t no_shells_1, std::size_t no_shells_2):
            _n_1(no_shells_1),
            _n_2(no_shells_2)
        {
            _i[0] = 0;
            _i[1] = 0;
        }

        inline
        bool MixedShellPairIndexGenerator::operator == (
            const MixedShellPairIndexGenerator& rhs) const
        {
            assert(_n_1 == rhs._n_1 && _n_2 == rhs._n_2);

            return _i[0] == rhs._i[0] && _i[1] == rhs._i[1];
        }

        inline
        bool MixedShellPairIndexGenerator::operator != (
            const MixedShellPairIndexGenerator& rhs) const
        {
            return !(*this == rhs);
        }

        inline
        const ShellPairIndex& MixedShellPairIndexGenerator::operator* () const
        {
            return _i;
        }

        inline
        MixedShellPairIndexGenerator& MixedShellPairIndexGenerator::operator++ ()
        {
            inc();
            return *this;
        }

        inline
        MixedShellPairIndexGenerator MixedShellPairIndexGenerator::operator++ (int)
        {
            const MixedShellPairIndexGenerator t = *this;
            inc();
            return t;
        }


        inline
        MixedShellPairIndexGenerator MixedShellPairIndexGenerator::make_end() const
        {
            MixedShellPairIndexGenerator t(*this);

            t._i[0] = _n_1;
            t._i[1] = 0;

            return t;
        }

        inline
        void MixedShellPairIndexGenerator::inc()
        {
            if (_i[0] == _n_1)
                return;

            if (_i[1] + 1 < _n_2) {
                _i[1] += 1;
            } else {
                _i[1] = 0;
                _i[0] += 1;
            }
        }

        template <class SQIG = MixedShellPairIndexGenerator>
        class MixedShellPairIndexGeneratorCache {
        public:
            MixedShellPairIndexGeneratorCache(const SQIG& b);
            ~MixedShellPairIndexGeneratorCache();

            void store(unsigned long n, const SQIG& i);
    
            SQIG get(unsigned long n);

        private:
            typedef std::map<unsigned long, SQIG*> Map;
            Map _rep;
        };

        template <class SQIG>
        MixedShellPairIndexGeneratorCache<SQIG>::MixedShellPairIndexGeneratorCache(const SQIG& b)
        {
            _rep[0] = new SQIG(b);
        }

        template <class SQIG>
        MixedShellPairIndexGeneratorCache<SQIG>::~MixedShellPairIndexGeneratorCache()
        {
            for (typename Map::iterator i = _rep.begin(); i != _rep.end(); ++i)
                delete (*i).second;
        }

        template <class SQIG>
        void MixedShellPairIndexGeneratorCache<SQIG>::store(unsigned long n, const SQIG& i)
        {
            _rep[n] = new SQIG(i);
        }

        template <class SQIG>
        SQIG MixedShellPairIndexGeneratorCache<SQIG>::get(unsigned long n)
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
