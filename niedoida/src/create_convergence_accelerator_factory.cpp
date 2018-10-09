/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "niedoida/niedoida.hpp"

namespace niedoida {
    std::shared_ptr<const scf::ConvergenceAcceleratorFactory>
    create_convergence_accelerator_factory(const Config& /*config*/,
                                           const InputData& input_data)
    {
        std::shared_ptr<const scf::ConvergenceAcceleratorFactory> ca_factory;

        switch (input_data.scf_params.convergence_accelerator) {
        case InputData::SCFParams::NULL_CONVERGENCE_ACCELERATOR:
            ca_factory.reset(new scf::NullConvergenceAcceleratorFactory);
            break;

        case InputData::SCFParams::DIIS_CONVERGENCE_ACCELERATOR:
            ca_factory.reset(new scf::DIISFactory(0.5));
            break;
        }

        return ca_factory;
    }
}