/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "niedoida/niedoida.hpp"

namespace niedoida {
    std::shared_ptr<const core::OccupationsFactory> create_occupations_factory(
        const Config& /*config*/,
        const InputData& input_data,
        const std::shared_ptr<const core::InitialGuessFactory>
            initial_guess_factory)
    {
        std::shared_ptr<const core::OccupationsFactory> of;

        switch (input_data.scf_params.occupations) {
        case InputData::SCFParams::OCCUPATIONS_AUFBAU:
            of.reset(new core::AufbauOccupationsFactory(
                input_data.scf_params.degeneracy_threshold));
            break;

        case InputData::SCFParams::OCCUPATIONS_FERMI:
            of.reset(
                new core::FermiOccupationsFactory(input_data.scf_params.smear));
            break;

        case InputData::SCFParams::OCCUPATIONS_MAXIMUM_OVERLAP:
            of.reset(new core::MaximumOverlapOccupationsFactory(
                initial_guess_factory));
            break;
        }

        return of;
    }
}
