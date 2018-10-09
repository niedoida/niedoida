/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/integral_engine_factory.hpp"

#include <boost/filesystem.hpp>
#include <boost/lexical_cast.hpp>

namespace niedoida {

    namespace core {

        TwoElectronDiskIntegralEngineFactory::
            TwoElectronDiskIntegralEngineFactory(
                TwoElectronDiskIntegralEngine::StorageType storage_type,
                const boost::filesystem::path& path,
                std::shared_ptr<const TwoElectronIntegralEngineFactory>
                    ints_factory,
                double threshold) :
            _storage_type(storage_type),
            _path(path),
            _ints_factory(ints_factory),
            _threshold(threshold)
        {
        }

        TwoElectronIntegralEngineFactory::Product
        TwoElectronDiskIntegralEngineFactory::make(
            std::shared_ptr<const System> system) const
        {
            SystemPathMap::const_iterator i = _existing_files.find(system);
            if (i != _existing_files.end()) {
                return std::unique_ptr<TwoElectronIntegralEngine>(
                    new TwoElectronDiskIntegralEngine(
                        _storage_type, (*i).second, system->basis_set));
            }

            const std::string id =
                boost::lexical_cast<std::string>(this) +
                boost::lexical_cast<std::string>(system.get());
            const std::string extension = boost::filesystem::extension(_path);
            const std::string basename = boost::filesystem::basename(_path);
            const std::string fname = basename + id + extension;
            const boost::filesystem::path path = _path.branch_path() / fname;

            TwoElectronDiskIntegralEngine ie(_storage_type,
                                             path,
                                             system,
                                             _ints_factory->make(system),
                                             _threshold);

            _existing_files[system] = path;

            return make(system);
        }

        TwoElectronInCoreIntegralEngineFactory::
            TwoElectronInCoreIntegralEngineFactory(
                std::shared_ptr<const TwoElectronIntegralEngineFactory>
                    ints_factory,
                std::size_t max_size,
                double threshold) :
            _ints_factory(ints_factory),
            _max_size(max_size),
            _threshold(threshold)
        {
        }

        TwoElectronIntegralEngineFactory::Product
        TwoElectronInCoreIntegralEngineFactory::make(
            std::shared_ptr<const System> system) const
        {
            SystemEngineMap::const_iterator i = _existing_engines.find(system);
            if (i != _existing_engines.end()) {
                return std::unique_ptr<TwoElectronIntegralEngine>(
                    new TwoElectronIntegralEngineProxy((*i).second));
            }

            _existing_engines[system] =
                std::shared_ptr<TwoElectronInCoreIntegralEngine>(
                    new TwoElectronInCoreIntegralEngine(
                        system->basis_set,
                        _ints_factory->make(system),
                        _threshold));

            return make(system);
        }

        TwoElectronIntegralCacheFactory::TwoElectronIntegralCacheFactory(
            std::shared_ptr<const TwoElectronIntegralEngineFactory>
                ints_factory,
            std::size_t max_size) :
            _ints_factory(ints_factory),
            _max_size(max_size)
        {
        }

        TwoElectronIntegralEngineFactory::Product
        TwoElectronIntegralCacheFactory::make(
            std::shared_ptr<const System> system) const
        {
            return std::unique_ptr<TwoElectronIntegralEngine>(
                new TwoElectronIntegralCache(
                    system->basis_set, _ints_factory->make(system), _max_size));
        }
    }
}
