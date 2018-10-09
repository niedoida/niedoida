/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/pseudo_fock_matrix_generator.hpp"
#include "td_kit/cis.hpp"

#include "io_kit/log.hpp"
#include "misc_kit/dispatcher.hpp"

#include <boost/ref.hpp>
#include <cmath>

namespace niedoida {
    namespace td {
        RestrictedTD::RestrictedTD(std::shared_ptr<const core::System> system,
                                   const arma::vec eps,
                                   unsigned no_frozen,
                                   unsigned no_deleted,
                                   unsigned no_roots) :
            m_no_frozen(no_frozen),
            m_no_deleted(no_deleted),
            m_no_occ(system->no_electrons(core::SPIN_ALPHA)),
            m_no_virt(system->basis_set.real_size() - m_no_occ),
            m_n((m_no_occ - no_frozen) * (m_no_virt - no_deleted)),
            m_no_states_converged(0)
        {
            if (no_roots > m_n)
                no_roots = m_n;

            io::Log::Section ig_section("initial guess");

            // make a simple initial guess for true CIS problem

            const double mini_n = 2.0 * no_roots > 16.0 ? 2.0 * no_roots : 16.0;
            m_small_part_occ = (int)ceil(sqrt(mini_n));
            m_small_part_virt = m_small_part_occ;

            io::Log::instance().write(io::Logger::VERBOSE, "mini_n", mini_n);
            io::Log::instance().write(
                io::Logger::VERBOSE, "mini_n_occ", m_small_part_occ);
            io::Log::instance().write(
                io::Logger::VERBOSE, "mini_n_virt", m_small_part_virt);

            if (m_small_part_occ > m_no_occ - no_frozen)
                m_small_part_occ = m_no_occ - no_frozen;

            if (m_small_part_virt > m_no_virt - no_deleted)
                m_small_part_virt = m_no_virt - no_deleted;

            const unsigned small_n = m_small_part_occ * m_small_part_virt;

            io::Log::instance().write(io::Logger::VERBOSE, "small_n", small_n);
            io::Log::instance().write(
                io::Logger::VERBOSE, "small_n_occ", m_small_part_occ);
            io::Log::instance().write(
                io::Logger::VERBOSE, "small_n_virt", m_small_part_virt);

            m_ig_no_frozen = m_no_occ - m_small_part_occ;
            m_ig_no_deleted = m_no_virt - m_small_part_virt;

            io::Log::instance().write(
                io::Logger::VERBOSE, "m_ig_no_frozen", m_ig_no_frozen);
            io::Log::instance().write(
                io::Logger::VERBOSE, "m_ig_no_deleted", m_ig_no_deleted);

            m_ig_delta_eps = arma::vec(small_n);
            for (unsigned i = 0; i < m_small_part_occ; ++i)
                for (unsigned a = 0; a < m_small_part_virt; ++a)
                    m_ig_delta_eps(i * m_small_part_virt + a) =
                        eps(a + m_no_occ) - eps(i + m_ig_no_frozen);

            // Log::instance().write("m_ig_delta_eps", m_ig_delta_eps);

            m_ig_v_0 = arma::zeros<arma::mat>(small_n, no_roots);

            // versors coresponding to the smallest energy
            arma::vec orig_delta_eps(no_roots);
            std::vector<unsigned> excit(no_roots);

            for (unsigned i = 0; i < no_roots; ++i) {

                double min_delta_eps = 1.0e10;

                for (unsigned j = 0; j < small_n; ++j)
                    if (min_delta_eps > m_ig_delta_eps(j)) {
                        min_delta_eps = m_ig_delta_eps(j);
                        excit[i] = j;
                    }

                orig_delta_eps[i] = m_ig_delta_eps(excit[i]);
                m_ig_delta_eps(excit[i]) = 1.0e10;
                m_ig_v_0(excit[i], i) = 1.0;
            }

            for (unsigned i = 0; i < no_roots; ++i)
                m_ig_delta_eps(excit[i]) = orig_delta_eps(i);

            // Log::instance().write("m_ig_delta_eps", m_ig_delta_eps);
            // Log::instance().write("m_ig_v_0", m_ig_v_0);
        }

        RestrictedTD::Sigma::Sigma(std::shared_ptr<const core::System> system,
                                   const arma::mat& mo_coeffs,
                                   const arma::vec& eps,
                                   std::size_t no_frozen,
                                   std::size_t no_deleted,
                                   Multiplicity mult,
                                   double hf_exchange_contribution) :
            m_no_frozen(no_frozen),
            m_no_deleted(no_deleted),
            m_no_occ(system->no_electrons(core::SPIN_ALPHA)),
            m_no_virt(system->basis_set.real_size() -
                      system->no_electrons(core::SPIN_ALPHA)),
            m_delta_eps(m_no_occ - m_no_frozen, m_no_virt - m_no_deleted),
            m_full_mo_coeffs(mo_coeffs),
            m_mo_coeffs(mo_coeffs.submat(
                arma::span(0, m_no_occ + m_no_virt - 1),
                arma::span(m_no_frozen,
                           m_no_occ + m_no_virt - m_no_deleted - 1))),
            m_mo_coeffs_occ(
                mo_coeffs.submat(arma::span(0, m_no_occ + m_no_virt - 1),
                                 arma::span(m_no_frozen, m_no_occ - 1))),
            m_mo_coeffs_virt(mo_coeffs.submat(
                arma::span(0, m_no_occ + m_no_virt - 1),
                arma::span(m_no_occ, m_no_occ + m_no_virt - m_no_deleted - 1))),
            m_mult(mult),
            m_hf_x_contrib(hf_exchange_contribution)
        {
            for (unsigned i = 0; i < m_no_occ - m_no_frozen; ++i)
                for (unsigned a = m_no_occ;
                     a < m_no_occ + m_no_virt - m_no_deleted;
                     ++a)
                    m_delta_eps(i, a - m_no_occ) =
                        eps(a) - eps(i + m_no_frozen);
        }

        // FIXME: This function is as inneficient as only possible. It should
        // be fixed one day...
        arma::vec RestrictedTD::Sigma::
        operator()(const arma::vec& ci_coeffs_v) const
        {

            // sanity checks
            assert(ci_coeffs_v.size() ==
                   (m_no_occ - m_no_frozen) * (m_no_virt - m_no_deleted));

            // all the operations we gonna do are easier to express using
            // matrices, so transform the vector we've got to a matrix
            arma::mat ci_coeffs(m_no_occ - m_no_frozen,
                                m_no_virt - m_no_deleted);

            std::copy(ci_coeffs_v.memptr(),
                      ci_coeffs_v.memptr() + ci_coeffs_v.size(),
                      ci_coeffs.memptr());

            const arma::mat sigma = calc(ci_coeffs);

            // and transform it back to a vector
            arma::vec sigma_v(sigma.n_elem);
            std::copy(sigma.memptr(),
                      sigma.memptr() + sigma.n_elem,
                      sigma_v.memptr());

            return sigma_v;
        }

        RestrictedTD::MultiSigma::MultiSigma(
            std::shared_ptr<const core::System> system,
            const arma::mat& mo_coeffs,
            const arma::vec& eps,
            std::size_t no_frozen,
            std::size_t no_deleted,
            Multiplicity mult,
            double hf_exchange_contribution) :
            m_no_frozen(no_frozen),
            m_no_deleted(no_deleted),
            m_no_occ(system->no_electrons(core::SPIN_ALPHA)),
            m_no_virt(system->basis_set.real_size() -
                      system->no_electrons(core::SPIN_ALPHA)),
            m_delta_eps(m_no_occ - m_no_frozen, m_no_virt - m_no_deleted),
            m_full_mo_coeffs(mo_coeffs),
            m_mo_coeffs(mo_coeffs.submat(
                arma::span(0, m_no_occ + m_no_virt - 1),
                arma::span(m_no_frozen,
                           m_no_occ + m_no_virt - m_no_deleted - 1))),
            m_mo_coeffs_occ(
                mo_coeffs.submat(arma::span(0, m_no_occ + m_no_virt - 1),
                                 arma::span(m_no_frozen, m_no_occ - 1))),
            m_mo_coeffs_virt(mo_coeffs.submat(
                arma::span(0, m_no_occ + m_no_virt - 1),
                arma::span(m_no_occ, m_no_occ + m_no_virt - no_deleted - 1))),
            m_mult(mult),
            m_hf_x_contrib(hf_exchange_contribution)
        {
            for (unsigned i = 0; i < m_no_occ - m_no_frozen; ++i)
                for (unsigned a = m_no_occ;
                     a < m_no_occ + m_no_virt - m_no_deleted;
                     ++a)
                    m_delta_eps(i, a - m_no_occ) =
                        eps(a) - eps(i + m_no_frozen);
        }

        // FIXME: This function is as inneficient as only possible. It should
        // be fixed one day...
        arma::mat RestrictedTD::MultiSigma::
        operator()(const arma::mat& ci_coeffs_v) const
        {
            const std::size_t no_rows = ci_coeffs_v.n_rows;
            const std::size_t no_cols = ci_coeffs_v.n_cols;

            const std::size_t eno = m_no_occ - m_no_frozen;
            const std::size_t env = m_no_virt - m_no_deleted;

            // sanity checks
            assert(no_rows == eno * env);

            std::vector<arma::mat> ci_coeffs(no_cols);

            // all the operations we gonna do are easier to express using
            // matrices, so transform the vectors we've got to matrices
            for (std::size_t n = 0; n < no_cols; ++n) {
                ci_coeffs[n].set_size(eno, env);

                for (std::size_t i = 0; i < no_rows; ++i)
                    ci_coeffs[n](i / env, i % env) = ci_coeffs_v(i, n);
            }

            const std::vector<arma::mat> sigma = calc(ci_coeffs);

            arma::mat sigma_v(no_rows, no_cols);

            for (std::size_t n = 0; n < no_cols; ++n)
                for (std::size_t i = 0; i < no_rows; ++i)
                    sigma_v(i, n) = sigma[n](i / env, i % env);

            return sigma_v;
        }
    }
}
