/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "io_kit/log.hpp"
#include "td_kit/dress.hpp"
#include <cassert>
#include <cmath>

namespace niedoida {
    namespace td {

        Dress_matrix::Dress_matrix(
            const std::map<std::pair<std::size_t, std::size_t>, double>&
                diagonal,
            const double& denominator) :
            m_diagonal(diagonal),
            m_denominator(denominator)
        {
        }

        Dress_matrix::Dress_matrix(const Dress_matrix& old) :
            m_diagonal(old.m_diagonal),
            m_denominator(old.m_denominator)
        {
        }

        arma::mat Dress_matrix::operator()(const arma::mat& ci_coeffs) const
        {
            ci_coeffs.raw_print(std::cout);
            arma::mat dress_for_sigma(
                ci_coeffs.n_rows, ci_coeffs.n_cols, arma::fill::zeros);

            for (DiagonalInts::const_iterator iter = m_diagonal.begin();
                 iter != m_diagonal.end();
                 ++iter) {
                const std::pair<size_t, size_t>& ia = (*iter).first;
                const std::size_t i = ia.first;
                const std::size_t a = ia.second;

                double value1 = (*iter).second;

                for (DiagonalInts::const_iterator iter2 = m_diagonal.begin();
                     iter2 != m_diagonal.end();
                     ++iter2) {

                    const std::pair<size_t, size_t>& jb = (*iter2).first;
                    const std::size_t j = jb.first;
                    const std::size_t b = jb.second;

                    double value2 = (*iter2).second;

                    //            std::cout << "  Zadanie elementu " << i <<"->"
                    //            << a << " " << j <<"->" << b << " :" <<
                    //            std::endl; std::cout << value1 << " * " <<
                    //            value2 << " / "  << m_denominator << " = " <<
                    //            value1 * value2 / m_denominator << std::endl;
                    //            std::cout << " ci_coeff(el. wektora): " <<
                    //            ci_coeffs(j,b) << std::endl;

                    dress_for_sigma(i, a) +=
                        value1 * value2 * ci_coeffs(j, b) / m_denominator;
                }
            }

            return dress_for_sigma;
        }

        double Dress_matrix::denominator() const { return m_denominator; }

        DiagonalInts Dress_matrix::diagonalInts() const { return m_diagonal; }

        void Dress_matrix::set_denominator(double new_denominator)
        {
            m_denominator = new_denominator;
        }
    }
}