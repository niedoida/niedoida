/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "scf_kit/uhf.hpp"

#include "scf_kit/scf_utils.hpp"

namespace niedoida {
    namespace scf {
        UHF::UHF(
            std::shared_ptr<const core::System> s,
            std::unique_ptr<core::Occupations> occupations,
            std::unique_ptr<core::FockMatrixGenerator> fock_matrix_generator,
            std::unique_ptr<const DiagonalizeFockMatrix>
                diagonalize_fock_matrix,
            std::unique_ptr<ConvergenceAccelerator> convergence_accelerator,
            bool incremental,
            boost::optional<double> shift_1,
            boost::optional<double> shift_2,
            double energy_threshold,
            double density_threshold) :
            m_no_incremental(0),
            m_S(*(s->basis_set.overlap_matrix)),
            m_B(*(s->basis_set.the_basis)),
            m_h(*(s->basis_set.kinetic_matrix) +
                *(s->external_potential_matrix)),
            m_occ(std::move(occupations)),
            m_E(0),
            // hack to let converged() work before the first iteration
            m_prev_E(energy_threshold + 1),
            m_energy_threshold(energy_threshold),
            m_density_threshold(density_threshold),
            m_fock_matrix_generator(std::move(fock_matrix_generator)),
            m_diagonalize_fock_matrix(std::move(diagonalize_fock_matrix)),
            m_convergence_accelerator(std::move(convergence_accelerator)),
            m_incremental(incremental),
            m_system(s),
            m_shift_1(shift_1),
            m_shift_2(shift_2),
            m_first_iteration(true)
        {
            for (int spin = core::SPIN_ALPHA; spin <= core::SPIN_BETA; ++spin) {
                m_P[spin] = arma::zeros<arma::mat>(s->basis_set.real_size(),
                                                   s->basis_set.real_size());
                m_prev_P[spin] = arma::zeros<arma::mat>(
                    s->basis_set.real_size(), s->basis_set.real_size());
                m_epsilons[spin] =
                    arma::zeros<arma::vec>(s->basis_set.real_size());
            }

            m_J = m_fock_matrix_generator->coulomb_matrix();

            for (int s = core::SPIN_ALPHA; s <= core::SPIN_BETA; ++s) {
                m_K[s] =
                    m_fock_matrix_generator->exchange_matrix(core::Spin(s));
                m_g[s] = m_J + m_K[s];
                m_F[s] = m_h + m_g[s];
            }
        }

        void UHF::set_initial_density_matrix(const arma::mat& P_alpha,
                                             const arma::mat& P_beta)
        {
            assert(m_first_iteration);

            m_fock_matrix_generator->set_density_matrix(P_alpha, P_beta);

            m_J = m_fock_matrix_generator->coulomb_matrix();

            m_prev_P[core::SPIN_ALPHA] = m_P[core::SPIN_ALPHA];
            m_prev_P[core::SPIN_BETA] = m_P[core::SPIN_BETA];

            m_P[core::SPIN_ALPHA] = P_alpha;
            m_P[core::SPIN_BETA] = P_beta;

            for (int s = core::SPIN_ALPHA; s <= core::SPIN_BETA; ++s) {
                m_K[s] =
                    m_fock_matrix_generator->exchange_matrix(core::Spin(s));
                m_g[s] = m_J + m_K[s];
                m_F[s] = m_h + m_g[s];
            }
        }

        bool UHF::next_iteration()
        {
            const bool allow_incremental =
                !m_first_iteration && (m_no_incremental > 10 ? false : true) &&
                m_incremental;

            const bool converged = do_next_iteration(allow_incremental);

            m_first_iteration = false;

            if (converged && allow_incremental)
                return do_next_iteration(false);
            else
                return converged;
        }

        bool UHF::do_next_iteration(bool allow_incremental)
        {
            m_prev_E = m_E;

            m_prev_P[core::SPIN_ALPHA] = m_P[core::SPIN_ALPHA];
            m_prev_P[core::SPIN_BETA] = m_P[core::SPIN_BETA];

            if (!m_first_iteration) {
                if (m_shift_1)
                    shift_fock_matrix(m_F[core::SPIN_ALPHA],
                                      m_S,
                                      m_C[core::SPIN_ALPHA],
                                      *m_shift_1,
                                      m_system->no_electrons(core::SPIN_ALPHA));

                if (m_shift_2)
                    shift_fock_matrix(m_F[core::SPIN_BETA],
                                      m_S,
                                      m_C[core::SPIN_BETA],
                                      *m_shift_2,
                                      m_system->no_electrons(core::SPIN_BETA));
            }

            (*m_diagonalize_fock_matrix)(m_F[core::SPIN_ALPHA],
                                         m_C[core::SPIN_ALPHA],
                                         m_epsilons[core::SPIN_ALPHA]);

            (*m_diagonalize_fock_matrix)(m_F[core::SPIN_BETA],
                                         m_C[core::SPIN_BETA],
                                         m_epsilons[core::SPIN_BETA]);

            m_n[core::SPIN_ALPHA] =
                m_occ->occupation_numbers(m_epsilons[core::SPIN_ALPHA],
                                          m_C[core::SPIN_ALPHA],
                                          core::SPIN_ALPHA);
            m_P[core::SPIN_ALPHA] = scf::density_matrix(m_C[core::SPIN_ALPHA],
                                                        m_n[core::SPIN_ALPHA]);
            m_n[core::SPIN_BETA] =
                m_occ->occupation_numbers(m_epsilons[core::SPIN_BETA],
                                          m_C[core::SPIN_BETA],
                                          core::SPIN_BETA);
            m_P[core::SPIN_BETA] =
                scf::density_matrix(m_C[core::SPIN_BETA], m_n[core::SPIN_BETA]);

            const bool incremental =
                allow_incremental &&
                arma::norm(m_P[core::SPIN_ALPHA] - m_prev_P[core::SPIN_ALPHA],
                           "fro") < 0.1 &&
                arma::norm(m_P[core::SPIN_BETA] - m_prev_P[core::SPIN_BETA],
                           "fro") < 0.1;

            if (incremental)
                m_no_incremental += 1;
            else
                m_no_incremental = 0;

            m_fock_matrix_generator->set_density_matrix(
                m_P[core::SPIN_ALPHA], m_P[core::SPIN_BETA], incremental);

            m_J = m_fock_matrix_generator->coulomb_matrix();

            for (int s = core::SPIN_ALPHA; s <= core::SPIN_BETA; ++s) {
                m_K[s] =
                    m_fock_matrix_generator->exchange_matrix(core::Spin(s));
                m_g[s] = m_J + m_K[s];
                m_F[s] = m_h + m_g[s];
            }

            m_E = m_fock_matrix_generator->energy();

            if (!is_converged()) {
                std::pair<arma::mat, arma::mat> new_F =
                    m_convergence_accelerator->apply(m_S,
                                                     m_h,
                                                     m_g[core::SPIN_ALPHA],
                                                     m_P[core::SPIN_ALPHA],
                                                     m_g[core::SPIN_BETA],
                                                     m_P[core::SPIN_BETA],
                                                     m_E);
                m_F[core::SPIN_ALPHA] = new_F.first;
                m_F[core::SPIN_BETA] = new_F.second;
            }

            return is_converged();
        }

        bool UHF::is_converged() const
        {
            bool energy_converged =
                std::abs(m_E - m_prev_E) < m_energy_threshold;

            const std::size_t n = m_P[core::SPIN_ALPHA].n_rows;

            const double norm_f_P = std::max(
                arma::norm(m_P[core::SPIN_ALPHA] - m_prev_P[core::SPIN_ALPHA],
                           "fro"),
                arma::norm(m_P[core::SPIN_BETA] - m_prev_P[core::SPIN_BETA],
                           "fro"));
            const double norm_rms_P = norm_f_P / (n * n);

            double norm_max_P = 0;
            for (std::size_t ia = 0; ia < n; ++ia)
                for (std::size_t ib = 0; ib <= ia; ++ib) {
                    const double dP_ia_ib =
                        std::max(std::abs(m_P[core::SPIN_ALPHA](ia, ib) -
                                          m_prev_P[core::SPIN_ALPHA](ia, ib)),
                                 std::abs(m_P[core::SPIN_BETA](ia, ib) -
                                          m_prev_P[core::SPIN_BETA](ia, ib)));
                    if (dP_ia_ib > norm_max_P)
                        norm_max_P = dP_ia_ib;
                }

            bool density_converged_1 = norm_rms_P < m_density_threshold / 100;
            bool density_converged_2 = norm_max_P < m_density_threshold;

            return energy_converged && density_converged_1 &&
                   density_converged_2;
        }
    }
}
