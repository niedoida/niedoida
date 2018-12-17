/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_SYMMETRY_KIT_SYMMETRY_INFO_HPP
#define NIEDOIDA_SYMMETRY_KIT_SYMMETRY_INFO_HPP

#include <armadillo>

#include "symmetry_group.hpp"
#include <stdexcept> // for implementation of NoneSymmetryInfo
namespace niedoida {
    namespace symmetry {

        class AbstractSymmetryInfo {
	public:
            virtual ~AbstractSymmetryInfo() = default;
            // virtual SymmetryType symmetry_type() const override;
            // virtual TopType top_type() const override;
            virtual const SymmetryGroup& symmetry_group() const = 0;
            virtual const FiniteSymmetryGroup& finite_symmetry_group() const = 0;
            virtual const arma::mat& rotation_to_std_frame() const = 0;
            virtual const arma::vec& translation_to_std_frame() const = 0;
            virtual const arma::mat& symmetrized_coords() const = 0;
            virtual const std::vector<std::vector< unsigned> >& perm_rep() const = 0;
            virtual const std::vector<unsigned>& unique_atoms() const = 0;
        };


        class NoneSymmetryInfo : public AbstractSymmetryInfo {
	public:
          NoneSymmetryInfo(const arma::mat& coords) : _symmetrized_coords(coords.t()),
						      _rotation_to_std_frame(arma::eye(3,3)),
						      _translation_to_std_frame(arma::fill::zeros){
	  }; // ctr-args: coords: 3 x n_atom

	  const SymmetryGroup& symmetry_group() const override {
	    throw std::logic_error("Do not apply.");	    
	  }

	  const FiniteSymmetryGroup& finite_symmetry_group() const override {
	    throw std::logic_error("Do not apply.");
	  }

	  const arma::mat& rotation_to_std_frame() const override {
	    return _rotation_to_std_frame; 
	  }

	  const arma::vec& translation_to_std_frame() const override {
	    return  _translation_to_std_frame;
	  }

	  const arma::mat& symmetrized_coords() const override {
	    return _symmetrized_coords;
	  }

	  const std::vector<std::vector< unsigned> >& perm_rep() const override {
	    throw std::logic_error("Do not apply.");
	  }

	  const std::vector<unsigned>& unique_atoms() const override {
	    throw std::logic_error("Do not apply.");
	  }

	private:
            arma::mat _symmetrized_coords;
            arma::mat33 _rotation_to_std_frame;
            arma::vec3 _translation_to_std_frame;
        };


        class SymmetryInfo : public AbstractSymmetryInfo {
        public:
            enum SymmetryType {
                ATOMIC_SYMMETRY,
                LINEAR_SYMMETRY,
                NON_LINEAR_SYMMETRY
            };

            enum TopType {
                ASYMMETRIC_TOP,
                SYMMETRIC_TOP,
                SPHERIC_TOP
            };

            SymmetryInfo(
                const arma::mat& coords, 
                const std::vector<unsigned>& q, 
                double tol_dist,
                unsigned max_axis_rep = 4,
                double tol_eigenvectors=1e-1);
            SymmetryType symmetry_type() const;
            TopType top_type() const;
            const SymmetryGroup& symmetry_group() const override;
            const FiniteSymmetryGroup& finite_symmetry_group() const override;
            const arma::mat& rotation_to_std_frame() const override;
            const arma::vec& translation_to_std_frame() const override;
            const arma::mat& symmetrized_coords() const override;
            const std::vector<std::vector< unsigned> >& perm_rep() const override;
            const std::vector<unsigned>& unique_atoms() const override;

        private:
            SymmetryType _symmetry_type;  //vide supra
            TopType _top_type;
            const SymmetryGroup* _symmetry_group;
            const FiniteSymmetryGroup* _finite_symmetry_group;
            arma::mat _rotation_to_std_frame; // rotation (incl. reflections) to std. orientation
            arma::vec _translation_to_std_frame;
            arma::mat _symmetrized_coords;
            std::vector<unsigned> _unique_atoms;
            std::vector<std::vector<unsigned> > _perm_rep;

            void find_symmetry_atomic(unsigned max_axis_rep);

            void find_symmetry_linear(
                const arma::mat& coords,
                const std::vector<unsigned>& q,
                const arma::vec& principal_axis,
                double tol_dist);

            void find_symmetry_asymmetric_top(
                const arma::mat& passed_coords,
                const std::vector<unsigned>& q,
                const arma::vec& principal_axis,
                double tol_dist);

            void find_symmetry_symmetric_top(
                const arma::mat& passed_coords,
                const std::vector<unsigned>& q,
                double tol_dist,
                double tol_eigenvect);


            void find_symmetry_spheric_top(
                const arma::mat& passed_coords,
                const std::vector<unsigned>& q,
                double tol_dist);

            void downgrade_infinite_symm_group(
                unsigned max_axis_rep );

            void symmetrize_coords(const arma::mat& coords);
        };
    }
}

#endif
