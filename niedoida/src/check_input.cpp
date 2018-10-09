/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "niedoida/niedoida.hpp"

#include "io_kit/log.hpp"

namespace {
    struct ErrorInfo {
        bool fatal;
        std::string message;
    };

    const ErrorInfo* check_atoms(const niedoida::InputData& id,
                                 const niedoida::Config&)
    {
        static const ErrorInfo wrong = {true, "no atoms"};

        return id.atoms.empty() ? &wrong : 0;
    }

    const ErrorInfo* check_excessive_charge(const niedoida::InputData& id,
                                            const niedoida::Config&)
    {
        static const ErrorInfo wrong = {true, "wrong charge"};

        unsigned n = 0;
        for (unsigned i = 0; i < id.atoms.size(); ++i)
            n += id.atoms[i].isotope->element->atomic_number;

        return static_cast<int>(n) > id.charge ? 0 : &wrong;
    }

    const ErrorInfo* check_multiplicity(const niedoida::InputData& id,
                                        const niedoida::Config&)
    {
        static const ErrorInfo wrong = {true, "wrong multiplicity/charge"};

        unsigned n = -id.charge;
        for (unsigned i = 0; i < id.atoms.size(); ++i)
            n += id.atoms[i].isotope->element->atomic_number;

        const unsigned u = id.multiplicity - 1;

        if (u > n)
            return &wrong;

        const unsigned p = n - u;

        return p % 2 == 0 ? 0 : &wrong;
    }

    const ErrorInfo* check_rhf(const niedoida::InputData& id,
                               const niedoida::Config&)
    {
        static const ErrorInfo wrong = {true, "can't use rhf for open shell"};

        if (id.scf_params.method != niedoida::InputData::SCFParams::METHOD_RHF)
            return 0;

        return id.multiplicity == 1 ? 0 : &wrong;
    }

    const ErrorInfo* check_basis_set(const niedoida::InputData& id,
                                     const niedoida::Config& cfg)
    {
        static const ErrorInfo wrong = {true, "unknown basis set"};

        // FIXME: the way the check is done is a hack; we need a proper check
        // for existence of the basis set description in niedoida::Config
        if (cfg.basis_set_format(id.basis_set_name) == "")
            return &wrong;

        return 0;
    }

    const ErrorInfo* check_thresholds(const niedoida::InputData& id,
                                      const niedoida::Config&)
    {
        static const ErrorInfo wrong = {true, "inconsistent thresholds"};

        if (id.integration_params.threshold >= id.scf_params.energy_threshold ||
            id.integration_params.threshold >= id.scf_params.density_threshold)
            return &wrong;

        return 0;
    }

    //    const ErrorInfo* check_initial_guess(const niedoida::InputData& id,
    //    const niedoida::Config&)
    //    {
    //        static const ErrorInfo ignoring_igf = {
    //            false,
    //            "ignoring initial guess file"
    //        };
    //
    //        static const ErrorInfo missing_igf = {
    //            true,
    //            "initial guess is to be read from file, but filename is
    //            missing"
    //        };
    //
    //        const niedoida::InputData::SCFParams& p = id.scf_params;
    //
    //        if (p.initial_guess !=
    //        niedoida::InputData::SCFParams::INITIAL_GUESS_FROM_FILE &&
    //            p.initial_guess_fname != "")
    //            return &ignoring_igf;
    //
    //        if (p.initial_guess ==
    //        niedoida::InputData::SCFParams::INITIAL_GUESS_FROM_FILE &&
    //            p.initial_guess_fname == "")
    //            return &missing_igf;
    //
    //        return 0;
    //    }

    const ErrorInfo* (*_checks[])(const niedoida::InputData&,
                                  const niedoida::Config&) = {
        &check_atoms,
        &check_excessive_charge,
        &check_multiplicity,
        &check_rhf,
        &check_basis_set,
        &check_thresholds,
        //&check_initial_guess,
        0};
}

namespace niedoida {
    bool check_input(const niedoida::InputData& id, const niedoida::Config& cfg)
    {
        for (const ErrorInfo* (**check)(const niedoida::InputData&,
                                        const niedoida::Config&) = _checks;
             *check != 0;
             ++check) {
            const ErrorInfo* e = (*check)(id, cfg);
            if (e) {
                io::Log::instance().write(io::Logger::TERSE,
                                          e->fatal ? "error" : "warning",
                                          e->message);
                if (e->fatal)
                    return false;
            }
        }

        return true;
        ;
    }
}
