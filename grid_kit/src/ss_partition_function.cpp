/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "grid_kit/partition_function.hpp"

#include <cmath>
#include <cstring>
#include <limits>

#include "io_kit/logger.hpp"
#include "misc_kit/misc_utils.hpp"

namespace {

    const static double a = 0.64;

    inline double z(const double mu)
    {
        const double mu_ = mu / a;
        const double mu_2 = mu_ * mu_;
        return mu_ * (35.0 - mu_2 * (35.0 - mu_2 * (21.0 - 5.0 * mu_2))) / 16.0;
    }

    inline double diff_norm(const double* NIEDOIDA_RESTRICT const p,
                            const double* NIEDOIDA_RESTRICT const q)
    {
        const double dx = p[0] - q[0];
        const double dy = p[1] - q[1];
        const double dz = p[2] - q[2];

        return std::sqrt(dx * dx + dy * dy + dz * dz);
    }
}

namespace niedoida {
    namespace grid {
        SSPartitionFunction::SSPartitionFunction(
            std::shared_ptr<const core::System> system) :
            _n(system->atoms.size()),
            _coords(new double[3 * _n]),
            _inv_distances(new double[_n * _n]),
            _neighbours(_n, boost::numeric::ublas::permutation_matrix<>(_n))
        {
            double* const coords = _coords.get();

            for (std::size_t i = 0; i < _n; ++i)
                std::memcpy(coords + 3 * i,
                            system->atoms[i]->coords.memptr(),
                            3 * sizeof(double));

            arma::mat distances(_n, _n, arma::fill::zeros);

            double* const inv_distances = _inv_distances.get();

            for (std::size_t i = 0; i < _n; ++i) {
                for (std::size_t j = 0; j < i; ++j) {
                    const double d = diff_norm(coords + 3 * i, coords + 3 * j);
                    distances(i, j) = d;
                    distances(j, i) = d;
                    inv_distances[i * _n + j] = 1 / d;
                    inv_distances[j * _n + i] = 1 / d;
                }
            }

            for (std::size_t i = 0; i < _n; ++i) {
                arma::colvec v(distances.col(i));
                v(i) = std::numeric_limits<double>::max();

                boost::numeric::ublas::permutation_matrix<>& pivot =
                    _neighbours[i];

                std::stable_sort(pivot.begin(),
                                 pivot.end(),
                                 misc::indirect_less<arma::colvec>(v));
            }
        }

        inline double SSPartitionFunction::w(const std::size_t k,
                                             const double* rg,
                                             const std::size_t atom,
                                             const double rag) const
        {
            const double rkg = diff_norm(rg, _coords.get() + 3 * k);

            const boost::numeric::ublas::permutation_matrix<>& pivot =
                _neighbours[k];

            if (k != atom)
                if ((rkg - rag) * _inv_distances[k * _n + atom] >= a)
                    return 0;

            if (rkg * _inv_distances[k * _n + pivot(0)] < 0.5 * (1 - a))
                return 1;

            double result = 1;
            for (std::size_t j = 0; j + 1 < _n; ++j) {

                const std::size_t i = pivot(j);

                const double rig = diff_norm(rg, _coords.get() + 3 * i);

                const double mu = (rkg - rig) * _inv_distances[k * _n + i];

                if (mu >= a)
                    return 0;

                if (mu > -a)
                    result *= 0.5 * (1 - z(mu));
            }

            return result;
        }

        void SSPartitionFunction::operator()(std::size_t atom,
                                             std::size_t n,
                                             const double* coords,
                                             double* weights) const
        {
            for (std::size_t p = 0; p < n; ++p) {

                const double ratom =
                    diff_norm(coords, _coords.get() + 3 * atom);

                const boost::numeric::ublas::permutation_matrix<>& pivot =
                    _neighbours[atom];

                if (_n != 1 && ratom * _inv_distances[atom * _n + pivot(0)] >=
                                   0.5 * (1 - a)) {

                    const double wa = w(atom, coords, atom, ratom);

                    if (wa > std::numeric_limits<double>::epsilon()) {

                        double norm = wa;
                        for (std::size_t i = 0; i + 1 < _n; ++i) {
                            const double t = w(pivot(i), coords, atom, ratom);
                            norm += t;
                        }

                        *weights *= wa / norm;

                    } else {

                        *weights = 0;
                    }
                }

                coords += 3;
                weights += 1;
            }
        }
    }
}
