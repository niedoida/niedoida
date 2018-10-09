/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "property_kit/nalewajski_analysis.hpp"

#include <boost/lambda/lambda.hpp>

#include <cassert>

namespace niedoida {
    namespace property {
        NalewajskiAnalysis::FragmentConfig::OccGenerator::OccGenerator(
            unsigned n, unsigned k, arma::vec& v) :
            ptr(0)
        {
            make_reset(n, k, v);
        }

        void NalewajskiAnalysis::FragmentConfig::OccGenerator::reset(
            unsigned n, unsigned k, arma::vec& v)
        {
            if (ptr)
                delete ptr;
            make_reset(n, k, v);
        }

        void NalewajskiAnalysis::FragmentConfig::OccGenerator::make_reset(
            unsigned n, unsigned k, arma::vec& v)
        {
            is_next = (k <= n);
            v = arma::zeros<arma::vec>(n);
            r0 = v.begin();
            r1 = v.end();
            c = 0;
            ptr = new knot(r0, k, 0);
        }

        bool NalewajskiAnalysis::FragmentConfig::OccGenerator::next()
        {
            find_next();
            return is_next;
        }

        void NalewajskiAnalysis::FragmentConfig::OccGenerator::find_next()
        {
            if (!is_next)
                return; // for sure no more combinations

            if (!ptr) { // all possibilities's been considered
                is_next = false;
                return; // will break the whall call stack of find_next()
            }

            if (ptr->k == 0) {
                // no more '1's to put
                c++;
                // go one level up
                knot* const tmp = ptr;
                ptr = ptr->previous;
                delete tmp;
                is_next = true;
                return; // will break the whall call stack of find_next()
            }

            if (ptr->r - ptr->r0 > 0)
                *(ptr->r - 1) = 0.0;

            if (r1 - ptr->r == (signed)ptr->k) {
                // no more place to put any '0's -- fill with '1's up to the end
                std::for_each(ptr->r, r1, boost::lambda::_1 = 1.0);
                c++;
                // go one level up
                knot* const tmp = ptr;
                ptr = ptr->previous;
                delete tmp;
                is_next = true;
                return; // will break the whall call stack of find_next()
            }

            *(ptr->r) = 1.0;
            // go to next level
            ptr = new knot(++(ptr->r), ptr->k - 1, ptr);
            find_next();
        }

        // FragmentConfig for NalewajskiAnalysis implementation

        NalewajskiAnalysis::FragmentConfig::FragmentConfig(
            const arma::mat& C1,
            unsigned _no_core_states,
            unsigned _no_deg_states,
            unsigned _no_deg_electrons) :
            no_core_states(_no_core_states),
            no_deg_electrons(_no_deg_electrons),
            no_deg_states(_no_deg_states),
            C(C1),
            P_core(C1.n_rows, C1.n_rows, arma::fill::zeros),
            no_more_conf(false)
        {
            // generate core part of density matrices which are
            // common for all configurations and the same for alpha and beta
            // spins
            const unsigned n = C.n_rows;

            for (std::size_t i = 0; i < no_core_states; ++i)
                for (std::size_t k = 0; k < n; ++k)
                    for (std::size_t l = 0; l <= k; ++l)
                        P_core(k, l) += C(k, i) * C(l, i); // in AOs

            // FIXME: the above may be paralelized

            // intialize occupations generator
            if (no_deg_electrons <= no_deg_states) { // only alpha electrons
                occ_generator = std::unique_ptr<OccGenerator>(new OccGenerator(
                    no_deg_states, no_deg_electrons, occ_deg_alpha));
                occ_deg_beta = arma::zeros<arma::vec>(no_deg_states);
            } else { // alpha (whole shell) and beta electrons
                occ_deg_alpha.resize(no_deg_states);
                std::for_each(occ_deg_alpha.begin(),
                              occ_deg_alpha.end(),
                              boost::lambda::_1 = 1.0);
                occ_generator = std::unique_ptr<OccGenerator>(
                    new OccGenerator(no_deg_states,
                                     no_deg_electrons - no_deg_states,
                                     occ_deg_beta));
            }
        }

        bool NalewajskiAnalysis::FragmentConfig::next_config()
        {
            const std::size_t n = C.n_rows;
            if (occ_generator->next()) {
                // (occ_deg_alpha or occ_deg_beta was implicitly changed by
                // ->next()!)

                // ... generate density matrices ...
                P[core::SPIN_ALPHA] = P_core;
                P[core::SPIN_BETA] = P_core;

                for (std::size_t i = 0; i < no_deg_states; ++i) { // AOs !!
                    for (std::size_t k = 0; k < n; ++k) {
                        for (std::size_t l = 0; l <= k; l++) {
                            P[core::SPIN_ALPHA](k, l) +=
                                C(k, no_core_states + i) *
                                C(l, no_core_states + i) * occ_deg_alpha(i);
                            P[core::SPIN_BETA](k, l) +=
                                C(k, no_core_states + i) *
                                C(l, no_core_states + i) * occ_deg_beta(i);
                        }
                    }
                }
                return true; // density matrices for new configuration created
            } else {
                // no more configurations available
                no_more_conf = true;
                return false;
            }
        }

        unsigned long NalewajskiAnalysis::FragmentConfig::no_config() const
        {
            return occ_generator->count();
        }

        // NalewajskiAnalysis implementation
        NalewajskiAnalysis::NalewajskiAnalysis(
            const arma::mat& P_alpha,
            const arma::mat& P_beta,
            const arma::mat& S,
            const std::vector<std::size_t>& first_orbital_in_fragment,
            const std::vector<std::size_t>& no_orbitals_in_fragment,
            const std::vector<std::size_t>& no_core_states_in_fragment,
            const std::vector<std::size_t>& no_deg_states_in_fragment,
            const std::vector<std::size_t>& no_deg_electrons_in_fragment,
            const arma::mat& fo_coefficients)
        {
            assert(P_alpha.n_rows == P_beta.n_rows);
            assert(P_alpha.n_rows == S.n_rows);
            assert(fo_coefficients.n_rows == fo_coefficients.n_rows);
            assert(fo_coefficients.n_rows == P_alpha.n_rows);
            assert(first_orbital_in_fragment.size() ==
                   no_orbitals_in_fragment.size());
            assert(no_orbitals_in_fragment.size() ==
                   no_core_states_in_fragment.size());
            assert(no_core_states_in_fragment.size() ==
                   no_deg_states_in_fragment.size());
            assert(no_deg_states_in_fragment.size() ==
                   no_deg_electrons_in_fragment.size());

            // transform density matrices of molecule do orthogonalized AO basis
            const arma::mat S12 = arma::sqrtmat_sympd(S);
            arma::mat P1_alpha = S12 * P_alpha * S12;
            arma::mat P1_beta = S12 * P_beta * S12;

            const std::size_t no_fragments = first_orbital_in_fragment.size();

            // *** Compute average intra-fragment contributions ***

            v_c_a = arma::zeros<arma::vec>(no_fragments);
            v_i_a = arma::zeros<arma::vec>(no_fragments);

            for (std::size_t a = 0; a < no_fragments; ++a) {

                arma::span r(first_orbital_in_fragment[a],
                             first_orbital_in_fragment[a] +
                                 no_orbitals_in_fragment[a] - 1);

                const arma::mat P1f_alpha = P1_alpha.submat(r, r);
                const arma::mat P1f_beta = P1_beta.submat(r, r);

                // start fragment configurations generator
                FragmentConfig fragment_config(fo_coefficients.submat(r, r),
                                               no_core_states_in_fragment[a],
                                               no_deg_states_in_fragment[a],
                                               no_deg_electrons_in_fragment[a]);

                // go throught all configurations ...
                while (fragment_config.next_config()) {
                    const arma::mat S12 = arma::sqrtmat_sympd(S.submat(r, r));
                    const arma::mat // transf. AO --> Lowd-AO at fragment
                        P0f_alpha =
                            S12 *
                            fragment_config.density_matrix(core::SPIN_ALPHA) *
                            S12,
                        P0f_beta =
                            S12 *
                            fragment_config.density_matrix(core::SPIN_BETA) *
                            S12;
                    for (std::size_t i = 0; i < no_orbitals_in_fragment[a];
                         ++i) {
                        for (std::size_t j = 0; j < i; ++j) {
                            v_c_a(a) +=
                                std::pow(P1f_alpha(i, j) - P0f_alpha(i, j), 2) +
                                std::pow(P1f_beta(i, j) - P0f_beta(i, j), 2);
                        }
                        v_i_a(a) +=
                            0.5 *
                            (std::pow(P1f_alpha(i, i) - P0f_alpha(i, i), 2) +
                             std::pow(P1f_beta(i, i) - P0f_beta(i, i), 2));
                    }
                }
                v_c_a(a) /= fragment_config.no_config();
                v_i_a(a) /= fragment_config.no_config();
            }

            // *** compute inter-fragment contributions ***

            v_ab = arma::zeros<arma::mat>(no_fragments, no_fragments);
            for (std::size_t a = 0; a < no_fragments; ++a) {
                for (std::size_t b = 0; b < a; ++b) {
                    for (std::size_t i = first_orbital_in_fragment[a];
                         i < first_orbital_in_fragment[a] +
                                 no_orbitals_in_fragment[a];
                         ++i) {
                        for (std::size_t j = first_orbital_in_fragment[b];
                             j < first_orbital_in_fragment[b] +
                                     no_orbitals_in_fragment[b];
                             ++j) {
                            v_ab(a, b) +=
                                std::pow(
                                    P1_alpha(i, j),
                                    2) + // no contrib. from P0 since i and j
                                std::pow(P1_beta(i, j),
                                         2); //  are from different fragments
                        }
                    }
                }
            }
            v_ab = symmatl(v_ab);

            // total interatomic valence
            arma::vec total_ab(no_fragments, arma::fill::zeros);
            for (std::size_t a = 0; a < no_fragments; ++a) {
                for (std::size_t b = 0; b < no_fragments; ++b) {
                    if (a != b) {
                        total_ab(a) += v_ab(a, b);
                    }
                }
            }

            // bond orders
            m_bond_orders = arma::zeros<arma::mat>(no_fragments, no_fragments);
            for (std::size_t a = 0; a < no_fragments; ++a) {
                for (std::size_t b = 0; b < a; ++b) {
                    m_bond_orders(a, b) =
                        v_ab(a, b) * (1 + (v_i_a(a) + v_c_a(a)) / total_ab(a) +
                                      (v_i_a(b) + v_c_a(b)) / total_ab(b));
                    m_bond_orders(b, a) = m_bond_orders(a, b);
                }
            }
        }
    }
}
