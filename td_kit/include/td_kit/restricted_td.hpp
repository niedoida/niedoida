/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_TD_KIT_RESTRICTED_TD
#define NIEDOIDA_TD_KIT_RESTRICTED_TD

#include "core_kit/system.hpp"
#include "core_kit/fock_matrix_generator_factory.hpp"

namespace niedoida {
    namespace td {
        class RestrictedTD {
        public:

            enum Multiplicity {
                SINGLET,
                TRIPLET
            };

            RestrictedTD(
                std::shared_ptr<const core::System> system,
                const arma::vec eps,
                unsigned no_frozen,
                unsigned no_deleted,
                unsigned no_roots);

            virtual ~RestrictedTD() {}


            arma::vec energies(bool all = false) const;
            arma::mat coefficients(bool all = false) const;
            const unsigned& no_states_converged() const;
            arma::mat transition_dipoles(bool all = false) const;

            virtual arma::mat gradient(const std::vector<unsigned>&, unsigned state) = 0;
            
        protected:
            unsigned m_no_frozen;
            unsigned m_no_deleted;
            unsigned m_no_occ;
            unsigned m_no_virt;
            unsigned m_n;
            unsigned m_ig_no_frozen;
            unsigned m_ig_no_deleted;
            arma::vec m_ig_delta_eps;
            arma::mat m_ig_v_0;
            unsigned m_small_part_occ;
            unsigned m_small_part_virt;
            arma::vec m_energies;
            arma::mat m_coefficients;
            unsigned m_no_states_converged;
            arma::mat m_transition_dipoles;


            class Sigma {
            public:
                virtual ~Sigma() {}

                Sigma(
                    std::shared_ptr<const core::System> system,
                    const arma::mat& mo_coeffs,
                    const arma::vec& eps,
                    std::size_t no_frozen,
                    std::size_t no_deleted,
                    RestrictedTD::Multiplicity mult,
                    double hf_exchange_contribution);

                arma::vec operator()(const arma::vec& cv) const;
            protected:
                virtual arma::mat calc(const arma::mat&) const = 0;

                std::size_t m_no_frozen;
                std::size_t m_no_deleted;
                std::size_t m_no_occ;
                std::size_t m_no_virt;
                arma::mat m_delta_eps;
                arma::mat m_full_mo_coeffs;
                arma::mat m_mo_coeffs;
                arma::mat m_mo_coeffs_occ;
                arma::mat m_mo_coeffs_virt;
                RestrictedTD::Multiplicity m_mult;
                const double m_hf_x_contrib;
            };

            class MultiSigma {
            public:
                virtual ~MultiSigma() {}

                MultiSigma(
                    std::shared_ptr<const core::System> system,
                    const arma::mat& mo_coeffs,
                    const arma::vec& eps,
                    std::size_t no_frozen,
                    std::size_t no_deleted,
                    RestrictedTD::Multiplicity mult,
                    double hf_exchange_contribution);

                arma::mat operator()(const arma::mat& cv) const;
            protected:
                virtual std::vector<arma::mat > calc(const std::vector<arma::mat >&) const = 0;

                std::size_t m_no_frozen;
                std::size_t m_no_deleted;
                std::size_t m_no_occ;
                std::size_t m_no_virt;
                arma::mat m_delta_eps;
                arma::mat m_full_mo_coeffs;
                arma::mat m_mo_coeffs;
                arma::mat m_mo_coeffs_occ;
                arma::mat m_mo_coeffs_virt;
                RestrictedTD::Multiplicity m_mult;
                const double m_hf_x_contrib;
            };

        };

        inline
        arma::vec RestrictedTD::energies(bool all) const
        {
            if (all == true)
                return m_energies;

            return m_energies.head(m_no_states_converged);

        }


        inline
        arma::mat RestrictedTD::coefficients(bool all) const
        {
            if (all == true)
                return m_coefficients;

            return m_coefficients.head_cols(m_no_states_converged);
        }

        inline
        arma::mat RestrictedTD::transition_dipoles(bool all) const
        {
            if (all == true)
                return m_transition_dipoles;

            return m_transition_dipoles.head_rows(m_no_states_converged);
        }
    }
}

#endif
