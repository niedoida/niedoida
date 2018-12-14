/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_NIEDOIDA_HPP
#define NIEDOIDA_NIEDOIDA_HPP

#include <memory>

#include <armadillo>

#include <boost/variant.hpp>

#include "compat_kit/molden_file_builder.hpp"
#include "core_kit/ao_value_engine_factory.hpp"
#include "core_kit/integral_engine_factory.hpp"
#include "core_kit/initial_guess_factory.hpp"
#include "core_kit/occupations_factory.hpp"
#include "core_kit/system.hpp"
#include "grid_kit/grid_factory.hpp"
#include "gto_kit/gto_utils.hpp"
#include "gto_kit/xc_integral_engine_factory.hpp"
#include "scf_kit/convergence_accelerator_factory.hpp"
#include "scf_kit/scf_factory.hpp"
#include "td_kit/xc_kernel_generator.hpp"

#include "config.hpp"
#include "input_data.hpp"

#include <petsctao.h>

namespace niedoida {
    bool check_input( const InputData& id, const Config& cfg );
    unsigned storage_unit_factor(const InputData& input_data);
    std::shared_ptr<const core::OneElectronIntegralEngineFactory> create_one_e_ie_factory(
        const Config&,
        const InputData& );
    std::shared_ptr<const core::TwoElectronIntegralEngineFactory> create_two_e_ie_factory(
        const Config&,
        const InputData& );
    std::shared_ptr<const core::QuasiTwoElectronIntegralEngineFactory> create_quasi_two_e_ie_factory(
        const Config&,
        const InputData& );
    std::shared_ptr<const core::PoissonTwoElectronIntegralEngineFactory> create_poisson_two_e_ie_factory(
        const Config&,
        const InputData& );
    std::shared_ptr<const core::PostHFQuasiTwoElectronIntegralEngineFactory> create_posthf_quasi_two_e_ie_factory(
        const Config&,
        const InputData& );

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

    std::shared_ptr<DFTMethod> create_dft_method( const InputData& input_data );

    std::shared_ptr<const grid::GridFactory> create_grid_factory(
        const InputData& input_data,
        boost::variant<xc::NoneXCFunctional, xc::LocalXCFunctional, xc::GGAXCFunctional> xc_functional,
        std::shared_ptr<const core::AOValueEngineFactory> ao_value_engine_factory );

    std::shared_ptr<const core::QuasiOneElectronIntegralEngineFactory>
    create_xc_ie_factory(
        const InputData& input_data,
        boost::variant<xc::NoneXCFunctional, xc::LocalXCFunctional, xc::GGAXCFunctional> xc_functional,
        std::shared_ptr<const grid::GridFactory> grid_factory,
        std::shared_ptr<const core::AOValueEngineFactory> ao_value_engine_factory );

    std::shared_ptr<const core::InitialGuessFactory> create_initial_guess_factory(
        const Config&,
        const InputData& );
    std::shared_ptr<const scf::ConvergenceAcceleratorFactory> create_convergence_accelerator_factory(
        const Config&,
        const InputData& );
    std::shared_ptr<const core::OccupationsFactory> create_occupations_factory(
        const Config& /*config*/,
        const InputData& input_data,
        const std::shared_ptr<const core::InitialGuessFactory> initial_guess_factory );

    std::shared_ptr<const core::FockMatrixGeneratorFactory> create_fm_gen_factory(
        const Config&,
        const InputData&,
        std::shared_ptr<const core::TwoElectronIntegralEngineFactory> two_e_ie_factory,
        std::shared_ptr<const core::QuasiOneElectronIntegralEngineFactory> xc_ie_factory,
        std::shared_ptr<const core::QuasiTwoElectronIntegralEngineFactory> quasi_two_e_ie_factory,
        double dft_fock_exchange_contrib );

    std::shared_ptr<const scf::SCFFactory> create_scf_factory(
        const Config&,
        const InputData&,
        std::shared_ptr<const core::OccupationsFactory>,
        std::shared_ptr<const core::FockMatrixGeneratorFactory>,
        std::shared_ptr<const scf::ConvergenceAcceleratorFactory> );

    constexpr double COORDS_SCALE = 100;

    enum GeometryOptimizationType {
        NonTimeDependent, TimeDependent
    };


    struct GeometryOptimizationData {
        arma::mat last_coeffs;
        unsigned multiplicity;
        unsigned no_frozen;
        unsigned no_deleted;
        unsigned state_of_interest;
        unsigned no_roots;
        unsigned no_states;
        unsigned no_iterations;
        double diagonalization_threshold;
        double integral_threshold;
    };



    void do_td( const InputData& input_data,
                std::shared_ptr<const core::System> system,
                std::unique_ptr<scf::SCF> scf,
                std::shared_ptr<const core::OneElectronIntegralEngineFactory> one_e_ie_factory,
                std::shared_ptr<const core::TwoElectronIntegralEngineFactory> two_e_ie_factory,
                std::shared_ptr<const core::AOValueEngineFactory> ao_value_engine_factory,
                std::shared_ptr<const grid::GridFactory> grid_factory,
                std::shared_ptr<const DFTMethod> dft_method,
                std::shared_ptr<const core::FockMatrixGeneratorFactory> fm_gen,
                const arma::uvec& degeneracy,
                const arma::uvec& cc_sizes,
                const arma::uvec& mo_symmetry);

    void do_posthf(
        const InputData& input_data,
        std::shared_ptr<const core::System> system,
        const scf::SCF& scf,
        std::shared_ptr<const core::TwoElectronIntegralEngineFactory> two_e_ie_factory,
        std::shared_ptr<const core::PostHFQuasiTwoElectronIntegralEngineFactory> posthf_quasi_two_e_ie_factory,
        std::shared_ptr<const DFTMethod> dft_method);

    struct GeometryOptimizationContext {
        GeometryOptimizationType gType;
        GeometryOptimizationData* gData;
        std::shared_ptr<const core::FockMatrixGeneratorFactory> fmg_factory;
        std::shared_ptr<const core::OneElectronIntegralEngineFactory> one_e_ie_factory;
        std::shared_ptr<const core::TwoElectronIntegralEngineFactory> two_e_ie_factory;
        std::shared_ptr<const scf::SCFFactory> scf_factory;
        std::shared_ptr<const td::XCMultiKernelGeneratorFactory> xcmkfg_factory;
        double fock_exchange_contrib;
        std::shared_ptr<const core::System> system;
        arma::mat P[2];
        unsigned max_no_scf_iterations;
    };


    struct GeometryOptimizationMonitorContext {
        std::shared_ptr<const core::System> system;
    };

    int monitor( Tao tao, void* vctx );

    int evaluate_gradient(
        Tao,
        Vec coords,
        double* energy,
        Vec gradient,
        void* vctx );


    void do_scf( scf::SCF& scf,
                 double energy_unit,
                 unsigned max_no_iterations,
                 boost::optional<compat::MoldenFileBuilder> molden_file_builder );



    void single_point( const InputData& input_data,
                       const Config& config,
                       boost::mpi::communicator& comm,
                       std::shared_ptr<const core::System> system,
                       std::shared_ptr<const core::OneElectronIntegralEngineFactory> one_e_ie_factory,
                       std::shared_ptr<const core::TwoElectronIntegralEngineFactory> two_e_ie_factory,
                       std::shared_ptr<const core::AOValueEngineFactory> ao_value_engine_factory,
                       std::shared_ptr<const grid::GridFactory> grid_factory,
                       std::shared_ptr<const DFTMethod> dft_method,
                       std::shared_ptr<const core::FockMatrixGeneratorFactory> fm_gen_factory,
                       std::shared_ptr<const core::InitialGuessFactory> initial_guess_factory,
                       std::shared_ptr<const scf::SCFFactory> scf_factory );

    void geometry_optimization( const InputData& input_data,
                                const Config& config,
                                boost::mpi::communicator& comm,
                                std::shared_ptr<const core::System> system,
                                std::shared_ptr<const core::InitialGuessFactory> initial_guess_factory,
                                std::shared_ptr<const scf::SCFFactory> scf_factory,
                                std::shared_ptr<const core::TwoElectronIntegralEngineFactory> two_e_ie_factory,
                                std::shared_ptr<const core::OneElectronIntegralEngineFactory> one_e_ie_factory,
                                std::shared_ptr<const core::FockMatrixGeneratorFactory> fmg_factory,
                               std::shared_ptr<const core::AOValueEngineFactory> ao_value_engine_factory, 
                               std::shared_ptr<const grid::GridFactory> grid_factory,
                               std::shared_ptr<const DFTMethod> dft_method );

    void do_el_stat_prop( const Config& config,
                          const InputData& input_data,
                          const std::shared_ptr<const core::System> system,
                          const std::shared_ptr<const core::TwoElectronIntegralEngineFactory> two_e_ie_factory,
                          const scf::SCF& scf );

    arma::mat orthonormalize_basis( const arma::mat&, double threshold );
    void print_job_info( const Config& config, const InputData& input_data );
    void print_basis_set( io::Logger& log, const core::BasisSet& bs );
    void print_population_analysis(
        const InputData& input_data,
        std::shared_ptr<const core::System> system, 
        const arma::mat& P_alpha, 
        const arma::mat& P_beta,
        std::shared_ptr<const grid::GridFactory> grid_factory);
    void print_bond_order_analysis(
        const InputData& input_data,
        std::shared_ptr<const core::System> system, 
        const arma::mat& P_alpha, 
        const arma::mat& P_beta);


    std::shared_ptr<core::System> create_system( const Config& config,
            const InputData& input_data );
    void update_symmetry_info( core::System& system, double eps );
    void update_coords( core::System& system, Vec coords );
    void update_center_of_mass( core::System& system );
    std::shared_ptr<core::System> deep_copy( const core::System& old_system );
}

#endif

