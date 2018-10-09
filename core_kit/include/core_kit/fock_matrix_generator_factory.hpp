/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_FOCK_MATRIX_GENERATOR_FACTORY_HPP
#define NIEDOIDA_CORE_KIT_FOCK_MATRIX_GENERATOR_FACTORY_HPP

#include "core_kit/integral_engine_factory.hpp"
#include "core_kit/fock_matrix_generator.hpp"
#include "core_kit/efield.hpp"

namespace niedoida {

    namespace core {

        class JMatrixGeneratorFactory: 
            public Factory<JMatrixGenerator> {
        };

        class KMatrixGeneratorFactory: 
            public Factory<KMatrixGenerator> {
        };

        class JKMatrixGeneratorFactory: 
            public Factory<JKMatrixGenerator> {
        };

        class FockMatrixGeneratorFactory: 
            public Factory<FockMatrixGenerator> {
        };

        class DenFitJMatrixGeneratorFactory: 
            public JMatrixGeneratorFactory {
        public:
            DenFitJMatrixGeneratorFactory(
                std::shared_ptr<const QuasiTwoElectronIntegralEngineFactory>,
                double threshold,
                std::size_t aux_cache_size);
    
            Product make(std::shared_ptr<const System>) const;

        private:
            std::shared_ptr<const QuasiTwoElectronIntegralEngineFactory> _quasi_2e_ie_factory;
            double _threshold;
            std::size_t _aux_cache_size;
        };

        class StandardJMatrixGeneratorFactory: 
            public JMatrixGeneratorFactory {
        public:
            StandardJMatrixGeneratorFactory(
                std::shared_ptr<const TwoElectronIntegralEngineFactory>,
                double threshold,
                std::size_t cache_size);

            Product make(std::shared_ptr<const System>) const;

        private:
            std::shared_ptr<const TwoElectronIntegralEngineFactory> _2e_ie_factory;
            double _threshold;
            std::size_t _cache_size;
        };

        class StandardKMatrixGeneratorFactory: 
            public KMatrixGeneratorFactory {
        public:
            StandardKMatrixGeneratorFactory(
                std::shared_ptr<const TwoElectronIntegralEngineFactory>,
                double threshold,
                std::size_t cache_size);

            Product make(std::shared_ptr<const System>) const;

        private:
            std::shared_ptr<const TwoElectronIntegralEngineFactory> _2e_ie_factory;
            double _threshold;
            std::size_t _cache_size;
        };

        class CombinedJKMatrixGeneratorFactory: 
            public JKMatrixGeneratorFactory {
        public:
            CombinedJKMatrixGeneratorFactory(
                std::shared_ptr<const TwoElectronIntegralEngineFactory>,
                double threshold,
                std::size_t cache_size);

            Product make(std::shared_ptr<const System>) const;

        private:
            std::shared_ptr<const TwoElectronIntegralEngineFactory> _2e_ie_factory;
            double _threshold;
            std::size_t _cache_size;
        };

        class HFFockMatrixGeneratorFactory: 
            public FockMatrixGeneratorFactory {
        public:
            HFFockMatrixGeneratorFactory(
                std::shared_ptr<const JKMatrixGeneratorFactory>);

            Product make(std::shared_ptr<const System>) const;
    
        private:
            std::shared_ptr<const JKMatrixGeneratorFactory> _JK_factory;
        };

        class HybridKSFockMatrixGeneratorFactory: 
            public FockMatrixGeneratorFactory {
        public:
            HybridKSFockMatrixGeneratorFactory(
                std::shared_ptr<const JKMatrixGeneratorFactory>,
                std::shared_ptr<const QuasiOneElectronIntegralEngineFactory>,
                double fock_exchange_contrib,
                double xc_contrib);

            Product make(std::shared_ptr<const System>) const;

        private:
            std::shared_ptr<const JKMatrixGeneratorFactory> _jk_factory;
            std::shared_ptr<const QuasiOneElectronIntegralEngineFactory> _xc_ie_factory;
            double _fock_exchange_contrib;
            double _xc_contrib;
        };

        class AggregateJKMatrixGeneratorFactory: 
            public JKMatrixGeneratorFactory {
        public:
            AggregateJKMatrixGeneratorFactory(
                std::shared_ptr<const JMatrixGeneratorFactory>,
                std::shared_ptr<const KMatrixGeneratorFactory>);

            Product make(std::shared_ptr<const System>) const;
    
        private:
            std::shared_ptr<const JMatrixGeneratorFactory> _J_factory;
            std::shared_ptr<const KMatrixGeneratorFactory> _K_factory;
        };

        class PureKSFockMatrixGeneratorFactory: 
            public FockMatrixGeneratorFactory {
        public:
            PureKSFockMatrixGeneratorFactory(
                std::shared_ptr<const JMatrixGeneratorFactory>,
                std::shared_ptr<const QuasiOneElectronIntegralEngineFactory>);

            Product make(std::shared_ptr<const System>) const;

        private:
            std::shared_ptr<const JMatrixGeneratorFactory> _J_factory;
            std::shared_ptr<const QuasiOneElectronIntegralEngineFactory> _xc_ie_factory;
        };

    }
}

#endif

