/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef GRID_FACTORY_HPP
#define GRID_FACTORY_HPP

#include "core_kit/grid.hpp"
#include "core_kit/factory.hpp"
#include "core_kit/ao_value_engine_factory.hpp"
#include "xc_kit/xc_functional.hpp"

#include <boost/function.hpp>

#include <map>

namespace niedoida {
    namespace grid {
        class GridFactory: public core::Factory<core::Grid> {
        public:
            enum GridType {
                SIMPLE_GRID,
                PRUNED_GRID,
                ANGULAR_S_ADAPTIVE_GRID,
                ANGULAR_RHO0_ADAPTIVE_GRID,
                ANGULAR_VXC0_ADAPTIVE_GRID,
                FULL_RHO0_ADAPTIVE_GRID
            };

            enum AngularGridType {
                GAUSS_LEGENDRE_ANGULAR_GRID,
                LEBEDEV_LAIKOV_ANGULAR_GRID
            };

            GridFactory(
                std::shared_ptr<const core::AOValueEngineFactory> aove_factory,
                boost::function<double (const core::Shell&, double)> shell_range,
                xc::LocalXCFunctional,
                GridType grid_type,
                AngularGridType angular_grid_type,
                double accuracy,
                unsigned max_no_radial_points,
                unsigned max_no_angular_points);

            GridFactory(
                std::shared_ptr<const core::AOValueEngineFactory> aove_factory,
                boost::function<double (const core::Shell&, double)> shell_range,
                xc::GGAXCFunctional, 
                GridType grid_type,
                AngularGridType angular_grid_type,
                double accuracy,
                unsigned max_no_radial_points,
                unsigned max_no_angular_points);

            Product make(std::shared_ptr<const core::System>) const override;

        private:
            typedef std::map<
                std::shared_ptr<const core::System>, 
                std::shared_ptr<core::Grid> > SystemGridMap;
            std::shared_ptr<const core::AOValueEngineFactory> _aove_factory;
            boost::function<double (const core::Shell&, double)> _shell_range;
            xc::LocalXCFunctional _lda;
            xc::GGAXCFunctional _gga;
            GridType _grid_type;
            AngularGridType _angular_grid_type;
            double _accuracy;
            unsigned _max_no_radial_points;
            unsigned _max_no_angular_points;
            mutable SystemGridMap _sg_map;
        };
    }
}

#endif
