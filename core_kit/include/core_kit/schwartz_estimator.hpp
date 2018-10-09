/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_SCHWARTZ_ESTIMATOR_HPP
#define NIEDOIDA_CORE_KIT_SCHWARTZ_ESTIMATOR_HPP

#include <armadillo>

#include "shell_quartet_index_generator.hpp"
#include "system.hpp"
#include "integral_engine.hpp"

#include <boost/mpi.hpp>

namespace niedoida {

    namespace core {

        class SchwartzEstimator {
        public:
            SchwartzEstimator(
                const System& system, 
                const TwoElectronIntegralEngine& ie);

            double max_integral(const ShellQuartetIndex&) const;
            double max_integral_orb(std::size_t, std::size_t, std::size_t, std::size_t) const;
            double max_integral_orb2(std::size_t, std::size_t) const;

        private:
            // Note: these are actually square roots of absolute values of the
            // integrals
            arma::mat m_max_diagonal_ints;
            arma::mat m_max_diagonal_ints_orb;

            boost::mpi::communicator m_comm;
        };

        inline
        double SchwartzEstimator::max_integral(const ShellQuartetIndex& sqi) const
        {
            return 
                m_max_diagonal_ints(sqi[0], sqi[1]) *
                m_max_diagonal_ints(sqi[2], sqi[3]);
        }

        inline
        double SchwartzEstimator::max_integral_orb(
            std::size_t i, 
            std::size_t j, 
            std::size_t k, 
            std::size_t l) const
        {
            return 
                m_max_diagonal_ints_orb(i, j) *
                m_max_diagonal_ints_orb(k, l);
        }

        inline
        double SchwartzEstimator::max_integral_orb2(
            std::size_t i,
            std::size_t j) const
        {
            return
                m_max_diagonal_ints_orb(i,j);
        }

    }
}

#endif
