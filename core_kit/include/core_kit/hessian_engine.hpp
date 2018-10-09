/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef HESSIAN_ENGINE_HPP
#define	HESSIAN_ENGINE_HPP

#include "core_kit/system.hpp"
#include "core_kit/dFock.hpp"

namespace niedoida{
  namespace core {
    class OneElectronD2IntegralEngine {
    public:
      OneElectronD2IntegralEngine(std::shared_ptr<const System> system);
    
      void d2_overlap(std::size_t A, 
		      std::size_t B, 
		      arma::mat &d2sxx,
		      arma::mat &d2sxy,
		      arma::mat &d2sxz,
		      arma::mat &d2syy,
		      arma::mat &d2syz,
		      arma::mat &d2szz) const;
    
      void d2_kinetic(std::size_t A, 
		      std::size_t B, 
		      arma::mat &d2kxx,
		      arma::mat &d2kxy,
		      arma::mat &d2kxz,
		      arma::mat &d2kyy,
		      arma::mat &d2kyz,
		      arma::mat &d2kzz) const;
    
      void d2_ne(std::size_t D,
		 std::size_t E, 
		 arma::mat &d2nexx,
		 arma::mat &d2nexy,
		 arma::mat &d2nexz,
		 arma::mat &d2neyx,
		 arma::mat &d2neyy,
		 arma::mat &d2neyz,
		 arma::mat &d2nezx,
		 arma::mat &d2nezy,
		 arma::mat &d2nezz) const;
    
    
    private:
      void clear_overlap_kinetic_matrices(
					  arma::mat &d2sxx,
					  arma::mat &d2sxy,
					  arma::mat &d2sxz,
					  arma::mat &d2syy,
					  arma::mat &d2syz,
					  arma::mat &d2szz) const;
    
      void clear_coulomb_matrices(
				  arma::mat &d2nexx,
				  arma::mat &d2nexy,
				  arma::mat &d2nexz,
				  arma::mat &d2neyx,
				  arma::mat &d2neyy,
				  arma::mat &d2neyz,
				  arma::mat &d2nezx,
				  arma::mat &d2nezy,
				  arma::mat &d2nezz) const;
    
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

    void energy_hessian_from_cphf(
				       std::shared_ptr<const System> system,
				       const arma::mat &C,
				       const arma::vec &eps,
				       const std::vector<unsigned>& atoms,
				       std::vector< arma::mat > & dS_x_occ_occ,
				       std::vector< arma::mat > & dS_y_occ_occ,
				       std::vector< arma::mat > & dS_z_occ_occ,
				       std::vector< arma::mat > & dS_x_occ_virt,
				       std::vector< arma::mat > & dS_y_occ_virt,
				       std::vector< arma::mat > & dS_z_occ_virt,
				       std::vector< arma::mat > & dFock_x_occ_virt,
				       std::vector< arma::mat > & dFock_y_occ_virt,
				       std::vector< arma::mat > & dFock_z_occ_virt,
				       std::vector< arma::mat > & u_x,
				       std::vector< arma::mat > & u_y,
				       std::vector< arma::mat > & u_z,
				       std::shared_ptr<const TwoElectronIntegralEngineFactory> ie_factory,
				       std::shared_ptr<const FockMatrixGeneratorFactory> fm_gen);

    class OS1TwoElectronD2IntegralEngine {
    public:
      OS1TwoElectronD2IntegralEngine(std::shared_ptr<const System> system);
      void calc(std::size_t atom1, std::size_t atom2, std::size_t I, std::size_t J, std::size_t K, std::size_t L,
		double* const d2eexx,
		double* const d2eexy,
		double* const d2eexz,
		double* const d2eeyx,
		double* const d2eeyy,
		double* const d2eeyz,
		double* const d2eezx,
		double* const d2eezy,
		double* const d2eezz);

    private:    
      void calc_subshell(std::size_t atom1, std::size_t atom2 ,std::size_t I, std::size_t J, std::size_t K, std::size_t L,
			 double* const d2eexx,
			 double* const d2eexy,
			 double* const d2eexz,
			 double* const d2eeyx,
			 double* const d2eeyy,
			 double* const d2eeyz,
			 double* const d2eezx,
			 double* const d2eezy,
			 double* const d2eezz) const ;
    
      arma::mat _r;
    
      std::vector<std::size_t> _first_contraction_on_atom;
    
      struct Subshell {
        unsigned int l;
        arma::vec exps;
        arma::vec coeffs;
      };
      std::size_t _no_atoms;
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

