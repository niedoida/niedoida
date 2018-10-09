/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_CORE_KIT_HPP
#define NIEDOIDA_CORE_KIT_CORE_KIT_HPP

/**
 * @defgroup core_kit Core Kit
 * 
 * @brief Core kit defines artifacts representing basic 
 * quantum-chemical abstractions.
 * 
 * The library provides foundation for any quantum-chemical code,
 * defining classes representing atom, basis set, etc.
 * 
 */

#include "core_utils.hpp"
#include "atom.hpp"
#include "basis_set.hpp"
#include "basis_set_builder.hpp"
#include "periodic_table.hpp"
#include "spin.hpp"
#include "system.hpp"
#include "shell_quartet_index_generator.hpp"
#include "integral_engine.hpp"
#include "fock_matrix_generator.hpp"
#include "ao_value_engine.hpp"
#include "grid.hpp"
#include "shell_quartet_petite_list.hpp"
#include "factory.hpp"
#include "fock_matrix_generator_factory.hpp"
#include "integral_engine_factory.hpp"
#include "promolecule.hpp"
#include "occupations.hpp"
#include "occupations_factory.hpp"
#include "initial_guess.hpp"
#include "initial_guess_factory.hpp"

#endif
