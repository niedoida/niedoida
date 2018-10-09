/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_SYMMETRY_KIT_FIND_SYMMETRY_UTILS_HPP
#define NIEDOIDA_SYMMETRY_KIT_FIND_SYMMETRY_UTILS_HPP

#include "misc.hpp"
#include "symmetry_group.hpp"

#include <set>
#include <armadillo>
#include <boost/optional.hpp>

namespace niedoida {
    namespace symmetry {
        arma::mat perform(
            const arma::mat& operation, 
            const arma::mat& coords);

        struct Cn_axis_info {
            arma::vec vec;
            signed fold;
            friend std::ostream& operator<<(std::ostream& os, const Cn_axis_info& axis_info){
                return os << "fold: " << axis_info.fold  
                          << ", axis: " << axis_info.vec[0]<<" "<<axis_info.vec[1]<<" "<<axis_info.vec[2];
            }
        };


        struct fp_less:
            std::binary_function<double, double, bool> {

            explicit fp_less(double eps):
                eps(eps) {}

            bool operator ()(double lhs, 
                             double rhs) const
                {
                    if (std::abs(lhs - rhs) < eps)
                        return false;

                    return lhs < rhs;
                }
            const double eps;
        };


        struct my_fancy_compare:
            std::binary_function<const arma::vec&, const arma::vec&, bool> {

            explicit my_fancy_compare(double eps):
                comp(eps) {}

            bool operator ()(const arma::vec& lhs, 
                             const arma::vec& rhs) const
                {
                    const bool d = std::lexicographical_compare(
                        lhs.begin(), lhs.end(), 
                        rhs.begin(), rhs.end(),
                        comp);

                    return d;
                }

            const fp_less comp;
        };


        struct my_fancy_compare_axes:
            std::binary_function<const Cn_axis_info&, const Cn_axis_info&, bool> {

            explicit my_fancy_compare_axes(double eps):
                eps(eps), vec_compare(eps) {}

            bool operator ()(const Cn_axis_info& lhs, 
                             const Cn_axis_info& rhs) const
                {
                    if (lhs.fold != rhs.fold){
                        return lhs.fold < rhs.fold;
                    }

                    return vec_compare(lhs.vec, rhs.vec);
                }

            const double eps;
            const my_fancy_compare vec_compare;
        };


        typedef std::set<arma::vec, my_fancy_compare > VectorSet;
        typedef std::set<Cn_axis_info, my_fancy_compare_axes > AxisSet;


        // test implementation:
        // accumulation of all applied transformations
        class TransAcc {
        public:
            TransAcc();
            TransAcc& operator << (const arma::mat& m);
            const arma::mat& get() const;
        private:
            arma::mat m_trans;
        };


        inline
        TransAcc::TransAcc() : m_trans(arma::eye<arma::mat>(3,3)) 
        {}

        inline
        TransAcc& TransAcc::operator << (const arma::mat& m)
        {
            m_trans = arma::mat(m* m_trans);
            return *this;
        }

        inline
        const arma::mat& TransAcc::get() const 
        {
            return m_trans;
        }

        inline
        arma::vec vector_product_3(const arma::vec& a,
                                   const arma::vec& b)
        {
        // simplified vector product for 3-element vectors (axb)
            arma::vec result(3);
            result(0)=a(1)*b(2)-a(2)*b(1);
            result(1)=a(2)*b(0)-a(0)*b(2);
            result(2)=a(0)*b(1)-a(1)*b(0);
            return result;
        }

        inline
        arma::vec get_normal_vector(const arma::vec& a,
                                    const arma::vec& b,
                                    const arma::vec& c)
        {
            return normalise(vector_product_3(b - a, c - a), 2);
        }



        inline
        bool is_triple_linear(const arma::vec& first, 
                              const arma::vec& second, 
                              const arma::vec& third,
                              double tol_dist){
        // colinearity test:
        //     assumption: the points are unique
        //     points a, b, c are collinear iff \vec{ab}\times\vec{ac}==0
            return norm(vector_product_3(second - first, third - first), 2) < tol_dist;
        }




        // declarations:

        arma::mat inverse(const arma::mat& coords);
        double chop(const double&, double threshold = 1e-10);

        arma::mat align(
            const arma::mat& coords,
            const arma::vec& vec,
            Axis axis,
            double tol_dist,
            TransAcc *tacc_ptr = 0);
        arma::mat rotate_around_XYZ(
            const arma::mat& coords,
            Axis axis,
            double angle,
            TransAcc *tacc_ptr);
        boost::optional<Cn_axis_info> find_principal_axis_from_eigenvectors(
            const arma::mat& coords,
            const std::vector<unsigned>& q,
            const arma::mat& eigenvectors,
            double tol_dist);
        boost::optional<Cn_axis_info> find_principal_axis(
            const arma::mat& coords,
            const std::vector<unsigned>& q,
            double tol_dist);
        boost::optional<arma::vec > find_principal_sigma_v(
            const arma::mat& coords,
            const std::vector<unsigned>& q,
            const arma::vec& Cn_principal,
            double tol_dist);
        boost::optional<Cn_axis_info> find_perpendicular_C2(
            const arma::mat& coords,
            const std::vector<unsigned>& q,
            const Cn_axis_info& Cn_principal,
            double tol_dist);
        bool are_equivalent(
            const arma::mat& coords_1,
            const arma::mat& coords_2,
            const std::vector<unsigned>& q, 
            double tol_dist);
        arma::mat reflect_XYZ(
            const arma::mat& coords,
            Axis axis);
        bool has_symmetry_plane_XYZ(const arma::mat& coords, 
                                    Axis axis,
                                    const std::vector<unsigned>& q,
                                    double tol_dist);
        arma::mat reflect_perp_plane(
            const arma::mat& coords,
            const arma::vec& vec);
        arma::mat rotate_axis_angle(
            const arma::mat& coords,
            const Cn_axis_info& axis);
        bool is_XYZ_a_Cn_axis(const arma::mat& coords,
                              const std::vector<unsigned>& q,
                              Axis axis, 
                              unsigned n, 
                              double tol_dist);
        arma::mat reorient_plane(
            const arma::mat& coords,
            const std::vector<unsigned>& q,
            Axis axis,
            double tol_dist,
            TransAcc *tacc_ptr = 0);
        boost::optional<Axis> planar_in_which_plane_XYZ(
            const arma::mat& coords,
            double tol_dist);

        const FiniteSymmetryGroup& find_finite_group(
            const AxisSet& axes,
            const VectorSet& planes);
    }
}

#endif
