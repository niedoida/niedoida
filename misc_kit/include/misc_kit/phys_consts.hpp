/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_MISC_KIT_PHYS_CONSTS_HPP
#define NIEDOIDA_MISC_KIT_PHYS_CONSTS_HPP

namespace niedoida {
    namespace misc {
        
        /**
         * @defgroup phys_consts Physical constants
         * @ingroup misc
         * 
         * @brief Values of assorted physical constants.
         *
         * The values of the constants were taken from
         * <a href="http://physics.nist.gov/cuu/Constants/index.html">
         * The NIST Reference on Constants, Units and Uncertainty
         * </a>.
         * 
         * @{
         */

        /**
         * @defgroup conv_factors Conversion factors
         * 
         * @brief Values of conversion factors between assorted
         * physical constants.
         *
         * @{
         */

        /**
         * @brief eV to Hartree conversion factor.
         */
        const double ev_to_hartree = 3.67493245e-2;

        /**
         * @brief Hartree to eV conversion factor.
         */
        const double hartree_to_ev = 1 / ev_to_hartree;

        /**
         * @brief Bohr to Angstrom conversion factor.
         */
        const double bohr_to_angstrom = 0.5291772108;

        /**
         * @brief Angstrom to Bohr conversion factor.
         */
        const double angstrom_to_bohr = 1 / bohr_to_angstrom;

        /**
         * @brief Electron Mass to Dalton conversion factor.
         */
        const double electron_mass_to_dalton = 5.4857990945e-4; 

        /**
         * @brief Dalton to Electron Mass conversion factor.
         */
        const double dalton_to_electron_mass = 1 / electron_mass_to_dalton;

        /**
         * @}
         */

        /**
         * @}
         */
    }
}

#endif
