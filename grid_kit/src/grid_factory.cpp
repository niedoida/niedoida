/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "grid_kit/grid_factory.hpp"

#include "grid_kit/gl_spherical_grid.hpp"
#include "grid_kit/grid_utils.hpp"
#include "grid_kit/ll_spherical_grid.hpp"
#include "grid_kit/pruned_grid.hpp"
#include "grid_kit/r_adaptive_product_grid.hpp"
#include "grid_kit/radial_grids.hpp"
#include "grid_kit/rho0_adaptive_grid.hpp"
#include "grid_kit/s_adaptive_grid.hpp"
#include "grid_kit/simple_grid.hpp"
#include "grid_kit/vxc0_adaptive_grid.hpp"

#include "io_kit/log.hpp"

namespace {
    using namespace niedoida;

    class GridProxy : public core::Grid {
    public:
        GridProxy(std::shared_ptr<core::Grid> g) : _g(g) {}

        inline std::size_t no_blocks() const override
        {
            return _g->no_blocks();
        }

        inline std::shared_ptr<const Block>
        get_block(std::size_t block) const override
        {
            return _g->get_block(block);
        }

    private:
        std::shared_ptr<core::Grid> _g;
    };
}

namespace niedoida {
    namespace grid {
        GridFactory::GridFactory(
            std::shared_ptr<const core::AOValueEngineFactory> aove_factory,
            boost::function<double(const core::Shell&, double)> shell_range,
            xc::LocalXCFunctional lda,
            GridType grid_type,
            AngularGridType angular_grid_type,
            double accuracy,
            unsigned max_no_radial_points,
            unsigned max_no_angular_points) :
            _aove_factory(aove_factory),
            _shell_range(shell_range),
            _lda(lda),
            _gga(0),
            _grid_type(grid_type),
            _angular_grid_type(angular_grid_type),
            _accuracy(accuracy),
            _max_no_radial_points(max_no_radial_points),
            _max_no_angular_points(max_no_angular_points)
        {
        }

        GridFactory::GridFactory(
            std::shared_ptr<const core::AOValueEngineFactory> aove_factory,
            boost::function<double(const core::Shell&, double)> shell_range,
            xc::GGAXCFunctional gga,
            GridType grid_type,
            AngularGridType angular_grid_type,
            double accuracy,
            unsigned max_no_radial_points,
            unsigned max_no_angular_points) :
            _aove_factory(aove_factory),
            _shell_range(shell_range),
            _lda(0),
            _gga(gga),
            _grid_type(grid_type),
            _angular_grid_type(angular_grid_type),
            _accuracy(accuracy),
            _max_no_radial_points(max_no_radial_points),
            _max_no_angular_points(max_no_angular_points)
        {
        }

        GridFactory::Product
        GridFactory::make(std::shared_ptr<const core::System> system) const
        {
            const SystemGridMap::const_iterator i = _sg_map.find(system);
            if (i != _sg_map.end()) {
                std::unique_ptr<core::Grid> proxy(new GridProxy((*i).second));
                return proxy;
            }
            std::shared_ptr<core::Grid> grid;

            std::unique_ptr<PartitionFunction> pf(
                new SSPartitionFunction(system));

            io::Log::instance().write(
                io::Logger::NORMAL, "radial grid generator", "gc-logm");
            std::unique_ptr<RadialGrid> radial_grid(new LogmRadialGrid(
                misc::gauss_chebyshev_0_quadrature, _max_no_radial_points));
            io::Log::instance().write(io::Logger::NORMAL,
                                      "max_no_radial_points",
                                      _max_no_radial_points);

            std::unique_ptr<SphericalGrid> spherical_grid;
            switch (_angular_grid_type) {
            case GAUSS_LEGENDRE_ANGULAR_GRID:
                io::Log::instance().write(io::Logger::NORMAL,
                                          "spherical grid generator",
                                          "Gauss-Legendre");
                spherical_grid.reset(new GLSphericalGrid(system, _shell_range));
                break;
            case LEBEDEV_LAIKOV_ANGULAR_GRID:
                io::Log::instance().write(io::Logger::NORMAL,
                                          "spherical grid generator",
                                          "Lebedev-Laikov");
                spherical_grid.reset(new LLSphericalGrid(system, _shell_range));
                break;
            }
            io::Log::instance().write(io::Logger::NORMAL,
                                      "max_no_angular_points",
                                      _max_no_angular_points);
            GridType grid_type = _grid_type;

            if (!system->promolecule && grid_type > ANGULAR_S_ADAPTIVE_GRID)
                grid_type = ANGULAR_S_ADAPTIVE_GRID;

            switch (grid_type) {
            case SIMPLE_GRID:
                io::Log::instance().write(
                    io::Logger::NORMAL, "grid type", "simple");
                grid.reset(new SimpleGrid(system,
                                          std::move(pf),
                                          std::move(radial_grid),
                                          std::move(spherical_grid),
                                          _aove_factory,
                                          _max_no_angular_points));
                break;

            case PRUNED_GRID:
                io::Log::instance().write(
                    io::Logger::NORMAL, "grid type", "pruned");
                grid.reset(new PrunedGrid(system,
                                          std::move(pf),
                                          std::move(radial_grid),
                                          std::move(spherical_grid),
                                          _aove_factory,
                                          _max_no_angular_points));
                break;

            case ANGULAR_S_ADAPTIVE_GRID:
                io::Log::instance().write(
                    io::Logger::NORMAL, "grid type", "angular-S-adaptive");
                io::Log::instance().write(io::Logger::NORMAL,
                                          "requested_accuracy",
                                          -std::log10(_accuracy));
                grid.reset(new SAdaptiveGrid(system,
                                             std::move(pf),
                                             std::move(radial_grid),
                                             std::move(spherical_grid),
                                             _aove_factory,
                                             _accuracy,
                                             _max_no_radial_points,
                                             _max_no_angular_points));
                break;

            case ANGULAR_RHO0_ADAPTIVE_GRID:
                io::Log::instance().write(
                    io::Logger::NORMAL, "grid type", "angular-rho0-adaptive");
                io::Log::instance().write(io::Logger::NORMAL,
                                          "requested_accuracy",
                                          -std::log10(_accuracy));
                grid.reset(new Rho0AdaptiveGrid(system,
                                                std::move(pf),
                                                std::move(radial_grid),
                                                std::move(spherical_grid),
                                                _aove_factory,
                                                _accuracy,
                                                _max_no_radial_points,
                                                _max_no_angular_points));
                break;

            case ANGULAR_VXC0_ADAPTIVE_GRID:
                io::Log::instance().write(
                    io::Logger::NORMAL, "grid type", "angular-vxc0-adaptive");
                io::Log::instance().write(io::Logger::NORMAL,
                                          "requested_accuracy",
                                          -std::log10(_accuracy));
                if (_lda)
                    grid.reset(new Vxc0AdaptiveGrid(system,
                                                    _lda,
                                                    std::move(pf),
                                                    std::move(radial_grid),
                                                    std::move(spherical_grid),
                                                    _aove_factory,
                                                    _accuracy,
                                                    _max_no_radial_points,
                                                    _max_no_angular_points));
                else
                    grid.reset(new Vxc0AdaptiveGrid(system,
                                                    _gga,
                                                    std::move(pf),
                                                    std::move(radial_grid),
                                                    std::move(spherical_grid),
                                                    _aove_factory,
                                                    _accuracy,
                                                    _max_no_radial_points,
                                                    _max_no_angular_points));
                break;
            case FULL_RHO0_ADAPTIVE_GRID:
                io::Log::instance().write(
                    io::Logger::NORMAL, "grid type", "full-rho0-adaptive");
                io::Log::instance().write(io::Logger::NORMAL,
                                          "requested_accuracy",
                                          -std::log10(_accuracy));
                grid.reset(new RAdaptiveProductGrid(system,
                                                    std::move(pf),
                                                    std::move(spherical_grid),
                                                    _aove_factory->make(system),
                                                    _accuracy,
                                                    _max_no_radial_points,
                                                    _max_no_angular_points));
                break;
            }

            if (_sg_map.size() > 3)
                _sg_map.erase(_sg_map.begin());

            _sg_map[system] = grid;

            return make(system);
        }
    }
}
