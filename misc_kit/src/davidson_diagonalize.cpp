/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "misc_kit/blackbox.hpp"

#include "io_kit/log.hpp"

namespace niedoida {
    namespace misc {
        unsigned
        davidson_liu_diagonalize(std::function<arma::vec(const arma::vec&)> ax,
                                 const arma::vec& a_diagonal,
                                 const arma::mat& v_0,
                                 unsigned k_min,
                                 unsigned k_max,
                                 arma::vec& lambda,
                                 arma::mat& X,
                                 unsigned iter_max,
                                 double eps)
        {
            io::Log::Section dld_section("davidson-liu diagonalization");
            // FIXME: this should be parametrized somehow
            unsigned l_min = 2 * k_max;
            unsigned l_max = 4 * k_max;

            const std::size_t n = v_0.n_rows;
            std::size_t l = v_0.n_cols;

            assert(k_max <= n);
            assert(k_max <= l);

            arma::mat V = v_0;

            arma::mat W(n, l);

            arma::mat M;
            arma::vec theta;
            arma::mat S;

            unsigned l_old = 0;
            unsigned k_actual = 0;
            unsigned iter = 0;

            while (iter < iter_max) {

                io::Log::instance().write(
                    io::Logger::NORMAL, "iteration", iter);

                for (unsigned i = l_old; i < l; ++i)
                    W.col(i) = ax(V.col(i));

                M.resize(l, l);

                for (unsigned i = l_old; i < l; ++i)
                    for (unsigned j = 0; j <= i; ++j) {
                        M(j, i) = dot(V.col(j), W.col(i));
                        M(i, j) = M(j, i);
                    }

                // FIXME: solve only k_max lowest eigenpair
                eig_sym(theta, S, M);

                arma::mat u(n, k_max);
                arma::mat uA(n, k_max);
                arma::mat r(n, k_max);

                for (unsigned k = 0; k < k_max; ++k) {
                    u.col(k) = V * S.col(k);
                    uA.col(k) = W * S.col(k);
                    r.col(k) = uA.col(k) - theta(k) * u.col(k);
                }

                arma::vec r2(k_max);
                for (unsigned k = 0; k < k_max; ++k)
                    r2(k) = norm(r.col(k), 2);

                io::Log::instance().write(io::Logger::NORMAL,
                                          "eigenvalues",
                                          arma::vec(theta.head(k_max)));
                io::Log::instance().write(
                    io::Logger::NORMAL, "residuum_norms", r2);

                k_actual = 0;
                for (unsigned k = 0; k < k_max; ++k)
                    if (norm(r.col(k), 2) < eps)
                        ++k_actual;
                    else
                        break;

                if ((k_actual >= k_min) /*|| (l == n)*/)
                    break;

                if (l >= l_max) {

                    M = arma::zeros<arma::mat>(l_min, l_min);

                    for (unsigned i = 0; i < l_min; ++i)
                        M(i, i) = theta(i);

                    arma::mat new_V(n, l_min);
                    arma::mat new_W(n, l_min);

                    for (unsigned i = 0; i < k_max; ++i) {
                        new_V.col(i) = u.col(i);
                        new_W.col(i) = uA.col(i);
                    }
                    for (unsigned i = k_max; i < l_min; ++i) {
                        new_V.col(i) = V * S.col(i);
                        new_W.col(i) = W * S.col(i);
                    }

                    swap(new_V, V);
                    swap(new_W, W);

                    l = l_min;
                }

                l_old = l;

                arma::mat delta(n, k_max);
                // FIXME: this should be parametrized somehow
                double cutof = std::numeric_limits<double>::epsilon();
                for (unsigned i = 0; i < n; ++i)
                    for (unsigned k = 0; k < k_max; ++k) {
                        double denominator = a_diagonal(i) - theta(k);
                        if (std::abs(denominator) > cutof)
                            delta(i, k) = -r(i, k) / denominator;
                        else
                            delta(i, k) = 0;
                    }

                for (unsigned k = 0; k < k_max; ++k) {
                    double delta_norm = norm(delta.col(k), 2);
                    if (delta_norm > std::numeric_limits<double>::epsilon())
                        delta.col(k) /= delta_norm;
                    else
                        delta.col(k) = arma::zeros<arma::vec>(n);
                }

                if (iter != iter_max - 1) {

                    bool sth_is_added = false;
                    for (unsigned k = 0; k < k_max; ++k) {

                        double delta_norm = norm(delta.col(k), 2);
                        double delta_norm_old;

                        do {

                            delta_norm_old = delta_norm;
                            for (unsigned i = 0; i < l; ++i)
                                delta.col(k) -=
                                    dot(V.col(i), delta.col(k)) * V.col(i);

                            delta_norm = norm(delta.col(k), 2);

                            // FIXME: this should be parametrized somehow
                        } while (delta_norm_old > 3 * delta_norm);

                        // FIXME: this should be parametrized somehow
                        if ((delta_norm > 1e-3) ||
                            ((!sth_is_added) &&
                             (delta_norm >
                              std::numeric_limits<double>::epsilon()))) {

                            sth_is_added = true;

                            V.resize(n, l + 1);
                            W.resize(n, l + 1);

                            V.col(l) = delta.col(k) / delta_norm;
                            l += 1;
                        }

                        if (!sth_is_added)
                            break;
                    }
                }
                ++iter;
            }

            lambda = theta.head(k_max);

            // coefficients for all roots
            X = arma::zeros<arma::mat>(n, k_max);
            for (unsigned k = 0; k < k_max; ++k)
                for (unsigned i = 0; i < l; ++i)
                    X.col(k) += S(i, k) * V.col(i);

            return k_actual < k_min ? k_actual : k_min;
        }

        unsigned
        davidson_liu_diagonalize(std::function<arma::mat(const arma::mat&)> ax,
                                 const arma::vec& a_diagonal,
                                 const arma::mat& v_0,
                                 unsigned k_min,
                                 unsigned k_max,
                                 arma::vec& lambda,
                                 arma::mat& X,
                                 unsigned iter_max,
                                 double eps)
        {
            io::Log::Section dld_section("davidson-liu diagonalization");
            // FIXME: this should be parametrized somehow
            unsigned l_min = 2 * k_max;
            unsigned l_max = 4 * k_max;

            const std::size_t n = v_0.n_rows;
            std::size_t l = v_0.n_cols;

            assert(k_max <= n);
            assert(k_max <= l);

            arma::mat V = v_0;

            arma::mat W(n, l);

            arma::mat M;
            arma::vec theta;
            arma::mat S;

            unsigned l_old = 0;
            unsigned k_actual = 0;
            unsigned iter = 0;

            while (iter < iter_max) {

                io::Log::instance().write(
                    io::Logger::NORMAL, "iteration", iter);

                W.cols(l_old, l - 1) = ax(V.cols(l_old, l - 1));

                M.resize(l, l);

                for (unsigned i = l_old; i < l; ++i)
                    for (unsigned j = 0; j <= i; ++j) {
                        M(j, i) = dot(V.col(j), W.col(i));
                        M(i, j) = M(j, i);
                    }

                // FIXME: solve only k_max lowest eigenpair
                eig_sym(theta, S, M);

                arma::mat u(n, k_max);
                arma::mat uA(n, k_max);
                arma::mat r(n, k_max);

                for (unsigned k = 0; k < k_max; ++k) {
                    u.col(k) = V * S.col(k);
                    uA.col(k) = W * S.col(k);
                    r.col(k) = uA.col(k) - theta(k) * u.col(k);
                }

                arma::vec r2(k_max);
                for (unsigned k = 0; k < k_max; ++k)
                    r2(k) = norm(r.col(k), 2);

                io::Log::instance().write(io::Logger::NORMAL,
                                          "eigenvalues",
                                          arma::vec(theta.head(k_max)));
                io::Log::instance().write(
                    io::Logger::NORMAL, "residuum_norms", r2);

                k_actual = 0;
                for (unsigned k = 0; k < k_max; ++k)
                    if (norm(r.col(k), 2) < eps)
                        ++k_actual;
                    else
                        break;
                if ((k_actual >= k_min) /*|| (l == n)*/)
                    break;

                if (l >= l_max) {

                    M = arma::zeros<arma::mat>(l_min, l_min);

                    for (unsigned i = 0; i < l_min; ++i)
                        M(i, i) = theta(i);

                    arma::mat new_V(n, l_min);
                    arma::mat new_W(n, l_min);

                    for (unsigned i = 0; i < k_max; ++i) {
                        new_V.col(i) = u.col(i);
                        new_W.col(i) = uA.col(i);
                    }
                    for (unsigned i = k_max; i < l_min; ++i) {
                        new_V.col(i) = V * S.col(i);
                        new_W.col(i) = W * S.col(i);
                    }

                    swap(new_V, V);
                    swap(new_W, W);

                    l = l_min;
                }

                l_old = l;

                arma::mat delta(n, k_max);
                // FIXME: this should be parametrized somehow
                double cutof = std::numeric_limits<double>::epsilon();
                for (unsigned i = 0; i < n; ++i)
                    for (unsigned k = 0; k < k_max; ++k) {
                        double denominator = a_diagonal(i) - theta(k);
                        if (std::abs(denominator) > cutof)
                            delta(i, k) = -r(i, k) / denominator;
                        else
                            delta(i, k) = 0;
                    }

                for (unsigned k = 0; k < k_max; ++k) {
                    double delta_norm = norm(delta.col(k), 2);
                    if (delta_norm > std::numeric_limits<double>::epsilon())
                        delta.col(k) /= delta_norm;
                    else
                        delta.col(k) = arma::zeros<arma::vec>(n);
                }

                if (iter != iter_max - 1) {

                    bool sth_is_added = false;
                    for (unsigned k = 0; k < k_max; ++k) {

                        double delta_norm = norm(delta.col(k), 2);
                        double delta_norm_old;

                        do {

                            delta_norm_old = delta_norm;
                            for (unsigned i = 0; i < l; ++i)
                                delta.col(k) -=
                                    dot(V.col(i), delta.col(k)) * V.col(i);

                            delta_norm = norm(delta.col(k), 2);

                            // FIXME: this should be parametrized somehow
                        } while (delta_norm_old > 3 * delta_norm);

                        // FIXME: this should be parametrized somehow
                        if ((delta_norm > 1e-3) ||
                            ((!sth_is_added) &&
                             (delta_norm >
                              std::numeric_limits<double>::epsilon()))) {

                            sth_is_added = true;

                            V.resize(n, l + 1);
                            W.resize(n, l + 1);

                            V.col(l) = delta.col(k) / delta_norm;
                            l += 1;
                        }

                        if (!sth_is_added)
                            break;
                    }
                }
                ++iter;
            }

            lambda = theta.head(k_max);

            // coefficients for all roots
            X = arma::zeros<arma::mat>(n, k_max);
            for (unsigned k = 0; k < k_max; ++k)
                for (unsigned i = 0; i < l; ++i)
                    X.col(k) += S(i, k) * V.col(i);

            return k_actual < k_min ? k_actual : k_min;
        }
    }
}
