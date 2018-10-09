/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include<stdexcept>

#include<el_stat_prop_kit/properties_bits.hpp>
#include<el_stat_prop_kit/direction_enum.hpp>

namespace el_stat_prop {


    // *****************************************************************************
    // ***********      PropertyBit - abstract base class:            **************
    // *****************************************************************************

    PropertyBit::PropertyBit(
            const SystemAdapterAbstractBase& system) :
    m_system(system) {
    }

    double PropertyBit::value_electron(arma::mat density_matrix_alpha, arma::mat density_matrix_beta) const {
        const arma::mat o = electron_operator();
        // TO DO: napisac to bez mniezenia maciezowego.
        return arma::trace(density_matrix_alpha * o) + arma::trace(density_matrix_beta * o);
    }

    double PropertyBit::value_electron() const {
        return value_electron(m_system.density_operator(0), m_system.density_operator(1));
    }

    double PropertyBit::value_nuclei(arma::vec nuclei_charges) const {
        //nuclei_charges.print("nuclei_charges:");
        const arma::vec coefs = nuclei_contraction_coeffs();
        //coefs.print("coefs:");
        return arma::dot(coefs, nuclei_charges);
    }

    double PropertyBit::value_nuclei() const {
        arma::vec nuclei_charges(m_system.n_atoms());
        for (unsigned atom = 0; atom < m_system.n_atoms(); ++atom) {
            nuclei_charges(atom) = m_system.nuclei_charge(atom);
        }
        return value_nuclei(nuclei_charges);
    }

    double PropertyBit::value() const {
        return value_nuclei() + value_electron();
    }

    // *****************************************************************************
    // ***********      PropertyBit - concrete classes:                *************
    // *****************************************************************************

    ChargeBit::ChargeBit(
            tag_t tag, const SystemAdapterAbstractBase& system) :
    PropertyBit(system) {
    }

    arma::mat ChargeBit::electron_operator() const {
        return -m_system.overlap_matrix();
    }

    arma::vec ChargeBit::nuclei_contraction_coeffs() const {
        arma::vec result(m_system.n_atoms(), arma::fill::ones);
        return result;
    }

    // *****************************************************************************

    DipoleMomentBit::DipoleMomentBit(
            tag_t tag, const SystemAdapterAbstractBase& system) :
    PropertyBit(system),
    m_tag(tag),
    m_reference_point_bit(bit_from_tag<ReferencePointBit, ReferencePointBitsList>(*(m_tag.m_reference_point), m_system)) {
        if (!m_reference_point_bit) {
            throw std::logic_error("Fail to create reference-point-bit in dipole-moment-bit.");
        }
    }

    /* Helper function.
     * Returns the rank1-direction represented as a vector on inp basis. */
    static arma::vec3 concretize_direction(
            Orient orient, Direction direction,
            const arma::mat33 & rotation_to_std_frame) {

        arma::vec3 resut = direction_to_vec<arma::vec>(direction);
        switch (orient) {
            case (Orient::stdOrient):
                return resut;
            case (Orient::inpOrient):
                return rotation_to_std_frame * resut;
            default: exit(54);
        }
    }

    arma::mat DipoleMomentBit::electron_operator() const {
        // acquisition of necessary data:
        const arma::vec3 direction = concretize_direction(
                m_tag.m_orient, m_tag.m_direction,
                m_system.rotation_to_std_frame());
        const arma::vec3 reference_point = m_reference_point_bit->reference_point();
        const unsigned n_basis = m_system.n_basis();
        // calculations: 
        arma::mat result(n_basis, n_basis, arma::fill::zeros);
        result -= m_system.r_std_oritent_matrix(Direction::x) * direction(0);
        result -= m_system.r_std_oritent_matrix(Direction::y) * direction(1);
        result -= m_system.r_std_oritent_matrix(Direction::z) * direction(2);
        const double contraction = arma::dot(reference_point, direction);
        result += m_system.overlap_matrix() * contraction;
        return result;
    }

    arma::vec DipoleMomentBit::nuclei_contraction_coeffs() const {
        arma::vec result(m_system.n_atoms());
        // acquisition of necessary data:
        using BitsList = PossibleBitsList<
                StdOrientReferencePointBit,
                InpOrientReferencePointBit,
                AtomReferencePointBit>;
        const auto reference_point_bit = bit_from_tag<ReferencePointBit, BitsList>(
                *(m_tag.m_reference_point), m_system);
        const arma::vec3 direction = concretize_direction(
                m_tag.m_orient, m_tag.m_direction,
                m_system.rotation_to_std_frame());
        const arma::vec3 reference_point = reference_point_bit->reference_point();
        // calculations: 
        for (unsigned atom = 0; atom < m_system.n_atoms(); ++atom) {
            const arma::vec3 pos = m_system.atom_coords_std_frame(atom);
            const arma::vec3 temp = pos - reference_point;
            result(atom) = arma::dot(temp, direction);
        }
        return result;
    }

    // *****************************************************************************

    QuadrupoleMomentBit::QuadrupoleMomentBit(
            tag_t tag, const SystemAdapterAbstractBase& system) :
    PropertyBit(system),
    m_tag(tag),
    m_reference_point_bit(bit_from_tag<ReferencePointBit, ReferencePointBitsList>(*(m_tag.m_reference_point), m_system)) {
        if (!m_reference_point_bit) {
            throw std::logic_error("Fail to create reference-point-bit in quadrupole-moment-bit.");
        }
    }

    /* Helper function.
     * Returns the rank2-direction represented as a vector on inp basis. */
    static arma::mat33 concretize_direction2(
            Orient orient, Direction2 direction,
            const arma::mat33 & rotation_to_std_frame) {
        auto directions = direction2_to_directions_pair(direction);
        const arma::rowvec v1 = direction_to_vec<arma::rowvec>(directions.first);
        const arma::colvec v2 = direction_to_vec<arma::colvec>(directions.second);
        switch (orient) {
            case (Orient::stdOrient):
                return arma::kron(v1, v2);
            case (Orient::inpOrient):
                return arma::kron(v1 * rotation_to_std_frame.t(), rotation_to_std_frame * v2);
            default: exit(56);
        }
    }

    arma::mat QuadrupoleMomentBit::electron_operator() const {
        // acquisition of necessary data:
        const arma::mat33 direction2 = concretize_direction2(
                m_tag.m_orient, m_tag.m_direction,
                m_system.rotation_to_std_frame());
        const arma::vec3 reference_point = m_reference_point_bit->reference_point();
        const unsigned n_basis = m_system.n_basis();
        // calculations: 
        const arma::mat33 direction2_symm = (direction2 + direction2.t()) / 2;
        arma::mat result(n_basis, n_basis, arma::fill::zeros);
        result -= m_system.rr_std_oritent_matrix(Direction::x, Direction::x) * direction2_symm(0, 0);
        result -= m_system.rr_std_oritent_matrix(Direction::x, Direction::y) * direction2_symm(0, 1) * 2;
        result -= m_system.rr_std_oritent_matrix(Direction::x, Direction::z) * direction2_symm(0, 2) * 2;
        result -= m_system.rr_std_oritent_matrix(Direction::y, Direction::y) * direction2_symm(1, 1);
        result -= m_system.rr_std_oritent_matrix(Direction::y, Direction::z) * direction2_symm(1, 2) * 2;
        result -= m_system.rr_std_oritent_matrix(Direction::z, Direction::z) * direction2_symm(2, 2);
        const arma::vec3 temp_contraction1 = direction2_symm * reference_point;
        result += 2 * m_system.r_std_oritent_matrix(Direction::x) * temp_contraction1(0);
        result += 2 * m_system.r_std_oritent_matrix(Direction::y) * temp_contraction1(1);
        result += 2 * m_system.r_std_oritent_matrix(Direction::z) * temp_contraction1(2);
        const double temp_contraction2 = arma::dot(reference_point, temp_contraction1);
        result -= m_system.overlap_matrix() * temp_contraction2;
        return result;
    }

    arma::vec QuadrupoleMomentBit::nuclei_contraction_coeffs() const {
        arma::vec result(m_system.n_atoms());
        // acquisition of necessary data:
        using BitsList = PossibleBitsList<
                StdOrientReferencePointBit,
                InpOrientReferencePointBit,
                AtomReferencePointBit>;
        const auto reference_point_bit = bit_from_tag<ReferencePointBit, BitsList>(
                *(m_tag.m_reference_point), m_system);
        const arma::mat33 direction2 = concretize_direction2(
                m_tag.m_orient, m_tag.m_direction,
                m_system.rotation_to_std_frame());
        const arma::vec3 reference_point = reference_point_bit->reference_point();
        // calculations: 
        for (unsigned atom = 0; atom < m_system.n_atoms(); ++atom) {
            const arma::vec3 pos = m_system.atom_coords_std_frame(atom);
            const arma::vec3 temp = pos - reference_point;
            result(atom) = arma::dot(temp, direction2 * temp);
        }
        return result;
    }

} // end of namespace el_stat_prop
