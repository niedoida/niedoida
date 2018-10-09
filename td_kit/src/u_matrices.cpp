/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "cphf_kit/cphf.hpp"

#include "misc/linear_algebra.hpp"
#include "scf_kit/scf_utils.hpp"

#include "misc/math_consts.hpp"
#include <cstdio>

#include <cmath>
#include <string>
#include <utility>
#include <vector>

#include <boost/math/special_functions/gamma.hpp>
#include <boost/numeric/ublas/io.hpp>
#include <boost/numeric/ublas/matrix_proxy.hpp>
#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/vector_proxy.hpp>

#include "misc/special_functions.hpp"

#include "core_kit/basis_set_info.hpp"
#include "core_kit/shell_quartet.hpp"
#include "core_kit/significant_shell_pairs_generator.hpp"
#include "core_kit/significant_shell_quartet_index_generator.hpp"

static arma::mat multiply_by_vector(const arma::mat& mat, const arma::vec& vec)
{
    arma::mat mat_out(mat.n_rows, mat.n_cols);
    for (int row = 0; row < mat.n_rows; row++) {
        for (int col = 0; col < mat.n_cols; col++) {
            mat_out(row, col) = mat(row, col) * vec(col);
        }
    }
    return mat_out;
}

void calc_u_matrices_from_cphf(
    boost::shared_ptr<const System> system,
    const arma::mat& C,
    const arma::vec& eps,
    const std::vector<std::size_t>& atoms,
    std::vector<arma::mat>& dS_x_occ_occ,
    std::vector<arma::mat>& dS_y_occ_occ,
    std::vector<arma::mat>& dS_z_occ_occ,
    std::vector<arma::mat>& dS_x_occ_virt,
    std::vector<arma::mat>& dS_y_occ_virt,
    std::vector<arma::mat>& dS_z_occ_virt,
    std::vector<arma::mat>& dFock_x_occ_virt,
    std::vector<arma::mat>& dFock_y_occ_virt,
    std::vector<arma::mat>& dFock_z_occ_virt,
    std::vector<arma::mat>& u_x,
    std::vector<arma::mat>& u_y,
    std::vector<arma::mat>& u_z,
    std::vector<arma::mat>& psFx,
    std::vector<arma::mat>& psFy,
    std::vector<arma::mat>& psFz,
    boost::shared_ptr<const TwoElectronIntegralEngineFactory> ie_factory,
    boost::shared_ptr<const FockMatrixGeneratorFactory> fm_gen)
{
    psFx.clear();
    psFy.clear();
    psFz.clear();
    std::size_t n_occ_alpha = system->no_electrons(SPIN_ALPHA);
    std::size_t n_occ_beta = system->no_electrons(SPIN_BETA);

    std::size_t n_orbitals = eps.size();
    std::size_t n_virt_alpha = n_orbitals - n_occ_alpha;

    const std::size_t no_atoms = system->atoms.size();
    const std::size_t no_un = atoms.size();

    arma::mat C_all_occ =
        C.submat(arma::span(0, n_orbitals - 1), arma::span(0, n_occ_alpha - 1));
    arma::mat C_all_occ_t = trans(C_all_occ);
    arma::mat C_virt = C.submat(arma::span(0, n_orbitals - 1),
                                arma::span(n_occ_alpha, n_orbitals - 1));
    arma::mat C_virt_t = trans(C_virt);
    arma::mat C_t = trans(C);

    CPHF_linearResponse_RHF cphf_lr_rhf(system, ie_factory, C, eps);

    CPHF_Hessian cphf_hess(cphf_lr_rhf);

    std::vector<std::pair<arma::mat, arma::mat>> dde_dkappa_dr;

    arma::vec eps_virt_vec = eps.subvec(n_occ_alpha, n_orbitals - 1);

    std::unique_ptr<FockMatrixGenerator> m_fock_matrix_generator =
        std::move(fm_gen->make(system));

    for (std::size_t un_it = 0; un_it < no_un; un_it++) {
        std::size_t n = atoms[un_it];
        arma::mat dde_dkappa_dx =
            dFock_x_occ_virt[n] -
            multiply_by_vector(dS_x_occ_virt[n], eps_virt_vec);
        arma::mat dde_dkappa_dy =
            dFock_y_occ_virt[n] -
            multiply_by_vector(dS_y_occ_virt[n], eps_virt_vec);
        arma::mat dde_dkappa_dz =
            dFock_z_occ_virt[n] -
            multiply_by_vector(dS_z_occ_virt[n], eps_virt_vec);

        arma::mat Px = dS_x_occ_occ[n] * C_all_occ_t;
        Px = C_all_occ * Px;

        arma::mat Py = dS_y_occ_occ[n] * C_all_occ_t;
        Py = C_all_occ * Py;

        arma::mat Pz = dS_z_occ_occ[n] * C_all_occ_t;
        Pz = C_all_occ * Pz;

        m_fock_matrix_generator->set_density_matrix(Px, Px);
        arma::mat fock_m_x =
            m_fock_matrix_generator->coulomb_matrix() +
            m_fock_matrix_generator->exchange_matrix(SPIN_ALPHA);
        arma::mat fock_m_x_full = C_t * fock_m_x;
        fock_m_x_full = fock_m_x_full * C;
        fock_m_x = C_all_occ_t * fock_m_x;
        fock_m_x = fock_m_x * C_virt;

        m_fock_matrix_generator->set_density_matrix(Py, Py);
        arma::mat fock_m_y =
            m_fock_matrix_generator->coulomb_matrix() +
            m_fock_matrix_generator->exchange_matrix(SPIN_ALPHA);
        arma::mat fock_m_y_full = C_t * fock_m_y;
        fock_m_y_full = fock_m_y_full * C;
        fock_m_y = C_all_occ_t * fock_m_y;
        fock_m_y = fock_m_y * C_virt;

        m_fock_matrix_generator->set_density_matrix(Pz, Pz);
        arma::mat fock_m_z =
            m_fock_matrix_generator->coulomb_matrix() +
            m_fock_matrix_generator->exchange_matrix(SPIN_ALPHA);
        arma::mat fock_m_z_full = C_t * fock_m_z;
        fock_m_z_full = fock_m_z_full * C;
        fock_m_z = C_all_occ_t * fock_m_z;
        fock_m_z = fock_m_z * C_virt;

        psFx.push_back(fock_m_x_full);
        psFy.push_back(fock_m_y_full);
        psFz.push_back(fock_m_z_full);

        dde_dkappa_dx -= fock_m_x;
        dde_dkappa_dy -= fock_m_y;
        dde_dkappa_dz -= fock_m_z;

        // TU JEST B KTOREGO SZUKAM
        arma::mat PxA = dS_x_occ_virt[n] * C_virt_t;
        PxA = C_all_occ * PxA;
        PxA = PxA + trans(PxA);

        arma::mat PyA = dS_y_occ_virt[n] * C_virt_t;
        PyA = C_all_occ * PyA;
        PyA = PyA + trans(PyA);

        arma::mat PzA = dS_z_occ_virt[n] * C_virt_t;
        PzA = C_all_occ * PzA;
        PzA = PzA + trans(PzA);

        m_fock_matrix_generator->set_density_matrix(PxA, PxA);
        fock_m_x = m_fock_matrix_generator->coulomb_matrix() +
                   m_fock_matrix_generator->exchange_matrix(SPIN_ALPHA);

        m_fock_matrix_generator->set_density_matrix(PyA, PyA);
        fock_m_y = m_fock_matrix_generator->coulomb_matrix() +
                   m_fock_matrix_generator->exchange_matrix(SPIN_ALPHA);

        m_fock_matrix_generator->set_density_matrix(PzA, PzA);
        fock_m_z = m_fock_matrix_generator->coulomb_matrix() +
                   m_fock_matrix_generator->exchange_matrix(SPIN_ALPHA);

        fock_m_x = C_all_occ_t * fock_m_x;
        fock_m_x = fock_m_x * C_virt;

        fock_m_y = C_all_occ_t * fock_m_y;
        fock_m_y = fock_m_y * C_virt;

        fock_m_z = C_all_occ_t * fock_m_z;
        fock_m_z = fock_m_z * C_virt;

        dde_dkappa_dx -= fock_m_x;
        dde_dkappa_dy -= fock_m_y;
        dde_dkappa_dz -= fock_m_z;

        dde_dkappa_dx *= 2;
        dde_dkappa_dy *= 2;
        dde_dkappa_dz *= 2;

        dde_dkappa_dr.push_back(
            std::pair<arma::mat, arma::mat>(dde_dkappa_dx, dde_dkappa_dx));
        dde_dkappa_dr.push_back(
            std::pair<arma::mat, arma::mat>(dde_dkappa_dy, dde_dkappa_dy));
        dde_dkappa_dr.push_back(
            std::pair<arma::mat, arma::mat>(dde_dkappa_dz, dde_dkappa_dz));
    }
    arma::mat result;
    std::vector<arma::mat> u;
    if (n_virt_alpha > 0) {
        result = cphf_hess.calculate_CPHF_Hessian_given_DDE(dde_dkappa_dr);
        u = cphf_hess.get_U();
        unsigned u_size = u.size() / 3;
        u_x.resize(u_size);
        u_y.resize(u_size);
        u_z.resize(u_size);

        for (int i = 0; i < u_size; i++) {
            u_x[i] = u[3 * i];
            u_y[i] = u[3 * i + 1];
            u_z[i] = u[3 * i + 2];
        }
    } else {
        for (int i = 0; i < no_un; i++)
            u_x.push_back(arma::zeros<arma::mat>(n_occ_alpha, n_virt_alpha));
        u_y.push_back(arma::zeros<arma::mat>(n_occ_alpha, n_virt_alpha));
        u_z.push_back(arma::zeros<arma::mat>(n_occ_alpha, n_virt_alpha));
    }
}
void AU_for_n_independent_u(
    const arma::mat& u_virt_occ,
    const arma::mat& C_virt,
    const arma::mat& C_t,
    const arma::mat& C,
    const arma::mat& C_all_occ_t,
    std::unique_ptr<FockMatrixGenerator>& m_fock_matrix_generator,
    arma::mat& Au_occ_occ,
    arma::mat& Au_virt_virt,
    std::size_t n_occ,
    std::size_t n_virt)
{
    std::cout << C_virt.n_cols << " " << C_all_occ_t.n_cols << " "
              << u_virt_occ.n_cols << std::endl;
    arma::mat P = C_virt * u_virt_occ * C_all_occ_t;
    P = P + trans(P);
    m_fock_matrix_generator->set_density_matrix(P, P);
    arma::mat fock_m_x = m_fock_matrix_generator->coulomb_matrix() +
                         m_fock_matrix_generator->exchange_matrix(SPIN_ALPHA);

    fock_m_x = C_t * fock_m_x * C;
    Au_occ_occ =
        fock_m_x.submat(arma::span(0, n_occ - 1), arma::span(0, n_occ - 1));
    Au_virt_virt = fock_m_x.submat(arma::span(n_occ, n_occ + n_virt - 1),
                                   arma::span(n_occ, n_occ + n_virt - 1));
}

void B_for_n_independent_u(
    const arma::mat& dF_occ_occ,
    const arma::mat& dF_virt_virt,
    const arma::mat& dS_occ_occ,
    const arma::mat& dS_virt_virt,
    const arma::vec& eps,
    std::size_t n_occ,
    std::size_t n_virt,
    arma::mat& B_occ_occ,
    arma::mat& B_virt_virt,
    std::unique_ptr<FockMatrixGenerator>& m_fock_matrix_generator,
    const arma::mat& C_all_occ,
    const arma::mat& C_all_occ_t,
    const arma::mat& C,
    const arma::mat& C_t)
{
    arma::vec eps_occ = eps.subvec(0, n_occ - 1);
    arma::vec eps_virt = eps.subvec(n_occ, n_occ + n_virt - 1);

    B_occ_occ = dF_occ_occ - multiply_by_vector(dS_occ_occ, eps_occ);
    B_virt_virt = dF_virt_virt - multiply_by_vector(dS_virt_virt, eps_virt);

    arma::mat P = C_all_occ * dS_occ_occ * C_all_occ_t;

    m_fock_matrix_generator->set_density_matrix(P, P);
    arma::mat fock_m = m_fock_matrix_generator->coulomb_matrix() +
                       m_fock_matrix_generator->exchange_matrix(SPIN_ALPHA);
    arma::mat fock_m_full = C_t * fock_m * C;

    B_occ_occ -=
        fock_m_full.submat(arma::span(0, n_occ - 1), arma::span(0, n_occ - 1));
    B_virt_virt -= fock_m_full.submat(arma::span(n_occ, n_occ + n_virt - 1),
                                      arma::span(n_occ, n_occ + n_virt - 1));
}
void calc_non_independent_u_matrices(
    arma::vec eps,
    std::size_t n_occ,
    std::size_t n_virt,
    const std::vector<arma::mat>& u_virt_occ,
    const std::vector<arma::mat>& dS_occ_occ,
    const std::vector<arma::mat>& dS_virt_virt,
    std::unique_ptr<FockMatrixGenerator>& m_fock_matrix_generator,
    const std::vector<arma::mat>& dF_occ_occ,
    const std::vector<arma::mat>& dF_virt_virt,
    const arma::mat& C,
    const arma::mat& C_virt,
    const arma::mat& C_t,
    const arma::mat& C_occ_t,
    const arma::mat& C_occ,
    std::vector<arma::mat>& u_occ_occ,
    std::vector<arma::mat>& u_virt_virt)
{

    std::size_t n_a = dS_occ_occ.size();

    for (std::size_t n = 0; n < n_a; n++) {
        arma::mat au_occ_occ, au_virt_virt, b_occ_occ, b_virt_virt;

        AU_for_n_independent_u(u_virt_occ[n],
                               C_virt,
                               C_t,
                               C,
                               C_occ_t,
                               m_fock_matrix_generator,
                               au_occ_occ,
                               au_virt_virt,
                               n_occ,
                               n_virt);

        B_for_n_independent_u(dF_occ_occ[n],
                              dF_virt_virt[n],
                              dS_occ_occ[n],
                              dS_virt_virt[n],
                              eps,
                              n_occ,
                              n_virt,
                              b_occ_occ,
                              b_virt_virt,
                              m_fock_matrix_generator,
                              C_occ,
                              C_occ_t,
                              C,
                              C_t);
        b_occ_occ += au_occ_occ;
        b_virt_virt += au_virt_virt;

        for (std::size_t i = 0; i < n_occ; i++) {
            for (std::size_t j = 0; j < n_occ; j++) {
                if (i == j)
                    b_occ_occ(i, j) = -0.5 * dS_occ_occ[n](i, j);
                else if (fabs(eps(j) - eps(i)) < 1.0e-8) {
                    std::cout << "UWAGA!!!! DEGENERACJA" << std::endl;
                    b_occ_occ(i, j) = 0;
                } else
                    b_occ_occ(i, j) /= (eps(j) - eps(i));
            }
        }

        for (std::size_t a = 0; a < n_virt; a++) {
            for (std::size_t b = 0; b < n_virt; b++) {
                if (a == b)
                    b_virt_virt(a, b) = -0.5 * dS_virt_virt[n](a, b);
                else if (fabs(eps(n_occ + a) - eps(n_occ + b)) < 1.0e-8) {
                    std::cout << "UWAGA!!!! DEGENERACJA" << std::endl;
                    b_virt_virt(a, b) = 0;
                } else
                    b_virt_virt(a, b) /= (eps(b + n_occ) - eps(a + n_occ));
            }
        }
        u_occ_occ.push_back(b_occ_occ);
        u_virt_virt.push_back(b_virt_virt);
    }
}
