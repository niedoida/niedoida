/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/shell_pair_index_generator.hpp"
#include "core_kit/shell_quartet_index_generator.hpp"
#include "gto_kit/os1_integral_engine.hpp"
#include "io_kit/io_kit.hpp"
#include "misc_kit/dispatcher.hpp"
#include "misc_kit/quadratures.hpp"
#include "posthf_kit/lt_mp2.hpp"
#include "posthf_kit/lt_mp2_utils.hpp"
#include "scf_kit/scf_kit.hpp"

#include <boost/math/constants/constants.hpp>
#include <boost/math/special_functions/factorials.hpp>

#include <utility>
#include <vector>

#include <ext/numeric>
#include <stdexcept>

namespace niedoida {

    namespace posthf {

        namespace {
            double integrate_exponent(const unsigned k, const double alpha)
            {
                if (k & 1)
                    return boost::math::factorial<double>(k / 2) /
                           (2.0 * std::pow(alpha, int(k / 2 + 1)));
                return std::sqrt(boost::math::constants::pi<double>()) *
                       boost::math::double_factorial<double>(k - 1) /
                       (std::pow(2.0, int(k / 2 + 1)) *
                        std::pow(alpha, k / 2 + 0.5));
            }

            double calc_sp(const unsigned n,
                           const double p,
                           const double K,
                           const double X_P_A)
            {
                return (2.0 * boost::math::constants::pi<double>() *
                            integrate_exponent(n + 3, p) +
                        4.0 * boost::math::constants::pi<double>() *
                            std::abs(X_P_A) * integrate_exponent(n + 2, p)) *
                       K;
            }

            double calc_pp_diag(const unsigned n,
                                const double p,
                                const double K,
                                const double X_P_A,
                                const double X_P_B)
            {
                return ((4.0 / 3.0) * boost::math::constants::pi<double>() *
                            integrate_exponent(n + 4, p) +
                        2.0 * boost::math::constants::pi<double>() *
                            (std::abs(X_P_A) + std::abs(X_P_B)) *
                            integrate_exponent(n + 3, p) +
                        std::abs(X_P_A * X_P_B) * 4.0 *
                            boost::math::constants::pi<double>() *
                            integrate_exponent(n + 2, p)) *
                       K;
            }

            double calc_pp_nondiag(const unsigned n,
                                   const double p,
                                   const double K,
                                   const double X_P_A,
                                   const double Y_P_B)
            {
                return ((8.0 / 3.0) * integrate_exponent(n + 4, p) +
                        2.0 * boost::math::constants::pi<double>() *
                            (std::abs(X_P_A) + std::abs(Y_P_B)) *
                            integrate_exponent(n + 3, p) +
                        4.0 * boost::math::constants::pi<double>() *
                            std::abs(X_P_A * Y_P_B) *
                            integrate_exponent(n + 2, p)) *
                       K;
            }

            double integrate_exponents(const double R_P_A,
                                       const int l1,
                                       const double R_P_B,
                                       const int l2,
                                       const int n,
                                       const double p,
                                       const double K)
            {
                double sum = 0;

                for (int j = 0; j <= l1; ++j) {
                    const double c1 =
                        boost::math::binomial_coefficient<double>(j, l1) *
                        std::pow(R_P_A, l1 - j);
                    for (int k = 0; k <= l2; ++k) {
                        const double c2 =
                            boost::math::binomial_coefficient<double>(k, l2) *
                            std::pow(R_P_B, l2 - k);
                        const double integral =
                            integrate_exponent(j + k + n + 2, p);
                        sum += c1 * c2 * integral;
                    }
                }
                return 4 * boost::math::constants::pi<double>() * K * sum;
            }
        }

        RHF_LS_LT_AO_MP2::RHF_LS_LT_AO_MP2(
            std::shared_ptr<const niedoida::core::System> system,
            std::unique_ptr<niedoida::core::TwoElectronIntegralEngine>
                two_e_int_eng,
            const arma::vec& e,
            const arma::mat& C,
            unsigned long memory_pool,
            unsigned no_frozen,
            unsigned no_deleted,
            const niedoida::misc::Quadrature& quadrature,
            const double eps) :
            LT_AO_MP2_SchwartzPrescreening(
                system, std::move(two_e_int_eng), eps),
            m_memory_pool(memory_pool),
            m_e(e),
            m_indices_buf2(new std::size_t[m_n]),
            m_indices_buf3(new std::size_t[m_n]),
            m_indices_buf4(new std::size_t[m_n]),
            m_fbs(system->basis_set)
        {
            m_no_occ =
                system->no_electrons(niedoida::core::SPIN_ALPHA) - m_no_frozen;
            m_no_virt = m_n - m_no_occ - m_no_frozen - m_no_deleted;

            generate_A();

            m_e2 = 0;

            const double meps = m_eps;

            m_range_cutoff = 1.0e-8;

            const unsigned no_occ =
                system->no_electrons(niedoida::core::SPIN_ALPHA);

            double eps_homo = e(no_occ - 1);
            double eps_lumo = e(no_occ);

            const double ef = (eps_homo + eps_lumo) / 2;
            m_ef.resize(m_e.size());

            for (std::size_t i = 0; i < m_ef.size(); ++i)
                m_ef(i) = m_e(i) - ef;

            //  double delta_eps_min = 2 * (eps_lumo - eps_homo);
            //  double delta_eps_max = e(m_n - 1) - e(0);
            //  Quadrature quadrature =
            //    fitted_lt_mp2_quadrature(3, delta_eps_min, delta_eps_max);
            //  Quadrature quadrature = em_static_lt_mp2_quadrature(10);

            // 
            {
                niedoida::io::Log::Section section(
                    "calculating function ranges");
                m_ranges = arma::zeros<arma::vec>(m_n);
                calc_ranges(std::sqrt(m_range_cutoff));
            }

            
            {
                niedoida::io::Log::Section section(
                    "calculating pair centers, multipoles, ranges");
                m_pair_centers.resize(boost::extents[m_n][m_n][3]);

                m_pair_significant.resize(boost::extents[m_n][m_n]);
                for (std::size_t i = 0; i < m_n; ++i)
                    for (std::size_t j = 0; j <= i; ++j)
                        m_pair_significant[i][j] = true;
                m_pair_ranges = arma::zeros<arma::mat>(m_n, m_n);
                calc_pair_centers_ranges();
                m_M.resize(boost::extents[m_n][m_n][3]);
                m_pair_max_values = arma::zeros<arma::mat>(m_n, m_n);
                memset(m_M.origin(), 0, m_n * m_n * 3 * sizeof(double));
                calc_pair_multipoles();
                calc_pair_ranges_2();
                m_M_sh.resize(boost::extents[m_no_shells][m_no_shells][3]);
                m_sh_pair_centers.resize(
                    boost::extents[m_no_shells][m_no_shells][3]);
                memset(m_M_sh.origin(),
                       0,
                       m_no_shells * m_no_shells * 3 * sizeof(double));
                memset(m_sh_pair_centers.origin(),
                       0,
                       m_no_shells * m_no_shells * 3 * sizeof(double));
                m_sh_pair_ranges =
                    arma::zeros<arma::mat>(m_no_shells, m_no_shells);
                calc_sh_pair_significant();
                calc_sh_pair_centers_ranges_multipoles();
            }

            niedoida::io::Log::Section section("lt-mp2");
            for (unsigned iii = 0; iii < quadrature.size(); iii++) {
                niedoida::io::Log::Section section("lt-mp2 iteration");

                double t = quadrature[iii].first;
                double w = quadrature[iii].second;

                m_eps = meps / w;

                {

                    niedoida::io::Log::Section section(
                        "creating common matrices");
                    m_X = X_density_matrix(C, no_occ, m_no_frozen, m_ef, t);
                    m_Y = Y_density_matrix(C, no_occ, m_no_deleted, m_ef, t);

                    m_max_Y_sh.resize(m_no_shells);

                    for (std::size_t i = 0; i < m_no_shells; ++i) {
                        const unsigned pf = m_first_contraction_in_shell[i];
                        const unsigned ps = m_shell_sizes[i];
                        double max_Y = 0;
                        for (std::size_t j = pf; j < pf + ps; ++j)
                            for (std::size_t k = 0; k < m_n; ++k)
                                if (std::abs(m_Y(j, k)) > max_Y)
                                    max_Y = std::abs(m_Y(j, k));
                        m_max_Y_sh(i) = max_Y;
                    }

                    generate_BCD(m_X, m_Y);

                    niedoida::io::Log::instance().write(
                        niedoida::io::Logger::NORMAL, "t", t);
                    niedoida::io::Log::instance().write(
                        niedoida::io::Logger::NORMAL, "w", w);

                    matrices_max_elements();
                }

                {
                    niedoida::io::Log::Section section(
                        "calculating centers, ranges and multipoles for down "
                        "transformed");
                    m_d_pair_ranges = arma::zeros<arma::mat>(m_n, m_n);
                    m_d_pair_significant.set_size(m_n, m_n);
                    m_d_pair_significant.fill(false);
                    for (std::size_t i = 0; i < m_n; ++i)
                        for (std::size_t j = 0; j < m_n; ++j)
                            m_d_pair_significant(i, j) = true;
                    m_M_d.resize(boost::extents[m_n][m_n][3]);
                    memset(m_M_d.origin(), 0, m_n * m_n * 3 * sizeof(double));
                    calc_d_pair_ranges_multipoles(std::sqrt(m_range_cutoff));
                }

                {
                    niedoida::io::Log::Section section(
                        "calculating centers, ranges and multipoles for up "
                        "transformed");
                    m_u_pair_ranges = arma::zeros<arma::mat>(m_n, m_n);
                    m_u_pair_significant.set_size(m_n, m_n);
                    m_u_pair_significant.fill(false);
                    for (std::size_t i = 0; i < m_n; ++i)
                        for (std::size_t j = 0; j < m_n; ++j)
                            m_u_pair_significant(i, j) = true;
                    m_M_u.resize(boost::extents[m_n][m_n][3]);
                    memset(m_M_u.origin(), 0, m_n * m_n * 3 * sizeof(double));
                    calc_u_pair_ranges_multipoles(std::sqrt(m_range_cutoff));
                }

                {
                    niedoida::io::Log::Section section(
                        "calculating centers, ranges and multipoles for "
                        "transformed");
                    m_t_pair_ranges = arma::zeros<arma::mat>(m_n, m_n);
                    m_t_pair_significant.set_size(m_n, m_n);
                    m_t_pair_significant.fill(false);
                    for (std::size_t i = 0; i < m_n; ++i)
                        for (std::size_t j = 0; j < m_n; ++j)
                            m_t_pair_significant(i, j) = true;
                    m_M_t.resize(boost::extents[m_n][m_n][3]);
                    memset(m_M_t.origin(), 0, m_n * m_n * 3 * sizeof(double));
                    calc_t_pair_ranges_multipoles(std::sqrt(m_range_cutoff));
                }

                std::vector<std::size_t> il;
                {
                    niedoida::io::Log::Section section("building batches");
                    ;

                    il = split(memory_pool, m_n);
                }
                niedoida::io::Log::instance().write(
                    niedoida::io::Logger::NORMAL,
                    "total_no_passes",
                    int(il.size() - 1));

                double partial_e2_contrib = 0;

                {

                    std::unique_ptr<niedoida::misc::Dispatcher> d =
                        niedoida::misc::dispatcher(
                            m_comm,
                            il.size() - 1,
                            niedoida::misc::STATIC_DISPATCHING_ALGORITHM);

                    while (niedoida::misc::Dispatcher::TaskInfo task_info =
                               d->get_task()) {

                        for (std::size_t p = task_info->first;
                             p < task_info->second;
                             ++p) {
                            niedoida::io::Log::Section section("pass");
                            niedoida::io::Log::instance().write(
                                niedoida::io::Logger::NORMAL, "pass", int(p));

                            const std::size_t ib = il[p];
                            const std::size_t ie = il[p + 1];
                            niedoida::io::Log::instance().write(
                                niedoida::io::Logger::NORMAL, "ib", int(ib));
                            niedoida::io::Log::instance().write(
                                niedoida::io::Logger::NORMAL, "ie", int(ie));

                            {
                                niedoida::io::Log::Section section(
                                    "creating local prescreening matrices");
                                make_local_matrices(ib, ie);
                            }

                            std::unique_ptr<Integrals> d2(new Integrals);

                            {
                                niedoida::io::Log::Section section(
                                    "creating d2");
                                make_d2(ib, ie, *d2);
                            }

                            {
                                niedoida::io::Log::Section section(
                                    "transforming d0 -> d2");
                                trans12(ib, ie, *d2);
                            }

                            {
                                niedoida::io::Log::Section section(
                                    "transforming d2 -> d4 and calculating "
                                    "partial correction");

                                std::vector<bool> j_bool(m_n);
                                for (std::size_t i = 0; i < m_n; ++i)
                                    j_bool[i] = false;

                                for (std::size_t i = ib; i < ie; ++i)
                                    for (std::size_t j = 0; j < m_n; ++j)
                                        if (m_eps <
                                            m_D(i, j) * m_max_D *
                                                (2 * m_A(i, j) * m_max_A +
                                                 m_max_A_row(i) *
                                                     m_max_A_row(j)))
                                            j_bool[j] = true;

                                std::vector<std::size_t> J;
                                for (std::size_t j = 0; j < m_n; ++j)
                                    if (j_bool[j]) {
                                        J.push_back(j);
                                    }

                                const std::size_t microbatch_size = 16;

                                std::size_t no_microbatches =
                                    J.size() / microbatch_size;
                                const std::size_t overhead =
                                    J.size() % microbatch_size;
                                if (overhead)
                                    no_microbatches++;

                                std::size_t first = 0;

                                for (std::size_t i = 0; i < no_microbatches;
                                     ++i) {

                                    std::size_t size;
                                    if (i == no_microbatches - 1 && overhead) {
                                        size = overhead;
                                    } else {
                                        size = microbatch_size;
                                    }

                                    std::unique_ptr<Integrals> partial_d3(
                                        new Integrals);

                                    {
                                        niedoida::io::Log::Section section(
                                            "creating partial d3");
                                        make_partial_d3(ib,
                                                        ie,
                                                        &J[first],
                                                        size,
                                                        *partial_d3);
                                    }

                                    {
                                        niedoida::io::Log::Section section(
                                            "transforming d2 -> partial d3");
                                        trans_partial_3(ib,
                                                        ie,
                                                        &J[first],
                                                        size,
                                                        *d2,
                                                        *partial_d3);
                                    }

                                    std::unique_ptr<Integrals> partial_d4(
                                        new Integrals);

                                    {
                                        niedoida::io::Log::Section section(
                                            "creating partial d4");
                                        make_partial_d4(ib,
                                                        ie,
                                                        &J[first],
                                                        size,
                                                        *partial_d4);
                                    }

                                    {
                                        niedoida::io::Log::Section section(
                                            "transforming partial d3 -> "
                                            "partial d4");
                                        trans_partial_4(ib,
                                                        ie,
                                                        &J[first],
                                                        size,
                                                        *partial_d3,
                                                        *partial_d4);
                                    }

                                    partial_d3.reset(0);

                                    Integrals_sh partial_d_sh;
                                    {
                                        niedoida::io::Log::Section section(
                                            "creating partial d_sh");
                                        make_partial_d_sh(partial_d_sh,
                                                          *partial_d4);
                                    }

                                    {
                                        niedoida::io::Log::Section section(
                                            "calculating partial energy "
                                            "contribution");
                                        partial_e2_contrib -=
                                            energy_partial_contribution(
                                                partial_d_sh, *partial_d4) *
                                            w;
                                    }

                                    first += microbatch_size;
                                } // microbatch
                            }     // d2->d4
                        }         // pass
                    }             // task
                }                 // parallel

                double e2_contrib = 0;

                boost::mpi::all_reduce(m_comm,
                                       &partial_e2_contrib,
                                       1,
                                       &e2_contrib,
                                       std::plus<double>());

                m_e2 += e2_contrib;
                niedoida::io::Log::instance().write(
                    niedoida::io::Logger::NORMAL, "partial MP2 energy", m_e2);

            } // quadrature point
        }

        void RHF_LS_LT_AO_MP2::calc_pair_ranges_2()
        {
            for (std::size_t i = 0; i < m_n; ++i)
                for (std::size_t j = 0; j <= i; ++j)
                    m_pair_max_values(i, j) = m_M[i][j][0];
        }

        void RHF_LS_LT_AO_MP2::calc_sh_pair_significant()
        {
            m_sh_pair_significant.resize(
                boost::extents[m_no_shells][m_no_shells]);
            for (std::size_t i = 0; i < m_no_shells; ++i)
                for (std::size_t j = 0; j <= i; ++j) {
                    for (std::size_t k = m_first_contraction_in_shell[i];
                         k < m_first_contraction_in_shell[i] + m_shell_sizes[i];
                         ++k) {
                        for (std::size_t l = m_first_contraction_in_shell[j];
                             l <
                             m_first_contraction_in_shell[j] + m_shell_sizes[j];
                             ++l) {
                            if (m_pair_significant[k][l]) {
                                m_sh_pair_significant[i][j] = true;
                                goto new_j;
                            }
                        }
                    }
                new_j:
                    continue;
                }
        }

        void RHF_LS_LT_AO_MP2::calc_sh_pair_centers_ranges_multipoles()
        {
            for (std::size_t I_sh = 0; I_sh < m_no_shells; ++I_sh)
                for (std::size_t J_sh = 0; J_sh < m_no_shells; ++J_sh)
                    if (m_sh_pair_significant[I_sh][J_sh]) {
                        double sum_X = 0;
                        double sum_Y = 0;
                        double sum_Z = 0;
                        int no_pairs = 0;
                        double max_range = 0;
                        double max_M_0 = 0;
                        double max_M_1 = 0;
                        double max_M_2 = 0;
                        for (std::size_t i = m_first_contraction_in_shell[I_sh];
                             i < m_first_contraction_in_shell[I_sh] +
                                     m_shell_sizes[I_sh];
                             ++i) {
                            for (std::size_t j =
                                     m_first_contraction_in_shell[J_sh];
                                 j < m_first_contraction_in_shell[J_sh] +
                                         m_shell_sizes[J_sh];
                                 ++j) {
                                if (m_pair_significant[i][j]) {
                                    no_pairs++;
                                    sum_X += m_pair_centers[i][j][0];
                                    sum_Y += m_pair_centers[i][j][1];
                                    sum_Z += m_pair_centers[i][j][2];
                                }
                            }
                        }
                        m_sh_pair_centers[I_sh][J_sh][0] = sum_X / no_pairs;
                        m_sh_pair_centers[I_sh][J_sh][1] = sum_Y / no_pairs;
                        m_sh_pair_centers[I_sh][J_sh][2] = sum_Z / no_pairs;
                        for (std::size_t i = m_first_contraction_in_shell[I_sh];
                             i < m_first_contraction_in_shell[I_sh] +
                                     m_shell_sizes[I_sh];
                             ++i) {
                            for (std::size_t j =
                                     m_first_contraction_in_shell[J_sh];
                                 j < m_first_contraction_in_shell[J_sh] +
                                         m_shell_sizes[J_sh];
                                 ++j) {
                                if (m_pair_significant[i][j]) {
                                    const double dist = std::sqrt(
                                        (m_pair_centers[i][j][0] -
                                         m_sh_pair_centers[I_sh][J_sh][0]) *
                                            (m_pair_centers[i][j][0] -
                                             m_sh_pair_centers[I_sh][J_sh][0]) +
                                        (m_pair_centers[i][j][1] -
                                         m_sh_pair_centers[I_sh][J_sh][1]) *
                                            (m_pair_centers[i][j][1] -
                                             m_sh_pair_centers[I_sh][J_sh][1]) +
                                        (m_pair_centers[i][j][2] -
                                         m_sh_pair_centers[I_sh][J_sh][2]) *
                                            (m_pair_centers[i][j][2] -
                                             m_sh_pair_centers[I_sh][J_sh][2]));
                                    const double range =
                                        m_pair_ranges(i, j) + dist;
                                    if (range > max_range)
                                        max_range = range;

                                    if (m_M[i][j][0] > max_M_0)
                                        max_M_0 = m_M[i][j][0];
                                    const double M_1 = m_M[i][j][1];
                                    if (M_1 > max_M_1)
                                        max_M_1 = M_1;
                                    const double M_2 = m_M[i][j][2];
                                    if (M_2 > max_M_2)
                                        max_M_2 = M_2;
                                }
                            }
                        }
                        m_sh_pair_ranges(I_sh, J_sh) = max_range;
                        m_M_sh[I_sh][J_sh][0] = max_M_0;
                        m_M_sh[I_sh][J_sh][1] = max_M_1;
                        m_M_sh[I_sh][J_sh][2] = max_M_2;
                    }
        }

        void RHF_LS_LT_AO_MP2::calc_pair_centers_ranges()
        {
            for (std::size_t mus = 0; mus < m_no_shells; ++mus) {
                const std::size_t muf = m_first_contraction_in_shell[mus];
                const std::size_t mue = muf + m_shell_sizes[mus] - 1;
                const niedoida::core::Atom* mu_atom = m_fbs.shells[mus].atom;
                const double X_A = mu_atom->coords[0];
                const double Y_A = mu_atom->coords[1];
                const double Z_A = mu_atom->coords[2];
                for (std::size_t mu = muf; mu <= mue; ++mu)
                    for (std::size_t nus = 0; nus < m_no_shells; ++nus) {
                        const std::size_t nuf =
                            m_first_contraction_in_shell[nus];
                        const std::size_t nue = nuf + m_shell_sizes[nus] - 1;
                        const niedoida::core::Atom* nu_atom =
                            m_fbs.shells[nus].atom;
                        const double X_B = nu_atom->coords[0];
                        const double Y_B = nu_atom->coords[1];
                        const double Z_B = nu_atom->coords[2];
                        for (std::size_t nu = nuf; nu <= nue; ++nu)
                            if (mu_atom == nu_atom) {
                                for (std::size_t k = 0; k < 3; ++k)
                                    m_pair_centers[mu][nu][k] =
                                        mu_atom->coords[k];
                                m_pair_ranges(mu, nu) =
                                    std::max(m_ranges(mu), m_ranges(nu));
                            } else {
                                const double R_AB =
                                    std::sqrt((X_A - X_B) * (X_A - X_B) +
                                              (Y_A - Y_B) * (Y_A - Y_B) +
                                              (Z_A - Z_B) * (Z_A - Z_B));

                                if (R_AB > m_ranges(mu) + m_ranges(nu)) {
                                    m_pair_centers[mu][nu][0] = (X_A + X_B) / 2;
                                    m_pair_centers[mu][nu][1] = (Y_A + Y_B) / 2;
                                    m_pair_centers[mu][nu][2] = (Z_A + Z_B) / 2;
                                    m_pair_ranges(mu, nu) = 0;
                                    m_pair_significant[mu][nu] = false;
                                } else {
                                    if (m_ranges(mu) >= m_ranges(nu) + R_AB) {
                                        m_pair_centers[mu][nu][0] = X_A;
                                        m_pair_centers[mu][nu][1] = Y_A;
                                        m_pair_centers[mu][nu][2] = Z_A;
                                        m_pair_ranges(mu, nu) = m_ranges(mu);
                                    } else if (m_ranges(nu) >=
                                               m_ranges(mu) + R_AB) {
                                        m_pair_centers[mu][nu][0] = X_B;
                                        m_pair_centers[mu][nu][1] = Y_B;
                                        m_pair_centers[mu][nu][2] = Z_B;
                                        m_pair_ranges(mu, nu) = m_ranges(nu);
                                    } else {
                                        m_pair_centers[mu][nu][0] =
                                            (X_B - X_A) * 0.5 *
                                                (R_AB + m_ranges(nu) -
                                                 m_ranges(mu)) /
                                                R_AB +
                                            X_A;
                                        m_pair_centers[mu][nu][1] =
                                            (Y_B - Y_A) * 0.5 *
                                                (R_AB + m_ranges(nu) -
                                                 m_ranges(mu)) /
                                                R_AB +
                                            Y_A;
                                        m_pair_centers[mu][nu][2] =
                                            (Z_B - Z_A) * 0.5 *
                                                (R_AB + m_ranges(nu) -
                                                 m_ranges(mu)) /
                                                R_AB +
                                            Z_A;
                                        m_pair_ranges(mu, nu) =
                                            0.5 * (m_ranges(nu) + m_ranges(mu) +
                                                   R_AB);
                                    }
                                }
                            }
                    }
            }
        }

        void RHF_LS_LT_AO_MP2::calc_pair_multipoles()
        {
            for (std::size_t I = 0; I < m_no_shells; ++I) {
                const niedoida::gto::OS1Implementation::FlatBasisSet::Shell&
                    SI = m_fbs.shells[I];
                const niedoida::core::Atom* mu_atom = SI.atom;
                const double X_A = mu_atom->coords[0];
                const double Y_A = mu_atom->coords[1];
                const double Z_A = mu_atom->coords[2];
                for (std::size_t J = 0; J < m_no_shells; ++J) {
                    const niedoida::gto::OS1Implementation::FlatBasisSet::Shell&
                        SJ = m_fbs.shells[J];
                    const niedoida::core::Atom* nu_atom = SJ.atom;
                    const double X_B = nu_atom->coords[0];
                    const double Y_B = nu_atom->coords[1];
                    const double Z_B = nu_atom->coords[2];
                    const double R_AB_2 = (X_A - X_B) * (X_A - X_B) +
                                          (Y_A - Y_B) * (Y_A - Y_B) +
                                          (Z_A - Z_B) * (Z_A - Z_B);
                    boost::multi_array<double, 7> pm;
                    pm.resize(boost::extents[3][SI.l_max + 1][SJ.l_max + 1]
                                            [2 * SI.l_max + 1][2 * SJ.l_max + 1]
                                            [SI.primitive_exps.size()]
                                            [SJ.primitive_exps.size()]);

                    arma::mat RP[3] = {
                        arma::zeros<arma::mat>(SI.primitive_exps.size(),
                                               SJ.primitive_exps.size()),
                        arma::zeros<arma::mat>(SI.primitive_exps.size(),
                                               SJ.primitive_exps.size()),
                        arma::zeros<arma::mat>(SI.primitive_exps.size(),
                                               SJ.primitive_exps.size())};

                    for (std::size_t LI = SI.l_min; LI <= SI.l_max; ++LI)
                        for (std::size_t MI = 0; MI < 2 * LI + 1; ++MI)
                            for (std::size_t LJ = SJ.l_min; LJ <= SJ.l_max;
                                 ++LJ)
                                for (std::size_t MJ = 0; MJ < 2 * LJ + 1; ++MJ)
                                    for (std::size_t prim_i = 0;
                                         prim_i < SI.primitive_exps.size();
                                         ++prim_i)
                                        for (std::size_t prim_j = 0;
                                             prim_j < SJ.primitive_exps.size();
                                             ++prim_j) {
                                            const double alpha =
                                                SI.primitive_exps(prim_i);
                                            const double beta =
                                                SJ.primitive_exps(prim_j);
                                            const double p = alpha + beta;
                                            const double mi = alpha * beta / p;
                                            const double K =
                                                std::exp(-mi * R_AB_2);
                                            const double X_P =
                                                (alpha * X_A + beta * X_B) / p;
                                            const double Y_P =
                                                (alpha * Y_A + beta * Y_B) / p;
                                            const double Z_P =
                                                (alpha * Z_A + beta * Z_B) / p;
                                            RP[0](prim_i, prim_j) = X_P;
                                            RP[1](prim_i, prim_j) = Y_P;
                                            RP[2](prim_i, prim_j) = Z_P;
                                            const double R_PA = std::sqrt(
                                                (X_A - X_P) * (X_A - X_P) +
                                                (Y_A - Y_P) * (Y_A - Y_P) +
                                                (Z_A - Z_P) * (Z_A - Z_P));
                                            const double R_PB = std::sqrt(
                                                (X_B - X_P) * (X_B - X_P) +
                                                (Y_B - Y_P) * (Y_B - Y_P) +
                                                (Z_B - Z_P) * (Z_B - Z_P));
                                            for (std::size_t n = 0; n < 3;
                                                 ++n) {
                                                if (LI == 0 && LJ == 1) {
                                                    if (MJ == 0)
                                                        pm[n][LI][LJ][MI][MJ]
                                                          [prim_i][prim_j] =
                                                              calc_sp(n,
                                                                      p,
                                                                      K,
                                                                      std::abs(
                                                                          X_P -
                                                                          X_B));
                                                    if (MJ == 1)
                                                        pm[n][LI][LJ][MI][MJ]
                                                          [prim_i][prim_j] =
                                                              calc_sp(n,
                                                                      p,
                                                                      K,
                                                                      std::abs(
                                                                          Y_P -
                                                                          Y_B));
                                                    if (MJ == 2)
                                                        pm[n][LI][LJ][MI][MJ]
                                                          [prim_i][prim_j] =
                                                              calc_sp(n,
                                                                      p,
                                                                      K,
                                                                      std::abs(
                                                                          Z_P -
                                                                          Z_B));
                                                } else if (LI == 1 && LJ == 0) {
                                                    if (MI == 0)
                                                        pm[n][LI][LJ][MI][MJ]
                                                          [prim_i][prim_j] =
                                                              calc_sp(n,
                                                                      p,
                                                                      K,
                                                                      std::abs(
                                                                          X_P -
                                                                          X_A));
                                                    if (MI == 1)
                                                        pm[n][LI][LJ][MI][MJ]
                                                          [prim_i][prim_j] =
                                                              calc_sp(n,
                                                                      p,
                                                                      K,
                                                                      std::abs(
                                                                          Y_P -
                                                                          Y_A));
                                                    if (MI == 2)
                                                        pm[n][LI][LJ][MI][MJ]
                                                          [prim_i][prim_j] =
                                                              calc_sp(n,
                                                                      p,
                                                                      K,
                                                                      std::abs(
                                                                          Z_P -
                                                                          Z_A));
                                                } else if (LI == 1 && LJ == 1) {
                                                    if (MI == 0 && MJ == 0)
                                                        pm[n][LI][LJ][MI][MJ]
                                                          [prim_i][prim_j] =
                                                              calc_pp_diag(
                                                                  n,
                                                                  p,
                                                                  K,
                                                                  std::abs(X_P -
                                                                           X_A),
                                                                  std::abs(
                                                                      X_P -
                                                                      X_B));
                                                    if (MI == 1 && MJ == 1)
                                                        pm[n][LI][LJ][MI][MJ]
                                                          [prim_i][prim_j] =
                                                              calc_pp_diag(
                                                                  n,
                                                                  p,
                                                                  K,
                                                                  std::abs(Y_P -
                                                                           Y_A),
                                                                  std::abs(
                                                                      Y_P -
                                                                      Y_B));
                                                    if (MI == 2 && MJ == 2)
                                                        pm[n][LI][LJ][MI][MJ]
                                                          [prim_i][prim_j] =
                                                              calc_pp_diag(
                                                                  n,
                                                                  p,
                                                                  K,
                                                                  std::abs(Z_P -
                                                                           Z_A),
                                                                  std::abs(
                                                                      Z_P -
                                                                      Z_B));
                                                    if (MI == 0 && MJ == 1)
                                                        pm[n][LI][LJ][MI][MJ]
                                                          [prim_i][prim_j] =
                                                              calc_pp_nondiag(
                                                                  n,
                                                                  p,
                                                                  K,
                                                                  std::abs(X_P -
                                                                           X_A),
                                                                  std::abs(
                                                                      Y_P -
                                                                      Y_B));
                                                    if (MI == 0 && MJ == 2)
                                                        pm[n][LI][LJ][MI][MJ]
                                                          [prim_i][prim_j] =
                                                              calc_pp_nondiag(
                                                                  n,
                                                                  p,
                                                                  K,
                                                                  std::abs(X_P -
                                                                           X_A),
                                                                  std::abs(
                                                                      Z_P -
                                                                      Z_B));
                                                    if (MI == 1 && MJ == 0)
                                                        pm[n][LI][LJ][MI][MJ]
                                                          [prim_i][prim_j] =
                                                              calc_pp_nondiag(
                                                                  n,
                                                                  p,
                                                                  K,
                                                                  std::abs(Y_P -
                                                                           Y_A),
                                                                  std::abs(
                                                                      X_P -
                                                                      X_B));
                                                    if (MI == 1 && MJ == 2)
                                                        pm[n][LI][LJ][MI][MJ]
                                                          [prim_i][prim_j] =
                                                              calc_pp_nondiag(
                                                                  n,
                                                                  p,
                                                                  K,
                                                                  std::abs(Y_P -
                                                                           Y_A),
                                                                  std::abs(
                                                                      Z_P -
                                                                      Z_B));
                                                    if (MI == 2 && MJ == 1)
                                                        pm[n][LI][LJ][MI][MJ]
                                                          [prim_i][prim_j] =
                                                              calc_pp_nondiag(
                                                                  n,
                                                                  p,
                                                                  K,
                                                                  std::abs(Z_P -
                                                                           Z_A),
                                                                  std::abs(
                                                                      Y_P -
                                                                      Y_B));
                                                    if (MI == 2 && MJ == 0)
                                                        pm[n][LI][LJ][MI][MJ]
                                                          [prim_i][prim_j] =
                                                              calc_pp_nondiag(
                                                                  n,
                                                                  p,
                                                                  K,
                                                                  std::abs(Z_P -
                                                                           Z_A),
                                                                  std::abs(
                                                                      X_P -
                                                                      X_B));
                                                } else {
                                                    pm[n][LI][LJ][MI][MJ]
                                                      [prim_i][prim_j] =
                                                          integrate_exponents(
                                                              R_PA,
                                                              LI,
                                                              R_PB,
                                                              LJ,
                                                              n,
                                                              p,
                                                              K);
                                                }
                                            }
                                        }
                    std::size_t i_func = SI.contraction_starting_number;
                    for (std::size_t contr_i = 0; contr_i < SI.l.size();
                         contr_i++) {
                        for (std::size_t MI = 0; MI < 2 * SI.l[contr_i] + 1;
                             MI++) {
                            std::size_t j_func = SJ.contraction_starting_number;
                            for (std::size_t contr_j = 0; contr_j < SJ.l.size();
                                 contr_j++) {
                                for (std::size_t MJ = 0;
                                     MJ < 2 * SJ.l[contr_j] + 1;
                                     MJ++) {
                                    const std::size_t LI = SI.l[contr_i];
                                    const std::size_t LJ = SJ.l[contr_j];
                                    double m0 = 0;
                                    double m1 = 0;
                                    double m2 = 0;

                                    for (std::size_t prim_i = 0;
                                         prim_i < SI.primitive_exps.size();
                                         ++prim_i)
                                        for (std::size_t prim_j = 0;
                                             prim_j < SJ.primitive_exps.size();
                                             ++prim_j) {
                                            m0 +=
                                                pm[0][LI][LJ][MI][MJ][prim_i]
                                                  [prim_j] *
                                                SI.prenormed_contraction_coeffs(
                                                    contr_i, prim_i) *
                                                SJ.prenormed_contraction_coeffs(
                                                    contr_j, prim_j);

                                            m1 +=
                                                pm[1][LI][LJ][MI][MJ][prim_i]
                                                  [prim_j] *
                                                SI.prenormed_contraction_coeffs(
                                                    contr_i, prim_i) *
                                                SJ.prenormed_contraction_coeffs(
                                                    contr_j, prim_j);
                                            m2 +=
                                                pm[2][LI][LJ][MI][MJ][prim_i]
                                                  [prim_j] *
                                                SI.prenormed_contraction_coeffs(
                                                    contr_i, prim_i) *
                                                SJ.prenormed_contraction_coeffs(
                                                    contr_j, prim_j);
                                        }

                                    m_M[i_func + MI][j_func + MJ][0] = m0;
                                    m_M[i_func + MI][j_func + MJ][1] = m1;
                                    m_M[i_func + MI][j_func + MJ][2] = m2;
                                }
                                j_func += 2 * SJ.l[contr_j] + 1;
                            }
                        }
                        i_func += 2 * SI.l[contr_i] + 1;
                    }
                }
            }
        }

        void RHF_LS_LT_AO_MP2::calc_t_pair_ranges_multipoles(
            const double domain_cutoff)
        {
            const double* mpc0 = m_pair_centers.origin();
            const double max_pair = std::max(std::max(m_max_A, m_max_B),
                                             std::max(m_max_C, m_max_D));

            for (std::size_t k = 0; k < 3; k++)
                for (std::size_t i = 0; i < m_n; i++)
                    for (std::size_t j = 0; j < m_n; j++) {
                        double sum = 0;
                        for (std::size_t alpha = 0; alpha < m_n; alpha++)
                            sum += std::abs(m_X(i, alpha)) * m_M[alpha][j][k];
                        m_M_d[i][j][k] = sum;
                    }

            for (std::size_t k = 0; k < 3; k++)
                for (std::size_t i = 0; i < m_n; i++)
                    for (std::size_t j = 0; j < m_n; j++) {
                        double sum = 0;
                        for (std::size_t alpha = 0; alpha < m_n; alpha++)
                            sum += std::abs(m_Y(j, alpha)) * m_M[i][alpha][k];
                        m_M_u[i][j][k] = sum;
                    }

            for (std::size_t k = 0; k < 3; k++)
                for (std::size_t i = 0; i < m_n; i++)
                    for (std::size_t j = 0; j < m_n; j++) {
                        double sum = 0;
                        for (std::size_t alpha = 0; alpha < m_n; alpha++)
                            sum += std::abs(m_X(i, alpha)) * m_M_u[alpha][j][k];
                        m_M_t[i][j][k] = sum;
                    }

            for (std::size_t i = 0; i < m_n; i++)
                for (std::size_t j = 0; j < m_n; j++) {
                    if (m_eps > m_D(i, j) * max_pair)
                        continue;
                    double max_range = 0;
                    const double* mpcij = mpc0 + 3 * m_n * i + 3 * j;
                    for (std::size_t alpha = 0; alpha < m_n; alpha++)
                        for (std::size_t beta = 0; beta < m_n; beta++)
                            if (m_pair_significant[alpha][beta]) {
                                const double XY =
                                    std::abs(m_X(i, alpha) * m_Y(j, beta));
                                if (XY * m_pair_max_values(alpha, beta) >
                                    domain_cutoff) {
                                    m_t_pair_significant(i, j) = true;
                                    const double* mpcab =
                                        mpc0 + 3 * m_n * alpha + 3 * beta;
                                    const double dist_x = *mpcij - *mpcab;
                                    const double dist_y =
                                        *(mpcij + 1) - *(mpcab + 1);
                                    const double dist_z =
                                        *(mpcij + 2) - *(mpcab + 2);
                                    const double dist = std::sqrt(
                                        dist_x * dist_x + dist_y * dist_y +
                                        dist_z * dist_z);
                                    const double range =
                                        dist + m_pair_ranges(alpha, beta);
                                    if (range > max_range)
                                        max_range = range;
                                }
                            }
                    m_t_pair_ranges(i, j) = max_range;
                }
        }

        void RHF_LS_LT_AO_MP2::calc_d_pair_ranges_multipoles(
            const double domain_cutoff)
        {
            const double max_pair = std::max(std::max(m_max_A, m_max_B),
                                             std::max(m_max_C, m_max_D));
            for (std::size_t i = 0; i < m_n; i++)
                for (std::size_t j = 0; j < m_n; j++) {
                    if (m_eps > m_B(i, j) * max_pair)
                        continue;
                    double max_range = 0;
                    const double* mpcij = &m_pair_centers[i][j][0];
                    for (std::size_t alpha = 0; alpha < m_n; alpha++)
                        if (m_pair_significant[alpha][j]) {
                            const double X = std::abs(m_X(i, alpha));
                            if (X * m_pair_max_values(alpha, j) >
                                domain_cutoff) {
                                m_d_pair_significant(i, j) = true;
                                const double* mpcab =
                                    &m_pair_centers[alpha][j][0];
                                const double dist = std::sqrt(
                                    (*mpcij - *mpcab) * (*mpcij - *mpcab) +
                                    (*(mpcij + 1) - *(mpcab + 1)) *
                                        (*(mpcij + 1) - *(mpcab + 1)) +
                                    (*(mpcij + 2) - *(mpcab + 2)) *
                                        (*(mpcij + 2) - *(mpcab + 2)));
                                const double range =
                                    dist + m_pair_ranges(alpha, j);
                                if (range > max_range)
                                    max_range = range;
                            }
                        }
                    m_d_pair_ranges(i, j) = max_range;
                }
        }

        void RHF_LS_LT_AO_MP2::calc_u_pair_ranges_multipoles(
            const double domain_cutoff)
        {
            const double max_pair = std::max(std::max(m_max_A, m_max_B),
                                             std::max(m_max_C, m_max_D));
            for (std::size_t i = 0; i < m_n; i++)
                for (std::size_t j = 0; j < m_n; j++) {
                    if (m_eps > m_C(i, j) * max_pair)
                        continue;
                    double max_range = 0;
                    const double* mpcij = &m_pair_centers[i][j][0];
                    for (std::size_t beta = 0; beta < m_n; beta++)
                        if (m_pair_significant[i][beta]) {
                            const double Y = std::abs(m_Y(j, beta));
                            if (Y * m_pair_max_values(j, beta) >
                                domain_cutoff) {
                                m_u_pair_significant(i, j) = true;
                                const double* mpcab =
                                    &m_pair_centers[j][beta][0];
                                const double dist = std::sqrt(
                                    (*mpcij - *mpcab) * (*mpcij - *mpcab) +
                                    (*(mpcij + 1) - *(mpcab + 1)) *
                                        (*(mpcij + 1) - *(mpcab + 1)) +
                                    (*(mpcij + 2) - *(mpcab + 2)) *
                                        (*(mpcij + 2) - *(mpcab + 2)));
                                const double range =
                                    dist + m_pair_ranges(j, beta);
                                if (range > max_range)
                                    max_range = range;
                            }
                        }
                    m_u_pair_ranges(i, j) = max_range;
                }
        }

        double RHF_LS_LT_AO_MP2::calc_range(const int l,
                                            const double cutoff,
                                            const double* c,
                                            const double* alpha,
                                            const std::size_t n)
        {
            double R = 0;

            for (;;) {
                double sum = 0;
                for (std::size_t i = 0; i < n; i++)
                    sum += c[i] * std::exp(-alpha[i] * R * R);
                if (std::abs(sum) < cutoff)
                    break;
                else
                    R += 0.1;
            }

            for (;;) {
                double sum = 0;
                for (std::size_t i = 0; i < n; i++)
                    sum += c[i] * std::exp(-alpha[i] * R * R);
                sum *= std::pow(R, l);
                if (std::abs(sum) < cutoff)
                    break;
                else
                    R += 0.1;
            }

            return R;
        }

        void RHF_LS_LT_AO_MP2::calc_ranges(const double cutoff)
        {
            for (std::size_t mus = 0; mus < m_fbs.shells.size(); ++mus) {
                const niedoida::gto::OS1Implementation::FlatBasisSet::Shell&
                    es = m_fbs.shells[mus];
                std::size_t function_number = es.contraction_starting_number;
                for (std::size_t il = 0; il < es.l.size(); ++il) {
                    const int l_i = es.l[il];
                    const double range =
                        calc_range(l_i,
                                   cutoff,
                                   &(es.prenormed_contraction_coeffs(il, 0)),
                                   &(es.primitive_exps(0)),
                                   es.primitive_exps.size());
                    for (int j = 0; j < 2 * l_i + 1; ++j)
                        m_ranges(function_number++) = range;
                }
            }
        }

        unsigned long long RHF_LS_LT_AO_MP2::subd2_size(std::size_t ib,
                                                        std::size_t ie)
        {
            unsigned long long s = 0;

            const double* pc0 = m_pair_centers.origin();
            const double* pm0 = m_M.origin();
            const double* pmt0 = m_M_t.origin();

            arma::mat AD2(ie - ib, m_n);
            for (std::size_t i = ib; i < ie; ++i)
                for (std::size_t j = 0; j < m_n; ++j)
                    AD2(i - ib, j) = 2 * m_A(i, j) * m_D(i, j);

            arma::vec maxAD2(ie - ib);
            for (std::size_t i = ib; i < ie; ++i)
                maxAD2(i - ib) = 2 * m_max_A_row(i) * m_max_D_row(i);

            {
                std::unique_ptr<niedoida::misc::Dispatcher> d =
                    niedoida::misc::dispatcher(m_comm, m_n);

                while (niedoida::misc::Dispatcher::TaskInfo task_info =
                           d->get_task()) {

                    for (std::size_t l = task_info->first;
                         l < task_info->second;
                         ++l) {

                        std::size_t l2size = 0;

                        for (std::size_t k = 0; k <= l; ++k) {
                            if (!m_pair_significant[k][l] &&
                                !m_pair_significant[l][k])
                                continue;
                            const double pr0 =
                                m_max_D * m_A(k, l) *
                                std::max(2 * m_max_A * m_D(k, l) +
                                             m_max_C_col(l) * m_max_B_row(k),
                                         2 * m_max_A * m_D(l, k) +
                                             m_max_C_col(k) * m_max_B_row(l));
                            if (m_eps < pr0)
                                m_indices_buf2[l2size++] = k;
                        }

                        if (!l2size)
                            continue;

                        s += 3 * sizeof(void*&) +
                             l2size * (sizeof(std::size_t) +
                                       sizeof(Integrals::Level3*));

                        for (std::size_t ki = 0; ki < l2size; ++ki) {
                            const std::size_t k = m_indices_buf2[ki];

                            const double Akl = m_A(k, l);
                            const double AklDlk = Akl * m_D(l, k);
                            const double AklDkl = Akl * m_D(k, l);
                            const double maxBkAkl = m_max_B_row(k) * Akl;
                            const double maxBlAkl = m_max_B_row(l) * Akl;
                            const double* maxAD2ip = &maxAD2(0);
                            const double* maxDip = &m_max_D_row(ib);

                            std::size_t l3size = 0;
                            for (std::size_t i = ib; i < ie; ++i) {
                                const double maxAD2i = *maxAD2ip++;
                                const double maxDi = *maxDip++;
                                if (m_eps <
                                    std::max(maxAD2i * AklDkl +
                                                 maxBkAkl * maxDi * m_C(i, l),
                                             maxAD2i * AklDlk +
                                                 maxBlAkl * maxDi * m_C(i, k)))
                                    m_indices_buf3[l3size++] = i;
                            }

                            if (!l3size) {
                                continue;
                            }

                            s += 3 * sizeof(void*) +
                                 l3size * (sizeof(std::size_t) +
                                           sizeof(Integrals::Level4*));

                            for (std::size_t ii = 0; ii < l3size; ++ii) {
                                const std::size_t i = m_indices_buf3[ii];

                                std::size_t l4size = 0;
                                const double Cil = m_C(i, l);
                                const double Cik = m_C(i, k);
                                const double AklCil = Akl * Cil;
                                const double AklCik = Akl * Cik;

                                for (std::size_t j = 0; j < m_n; ++j) {
                                    if (!m_t_pair_significant(i, j))
                                        continue;

                                    const double AD2ij = AD2(i - ib, j);
                                    const double Dij = m_D(i, j);

                                    const double D_ijkl = m_D(i, j) * m_A(k, l);
                                    const double A_ijkl_1 =
                                        m_A(i, j) * m_D(k, l);
                                    const double A_ijkl_2 =
                                        m_A(i, j) * m_D(l, k);

                                    const double exch_ijkl_1 =
                                        Dij * AklCil * m_B(k, j);
                                    const double coul_ijkl_1 = AD2ij * AklDkl;
                                    const double exch_ijkl_2 =
                                        Dij * AklCik * m_B(l, j);
                                    const double coul_ijkl_2 = AD2ij * AklDlk;

                                    if (m_eps >=
                                        std::max(coul_ijkl_1 + exch_ijkl_1,
                                                 coul_ijkl_2 + exch_ijkl_2)) {
                                        continue;
                                    } else if (m_eps < std::max(exch_ijkl_1,
                                                                exch_ijkl_2)) {
                                        l4size++;
                                    } else if (!m_pair_significant[i][j] ||
                                               (!m_t_pair_significant(k, l) &&
                                                !m_t_pair_significant(l, k))) {
                                        continue;
                                    } else {
                                        double est_tr = D_ijkl;
                                        double est_coul_1 = A_ijkl_1;
                                        double est_coul_2 = A_ijkl_2;

                                        const double* pc_ij =
                                            pc0 + 3 * i * m_n + 3 * j;
                                        const double* pc_kl =
                                            pc0 + 3 * k * m_n + 3 * l;
                                        const double R = std::sqrt(
                                            (*pc_ij - *pc_kl) *
                                                (*pc_ij - *pc_kl) +
                                            (*(pc_ij + 1) - *(pc_kl + 1)) *
                                                (*(pc_ij + 1) - *(pc_kl + 1)) +
                                            (*(pc_ij + 2) - *(pc_kl + 2)) *
                                                (*(pc_ij + 2) - *(pc_kl + 2)));
                                        const double R_prim =
                                            R - m_t_pair_ranges(i, j) -
                                            m_pair_ranges(k, l);

                                        if (R_prim > 1)
                                            est_tr = std::min(
                                                D_ijkl,
                                                std::sqrt(3.0) *
                                                    *(pmt0 + 3 * i * m_n +
                                                      3 * j + 1) *
                                                    *(pm0 + 3 * k * m_n +
                                                      3 * l) /
                                                    (R_prim * R_prim - R_prim));

                                        const double R_prim_1 =
                                            R - m_pair_ranges(i, j) -
                                            m_t_pair_ranges(k, l);
                                        const double* pm_ij =
                                            pm0 + 3 * i * m_n + 3 * j;
                                        const double* pmt_kl =
                                            pmt0 + 3 * k * m_n + 3 * l;

                                        if (R_prim_1 > 1)
                                            est_coul_1 = std::min(
                                                A_ijkl_1,
                                                std::sqrt(3.0) * *pm_ij *
                                                    *(pmt_kl + 1) /
                                                    (R_prim_1 * R_prim_1 -
                                                     R_prim_1));

                                        const double R_prim_2 =
                                            R - m_pair_ranges(i, j) -
                                            m_t_pair_ranges(l, k);
                                        const double* pmt_lk =
                                            pmt0 + 3 * l * m_n + 3 * k;

                                        if (R_prim_2 > 1)
                                            est_coul_2 = std::min(
                                                A_ijkl_2,
                                                std::sqrt(3.0) * *pm_ij *
                                                    *(pmt_lk + 1) /
                                                    (R_prim_2 * R_prim_2 -
                                                     R_prim_2));

                                        if (m_eps <
                                            std::max(2 * est_tr * est_coul_1 +
                                                         exch_ijkl_1,
                                                     2 * est_tr * est_coul_2 +
                                                         exch_ijkl_2))
                                            l4size++;
                                    }
                                }
                                if (l4size)
                                    s += sizeof(std::size_t) +
                                         sizeof(std::size_t*) +
                                         sizeof(double*) +
                                         l4size * (sizeof(std::size_t) +
                                                   sizeof(double));
                            }
                        }
                    }
                }
            }

            double t;

            double ss = s;

            boost::mpi::all_reduce(m_comm, &ss, 1, &t, std::plus<double>());

            return (unsigned long long)t;
        }

        void
        RHF_LS_LT_AO_MP2::trans12(std::size_t ib, std::size_t ie, Integrals& d2)
        {
            unsigned long long counter_shells = 0;

            m_requests.clear();
            double* buf_ptr = m_buf.data();

            std::vector<double> max_Y(m_n);
            for (std::size_t i = 0; i < m_n; ++i) {
                double Y_max = 0;
                for (std::size_t j = 0; j < m_n; ++j)
                    if (std::abs(m_Y(i, j)) > Y_max)
                        Y_max = std::abs(m_Y(i, j));
                max_Y[i] = Y_max;
            }

            arma::mat BC2(ie - ib, m_n);
            for (std::size_t i = ib; i < ie; ++i)
                for (std::size_t j = 0; j < m_n; ++j)
                    BC2(i - ib, j) = 2 * m_B(i, j) * m_C(i, j);

            const niedoida::core::ShellPairIndexGenerator a_begin(m_no_shells);
            const niedoida::core::ShellPairIndexGenerator a_end =
                a_begin.make_end();

            for (niedoida::core::ShellPairIndexGenerator a = a_begin;
                 a != a_end;
                 ++a) {
                const std::size_t r = (*a)[0];
                const std::size_t s = (*a)[1];

                if (!m_sh_pair_significant[r][s])
                    continue;

                if (m_eps >=
                    m_A_sh(r, s) * m_max_A *
                        std::max(2 * m_max_D * m_D_sh(r, s) +
                                     m_max_D_col_local(s) * m_max_D_row(r),
                                 2 * m_max_D * m_D_sh(s, r) +
                                     m_max_D_col_local(r) * m_max_D_row(s)))
                    continue;

                const std::size_t rs = m_shell_sizes[r];
                const std::size_t ss = m_shell_sizes[s];
                const std::size_t rf = m_first_contraction_in_shell[r];
                const std::size_t sf = m_first_contraction_in_shell[s];

                std::vector<Integrals::Level4*> partial_d1(rs * ss * m_n);

                bool rs_significant = false;

                for (std::size_t ll = 0; ll < ss; ++ll)
                    for (std::size_t kk = 0; kk < rs && kk + rf <= ll + sf;
                         ++kk) {
                        const std::size_t l = ll + sf;
                        const std::size_t k = kk + rf;

                        const double AklDkl = m_A(k, l) * m_D(k, l);
                        const double AklDlk = m_A(k, l) * m_D(l, k);

                        for (std::size_t j = 0; j < m_n; ++j) {

                            const double AklDkj = m_A(k, l) * m_D(k, j);
                            const double AklDlj = m_A(k, l) * m_D(l, j);

                            std::size_t l4size = 0;
                            for (std::size_t i = ib; i < ie; ++i) {

                                const double BC2ij = BC2(i - ib, j);
                                const double Bij = m_B(i, j);

                                if (m_eps <
                                    std::max(BC2ij * AklDkl +
                                                 m_C(i, l) * AklDkj * Bij,
                                             BC2ij * AklDlk +
                                                 m_C(i, k) * AklDlj * Bij))
                                    m_indices_buf4[l4size++] = i;
                            }

                            if (l4size) {
                                rs_significant = true;
                                Integrals::Level4* l4 =
                                    new Integrals::Level4(l4size);
                                partial_d1[ll * rs * m_n + kk * m_n + j] = l4;
                                std::memcpy(l4->indices,
                                            m_indices_buf4.get(),
                                            l4size * sizeof(std::size_t));
                            }
                        }
                    }

                if (!rs_significant)
                    continue;

                const niedoida::core::ShellPairIndexGenerator b_begin(
                    m_no_shells);
                const niedoida::core::ShellPairIndexGenerator b_end =
                    b_begin.make_end();

                for (niedoida::core::ShellPairIndexGenerator b = b_begin;
                     b != b_end;
                     ++b) {
                    const std::size_t p = (*b)[0];
                    const std::size_t q = (*b)[1];

                    const double max_XY_sh =
                        std::max(m_X_local_sh(p) * m_max_Y_sh(q),
                                 m_X_local_sh(q) * m_max_Y_sh(p));

                    if (m_sh_pair_significant[p][q] &&
                        m_eps < max_XY_sh * m_A_sh(p, q) * m_A_sh(r, s)) {

                        const double D_s1 =
                            std::max(2 * m_D_sh_local(p, q) * m_D_sh(r, s) +
                                         m_D_sh_local(p, s) * m_D_sh(r, q),
                                     2 * m_D_sh_local(p, q) * m_D_sh(s, r) +
                                         m_D_sh_local(p, r) * m_D_sh(s, q));

                        const double D_s2 =
                            std::max(2 * m_D_sh_local(q, p) * m_D_sh(r, s) +
                                         m_D_sh_local(q, s) * m_D_sh(r, p),
                                     2 * m_D_sh_local(q, p) * m_D_sh(s, r) +
                                         m_D_sh_local(q, r) * m_D_sh(s, p));

                        const double D_s = std::max(D_s1, D_s2);

                        niedoida::core::ShellQuartetIndex sqi = {
                            {static_cast<unsigned>(p),
                             static_cast<unsigned>(q),
                             static_cast<unsigned>(r),
                             static_cast<unsigned>(s)}};

                        double estimator = m_schwartz.max_integral(sqi);
                        const double R =
                            std::sqrt((m_sh_pair_centers[p][q][0] -
                                       m_sh_pair_centers[r][s][0]) *
                                          (m_sh_pair_centers[p][q][0] -
                                           m_sh_pair_centers[r][s][0]) +
                                      (m_sh_pair_centers[p][q][1] -
                                       m_sh_pair_centers[r][s][1]) *
                                          (m_sh_pair_centers[p][q][1] -
                                           m_sh_pair_centers[r][s][1]) +
                                      (m_sh_pair_centers[p][q][2] -
                                       m_sh_pair_centers[r][s][2]) *
                                          (m_sh_pair_centers[p][q][2] -
                                           m_sh_pair_centers[r][s][2]));
                        const double R_prim =
                            R - m_sh_pair_ranges(p, q) - m_sh_pair_ranges(r, s);
                        if (R_prim > 1) {
                            const double mult_est = m_M_sh[p][q][0] *
                                                    m_M_sh[r][s][0] /
                                                    (R_prim - 1);
                            if (mult_est < estimator)
                                estimator = mult_est;
                        }

                        if (estimator * D_s >= m_eps) {
                            const niedoida::core::Request request = {
                                sqi, false, buf_ptr};
                            m_requests.push_back(request);
                            counter_shells++;

                            buf_ptr +=
                                m_shell_sizes[sqi[0]] * m_shell_sizes[sqi[1]] *
                                m_shell_sizes[sqi[2]] * m_shell_sizes[sqi[3]];
                        }
                    }

                    const std::size_t no_requests = m_requests.size();
                    if (no_requests == m_max_no_requests ||
                        boost::next(b) == b_end) {
                        m_2ei->calc(m_requests);

                        for (std::size_t j = 0; j < no_requests; ++j) {

                            const niedoida::core::Request& req = m_requests[j];

                            double* result = req.results;

                            const std::size_t p = req.shells[0];
                            const std::size_t q = req.shells[1];

                            const std::size_t ps = m_shell_sizes[p];
                            const std::size_t qs = m_shell_sizes[q];

                            const std::size_t pf =
                                m_first_contraction_in_shell[p];
                            const std::size_t qf =
                                m_first_contraction_in_shell[q];

                            for (std::size_t l = sf; l < sf + ss; ++l)
                                for (std::size_t k = rf;
                                     k < std::min(l + 1, rf + rs);
                                     ++k)
                                    for (std::size_t j = qf; j < qf + qs; ++j)
                                        for (std::size_t i = pf;
                                             i < std::min(j + 1, pf + ps);
                                             ++i) {
                                            const double g =
                                                *(result +
                                                  ((((i - pf) * qs + (j - qf)) *
                                                        rs +
                                                    (k - rf)) *
                                                   ss) +
                                                  (l - sf));

                                            const double ag = std::abs(g);

                                            if (m_eps < ag * m_X_local(i)) {
                                                Integrals::Level4* l4 =
                                                    partial_d1[(l - sf) * rs *
                                                                   m_n +
                                                               (k - rf) * m_n +
                                                               j];
                                                if (l4) {
                                                    const std::size_t l4size =
                                                        l4->size;
                                                    for (std::size_t gamma_j =
                                                             0;
                                                         gamma_j < l4size;
                                                         ++gamma_j) {
                                                        const std::size_t
                                                            gamma =
                                                                l4->indices
                                                                    [gamma_j];
                                                        l4->values[gamma_j] +=
                                                            g * m_X(i, gamma);
                                                    }
                                                }
                                            }

                                            if (i != j &&
                                                m_eps < ag * m_X_local(j)) {
                                                Integrals::Level4* l4 =
                                                    partial_d1[(l - sf) * rs *
                                                                   m_n +
                                                               (k - rf) * m_n +
                                                               i];
                                                if (l4) {
                                                    const std::size_t l4size =
                                                        l4->size;
                                                    for (std::size_t gamma_j =
                                                             0;
                                                         gamma_j < l4size;
                                                         ++gamma_j) {
                                                        const std::size_t
                                                            gamma =
                                                                l4->indices
                                                                    [gamma_j];
                                                        l4->values[gamma_j] +=
                                                            g * m_X(j, gamma);
                                                    }
                                                }
                                            }
                                        }
                        }

                        m_requests.clear();
                        buf_ptr = m_buf.data();
                    }
                }

                for (std::size_t l = sf; l < sf + ss; ++l) {

                    Integrals::Level2* l2 = d2.roots[l];
                    if (!l2)
                        continue;

                    for (std::size_t k = rf; k < std::min(rs + rf, l + 1);
                         ++k) {

                        const std::size_t l2size = l2->size();

                        std::size_t ki;
                        for (ki = 0; ki < l2size; ++ki) {
                            if ((*l2)[ki].first == k)
                                break;
                        }

                        if (ki == l2size)
                            continue;

                        Integrals::Level3* l3 = (*l2)[ki].second;
                        if (!l3)
                            continue;

                        const std::size_t l3size = l3->size();

                        for (std::size_t j = 0; j < m_n; ++j) {

                            const Integrals::Level4* l4 =
                                partial_d1[(l - sf) * rs * m_n +
                                           (k - rf) * m_n + j];
                            if (!l4)
                                continue;

                            for (std::size_t ii = 0; ii < l4->size; ++ii) {
                                const double g = l4->values[ii];
                                const std::size_t i = l4->indices[ii];

                                if (m_eps > max_Y[j] * std::abs(g))
                                    continue;

                                std::size_t I;
                                for (I = 0; I < l3size; ++I) {
                                    if ((*l3)[I].first == i)
                                        break;
                                }

                                if (I == l3size)
                                    continue;

                                Integrals::Level4* ll4 = (*l3)[I].second;
                                if (!ll4)
                                    continue;

                                const std::size_t l4size = ll4->size;

                                for (std::size_t gamma_j = 0; gamma_j < l4size;
                                     ++gamma_j) {
                                    const std::size_t gamma =
                                        ll4->indices[gamma_j];
                                    ll4->values[gamma_j] += g * m_Y(j, gamma);
                                }
                            }
                        }
                    }
                }

                for (std::size_t i = 0; i < rs * ss * m_n; ++i)
                    delete partial_d1[i];
            }
            std::cout << "shell quartets: " << counter_shells << std::endl;
        }

        void
        RHF_LS_LT_AO_MP2::make_d2(std::size_t ib, std::size_t ie, Integrals& d2)
        {
#ifdef HAVE_MALLINFO
            struct mallinfo minfo0 = mallinfo();
#endif

            unsigned long long counter_ints = 0;

            const double* pc0 = m_pair_centers.origin();
            const double* pm0 = m_M.origin();
            const double* pmt0 = m_M_t.origin();

            arma::mat AD2(ie - ib, m_n);
            for (std::size_t i = ib; i < ie; ++i)
                for (std::size_t j = 0; j < m_n; ++j)
                    AD2(i - ib, j) = 2 * m_A(i, j) * m_D(i, j);

            arma::vec maxAD2(ie - ib);
            for (std::size_t i = ib; i < ie; ++i)
                maxAD2(i - ib) = 2 * m_max_A_row(i) * m_max_D_row(i);

            d2.roots.resize(m_n, 0);
            for (std::size_t l = 0; l < m_n; ++l) {

                std::size_t l2size = 0;
                for (std::size_t k = 0; k <= l; ++k) {
                    if (!m_pair_significant[k][l])
                        continue;
                    const double pr0 =
                        m_max_D * m_A(k, l) *
                        std::max(2 * m_max_A * m_D(k, l) +
                                     m_max_C_col(l) * m_max_B_row(k),
                                 2 * m_max_A * m_D(l, k) +
                                     m_max_C_col(k) * m_max_B_row(l));
                    if (m_eps < pr0)
                        m_indices_buf2[l2size++] = k;
                }

                if (!l2size) {
                    d2.roots[l] = 0;
                    continue;
                }

                Integrals::Level2* l2 = new Integrals::Level2(l2size);
                d2.roots[l] = l2;

                for (std::size_t ki = 0; ki < l2size; ++ki) {
                    const std::size_t k = m_indices_buf2[ki];

                    const double Akl = m_A(k, l);
                    const double AklDlk = Akl * m_D(l, k);
                    const double AklDkl = Akl * m_D(k, l);
                    const double maxBkAkl = m_max_B_row(k) * Akl;
                    const double maxBlAkl = m_max_B_row(l) * Akl;
                    const double* maxAD2ip = &maxAD2(0);
                    const double* maxDip = &m_max_D_row(ib);

                    std::size_t l3size = 0;
                    for (std::size_t i = ib; i < ie; ++i) {
                        const double maxAD2i = *maxAD2ip++;
                        const double maxDi = *maxDip++;
                        if (m_eps < std::max(maxAD2i * AklDkl +
                                                 maxBkAkl * maxDi * m_C(i, l),
                                             maxAD2i * AklDlk +
                                                 maxBlAkl * maxDi * m_C(i, k)))
                            m_indices_buf3[l3size++] = i;
                    }

                    if (!l3size) {
                        (*l2)[ki] = std::make_pair(k, (Integrals::Level3*)0);
                        continue;
                    }

                    Integrals::Level3* l3 = new Integrals::Level3(l3size);
                    (*l2)[ki] = std::make_pair(k, l3);

                    for (std::size_t ii = 0; ii < l3size; ++ii) {

                        const std::size_t i = m_indices_buf3[ii];

                        std::size_t l4size = 0;
                        const double Cil = m_C(i, l);
                        const double Cik = m_C(i, k);
                        const double AklCil = Akl * Cil;
                        const double AklCik = Akl * Cik;

                        for (std::size_t j = 0; j < m_n; ++j) {
                            if (!m_t_pair_significant(i, j))
                                continue;

                            const double AD2ij = AD2(i - ib, j);
                            const double Dij = m_D(i, j);

                            const double D_ijkl = m_D(i, j) * m_A(k, l);
                            const double A_ijkl_1 = m_A(i, j) * m_D(k, l);
                            const double A_ijkl_2 = m_A(i, j) * m_D(l, k);

                            const double exch_ijkl_1 = Dij * AklCil * m_B(k, j);
                            const double coul_ijkl_1 = AD2ij * AklDkl;
                            const double exch_ijkl_2 = Dij * AklCik * m_B(l, j);
                            const double coul_ijkl_2 = AD2ij * AklDlk;

                            if (m_eps >= std::max(coul_ijkl_1 + exch_ijkl_1,
                                                  coul_ijkl_2 + exch_ijkl_2)) {
                                continue;
                            } else if (m_eps <
                                       std::max(exch_ijkl_1, exch_ijkl_2)) {
                                m_indices_buf4[l4size++] = j;
                            } else if (!m_pair_significant[i][j] ||
                                       (!m_t_pair_significant(k, l) &&
                                        !m_t_pair_significant(l, k))) {
                                continue;
                            } else {
                                double est_tr = D_ijkl;
                                double est_coul_1 = A_ijkl_1;
                                double est_coul_2 = A_ijkl_2;

                                const double* pc_ij = pc0 + 3 * i * m_n + 3 * j;
                                const double* pc_kl = pc0 + 3 * k * m_n + 3 * l;
                                const double R = std::sqrt(
                                    (*pc_ij - *pc_kl) * (*pc_ij - *pc_kl) +
                                    (*(pc_ij + 1) - *(pc_kl + 1)) *
                                        (*(pc_ij + 1) - *(pc_kl + 1)) +
                                    (*(pc_ij + 2) - *(pc_kl + 2)) *
                                        (*(pc_ij + 2) - *(pc_kl + 2)));
                                const double R_prim = R -
                                                      m_t_pair_ranges(i, j) -
                                                      m_pair_ranges(k, l);

                                if (R_prim > 1) {
                                    est_tr = std::min(
                                        D_ijkl,
                                        std::sqrt(3.0) *
                                            *(pmt0 + 3 * i * m_n + 3 * j + 1) *
                                            *(pm0 + 3 * k * m_n + 3 * l) /
                                            (R_prim * R_prim - R_prim));
                                }

                                const double R_prim_1 = R -
                                                        m_pair_ranges(i, j) -
                                                        m_t_pair_ranges(k, l);
                                const double* pm_ij = pm0 + 3 * i * m_n + 3 * j;
                                const double* pmt_kl =
                                    pmt0 + 3 * k * m_n + 3 * l;

                                if (R_prim_1 > 1)
                                    est_coul_1 = std::min(
                                        A_ijkl_1,
                                        std::sqrt(3.0) * *pm_ij *
                                            *(pmt_kl + 1) /
                                            (R_prim_1 * R_prim_1 - R_prim_1));

                                const double R_prim_2 = R -
                                                        m_pair_ranges(i, j) -
                                                        m_t_pair_ranges(l, k);
                                const double* pmt_lk =
                                    pmt0 + 3 * l * m_n + 3 * k;

                                if (R_prim_2 > 1)
                                    est_coul_2 = std::min(
                                        A_ijkl_2,
                                        std::sqrt(3.0) * *pm_ij *
                                            *(pmt_lk + 1) /
                                            (R_prim_2 * R_prim_2 - R_prim_2));

                                if (m_eps <
                                    std::max(
                                        2 * est_tr * est_coul_1 + exch_ijkl_1,
                                        2 * est_tr * est_coul_2 + exch_ijkl_2))
                                    m_indices_buf4[l4size++] = j;
                            }
                        }

                        if (l4size) {
                            Integrals::Level4* l4 =
                                new Integrals::Level4(l4size);
                            (*l3)[ii] = std::make_pair(i, l4);
                            std::memcpy(l4->indices,
                                        m_indices_buf4.get(),
                                        l4size * sizeof(std::size_t));
                            counter_ints += l4size;
                        } else {
                            (*l3)[ii] =
                                std::make_pair(i, (Integrals::Level4*)0);
                        }
                    }
                }
            }
            std::cout << "integrals: " << counter_ints << std::endl;

#ifdef HAVE_MALLINFO
            struct mallinfo minfo1 = mallinfo();

            niedoida::io::Log::instance().write(
                niedoida::io::Logger::DEBUG,
                "tree size (MB)",
                (minfo1.uordblks - minfo0.uordblks) / 1048576.0);
#endif
        }

        void RHF_LS_LT_AO_MP2::make_partial_d3(std::size_t ib,
                                               std::size_t ie,
                                               std::size_t* J,
                                               std::size_t J_size,
                                               Integrals& d3)
        {
#ifdef HAVE_MALLINFO
            struct mallinfo minfo0 = mallinfo();
#endif

            d3.roots.resize(m_n, 0);

            const double* pc0 = m_pair_centers.origin();
            const double* pm0 = m_M.origin();
            const double* pmt0 = m_M_t.origin();
            const double* pmd0 = m_M_d.origin();
            const double* pmu0 = m_M_u.origin();

            for (std::size_t i = ib; i < ie; ++i) {

                std::size_t l2size = 0;
                for (std::size_t ji = 0; ji < J_size; ++ji) {
                    const std::size_t j = J[ji];
                    if (!m_t_pair_significant(i, j))
                        continue;
                    if (m_eps < m_D(i, j) * m_max_B *
                                    (2 * m_A(i, j) * m_max_C +
                                     m_max_C_row(i) * m_max_A_row(j))) {
                        m_indices_buf2[l2size++] = j;
                    }
                }

                if (!l2size) {
                    d3.roots[i] = 0;
                    continue;
                }

                Integrals::Level2* l2 = new Integrals::Level2(l2size);
                d3.roots[i] = l2;

                for (std::size_t ji = 0; ji < l2size; ++ji) {
                    const std::size_t j = m_indices_buf2[ji];

                    std::size_t l3size = 0;
                    for (std::size_t l = 0; l < m_n; ++l) {
                        if (m_eps < m_D(i, j) * m_max_B_col(l) *
                                        (2 * m_A(i, j) * m_max_C_col(l) +
                                         m_C(i, l) * m_max_A_row(j))) {
                            m_indices_buf3[l3size++] = l;
                        }
                    }

                    if (!l3size) {
                        (*l2)[ji] = std::make_pair(j, (Integrals::Level3*)0);
                        continue;
                    }

                    Integrals::Level3* l3 = new Integrals::Level3(l3size);
                    (*l2)[ji] = std::make_pair(j, l3);

                    const double Aij = m_A(i, j);
                    const double Dij = m_D(i, j);

                    for (std::size_t li = 0; li < l3size; ++li) {
                        const std::size_t l = m_indices_buf3[li];

                        std::size_t l4size = 0;
                        for (std::size_t k = 0; k < m_n; ++k) {

                            if (!m_d_pair_significant(k, l))
                                continue;

                            const double D_ijkl = Dij * m_B(k, l);
                            const double A_ijkl = Aij * m_C(k, l);
                            const double A_ilkj = m_C(i, l) * m_A(k, j);

                            const double exch_ijkl = D_ijkl * A_ilkj;
                            const double coul_ijkl = 2 * D_ijkl * A_ijkl;

                            if (m_eps >= coul_ijkl + exch_ijkl) {
                                continue;
                            } else if (m_eps < exch_ijkl) {
                                m_indices_buf4[l4size++] = k;
                            } else if (!m_pair_significant[i][j] ||
                                       !m_u_pair_significant(k, l)) {
                                continue;
                            } else {
                                double est_tr = D_ijkl;
                                double est_coul = A_ijkl;

                                const double* pc_ij = pc0 + 3 * i * m_n + 3 * j;
                                const double* pc_kl = pc0 + 3 * k * m_n + 3 * l;
                                const double X = *pc_ij - *pc_kl;
                                const double Y = *(pc_ij + 1) - *(pc_kl + 1);
                                const double Z = *(pc_ij + 2) - *(pc_kl + 2);

                                const double R =
                                    std::sqrt(X * X + Y * Y + Z * Z);
                                const double R_prim = R -
                                                      m_t_pair_ranges(i, j) -
                                                      m_d_pair_ranges(k, l);

                                if (R_prim > 1)
                                    est_tr = std::min(
                                        est_tr,
                                        std::sqrt(3.0) *
                                            *(pmt0 + 3 * i * m_n + 3 * j + 1) *
                                            *(pmd0 + 3 * k * m_n + 3 * l) /
                                            (R_prim * R_prim - R_prim));

                                const double R_prim_1 = R -
                                                        m_pair_ranges(i, j) -
                                                        m_u_pair_ranges(k, l);
                                const double* pm_ij = pm0 + 3 * i * m_n + 3 * j;
                                const double* pmu_kl =
                                    pmu0 + 3 * k * m_n + 3 * l;

                                if (R_prim_1 > 1)
                                    est_coul = std::min(est_coul,
                                                        *pm_ij * *pmu_kl /
                                                            (R_prim_1 - 1));

                                if (m_eps < 2 * est_tr * est_coul + exch_ijkl)
                                    m_indices_buf4[l4size++] = k;
                            }
                        }

                        if (!l4size) {
                            (*l3)[li] =
                                std::make_pair(l, (Integrals::Level4*)0);
                            continue;
                        }

                        Integrals::Level4* l4 = new Integrals::Level4(l4size);
                        (*l3)[li] = std::make_pair(l, l4);

                        std::memcpy(l4->indices,
                                    m_indices_buf4.get(),
                                    l4size * sizeof(std::size_t));
                    }
                }
            }

#ifdef HAVE_MALLINFO
            struct mallinfo minfo1 = mallinfo();
            niedoida::io::Log::instance().write(
                niedoida::io::Logger::NORMAL,
                "tree size (MB)",
                (minfo1.uordblks - minfo0.uordblks) / 1048576.0);
#endif
        }

        void RHF_LS_LT_AO_MP2::make_partial_d4(std::size_t ib,
                                               std::size_t ie,
                                               std::size_t* J,
                                               std::size_t J_size,
                                               Integrals& d4)
        {
#ifdef HAVE_MALLINFO
            struct mallinfo minfo0 = mallinfo();
#endif

            d4.roots.resize(m_n, 0);

            const double* pc0 = m_pair_centers.origin();
            const double* pm0 = m_M.origin();
            const double* pmt0 = m_M_t.origin();

            for (std::size_t i = ib; i < ie; ++i) {

                std::size_t l2size = 0;
                for (std::size_t ji = 0; ji < J_size; ++ji) {
                    const std::size_t j = J[ji];
                    if (m_eps < m_D(i, j) * m_max_D *
                                    (2 * m_A(i, j) * m_max_A +
                                     m_max_A_row(i) * m_max_A_row(j))) {
                        m_indices_buf2[l2size++] = j;
                    }
                }

                if (!l2size) {
                    d4.roots[i] = 0;
                    continue;
                }

                Integrals::Level2* l2 = new Integrals::Level2(l2size);
                d4.roots[i] = l2;

                for (std::size_t ji = 0; ji < l2size; ++ji) {
                    const std::size_t j = m_indices_buf2[ji];

                    std::size_t l3size = 0;
                    for (std::size_t k = 0; k <= i; ++k) {
                        if (m_eps < m_D(i, j) * m_max_D_row(k) *
                                        (2 * m_A(i, j) * m_max_A_row(k) +
                                         m_max_A_row(i) * m_A(k, j))) {
                            m_indices_buf3[l3size++] = k;
                        }
                    }

                    if (!l3size) {
                        (*l2)[ji] = std::make_pair(j, (Integrals::Level3*)0);
                        continue;
                    }

                    Integrals::Level3* l3 = new Integrals::Level3(l3size);
                    (*l2)[ji] = std::make_pair(j, l3);

                    for (std::size_t ki = 0; ki < l3size; ++ki) {
                        const std::size_t k = m_indices_buf3[ki];

                        std::size_t l4size = 0;
                        const std::size_t l_max = (i == k ? j + 1 : m_n);
                        for (std::size_t l = 0; l < l_max; ++l) {

                            if (!m_t_pair_significant(k, l))
                                continue;

                            const double D_ijkl = m_D(i, j) * m_D(k, l);
                            const double A_ijkl = m_A(i, j) * m_A(k, l);
                            const double A_ilkj = m_A(i, l) * m_A(k, j);
                            const double exch_ijkl = D_ijkl * A_ilkj;
                            const double coul_ijkl = 2 * D_ijkl * A_ijkl;

                            if (m_eps >= coul_ijkl + exch_ijkl) {
                                continue;
                            } else if (m_eps < exch_ijkl) {
                                m_indices_buf4[l4size++] = l;
                            } else if (!m_pair_significant[i][j] ||
                                       !m_pair_significant[k][l]) {
                                continue;
                            } else {
                                double est_tr = D_ijkl;
                                double est_coul = A_ijkl;

                                const double* pc_ij = pc0 + 3 * i * m_n + 3 * j;
                                const double* pc_kl = pc0 + 3 * k * m_n + 3 * l;
                                const double X = *pc_ij - *pc_kl;
                                const double Y = *(pc_ij + 1) - *(pc_kl + 1);
                                const double Z = *(pc_ij + 2) - *(pc_kl + 2);
                                const double R =
                                    std::sqrt(X * X + Y * Y + Z * Z);
                                const double R_prim = R -
                                                      m_t_pair_ranges(i, j) -
                                                      m_t_pair_ranges(k, l);

                                if (R_prim > 1)
                                    est_tr = std::min(
                                        est_tr,
                                        2.5 *
                                            *(pmt0 + 3 * i * m_n + 3 * j + 1) *
                                            *(pmt0 + 3 * k * m_n + 3 * l + 1) /
                                            (R_prim * R_prim * R_prim -
                                             R_prim * R_prim));

                                const double R_prim_1 = R -
                                                        m_pair_ranges(i, j) -
                                                        m_pair_ranges(k, l);
                                const double* pm_ij = pm0 + 3 * i * m_n + 3 * j;
                                const double* pm_kl = pm0 + 3 * k * m_n + 3 * l;

                                if (R_prim_1 > 1)
                                    est_coul = std::min(est_coul,
                                                        *pm_ij * *pm_kl /
                                                            (R_prim_1 - 1));

                                if (m_eps < 2 * est_tr * est_coul + exch_ijkl)
                                    m_indices_buf4[l4size++] = l;
                            }
                        }

                        if (!l4size) {
                            (*l3)[ki] =
                                std::make_pair(k, (Integrals::Level4*)0);
                            continue;
                        }

                        Integrals::Level4* l4 = new Integrals::Level4(l4size);
                        (*l3)[ki] = std::make_pair(k, l4);

                        std::memcpy(l4->indices,
                                    m_indices_buf4.get(),
                                    l4size * sizeof(std::size_t));
                    }
                }
            }

#ifdef HAVE_MALLINFO
            struct mallinfo minfo1 = mallinfo();
            niedoida::io::Log::instance().write(
                niedoida::io::Logger::NORMAL,
                "tree size (MB)",
                (minfo1.uordblks - minfo0.uordblks) / 1048576.0);
#endif
        }

        void RHF_LS_LT_AO_MP2::trans_partial_3(std::size_t ib,
                                               std::size_t ie,
                                               std::size_t* J_set,
                                               std::size_t J_size,
                                               Integrals& d2,
                                               Integrals& d3)
        {
            std::vector<double> max_X(m_n);
            for (std::size_t i = 0; i < m_n; ++i) {
                double X_max = 0;
                for (std::size_t j = 0; j < m_n; ++j)
                    if (std::abs(m_X(i, j)) > X_max)
                        X_max = std::abs(m_X(i, j));
                max_X[i] = X_max;
            }

            const std::size_t jb = J_set[0];
            const std::size_t je = J_set[J_size - 1] + 1;

            for (std::size_t l = 0; l < d2.roots.size(); ++l) {
                Integrals::Level2* l2 = d2.roots[l];
                if (!l2)
                    continue;

                for (std::size_t ki = 0; ki < l2->size(); ++ki) {
                    Integrals::Level3* l3 = (*l2)[ki].second;
                    if (!l3)
                        continue;
                    const std::size_t k = (*l2)[ki].first;

                    const std::size_t l3size = l3->size();

                    std::size_t I;
                    for (I = 0; I < l3size; ++I)
                        if ((*l3)[I].first >= ib)
                            break;

                    if (I == l3size)
                        continue;

                    if ((*l3)[I].first >= ie)
                        continue;

                    for (std::size_t ii = I;
                         (*l3)[ii].first < ie && ii < l3size;
                         ++ii) {
                        Integrals::Level4* l4 = (*l3)[ii].second;
                        if (!l4)
                            continue;

                        const std::size_t i = (*l3)[ii].first;

                        const std::size_t l4size = l4->size;

                        std::size_t J;
                        for (J = 0; J < l4size; ++J)
                            if (l4->indices[J] >= jb)
                                break;

                        if (J == l4size)
                            continue;

                        if (l4->indices[J] >= je)
                            continue;

                        for (std::size_t jj = J;
                             l4->indices[jj] < je && jj < l4size;
                             ++jj) {
                            if (m_eps > std::abs(l4->values[jj]) *
                                            std::max(max_X[k], max_X[l]))
                                continue;
                            const std::size_t j = l4->indices[jj];
                            trans3partial(i, j, k, l, l4->values[jj], d3);
                        }
                    }
                }
            }
        }

        void RHF_LS_LT_AO_MP2::trans_partial_4(std::size_t ib,
                                               std::size_t ie,
                                               std::size_t* J_set,
                                               std::size_t J_size,
                                               Integrals& d3,
                                               Integrals& d4)
        {
            const std::size_t jb = J_set[0];
            const std::size_t je = J_set[J_size - 1] + 1;

            for (std::size_t i = ib; i < ie; ++i) {
                Integrals::Level2* l2 = d3.roots[i];
                if (!l2)
                    continue;

                const std::size_t l2size = l2->size();

                std::size_t J;
                for (J = 0; J < l2size; ++J)
                    if ((*l2)[J].first >= jb)
                        break;

                if (J == l2size)
                    continue;

                if ((*l2)[J].first >= je)
                    continue;

                for (std::size_t jj = J; (*l2)[jj].first < je && jj < l2size;
                     ++jj) {
                    Integrals::Level3* l3 = (*l2)[jj].second;
                    if (!l3)
                        continue;

                    const std::size_t j = (*l2)[jj].first;

                    for (std::size_t li = 0; li < l3->size(); ++li) {
                        Integrals::Level4* l4 = (*l3)[li].second;
                        if (!l4)
                            continue;

                        const std::size_t l = (*l3)[li].first;
                        const std::size_t l4size = l4->size;

                        for (std::size_t ki = 0; ki < l4size; ++ki)
                            trans4partial(
                                i, j, l4->indices[ki], l, l4->values[ki], d4);
                    }
                }
            }
        }

        void RHF_LS_LT_AO_MP2::trans3partial(std::size_t i,
                                             std::size_t j,
                                             std::size_t k,
                                             std::size_t l,
                                             double g,
                                             Integrals& d3)
        {
            Integrals::Level2* l2 = d3.roots[i];
            if (!l2)
                return;

            const std::size_t l2size = l2->size();

            std::size_t ji;
            for (ji = 0; ji < l2size; ++ji) {
                if ((*l2)[ji].first == j)
                    break;
            }

            if (ji == l2size)
                return;

            Integrals::Level3* l3 = (*l2)[ji].second;
            if (!l3)
                return;

            const std::size_t l3size = l3->size();

            std::size_t li;

            for (li = 0; li < l3size; ++li) {
                if ((*l3)[li].first == l)
                    break;
            }

            if (li != l3size) {
                Integrals::Level4* l4 = (*l3)[li].second;
                if (l4) {
                    for (std::size_t gamma_k = 0; gamma_k < l4->size;
                         ++gamma_k) {
                        const std::size_t gamma = l4->indices[gamma_k];
                        l4->values[gamma_k] += g * m_X(k, gamma);
                    }
                }
            }

            if (k != l) {
                for (li = 0; li < l3size; ++li) {
                    if ((*l3)[li].first == k)
                        break;
                }
                if (li != l3size) {
                    Integrals::Level4* l4 = (*l3)[li].second;
                    if (l4) {
                        for (std::size_t gamma_k = 0; gamma_k < l4->size;
                             ++gamma_k) {
                            const std::size_t gamma = l4->indices[gamma_k];
                            l4->values[gamma_k] += g * m_X(l, gamma);
                        }
                    }
                }
            }
        }

        void RHF_LS_LT_AO_MP2::trans4partial(std::size_t i,
                                             std::size_t j,
                                             std::size_t k,
                                             std::size_t l,
                                             double g,
                                             Integrals& d4)
        {
            Integrals::Level2* l2 = d4.roots[i];
            if (!l2)
                return;

            const std::size_t l2size = l2->size();

            std::size_t ji;
            for (ji = 0; ji < l2size; ++ji) {
                if ((*l2)[ji].first == j)
                    break;
            }

            if (ji == l2size)
                return;

            Integrals::Level3* l3 = (*l2)[ji].second;
            if (!l3)
                return;

            const std::size_t l3size = l3->size();

            std::size_t ki;

            for (ki = 0; ki < l3size; ++ki) {
                if ((*l3)[ki].first == k)
                    break;
            }

            if (ki == l3size)
                return;

            Integrals::Level4* l4 = (*l3)[ki].second;

            if (!l4)
                return;
            for (std::size_t gamma_l = 0; gamma_l < l4->size; ++gamma_l) {
                const std::size_t gamma = l4->indices[gamma_l];
                l4->values[gamma_l] += g * m_Y(l, gamma);
            }
        }

        void RHF_LS_LT_AO_MP2::make_partial_d_sh(Integrals_sh& d_sh,
                                                 const Integrals& d4)
        {
#ifdef HAVE_MALLINFO
            struct mallinfo minfo0 = mallinfo();
#endif
            d_sh.roots.resize(m_no_shells, 0);
            std::vector<std::size_t> tmp_sh(m_n);

            for (std::size_t i = 0; i < m_no_shells; ++i) {
                const std::size_t pf = m_first_contraction_in_shell[i];
                const std::size_t ps = m_shell_sizes[i];
                for (std::size_t j = pf; j < pf + ps; ++j)
                    tmp_sh[j] = i;
            }

            for (std::size_t i = 0; i < d4.roots.size(); ++i) {
                Integrals::Level2* l2 = d4.roots[i];
                if (!l2)
                    continue;
                for (std::size_t jj = 0; jj < l2->size(); ++jj) {
                    Integrals::Level3* l3 = (*l2)[jj].second;
                    if (!l3)
                        continue;
                    const std::size_t j = (*l2)[jj].first;
                    for (std::size_t kk = 0; kk < l3->size(); ++kk) {
                        Integrals::Level4* l4 = (*l3)[kk].second;
                        if (!l4)
                            continue;
                        const std::size_t k = (*l3)[kk].first;
                        for (std::size_t ll = 0; ll < l4->size; ++ll) {
                            const std::size_t l = l4->indices[ll];
                            const double g = l4->values[ll];

                            const std::size_t I = tmp_sh[i];
                            const std::size_t J = tmp_sh[j];
                            const std::size_t K = tmp_sh[k];
                            const std::size_t L = tmp_sh[l];

                            const niedoida::core::ShellQuartetIndex sqi = {
                                {static_cast<unsigned>(I),
                                 static_cast<unsigned>(J),
                                 static_cast<unsigned>(K),
                                 static_cast<unsigned>(L)}};
                            const niedoida::core::ShellQuartetIndex sqi_2 = {
                                {static_cast<unsigned>(I),
                                 static_cast<unsigned>(L),
                                 static_cast<unsigned>(K),
                                 static_cast<unsigned>(J)}};

                            std::size_t b;
                            std::size_t c;
                            std::size_t d;

                            Integrals_sh::Level2* ls2;
                            Integrals_sh::Level3* ls3;
                            Integrals_sh::Level4* ls4;

                            if (m_eps / 2 < std::abs(g) * 2 *
                                                m_schwartz.max_integral(sqi)) {

                                if (d_sh.roots[I] == 0) {
                                    ls2 = new Integrals_sh::Level2;
                                    d_sh.roots[I] = ls2;
                                } else
                                    ls2 = d_sh.roots[I];

                                for (b = 0; b < ls2->size(); ++b) {
                                    if ((*ls2)[b].first == J)
                                        break;
                                }
                                if (b == ls2->size()) {
                                    ls3 = new Integrals_sh::Level3;
                                    ls2->push_back(std::make_pair(J, ls3));
                                } else
                                    ls3 = (*ls2)[b].second;

                                for (c = 0; c < ls3->size(); ++c) {
                                    if ((*ls3)[c].first == K)
                                        break;
                                }
                                if (c == ls3->size()) {
                                    ls4 = new Integrals_sh::Level4;
                                    ls3->push_back(std::make_pair(K, ls4));
                                } else
                                    ls4 = (*ls3)[c].second;

                                for (d = 0; d < ls4->size(); ++d)
                                    if ((*ls4)[d] == L)
                                        break;
                                if (d == ls4->size())
                                    ls4->push_back(L);
                            }

                            if (m_eps / 2 <
                                std::abs(g) * m_schwartz.max_integral(sqi_2)) {
                                if (d_sh.roots[I] == 0) {
                                    ls2 = new Integrals_sh::Level2;
                                    d_sh.roots[I] = ls2;
                                } else
                                    ls2 = d_sh.roots[I];

                                for (b = 0; b < ls2->size(); ++b) {
                                    if ((*ls2)[b].first == L)
                                        break;
                                }
                                if (b == ls2->size()) {
                                    ls3 = new Integrals_sh::Level3;
                                    ls2->push_back(std::make_pair(L, ls3));
                                } else
                                    ls3 = (*ls2)[b].second;

                                for (c = 0; c < ls3->size(); ++c) {
                                    if ((*ls3)[c].first == K)
                                        break;
                                }
                                if (c == ls3->size()) {
                                    ls4 = new Integrals_sh::Level4;
                                    ls3->push_back(std::make_pair(K, ls4));
                                } else
                                    ls4 = (*ls3)[c].second;

                                for (d = 0; d < ls4->size(); ++d)
                                    if ((*ls4)[d] == J)
                                        break;
                                if (d == ls4->size())
                                    ls4->push_back(J);
                            }
                        }
                    }
                }
            }
#ifdef HAVE_MALLINFO
            struct mallinfo minfo1 = mallinfo();
            niedoida::io::Log::instance().write(
                niedoida::io::Logger::NORMAL,
                "tree size (MB)",
                (minfo1.uordblks - minfo0.uordblks) / 1048576.0);
#endif
        }

        double
        RHF_LS_LT_AO_MP2::energy_partial_contribution(Integrals_sh& d_sh,
                                                      const Integrals& d4)
        {

            m_requests.clear();
            double e2 = 0;
            double* buf_ptr = m_buf.data();

            const IJKLShellQuartetIndexIterator i_begin(&d_sh);
            const IJKLShellQuartetIndexIterator i_end = i_begin.make_end();
            for (IJKLShellQuartetIndexIterator i = i_begin; i != i_end; ++i) {
                const niedoida::core::ShellQuartetIndex sqi = *i;
                const niedoida::core::Request request = {sqi, false, buf_ptr};
                m_requests.push_back(request);

                buf_ptr += m_shell_sizes[sqi[0]] * m_shell_sizes[sqi[1]] *
                           m_shell_sizes[sqi[2]] * m_shell_sizes[sqi[3]];

                if (m_requests.size() == m_max_no_requests ||
                    boost::next(i) == i_end) {
                    m_2ei->calc(m_requests);

                    for (std::size_t j = 0; j < m_requests.size(); ++j) {
                        const niedoida::core::Request& r = m_requests[j];
                        double* result = r.results;

                        const std::size_t P = r.shells[0];
                        const std::size_t Q = r.shells[1];
                        const std::size_t R = r.shells[2];
                        const std::size_t S = r.shells[3];

                        const std::size_t ps = m_shell_sizes[P];
                        const std::size_t qs = m_shell_sizes[Q];
                        const std::size_t rs = m_shell_sizes[R];
                        const std::size_t ss = m_shell_sizes[S];

                        const std::size_t pf = m_first_contraction_in_shell[P];
                        const std::size_t qf = m_first_contraction_in_shell[Q];
                        const std::size_t rf = m_first_contraction_in_shell[R];
                        const std::size_t sf = m_first_contraction_in_shell[S];

                        for (std::size_t i = pf; i < pf + ps; ++i) {
                            for (std::size_t j = qf; j < qf + qs; ++j) {
                                for (std::size_t k = rf; k < rf + rs; ++k) {
                                    for (std::size_t l = sf; l < sf + ss; ++l) {
                                        double g = *result++;

                                        if (i != k || j != l)
                                            g *= 2;

                                        Integrals::Level2* l2 = d4.roots[i];
                                        if (!l2)
                                            continue;

                                        if ((i > k || (i == k && j >= l)) &&
                                            m_eps / 2 < 2 * std::abs(g) *
                                                            m_D(i, j) *
                                                            m_D(k, l)) {
                                            std::size_t dji;
                                            for (dji = 0; dji < l2->size();
                                                 ++dji)
                                                if ((*l2)[dji].first == j)
                                                    break;
                                            if (dji != l2->size()) {
                                                std::size_t dki;
                                                Integrals::Level3* l3 =
                                                    (*l2)[dji].second;
                                                if (l3) {
                                                    for (dki = 0;
                                                         dki < l3->size();
                                                         ++dki)
                                                        if ((*l3)[dki].first ==
                                                            k)
                                                            break;
                                                    if (dki != l3->size()) {
                                                        std::size_t dli;
                                                        Integrals::Level4* l4 =
                                                            (*l3)[dki].second;
                                                        if (l4) {
                                                            for (dli = 0;
                                                                 dli < l4->size;
                                                                 ++dli)
                                                                if (l4->indices
                                                                        [dli] ==
                                                                    l)
                                                                    break;
                                                            if (dli != l4->size)
                                                                e2 += 2 * g *
                                                                      l4->values
                                                                          [dli];
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        if ((i > k || (i == k && l >= j)) &&
                                            m_eps / 2 < std::abs(g) *
                                                            m_D(i, l) *
                                                            m_D(k, j)) {
                                            std::size_t dli;
                                            for (dli = 0; dli < l2->size();
                                                 ++dli)
                                                if ((*l2)[dli].first == l)
                                                    break;
                                            if (dli != l2->size()) {
                                                std::size_t dki;
                                                Integrals::Level3* l3 =
                                                    (*l2)[dli].second;
                                                if (l3) {
                                                    for (dki = 0;
                                                         dki < l3->size();
                                                         ++dki)
                                                        if ((*l3)[dki].first ==
                                                            k)
                                                            break;
                                                    if (dki != l3->size()) {
                                                        std::size_t dji;
                                                        Integrals::Level4* l4 =
                                                            (*l3)[dki].second;
                                                        if (l4) {
                                                            for (dji = 0;
                                                                 dji < l4->size;
                                                                 ++dji)
                                                                if (l4->indices
                                                                        [dji] ==
                                                                    j)
                                                                    break;
                                                            if (dji != l4->size)
                                                                e2 += -g *
                                                                      l4->values
                                                                          [dji];
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }

                    m_requests.clear();
                    buf_ptr = m_buf.data();
                }
            }
            return e2;
        }

        void RHF_LS_LT_AO_MP2::make_local_matrices(const std::size_t ib,
                                                   const std::size_t ie)
        {

            m_X_local.resize(m_n);
            m_X_local_sh.resize(m_no_shells);

            for (std::size_t ii = 0; ii < m_n; ++ii) {
                double max = 0;
                for (std::size_t i = ib; i < ie; ++i)
                    if (std::abs(m_X(ii, i)) > max)
                        max = std::abs(m_X(ii, i));
                m_X_local(ii) = max;
            }

            for (std::size_t j = 0; j < m_no_shells; ++j) {
                const std::size_t qf = m_first_contraction_in_shell[j];
                const std::size_t qs = m_shell_sizes[j];
                double max = 0;
                for (std::size_t l = qf; l < qf + qs; ++l)
                    if (m_X_local(l) > max)
                        max = m_X_local(l);
                m_X_local_sh(j) = max;
            }

            m_D_local.resize(m_n, m_n);
            m_D_sh_local.resize(m_no_shells, m_no_shells);

            for (std::size_t mi = 0; mi < m_n; ++mi)
                for (std::size_t ni = 0; ni < m_n; ++ni) {
                    double D_mi_ni = 0;
                    for (std::size_t sigma = ib; sigma < ie; ++sigma)
                        D_mi_ni += std::abs(m_X(mi, sigma)) * m_C(sigma, ni);
                    m_D_local(mi, ni) = std::min(m_D1(mi, ni), D_mi_ni);
                }

            for (std::size_t i = 0; i < m_no_shells; ++i) {
                const std::size_t pf = m_first_contraction_in_shell[i];
                const std::size_t ps = m_shell_sizes[i];
                for (std::size_t j = 0; j < m_no_shells; ++j) {
                    const std::size_t qf = m_first_contraction_in_shell[j];
                    const std::size_t qs = m_shell_sizes[j];
                    double max_D = m_D_local(pf, qf);
                    for (std::size_t k = pf; k < pf + ps; ++k)
                        for (std::size_t l = qf; l < qf + qs; ++l)
                            if (max_D < m_D_local(k, l))
                                max_D = m_D_local(k, l);
                    m_D_sh_local(i, j) = max_D;
                }
            }

            m_max_C_local = 0;
            m_max_C_col_local = arma::zeros<arma::vec>(m_n);

            for (std::size_t mi = 0; mi < m_n; ++mi) {
                double max = 0;
                for (std::size_t i = ib; i < ie; ++i)
                    if (max < m_C(i, mi))
                        max = m_C(i, mi);
                m_max_C_col_local(mi) = max;

                if (m_max_C_local < max)
                    m_max_C_local = max;
            }

            m_max_B_local = 0;
            m_max_B_col_local = arma::zeros<arma::vec>(m_n);

            for (std::size_t mi = 0; mi < m_n; ++mi) {
                double max = 0;
                for (std::size_t i = ib; i < ie; ++i)
                    if (max < m_B(i, mi))
                        max = m_B(i, mi);
                m_max_B_col_local(mi) = max;

                if (m_max_B_local < max)
                    m_max_B_local = max;
            }

            m_max_A_local = 0;
            m_max_A_row_local = arma::zeros<arma::vec>(m_n);

            for (std::size_t mi = 0; mi < m_n; ++mi) {
                double max = 0;
                for (std::size_t i = ib; i < ie; ++i)
                    if (max < m_A(mi, i))
                        max = m_A(mi, i);
                m_max_A_row_local(mi) = max;

                if (m_max_A_local < max)
                    m_max_A_local = max;
            }

            m_max_D_col_local = arma::zeros<arma::vec>(m_n);

            for (std::size_t mi = 0; mi < m_n; ++mi) {
                double max = 0;
                for (std::size_t i = ib; i < ie; ++i)
                    if (max < m_D(i, mi))
                        max = m_D(i, mi);
                m_max_D_col_local(mi) = max;
            }
        }
    }
}
