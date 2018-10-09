/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef OS1_INTEGRAL_GRADIENT_ENGINE_HPP
#define	OS1_INTEGRAL_GRADIENT_ENGINE_HPP

#include "core_kit/system.hpp"

namespace niedoida {
  namespace core {
      class OS1OneElectronIntegralGradientEngine {
      public:
	OS1OneElectronIntegralGradientEngine(std::shared_ptr<const System> system);

	  void overlap_gradient(std::size_t atom, arma::mat& sx, arma::mat& sy, arma::mat& sz) const;
	  void kinetic_gradient(std::size_t atom, arma::mat& kx, arma::mat& ky, arma::mat& kz) const;
	  void ne_gradient(std::size_t atom, arma::mat& nx, arma::mat& ny, arma::mat& nz) const;


     private:
	 void clear_matrices(arma::mat& sx, arma::mat& sy, arma::mat& sz) const;

	 std::size_t _no_atoms;
	 arma::mat _xAB;
	 arma::mat _yAB;
	 arma::mat _zAB;
	 arma::mat _r;

	 std::size_t _no_contractions;
	 std::vector<std::size_t> _first_contraction_on_atom;

	 std::vector<unsigned int> _charge;

	 struct Shell {
	     std::vector<unsigned> l;
	     arma::vec exps;
	     arma::mat coeffs;
	 };

	 std::vector<std::size_t> _first_shell_on_atom;
	 std::vector<std::size_t> _no_shells_on_atom;
	 std::vector<Shell> _shells;
     };

     class OS1OneElectronIntegralGradientEngineHerm {
     public:
       OS1OneElectronIntegralGradientEngineHerm(std::shared_ptr<const System> system);

	 void overlap_gradient(std::size_t atom, arma::mat& sx, arma::mat& sy, arma::mat& sz) const;
	 void kinetic_gradient(std::size_t atom, arma::mat& kx, arma::mat& ky, arma::mat& kz) const;
	 void ne_gradient(std::size_t atom, arma::mat& nx, arma::mat& ny, arma::mat& nz) const;


     private:
	 void clear_matrices(arma::mat& sx, arma::mat& sy, arma::mat& sz) const;

	 std::size_t _no_atoms;
	 arma::mat _xAB;
	 arma::mat _yAB;
	 arma::mat _zAB;
	 arma::mat _r;

	 std::size_t _no_contractions;
	 std::vector<std::size_t> _first_contraction_on_atom;

	 std::vector<unsigned int> _charge;

	 struct Shell {
	     std::vector<unsigned> l;
	     arma::vec exps;
	     arma::mat coeffs;
	 };

	 std::vector<std::size_t> _first_shell_on_atom;
	 std::vector<std::size_t> _no_shells_on_atom;
	 std::vector<Shell> _shells;
     };


     class OS1TwoElectronIntegralGradientEngine {
     public:
       OS1TwoElectronIntegralGradientEngine(std::shared_ptr<const System> system);

	 void calc(std::size_t atom, std::size_t I, std::size_t J, std::size_t K, std::size_t L, double* const gx, double* const gy, double* const gz);

     private:    
	 void calc_subshell(std::size_t atom, std::size_t I, std::size_t J, std::size_t K, std::size_t L, double* const gx, double* const gy, double* const gz);

	 arma::mat _r;

	 std::vector<std::size_t> _first_contraction_on_atom;

	 struct Subshell {
	     unsigned int l;
	     arma::vec exps;
	     arma::vec coeffs;
	 };

	 std::vector<std::size_t> _first_subshell_on_atom;
	 std::vector<std::size_t> _no_subshells_on_atom;
	 std::vector<Subshell> _subshells;

	 std::vector<std::size_t> _first_subshell_in_shell;
	 std::vector<std::size_t> _no_subshells_in_shell;
	 std::vector<std::size_t> _no_contractions_in_shell;
     };
  }
}
#endif

