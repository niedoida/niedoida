/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef MULTIPLIED_BIT_HPP
#define MULTIPLIED_BIT_HPP

#include<armadillo>

#include<el_stat_prop_kit/properties_bits.hpp>
#include<el_stat_prop_kit/fragment_property_bit.hpp>
#include<el_stat_prop_kit/multiplied_property_tag.hpp>
#include<el_stat_prop_kit/bit_from_tag.hpp>  // we use template<...> struct PossibleBitsList

namespace el_stat_prop {

    class MultipliedPropertyBit : public PropertyBit {
    public:
        using tag_t = MultipliedPropertyTag;
        MultipliedPropertyBit(tag_t, const SystemAdapterAbstractBase&);
        virtual arma::mat electron_operator() const override;
        virtual arma::vec nuclei_contraction_coeffs() const override;
    private:
        tag_t m_tag;
        using PossibleProprtyBits = PossibleBitsList<
                ChargeBit,
                DipoleMomentBit,
                QuadrupoleMomentBit,
                FragmentPropertyBit>;
        std::shared_ptr<PropertyBit> m_unit_property_bit;
        double m_factor;
    };

} // end of namespace el_stat_prop

#endif