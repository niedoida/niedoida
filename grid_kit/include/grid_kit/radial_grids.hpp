/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_GRID_KIT_RADIAL_GRIDS_HPP
#define NIEDOIDA_GRID_KIT_RADIAL_GRIDS_HPP

#include <utility>
#include <vector>

#include <boost/function.hpp>

#include "core_kit/basis_set.hpp"
#include "grid_kit/product_grid.hpp"

namespace niedoida {
    namespace grid {
        class CoordinateTransformation {
        public:
            virtual ~CoordinateTransformation() = default;

            virtual double transform_coord(double) = 0;
            virtual double transform_weight(double, double) = 0;
        };

        misc::Quadrature transform_quadrature(const misc::Quadrature& q, const CoordinateTransformation& t);

        misc::Quadrature lindh_radial_grid(
            boost::function<misc::Quadrature(double, double, std::size_t)> q,
            const core::AtomicBasisSet& abs, double R);
        misc::Quadrature log3_radial_grid(
            boost::function<misc::Quadrature(double, double, std::size_t)> q,
            std::size_t n, double alpha = 5);
        misc::Quadrature extended_simple_tg2_grid(
            boost::function<misc::Quadrature(double, double, std::size_t)> q,
            const core::AtomicBasisSet& abs, std::size_t no_points);
        misc::Quadrature logm_radial_grid(
            boost::function<misc::Quadrature(double, double, std::size_t)> q,
            std::size_t n, unsigned no_electrons);
        misc::Quadrature emcl_radial_grid(const core::AtomicBasisSet& abs, std::size_t no_points, int m = 2);

        class LogmRadialGrid: public RadialGrid {
        public:
            LogmRadialGrid(
                boost::function<misc::Quadrature(double, double, std::size_t)> q, 
                std::size_t no_points): 
                _q(q), _no_points(no_points) {}

            misc::Quadrature operator ()(const core::AtomicBasisSet&) const;

        private:
            boost::function<misc::Quadrature(double, double, std::size_t)> _q;
            std::size_t _no_points;
        };

        class LindhRadialGrid: public RadialGrid {
        public:
            LindhRadialGrid(
                boost::function<misc::Quadrature(double, double, std::size_t)> q,
                double r): 
                _q(q), _r(r) {}

            misc::Quadrature operator ()(const core::AtomicBasisSet&) const;

        private:
            boost::function<misc::Quadrature(double, double, std::size_t)> _q;
            double _r;
        };

        class EulerMacLaurinRadialGrid: public RadialGrid {
        public:
            EulerMacLaurinRadialGrid(std::size_t no_points, int m = 2):
                _no_points(no_points), _m(m) {}

            misc::Quadrature operator ()(const core::AtomicBasisSet&) const;

        private:
            std::size_t _no_points;
            int _m;
        };
    }
}

#endif
