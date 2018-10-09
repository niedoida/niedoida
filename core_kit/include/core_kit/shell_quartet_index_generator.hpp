/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_SHELL_QUARTET_INDEX_GENERATOR_HPP
#define NIEDOIDA_CORE_KIT_SHELL_QUARTET_INDEX_GENERATOR_HPP

#include <iterator>
#include <cassert>
#include <map>

#include <boost/array.hpp>

#include "core_kit/shell_quartet.hpp"

namespace niedoida {

    namespace core {

/**
 * @brief Iterator over permutationally-unique shell quartets of type AAAA
 *
 */
        class AAAAShellQuartetIndexGenerator: 
            public std::iterator<std::input_iterator_tag, ShellQuartetIndex>
        {
        public:
            AAAAShellQuartetIndexGenerator(std::size_t no_shells);

            bool operator == (const AAAAShellQuartetIndexGenerator&) const;
            bool operator != (const AAAAShellQuartetIndexGenerator&) const;

            const ShellQuartetIndex& operator* () const;

            AAAAShellQuartetIndexGenerator& operator++ ();
            AAAAShellQuartetIndexGenerator operator++ (int);

            AAAAShellQuartetIndexGenerator make_end() const;

        private:
            void inc();

            std::size_t _n;
            ShellQuartetIndex _i;
        };

        inline
        AAAAShellQuartetIndexGenerator::AAAAShellQuartetIndexGenerator(
            std::size_t no_shells):
            _n(no_shells)
        {
            _i[0] = _i[1] = _i[2] = _i[3] = 0;
        }

        inline
        bool AAAAShellQuartetIndexGenerator::operator == (
            const AAAAShellQuartetIndexGenerator& rhs) const
        {
            assert(_n == rhs._n);

            return _i[0] == rhs._i[0];
        }

        inline
        bool AAAAShellQuartetIndexGenerator::operator != (
            const AAAAShellQuartetIndexGenerator& rhs) const
        {
            return !(*this == rhs);
        }

        inline
        const ShellQuartetIndex& AAAAShellQuartetIndexGenerator::operator* () const
        {
            return _i;
        }

        inline
        AAAAShellQuartetIndexGenerator& AAAAShellQuartetIndexGenerator::operator++ ()
        {
            inc();
            return *this;
        }

        inline
        AAAAShellQuartetIndexGenerator AAAAShellQuartetIndexGenerator::operator++ (int)
        {
            const AAAAShellQuartetIndexGenerator t = *this;
            inc();
            return t;
        }


        inline
        AAAAShellQuartetIndexGenerator AAAAShellQuartetIndexGenerator::make_end() const
        {
            AAAAShellQuartetIndexGenerator t(*this);
            t._i[0] = t._i[1] = t._i[2] = t._i[3] = _n;    
            return t;
        }

        inline
        void AAAAShellQuartetIndexGenerator::inc()
        {
            if (_i[0] == _n)
                return;

            _i[0] += 1;
            _i[1] = _i[2] = _i[3] = _i[0];
        }

/**
 * @brief Iterator over permutationally-unique shell quartets of type ABAB
 *
 */
        class ABABShellQuartetIndexGenerator: 
            public std::iterator<std::input_iterator_tag, ShellQuartetIndex>
        {
        public:
            ABABShellQuartetIndexGenerator(std::size_t);

            bool operator == (const ABABShellQuartetIndexGenerator&) const;
            bool operator != (const ABABShellQuartetIndexGenerator&) const;

            const ShellQuartetIndex& operator* () const;

            ABABShellQuartetIndexGenerator& operator++ ();
            ABABShellQuartetIndexGenerator operator++ (int);

            ABABShellQuartetIndexGenerator make_end() const;

        private:
            void inc();

            std::size_t _n;
            ShellQuartetIndex _i;
        };

        inline
        ABABShellQuartetIndexGenerator::ABABShellQuartetIndexGenerator(
            std::size_t no_shells):
            _n(no_shells)
        {
            _i[0] = _i[2] = 0;
            _i[1] = _i[3] = 1;
        }

        inline
        bool ABABShellQuartetIndexGenerator::operator == (
            const ABABShellQuartetIndexGenerator& rhs) const
        {
            assert(_n == rhs._n);

            return _i[0] == rhs._i[0] && _i[1] == rhs._i[1];
        }

        inline
        bool ABABShellQuartetIndexGenerator::operator != (
            const ABABShellQuartetIndexGenerator& rhs) const
        {
            return !(*this == rhs);
        }

        inline
        const ShellQuartetIndex& ABABShellQuartetIndexGenerator::operator* () const
        {
            return _i;
        }

        inline
        ABABShellQuartetIndexGenerator& ABABShellQuartetIndexGenerator::operator++ ()
        {
            inc();
            return *this;
        }

        inline
        ABABShellQuartetIndexGenerator ABABShellQuartetIndexGenerator::operator++ (int)
        {
            const ABABShellQuartetIndexGenerator t = *this;
            inc();
            return t;
        }


        inline
        ABABShellQuartetIndexGenerator ABABShellQuartetIndexGenerator::make_end() const
        {
            ABABShellQuartetIndexGenerator t(*this);

            t._i[0] = t._i[2] = 0;
            t._i[1] = t._i[3] = _n;

            return t;
        }

        inline
        void ABABShellQuartetIndexGenerator::inc()
        {
            if (_i[1] == _n)
                return;

            if (_i[0] < _i[1] - 1) {
                _i[2] = ++_i[0];
            } else {
                _i[0] = _i[2] = 0;
                _i[3] = ++_i[1];
            }
        }

/**
 * @brief Iterator over permutationally-unique shell quartets of type AACC
 *
 */
        class AACCShellQuartetIndexGenerator: 
            public std::iterator<std::input_iterator_tag, ShellQuartetIndex>
        {
        public:
            AACCShellQuartetIndexGenerator(std::size_t);

            bool operator == (const AACCShellQuartetIndexGenerator&) const;
            bool operator != (const AACCShellQuartetIndexGenerator&) const;

            const ShellQuartetIndex& operator* () const;

            AACCShellQuartetIndexGenerator& operator++ ();
            AACCShellQuartetIndexGenerator operator++ (int);

            AACCShellQuartetIndexGenerator make_end() const;

        private:
            void inc();

            std::size_t _n;
            ShellQuartetIndex _i;
        };

        inline
        AACCShellQuartetIndexGenerator::AACCShellQuartetIndexGenerator(
            std::size_t no_shells):
            _n(no_shells)
        {
            _i[0] = _i[1] = 0;
            _i[2] = _i[3] = 1;
        }

        inline
        bool AACCShellQuartetIndexGenerator::operator == (
            const AACCShellQuartetIndexGenerator& rhs) const
        {
            assert(_n == rhs._n);

            return _i[0] == rhs._i[0] && _i[2] == rhs._i[2];
        }

        inline
        bool AACCShellQuartetIndexGenerator::operator != (
            const AACCShellQuartetIndexGenerator& rhs) const
        {
            return !(*this == rhs);
        }

        inline
        const ShellQuartetIndex& AACCShellQuartetIndexGenerator::operator* () const
        {
            return _i;
        }

        inline
        AACCShellQuartetIndexGenerator& AACCShellQuartetIndexGenerator::operator++ ()
        {
            inc();
            return *this;
        }

        inline
        AACCShellQuartetIndexGenerator AACCShellQuartetIndexGenerator::operator++ (int)
        {
            const AACCShellQuartetIndexGenerator t = *this;
            inc();
            return t;
        }


        inline
        AACCShellQuartetIndexGenerator AACCShellQuartetIndexGenerator::make_end() const
        {
            AACCShellQuartetIndexGenerator t(*this);

            t._i[0] = t._i[1] = 0;
            t._i[2] = t._i[3] = _n;

            return t;
        }

        inline
        void AACCShellQuartetIndexGenerator::inc()
        {
            if (_i[2] == _n)
                return;

            if (_i[0] < _i[2] - 1) {
                _i[1] = ++_i[0];
            } else {
                _i[0] = _i[1] = 0;
                _i[3] = ++_i[2];
            }
        }

/**
 * @brief Iterator over permutationally-unique shell quartets of type ABCD
 *
 */
        class ABCDShellQuartetIndexGenerator: 
            public std::iterator<std::input_iterator_tag, ShellQuartetIndex>
        {
        public:
            ABCDShellQuartetIndexGenerator(std::size_t);

            bool operator == (const ABCDShellQuartetIndexGenerator&) const;
            bool operator != (const ABCDShellQuartetIndexGenerator&) const;

            const ShellQuartetIndex& operator* () const;

            ABCDShellQuartetIndexGenerator& operator++ ();
            ABCDShellQuartetIndexGenerator operator++ (int);

            ABCDShellQuartetIndexGenerator make_end() const;

        private:
            void inc();

            std::size_t _n;
            ShellQuartetIndex _i;
        };

        inline
        ABCDShellQuartetIndexGenerator::ABCDShellQuartetIndexGenerator(
            std::size_t no_shells):
            _n(no_shells)
        {
            if (_n > 2) {
                _i[0] = 0;
                _i[1] = 1;
                _i[2] = 0;
                _i[3] = 2;
            } else {
                _i[0] = _n;
                _i[1] = 0;
                _i[2] = 0;
                _i[3] = 0;
            }
        }

        inline
        bool ABCDShellQuartetIndexGenerator::operator == (
            const ABCDShellQuartetIndexGenerator& rhs) const
        {
            assert(_n == rhs._n);

            return 
                _i[0] == rhs._i[0] && 
                _i[1] == rhs._i[1] && 
                _i[2] == rhs._i[2] && 
                _i[3] == rhs._i[3];
        }

        inline
        bool ABCDShellQuartetIndexGenerator::operator != (
            const ABCDShellQuartetIndexGenerator& rhs) const
        {
            return !(*this == rhs);
        }

        inline
        const ShellQuartetIndex& ABCDShellQuartetIndexGenerator::operator* () const
        {
            return _i;
        }

        inline
        ABCDShellQuartetIndexGenerator& ABCDShellQuartetIndexGenerator::operator++ ()
        {
            inc();
            return *this;
        }

        inline
        ABCDShellQuartetIndexGenerator ABCDShellQuartetIndexGenerator::operator++ (int)
        {
            const ABCDShellQuartetIndexGenerator t(*this);
            inc();
            return t;
        }


        inline
        ABCDShellQuartetIndexGenerator ABCDShellQuartetIndexGenerator::make_end() const
        {
            ABCDShellQuartetIndexGenerator t(*this);

            t._i[0] = _n;
            t._i[1] = 0;
            t._i[2] = 0;
            t._i[3] = 0;
    
            return t;
        }

        inline
        void ABCDShellQuartetIndexGenerator::inc()
        {
            if (_i[0] == _n)
                return;

            for (;;) {
                _i[3] += 1;
                if (_i[3] == _n) {
                    _i[3] = 0;
                    _i[2] += 1;
                    if (_i[2] == _n) {
                        _i[2] = 0;
                        _i[1] += 1;
                        if (_i[1] == _n) {
                            _i[1] = 0;
                            _i[0] += 1;
                        }
                    }
                }

                if (_i[0] == _n)
                    break;

                if (_i[0] > _i[2])
                    continue;

                if (_i[0] == _i[2] && _i[1] > _i[3])
                    continue;

                if (_i[0] > _i[1] || _i[2] > _i[3])
                    continue;

                if (shell_quartet_type(_i[0], _i[1], _i[2], _i[3]) == SHELL_QUARTET_TYPE_ABCD)
                    break;
            }
        }


/**
 * @brief Iterator over permutationally-unique shell quartets of type ABCC
 *
 */
        class ABCCShellQuartetIndexGenerator: 
            public std::iterator<std::input_iterator_tag, ShellQuartetIndex>
        {
        public:
            ABCCShellQuartetIndexGenerator(std::size_t);

            bool operator == (const ABCCShellQuartetIndexGenerator&) const;
            bool operator != (const ABCCShellQuartetIndexGenerator&) const;

            const ShellQuartetIndex& operator* () const;

            ABCCShellQuartetIndexGenerator& operator++ ();
            ABCCShellQuartetIndexGenerator operator++ (int);

            ABCCShellQuartetIndexGenerator make_end() const;

        private:
            void inc();

            std::size_t _n;
            ShellQuartetIndex _i;
        };

        inline
        ABCCShellQuartetIndexGenerator::ABCCShellQuartetIndexGenerator(
            std::size_t no_shells):
            _n(no_shells)
        {
            _i[0] = 0;
            _i[1] = _i[2] = _i[3] = 1; 
        }

        inline
        bool ABCCShellQuartetIndexGenerator::operator == (
            const ABCCShellQuartetIndexGenerator& rhs) const
        {
            assert(_n == rhs._n);

            return _i[0] == rhs._i[0] && _i[1] == rhs._i[1] && _i[2] == rhs._i[2];
        }

        inline
        bool ABCCShellQuartetIndexGenerator::operator != (
            const ABCCShellQuartetIndexGenerator& rhs) const
        {
            return !(*this == rhs);
        }

        inline
        const ShellQuartetIndex& ABCCShellQuartetIndexGenerator::operator* () const
        {
            return _i;
        }

        inline
        ABCCShellQuartetIndexGenerator& ABCCShellQuartetIndexGenerator::operator++ ()
        {
            inc();
            return *this;
        }

        inline
        ABCCShellQuartetIndexGenerator ABCCShellQuartetIndexGenerator::operator++ (int)
        {
            const ABCCShellQuartetIndexGenerator t(*this);
            inc();
            return t;
        }


        inline
        ABCCShellQuartetIndexGenerator ABCCShellQuartetIndexGenerator::make_end() const
        {
            ABCCShellQuartetIndexGenerator t(*this);

            t._i[0] = 0;
            t._i[1] = 1;
            t._i[2] = t._i[3] = _n;

            return t;
        }

        inline
        void ABCCShellQuartetIndexGenerator::inc()
        {
            if (_i[3] == _n)
                return;

            if (_i[0] < std::min(_i[1], _i[2]) - 1) {
                _i[0] += 1;
            } else if (_i[1] < _n - 1) {
                _i[1] += 1;
                _i[0] = 0;
            } else {
                _i[2] = ++_i[3];
                _i[1] = 1;
                _i[0] = 0;
            }
        }


/**
 * @brief Iterator over permutationally-unique shell quartets of type AACD
 *
 */
        class AACDShellQuartetIndexGenerator: 
            public std::iterator<std::input_iterator_tag, ShellQuartetIndex>
        {
        public:
            AACDShellQuartetIndexGenerator(std::size_t no_shells);

            bool operator == (const AACDShellQuartetIndexGenerator&) const;
            bool operator != (const AACDShellQuartetIndexGenerator&) const;

            const ShellQuartetIndex& operator* () const;

            AACDShellQuartetIndexGenerator& operator++ ();
            AACDShellQuartetIndexGenerator operator++ (int);

            AACDShellQuartetIndexGenerator make_end() const;

        private:
            void inc();

            std::size_t _n;
            ShellQuartetIndex _i;
        };

        inline
        AACDShellQuartetIndexGenerator::AACDShellQuartetIndexGenerator(
            std::size_t no_shells):
            _n(no_shells)
        {
            if (_n > 1) {
                _i[0] = _i[1] = _i[2] = 0;
                _i[3] = 1; 
            } else {
                _i[0] = _i[1] = _i[2] = _n - 1;
                _i[3] = _n;
            }
        }

        inline
        bool AACDShellQuartetIndexGenerator::operator == (
            const AACDShellQuartetIndexGenerator& rhs) const
        {
            assert(_n == rhs._n);

            return _i[0] == rhs._i[0] && _i[2] == rhs._i[2] && _i[3] == rhs._i[3];
        }

        inline
        bool AACDShellQuartetIndexGenerator::operator != (
            const AACDShellQuartetIndexGenerator& rhs) const
        {
            return !(*this == rhs);
        }

        inline
        const ShellQuartetIndex& AACDShellQuartetIndexGenerator::operator* () const
        {
            return _i;
        }

        inline
        AACDShellQuartetIndexGenerator& AACDShellQuartetIndexGenerator::operator++ ()
        {
            inc();
            return *this;
        }

        inline
        AACDShellQuartetIndexGenerator AACDShellQuartetIndexGenerator::operator++ (int)
        {
            const AACDShellQuartetIndexGenerator t = *this;
            inc();
            return t;
        }


        inline
        AACDShellQuartetIndexGenerator AACDShellQuartetIndexGenerator::make_end() const
        {
            AACDShellQuartetIndexGenerator t(*this);

            if (_n > 1) {
                t._i[0] = t._i[1] = t._i[2] = 0;
            } else {
                t._i[0] = t._i[1] = t._i[2] = _n - 1;
            }

            t._i[3] = _n; 

            return t;
        }

        inline
        void AACDShellQuartetIndexGenerator::inc()
        {
            if (_i[3] == _n)
                return;

            if (_i[1] < _i[2]) {
                _i[1] = ++_i[0];
            } else if (_i[2] < _i[3] - 1) {
                _i[2] += 1;
                _i[0] = _i[1] = 0;
            } else {
                _i[3] += 1;
                _i[2] = 0;
                _i[0] = _i[1] = 0;
            }
        }


/**
 * @brief Iterator over permutationally-unique shell quartets
 *
 */
        class ShellQuartetIndexGenerator:
            public std::iterator<std::input_iterator_tag, ShellQuartetIndex>
        {
        public:
            ShellQuartetIndexGenerator(std::size_t);

            bool operator == (const ShellQuartetIndexGenerator&) const;
            bool operator != (const ShellQuartetIndexGenerator&) const;

            const ShellQuartetIndex& operator* () const;

            ShellQuartetIndexGenerator& operator++ ();
            ShellQuartetIndexGenerator operator++ (int);

            ShellQuartetIndexGenerator make_end() const;

        private:
            void inc();

            std::size_t m_no_shells;

            int m_current_iterator;

            AAAAShellQuartetIndexGenerator m_aaaa_current;
            AAAAShellQuartetIndexGenerator m_aaaa_end;
            ABABShellQuartetIndexGenerator m_abab_current;
            ABABShellQuartetIndexGenerator m_abab_end;
            AACCShellQuartetIndexGenerator m_aacc_current;
            AACCShellQuartetIndexGenerator m_aacc_end;
            ABCDShellQuartetIndexGenerator m_abcd_current;
            ABCDShellQuartetIndexGenerator m_abcd_end;
            ABCCShellQuartetIndexGenerator m_abcc_current;
            ABCCShellQuartetIndexGenerator m_abcc_end;
            AACDShellQuartetIndexGenerator m_aacd_current;
            AACDShellQuartetIndexGenerator m_aacd_end;
        };

        inline
        ShellQuartetIndexGenerator::ShellQuartetIndexGenerator(
            std::size_t no_shells):
            m_no_shells(no_shells),
            m_current_iterator(0),
            m_aaaa_current(no_shells),
            m_aaaa_end(m_aaaa_current.make_end()),
            m_abab_current(no_shells),
            m_abab_end(m_abab_current.make_end()),
            m_aacc_current(no_shells),
            m_aacc_end(m_aacc_current.make_end()),
            m_abcd_current(no_shells),
            m_abcd_end(m_abcd_current.make_end()),
            m_abcc_current(no_shells),
            m_abcc_end(m_abcc_current.make_end()),
            m_aacd_current(no_shells),
            m_aacd_end(m_aacd_current.make_end())
        {
        }

        inline
        bool ShellQuartetIndexGenerator::operator == (
            const ShellQuartetIndexGenerator& rhs) const
        {
            return 
                m_current_iterator == rhs.m_current_iterator &&
                m_aaaa_current == rhs.m_aaaa_current &&
                m_abab_current == rhs.m_abab_current &&
                m_aacc_current == rhs.m_aacc_current &&
                m_abcd_current == rhs.m_abcd_current &&
                m_abcc_current == rhs.m_abcc_current &&
                m_aacd_current == rhs.m_aacd_current;
        }

        inline
        bool ShellQuartetIndexGenerator::operator != (
            const ShellQuartetIndexGenerator& rhs) const
        {
            return !(*this == rhs);
        }

        inline
        const ShellQuartetIndex& ShellQuartetIndexGenerator::operator* () const
        {
            assert(m_current_iterator >= SHELL_QUARTET_TYPE_AAAA); 
            assert(m_current_iterator <= SHELL_QUARTET_TYPE_AACD); 

            switch (m_current_iterator) {
            case SHELL_QUARTET_TYPE_AAAA:
                return *m_aaaa_current;
            case SHELL_QUARTET_TYPE_ABAB:
                return *m_abab_current;
            case SHELL_QUARTET_TYPE_AACC:
                return *m_aacc_current;
            case SHELL_QUARTET_TYPE_ABCD:
                return *m_abcd_current;
            case SHELL_QUARTET_TYPE_ABCC:
                return *m_abcc_current;
            case SHELL_QUARTET_TYPE_AACD:
                return *m_aacd_current;
            default:
                throw std::out_of_range("ShellQuartetIndexGenerator::operator* () const");
            }
        }

        inline
        ShellQuartetIndexGenerator& ShellQuartetIndexGenerator::operator++ ()
        {
            inc();
            return *this;
        }

        inline
        ShellQuartetIndexGenerator ShellQuartetIndexGenerator::operator++ (int)
        {
            ShellQuartetIndexGenerator t = *this;
            inc();
            return t;
        }

        inline
        ShellQuartetIndexGenerator ShellQuartetIndexGenerator::make_end() const
        {
            ShellQuartetIndexGenerator t(m_no_shells);

            t.m_current_iterator = SHELL_QUARTET_TYPE_AACD + 1;

            t.m_aaaa_current = t.m_aaaa_end;
            t.m_abab_current = t.m_abab_end;
            t.m_aacc_current = t.m_aacc_end;
            t.m_abcd_current = t.m_abcd_end;
            t.m_abcc_current = t.m_abcc_end;
            t.m_aacd_current = t.m_aacd_end;

            return t;
        }

        inline
        void ShellQuartetIndexGenerator::inc()
        {
            if (m_current_iterator > SHELL_QUARTET_TYPE_AACD)
                return;

            switch (m_current_iterator) {
            case SHELL_QUARTET_TYPE_AAAA:
                if (++m_aaaa_current == m_aaaa_end)
                    ++m_current_iterator;
                break;
            case SHELL_QUARTET_TYPE_ABAB:
                if (++m_abab_current == m_abab_end)
                    ++m_current_iterator;
                break;
            case SHELL_QUARTET_TYPE_AACC:
                if (++m_aacc_current == m_aacc_end)
                    ++m_current_iterator;
                break;
            case SHELL_QUARTET_TYPE_ABCD:
                if (++m_abcd_current == m_abcd_end)
                    ++m_current_iterator;
                break;
            case SHELL_QUARTET_TYPE_ABCC:
                if (++m_abcc_current == m_abcc_end)
                    ++m_current_iterator;
                break;
            case SHELL_QUARTET_TYPE_AACD:
                if (++m_aacd_current == m_aacd_end)
                    ++m_current_iterator;
                return;
            }

            switch (m_current_iterator) {
            case SHELL_QUARTET_TYPE_ABAB:
                if (m_abab_current != m_abab_end)
                    return;
                ++m_current_iterator;
            case SHELL_QUARTET_TYPE_AACC:
                if (m_aacc_current != m_aacc_end)
                    return;
                ++m_current_iterator;
            case SHELL_QUARTET_TYPE_ABCD:
                if (m_abcd_current != m_abcd_end)
                    return;
                ++m_current_iterator;
            case SHELL_QUARTET_TYPE_ABCC:
                if (m_abcc_current != m_abcc_end)
                    return;
                ++m_current_iterator;
            case SHELL_QUARTET_TYPE_AACD:
                if (m_aacd_current != m_aacd_end)
                    return;
                ++m_current_iterator;
            }
        }

    }
}

#endif
