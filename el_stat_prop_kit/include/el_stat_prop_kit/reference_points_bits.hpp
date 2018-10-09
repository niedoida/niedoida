/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef REFERENCE_POINTS_BITS_HPP
#define REFERENCE_POINTS_BITS_HPP

#include<armadillo>

#include<el_stat_prop_kit/reference_points_tags.hpp>
#include<el_stat_prop_kit/adapter.hpp>

namespace el_stat_prop {

    // *****************************************************************************
    // ***********  ReferencePointBit -  abstract base class: **********************
    // *****************************************************************************

    class ReferencePointBit {
    public:
        explicit ReferencePointBit(const SystemAdapterAbstractBase&);
        virtual arma::vec3 reference_point() const = 0;
        virtual ~ReferencePointBit() = 0;
        const SystemAdapterAbstractBase& m_system;
    };

    // *****************************************************************************
    // ***************  ReferencePointBit - concrete classes: **********************
    // *****************************************************************************

    class StdOrientReferencePointBit : public ReferencePointBit {
    public:
        using tag_t = StdOrientReferencePointTag;
        StdOrientReferencePointBit(tag_t, const SystemAdapterAbstractBase&);
        arma::vec3 reference_point() const override;
    };

    // *****************************************************************************

    class InpOrientReferencePointBit : public ReferencePointBit {
    public:
        using tag_t = InpOrientReferencePointTag;
        InpOrientReferencePointBit(tag_t, const SystemAdapterAbstractBase&);
        arma::vec3 reference_point() const override;
    };

    // *****************************************************************************

    class AtomReferencePointBit : public ReferencePointBit {
    public:
        using tag_t = AtomReferencePointTag;
        AtomReferencePointBit(tag_t, const SystemAdapterAbstractBase&);
        arma::vec3 reference_point() const override;
    public:
        const tag_t m_tag;
    };

} // end of namespace el_stat_prop

#endif

