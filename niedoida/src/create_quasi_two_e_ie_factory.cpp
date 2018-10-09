/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "niedoida/niedoida.hpp"

#include "gto_kit/os1_integral_engine_factory.hpp"

namespace niedoida {
    std::shared_ptr<const core::QuasiTwoElectronIntegralEngineFactory>
    create_quasi_two_e_ie_factory(const Config& config,
                                  const InputData& input_data)
    {
        std::shared_ptr<const core::QuasiTwoElectronIntegralEngineFactory>
            quasi_two_e_ie_factory;
        const double threshold = input_data.integration_params.threshold;

        if (!input_data.aux_basis_set_name.empty())
            quasi_two_e_ie_factory.reset(
                new gto::OS1QuasiTwoElectronIntegralEngineFactory(threshold));

        return quasi_two_e_ie_factory;
    }

    std::shared_ptr<const core::PostHFQuasiTwoElectronIntegralEngineFactory>
    create_posthf_quasi_two_e_ie_factory(const Config& config,
                                         const InputData& input_data)
    {
        std::shared_ptr<const core::PostHFQuasiTwoElectronIntegralEngineFactory>
            quasi_two_e_ie_factory;
        const double threshold = input_data.integration_params.threshold;

        if (!input_data.posthf_aux_basis_set_name.empty())
            quasi_two_e_ie_factory.reset(
                new gto::PostHFOS1QuasiTwoElectronIntegralEngineFactory(
                    threshold));

        return quasi_two_e_ie_factory;
    }
}
