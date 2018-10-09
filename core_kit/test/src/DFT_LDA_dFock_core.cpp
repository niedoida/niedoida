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

void test_DFT_Slater_H2_sto3g_J_matrix( ) {
    std::shared_ptr<core::System> system  = create_system_H2_STO3G();

    std::unique_ptr<core::FockMatrixGenerator> FMG = create_simple_LDA_KS_Matrix_Generator( system )->make( system );
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

void test_DFT_Slater_H2_sto3g_K_matrix( ) {
    std::shared_ptr<core::System> system  = create_system_H2_STO3G();

    std::unique_ptr<core::FockMatrixGenerator> FMG = create_simple_LDA_KS_Matrix_Generator( system )->make( system );
    const std::size_t lumo_idx = system->no_electrons( core::SPIN_ALPHA );
    arma::mat C = { { -5.48934042900085e-01, 1.21146407906182e+00 },
        { -5.48934042900085e-01, -1.21146407906182e+00 }
    };
    arma::mat P = scf::density_matrix( C, lumo_idx );

    FMG->set_density_matrix( P, P );
    arma::mat K = FMG->exchange_matrix( core::SPIN_ALPHA );
    arma::mat K_true = {{ -3.89800936985952e-01 , -2.54999359473203e-01 }, {  -2.54999359473203e-01 ,  -3.89800937002619e-01  } };

    for( unsigned row = 0; row < K.n_rows; row++ )
        for( unsigned col = 0; col < K.n_cols; col++ )
            BOOST_CHECK_CLOSE( K( row, col ), K_true( row, col ), 1e-4 );
}

void test_DFT_Slater_H2_sto3g_d_exchange_matrix() {
    std::shared_ptr<core::System> system  = create_system_H2_STO3G();

    std::unique_ptr<core::FockMatrixGenerator> FMG = create_simple_LDA_KS_Matrix_Generator( system )->make( system );
    const std::size_t lumo_idx = system->no_electrons( core::SPIN_ALPHA );
    arma::mat C = { {-5.48934042889083e-01 , 1.21146407906680e+00 },
        { -5.48934042911087e-01, -1.21146407905683e+00 }
    };
    arma::vec eps = { -2.92202413080434e-01 , 4.55843902658774e-01 };
    arma::mat P = scf::density_matrix( C, lumo_idx );

    std::vector<unsigned> atoms;
    atoms.push_back( 0 );
    atoms.push_back( 1 );
    
    FMG->set_density_matrix( P, P );
    FMG->calc_matrix_core_gradient( atoms, P );
    std::vector<arma::cube> dF = FMG->exchange_matrix_core_gradient( );
    arma::mat F_not_perturbed = FMG->exchange_matrix( core::SPIN_ALPHA );
    
    unsigned atoms_no = atoms.size();
    double dR = 0.001;
    for( unsigned atom_ind = 0; atom_ind < atoms_no ; atom_ind++ ) {
        for( unsigned coord_ind = 0; coord_ind < 3 ; coord_ind++ ) {
            arma::mat dF_current = dF[atom_ind].slice( coord_ind );
    
            perturb_system( system, atom_ind, coord_ind, dR);
            FMG = create_simple_LDA_KS_Matrix_Generator( system )->make( system );
            FMG->set_density_matrix( P, P );
            FMG->calc_matrix_core_gradient( atoms, P );
            
            arma::mat F_perturbed = FMG->exchange_matrix( core::SPIN_ALPHA );
            arma::mat dF_numerical = ( F_perturbed - F_not_perturbed)/dR;
            std::vector<arma::cube> dF_local = FMG->exchange_matrix_core_gradient( );
            dF_current = ( dF_current + dF_local[atom_ind].slice(coord_ind) )/2;
            
            for( unsigned row = 0; row < dF_current.n_rows; row++ )
                for( unsigned col = 0; col < dF_current.n_cols; col++ ) 
                    if ( std::abs(dF_numerical(row, col)) > 0.01 ) 
                        BOOST_CHECK_CLOSE( -dF_current( row, col ), dF_numerical( row, col ) , 1e-2 );
                    
            
            //unperturb system :)
            perturb_system( system, atom_ind, coord_ind, -dR);
        }
        
    }

}

void test_DFT_SVWN_H2_sto3g_K_matrix( ) {
    std::shared_ptr<core::System> system  = create_system_H2_STO3G();

    std::unique_ptr<core::FockMatrixGenerator> FMG = create_simple_LDA_KS_Matrix_Generator( system, SVWN )->make( system );
    const std::size_t lumo_idx = system->no_electrons( core::SPIN_ALPHA );
    arma::mat C = { { -5.48934042900085e-01, 1.21146407906182e+00 },
        { -5.48934042900085e-01, -1.21146407906182e+00 }
    };
    arma::mat P = scf::density_matrix( C, lumo_idx );

    FMG->set_density_matrix( P, P );
    arma::mat K = FMG->exchange_matrix( core::SPIN_ALPHA );
    arma::mat K_true = {{ -4.44924974125484e-01 , -2.91239781930903e-01 }, {  -2.91239781930903e-01 , -4.44924974153297e-01  } };

    for( unsigned row = 0; row < K.n_rows; row++ )
        for( unsigned col = 0; col < K.n_cols; col++ )
            BOOST_CHECK_CLOSE( K( row, col ), K_true( row, col ), 1e-4 );
}

void test_DFT_SVWN_H2_sto3g_d_exchange_matrix() {
    std::shared_ptr<core::System> system  = create_system_H2_STO3G();

    std::unique_ptr<core::FockMatrixGenerator> FMG = create_simple_LDA_KS_Matrix_Generator( system, SVWN )->make( system );
    const std::size_t lumo_idx = system->no_electrons( core::SPIN_ALPHA );
    arma::mat C = { {-5.48934042889083e-01 , 1.21146407906680e+00 },
        { -5.48934042911087e-01, -1.21146407905683e+00 }
    };
    arma::vec eps = { -3.47263859460857e-01 , 4.00415009188428e-01 };
    arma::mat P = scf::density_matrix( C, lumo_idx );

    std::vector<unsigned> atoms;
    atoms.push_back( 0 );
    atoms.push_back( 1 );
    
    FMG->set_density_matrix( P, P );
    FMG->calc_matrix_core_gradient( atoms, P );
    std::vector<arma::cube> dF = FMG->exchange_matrix_core_gradient( );
    arma::mat F_not_perturbed = FMG->exchange_matrix( core::SPIN_ALPHA );
    
    unsigned atoms_no = atoms.size();
    double dR = 0.001;
    for( unsigned atom_ind = 0; atom_ind < atoms_no ; atom_ind++ ) {
        for( unsigned coord_ind = 0; coord_ind < 3 ; coord_ind++ ) {
            arma::mat dF_current = dF[atom_ind].slice( coord_ind );
            
            perturb_system( system, atom_ind, coord_ind, dR);
            FMG = create_simple_LDA_KS_Matrix_Generator( system, SVWN )->make( system );
            FMG->set_density_matrix( P, P );
            FMG->calc_matrix_core_gradient( atoms, P );
            
            arma::mat F_perturbed = FMG->exchange_matrix( core::SPIN_ALPHA );
            arma::mat dF_numerical = ( F_perturbed - F_not_perturbed)/dR;
            std::vector<arma::cube> dF_local = FMG->exchange_matrix_core_gradient( );
            dF_current = ( dF_current + dF_local[atom_ind].slice(coord_ind) )/2;
            
            for( unsigned row = 0; row < dF_current.n_rows; row++ )
                for( unsigned col = 0; col < dF_current.n_cols; col++ ) 
                    if ( std::abs(dF_numerical(row, col)) > 0.01 ) 
                        BOOST_CHECK_CLOSE( -dF_current( row, col ), dF_numerical( row, col ) , 1e-2 );
                    
            
            //unperturb system :)
            perturb_system( system, atom_ind, coord_ind, -dR);
        }
        
    }

}

void test_DFT_Slater_H2O_3_21G_d_exchange_matrix( ) {
    std::shared_ptr<core::System> system  = create_system_H2O_3_21G();
    std::shared_ptr<const core::FockMatrixGeneratorFactory> fm_gen = create_simple_LDA_KS_Matrix_Generator( system );
    std::unique_ptr<core::FockMatrixGenerator> FMG = fm_gen->make( system );
    const std::size_t lumo_idx = system->no_electrons( core::SPIN_ALPHA );
    arma::mat C = {{  2.68201450e-03,  1.16396163e-01, -2.19412707e-01,  1.25516270e-01,
            2.29254420e-11, -9.66705641e-02,  1.06462832e-01, -9.32978961e-01,
            9.22928323e-01,  3.55736331e-10, -3.42003935e-01,  2.16470891e-01,
            2.74353562e-01},
         {  7.16397997e-03,  4.11909253e-02, -2.29695853e-01,  1.51016049e-01,
            2.45422205e-10, -7.85525459e-01,  1.00840877e+00,  8.54482568e-01,
           -5.92043543e-01, -9.33950881e-11, -4.69964642e-02,  4.36474303e-01,
            3.31132407e-01},
         {  2.68201451e-03,  1.16396163e-01,  2.19412707e-01,  1.25516270e-01,
            4.10121286e-11, -9.66705642e-02, -1.06462832e-01,  9.32978960e-01,
            9.22928324e-01,  3.52573989e-10, -3.42003935e-01, -2.16470891e-01,
            2.74353562e-01},
         {  7.16397996e-03,  4.11909253e-02,  2.29695853e-01,  1.51016049e-01,
            3.10860226e-10, -7.85525459e-01, -1.00840877e+00, -8.54482567e-01,
           -5.92043544e-01,  2.32331914e-11, -4.69964642e-02, -4.36474303e-01,
            3.31132407e-01},
         {  9.81029759e-01, -2.25323903e-01, -1.75724117e-11,  1.12607921e-01,
            9.33600932e-11, -1.08733573e-01, -5.41706049e-12, -4.14014328e-11,
            4.93724532e-02,  4.60486201e-11, -5.31744289e-02,  4.01893980e-12,
           -9.51944376e-02},
         {  1.07611811e-01,  2.08119680e-01,  2.64883498e-12, -9.00503609e-02,
           -5.24505058e-11,  6.16191562e-02,  2.52016506e-12,  6.28167897e-11,
           -9.81701559e-02, -1.51337747e-10,  1.43739735e-01, -3.60468732e-12,
            1.62335540e+00},
         { -3.58152232e-13,  2.66833017e-11, -4.07706232e-01,  2.50965947e-11,
           -6.82144919e-13,  1.63762068e-11, -3.88588188e-01,  2.12662387e-01,
            9.66893701e-11, -7.41790985e-11,  9.36315909e-11,  1.02773849e+00,
           -9.74895376e-12},
         {  3.57083436e-03,  1.27245027e-01,  2.95362249e-11,  4.27937688e-01,
            1.36175509e-10,  2.85234413e-01,  3.01689119e-11,  1.90706619e-10,
           -3.33711632e-01,  7.67298215e-10, -9.78568496e-01,  8.73360393e-11,
            1.50086763e-01},
         {  2.58159385e-13,  4.48102372e-11, -1.01195865e-11, -2.30801195e-10,
            5.24284245e-01,  1.04063325e-10,  2.48031430e-11,  1.94714601e-11,
           -6.84329900e-11,  1.02775204e+00,  8.39195699e-10,  7.58620922e-11,
            1.17923368e-11},
         { -4.26962336e-02,  6.76400102e-01,  5.92847376e-11, -5.08141989e-01,
           -5.16068613e-10,  9.19481054e-01,  5.88514470e-11,  6.77999826e-12,
            9.62978287e-02, -7.44680987e-11,  1.58271648e-01, -1.69421558e-11,
           -1.89887970e+00},
         { -9.74112237e-13,  2.11990842e-11, -3.45131491e-01,  3.87232476e-11,
            1.83312506e-11,  6.89679232e-11, -7.14109914e-01,  1.87857357e-01,
            1.29722595e-10,  1.05807244e-10, -1.25990865e-10, -1.42089301e+00,
            7.12530328e-12},
         { -7.07786868e-03,  1.22781062e-01,  3.31211454e-11,  4.67055839e-01,
            8.55368320e-11,  4.74442417e-01,  6.02213296e-11,  7.98437976e-11,
           -9.47546391e-02, -9.48959423e-10,  1.17070613e+00, -1.04983028e-10,
           -4.71619340e-01},
         { -3.76279087e-12,  4.31793015e-11, -1.21595833e-11, -2.87398135e-10,
            6.29294204e-01,  1.64324038e-10,  7.49989378e-12, -1.96392690e-11,
            1.15289678e-10, -9.67024229e-01, -7.85360938e-10, -6.73027333e-11,
           -2.07731467e-11}};

    arma::mat P = scf::density_matrix( C, lumo_idx );

    arma::vec eps = {-18.38362731, -0.81731845, -0.38085042, -0.20783405, -0.13270241,
       0.09702211,  0.18315118,  0.92433665,  0.97612789,  1.41403116,
       1.50208121,  1.60478263,  2.69591184};

    std::vector<unsigned> atoms;
    atoms.push_back( 0 );
    atoms.push_back( 1 );
	atoms.push_back( 2 );
    FMG->set_density_matrix( P, P );
    FMG->calc_matrix_core_gradient( atoms, P );
    std::vector<arma::cube> dF = FMG->exchange_matrix_core_gradient( );
    arma::mat F_not_perturbed = FMG->exchange_matrix( core::SPIN_ALPHA );
    
    unsigned atoms_no = atoms.size();
    double dR = 0.001;
    for( unsigned atom_ind = 0; atom_ind < atoms_no ; atom_ind++ ) {
        for( unsigned coord_ind = 0; coord_ind < 3 ; coord_ind++ ) {
            arma::mat dF_current = dF[atom_ind].slice( coord_ind );
            perturb_system( system, atom_ind, coord_ind, dR);
            FMG = create_simple_LDA_KS_Matrix_Generator( system )->make( system );
            FMG->set_density_matrix( P, P );
            FMG->calc_matrix_core_gradient( atoms, P );
            
            arma::mat F_perturbed = FMG->exchange_matrix( core::SPIN_ALPHA );
            arma::mat dF_numerical = ( F_perturbed - F_not_perturbed)/dR;
            std::vector<arma::cube> dF_local = FMG->exchange_matrix_core_gradient( );
            dF_current = ( dF_current + dF_local[atom_ind].slice(coord_ind) )/2;
            
            for( unsigned row = 0; row < dF_current.n_rows; row++ )
                for( unsigned col = 0; col < dF_current.n_cols; col++ ) 
                    if ( std::abs(dF_numerical(row, col)) > 0.01 ) 
                        BOOST_CHECK_CLOSE( -dF_current( row, col ), dF_numerical( row, col ) , 5e-1 ); 
                    
            
            //unperturb system :)
            perturb_system( system, atom_ind, coord_ind, -dR);
        }
        
    }

}

test_suite* test_DFT_LDA_dFock_core() {
    test_suite * ts=BOOST_TEST_SUITE( "CORE_KIT DFT LDA dFock core test" );
    ts->add( BOOST_TEST_CASE( & test_DFT_Slater_H2_sto3g_J_matrix ) );
    ts->add( BOOST_TEST_CASE( & test_DFT_Slater_H2_sto3g_K_matrix ) );
    ts->add( BOOST_TEST_CASE( & test_DFT_Slater_H2_sto3g_d_exchange_matrix ) );
    ts->add( BOOST_TEST_CASE( & test_DFT_SVWN_H2_sto3g_K_matrix ) );
    ts->add( BOOST_TEST_CASE( & test_DFT_SVWN_H2_sto3g_d_exchange_matrix ) );
    ts->add( BOOST_TEST_CASE( & test_DFT_Slater_H2O_3_21G_d_exchange_matrix ) );
    return ts;
}
