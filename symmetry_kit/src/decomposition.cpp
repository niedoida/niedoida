/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/decomposition.hpp"

#include <cassert>

#include <list>

#include "io_kit/log.hpp"

namespace niedoida {
    namespace symmetry {
        /*
         * The constructor making the trivial unity decomposition (ie. id=id)
         * in space of given dimension.
         */
        Decomposition::Decomposition(unsigned dim) :
            _m_projections(dim, dim, 1),
            _m_dim(dim)
        {
            _m_projections.slice(0) =
                arma::diagmat(arma::cx_vec(dim, arma::fill::ones));
        }

        Decomposition::Decomposition(const Decomposition& d1,
                                     const Decomposition& d2) :
            _m_projections(d1._m_dim, d1._m_dim, 0),
            _m_dim(d1._m_dim)
        {
            assert(d1._m_dim == d2._m_dim);

            d1._m_projections.each_slice([&d2, this](const arma::cx_mat& p1) {
                d2._m_projections.each_slice(
                    [&p1, this](const arma::cx_mat& p2) {
                        const arma::cx_mat p1p2 = p1 * p2;
                        if (std::abs(trace(p1p2)) > 1e-6) {
                            _m_projections =
                                arma::join_slices(_m_projections, p1p2);
                        }
                    });
            });
        }

        /*
         * Unity decomposition being the intersection of many given
         * decompositions.
         */
        Decomposition::Decomposition(
            const std::vector<Decomposition>& decompositions)
        {
            assert(!decompositions.empty());
            *this = Decomposition(decompositions.front()._m_dim);
            for (const Decomposition& d : decompositions)
                *this = Decomposition(*this, d);
        }

        /*
         * Unity decomposition which reflects a matrix spectral decomposition.
         * The matrix is specified by its eigenvalues and eigenvectors. The
         * threshold is a numeric parameter determining whether or not the two
         * eigenvalues are considered the same.
         */
        Decomposition::Decomposition(const arma::vec& eig_vals,
                                     const arma::cx_mat& eig_vecs,
                                     double threshold) :
            _m_projections(eig_vecs.n_rows, eig_vecs.n_rows, 0),
            _m_dim(eig_vecs.n_rows)
        {
            std::list<unsigned> elements;
            for (unsigned i = 0; i < eig_vecs.n_cols; i++)
                elements.push_back(i);
            while (!elements.empty()) {
                arma::mat projectionDiag =
                    arma::mat(_m_dim, _m_dim, arma::fill::zeros);
                const double eigVal = eig_vals(*(elements.begin()));
                for (std::list<unsigned>::iterator it = elements.begin();
                     it != elements.end();)
                    if (std::abs(eig_vals(*it) - eigVal) < 1e-4) {
                        projectionDiag(*it, *it) = 1;
                        it = elements.erase(it);
                    } else
                        it++;
                const arma::cx_mat projection =
                    eig_vecs * projectionDiag * eig_vecs.t();
                _m_projections = arma::join_slices(_m_projections, projection);
            }
        }

        /*
         * Unity decomposition which reflects a matrix SVD. The matrix is given
         * explicitly. The threshold is a numeric parameter determining whether
         * or not the two singular values are considered the same.
         */
        Decomposition::Decomposition(const arma::cx_mat& M, double threshold)
        {
            assert(M.n_rows == M.n_cols);

            arma::cx_mat U, V;
            arma::vec sing_vals;
            arma::svd(U, sing_vals, V, M);
            *this = Decomposition(sing_vals, V, threshold);
        }

        /*
         * The function return the base that made up by common eigenvectors for
         * all the decomposition projection operators. (The projection operators
         * may either annihilate the basis vector or leave unchanged, in other
         * words the two possible eigenvalues are 0 and 1).
         */
        arma::cx_mat Decomposition::get_basis() const
        {
            arma::cx_mat basis;

            _m_projections.each_slice([&basis](const arma::cx_mat& projection) {
                arma::cx_vec eigVals;
                arma::cx_mat beta;
                arma::eig_gen(eigVals, beta, projection);
                for (unsigned i = 0; i < eigVals.n_elem; i++)
                    if (std::abs(eigVals(i) - 1.0) < 1e-6)
                        basis = arma::join_rows(basis, beta.col(i));
                    else if (std::abs(eigVals(i)) > 1e-6)
                        throw std::logic_error(
                            "Internal error: the projection operator has an "
                            "eigenvalue other than 0 or 1.: " +
                            std::to_string(std::real(eigVals(i))) + " " +
                            std::to_string(std::imag(eigVals(i))) + "i.");
            });

            return basis;
        }

        Decomposition common_svn(const std::vector<arma::cx_mat>& Ms)
        {
            std::vector<Decomposition> decompositions;
            for (arma::cx_mat M : Ms)
                decompositions.push_back(Decomposition(M));
            return Decomposition(decompositions);
        }

        Decomposition _eig_gen(const arma::cx_mat& M)
        {
            const int dim = M.n_rows;
            const arma::cx_mat unity_matrix = arma::eye<arma::cx_mat>(dim, dim);
            const std::vector<arma::cx_mat> Ms = {M,
                                                  M + 1 * unity_matrix,
                                                  M + arma::cx_double(0, 1) *
                                                          unity_matrix};
            return common_svn(Ms);
        }

        arma::cx_double determine_eigen_val(const arma::cx_mat& M,
                                            const arma::cx_vec& v,
                                            double threshold)
        {
            assert(M.n_rows == M.n_cols);
            assert(M.n_cols == v.n_rows);

            const int dim = M.n_rows;
            const arma::cx_vec res = M * v;
            const arma::cx_vec lambdas = res / v;
            arma::cx_double lambda_numerator;
            int lambda_denominator = 0;
            for (int i = 0; i < dim; i++)
                if (std::abs(v(i)) > threshold) {
                    lambda_numerator += lambdas(i);
                    lambda_denominator++;
                }

            const arma::cx_double lambda =
                lambda_numerator / double(lambda_denominator);

            if (arma::norm(res - lambda * v) > threshold)
                throw NotEigenVectorError();

            return lambda;
        }

        Decomposition eig_gen(const arma::cx_mat& M)
        {
            const Decomposition decomposition = _eig_gen(M);

            // If basis_vec is not an eigenvector than
            // determine_eigen_val function throws an exception.
            decomposition.get_basis().each_col(
                [&M](const arma::cx_vec& basis_vec) {
                    determine_eigen_val(M, basis_vec, 1e-5);
                });

            return decomposition;
        }

        Decomposition common_eig_gen(const arma::cx_cube& Ms)
        {
            std::vector<Decomposition> decompositions;

            Ms.each_slice([&decompositions](const arma::cx_mat& M) {
                decompositions.push_back(eig_gen(M));
            });

            return Decomposition(decompositions);
        }

        const char* NotEigenVectorError::what() const noexcept
        {
            return "The tested vector is not an eigen vector.";
        }
    }
}
