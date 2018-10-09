/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include <boost/test/unit_test.hpp>
#include <boost/filesystem.hpp>
#include "core_kit/core_kit.hpp"
#include "core_kit/system.hpp"
#include "scf_kit/scf_kit.hpp"
#include "test_systems.hpp"
#include "test_Fock_Matrices.hpp"
#include "gto_kit/os1_integral_engine_factory.hpp"
#include <string>
#include <sstream>
#include <petsctao.h>

using namespace boost::unit_test;
using namespace niedoida;

void test_HF_H2_sto3g_J_matrix( ) {
    std::shared_ptr<core::System> system  = create_system_H2_STO3G();

    std::unique_ptr<core::FockMatrixGenerator> FMG = create_simple_HF_Matrix_Generator( system )->make( system );
    const std::size_t lumo_idx = system->no_electrons( core::SPIN_ALPHA );
    arma::mat C = { { -5.48934042900085e-01, 1.21146407906182e+00 },
        { -5.48934042900085e-01, -1.21146407906182e+00 }
    };
    arma::mat P = scf::density_matrix( C, lumo_idx );

    FMG->set_density_matrix( P, P );
    arma::mat J = FMG->coulomb_matrix();
    arma::mat J_true = {{ 1.34543040448483e+00, 8.93302066857166e-01 }, { 8.93302066857166e-01,  1.34543040448483e+00   } };

    for( unsigned row = 0; row < J.n_rows; row++ )
        for( unsigned col = 0; col < J.n_cols; col++ )
            BOOST_CHECK_CLOSE( J( row, col ), J_true( row, col ), 1e-9 );
}

void test_HF_H2_sto3g_dJ_matrix() {
  std::shared_ptr<core::System> system  = create_system_H2_STO3G();

    std::unique_ptr<core::FockMatrixGenerator> FMG = create_simple_HF_Matrix_Generator( system )->make( system );
    const std::size_t lumo_idx = system->no_electrons( core::SPIN_ALPHA );
    arma::mat C =  { { -5.48934042900085e-01, 1.21146407906182e+00 },
        { -5.48934042900085e-01, -1.21146407906182e+00 }
    };

    arma::mat P = scf::density_matrix( C, lumo_idx );

    std::vector<unsigned> atoms;
    atoms.push_back( 0 );
    atoms.push_back( 1 );
    
    FMG->set_density_matrix( P, P );
    FMG->calc_matrix_core_gradient( atoms, P);
    std::vector<arma::cube> dF = FMG-> coulomb_matrix_core_gradient( );
    arma::mat F_not_perturbed =  FMG->coulomb_matrix() ;
    
    unsigned atoms_no = atoms.size();
    double dR = 0.001;
    for( unsigned atom_ind = 0; atom_ind < atoms_no ; atom_ind++ ) {
        for( unsigned coord_ind = 0; coord_ind < 3 ; coord_ind++ ) {
            arma::mat dF_current = dF[atom_ind].slice( coord_ind );
    
            perturb_system( system, atom_ind, coord_ind, dR);
            FMG = create_simple_HF_Matrix_Generator( system )->make( system );
            FMG->set_density_matrix( P, P );
            FMG->calc_matrix_core_gradient( atoms, P);
	    
            arma::mat F_perturbed = FMG->coulomb_matrix();
            arma::mat dF_numerical = ( F_perturbed - F_not_perturbed)/dR;
            std::vector<arma::cube> dF_local = FMG->coulomb_matrix_core_gradient();
            dF_current = ( dF_current + dF_local[atom_ind].slice(coord_ind) )/2;
            
            for( unsigned row = 0; row < dF_current.n_rows; row++ )
                for( unsigned col = 0; col < dF_current.n_cols; col++ ) 
                    if ( std::abs(dF_numerical(row, col)) > std::numeric_limits<double>::epsilon() ) 
                        BOOST_CHECK_CLOSE( dF_current( row, col ), dF_numerical( row, col ) , 1e-3 );
                    else
                        BOOST_CHECK_SMALL( dF_current( row, col ), 1e-3 );
                    
            
            //unperturb system :)
            perturb_system( system, atom_ind, coord_ind, -dR);
        }
        
	}

}

void test_HF_H2_sto3g_K_matrix( ) {
    std::shared_ptr<core::System> system  = create_system_H2_STO3G();

    std::unique_ptr<core::FockMatrixGenerator> FMG = create_simple_HF_Matrix_Generator( system )->make( system );
    const std::size_t lumo_idx = system->no_electrons( core::SPIN_ALPHA );
    arma::mat C = { { -5.48934042900085e-01, 1.21146407906182e+00 },
        { -5.48934042900085e-01, -1.21146407906182e+00 }
    };
    arma::mat P = scf::density_matrix( C, lumo_idx );

    FMG->set_density_matrix( P, P );
    arma::mat K = FMG->exchange_matrix( core::SPIN_ALPHA );
    arma::mat K_true = {{ -5.90558753336202e-01, -5.28807482334797e-01 }, { -5.28807482334797e-01,  -5.90558753336202e-01  } };

    for( unsigned row = 0; row < K.n_rows; row++ )
        for( unsigned col = 0; col < K.n_cols; col++ )
            if (std::abs(K_true( row, col )) > std::numeric_limits<double>::epsilon())
                BOOST_CHECK_CLOSE( K( row, col ), K_true( row, col ), 1e-9 );
            else
                BOOST_CHECK_SMALL( K( row, col ), 1e-9 );
}

void test_HF_H2_sto3g_gradient( ) {
    std::shared_ptr<core::System> system  = create_system_H2_STO3G();

    std::unique_ptr<core::FockMatrixGenerator> FMG = create_simple_HF_Matrix_Generator( system )->make( system );
    const std::size_t lumo_idx = system->no_electrons( core::SPIN_ALPHA );
    arma::mat C = { { -5.48934042900085e-01, 1.21146407906182e+00 },
        { -5.48934042900085e-01, -1.21146407906182e+00 }
    };
    arma::mat P = scf::density_matrix( C, lumo_idx );

    FMG->set_density_matrix( P, P );
    arma::vec eps = { -5.78202977512456e-01, 6.70267768273675e-01 };
    std::vector<unsigned> atoms;
    atoms.push_back( 0 );
    atoms.push_back( 1 );
    arma::mat gradient = FMG->energy_gradient( system, C, eps, atoms );
    arma::mat gradient_true = {{ 0.0, 0.0, -0.028454057 }, { 0.0, 0.0, 0.028454057 } };

    for( unsigned row = 0; row < gradient.n_rows; row++ )
        for( unsigned col = 0; col < gradient.n_cols; col++ )
            if (std::abs(gradient_true( row, col )) > std::numeric_limits<double>::epsilon())
                BOOST_CHECK_CLOSE( gradient( row, col ), gradient_true( row, col ), 1e-5 );
            else
                BOOST_CHECK_SMALL( gradient( row, col ), 1e-5 );
}



void test_HF_H2_sto3g_hessian( ) {
    std::shared_ptr<core::System> system  = create_system_H2_STO3G();

    std::shared_ptr<const core::FockMatrixGeneratorFactory> fm_gen = create_simple_HF_Matrix_Generator( system );
    std::unique_ptr<core::FockMatrixGenerator> FMG = fm_gen->make( system );
    const std::size_t lumo_idx = system->no_electrons( core::SPIN_ALPHA );
    arma::mat C = { { -5.48934042900085e-01, 1.21146407906182e+00 },
        { -5.48934042900085e-01, -1.21146407906182e+00 }
    };
    arma::mat P = scf::density_matrix( C, lumo_idx );

    FMG->set_density_matrix( P, P );
    arma::vec eps = { -5.78202977512456e-01, 6.70267768273675e-01 };
    std::vector<unsigned> atoms;
    atoms.push_back( 0 );
    atoms.push_back( 1 );
    std::shared_ptr<const core::TwoElectronIntegralEngineFactory> two_e_ie_factory;
    two_e_ie_factory.reset( new gto::OS1TwoElectronIntegralEngineFactory( 1e-6 ) );
    arma::mat hessian = FMG->energy_hessian( system, C, eps, atoms, two_e_ie_factory, fm_gen );
    arma::mat hessian_true = {{ 0.0, 0.0, -0.028454057 }, { 0.0, 0.0, 0.028454057 } };

    hessian.print( "Hessian: " );
    for( unsigned row = 0; row < hessian.n_rows; row++ )
        for( unsigned col = 0; col < hessian.n_cols; col++ )
            BOOST_CHECK_CLOSE( hessian( row, col ), 0.0, 1e-5 );
}   


test_suite* test_HF_dFock_core() {
    test_suite * ts=BOOST_TEST_SUITE( "CORE_KIT HF dFock core test" );
    ts->add( BOOST_TEST_CASE( & test_HF_H2_sto3g_J_matrix ) );
    ts->add( BOOST_TEST_CASE( & test_HF_H2_sto3g_K_matrix ) );
    ts->add( BOOST_TEST_CASE( & test_HF_H2_sto3g_gradient ) );
    ts->add( BOOST_TEST_CASE( & test_HF_H2_sto3g_dJ_matrix ) );
    //ts->add( BOOST_TEST_CASE( & test_HF_H2_sto3g_hessian));
    return ts;
}
