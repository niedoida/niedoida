/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include<stdexcept>
#include<el_stat_prop_kit/adapter.hpp>

// *****************************************************************************

#define THROW_MEMBER_FUNCTION_NOT_SUPPORT(what) {\
    std::string message = "The provided system-adapter does not support";\
    message += " '" + std::string(what) + "' member function call.";\
    throw std::logic_error(message);\
    }

// *****************************************************************************

namespace el_stat_prop {

    SystemAdapterAbstractBase::~SystemAdapterAbstractBase() = default;

    unsigned SystemAdapterBase::n_atoms() const {
        THROW_MEMBER_FUNCTION_NOT_SUPPORT("n_atoms()");
    }

    arma::vec3 SystemAdapterBase::atom_coords_std_frame(unsigned) const {
        THROW_MEMBER_FUNCTION_NOT_SUPPORT("atom_coords_std_frame(atom)");
    }

    unsigned SystemAdapterBase::n_basis() const {
        THROW_MEMBER_FUNCTION_NOT_SUPPORT("n_basis()");
    }

    arma::span SystemAdapterBase::atomic_basis_span(unsigned) const {
        THROW_MEMBER_FUNCTION_NOT_SUPPORT("atomic_basis_span(atom)");
    }

    arma::mat33 SystemAdapterBase::rotation_to_std_frame() const {
        THROW_MEMBER_FUNCTION_NOT_SUPPORT("rotation_to_std_frame()");
    }

    arma::vec3 SystemAdapterBase::translation_to_std_frame() const {
        THROW_MEMBER_FUNCTION_NOT_SUPPORT("translation_to_std_frame()");
    }

    arma::mat SystemAdapterBase::overlap_matrix() const {
        THROW_MEMBER_FUNCTION_NOT_SUPPORT("overlap_matrix()");
    }

    arma::mat SystemAdapterBase::sqrt_overlap_matrix() const {
        return arma::sqrtmat_sympd(overlap_matrix());
    }

    arma::mat SystemAdapterBase::inv_sqrt_overlap_matrix() const {
        return arma::inv_sympd(arma::sqrtmat_sympd(overlap_matrix()));
    }

    arma::mat SystemAdapterBase::r_std_oritent_matrix(Direction direction) const {
        std::string direction_str = direction_to_string(direction);
        THROW_MEMBER_FUNCTION_NOT_SUPPORT("r_std_oritent_matrix(" + direction_str + ")");
    }

    arma::mat SystemAdapterBase::rr_std_oritent_matrix(Direction direction1, Direction direction2) const {
        std::string direction1_str = direction_to_string(direction1);
        std::string direction2_str = direction_to_string(direction2);
        std::string directions_str = direction1_str + ", " + direction2_str;
        THROW_MEMBER_FUNCTION_NOT_SUPPORT("rr_std_oritent_matrix(" + directions_str + ")");
    }

    double SystemAdapterBase::nuclei_charge(unsigned) const {
        THROW_MEMBER_FUNCTION_NOT_SUPPORT("nuclei_charge");
    }

    arma::mat SystemAdapterBase::density_operator(int spin) const {
        THROW_MEMBER_FUNCTION_NOT_SUPPORT("density_operator");
    }

} // end of namespace el_stat_prop
