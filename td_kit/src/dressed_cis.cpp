/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "td_kit/dressed_cis.hpp"
#include "core_kit/pseudo_fock_matrix_generator.hpp"

#include <boost/function.hpp>
#include <boost/ref.hpp>

#include "io_kit/log.hpp"

#include <cmath>

#include "misc_kit/dispatcher.hpp"

namespace {
    // FIXME: this should be configurable somehow
    const double threshold = 1e-8;
}

namespace niedoida {
    namespace td {
        RDressedCIS::Sigma::Sigma(std::shared_ptr<const core::System> system,
                                  const arma::mat& mo_coeffs,
                                  const arma::vec& eps,
                                  std::size_t no_frozen,
                                  std::size_t no_deleted,
                                  Multiplicity mult,
                                  core::PseudoFockMatrixGenerator& fm_gen,
                                  const std::vector<Dress_matrix>& dress) :
            Base::Sigma(
                system, mo_coeffs, eps, no_frozen, no_deleted, mult, 1.0),
            m_fock_matrix_generator(&fm_gen),
            m_dress(dress)
        {
        }

        arma::mat RDressedCIS::Sigma::calc(const arma::mat& ci_coeffs) const
        {
            // calculate pseudo-fock matrix
            const arma::mat P =
                core::pseudo_density_matrix(m_mo_coeffs, ci_coeffs);

            m_fock_matrix_generator->set_density_matrix(P, P);

            const arma::mat J = m_fock_matrix_generator->coulomb_matrix();

            const arma::mat K =
                m_fock_matrix_generator->exchange_matrix(core::SPIN_ALPHA);

            const arma::mat F_ao = (m_mult == SINGLET) ? J + K : K;

            // transform the pseudo-fock matrix to the MO basis
            const arma::mat A = F_ao * m_mo_coeffs_virt;
            const arma::mat F_mo_ov = trans(m_mo_coeffs_occ) * A;

            // form the final result, including both diagonal and nondiagonal
            // terms
            arma::mat sigma = ci_coeffs % m_delta_eps + F_mo_ov;

            // dress the result
            for (std::size_t n = 0; n < m_dress.size(); ++n) {
                std::cout << "************* DRESSING " << n + 1
                          << " state *************" << std::endl;
                sigma += m_dress[n](ci_coeffs);
            }

            return sigma;
        }

        RDressedCIS::RDressedCIS(
            Multiplicity multiplicity,
            std::shared_ptr<const core::System> system,
            const arma::mat mo_coeffs,
            const arma::vec eps,
            std::shared_ptr<const core::TwoElectronIntegralEngineFactory>
                ie_factory,
            unsigned no_frozen,
            unsigned no_deleted,
            unsigned no_states,
            unsigned no_iterations,
            double diagonalization_threshold,
            const std::vector<Dress_matrix>& dress,
            arma::mat v_0) :
            RestrictedTD(system, eps, no_frozen, no_deleted, v_0.n_cols)
        {
            assert(no_iterations >= 1);
            assert(system->no_electrons(core::SPIN_ALPHA) ==
                   system->no_electrons(core::SPIN_BETA));
            io::Log::Section cis_section("restricted dressed cis");

            core::PseudoFockMatrixGenerator fm_gen(
                system, ie_factory->make(system), threshold);

            io::Log::Section main_section("full hamiltonian diagonalization");

            // solve true CIS problem

            Sigma sigma(system,
                        mo_coeffs,
                        eps,
                        no_frozen,
                        no_deleted,
                        multiplicity,
                        fm_gen,
                        dress);

            arma::vec delta_eps(m_n);
            for (unsigned i = 0; i < m_no_occ - no_frozen; ++i)
                for (unsigned a = m_no_occ;
                     a < m_no_occ + m_no_virt - no_deleted;
                     ++a)
                    delta_eps(i * (m_no_virt - no_deleted) + a - m_no_occ) =
                        eps(a) - eps(i + no_frozen);

            std::function<arma::vec(const arma::vec&)> s(std::ref(sigma));
        }

        arma::mat RDressedCIS::gradient(const std::vector<unsigned>&,
                                        unsigned state)
        {
            arma::mat gradient;

            return gradient;
        }
    }
}
