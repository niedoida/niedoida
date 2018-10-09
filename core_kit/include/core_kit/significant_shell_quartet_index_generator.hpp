/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_SIGNIFICANT_SHELL_QUARTET_INDEX_GENERATOR_HPP
#define NIEDOIDA_CORE_KIT_SIGNIFICANT_SHELL_QUARTET_INDEX_GENERATOR_HPP

#include <iterator>
#include <cassert>
#include <map>

#include "core_kit/shell_quartet.hpp"
#include "core_kit/significant_shell_pairs_generator.hpp"

namespace niedoida {

    namespace core {

        class SignificantShellQuartetIndexGenerator:
            public std::iterator<std::input_iterator_tag, ShellQuartetIndex>
        {
        public: 
            SignificantShellQuartetIndexGenerator(const SignificantShellPairsGenerator&);

            bool operator == (const SignificantShellQuartetIndexGenerator&) const;
            bool operator != (const SignificantShellQuartetIndexGenerator&) const;

            const ShellQuartetIndex& operator* () const;

            SignificantShellQuartetIndexGenerator& operator++ ();
            SignificantShellQuartetIndexGenerator operator++ (int);

            SignificantShellQuartetIndexGenerator make_end() const;

        private:
            const std::vector<std::pair<unsigned, unsigned> >* _pairs;
            std::size_t _no_pairs;
            std::size_t _i;
            std::size_t _j;
            ShellQuartetIndex _sqi;
            void inc();
        };

        inline 
        SignificantShellQuartetIndexGenerator::SignificantShellQuartetIndexGenerator(
            const SignificantShellPairsGenerator& ssp):
            _pairs(&ssp.shell_pairs())
        {
            _no_pairs = _pairs->size();
            _i = 0;
            _j = 0;
            _sqi[0] = (*_pairs)[_i].first;
            _sqi[1] = (*_pairs)[_i].second;
            _sqi[2] = (*_pairs)[_j].first;
            _sqi[3] = (*_pairs)[_j].second;
        }

        inline
        bool SignificantShellQuartetIndexGenerator::operator == (
            const SignificantShellQuartetIndexGenerator& rhs) const
        {
            assert(_no_pairs == rhs._no_pairs);
            return 
                _i == rhs._i && 
                _j == rhs._j;
        }

        inline
        bool SignificantShellQuartetIndexGenerator::operator != (
            const SignificantShellQuartetIndexGenerator& rhs) const
        {
            assert(_no_pairs == rhs._no_pairs);
            return 
                _i != rhs._i ||
                _j != rhs._j;
        }

        inline
        const ShellQuartetIndex& SignificantShellQuartetIndexGenerator::operator* () const
        {
            return _sqi;
        }

        inline
        SignificantShellQuartetIndexGenerator& SignificantShellQuartetIndexGenerator::operator++ ()
        {
            inc();
            return *this;
        }

        inline
        SignificantShellQuartetIndexGenerator SignificantShellQuartetIndexGenerator::operator++ (int)
        {
            const SignificantShellQuartetIndexGenerator t(*this);
            inc();
            return t;
        }


        inline
        SignificantShellQuartetIndexGenerator SignificantShellQuartetIndexGenerator::make_end() const
        {
            SignificantShellQuartetIndexGenerator t(*this);

            t._i = _no_pairs;
            t._j = 0;
    
            return t;
        }

        inline 
        void SignificantShellQuartetIndexGenerator::SignificantShellQuartetIndexGenerator::inc() 
        {
            if(_i == _no_pairs)
                return;

            if(_j + 1 < _no_pairs) {
                _j += 1;
            } else {
                if(_i + 1 < _no_pairs) {
                    _i += 1;
                    _j = _i;
                } else {
                    _i = _no_pairs;
                    _j = 0;
                }
            }
    
            if(_i < _no_pairs) {
                _sqi[0] = (*_pairs)[_i].first;
                _sqi[1] = (*_pairs)[_i].second;
                _sqi[2] = (*_pairs)[_j].first;
                _sqi[3] = (*_pairs)[_j].second;
            }
        }

    }
}

#endif
