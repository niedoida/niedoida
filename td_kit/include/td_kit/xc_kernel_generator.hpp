/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_TD_KIT_XC_KERNEL_GENERATOR_HPP
#define NIEDOIDA_TD_KIT_XC_KERNEL_GENERATOR_HPP

#include "core_kit/system.hpp"
#include "core_kit/fock_matrix_generator_factory.hpp"
#include "scf_kit/scf_utils.hpp"
#include "core_kit/factory.hpp"
#include "core_kit/ao_value_engine_factory.hpp"
#include "grid_kit/grid_factory.hpp"

#include "core_kit/integral_engine.hpp"

#include "grid_kit/grid_integral_implementation.hpp"
#include "core_kit/system.hpp"
#include "core_kit/grid.hpp"
#include "xc_kit/xc_functional.hpp"

#include <condition_variable>
#include <map>
#include <mutex>

#include <boost/ptr_container/ptr_vector.hpp>

namespace niedoida {
    namespace td {
        class XCMultiKernelGenerator: 
            private grid::GridIntegralImplementation {
        public:
            XCMultiKernelGenerator(
                std::shared_ptr<const core::System> system,
                std::unique_ptr<core::Grid> grid,
                std::shared_ptr<const core::AOValueEngineFactory> ao_value_engine_factory,
                xc::XCFunctional xc_functional,
                std::size_t max_cache_size);

            void set_density_matrix(
                const arma::mat&,
                const arma::mat&,
                const std::vector<arma::cube>&);

            const arma::mat& integrals(std::size_t, core::Spin, core::Spin) const;

            const arma::field<arma::mat>& gradient(const std::vector<unsigned>& atoms, std::size_t state, core::Spin, core::Spin);

        protected:
            void update();
            void reduce();

            typedef std::map<std::size_t, 
                             std::shared_ptr<const BlockAOData> 
                             > BlockAODataCache;

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

            std::shared_ptr<const core::System> m_system;
            std::unique_ptr<core::Grid> m_grid;

            bool m_polarized;
            Cache m_cache;
            Queue m_queue;

            std::size_t m_no_matrices;

            arma::cube m_P;
            std::vector<arma::cube> m_fake_P;

            struct BlockData {
                BlockData(std::size_t no_contractions):
                    b2g_map(new std::size_t [no_contractions]) {}

                std::unique_ptr<std::size_t[]> b2g_map;
                arma::cube P;
                std::vector<arma::cube> fake_P;
                std::vector<arma::cube> xc_ints;
                arma::field<arma::mat> xc_derivs;
            };

            struct Result {
                std::mutex mutex;
                std::vector<arma::cube> xc_ints;
                arma::field<arma::mat> xc_derivs;
                double density_integral;
            };

            Result m_result;

            class Integrator: private GridIntegralImplementation {
            public:
                Integrator(
                    std::shared_ptr<const core::System> system, 
                    const core::Grid& grid,
                    xc::XCFunctional xc_functional,
                    std::unique_ptr<core::AOValueEngine> ao_value_engine,
                    const arma::cube& P,
                    const std::vector<arma::cube>& fake_P,
                    Cache& cache,
                    Queue& queue,
                    Result& result):
                    grid::GridIntegralImplementation(system, std::move(ao_value_engine)),
                    _grid(grid),
                    _xc_functional(xc_functional),
                    _block_data(m_bs_info.m_no_contractions),
                    _cache(cache),
                    _queue(queue),
                    _result(result),
                    _P(P),
                    _fake_P(fake_P),
                    _cycle(0) {}

                void reset(bool polarized);
                void reset_gradient(unsigned no_atoms);
                void run();
                void gradient(const std::vector<unsigned>& atoms, unsigned state);
                
            private:
                void update_block(std::size_t b);
                void update_block_gradient(const std::vector<unsigned>& atoms, unsigned state, std::size_t b);

                void update_block_lda_unpolarized(
                    const core::Grid::Block&, 
                    const BlockAOData& data);

                void update_block_gga_unpolarized(
                    const core::Grid::Block&, 
                    const BlockAOData& data);

                void update_block_lda_polarized(
                    const core::Grid::Block&, 
                    const BlockAOData& data);

                void update_block_gga_polarized(
                    const core::Grid::Block&, 
                    const BlockAOData& data);

                void update_block_gradient_lda_unpolarized(
                    const std::vector<unsigned>& atoms,
                    unsigned state,
                    const core::Grid::Block&, 
                    const BlockAOData& data);

                void update_block_gradient_gga_unpolarized(
                    const std::vector<unsigned>& atoms,
                    unsigned state,
                    const core::Grid::Block&, 
                    const BlockAOData& data);

                void update_block_gradient_lda_polarized(
                    const std::vector<unsigned>& atoms,
                    unsigned state,
                    const core::Grid::Block&, 
                    const BlockAOData& data);

                void update_block_gradient_gga_polarized(
                    const std::vector<unsigned>& atoms,
                    unsigned state,
                    const core::Grid::Block&, 
                    const BlockAOData& data);

                std::shared_ptr<const grid::GridIntegralImplementation::BlockAOData> get_block_data(
                    std::size_t block_idx,
                    std::shared_ptr<const core::Grid::Block> block);

                const core::Grid& _grid;
                xc::XCFunctional _xc_functional;
                BlockData _block_data;
                Cache& _cache;
                Queue& _queue;
                Result& _result;

                const arma::cube& _P;
                const std::vector<arma::cube>& _fake_P;
                double _density_integral;
                bool _polarized;
                unsigned _cycle;
                std::size_t _no_matrices;
            };

            boost::ptr_vector<Integrator> m_integrators;
        };

        class XCMultiKernelGeneratorFactory: 
            public core::Factory<XCMultiKernelGenerator> {
        public:
            XCMultiKernelGeneratorFactory(
                std::shared_ptr<const grid::GridFactory>,
                std::shared_ptr<const core::AOValueEngineFactory>,
                xc::XCFunctional xc_functional,
                std::size_t max_cache_size);

            Product make(std::shared_ptr<const core::System>) const;

        private:
            std::shared_ptr<const grid::GridFactory> _grid_factory;
            std::shared_ptr<const core::AOValueEngineFactory> _ao_value_engine_factory;
            xc::XCFunctional _xc_functional;
            std::size_t _max_cache_size;
        };
    }
}

#endif
