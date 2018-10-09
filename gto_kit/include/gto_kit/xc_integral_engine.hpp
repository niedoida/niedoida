/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_GTO_KIT_XC_INTEGRAL_ENGINE_HPP
#define NIEDOIDA_GTO_KIT_XC_INTEGRAL_ENGINE_HPP

#include "core_kit/integral_engine.hpp"
#include "core_kit/ao_value_engine_factory.hpp"

#include "grid_kit/grid_integral_implementation.hpp"
#include "core_kit/system.hpp"
#include "core_kit/grid.hpp"
#include "xc_kit/xc_functional.hpp"

#include <map>
#include <mutex>
#include <queue>

#include <boost/ptr_container/ptr_vector.hpp>

namespace niedoida {
    namespace gto {
        class XCIntegralEngine: 
            public core::QuasiOneElectronIntegralEngine {
        public:
            XCIntegralEngine(
                std::shared_ptr<const core::System> system,
                std::unique_ptr<core::Grid> grid,
                std::shared_ptr<const core::AOValueEngineFactory> ao_value_engine_factory,
                xc::LocalXCFunctional xc_functional,
                std::size_t max_cache_size);

            XCIntegralEngine(
                std::shared_ptr<const core::System> system,
                std::unique_ptr<core::Grid> grid,
                std::shared_ptr<const core::AOValueEngineFactory> ao_value_engine_factory,
                xc::GGAXCFunctional xc_functional,
                std::size_t max_cache_size);

            void set_density_matrix(
                const arma::mat&,
                const arma::mat&);
                
            void set_density_matrix_for_CPHF(
                const arma::mat&,
                const arma::mat&,
                const arma::mat&,
                const arma::mat&);
                
            void calc_matrix_core_gradient( const arma::mat& P, const std::vector<unsigned>& atoms);

            const arma::mat& integrals(core::Spin) const;
            const arma::mat& integrals_dC(core::Spin) const;
            double energy() const;

            arma::mat energy_gradient(const std::vector<unsigned>& atoms) ;
            const std::vector<arma::cube>& matrix_core_gradient() const;   
             
            
        protected:
            typedef std::map<
                std::size_t, 
                std::shared_ptr<const grid::GridIntegralImplementation::BlockAOData> > BlockAODataCache;

            struct Cache {
                Cache(std::size_t n):
                    max_size(n), size(0), no_hits(0), no_misses(0) {}

                std::mutex mutex;

                const std::size_t max_size;
                std::size_t size;

                BlockAODataCache data;

                unsigned long no_hits;
                unsigned long no_misses;
            };

            struct Queue {
                std::queue<std::size_t> blocks;
                std::mutex mutex;
            };

            struct Result {
                std::mutex mutex;
                arma::mat xc_ints[2];
                arma::mat xc_ints_dC[2];
                double energy;
                double density_integral;
                arma::mat energy_gradient;
                std::vector<arma::cube> ks_matrix_core_gradient;
            };

            Result m_result;

            void update();
            void reduce();
                
            void update_dC();
            void reduce_dC();

            std::shared_ptr<const core::System> m_system;
            core::BasisSetInfo m_bs_info;
            std::unique_ptr<core::Grid> m_grid;

            arma::mat m_P[2];
            arma::mat m_P_for_CPHF[2];
            bool m_polarized;

            
            struct BlockData {
                BlockData(std::size_t no_contractions):
                    b2g_map(new std::size_t [no_contractions]),
                    indices(new std::size_t [no_contractions]) {}

                boost::scoped_array<std::size_t> b2g_map;
                boost::scoped_array<std::size_t> indices;
                arma::mat P[2];
                arma::mat P_for_CPHF[2];
                arma::mat xc_ints[2];
                arma::mat xc_ints_dC[2];
            };

            class Integrator: private grid::GridIntegralImplementation {
            public:
                Integrator(
                    std::shared_ptr<const core::System> system, 
                    const core::Grid& grid,
                    xc::LocalXCFunctional lda_functional,
                    xc::GGAXCFunctional gga_functional,
                    std::unique_ptr<core::AOValueEngine> ao_value_engine,
                    Cache& cache,
                    Queue& queue,
                    Result& result,
                    const core::BasisSetInfo& bs_info):
                    grid::GridIntegralImplementation(system, std::move(ao_value_engine)),
                    _grid(grid),
                    _lda_functional(lda_functional),
                    _gga_functional(gga_functional),
                    _block_data(bs_info.m_no_contractions),
                    _cache(cache),
                    _queue(queue),
                    _result(result),
                    _bs_info(bs_info),
                    _cycle(0) {}

                void reset(const arma::mat* const P, bool polarized);
                void reset(const arma::mat* const P, const arma::mat* const P_for_CPHF, bool polarized);
                void run();
                void run_dC();
                void reset_gradient(std::size_t no_atoms);
                void reset_ks_matrix_core_gradient(std::size_t no_atoms, std::size_t no_orbitals);
                void energy_gradient(const std::vector<unsigned>& atoms);
                void matrix_core_gradient(const std::vector<unsigned>& atoms);

            private:
                void update_block_polarized(std::size_t b);
                void update_block_unpolarized(std::size_t b);
                
                void update_block_unpolarized_dC(std::size_t b);

                void gradient_update_block_polarized(const std::vector<unsigned>& atoms, std::size_t b);
                void gradient_update_block_unpolarized_lda(const std::vector<unsigned>& atoms, std::size_t b);
                void gradient_update_block_unpolarized_gga(const std::vector<unsigned>& atoms, std::size_t b);
                
                void ks_matrix_core_gradient_update_block_polarized(const std::vector<unsigned>& atoms, std::size_t b);
                void ks_matrix_core_gradient_update_block_unpolarized(const std::vector<unsigned>& atoms, std::size_t b);
                void ks_matrix_core_gradient_update_block_unpolarized_gga(const std::vector<unsigned>& atoms, std::size_t b);

                std::shared_ptr<const grid::GridIntegralImplementation::BlockAOData> get_block_data(
                    std::size_t block_idx,
                    std::shared_ptr<const core::Grid::Block> block,
                    unsigned deriv_order);

                const core::Grid& _grid;
                xc::LocalXCFunctional _lda_functional;
                xc::GGAXCFunctional _gga_functional;
                BlockData _block_data;
                Cache& _cache;
                Queue& _queue;
                Result& _result;
                core::BasisSetInfo _bs_info;

                const arma::mat* _P;
                const arma::mat* _P_for_CPHF;
                bool _polarized;
                unsigned _cycle;
            };

            boost::ptr_vector<Integrator> m_integrators;

            Cache m_cache;
            Queue m_queue;
        };

        inline
        const arma::mat& XCIntegralEngine::integrals(core::Spin s) const
        {
            return m_result.xc_ints[s];
        }
        
        inline
        const arma::mat& XCIntegralEngine::integrals_dC(core::Spin s) const
        {
            return m_result.xc_ints_dC[s];
        }

        inline
        double XCIntegralEngine::energy() const
        {
            return m_result.energy;
        }
        
        inline 
        const std::vector<arma::cube>& XCIntegralEngine::matrix_core_gradient() const 
        {
           return m_result.ks_matrix_core_gradient;   
        }
    }
}

#endif
