/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "niedoida/niedoida.hpp"

namespace niedoida {
    std::shared_ptr<const scf::SCFFactory> create_scf_factory(
        const Config& /*config*/,
        const InputData& input_data,
        std::shared_ptr<const core::OccupationsFactory> occupations_factory,
        std::shared_ptr<const core::FockMatrixGeneratorFactory> fm_gen_factory,
        std::shared_ptr<const scf::ConvergenceAcceleratorFactory> ca_factory)
    {
        std::shared_ptr<const scf::SCFFactory> scf_factory;

        switch (input_data.scf_params.method) {
        case InputData::SCFParams::METHOD_RHF:
            scf_factory.reset(
                new scf::RHFFactory(occupations_factory,
                                    fm_gen_factory,
                                    ca_factory,
                                    input_data.scf_params.incremental,
                                    input_data.scf_params.shift_1,
                                    input_data.scf_params.energy_threshold,
                                    input_data.scf_params.density_threshold));
            break;

        case InputData::SCFParams::METHOD_ROHF:
            scf_factory.reset(
                new scf::ROHFFactory(occupations_factory,
                                     fm_gen_factory,
                                     ca_factory,
                                     input_data.scf_params.incremental,
                                     input_data.scf_params.shift_1,
                                     input_data.scf_params.shift_2,
                                     input_data.scf_params.energy_threshold,
                                     input_data.scf_params.density_threshold));
            break;

        case InputData::SCFParams::METHOD_UHF:
            scf_factory.reset(
                new scf::UHFFactory(occupations_factory,
                                    fm_gen_factory,
                                    ca_factory,
                                    input_data.scf_params.incremental,
                                    input_data.scf_params.shift_1,
                                    input_data.scf_params.shift_2,
                                    input_data.scf_params.energy_threshold,
                                    input_data.scf_params.density_threshold));
            break;
        }

        return scf_factory;
    }
}
