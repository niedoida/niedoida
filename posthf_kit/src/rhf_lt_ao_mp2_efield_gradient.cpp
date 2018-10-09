/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/shell_pair_index_generator.hpp"
#include "core_kit/shell_quartet_index_generator.hpp"
#include "cphf_kit/dcphf.hpp"
#include "gto_kit/os1_integral_engine.hpp"
#include "io_kit/logger.hpp"
#include "misc/dispatcher.hpp"
#include "misc/quadratures.hpp"
#include "posthf_kit/lt_mp2_efield_gradient.hpp"
#include "posthf_kit/lt_mp2_utils.hpp"
#include "scf_kit/scf_kit.hpp"
#include <boost/format.hpp>
#include <boost/lambda/algorithm.hpp>
#include <boost/lambda/bind.hpp>
#include <boost/lambda/lambda.hpp>
#include <boost/next_prior.hpp>
#include <boost/numeric/ublas/banded.hpp>

#include <cstring>

#include <utility>
#include <vector>

#include <ext/numeric>

#include <mpi.h>

#ifdef HAVE_MALLOC_H
extern "C" {
#    include <malloc.h>
}
#endif

#include <stdexcept>

namespace {
    arma::mat PRn(const arma::mat& tPF,
                  const arma::mat& P,
                  const arma::mat& R,
                  unsigned n)
    {
        if (n == 0)
            return P * R;

        const arma::mat PRn1 = PRn(tPF, P, R, n - 1);
        const arma::mat e = exp(tPF / std::pow(2.0, double(n)));

        return e * PRn1 + PRn1 * e;
    }

    arma::mat P_xi_series(const arma::mat& P,
                          const arma::mat& F,
                          const arma::mat& R,
                          const double t)
    {
        const std::size_t size = P.n_rows;

        arma::mat G(size, size, arma::fill::zeros);

        const arma::mat PF = P * F;

        const arma::mat tPF = t * PF;

        const double tPF_norm = arma::norm(tPF, "inf");

        const unsigned n =
            tPF_norm < 1 ? 0
                         : std::ceil(std::log(tPF_norm / 1e-6) / std::log(2.0));

        const arma::mat PR = PRn(tPF, P, R, n);

        std::vector<arma::mat> PF_powers;
        PF_powers.push_back(arma::eye<arma::mat>(size, size));

        double fk = 1;
        bool done = false;
        for (unsigned k = 1; !done; ++k) {

            fk *= t;
            fk /= k;
            fk /= std::pow(2.0, double(n));

            PF_powers.push_back(PF_powers.back() * PF);

            arma::mat S(size, size, arma::fill::zeros);

            for (unsigned l = 0; l < k; ++l) {
                const arma::mat FPFkl1 = F * PF_powers[k - l - 1];
                const arma::mat FPFkl1PR = FPFkl1 * PR;
                const arma::mat& PFl = PF_powers[l];
                const arma::mat FPFkl1PRPFl = FPFkl1PR * PFl;
                S += fk * FPFkl1PRPFl;
            }

            G += S;

            done = arma::norm(S, "inf") < 1e-10;
        }

        return G;
    }

    arma::mat F_xi_series(const arma::mat& P,
                          const arma::mat& F,
                          const arma::mat& R,
                          const double t)
    {
        const std::size_t size = P.n_rows;

        arma::mat G = arma::zeros<arma::mat>(size, size);

        const arma::mat PF = P * F;
        const arma::mat tPF = t * PF;

        const double tPF_norm = arma::norm(tPF, "inf");

        const unsigned n =
            tPF_norm < 1 ? 0
                         : std::ceil(std::log(tPF_norm / 1e-2) / std::log(2.0));

        const arma::mat PR = PRn(tPF, P, R, n);

        std::vector<arma::mat> PF_powers;
        PF_powers.push_back(arma::eye<arma::mat>(size, size));

        double fk = 1;
        bool done = false;
        for (unsigned k = 1; !done; ++k) {

            fk *= t;
            fk /= k;
            fk /= std::pow(2.0, double(n));

            PF_powers.push_back(PF_powers.back() * PF);

            arma::mat S = arma::zeros<arma::mat>(size, size);

            for (unsigned l = 0; l < k; ++l) {
                const arma::mat& PFkl1 = PF_powers[k - l - 1];
                const arma::mat PFlP = PF_powers[l] * P;
                const arma::mat PFkl1PR = PFkl1 * PR;
                const arma::mat PFkl1PRPFlP = PFkl1PR * PFlP;
                S += fk * PFkl1PRPFlP;
            }

            G += S;

            done = arma::norm(S, "inf") < 1e-10;
        }

        return G;
    }

    arma::mat create_Y1(const arma::mat& P,
                        const arma::mat& F,
                        const arma::mat& R,
                        double t)
    {
        const std::size_t n = P.n_rows;

        const arma::mat tFP = t * F * P;
        const arma::mat tPF = t * P * F;

        const double tPF_norm = arma::norm(tPF, "inf");

        arma::mat Y1 = arma::zeros<arma::mat>(n, n);

        arma::mat Yk = arma::zeros<arma::mat>(n, n);

        arma::mat tPFk = arma::eye<arma::mat>(n, n);

        const arma::mat tFPR = tFP * R;

        int k = 1;
        do {
            arma::mat Yp = Yk;
            Yk = 1.0 / k * (tFPR * tPFk + tFP * Yp);
            Y1 += Yk;
            tPFk = tPF * tPFk / k;
            k += 1;
        } while (arma::norm(Yk, "fro") > 1e-10);

        return Y1;
    }

    arma::mat create_Y2(const arma::mat& P,
                        const arma::mat& F,
                        const arma::mat& R,
                        double t)
    {
        const std::size_t n = P.n_rows;

        const arma::mat tFP = t * F * P;
        const arma::mat tPR = t * P * R;
        const arma::mat tPRP = tPR * P;
        const arma::mat tPF = t * P * F;

        arma::mat Y2 = arma::zeros<arma::mat>(n, n);

        arma::mat Yk = arma::zeros<arma::mat>(n, n);

        arma::mat tFPk = arma::eye<arma::mat>(n, n);

        int k = 1;
        do {
            arma::mat Yp = Yk;
            Yk = 1.0 / k * (tPRP * tFPk + tPF * Yp);
            Y2 += Yk;
            tFPk = tFPk * tFP / k;
            k += 1;
        } while (arma::norm(Yk, "fro") > 1e-10);

        return Y2;
    }
}

RHF_LT_AO_MP2_EFieldGradient::RHF_LT_AO_MP2_EFieldGradient(
    std::shared_ptr<const System> system,
    std::shared_ptr<const TwoElectronIntegralEngineFactory>
        two_e_int_eng_factory,
    const arma::vec& e,
    const arma::mat& C,
    unsigned long memory_pool,
    unsigned no_frozen,
    unsigned no_deleted,
    const Quadrature& quadrature,
    const double eps) :
    LT_AO_MP2_SchwartzPrescreening(
        system, two_e_int_eng_factory->make(system), eps),
    m_e(e),
    m_memory_pool(memory_pool),
    m_indices_buf2(new std::size_t[m_n]),
    m_indices_buf3(new std::size_t[m_n]),
    m_indices_buf4(new std::size_t[m_n])
{
    const arma::mat& S = *(system->basis_set.overlap_matrix);

    Log::instance().write("S matrix", S);

    const arma::mat P = density_matrix(C, system->no_electrons(SPIN_ALPHA));

    Log::instance().write("P matrix", P);

    const arma::mat Q =
        hole_density_matrix(C, system->no_electrons(SPIN_ALPHA));

    arma::mat F;
    {
        const arma::mat E = arma::diagmat(m_e);

        const arma::mat SC = S * C;
        const arma::mat SCE = SC * E;

        F = SCE * arma::trans(SC);
    }

    const arma::mat PF = P * F;
    const arma::mat QF = Q * F;

    const arma::mat PS = P * S;
    const arma::mat SP = arma::trans(PS);

    std::unique_ptr<PseudoFockMatrixGenerator> pfm(
        new PseudoFockMatrixGenerator(
            system, two_e_int_eng_factory->make(system), 1e-8));

    generate_A();

    m_e2 = 0;

    const unsigned no_occ = system->no_electrons(SPIN_ALPHA);

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

    arma::mat cal_P = arma::zeros<arma::mat>(m_n, m_n);
    arma::mat cal_F = arma::zeros<arma::mat>(m_n, m_n);

    Logger::Section lt_mp2_section(Log::instance(), "lt-mp2");
    for (unsigned iii = 0; iii < quadrature.size(); iii++) {
        Logger::Section section(Log::instance(), "lt-mp2 iteration");

        double t = quadrature[iii].first;
        double w = quadrature[iii].second;

        {
            Logger::Section section(Log::instance(),
                                    "creating common matrices");
            //             m_X = X_density_matrix(C, no_occ,
            //                                    m_no_frozen,
            //                                    m_ef, t);
            //             m_Y = Y_density_matrix(C, no_occ,
            //                                    m_no_deleted,
            //                                    m_ef, t);

            m_X = exp(t * PF) * P;
            m_Y = exp(-t * QF) * Q;

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

            Log::instance().write("t", t);
            Log::instance().write("w", w);

            //            Log::instance().write("X matrix", m_X);
            //            Log::instance().write("Y matrix", m_Y);
            //             Log::instance().write("B matrix", m_B);
            //             Log::instance().write("C matrix", m_C);
            //             Log::instance().write("D matrix", m_D);

            matrices_max_elements();
        }

        std::vector<std::size_t> il;
        {
            Logger::Section section(Log::instance(), "building batches");

            il = split(memory_pool, m_n);
        }

        Log::instance().write("total_no_passes", int(il.size() - 1));

        Log::instance().write(
            "master_no_passes",
            int(std::ceil(double(il.size() - 1) / MPI::COMM_WORLD.Get_size())));

        double partial_e2_contrib = 0;

        arma::mat partial_Rup_contrib = arma::zeros<arma::mat>(m_n, m_n);

        arma::mat partial_Rdn_contrib = arma::zeros<arma::mat>(m_n, m_n);

        {
            std::unique_ptr<Dispatcher> d =
                dispatcher(il.size() - 1, STATIC_DISPATCHING_ALGORITHM);

            while (Dispatcher::TaskInfo task_info = d->get_task()) {

                for (std::size_t p = task_info->first; p < task_info->second;
                     ++p) {

                    Logger::Section section(Log::instance(), "pass");
                    Log::instance().write("pass", int(p));

                    const std::size_t ib = il[p];
                    const std::size_t ie = il[p + 1];

                    Log::instance().write("ib", int(ib));
                    Log::instance().write("ie", int(ie));

                    {
                        Logger::Section section(
                            Log::instance(),
                            "creating local prescreening matrices");
                        make_local_matrices(ib, ie);
                    }

                    std::unique_ptr<Integrals> d2(new Integrals);

                    {
                        Logger::Section section(Log::instance(), "creating d2");
                        make_d2(ib, ie, *d2);
                    }

                    {
                        Logger::Section section(Log::instance(),
                                                "transforming d0 -> d2");
                        trans12(ib, ie, *d2);
                    }

                    {
                        Logger::Section section(
                            Log::instance(),
                            "transforming d2 -> d4 and calculating partial "
                            "correction");

                        std::vector<bool> j_bool(m_n);
                        for (std::size_t i = 0; i < m_n; ++i)
                            j_bool[i] = false;

                        for (std::size_t i = ib; i < ie; ++i)
                            for (std::size_t j = 0; j < m_n; ++j)
                                if (m_eps <
                                    m_D(i, j) * m_max_D *
                                        (2 * m_A(i, j) * m_max_A +
                                         m_max_A_row(i) * m_max_A_row(j)))
                                    j_bool[j] = true;

                        std::vector<std::size_t> J;
                        for (std::size_t j = 0; j < m_n; ++j)
                            if (j_bool[j]) {
                                J.push_back(j);
                            }

                        const std::size_t microbatch_size = 16;

                        std::size_t no_microbatches =
                            J.size() / microbatch_size;
                        const std::size_t overhead = J.size() % microbatch_size;
                        if (overhead)
                            no_microbatches++;

                        std::size_t first = 0;

                        for (std::size_t i = 0; i < no_microbatches; ++i) {

                            std::size_t size;
                            if (i == no_microbatches - 1 && overhead) {
                                size = overhead;
                            } else {
                                size = microbatch_size;
                            }

                            std::unique_ptr<Integrals> partial_d3(
                                new Integrals);

                            {
                                Logger::Section section(Log::instance(),
                                                        "creating partial d3");
                                make_partial_d3(
                                    ib, ie, &J[first], size, *partial_d3);
                            }

                            {
                                Logger::Section section(
                                    Log::instance(),
                                    "transforming d2 -> partial d3");
                                trans_partial_3(
                                    ib, ie, &J[first], size, *d2, *partial_d3);
                            }

                            std::unique_ptr<Integrals> partial_d3up(
                                new Integrals);

                            {
                                Logger::Section section(
                                    Log::instance(), "creating partial d3up");
                                make_partial_d3up(
                                    ib, ie, &J[first], size, *partial_d3up);
                            }

                            {
                                Logger::Section section(
                                    Log::instance(),
                                    "transforming d2 -> partial d3up");
                                trans_partial_3up(ib,
                                                  ie,
                                                  &J[first],
                                                  size,
                                                  *d2,
                                                  *partial_d3up);
                            }

                            std::unique_ptr<Integrals> partial_d4(
                                new Integrals);

                            {
                                Logger::Section section(Log::instance(),
                                                        "creating partial d4");
                                make_partial_d4(
                                    ib, ie, &J[first], size, *partial_d4);
                            }

                            {
                                Logger::Section section(
                                    Log::instance(),
                                    "transforming partial d3 -> partial d4");
                                trans_partial_4(ib,
                                                ie,
                                                &J[first],
                                                size,
                                                *partial_d3,
                                                *partial_d4);
                            }

                            std::unique_ptr<Integrals> partial_d4up(
                                new Integrals);

                            {
                                Logger::Section section(
                                    Log::instance(), "creating partial d4up");
                                make_partial_d4up(
                                    ib, ie, &J[first], size, *partial_d4up);
                            }

                            {
                                Logger::Section section(Log::instance(),
                                                        "transforming partial "
                                                        "d3up -> partial d4up");
                                trans_partial_4(ib,
                                                ie,
                                                &J[first],
                                                size,
                                                *partial_d3up,
                                                *partial_d4up);
                            }

                            std::unique_ptr<Integrals> partial_d5up(
                                new Integrals);

                            {
                                Logger::Section section(Log::instance(),
                                                        "creating partial d5");
                                make_partial_d5up(
                                    ib, ie, &J[first], size, *partial_d5up);
                            }

                            {
                                Logger::Section section(Log::instance(),
                                                        "transforming partial "
                                                        "d4up -> partial d5up");
                                trans_partial_5up(ib,
                                                  ie,
                                                  &J[first],
                                                  size,
                                                  *partial_d4up,
                                                  *partial_d5up);
                            }

                            partial_d3up.reset(0);

                            std::unique_ptr<Integrals> partial_d4dn(
                                new Integrals);

                            {
                                Logger::Section section(
                                    Log::instance(), "creating partial d4dn");
                                make_partial_d4dn(
                                    ib, ie, &J[first], size, *partial_d4dn);
                            }

                            {
                                Logger::Section section(
                                    Log::instance(),
                                    "transforming partial d3 -> partial d4dn");
                                trans_partial_4dn(ib,
                                                  ie,
                                                  &J[first],
                                                  size,
                                                  *partial_d3,
                                                  *partial_d4dn);
                            }

                            partial_d3.reset(0);

                            std::unique_ptr<Integrals_sh> partial_d_sh;
                            partial_d_sh.reset(new Integrals_sh);
                            {
                                Logger::Section section(
                                    Log::instance(), "creating partial d_sh");
                                make_partial_d_sh(*partial_d_sh, *partial_d4);
                            }

                            {
                                Logger::Section section(
                                    Log::instance(),
                                    "calculating partial energy contribution");
                                partial_e2_contrib -=
                                    energy_partial_contribution(*partial_d_sh,
                                                                *partial_d4) *
                                    w;
                            }

                            partial_d_sh.reset(new Integrals_sh);
                            {
                                Logger::Section section(
                                    Log::instance(),
                                    "creating partial d_sh_up");
                                make_partial_d_sh_up(*partial_d_sh,
                                                     *partial_d4up);
                            }

                            {
                                Logger::Section section(
                                    Log::instance(),
                                    "calculating partial Rup contribution");
                                partial_Rup_contrib -=
                                    Rup_partial_contribution(*partial_d_sh,
                                                             *partial_d5up) *
                                    w;
                            }

                            partial_d_sh.reset(new Integrals_sh);
                            {
                                Logger::Section section(
                                    Log::instance(),
                                    "creating partial d_sh_dn");
                                make_partial_d_sh_dn(*partial_d_sh,
                                                     *partial_d4dn);
                            }

                            {
                                Logger::Section section(
                                    Log::instance(),
                                    "calculating partial Rdn contribution");
                                partial_Rdn_contrib -=
                                    Rdn_partial_contribution(*partial_d_sh,
                                                             *partial_d4dn) *
                                    w;
                            }

                            first += microbatch_size;
                        } // microbatch
                    }     // d2->d4
                }         // pass
            }             // task
        }                 // parallel

        double e2_contrib = 0;

        MPI::COMM_WORLD.Allreduce(
            &partial_e2_contrib, &e2_contrib, 1, MPI::DOUBLE, MPI::SUM);
        m_e2 += e2_contrib;

        Log::instance().write("partial MP2 energy", m_e2);

        arma::mat Rup_contrib(m_n, m_n);

        MPI::COMM_WORLD.Allreduce(&(partial_Rup_contrib(0, 0)),
                                  &(Rup_contrib(0, 0)),
                                  m_n * m_n,
                                  MPI::DOUBLE,
                                  MPI::SUM);

        arma::mat Rdn_contrib(m_n, m_n);

        MPI::COMM_WORLD.Allreduce(&(partial_Rdn_contrib(0, 0)),
                                  &(Rdn_contrib(0, 0)),
                                  m_n * m_n,
                                  MPI::DOUBLE,
                                  MPI::SUM);

        double e2_u = 0;
        for (std::size_t k = 0; k < m_n; ++k)
            for (std::size_t kp = 0; kp < m_n; ++kp)
                e2_u += m_X(k, kp) * Rup_contrib(kp, k);

        double e2_d = 0;
        for (std::size_t l = 0; l < m_n; ++l)
            for (std::size_t lp = 0; lp < m_n; ++lp)
                e2_d += m_Y(l, lp) * Rdn_contrib(lp, l);

        Log::instance().write("e2c", e2_contrib);
        Log::instance().write("e2u", e2_u);
        Log::instance().write("e2d", e2_d);

        const arma::mat Y1_up_contrib = P_xi_series(P, F, Rup_contrib, t);
        // create_Y1(P, t, Rup_contrib);
        const arma::mat Y1_dn_contrib = P_xi_series(Q, F, Rdn_contrib, -t);
        // create_Y1(Q, -t, Rdn_contrib);
        const arma::mat Y2_up_contrib = F_xi_series(P, F, Rup_contrib, t);
        // create_Y2(P, t, Rup_contrib);
        const arma::mat Y2_dn_contrib = F_xi_series(Q, F, Rdn_contrib, -t);
        // create_Y2(m_Q, -t, Rdn_contrib);

        const arma::mat tPF = t * PF;
        const arma::mat tQF = t * QF;

        const arma::mat fake_P = Y2_up_contrib + Y2_dn_contrib;

        pfm->set_density_matrix(fake_P, fake_P);

        const arma::mat fake_J = pfm->coulomb_matrix();
        Log::instance().write("fake J matrix", fake_J);
        const arma::mat fake_K = pfm->exchange_matrix(SPIN_ALPHA);
        const arma::mat fake_F = fake_J + fake_K;

        const arma::mat cal_P_contrib = Y1_up_contrib - Y1_dn_contrib + fake_F +
                                        Rup_contrib * expmat(tPF) -
                                        Rdn_contrib * expmat(-tQF);

        const arma::mat cal_F_contrib = Y2_up_contrib + Y2_dn_contrib;

        cal_F += cal_F_contrib;
        cal_P += cal_P_contrib;
    } // quadrature point

    Log::instance().write("MP2 energy correction", m_e2);

    DCPHF dcphf(system, two_e_int_eng_factory->make(system), S, P, F, 1e-6);

    arma::vec e_xi(3, arma::fill::zeros);

    const arma::mat Z = dcphf.solve(cal_P);

    OS1MultipoleIntegralEngine mie(*system);

    for (int i = 0; i < 3; ++i) {
        const arma::mat& F_xi = -mie.dipole_matrices()[i];

        Log::instance().write("F_xi matrix", F_xi);

        const arma::mat F_xiPS = F_xi * PS;

        // Apparently incorrect formula from
        // schweizer2008:mp2_energy_gradients
        // const arma::mat B_xi =
        //    -F_xiPS - prod(PS, F_xi) - prod(SP, F_xiPS);

        // So we use formula from
        // ochsenfeld1997:reformulation_coupled_perturbed
        // instead

        const arma::mat B_xi = -F_xiPS - SP * F_xi + 2 * SP * F_xiPS;

        const arma::mat ZtB_xi = arma::trans(Z) * B_xi;

        e_xi(i) = 2 * arma::trace(ZtB_xi) + 2 * arma::trace(cal_F * F_xi);
    }

    Log::instance().write("e_xi", e_xi);

    PDCPHF pdcphf(system, two_e_int_eng_factory->make(system), S, P, F, 1e-6);

    for (int i = 0; i < 3; ++i) {
        const arma::mat F_xi = -mie.dipole_matrices()[i];

        const arma::mat F_xiPS = F_xi * PS;

        const arma::mat B_xi = -F_xiPS - SP * F_xi + 2 * SP * F_xiPS;

        const arma::mat P_xi = dcphf.solve(B_xi);

        e_xi(i) = 2 * trace(cal_P * P_xi) + 2 * trace(cal_F * F_xi);
    }

    Log::instance().write("pe_xi", e_xi);
}

unsigned long long RHF_LT_AO_MP2_EFieldGradient::subd2_size(std::size_t ib,
                                                            std::size_t ie)
{
    unsigned long long s = 0;

    arma::mat AD2(ie - ib, m_n);
    for (std::size_t i = ib; i < ie; ++i)
        for (std::size_t j = 0; j < m_n; ++j)
            AD2(i - ib, j) = 2 * m_A(i, j) * m_D(i, j);

    arma::vec maxAD2(ie - ib);
    for (std::size_t i = ib; i < ie; ++i)
        maxAD2(i - ib) = 2 * m_max_A_row(i) * m_max_D_row(i);

    {
        std::unique_ptr<Dispatcher> d = dispatcher(m_n);

        while (Dispatcher::TaskInfo task_info = d->get_task()) {

            for (std::size_t l = task_info->first; l < task_info->second; ++l) {

                std::size_t l2size = 0;

                for (std::size_t k = 0; k <= l; ++k) {
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

                s += 3 * sizeof(void*&) + l2size * (sizeof(std::size_t) +
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
                        if (m_eps < std::max(maxAD2i * AklDkl +
                                                 maxBkAkl * maxDi * m_C(i, l),
                                             maxAD2i * AklDlk +
                                                 maxBlAkl * maxDi * m_C(i, k)))
                            m_indices_buf3[l3size++] = i;
                    }

                    if (!l3size) {
                        continue;
                    }

                    s += 3 * sizeof(void*) +
                         l3size *
                             (sizeof(std::size_t) + sizeof(Integrals::Level4*));

                    for (std::size_t ii = 0; ii < l3size; ++ii) {

                        const std::size_t i = m_indices_buf3[ii];

                        std::size_t l4size = 0;
                        const double Cil = m_C(i, l);
                        const double Cik = m_C(i, k);
                        const double AklCil = Akl * Cil;
                        const double AklCik = Akl * Cik;

                        for (std::size_t j = 0; j < m_n; ++j) {
                            const double AD2ij = AD2(i - ib, j);
                            const double Dij = m_D(i, j);
                            if (m_eps <
                                std::max(
                                    AD2ij * AklDkl + Dij * AklCil * m_B(k, j),
                                    AD2ij * AklDlk + Dij * AklCik * m_B(l, j)))
                                m_indices_buf4[l4size++] = j;
                        }

                        if (l4size)
                            s +=
                                sizeof(std::size_t) + sizeof(std::size_t*) +
                                sizeof(double*) +
                                l4size * (sizeof(std::size_t) + sizeof(double));
                    }
                }
            }
        }
    }

    //     unsigned long long t;

    //     MPI::COMM_WORLD.Allreduce(&s, &t, 1, MPI::UNSIGNED_LONG_LONG,
    //     MPI::SUM);

    //     return t;

    double t;

    double ss = s;

    MPI::COMM_WORLD.Allreduce(&ss, &t, 1, MPI::DOUBLE, MPI::SUM);

    return (unsigned long long)t;
}

void RHF_LT_AO_MP2_EFieldGradient::trans12(std::size_t ib,
                                           std::size_t ie,
                                           Integrals& d2)
{
    m_requests.clear();
    double* buf_ptr = m_buf.data();

    arma::mat BC2(ie - ib, m_n);
    for (std::size_t i = ib; i < ie; ++i)
        for (std::size_t j = 0; j < m_n; ++j)
            BC2(i - ib, j) = 2 * m_B(i, j) * m_C(i, j);

    const ShellPairIndexGenerator a_begin(m_no_shells);
    const ShellPairIndexGenerator a_end = a_begin.make_end();

    for (ShellPairIndexGenerator a = a_begin; a != a_end; ++a) {
        const std::size_t r = (*a)[0];
        const std::size_t s = (*a)[1];

        if (m_eps >= m_A_sh(r, s) * m_max_A *
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
            for (std::size_t kk = 0; kk < rs && kk + rf <= ll + sf; ++kk) {
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
                            std::max(BC2ij * AklDkl + m_C(i, l) * AklDkj * Bij,
                                     BC2ij * AklDlk + m_C(i, k) * AklDlj * Bij))
                            m_indices_buf4[l4size++] = i;
                    }

                    if (l4size) {
                        rs_significant = true;
                        Integrals::Level4* l4 = new Integrals::Level4(l4size);
                        partial_d1[ll * rs * m_n + kk * m_n + j] = l4;
                        std::memcpy(l4->indices,
                                    m_indices_buf4.get(),
                                    l4size * sizeof(std::size_t));
                    }
                }
            }

        if (!rs_significant)
            continue;

        const ShellPairIndexGenerator b_begin(m_no_shells);
        const ShellPairIndexGenerator b_end = b_begin.make_end();

        for (ShellPairIndexGenerator b = b_begin; b != b_end; ++b) {
            const std::size_t p = (*b)[0];
            const std::size_t q = (*b)[1];

            const double max_XY_sh = std::max(m_X_local_sh(p) * m_max_Y_sh(q),
                                              m_X_local_sh(q) * m_max_Y_sh(p));

            if (m_eps < max_XY_sh * m_A_sh(p, q) * m_A_sh(r, s)) {

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

                ShellQuartetIndex sqi = {{static_cast<unsigned>(p),
                                          static_cast<unsigned>(q),
                                          static_cast<unsigned>(r),
                                          static_cast<unsigned>(s)}};

                if (m_schwartz.max_integral(sqi) * D_s >= m_eps) {
                    const TwoElectronIntegralEngine::Request request = {
                        sqi, false, buf_ptr};
                    m_requests.push_back(request);

                    buf_ptr += m_shell_sizes[sqi[0]] * m_shell_sizes[sqi[1]] *
                               m_shell_sizes[sqi[2]] * m_shell_sizes[sqi[3]];
                }
            }

            const std::size_t no_requests = m_requests.size();
            if (no_requests == m_max_no_requests || boost::next(b) == b_end) {
                m_2ei->calc(m_requests);

                for (std::size_t j = 0; j < no_requests; ++j) {

                    const TwoElectronIntegralEngine::Request& req =
                        m_requests[j];

                    double* result = req.results;

                    const std::size_t p = req.shells[0];
                    const std::size_t q = req.shells[1];

                    const std::size_t ps = m_shell_sizes[p];
                    const std::size_t qs = m_shell_sizes[q];

                    const std::size_t pf = m_first_contraction_in_shell[p];
                    const std::size_t qf = m_first_contraction_in_shell[q];

                    for (std::size_t l = sf; l < sf + ss; ++l)
                        for (std::size_t k = rf; k < std::min(l + 1, rf + rs);
                             ++k)
                            for (std::size_t j = qf; j < qf + qs; ++j)
                                for (std::size_t i = pf;
                                     i < std::min(j + 1, pf + ps);
                                     ++i) {
                                    const double g =
                                        *(result +
                                          ((((i - pf) * qs + (j - qf)) * rs +
                                            (k - rf)) *
                                           ss) +
                                          (l - sf));

                                    const double ag = std::abs(g);

                                    if (m_eps < ag * m_X_local(i)) {
                                        Integrals::Level4* l4 =
                                            partial_d1[(l - sf) * rs * m_n +
                                                       (k - rf) * m_n + j];
                                        if (l4) {
                                            const std::size_t l4size = l4->size;
                                            for (std::size_t gamma_j = 0;
                                                 gamma_j < l4size;
                                                 ++gamma_j) {
                                                const std::size_t gamma =
                                                    l4->indices[gamma_j];
                                                l4->values[gamma_j] +=
                                                    g * m_X(i, gamma);
                                            }
                                        }
                                    }

                                    if (i != j && m_eps < ag * m_X_local(j)) {
                                        Integrals::Level4* l4 =
                                            partial_d1[(l - sf) * rs * m_n +
                                                       (k - rf) * m_n + i];
                                        if (l4) {
                                            const std::size_t l4size = l4->size;
                                            for (std::size_t gamma_j = 0;
                                                 gamma_j < l4size;
                                                 ++gamma_j) {
                                                const std::size_t gamma =
                                                    l4->indices[gamma_j];
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

            for (std::size_t k = rf; k < std::min(rs + rf, l + 1); ++k) {

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
                        partial_d1[(l - sf) * rs * m_n + (k - rf) * m_n + j];
                    if (!l4)
                        continue;

                    for (std::size_t ii = 0; ii < l4->size; ++ii) {
                        const double g = l4->values[ii];
                        const std::size_t i = l4->indices[ii];

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
                            const std::size_t gamma = ll4->indices[gamma_j];
                            ll4->values[gamma_j] += g * m_Y(j, gamma);
                        }
                    }
                }
            }
        }

        for (std::size_t i = 0; i < rs * ss * m_n; ++i)
            delete partial_d1[i];
    }
}

void RHF_LT_AO_MP2_EFieldGradient::make_d2(std::size_t ib,
                                           std::size_t ie,
                                           Integrals& d2)
{
#ifdef HAVE_MALLINFO
    struct mallinfo minfo0 = mallinfo();
#endif

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
            const double pr0 =
                m_max_D * m_A(k, l) *
                std::max(
                    2 * m_max_A * m_D(k, l) + m_max_C_col(l) * m_max_B_row(k),
                    2 * m_max_A * m_D(l, k) + m_max_C_col(k) * m_max_B_row(l));
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
                if (m_eps <
                    std::max(maxAD2i * AklDkl + maxBkAkl * maxDi * m_C(i, l),
                             maxAD2i * AklDlk + maxBlAkl * maxDi * m_C(i, k)))
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
                    const double AD2ij = AD2(i - ib, j);
                    const double Dij = m_D(i, j);
                    if (m_eps <
                        std::max(AD2ij * AklDkl + Dij * AklCil * m_B(k, j),
                                 AD2ij * AklDlk + Dij * AklCik * m_B(l, j)))
                        m_indices_buf4[l4size++] = j;
                }

                if (l4size) {
                    Integrals::Level4* l4 = new Integrals::Level4(l4size);
                    (*l3)[ii] = std::make_pair(i, l4);
                    std::memcpy(l4->indices,
                                m_indices_buf4.get(),
                                l4size * sizeof(std::size_t));
                } else {
                    (*l3)[ii] = std::make_pair(i, (Integrals::Level4*)0);
                }
            }
        }
    }
#ifdef HAVE_MALLINFO
    struct mallinfo minfo1 = mallinfo();

    Log::instance().write("tree size (MB)",
                          (minfo1.uordblks - minfo0.uordblks) / 1048576.0);
#endif
}

void RHF_LT_AO_MP2_EFieldGradient::make_partial_d3(std::size_t ib,
                                                   std::size_t ie,
                                                   std::size_t* J,
                                                   std::size_t J_size,
                                                   Integrals& d3)
{
#ifdef HAVE_MALLINFO
    struct mallinfo minfo0 = mallinfo();
#endif

    d3.roots.resize(m_n, 0);
    for (std::size_t i = ib; i < ie; ++i) {

        std::size_t l2size = 0;
        for (std::size_t ji = 0; ji < J_size; ++ji) {
            const std::size_t j = J[ji];
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

            for (std::size_t li = 0; li < l3size; ++li) {
                const std::size_t l = m_indices_buf3[li];

                std::size_t l4size = 0;
                for (std::size_t k = 0; k < m_n; ++k) {
                    if (m_eps < m_D(i, j) * m_B(k, l) *
                                    (2 * m_A(i, j) * m_C(k, l) +
                                     m_C(i, l) * m_A(k, j))) {
                        m_indices_buf4[l4size++] = k;
                    }
                }

                if (!l4size) {
                    (*l3)[li] = std::make_pair(l, (Integrals::Level4*)0);
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

    Log::instance().write("tree size (MB)",
                          (minfo1.uordblks - minfo0.uordblks) / 1048576.0);
#endif
}

void RHF_LT_AO_MP2_EFieldGradient::make_partial_d3up(std::size_t ib,
                                                     std::size_t ie,
                                                     std::size_t* J,
                                                     std::size_t J_size,
                                                     Integrals& d3)
{
#ifdef HAVE_MALLINFO
    struct mallinfo minfo0 = mallinfo();
#endif

    d3.roots.resize(m_n, 0);
    for (std::size_t i = ib; i < ie; ++i) {

        std::size_t l2size = 0;
        for (std::size_t ji = 0; ji < J_size; ++ji) {
            const std::size_t j = J[ji];
            if (m_eps < m_D(i, j) * m_max_A *
                            (2 * m_A(i, j) * m_max_D +
                             m_max_C_row(i) * m_max_B_col(j))) {
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
                if (m_eps < m_D(i, j) * m_max_A_row(l) *
                                (2 * m_A(i, j) * m_max_D_col(l) +
                                 m_C(i, l) * m_max_B_col(j))) {
                    m_indices_buf3[l3size++] = l;
                }
            }

            if (!l3size) {
                (*l2)[ji] = std::make_pair(j, (Integrals::Level3*)0);
                continue;
            }

            Integrals::Level3* l3 = new Integrals::Level3(l3size);
            (*l2)[ji] = std::make_pair(j, l3);

            for (std::size_t li = 0; li < l3size; ++li) {
                const std::size_t l = m_indices_buf3[li];

                std::size_t l4size = 0;
                for (std::size_t k = 0; k < m_n; ++k) {
                    if (m_eps < m_D(i, j) * m_A(k, l) *
                                    (2 * m_A(i, j) * m_D(k, l) +
                                     m_C(i, l) * m_B(k, j))) {
                        m_indices_buf4[l4size++] = k;
                    }
                }

                if (!l4size) {
                    (*l3)[li] = std::make_pair(l, (Integrals::Level4*)0);
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

    Log::instance().write("tree size (MB)",
                          (minfo1.uordblks - minfo0.uordblks) / 1048576.0);
#endif
}

void RHF_LT_AO_MP2_EFieldGradient::make_partial_d4(std::size_t ib,
                                                   std::size_t ie,
                                                   std::size_t* J,
                                                   std::size_t J_size,
                                                   Integrals& d4)
{
#ifdef HAVE_MALLINFO
    struct mallinfo minfo0 = mallinfo();
#endif

    d4.roots.resize(m_n, 0);
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
            for (std::size_t k = 0; k < m_n; ++k) {
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
                for (std::size_t l = 0; l < m_n; ++l) {
                    if (m_eps < m_D(i, j) * m_D(k, l) *
                                    (2 * m_A(i, j) * m_A(k, l) +
                                     m_A(i, l) * m_A(k, j))) {
                        m_indices_buf4[l4size++] = l;
                    }
                }

                if (!l4size) {
                    (*l3)[ki] = std::make_pair(k, (Integrals::Level4*)0);
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

    Log::instance().write("tree size (MB)",
                          (minfo1.uordblks - minfo0.uordblks) / 1048576.0);
#endif
}

void RHF_LT_AO_MP2_EFieldGradient::make_partial_d4up(std::size_t ib,
                                                     std::size_t ie,
                                                     std::size_t* J,
                                                     std::size_t J_size,
                                                     Integrals& d4)
{
#ifdef HAVE_MALLINFO
    struct mallinfo minfo0 = mallinfo();
#endif

    d4.roots.resize(m_n, 0);
    for (std::size_t i = ib; i < ie; ++i) {

        std::size_t l2size = 0;
        for (std::size_t ji = 0; ji < J_size; ++ji) {
            const std::size_t j = J[ji];
            if (m_eps < m_D(i, j) * m_max_C *
                            (2 * m_A(i, j) * m_max_B +
                             m_max_A_row(i) * m_max_B_col(j))) {
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
            for (std::size_t k = 0; k < m_n; ++k) {
                if (m_eps < m_D(i, j) * m_max_C_row(k) *
                                (2 * m_A(i, j) * m_max_B_row(k) +
                                 m_max_A_row(i) * m_B(k, j))) {
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
                for (std::size_t l = 0; l < m_n; ++l) {
                    if (m_eps < m_D(i, j) * m_C(k, l) *
                                    (2 * m_A(i, j) * m_B(k, l) +
                                     m_A(i, l) * m_B(k, j))) {
                        m_indices_buf4[l4size++] = l;
                    }
                }

                if (!l4size) {
                    (*l3)[ki] = std::make_pair(k, (Integrals::Level4*)0);
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

    Log::instance().write("tree size (MB)",
                          (minfo1.uordblks - minfo0.uordblks) / 1048576.0);
#endif
}

void RHF_LT_AO_MP2_EFieldGradient::make_partial_d4dn(std::size_t ib,
                                                     std::size_t ie,
                                                     std::size_t* J,
                                                     std::size_t J_size,
                                                     Integrals& d4)
{
#ifdef HAVE_MALLINFO
    struct mallinfo minfo0 = mallinfo();
#endif

    d4.roots.resize(m_n, 0);
    for (std::size_t i = ib; i < ie; ++i) {

        std::size_t l2size = 0;
        for (std::size_t ji = 0; ji < J_size; ++ji) {
            const std::size_t j = J[ji];
            if (m_eps < m_D(i, j) * m_max_B *
                            (2 * m_A(i, j) * m_max_C +
                             m_max_C_row(i) * m_max_A_row(j))) {
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
            for (std::size_t k = 0; k < m_n; ++k) {
                if (m_eps < m_D(i, j) * m_max_B_row(k) *
                                (2 * m_A(i, j) * m_max_C_row(k) +
                                 m_max_C_row(i) * m_A(k, j))) {
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
                for (std::size_t l = 0; l < m_n; ++l) {
                    if (m_eps < m_D(i, j) * m_B(k, l) *
                                    (2 * m_A(i, j) * m_C(k, l) +
                                     m_C(i, l) * m_A(k, j))) {
                        m_indices_buf4[l4size++] = l;
                    }
                }

                if (!l4size) {
                    (*l3)[ki] = std::make_pair(k, (Integrals::Level4*)0);
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

    Log::instance().write("tree size (MB)",
                          (minfo1.uordblks - minfo0.uordblks) / 1048576.0);
#endif
}

void RHF_LT_AO_MP2_EFieldGradient::make_partial_d5up(std::size_t ib,
                                                     std::size_t ie,
                                                     std::size_t* J,
                                                     std::size_t J_size,
                                                     Integrals& d5)
{
#ifdef HAVE_MALLINFO
    struct mallinfo minfo0 = mallinfo();
#endif

    d5.roots.resize(m_n, 0);
    for (std::size_t i = ib; i < ie; ++i) {

        std::size_t l2size = 0;
        for (std::size_t ji = 0; ji < J_size; ++ji) {
            const std::size_t j = J[ji];
            if (m_eps < m_D(i, j) * m_max_C *
                            (2 * m_A(i, j) * m_max_B +
                             m_max_A_row(i) * m_max_B_col(j))) {
                m_indices_buf2[l2size++] = j;
            }
        }

        if (!l2size) {
            d5.roots[i] = 0;
            continue;
        }

        Integrals::Level2* l2 = new Integrals::Level2(l2size);
        d5.roots[i] = l2;

        for (std::size_t ji = 0; ji < l2size; ++ji) {
            const std::size_t j = m_indices_buf2[ji];

            std::size_t l3size = 0;
            for (std::size_t l = 0; l < m_n; ++l) {
                if (m_eps < m_D(i, j) * m_max_C_col(l) *
                                (2 * m_A(i, j) * m_max_B_col(l) +
                                 m_A(i, l) * m_max_B_col(j))) {
                    m_indices_buf3[l3size++] = l;
                }
            }

            if (!l3size) {
                (*l2)[ji] = std::make_pair(j, (Integrals::Level3*)0);
                continue;
            }

            Integrals::Level3* l3 = new Integrals::Level3(l3size);
            (*l2)[ji] = std::make_pair(j, l3);

            for (std::size_t li = 0; li < l3size; ++li) {
                const std::size_t l = m_indices_buf3[li];

                std::size_t l4size = 0;
                for (std::size_t k = 0; k < m_n; ++k) {
                    if (m_eps < m_D(i, j) * m_C(k, l) *
                                    (2 * m_A(i, j) * m_B(k, l) +
                                     m_A(i, l) * m_B(k, j))) {
                        m_indices_buf4[l4size++] = k;
                    }
                }

                if (!l4size) {
                    (*l3)[li] = std::make_pair(l, (Integrals::Level4*)0);
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

    Log::instance().write("tree size (MB)",
                          (minfo1.uordblks - minfo0.uordblks) / 1048576.0);
#endif
}

void RHF_LT_AO_MP2_EFieldGradient::trans_partial_3(std::size_t ib,
                                                   std::size_t ie,
                                                   std::size_t* J_set,
                                                   std::size_t J_size,
                                                   Integrals& d2,
                                                   Integrals& d3)
{
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

            for (std::size_t ii = I; (*l3)[ii].first < ie && ii < l3size;
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

                for (std::size_t jj = J; l4->indices[jj] < je && jj < l4size;
                     ++jj) {
                    const std::size_t j = l4->indices[jj];
                    trans3partial(i, j, k, l, l4->values[jj], d3);
                }
            }
        }
    }
}

void RHF_LT_AO_MP2_EFieldGradient::trans_partial_3up(std::size_t ib,
                                                     std::size_t ie,
                                                     std::size_t* J_set,
                                                     std::size_t J_size,
                                                     Integrals& d2,
                                                     Integrals& d3)
{
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

            for (std::size_t ii = I; (*l3)[ii].first < ie && ii < l3size;
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

                for (std::size_t jj = J; l4->indices[jj] < je && jj < l4size;
                     ++jj) {
                    const std::size_t j = l4->indices[jj];
                    trans3partialup(i, j, k, l, l4->values[jj], d3);
                }
            }
        }
    }
}

void RHF_LT_AO_MP2_EFieldGradient::trans_partial_5up(std::size_t ib,
                                                     std::size_t ie,
                                                     std::size_t* J_set,
                                                     std::size_t J_size,
                                                     Integrals& d4,
                                                     Integrals& d5)
{
    const std::size_t jb = J_set[0];
    const std::size_t je = J_set[J_size - 1] + 1;

    for (std::size_t i = ib; i < ie; ++i) {
        Integrals::Level2* l2 = d4.roots[i];
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

        for (std::size_t jj = J; (*l2)[jj].first < je && jj < l2size; ++jj) {
            Integrals::Level3* l3 = (*l2)[jj].second;
            if (!l3)
                continue;

            const std::size_t j = (*l2)[jj].first;

            for (std::size_t ki = 0; ki < l3->size(); ++ki) {
                Integrals::Level4* l4 = (*l3)[ki].second;
                if (!l4)
                    continue;

                const std::size_t k = (*l3)[ki].first;
                const std::size_t l4size = l4->size;

                for (std::size_t li = 0; li < l4size; ++li)
                    trans5partialup(
                        i, j, k, l4->indices[li], l4->values[li], d5);
            }
        }
    }
}

void RHF_LT_AO_MP2_EFieldGradient::trans_partial_4(std::size_t ib,
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

        for (std::size_t jj = J; (*l2)[jj].first < je && jj < l2size; ++jj) {
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
                    trans4partial(i, j, l4->indices[ki], l, l4->values[ki], d4);
            }
        }
    }
}

void RHF_LT_AO_MP2_EFieldGradient::trans_partial_4dn(std::size_t ib,
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

        for (std::size_t jj = J; (*l2)[jj].first < je && jj < l2size; ++jj) {
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
                    trans4partialdn(
                        i, j, l4->indices[ki], l, l4->values[ki], d4);
            }
        }
    }
}

void RHF_LT_AO_MP2_EFieldGradient::trans3partial(std::size_t i,
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
            for (std::size_t gamma_k = 0; gamma_k < l4->size; ++gamma_k) {
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
                for (std::size_t gamma_k = 0; gamma_k < l4->size; ++gamma_k) {
                    const std::size_t gamma = l4->indices[gamma_k];
                    l4->values[gamma_k] += g * m_X(l, gamma);
                }
            }
        }
    }
}

void RHF_LT_AO_MP2_EFieldGradient::trans3partialup(std::size_t i,
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
            for (std::size_t gamma_k = 0; gamma_k < l4->size; ++gamma_k) {
                const std::size_t gamma = l4->indices[gamma_k];
                // l4->values[gamma_k] += g * Xk[gamma];
                if (gamma == k) {
                    l4->values[gamma_k] += g;
                    break;
                }
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
                for (std::size_t gamma_k = 0; gamma_k < l4->size; ++gamma_k) {
                    const std::size_t gamma = l4->indices[gamma_k];
                    // l4->values[gamma_k] += g * Xl[gamma];
                    if (gamma == l) {
                        l4->values[gamma_k] += g;
                        break;
                    }
                }
            }
        }
    }
}

void RHF_LT_AO_MP2_EFieldGradient::trans4partial(std::size_t i,
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

void RHF_LT_AO_MP2_EFieldGradient::trans4partialdn(std::size_t i,
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
        // l4->values[gamma_l] += g * Yl[gamma];
        if (gamma == l) {
            l4->values[gamma_l] += g;
            break;
        }
    }
}

void RHF_LT_AO_MP2_EFieldGradient::trans5partialup(std::size_t i,
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

    std::size_t li;

    for (li = 0; li < l3size; ++li) {
        if ((*l3)[li].first == l)
            break;
    }

    if (li == l3size)
        return;

    Integrals::Level4* l4 = (*l3)[li].second;

    if (!l4)
        return;

    for (std::size_t gamma_k = 0; gamma_k < l4->size; ++gamma_k) {
        const std::size_t gamma = l4->indices[gamma_k];
        // l4->values[gamma_l] += g * Yl[gamma];
        if (gamma == k) {
            l4->values[gamma_k] += g;
            break;
        }
    }
}

void RHF_LT_AO_MP2_EFieldGradient::make_partial_d_sh(Integrals_sh& d_sh,
                                                     const Integrals& d4)
{
#ifdef HAVE_MALLINFO
    struct mallinfo minfo0 = mallinfo();
#endif
    d_sh.roots.resize(m_no_shells, 0);
    std::vector<std::size_t> tmp_sh(m_n);

    for (std::size_t i = 0; i < m_no_shells; ++i) {
        const unsigned pf = m_first_contraction_in_shell[i];
        const unsigned ps = m_shell_sizes[i];
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

                    const ShellQuartetIndex sqi = {{static_cast<unsigned>(I),
                                                    static_cast<unsigned>(J),
                                                    static_cast<unsigned>(K),
                                                    static_cast<unsigned>(L)}};
                    const ShellQuartetIndex sqi_2 = {
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

                    if (m_eps / 2 <
                        std::abs(g) * 2 * m_schwartz.max_integral(sqi)) {

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

    Log::instance().write("tree size (MB)",
                          (minfo1.uordblks - minfo0.uordblks) / 1048576.0);
#endif
}

void RHF_LT_AO_MP2_EFieldGradient::make_partial_d_sh_up(Integrals_sh& d_sh,
                                                        const Integrals& d4)
{
#ifdef HAVE_MALLINFO
    struct mallinfo minfo0 = mallinfo();
#endif
    d_sh.roots.resize(m_no_shells);
    std::vector<std::size_t> tmp_sh(m_n);

    for (std::size_t i = 0; i < m_no_shells; ++i) {
        const unsigned pf = m_first_contraction_in_shell[i];
        const unsigned ps = m_shell_sizes[i];
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
                    // const std::size_t K = tmp_sh[k];
                    const std::size_t L = tmp_sh[l];

                    std::size_t b;
                    std::size_t c;
                    std::size_t d;

                    Integrals_sh::Level2* ls2;
                    Integrals_sh::Level3* ls3;
                    Integrals_sh::Level4* ls4;

                    std::size_t nk = 0;
                    for (std::size_t K = 0; K < m_no_shells; ++K)
                        if (m_eps / 2 <
                            std::abs(g) * 2 * m_A_sh(I, J) * m_A_sh(K, L))
                            m_indices_buf2[nk++] = K;

                    if (nk) {

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

                        for (std::size_t Ki = 0; Ki < nk; ++Ki) {
                            std::size_t K = m_indices_buf2[Ki];

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
                    }

                    nk = 0;
                    for (std::size_t K = 0; K < m_no_shells; ++K)
                        if (m_eps / 2 <
                            std::abs(g) * m_A_sh(I, L) * m_A_sh(J, K))
                            m_indices_buf2[nk++] = K;

                    if (nk) {
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

                        for (std::size_t Ki = 0; Ki < nk; ++Ki) {
                            std::size_t K = m_indices_buf2[Ki];
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
    }
#ifdef HAVE_MALLINFO
    struct mallinfo minfo1 = mallinfo();

    Log::instance().write("tree size (MB)",
                          (minfo1.uordblks - minfo0.uordblks) / 1048576.0);
#endif
}

void RHF_LT_AO_MP2_EFieldGradient::make_partial_d_sh_dn(Integrals_sh& d_sh,
                                                        const Integrals& d4)
{
#ifdef HAVE_MALLINFO
    struct mallinfo minfo0 = mallinfo();
#endif
    d_sh.roots.resize(m_no_shells);
    std::vector<std::size_t> tmp_sh(m_n);

    for (std::size_t i = 0; i < m_no_shells; ++i) {
        const unsigned pf = m_first_contraction_in_shell[i];
        const unsigned ps = m_shell_sizes[i];
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
                    //                    const std::size_t L = tmp_sh[l];

                    std::size_t b;
                    std::size_t c;
                    std::size_t d;

                    Integrals_sh::Level2* ls2;
                    Integrals_sh::Level3* ls3;
                    Integrals_sh::Level4* ls4;

                    std::size_t nl = 0;

                    for (std::size_t L = 0; L < m_no_shells; ++L) {
                        if (m_eps / 2 <
                            std::abs(g) * 2 * m_A_sh(I, J) * m_A_sh(K, L))
                            m_indices_buf2[nl++] = L;
                    }

                    if (nl) {

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

                        for (std::size_t Li = 0; Li < nl; ++Li) {
                            std::size_t L = m_indices_buf2[Li];
                            for (d = 0; d < ls4->size(); ++d)
                                if ((*ls4)[d] == L)
                                    break;
                            if (d == ls4->size())
                                ls4->push_back(L);
                        }
                    }

                    nl = 0;
                    for (std::size_t L = 0; L < m_no_shells; ++L) {
                        if (m_eps / 2 <
                            std::abs(g) * m_A_sh(K, J) * m_A_sh(I, L))
                            m_indices_buf2[nl++] = L;
                    }

                    if (nl) {
                        if (d_sh.roots[I] == 0) {
                            ls2 = new Integrals_sh::Level2;
                            d_sh.roots[I] = ls2;
                        } else
                            ls2 = d_sh.roots[I];

                        for (std::size_t Li = 0; Li < nl; ++Li) {
                            std::size_t L = m_indices_buf2[Li];

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
    }
#ifdef HAVE_MALLINFO
    struct mallinfo minfo1 = mallinfo();

    Log::instance().write("tree size (MB)",
                          (minfo1.uordblks - minfo0.uordblks) / 1048576.0);
#endif
}

double
RHF_LT_AO_MP2_EFieldGradient::energy_partial_contribution(Integrals_sh& d_sh,
                                                          const Integrals& d4)
{

    m_requests.clear();
    double e2 = 0;
    double* buf_ptr = m_buf.data();

    const IJKLShellQuartetIndexIterator i_begin(&d_sh);
    const IJKLShellQuartetIndexIterator i_end = i_begin.make_end();
    for (IJKLShellQuartetIndexIterator i = i_begin; i != i_end; ++i) {
        const ShellQuartetIndex sqi = *i;
        const TwoElectronIntegralEngine::Request request = {
            sqi, false, buf_ptr};
        m_requests.push_back(request);

        buf_ptr += m_shell_sizes[sqi[0]] * m_shell_sizes[sqi[1]] *
                   m_shell_sizes[sqi[2]] * m_shell_sizes[sqi[3]];

        if (m_requests.size() == m_max_no_requests || boost::next(i) == i_end) {
            m_2ei->calc(m_requests);

            for (std::size_t j = 0; j < m_requests.size(); ++j) {
                const TwoElectronIntegralEngine::Request& r = m_requests[j];
                double* result = r.results;

                const std::size_t P = r.shells[0];
                const std::size_t Q = r.shells[1];
                const std::size_t R = r.shells[2];
                const std::size_t S = r.shells[3];

                const unsigned ps = m_shell_sizes[P];
                const unsigned qs = m_shell_sizes[Q];
                const unsigned rs = m_shell_sizes[R];
                const unsigned ss = m_shell_sizes[S];

                const unsigned pf = m_first_contraction_in_shell[P];
                const unsigned qf = m_first_contraction_in_shell[Q];
                const unsigned rf = m_first_contraction_in_shell[R];
                const unsigned sf = m_first_contraction_in_shell[S];

                for (std::size_t i = pf; i < pf + ps; ++i) {
                    for (std::size_t j = qf; j < qf + qs; ++j) {
                        for (std::size_t k = rf; k < rf + rs; ++k) {
                            for (std::size_t l = sf; l < sf + ss; ++l) {
                                double g = *result++;

                                Integrals::Level2* l2 = d4.roots[i];
                                if (!l2)
                                    continue;

                                if (m_eps / 2 <
                                    2 * std::abs(g) * m_D(i, j) * m_D(k, l)) {
                                    std::size_t dji;
                                    for (dji = 0; dji < l2->size(); ++dji)
                                        if ((*l2)[dji].first == j)
                                            break;
                                    if (dji != l2->size()) {
                                        std::size_t dki;
                                        Integrals::Level3* l3 =
                                            (*l2)[dji].second;
                                        if (l3) {
                                            for (dki = 0; dki < l3->size();
                                                 ++dki)
                                                if ((*l3)[dki].first == k)
                                                    break;
                                            if (dki != l3->size()) {
                                                std::size_t dli;
                                                Integrals::Level4* l4 =
                                                    (*l3)[dki].second;
                                                if (l4) {
                                                    for (dli = 0;
                                                         dli < l4->size;
                                                         ++dli)
                                                        if (l4->indices[dli] ==
                                                            l)
                                                            break;
                                                    if (dli != l4->size)
                                                        e2 += 2 * g *
                                                              l4->values[dli];
                                                }
                                            }
                                        }
                                    }
                                }

                                if (m_eps / 2 <
                                    std::abs(g) * m_D(i, l) * m_D(k, j)) {
                                    std::size_t dli;
                                    for (dli = 0; dli < l2->size(); ++dli)
                                        if ((*l2)[dli].first == l)
                                            break;
                                    if (dli != l2->size()) {
                                        std::size_t dki;
                                        Integrals::Level3* l3 =
                                            (*l2)[dli].second;
                                        if (l3) {
                                            for (dki = 0; dki < l3->size();
                                                 ++dki)
                                                if ((*l3)[dki].first == k)
                                                    break;
                                            if (dki != l3->size()) {
                                                std::size_t dji;
                                                Integrals::Level4* l4 =
                                                    (*l3)[dki].second;
                                                if (l4) {
                                                    for (dji = 0;
                                                         dji < l4->size;
                                                         ++dji)
                                                        if (l4->indices[dji] ==
                                                            j)
                                                            break;
                                                    if (dji != l4->size)
                                                        e2 += -g *
                                                              l4->values[dji];
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

arma::mat
RHF_LT_AO_MP2_EFieldGradient::Rup_partial_contribution(Integrals_sh& d_sh,
                                                       const Integrals& d4)
{
    arma::mat Rup = arma::zeros<arma::mat>(m_n, m_n);

    double* buf_ptr = m_buf.data();

    const IJKLShellQuartetIndexIterator i_begin(&d_sh);
    const IJKLShellQuartetIndexIterator i_end = i_begin.make_end();
    for (IJKLShellQuartetIndexIterator i = i_begin; i != i_end; ++i) {
        const ShellQuartetIndex sqi = *i;
        const TwoElectronIntegralEngine::Request request = {
            sqi, false, buf_ptr};
        m_requests.push_back(request);

        buf_ptr += m_shell_sizes[sqi[0]] * m_shell_sizes[sqi[1]] *
                   m_shell_sizes[sqi[2]] * m_shell_sizes[sqi[3]];

        if (m_requests.size() == m_max_no_requests || boost::next(i) == i_end) {
            m_2ei->calc(m_requests);

            for (std::size_t j = 0; j < m_requests.size(); ++j) {
                const TwoElectronIntegralEngine::Request& r = m_requests[j];
                double* result = r.results;

                const std::size_t P = r.shells[0];
                const std::size_t Q = r.shells[1];
                const std::size_t R = r.shells[2];
                const std::size_t S = r.shells[3];

                const unsigned ps = m_shell_sizes[P];
                const unsigned qs = m_shell_sizes[Q];
                const unsigned rs = m_shell_sizes[R];
                const unsigned ss = m_shell_sizes[S];

                const unsigned pf = m_first_contraction_in_shell[P];
                const unsigned qf = m_first_contraction_in_shell[Q];
                const unsigned rf = m_first_contraction_in_shell[R];
                const unsigned sf = m_first_contraction_in_shell[S];

                for (std::size_t i = pf; i < pf + ps; ++i) {
                    for (std::size_t j = qf; j < qf + qs; ++j) {
                        for (std::size_t k = rf; k < rf + rs; ++k) {
                            for (std::size_t l = sf; l < sf + ss; ++l) {
                                const double g = *result++;

                                Integrals::Level2* l2 = d4.roots[i];
                                if (!l2)
                                    continue;

                                if (m_eps / 2 < 2 * std::abs(g) * m_D(i, j) *
                                                    m_max_C_col(l)) {
                                    std::size_t dji;
                                    for (dji = 0; dji < l2->size(); ++dji)
                                        if ((*l2)[dji].first == j)
                                            break;
                                    if (dji != l2->size()) {
                                        Integrals::Level3* l3 =
                                            (*l2)[dji].second;
                                        if (l3) {
                                            std::size_t dli;
                                            for (dli = 0; dli < l3->size();
                                                 ++dli)
                                                if ((*l3)[dli].first == l)
                                                    break;
                                            if (dli != l3->size()) {
                                                Integrals::Level4* l4 =
                                                    (*l3)[dli].second;
                                                if (l4) {
                                                    for (std::size_t dki = 0;
                                                         dki < l4->size;
                                                         ++dki) {
                                                        std::size_t kp =
                                                            l4->indices[dki];
                                                        Rup(kp, k) +=
                                                            2 * g *
                                                            l4->values[dki];
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                if (m_eps / 2 <
                                    std::abs(g) * m_D(i, l) * m_max_D_row(j)) {
                                    std::size_t dji;
                                    for (dji = 0; dji < l2->size(); ++dji)
                                        if ((*l2)[dji].first == l)
                                            break;
                                    if (dji != l2->size()) {
                                        Integrals::Level3* l3 =
                                            (*l2)[dji].second;
                                        if (l3) {
                                            std::size_t dli;
                                            for (dli = 0; dli < l3->size();
                                                 ++dli)
                                                if ((*l3)[dli].first == j)
                                                    break;
                                            if (dli != l3->size()) {
                                                Integrals::Level4* l4 =
                                                    (*l3)[dli].second;
                                                if (l4) {
                                                    for (std::size_t dki = 0;
                                                         dki < l4->size;
                                                         ++dki) {
                                                        std::size_t kp =
                                                            l4->indices[dki];
                                                        Rup(kp, k) -=
                                                            g * l4->values[dki];
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
            }

            m_requests.clear();
            buf_ptr = m_buf.data();
        }
    }

    return Rup;
}

arma::mat
RHF_LT_AO_MP2_EFieldGradient::Rdn_partial_contribution(Integrals_sh& d_sh,
                                                       const Integrals& d4)
{
    arma::mat Rdn = arma::zeros<arma::mat>(m_n, m_n);

    m_requests.clear();
    double* buf_ptr = m_buf.data();

    const IJKLShellQuartetIndexIterator i_begin(&d_sh);
    const IJKLShellQuartetIndexIterator i_end = i_begin.make_end();
    for (IJKLShellQuartetIndexIterator i = i_begin; i != i_end; ++i) {
        const ShellQuartetIndex sqi = *i;
        const TwoElectronIntegralEngine::Request request = {
            sqi, false, buf_ptr};
        m_requests.push_back(request);

        buf_ptr += m_shell_sizes[sqi[0]] * m_shell_sizes[sqi[1]] *
                   m_shell_sizes[sqi[2]] * m_shell_sizes[sqi[3]];

        if (m_requests.size() == m_max_no_requests || boost::next(i) == i_end) {
            m_2ei->calc(m_requests);

            for (std::size_t j = 0; j < m_requests.size(); ++j) {
                const TwoElectronIntegralEngine::Request& r = m_requests[j];
                double* result = r.results;

                const std::size_t P = r.shells[0];
                const std::size_t Q = r.shells[1];
                const std::size_t R = r.shells[2];
                const std::size_t S = r.shells[3];

                const unsigned ps = m_shell_sizes[P];
                const unsigned qs = m_shell_sizes[Q];
                const unsigned rs = m_shell_sizes[R];
                const unsigned ss = m_shell_sizes[S];

                const unsigned pf = m_first_contraction_in_shell[P];
                const unsigned qf = m_first_contraction_in_shell[Q];
                const unsigned rf = m_first_contraction_in_shell[R];
                const unsigned sf = m_first_contraction_in_shell[S];

                for (std::size_t i = pf; i < pf + ps; ++i) {

                    const double max_D_row_i = m_max_D_row(i);

                    const Integrals::Level2* const l2 = d4.roots[i];

                    for (std::size_t j = qf; j < qf + qs; ++j) {

                        const double D_ij = m_D(i, j);

                        for (std::size_t k = rf; k < rf + rs; ++k) {

                            const double max_B_row_k = m_max_B_row(k);
                            const double D_kj = m_D(k, j);

                            for (std::size_t l = sf; l < sf + ss; ++l) {

                                const double g = *result++;

                                if (!l2)
                                    continue;

                                const double ag = std::abs(g);

                                if (m_eps / 2 < 2 * ag * D_ij * max_B_row_k) {
                                    std::size_t dji;
                                    for (dji = 0; dji < l2->size(); ++dji)
                                        if ((*l2)[dji].first == j)
                                            break;
                                    if (dji != l2->size()) {
                                        std::size_t dki;
                                        Integrals::Level3* l3 =
                                            (*l2)[dji].second;
                                        if (l3) {
                                            for (dki = 0; dki < l3->size();
                                                 ++dki)
                                                if ((*l3)[dki].first == k)
                                                    break;
                                            if (dki != l3->size()) {
                                                std::size_t dli;
                                                Integrals::Level4* l4 =
                                                    (*l3)[dki].second;
                                                if (l4) {
                                                    const std::size_t* indices =
                                                        l4->indices;
                                                    const double* values =
                                                        l4->values;
                                                    for (dli = 0;
                                                         dli < l4->size;
                                                         ++dli) {
                                                        const std::size_t lp =
                                                            *indices++;
                                                        const double vp =
                                                            *values++;
                                                        // if (m_eps/2 < 2 * ag
                                                        // * D_ij * B_k[lp])
                                                        /*Rdn(lp, l)*/ Rdn(
                                                            l, lp) +=
                                                            2 * g *
                                                            l4->values[dli];
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                if (m_eps / 2 < ag * max_D_row_i * D_kj) {
                                    std::size_t dji;
                                    for (dji = 0; dji < l2->size(); ++dji)
                                        if ((*l2)[dji].first == l)
                                            break;
                                    if (dji != l2->size()) {
                                        std::size_t dki;
                                        Integrals::Level3* l3 =
                                            (*l2)[dji].second;
                                        if (l3) {
                                            for (dki = 0; dki < l3->size();
                                                 ++dki)
                                                if ((*l3)[dki].first == k)
                                                    break;
                                            if (dki != l3->size()) {
                                                std::size_t dli;
                                                Integrals::Level4* l4 =
                                                    (*l3)[dki].second;
                                                if (l4) {
                                                    const std::size_t* indices =
                                                        l4->indices;
                                                    const double* values =
                                                        l4->values;
                                                    for (dli = 0;
                                                         dli < l4->size;
                                                         ++dli) {
                                                        const std::size_t lp =
                                                            *indices++;
                                                        const double vp =
                                                            *values++;
                                                        // if (m_eps/2 < ag *
                                                        // D_i[lp] * D_kj)
                                                        /*Rdn(lp, j)*/ Rdn(
                                                            j, lp) -= g * vp;
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
            }

            m_requests.clear();
            buf_ptr = m_buf.data();
        }
    }

    return Rdn;
}

void RHF_LT_AO_MP2_EFieldGradient::make_local_matrices(const std::size_t ib,
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
        const unsigned qf = m_first_contraction_in_shell[j];
        const unsigned qs = m_shell_sizes[j];
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
        const unsigned pf = m_first_contraction_in_shell[i];
        const unsigned ps = m_shell_sizes[i];
        for (std::size_t j = 0; j < m_no_shells; ++j) {
            const unsigned qf = m_first_contraction_in_shell[j];
            const unsigned qs = m_shell_sizes[j];
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
