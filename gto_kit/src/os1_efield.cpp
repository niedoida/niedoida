/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_kit/os1_efield.hpp"

#include "gto_kit/os1_integral_engine.hpp"

namespace niedoida {
    namespace gto {
        OS1NucPotential::OS1NucPotential(
            std::shared_ptr<const core::System> system) :
            _v(OS1OneElectronIntegralEngine(*system)
                   .external_potential_matrix_from_nucl())
        {
        }

        OS1ExtChrgsPotential::OS1ExtChrgsPotential(
            std::shared_ptr<const core::System> system) :
            _v(OS1OneElectronIntegralEngine(*system)
                   .external_potential_matrix_from_ext_chrgs())
        {
        }

        OS1UEFPotential::OS1UEFPotential(
            std::shared_ptr<const core::System> system)
        {
            OS1MultipoleIntegralEngine mie(*system);

            _v = -system->uniform_electric_field[0] * mie.dipole_matrices()[0] -
                 system->uniform_electric_field[1] * mie.dipole_matrices()[1] -
                 system->uniform_electric_field[2] * mie.dipole_matrices()[2];
        }
    }
}
