/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/wigner_matrices.hpp"

#include <cassert>

#if 1

namespace {
    arma::mat ucoef(unsigned l)
    {
        arma::mat u(2 * l + 1, 2 * l + 1, arma::fill::zeros);

        for (int m = -int(l); m <= int(l); ++m) {
            for (int n = -int(l); n <= int(l); ++n) {

                if (l == std::abs(n))
                    u(m + l, n + l) = std::sqrt(double((l + m) * (l - m)) /
                                                ((2 * l) * (2 * l - 1)));
                else if (l > std::abs(n))
                    u(m + l, n + l) = std::sqrt(double((l + m) * (l - m)) /
                                                ((l + n) * (l - n)));
            }
        }

        return u;
    }

    arma::mat vcoef(unsigned l)
    {
        arma::mat v(2 * l + 1, 2 * l + 1, arma::fill::zeros);

        for (int m = -int(l); m <= int(l); ++m) {

            const int m0 = m == 0 ? 1 : 0;

            for (int n = -int(l); n <= int(l); ++n) {

                if (l == std::abs(n))
                    v(m + l, n + l) =
                        0.5 *
                        std::sqrt(double((1 + m0) * (l + std::abs(m) - 1) *
                                         (l + std::abs(m))) /
                                  ((2 * l) * (2 * l - 1))) *
                        (1 - 2 * m0);
                else if (l > std::abs(n))
                    v(m + l, n + l) =
                        0.5 *
                        std::sqrt(double((1 + m0) * (l + std::abs(m) - 1) *
                                         (l + std::abs(m))) /
                                  ((l + n) * (l - n))) *
                        (1 - 2 * m0);
            }
        }
        return v;
    }

    arma::mat wcoef(unsigned l)
    {
        arma::mat w(2 * l + 1, 2 * l + 1, arma::fill::zeros);

        for (int m = -int(l); m <= int(l); ++m) {

            const int m0 = m == 0 ? 1 : 0;

            for (int n = -int(l); n <= int(l); ++n) {
                if (l == std::abs(n))
                    w(m + l, n + l) = -0.5 *
                                      std::sqrt(double((l - std::abs(m) - 1) *
                                                       (l - std::abs(m))) /
                                                ((2 * l) * (2 * l - 1))) *
                                      (1 - m0);
                else if (l > std::abs(n))
                    w(m + l, n + l) = -0.5 *
                                      std::sqrt(double((l - std::abs(m) - 1) *
                                                       (l - std::abs(m))) /
                                                ((l + n) * (l - n))) *
                                      (1 - m0);
            }
        }

        return w;
    }

    arma::mat polyfunc(const arma::mat& R1, const arma::mat& Rl, int l, int i)
    {
        assert(l > 1);

        const int X = l - 1;

        arma::mat A(2 * l + 1, 2 * l + 1, arma::fill::zeros);

        for (int m = -l + 1; m < l; ++m) {
            for (int n = -l; n <= l; ++n) {
                if (std::abs(n) < l)
                    A(l + m, l + n) = R1(i + 1, 1) * Rl(m + X, n + X);
                else if (n == l)
                    A(l + m, l + n) = R1(i + 1, 2) * Rl(m + X, l - 1 + X) -
                                      R1(i + 1, 0) * Rl(m + X, -l + 1 + X);
                else if (n == -l) {
                    A(l + m, l + n) = R1(i + 1, 2) * Rl(m + X, -l + 1 + X) +
                                      R1(i + 1, 0) * Rl(m + X, l - 1 + X);
                }
            }
        }

        return A;
    }

    arma::mat ufunc(const arma::mat& R1, const arma::mat& Rl, unsigned l)
    {
        return polyfunc(R1, Rl, l, 0);
    }

    arma::mat vfunc(const arma::mat& R1, const arma::mat& Rl, unsigned l)
    {
        arma::mat V(2 * l + 1, 2 * l + 1, arma::fill::zeros);

        const arma::mat A = polyfunc(R1, Rl, l, 1);
        const arma::mat B = polyfunc(R1, Rl, l, -1);

        for (int n = -int(l); n <= int(l); ++n) {
            V(l, l + n) = A(l + 1, l + n) + B(l - 1, l + n);
            for (int m = 1; m <= int(l); ++m) {
                const int m1 = m == 1 ? 1 : 0;
                V(l + m, l + n) = A(l + m - 1, l + n) * std::sqrt(1 + m1) -
                                  B(l - m + 1, l + n) * (1 - m1);
                V(l - m, l + n) = A(l - m + 1, l + n) * (1 - m1) +
                                  B(l + m - 1, l + n) * std::sqrt(1 + m1);
            }
        }
        return V;
    }

    arma::mat wfunc(const arma::mat& R1, const arma::mat& Rl, unsigned l)
    {
        arma::mat W(2 * l + 1, 2 * l + 1, arma::fill::zeros);

        const arma::mat A = polyfunc(R1, Rl, l, 1);
        const arma::mat B = polyfunc(R1, Rl, l, -1);

        for (int m = 1; m < int(l); ++m) {
            for (int n = -int(l); n <= int(l); ++n) {
                W(l + m, l + n) = A(l + m + 1, l + n) + B(l - m - 1, l + n);
                W(l - m, l + n) = A(l - m - 1, l + n) - B(l + m + 1, l + n);
            }
        }
        return W;
    }
}

namespace niedoida {
    namespace symmetry {
        std::vector<arma::mat> wigner_matrices(unsigned max_l,
                                               const arma::mat& R1)
        {
            std::vector<arma::mat> R;

            arma::mat R1r = {{R1(1, 1), R1(1, 2), R1(1, 0)},
                             {R1(2, 1), R1(2, 2), R1(2, 0)},
                             {R1(0, 1), R1(0, 2), R1(0, 0)}};

            const bool improper = det(R1) < 0;
            if (improper)
                R1r = -R1r;

            R.push_back(arma::eye<arma::mat>(1, 1));

            if (max_l >= 1)
                R.push_back(R1r);

            for (unsigned l = 2; l <= max_l; ++l) {
                const arma::mat u = ucoef(l);
                const arma::mat v = vcoef(l);
                const arma::mat w = wcoef(l);

                const arma::mat U = ufunc(R1r, R.back(), l);
                const arma::mat V = vfunc(R1r, R.back(), l);
                const arma::mat W = wfunc(R1r, R.back(), l);

                R.push_back((u % U + v % V + w % W));
            }

            if (R.size() > 1)
                R[1] = R1;

            if (improper)
                for (unsigned l = 3; l <= max_l; l += 2)
                    R[l] = -R[l];

            return R;
        }
    }
}

#else // legacy implementation, obsolete
#    include "symmetry_kit/symmetry_utils.hpp"
#    include <boost/optional.hpp>

// For details of the implementation see article
// M.A. Blanco et. al., JMS 419 (1997) 19-27
// called `ref.' below

namespace {
    // `d' matrices from implementation in ref.

    template <class T> class d_matrix {
        int l;
        arma::Col<T> storage;
        // storage order:
        // (0,0) (1,-1) (1,0) (1,1) (2,-2) (2,-1) (2,0) (2,1) (2,2) ...
        // all other element are taken from symmetry relations
    public:
        d_matrix(unsigned angular) :
            l(angular),
            storage(arma::zeros<arma::vec>((l + 1) * (l + 1)))
        {
        }

        T operator()(int m, int n) const
        {
            // one can read all elements
            assert(m >= -l && m <= l && n >= -l && n <= l);
            bool inv = false;
            if (std::abs(n) > std::abs(m)) {
                std::swap(m, n);
                inv = !inv;
            }
            if (m < 0) {
                m = -m;
                n = -n;
                inv = !inv;
            }
            return (inv && (m + n) % 2) ? T(-storage(n + m * (m + 1)))
                                        : storage(n + m * (m + 1));
        }

        void set(int m, int n, T x)
        {
            // during writing one has access only to
            // elements in the lower from four triangles
            // of d-matrix!
            assert(m >= 0 && m <= l && n >= -m && n <= m);
            storage(n + m * (m + 1)) = x;
        }
    };

    // Functor for evaluating phi(a, m)
    // (see ref. -- definition (8))

    class phi_func {
        arma::vec _cos, _sin;

    public:
        phi_func(double cos_a, double sin_a, unsigned l)
        {
            _cos.set_size(std::max(l, 1u));
            _sin.set_size(std::max(l, 1u));
            _cos(0) = cos_a;
            _sin(0) = sin_a;
            for (int m = 0; m < int(l) - 1; ++m) {
                _cos(m + 1) = _cos(m) * _cos(0) - _sin(m) * _sin(0);
                _sin(m + 1) = _sin(m) * _cos(0) + _sin(0) * _cos(m);
            }
            _cos *= std::sqrt(2.0);
            _sin *= std::sqrt(2.0);
        }

        double operator()(int m) const
        {
            if (m == 0)
                return 1;
            else if (m > 0)
                return _cos(m - 1);
            else
                return _sin(-m - 1);
        }
    };

    // `plus-minus' under the condition

    template <class T> T pm(bool cond, T x) { return cond ? x : -x; }

    // `minus-plus' under the condition

    template <class T> T mp(bool cond, T x) { return cond ? -x : x; }
}

namespace niedoida {
    namespace symmetry {
#    pragma GCC diagnostic push
#    pragma GCC diagnostic ignored "-Wmaybe-uninitialized"
        std::vector<arma::mat> wigner_matrices(unsigned max_l,
                                               const arma::mat& R1)
        {
            //----------------------------------------------------
            // Preliminaries
            //----------------------------------------------------
            static const double SIN_TRESH = 1e-3;

            arma::mat R = R1;
            assert(R.n_cols == R.n_rows && R.n_cols == 3);

            // If we've improper R invert it (to have proper rotation)
            // and find D matrices for inverted R.
            // At the end, the generated D matrices'll be inverted
            // in such case.
            const bool inverted = det(R) < 0;
            if (inverted)
                R = -R;

            // make all trygonometry ...
            double cos_a, cos_b, cos_g, sin_a, sin_b, sin_g;
            cos_b = R(2, 2);
            const double sq_sin_b_2 = 0.5 * (1 - cos_b);
            const double sq_cos_b_2 = 0.5 * (1 + cos_b);
            const double sq_sin_b = 1 - cos_b * cos_b;
            boost::optional<double> tan_b_2;

            if (std::fabs(sq_sin_b) < SIN_TRESH) {
                sin_b = 0;
                cos_a = R(1, 1);
                sin_a = -R(1, 0);
                cos_g = 1;
                sin_g = 0;
                // if cos(b)=-1 => b=PI, so tan(b/2) is not def.
                // and we won't use it
                if (cos_b > 0)
                    tan_b_2 = std::sqrt(sq_sin_b_2 / sq_cos_b_2);
            } else {
                sin_b = std::sqrt(sq_sin_b);
                cos_a = R(2, 0) / sin_b;
                sin_a = R(2, 1) / sin_b;
                cos_g = -R(0, 2) / sin_b;
                sin_g = R(1, 2) / sin_b;
                tan_b_2 = std::sqrt(sq_sin_b_2 / sq_cos_b_2);
            }
            const phi_func phi_a(cos_a, sin_a, max_l),
                phi_g(cos_g, sin_g, max_l);

            //---------------------------------------------------
            // Generate d matrices (see ref) for l = 0 ... l_max
            //---------------------------------------------------
            std::vector<d_matrix<double>> d;

            // l=0
            d.push_back(d_matrix<double>(0));
            d[0].set(0, 0, 1.0);

            if (max_l > 0) {
                // l=1
                d.push_back(d_matrix<double>(1));
                d[1].set(0, 0, cos_b);
                d[1].set(1, -1, sq_sin_b_2);
                d[1].set(1, 0, -sin_b / std::sqrt(2.0));
                d[1].set(1, 1, sq_cos_b_2);
            }

            // l=2, 3, ...
            for (int l = 2; l <= int(max_l); ++l) {
                d.push_back(d_matrix<double>(l));
                // obtain d[l](m, n) for m = 0 ... l - 2
                // and n = -m ... m using (64) in ref.
                for (int m = 0; m < l - 1; ++m)
                    for (int n = -m; n <= m; ++n) {
                        const double c1 =
                            l * (2 * l - 1) /
                            std::sqrt(static_cast<double>((l * l - m * m) *
                                                          (l * l - n * n)));
                        const double c2 = (cos_b - static_cast<double>(m * n) /
                                                       (l * (l - 1))) *
                                          d[l - 1](m, n);
                        const double c3 = std::sqrt(static_cast<double>(
                                              ((l - 1) * (l - 1) - m * m) *
                                              ((l - 1) * (l - 1) - n * n))) /
                                          ((l - 1) * (2 * l - 1)) *
                                          d[l - 2](m, n);
                        d[l].set(m, n, c1 * (c2 - c3));
                    }
                if (tan_b_2) {
                    // obtain d[l](l, l) from (65)
                    d[l].set(l, l, sq_cos_b_2 * d[l - 1](l - 1, l - 1));
                    // obtain d[l](l, m) for m = l-1, ..., -l from (67)
                    for (int m = l; m > -l; --m)
                        d[l].set(l,
                                 m - 1,
                                 -std::sqrt(static_cast<double>(l + m) /
                                            (l - m + 1)) *
                                     *tan_b_2 * d[l](l, m));
                    // obtain d[l](l-1,l-1) from (66)
                    d[l].set(l - 1,
                             l - 1,
                             (l * cos_b - l + 1) * d[l - 1](l - 1, l - 1));
                    // obtain d[l](l-1, m) for m = l-2, ..., -l+1 from (68)
                    for (int m = l - 1; m > -l + 1; --m)
                        d[l].set(l - 1,
                                 m - 1,
                                 -(l * cos_b - m + 1) / (l * cos_b - m) *
                                     std::sqrt(static_cast<double>(l + m) /
                                               (l - m + 1)) *
                                     *tan_b_2 * d[l](l - 1, m));
                } else {
                    // in case tan_b_2 is not defined all d[l](l, m) and
                    // d[l](l-1,m) are zero except of d[l](l, -l) and
                    // d[l](l-1,1-l) which equal 1, -1
                    d[l].set(l, -l, 1);
                    for (int m = -l + 1; m <= l; ++m)
                        d[l].set(l, m, 0);
                    d[l].set(
                        l - 1, -l + 1, -1); // There is error in ref here !!!
                    for (int m = -l + 2; m <= l - 1; ++m)
                        d[l].set(l - 1, m, 0);
                }
            }

            //--------------------------------------------------
            // Obtain Wigner matrices D[l](i,j) using d[l](m,n)
            // i=m+l, j=n+l
            //--------------------------------------------------
            std::vector<arma::mat> D; /* D[l](i,j) */
            for (int l = 0; l <= int(max_l); ++l) {
                D.push_back(arma::mat(2 * l + 1, 2 * l + 1));
                for (unsigned i = 0; i < D[l].n_cols; ++i) {
                    for (unsigned j = 0; j < D[l].n_rows; ++j) {
                        int m = i - l, n = j - l;
                        const double d1 = d[l](std::abs(n), std::abs(m));
                        const double d2 =
                            mp(m % 2, d[l](std::abs(m), -std::abs(n)));
                        D[l](i, j) = mp(inverted && l % 2,
                                        pm(n >= 0, 0.5 * phi_g(n)) * phi_a(m) *
                                                (d1 + d2) -
                                            pm(m >= 0, 0.5 * phi_a(-m)) *
                                                phi_g(-n) * (d1 - d2));
                    }
                }
            }

            // Permuatate D[1] elements to obey usuall convention: {px, py, pz}.
            // In fact, assuming this order D[1]=R, so we can simply
            // overwrite it
            if (max_l > 0)
                D[1] = mp(inverted, R);

            return D;
        }
#    pragma GCC diagnostic pop
    }
}

#endif
