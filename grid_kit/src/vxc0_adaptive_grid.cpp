/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "grid_kit/vxc0_adaptive_grid.hpp"

#include "core_kit/promolecule.hpp"

#include <limits>

namespace {
    std::size_t
    adjust_angular_size(std::size_t requested_size,
                        const std::vector<std::size_t>& allowed_sizes)
    {
        for (std::size_t i = 0; i < allowed_sizes.size(); ++i)
            if (allowed_sizes[i] >= requested_size)
                return i;

        return allowed_sizes.size() - 1;
    }
}

namespace niedoida {
    namespace grid {
        Vxc0AdaptiveGrid::Vxc0AdaptiveGrid(
            std::shared_ptr<const core::System> system,
            xc::LocalXCFunctional lda,
            std::unique_ptr<PartitionFunction> pf,
            std::unique_ptr<RadialGrid> rg,
            std::unique_ptr<SphericalGrid> sg,
            std::shared_ptr<const core::AOValueEngineFactory>
                ao_value_engine_factory,
            double accuracy,
            std::size_t max_no_radial_grid_points,
            std::size_t max_spherical_grid_size) :
            ProductGrid(system,
                        std::move(pf),
                        std::move(rg),
                        std::move(sg),
                        ao_value_engine_factory),
            GridIntegralImplementation(system,
                                       ao_value_engine_factory->make(system)),
            _lda(lda),
            _gga(0),
            _accuracy(accuracy),
            _max_spherical_grid_size(max_spherical_grid_size),
            _prev_atom(0),
            _prev_grid_size(0)
        {
            const std::size_t n = (m_bs_info.m_no_contractions *
                                   (m_bs_info.m_no_contractions + 1)) /
                                  2;

            _overlap_buf[0].reset(new double[n]);

            _density_matrix[core::SPIN_ALPHA] =
                system->promolecule->average_density_matrix(core::SPIN_ALPHA);

            _density_matrix[core::SPIN_BETA] =
                system->promolecule->average_density_matrix(core::SPIN_BETA);
        }

        Vxc0AdaptiveGrid::Vxc0AdaptiveGrid(
            std::shared_ptr<const core::System> system,
            xc::GGAXCFunctional gga,
            std::unique_ptr<PartitionFunction> pf,
            std::unique_ptr<RadialGrid> rg,
            std::unique_ptr<SphericalGrid> sg,
            std::shared_ptr<const core::AOValueEngineFactory>
                ao_value_engine_factory,
            double accuracy,
            std::size_t max_no_radial_grid_points,
            std::size_t max_spherical_grid_size) :
            ProductGrid(system,
                        std::move(pf),
                        std::move(rg),
                        std::move(sg),
                        ao_value_engine_factory),
            GridIntegralImplementation(system,
                                       ao_value_engine_factory->make(system)),
            _lda(0),
            _gga(gga),
            _accuracy(accuracy),
            _max_spherical_grid_size(max_spherical_grid_size),
            _prev_atom(0),
            _prev_grid_size(0)
        {
            const std::size_t n = (m_bs_info.m_no_contractions *
                                   (m_bs_info.m_no_contractions + 1)) /
                                  2;

            for (int i = 0; i < 4; ++i)
                _overlap_buf[i].reset(new double[n]);

            _density_matrix[core::SPIN_ALPHA] =
                system->promolecule->average_density_matrix(core::SPIN_ALPHA);

            _density_matrix[core::SPIN_BETA] =
                system->promolecule->average_density_matrix(core::SPIN_BETA);
        }

        std::size_t
        Vxc0AdaptiveGrid::spherical_grid_size(std::size_t a,
                                              double r,
                                              const PartitionFunction& pf,
                                              const SphericalGrid& sg) const
        {
            //    if (r <= std::numeric_limits<double>::epsilon())
            //        return 1;

            if (r <= std::numeric_limits<double>::epsilon())
                std::cout << "argh" << std::endl;

            const double r2 = r * r;

            double prev_vxc = 0;
            double next_vxc = 0;

            //     int start = 2;

            //     if (a != _prev_atom)
            //         _prev_atom = a;
            //     else
            //         start =
            //             std::max(2,
            //             static_cast<int>(std::sqrt(_prev_grid_size / 8.0)));

            const std::size_t n = adjust_angular_size(_max_spherical_grid_size,
                                                      sg.allowed_sizes());

            for (std::size_t i = 0; i < n; ++i) {
                std::shared_ptr<Grid::Block> block =
                    sg(a, r, i, _accuracy / 1e6);
                const std::size_t bs = block->size;

                pf(a, bs, block->coords.memptr(), block->weights.memptr());

                block->weights *= r2;

                next_vxc = _vxc(*block);
                const double delta = std::abs(next_vxc - prev_vxc);
                prev_vxc = next_vxc;
                if (delta < _accuracy) {
                    return i > 0 ? i - 1 : i;
                    //             const int j = std::max(i, 3);
                    //             _prev_grid_size = (j - 1) * (j - 1) * 2;
                    //             return _prev_grid_size;
                }
            }

            //     _prev_grid_size = _max_spherical_grid_size;

            return n;
        }

        double Vxc0AdaptiveGrid::_vxc(const Grid::Block& block) const
        {
            double result = 0;

            std::shared_ptr<const BlockAOData> data =
                block_ao_data(block, _accuracy / 1e6, _gga != 0 ? 1 : 0);

            // in each point of the block...
            for (std::size_t p = 0; p < block.size; ++p) {

                std::size_t n = data->point_ao_data[p].no_contractions;
                const double* NIEDOIDA_RESTRICT const v =
                    data->point_ao_data[p].values;
                double* NIEDOIDA_RESTRICT s = _overlap_buf[0].get();

                calc_overlap(n, v, s);

                const std::size_t* NIEDOIDA_RESTRICT indices =
                    data->point_ao_data[p].indices;

                std::pair<double, double> rho =
                    density(_density_matrix, n, s, indices);

                if (rho.first < 0)
                    rho.first = 0;

                if (rho.second < 0)
                    rho.second = 0;

                xc::XCFunctionalData functional;
                if (_lda) {
                    functional = _lda(rho.first, rho.second, 1);
                } else {
                    const double* NIEDOIDA_RESTRICT const d_x =
                        data->point_ao_data[p].derivs_x;
                    const double* NIEDOIDA_RESTRICT const d_y =
                        data->point_ao_data[p].derivs_y;
                    const double* NIEDOIDA_RESTRICT const d_z =
                        data->point_ao_data[p].derivs_z;

                    double* NIEDOIDA_RESTRICT const ds_x =
                        _overlap_buf[1].get();
                    double* NIEDOIDA_RESTRICT const ds_y =
                        _overlap_buf[2].get();
                    double* NIEDOIDA_RESTRICT const ds_z =
                        _overlap_buf[3].get();

                    calc_overlap_derivs(n, v, d_x, ds_x);
                    calc_overlap_derivs(n, v, d_y, ds_y);
                    calc_overlap_derivs(n, v, d_z, ds_z);

                    const std::pair<double, double> drho_dx =
                        density(_density_matrix, n, ds_x, indices);

                    const std::pair<double, double> drho_dy =
                        density(_density_matrix, n, ds_y, indices);

                    const std::pair<double, double> drho_dz =
                        density(_density_matrix, n, ds_z, indices);

                    // calculate density gradient norm
                    const double gamma_aa = drho_dx.first * drho_dx.first +
                                            drho_dy.first * drho_dy.first +
                                            drho_dz.first * drho_dz.first;

                    const double gamma_ab = drho_dx.first * drho_dx.second +
                                            drho_dy.first * drho_dy.second +
                                            drho_dz.first * drho_dz.second;

                    const double gamma_bb = drho_dx.second * drho_dx.second +
                                            drho_dy.second * drho_dy.second +
                                            drho_dz.second * drho_dz.second;

                    functional = _gga(
                        rho.first, rho.second, gamma_aa, gamma_ab, gamma_bb, 1);
                }

                result +=
                    // 0.5 *
                    // block.weights[p] *
                    //(functional.de_drho_a + functional.de_drho_b);
                    block.weights[p] * functional.e;
            }

            return result;
        }
    }
}
