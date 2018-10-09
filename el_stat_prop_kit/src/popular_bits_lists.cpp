/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include<el_stat_prop_kit/properties_tags.hpp>
#include<el_stat_prop_kit/popular_bits_lists.hpp>
#include<el_stat_prop_kit/multiplied_property_tag.hpp>
#include<el_stat_prop_kit/multiplied_property_bit.hpp>

namespace el_stat_prop {

    std::array<std::shared_ptr<ChargeBit>, 1>
    charge_bit(const SystemAdapterAbstractBase& system) {
        ChargeTag q_tag;
        auto q_bit = std::make_shared<ChargeBit>(q_tag, system);
        return {q_bit};
    }

    std::array<std::shared_ptr<DipoleMomentBit>, 3>
    dipole_bits_in_std_frame(const SystemAdapterAbstractBase& system) {
        DipoleMomentTag p_x_tag(Orient::stdOrient, Direction::x, std::make_shared<StdOrientReferencePointTag>());
        DipoleMomentTag p_y_tag(Orient::stdOrient, Direction::y, std::make_shared<StdOrientReferencePointTag>());
        DipoleMomentTag p_z_tag(Orient::stdOrient, Direction::z, std::make_shared<StdOrientReferencePointTag>());
        auto p_x_bit = std::make_shared<DipoleMomentBit>(p_x_tag, system);
        auto p_y_bit = std::make_shared<DipoleMomentBit>(p_y_tag, system);
        auto p_z_bit = std::make_shared<DipoleMomentBit>(p_z_tag, system);
        return {p_x_bit, p_y_bit, p_z_bit};
    }

    std::array<std::shared_ptr<DipoleMomentBit>, 3>
    dipole_bits_in_inp_frame(const SystemAdapterAbstractBase& system) {
        DipoleMomentTag p_x_tag(Orient::inpOrient, Direction::x, std::make_shared<InpOrientReferencePointTag>());
        DipoleMomentTag p_y_tag(Orient::inpOrient, Direction::y, std::make_shared<InpOrientReferencePointTag>());
        DipoleMomentTag p_z_tag(Orient::inpOrient, Direction::z, std::make_shared<InpOrientReferencePointTag>());
        auto p_x_bit = std::make_shared<DipoleMomentBit>(p_x_tag, system);
        auto p_y_bit = std::make_shared<DipoleMomentBit>(p_y_tag, system);
        auto p_z_bit = std::make_shared<DipoleMomentBit>(p_z_tag, system);
        return {p_x_bit, p_y_bit, p_z_bit};
    }

    std::array<std::shared_ptr<QuadrupoleMomentBit>, 6>
    quadrupole_bits_in_std_frame(const SystemAdapterAbstractBase& system) {
        QuadrupoleMomentTag Q_xx_tag(Orient::stdOrient, Direction2::xx, std::make_shared<StdOrientReferencePointTag>());
        QuadrupoleMomentTag Q_xy_tag(Orient::stdOrient, Direction2::xy, std::make_shared<StdOrientReferencePointTag>());
        QuadrupoleMomentTag Q_xz_tag(Orient::stdOrient, Direction2::xz, std::make_shared<StdOrientReferencePointTag>());
        QuadrupoleMomentTag Q_yy_tag(Orient::stdOrient, Direction2::yy, std::make_shared<StdOrientReferencePointTag>());
        QuadrupoleMomentTag Q_yz_tag(Orient::stdOrient, Direction2::yz, std::make_shared<StdOrientReferencePointTag>());
        QuadrupoleMomentTag Q_zz_tag(Orient::stdOrient, Direction2::zz, std::make_shared<StdOrientReferencePointTag>());
        auto Q_xx_bit = std::make_shared<QuadrupoleMomentBit>(Q_xx_tag, system);
        auto Q_xy_bit = std::make_shared<QuadrupoleMomentBit>(Q_xy_tag, system);
        auto Q_xz_bit = std::make_shared<QuadrupoleMomentBit>(Q_xz_tag, system);
        auto Q_yy_bit = std::make_shared<QuadrupoleMomentBit>(Q_yy_tag, system);
        auto Q_yz_bit = std::make_shared<QuadrupoleMomentBit>(Q_yz_tag, system);
        auto Q_zz_bit = std::make_shared<QuadrupoleMomentBit>(Q_zz_tag, system);
        return {Q_xx_bit, Q_xy_bit, Q_xz_bit, Q_yy_bit, Q_yz_bit, Q_zz_bit};
    }

    std::array<std::shared_ptr<QuadrupoleMomentBit>, 6>
    quadrupole_bits_in_inp_frame(const SystemAdapterAbstractBase& system) {
        QuadrupoleMomentTag Q_xx_tag(Orient::inpOrient, Direction2::xx, std::make_shared<InpOrientReferencePointTag>());
        QuadrupoleMomentTag Q_xy_tag(Orient::inpOrient, Direction2::xy, std::make_shared<InpOrientReferencePointTag>());
        QuadrupoleMomentTag Q_xz_tag(Orient::inpOrient, Direction2::xz, std::make_shared<InpOrientReferencePointTag>());
        QuadrupoleMomentTag Q_yy_tag(Orient::inpOrient, Direction2::yy, std::make_shared<InpOrientReferencePointTag>());
        QuadrupoleMomentTag Q_yz_tag(Orient::inpOrient, Direction2::yz, std::make_shared<InpOrientReferencePointTag>());
        QuadrupoleMomentTag Q_zz_tag(Orient::inpOrient, Direction2::zz, std::make_shared<InpOrientReferencePointTag>());
        auto Q_xx_bit = std::make_shared<QuadrupoleMomentBit>(Q_xx_tag, system);
        auto Q_xy_bit = std::make_shared<QuadrupoleMomentBit>(Q_xy_tag, system);
        auto Q_xz_bit = std::make_shared<QuadrupoleMomentBit>(Q_xz_tag, system);
        auto Q_yy_bit = std::make_shared<QuadrupoleMomentBit>(Q_yy_tag, system);
        auto Q_yz_bit = std::make_shared<QuadrupoleMomentBit>(Q_yz_tag, system);
        auto Q_zz_bit = std::make_shared<QuadrupoleMomentBit>(Q_zz_tag, system);
        return {Q_xx_bit, Q_xy_bit, Q_xz_bit, Q_yy_bit, Q_yz_bit, Q_zz_bit};
    }

    // *****************************************************************************
    // *******************  helper classes                           ***************
    // *****************************************************************************

    namespace {

        struct AtomicFragmentTagFactory {
            virtual std::shared_ptr<FragmentTag> make(unsigned atom) const = 0;
            virtual ~AtomicFragmentTagFactory() = default;
        };

        struct MullikenTagFactory : public AtomicFragmentTagFactory {
            std::shared_ptr<FragmentTag> make(unsigned atom) const override;
        };

        struct LowdinTagFactory : public AtomicFragmentTagFactory {
            std::shared_ptr<FragmentTag> make(unsigned atom) const override;
        };

        inline std::shared_ptr<FragmentTag> MullikenTagFactory::make(unsigned atom) const {
            return std::make_shared<MullikenTag>(atom);
        }

        inline std::shared_ptr<FragmentTag> LowdinTagFactory::make(unsigned atom) const {
            return std::make_shared<LowdinTag>(atom);
        }

    }

    // *****************************************************************************
    // *******************  partial atomic charges                   ***************
    // *****************************************************************************

    std::vector<std::shared_ptr<FragmentPropertyBit>>
    atomic_partial_charges_bits(const SystemAdapterAbstractBase& system,
            const AtomicFragmentTagFactory& fragment_tag_factory) {
        std::vector<std::shared_ptr < FragmentPropertyBit>> result;
        result.reserve(system.n_atoms());
        for (unsigned atom = 0; atom < system.n_atoms(); ++atom) {
            FragmentPropertyTag q_atom_tag(std::make_shared<ChargeTag>(), fragment_tag_factory.make(atom));
            auto q_atom_bit = std::make_shared<FragmentPropertyBit>(q_atom_tag, system);
            result.push_back(q_atom_bit);
        }
        return result;
    }

    std::vector<std::shared_ptr<FragmentPropertyBit>>
    atomic_partial_mulliken_charges_bits(const SystemAdapterAbstractBase& system) {
        MullikenTagFactory fragment_tag_factory;
        return atomic_partial_charges_bits(system, fragment_tag_factory);
    }

    std::vector<std::shared_ptr<FragmentPropertyBit>>
    atomic_partial_lowdin_charges_bits(const SystemAdapterAbstractBase& system) {
        LowdinTagFactory fragment_tag_factory;
        return atomic_partial_charges_bits(system, fragment_tag_factory);
    }

    // *****************************************************************************
    // *******************  partial atomic dipoles                   ***************
    // *****************************************************************************

    std::vector<std::shared_ptr<FragmentPropertyBit>>
    atomic_partial_dipoles_bits(const SystemAdapterAbstractBase& system,
            Orient orient,
            const AtomicFragmentTagFactory& fragment_tag_factory) {
        std::vector<std::shared_ptr < FragmentPropertyBit>> result;
        result.reserve(3 * system.n_atoms());
        for (unsigned atom = 0; atom < system.n_atoms(); ++atom) {
            auto p_x_ref_atom_tag = std::make_shared<DipoleMomentTag>(orient, Direction::x, std::make_shared<AtomReferencePointTag>(atom));
            auto p_y_ref_atom_tag = std::make_shared<DipoleMomentTag>(orient, Direction::y, std::make_shared<AtomReferencePointTag>(atom));
            auto p_z_ref_atom_tag = std::make_shared<DipoleMomentTag>(orient, Direction::z, std::make_shared<AtomReferencePointTag>(atom));
            auto p_x_atom_tag = std::make_shared<FragmentPropertyTag>(p_x_ref_atom_tag, fragment_tag_factory.make(atom));
            auto p_y_atom_tag = std::make_shared<FragmentPropertyTag>(p_y_ref_atom_tag, fragment_tag_factory.make(atom));
            auto p_z_atom_tag = std::make_shared<FragmentPropertyTag>(p_z_ref_atom_tag, fragment_tag_factory.make(atom));
            auto p_x_atom_bit = std::make_shared<FragmentPropertyBit>(*p_x_atom_tag, system);
            auto p_y_atom_bit = std::make_shared<FragmentPropertyBit>(*p_y_atom_tag, system);
            auto p_z_atom_bit = std::make_shared<FragmentPropertyBit>(*p_z_atom_tag, system);
            result.push_back(p_x_atom_bit);
            result.push_back(p_y_atom_bit);
            result.push_back(p_z_atom_bit);
        }
        return result;
    }

    std::vector<std::shared_ptr<FragmentPropertyBit>>
    atomic_partial_mulliken_dipoles_bits_in_std_frame(const SystemAdapterAbstractBase& system) {
        const MullikenTagFactory fragment_tag_factory;
        const Orient orient = Orient::stdOrient;
        return atomic_partial_dipoles_bits(system, orient, fragment_tag_factory);
    }

    std::vector<std::shared_ptr<FragmentPropertyBit>>
    atomic_partial_mulliken_dipoles_bits_in_inp_frame(const SystemAdapterAbstractBase& system) {
        const MullikenTagFactory fragment_tag_factory;
        const Orient orient = Orient::inpOrient;
        return atomic_partial_dipoles_bits(system, orient, fragment_tag_factory);
    }

    std::vector<std::shared_ptr<FragmentPropertyBit>>
    atomic_partial_lowdin_dipoles_bits_in_std_frame(const SystemAdapterAbstractBase& system) {
        const LowdinTagFactory fragment_tag_factory;
        const Orient orient = Orient::stdOrient;
        return atomic_partial_dipoles_bits(system, orient, fragment_tag_factory);
    }

    std::vector<std::shared_ptr<FragmentPropertyBit>>
    atomic_partial_lowdin_dipoles_bits_in_inp_frame(const SystemAdapterAbstractBase& system) {
        const LowdinTagFactory fragment_tag_factory;
        const Orient orient = Orient::inpOrient;
        return atomic_partial_dipoles_bits(system, orient, fragment_tag_factory);
    }


    // *****************************************************************************
    // *******************  partial atomic quadrupoles               ***************
    // *****************************************************************************

    std::vector<std::shared_ptr<FragmentPropertyBit>>
    atomic_partial_quadrupoles(const SystemAdapterAbstractBase& system,
            Orient orient,
            const AtomicFragmentTagFactory& fragment_tag_factory) {
        std::vector<std::shared_ptr < FragmentPropertyBit>> result;
        result.reserve(6 * system.n_atoms());
        for (unsigned atom = 0; atom < system.n_atoms(); ++atom) {
            auto rawQ_xx_ref_atom_tag = std::make_shared<QuadrupoleMomentTag>(orient, Direction2::xx, std::make_shared<AtomReferencePointTag>(atom));
            auto rawQ_xy_ref_atom_tag = std::make_shared<QuadrupoleMomentTag>(orient, Direction2::xy, std::make_shared<AtomReferencePointTag>(atom));
            auto rawQ_xz_ref_atom_tag = std::make_shared<QuadrupoleMomentTag>(orient, Direction2::xz, std::make_shared<AtomReferencePointTag>(atom));
            auto rawQ_yy_ref_atom_tag = std::make_shared<QuadrupoleMomentTag>(orient, Direction2::yy, std::make_shared<AtomReferencePointTag>(atom));
            auto rawQ_yz_ref_atom_tag = std::make_shared<QuadrupoleMomentTag>(orient, Direction2::yz, std::make_shared<AtomReferencePointTag>(atom));
            auto rawQ_zz_ref_atom_tag = std::make_shared<QuadrupoleMomentTag>(orient, Direction2::zz, std::make_shared<AtomReferencePointTag>(atom));
            auto rawQ_xx_atom_tag = std::make_shared<FragmentPropertyTag>(rawQ_xx_ref_atom_tag, fragment_tag_factory.make(atom));
            auto rawQ_xy_atom_tag = std::make_shared<FragmentPropertyTag>(rawQ_xy_ref_atom_tag, fragment_tag_factory.make(atom));
            auto rawQ_xz_atom_tag = std::make_shared<FragmentPropertyTag>(rawQ_xz_ref_atom_tag, fragment_tag_factory.make(atom));
            auto rawQ_yy_atom_tag = std::make_shared<FragmentPropertyTag>(rawQ_yy_ref_atom_tag, fragment_tag_factory.make(atom));
            auto rawQ_yz_atom_tag = std::make_shared<FragmentPropertyTag>(rawQ_yz_ref_atom_tag, fragment_tag_factory.make(atom));
            auto rawQ_zz_atom_tag = std::make_shared<FragmentPropertyTag>(rawQ_zz_ref_atom_tag, fragment_tag_factory.make(atom));
            auto rawQ_xx_atom_bit = std::make_shared<FragmentPropertyBit>(*rawQ_xx_atom_tag, system);
            auto rawQ_xy_atom_bit = std::make_shared<FragmentPropertyBit>(*rawQ_xy_atom_tag, system);
            auto rawQ_xz_atom_bit = std::make_shared<FragmentPropertyBit>(*rawQ_xz_atom_tag, system);
            auto rawQ_yy_atom_bit = std::make_shared<FragmentPropertyBit>(*rawQ_yy_atom_tag, system);
            auto rawQ_yz_atom_bit = std::make_shared<FragmentPropertyBit>(*rawQ_yz_atom_tag, system);
            auto rawQ_zz_atom_bit = std::make_shared<FragmentPropertyBit>(*rawQ_zz_atom_tag, system);
            result.push_back(rawQ_xx_atom_bit);
            result.push_back(rawQ_xy_atom_bit);
            result.push_back(rawQ_xz_atom_bit);
            result.push_back(rawQ_yy_atom_bit);
            result.push_back(rawQ_yz_atom_bit);
            result.push_back(rawQ_zz_atom_bit);
        }
        return result;
    }

    std::vector<std::shared_ptr<FragmentPropertyBit>>
    atomic_partial_mulliken_quadrupoles_bits_in_std_frame(const SystemAdapterAbstractBase& system) {
        const MullikenTagFactory fragment_tag_factory;
        const Orient orient = Orient::stdOrient;
        return atomic_partial_quadrupoles(system, orient, fragment_tag_factory);
    }

    std::vector<std::shared_ptr<FragmentPropertyBit>>
    atomic_partial_mulliken_quadrupoles_bits_in_inp_frame(const SystemAdapterAbstractBase& system) {
        const MullikenTagFactory fragment_tag_factory;
        const Orient orient = Orient::inpOrient;
        return atomic_partial_quadrupoles(system, orient, fragment_tag_factory);
    }

    std::vector<std::shared_ptr<FragmentPropertyBit>>
    atomic_partial_lowdin_quadrupoles_bits_in_std_frame(const SystemAdapterAbstractBase& system) {
        const LowdinTagFactory fragment_tag_factory;
        const Orient orient = Orient::stdOrient;
        return atomic_partial_quadrupoles(system, orient, fragment_tag_factory);
    }

    std::vector<std::shared_ptr<FragmentPropertyBit>>
    atomic_partial_lowdin_quadrupoles_bits_in_inp_frame(const SystemAdapterAbstractBase& system) {
        const LowdinTagFactory fragment_tag_factory;
        const Orient orient = Orient::inpOrient;
        return atomic_partial_quadrupoles(system, orient, fragment_tag_factory);
    }

    // *****************************************************************************
    // *******************   pi                                      ***************
    // *****************************************************************************    

    std::vector<std::shared_ptr<MultipliedPropertyBit>>
    bits_for_dipole_part_of_pi(const SystemAdapterAbstractBase& system,
            Orient orient,
            const AtomicFragmentTagFactory& fragment_tag_factory) {
        std::vector<std::shared_ptr < MultipliedPropertyBit>> result;
        result.reserve(3 * system.n_atoms());
        for (unsigned atom = 0; atom < system.n_atoms(); ++atom) {
            auto p_x_ref_atom_tag = std::make_shared<DipoleMomentTag>(orient, Direction::x, std::make_shared<AtomReferencePointTag>(atom));
            auto p_y_ref_atom_tag = std::make_shared<DipoleMomentTag>(orient, Direction::y, std::make_shared<AtomReferencePointTag>(atom));
            auto p_z_ref_atom_tag = std::make_shared<DipoleMomentTag>(orient, Direction::z, std::make_shared<AtomReferencePointTag>(atom));
            auto p_x_atom_tag = std::make_shared<FragmentPropertyTag>(p_x_ref_atom_tag, fragment_tag_factory.make(atom));
            auto p_y_atom_tag = std::make_shared<FragmentPropertyTag>(p_y_ref_atom_tag, fragment_tag_factory.make(atom));
            auto p_z_atom_tag = std::make_shared<FragmentPropertyTag>(p_z_ref_atom_tag, fragment_tag_factory.make(atom));
            auto mul_p_x_atom_tag = std::make_shared<MultipliedPropertyTag>(p_x_atom_tag, -1.0);
            auto mul_p_y_atom_tag = std::make_shared<MultipliedPropertyTag>(p_y_atom_tag, -1.0);
            auto mul_p_z_atom_tag = std::make_shared<MultipliedPropertyTag>(p_z_atom_tag, -1.0);
            auto mul_p_x_atom_bit = std::make_shared<MultipliedPropertyBit>(*mul_p_x_atom_tag, system);
            auto mul_p_y_atom_bit = std::make_shared<MultipliedPropertyBit>(*mul_p_y_atom_tag, system);
            auto mul_p_z_atom_bit = std::make_shared<MultipliedPropertyBit>(*mul_p_z_atom_tag, system);
            result.push_back(mul_p_x_atom_bit);
            result.push_back(mul_p_y_atom_bit);
            result.push_back(mul_p_z_atom_bit);
        }
        return result;
    }

    std::vector<std::shared_ptr<MultipliedPropertyBit>>
    bits_for_quadrupole_part_of_pi(const SystemAdapterAbstractBase& system,
            Orient orient,
            const AtomicFragmentTagFactory& fragment_tag_factory) {
        std::vector<std::shared_ptr < MultipliedPropertyBit>> result;
        result.reserve(6 * system.n_atoms());
        for (unsigned atom = 0; atom < system.n_atoms(); ++atom) {
            auto rawQ_xx_ref_atom_tag = std::make_shared<QuadrupoleMomentTag>(orient, Direction2::xx, std::make_shared<AtomReferencePointTag>(atom));
            auto rawQ_xy_ref_atom_tag = std::make_shared<QuadrupoleMomentTag>(orient, Direction2::xy, std::make_shared<AtomReferencePointTag>(atom));
            auto rawQ_xz_ref_atom_tag = std::make_shared<QuadrupoleMomentTag>(orient, Direction2::xz, std::make_shared<AtomReferencePointTag>(atom));
            auto rawQ_yy_ref_atom_tag = std::make_shared<QuadrupoleMomentTag>(orient, Direction2::yy, std::make_shared<AtomReferencePointTag>(atom));
            auto rawQ_yz_ref_atom_tag = std::make_shared<QuadrupoleMomentTag>(orient, Direction2::yz, std::make_shared<AtomReferencePointTag>(atom));
            auto rawQ_zz_ref_atom_tag = std::make_shared<QuadrupoleMomentTag>(orient, Direction2::zz, std::make_shared<AtomReferencePointTag>(atom));
            auto rawQ_xx_atom_tag = std::make_shared<FragmentPropertyTag>(rawQ_xx_ref_atom_tag, fragment_tag_factory.make(atom));
            auto rawQ_xy_atom_tag = std::make_shared<FragmentPropertyTag>(rawQ_xy_ref_atom_tag, fragment_tag_factory.make(atom));
            auto rawQ_xz_atom_tag = std::make_shared<FragmentPropertyTag>(rawQ_xz_ref_atom_tag, fragment_tag_factory.make(atom));
            auto rawQ_yy_atom_tag = std::make_shared<FragmentPropertyTag>(rawQ_yy_ref_atom_tag, fragment_tag_factory.make(atom));
            auto rawQ_yz_atom_tag = std::make_shared<FragmentPropertyTag>(rawQ_yz_ref_atom_tag, fragment_tag_factory.make(atom));
            auto rawQ_zz_atom_tag = std::make_shared<FragmentPropertyTag>(rawQ_zz_ref_atom_tag, fragment_tag_factory.make(atom));
            auto mul_rawQ_xx_atom_tag = std::make_shared<MultipliedPropertyTag>(rawQ_xx_atom_tag, -0.5);
            auto mul_rawQ_xy_atom_tag = std::make_shared<MultipliedPropertyTag>(rawQ_xy_atom_tag, -1.0);
            auto mul_rawQ_xz_atom_tag = std::make_shared<MultipliedPropertyTag>(rawQ_xz_atom_tag, -1.0);
            auto mul_rawQ_yy_atom_tag = std::make_shared<MultipliedPropertyTag>(rawQ_yy_atom_tag, -0.5);
            auto mul_rawQ_yz_atom_tag = std::make_shared<MultipliedPropertyTag>(rawQ_yz_atom_tag, -1.0);
            auto mul_rawQ_zz_atom_tag = std::make_shared<MultipliedPropertyTag>(rawQ_zz_atom_tag, -0.5);
            auto mul_rawQ_xx_atom_bit = std::make_shared<MultipliedPropertyBit>(*mul_rawQ_xx_atom_tag, system);
            auto mul_rawQ_xy_atom_bit = std::make_shared<MultipliedPropertyBit>(*mul_rawQ_xy_atom_tag, system);
            auto mul_rawQ_xz_atom_bit = std::make_shared<MultipliedPropertyBit>(*mul_rawQ_xz_atom_tag, system);
            auto mul_rawQ_yy_atom_bit = std::make_shared<MultipliedPropertyBit>(*mul_rawQ_yy_atom_tag, system);
            auto mul_rawQ_yz_atom_bit = std::make_shared<MultipliedPropertyBit>(*mul_rawQ_yz_atom_tag, system);
            auto mul_rawQ_zz_atom_bit = std::make_shared<MultipliedPropertyBit>(*mul_rawQ_zz_atom_tag, system);
            result.push_back(mul_rawQ_xx_atom_bit);
            result.push_back(mul_rawQ_xy_atom_bit);
            result.push_back(mul_rawQ_xz_atom_bit);
            result.push_back(mul_rawQ_yy_atom_bit);
            result.push_back(mul_rawQ_yz_atom_bit);
            result.push_back(mul_rawQ_zz_atom_bit);
        }
        return result;
    }

    std::vector<std::shared_ptr<PropertyBit>>
    bits_for_pi4N(const SystemAdapterAbstractBase& system,
            Orient orient,
            const AtomicFragmentTagFactory& fragment_tag_factory) {
        const auto charge_part = atomic_partial_charges_bits(system, fragment_tag_factory);
        const auto dipole_part = bits_for_dipole_part_of_pi(system, orient, fragment_tag_factory);
        std::vector<std::shared_ptr < PropertyBit>> result;
        result.resize(4 * system.n_atoms());
        auto it = std::copy(charge_part.cbegin(), charge_part.cend(), result.begin());
        std::copy(dipole_part.cbegin(), dipole_part.cend(), it);
        return result;
    }

    std::vector<std::shared_ptr < PropertyBit >>
    bits_for_pi4N_mulliken_in_inp_frame(const SystemAdapterAbstractBase & system) {
        const MullikenTagFactory fragment_tag_factory;
        const Orient orient = Orient::inpOrient;
        return bits_for_pi4N(system, orient, fragment_tag_factory);
    }

    std::vector<std::shared_ptr < PropertyBit >>
    bits_for_pi4N_lowdin_in_inp_frame(const SystemAdapterAbstractBase & system) {
        const LowdinTagFactory fragment_tag_factory;
        const Orient orient = Orient::inpOrient;
        return bits_for_pi4N(system, orient, fragment_tag_factory);
    }

    std::vector<std::shared_ptr<PropertyBit>>
    bits_for_pi10N(const SystemAdapterAbstractBase& system,
            Orient orient,
            const AtomicFragmentTagFactory& fragment_tag_factory) {
        const auto charge_part = atomic_partial_charges_bits(system, fragment_tag_factory);
        const auto dipole_part = bits_for_dipole_part_of_pi(system, orient, fragment_tag_factory);
        const auto quadrupole_part = bits_for_quadrupole_part_of_pi(system, orient, fragment_tag_factory);
        std::vector<std::shared_ptr < PropertyBit>> result;
        result.resize(10 * system.n_atoms());
        auto it = std::copy(charge_part.cbegin(), charge_part.cend(), result.begin());
        it = std::copy(dipole_part.cbegin(), dipole_part.cend(), it);
        std::copy(quadrupole_part.cbegin(), quadrupole_part.cend(), it);
        return result;
    }

    std::vector<std::shared_ptr < PropertyBit >>
    bits_for_pi10N_mulliken_in_std_frame(const SystemAdapterAbstractBase & system) {
        const MullikenTagFactory fragment_tag_factory;
        const Orient orient = Orient::stdOrient;
        return bits_for_pi10N(system, orient, fragment_tag_factory);
    }

    std::vector<std::shared_ptr < PropertyBit >>
    bits_for_pi10N_mulliken_in_inp_frame(const SystemAdapterAbstractBase & system) {
        const MullikenTagFactory fragment_tag_factory;
        const Orient orient = Orient::inpOrient;
        return bits_for_pi10N(system, orient, fragment_tag_factory);
    }

    std::vector<std::shared_ptr < PropertyBit >>
    bits_for_pi10N_lowdin_in_std_frame(const SystemAdapterAbstractBase & system) {
        const LowdinTagFactory fragment_tag_factory;
        const Orient orient = Orient::stdOrient;
        return bits_for_pi10N(system, orient, fragment_tag_factory);
    }

    std::vector<std::shared_ptr < PropertyBit >>
    bits_for_pi10N_lowdin_in_inp_frame(const SystemAdapterAbstractBase & system) {
        const LowdinTagFactory fragment_tag_factory;
        const Orient orient = Orient::inpOrient;
        return bits_for_pi10N(system, orient, fragment_tag_factory);
    }

    // *****************************************************************************
    // *******************  container of bits transformation         ***************
    // *****************************************************************************

    BitsValues::BitsValues(unsigned n_values) :
    m_value_nuclei(n_values),
    m_value_electron(n_values) {
    }

    const arma::vec & BitsValues::value_nuclei() const {
        return m_value_nuclei;
    }

    const arma::vec & BitsValues::value_electron() const {
        return m_value_electron;
    }

} // end of namespace el_stat_prop
