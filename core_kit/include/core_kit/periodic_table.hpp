/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_PERIODIC_TABLE_HPP
#define NIEDOIDA_CORE_KIT_PERIODIC_TABLE_HPP

#include <string>
#include <stdexcept>

namespace niedoida {
    namespace core {
        /**
         * @ingroup core_kit
         * 
         * @brief Chemical element.
         *
         * The class represents a chemical element.
         * 
         */
        struct Element {
            std::string symbol;
            std::string name;

            unsigned atomic_number;

            double bragg_slater_radius;
            double vdw_radius;
        };

        struct Isotope {
            const Element* element;

            unsigned atomic_weight;
        };

        class ElementNotFoundError: public std::runtime_error {
        public:
            ElementNotFoundError(const std::string& element):
                std::runtime_error(std::string("Element not found: ") + element)
            {
            }
        };

        class IsotopeNotFoundError: public std::runtime_error {
        public:
            IsotopeNotFoundError(const std::string& isotope, unsigned):
                std::runtime_error(std::string("Isotope not found: ") + isotope)
            {
            }
        };

        /**
         * @ingroup core_kit
         * 
         * @brief Finds an element by name.
         *
         */
        const Element& get_element_by_symbol(const std::string& symbol);
        const Element& get_element_by_name(const std::string& name);

        const Isotope& get_isotope_by_symbol(const std::string& symbol,
                                             unsigned atomic_weight = 0);
        const Isotope& get_isotope_by_name(const std::string& name,
                                           unsigned atomic_weight = 0);
    }
}

#endif
