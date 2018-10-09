/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_GTO_KIT_OS1_INTEGRAL_ENGINE_FACTORY_HPP
#define NIEDOIDA_GTO_KIT_OS1_INTEGRAL_ENGINE_FACTORY_HPP

#include "core_kit/integral_engine_factory.hpp"
#include "os1_integral_engine.hpp"

namespace niedoida {
    namespace gto {
        class OS1OneElectronIntegralEngineFactory: 
            public core::OneElectronIntegralEngineFactory {
        public:
            OS1OneElectronIntegralEngineFactory(double threshold);

            Product make(std::shared_ptr<const core::System>) const;

        private:
            double _threshold;
        };

        class OS1TwoElectronIntegralEngineFactory: 
            public core::TwoElectronIntegralEngineFactory {
        public:
            OS1TwoElectronIntegralEngineFactory(double threshold);

            Product make(std::shared_ptr<const core::System>) const;

        private:
            double _threshold;
        };

        class OS1QuasiTwoElectronIntegralEngineFactory: 
            public core::QuasiTwoElectronIntegralEngineFactory {
        public:
            OS1QuasiTwoElectronIntegralEngineFactory(double threshold);

            Product make(std::shared_ptr<const core::System>) const;

        private:
            double _threshold;
        };

        class OS1PoissonTwoElectronIntegralEngineFactory: 
            public core::PoissonTwoElectronIntegralEngineFactory {
        public:
            OS1PoissonTwoElectronIntegralEngineFactory(double threshold);

            Product make(std::shared_ptr<const core::System>) const;

        private:
            double _threshold;
        };

        class OS1PoissonSCFTwoElectronIntegralEngineFactory: 
            public core::PoissonTwoElectronIntegralEngineFactory {
        public:
            OS1PoissonSCFTwoElectronIntegralEngineFactory(double threshold);

            Product make(std::shared_ptr<const core::System>) const;

        private:
            double _threshold;
        };

        class PostHFOS1QuasiTwoElectronIntegralEngineFactory: 
            public core::PostHFQuasiTwoElectronIntegralEngineFactory {
        public:
            PostHFOS1QuasiTwoElectronIntegralEngineFactory(double threshold);

            Product make(std::shared_ptr<const core::System>) const;

        private:
            double _threshold;
        };
    }
}

#endif
