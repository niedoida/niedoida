/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "grid_kit/product_grid.hpp"

#include <boost/lambda/algorithm.hpp>
#include <boost/lambda/bind.hpp>
#include <boost/lambda/lambda.hpp>
#include <boost/math/constants/constants.hpp>

#include <algorithm>
#include <cmath>
#include <limits>

#include "grid_kit/grid_utils.hpp"
#include "misc_kit/quadratures.hpp"

#include "symmetry_kit/symmetry_utils.hpp"

namespace {
    // FIXME: should be parametrized
    const double rho_threshold = 1e-10;
}

namespace niedoida {
    namespace grid {
        ProductGrid::ProductGrid(
            std::shared_ptr<const core::System> system,
            std::unique_ptr<PartitionFunction> pf,
            std::unique_ptr<RadialGrid> rg,
            std::unique_ptr<SphericalGrid> sg,
            std::shared_ptr<const core::AOValueEngineFactory>
                ao_value_engine_factory) :
            AtomicGrid(system, std::move(pf)),
            _system(system),
            _rg(std::move(rg)),
            _sg(std::move(sg)),
            _ao_value_engine_factory(ao_value_engine_factory),
            _max_ao_value(
                max_ao_value(*_system, *_ao_value_engine_factory->make(system)))
        {
        }

        std::vector<std::shared_ptr<core::Grid::Block>>
        ProductGrid::make_atomic_grid(std::size_t a,
                                      const PartitionFunction& pf) const
        {
            const misc::Quadrature rg =
                (*_rg)(*_system->basis_set.atomic_basis_sets()[a]);

            double v = 0;
            for (misc::Quadrature::const_iterator i = rg.begin(); i != rg.end();
                 ++i)
                v += 4 * boost::math::double_constants::pi * (*i).first *
                     (*i).first * (*i).second;

            const double max_P = 10;

            const double ao_threshold =
                rho_threshold / (_max_ao_value * max_P * v);

            std::vector<std::shared_ptr<Block>> ag;
            ag.reserve(rg.size());

            for (misc::Quadrature::const_iterator i = rg.begin(); i != rg.end();
                 ++i) {
                const double r = (*i).first;
                const double r2 = r * r;
                const double r_w = (*i).second;
                const std::size_t block_size =
                    spherical_grid_size(a, r, pf, *_sg);

                const std::shared_ptr<core::Grid::Block> block =
                    (*_sg)(a, r, block_size, ao_threshold);

                block->weights *= r2 * r_w;

                ag.push_back(block);
            }

            return ag;
        }
    }
}
