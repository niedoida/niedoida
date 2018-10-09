/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "test_systems.hpp"
#include "core_test_utils.hpp"

std::shared_ptr<niedoida::core::System> create_simple_system( std::vector<std::string> symbols,
        std::vector<arma::vec> input_coords,
        std::vector<std::string> labels,
        std::stringstream &basis ) {
    using namespace niedoida;

    std::shared_ptr<core::System> system( new core::System );
    const std::size_t n = symbols.size();

    for( unsigned atomInd = 0; atomInd < n ; atomInd++ ) {
        system->atoms.push_back( new core::Atom( core::get_isotope_by_symbol( symbols[atomInd] ),
                                 arma::vec::fixed<3>( input_coords[atomInd] ),
                                 labels[atomInd] ) );
    }

    arma::mat coords( 3, n );
    std::vector<unsigned> q( n );

    for( unsigned i = 0; i < n; ++i ) {
        for( unsigned j = 0; j < 3; ++j )
            coords( j, i ) = system->atoms[i]->coords[j];

        q[i] = system->atoms[i]->isotope->element->atomic_number;

    }
    system->symmetry_info.reset( new symmetry::SymmetryInfo( coords, q, 1e-6 ) );

    std::unique_ptr<core::BasisSetBuilder> basis_set_builder =
        create_bs_builder( "g94",
                           basis );

    for( unsigned a = 0; a < system->atoms.size(); ++a ) {
        core::AtomicBasisSet& abs =
            system->basis_set.add_atomic_basis_set( *system->atoms[a] );

        basis_set_builder->build_atomic_basis_set( abs );
    }

    system->charge = 0;
    system->multiplicity = 1;
    system->uniform_electric_field = arma::vec( "0.0 , 0.0 , 0.0" );

    return system;
}

void perturb_system( std::shared_ptr<niedoida::core::System> system,
                     unsigned atom_ind, unsigned coord_ind, double perturbation ) {

    system->atoms[atom_ind]->coords[coord_ind] += perturbation;
}

std::shared_ptr<niedoida::core::System> create_system_H2_STO3G() {
    std::vector<std::string> symbols { "H", "H" };
    std::vector<arma::vec> coords { arma::vec( "0.0 , 0.0 , -0.7" ), arma::vec( "0.0 , 0.0 , 0.7" ) };
    std::vector<std::string> labels { "H1", "H2" };
    std::stringstream basis;

    basis <<        "BASIS=\"STO-3G\" \n"
          <<"H     0 \n"
          <<"S   3   1.00 \n"
          <<"      3.42525091             0.15432897  \n"
          <<"      0.62391373             0.53532814  \n"
          <<"      0.16885540             0.44463454  \n"
          <<"****\n";

    return create_simple_system( symbols, coords, labels, basis );
}

std::shared_ptr<niedoida::core::System> create_system_H2_3_21G() {
    std::vector<std::string> symbols { "H", "H" };
    std::vector<arma::vec> coords { arma::vec( "0.0 , 0.0 , -0.7" ), arma::vec( "0.0 , 0.0 , 0.7" ) };
    std::vector<std::string> labels { "H1", "H2" };
    std::stringstream basis;

    basis << "BASIS=\"3-21G\" \n"
          <<"H     0 \n"
          <<"S   2   1.00 \n"
          <<"      5.4471780              0.1562850  \n"
          <<"      0.8245470              0.9046910  \n"
          <<"S   1   1.00 \n"
          <<"      0.1831920              1.0000000  \n"
          <<"****\n";

    return create_simple_system( symbols, coords, labels, basis );
}

std::shared_ptr<niedoida::core::System> create_system_H2O_3_21G() {
    std::vector<std::string> symbols { "H", "H", "O" };
    std::vector<arma::vec> coords { arma::vec( "1.5 , 0.4 , 0.0" ), arma::vec( "-1.5 , 0.4 , 0.0" ),
                                    arma::vec( "0.0 , -0.78 , 0.0" )};
    std::vector<std::string> labels { "H1", "H2", "O1" };
    std::stringstream basis;

    basis << "BASIS=\"3-21G\" \n"
          <<"H     0 \n"
          <<"S   2   1.00 \n"
          <<"      5.4471780              0.1562850  \n"
          <<"      0.8245470              0.9046910  \n"
          <<"S   1   1.00 \n"
          <<"      0.1831920              1.0000000  \n"
          <<"****\n"
          <<"O     0 \n"
          <<"S   3   1.00 \n"
          <<"    322.0370000              0.0592394 \n"
          <<"     48.4308000              0.3515000 \n"
          <<"     10.4206000              0.7076580 \n"
          <<"SP   2   1.00 \n"
          <<"      7.4029400             -0.4044530              0.2445860 \n"
          <<"      1.5762000              1.2215600              0.8539550 \n"
          <<"SP   1   1.00 \n"
          <<"      0.3736840              1.0000000              1.0000000 \n"
          <<"**** \n";

    return create_simple_system( symbols, coords, labels, basis );
}
