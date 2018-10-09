/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include<string>
#include<el_stat_prop_kit/simple_system_adapter.hpp>
#include<boost/range/numeric.hpp>

#define FORMAL_ARGUMENT_VALIDATOR_EQ(LHS, RHS) \
if ( ! ((LHS) == (RHS)) ) {\
  std::string message = "Formal argument validation fail.\n";\
  message += " Asserion: " #LHS " == " #RHS ".\n";\
  std::string LHS_value = std::to_string((LHS));\
  std::string RHS_value = std::to_string((RHS));\
  message += " LHS:      " + LHS_value + ".\n";\
  message += " RHS:      " + RHS_value + ".";\
  throw std::invalid_argument(message);\
}

namespace el_stat_prop {

    void SimpleSystemAdapter::check_out_of_range(unsigned atom) const {
        if (atom >= n_atoms()) {
            std::string message =
                    "Error in system-adapter getter function -- "
                    " formal argument 'atom' is out of range.";
            throw std::out_of_range(message);
        }
    }

    // *****************************************************************************

    unsigned SimpleSystemAdapter::n_atoms() const {
        if (auto ptr = m_n_atoms)
            return *ptr;
        // throw not-supported:
        return SystemAdapterBase::n_atoms();
    }

    arma::vec3 SimpleSystemAdapter::atom_coords_std_frame(unsigned atom) const {
        if (auto ptr = m_atom_coords_std_frame) {
            check_out_of_range(atom);
            return ptr->col(atom);
        }
        return SystemAdapterBase::atom_coords_std_frame(atom);
    }

    unsigned SimpleSystemAdapter::n_basis() const {
        if (auto ptr = m_n_basis)
            return *ptr;
        // throw not-supported:
        return SystemAdapterBase::n_basis();
    }

    arma::span SimpleSystemAdapter::atomic_basis_span(unsigned atom) const {
        if (auto ptr = m_atomic_basis_span) {
            check_out_of_range(atom);
            return (*ptr)[atom];
        }
        return SystemAdapterBase::atomic_basis_span(atom);
    }

    arma::mat33 SimpleSystemAdapter::rotation_to_std_frame() const {
        if (auto ptr = m_rotation_to_std_frame)
            return *ptr;
        // throw not-supported:
        return SystemAdapterBase::rotation_to_std_frame();
    }

    arma::vec3 SimpleSystemAdapter::translation_to_std_frame() const {
        if (auto ptr = m_translation_to_std_frame)
            return *ptr;
        // throw not-supported:
        return SystemAdapterBase::translation_to_std_frame();
    }

    arma::mat SimpleSystemAdapter::overlap_matrix() const {
        if (auto ptr = m_overlap_matrix)
            return *ptr;
        // throw not-supported:
        return SystemAdapterBase::overlap_matrix();
    }

    arma::mat SimpleSystemAdapter::r_std_oritent_matrix(
            Direction direction) const {
        if (auto ptr = m_r_std_oritent_matrices.at(int(direction)))
            return *ptr;
        // throw not-supported:
        return SystemAdapterBase::r_std_oritent_matrix(direction);
    }

    arma::mat SimpleSystemAdapter::rr_std_oritent_matrix(
            Direction direction1, Direction direction2) const {
        if (auto ptr = m_rr_std_oritent_matrices.at(int(direction1), int(direction2)))
            return *ptr;
        // throw not-supported:   
        return SystemAdapterBase::rr_std_oritent_matrix(direction1, direction2);
    }

    // *****************************************************************************

    double SimpleSystemAdapter::nuclei_charge(unsigned atom) const {
        if (auto ptr = m_nuclei_charges) {
            check_out_of_range(atom);
            return (*ptr)(atom);
        }
        // throw not-supported
        return SystemAdapterBase::nuclei_charge(atom);
    }

    arma::mat SimpleSystemAdapter::density_operator(int spin) const {
        if (auto ptr = m_density_operators)
            switch (spin) {
                case 0:
                    return ptr->first; // spin-alpha
                case 1:
                    return ptr->second; // spin-beta
                default:
                    std::string message =
                            "The provided system-adapter does not support"
                            " spin other than alpha (int spin = 0) or beta (int spin = 1).";
                    throw std::invalid_argument(message);
            }
        return SystemAdapterBase::density_operator(spin); // throw not-supported    
    }

    SimpleSystemAdapter& SimpleSystemAdapter::set_n_atoms(unsigned n_atoms) {
        m_n_atoms = std::make_shared<unsigned>(n_atoms);
        return *this;
    }

    SimpleSystemAdapter& SimpleSystemAdapter::set_atom_coords_std_frame(const arma::mat & atom_coords_std_frame) {
        FORMAL_ARGUMENT_VALIDATOR_EQ(atom_coords_std_frame.n_rows, 3);
        FORMAL_ARGUMENT_VALIDATOR_EQ(atom_coords_std_frame.n_cols, n_atoms());
        m_atom_coords_std_frame = std::make_shared<arma::mat>(atom_coords_std_frame);
        return *this;
    }

    SimpleSystemAdapter& SimpleSystemAdapter::set_n_basis(unsigned n_basis) {
        m_n_basis = std::make_shared<unsigned>(n_basis);
        return *this;
    }

    SimpleSystemAdapter& SimpleSystemAdapter::set_atomic_basis_sizes(const std::vector<unsigned>& atomic_basis_sizes) {
        FORMAL_ARGUMENT_VALIDATOR_EQ(atomic_basis_sizes.size(), n_atoms());
        FORMAL_ARGUMENT_VALIDATOR_EQ(boost::accumulate(atomic_basis_sizes, 0u), n_basis());
        // variables: range_begin and range_end are in inclusive-exclusive stl-like convention.
        m_atomic_basis_span = std::make_shared<std::vector < arma::span >> ();
        m_atomic_basis_span->reserve(n_atoms());
        unsigned range_end = 0;
        for (unsigned atom = 0; atom < n_atoms(); ++atom) {
            unsigned range_begin = range_end;
            range_end = range_end + atomic_basis_sizes[atom];
            arma::span span(range_begin, range_end - 1);
            m_atomic_basis_span->push_back(span);
        }
        return *this;
    }

    SimpleSystemAdapter& SimpleSystemAdapter::set_rotation_to_std_frame(const arma::mat33& rotation_to_std_frame) {
        m_rotation_to_std_frame = std::make_shared<arma::mat33>(rotation_to_std_frame);
        return *this;
    }

    SimpleSystemAdapter& SimpleSystemAdapter::set_translation_to_std_frame(const arma::vec3& translation_to_std_frame) {
        m_translation_to_std_frame = std::make_shared<arma::vec3>(translation_to_std_frame);
        return *this;
    }

    SimpleSystemAdapter& SimpleSystemAdapter::set_overlap_matrix(const arma::mat& overlap_matrix) {
        FORMAL_ARGUMENT_VALIDATOR_EQ(overlap_matrix.n_rows, n_basis());
        FORMAL_ARGUMENT_VALIDATOR_EQ(overlap_matrix.n_cols, n_basis());
        m_overlap_matrix = std::make_shared<arma::mat>(overlap_matrix);
        return *this;
    }

    SimpleSystemAdapter& SimpleSystemAdapter::set_x_std_oritent_matrix(const arma::mat& x_std_oritent_matrix) {
        FORMAL_ARGUMENT_VALIDATOR_EQ(x_std_oritent_matrix.n_rows, n_basis());
        FORMAL_ARGUMENT_VALIDATOR_EQ(x_std_oritent_matrix.n_cols, n_basis());
        m_r_std_oritent_matrices(0) = std::make_shared<arma::mat> (x_std_oritent_matrix);
        return *this;
    }

    SimpleSystemAdapter& SimpleSystemAdapter::set_y_std_oritent_matrix(const arma::mat& y_std_oritent_matrix) {
        FORMAL_ARGUMENT_VALIDATOR_EQ(y_std_oritent_matrix.n_rows, n_basis());
        FORMAL_ARGUMENT_VALIDATOR_EQ(y_std_oritent_matrix.n_cols, n_basis());
        m_r_std_oritent_matrices(1) = std::make_shared<arma::mat> (y_std_oritent_matrix);
        return *this;
    }

    SimpleSystemAdapter& SimpleSystemAdapter::set_z_std_oritent_matrix(const arma::mat& z_std_oritent_matrix) {
        FORMAL_ARGUMENT_VALIDATOR_EQ(z_std_oritent_matrix.n_rows, n_basis());
        FORMAL_ARGUMENT_VALIDATOR_EQ(z_std_oritent_matrix.n_cols, n_basis());
        m_r_std_oritent_matrices(2) = std::make_shared<arma::mat> (z_std_oritent_matrix);
        return *this;
    }

    SimpleSystemAdapter& SimpleSystemAdapter::set_xx_std_oritent_matrix(const arma::mat& xx_std_oritent_matrix) {
        FORMAL_ARGUMENT_VALIDATOR_EQ(xx_std_oritent_matrix.n_rows, n_basis());
        FORMAL_ARGUMENT_VALIDATOR_EQ(xx_std_oritent_matrix.n_cols, n_basis());
        m_rr_std_oritent_matrices(0, 0) = std::make_shared<arma::mat>(xx_std_oritent_matrix);
        return *this;
    }

    SimpleSystemAdapter& SimpleSystemAdapter::set_xy_std_oritent_matrix(const arma::mat& xy_std_oritent_matrix) {
        FORMAL_ARGUMENT_VALIDATOR_EQ(xy_std_oritent_matrix.n_rows, n_basis());
        FORMAL_ARGUMENT_VALIDATOR_EQ(xy_std_oritent_matrix.n_cols, n_basis());
        m_rr_std_oritent_matrices(0, 1) = std::make_shared<arma::mat>(xy_std_oritent_matrix);
        m_rr_std_oritent_matrices(1, 0) = m_rr_std_oritent_matrices(0, 1);
        return *this;
    }

    SimpleSystemAdapter& SimpleSystemAdapter::set_xz_std_oritent_matrix(const arma::mat& xz_std_oritent_matrix) {
        FORMAL_ARGUMENT_VALIDATOR_EQ(xz_std_oritent_matrix.n_rows, n_basis());
        FORMAL_ARGUMENT_VALIDATOR_EQ(xz_std_oritent_matrix.n_cols, n_basis());
        m_rr_std_oritent_matrices(0, 2) = std::make_shared<arma::mat>(xz_std_oritent_matrix);
        m_rr_std_oritent_matrices(2, 0) = m_rr_std_oritent_matrices(0, 2);
        return *this;
    }

    SimpleSystemAdapter& SimpleSystemAdapter::set_yy_std_oritent_matrix(const arma::mat& yy_std_oritent_matrix) {
        FORMAL_ARGUMENT_VALIDATOR_EQ(yy_std_oritent_matrix.n_rows, n_basis());
        FORMAL_ARGUMENT_VALIDATOR_EQ(yy_std_oritent_matrix.n_cols, n_basis());
        m_rr_std_oritent_matrices(1, 1) = std::make_shared<arma::mat>(yy_std_oritent_matrix);
        return *this;
    }

    SimpleSystemAdapter& SimpleSystemAdapter::set_yz_std_oritent_matrix(const arma::mat& yz_std_oritent_matrix) {
        FORMAL_ARGUMENT_VALIDATOR_EQ(yz_std_oritent_matrix.n_rows, n_basis());
        FORMAL_ARGUMENT_VALIDATOR_EQ(yz_std_oritent_matrix.n_cols, n_basis());
        m_rr_std_oritent_matrices(1, 2) = std::make_shared<arma::mat>(yz_std_oritent_matrix);
        m_rr_std_oritent_matrices(2, 1) = m_rr_std_oritent_matrices(1, 2);
        return *this;
    }

    SimpleSystemAdapter& SimpleSystemAdapter::set_zz_std_oritent_matrix(const arma::mat& zz_std_oritent_matrix) {
        FORMAL_ARGUMENT_VALIDATOR_EQ(zz_std_oritent_matrix.n_rows, n_basis());
        FORMAL_ARGUMENT_VALIDATOR_EQ(zz_std_oritent_matrix.n_cols, n_basis());
        m_rr_std_oritent_matrices(2, 2) = std::make_shared<arma::mat>(zz_std_oritent_matrix);
        return *this;
    }

    SimpleSystemAdapter& SimpleSystemAdapter::set_nuclei_charges(const arma::vec& nuclei_charges) {
        FORMAL_ARGUMENT_VALIDATOR_EQ(nuclei_charges.n_rows, n_atoms());
        m_nuclei_charges = std::make_shared<arma::vec>(nuclei_charges);
        return *this;
    }

    SimpleSystemAdapter& SimpleSystemAdapter::set_density_operators(const arma::mat& density_operator_alpha, const arma::mat& density_operator_beta) {
        FORMAL_ARGUMENT_VALIDATOR_EQ(density_operator_alpha.n_rows, n_basis());
        FORMAL_ARGUMENT_VALIDATOR_EQ(density_operator_alpha.n_cols, n_basis());
        FORMAL_ARGUMENT_VALIDATOR_EQ(density_operator_beta.n_rows, n_basis());
        FORMAL_ARGUMENT_VALIDATOR_EQ(density_operator_beta.n_cols, n_basis());
        m_density_operators = std::make_shared<std::pair < arma::mat, arma::mat >> (density_operator_alpha, density_operator_beta);
        return *this;
    }

} // end of namespace el_stat_prop
