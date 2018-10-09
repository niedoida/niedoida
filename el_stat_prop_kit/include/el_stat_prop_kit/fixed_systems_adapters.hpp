/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef FIXED_SYSTEMS_ADAPTERS_HPP
#define FIXED_SYSTEMS_ADAPTERS_HPP

#include<el_stat_prop_kit/simple_system_adapter.hpp>

namespace el_stat_prop {

    SimpleSystemAdapter create_system_h2o_hf_sto3g();
    SimpleSystemAdapter create_system_oh_minus_hf_sto3g();

} // end of namespace el_stat_prop

#endif

