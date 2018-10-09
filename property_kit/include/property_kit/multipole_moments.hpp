/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_PROPERTY_KIT_MULTIPOLE_MOMENTS_HPP
#define NIEDOIDA_PROPERTY_KIT_MULTIPOLE_MOMENTS_HPP

#include <armadillo>
#include <vector>
#include <boost/noncopyable.hpp>
#include "core_kit/system.hpp"

namespace niedoida {
    namespace property {
        class DipoleMoment: public boost::noncopyable {
        public:
            DipoleMoment(
                std::shared_ptr<const core::System> system,
                const std::vector<arma::mat>& dipole_matrices,
                const arma::mat& P);

            const arma::vec& nuclear() const;
            const arma::vec& electronic() const;
            arma::vec total() const;

        private:
            arma::vec d_n, d_e;
        };

        class QuadrupoleMoment: public boost::noncopyable {
        public:
            QuadrupoleMoment(
                std::shared_ptr<const core::System> system,
                const arma::field<arma::mat>& dipole_matrices,
                const arma::mat& P);

            const arma::mat& nuclear() const;
            const arma::mat& electronic() const;
            arma::mat total() const;

        private:
            arma::mat q_n, q_e;
        };

        inline
        const arma::vec& DipoleMoment::nuclear() const 
        {
            return d_n;
        }

        inline
        const arma::vec& DipoleMoment::electronic() const
        {
            return d_e;
        }

        inline
        arma::vec DipoleMoment::total() const
        {
            return d_n + d_e;
        }

        inline
        const arma::mat& QuadrupoleMoment::nuclear() const 
        {
            return q_n;
        }

        inline
        const arma::mat& QuadrupoleMoment::electronic() const
        {
            return q_e;
        }

        inline
        arma::mat QuadrupoleMoment::total() const
        {
            return q_n + q_e;
        }
        
    }
}

#endif
