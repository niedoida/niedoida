/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "grid_kit/rho0_adaptive_grid.hpp"

#include "core_kit/promolecule.hpp"

#include "io_kit/logger.hpp"

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
        Rho0AdaptiveGrid::Rho0AdaptiveGrid(
            std::shared_ptr<const core::System> system,
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
            _density_matrix(
                system->promolecule->average_density_matrix(core::SPIN_ALPHA) +
                system->promolecule->average_density_matrix(core::SPIN_BETA)),
            _overlap_buf(new double[(m_bs_info.m_no_contractions *
                                     (m_bs_info.m_no_contractions + 1)) /
                                    2]),
            _accuracy(accuracy),
            _max_spherical_grid_size(max_spherical_grid_size),
            _prev_atom(0),
            _prev_grid_index(0)
        {
        }

        std::size_t
        Rho0AdaptiveGrid::spherical_grid_size(std::size_t a,
                                              double r,
                                              const PartitionFunction& pf,
                                              const SphericalGrid& sg) const
        {
            //    if (r <= std::numeric_limits<double>::epsilon())
            //        return 1;

            if (r <= std::numeric_limits<double>::epsilon())
                std::cout << "argh" << std::endl;

            const double r2 = r * r;

            double prev_rho = 0;
            double next_rho = 0;

            int start = 0;

            if (a != _prev_atom)
                _prev_atom = a;
            else
                start = std::max(0, int(_prev_grid_index) - 3);

            const std::size_t n = adjust_angular_size(_max_spherical_grid_size,
                                                      sg.allowed_sizes());

            double delta;

            for (std::size_t i = start; i < n; ++i) {
                std::shared_ptr<Grid::Block> block =
                    sg(a, r, i, _accuracy / 1e3);
                const std::size_t bs = block->size;

                pf(a, bs, block->coords.memptr(), block->weights.memptr());

                block->weights *= r2;

                next_rho = _density(*block);
                delta = std::abs(next_rho - prev_rho);
                prev_rho = next_rho;
                if (delta < _accuracy) {
                    // Log::instance().write("radius", r);
                    // Log::instance().write("angular_size",
                    // int(sg.allowed_sizes()[i - 1]));
                    const std::size_t index = (i > 0 ? i - 1 : i);
                    _prev_grid_index = index;
                    return index;
                    //             const int j = std::max(i, 3);
                    //             _prev_grid_size = (j - 1) * (j - 1) * 2;
                    //             return _prev_grid_size;
                }
            }

            //    _prev_grid_size = _max_spherical_grid_size;

            //            Log::instance().write("clipping angular grid at
            //            distance", r);
            //            Log::instance().write("requested_accuracy",
            //            -std::log10(_accuracy));
            //            Log::instance().write("achieved_accuracy",
            //            -std::log10(delta));

            _prev_grid_index = n;
            return n;
        }

        double Rho0AdaptiveGrid::_density(const Grid::Block& block) const
        {
            double result = 0;

            std::shared_ptr<const BlockAOData> data =
                block_ao_data(block, _accuracy / 1e3, 0);

            std::size_t no_block_contractions =
                data->no_contractions / block.size;

            if (!no_block_contractions)
                return 0;

            arma::mat _P(no_block_contractions, no_block_contractions);
            for (std::size_t i = 0; i < no_block_contractions; ++i)
                for (std::size_t j = 0; j < no_block_contractions; ++j)
                    _P(i, j) =
                        _density_matrix(data->indices[i], data->indices[j]);

            arma::mat C(block.size, no_block_contractions);
            std::memcpy(&C(0, 0),
                        data->values.get(),
                        block.size * no_block_contractions * sizeof(double));

            arma::vec d = arma::zeros(block.size);

            arma::mat G = C * _P;

            for (std::size_t p = 0; p < block.size; ++p)
                d(p) += dot(G.row(p), C.row(p));

            for (std::size_t p = 0; p < block.size; ++p)
                result += block.weights[p] * d(p);

            return result;
        }
    }
}
