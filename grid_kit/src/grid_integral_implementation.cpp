/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "grid_kit/grid_integral_implementation.hpp"

#include "misc_kit/misc_utils.hpp"

#include <cstring>

#include <algorithm>
#include <numeric>

namespace niedoida {
    namespace grid {
        GridIntegralImplementation::GridIntegralImplementation(
            std::shared_ptr<const core::System> system,
            std::unique_ptr<core::AOValueEngine> ao_value_engine) :
            m_bs_info(system->basis_set),
            m_ao_value_engine(std::move(ao_value_engine))
        {
        }

        std::shared_ptr<GridIntegralImplementation::BlockAOData>
        GridIntegralImplementation::block_ao_data(
            const core::Grid::Block& block,
            double threshold,
            unsigned derivs_order,
            bool prescreening) const
        {

            // common set of significant contractions for the whole block is
            // found

            if (block.size > m_ao_values_buf.n_cols)
                m_ao_values_buf.set_size(m_bs_info.m_no_contractions,
                                         block.size);

            // FIXME: don't allocate derivative buffer if derivs_order == 0
            if (block.size > m_ao_derivs_buf.n_slices)
                m_ao_derivs_buf.resize(
                    3, m_bs_info.m_no_contractions, block.size);
            if (block.size > m_ao_derivs2_buf.n_slices)
                m_ao_derivs2_buf.resize(
                    6, m_bs_info.m_no_contractions, block.size);

            // values and derivs for all significant shells for each point
            for (std::size_t p = 0; p < block.size; ++p) {
                m_ao_value_engine->calc(
                    block.coords.col(p),
                    block.significant_shells[p],
                    m_ao_values_buf.colptr(p),
                    derivs_order > 0 ? m_ao_derivs_buf.slice(p).memptr()
                                     : nullptr,
                    derivs_order > 1 ? m_ao_derivs2_buf.slice(p).memptr()
                                     : nullptr);
            }

            BlockAOData* d = new BlockAOData;
            d->point_ao_data.reset(new PointAOData[block.size]);

            // bool vector of contractions significant for the current block
            std::vector<bool> block_contractions(m_bs_info.m_no_contractions,
                                                 false);
            std::vector<std::size_t> no_point_contractions(block.size, 0);
            std::size_t no_block_contractions = 0;

            for (std::size_t p = 0; p < block.size; ++p) {
                const std::size_t no_shells =
                    block.significant_shells[p].size();

                for (std::size_t s = 0; s < no_shells; ++s)
                    no_point_contractions[p] +=
                        m_bs_info.m_shell_sizes[block.significant_shells[p][s]];

                const double* NIEDOIDA_RESTRICT values =
                    m_ao_values_buf.colptr(p);
                const double* NIEDOIDA_RESTRICT derivs =
                    m_ao_derivs_buf.slice(p).memptr();
                const double* NIEDOIDA_RESTRICT derivs2 =
                    m_ao_derivs2_buf.slice(p).memptr();
                PointAOData& point_ao_data = d->point_ao_data[p];

                point_ao_data.max_value = 0;
                point_ao_data.max_value = std::abs(
                    *std::max_element(values,
                                      values + no_point_contractions[p],
                                      misc::abs_less<double>()));

                if (derivs_order == 0) {
                    point_ao_data.max_deriv = 0;
                } else {
                    point_ao_data.max_deriv = std::abs(
                        *std::max_element(derivs,
                                          derivs + 3 * no_point_contractions[p],
                                          misc::abs_less<double>()));
                }

                if (derivs_order < 2) {
                    point_ao_data.max_deriv2 = 0;
                } else {
                    point_ao_data.max_deriv2 = std::abs(*std::max_element(
                        derivs2,
                        derivs2 + 6 * no_point_contractions[p],
                        misc::abs_less<double>()));
                }

                // cutoff for dropping contractions with negligibly small value
                // and derivatives
                const double cutoff =
                    threshold / (block.weights[p] * point_ao_data.max_value);

                for (std::size_t s = 0; s < no_shells; ++s) {
                    const std::size_t si = block.significant_shells[p][s];
                    const std::size_t ss = m_bs_info.m_shell_sizes[si];
                    const std::size_t fc =
                        m_bs_info.m_first_contraction_in_shell[si];
                    const std::size_t lc = fc + ss;

                    for (std::size_t j = fc; j < lc; ++j) {
                        const double value = *values++;
                        double dx = 0, dy = 0, dz = 0;
                        double dxx = 0, dxy = 0, dxz = 0, dyy = 0, dyz = 0,
                               dzz = 0;
                        if (derivs_order > 0) {
                            dx = *derivs++;
                            dy = *derivs++;
                            dz = *derivs++;
                        }

                        if (derivs_order > 1) {
                            dxx = *derivs2++;
                            dxy = *derivs2++;
                            dxz = *derivs2++;
                            dyy = *derivs2++;
                            dyz = *derivs2++;
                            dzz = *derivs2++;
                        }
                        if (std::abs(value) > cutoff || std::abs(dx) > cutoff ||
                            std::abs(dy) > cutoff || std::abs(dz) > cutoff ||
                            std::abs(dxx) > cutoff || std::abs(dxy) > cutoff ||
                            std::abs(dxz) > cutoff || std::abs(dyy) > cutoff ||
                            std::abs(dyz) > cutoff || std::abs(dzz) > cutoff) {
                            block_contractions[j] = true;
                        }
                    }
                }
            }

            for (std::size_t i = 0; i < m_bs_info.m_no_contractions; ++i)
                if (block_contractions[i])
                    no_block_contractions++;

            d->no_contractions = block.size * no_block_contractions;

            // number of contractions for every point is the same and equal to
            // no_block_contractions
            for (std::size_t p = 0; p < block.size; ++p)
                d->point_ao_data[p].no_contractions = no_block_contractions;

            // allocate storage

            // only one copy of indices (they are the same in the whole block)
            d->indices.reset(new std::size_t[no_block_contractions]);

            // separate values (and derivatives, if needed) at each point
            d->values.reset(new double[d->no_contractions]);
            if (derivs_order > 0) {
                d->derivs_x.reset(new double[d->no_contractions]);
                d->derivs_y.reset(new double[d->no_contractions]);
                d->derivs_z.reset(new double[d->no_contractions]);
            }
            if (derivs_order > 1) {
                d->derivs_xx.reset(new double[d->no_contractions]);
                d->derivs_xy.reset(new double[d->no_contractions]);
                d->derivs_xz.reset(new double[d->no_contractions]);
                d->derivs_yy.reset(new double[d->no_contractions]);
                d->derivs_yz.reset(new double[d->no_contractions]);
                d->derivs_zz.reset(new double[d->no_contractions]);
            }

            // mapping global indices to local ones
            arma::uvec reverse_map(m_bs_info.m_no_contractions);

            for (std::size_t i = 0, j = 0; i < m_bs_info.m_no_contractions; ++i)
                if (block_contractions[i]) {
                    reverse_map(i) = j;
                    d->indices[j] = i;
                    j++;
                }

            double* NIEDOIDA_RESTRICT v = d->values.get();
            double* NIEDOIDA_RESTRICT d_x = d->derivs_x.get();
            double* NIEDOIDA_RESTRICT d_y = d->derivs_y.get();
            double* NIEDOIDA_RESTRICT d_z = d->derivs_z.get();
            double* NIEDOIDA_RESTRICT d_xx = d->derivs_xx.get();
            double* NIEDOIDA_RESTRICT d_xy = d->derivs_xy.get();
            double* NIEDOIDA_RESTRICT d_xz = d->derivs_xz.get();
            double* NIEDOIDA_RESTRICT d_yy = d->derivs_yy.get();
            double* NIEDOIDA_RESTRICT d_yz = d->derivs_yz.get();
            double* NIEDOIDA_RESTRICT d_zz = d->derivs_zz.get();

            std::memset(v, 0, d->no_contractions * sizeof(double));
            if (derivs_order > 0) {
                std::memset(d_x, 0, d->no_contractions * sizeof(double));
                std::memset(d_y, 0, d->no_contractions * sizeof(double));
                std::memset(d_z, 0, d->no_contractions * sizeof(double));
            }
            if (derivs_order > 1) {
                std::memset(d_xx, 0, d->no_contractions * sizeof(double));
                std::memset(d_xy, 0, d->no_contractions * sizeof(double));
                std::memset(d_xz, 0, d->no_contractions * sizeof(double));
                std::memset(d_yy, 0, d->no_contractions * sizeof(double));
                std::memset(d_yz, 0, d->no_contractions * sizeof(double));
                std::memset(d_zz, 0, d->no_contractions * sizeof(double));
            }

            for (std::size_t p = 0; p < block.size; ++p) {

                PointAOData& point_ao_data = d->point_ao_data[p];

                // there's only a single copy of indices
                point_ao_data.indices = d->indices.get();

                point_ao_data.values = v;
                point_ao_data.derivs_x = d_x;
                point_ao_data.derivs_y = d_y;
                point_ao_data.derivs_z = d_z;
                point_ao_data.derivs_xx = d_xx;
                point_ao_data.derivs_xy = d_xy;
                point_ao_data.derivs_xz = d_xz;
                point_ao_data.derivs_yy = d_yy;
                point_ao_data.derivs_yz = d_yz;
                point_ao_data.derivs_zz = d_zz;

                const double* NIEDOIDA_RESTRICT values =
                    m_ao_values_buf.colptr(p);
                const double* NIEDOIDA_RESTRICT derivs =
                    m_ao_derivs_buf.slice(p).memptr();
                const double* NIEDOIDA_RESTRICT derivs2 =
                    m_ao_derivs2_buf.slice(p).memptr();

                const std::size_t no_shells =
                    block.significant_shells[p].size();

                for (std::size_t s = 0; s < no_shells; ++s) {
                    const std::size_t si = block.significant_shells[p][s];
                    const std::size_t ss = m_bs_info.m_shell_sizes[si];
                    const std::size_t fc =
                        m_bs_info.m_first_contraction_in_shell[si];
                    const std::size_t lc = fc + ss;

                    for (std::size_t j = fc; j < lc; ++j) {
                        const double value = *values++;
                        double dx, dy, dz;
                        double dxx, dxy, dxz, dyy, dyz, dzz;
                        if (derivs_order > 0) {
                            dx = *derivs++;
                            dy = *derivs++;
                            dz = *derivs++;
                        }

                        if (derivs_order > 1) {
                            dxx = *derivs2++;
                            dxy = *derivs2++;
                            dxz = *derivs2++;
                            dyy = *derivs2++;
                            dyz = *derivs2++;
                            dzz = *derivs2++;
                        }

                        if (block_contractions[j]) {
                            std::size_t i = reverse_map(j);
                            v[i] = value;

                            if (derivs_order > 0) {
                                d_x[i] = dx;
                                d_y[i] = dy;
                                d_z[i] = dz;
                            }
                            if (derivs_order > 1) {
                                d_xx[i] = dxx;
                                d_xy[i] = dxy;
                                d_xz[i] = dxz;
                                d_yy[i] = dyy;
                                d_yz[i] = dyz;
                                d_zz[i] = dzz;
                            }
                        }
                    }
                }
                v += no_block_contractions;
                d_x += no_block_contractions;
                d_y += no_block_contractions;
                d_z += no_block_contractions;
                d_xx += no_block_contractions;
                d_xy += no_block_contractions;
                d_xz += no_block_contractions;
                d_yy += no_block_contractions;
                d_yz += no_block_contractions;
                d_zz += no_block_contractions;
            }

            return std::shared_ptr<BlockAOData>(d);
        }

        double density(const arma::mat& P,
                       std::size_t no_significant_contractions,
                       double const* NIEDOIDA_RESTRICT overlap,
                       std::size_t const* NIEDOIDA_RESTRICT contractions)
        {
            // contracting overlap matrix with density matrix to density
            // contractions vector maps indices on density matrix structure
            double rho_alpha = 0;

            for (std::size_t i = 0; i < no_significant_contractions; ++i) {
                const std::size_t c1 = contractions[i];
                const double* NIEDOIDA_RESTRICT P_a = &P(c1, 0);
                for (std::size_t j = 0; j < i; ++j) {
                    const double value = *overlap++;
                    const std::size_t c2 = contractions[j];
                    rho_alpha += 2 * value * P_a[c2];
                }
                const double value = *overlap++;
                rho_alpha += value * P_a[c1];
            }

            return rho_alpha;
        }

        std::pair<double, double>
        density(const arma::mat P[2],
                std::size_t no_significant_contractions,
                double const* NIEDOIDA_RESTRICT overlap,
                std::size_t const* NIEDOIDA_RESTRICT contractions)
        {
            // contracting overlap matrix with density matrix to density
            // contractions vector maps indices on density matrix structure
            double rho_alpha = 0, rho_beta = 0;

            for (std::size_t i = 0; i < no_significant_contractions; ++i) {
                const std::size_t c1 = contractions[i];
                const double* NIEDOIDA_RESTRICT P_a =
                    &P[core::SPIN_ALPHA](c1, 0);
                const double* NIEDOIDA_RESTRICT P_b =
                    &P[core::SPIN_BETA](c1, 0);
                for (std::size_t j = 0; j < i; ++j) {
                    const double value = *overlap++;
                    const std::size_t c2 = contractions[j];
                    rho_alpha += 2 * value * P_a[c2];
                    rho_beta += 2 * value * P_b[c2];
                }
                const double value = *overlap++;
                rho_alpha += value * P_a[c1];
                rho_beta += value * P_b[c1];
            }

            return std::make_pair(rho_alpha, rho_beta);
        }
    }
}
