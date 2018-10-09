/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "grid_kit/r_adaptive_product_grid.hpp"

#include <boost/lambda/algorithm.hpp>
#include <boost/lambda/bind.hpp>
#include <boost/lambda/lambda.hpp>
#include <boost/math/constants/constants.hpp>
#include <boost/rational.hpp>

#include <algorithm>
#include <cmath>
#include <limits>

#include "core_kit/core_utils.hpp"
#include "core_kit/promolecule.hpp"

#include <boost/function.hpp>
#include <boost/tuple/tuple.hpp>
#include <boost/utility.hpp>

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

    class Transformation {
    public:
        virtual ~Transformation() {}

        virtual double coord(double x) const = 0;
        virtual double weight(double x) const = 0;
    };

    class IdentityTransformation : public Transformation {
    public:
        double coord(double x) const { return x; }
        double weight(double) const { return 1; }
    };

    class LogmTransformation : public Transformation {
    public:
        LogmTransformation(unsigned no_electrons);

        double coord(double x) const;
        double weight(double x) const;

    private:
        double _alpha;
        double _m;
        bool _hyperbolic;
    };

    LogmTransformation::LogmTransformation(unsigned no_electrons)
    {
        _hyperbolic = false;

        switch (no_electrons) {
        case 1: // H
            _alpha = 5.0;
            _m = 1.7;
            _hyperbolic = true;
            break;
        case 2: // He
            _alpha = 3.0;
            _m = 1.9;
            break;
        case 3: // Li
            _alpha = 3.1;
            _m = 2.0;
            break;
        case 4: // Be
            _alpha = 3.0;
            _m = 2.2;
            break;
        case 5: // B
            _alpha = 5.0;
            _m = 2.4;
            _hyperbolic = true;
            break;
        case 6: // C
            _alpha = 6.0;
            _m = 2.4;
            _hyperbolic = true;
            break;
        case 7: // N
            _alpha = 4.0;
            _m = 2.6;
            _hyperbolic = true;
            break;
        case 8: // O
            _alpha = 5.0;
            _m = 2.7;
            _hyperbolic = true;
            break;
        case 9: // F
            _alpha = 6.0;
            _m = 2.8;
            _hyperbolic = true;
            break;
        case 10: // Ne
            _alpha = 5.0;
            _m = 2.9;
            _hyperbolic = true;
            break;
        default: // others - unoptimized
            _alpha = 5.0;
            _m = 2.9;
            _hyperbolic = true;
        }
    }

    inline double LogmTransformation::coord(double x) const
    {
        if (_hyperbolic)
            return _alpha * std::pow(atanh(x), _m);
        else
            return _alpha * std::pow((-std::log(x)), _m);
    }

    inline double LogmTransformation::weight(double x) const
    {
        if (_hyperbolic)
            return _alpha * _m * std::pow(atanh(x), _m - 1.0) / (1 - x * x);
        else
            return _alpha * _m * std::pow((-std::log(x)), _m - 1.0) / x;
    }

    inline unsigned gcd(unsigned a, unsigned b)
    {
        do {
            const unsigned t = b;
            b = a % b;
            a = t;
        } while (b);

        return a;
    }

    typedef std::map<boost::rational<unsigned>, std::pair<double, unsigned>>
        Cache;

    static const std::size_t sizes[] = {7,
                                        9,
                                        11,
                                        15,
                                        19,
                                        23,
                                        31,
                                        39,
                                        47,
                                        63,
                                        79,
                                        95,
                                        127,
                                        159,
                                        191,
                                        255,
                                        319,
                                        383};

    static const std::size_t no_sizes = sizeof(sizes) / sizeof(sizes[0]);

    boost::tuple<double,
                 double,
                 std::vector<boost::tuple<double, double, unsigned>>,
                 std::size_t>
    simple_adaptive_gc(double x1,
                       double x2,
                       boost::function<std::pair<double, unsigned>(double)> fun,
                       double eps,
                       unsigned max_n,
                       const Transformation& t = IdentityTransformation())
    {
        if (x2 < x1)
            std::swap(x1, x2);

        unsigned m = 0;
        unsigned mm = 0;

        const double d = (x2 - x1) / 2;

        Cache cache;

        double prev_q;
        double q = 0;

        std::vector<boost::tuple<double, double, unsigned>> quadrature;

        for (unsigned n = 0; n < no_sizes; ++n) {

            if (sizes[n] > max_n)
                break;

            prev_q = q;

            const double s = boost::math::double_constants::pi / (sizes[n] + 1);

            q = 0;
            quadrature.clear();
            for (unsigned i = 0; i < sizes[n]; ++i) {
                const double x = t.coord(x1 + d * (1 + std::cos((i + 1) * s)));
                const double w =
                    t.weight(x1 + d * (1 + std::cos((i + 1) * s))) * d * s *
                    sin((i + 1) * s);

                std::pair<double, unsigned> v;

                const boost::rational<unsigned> f(i + 1, sizes[n] + 1);
                const Cache::const_iterator j = cache.find(f);

                if (j != cache.end()) {
                    v = (*j).second;
                    mm += 1;
                } else {
                    v = fun(x);
                    cache[f] = v;

                    m += 1;
                }

                quadrature.push_back(boost::make_tuple(x, w, v.second));

                q += w * v.first;
            }

            std::cout << n << ", " << q << ", " << prev_q << ", " << q - prev_q
                      << std::endl;

            if (n > 0 && std::abs(q - prev_q) < eps) {
                break;
            }
        }

        //        Log::instance().write("radial grid size",
        //        int(quadrature.size())); Log::instance().write("q", q);
        //        Log::instance().write("requested accuracy", -std::log10(eps));
        //        Log::instance().write("achieved accuracy",
        //        -std::log10(std::abs(q - prev_q))); Log::instance().write("no
        //        funcalls", int(m)); Log::instance().write("no cached",
        //        int(mm));

        return boost::make_tuple(q, std::abs(q - prev_q), quadrature, m);
    }

    boost::tuple<double,
                 double,
                 std::vector<boost::tuple<double, double, unsigned>>,
                 std::size_t>
    simple_adaptive_emcl(
        double x1,
        double x2,
        boost::function<std::pair<double, unsigned>(double)> fun,
        double eps,
        unsigned max_n,
        const Transformation& t = IdentityTransformation())
    {
        if (x2 < x1)
            std::swap(x1, x2);

        unsigned m = 0;
        unsigned mm = 0;

        const double d = (x2 - x1) / 2;

        Cache cache;

        double prev_q;
        double q = 0;

        std::vector<boost::tuple<double, double, unsigned>> quadrature;

        for (unsigned n = 0; n < no_sizes; ++n) {

            unsigned s = sizes[n] + 1;

            if (s > max_n)
                break;

            prev_q = q;

            std::cout << "n: " << n << ": " << std::endl;

            q = 0;
            quadrature.clear();
            for (unsigned i = 1; i < s; ++i) {
                const double qi =
                    static_cast<double>(i) / static_cast<double>(s);
                const double x = t.coord(qi);
                const double w = t.weight(qi) / s;

                std::cout << "i: " << i << ", " << x << ", " << w << std::endl;

                std::pair<double, unsigned> v;

                const boost::rational<unsigned> f(i + 1, s);
                const Cache::const_iterator j = cache.find(f);

                if (j != cache.end()) {
                    v = (*j).second;
                    mm += 1;
                } else {
                    v = fun(x);
                    cache[f] = v;

                    m += 1;
                }

                quadrature.push_back(boost::make_tuple(x, w, v.second));

                q += w * v.first;
            }

            //            for (std::size_t i = 1; i < s; ++i) {
            //                const double _alpha = 1;
            //                const int _m = 2;
            //                const double qi = static_cast<double>(i) /
            //                static_cast<double>(s); std::cout << "i: " << i <<
            //                ", "
            //                          << _alpha * std::pow(qi, _m) *
            //                          std::pow(1 - qi, -_m) << ", "
            //                          << 1.0 / s * _alpha * _m * std::pow(qi,
            //                          _m - 1) * std::pow(1 - qi, -_m - 1) <<
            //                          std::endl;
            //            }

            //            std::cout << n << ", " << q << ", " << prev_q << ", "
            //            << q - prev_q << std::endl;

            if (n > 0 && std::abs(q - prev_q) < eps) {
                break;
            }
        }

        //        Log::instance().write("radial grid size",
        //        int(quadrature.size())); Log::instance().write("q", q);
        //        Log::instance().write("requested accuracy", -std::log10(eps));
        //        Log::instance().write("achieved accuracy",
        //        -std::log10(std::abs(q - prev_q))); Log::instance().write("no
        //        funcalls", int(m)); Log::instance().write("no cached",
        //        int(mm));

        return boost::make_tuple(q, std::abs(q - prev_q), quadrature, m);
    }
}

namespace niedoida {
    namespace grid {
        RAdaptiveProductGrid::RAdaptiveProductGrid(
            std::shared_ptr<const core::System> system,
            std::unique_ptr<PartitionFunction> pf,
            std::unique_ptr<SphericalGrid> sg,
            std::unique_ptr<core::AOValueEngine> ao_value_engine,
            double accuracy,
            std::size_t max_radial_grid_size,
            std::size_t max_spherical_grid_size) :
            AtomicGrid(system, std::move(pf)),
            GridIntegralImplementation(system, std::move(ao_value_engine)),
            _distance_angular_sizes(system->atoms.size()),
            _system(system),
            _sg(std::move(sg)),
            _accuracy(accuracy),
            _angular_accuracy(accuracy),
            _max_radial_grid_size(max_radial_grid_size),
            _max_spherical_grid_size(max_spherical_grid_size),
            _density_matrix(
                (system->promolecule->average_density_matrix(core::SPIN_ALPHA) +
                 system->promolecule->average_density_matrix(core::SPIN_BETA)) /
                2),
            _overlap_buf(new double[(m_bs_info.m_no_contractions *
                                     (m_bs_info.m_no_contractions + 1)) /
                                    2]),
            _prev_atom(std::size_t(-1))
        {
        }

        double ffff(double x) { return 5 * std::exp(-2 * x) * x; }

        class TransformedFunction {
        public:
            TransformedFunction(boost::function<double(double)> f,
                                const Transformation& t);

            double operator()(double x) const
            {
                return _t.weight(x) * _f(_t.coord(x));
            }

        private:
            boost::function<double(double)> _f;
            const Transformation& _t;
        };

        std::vector<std::shared_ptr<core::Grid::Block>>
        RAdaptiveProductGrid::make_atomic_grid(
            std::size_t a, const PartitionFunction& pf) const
        {
            _curr_atom = a;
            _pf = &pf;

            double Q;
            double total;
            std::vector<boost::tuple<double, double, unsigned>> q;
            unsigned nf;

            boost::function<std::pair<double, unsigned>(double)> f;

            f = std::bind1st(
                std::mem_fun(&RAdaptiveProductGrid::adapt_spherical_grid),
                this);

            const unsigned no_electrons =
                _system->atoms[a]->isotope->element->atomic_number;

            LogmTransformation lmt(no_electrons);

            boost::tie(Q, total, q, nf) = simple_adaptive_gc(
                0, 1, f, _accuracy, _max_radial_grid_size, lmt);

            std::vector<std::shared_ptr<core::Grid::Block>> grid;

            for (std::size_t i = 0; i < q.size(); ++i) {
                double r, r_w;
                unsigned n;
                boost::tie(r, r_w, n) = q[i];

                std::shared_ptr<core::Grid::Block> block =
                    (*_sg)(_curr_atom, r, n, _angular_accuracy / 1e3);
                block->weights *= r * r * r_w;
                grid.push_back(block);
            }

            return grid;
        }

        std::pair<double, unsigned>
        RAdaptiveProductGrid::adapt_spherical_grid(double r) const
        {
            const double r2 = r * r;

            double prev_rho = 0;
            double next_rho = 0;

            const std::size_t n = adjust_angular_size(_max_spherical_grid_size,
                                                      _sg->allowed_sizes());

            unsigned n0 = 0;

            DistanceAngularSizes& das = _distance_angular_sizes[_curr_atom];

            double mind = 1e5;
            std::size_t mini = 0;
            for (std::size_t i = 0; i < das.size(); ++i) {
                const double d = std::abs(das[i].first - r);
                if (d < mind) {
                    mind = d;
                    mini = i;
                }
            }

            if (mind < 1)
                n0 = das[mini].second / 2;

            for (unsigned i = n0; i < n; ++i) {
                std::shared_ptr<core::Grid::Block> block =
                    (*_sg)(_curr_atom, r, i, _angular_accuracy / 1e3);
                const std::size_t bs = block->size;

                (*_pf)(_curr_atom,
                       bs,
                       block->coords.memptr(),
                       block->weights.memptr());

                block->weights *= r2;

                next_rho = _density(*block);
                const double delta = std::abs(next_rho - prev_rho);
                if (delta < _angular_accuracy) {
                    return std::make_pair(next_rho, i > 0 ? i - 1 : i);
                }
                prev_rho = next_rho;
            }

            das.push_back(std::make_pair(r, n));

            return std::make_pair(next_rho, n);
        }

        double RAdaptiveProductGrid::_density(const Grid::Block& block) const
        {
            double result = 0;

            std::shared_ptr<const BlockAOData> data =
                block_ao_data(block, _angular_accuracy / 1e3, 0);

            // in each point of the block...
            for (std::size_t p = 0; p < block.size; ++p) {

                std::size_t n = data->point_ao_data[p].no_contractions;
                const double* const v = data->point_ao_data[p].values;
                double* s = _overlap_buf.get();

                for (std::size_t i = 0; i < n; ++i) {
                    //!!!
                    // ola::scal(i + 1, *(v + i), v, s);
                    s += i + 1;
                }

                s = _overlap_buf.get();

                const std::size_t* indices = data->point_ao_data[p].indices;

                result +=
                    block.weights[p] * density(_density_matrix, n, s, indices);
            }

            return result;
        }
    }
}
