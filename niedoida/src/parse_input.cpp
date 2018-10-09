/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include <io_kit/log.hpp>
#include <sstream>
#include <yaml-cpp/yaml.h>

#include <niedoida/input_data_fill_functions.hpp>
#include <niedoida/parse_input.hpp>
#include <yaml_inputter/templated_filler.hpp>

namespace niedoida {

    InputData parse_input(std::istream& is)
    {

        io::Log::Section section("input");

        std::ostringstream filler_log_stream;
        YAML::Node root = YAML::Load(is);
        yaml_inputter::Filler filler(root, filler_log_stream);

        InputData id;
        niedoida::fill(id, filler);

        if (!id.scf_params.shift_2)
            id.scf_params.shift_2 = id.scf_params.shift_1;

        if (id.td_params.no_roots < id.td_params.no_states)
            id.td_params.no_roots = 2 * id.td_params.no_states;

        if (id.td_params.dress_no_iterations > 0 &&
            id.td_params.dress_no_davidson_iterations < 1)
            id.td_params.dress_no_davidson_iterations =
                id.td_params.no_iterations;

        return id;

    } // end of InputData parse_input(std::istream& is)

} // end of namespace niedoida
