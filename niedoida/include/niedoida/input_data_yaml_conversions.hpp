/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef INPUT_DATA_YAML_CONVERSIONS_HPP
#define INPUT_DATA_YAML_CONVERSIONS_HPP

#include<yaml-cpp/yaml.h>

#include<niedoida/input_data.hpp>
#include<boost/algorithm/string.hpp>
#include<io_kit/log.hpp>

namespace YAML {
    template<>
    struct convert<niedoida::InputData::Theory> {
        static bool decode( const Node& n, niedoida::InputData::Theory& v )
        {
            const std::string s = n.as<std::string>();

            if( s == "hf" ) v = niedoida::InputData::THEORY_HF;
            else if( s == "hfvwn" ) v = niedoida::InputData::THEORY_HFVWN;
            else if( s == "slater" ) v = niedoida::InputData::THEORY_SLATER;
            else if( s == "svwn" ) v = niedoida::InputData::THEORY_SVWN;
            else if( s == "slyp" ) v = niedoida::InputData::THEORY_SLYP;
            else if( s == "becke" ) v = niedoida::InputData::THEORY_BECKE;
            else if( s == "blyp" ) v = niedoida::InputData::THEORY_BLYP;
            else if( s == "pw91" ) v = niedoida::InputData::THEORY_PW91;
            else if( s == "pbe" ) v = niedoida::InputData::THEORY_PBE;
            else if( s == "b3lyp" ) v = niedoida::InputData::THEORY_B3LYP;
            else if( s == "pbe0" ) v = niedoida::InputData::THEORY_PBE0;
            else if( s == "mpw91" ) v = niedoida::InputData::THEORY_MPW91;
            else if( s == "mpw91lyp" ) v = niedoida::InputData::THEORY_MPW91LYP;
            else if( s == "mb3lyp" ) v = niedoida::InputData::THEORY_mB3LYP;
            else if( s == "b3lyp5" ) v = niedoida::InputData::THEORY_B3LYP5;
            else if( s == "b3pw91" ) v = niedoida::InputData::THEORY_B3PW91;
            else if( s == "b2plyp" ) v = niedoida::InputData::THEORY_B2PLYP;
            else if( s == "mpw2plyp" ) v = niedoida::InputData::THEORY_mPW2PLYP;
            else if( s == "eh" ) v = niedoida::InputData::THEORY_EH;
            else return false;

            return true;
        }
    };

    template<>
    struct convert<niedoida::io::Logger::VerbosityLevel> {
        static bool decode( const Node& n, niedoida::io::Logger::VerbosityLevel& v )
        {
            const std::string s = n.as<std::string>();

            if( s == "terse" ) v = niedoida::io::Logger::TERSE;
            else if( s == "normal" ) v = niedoida::io::Logger::NORMAL;
            else if( s == "verbose" ) v = niedoida::io::Logger::VERBOSE;
            else if( s == "debug" ) v = niedoida::io::Logger::DEBUG;
            else return false;

            return true;
        }
    };

    template<>
    struct convert<niedoida::InputData::DispersionCorrection> {
        static bool decode( const Node& n, niedoida::InputData::DispersionCorrection& v )
        {
            const std::string s = n.as<std::string>();

            if( s == "none" ) v = niedoida::InputData::DISPERSION_CORRECTION_NONE;
            else if( s == "d3" ) v = niedoida::InputData::DISPERSION_CORRECTION_GRIMME_D3;
            else return false;

            return true;
        }
    };

    template<>
    struct convert<niedoida::InputData::RunType> {
        static bool decode( const Node& n, niedoida::InputData::RunType& v )
        {
            const std::string s = n.as<std::string>();

            if( s == "single_point" )
                v = niedoida::InputData::RUN_TYPE_SINGLE_POINT;
            else if( s == "geometry_optimization" )
                v = niedoida::InputData::RUN_TYPE_GEOMETRY_OPTIMIZATION;
            else
                return false;

            return true;
        }
    };

    template<>
    struct convert<arma::vec> {
        static bool decode( const Node& n, arma::vec& v )
        {
            if( !n.IsSequence() )
                return false;

            const std::size_t s = n.size();
            v.set_size( s );
	    try {
	      for( std::size_t i = 0; i < s; ++i )
		v( i ) = n[i].as<double>();
	    } catch (YAML::BadConversion) {
	      return false;
	    }
            return true;
        }
    };

    template<>
    struct convert<niedoida::InputData::AtomInfo> {
        static bool decode( const Node& n, niedoida::InputData::AtomInfo& atom_info)
        {
	    try {
	      if( !n.IsScalar() )
                return false;
	      const std::string entry = n.as<std::string>();
	      std::vector<std::string> tokens;
	      boost::split(tokens, entry, boost::is_any_of( "\t " ), boost::token_compress_on );
	      if( tokens.size() < 4 || tokens.size() > 5 )
		return false;
	      unsigned atomic_weight = 0;
	      std::size_t pos;
	      if ( tokens.size() == 5 ) {
		const std::string atomic_weight_token = tokens.front();
                atomic_weight = std::stoi(atomic_weight_token, &pos);
		if ( pos != atomic_weight_token.size())
		  return false;
                tokens.erase( tokens.begin() );
	      }
	      const std::string element_token = tokens[0];
	      const std::string x_token = tokens[1];
	      const std::string y_token = tokens[2];
	      const std::string z_token = tokens[3];
	      atom_info.label =  element_token;
	      atom_info.isotope = &(niedoida::core::get_isotope_by_symbol( element_token, atomic_weight ));	     
	      atom_info.coords(0) = std::stod(x_token, &pos);
	      if ( pos != x_token.size())
		return false;
	      atom_info.coords(1) = std::stod(y_token, &pos);
	      if ( pos != y_token.size())
		return false;
	      atom_info.coords(2) = std::stod(z_token, &pos);	      
	      if ( pos != z_token.size())
		return false;
	      return true;
	    } catch (std::invalid_argument) {
	      return false;
	    } catch (std::out_of_range) {
	      return false;
	    }
        }
    };


    template<>
    struct convert<niedoida::InputData::ChargeInfo> {
        static bool decode( const Node& n, niedoida::InputData::ChargeInfo& charge_info )
        {
	    try {
	      if( !n.IsScalar() )
                return false;
	      const std::string entry = n.as<std::string>();
	      std::vector<std::string> tokens;
	      boost::split(tokens, entry, boost::is_any_of( "\t " ), boost::token_compress_on);	      
	      if( tokens.size() != 4 )
                return false;
	      const std::string x_token = tokens[0];
	      const std::string y_token = tokens[1];
	      const std::string z_token = tokens[2];
	      const std::string charge_token = tokens[3];
	      std::size_t pos;
	      charge_info.coords(0) = std::stod(x_token, &pos);
	      if ( pos != x_token.size())
		return false;
	      charge_info.coords(1) = std::stod(y_token, &pos);
	      if ( pos != y_token.size())
		return false;
	      charge_info.coords(2) = std::stod(z_token, &pos);	      
	      if ( pos != z_token.size())
		return false;
	      charge_info.charge_value = std::stod(charge_token, &pos);	      
	      if ( pos != charge_token.size())
		return false;
	      return true;
	    } catch (std::invalid_argument) {
	      return false;
	    } catch (std::out_of_range) {
	      return false;
	    }
        }
    };


    template<>
    struct convert<niedoida::InputData::SCFParams::Method> {
        static bool decode( const Node& n, niedoida::InputData::SCFParams::Method& v )
        {
            const std::string s = n.as<std::string>();

            if( s == "rhf" ) v = niedoida::InputData::SCFParams::METHOD_RHF;
            else if( s == "rohf" ) v = niedoida::InputData::SCFParams::METHOD_ROHF;
            else if( s == "uhf" ) v = niedoida::InputData::SCFParams::METHOD_UHF;
            else return false;

            return true;
        }
    };

    template<>
    struct convert<niedoida::InputData::SCFParams::InitialGuess> {
        static bool decode( const Node& n, niedoida::InputData::SCFParams::InitialGuess& v )
        {
            const std::string s = n.as<std::string>();

            if( s == "core_hamiltonian" ) v = niedoida::InputData::SCFParams::INITIAL_GUESS_HCORE;
            else if( s == "fragments" ) v = niedoida::InputData::SCFParams::INITIAL_GUESS_FRAGMENTS;
            else return false;

            return true;
        }
    };

    template<>
    struct convert<niedoida::InputData::SCFParams::ConvergenceAccelerator> {
        static bool decode( const Node& n, niedoida::InputData::SCFParams::ConvergenceAccelerator& v )
        {
            const std::string s = n.as<std::string>();

            if( s == "none" ) v = niedoida::InputData::SCFParams::NULL_CONVERGENCE_ACCELERATOR;
            else if( s == "diis" ) v = niedoida::InputData::SCFParams::DIIS_CONVERGENCE_ACCELERATOR;
            else return false;

            return true;
        }
    };

    template<>
    struct convert<niedoida::InputData::SCFParams::Occupations> {
        static bool decode( const Node& n, niedoida::InputData::SCFParams::Occupations& v )
        {
            const std::string s = n.as<std::string>();

            if( s == "aufbau" ) v = niedoida::InputData::SCFParams::OCCUPATIONS_AUFBAU;
            else if( s == "fermi" ) v = niedoida::InputData::SCFParams::OCCUPATIONS_FERMI;
            else if( s == "maximum_overlap" ) v = niedoida::InputData::SCFParams::OCCUPATIONS_MAXIMUM_OVERLAP;
            else return false;

            return true;
        }
    };

    template<>
    struct convert<niedoida::InputData::SCFParams::SymmetryLevel> {
        static bool decode( const Node& n, niedoida::InputData::SCFParams::SymmetryLevel& v )
        {
            const std::string s = n.as<std::string>();

            if( s == "none" ) v = niedoida::InputData::SCFParams::SYMMETRY_LEVEL_NONE;
            else if( s == "simple" ) v = niedoida::InputData::SCFParams::SYMMETRY_LEVEL_SIMPLE;
            else return false;

            return true;
        }
    };

    template<>
    struct convert<boost::optional<double>> {
        static bool decode( const Node& n, boost::optional<double>& v )
        {
	  try {
	    v = n.as<double>();
            return true;
	  } catch (YAML::BadConversion) {
	    return false;
	  }
        }
    };

    template<>
    struct convert<niedoida::InputData::CDFTParams::PopulationType> {
        static bool decode( const Node& n, niedoida::InputData::CDFTParams::PopulationType& v )
        {
            const std::string s = n.as<std::string>();

            if( s == "lowdin" ) v = niedoida::InputData::CDFTParams::CDFT_POPULATION_LOWDIN;
            else if( s == "becke" ) v = niedoida::InputData::CDFTParams::CDFT_POPULATION_BECKE;
            else return false;

            return true;
        }
    };

    template<>
    struct convert<niedoida::InputData::Units::EnergyUnit> {
        static bool decode( const Node& n, niedoida::InputData::Units::EnergyUnit& v )
        {
            const std::string s = n.as<std::string>();

            if( s == "hartree" ) v = niedoida::InputData::Units::ENERGY_UNIT_HARTREE;
            else if( s == "eV" ) v = niedoida::InputData::Units::ENERGY_UNIT_EV;
            else return false;

            return true;
        }
    };

    template<>
    struct convert<niedoida::InputData::Units::LengthUnit> {
        static bool decode( const Node& n, niedoida::InputData::Units::LengthUnit& v )
        {
            const std::string s = n.as<std::string>();

            if( s == "angstrom" ) v = niedoida::InputData::Units::LENGTH_UNIT_ANGSTROM;
            else if( s == "bohr" ) v = niedoida::InputData::Units::LENGTH_UNIT_BOHR;
            else return false;

            return true;
        }
    };

    template<>
    struct convert<niedoida::InputData::Units::StorageUnit> {
        static bool decode( const Node& n, niedoida::InputData::Units::StorageUnit& v )
        {
            const std::string s = n.as<std::string>();

            if( s == "byte" ) v = niedoida::InputData::Units::STORAGE_UNIT_BYTE;
            else if( s == "kilobyte" ) v = niedoida::InputData::Units::STORAGE_UNIT_KILOBYTE;
            else if( s == "megabyte" ) v = niedoida::InputData::Units::STORAGE_UNIT_MEGABYTE;
            else if( s == "gigabyte" ) v = niedoida::InputData::Units::STORAGE_UNIT_GIGABYTE;
            else return false;

            return true;
        }
    };

    template<>
    struct convert<niedoida::InputData::GeometryOptimizationParams::Method> {
        static bool decode( const Node& n, niedoida::InputData::GeometryOptimizationParams::Method& v )
        {
            const std::string s = n.as<std::string>();

            if( s == "nm" ) v = niedoida::InputData::GeometryOptimizationParams::NM_METHOD;
            else if( s == "lmvm" ) v = niedoida::InputData::GeometryOptimizationParams::LMVM_METHOD;
            else return false;

            return true;
        }
    };

    template<>
    struct convert<niedoida::InputData::GeometryOptimizationParams::Coords> {
        static bool decode( const Node& n, niedoida::InputData::GeometryOptimizationParams::Coords& v )
        {
            const std::string s = n.as<std::string>();

            if( s == "cartesian" ) v = niedoida::InputData::GeometryOptimizationParams::CARTESIAN_COORDS;
            else if( s == "delocalized_internal" ) v = niedoida::InputData::GeometryOptimizationParams::DELOCALIZED_INTERNAL_COORDS;
            else return false;

            return true;
        }
    };

    template<>
    struct convert<niedoida::InputData::IntegrationParams::Engine> {
        static bool decode( const Node& n, niedoida::InputData::IntegrationParams::Engine& v )
        {
            const std::string s = n.as<std::string>();

            if( s == "naive" ) v = niedoida::InputData::IntegrationParams::NAIVE_ENGINE;
            else if( s == "os1" ) v = niedoida::InputData::IntegrationParams::OS1_ENGINE;
            else return false;

            return true;
        }
    };

    template<>
    struct convert<niedoida::InputData::IntegrationParams::Storage> {
        static bool decode( const Node& n, niedoida::InputData::IntegrationParams::Storage& v )
        {
            const std::string s = n.as<std::string>();

            if( s == "none" ) v = niedoida::InputData::IntegrationParams::NO_STORAGE;
            else if( s == "local" ) v = niedoida::InputData::IntegrationParams::LOCAL_STORAGE;
            else if( s == "shared" ) v = niedoida::InputData::IntegrationParams::SHARED_STORAGE;
            else if( s == "in_core" ) v = niedoida::InputData::IntegrationParams::IN_CORE_STORAGE;
            else return false;

            return true;
        }
    };

    template<>
    struct convert<niedoida::InputData::MollerPlessetParams::Type> {
        static bool decode( const Node& n, niedoida::InputData::MollerPlessetParams::Type& v )
        {
            const std::string s = n.as<std::string>();

            if( s == "conventional" ) v = niedoida::InputData::MollerPlessetParams::CONVENTIONAL_MP2;
            else if( s == "imp" ) v = niedoida::InputData::MollerPlessetParams::CONVENTIONAL_MP2_IMP;
            else if( s == "minmem" ) v = niedoida::InputData::MollerPlessetParams::CONVENTIONAL_MP2_MINMEM;
            else if( s == "sec_imp" ) v = niedoida::InputData::MollerPlessetParams::CONVENTIONAL_MP2_IMP_2;
            else if( s == "laplace_mo" ) v = niedoida::InputData::MollerPlessetParams::LT_MO_MP2;
            else if( s == "laplace_ao" ) v = niedoida::InputData::MollerPlessetParams::LT_AO_MP2;
            else if( s == "laplace_ao_ls" ) v = niedoida::InputData::MollerPlessetParams::LS_LT_AO_MP2;
            else if( s == "laplace_cholesky_df" ) v = niedoida::InputData::MollerPlessetParams::LT_CD_DF_MP2;
            else return false;

            return true;
        }
    };

    template<>
    struct convert<niedoida::InputData::MollerPlessetParams::QuadratureType> {
        static bool decode( const Node& n, niedoida::InputData::MollerPlessetParams::QuadratureType& v )
        {
            const std::string s = n.as<std::string>();

            if( s == "fitted_simple" ) v = niedoida::InputData::MollerPlessetParams::FITTED_SIMPLE_QUADRATURE;
            else if( s == "fitted_normalized" ) v = niedoida::InputData::MollerPlessetParams::FITTED_NORMALIZED_QUADRATURE;
            else if( s == "em_static" ) v = niedoida::InputData::MollerPlessetParams::EM_STATIC_QUADRATURE;
            else if( s == "em_simple" ) v = niedoida::InputData::MollerPlessetParams::EM_SIMPLE_QUADRATURE;
            else if( s == "em_normalized" ) v = niedoida::InputData::MollerPlessetParams::EM_NORMALIZED_QUADRATURE;
            else return false;

            return true;
        }
    };

    template<>
    struct convert<niedoida::InputData::TDParams::Type> {
        static bool decode( const Node& n, niedoida::InputData::TDParams::Type& v )
        {
            const std::string s = n.as<std::string>();

            if( s == "tda" ) v = niedoida::InputData::TDParams::TDA;
            else if( s == "rpa" ) v = niedoida::InputData::TDParams::RPA;
            else return false;

            return true;
        }
    };

    template<>
    struct convert<niedoida::InputData::GridType> {
        static bool decode( const Node& n, niedoida::InputData::GridType& v )
        {
            const std::string s = n.as<std::string>();

            if( s == "simple" ) v = niedoida::InputData::SIMPLE_GRID;
            else if( s == "pruned" ) v = niedoida::InputData::PRUNED_GRID;
            else if( s == "angular_s_adaptive" ) v = niedoida::InputData::ANGULAR_S_ADAPTIVE_GRID;
            else if( s == "angular_rho0_adaptive" ) v = niedoida::InputData::ANGULAR_RHO0_ADAPTIVE_GRID;
            else if( s == "angular_vxc0_adaptive" ) v = niedoida::InputData::ANGULAR_VXC0_ADAPTIVE_GRID;
            else if( s == "full_rho0_adaptive" ) v = niedoida::InputData::FULL_RHO0_ADAPTIVE_GRID;
            else return false;

            return true;
        }
    };

    template<>
    struct convert<niedoida::InputData::AngularGridType> {
        static bool decode( const Node& n, niedoida::InputData::AngularGridType& v )
        {
            const std::string s = n.as<std::string>();

            if( s == "gauss_legendre" ) v = niedoida::InputData::GAUSS_LEGENDRE_ANGULAR_GRID;
            else if( s == "lebedev_laikov" ) v = niedoida::InputData::LEBEDEV_LAIKOV_ANGULAR_GRID;
            else return false;

            return true;
        }
    };

    template<>
    struct convert<niedoida::InputData::RadialMapping> {
        static bool decode( const Node& n, niedoida::InputData::RadialMapping& v )
        {
            const std::string s = n.as<std::string>();

            if( s == "logm" ) v = niedoida::InputData::LOGM_RADIAL_MAPPING;
            else if( s == "koester" ) v = niedoida::InputData::KOESTER_RADIAL_MAPPING;
            else return false;

            return true;
        }
    };

}

#endif
