/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "td_kit/tdks_rpa.hpp"
#include "core_kit/pseudo_fock_matrix_generator.hpp"

#include <boost/numeric/ublas/matrix.hpp>
#include <boost/ref.hpp>

#include <boost/lambda/algorithm.hpp>
#include <boost/lambda/bind.hpp>
#include <boost/lambda/lambda.hpp>
#include <boost/numeric/ublas/matrix_proxy.hpp>

#include "io_kit/logger.hpp"
#include "misc/blackbox.hpp"

#include <cmath>

#ifdef WITH_MPI
#    undef SEEK_SET
#    undef SEEK_CUR
#    undef SEEK_END
#    include <mpi.h>
#endif

#include "misc/dispatcher.hpp"
#include "misc/mpi_utils.hpp"

#include <ext/numeric>

TDKS_RPA::Sigma::Sigma(boost::shared_ptr<const System> system,
                       const arma::mat& mo_coeffs,
                       const arma::vec& eps,
                       std::size_t no_frozen,
                       std::size_t no_deleted,
                       Multiplicity mult,
                       PseudoFockMatrixGenerator& fm_gen,
                       boost::shared_ptr<XCKernelGenerator> generator,
                       double hf_exchange_contribution) :
    Base::Sigma(system,
                mo_coeffs,
                eps,
                no_frozen,
                no_deleted,
                mult,
                hf_exchange_contribution),
    m_fock_matrix_generator(&fm_gen),
    m_xc_kernel_generator(generator),
    m_delta_eps12(m_no_occ - m_no_frozen, m_no_virt - m_no_deleted)
{
    for (unsigned i = 0; i < m_no_occ - m_no_frozen; ++i) {
        for (unsigned a = m_no_occ; a < m_no_occ + m_no_virt - m_no_deleted;
             ++a) {
            m_delta_eps12(i, a - m_no_occ) =
                std::sqrt(m_delta_eps(i, a - m_no_occ));
        }
    }
}

arma::mat TDKS_RPA::Sigma::calc(const arma::mat& ci_coeffs) const
{
    // ci_coeffs(a,j) mnozony przez sqrt(eps i - eps a)
    // zeby przemycic sqrt(eps i - eps a) do macierzy pseudogestosci
    const arma::mat es_ci_coeffs = ci_coeffs % m_delta_eps12;

    // calculate pseudo-fock matrix

    // pseudo-density matrix
    const arma::mat fake_P = pseudo_density_matrix(m_mo_coeffs, es_ci_coeffs);

    m_fock_matrix_generator->set_density_matrix(fake_P, fake_P);

    const arma::mat J = m_fock_matrix_generator->coulomb_matrix();

    const arma::mat K = m_fock_matrix_generator->exchange_matrix(SPIN_ALPHA);

    // density matrix
    const arma::mat P = density_matrix(m_full_mo_coeffs, m_no_occ);

    const arma::mat symmetrized_fake_P = (fake_P + trans(fake_P)) / 2;

    m_xc_kernel_generator->set_density_matrix(
        P, P, symmetrized_fake_P, symmetrized_fake_P);

    const arma::mat fxcaa =
        m_xc_kernel_generator->integrals(SPIN_ALPHA, SPIN_ALPHA);
    const arma::mat fxcab =
        m_xc_kernel_generator->integrals(SPIN_ALPHA, SPIN_BETA);
    const arma::mat fxcbb =
        m_xc_kernel_generator->integrals(SPIN_BETA, SPIN_BETA);
    const arma::mat fxc_s = (fxcaa + 2 * fxcab + fxcbb) / 2.0;
    const arma::mat fxc_t = (fxcaa - 2 * fxcab + fxcbb) / 2.0;

    const arma::mat F_ao = (m_mult == SINGLET) ? J + fxc_s : fxc_t;

    // transform the pseudo-fock matrix to the MO basis
    const arma::mat A = F_ao * m_mo_coeffs_virt;
    const arma::mat F_mo_ov = trans(m_mo_coeffs_occ) * A;

    // form the final result, including both diagonal and nondiagonal terms

    // jest tu sqrt(eps j - eps a) gdyz raz juz trafilo do ci_coeffs
    // a 2*F_mo_ov jest juz wymnozone przez sqrt(eps i - eps a),
    // jeszcze brakuje przemnozenia przez  sqrt(eps j - eps b)
    const arma::mat sigma = es_ci_coeffs % (m_delta_eps % m_delta_eps12) +
                            2 * F_mo_ov % m_delta_eps12;

    return sigma;
}

namespace {
    // FIXME: this should be configurable somehow
    const double threshold = 1e-8;
}

TDKS_RPA::TDKS_RPA(
    Multiplicity multiplicity,
    boost::shared_ptr<const System> system,
    const arma::mat mo_coeffs,
    const arma::vec eps,
    boost::shared_ptr<const TwoElectronIntegralEngineFactory> ie_factory,
    unsigned no_frozen,
    unsigned no_deleted,
    unsigned no_states,
    unsigned no_roots,
    unsigned no_iterations,
    double diagonalization_threshold,
    boost::shared_ptr<XCKernelGenerator> generator,
    double hf_exchange_contribution) :
    RestrictedTD(system, eps, no_frozen, no_deleted, no_roots)
{
    assert(no_iterations >= 1);
    assert(system->no_electrons(SPIN_ALPHA) == system->no_electrons(SPIN_BETA));
    Logger::Section tdks_rpa_section(Log::instance(), "restricted tdks rpa");
    PseudoFockMatrixGenerator fm_gen(
        system, ie_factory->make(system), threshold);

    // starting vectors for true CIS problem
    arma::mat v_0(m_n, no_roots, arma::fill::zeros);

    if (2 * no_roots < m_n) {
        Sigma ig_sigma(system,
                       mo_coeffs,
                       eps,
                       m_ig_no_frozen,
                       m_ig_no_deleted,
                       multiplicity,
                       fm_gen,
                       generator,
                       hf_exchange_contribution);

        boost::function<arma::vec(const arma::vec&)> igs(boost::ref(ig_sigma));

        davidson_liu_diagonalize(igs,
                                 m_ig_delta_eps,
                                 m_ig_v_0,
                                 no_roots,
                                 no_roots,
                                 m_energies,
                                 m_coefficients,
                                 1,
                                 1000);

        // fill in starting vectors
        for (unsigned i = 0; i < m_small_part_occ; ++i)
            for (unsigned a = 0; a < m_small_part_virt; ++a)
                for (unsigned k = 0; k < no_roots; ++k)
                    v_0((i + m_ig_no_frozen - no_frozen) *
                                (m_no_virt - no_deleted) +
                            a,
                        k) = m_coefficients(i * m_small_part_virt + a, k);
    }

    Logger::Section main_section(Log::instance(),
                                 "full hamiltonian diagonalization");

    // solve true CIS problem

    Sigma sigma(system,
                mo_coeffs,
                eps,
                no_frozen,
                no_deleted,
                multiplicity,
                fm_gen,
                generator,
                hf_exchange_contribution);

    arma::vec delta_eps(m_n);
    for (unsigned i = 0; i < m_no_occ - no_frozen; ++i)
        for (unsigned a = m_no_occ; a < m_no_occ + m_no_virt - no_deleted; ++a)
            delta_eps(i * (m_no_virt - no_deleted) + a - m_no_occ) =
                eps(a) - eps(i + no_frozen);

    boost::function<arma::vec(const arma::vec&)> s(boost::ref(sigma));

    m_no_states_converged = davidson_liu_diagonalize(s,
                                                     delta_eps,
                                                     v_0,
                                                     no_states,
                                                     no_roots,
                                                     m_energies,
                                                     m_coefficients,
                                                     no_iterations,
                                                     diagonalization_threshold);

    for (std::size_t i = 0; i < m_energies.size(); ++i)
        m_energies(i) = std::sqrt(m_energies(i));
}
