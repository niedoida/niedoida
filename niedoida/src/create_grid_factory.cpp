/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "niedoida/niedoida.hpp"

namespace niedoida {
    std::shared_ptr<const grid::GridFactory>
    create_grid_factory(const InputData& input_data,
                        boost::variant<xc::NoneXCFunctional,
                                       xc::LocalXCFunctional,
                                       xc::GGAXCFunctional> xc_functional,
                        std::shared_ptr<const core::AOValueEngineFactory>
                            ao_value_engine_factory)
    {

        std::shared_ptr<const grid::GridFactory> grid_factory;

        grid::GridFactory::GridType grid_type;

        switch (input_data.grid_params.grid_type) {
        case InputData::SIMPLE_GRID:
            grid_type = grid::GridFactory::SIMPLE_GRID;
            break;
        case InputData::PRUNED_GRID:
            grid_type = grid::GridFactory::PRUNED_GRID;
            break;
        case InputData::ANGULAR_S_ADAPTIVE_GRID:
            grid_type = grid::GridFactory::ANGULAR_S_ADAPTIVE_GRID;
            break;
        case InputData::ANGULAR_RHO0_ADAPTIVE_GRID:
            grid_type = grid::GridFactory::ANGULAR_RHO0_ADAPTIVE_GRID;
            break;
        case InputData::ANGULAR_VXC0_ADAPTIVE_GRID:
            grid_type = grid::GridFactory::ANGULAR_VXC0_ADAPTIVE_GRID;
            break;
        case InputData::FULL_RHO0_ADAPTIVE_GRID:
            grid_type = grid::GridFactory::FULL_RHO0_ADAPTIVE_GRID;
            break;
        }

        grid::GridFactory::AngularGridType angular_grid_type;

        switch (input_data.grid_params.angular_grid_type) {
        case InputData::GAUSS_LEGENDRE_ANGULAR_GRID:
            angular_grid_type = grid::GridFactory::GAUSS_LEGENDRE_ANGULAR_GRID;
            break;
        case InputData::LEBEDEV_LAIKOV_ANGULAR_GRID:
            angular_grid_type = grid::GridFactory::LEBEDEV_LAIKOV_ANGULAR_GRID;
            break;
        }

        if (boost::get<xc::LocalXCFunctional>(&xc_functional)) {
            grid_factory.reset(new grid::GridFactory(
                ao_value_engine_factory,
                &gto::gto_shell_range,
                boost::get<xc::LocalXCFunctional>(xc_functional),
                grid_type,
                angular_grid_type,
                input_data.grid_params.accuracy,
                input_data.grid_params.max_no_radial_points,
                input_data.grid_params.max_no_angular_points));

        } else if (boost::get<xc::GGAXCFunctional>(&xc_functional)) {
            grid_factory.reset(new grid::GridFactory(
                ao_value_engine_factory,
                &gto::gto_shell_range,
                boost::get<xc::GGAXCFunctional>(xc_functional),
                grid_type,
                angular_grid_type,
                input_data.grid_params.accuracy,
                input_data.grid_params.max_no_radial_points,
                input_data.grid_params.max_no_angular_points));
        }

        return grid_factory;
    }
}
