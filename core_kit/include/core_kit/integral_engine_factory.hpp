/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_INTEGRAL_ENGINE_FACTORY
#define NIEDOIDA_CORE_KIT_INTEGRAL_ENGINE_FACTORY

#include "factory.hpp"
#include "integral_engine.hpp"

#include <map>

namespace niedoida {

    namespace core {

        class OneElectronIntegralEngineFactory: 
            public Factory<OneElectronIntegralEngine> {
        };

        class TwoElectronIntegralEngineFactory: 
            public Factory<TwoElectronIntegralEngine> {
        };

        class QuasiOneElectronIntegralEngineFactory: 
            public Factory<QuasiOneElectronIntegralEngine> {
        };

        class QuasiTwoElectronIntegralEngineFactory: 
            public Factory<QuasiTwoElectronIntegralEngine> {
        };

        class PoissonTwoElectronIntegralEngineFactory: 
            public Factory<PoissonTwoElectronIntegralEngine> {
        };

        class PostHFQuasiTwoElectronIntegralEngineFactory: 
            public Factory<QuasiTwoElectronIntegralEngine> {
        };

        class TwoElectronDiskIntegralEngineFactory: 
            public TwoElectronIntegralEngineFactory {
        public:
            TwoElectronDiskIntegralEngineFactory(
                TwoElectronDiskIntegralEngine::StorageType,
                const boost::filesystem::path&,
                std::shared_ptr<const TwoElectronIntegralEngineFactory>,
                double threshold);

            Product make(std::shared_ptr<const System>) const;

        private:
            const TwoElectronDiskIntegralEngine::StorageType _storage_type;
            const boost::filesystem::path _path;
            const std::shared_ptr<const TwoElectronIntegralEngineFactory> _ints_factory;
            const double _threshold;
            typedef std::map<std::shared_ptr<const System>, boost::filesystem::path> SystemPathMap;
            mutable SystemPathMap _existing_files;
        };

        class TwoElectronInCoreIntegralEngineFactory: 
            public TwoElectronIntegralEngineFactory {
        public:
            TwoElectronInCoreIntegralEngineFactory(
                std::shared_ptr<const TwoElectronIntegralEngineFactory>,
                std::size_t max_size,
                double threshold);

            Product make(std::shared_ptr<const System>) const;

        private:
            const std::shared_ptr<const TwoElectronIntegralEngineFactory> _ints_factory;
            const std::size_t _max_size;
            const double _threshold;
            typedef std::map<std::shared_ptr<const System>, 
                             std::shared_ptr<TwoElectronInCoreIntegralEngine> > SystemEngineMap;
            mutable SystemEngineMap _existing_engines;
        };

        class TwoElectronIntegralCacheFactory: 
            public TwoElectronIntegralEngineFactory {
        public:
            TwoElectronIntegralCacheFactory(
                std::shared_ptr<const TwoElectronIntegralEngineFactory>,
                std::size_t max_size);

            Product make(std::shared_ptr<const System>) const;

        private:
            const std::shared_ptr<const TwoElectronIntegralEngineFactory> _ints_factory;
            const std::size_t _max_size;
        };

    }
}

#endif
