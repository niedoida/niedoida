/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/xc_integral_engine.hpp"

#include "core_kit/spin.hpp"

#include "io_kit/logger.hpp"

#include "io_kit/log.hpp"
#include "misc_kit/dispatcher.hpp"
#include "misc_kit/threadpool.hpp"

#include <algorithm>
#include <cstring>

namespace {
    const double threshold = 1e-10;
}

namespace niedoida {
    namespace gto {

        void XCIntegralEngine::Integrator::reset_ks_matrix_core_gradient(
            std::size_t no_atoms, std::size_t no_orbitals)
        {
            _result.ks_matrix_core_gradient = std::vector<arma::cube>(
                no_atoms,
                arma::cube(no_orbitals, no_orbitals, 3, arma::fill::zeros));
        }

        void XCIntegralEngine::Integrator::matrix_core_gradient(
            const std::vector<unsigned>& atoms)
        {
            for (;;) {
                std::size_t b;
                {
                    std::lock_guard<std::mutex> lock(_queue.mutex);
                    if (_queue.blocks.empty()) {
                        return;
                    }
                    b = _queue.blocks.front();
                    _queue.blocks.pop();
                }

                if (_polarized)
                    ks_matrix_core_gradient_update_block_polarized(atoms, b);
                else if (_lda_functional)
                    ks_matrix_core_gradient_update_block_unpolarized(atoms, b);
                else {
                    ks_matrix_core_gradient_update_block_unpolarized_gga(atoms,
                                                                         b);
                }
            }
        }

        void XCIntegralEngine::Integrator::
            ks_matrix_core_gradient_update_block_unpolarized_gga(
                const std::vector<unsigned>& atoms, std::size_t b)
        {
            // initialize block-specific data
            std::shared_ptr<const core::Grid::Block> block = _grid.get_block(b);

            arma::vec weights = block->weights;

            // retrieve AO data
            std::shared_ptr<const grid::GridIntegralImplementation::BlockAOData>
                data = get_block_data(b, block, 2);

            std::size_t no_block_contractions =
                data->no_contractions / block->size;

            if (!no_block_contractions)
                return;

            for (std::size_t c = 0; c < no_block_contractions; ++c)
                _block_data.b2g_map[c] = data->indices[c];

            _block_data.P[core::SPIN_ALPHA].set_size(no_block_contractions,
                                                     no_block_contractions);

            for (std::size_t i = 0; i < no_block_contractions; ++i)
                for (std::size_t j = 0; j <= i; ++j)
                    _block_data.P[core::SPIN_ALPHA](i, j) =
                        _P[core::SPIN_ALPHA](_block_data.b2g_map[i],
                                             _block_data.b2g_map[j]);

            _block_data.P[core::SPIN_ALPHA] =
                arma::symmatl(_block_data.P[core::SPIN_ALPHA]);

            _block_data.xc_ints[core::SPIN_ALPHA].zeros(no_block_contractions,
                                                        no_block_contractions);

            // values
            arma::mat C(block->size, no_block_contractions);
            for (std::size_t p = 0; p < block->size; ++p)
                for (std::size_t i = 0; i < no_block_contractions; ++i)
                    C(p, i) = data->values[p * no_block_contractions + i];

            // derivs
            arma::mat DX(block->size, no_block_contractions);
            arma::mat DY(block->size, no_block_contractions);
            arma::mat DZ(block->size, no_block_contractions);

            arma::mat DXX;
            arma::mat DXY;
            arma::mat DXZ;
            arma::mat DYY;
            arma::mat DYZ;
            arma::mat DZZ;

            for (std::size_t p = 0; p < block->size; ++p)
                for (std::size_t i = 0; i < no_block_contractions; ++i) {
                    DX(p, i) = data->derivs_x[p * no_block_contractions + i];
                    DY(p, i) = data->derivs_y[p * no_block_contractions + i];
                    DZ(p, i) = data->derivs_z[p * no_block_contractions + i];
                }

            DXX.resize(block->size, no_block_contractions);
            DXY.resize(block->size, no_block_contractions);
            DXZ.resize(block->size, no_block_contractions);
            DYY.resize(block->size, no_block_contractions);
            DYZ.resize(block->size, no_block_contractions);
            DZZ.resize(block->size, no_block_contractions);

            for (std::size_t p = 0; p < block->size; ++p)
                for (std::size_t i = 0; i < no_block_contractions; ++i) {
                    DXX(p, i) = data->derivs_xx[p * no_block_contractions + i];
                    DXY(p, i) = data->derivs_xy[p * no_block_contractions + i];
                    DXZ(p, i) = data->derivs_xz[p * no_block_contractions + i];
                    DYY(p, i) = data->derivs_yy[p * no_block_contractions + i];
                    DYZ(p, i) = data->derivs_yz[p * no_block_contractions + i];
                    DZZ(p, i) = data->derivs_zz[p * no_block_contractions + i];
                }

            const arma::mat G = C * _block_data.P[core::SPIN_ALPHA];

            // density
            arma::vec d(block->size);

            for (std::size_t p = 0; p < block->size; ++p)
                d(p) = dot(G.row(p), C.row(p));

            // density gradient
            arma::vec dx(block->size);
            arma::vec dy(block->size);
            arma::vec dz(block->size);

            for (std::size_t p = 0; p < block->size; ++p) {
                dx(p) = 2 * dot(G.row(p), DX.row(p));
                dy(p) = 2 * dot(G.row(p), DY.row(p));
                dz(p) = 2 * dot(G.row(p), DZ.row(p));
            }

            arma::mat diagonalWeights = arma::diagmat(block->weights);
            arma::mat AOproduct = C.t() * diagonalWeights * C;

            const std::size_t no_atoms = atoms.size();
            const std::size_t no_orbitals = _P->n_rows;

            std::vector<arma::cube> d_matrix(no_atoms,
                                             arma::cube(no_block_contractions,
                                                        no_block_contractions,
                                                        3,
                                                        arma::fill::zeros));

            for (std::size_t p = 0; p < block->size; ++p) {
                arma::mat rho_deriv(3, no_atoms, arma::fill::zeros);
                arma::cube grad_rho_deriv(3, no_atoms, 3, arma::fill::zeros);
                double rho = std::max(d(p), 0.0);
                double gamma = dx(p) * dx(p) + dy(p) * dy(p) + dz(p) * dz(p);
                const xc::XCFunctionalData functional =
                    _gga_functional(rho, rho, gamma, gamma, gamma, 2);

                for (std::size_t a = 0; a < no_atoms; ++a) {
                    const std::size_t atom = atoms[a];
                    std::size_t fc =
                        m_bs_info.m_first_contraction_in_atom[atom];
                    std::size_t lc =
                        fc + m_bs_info.m_no_contractions_in_atom[atom];

                    for (std::size_t k = 0; k < no_block_contractions; ++k) {
                        std::size_t gk = _block_data.b2g_map[k];

                        const double Cpk = C(p, k);

                        for (std::size_t l = 0; l < no_block_contractions;
                             ++l) {
                            std::size_t gl = _block_data.b2g_map[l];

                            const double Cpl = C(p, l);

                            const double Pkl =
                                _block_data.P[core::SPIN_ALPHA](k, l);

                            if (gk >= fc && gk < lc) {

                                rho_deriv(0, a) += Pkl * Cpl * DX(p, k);
                                rho_deriv(1, a) += Pkl * Cpl * DY(p, k);
                                rho_deriv(2, a) += Pkl * Cpl * DZ(p, k);

                                grad_rho_deriv(2, a, 0) -=
                                    Pkl *
                                    (Cpl * DXZ(p, k) + DX(p, l) * DZ(p, k));
                                grad_rho_deriv(2, a, 1) -=
                                    Pkl *
                                    (Cpl * DYZ(p, k) + DY(p, l) * DZ(p, k));
                                grad_rho_deriv(2, a, 2) -=
                                    Pkl *
                                    (Cpl * DZZ(p, k) + DZ(p, l) * DZ(p, k));
                                // lda d phi phi
                                d_matrix[a].slice(0)(l, k) +=
                                    functional.de_dra * Cpl * DX(p, k) *
                                    block->weights[p];
                                d_matrix[a].slice(1)(l, k) +=
                                    functional.de_dra * Cpl * DY(p, k) *
                                    block->weights[p];
                                d_matrix[a].slice(2)(l, k) +=
                                    functional.de_dra * Cpl * DZ(p, k) *
                                    block->weights[p];

                                d_matrix[a].slice(0)(k, l) +=
                                    functional.de_dra * Cpl * DX(p, k) *
                                    block->weights[p];
                                d_matrix[a].slice(1)(k, l) +=
                                    functional.de_dra * Cpl * DY(p, k) *
                                    block->weights[p];
                                d_matrix[a].slice(2)(k, l) +=
                                    functional.de_dra * Cpl * DZ(p, k) *
                                    block->weights[p];

                                // gga d grad phi phi
                                d_matrix[a].slice(0)(l, k) +=
                                    2 *
                                    (2 * functional.de_dgaa +
                                     functional.de_dgab) *
                                    (dx(p) * (DXX(p, k) * Cpl +
                                              DX(p, k) * DX(p, l)) +
                                     dy(p) * (DXY(p, k) * Cpl +
                                              DX(p, k) * DY(p, l)) +
                                     dz(p) * (DXZ(p, k) * Cpl +
                                              DX(p, k) * DZ(p, l))) *
                                    block->weights[p];
                                d_matrix[a].slice(1)(l, k) +=
                                    2 *
                                    (2 * functional.de_dgaa +
                                     functional.de_dgab) *
                                    (dx(p) * (DXY(p, k) * Cpl +
                                              DY(p, k) * DX(p, l)) +
                                     dy(p) * (DYY(p, k) * Cpl +
                                              DY(p, k) * DY(p, l)) +
                                     dz(p) * (DYZ(p, k) * Cpl +
                                              DY(p, k) * DZ(p, l))) *
                                    block->weights[p];
                                d_matrix[a].slice(2)(l, k) -=
                                    (2 * functional.de_dgaa +
                                     functional.de_dgab) *
                                    (dx(p) * (DXZ(p, k) * Cpl +
                                              DZ(p, k) * DX(p, l)) +
                                     dy(p) * (DYZ(p, k) * Cpl +
                                              DZ(p, k) * DY(p, l)) +
                                     dz(p) * (DZZ(p, k) * Cpl +
                                              DZ(p, k) * DZ(p, l))) *
                                    block->weights[p];
                                d_matrix[a].slice(2)(k, l) -=
                                    (2 * functional.de_dgaa +
                                     functional.de_dgab) *
                                    (dx(p) * (DXZ(p, k) * Cpl +
                                              DZ(p, k) * DX(p, l)) +
                                     dy(p) * (DYZ(p, k) * Cpl +
                                              DZ(p, k) * DY(p, l)) +
                                     dz(p) * (DZZ(p, k) * Cpl +
                                              DZ(p, k) * DZ(p, l))) *
                                    block->weights[p];
                            }

                            if (gl >= fc && gl < lc) {
                                rho_deriv(0, a) += Pkl * Cpk * DX(p, l);
                                rho_deriv(1, a) += Pkl * Cpk * DY(p, l);
                                rho_deriv(2, a) += Pkl * Cpk * DZ(p, l);

                                grad_rho_deriv(2, a, 0) -=
                                    Pkl *
                                    (Cpk * DXZ(p, l) + DZ(p, l) * DX(p, k));
                                grad_rho_deriv(2, a, 1) -=
                                    Pkl *
                                    (Cpk * DYZ(p, l) + DZ(p, l) * DY(p, k));
                                grad_rho_deriv(2, a, 2) -=
                                    Pkl *
                                    (Cpk * DZZ(p, l) + DZ(p, l) * DZ(p, k));
                            }
                        }
                    }

                    for (std::size_t k = 0; k < no_block_contractions; ++k) {

                        const double Cpk = C(p, k);

                        for (std::size_t l = 0; l < no_block_contractions;
                             ++l) {

                            const double Cpl = C(p, l);

                            // LDA d rho
                            d_matrix[a].slice(0)(k, l) +=
                                functional.d2e_drara * rho_deriv(0, a) * Cpk *
                                Cpl * block->weights[p];
                            d_matrix[a].slice(1)(k, l) +=
                                functional.d2e_drara * rho_deriv(1, a) * Cpk *
                                Cpl * block->weights[p];
                            d_matrix[a].slice(2)(k, l) +=
                                (functional.d2e_drara + functional.d2e_drarb) *
                                rho_deriv(2, a) * Cpk * Cpl * block->weights[p];
                            // gga d gamma rho deriv
                            d_matrix[a].slice(2)(k, l) -=
                                (2 * functional.d2e_dragaa +
                                 functional.d2e_dragab +
                                 2 * functional.d2e_drbgaa +
                                 functional.d2e_drbgab) *
                                rho_deriv(2, a) * block->weights[p] *
                                ((dx(p) * DX(p, k) + dy(p) * DY(p, k) +
                                  dz(p) * DZ(p, k)) *
                                     Cpl +
                                 (dx(p) * DX(p, l) + dy(p) * DY(p, l) +
                                  dz(p) * DZ(p, l)) *
                                     Cpk);

                            d_matrix[a].slice(2)(k, l) -=
                                (2 * functional.de_dgaa + functional.de_dgab) *
                                block->weights[p] *
                                (grad_rho_deriv(2, a, 0) *
                                     (DX(p, k) * Cpl + Cpk * DX(p, l)) +
                                 grad_rho_deriv(2, a, 1) *
                                     (DY(p, k) * Cpl + Cpk * DY(p, l)) +
                                 grad_rho_deriv(2, a, 2) *
                                     (DZ(p, k) * Cpl + Cpk * DZ(p, l)));
                        }
                    }

                    if (true)
                        for (std::size_t k = 0; k < no_block_contractions;
                             ++k) {

                            const double Cpk = C(p, k);

                            for (std::size_t l = 0; l < no_block_contractions;
                                 ++l) {

                                const double Cpl = C(p, l);

                                d_matrix[a].slice(2)(k, l) -=
                                    (2 * functional.de_dgaa +
                                     functional.de_dgab) *
                                    block->weights[p] *
                                    (grad_rho_deriv(2, a, 0) *
                                         (DX(p, k) * Cpl + Cpk * DX(p, l)) +
                                     grad_rho_deriv(2, a, 1) *
                                         (DY(p, k) * Cpl + Cpk * DY(p, l)) +
                                     grad_rho_deriv(2, a, 2) *
                                         (DZ(p, k) * Cpl + Cpk * DZ(p, l)));
                            }
                        }
                }

                arma::mat gamma_deriv(3, no_atoms, arma::fill::zeros);

                for (std::size_t a = 0; a < no_atoms; ++a) {
                    const std::size_t atom = atoms[a];
                    std::size_t fc =
                        m_bs_info.m_first_contraction_in_atom[atom];
                    std::size_t lc =
                        fc + m_bs_info.m_no_contractions_in_atom[atom];

                    for (std::size_t k = 0; k < no_block_contractions; ++k) {
                        std::size_t gk = _block_data.b2g_map[k];

                        const double Cpk = C(p, k);

                        for (std::size_t l = 0; l < no_block_contractions;
                             ++l) {
                            std::size_t gl = _block_data.b2g_map[l];

                            const double Cpl = C(p, l);

                            const double Pkl =
                                _block_data.P[core::SPIN_ALPHA](k, l);

                            if (gk >= fc && gk < lc) {
                                gamma_deriv(0, a) -= 2 * dx(p) *
                                                     (Pkl * DXX(p, k) * Cpl +
                                                      DX(p, k) * DX(p, l));
                                gamma_deriv(0, a) -= 2 * dy(p) *
                                                     (Pkl * DXY(p, k) * Cpl +
                                                      DX(p, k) * DY(p, l));
                                gamma_deriv(0, a) -= 2 * dz(p) *
                                                     (Pkl * DXZ(p, k) * Cpl +
                                                      DX(p, k) * DZ(p, l));

                                gamma_deriv(1, a) -= 2 * dx(p) *
                                                     (Pkl * DXY(p, k) * Cpl +
                                                      DY(p, k) * DX(p, l));
                                gamma_deriv(1, a) -= 2 * dy(p) *
                                                     (Pkl * DYY(p, k) * Cpl +
                                                      DY(p, k) * DY(p, l));
                                gamma_deriv(1, a) -= 2 * dz(p) *
                                                     (Pkl * DYZ(p, k) * Cpl +
                                                      DY(p, k) * DZ(p, l));

                                gamma_deriv(2, a) -= 2 * dx(p) *
                                                     (Pkl * DXZ(p, k) * Cpl +
                                                      DZ(p, k) * DX(p, l));
                                gamma_deriv(2, a) -= 2 * dy(p) *
                                                     (Pkl * DYZ(p, k) * Cpl +
                                                      DZ(p, k) * DY(p, l));
                                gamma_deriv(2, a) -= 2 * dz(p) *
                                                     (Pkl * DZZ(p, k) * Cpl +
                                                      DZ(p, k) * DZ(p, l));
                            }

                            if (gl >= fc && gl < lc) {
                                gamma_deriv(0, a) -= 2 * dx(p) *
                                                     (Pkl * DXX(p, l) * Cpk +
                                                      DX(p, l) * DX(p, k));
                                gamma_deriv(0, a) -= 2 * dy(p) *
                                                     (Pkl * DXY(p, l) * Cpk +
                                                      DX(p, l) * DY(p, k));
                                gamma_deriv(0, a) -= 2 * dz(p) *
                                                     (Pkl * DXZ(p, l) * Cpk +
                                                      DX(p, l) * DZ(p, k));

                                gamma_deriv(1, a) -= 2 * dx(p) *
                                                     (Pkl * DXY(p, l) * Cpk +
                                                      DY(p, l) * DX(p, k));
                                gamma_deriv(1, a) -= 2 * dy(p) *
                                                     (Pkl * DYY(p, l) * Cpk +
                                                      DY(p, l) * DY(p, k));
                                gamma_deriv(1, a) -= 2 * dz(p) *
                                                     (Pkl * DYZ(p, l) * Cpk +
                                                      DY(p, l) * DZ(p, k));

                                gamma_deriv(2, a) -= 2 * dx(p) *
                                                     (Pkl * DXZ(p, l) * Cpk +
                                                      DZ(p, l) * DX(p, k));
                                gamma_deriv(2, a) -= 2 * dy(p) *
                                                     (Pkl * DYZ(p, l) * Cpk +
                                                      DZ(p, l) * DY(p, k));
                                gamma_deriv(2, a) -= 2 * dz(p) *
                                                     (Pkl * DZZ(p, l) * Cpk +
                                                      DZ(p, l) * DZ(p, k));
                            }
                        }
                    }

                    for (std::size_t k = 0; k < no_block_contractions; ++k) {
                        const double Cpk = C(p, k);
                        for (std::size_t l = 0; l < no_block_contractions;
                             ++l) {
                            const double Cpl = C(p, l);

                            // gga d gamma gamma deriv
                            d_matrix[a].slice(0)(k, l) +=
                                (2 * functional.d2e_dgaagaa +
                                 2 * functional.d2e_dgaagab +
                                 functional.d2e_dgabgab) *
                                gamma_deriv(0, a) * block->weights[p] *
                                (dx(p) * DX(p, k) + dy(p) * DY(p, k) +
                                 dz(p) * DZ(p, k)) *
                                Cpl;

                            d_matrix[a].slice(1)(k, l) +=
                                (2 * functional.d2e_dgaagaa +
                                 2 * functional.d2e_dgaagab +
                                 functional.d2e_dgabgab) *
                                gamma_deriv(1, a) * block->weights[p] *
                                (dx(p) * DX(p, k) + dy(p) * DY(p, k) +
                                 dz(p) * DZ(p, k)) *
                                Cpl;

                            d_matrix[a].slice(2)(k, l) +=
                                (2 * functional.d2e_dgaagaa +
                                 functional.d2e_dgaagab +
                                 functional.d2e_dgabgab +
                                 2 * functional.d2e_dgaagbb +
                                 functional.d2e_dgbbgab) *
                                gamma_deriv(2, a) * block->weights[p] *
                                ((dx(p) * DX(p, k) + dy(p) * DY(p, k) +
                                  dz(p) * DZ(p, k)) *
                                     Cpl +
                                 (dx(p) * DX(p, l) + dy(p) * DY(p, l) +
                                  dz(p) * DZ(p, l)) *
                                     Cpk);
                            // gga d rho
                            d_matrix[a].slice(2)(k, l) +=
                                (functional.d2e_dragaa + functional.d2e_dragab +
                                 functional.d2e_dragbb) *
                                gamma_deriv(2, a) * block->weights[p] * Cpl *
                                Cpk;
                        }
                    }
                }
            }

            std::vector<arma::cube> d_matrix_real_size(
                no_atoms,
                arma::cube(no_orbitals, no_orbitals, 3, arma::fill::zeros));

            for (std::size_t a = 0; a < no_atoms; ++a) {
                for (std::size_t k = 0; k < no_block_contractions; ++k) {
                    std::size_t gk = _block_data.b2g_map[k];

                    for (std::size_t l = 0; l < no_block_contractions; ++l) {
                        std::size_t gl = _block_data.b2g_map[l];

                        d_matrix_real_size[a].slice(0)(gk, gl) =
                            d_matrix[a].slice(0)(k, l);
                        d_matrix_real_size[a].slice(1)(gk, gl) =
                            d_matrix[a].slice(1)(k, l);
                        d_matrix_real_size[a].slice(2)(gk, gl) =
                            d_matrix[a].slice(2)(k, l);
                    }
                }
            }

            // propagate the block integrals to global matrices
            std::lock_guard<std::mutex> lock(_result.mutex);

            for (std::size_t atomInd = 0; atomInd < no_atoms; atomInd++)
                _result.ks_matrix_core_gradient[atomInd] +=
                    d_matrix_real_size[atomInd];
        }

        void XCIntegralEngine::Integrator::
            ks_matrix_core_gradient_update_block_unpolarized(
                const std::vector<unsigned>& atoms, std::size_t b)
        {
            // initialize block-specific data
            std::shared_ptr<const core::Grid::Block> block = _grid.get_block(b);

            // retrieve AO data
            std::shared_ptr<const grid::GridIntegralImplementation::BlockAOData>
                data = get_block_data(b, block, 1);

            std::size_t no_block_contractions =
                data->no_contractions / block->size;

            if (!no_block_contractions)
                return;

            for (std::size_t c = 0; c < no_block_contractions; ++c)
                _block_data.b2g_map[c] = data->indices[c];

            _block_data.P[core::SPIN_ALPHA].set_size(no_block_contractions,
                                                     no_block_contractions);

            for (std::size_t i = 0; i < no_block_contractions; ++i)
                for (std::size_t j = 0; j <= i; ++j)
                    _block_data.P[core::SPIN_ALPHA](i, j) =
                        _P[core::SPIN_ALPHA](_block_data.b2g_map[i],
                                             _block_data.b2g_map[j]);

            _block_data.P[core::SPIN_ALPHA] =
                arma::symmatl(_block_data.P[core::SPIN_ALPHA]);

            _block_data.xc_ints[core::SPIN_ALPHA].zeros(no_block_contractions,
                                                        no_block_contractions);

            // values
            arma::mat C(block->size, no_block_contractions);
            for (std::size_t p = 0; p < block->size; ++p)
                for (std::size_t i = 0; i < no_block_contractions; ++i)
                    C(p, i) = data->values[p * no_block_contractions + i];

            // derivs
            arma::mat DX(block->size, no_block_contractions);
            arma::mat DY(block->size, no_block_contractions);
            arma::mat DZ(block->size, no_block_contractions);

            for (std::size_t p = 0; p < block->size; ++p)
                for (std::size_t i = 0; i < no_block_contractions; ++i) {
                    DX(p, i) = data->derivs_x[p * no_block_contractions + i];
                    DY(p, i) = data->derivs_y[p * no_block_contractions + i];
                    DZ(p, i) = data->derivs_z[p * no_block_contractions + i];
                }

            const arma::mat G = C * _block_data.P[core::SPIN_ALPHA];

            // density
            arma::vec d(block->size);

            for (std::size_t p = 0; p < block->size; ++p)
                d(p) = dot(G.row(p), C.row(p));

            arma::mat diagonalWeights = arma::diagmat(block->weights);
            arma::mat AOproduct = C.t() * diagonalWeights * C;

            const std::size_t no_atoms = atoms.size();
            const std::size_t no_orbitals = _P->n_rows;

            std::vector<arma::cube> d_matrix(no_atoms,
                                             arma::cube(no_block_contractions,
                                                        no_block_contractions,
                                                        3,
                                                        arma::fill::zeros));

            for (std::size_t p = 0; p < block->size; ++p) {

                const double rho = std::max(d(p), 0.0);

                const xc::XCFunctionalData functional =
                    _lda_functional(rho, rho, 2);

                arma::mat rho_deriv(3, no_atoms, arma::fill::zeros);

                for (std::size_t a = 0; a < no_atoms; ++a) {
                    const std::size_t atom = atoms[a];
                    std::size_t fc =
                        m_bs_info.m_first_contraction_in_atom[atom];
                    std::size_t lc =
                        fc + m_bs_info.m_no_contractions_in_atom[atom];

                    for (std::size_t k = 0; k < no_block_contractions; ++k) {
                        std::size_t gk = _block_data.b2g_map[k];

                        const double Cpk = C(p, k);

                        for (std::size_t l = 0; l < no_block_contractions;
                             ++l) {
                            std::size_t gl = _block_data.b2g_map[l];

                            const double Cpl = C(p, l);

                            const double Pkl =
                                _block_data.P[core::SPIN_ALPHA](k, l);

                            if (gk >= fc && gk < lc) {
                                rho_deriv(0, a) += Pkl * Cpl * DX(p, k);
                                rho_deriv(1, a) += Pkl * Cpl * DY(p, k);
                                rho_deriv(2, a) += Pkl * Cpl * DZ(p, k);

                                d_matrix[a].slice(0)(l, k) +=
                                    functional.de_dra * Cpl * DX(p, k) *
                                    block->weights[p];
                                d_matrix[a].slice(1)(l, k) +=
                                    functional.de_dra * Cpl * DY(p, k) *
                                    block->weights[p];
                                d_matrix[a].slice(2)(l, k) +=
                                    functional.de_dra * Cpl * DZ(p, k) *
                                    block->weights[p];

                                d_matrix[a].slice(0)(k, l) +=
                                    functional.de_dra * Cpl * DX(p, k) *
                                    block->weights[p];
                                d_matrix[a].slice(1)(k, l) +=
                                    functional.de_dra * Cpl * DY(p, k) *
                                    block->weights[p];
                                d_matrix[a].slice(2)(k, l) +=
                                    functional.de_dra * Cpl * DZ(p, k) *
                                    block->weights[p];
                            }

                            if (gl >= fc && gl < lc) {
                                rho_deriv(0, a) += Pkl * Cpk * DX(p, l);
                                rho_deriv(1, a) += Pkl * Cpk * DY(p, l);
                                rho_deriv(2, a) += Pkl * Cpk * DZ(p, l);
                            }
                        }
                    }
                    // rho_deriv.print("Pochodna gestosci");
                    for (std::size_t k = 0; k < no_block_contractions; ++k) {

                        const double Cpk = C(p, k);

                        for (std::size_t l = 0; l < no_block_contractions;
                             ++l) {

                            const double Cpl = C(p, l);

                            d_matrix[a].slice(0)(k, l) +=
                                (functional.d2e_drara + functional.d2e_drarb) *
                                rho_deriv(0, a) * Cpk * Cpl * block->weights[p];
                            d_matrix[a].slice(1)(k, l) +=
                                (functional.d2e_drara + functional.d2e_drarb) *
                                rho_deriv(1, a) * Cpk * Cpl * block->weights[p];
                            d_matrix[a].slice(2)(k, l) +=
                                (functional.d2e_drara + functional.d2e_drarb) *
                                rho_deriv(2, a) * Cpk * Cpl * block->weights[p];
                        }
                    }
                }
            }

            std::vector<arma::cube> d_matrix_real_size(
                no_atoms,
                arma::cube(no_orbitals, no_orbitals, 3, arma::fill::zeros));

            for (std::size_t a = 0; a < no_atoms; ++a) {
                for (std::size_t k = 0; k < no_block_contractions; ++k) {
                    std::size_t gk = _block_data.b2g_map[k];

                    for (std::size_t l = 0; l < no_block_contractions; ++l) {
                        std::size_t gl = _block_data.b2g_map[l];

                        d_matrix_real_size[a].slice(0)(gk, gl) =
                            d_matrix[a].slice(0)(k, l);
                        d_matrix_real_size[a].slice(1)(gk, gl) =
                            d_matrix[a].slice(1)(k, l);
                        d_matrix_real_size[a].slice(2)(gk, gl) =
                            d_matrix[a].slice(2)(k, l);
                    }
                }
            }

            // propagate the block integrals to global matrices
            std::lock_guard<std::mutex> lock(_result.mutex);

            for (std::size_t atomInd = 0; atomInd < no_atoms; atomInd++)
                _result.ks_matrix_core_gradient[atomInd] +=
                    d_matrix_real_size[atomInd];
        }
        void XCIntegralEngine::Integrator::
            ks_matrix_core_gradient_update_block_polarized(
                const std::vector<unsigned>& atoms, std::size_t b)
        {
        }

        void XCIntegralEngine::calc_matrix_core_gradient(
            const arma::mat& P, const std::vector<unsigned>& atoms)
        {
            m_P[core::SPIN_ALPHA] = P;
            std::size_t no_orbitals = m_P->n_rows;
            m_result.ks_matrix_core_gradient = std::vector<arma::cube>(
                atoms.size(),
                arma::cube(no_orbitals, no_orbitals, 3, arma::fill::zeros));
            m_result.density_integral = 0;
            m_result.energy = 0;
            {
                boost::mpi::communicator comm;
                std::unique_ptr<misc::Dispatcher> d(
                    misc::dispatcher(comm, m_grid->no_blocks()));

                while (const misc::Dispatcher::TaskInfo task_info =
                           d->get_task()) {
                    {
                        std::lock_guard<std::mutex> queue_lock(m_queue.mutex);

                        for (std::size_t b = task_info->first;
                             b < task_info->second;
                             ++b)
                            m_queue.blocks.push(b);
                    }

                    for (Integrator& w : m_integrators) {
                        w.reset_ks_matrix_core_gradient(atoms.size(),
                                                        no_orbitals);
                        misc::ThreadPool::Task t(std::bind(
                            &Integrator::matrix_core_gradient, &w, atoms));
                        misc::GlobalThreadPool::instance().schedule(t);
                    }

                    misc::GlobalThreadPool::instance().wait();
                }
            }
        }
    }
}
