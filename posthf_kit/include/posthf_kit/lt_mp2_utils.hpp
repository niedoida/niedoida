/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_POSTHF_KIT_LT_MP2_UTILS_HPP
#define NIEDOIDA_POSTHF_KIT_LT_MP2_UTILS_HPP

#include <armadillo>
#include "core_kit/shell_quartet_index_generator.hpp"

namespace niedoida {

    namespace posthf {

        arma::mat X_density_matrix(const arma::mat&,                                               
                                   unsigned,                                                                
                                   unsigned,                                                             
                                   const arma::vec&,                                           
                                   const double);


        arma::mat Y_density_matrix(const arma::mat&,                                               
                                   unsigned,                                                                
                                   unsigned,                                                             
                                   const arma::vec&,                                           
                                   const double);

        arma::mat general_density_matrix(const arma::mat&,
                                         const arma::vec&,
                                         const arma::vec&,                                           
                                         const double);


        class ABCBShellQuartetIndexGenerator: 
            public std::iterator<std::input_iterator_tag, niedoida::core::ShellQuartetIndex>
        {
        public:
            ABCBShellQuartetIndexGenerator(std::size_t);

            bool operator == (const ABCBShellQuartetIndexGenerator&) const;
            bool operator != (const ABCBShellQuartetIndexGenerator&) const;

            const niedoida::core::ShellQuartetIndex& operator* () const;

            ABCBShellQuartetIndexGenerator& operator++ ();
            ABCBShellQuartetIndexGenerator operator++ (int);

            ABCBShellQuartetIndexGenerator make_end() const;

        private:
            void inc();

            std::size_t _n;
            niedoida::core::ShellQuartetIndex _i;
        };

        inline
        ABCBShellQuartetIndexGenerator::ABCBShellQuartetIndexGenerator(
            std::size_t no_shells):
            _n(no_shells)
        {
            _i[0] = _i[2] = 0;
            _i[1] = _i[3] = 0;
        }

        inline
        bool ABCBShellQuartetIndexGenerator::operator == (
            const ABCBShellQuartetIndexGenerator& rhs) const
        {
            assert(_n == rhs._n);

            return _i[0] == rhs._i[0] && _i[1] == rhs._i[1]  &&
                _i[2] == rhs._i[2];
        }

        inline
        bool ABCBShellQuartetIndexGenerator::operator != (
            const ABCBShellQuartetIndexGenerator& rhs) const
        {
            return !(*this == rhs);
        }

        inline
        const niedoida::core::ShellQuartetIndex& ABCBShellQuartetIndexGenerator::operator* () const
        {
            return _i;
        }

        inline
        ABCBShellQuartetIndexGenerator& ABCBShellQuartetIndexGenerator::operator++ ()
        {
            //    do {
            inc();
            //    } while ((_i[2] >= _i[1] && _i[0] < _i[2]) || (_i[2] <= _i[1] && _i[0] == _i[2]));
            return *this;
        }

        inline
        ABCBShellQuartetIndexGenerator ABCBShellQuartetIndexGenerator::operator++ (int)
        {
            const ABCBShellQuartetIndexGenerator t = *this;
            inc();
            return t;
        }


        inline
        ABCBShellQuartetIndexGenerator ABCBShellQuartetIndexGenerator::make_end() const
        {
            ABCBShellQuartetIndexGenerator t(*this);

            t._i[0] = t._i[2] = 0;
            t._i[1] = t._i[3] = _n;

            return t;
        }

        inline
        void ABCBShellQuartetIndexGenerator::inc()
        {
  
  
            if (_i[1] == _n)
                return;
   
            if (_i[0] < _i[2]){
                ++_i[0];
            } else if (_i[2] < _n -1) {
                _i[0] = 0;
                ++_i[2];
            } else {
                _i[0] = 0;
                _i[2] = 0;
                ++_i[1];
            }
  
            _i[3] = _i[1];
  
            if (_i[0] == _i[2] && _i[0] > _i[1])
                inc();
        }

// abcd


        class FullABCDShellQuartetIndexGenerator: 
            public std::iterator<std::input_iterator_tag, niedoida::core::ShellQuartetIndex>
        {
        public:
            FullABCDShellQuartetIndexGenerator(std::size_t);

            bool operator == (const FullABCDShellQuartetIndexGenerator&) const;
            bool operator != (const FullABCDShellQuartetIndexGenerator&) const;

            const niedoida::core::ShellQuartetIndex& operator* () const;

            FullABCDShellQuartetIndexGenerator& operator++ ();
            FullABCDShellQuartetIndexGenerator operator++ (int);

            FullABCDShellQuartetIndexGenerator make_end() const;

        private:
            void inc();

            std::size_t _n;
            niedoida::core::ShellQuartetIndex _i;
        };

        inline
        FullABCDShellQuartetIndexGenerator::FullABCDShellQuartetIndexGenerator(
            std::size_t no_shells):
            _n(no_shells)
        {
            _i[0] = _i[2] = 0;
            _i[1] = _i[3] = 0;
        }

        inline
        bool FullABCDShellQuartetIndexGenerator::operator == (
            const FullABCDShellQuartetIndexGenerator& rhs) const
        {
            assert(_n == rhs._n);

            return _i[0] == rhs._i[0] && _i[1] == rhs._i[1]  &&
                _i[2] == rhs._i[2] && _i[3] == rhs._i[3];
        }

        inline
        bool FullABCDShellQuartetIndexGenerator::operator != (
            const FullABCDShellQuartetIndexGenerator& rhs) const
        {
            return !(*this == rhs);
        }

        inline
        const niedoida::core::ShellQuartetIndex& FullABCDShellQuartetIndexGenerator::operator* () const
        {
            return _i;
        }

        inline
        FullABCDShellQuartetIndexGenerator& FullABCDShellQuartetIndexGenerator::operator++ ()
        {

            inc();

            return *this;
        }

        inline
        FullABCDShellQuartetIndexGenerator FullABCDShellQuartetIndexGenerator::operator++ (int)
        {
            const FullABCDShellQuartetIndexGenerator t = *this;
            inc();
            return t;
        }


        inline
        FullABCDShellQuartetIndexGenerator FullABCDShellQuartetIndexGenerator::make_end() const
        {
            FullABCDShellQuartetIndexGenerator t(*this);

            t._i[1] = t._i[2] = t._i[3] = 0;
            t._i[0] = _n;

            return t;
        }

        inline
        void FullABCDShellQuartetIndexGenerator::inc()
        {
            if (_i[0] == _n)
                return;

            if (_i[3] + 1 < _n) {
                _i[3] += 1;
            } else if (_i[2] + 1 < _n) {
                _i[3] = 0;
                _i[2] += 1;
            } else if (_i[1] + 1 < _n) {
                _i[3] = 0;
                _i[2] = 0;
                _i[1] += 1;
            } else {
                _i[3] = 0;
                _i[2] = 0;
                _i[1] = 0;
                _i[0] += 1;
            }
        }
    }
}
#endif


