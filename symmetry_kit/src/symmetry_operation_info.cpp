/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/symmetry_operation_info.hpp"

#include "symmetry_kit/rotation_matrix.hpp"

namespace {
    boost::rational<unsigned> farey(double x, unsigned n = 16)
    {
        unsigned a = 0, b = 1;
        unsigned c = 1, d = 1;

        while (b <= n && d <= n) {
            const double mediant = static_cast<double>(a + c) / (b + d);
            if (x == mediant) {
                if (b + d <= n)
                    return boost::rational<unsigned>(a + c, b + d);
                else if (d > b)
                    return boost::rational<unsigned>(c, d);
                else
                    return boost::rational<unsigned>(a, b);
            } else if (x > mediant) {
                a = a + c;
                b = b + d;
            } else {
                c = a + c;
                d = b + d;
            }
        }

        if (b > n)
            return boost::rational<unsigned>(c, d);
        else
            return boost::rational<unsigned>(a, b);
    }

    unsigned proper_axis_fold(double trace)
    {
        const double theta = acos((trace - 1.) / 2.);
        if (std::isnan(theta)) {
            return 2;
        } else if (std::abs(theta) < 0.001)
            return 1;
        else {
            return farey(theta / (2 * M_PI)).denominator();
        }
    }

    unsigned improper_axis_fold(double trace)
    {
        const double theta = acos((trace + 1.) / 2.);
        if (std::isnan(theta)) {
            return 2;
        } else if (std::abs(theta) < 0.001)
            return 1;
        else {
            return farey(theta / (2 * M_PI)).denominator();
        }
    }

    arma::vec axis_direction(const arma::mat& R)
    {
        const double d = arma::det(R);
        arma::cx_vec eigen_values;
        arma::cx_mat eigen_vectors;
        arma::eig_gen(eigen_values, eigen_vectors, R);

        for (unsigned i = 0; i < eigen_values.n_rows; ++i)
            if (std::abs(eigen_values(i).real() - d) < 1e-3 &&
                std::abs(eigen_values(i).imag()) < 1e-3)
                return arma::real(eigen_vectors.col(i));
    }
}

namespace niedoida {
    namespace symmetry {

        SymmetryOperationInfo::SymmetryOperationInfo(const arma::mat& R) :
            _is_proper(arma::det(R) > 0),
            _direction(axis_direction(R))
        {
            const arma::vec3 x = {1, 0, 0};
            const arma::vec3 y = {0, 1, 0};
            const arma::vec3 z = {0, 0, 1};

            if (arma::norm(R - arma::eye<arma::mat>(3, 3), "inf") < 1e-3) {
                _direction = z;
                _fold = boost::rational<unsigned>(1, 1);
                _label = "C1";
            } else if (arma::norm(R + arma::eye<arma::mat>(3, 3), "inf") <
                       1e-3) {
                _direction = z;
                _fold = boost::rational<unsigned>(1, 2);
                _label = "i";
            } else {
                const unsigned f = _is_proper
                                       ? proper_axis_fold(arma::trace(R))
                                       : improper_axis_fold(arma::trace(R));
                if (f > 1) {
                    const arma::mat A = rotation_matrix((_is_proper ? 1 : -1) *
                                                            static_cast<int>(f),
                                                        _direction);
                    arma::mat B = A;

                    for (unsigned i = 1; i < 2 * f; ++i) {
                        if (arma::norm(R - B, "inf") < 1e-3) {
                            _fold = boost::rational<unsigned>(i, f);
                            break;
                        }
                        B *= A;
                    }
                }

                _label = _is_proper ? "C" : "S";

                _label += std::to_string(_fold.denominator());
                if (_fold.numerator() > 1)
                    _label += '^' + std::to_string(_fold.numerator());

                if (!_is_proper && _fold.denominator() == 1) {
                    if (arma::norm(arma::cross(_direction, z)) < 1e-3)
                        _label += "h";
                    else if (arma::norm(arma::cross(_direction, x)) < 1e-3)
                        _label += "vyz";
                    else if (arma::norm(arma::cross(_direction, y)) < 1e-3)
                        _label += "vxz";
                    else if (std::abs(arma::dot(_direction, z)) < 1e-3)
                        _label += 'd';
                } else {
                    if (std::abs(arma::dot(_direction, x) - 1) < 1e-3)
                        _label += "x";
                    else if (std::abs(arma::dot(_direction, y) - 1) < 1e-3)
                        _label += "y";
                    else if (std::abs(arma::dot(_direction, z) - 1) < 1e-3)
                        _label += "z";
                }
            }
        }
    }
}
