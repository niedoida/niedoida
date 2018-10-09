/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "property_kit/bader_analysis.hpp"

#include "core_kit/atom.hpp"

#include <algorithm>
#include <stack>

#include <boost/multi_array.hpp>
#include <boost/optional.hpp>
#include <boost/utility.hpp>

namespace {
    using namespace niedoida;

    std::vector<double> atomic_box(const core::Atom& atom)
    {
        std::vector<double> box;
        box.reserve(6);

        // FIXME: it's definitely not the best possible guess
        const double bsr = atom.isotope->element->bragg_slater_radius;
        const double d = 3 * bsr;

        box.push_back(atom.coords[0] - d);
        box.push_back(atom.coords[1] - d);
        box.push_back(atom.coords[2] - d);

        box.push_back(atom.coords[0] + d);
        box.push_back(atom.coords[1] + d);
        box.push_back(atom.coords[2] + d);

        return box;
    }

    struct Position {
        unsigned x;
        unsigned y;
        unsigned z;
    };

    struct Direction {
        int dx;
        int dy;
        int dz;
    };

    boost::optional<Direction>
    the_right_direction(const boost::multi_array<double, 3>& cube,
                        const Position& position)
    {
        const unsigned i = position.x;
        const unsigned j = position.y;
        const unsigned k = position.z;

        const std::size_t nx = cube.shape()[0];
        const std::size_t ny = cube.shape()[1];
        const std::size_t nz = cube.shape()[2];

        const double d1 = 1;
        const double d2 = std::sqrt(2.0);
        const double d3 = std::sqrt(3.0);

        std::vector<Direction> directions;
        std::vector<double> gradients;

        const double rho0 = cube[i][j][k];

        // 1
        if (i > 0) {
            const Direction d = {-1, 0, 0};
            directions.push_back(d);
            gradients.push_back((cube[i - 1][j][k] - rho0) / d1);
        }

        // 2
        if (j > 0) {
            const Direction d = {0, -1, 0};
            directions.push_back(d);
            gradients.push_back((cube[i][j - 1][k] - rho0) / d1);
        }

        // 3
        if (k > 0) {
            const Direction d = {0, 0, -1};
            directions.push_back(d);
            gradients.push_back((cube[i][j][k - 1] - rho0) / d1);
        }

        // 4
        if (i < nx - 1) {
            const Direction d = {1, 0, 0};
            directions.push_back(d);
            gradients.push_back((cube[i + 1][j][k] - rho0) / d1);
        }

        // 5
        if (j < ny - 1) {
            const Direction d = {0, 1, 0};
            directions.push_back(d);
            gradients.push_back((cube[i][j + 1][k] - rho0) / d1);
        }

        // 6
        if (k < nz - 1) {
            const Direction d = {0, 0, 1};
            directions.push_back(d);
            gradients.push_back((cube[i][j][k + 1] - rho0) / d1);
        }

        // 7
        if (i > 0 && j > 0) {
            const Direction d = {-1, -1, 0};
            directions.push_back(d);
            gradients.push_back((cube[i - 1][j - 1][k] - rho0) / d2);
        }

        // 8
        if (i > 0 && k > 0) {
            const Direction d = {-1, 0, -1};
            directions.push_back(d);
            gradients.push_back((cube[i - 1][j][k - 1] - rho0) / d2);
        }

        // 9
        if (j > 0 && k > 0) {
            const Direction d = {0, -1, -1};
            directions.push_back(d);
            gradients.push_back((cube[i][j - 1][k - 1] - rho0) / d2);
        }

        // 10
        if (i < nx - 1 && j < ny - 1) {
            const Direction d = {1, 1, 0};
            directions.push_back(d);
            gradients.push_back((cube[i + 1][j + 1][k] - rho0) / d2);
        }

        // 11
        if (i < nx - 1 && k < nz - 1) {
            const Direction d = {1, 0, 1};
            directions.push_back(d);
            gradients.push_back((cube[i + 1][j][k + 1] - rho0) / d2);
        }

        // 12
        if (j < ny - 1 && k < nz - 1) {
            const Direction d = {0, 1, 1};
            directions.push_back(d);
            gradients.push_back((cube[i][j + 1][k + 1] - rho0) / d2);
        }

        // 13
        if (i > 0 && j < ny - 1) {
            const Direction d = {-1, 1, 0};
            directions.push_back(d);
            gradients.push_back((cube[i - 1][j + 1][k] - rho0) / d2);
        }

        // 14
        if (i > 0 && k < nz - 1) {
            const Direction d = {-1, 0, 1};
            directions.push_back(d);
            gradients.push_back((cube[i - 1][j][k + 1] - rho0) / d2);
        }

        // 15
        if (j > 0 && k < nz - 1) {
            const Direction d = {0, -1, 1};
            directions.push_back(d);
            gradients.push_back((cube[i][j - 1][k + 1] - rho0) / d2);
        }

        // 16
        if (i < nx - 1 && j > 0) {
            const Direction d = {1, -1, 0};
            directions.push_back(d);
            gradients.push_back((cube[i + 1][j - 1][k] - rho0) / d2);
        }

        // 17
        if (i < nx - 1 && k > 0) {
            const Direction d = {1, 0, -1};
            directions.push_back(d);
            gradients.push_back((cube[i + 1][j][k - 1] - rho0) / d2);
        }

        // 18
        if (j < ny - 1 && k > 0) {
            const Direction d = {0, 1, -1};
            directions.push_back(d);
            gradients.push_back((cube[i][j + 1][k - 1] - rho0) / d2);
        }

        // 19
        if (i > 0 && j > 0 && k > 0) {
            const Direction d = {-1, -1, -1};
            directions.push_back(d);
            gradients.push_back((cube[i - 1][j - 1][k - 1] - rho0) / d3);
        }

        // 20
        if (i > 0 && j > 0 && k < nz - 1) {
            const Direction d = {-1, -1, +1};
            directions.push_back(d);
            gradients.push_back((cube[i - 1][j - 1][k + 1] - rho0) / d3);
        }

        // 21
        if (i > 0 && j < ny - 1 && k > 0) {
            const Direction d = {-1, +1, -1};
            directions.push_back(d);
            gradients.push_back((cube[i - 1][j + 1][k - 1] - rho0) / d3);
        }

        // 22
        if (i < nx - 1 && j > 0 && k > 0) {
            const Direction d = {+1, -1, -1};
            directions.push_back(d);
            gradients.push_back((cube[i + 1][j - 1][k - 1] - rho0) / d3);
        }

        // 23
        if (i > 0 && j < ny - 1 && k < nz - 1) {
            const Direction d = {-1, +1, +1};
            directions.push_back(d);
            gradients.push_back((cube[i - 1][j + 1][k + 1] - rho0) / d3);
        }

        // 24
        if (i < nx - 1 && j > 0 && k < nz - 1) {
            const Direction d = {+1, -1, +1};
            directions.push_back(d);
            gradients.push_back((cube[i + 1][j - 1][k + 1] - rho0) / d3);
        }

        // 25
        if (i < nx - 1 && j < ny - 1 && k > 0) {
            const Direction d = {+1, +1, -1};
            directions.push_back(d);
            gradients.push_back((cube[i + 1][j + 1][k - 1] - rho0) / d3);
        }

        // 26
        if (i < nx - 1 && j < ny - 1 && k < nz - 1) {
            const Direction d = {+1, +1, +1};
            directions.push_back(d);
            gradients.push_back((cube[i + 1][j + 1][k + 1] - rho0) / d3);
        }

        assert(gradients.size() != 0);
        assert(gradients.size() == directions.size());

        std::vector<double>::iterator max_gradient_iter =
            std::max_element(gradients.begin(), gradients.end());

        const double max_gradient = *max_gradient_iter;

        if (max_gradient < 0)
            return boost::optional<Direction>();

        return directions[std::distance(gradients.begin(), max_gradient_iter)];
    }
}

namespace niedoida {
    namespace property {
        BaderAnalysis::BaderAnalysis(
            std::shared_ptr<const core::System> system,
            const arma::mat& P,
            std::unique_ptr<core::AOValueEngine> ao_value_engine) :
            GridIntegralImplementation(system, std::move(ao_value_engine))
        {
            // estimate molecule's bounding box
            std::vector<double> limits[6];

            const std::vector<core::Atom*>& atoms = system->atoms;
            for (std::size_t a = 0; a < atoms.size(); ++a) {
                const std::vector<double> box = atomic_box(*atoms[a]);

                for (int i = 0; i < 6; ++i)
                    limits[i].push_back(box[i]);
            }

            std::vector<std::size_t> all_shells(m_bs_info.m_no_shells);
            std::iota(all_shells.begin(), all_shells.end(), 0);

            const double lo_x =
                *std::min_element(limits[0].begin(), limits[0].end());
            const double lo_y =
                *std::min_element(limits[1].begin(), limits[1].end());
            const double lo_z =
                *std::min_element(limits[2].begin(), limits[2].end());

            const double hi_x =
                *std::max_element(limits[3].begin(), limits[3].end());
            const double hi_y =
                *std::max_element(limits[4].begin(), limits[4].end());
            const double hi_z =
                *std::max_element(limits[5].begin(), limits[5].end());

            // FIXME: we should try to be smarter about the stepsize
            const double d = 0.05;

            // cell volume
            const double d3 = d * d * d;

            // calculate the cube extents
            const std::size_t nx = static_cast<std::size_t>((hi_x - lo_x) / d);
            const std::size_t ny = static_cast<std::size_t>((hi_y - lo_y) / d);
            const std::size_t nz = static_cast<std::size_t>((hi_z - lo_z) / d);

            // now that we've got the cube
            boost::multi_array<double, 3> cube(boost::extents[nx][ny][nz]);

            // let's store cell's density in it
            boost::multi_array<double, 2> ao_values_buf(
                boost::extents[m_bs_info.m_no_shells]
                              [m_bs_info.m_max_shell_size]);

            for (std::size_t i = 0; i < nx; ++i) {
                for (std::size_t j = 0; j < ny; ++j) {
                    for (std::size_t k = 0; k < nz; ++k) {
                        const double coords[3] = {
                            lo_x + i * d, lo_y + j * d, lo_z + k * d};
                        m_ao_value_engine->calc(
                            coords, all_shells, &(ao_values_buf[0][0]));
                        cube[i][j][k] = density(P, ao_values_buf);
                    }
                }
            }

            boost::multi_array<unsigned, 3> cell_assignements(
                boost::extents[nx][ny][nz]);

            // and assign cells of the cube to basins
            assign(cube, cell_assignements);

            std::vector<double> densities;
            std::vector<Position> max_positions;
            std::vector<double> max_densities;

            for (std::size_t i = 0; i < nx; ++i) {
                for (std::size_t j = 0; j < ny; ++j) {
                    for (std::size_t k = 0; k < nz; ++k) {
                        unsigned a = cell_assignements[i][j][k];
                        assert(a != 0);
                        a -= 1;
                        if (a >= densities.size()) {
                            densities.resize(a + 1);
                            max_positions.resize(a + 1);
                            max_densities.resize(a + 1);
                        }
                        const double rho = cube[i][j][k];
                        densities[a] += rho * d3;
                        if (rho > max_densities[a]) {
                            max_densities[a] = rho;
                            const Position p = {static_cast<unsigned>(i),
                                                static_cast<unsigned>(j),
                                                static_cast<unsigned>(k)};
                            max_positions[a] = p;
                        }
                    }
                }
            }

            m_atomic_populations = arma::zeros<arma::vec>(system->atoms.size());

            // FIXME: this code doesn't handle cases where maximum is not
            // identical with an atom
            for (std::size_t a = 0; a < system->atoms.size(); ++a) {

                const core::Atom& atom = *system->atoms[a];
                const double ax = atom.coords[0];
                const double ay = atom.coords[1];
                const double az = atom.coords[2];

                for (std::size_t b = 0; b < max_positions.size(); ++b) {

                    const double bx = lo_x + d * max_positions[b].x;
                    const double by = lo_y + d * max_positions[b].y;
                    const double bz = lo_z + d * max_positions[b].z;

                    const double dx = ax - bx;
                    const double dy = ay - by;
                    const double dz = az - bz;

                    const double t = std::sqrt(dx * dx + dy * dy + dz * dz);

                    if (t < 2 * d)
                        m_atomic_populations(a) = densities[b];
                }
            }
        }

        double BaderAnalysis::density(
            const arma::mat& P,
            const boost::multi_array<double, 2>& ao_values_buf)
        {
            double rho = 0;

            for (std::size_t i = 0; i < m_bs_info.m_no_shells; ++i) {
                for (std::size_t j = 0; j <= i; ++j) {

                    for (std::size_t k = 0; k < m_bs_info.m_shell_sizes[i];
                         ++k) {

                        const std::size_t c1 =
                            m_bs_info.m_first_contraction_in_shell[i] + k;

                        const std::size_t n =
                            (i == j) ? k + 1 : m_bs_info.m_shell_sizes[j];

                        for (std::size_t l = 0; l < n; ++l) {

                            const std::size_t c2 =
                                m_bs_info.m_first_contraction_in_shell[j] + l;

                            const double s =
                                ao_values_buf[i][k] * ao_values_buf[j][l];

                            // avoid double-counting diagonal elements
                            const double f = c1 == c2 ? 1 : 2;

                            rho += f * P(c1, c2) * s;
                        }
                    }
                }
            }

            if (rho < 0)
                rho = 0;

            return rho;
        }

        void BaderAnalysis::assign(
            const boost::multi_array<double, 3>& cube,
            boost::multi_array<unsigned, 3>& cell_assignements)
        {
            const std::size_t nx = cube.shape()[0];
            const std::size_t ny = cube.shape()[1];
            const std::size_t nz = cube.shape()[2];

            for (std::size_t i = 0; i < nx; ++i) {
                for (std::size_t j = 0; j < ny; ++j) {
                    for (std::size_t k = 0; k < nz; ++k) {
                        cell_assignements[i][j][k] = 0;
                    }
                }
            }

            unsigned current_basin = 1;

            for (std::size_t i = 0; i < nx; ++i) {
                for (std::size_t j = 0; j < ny; ++j) {
                    for (std::size_t k = 0; k < nz; ++k) {
                        // if this cell is already assigned, go straight to the
                        // next one
                        if (cell_assignements[i][j][k] != 0)
                            continue;

                        std::stack<Position> backtrace;

                        std::size_t ci = i;
                        std::size_t cj = j;
                        std::size_t ck = k;

                        for (;;) {

                            // tentatively assign this cell to new basin
                            cell_assignements[ci][cj][ck] = current_basin;

                            // remeber the path we went through
                            const Position current_position = {
                                static_cast<unsigned>(ci),
                                static_cast<unsigned>(cj),
                                static_cast<unsigned>(ck)};
                            backtrace.push(current_position);

                            // find the right way to go
                            boost::optional<Direction> where_to_go =
                                the_right_direction(cube, current_position);

                            // if there's no path to follow, we just reached a
                            // not-yet-assigned maximum
                            if (!where_to_go) {
                                current_basin += 1;
                                break;
                            }

                            // coords of the next cell are...
                            std::size_t ni = ci + (*where_to_go).dx;
                            std::size_t nj = cj + (*where_to_go).dy;
                            std::size_t nk = ck + (*where_to_go).dz;

                            // check if the next cell is already assigned
                            if (cell_assignements[ni][nj][nk] != 0) {
                                // we've reached an already assigned cell -
                                // reassign all cells in the path to the same
                                // basin
                                unsigned basin = cell_assignements[ni][nj][nk];

                                while (!backtrace.empty()) {
                                    const Position& p = backtrace.top();
                                    cell_assignements[p.x][p.y][p.z] = basin;
                                    backtrace.pop();
                                }

                                break;
                            } else {
                                // the next cell is not yet assigned, so we
                                // continue the stroll
                                ci = ni;
                                cj = nj;
                                ck = nk;
                            }
                        }
                    }
                }
            }
        }
    }
}
