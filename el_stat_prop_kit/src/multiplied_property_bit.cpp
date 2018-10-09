/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include<el_stat_prop_kit/multiplied_property_bit.hpp>

namespace el_stat_prop {

    MultipliedPropertyBit::MultipliedPropertyBit(
            tag_t tag, const SystemAdapterAbstractBase& system) :
    PropertyBit(system),
    m_tag(tag),
    m_unit_property_bit(bit_from_tag<PropertyBit, PossibleProprtyBits>(*(m_tag.m_unit_property_tag), m_system)),
    m_factor(m_tag.m_factor) {
        if (!m_unit_property_bit)
            throw std::logic_error("Fail to create unit-property-bit in multiplied-property-bit.");
    }

    arma::mat MultipliedPropertyBit::electron_operator() const {
        arma::mat result = m_unit_property_bit->electron_operator();
        result *= m_factor;
        return result;
    }

    arma::vec MultipliedPropertyBit::nuclei_contraction_coeffs() const {
        arma::vec result = m_unit_property_bit->nuclei_contraction_coeffs();
        result *= m_factor;
        return result;
    }

} // end of namespace el_stat_prop
