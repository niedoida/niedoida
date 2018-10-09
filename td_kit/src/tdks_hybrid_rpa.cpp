/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "td_kit/tdks_hybrid_rpa.hpp"
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
#include <fstream>

#ifdef WITH_MPI
#    undef SEEK_SET
#    undef SEEK_CUR
#    undef SEEK_END
#    include <mpi.h>
#endif

#include "misc/dispatcher.hpp"
#include "misc/mpi_utils.hpp"

#include <ext/numeric>

TDKS_HybridRPA::Sigma::Sigma(boost::shared_ptr<const System> system,
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
    m_xc_kernel_generator(generator)
{
}

arma::mat TDKS_HybridRPA::Sigma::calc_AplusB(const arma::mat& ci_coeffs) const
{
    // pseudo-density matrix
    const arma::mat fake_P = pseudo_density_matrix(m_mo_coeffs, ci_coeffs);

    m_fock_matrix_generator->set_density_matrix(fake_P, fake_P);

    const arma::mat J = m_fock_matrix_generator->coulomb_matrix();

    const arma::mat K = m_fock_matrix_generator->exchange_matrix(SPIN_ALPHA);

    // density matrix
    const arma::mat P = density_matrix(m_mo_coeffs, m_no_occ);

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

    // Note: because of a serious bug in uBlas, this does _not_ work as
    // expected!!! arma::mat F_ao =
    //       (m_mult == SINGLET) ? J + m_hf_x_contrib * K + fxc_s : fxc_t;

    arma::mat F_ao;
    if (m_mult == SINGLET) {
        F_ao = m_hf_x_contrib * K;
        F_ao += J + fxc_s;
    } else {
        F_ao = m_hf_x_contrib * K;
        F_ao += fxc_t;
    }

    // transform the pseudo-fock matrix to the MO basis
    arma::mat tmp = F_ao * m_mo_coeffs_virt;
    const arma::mat F_mo_ov = trans(m_mo_coeffs_occ) * tmp;

    tmp = F_ao * m_mo_coeffs_occ;
    const arma::mat F_mo_vo = trans(m_mo_coeffs_virt) * tmp;

    // form the final result, including both diagonal and nondiagonal terms

    return ci_coeffs % m_delta_eps + F_mo_ov + trans(F_mo_vo);
}

arma::mat TDKS_HybridRPA::Sigma::calc_AminusB(const arma::mat& ci_coeffs) const
{
    // pseudo-density matrix
    const arma::mat fake_P = pseudo_density_matrix(m_mo_coeffs, ci_coeffs);

    m_fock_matrix_generator->set_density_matrix(fake_P, fake_P);

    const arma::mat K = m_fock_matrix_generator->exchange_matrix(SPIN_ALPHA);

    arma::mat F_ao;
    if (m_mult == SINGLET) {
        F_ao = m_hf_x_contrib * K;
    } else {
        F_ao = m_hf_x_contrib * K;
    }

    // transform the pseudo-fock matrix to the MO basis
    arma::mat tmp = F_ao * m_mo_coeffs_virt;
    const arma::mat F_mo_ov = trans(m_mo_coeffs_occ) * tmp;

    tmp = F_ao * m_mo_coeffs_occ;
    const arma::mat F_mo_vo = trans(m_mo_coeffs_virt) * tmp;

    // form the final result, including both diagonal and nondiagonal terms

    return ci_coeffs % m_delta_eps + F_mo_ov - trans(F_mo_vo);
}

arma::mat TDKS_HybridRPA::Sigma::calc(const arma::mat& ci_coeffs) const
{
    arma::mat tmp = calc_AplusB(ci_coeffs);
    return calc_AminusB(tmp);
}

namespace {
    // FIXME: this should be configurable somehow
    const double threshold = 1e-8;
}

TDKS_HybridRPA::TDKS_HybridRPA(
    Multiplicity multiplicity,
    boost::shared_ptr<const System> system,
    const arma::mat mo_coeffs,
    const arma::vec eps,
    boost::shared_ptr<const TwoElectronIntegralEngineFactory> ie_factory,
    unsigned no_frozen,
    unsigned no_deleted,
    unsigned no_states,
    unsigned no_iterations,
    double diagonalization_threshold,
    boost::shared_ptr<XCKernelGenerator> generator,
    std::string job_name,
    double hf_exchange_contribution) :
    RestrictedTD(system, eps, no_frozen, no_deleted, no_states)
{
    assert(no_iterations >= 1);
    assert(system->no_electrons(SPIN_ALPHA) == system->no_electrons(SPIN_BETA));
    Logger::Section tdks_rpa_section(Log::instance(), "restricted tdks rpa");
    PseudoFockMatrixGenerator fm_gen(
        system, ie_factory->make(system), threshold);

    //    //starting vectors for true CIS problem
    //    arma::mat v_0 = ublas::zero_matrix<double> (m_n, no_states);

    //     if (5 * no_states < m_n) {
    //         Sigma ig_sigma(
    //             system,
    //             mo_coeffs,
    //             eps,
    //             m_ig_no_frozen,
    //             m_ig_no_deleted,
    //             multiplicity,
    //             fm_gen,
    //             generator,
    //             hf_exchange_contribution);

    //         davidson_liu_diagonalize(
    //             boost::ref(ig_sigma), m_ig_delta_eps, m_ig_v_0, no_states,
    //             m_energies, m_coefficients, 1, 1000);

    //         //fill in starting vectors
    //         for (unsigned i = 0; i < m_small_part_occ; ++i)
    //             for (unsigned a = 0; a < m_small_part_virt; ++a)
    //                 for (unsigned k = 0; k < no_states; ++k)
    //                     v_0((i + m_ig_no_frozen - no_frozen) * (m_no_virt -
    //                     no_deleted) + a, k) =
    //                         m_coefficients(i * m_small_part_virt + a, k);

    //     }
    {

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

        arma::vec m_zero(m_n, arma::fill::zeros);

        std::cout << "writing full hamiltonian to file " << job_name.c_str()
                  << "  - matrix: hRPA" << std::endl;

        std::ofstream output_file(job_name.c_str());
        output_file.precision(16);
        output_file << "# Created by Niedoida \n"
                    << "# name: hRPA \n"
                    << "# type: matrix \n"
                    << "# rows: " << m_n << "\n"
                    << "# columns: " << m_n << "\n ";

        for (unsigned j = 0; j < m_n; ++j) {
            arma::vec iter = m_zero;
            iter[j] = 1;
            arma::vec sigma_v = sigma(iter);
            output_file << " ";
            for (unsigned i = 0; i < m_n; ++i) {
                output_file << sigma_v(i) << " ";
            }
            output_file << std::endl;
            std::cout << std::endl
                      << " zapisano " << j + 1 << " linijke ("
                      << (j + 1) * 100.0 / m_n << "%)" << std::endl;
        }

        output_file.close();
    }
    //     arma::vec delta_eps(m_n);
    //     for (unsigned i = 0; i < m_no_occ - no_frozen; ++i)
    //         for (unsigned a = m_no_occ; a < m_no_occ + m_no_virt -
    //         no_deleted; ++a)
    //             delta_eps(i * (m_no_virt - no_deleted) + a - m_no_occ) =
    //             eps(a) - eps(i + no_frozen);

    //     davidson_liu_diagonalize(
    //         boost::ref(sigma), delta_eps, v_0, no_states, no_states,
    //         m_energies, m_coefficients, no_iterations,
    //         diagonalization_threshold);

    //     for (std::size_t i = 0; i < m_energies.size(); ++i)
    //     m_energies(i) = std::sqrt(m_energies(i));
}
