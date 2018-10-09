/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef SIMPLE_SYSTEM_ADAPTER_HPP
#define SIMPLE_SYSTEM_ADAPTER_HPP

#include<memory>
#include<vector>

#include<el_stat_prop_kit/adapter.hpp>

namespace el_stat_prop {

    class SimpleSystemAdapter : public SystemAdapterBase {
    public:
        unsigned n_atoms() const override;
        arma::vec3 atom_coords_std_frame(unsigned atom) const override;
        unsigned n_basis() const override;
        arma::span atomic_basis_span(unsigned atom) const override;
        arma::mat33 rotation_to_std_frame() const override;
        arma::vec3 translation_to_std_frame() const override;
        arma::mat overlap_matrix() const override;
        arma::mat r_std_oritent_matrix(Direction) const override;
        arma::mat rr_std_oritent_matrix(Direction, Direction) const override;
        double nuclei_charge(unsigned atom) const override;
        arma::mat density_operator(int spin) const override;
        // Set functions:
        SimpleSystemAdapter& set_n_atoms(unsigned);
        SimpleSystemAdapter& set_atom_coords_std_frame(const arma::mat&); // expects matrix size: 3 x n_atoms
        SimpleSystemAdapter& set_n_basis(unsigned);
        SimpleSystemAdapter& set_atomic_basis_sizes(const std::vector<unsigned>&); // expects vector size: n_atoms
        SimpleSystemAdapter& set_rotation_to_std_frame(const arma::mat33&);
        SimpleSystemAdapter& set_translation_to_std_frame(const arma::vec3&);
        SimpleSystemAdapter& set_overlap_matrix(const arma::mat&);
        SimpleSystemAdapter& set_x_std_oritent_matrix(const arma::mat&);
        SimpleSystemAdapter& set_y_std_oritent_matrix(const arma::mat&);
        SimpleSystemAdapter& set_z_std_oritent_matrix(const arma::mat&);
        SimpleSystemAdapter& set_xx_std_oritent_matrix(const arma::mat&);
        SimpleSystemAdapter& set_xy_std_oritent_matrix(const arma::mat&);
        SimpleSystemAdapter& set_xz_std_oritent_matrix(const arma::mat&);
        SimpleSystemAdapter& set_yy_std_oritent_matrix(const arma::mat&);
        SimpleSystemAdapter& set_yz_std_oritent_matrix(const arma::mat&);
        SimpleSystemAdapter& set_zz_std_oritent_matrix(const arma::mat&);
        SimpleSystemAdapter& set_nuclei_charges(const arma::vec&);
        SimpleSystemAdapter& set_density_operators(const arma::mat&, const arma::mat&);
    private:
        void check_out_of_range(unsigned atom) const;
        std::shared_ptr<unsigned> m_n_atoms;
        std::shared_ptr<arma::mat> m_atom_coords_std_frame;
        std::shared_ptr<unsigned> m_n_basis;
        std::shared_ptr<std::vector<arma::span>> m_atomic_basis_span;
        std::shared_ptr<arma::mat33> m_rotation_to_std_frame;
        std::shared_ptr<arma::vec3> m_translation_to_std_frame;
        std::shared_ptr<arma::mat> m_overlap_matrix;
        arma::field<std::shared_ptr<arma::mat>> m_r_std_oritent_matrices
        {
            3, 1, 1
        };
        arma::field<std::shared_ptr<arma::mat>> m_rr_std_oritent_matrices
        {
            3, 3, 1
        };
        std::shared_ptr<arma::vec> m_nuclei_charges;
        std::shared_ptr<std::pair<arma::mat, arma::mat>> m_density_operators;
    };

} // end of namespace el_stat_prop

#endif

