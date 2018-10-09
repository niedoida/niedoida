/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_PROPERTY_KIT_NALEWAJSKI_ANALYSIS_HPP
#define NIEDOIDA_PROPERTY_KIT_NALEWAJSKI_ANALYSIS_HPP

#include "bond_order_analysis.hpp"

#include "core_kit/spin.hpp"

#include <memory>

#include <armadillo>

namespace niedoida {
    namespace property {
        /**
         * @ingroup core_kit
         *
         * @brief Nalewajski-Mrozek bond order analysis implementation
         */
        class NalewajskiAnalysis: public BondOrderAnalysis {
        public:
            NalewajskiAnalysis(
                const arma::mat& P_alpha,
                const arma::mat& P_beta ,
                const arma::mat& S,
                const std::vector<std::size_t>& first_orbital_in_fragment,
                const std::vector<std::size_t>& no_orbitals_in_fragment,
                const std::vector<std::size_t>& no_core_states_in_fragment,
                const std::vector<std::size_t>& no_deg_states_in_fragment,
                const std::vector<std::size_t>& no_deg_electrons_in_fragment,
                const arma::mat& fo_coefficients);

            const arma::mat& bond_orders() const {
                return m_bond_orders;
            }

            const arma::vec& atomic_covalent_contributions() const {
                return v_c_a;
            }

            const arma::vec& atomic_ionic_contributions() const {
                return v_i_a;
            }

            const arma::mat& interatomic_contributions() const {
                return v_ab;
            }

        private:
            arma::mat m_bond_orders;
            arma::vec v_c_a;
            arma::vec v_i_a;
            arma::mat v_ab;

            /**
             * @brief Generator of unique isoenergetic electronic configurations
             * for any fragment
             *
             * (auxiliary class for NalewajskiAnalysis)
             */
            class FragmentConfig {
            public:
                /**
                 * @brief constructor of fragment configurations generator
                 *
                 */
                FragmentConfig(const arma::mat& C1, 
                               unsigned _no_core_states,
                               unsigned _no_deg_states,
                               unsigned _no_deg_electrons);
                /**
                 * @brief look for the next configuration of the fragment
                 *
                 * @return true if new configuration found, false otherwise
                 *
                 * If true was returned the subsequent calling of density_matrix()
                 *  will return spin density matrix for the configuration just generated.
                 */
                bool next_config();


                /**
                 * @brief density matrix for the configuration created by the last
                 * calling of next_config() which has returned true
                 */
                const arma::mat& density_matrix(core::Spin s) const
                {
                    return P[s];
                }

                /**
                 * @brief number of configurations already generated
                 *
                 * The returned value is incremented by any successful calling of 
                 * next_config() and is made zero by begin_config(). 
                 * Use it to determine the total number of possible configurations
                 * for fragment when all of them has been already generated 
                 * (i.e. next_config() == false).
                 */
                unsigned long no_config() const;

            private:
                /**
                 * @brief Generator of unique occupations for class FragmentConfig
                 */
                class OccGenerator
                {
                    // knot structure used by quasi-recursive algorithm
                    // of generating unique combinations
                    typedef arma::vec::iterator iterator;
                    struct knot {
                        knot(iterator _r, unsigned _k, knot* _owner)
                            : r0(_r), r(_r), k(_k), previous(_owner) {};
                        iterator r0, r;
                        unsigned k;
                        knot* previous;
                    };
                    knot *ptr;
                    iterator r0;
                    iterator r1;
                    unsigned long c;
                    bool is_next;
                    void make_reset(unsigned n, unsigned k, arma::vec& v);
                    void find_next();
                public:
                    OccGenerator(unsigned n, unsigned k, arma::vec& v);
                    void reset(unsigned n, unsigned k, arma::vec& v);
                    bool next();
                    unsigned long count() {return c;}
                };
                std::unique_ptr<OccGenerator> occ_generator;
                unsigned no_core_states;
                unsigned no_deg_electrons; // no of electrons in degenerated valence shell
                unsigned no_deg_states;    // no of degenerated states (not incl. spin deg.)
                arma::vec occ_core, occ_deg_alpha, occ_deg_beta;
                const arma::mat C;
                arma::mat P_core;
                arma::mat P[core::NO_SPINS];
                bool no_more_conf;

            }; // class FragmentConfig
        }; // class NalewajskiAnalysis
    }
}

#endif
