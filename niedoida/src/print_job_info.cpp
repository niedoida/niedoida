/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "io_kit/log.hpp"
#include "niedoida/niedoida.hpp"

namespace niedoida {

    void print_job_info(const Config& config, const InputData& input_data)
    {
        // using boost::format;

        io::Log::Section section("job info");

        io::Log::instance().write(
            io::Logger::TERSE, "job name", config.job_name());
        io::Log::instance().write(
            io::Logger::TERSE, "job title", input_data.title);
        io::Log::instance().write(
            io::Logger::TERSE, "basis set", input_data.basis_set_name);
        io::Log::instance().write(
            io::Logger::TERSE, "charge", input_data.charge);
        io::Log::instance().write(
            io::Logger::TERSE, "multiplicity", input_data.multiplicity);

        std::string t;
        switch (input_data.theory) {
        case InputData::THEORY_HF:
            t = "HF";
            break;
        case InputData::THEORY_HFVWN:
            t = "HFVWN";
            break;
        case InputData::THEORY_SLATER:
            t = "SLATER";
            break;
        case InputData::THEORY_SVWN:
            t = "SVWN";
            break;
        case InputData::THEORY_SLYP:
            t = "SLYP";
            break;
        case InputData::THEORY_BECKE:
            t = "BECKE";
            break;
        case InputData::THEORY_BLYP:
            t = "BLYP";
            break;
        case InputData::THEORY_PW91:
            t = "PW91";
            break;
        case InputData::THEORY_PBE:
            t = "PBE";
            break;
        case InputData::THEORY_B3LYP:
            t = "B3LYP";
            break;
        case InputData::THEORY_PBE0:
            t = "PBE0";
            break;
        case InputData::THEORY_MPW91:
            t = "MPW91";
            break;
        case InputData::THEORY_MPW91LYP:
            t = "MPW91LYP";
            break;
        case InputData::THEORY_mB3LYP:
            t = "mB3LYP";
            break;
        case InputData::THEORY_B3LYP5:
            t = "B3LYP5";
            break;
        case InputData::THEORY_B3PW91:
            t = "B3PW91";
            break;
        case InputData::THEORY_B2PLYP:
            t = "B2PLYP";
            break;
        case InputData::THEORY_mPW2PLYP:
            t = "mPW2PLYP";
            break;
        case InputData::THEORY_EH:
            t = "Extended Hueckel";
            break;
        default:
            t = "unknown :-(";
            break;
        }

        io::Log::instance().write(io::Logger::TERSE, "theory", t);

        switch (input_data.run_type) {
        case InputData::RUN_TYPE_SINGLE_POINT:
            io::Log::instance().write(
                io::Logger::TERSE, "run type", "single point");
            break;
        case InputData::RUN_TYPE_GEOMETRY_OPTIMIZATION:
            io::Log::instance().write(
                io::Logger::TERSE, "run type", "geometry optimization");
            break;
        }

        switch (input_data.units.length_unit) {
        case InputData::Units::LENGTH_UNIT_BOHR:
            io::Log::instance().write(io::Logger::TERSE, "length unit", "bohr");
            break;
        case InputData::Units::LENGTH_UNIT_ANGSTROM:
            io::Log::instance().write(
                io::Logger::TERSE, "length unit", "angstrom");
            break;
        }

        switch (input_data.units.energy_unit) {
        case InputData::Units::ENERGY_UNIT_HARTREE:
            io::Log::instance().write(
                io::Logger::TERSE, "energy unit", "hartree");
            break;
        case InputData::Units::ENERGY_UNIT_EV:
            io::Log::instance().write(io::Logger::TERSE, "energy unit", "ev");
            break;
        }
    }
}
