/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include<el_stat_prop_kit/fragment_property_bit.hpp>

namespace el_stat_prop {

    FragmentPropertyBit::FragmentPropertyBit(
            tag_t tag, const SystemAdapterAbstractBase& system) :
    PropertyBit(system),
    m_tag(tag),
    m_property_bit(bit_from_tag<PropertyBit, PossibleProprtyBits>(*(m_tag.m_property_tag), m_system)),
    m_fragment_bit(bit_from_tag<FragmentBit, PossibleFragmentBits>(*(m_tag.m_fragment_tag), m_system)) {
        if (!m_property_bit)
            throw std::logic_error("Fail to create property-bit in fragment-property-bit.");
        if (!m_fragment_bit)
            throw std::logic_error("Fail to create fragment-bit in fragment-property-bit.");
    }

    arma::mat FragmentPropertyBit::electron_operator() const {
        arma::mat result = m_property_bit->electron_operator();
        result = m_fragment_bit->trim_electron_operator(result);
        return result;
    }

    arma::vec FragmentPropertyBit::nuclei_contraction_coeffs() const {
        arma::vec result = m_property_bit->nuclei_contraction_coeffs();
        result = m_fragment_bit->trim_nuclei_contraction_coeffs(result);
        return result;
    }

} // end of namespace el_stat_prop

