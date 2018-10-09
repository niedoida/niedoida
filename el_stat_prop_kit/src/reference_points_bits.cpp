/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include<el_stat_prop_kit/reference_points_bits.hpp>

namespace el_stat_prop {

    // *****************************************************************************

    ReferencePointBit::ReferencePointBit(
            const SystemAdapterAbstractBase& system) :
    m_system(system) {
    }

    ReferencePointBit::~ReferencePointBit() = default;

    // *****************************************************************************

    StdOrientReferencePointBit::StdOrientReferencePointBit(tag_t, const SystemAdapterAbstractBase& system) :
    ReferencePointBit(system) {
    }

    arma::vec3 StdOrientReferencePointBit::reference_point() const {
        return {0.0, 0.0, 0.0};
    }

    // *****************************************************************************

    InpOrientReferencePointBit::InpOrientReferencePointBit(tag_t, const SystemAdapterAbstractBase& system) :
    ReferencePointBit(system) {
    }

    arma::vec3 InpOrientReferencePointBit::reference_point() const {
        const arma::vec3 t = m_system.translation_to_std_frame();
        const arma::mat33 R = m_system.rotation_to_std_frame();
        return -R * t;
    }

    // *****************************************************************************

    AtomReferencePointBit::AtomReferencePointBit(tag_t tag, const SystemAdapterAbstractBase & system) :
    ReferencePointBit(system),
    m_tag(tag) {
    }

    arma::vec3 AtomReferencePointBit::reference_point() const {
        return m_system.atom_coords_std_frame(m_tag.m_atom);
    }

} // end of namespace el_stat_prop
