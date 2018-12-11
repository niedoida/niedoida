/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */


#include "core_kit/hessian_engine.hpp"
#include "core_kit/os1_integral_gradient_engine.hpp"

#include "cphf_kit/cphf_linear_response.hpp"

#include "scf_kit/scf_utils.hpp"

#include <cstdio>

#include <cmath>
#include <ctime>
#include <string>
#include <vector>

#include <boost/math/special_functions/gamma.hpp>
#include <boost/numeric/ublas/matrix_proxy.hpp>

#include "misc_kit/special_functions.hpp"

#include "core_kit/basis_set_info.hpp"
#include "core_kit/dFock.hpp"
#include "core_kit/shell_quartet.hpp"
#include "core_kit/significant_shell_pairs_generator.hpp"
#include "core_kit/significant_shell_quartet_index_generator.hpp"

namespace {
    double max_P2(const niedoida::core::ShellQuartetIndex& sq,
                  const arma::mat& max_P_shells)
    {
        const unsigned s1 = sq[0];
        const unsigned s2 = sq[1];
        const unsigned s3 = sq[2];
        const unsigned s4 = sq[3];

        double max = 0;

        const double P_1234 = 16 * max_P_shells(s1, s2) * max_P_shells(s3, s4);
        const double P_1324 = 4 * max_P_shells(s1, s3) * max_P_shells(s2, s4);
        const double P_1423 = 4 * max_P_shells(s1, s4) * max_P_shells(s2, s3);

        if (P_1234 > max)
            max = P_1234;
        if (P_1324 > max)
            max = P_1324;
        if (P_1423 > max)
            max = P_1423;

        return max;
    }

    arma::mat Vnn_hessian(std::shared_ptr<const niedoida::core::System> system,
                          std::size_t a,
                          std::size_t b)
    {
        arma::mat e_hessian = arma::zeros<arma::mat>(3, 3);
        const std::size_t no_atoms = system->atoms.size();
        arma::vec ra(3);
        ra(0) = system->atoms[a]->coords[0];
        ra(1) = system->atoms[a]->coords[1];
        ra(2) = system->atoms[a]->coords[2];
        const double qa = system->atoms[a]->isotope->element->atomic_number;

        if (a != b) {
            arma::vec rb(3);
            rb(0) = system->atoms[b]->coords[0];
            rb(1) = system->atoms[b]->coords[1];
            rb(2) = system->atoms[b]->coords[2];
            const double qb = system->atoms[b]->isotope->element->atomic_number;
            const arma::vec rab = rb - ra;

            const double nrab = norm(rab);
            const double nrab3 = nrab * nrab * nrab;
            const double nrab5 = nrab3 * nrab * nrab;
            for (int row = 0; row < 3; row++) {
                for (int col = 0; col < 3; col++) {
                    if (row != col)
                        e_hessian(row, col) -=
                            qa * qb * 3 * rab(row) * rab(col) / nrab5;
                    else
                        e_hessian(row, col) -=
                            qa * qb *
                            (3 * rab(row) * rab(col) / nrab5 - 1 / nrab3);
                }
            }
        } else {
            for (std::size_t c = 0; c < no_atoms; c++) {
                if (a == c)
                    continue;
                arma::vec rc(3);
                rc(0) = system->atoms[c]->coords[0];
                rc(1) = system->atoms[c]->coords[1];
                rc(2) = system->atoms[c]->coords[2];
                const double qc =
                    system->atoms[c]->isotope->element->atomic_number;
                const arma::vec rac = rc - ra;

                const double nrac = norm(rac);
                const double nrac3 = nrac * nrac * nrac;
                const double nrac5 = nrac3 * nrac * nrac;

                for (int row = 0; row < 3; row++) {
                    for (int col = 0; col < 3; col++) {
                        if (row != col)
                            e_hessian(row, col) +=
                                qa * qc * 3 * rac(row) * rac(col) / nrac5;
                        else
                            e_hessian(row, col) +=
                                qa * qc *
                                (3 * rac(row) * rac(col) / nrac5 - 1 / nrac3);
                    }
                }
            }
        }

        return e_hessian;
    }

    double
    SaSbEps(const arma::mat& Sa, const arma::mat& Sb, const arma::vec& eps)
    {
        return arma::accu(arma::strans(eps) * (Sa % Sb));
    }

    void pseudoFockMatUa(
        const arma::mat& ub,
        const arma::mat& Sb_occ_occ,
        const arma::mat& Sb_occ_virt,
        const arma::mat& C,
        std::shared_ptr<const niedoida::core::FockMatrixGeneratorFactory>
            fm_gen,
        std::size_t n_occ,
        std::size_t n_orbitals,
        std::shared_ptr<const niedoida::core::System> system,
        arma::mat& pseudoFockoo,
        arma::mat& pseudoFockov)
    {

        int n_virt = n_orbitals - n_occ;
        arma::mat C_occ =
            C.submat(arma::span(0, n_orbitals - 1), arma::span(0, n_occ - 1));
        arma::mat C_occ_t = trans(C_occ);

        arma::mat C_virt = C.submat(arma::span(0, n_orbitals - 1),
                                    arma::span(n_occ, n_orbitals - 1));
        arma::mat C_virt_t = trans(C_virt);

        std::unique_ptr<niedoida::core::FockMatrixGenerator>
            m_fock_matrix_generator = fm_gen->make(system);

        // SaSb - occ occ, occ occ

        arma::mat P = C_occ * Sb_occ_occ * C_occ_t;

        if (n_virt == 0) {
            P = P + trans(P);
            m_fock_matrix_generator->set_density_matrix(P, P);
            pseudoFockoo = m_fock_matrix_generator->coulomb_matrix() +
                           m_fock_matrix_generator->exchange_matrix(
                               niedoida::core::SPIN_ALPHA);
            pseudoFockoo = C_occ_t * pseudoFockoo * C_occ;

        } else {
            // Sa( Ub + Sb)- occ occ, occ virt
            P = P + 2 * C_occ * (-ub + Sb_occ_virt) * C_virt_t;
            P = P + trans(P);

            m_fock_matrix_generator->set_density_matrix(P, P);
            pseudoFockoo = m_fock_matrix_generator->coulomb_matrix() +
                           m_fock_matrix_generator->exchange_matrix(
                               niedoida::core::SPIN_ALPHA);
            pseudoFockoo = C_occ_t * pseudoFockoo * C_occ;

            // (Ua + Sa ) Sb - occ virt, occ occ

            P = C_occ * Sb_occ_occ * C_occ_t;

            // (Ua + Sa )( Ub +  Sb ) - occ virt, occ virt

            P = P + 2 * C_occ * (Sb_occ_virt - ub) * C_virt_t;
            P = P + trans(P);

            m_fock_matrix_generator->set_density_matrix(P, P);
            pseudoFockov = m_fock_matrix_generator->coulomb_matrix() +
                           m_fock_matrix_generator->exchange_matrix(
                               niedoida::core::SPIN_ALPHA);
            pseudoFockov = C_occ_t * pseudoFockov * C_virt;
        }
    }

    double UaUb_2J_2K(const arma::mat& ua,
                      const arma::mat& Sa_occ_occ,
                      const arma::mat& Sa_occ_virt,
                      const arma::mat& pseudoFockoo,
                      const arma::mat& pseudoFockov)
    {
        double result = 0;

        // SaSb - occ occ, occ occ
        // Sa( Ub + Sb)- occ occ, occ virt

        result += arma::accu(Sa_occ_occ % pseudoFockoo);

        // (Ua + Sa ) Sb - occ virt, occ occ
        // (Ua + Sa )( Ub +  Sb ) - occ virt, occ virt

        result += 2 * arma::accu((Sa_occ_virt - ua) % pseudoFockov);

        return result;
    }
}

namespace niedoida {
    namespace core {

        arma::mat HFFockMatrixGenerator::energy_hessian(
            std::shared_ptr<const System> system,
            const arma::mat& C,
            const arma::vec& eps,
            const std::vector<unsigned>& atoms,
            std::shared_ptr<const TwoElectronIntegralEngineFactory> ie_factory,
            std::shared_ptr<const FockMatrixGeneratorFactory> fm_gen) const
        {
            const std::size_t n = system->atoms.size();
            const std::size_t no_atoms = system->atoms.size();
            arma::mat g = arma::zeros<arma::mat>(3 * n, 3 * n);
            //
            //            std::size_t n_occ = system->no_electrons( SPIN_ALPHA
            //            );
            //
            //            std::vector<unsigned> non_const_atoms( atoms );
            //            std::size_t n_orbitals = eps.size();
            //            std::size_t n_virt = n_orbitals - n_occ;
            //
            //            arma::vec eps_virt = eps.subvec( n_occ, n_orbitals-1
            //            ); arma::vec eps_occ = eps.subvec( 0, n_occ-1 );
            //
            //            std::unique_ptr<FockMatrixGenerator>
            //            m_fock_matrix_generator = std::move( fm_gen->make(
            //            system ) );
            //
            //            arma::mat C_occ =  C.submat( arma::span( 0,
            //            n_orbitals-1 ), arma::span( 0, n_occ-1 ) ); arma::mat
            //            C_occ_t = trans( C_occ );
            //
            //            arma::mat C_virt = C.submat( arma::span( 0,
            //            n_orbitals-1 ),  arma::span( n_occ, n_orbitals-1 ) );
            //            arma::mat C_virt_t = trans( C_virt );
            //
            //            std::vector< arma::mat> dS_x_occ_occ;
            //            std::vector< arma::mat> dS_y_occ_occ;
            //            std::vector< arma::mat> dS_z_occ_occ;
            //
            //            std::vector< arma::mat> dFock_x_occ_occ;
            //            std::vector< arma::mat> dFock_y_occ_occ;
            //            std::vector< arma::mat> dFock_z_occ_occ;
            //
            //            std::vector< arma::mat> dS_x_occ_virt;
            //            std::vector< arma::mat> dS_y_occ_virt;
            //            std::vector< arma::mat> dS_z_occ_virt;
            //
            //            std::vector< arma::mat> dFock_x_occ_virt;
            //            std::vector< arma::mat> dFock_y_occ_virt;
            //            std::vector< arma::mat> dFock_z_occ_virt;
            //
            //            std::vector< arma::mat> u_x_occ_virt;
            //            std::vector< arma::mat> u_y_occ_virt;
            //            std::vector< arma::mat> u_z_occ_virt;
            //
            //            std::vector< arma::mat> u_x_virt_occ;
            //            std::vector< arma::mat> u_y_virt_occ;
            //            std::vector< arma::mat> u_z_virt_occ;
            //
            //            calc_dS_dFock( system, fm_gen, C, non_const_atoms,
            //                           dS_x_occ_occ, dS_y_occ_occ,
            //                           dS_z_occ_occ, dFock_x_occ_occ,
            //                           dFock_y_occ_occ, dFock_z_occ_occ,
            //                           dS_x_occ_virt, dS_y_occ_virt,
            //                           dS_z_occ_virt, dFock_x_occ_virt,
            //                           dFock_y_occ_virt, dFock_z_occ_virt );
            //
            //            energy_hessian_from_cphf( system, C, eps, atoms,
            //                                      dS_x_occ_occ, dS_y_occ_occ,
            //                                      dS_z_occ_occ, dS_x_occ_virt,
            //                                      dS_y_occ_virt,
            //                                      dS_z_occ_virt,
            //                                      dFock_x_occ_virt,
            //                                      dFock_y_occ_virt,
            //                                      dFock_z_occ_virt,
            //                                      u_x_occ_virt, u_y_occ_virt,
            //                                      u_z_occ_virt, ie_factory,
            //                                      fm_gen );
            //
            //            std::size_t u_size = u_x_occ_virt.size();
            //
            //            if( n_virt > 0 ) {
            //                for( unsigned u_ind = 0; u_ind < u_size ; u_ind++
            //                ) {
            //                    u_x_virt_occ.push_back( trans( u_x_occ_virt[
            //                    u_ind ] ) - trans( dS_x_occ_virt[ u_ind ] ) );
            //                    u_y_virt_occ.push_back( trans( u_y_occ_virt[
            //                    u_ind ] ) - trans( dS_y_occ_virt[ u_ind ] ) );
            //                    u_z_virt_occ.push_back( trans( u_z_occ_virt[
            //                    u_ind ] ) - trans( dS_z_occ_virt[ u_ind ] ) );
            //                }
            //            }
            //            else {
            //                for( unsigned u_ind = 0; u_ind < u_size ; u_ind++
            //                ) {
            //                    u_x_virt_occ.push_back(
            //                    arma::zeros<arma::mat>( 0,0 ) );
            //                    u_y_virt_occ.push_back(
            //                    arma::zeros<arma::mat>( 0,0 ) );
            //                    u_z_virt_occ.push_back(
            //                    arma::zeros<arma::mat>( 0,0 ) );
            //                }
            //            }
            //
            //            arma::mat psFock_occ_occ_x, psFock_occ_occ_y,
            //            psFock_occ_occ_z; arma::mat psFock_occ_virt_x,
            //            psFock_occ_virt_y, psFock_occ_virt_z;
            //
            //            for( std::size_t a = 0; a < n; ++a ) {
            //                std::size_t index = a;
            //                //const std::size_t a = atoms[index];
            //                pseudoFockMatUa( u_x_occ_virt[a], dS_x_occ_occ[a],
            //                dS_x_occ_virt[a],
            //                                 C, fm_gen, n_occ, n_orbitals,
            //                                 system, psFock_occ_occ_x,
            //                                 psFock_occ_virt_x );
            //
            //                pseudoFockMatUa( u_y_occ_virt[a], dS_y_occ_occ[a],
            //                dS_y_occ_virt[a],
            //                                 C, fm_gen, n_occ, n_orbitals,
            //                                 system, psFock_occ_occ_y,
            //                                 psFock_occ_virt_y );
            //
            //                pseudoFockMatUa( u_z_occ_virt[a], dS_z_occ_occ[a],
            //                dS_z_occ_virt[a],
            //                                 C, fm_gen, n_occ, n_orbitals,
            //                                 system, psFock_occ_occ_z,
            //                                 psFock_occ_virt_z );
            //
            //                for( std::size_t b = 0; b <= a; ++b ) {
            //
            //                    //OS1OneElectronIntegralGradientEngine
            //                    gradient_engine(system);
            //                    OneElectronD2IntegralEngine d2_engine( system
            //                    );
            //
            //                    arma::mat d2sxx;
            //                    arma::mat d2sxy;
            //                    arma::mat d2sxz;
            //
            //                    arma::mat d2syy;
            //                    arma::mat d2syz;
            //
            //                    arma::mat d2szz;
            //
            //                    // kinetyczne
            //                    arma::mat d2kxx;
            //                    arma::mat d2kxy;
            //                    arma::mat d2kxz;
            //
            //                    arma::mat d2kyy;
            //                    arma::mat d2kyz;
            //
            //                    arma::mat d2kzz;
            //
            //                    //i kulombowskie
            //                    arma::mat d2nexx;
            //                    arma::mat d2nexy;
            //                    arma::mat d2nexz;
            //
            //                    arma::mat d2neyx;
            //                    arma::mat d2neyy;
            //                    arma::mat d2neyz;
            //
            //                    arma::mat d2nezx;
            //                    arma::mat d2nezy;
            //                    arma::mat d2nezz;
            //
            //
            //                    arma::vec eps_for_P = eps;
            //                    const std::size_t lumo_idx =
            //                    system->no_electrons( SPIN_ALPHA );
            //                    std::fill_n( eps_for_P.begin() + lumo_idx,
            //                    eps_for_P.size() - lumo_idx, 0 );
            //
            //                    const arma::mat P_eps =
            //                        scf::density_matrix( C, eps_for_P );
            //
            //                    const arma::mat P =
            //                        scf::density_matrix( C, lumo_idx );
            //
            //                    arma::mat e_hessian = Vnn_hessian( system, a,
            //                    b ); const std::size_t size =
            //                    system->basis_set.real_size();
            //
            //                    double trT_xx = 0;
            //                    double trT_xy = 0;
            //                    double trT_xz = 0;
            //
            //                    double trT_yx = 0;
            //                    double trT_yy = 0;
            //                    double trT_yz = 0;
            //
            //                    double trT_zx = 0;
            //                    double trT_zy = 0;
            //                    double trT_zz = 0;
            //
            //                    double pulay_xx = 0;
            //                    double pulay_xy = 0;
            //                    double pulay_xz = 0;
            //
            //                    double pulay_yx = 0;
            //                    double pulay_yy = 0;
            //                    double pulay_yz = 0;
            //
            //                    double pulay_zx = 0;
            //                    double pulay_zy = 0;
            //                    double pulay_zz = 0;
            //
            //                    //gradient_engine.kinetic_gradient(a, dTx,
            //                    dTy, dTz); d2_engine.d2_kinetic( a, b, d2kxx,
            //                    d2kxy, d2kxz, d2kyy, d2kyz, d2kzz );
            //                    //gradient_engine.ne_gradient(a, dVnex, dVney,
            //                    dVnez); d2_engine.d2_ne( a, b, d2nexx, d2nexy,
            //                    d2nexz, d2neyx, d2neyy, d2neyz, d2nezx,
            //                    d2nezy, d2nezz );
            //                    //summing up T and Vne gradient matrices
            //                    d2nexx = 4*d2kxx-2*d2nexx;
            //                    d2nexy = 4*d2kxy-2*d2nexy;
            //                    d2nexz = 4*d2kxz-2*d2nexz;
            //
            //                    d2neyx = 4*d2kxy-2*d2neyx;
            //                    d2neyy = 4*d2kyy-2*d2neyy;
            //                    d2neyz = 4*d2kyz-2*d2neyz;
            //
            //                    d2nezx = 4*d2kxz-2*d2nezx;
            //                    d2nezy = 4*d2kyz-2*d2nezy;
            //                    d2nezz = 4*d2kzz-2*d2nezz;
            //
            //                    for( std::size_t i = 0; i < size; ++i )
            //                        for( std::size_t j = 0; j < size; ++j ) {
            //                            trT_xx += P( i, j ) * d2nexx( i, j );
            //                            trT_xy += P( i, j ) * d2nexy( i, j );
            //                            trT_xz += P( i, j ) * d2nexz( i, j );
            //
            //                            trT_yx += P( i, j ) * d2neyx( i, j );
            //                            trT_yy += P( i, j ) * d2neyy( i, j );
            //                            trT_yz += P( i, j ) * d2neyz( i, j );
            //
            //                            trT_zx += P( i, j ) * d2nezx( i, j );
            //                            trT_zy += P( i, j ) * d2nezy( i, j );
            //                            trT_zz += P( i, j ) * d2nezz( i, j );
            //                        }
            //                    //gradient_engine.overlap_gradient(a, dsx,
            //                    dsy, dsz); d2_engine.d2_overlap( a, b, d2sxx,
            //                    d2sxy, d2sxz, d2syy, d2syz, d2szz ); pulay_xx
            //                    = trace( P_eps*  d2sxx ); pulay_xy = trace(
            //                    P_eps*  d2sxy ); pulay_xz = trace( P_eps*
            //                    d2sxz );
            //
            //                    pulay_yx = trace( P_eps*  d2sxy );
            //                    pulay_yy = trace( P_eps*  d2syy );
            //                    pulay_yz = trace( P_eps*  d2syz );
            //
            //                    pulay_zx = trace( P_eps*  d2sxz );
            //                    pulay_zy = trace( P_eps*  d2syz );
            //                    pulay_zz = trace( P_eps*  d2szz );
            //
            //                    double xx_overlap = - 4 * pulay_xx;
            //                    double xx_1e = trT_xx;
            //
            //                    double xy_overlap = - 4 * pulay_xy;
            //                    double xy_1e = trT_xy;
            //
            //                    double xz_overlap = - 4 * pulay_xz;
            //                    double xz_1e = trT_xz;
            //
            //                    double yx_overlap = - 4 * pulay_yx;
            //                    double yx_1e = trT_yx;
            //
            //                    double yy_overlap = - 4 * pulay_yy;
            //                    double yy_1e = trT_yy;
            //
            //                    double yz_overlap = - 4 * pulay_yz;
            //                    double yz_1e = trT_yz;
            //
            //                    double zx_overlap = - 4 * pulay_zx;
            //                    double zx_1e = trT_zx;
            //
            //                    double zy_overlap = - 4 * pulay_zy;
            //                    double zy_1e = trT_zy;
            //
            //                    double zz_overlap = - 4 * pulay_zz;
            //                    double zz_1e = trT_zz;
            //
            //                    e_hessian( 0,0 ) += xx_overlap + xx_1e;
            //                    e_hessian( 0,1 ) += xy_overlap + xy_1e;
            //                    e_hessian( 0,2 ) += xz_overlap + xz_1e;
            //
            //                    e_hessian( 1,0 ) += yx_overlap + yx_1e;
            //                    e_hessian( 1,1 ) += yy_overlap + yy_1e;
            //                    e_hessian( 1,2 ) += yz_overlap + yz_1e;
            //
            //                    e_hessian( 2,0 ) += zx_overlap + zx_1e;
            //                    e_hessian( 2,1 ) += zy_overlap + zy_1e;
            //                    e_hessian( 2,2 ) += zz_overlap + zz_1e;
            //
            //                    // dU/da dF/db + dU/db dF/da - blok occ x occ
            //                    zostawic!!! e_hessian( 0, 0 ) +=
            //                    -2*arma::accu( dS_x_occ_occ[a] %
            //                    dFock_x_occ_occ[b] ); e_hessian( 0, 0 ) +=
            //                    -2*arma::accu( dS_x_occ_occ[b] %
            //                    dFock_x_occ_occ[a] );
            //
            //                    e_hessian( 0, 1 ) += -2*arma::accu(
            //                    dS_x_occ_occ[a] % dFock_y_occ_occ[b] );
            //                    e_hessian( 0, 1 ) += -2*arma::accu(
            //                    dS_y_occ_occ[b] % dFock_x_occ_occ[a] );
            //
            //                    e_hessian( 0, 2 ) += -2*arma::accu(
            //                    dS_x_occ_occ[a] % dFock_z_occ_occ[b] );
            //                    e_hessian( 0, 2 ) += -2*arma::accu(
            //                    dS_z_occ_occ[b] % dFock_x_occ_occ[a] );
            //
            //                    e_hessian( 1, 0 ) += -2*arma::accu(
            //                    dS_y_occ_occ[a] % dFock_x_occ_occ[b] );
            //                    e_hessian( 1, 0 ) += -2*arma::accu(
            //                    dS_x_occ_occ[b] % dFock_y_occ_occ[a] );
            //
            //                    e_hessian( 1, 1 ) += -2*arma::accu(
            //                    dS_y_occ_occ[a] % dFock_y_occ_occ[b] );
            //                    e_hessian( 1, 1 ) += -2*arma::accu(
            //                    dS_y_occ_occ[b] % dFock_y_occ_occ[a] );
            //
            //                    e_hessian( 1, 2 ) += -2*arma::accu(
            //                    dS_y_occ_occ[a] % dFock_z_occ_occ[b] );
            //                    e_hessian( 1, 2 ) += -2*arma::accu(
            //                    dS_z_occ_occ[b] % dFock_y_occ_occ[a] );
            //
            //                    e_hessian( 2, 0 ) += -2*arma::accu(
            //                    dS_z_occ_occ[a] % dFock_x_occ_occ[b] );
            //                    e_hessian( 2, 0 ) += -2*arma::accu(
            //                    dS_x_occ_occ[b] % dFock_z_occ_occ[a] );
            //
            //                    e_hessian( 2, 1 ) += -2*arma::accu(
            //                    dS_z_occ_occ[a] % dFock_y_occ_occ[b] );
            //                    e_hessian( 2, 1 ) += -2*arma::accu(
            //                    dS_y_occ_occ[b] % dFock_z_occ_occ[a] );
            //
            //                    e_hessian( 2, 2 ) += -2*arma::accu(
            //                    dS_z_occ_occ[a] % dFock_z_occ_occ[b] );
            //                    e_hessian( 2, 2 ) += -2*arma::accu(
            //                    dS_z_occ_occ[b] % dFock_z_occ_occ[a] );
            //                    // dU/da dF/db + dU/db dF/da - blok occ x virt
            //
            //                    e_hessian( 0, 0 ) += -4*arma::accu( (
            //                    dS_x_occ_virt[a] - u_x_occ_virt[a] )%
            //                    dFock_x_occ_virt[b] ); e_hessian( 0, 0 ) +=
            //                    -4*arma::accu( ( dS_x_occ_virt[b] -
            //                    u_x_occ_virt[b] )% dFock_x_occ_virt[a] );
            //
            //                    e_hessian( 0, 1 ) += -4*arma::accu( (
            //                    dS_x_occ_virt[a] - u_x_occ_virt[a] )%
            //                    dFock_y_occ_virt[b] ); e_hessian( 0, 1 ) +=
            //                    -4*arma::accu( ( dS_y_occ_virt[b] -
            //                    u_y_occ_virt[b] )% dFock_x_occ_virt[a] );
            //
            //                    e_hessian( 0, 2 ) += -4*arma::accu( (
            //                    dS_x_occ_virt[a] - u_x_occ_virt[a] )%
            //                    dFock_z_occ_virt[b] ); e_hessian( 0, 2 ) +=
            //                    -4*arma::accu( ( dS_z_occ_virt[b] -
            //                    u_z_occ_virt[b] )% dFock_x_occ_virt[a] );
            //
            //                    e_hessian( 1, 0 ) += -4*arma::accu( (
            //                    dS_y_occ_virt[a] - u_y_occ_virt[a] )%
            //                    dFock_x_occ_virt[b] ); e_hessian( 1, 0 ) +=
            //                    -4*arma::accu( ( dS_x_occ_virt[b] -
            //                    u_x_occ_virt[b] )% dFock_y_occ_virt[a] );
            //
            //                    e_hessian( 1, 1 ) += -4*arma::accu( (
            //                    dS_y_occ_virt[a] - u_y_occ_virt[a] )%
            //                    dFock_y_occ_virt[b] ); e_hessian( 1, 1 ) +=
            //                    -4*arma::accu( ( dS_y_occ_virt[b] -
            //                    u_y_occ_virt[b] )% dFock_y_occ_virt[a] );
            //
            //                    e_hessian( 1, 2 ) += -4*arma::accu( (
            //                    dS_y_occ_virt[a] - u_y_occ_virt[a] )%
            //                    dFock_z_occ_virt[b] ); e_hessian( 1, 2 ) +=
            //                    -4*arma::accu( ( dS_z_occ_virt[b] -
            //                    u_z_occ_virt[b] )% dFock_y_occ_virt[a] );
            //
            //                    e_hessian( 2, 0 ) += -4*arma::accu( (
            //                    dS_z_occ_virt[a] - u_z_occ_virt[a] )%
            //                    dFock_x_occ_virt[b] ); e_hessian( 2, 0 ) +=
            //                    -4*arma::accu( ( dS_x_occ_virt[b] -
            //                    u_x_occ_virt[b] )% dFock_z_occ_virt[a] );
            //
            //                    e_hessian( 2, 1 ) += -4*arma::accu( (
            //                    dS_z_occ_virt[a] - u_z_occ_virt[a] )%
            //                    dFock_y_occ_virt[b] ); e_hessian( 2, 1 ) +=
            //                    -4*arma::accu( ( dS_y_occ_virt[b] -
            //                    u_y_occ_virt[b] )% dFock_z_occ_virt[a] );
            //
            //                    e_hessian( 2, 2 ) += -4*arma::accu( (
            //                    dS_z_occ_virt[a] - u_z_occ_virt[a] )%
            //                    dFock_z_occ_virt[b] ); e_hessian( 2, 2 ) +=
            //                    -4*arma::accu( ( dS_z_occ_virt[b] -
            //                    u_z_occ_virt[b] )% dFock_z_occ_virt[a] );
            //                    // dS/da dS/db eps_i - blok occ x occ
            //                    zostawic!!!
            //
            //                    e_hessian( 0, 0 ) += 4*SaSbEps(
            //                    dS_x_occ_occ[a], dS_x_occ_occ[b], eps_occ );
            //                    e_hessian( 0, 1 ) += 4*SaSbEps(
            //                    dS_x_occ_occ[a], dS_y_occ_occ[b], eps_occ );
            //                    e_hessian( 0, 2 ) += 4*SaSbEps(
            //                    dS_x_occ_occ[a], dS_z_occ_occ[b], eps_occ );
            //
            //                    e_hessian( 1, 0 ) += 4*SaSbEps(
            //                    dS_y_occ_occ[a], dS_x_occ_occ[b], eps_occ );
            //                    e_hessian( 1, 1 ) += 4*SaSbEps(
            //                    dS_y_occ_occ[a], dS_y_occ_occ[b], eps_occ );
            //                    e_hessian( 1, 2 ) += 4*SaSbEps(
            //                    dS_y_occ_occ[a], dS_z_occ_occ[b], eps_occ );
            //
            //                    e_hessian( 2, 0 ) += 4*SaSbEps(
            //                    dS_z_occ_occ[a], dS_x_occ_occ[b], eps_occ );
            //                    e_hessian( 2, 1 ) += 4*SaSbEps(
            //                    dS_z_occ_occ[a], dS_y_occ_occ[b], eps_occ );
            //                    e_hessian( 2, 2 ) += 4*SaSbEps(
            //                    dS_z_occ_occ[a], dS_z_occ_occ[b], eps_occ );
            //                    // dS/da dS/db ( eps_i + eps_j ) - blok occ x
            //                    virt
            //
            //                    e_hessian( 0, 0 ) += 4*SaSbEps(
            //                    dS_x_occ_virt[a], dS_x_occ_virt[b], eps_occ );
            //                    e_hessian( 0, 1 ) += 4*SaSbEps(
            //                    dS_x_occ_virt[a], dS_y_occ_virt[b], eps_occ );
            //                    e_hessian( 0, 2 ) += 4*SaSbEps(
            //                    dS_x_occ_virt[a], dS_z_occ_virt[b], eps_occ );
            //
            //                    e_hessian( 1, 0 ) += 4*SaSbEps(
            //                    dS_y_occ_virt[a], dS_x_occ_virt[b], eps_occ );
            //                    e_hessian( 1, 1 ) += 4*SaSbEps(
            //                    dS_y_occ_virt[a], dS_y_occ_virt[b], eps_occ );
            //                    e_hessian( 1, 2 ) += 4*SaSbEps(
            //                    dS_y_occ_virt[a], dS_z_occ_virt[b], eps_occ );
            //
            //                    e_hessian( 2, 0 ) += 4*SaSbEps(
            //                    dS_z_occ_virt[a], dS_x_occ_virt[b], eps_occ );
            //                    e_hessian( 2, 1 ) += 4*SaSbEps(
            //                    dS_z_occ_virt[a], dS_y_occ_virt[b], eps_occ );
            //                    e_hessian( 2, 2 ) += 4*SaSbEps(
            //                    dS_z_occ_virt[a], dS_z_occ_virt[b], eps_occ );
            //                    // Ua Ub ( eps_j - eps_i ) - blok occ x virt
            //                    if( n_virt > 0 ) {
            //                        e_hessian( 0,0 ) -= 4*SaSbEps(
            //                        u_x_occ_virt[a], u_x_occ_virt[b], eps_occ
            //                        ); e_hessian( 0,1 ) -= 4*SaSbEps(
            //                        u_x_occ_virt[a], u_y_occ_virt[b], eps_occ
            //                        ); e_hessian( 0,2 ) -= 4*SaSbEps(
            //                        u_x_occ_virt[a], u_z_occ_virt[b], eps_occ
            //                        );
            //
            //                        e_hessian( 1,0 ) -= 4*SaSbEps(
            //                        u_y_occ_virt[a], u_x_occ_virt[b], eps_occ
            //                        ); e_hessian( 1,1 ) -= 4*SaSbEps(
            //                        u_y_occ_virt[a], u_y_occ_virt[b], eps_occ
            //                        ); e_hessian( 1,2 ) -= 4*SaSbEps(
            //                        u_y_occ_virt[a], u_z_occ_virt[b], eps_occ
            //                        );
            //
            //                        e_hessian( 2,0 ) -= 4*SaSbEps(
            //                        u_z_occ_virt[a], u_x_occ_virt[b], eps_occ
            //                        ); e_hessian( 2,1 ) -= 4*SaSbEps(
            //                        u_z_occ_virt[a], u_y_occ_virt[b], eps_occ
            //                        ); e_hessian( 2,2 ) -= 4*SaSbEps(
            //                        u_z_occ_virt[a], u_z_occ_virt[b], eps_occ
            //                        );
            //
            //                        e_hessian( 0,0 ) += 4*SaSbEps(
            //                        u_x_virt_occ[a], u_x_virt_occ[b], eps_virt
            //                        ); e_hessian( 0,1 ) += 4*SaSbEps(
            //                        u_x_virt_occ[a], u_y_virt_occ[b], eps_virt
            //                        ); e_hessian( 0,2 ) += 4*SaSbEps(
            //                        u_x_virt_occ[a], u_z_virt_occ[b], eps_virt
            //                        );
            //
            //                        e_hessian( 1,0 ) += 4*SaSbEps(
            //                        u_y_virt_occ[a], u_x_virt_occ[b], eps_virt
            //                        ); e_hessian( 1,1 ) += 4*SaSbEps(
            //                        u_y_virt_occ[a], u_y_virt_occ[b], eps_virt
            //                        ); e_hessian( 1,2 ) += 4*SaSbEps(
            //                        u_y_virt_occ[a], u_z_virt_occ[b], eps_virt
            //                        );
            //
            //                        e_hessian( 2,0 ) += 4*SaSbEps(
            //                        u_z_virt_occ[a], u_x_virt_occ[b], eps_virt
            //                        ); e_hessian( 2,1 ) += 4*SaSbEps(
            //                        u_z_virt_occ[a], u_y_virt_occ[b], eps_virt
            //                        ); e_hessian( 2,2 ) += 4*SaSbEps(
            //                        u_z_virt_occ[a], u_z_virt_occ[b], eps_virt
            //                        );
            //                    }
            //                    // ( dS/da Ub + dS/db Ua ) eps_j  - blok occ x
            //                    virt
            //
            //                    e_hessian( 0,0 ) += UaUb_2J_2K(
            //                    u_x_occ_virt[b], dS_x_occ_occ[b],
            //                                                    dS_x_occ_virt[b],
            //                                                    psFock_occ_occ_x,
            //                                                    psFock_occ_virt_x
            //                                                    );
            //                    e_hessian( 0,1 ) += UaUb_2J_2K(
            //                    u_y_occ_virt[b], dS_y_occ_occ[b],
            //                                                    dS_y_occ_virt[b],
            //                                                    psFock_occ_occ_x,
            //                                                    psFock_occ_virt_x
            //                                                    );
            //                    e_hessian( 0,2 ) += UaUb_2J_2K(
            //                    u_z_occ_virt[b], dS_z_occ_occ[b],
            //                                                    dS_z_occ_virt[b],
            //                                                    psFock_occ_occ_x,
            //                                                    psFock_occ_virt_x
            //                                                    );
            //
            //                    e_hessian( 1,0 ) += UaUb_2J_2K(
            //                    u_x_occ_virt[b], dS_x_occ_occ[b],
            //                                                    dS_x_occ_virt[b],
            //                                                    psFock_occ_occ_y,
            //                                                    psFock_occ_virt_y
            //                                                    );
            //                    e_hessian( 1,1 ) += UaUb_2J_2K(
            //                    u_y_occ_virt[b], dS_y_occ_occ[b],
            //                                                    dS_y_occ_virt[b],
            //                                                    psFock_occ_occ_y,
            //                                                    psFock_occ_virt_y
            //                                                    );
            //                    e_hessian( 1,2 ) += UaUb_2J_2K(
            //                    u_z_occ_virt[b], dS_z_occ_occ[b],
            //                                                    dS_z_occ_virt[b],
            //                                                    psFock_occ_occ_y,
            //                                                    psFock_occ_virt_y
            //                                                    );
            //
            //                    e_hessian( 2,0 ) += UaUb_2J_2K(
            //                    u_x_occ_virt[b], dS_x_occ_occ[b],
            //                                                    dS_x_occ_virt[b],
            //                                                    psFock_occ_occ_z,
            //                                                    psFock_occ_virt_z
            //                                                    );
            //                    e_hessian( 2,1 ) += UaUb_2J_2K(
            //                    u_y_occ_virt[b], dS_y_occ_occ[b],
            //                                                    dS_y_occ_virt[b],
            //                                                    psFock_occ_occ_z,
            //                                                    psFock_occ_virt_z
            //                                                    );
            //                    e_hessian( 2,2 ) += UaUb_2J_2K(
            //                    u_z_occ_virt[b], dS_z_occ_occ[b],
            //                                                    dS_z_occ_virt[b],
            //                                                    psFock_occ_occ_z,
            //                                                    psFock_occ_virt_z
            //                                                    );
            //                    for( std::size_t i = 0; i < 3; i++ )
            //                        for( std::size_t j = 0; j < 3; j++ )
            //                            g( 3*index+i, 3*b+j ) += e_hessian( i,
            //                            j );
            //
            //                }
            //
            //            }
            //
            //            //2-el gradient
            //
            //            //OS1TwoElectronIntegralGradientEngine
            //            gradient_engine2(system);
            //            OS1TwoElectronD2IntegralEngine d2_engine2( system );
            //
            //            const double threshold = 1e-10;
            //            const BasisSetInfo bs_info( system->basis_set );
            //            const SchwartzEstimator& schwartz = *(
            //            system->basis_set.schwartz_estimator ); const
            //            SignificantShellPairsGenerator sspg(
            //            bs_info.m_shell_sizes.size(), schwartz, threshold *
            //            0.01 ); const SignificantShellQuartetIndexGenerator
            //            sq_begin( sspg );
            //
            //            std::vector<double> d2eexx;
            //            std::vector<double> d2eexy;
            //            std::vector<double> d2eexz;
            //
            //            std::vector<double> d2eeyx;
            //            std::vector<double> d2eeyy;
            //            std::vector<double> d2eeyz;
            //
            //            std::vector<double> d2eezx;
            //            std::vector<double> d2eezy;
            //            std::vector<double> d2eezz;
            //
            //            const std::size_t lumo_idx = system->no_electrons(
            //            SPIN_ALPHA ); const arma::mat P =
            //                scf::density_matrix( C, lumo_idx );
            //
            //            const std::size_t no_shells =
            //            bs_info.m_shell_sizes.size();
            //
            //            // shell compressed density matrices
            //            arma::mat max_P_shells = arma::zeros<arma::mat>(
            //            no_shells, no_shells ); for( std::size_t i = 0; i <
            //            no_shells; ++i )
            //                for( std::size_t j = 0; j <= i; ++j ) {
            //                    double max = 0;
            //                    const std::size_t b1 =
            //                    bs_info.m_first_contraction_in_shell[i]; const
            //                    std::size_t b2 =
            //                    bs_info.m_first_contraction_in_shell[j]; const
            //                    std::size_t n1 = bs_info.m_shell_sizes[i];
            //                    const std::size_t n2 =
            //                    bs_info.m_shell_sizes[j]; for( std::size_t k =
            //                    b1; k < b1 + n1; ++k )
            //                        for( std::size_t l = b2; l < b2 + n2; ++l
            //                        )
            //                            if( std::abs( P( k, l ) ) > max )
            //                                max = std::abs( P( k, l ) );
            //
            //                    max_P_shells( i, j ) = max;
            //                    max_P_shells( j, i ) = max;
            //                }
            //
            //            std::vector<std::size_t> shell_atom;
            //            for( std::size_t A = 0; A < no_atoms; ++A ) {
            //                const AtomicBasisSet& Abs =
            //                *system->basis_set.atomic_basis_sets()[A]; for(
            //                std::size_t Asi = 0; Asi <
            //                Abs.valence_shells().size(); ++Asi ) {
            //                    shell_atom.push_back( A );
            //                }
            //            }
            //
            //            arma::mat e_hessian = arma::zeros<arma::mat>( 3*n, 3*n
            //            );
            //
            //            arma::mat trJ = arma::zeros<arma::mat>( 3*n, 3*n );
            //            arma::mat trK = arma::zeros<arma::mat>( 3*n, 3*n );
            //
            //            const SignificantShellQuartetIndexGenerator sq_end =
            //            sq_begin.make_end();
            //
            //            for( SignificantShellQuartetIndexGenerator i =
            //            sq_begin; i != sq_end; ++i ) {
            //
            //                const double max_P = max_P2( *i, max_P_shells );
            //                const double max_integral = schwartz.max_integral(
            //                *i );
            //
            //                if( max_P * max_integral < threshold )
            //                    continue;
            //
            //                const double current_threshold =
            //                    std::abs( max_P ) < 1e-20
            //                    ? threshold / 1e-20
            //                    : threshold / std::abs( max_P );
            //
            //                const std::size_t I = ( *i )[0];
            //                const std::size_t J = ( *i )[1];
            //                const std::size_t K = ( *i )[2];
            //                const std::size_t L = ( *i )[3];
            //
            //                //const std::size_t A = shell_atom[I];
            //                //const std::size_t B = shell_atom[J];
            //                //const std::size_t C = shell_atom[K];
            //                //const std::size_t D = shell_atom[L];
            //
            //                const std::size_t bI =
            //                bs_info.m_first_contraction_in_shell[I]; const
            //                std::size_t bJ =
            //                bs_info.m_first_contraction_in_shell[J]; const
            //                std::size_t bK =
            //                bs_info.m_first_contraction_in_shell[K]; const
            //                std::size_t bL =
            //                bs_info.m_first_contraction_in_shell[L];
            //
            //                const std::size_t nI = bs_info.m_shell_sizes[I];
            //                const std::size_t nJ = bs_info.m_shell_sizes[J];
            //                const std::size_t nK = bs_info.m_shell_sizes[K];
            //                const std::size_t nL = bs_info.m_shell_sizes[L];
            //
            //                const ShellQuartetType type =
            //                    shell_quartet_type( I, J, K, L );
            //
            //                std::vector<std::size_t> unique;
            //                std::vector<std::size_t>::const_iterator it;
            //
            //                for( std::size_t  unInd = 0; unInd < no_atoms;
            //                unInd++ )
            //                    unique.push_back( unInd );
            //
            //                /*it = std::find(atoms.begin(), atoms.end(), A);
            //                if(it != atoms.end()) {
            //                unique.push_back(std::distance(atoms.begin(),
            //                it));
            //                }
            //                it = std::find(atoms.begin(), atoms.end(), B);
            //                if(it != atoms.end() && B != A) {
            //                unique.push_back(std::distance(atoms.begin(),
            //                it));
            //                }
            //                it = std::find(atoms.begin(), atoms.end(), C);
            //                if(it != atoms.end() && C != B && C != A) {
            //                unique.push_back(std::distance(atoms.begin(),
            //                it));
            //                }
            //                it = std::find(atoms.begin(), atoms.end(), D);
            //                if(it != atoms.end() && D != C && D != B && D !=
            //                A) { unique.push_back(std::distance(atoms.begin(),
            //                it)); } */
            //
            //                for( std::size_t i = 0; i < unique.size(); ++i ) {
            //                    const std::size_t a = unique[i]; //unique
            //                    zawiera na razie WSZYSTKIE  atomy...
            //
            //                    for( std::size_t b = 0 ; b <= a; b++ ) {
            //
            //                        d2eexx.assign( nI * nJ * nK * nL, 0 );
            //                        d2eexy.assign( nI * nJ * nK * nL, 0 );
            //                        d2eexz.assign( nI * nJ * nK * nL, 0 );
            //
            //                        d2eeyx.assign( nI * nJ * nK * nL, 0 );
            //                        d2eeyy.assign( nI * nJ * nK * nL, 0 );
            //                        d2eeyz.assign( nI * nJ * nK * nL, 0 );
            //
            //                        d2eezx.assign( nI * nJ * nK * nL, 0 );
            //                        d2eezy.assign( nI * nJ * nK * nL, 0 );
            //                        d2eezz.assign( nI * nJ * nK * nL, 0 );
            //
            //                        d2_engine2.calc( atoms[a], b, I, J, K, L,
            //                        d2eexx.data(), d2eexy.data(),
            //                        d2eexz.data(),
            //                                         d2eeyx.data(),
            //                                         d2eeyy.data(),
            //                                         d2eeyz.data(),
            //                                         d2eezx.data(),
            //                                         d2eezy.data(),
            //                                         d2eezz.data() );
            //
            //                        switch( type ) {
            //                            case SHELL_QUARTET_TYPE_ABCD: {
            //                                for( std::size_t i = bI; i < bI +
            //                                nI; ++i )
            //                                    for( std::size_t j = bJ; j <
            //                                    bJ + nJ; ++j )
            //                                        for( std::size_t k = bK; k
            //                                        < bK + nK; ++k )
            //                                            for( std::size_t l =
            //                                            bL; l < bL + nL; ++l )
            //                                            {
            //                                                double gxx =
            //                                                d2eexx[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //                                                double gxy =
            //                                                d2eexy[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //                                                double gxz =
            //                                                d2eexz[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //
            //                                                double gyx =
            //                                                d2eeyx[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //                                                double gyy =
            //                                                d2eeyy[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //                                                double gyz =
            //                                                d2eeyz[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //
            //                                                double gzx =
            //                                                d2eezx[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //                                                double gzy =
            //                                                d2eezy[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //                                                double gzz =
            //                                                d2eezz[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //
            //                                                if( std::abs( gxx
            //                                                ) <
            //                                                current_threshold
            //                                                &&
            //                                                        std::abs(
            //                                                        gxy ) <
            //                                                        current_threshold
            //                                                        &&
            //                                                        std::abs(
            //                                                        gxz ) <
            //                                                        current_threshold
            //                                                        &&
            //                                                        std::abs(
            //                                                        gyx ) <
            //                                                        current_threshold
            //                                                        &&
            //                                                        std::abs(
            //                                                        gyy ) <
            //                                                        current_threshold
            //                                                        &&
            //                                                        std::abs(
            //                                                        gyz ) <
            //                                                        current_threshold
            //                                                        &&
            //                                                        std::abs(
            //                                                        gzx ) <
            //                                                        current_threshold
            //                                                        &&
            //                                                        std::abs(
            //                                                        gzy ) <
            //                                                        current_threshold
            //                                                        &&
            //                                                        std::abs(
            //                                                        gzz ) <
            //                                                        current_threshold
            //                                                        )
            //                                                    continue;
            //
            //                                                double d2g[3][3] =
            //                                                {
            //                                                    { gxx, gxy,
            //                                                    gxz}, { gyx,
            //                                                    gyy, gyz}, {
            //                                                    gzx, gzy, gzz}
            //                                                };
            //
            //                                                for( int row = 0;
            //                                                row<3; row++ )
            //                                                    for( int col =
            //                                                    0; col < 3;
            //                                                    col++ ) {
            //                                                        trJ(
            //                                                        3*a+row,
            //                                                        3*b+col )
            //                                                        += 16 *
            //                                                        d2g[row][col]
            //                                                        * P( k, l
            //                                                        ) * P( i,
            //                                                        j );
            //
            //                                                        trK(
            //                                                        3*a+row,
            //                                                        3*b+col )
            //                                                        -= 4 *
            //                                                        d2g[row][col]
            //                                                        * P( j, l
            //                                                        ) * P( i,
            //                                                        k ); trK(
            //                                                        3*a+row,
            //                                                        3*b+col )
            //                                                        -= 4 *
            //                                                        d2g[row][col]
            //                                                        * P( i, l
            //                                                        ) * P( j,
            //                                                        k );
            //                                                    }
            //                                            }
            //                                break;
            //                            }
            //                            case SHELL_QUARTET_TYPE_AACD: {
            //                                for( std::size_t i = bI; i < bI +
            //                                nI; ++i )
            //                                    for( std::size_t j = std::max(
            //                                    i, bJ ); j < bJ + nJ; ++j )
            //                                        for( std::size_t k = bK; k
            //                                        < bK + nK; ++k )
            //                                            for( std::size_t l =
            //                                            bL; l < bL + nL; ++l )
            //                                            {
            //                                                double gxx =
            //                                                d2eexx[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //                                                double gxy =
            //                                                d2eexy[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //                                                double gxz =
            //                                                d2eexz[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //
            //                                                double gyx =
            //                                                d2eeyx[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //                                                double gyy =
            //                                                d2eeyy[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //                                                double gyz =
            //                                                d2eeyz[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //
            //                                                double gzx =
            //                                                d2eezx[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //                                                double gzy =
            //                                                d2eezy[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //                                                double gzz =
            //                                                d2eezz[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //
            //                                                if( std::abs( gxx
            //                                                ) <
            //                                                current_threshold
            //                                                &&
            //                                                        std::abs(
            //                                                        gxy ) <
            //                                                        current_threshold
            //                                                        &&
            //                                                        std::abs(
            //                                                        gxz ) <
            //                                                        current_threshold
            //                                                        &&
            //                                                        std::abs(
            //                                                        gyx ) <
            //                                                        current_threshold
            //                                                        &&
            //                                                        std::abs(
            //                                                        gyy ) <
            //                                                        current_threshold
            //                                                        &&
            //                                                        std::abs(
            //                                                        gyz ) <
            //                                                        current_threshold
            //                                                        &&
            //                                                        std::abs(
            //                                                        gzx ) <
            //                                                        current_threshold
            //                                                        &&
            //                                                        std::abs(
            //                                                        gzy ) <
            //                                                        current_threshold
            //                                                        &&
            //                                                        std::abs(
            //                                                        gzz ) <
            //                                                        current_threshold
            //                                                        )
            //                                                    continue;
            //
            //                                                double d2g[3][3] =
            //                                                {
            //                                                    { gxx, gxy,
            //                                                    gxz}, { gyx,
            //                                                    gyy, gyz}, {
            //                                                    gzx, gzy, gzz}
            //                                                };
            //
            //                                                if( i == j ) {
            //                                                    for( int row =
            //                                                    0; row<3;
            //                                                    row++ )
            //                                                        for( int
            //                                                        col = 0;
            //                                                        col < 3;
            //                                                        col++ ) {
            //                                                            d2g[row][col]
            //                                                            =
            //                                                            0.5*d2g[row][col];
            //                                                        }
            //                                                }
            //
            //                                                for( int row = 0;
            //                                                row<3; row++ )
            //                                                    for( int col =
            //                                                    0; col < 3;
            //                                                    col++ ) {
            //                                                        trJ(
            //                                                        3*a+row,
            //                                                        3*b+col )
            //                                                        += 16 *
            //                                                        d2g[row][col]
            //                                                        * P( k, l
            //                                                        ) * P( i,
            //                                                        j );
            //
            //                                                        trK(
            //                                                        3*a+row,
            //                                                        3*b+col )
            //                                                        -= 4 *
            //                                                        d2g[row][col]
            //                                                        * P( j, l
            //                                                        ) * P( i,
            //                                                        k ); trK(
            //                                                        3*a+row,
            //                                                        3*b+col )
            //                                                        -= 4 *
            //                                                        d2g[row][col]
            //                                                        * P( i, l
            //                                                        ) * P( j,
            //                                                        k );
            //                                                    }
            //                                            }
            //                                break;
            //                            }
            //                            case SHELL_QUARTET_TYPE_ABCC: {
            //                                for( std::size_t i = bI; i < bI +
            //                                nI; ++i )
            //                                    for( std::size_t j = bJ; j <
            //                                    bJ + nJ; ++j )
            //                                        for( std::size_t k = bK; k
            //                                        < bK + nK; ++k )
            //                                            for( std::size_t l =
            //                                            std::max( k, bL ); l <
            //                                            bL + nL; ++l ) {
            //                                                double gxx =
            //                                                d2eexx[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //                                                double gxy =
            //                                                d2eexy[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //                                                double gxz =
            //                                                d2eexz[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //
            //                                                double gyx =
            //                                                d2eeyx[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //                                                double gyy =
            //                                                d2eeyy[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //                                                double gyz =
            //                                                d2eeyz[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //
            //                                                double gzx =
            //                                                d2eezx[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //                                                double gzy =
            //                                                d2eezy[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //                                                double gzz =
            //                                                d2eezz[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //
            //                                                if( std::abs( gxx
            //                                                ) <
            //                                                current_threshold
            //                                                &&
            //                                                        std::abs(
            //                                                        gxy ) <
            //                                                        current_threshold
            //                                                        &&
            //                                                        std::abs(
            //                                                        gxz ) <
            //                                                        current_threshold
            //                                                        &&
            //                                                        std::abs(
            //                                                        gyx ) <
            //                                                        current_threshold
            //                                                        &&
            //                                                        std::abs(
            //                                                        gyy ) <
            //                                                        current_threshold
            //                                                        &&
            //                                                        std::abs(
            //                                                        gyz ) <
            //                                                        current_threshold
            //                                                        &&
            //                                                        std::abs(
            //                                                        gzx ) <
            //                                                        current_threshold
            //                                                        &&
            //                                                        std::abs(
            //                                                        gzy ) <
            //                                                        current_threshold
            //                                                        &&
            //                                                        std::abs(
            //                                                        gzz ) <
            //                                                        current_threshold
            //                                                        )
            //                                                    continue;
            //
            //                                                double d2g[3][3] =
            //                                                {
            //                                                    { gxx, gxy,
            //                                                    gxz}, { gyx,
            //                                                    gyy, gyz}, {
            //                                                    gzx, gzy, gzz}
            //                                                };
            //
            //                                                if( k == l ) {
            //                                                    for( int row =
            //                                                    0; row<3;
            //                                                    row++ )
            //                                                        for( int
            //                                                        col = 0;
            //                                                        col < 3;
            //                                                        col++ ) {
            //                                                            d2g[row][col]
            //                                                            =
            //                                                            0.5*d2g[row][col];
            //                                                        }
            //                                                }
            //
            //                                                for( int row = 0;
            //                                                row<3; row++ )
            //                                                    for( int col =
            //                                                    0; col < 3;
            //                                                    col++ ) {
            //                                                        trJ(
            //                                                        3*a+row,
            //                                                        3*b+col )
            //                                                        += 16 *
            //                                                        d2g[row][col]
            //                                                        * P( k, l
            //                                                        ) * P( i,
            //                                                        j );
            //
            //                                                        trK(
            //                                                        3*a+row,
            //                                                        3*b+col )
            //                                                        -= 4 *
            //                                                        d2g[row][col]
            //                                                        * P( j, l
            //                                                        ) * P( i,
            //                                                        k ); trK(
            //                                                        3*a+row,
            //                                                        3*b+col )
            //                                                        -= 4 *
            //                                                        d2g[row][col]
            //                                                        * P( i, l
            //                                                        ) * P( j,
            //                                                        k );
            //                                                    }
            //                                            }
            //                                break;
            //                            }
            //                            default: {
            //                                for( std::size_t i = bI; i < bI +
            //                                nI; ++i )
            //                                    for( std::size_t j = std::max(
            //                                    i, bJ ); j < bJ + nJ; ++j ) {
            //                                        for( std::size_t k =
            //                                        std::max( i, bK ); k < bK
            //                                        + nK; ++k ) {
            //                                            const std::size_t l0 =
            //                                                k == i
            //                                                ? std::max( j, bL
            //                                                ) : std::max( k,
            //                                                bL );
            //                                            for( std::size_t l =
            //                                            l0; l < bL + nL; ++l )
            //                                            {
            //                                                double gxx =
            //                                                d2eexx[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //                                                double gxy =
            //                                                d2eexy[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //                                                double gxz =
            //                                                d2eexz[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //
            //                                                double gyx =
            //                                                d2eeyx[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //                                                double gyy =
            //                                                d2eeyy[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //                                                double gyz =
            //                                                d2eeyz[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //
            //                                                double gzx =
            //                                                d2eezx[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //                                                double gzy =
            //                                                d2eezy[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //                                                double gzz =
            //                                                d2eezz[( ( ( ( i -
            //                                                bI ) * nJ + ( j -
            //                                                bJ ) ) * nK + ( k
            //                                                - bK ) ) * nL ) +
            //                                                ( l - bL )];
            //
            //                                                if( std::abs( gxx
            //                                                ) <
            //                                                current_threshold
            //                                                &&
            //                                                        std::abs(
            //                                                        gxy ) <
            //                                                        current_threshold
            //                                                        &&
            //                                                        std::abs(
            //                                                        gxz ) <
            //                                                        current_threshold
            //                                                        &&
            //                                                        std::abs(
            //                                                        gyx ) <
            //                                                        current_threshold
            //                                                        &&
            //                                                        std::abs(
            //                                                        gyy ) <
            //                                                        current_threshold
            //                                                        &&
            //                                                        std::abs(
            //                                                        gyz ) <
            //                                                        current_threshold
            //                                                        &&
            //                                                        std::abs(
            //                                                        gzx ) <
            //                                                        current_threshold
            //                                                        &&
            //                                                        std::abs(
            //                                                        gzy ) <
            //                                                        current_threshold
            //                                                        &&
            //                                                        std::abs(
            //                                                        gzz ) <
            //                                                        current_threshold
            //                                                        )
            //                                                    continue;
            //
            //                                                double d2g[3][3] =
            //                                                {
            //                                                    { gxx, gxy,
            //                                                    gxz}, { gyx,
            //                                                    gyy, gyz}, {
            //                                                    gzx, gzy, gzz}
            //                                                };
            //
            //                                                if( i == j ) {
            //                                                    for( int row =
            //                                                    0; row<3;
            //                                                    row++ )
            //                                                        for( int
            //                                                        col = 0;
            //                                                        col < 3;
            //                                                        col++ ) {
            //                                                            d2g[row][col]
            //                                                            =
            //                                                            0.5*d2g[row][col];
            //                                                        }
            //                                                }
            //                                                if( k == l ) {
            //                                                    for( int row =
            //                                                    0; row<3;
            //                                                    row++ )
            //                                                        for( int
            //                                                        col = 0;
            //                                                        col < 3;
            //                                                        col++ ) {
            //                                                            d2g[row][col]
            //                                                            =
            //                                                            0.5*d2g[row][col];
            //                                                        }
            //                                                }
            //                                                if( i == k && j ==
            //                                                l ) {
            //                                                    for( int row =
            //                                                    0; row<3;
            //                                                    row++ )
            //                                                        for( int
            //                                                        col = 0;
            //                                                        col < 3;
            //                                                        col++ ) {
            //                                                            d2g[row][col]
            //                                                            =
            //                                                            0.5*d2g[row][col];
            //                                                        }
            //                                                }
            //
            //
            //                                                for( int row = 0;
            //                                                row<3; row++ )
            //                                                    for( int col =
            //                                                    0; col < 3;
            //                                                    col++ ) {
            //                                                        trJ(
            //                                                        3*a+row,
            //                                                        3*b+col )
            //                                                        += 16 *
            //                                                        d2g[row][col]
            //                                                        * P( k, l
            //                                                        ) * P( i,
            //                                                        j );
            //
            //                                                        trK(
            //                                                        3*a+row,
            //                                                        3*b+col )
            //                                                        -= 4 *
            //                                                        d2g[row][col]
            //                                                        * P( j, l
            //                                                        ) * P( i,
            //                                                        k ); trK(
            //                                                        3*a+row,
            //                                                        3*b+col )
            //                                                        -= 4 *
            //                                                        d2g[row][col]
            //                                                        * P( i, l
            //                                                        ) * P( j,
            //                                                        k );
            //                                                    }
            //                                            }
            //                                        }
            //                                    }
            //                                break;
            //                            }
            //                        } //switch
            //
            //                    }
            //                }
            //            }
            //            e_hessian += trJ + trK;
            //
            //            g += e_hessian;
            //            g = arma::symmatl( g );

            return g;
        }
    }
}
