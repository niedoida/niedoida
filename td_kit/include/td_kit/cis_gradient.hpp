/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_TD_KIT_CIS_GRADIENT_HPP
#define NIEDOIDA_TD_KIT_CIS_GRADIENT_HPP

#include <armadillo>
#include "core_kit/system.hpp"
#include "core_kit/promolecule.hpp"
#include "core_kit/pseudo_fock_matrix_generator.hpp"

namespace niedoida {
    namespace td {
		
		class CIS_gradient{
			public:

				enum Multiplicity {
				SINGLET,
				TRIPLET
			};
			CIS_gradient( 
				Multiplicity multiplicity,
				std::shared_ptr<const core::System> system,
				const arma::mat C,
				const arma::vec eps,
				std::shared_ptr<const core::TwoElectronIntegralEngineFactory> fm_gen,
				unsigned no_frozen,
				unsigned no_deleted,
				unsigned no_states,
				unsigned no_roots,
				std::size_t state_ind,
				const std::vector<unsigned> &unique_atoms);

			arma::mat calc_cis_gradient(
				std::shared_ptr<const core::System> system,
				const arma::mat C,
				const arma::vec eps,
				const arma::mat coeffs,
				std::shared_ptr<const core::TwoElectronIntegralEngineFactory> ie_factory,
				std::shared_ptr<const core::FockMatrixGeneratorFactory> fm_gen);
		private:
			arma::mat calc_sigma_gradient(
				const arma::mat &ci_coeffs ,
				const arma::mat &u_virt_occ ,
				const arma::mat &dS_virt_virt, const arma::mat &dS_occ_occ,
				const arma::mat &F_mo_ov, const arma::mat &F_mo_oo, const arma::mat &F_mo_vv) ;

		   void calc_sigma_gradient_core( const std::vector<arma::mat >& ci_coeffs, 
				core::PseudoFockMultiMatrixGenerator &m_fock_matrix_generator,
				const arma::vec &eps,
				std::shared_ptr<const core::System> system,
				std::size_t atom_ind,
				arma::mat  & core_grad_dx,
				arma::mat  & core_grad_dy,
				arma::mat  & core_grad_dz);

			void calc_pseudo_fock( const std::vector<arma::mat >& ci_coeffs,
				core::PseudoFockMultiMatrixGenerator &m_fock_matrix_generator,
				arma::mat &F_mo_ov, arma::mat &F_mo_oo, arma::mat &F_mo_vv );

			std::vector< arma::mat > calc_Z_vector( const arma::mat &F_mo_oo, const arma::mat &F_mo_vv, const arma::mat &ci_coeffs,  std::shared_ptr<const core::System> system,
				const arma::mat &C,
				const arma::vec &eps,
				std::shared_ptr<const core::TwoElectronIntegralEngineFactory> ie_factory,
				std::shared_ptr<const core::FockMatrixGeneratorFactory> fm_gen);

			void calc_d_Fock_oo_vv( 
				const std::vector< arma::mat > &u_x_virt_occ,
				const std::vector< arma::mat > &u_y_virt_occ,
				const std::vector< arma::mat > &u_z_virt_occ,
				std::unique_ptr<core::FockMatrixGenerator> &m_fock_matrix_generator,
				const std::vector< arma::mat > &dFock_x_occ_occ,
				const std::vector< arma::mat > &dFock_y_occ_occ,
				const std::vector< arma::mat > &dFock_z_occ_occ,
				const std::vector< arma::mat > &dS_x_occ_occ,
				const std::vector< arma::mat > &dS_y_occ_occ,
				const std::vector< arma::mat > &dS_z_occ_occ,
				const std::vector< arma::mat > &dFock_x_virt_virt,
				const std::vector< arma::mat > &dFock_y_virt_virt,
				const std::vector< arma::mat > &dFock_z_virt_virt,
				const std::vector< arma::mat > &dS_x_virt_virt,
				const std::vector< arma::mat > &dS_y_virt_virt,
				const std::vector< arma::mat > &dS_z_virt_virt,
				const std::vector< arma::mat > &psFx,
				const std::vector< arma::mat > &psFy,
				const std::vector< arma::mat > &psFz,
				const arma::vec &eps,
				const arma::vec &eps_virt,
				const arma::mat & ci_coeffs);
			protected:
				unsigned _no_frozen;
				unsigned _no_deleted;
				unsigned _no_states;
				unsigned _no_roots;
				unsigned _no_orbitals;
				unsigned _no_occ;
				unsigned _no_virt;
				unsigned _no_atoms;

				std::size_t _state_ind;
				Multiplicity _mult;

				arma::mat _C;
				arma::mat _C_occ;
				arma::mat _C_virt;

				std::vector< double > _d_delta_eps_accu_dx, _d_delta_eps_accu_dy, _d_delta_eps_accu_dz;

				std::vector<unsigned> _unique_atoms;
		};

		arma::mat energy_gradient_cis( 
				std::shared_ptr<const core::System> system,
				const arma::mat C,
				const arma::vec eps,
				const arma::mat coefs,
				std::shared_ptr<const core::TwoElectronIntegralEngineFactory> ie_factory,
				std::shared_ptr<const core::FockMatrixGeneratorFactory> fm_gen,
				unsigned no_frozen,
				unsigned no_deleted,
				unsigned no_states,
				unsigned no_roots,
				const std::vector<unsigned> &unique_atoms,
				std::size_t state_ind,
				bool singlet );

		arma::mat gradient_from_z_vector(
			std::shared_ptr<const core::System> system,
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
			const std::vector< arma::mat > & z_vec,
			std::vector< arma::mat > & psFx,
			std::vector< arma::mat > & psFy,
			std::vector< arma::mat > & psFz,
			std::shared_ptr<const core::TwoElectronIntegralEngineFactory> ie_factory,
			std::shared_ptr<const core::FockMatrixGeneratorFactory> fm_gen);

		std::vector< arma::mat > transform_ci_coeffs( arma::mat ci_coeffs_v, unsigned m_no_occ, unsigned m_no_virt, unsigned m_no_frozen, unsigned m_no_deleted );


		void calc_psF(  	std::shared_ptr<const core::System> system,
							std::vector< arma::mat > & psFx,
							std::vector< arma::mat > & psFy,
							std::vector< arma::mat > & psFz,
							const arma::mat &C,
							const arma::vec &eps,
							const std::vector<unsigned>& atoms,
							std::vector< arma::mat > & dS_x_occ_occ,
							std::vector< arma::mat > & dS_y_occ_occ,
							std::vector< arma::mat > & dS_z_occ_occ, std::shared_ptr<const core::FockMatrixGeneratorFactory> fm_gen
					  );
	}
}
#endif
