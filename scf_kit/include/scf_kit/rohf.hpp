/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_SCF_KIT_ROHF_HPP
#define NIEDOIDA_SCF_KIT_ROHF_HPP

#include <memory>

#include "scf_kit/scf.hpp"
#include "scf_kit/diagonalize_fock_matrix.hpp"
#include "scf_kit/convergence_accelerators.hpp"
#include "core_kit/system.hpp"
#include "core_kit/occupations.hpp"
#include "core_kit/fock_matrix_generator.hpp"

namespace niedoida {
    namespace scf {
        /**
         * @ingroup scf_kit
         *
         * @brief The class implements Restricted Open-shell Hartree-Fock algorithm.
         *
         */
        class ROHF: public SCF {
        public:
            ROHF(std::shared_ptr<const core::System> s, 
                 std::unique_ptr<core::Occupations> occupations,
                 std::unique_ptr<core::FockMatrixGenerator> fock_matrix_generator,
                 std::unique_ptr<const DiagonalizeFockMatrix> diagonalize_fock_matrix,
                 std::unique_ptr<ConvergenceAccelerator> convergence_accelerator,
                 bool incremental,
                 boost::optional<double> shift_1, boost::optional<double> shift_2,
                 double energy_threshold = 1e-2, double density_threshold = 1e-2);

            bool is_restricted() const override { return true; }

            void set_initial_density_matrix(
                const arma::mat&,
                const arma::mat&) override;

            bool next_iteration() override;

            bool is_converged() const override;

            const arma::vec& mo_energies(core::Spin) const override;
            const arma::mat& mo_coefficients(core::Spin) const override;
            const arma::vec& mo_occupations(core::Spin) const override;
            const arma::mat& density_matrix(core::Spin) const override;
            double electronic_energy() const override;
            double efield_energy() const override;
            double energy() const override;
            const arma::mat& fock_matrix(core::Spin) const override;

        private:
            bool do_next_iteration(bool allow_incremental);

            unsigned m_no_incremental;

            const arma::mat m_S;
            const arma::mat m_B;
            const arma::mat m_h;

            std::unique_ptr<core::Occupations> m_occ;

            arma::mat m_P[2];
            arma::mat m_prev_P[2];

            arma::mat m_C;
            arma::vec m_n[2];

            arma::mat m_J;
            arma::mat m_K[2];
            arma::mat m_g;
            arma::mat m_F;

            double m_E;
            double m_prev_E;

            const double m_energy_threshold;
            const double m_density_threshold;

            bool m_energy_converged;
            bool m_density_converged;

            arma::vec m_epsilons;

            std::shared_ptr<const core::System> m_system;
            std::unique_ptr<core::FockMatrixGenerator> m_fock_matrix_generator;
            std::unique_ptr<const DiagonalizeFockMatrix> m_diagonalize_fock_matrix;
            std::unique_ptr<ConvergenceAccelerator> m_convergence_accelerator;
            bool m_incremental;
            boost::optional<double> m_shift_1;
            boost::optional<double> m_shift_2;
            bool m_first_iteration;
        };

        inline
        const arma::vec& ROHF::mo_energies(core::Spin) const
        {
            return m_epsilons;
        }

        inline
        const arma::mat& ROHF::mo_coefficients(core::Spin) const
        {
            return m_C;
        }

        inline
        const arma::vec& ROHF::mo_occupations(core::Spin s) const
        {
            return m_n[s];
        }

        inline
        const arma::mat& ROHF::density_matrix(core::Spin s) const
        {
            return m_P[s];
        }

        inline
        double ROHF::electronic_energy() const
        {
            return m_fock_matrix_generator->electronic_energy();
        }

        inline
        double ROHF::efield_energy() const
        {
            return *(m_system->efield_energy);
        }

        inline
        double ROHF::energy() const
        {
            return m_fock_matrix_generator->energy();
        }

        inline
        const arma::mat& ROHF::fock_matrix(core::Spin) const
        {
            return m_F;
        }
    }
}

#endif
