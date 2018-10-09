/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "grid_kit/gl_spherical_grid.hpp"

#include <boost/math/constants/constants.hpp>

namespace {
    inline double diff_norm(const arma::vec3& p, const arma::vec3& q)
    {
        const double dx = p(0) - q(0);
        const double dy = p(1) - q(1);
        const double dz = p(2) - q(2);

        return std::sqrt(dx * dx + dy * dy + dz * dz);
    }
}

namespace niedoida {
    namespace grid {
        GLSphericalGrid::GLSphericalGrid(
            std::shared_ptr<const core::System> system,
            boost::function<double(const core::Shell&, double)> shell_range) :
            SimpleSphericalGrid(system, shell_range)
        {
            for (std::size_t t = 5; t < 120; ++t)
                _allowed_sizes.push_back(2 * t * t);
        }

        const std::vector<std::size_t> GLSphericalGrid::allowed_sizes() const
        {
            return _allowed_sizes;
        }

        std::shared_ptr<core::Grid::Block> GLSphericalGrid::
        operator()(std::size_t a,
                   double r,
                   std::size_t size_index,
                   double threshold) const
        {
            assert(size_index < _allowed_sizes.size());
            const std::size_t no_points = _allowed_sizes[size_index];

            const std::size_t no_theta_points =
                no_points == 1
                    ? 1
                    : static_cast<std::size_t>(std::sqrt(no_points / 2.0));

            const std::size_t no_phi_points =
                no_theta_points == 1 ? 1 : 2 * no_theta_points;

            misc::Quadrature theta_g =
                misc::gauss_legendre_quadrature(-1, 1, no_theta_points);

            for (std::size_t p = 0; p < theta_g.size(); ++p) {
                const double ab = theta_g[p].first;
                theta_g[p].first = std::acos(ab);
                theta_g[p].second *= 1.0 / std::sqrt(1 - ab * ab);
            }

            misc::Quadrature phi_g = misc::simple_quadrature(
                0, 2 * boost::math::double_constants::pi, no_phi_points);

            const std::size_t block_size = no_theta_points * no_phi_points;
            std::shared_ptr<core::Grid::Block> block(
                new core::Grid::Block(block_size));
            const double atom_coords[3] = {
                _atom_coords[a](0), _atom_coords[a](1), _atom_coords[a](2)};

            if ((_prev_a != a) || (_prev_r != r) ||
                (_prev_threshold != threshold)) {

                _shell_ranges.clear();

                for (const core::Shell* s : _shells)
                    _shell_ranges.push_back(_shell_range(*s, threshold));

                _significant_sphere_shells.clear();
                _significant_sphere_shells.reserve(_shell_coords.size());

                // find all significant shells for this sphere
                for (std::size_t s = 0; s < _shell_ranges.size(); ++s) {
                    const double d =
                        diff_norm(atom_coords, &(_shell_coords[s](0)));
                    const double sr = _shell_ranges[s];

                    if ((d < r && r < d + sr) || (d >= r && r >= d - sr))
                        _significant_sphere_shells.push_back(s);
                }

                _prev_a = a;
                _prev_r = r;
                _prev_threshold = threshold;
            }

            const double r2 = r * r;

            std::size_t point = 0;

            for (std::size_t j = 0; j < theta_g.size(); ++j) {
                const double theta = theta_g[j].first;

                // find all significant shells for this circle
                std::vector<std::size_t> significant_circle_shells;
                significant_circle_shells.reserve(
                    _significant_sphere_shells.size());
                for (std::size_t qi = 0; qi < _significant_sphere_shells.size();
                     ++qi) {
                    const std::size_t q = _significant_sphere_shells[qi];
                    const double srq = _shell_ranges[q];
                    if (diff_norm(atom_coords, &(_shell_coords[q](0))) <
                        std::sqrt(r2 + srq * srq))
                        significant_circle_shells.push_back(q);
                }

                for (std::size_t k = 0; k < phi_g.size(); ++k) {
                    const double phi = phi_g[k].first;
                    const double sin_theta = std::sin(theta);

                    arma::vec3 coords = {
                        atom_coords[0] + r * sin_theta * std::cos(phi),
                        atom_coords[1] + r * sin_theta * std::sin(phi),
                        atom_coords[2] + r * std::cos(theta)};

                    // find all significant shells for this point
                    for (std::size_t qi = 0;
                         qi < significant_circle_shells.size();
                         ++qi) {
                        const std::size_t q = significant_circle_shells[qi];
                        const double srq = _shell_ranges[q];
                        if (diff_norm(coords, _shell_coords[q]) < srq)
                            block->significant_shells[point].push_back(q);
                    }

                    block->coords.col(point) = coords;
                    block->weights(point) =
                        theta_g[j].second * sin_theta * phi_g[k].second;

                    point += 1;
                }
            }

            return block;
        }
    }
}
