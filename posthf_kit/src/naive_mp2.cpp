/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/shell_quartet_index_generator.hpp"
#include "posthf_kit/canonical_mp2.hpp"

#include <algorithm>
#include <cassert>
#include <numeric>

#include <boost/utility.hpp>

namespace niedoida {

    namespace posthf {

        NaiveMP2::NaiveMP2(
            const std::shared_ptr<const niedoida::core::System> system,
            std::unique_ptr<niedoida::core::TwoElectronIntegralEngine>
                two_e_int_eng,
            const std::vector<double>& e,
            const arma::mat& C) :
            BasisSetInfo(system->basis_set),
            m_C(C),
            m_e(e),
            m_no_elect_alpha(system->no_electrons(niedoida::core::SPIN_ALPHA)),
            m_no_elect_beta(system->no_electrons(niedoida::core::SPIN_BETA)),
            m_n(m_C.n_rows),
            m_2ei(std::move(two_e_int_eng))
        {
            assert(m_C.n_rows == m_C.n_cols);

            // Compute default occupations
            // FIXME -- occupations should be given
            // to constructor as an argument
            m_occ_alpha.reserve(m_n);
            m_occ_beta.reserve(m_n);
            for (std::size_t i = 0; i < m_no_elect_alpha; ++i)
                m_occ_alpha.push_back(true);
            for (std::size_t i = 0; i < m_no_elect_beta; ++i)
                m_occ_beta.push_back(true);
            for (std::size_t i = m_no_elect_alpha; i < m_n; ++i)
                m_occ_alpha.push_back(false);
            for (std::size_t i = m_no_elect_beta; i < m_n; ++i)
                m_occ_beta.push_back(false);

            // FIXME: must be modified if user wants to define
            // frozen core and non-active MOs
            const unsigned no_occ = std::max(m_no_elect_alpha, m_no_elect_beta);
            const unsigned no_virt =
                m_n - std::min(m_no_elect_alpha, m_no_elect_beta);

            // allocate memory for two-electron integrals in MOs (m_gmo)
            // FIXME: At present _all_ the two-electron integrals are stored
            // in one vector, which should be replaced with segmented
            // transformation.
            try {
                m_gmo = arma::zeros<arma::vec>(no_occ * (no_occ + 1) * no_virt *
                                               no_virt / 2);
            } catch (std::bad_alloc) {
                throw std::runtime_error("Not enough memory to make in-memory "
                                         "integral transformation");
            }

            // ... make integral transformation (PQ|RS) -> (IA|JB)=<IJ|AB> ...
            integral_transform();

            // ... compute second order energy correction ...
            compute_energy_correction();

            // clear unused memory
            m_gmo.clear();
        }

        void NaiveMP2::integral_transform()
        {
            const std::size_t max_shell_size =
                *std::max_element(m_shell_sizes.begin(), m_shell_sizes.end());

            const unsigned max_no_requests = m_2ei->preferred_no_requests();
            m_requests.reserve(max_no_requests);

            niedoida::core::ShellQuartetIndexGenerator sq_begin(
                m_shell_sizes.size());
            niedoida::core::ShellQuartetIndexGenerator sq_end =
                sq_begin.make_end();
            niedoida::core::ShellQuartetIndexGenerator i(sq_begin);

            const std::size_t max_shell_size2 = max_shell_size * max_shell_size;

            m_buf.resize(boost::extents[max_no_requests]
                                       [max_shell_size2 * max_shell_size2]);

            do {
                m_requests.clear();
                unsigned r = 0;
                while (i != sq_end) {
                    // FIXME: prescreening would be handy ...

                    const niedoida::core::Request request = {
                        *i, false, &m_buf[r][0]};

                    m_requests.push_back(request);

                    ++r;
                    ++i;
                    if (r >= max_no_requests)
                        break;
                }
                // get 2el integrals
                m_2ei->calc(m_requests);

                // and use them
                for (unsigned r = 0; r < m_requests.size(); ++r)
                    partial_int_transform(r);
            } while (i != sq_end);
        }

        void NaiveMP2::partial_int_transform(unsigned w)
        {
            const niedoida::core::Request& request = m_requests[w];

            const unsigned s1 = request.shells[0];
            const unsigned s2 = request.shells[1];
            const unsigned s3 = request.shells[2];
            const unsigned s4 = request.shells[3];

            const unsigned b1 = m_first_contraction_in_shell[s1];
            const unsigned b2 = m_first_contraction_in_shell[s2];
            const unsigned b3 = m_first_contraction_in_shell[s3];
            const unsigned b4 = m_first_contraction_in_shell[s4];

            const unsigned n1 = m_shell_sizes[s1];
            const unsigned n2 = m_shell_sizes[s2];
            const unsigned n3 = m_shell_sizes[s3];
            const unsigned n4 = m_shell_sizes[s4];

            double* results = request.results;
            for (unsigned p = b1; p < b1 + n1; ++p)
                for (unsigned q = b2; q < b2 + n2; ++q)
                    for (unsigned r = b3; r < b3 + n3; ++r)
                        for (unsigned s = b4; s < b4 + n4; ++s) {

                            // get the next integral
                            const double g = *results++;
                            if (std::fabs(g) < 1e-10)
                                continue; // FIXME

                            arma::vec::iterator gmo = m_gmo.begin();
                            // iterate over all MO-quartets <ij|ab>
                            // where:
                            // i, j are occupied (at least in one spin symmetry)
                            // a, b are virtual (at least in one spin symmetry)
                            // In one-dimensional array m_gmo there are packed
                            // integrals <ij|ab> for i >= j, a >= b. If i !=j &&
                            // a != b (and only then) just after <ij|ab> we have
                            // <ij|ba> (in other cases, i.e. i==j || a==b, the
                            // last integral in not needed).
                            for (unsigned i = 0; i < m_n; ++i) {
                                if (!(m_occ_alpha[i] || m_occ_beta[i]))
                                    continue;
                                for (unsigned j = i; j < m_n; ++j) {
                                    if (!(m_occ_alpha[j] || m_occ_beta[j]))
                                        continue;
                                    for (unsigned a = 0; a < m_n; ++a) {
                                        if (m_occ_alpha[a] && m_occ_beta[a])
                                            continue;
                                        for (unsigned b = a; b < m_n; ++b) {
                                            if (m_occ_alpha[b] && m_occ_beta[b])
                                                continue;
                                            *gmo++ += g * transform_coeff(i,
                                                                          j,
                                                                          a,
                                                                          b,
                                                                          p,
                                                                          q,
                                                                          r,
                                                                          s,
                                                                          s1,
                                                                          s2,
                                                                          s3,
                                                                          s4);

                                            if (i != j && b != a) {
                                                *gmo++ +=
                                                    g * transform_coeff(i,
                                                                        j,
                                                                        b,
                                                                        a,
                                                                        p,
                                                                        q,
                                                                        r,
                                                                        s,
                                                                        s1,
                                                                        s2,
                                                                        s3,
                                                                        s4);
                                            }
                                        }
                                    }
                                }
                            }
                        }
        }

        double NaiveMP2::transform_coeff(unsigned i,
                                         unsigned j,
                                         unsigned a,
                                         unsigned b,
                                         unsigned p,
                                         unsigned q,
                                         unsigned r,
                                         unsigned s,
                                         unsigned s1,
                                         unsigned s2,
                                         unsigned s3,
                                         unsigned s4)
        {
            double coeff = 0;
            coeff += m_C(p, i) * m_C(r, j) * m_C(q, a) * m_C(s, b);
            if (s1 != s3 || s2 != s4) {
                coeff += m_C(r, i) * m_C(p, j) * m_C(s, a) * m_C(q, b);
                if (s1 != s2) {
                    coeff += m_C(q, i) * m_C(r, j) * m_C(p, a) * m_C(s, b);
                    coeff += m_C(r, i) * m_C(q, j) * m_C(s, a) * m_C(p, b);
                }
                if (s3 != s4) {
                    coeff += m_C(p, i) * m_C(s, j) * m_C(q, a) * m_C(r, b);
                    coeff += m_C(s, i) * m_C(p, j) * m_C(r, a) * m_C(q, b);
                }
                if (s1 != s2 && s3 != s4) {
                    coeff += m_C(q, i) * m_C(s, j) * m_C(p, a) * m_C(r, b);
                    coeff += m_C(s, i) * m_C(q, j) * m_C(r, a) * m_C(p, b);
                }
            } else {
                if (s1 != s2) {
                    coeff += m_C(q, i) * m_C(r, j) * m_C(p, a) * m_C(s, b);
                }
                if (s3 != s4) {
                    coeff += m_C(p, i) * m_C(s, j) * m_C(q, a) * m_C(r, b);
                }
                if (s1 != s2 && s3 != s4) {
                    coeff += m_C(q, i) * m_C(s, j) * m_C(p, a) * m_C(r, b);
                }
            }
            return coeff;
        }

        void NaiveMP2::compute_energy_correction()
        {
            arma::vec::iterator gmo = m_gmo.begin();
            m_energy = 0;
            // iterate over all MO-quartets <ij|ab>
            for (unsigned i = 0; i < m_n; ++i) {
                if (!(m_occ_alpha[i] || m_occ_beta[i]))
                    continue;
                for (unsigned j = i; j < m_n; ++j) {
                    if (!(m_occ_alpha[j] || m_occ_beta[j]))
                        continue;
                    for (unsigned a = 0; a < m_n; ++a) {
                        if (m_occ_alpha[a] && m_occ_beta[a])
                            continue;
                        for (unsigned b = a; b < m_n; ++b) {
                            if (m_occ_alpha[b] && m_occ_beta[b])
                                continue;
                            const double enrg_inverse =
                                1 / (m_e[i] + m_e[j] - m_e[a] - m_e[b]);
                            // ... consider different spin configurations ...

                            // case 1: <+-|+->
                            // (i.e. spin up for 1st electron and spin down for
                            // the second one)
                            //
                            // In this case we have contributions from _all_
                            // <ij|ab>; i,j - occ. MO, a,b - virt. MO
                            if (m_occ_alpha[i] && m_occ_beta[j] &&
                                !m_occ_alpha[a] && !m_occ_beta[b]) {
                                if (i < j && a < b) {
                                    // To get contributions from permutationally
                                    // equivalent shells we have to include the
                                    // following integrals:
                                    //
                                    // <ij|ab>           =  *gmo        and
                                    // <ji|ab>=<ij|ba>   =  *(gmo+1)    and
                                    // <ij|ba>           =  *(gmo+1)    and
                                    // <ji|ba>=<ij|ab>   =  *gmo
                                    //
                                    m_energy += 2 * enrg_inverse *
                                                (std::pow(*gmo, 2) +
                                                 std::pow(*(gmo + 1), 2));
                                } else if (i < j || a < b) {
                                    // To get contributions from permutationally
                                    // equivalent shells we have to include the
                                    // following integrals:
                                    //
                                    // ... in case i < j, a == b  ...
                                    // <ij|aa>           =  *gmo        and
                                    // <ji|aa>=<ij|aa>   =  *gmo
                                    //
                                    // ... or in case i == j, a < b ...
                                    // <ii|ab>           =  *gmo
                                    // <ii|ba>=<ii|ab>   =  *gmo
                                    //
                                    m_energy +=
                                        2 * enrg_inverse * std::pow(*gmo, 2);
                                } else { // i == j && a == b
                                    // We need only
                                    // <ii|aa> = *gmo
                                    m_energy +=
                                        enrg_inverse * std::pow(*gmo, 2);
                                }
                            }
                            // case 2 and 3: <++|++> or <--|-->
                            // (i.e. the same spin -- up or down -- for both
                            // electrons)
                            //
                            // In this case we should consider only i < j and a
                            // < b which covers _all_ unique excitations.
                            //
                            if (m_occ_alpha[i] && m_occ_alpha[j] &&
                                !m_occ_alpha[a] && !m_occ_alpha[b] && i < j &&
                                a < b) {
                                m_energy += enrg_inverse *
                                            std::pow(*gmo - *(gmo + 1), 2);
                            }
                            if (m_occ_beta[i] && m_occ_beta[j] &&
                                !m_occ_beta[a] && !m_occ_beta[b] && i < j &&
                                a < b) {
                                m_energy += enrg_inverse *
                                            std::pow(*gmo - *(gmo + 1), 2);
                            }
                            // go forward
                            if (i < j && a < b)
                                gmo += 2;
                            else
                                gmo++;
                        }
                    }
                }
            } // end iteration over MO-quartets
        }

        // naive unrestricted mp2 prototype
        NaiveUMP2::NaiveUMP2(
            const std::shared_ptr<const niedoida::core::System> system,
            std::unique_ptr<niedoida::core::TwoElectronIntegralEngine>
                two_e_int_eng,
            const arma::vec& e_alpha,
            const arma::vec& e_beta,
            const arma::mat& C_alpha,
            const arma::mat& C_beta) :
            BasisSetInfo(system->basis_set),
            m_C_alpha(C_alpha),
            m_C_beta(C_beta),
            m_e_alpha(e_alpha),
            m_e_beta(e_beta),
            m_no_elect_alpha(system->no_electrons(niedoida::core::SPIN_ALPHA)),
            m_no_elect_beta(system->no_electrons(niedoida::core::SPIN_BETA)),
            m_n(m_C_alpha.n_rows),
            m_2ei(std::move(two_e_int_eng))
        {
            assert(m_C_alpha.n_rows == m_C_alpha.n_rows);
            assert(m_C_alpha.n_rows == m_C_beta.n_rows);
            // Compute default occupations
            // FIXME -- occupations should be given
            // to constructor as an argument
            m_occ_alpha.reserve(m_n);
            m_occ_beta.reserve(m_n);
            for (std::size_t i = 0; i < m_no_elect_alpha; ++i)
                m_occ_alpha.push_back(true);
            for (std::size_t i = 0; i < m_no_elect_beta; ++i)
                m_occ_beta.push_back(true);
            for (std::size_t i = m_no_elect_alpha; i < m_n; ++i)
                m_occ_alpha.push_back(false);
            for (std::size_t i = m_no_elect_beta; i < m_n; ++i)
                m_occ_beta.push_back(false);

            // FIXME: must be modified if user wants to define
            // frozen core and non-active MOs
            const unsigned no_occ = std::max(m_no_elect_alpha, m_no_elect_beta);
            const unsigned no_virt =
                m_n - std::min(m_no_elect_alpha, m_no_elect_beta);

            // allocate memory for two-electron integrals in MOs (m_gmo)
            // FIXME: At present _all_ the two-electron integrals are stored
            // in one vector, which should be replaced with segmented
            // transformation.
            try {
                m_gmo =
                    arma::zeros<arma::vec>(no_occ * no_occ * no_virt * no_virt);
            } catch (std::bad_alloc) {
                throw std::runtime_error("Not enough memory to make in-memory "
                                         "integral transformation");
            }

            m_energy = 0;

            // ... make integral transformation (PQ|RS) -> (IA|JB)=<IJ|AB>
            // for integrals with spinorbitals of type alpha (AAAA) ...
            integral_transform_AAAA();

            // ... compute second order energy correction
            // from integrals with spinorbitals of type alpha (AAAA) ...
            compute_energy_correction_AAAA();

            // the same for BBBB ...
            integral_transform_BBBB();
            compute_energy_correction_BBBB();

            // ... and for ABAB
            integral_transform_ABAB();
            compute_energy_correction_ABAB();

            // clear unused memory
            m_gmo.clear();
        }

        void NaiveUMP2::integral_transform_AAAA()
        {
            const std::size_t max_shell_size =
                *std::max_element(m_shell_sizes.begin(), m_shell_sizes.end());

            const unsigned max_no_requests = m_2ei->preferred_no_requests();
            m_requests.reserve(max_no_requests);

            niedoida::core::ShellQuartetIndexGenerator sq_begin(
                m_shell_sizes.size());
            niedoida::core::ShellQuartetIndexGenerator sq_end =
                sq_begin.make_end();
            niedoida::core::ShellQuartetIndexGenerator i(sq_begin);

            const std::size_t max_shell_size2 = max_shell_size * max_shell_size;
            m_buf.resize(boost::extents[max_no_requests]
                                       [max_shell_size2 * max_shell_size2]);

            for (unsigned i = 0; i < m_gmo.size(); ++i)
                m_gmo(i) = 0;

            do {
                m_requests.clear();
                unsigned r = 0;
                while (i != sq_end) {
                    // FIXME: prescreening would be handy ...

                    const niedoida::core::Request request = {
                        *i, false, &m_buf[r][0]};

                    m_requests.push_back(request);

                    ++r;
                    ++i;
                    if (r >= max_no_requests)
                        break;
                }
                // get 2el integrals
                m_2ei->calc(m_requests);

                // and use them
                for (unsigned r = 0; r < m_requests.size(); ++r)
                    partial_int_transform_AAAA(r);
            } while (i != sq_end);
        }

        // **** spin <++|++> ****

        void NaiveUMP2::partial_int_transform_AAAA(unsigned w)
        {
            const niedoida::core::Request& request = m_requests[w];

            const unsigned s1 = request.shells[0];
            const unsigned s2 = request.shells[1];
            const unsigned s3 = request.shells[2];
            const unsigned s4 = request.shells[3];

            const unsigned b1 = m_first_contraction_in_shell[s1];
            const unsigned b2 = m_first_contraction_in_shell[s2];
            const unsigned b3 = m_first_contraction_in_shell[s3];
            const unsigned b4 = m_first_contraction_in_shell[s4];

            const unsigned n1 = m_shell_sizes[s1];
            const unsigned n2 = m_shell_sizes[s2];
            const unsigned n3 = m_shell_sizes[s3];
            const unsigned n4 = m_shell_sizes[s4];

            double* results = request.results;
            for (unsigned p = b1; p < b1 + n1; ++p)
                for (unsigned q = b2; q < b2 + n2; ++q)
                    for (unsigned r = b3; r < b3 + n3; ++r)
                        for (unsigned s = b4; s < b4 + n4; ++s) {

                            // get the next integral
                            const double g = *results++;
                            if (std::fabs(g) < 1e-10)
                                continue; // FIXME

                            arma::vec::iterator gmo = m_gmo.begin();
                            // iterate over all MO-quartets <ij|ab>
                            // where i < j && a < b
                            // (only them are needed in case <++|++>
                            for (unsigned i = 0; i < m_n; ++i) {
                                if (!m_occ_alpha[i])
                                    continue;
                                for (unsigned j = i + 1; j < m_n; ++j) {
                                    if (!m_occ_alpha[j])
                                        continue;
                                    for (unsigned a = 0; a < m_n; ++a) {
                                        if (m_occ_alpha[a])
                                            continue;
                                        for (unsigned b = a + 1; b < m_n; ++b) {
                                            if (m_occ_alpha[b])
                                                continue;
                                            // <ij|ab>:
                                            *gmo++ +=
                                                g * transform_coeff_AAAA(i,
                                                                         j,
                                                                         a,
                                                                         b,
                                                                         p,
                                                                         q,
                                                                         r,
                                                                         s,
                                                                         s1,
                                                                         s2,
                                                                         s3,
                                                                         s4);
                                            // <ij|ba>:
                                            *gmo++ +=
                                                g * transform_coeff_AAAA(i,
                                                                         j,
                                                                         b,
                                                                         a,
                                                                         p,
                                                                         q,
                                                                         r,
                                                                         s,
                                                                         s1,
                                                                         s2,
                                                                         s3,
                                                                         s4);
                                        }
                                    }
                                }
                            }
                        }
        }

        double NaiveUMP2::transform_coeff_AAAA(unsigned i,
                                               unsigned j,
                                               unsigned a,
                                               unsigned b,
                                               unsigned p,
                                               unsigned q,
                                               unsigned r,
                                               unsigned s,
                                               unsigned s1,
                                               unsigned s2,
                                               unsigned s3,
                                               unsigned s4)
        {
            double coeff = 0;
            coeff += m_C_alpha(p, i) * m_C_alpha(r, j) * m_C_alpha(q, a) *
                     m_C_alpha(s, b);
            if (s1 != s3 || s2 != s4) {
                coeff += m_C_alpha(r, i) * m_C_alpha(p, j) * m_C_alpha(s, a) *
                         m_C_alpha(q, b);
                if (s1 != s2) {
                    coeff += m_C_alpha(q, i) * m_C_alpha(r, j) *
                             m_C_alpha(p, a) * m_C_alpha(s, b);
                    coeff += m_C_alpha(r, i) * m_C_alpha(q, j) *
                             m_C_alpha(s, a) * m_C_alpha(p, b);
                }
                if (s3 != s4) {
                    coeff += m_C_alpha(p, i) * m_C_alpha(s, j) *
                             m_C_alpha(q, a) * m_C_alpha(r, b);
                    coeff += m_C_alpha(s, i) * m_C_alpha(p, j) *
                             m_C_alpha(r, a) * m_C_alpha(q, b);
                }
                if (s1 != s2 && s3 != s4) {
                    coeff += m_C_alpha(q, i) * m_C_alpha(s, j) *
                             m_C_alpha(p, a) * m_C_alpha(r, b);
                    coeff += m_C_alpha(s, i) * m_C_alpha(q, j) *
                             m_C_alpha(r, a) * m_C_alpha(p, b);
                }
            } else {
                if (s1 != s2) {
                    coeff += m_C_alpha(q, i) * m_C_alpha(r, j) *
                             m_C_alpha(p, a) * m_C_alpha(s, b);
                }
                if (s3 != s4) {
                    coeff += m_C_alpha(p, i) * m_C_alpha(s, j) *
                             m_C_alpha(q, a) * m_C_alpha(r, b);
                }
                if (s1 != s2 && s3 != s4) {
                    coeff += m_C_alpha(q, i) * m_C_alpha(s, j) *
                             m_C_alpha(p, a) * m_C_alpha(r, b);
                }
            }
            return coeff;
        }

        void NaiveUMP2::compute_energy_correction_AAAA()
        {
            arma::vec::iterator gmo = m_gmo.begin();
            // iterate over all MO-quartets <ij|ab>
            for (unsigned i = 0; i < m_n; ++i) {
                if (!m_occ_alpha[i])
                    continue;
                for (unsigned j = i + 1; j < m_n; ++j) {
                    if (!m_occ_alpha[j])
                        continue;
                    for (unsigned a = 0; a < m_n; ++a) {
                        if (m_occ_alpha[a])
                            continue;
                        for (unsigned b = a + 1; b < m_n; ++b) {
                            if (m_occ_alpha[b])
                                continue;
                            const double enrg_inverse =
                                1 / (m_e_alpha[i] + m_e_alpha[j] -
                                     m_e_alpha[a] - m_e_alpha[b]);
                            m_energy +=
                                enrg_inverse * std::pow(*gmo - *(gmo + 1), 2);
                            gmo += 2;
                        }
                    }
                }
            } // end iteration over MO-quartets
        }

        // **** spin <--|--> ****

        void NaiveUMP2::integral_transform_BBBB()
        {
            const std::size_t max_shell_size =
                *std::max_element(m_shell_sizes.begin(), m_shell_sizes.end());

            const unsigned max_no_requests = m_2ei->preferred_no_requests();
            m_requests.reserve(max_no_requests);

            niedoida::core::ShellQuartetIndexGenerator sq_begin(
                m_shell_sizes.size());
            niedoida::core::ShellQuartetIndexGenerator sq_end =
                sq_begin.make_end();
            niedoida::core::ShellQuartetIndexGenerator i(sq_begin);

            const std::size_t max_shell_size2 = max_shell_size * max_shell_size;
            m_buf.resize(boost::extents[max_no_requests]
                                       [max_shell_size2 * max_shell_size2]);

            for (unsigned i = 0; i < m_gmo.size(); ++i)
                m_gmo(i) = 0;

            do {
                m_requests.clear();
                unsigned r = 0;
                while (i != sq_end) {
                    // FIXME: prescreening would be handy ...

                    const niedoida::core::Request request = {
                        *i, false, &m_buf[r][0]};

                    m_requests.push_back(request);

                    ++r;
                    ++i;
                    if (r >= max_no_requests)
                        break;
                }
                // get 2el integrals
                m_2ei->calc(m_requests);

                // and use them
                for (unsigned r = 0; r < m_requests.size(); ++r)
                    partial_int_transform_BBBB(r);
            } while (i != sq_end);
        }

        void NaiveUMP2::partial_int_transform_BBBB(unsigned w)
        {
            const niedoida::core::Request& request = m_requests[w];

            const unsigned s1 = request.shells[0];
            const unsigned s2 = request.shells[1];
            const unsigned s3 = request.shells[2];
            const unsigned s4 = request.shells[3];

            const unsigned b1 = m_first_contraction_in_shell[s1];
            const unsigned b2 = m_first_contraction_in_shell[s2];
            const unsigned b3 = m_first_contraction_in_shell[s3];
            const unsigned b4 = m_first_contraction_in_shell[s4];

            const unsigned n1 = m_shell_sizes[s1];
            const unsigned n2 = m_shell_sizes[s2];
            const unsigned n3 = m_shell_sizes[s3];
            const unsigned n4 = m_shell_sizes[s4];

            double* results = request.results;
            for (unsigned p = b1; p < b1 + n1; ++p)
                for (unsigned q = b2; q < b2 + n2; ++q)
                    for (unsigned r = b3; r < b3 + n3; ++r)
                        for (unsigned s = b4; s < b4 + n4; ++s) {

                            // get the next integral
                            const double g = *results++;
                            if (std::fabs(g) < 1e-10)
                                continue; // FIXME

                            arma::vec::iterator gmo = m_gmo.begin();
                            // iterate over all MO-quartets <ij|ab>
                            for (unsigned i = 0; i < m_n; ++i) {
                                if (!m_occ_beta[i])
                                    continue;
                                for (unsigned j = i + 1; j < m_n; ++j) {
                                    if (!m_occ_beta[j])
                                        continue;
                                    for (unsigned a = 0; a < m_n; ++a) {
                                        if (m_occ_beta[a])
                                            continue;
                                        for (unsigned b = a + 1; b < m_n; ++b) {
                                            if (m_occ_beta[b])
                                                continue;
                                            *gmo++ +=
                                                g * transform_coeff_BBBB(i,
                                                                         j,
                                                                         a,
                                                                         b,
                                                                         p,
                                                                         q,
                                                                         r,
                                                                         s,
                                                                         s1,
                                                                         s2,
                                                                         s3,
                                                                         s4);
                                            *gmo++ +=
                                                g * transform_coeff_BBBB(i,
                                                                         j,
                                                                         b,
                                                                         a,
                                                                         p,
                                                                         q,
                                                                         r,
                                                                         s,
                                                                         s1,
                                                                         s2,
                                                                         s3,
                                                                         s4);
                                        }
                                    }
                                }
                            }
                        }
        }

        double NaiveUMP2::transform_coeff_BBBB(unsigned i,
                                               unsigned j,
                                               unsigned a,
                                               unsigned b,
                                               unsigned p,
                                               unsigned q,
                                               unsigned r,
                                               unsigned s,
                                               unsigned s1,
                                               unsigned s2,
                                               unsigned s3,
                                               unsigned s4)
        {
            double coeff = 0;
            coeff += m_C_beta(p, i) * m_C_beta(r, j) * m_C_beta(q, a) *
                     m_C_beta(s, b);
            if (s1 != s3 || s2 != s4) {
                coeff += m_C_beta(r, i) * m_C_beta(p, j) * m_C_beta(s, a) *
                         m_C_beta(q, b);
                if (s1 != s2) {
                    coeff += m_C_beta(q, i) * m_C_beta(r, j) * m_C_beta(p, a) *
                             m_C_beta(s, b);
                    coeff += m_C_beta(r, i) * m_C_beta(q, j) * m_C_beta(s, a) *
                             m_C_beta(p, b);
                }
                if (s3 != s4) {
                    coeff += m_C_beta(p, i) * m_C_beta(s, j) * m_C_beta(q, a) *
                             m_C_beta(r, b);
                    coeff += m_C_beta(s, i) * m_C_beta(p, j) * m_C_beta(r, a) *
                             m_C_beta(q, b);
                }
                if (s1 != s2 && s3 != s4) {
                    coeff += m_C_beta(q, i) * m_C_beta(s, j) * m_C_beta(p, a) *
                             m_C_beta(r, b);
                    coeff += m_C_beta(s, i) * m_C_beta(q, j) * m_C_beta(r, a) *
                             m_C_beta(p, b);
                }
            } else {
                if (s1 != s2) {
                    coeff += m_C_beta(q, i) * m_C_beta(r, j) * m_C_beta(p, a) *
                             m_C_beta(s, b);
                }
                if (s3 != s4) {
                    coeff += m_C_beta(p, i) * m_C_beta(s, j) * m_C_beta(q, a) *
                             m_C_beta(r, b);
                }
                if (s1 != s2 && s3 != s4) {
                    coeff += m_C_beta(q, i) * m_C_beta(s, j) * m_C_beta(p, a) *
                             m_C_beta(r, b);
                }
            }
            return coeff;
        }

        void NaiveUMP2::compute_energy_correction_BBBB()
        {
            arma::vec::iterator gmo = m_gmo.begin();
            // iterate over all MO-quartets <ij|ab>
            for (unsigned i = 0; i < m_n; ++i) {
                if (!m_occ_beta[i])
                    continue;
                for (unsigned j = i + 1; j < m_n; ++j) {
                    if (!m_occ_beta[j])
                        continue;
                    for (unsigned a = 0; a < m_n; ++a) {
                        if (m_occ_beta[a])
                            continue;
                        for (unsigned b = a + 1; b < m_n; ++b) {
                            if (m_occ_beta[b])
                                continue;
                            const double enrg_inverse =
                                1 / (m_e_beta[i] + m_e_beta[j] - m_e_beta[a] -
                                     m_e_beta[b]);
                            m_energy +=
                                enrg_inverse * std::pow(*gmo - *(gmo + 1), 2);
                            gmo += 2;
                        }
                    }
                }
            } // end iteration over MO-quartets
        }

        // ***** spin <+-|+-> *****

        void NaiveUMP2::integral_transform_ABAB()
        {
            const std::size_t max_shell_size =
                *std::max_element(m_shell_sizes.begin(), m_shell_sizes.end());

            const unsigned max_no_requests = m_2ei->preferred_no_requests();
            m_requests.reserve(max_no_requests);

            niedoida::core::ShellQuartetIndexGenerator sq_begin(
                m_shell_sizes.size());
            niedoida::core::ShellQuartetIndexGenerator sq_end =
                sq_begin.make_end();
            niedoida::core::ShellQuartetIndexGenerator i(sq_begin);

            const std::size_t max_shell_size2 = max_shell_size * max_shell_size;
            m_buf.resize(boost::extents[max_no_requests]
                                       [max_shell_size2 * max_shell_size2]);

            for (unsigned i = 0; i < m_gmo.size(); ++i)
                m_gmo(i) = 0;

            do {
                m_requests.clear();
                unsigned r = 0;
                while (i != sq_end) {
                    // FIXME: prescreening would be handy...

                    const niedoida::core::Request request = {
                        *i, false, &m_buf[r][0]};

                    m_requests.push_back(request);

                    ++r;
                    ++i;
                    if (r >= max_no_requests)
                        break;
                }
                // get 2el integrals
                m_2ei->calc(m_requests);

                // and use them
                for (unsigned r = 0; r < m_requests.size(); ++r)
                    partial_int_transform_ABAB(r);
            } while (i != sq_end);
        }

        void NaiveUMP2::partial_int_transform_ABAB(unsigned w)
        {
            const niedoida::core::Request& request = m_requests[w];

            const unsigned s1 = request.shells[0];
            const unsigned s2 = request.shells[1];
            const unsigned s3 = request.shells[2];
            const unsigned s4 = request.shells[3];

            const unsigned b1 = m_first_contraction_in_shell[s1];
            const unsigned b2 = m_first_contraction_in_shell[s2];
            const unsigned b3 = m_first_contraction_in_shell[s3];
            const unsigned b4 = m_first_contraction_in_shell[s4];

            const unsigned n1 = m_shell_sizes[s1];
            const unsigned n2 = m_shell_sizes[s2];
            const unsigned n3 = m_shell_sizes[s3];
            const unsigned n4 = m_shell_sizes[s4];

            double* results = request.results;
            for (unsigned p = b1; p < b1 + n1; ++p)
                for (unsigned q = b2; q < b2 + n2; ++q)
                    for (unsigned r = b3; r < b3 + n3; ++r)
                        for (unsigned s = b4; s < b4 + n4; ++s) {

                            // get the next integral
                            const double g = *results++;
                            if (std::fabs(g) < 1e-10)
                                continue; // FIXME

                            arma::vec::iterator gmo = m_gmo.begin();
                            // iterate over all MO-quartets <ij|ab>
                            for (unsigned i = 0; i < m_n; ++i) {
                                if (!m_occ_alpha[i])
                                    continue;
                                for (unsigned j = 0; j < m_n; ++j) {
                                    if (!m_occ_beta[j])
                                        continue;
                                    for (unsigned a = i + 1; a < m_n; ++a) {
                                        if (m_occ_alpha[a])
                                            continue;
                                        for (unsigned b = j + 1; b < m_n; ++b) {
                                            if (m_occ_beta[b])
                                                continue;
                                            *gmo++ +=
                                                g * transform_coeff_ABAB(i,
                                                                         j,
                                                                         a,
                                                                         b,
                                                                         p,
                                                                         q,
                                                                         r,
                                                                         s,
                                                                         s1,
                                                                         s2,
                                                                         s3,
                                                                         s4);
                                        }
                                    }
                                }
                            }
                        }
        }

        double NaiveUMP2::transform_coeff_ABAB(unsigned i,
                                               unsigned j,
                                               unsigned a,
                                               unsigned b,
                                               unsigned p,
                                               unsigned q,
                                               unsigned r,
                                               unsigned s,
                                               unsigned s1,
                                               unsigned s2,
                                               unsigned s3,
                                               unsigned s4)
        {
            double coeff = 0;
            coeff += m_C_alpha(p, i) * m_C_beta(r, j) * m_C_alpha(q, a) *
                     m_C_beta(s, b);
            if (s1 != s3 || s2 != s4) {
                coeff += m_C_alpha(r, i) * m_C_beta(p, j) * m_C_alpha(s, a) *
                         m_C_beta(q, b);
                if (s1 != s2) {
                    coeff += m_C_alpha(q, i) * m_C_beta(r, j) *
                             m_C_alpha(p, a) * m_C_beta(s, b);
                    coeff += m_C_alpha(r, i) * m_C_beta(q, j) *
                             m_C_alpha(s, a) * m_C_beta(p, b);
                }
                if (s3 != s4) {
                    coeff += m_C_alpha(p, i) * m_C_beta(s, j) *
                             m_C_alpha(q, a) * m_C_beta(r, b);
                    coeff += m_C_alpha(s, i) * m_C_beta(p, j) *
                             m_C_alpha(r, a) * m_C_beta(q, b);
                }
                if (s1 != s2 && s3 != s4) {
                    coeff += m_C_alpha(q, i) * m_C_beta(s, j) *
                             m_C_alpha(p, a) * m_C_beta(r, b);
                    coeff += m_C_alpha(s, i) * m_C_beta(q, j) *
                             m_C_alpha(r, a) * m_C_beta(p, b);
                }
            } else {
                if (s1 != s2) {
                    coeff += m_C_alpha(q, i) * m_C_beta(r, j) *
                             m_C_alpha(p, a) * m_C_beta(s, b);
                }
                if (s3 != s4) {
                    coeff += m_C_alpha(p, i) * m_C_beta(s, j) *
                             m_C_alpha(q, a) * m_C_beta(r, b);
                }
                if (s1 != s2 && s3 != s4) {
                    coeff += m_C_alpha(q, i) * m_C_beta(s, j) *
                             m_C_alpha(p, a) * m_C_beta(r, b);
                }
            }
            return coeff;
        }

        void NaiveUMP2::compute_energy_correction_ABAB()
        {
            arma::vec::iterator gmo = m_gmo.begin();
            // iterate over all MO-quartets <ij|ab>
            for (unsigned i = 0; i < m_n; ++i) {
                if (!m_occ_alpha[i])
                    continue;
                for (unsigned j = 0; j < m_n; ++j) {
                    if (!m_occ_beta[j])
                        continue;
                    for (unsigned a = i + 1; a < m_n; ++a) {
                        if (m_occ_alpha[a])
                            continue;
                        for (unsigned b = j + 1; b < m_n; ++b) {
                            if (m_occ_beta[b])
                                continue;
                            const double enrg_inverse =
                                1 / (m_e_alpha[i] + m_e_beta[j] - m_e_alpha[a] -
                                     m_e_beta[b]);
                            m_energy += enrg_inverse * std::pow(*gmo, 2);
                            gmo++;
                        }
                    }
                }
            } // end iteration over MO-quartets
        }
    }
}
