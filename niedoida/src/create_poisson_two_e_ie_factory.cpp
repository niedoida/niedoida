/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "niedoida/niedoida.hpp"

#include "gto_kit/os1_integral_engine_factory.hpp"

namespace niedoida {
    std::shared_ptr<const core::PoissonTwoElectronIntegralEngineFactory>
    create_poisson_two_e_ie_factory(const Config& config,
                                    const InputData& input_data)
    {
        std::shared_ptr<const core::PoissonTwoElectronIntegralEngineFactory>
            poisson_two_e_ie_factory;
        const double threshold = input_data.integration_params.threshold;

        if (!input_data.poisson_basis_set_name.empty())
            poisson_two_e_ie_factory.reset(
                new gto::OS1PoissonTwoElectronIntegralEngineFactory(threshold));

        return poisson_two_e_ie_factory;
    }
}
