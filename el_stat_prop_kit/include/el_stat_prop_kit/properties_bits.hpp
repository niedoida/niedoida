/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef ELECTRON_DENSITY_PROPERTIES_BITS_HPP
#define ELECTRON_DENSITY_PROPERTIES_BITS_HPP

#include <armadillo>

#include "el_stat_prop_kit/adapter.hpp"
#include "el_stat_prop_kit/bit_from_tag.hpp" // we use template<...> struct PossibleBitsList
#include "el_stat_prop_kit/properties_tags.hpp"
#include "el_stat_prop_kit/reference_points_bits.hpp"

namespace el_stat_prop {

    // *****************************************************************************
    // ***********      PropertyBit - abstract base class: **************
    // *****************************************************************************

    class PropertyBit {
    public:
        explicit PropertyBit(const SystemAdapterAbstractBase&);
        virtual arma::mat electron_operator() const = 0;
        virtual arma::vec nuclei_contraction_coeffs() const = 0;
        virtual double value_electron(arma::mat density_matrix_alpha,
                                      arma::mat density_matrix_beta) const;
        virtual double
        value_electron() const; // density matrices taken from m_system
        virtual double value_nuclei(arma::vec nuclei_charges) const;
        virtual double value_nuclei() const; // atom charges taken from m_system
        virtual double value() const;
        virtual ~PropertyBit() = default;

    public:
        const SystemAdapterAbstractBase& m_system;
    };

    // *****************************************************************************
    // ***********      PropertyBit - concrete classes: *************
    // *****************************************************************************

    class ChargeBit : public PropertyBit {
    public:
        using tag_t = ChargeTag;
        ChargeBit(tag_t, const SystemAdapterAbstractBase&);
        arma::mat electron_operator() const override;
        arma::vec nuclei_contraction_coeffs() const override;
    };

    // *****************************************************************************

    class DipoleMomentBit : public PropertyBit {
    public:
        using tag_t = DipoleMomentTag;
        DipoleMomentBit(tag_t, const SystemAdapterAbstractBase&);
        arma::mat electron_operator() const override;
        arma::vec nuclei_contraction_coeffs() const override;

    public:
        using ReferencePointBitsList =
            PossibleBitsList<StdOrientReferencePointBit,
                             InpOrientReferencePointBit,
                             AtomReferencePointBit>;
        const tag_t m_tag;
        const std::shared_ptr<ReferencePointBit> m_reference_point_bit;
    };

    // *****************************************************************************

    class QuadrupoleMomentBit : public PropertyBit {
    public:
        using tag_t = QuadrupoleMomentTag;
        QuadrupoleMomentBit(tag_t, const SystemAdapterAbstractBase&);
        arma::mat electron_operator() const override;
        arma::vec nuclei_contraction_coeffs() const override;

    public:
        using ReferencePointBitsList =
            PossibleBitsList<StdOrientReferencePointBit,
                             InpOrientReferencePointBit,
                             AtomReferencePointBit>;
        const tag_t m_tag;
        const std::shared_ptr<ReferencePointBit> m_reference_point_bit;
    };

} // end of namespace el_stat_prop

#endif
