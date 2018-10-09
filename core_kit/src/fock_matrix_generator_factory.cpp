/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/fock_matrix_generator_factory.hpp"

namespace niedoida {

    namespace core {

        DenFitJMatrixGeneratorFactory::DenFitJMatrixGeneratorFactory(
            std::shared_ptr<const QuasiTwoElectronIntegralEngineFactory>
                quasi_two_e_ie_factory,
            double threshold,
            std::size_t aux_cache_size) :
            _quasi_2e_ie_factory(quasi_two_e_ie_factory),
            _threshold(threshold),
            _aux_cache_size(aux_cache_size)
        {
        }

        DenFitJMatrixGeneratorFactory::Product
        DenFitJMatrixGeneratorFactory::make(
            std::shared_ptr<const System> system) const
        {
            return std::unique_ptr<JMatrixGenerator>(new DenFitJMatrixGenerator(
                system, _quasi_2e_ie_factory, _threshold, _aux_cache_size));
        }

        StandardJMatrixGeneratorFactory::StandardJMatrixGeneratorFactory(
            std::shared_ptr<const TwoElectronIntegralEngineFactory>
                two_e_ie_factory,
            double threshold,
            std::size_t cache_size) :
            _2e_ie_factory(two_e_ie_factory),
            _threshold(threshold),
            _cache_size(cache_size)
        {
        }

        StandardJMatrixGeneratorFactory::Product
        StandardJMatrixGeneratorFactory::make(
            std::shared_ptr<const System> system) const
        {
            return std::unique_ptr<JMatrixGenerator>(
                new StandardJMatrixGenerator(
                    system,
                    _2e_ie_factory,
                    _threshold,
                    _cache_size,
                    std::unique_ptr<ShellQuartetPetiteList>(
                        new NoSymmetryPetiteList)));
        }

        StandardKMatrixGeneratorFactory::StandardKMatrixGeneratorFactory(
            std::shared_ptr<const TwoElectronIntegralEngineFactory>
                two_e_ie_factory,
            double threshold,
            std::size_t cache_size) :
            _2e_ie_factory(two_e_ie_factory),
            _threshold(threshold),
            _cache_size(cache_size)
        {
        }

        StandardKMatrixGeneratorFactory::Product
        StandardKMatrixGeneratorFactory::make(
            std::shared_ptr<const System> system) const
        {
            return std::unique_ptr<KMatrixGenerator>(
                new StandardKMatrixGenerator(
                    system,
                    _2e_ie_factory,
                    _threshold,
                    _cache_size,
                    std::unique_ptr<ShellQuartetPetiteList>(
                        new NoSymmetryPetiteList)));
        }

        CombinedJKMatrixGeneratorFactory::CombinedJKMatrixGeneratorFactory(
            std::shared_ptr<const TwoElectronIntegralEngineFactory>
                two_e_ie_factory,
            double threshold,
            std::size_t cache_size) :
            _2e_ie_factory(two_e_ie_factory),
            _threshold(threshold),
            _cache_size(cache_size)
        {
        }

        CombinedJKMatrixGeneratorFactory::Product
        CombinedJKMatrixGeneratorFactory::make(
            std::shared_ptr<const System> system) const
        {
            return std::unique_ptr<JKMatrixGenerator>(
                new CombinedJKMatrixGenerator(
                    system,
                    _2e_ie_factory,
                    _threshold,
                    _cache_size,
                    std::unique_ptr<ShellQuartetPetiteList>(
                        new NoSymmetryPetiteList)));
        }

        HFFockMatrixGeneratorFactory::HFFockMatrixGeneratorFactory(
            std::shared_ptr<const JKMatrixGeneratorFactory> JK_factory) :
            _JK_factory(JK_factory)
        {
        }

        HFFockMatrixGeneratorFactory::Product
        HFFockMatrixGeneratorFactory::make(
            std::shared_ptr<const System> system) const
        {
            return std::unique_ptr<FockMatrixGenerator>(
                new HFFockMatrixGenerator(system, _JK_factory->make(system)));
        }

        HybridKSFockMatrixGeneratorFactory::HybridKSFockMatrixGeneratorFactory(
            std::shared_ptr<const JKMatrixGeneratorFactory> jk_factory,
            std::shared_ptr<const QuasiOneElectronIntegralEngineFactory>
                xc_ie_factory,
            double fock_exchange_contrib,
            double xc_contrib) :
            _jk_factory(jk_factory),
            _xc_ie_factory(xc_ie_factory),
            _fock_exchange_contrib(fock_exchange_contrib),
            _xc_contrib(xc_contrib)
        {
        }

        HybridKSFockMatrixGeneratorFactory::Product
        HybridKSFockMatrixGeneratorFactory::make(
            std::shared_ptr<const System> system) const
        {
            return std::unique_ptr<FockMatrixGenerator>(
                new HybridKSFockMatrixGenerator(system,
                                                _jk_factory->make(system),
                                                _xc_ie_factory->make(system),
                                                _fock_exchange_contrib,
                                                _xc_contrib));
        }

        PureKSFockMatrixGeneratorFactory::PureKSFockMatrixGeneratorFactory(
            std::shared_ptr<const JMatrixGeneratorFactory> J_factory,
            std::shared_ptr<const QuasiOneElectronIntegralEngineFactory>
                xc_ie_factory) :
            _J_factory(J_factory),
            _xc_ie_factory(xc_ie_factory)
        {
        }

        PureKSFockMatrixGeneratorFactory::Product
        PureKSFockMatrixGeneratorFactory::make(
            std::shared_ptr<const System> system) const
        {
            return std::unique_ptr<FockMatrixGenerator>(
                new PureKSFockMatrixGenerator(system,
                                              _J_factory->make(system),
                                              _xc_ie_factory->make(system)));
        }

        AggregateJKMatrixGeneratorFactory::AggregateJKMatrixGeneratorFactory(
            std::shared_ptr<const JMatrixGeneratorFactory> J_factory,
            std::shared_ptr<const KMatrixGeneratorFactory> K_factory) :
            _J_factory(J_factory),
            _K_factory(K_factory)
        {
        }

        AggregateJKMatrixGeneratorFactory::Product
        AggregateJKMatrixGeneratorFactory::make(
            std::shared_ptr<const System> system) const
        {
            return std::unique_ptr<JKMatrixGenerator>(
                new AggregateJKMatrixGenerator(_J_factory->make(system),
                                               _K_factory->make(system)));
        }
    }
}
