/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/os1_integral_engine_factory.hpp"

namespace niedoida {
    namespace gto {
        OS1OneElectronIntegralEngineFactory::
            OS1OneElectronIntegralEngineFactory(double threshold) :
            _threshold(threshold)
        {
        }

        OS1OneElectronIntegralEngineFactory::Product
        OS1OneElectronIntegralEngineFactory::make(
            std::shared_ptr<const core::System> system) const
        {
            return std::unique_ptr<core::OneElectronIntegralEngine>(
                new OS1OneElectronIntegralEngine(*system));
        }

        OS1TwoElectronIntegralEngineFactory::
            OS1TwoElectronIntegralEngineFactory(double threshold) :
            _threshold(threshold)
        {
        }

        OS1TwoElectronIntegralEngineFactory::Product
        OS1TwoElectronIntegralEngineFactory::make(
            std::shared_ptr<const core::System> system) const
        {
            return Product(new OS1TwoElectronIntegralEngine(system->basis_set,
                                                            _threshold));
        }

        OS1QuasiTwoElectronIntegralEngineFactory::
            OS1QuasiTwoElectronIntegralEngineFactory(double threshold) :
            _threshold(threshold)
        {
        }

        OS1QuasiTwoElectronIntegralEngineFactory::Product
        OS1QuasiTwoElectronIntegralEngineFactory::make(
            std::shared_ptr<const core::System> system) const
        {
            return Product(new OS1QuasiTwoElectronIntegralEngine(
                system->basis_set, *system->aux_basis_set, _threshold));
        }

        OS1PoissonTwoElectronIntegralEngineFactory::
            OS1PoissonTwoElectronIntegralEngineFactory(double threshold) :
            _threshold(threshold)
        {
        }

        OS1PoissonTwoElectronIntegralEngineFactory::Product
        OS1PoissonTwoElectronIntegralEngineFactory::make(
            std::shared_ptr<const core::System> system) const
        {
            return Product(new OS1PoissonTwoElectronIntegralEngine(
                system->basis_set,
                *system->poisson_basis_set,
                *system->posthf_aux_basis_set,
                _threshold));
        }

        OS1PoissonSCFTwoElectronIntegralEngineFactory::
            OS1PoissonSCFTwoElectronIntegralEngineFactory(double threshold) :
            _threshold(threshold)
        {
        }

        OS1PoissonSCFTwoElectronIntegralEngineFactory::Product
        OS1PoissonSCFTwoElectronIntegralEngineFactory::make(
            std::shared_ptr<const core::System> system) const
        {
            return Product(new OS1PoissonTwoElectronIntegralEngine(
                system->basis_set,
                *system->poisson_basis_set,
                *system->aux_basis_set,
                _threshold));
        }

        PostHFOS1QuasiTwoElectronIntegralEngineFactory::
            PostHFOS1QuasiTwoElectronIntegralEngineFactory(double threshold) :
            _threshold(threshold)
        {
        }

        PostHFOS1QuasiTwoElectronIntegralEngineFactory::Product
        PostHFOS1QuasiTwoElectronIntegralEngineFactory::make(
            std::shared_ptr<const core::System> system) const
        {
            return Product(new OS1QuasiTwoElectronIntegralEngine(
                system->basis_set, *system->posthf_aux_basis_set, _threshold));
        }
    }
}
