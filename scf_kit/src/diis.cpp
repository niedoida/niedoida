/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "scf_kit/convergence_accelerators.hpp"

#include "io_kit/log.hpp"

#include <boost/numeric/ublas/lu.hpp>

#include <numeric>

namespace niedoida {
    namespace scf {
        DIIS::DIIS(double threshold) :
            threshold_(threshold),
            real_diis_enabled_(false)
        {
        }

        std::pair<arma::mat, arma::mat> DIIS::apply(const arma::mat& S,
                                                    const arma::mat& h,
                                                    const arma::mat& g_alpha,
                                                    const arma::mat& P_alpha,
                                                    const arma::mat& g_beta,
                                                    const arma::mat& P_beta,
                                                    const double)
        {
            const bool polarized = (norm(P_alpha - P_beta, "inf") != 0 ||
                                    norm(g_alpha - g_beta, "inf") != 0);

            const unsigned n = S.n_rows;
            const arma::mat F_alpha = h + g_alpha;
            const arma::mat F_beta = h + g_beta;

            assert(F_alpha.n_rows == n);
            assert(P_alpha.n_rows == n);
            assert(F_beta.n_rows == n);
            assert(P_beta.n_rows == n);

            if (polarized) {

                arma::mat M_alpha(n, n);
                arma::mat M_beta(n, n);
                arma::mat _S = S;
                arma::mat _temp(n, n);

                arma::mat _P = P_alpha;
                arma::mat _F = F_alpha;
                _temp = _P * _S;
                M_alpha = _F * _temp;
                _temp = _S * _P;
                M_alpha -= _temp * _F;

                _P = P_beta;
                _F = F_beta;
                _temp = _P * _S;
                M_beta = _F * _temp;
                _temp = _S * _P;
                M_beta -= _temp * _F;

                arma::vec err_vec_alpha(n * n, arma::fill::zeros);
                arma::vec err_vec_beta(n * n, arma::fill::zeros);

                std::copy(M_alpha.memptr(),
                          M_alpha.memptr() + n * n,
                          err_vec_alpha.memptr());
                std::copy(M_beta.memptr(),
                          M_beta.memptr() + n * n,
                          err_vec_beta.memptr());

                if (!real_diis_enabled_ &&
                    arma::norm(err_vec_alpha, "inf") < threshold_ &&
                    norm(err_vec_beta, "inf") < threshold_)
                    real_diis_enabled_ = true;

                err_vecs_alpha.push_back(err_vec_alpha);
                fock_matrices_alpha.push_back(F_alpha);
                err_vecs_beta.push_back(err_vec_beta);
                fock_matrices_beta.push_back(F_beta);

            } else {

                arma::mat M_alpha(n, n);
                arma::mat _S = S;
                arma::mat _temp(n, n);

                arma::mat _P = P_alpha;
                arma::mat _F = F_alpha;
                _temp = _P * _S;
                M_alpha = _F * _temp;
                _temp = _S * _P;
                M_alpha -= _temp * _F;

                arma::vec err_vec_alpha(n * n, arma::fill::zeros);

                std::copy(M_alpha.memptr(),
                          M_alpha.memptr() + n * n,
                          err_vec_alpha.memptr());

                if (!real_diis_enabled_ &&
                    arma::norm(err_vec_alpha, "inf") < threshold_)
                    real_diis_enabled_ = true;

                err_vecs_alpha.push_back(err_vec_alpha);
                fock_matrices_alpha.push_back(F_alpha);
                err_vecs_beta.push_back(err_vec_alpha);
                fock_matrices_beta.push_back(F_alpha);
            }

            if ((!real_diis_enabled_ && err_vecs_alpha.size() > 2) ||
                (err_vecs_alpha.size() > 8)) {

                for (unsigned i = 0; i < err_vecs_alpha.size() - 1; ++i) {
                    swap(err_vecs_alpha[i], err_vecs_alpha[i + 1]);
                    swap(fock_matrices_alpha[i], fock_matrices_alpha[i + 1]);
                    swap(err_vecs_beta[i], err_vecs_beta[i + 1]);
                    swap(fock_matrices_beta[i], fock_matrices_beta[i + 1]);
                }

                err_vecs_alpha.pop_back();
                fock_matrices_alpha.pop_back();
                err_vecs_beta.pop_back();
                fock_matrices_beta.pop_back();
            }

            arma::vec c;
            bool solved;

            do {
                const unsigned no_err_vecs = err_vecs_alpha.size();

                if (no_err_vecs == 0)
                    return std::make_pair(F_alpha, F_beta);

                arma::mat A(
                    no_err_vecs + 1, no_err_vecs + 1, arma::fill::zeros);

                for (unsigned i = 0; i < no_err_vecs; ++i)
                    for (unsigned j = 0; j <= i; ++j)
                        A(i, j) =
                            0.5 * (dot(err_vecs_alpha[i], err_vecs_alpha[j]) +
                                   dot(err_vecs_beta[i], err_vecs_beta[j]));

                for (unsigned i = 0; i < no_err_vecs; ++i)
                    A(no_err_vecs, i) = -1.0;

                A = symmatl(A);

                namespace ublas = boost::numeric::ublas;

                ublas::vector<double> b =
                    ublas::zero_vector<double>(no_err_vecs + 1);
                b(no_err_vecs) = -1.0;

                ublas::matrix<double> LU(A.n_rows, A.n_cols);
                for (std::size_t i = 0; i < A.n_rows; ++i)
                    for (std::size_t j = 0; j < A.n_rows; ++j)
                        LU(i, j) = A(i, j);
                ublas::permutation_matrix<> pivot(A.n_rows);

                ublas::matrix<double>::size_type singular =
                    ublas::lu_factorize(LU, pivot);

                if (singular) {
                    ublas::vector<std::size_t> indices(pivot.size());
                    std::iota(indices.begin(), indices.end(), 0);
                    ublas::swap_rows(pivot, indices);
                    singular = indices(singular);
                    io::Log::instance().write(io::Logger::DEBUG,
                                              "diis removing linear dependence",
                                              singular);
                    err_vecs_alpha.erase(err_vecs_alpha.begin() + singular);
                    fock_matrices_alpha.erase(fock_matrices_alpha.begin() +
                                              singular);
                    err_vecs_beta.erase(err_vecs_beta.begin() + singular);
                    fock_matrices_beta.erase(fock_matrices_beta.begin() +
                                             singular);
                    solved = false;
                } else {
                    ublas::vector<double> x = b;
                    ublas::lu_substitute(LU, pivot, x);

                    c.set_size(x.size());
                    for (std::size_t i = 0; i < x.size(); ++i)
                        c(i) = x(i);

                    solved = true;
                }
            } while (!solved);

            io::Log::instance().write(io::Logger::VERBOSE, "diis coeffs", c);

            arma::mat new_F_alpha(
                F_alpha.n_rows, F_alpha.n_rows, arma::fill::zeros);
            arma::mat new_F_beta(
                F_beta.n_rows, F_beta.n_rows, arma::fill::zeros);

            for (unsigned i = 0; i < c.size() - 1; ++i) {
                new_F_alpha += c[i] * fock_matrices_alpha[i];
                new_F_beta += c[i] * fock_matrices_beta[i];
            }

            return std::make_pair(new_F_alpha, new_F_beta);
        }
    }
}
