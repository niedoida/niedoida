/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef ELECTRON_DENSITY_FRAGMENT_PROPERTY_HPP
#define ELECTRON_DENSITY_FRAGMENT_PROPERTY_HPP

#include<armadillo>

#include<el_stat_prop_kit/properties_bits.hpp>
#include<el_stat_prop_kit/fragments_bits.hpp>
#include<el_stat_prop_kit/fragment_property_tag.hpp>
#include<el_stat_prop_kit/bit_from_tag.hpp>  // we use template<...> struct PossibleBitsList

namespace el_stat_prop {

    class FragmentPropertyBit : public PropertyBit {
    public:
        using tag_t = FragmentPropertyTag;
        FragmentPropertyBit(tag_t, const SystemAdapterAbstractBase&);
        arma::mat electron_operator() const override;
        arma::vec nuclei_contraction_coeffs() const override;
    public:
        tag_t m_tag;
        using PossibleProprtyBits = PossibleBitsList<
                ChargeBit,
                DipoleMomentBit,
                QuadrupoleMomentBit>;
        using PossibleFragmentBits = PossibleBitsList<
                MullikenBit,
                LowdinBit>;
        const std::shared_ptr<PropertyBit> m_property_bit;
        const std::shared_ptr<FragmentBit> m_fragment_bit;
    };

} // end of namespace el_stat_prop

#endif

