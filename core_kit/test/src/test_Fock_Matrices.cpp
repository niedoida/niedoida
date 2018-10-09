/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "test_Fock_Matrices.hpp"
#include "core_test_utils.hpp"
#include "core_kit/integral_engine_factory.hpp"
#include "gto_kit/os1_efield.hpp"
#include "gto_kit/gto_value_engine.hpp"
#include "gto_kit/os1_integral_engine_factory.hpp"
#include "gto_kit/gto_utils.hpp"
#include "gto_kit/xc_integral_engine_factory.hpp"
#include "core_kit/system.hpp"
#include "xc_kit/xc_functionals.hpp"
#include "grid_kit/grid_kit.hpp"

namespace {
  using namespace niedoida;
    struct DFTMethod {
        DFTMethod(
            xc::XCFunctional a_xc_functional,
            double a_fock_exchange_contrib,
            double a_mp2_correlation_contrib ):
            xc_functional( a_xc_functional ),
            fock_exchange_contrib( a_fock_exchange_contrib ),
            mp2_correlation_contrib( a_mp2_correlation_contrib ) {}

        const xc::XCFunctional xc_functional;
        const double fock_exchange_contrib;
        const double mp2_correlation_contrib;
    };
}

std::shared_ptr<const niedoida::core::FockMatrixGeneratorFactory> create_simple_HF_Matrix_Generator( std::shared_ptr<niedoida::core::System> system ) {
    using namespace niedoida;

    std::shared_ptr<const core::TwoElectronIntegralEngineFactory> two_e_ie_factory;
    two_e_ie_factory.reset( new gto::OS1TwoElectronIntegralEngineFactory( 1e-6 ) ); //integration threshold

    std::shared_ptr<const core::JKMatrixGeneratorFactory> jkm_gen_factory;
    jkm_gen_factory.reset(
        new core::CombinedJKMatrixGeneratorFactory(
            two_e_ie_factory,
            1e-6,
            64 ) );

    std::shared_ptr<const core::FockMatrixGeneratorFactory> fm_gen_factory;

    fm_gen_factory.reset(
        new core::HFFockMatrixGeneratorFactory(
            jkm_gen_factory ) );


    std::shared_ptr<const core::OneElectronIntegralEngineFactory> one_e_ie_factory(
        new gto::OS1OneElectronIntegralEngineFactory( 1e-6 ) );

    std::shared_ptr<core::TotalEFieldPotentialFactory> ef_potential_factory( new core::TotalEFieldPotentialFactory );
    std::shared_ptr<core::TotalEFieldEnergyFactory> ef_energy_factory( new core::TotalEFieldEnergyFactory );

    ef_potential_factory->contributions.push_back( std::shared_ptr<core::EFieldPotentialFactory>( new gto::OS1NucPotentialFactory ) );
    ef_potential_factory->contributions.push_back( std::shared_ptr<core::EFieldPotentialFactory>( new gto::OS1ExtChrgsPotentialFactory ) );
    ef_potential_factory->contributions.push_back( std::shared_ptr<core::EFieldPotentialFactory>( new gto::OS1UEFPotentialFactory ) );

    ef_energy_factory->contributions.push_back( std::shared_ptr<core::EFieldEnergyFactory>( new core::Nuc2EnergyFactory ) );
    ef_energy_factory->contributions.push_back( std::shared_ptr<core::EFieldEnergyFactory>( new core::UEF2EnergyFactory ) );
    ef_energy_factory->contributions.push_back( std::shared_ptr<core::EFieldEnergyFactory>( new core::NucUEFEnergyFactory ) );
    ef_energy_factory->contributions.push_back( std::shared_ptr<core::EFieldEnergyFactory>( new core::ExternalCharges2EnergyFactory ) );
    ef_energy_factory->contributions.push_back( std::shared_ptr<core::EFieldEnergyFactory>( new core::NucExternalChargesEnergyFactory ) );
    ef_energy_factory->contributions.push_back( std::shared_ptr<core::EFieldEnergyFactory>( new core::ExternalChargesUEFEnergyFactory ) );

    std::unique_ptr<core::OneElectronIntegralEngine> one_e_ie = one_e_ie_factory->make( system );
    std::unique_ptr<core::EFieldPotential> ef_potential = ef_potential_factory->make( system );
    //std::unique_ptr<core::EFieldEnergy> ef_energy = ef_energy_factory->make(system);
    system->external_potential_matrix.reset( new arma::mat( ef_potential->potential_matrix() ) );
    //system->efield_energy.reset(new double(ef_energy->energy()));
    system->basis_set.overlap_matrix.reset( new arma::mat( one_e_ie->overlap_matrix() ) );
    system->basis_set.kinetic_matrix.reset( new arma::mat( one_e_ie->kinetic_matrix() ) );

    system->basis_set.the_basis.reset( new arma::mat( orthonormalize_basis( one_e_ie->overlap_matrix(), 1e-6 ) ) );
    system->basis_set.schwartz_estimator.reset( new core::SchwartzEstimator( *system, *two_e_ie_factory->make( system ) ) );

    return fm_gen_factory;
}

std::shared_ptr<const niedoida::core::FockMatrixGeneratorFactory> create_simple_LDA_KS_Matrix_Generator( std::shared_ptr<niedoida::core::System> system, 
                                                                                                       LDA_FUNCTIONAL functional ) {
    using namespace niedoida;

    std::shared_ptr<const core::TwoElectronIntegralEngineFactory> two_e_ie_factory;
    two_e_ie_factory.reset( new gto::OS1TwoElectronIntegralEngineFactory( 1e-6 ) ); //integration threshold

    std::shared_ptr<const core::AOValueEngineFactory>
    ao_value_engine_factory( new gto::GTOValueEngineFactory );
    std::shared_ptr<const grid::GridFactory> grid_factory;
    grid::GridFactory::GridType grid_type = grid::GridFactory::PRUNED_GRID;
    grid::GridFactory::AngularGridType angular_grid_type = grid::GridFactory::GAUSS_LEGENDRE_ANGULAR_GRID;

    std::shared_ptr<DFTMethod> dft_method;
    switch( functional ) {
  case SLATER:
    dft_method = std::shared_ptr<DFTMethod>(new DFTMethod(&xc::slater_x_functional, 0, 0));
  break;
  
  case SVWN:
    dft_method = std::shared_ptr<DFTMethod>(new DFTMethod(&xc::svwn_xc_functional, 0, 0));
  break;
  
  default:
    dft_method = std::shared_ptr<DFTMethod>(new DFTMethod(&xc::slater_x_functional, 0, 0));
  break;
    }
    grid_factory.reset(
        new grid::GridFactory(
            ao_value_engine_factory,
            &gto::gto_shell_range,
            boost::get<xc::LocalXCFunctional>( dft_method->xc_functional ),
            grid_type,
            angular_grid_type,
            1e-6, //grid_params.accuracy
            75, //max_no_radial_points
            1500 )); //max_no_angular_points
        std::shared_ptr<const core::QuasiOneElectronIntegralEngineFactory> xc_ie_factory;
            xc_ie_factory.reset(
                new gto::XCIntegralEngineFactory(
                    grid_factory,
                    ao_value_engine_factory,
                    boost::get<xc::LocalXCFunctional>(dft_method->xc_functional),
                    64)); //ao_cache_size      

        std::shared_ptr<const core::JMatrixGeneratorFactory> jm_gen_factory;
        jm_gen_factory.reset(
            new core::StandardJMatrixGeneratorFactory(
                two_e_ie_factory,
                1e-6,
                64 ) );

        std::shared_ptr<const core::FockMatrixGeneratorFactory> fm_gen_factory;

        fm_gen_factory.reset(
            new core::PureKSFockMatrixGeneratorFactory(
                jm_gen_factory,
                xc_ie_factory ) );


        std::shared_ptr<const core::OneElectronIntegralEngineFactory> one_e_ie_factory(
            new gto::OS1OneElectronIntegralEngineFactory( 1e-6 ) );

        std::shared_ptr<core::TotalEFieldPotentialFactory> ef_potential_factory( new core::TotalEFieldPotentialFactory );
        std::shared_ptr<core::TotalEFieldEnergyFactory> ef_energy_factory( new core::TotalEFieldEnergyFactory );

        ef_potential_factory->contributions.push_back( std::shared_ptr<core::EFieldPotentialFactory>( new gto::OS1NucPotentialFactory ) );
        ef_potential_factory->contributions.push_back( std::shared_ptr<core::EFieldPotentialFactory>( new gto::OS1ExtChrgsPotentialFactory ) );
        ef_potential_factory->contributions.push_back( std::shared_ptr<core::EFieldPotentialFactory>( new gto::OS1UEFPotentialFactory ) );

        ef_energy_factory->contributions.push_back( std::shared_ptr<core::EFieldEnergyFactory>( new core::Nuc2EnergyFactory ) );
        ef_energy_factory->contributions.push_back( std::shared_ptr<core::EFieldEnergyFactory>( new core::UEF2EnergyFactory ) );
        ef_energy_factory->contributions.push_back( std::shared_ptr<core::EFieldEnergyFactory>( new core::NucUEFEnergyFactory ) );
        ef_energy_factory->contributions.push_back( std::shared_ptr<core::EFieldEnergyFactory>( new core::ExternalCharges2EnergyFactory ) );
        ef_energy_factory->contributions.push_back( std::shared_ptr<core::EFieldEnergyFactory>( new core::NucExternalChargesEnergyFactory ) );
        ef_energy_factory->contributions.push_back( std::shared_ptr<core::EFieldEnergyFactory>( new core::ExternalChargesUEFEnergyFactory ) );

        std::unique_ptr<core::OneElectronIntegralEngine> one_e_ie = one_e_ie_factory->make( system );
        std::unique_ptr<core::EFieldPotential> ef_potential = ef_potential_factory->make( system );
        //std::unique_ptr<core::EFieldEnergy> ef_energy = ef_energy_factory->make(system);
        system->external_potential_matrix.reset( new arma::mat( ef_potential->potential_matrix() ) );
        //system->efield_energy.reset(new double(ef_energy->energy()));
        system->basis_set.overlap_matrix.reset( new arma::mat( one_e_ie->overlap_matrix() ) );
        system->basis_set.kinetic_matrix.reset( new arma::mat( one_e_ie->kinetic_matrix() ) );

        system->basis_set.the_basis.reset( new arma::mat( orthonormalize_basis( one_e_ie->overlap_matrix(), 1e-6 ) ) );
        system->basis_set.schwartz_estimator.reset( new core::SchwartzEstimator( *system, *two_e_ie_factory->make( system ) ) );

        return fm_gen_factory;
}
