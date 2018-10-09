/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "niedoida/niedoida.hpp"

#include "io_kit/log.hpp"

namespace niedoida {
    std::shared_ptr<const core::InitialGuessFactory>
    create_initial_guess_factory(const Config& config,
                                 const InputData& input_data)
    {
        std::shared_ptr<const core::InitialGuessFactory> initial_guess_factory;

        switch (input_data.scf_params.initial_guess) {

        case InputData::SCFParams::INITIAL_GUESS_HCORE:
            io::Log::instance().write(
                io::Logger::NORMAL,
                "Initial guess",
                "will be obtained from core Hamiltonian (P=0)");
            initial_guess_factory.reset(new core::InitialGuessHCoreFactory);
            break;

        case InputData::SCFParams::INITIAL_GUESS_FRAGMENTS:
            io::Log::instance().write(
                io::Logger::NORMAL,
                "Initial guess",
                "will be constructed from promolecular fragments");
            initial_guess_factory.reset(new core::InitialGuessFragmentsFactory);
            break;
        }

        return initial_guess_factory;
    }
}
