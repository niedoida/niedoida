/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include<el_stat_prop_kit/fixed_systems_adapters.hpp>

namespace el_stat_prop {

    SimpleSystemAdapter create_system_h2o_hf_sto3g() {
        SimpleSystemAdapter adapter;
        const arma::mat atom_coords_std_frame = {
            //    oxygen,    hydrogen,    hydrogen
            {-0.00000040, -1.43240541, +1.43240541}, // x
            {+0.00000000, +0.00000000, +0.00000000}, // y
            {-0.24021178, +0.96084844, +0.96084844} //z      
        };
        const std::vector<unsigned> atomic_basis_sizes = {5, 1, 1};
        const arma::mat rotation_to_std_frame = {
            {+0.00000056, -0.79999913, -0.60000115},
            {-0.79999708, +0.36000267, -0.48000286},
            {+0.60000389, +0.47999944, -0.63999677}
        };
        const arma::vec translation_to_std_frame = {
            9.99999800, 15.00000020, 19.99999500
        };
        const arma::mat overlap_matrix = {
            { +1.0000e+00, +2.3670e-01, -2.6326e-23, +1.2981e-34, +9.0659e-18, +5.0023e-02, +5.0023e-02},
            { +2.3670e-01, +1.0000e+00, -5.7327e-23, +0.0000e+00, -2.4674e-17, +4.5405e-01, +4.5405e-01},
            { -2.6326e-23, -5.7327e-23, +1.0000e+00, +0.0000e+00, +1.4911e-39, -2.9281e-01, +2.9281e-01},
            { +1.2981e-34, +0.0000e+00, +0.0000e+00, +1.0000e+00, +0.0000e+00, +1.9858e-16, -1.2664e-16},
            { +9.0659e-18, -2.4674e-17, +1.4911e-39, +0.0000e+00, +1.0000e+00, +2.4551e-01, +2.4551e-01},
            { +5.0023e-02, +4.5405e-01, -2.9281e-01, +1.9858e-16, +2.4551e-01, +1.0000e+00, +2.5096e-01},
            { +5.0023e-02, +4.5405e-01, +2.9281e-01, -1.2664e-16, +2.4551e-01, +2.5096e-01, +1.0000e+00}
        };
        const arma::mat x_std_oritent_matrix = {
            { -3.9803e-07, -9.4216e-08, +5.0792e-02, +0.0000e+00, +0.0000e+00, -2.8147e-03, +2.8146e-03},
            { -9.4216e-08, -3.9803e-07, +6.4117e-01, +0.0000e+00, +0.0000e+00, -2.7586e-01, +2.7586e-01},
            { +5.0792e-02, +6.4117e-01, -3.9803e-07, +0.0000e+00, +0.0000e+00, +4.7475e-01, +4.7475e-01},
            { +0.0000e+00, +0.0000e+00, +0.0000e+00, -3.9803e-07, +0.0000e+00, -1.2398e-16, -7.9067e-17},
            { +0.0000e+00, +0.0000e+00, +0.0000e+00, +0.0000e+00, -3.9803e-07, -1.5329e-01, +1.5329e-01},
            { -2.8147e-03, -2.7586e-01, +4.7475e-01, -1.2398e-16, -1.5329e-01, -1.4324e+00, -2.0817e-17},
            { +2.8146e-03, +2.7586e-01, +4.7475e-01, -7.9067e-17, +1.5329e-01, -2.0817e-17, +1.4324e+00}
        };
        const arma::mat y_std_oritent_matrix = {
            { -2.6368e-16, -6.2414e-17, +0.0000e+00, +5.0792e-02, +0.0000e+00, -1.1281e-17, -1.4407e-17},
            { -6.2414e-17, -2.6368e-16, +0.0000e+00, +6.4117e-01, +0.0000e+00, +6.7362e-17, -2.3903e-16},
            { +0.0000e+00, +0.0000e+00, -2.6368e-16, +0.0000e+00, +0.0000e+00, -4.6778e-17, -1.5627e-16},
            { +5.0792e-02, +6.4117e-01, +0.0000e+00, -2.6368e-16, +0.0000e+00, +2.9193e-01, +2.9193e-01},
            { +0.0000e+00, +0.0000e+00, +0.0000e+00, +0.0000e+00, -2.6368e-16, +3.9223e-17, -1.3103e-16},
            { -1.1281e-17, +6.7362e-17, -4.6778e-17, +2.9193e-01, +3.9223e-17, +7.0777e-16, -2.2012e-17},
            { -1.4407e-17, -2.3903e-16, -1.5627e-16, +2.9193e-01, -1.3103e-16, -2.2012e-17, -8.8319e-16}
        };
        const arma::mat z_std_oritent_matrix = {
            { -2.4021e-01, -5.6859e-02, +0.0000e+00, +0.0000e+00, +5.0792e-02, -9.6561e-03, -9.6561e-03},
            { -5.6859e-02, -2.4021e-01, +0.0000e+00, +0.0000e+00, +6.4117e-01, +1.2224e-01, +1.2224e-01},
            { +0.0000e+00, +0.0000e+00, -2.4021e-01, +0.0000e+00, +0.0000e+00, -8.2954e-02, +8.2954e-02},
            { +0.0000e+00, +0.0000e+00, +0.0000e+00, -2.4021e-01, +0.0000e+00, +5.6259e-17, -3.5877e-17},
            { +5.0792e-02, +6.4117e-01, +0.0000e+00, +0.0000e+00, -2.4021e-01, +3.6149e-01, +3.6149e-01},
            { -9.6561e-03, +1.2224e-01, -8.2954e-02, +5.6259e-17, +3.6149e-01, +9.6085e-01, +2.4114e-01},
            { -9.6561e-03, +1.2224e-01, +8.2954e-02, -3.5877e-17, +3.6149e-01, +2.4114e-01, +9.6085e-01}
        };
        const arma::mat xx_std_oritent_matrix = {
            { +1.7021e-02, +1.3864e-02, -4.0434e-08, +0.0000e+00, +0.0000e+00, +3.0606e-03, +3.0606e-03},
            { +1.3864e-02, +4.9166e-01, -5.1041e-07, +0.0000e+00, +0.0000e+00, +4.8264e-01, +4.8263e-01},
            { -4.0434e-08, -5.1041e-07, +8.9127e-01, +0.0000e+00, +0.0000e+00, -5.4988e-01, +5.4988e-01},
            { +0.0000e+00, +0.0000e+00, +0.0000e+00, +2.9709e-01, +0.0000e+00, +1.8756e-16, -1.1961e-16},
            { +0.0000e+00, +0.0000e+00, +0.0000e+00, +0.0000e+00, +2.9709e-01, +2.3190e-01, +2.3190e-01},
            { +3.0606e-03, +4.8264e-01, -5.4988e-01, +1.8756e-16, +2.3190e-01, +2.7013e+00, +3.3000e-01},
            { +3.0606e-03, +4.8263e-01, +5.4988e-01, -1.1961e-16, +2.3190e-01, +3.3000e-01, +2.7013e+00}
        };
        const arma::mat xy_std_oritent_matrix = {
            { +1.0495e-22, +2.4843e-23, -1.3393e-17, -2.0217e-08, +0.0000e+00, +5.6264e-19, -8.5665e-19},
            { +2.4843e-23, +1.0495e-22, -1.6906e-16, -2.5521e-07, +0.0000e+00, -6.3831e-17, -1.5983e-16},
            { -1.3393e-17, -1.6906e-16, +1.0495e-22, +2.9709e-01, +0.0000e+00, +6.2382e-17, -2.4479e-16},
            { -2.0217e-08, -2.5521e-07, +2.9709e-01, +1.0495e-22, +0.0000e+00, -1.3666e-01, +1.3666e-01},
            { +0.0000e+00, +0.0000e+00, +0.0000e+00, +0.0000e+00, +1.0495e-22, -3.9138e-17, -9.1154e-17},
            { +5.6264e-19, -6.3831e-17, +6.2382e-17, -1.3666e-01, -3.9138e-17, -1.0138e-15, -5.4658e-17},
            { -8.5665e-19, -1.5983e-16, -2.4479e-16, +1.3666e-01, -9.1154e-17, -5.4658e-17, -1.2651e-15}
        };
        const arma::mat xz_std_oritent_matrix = {
            { +9.5612e-08, +2.2632e-08, -1.2201e-02, +0.0000e+00, -2.0217e-08, +4.5415e-04, -4.5415e-04},
            { +2.2632e-08, +9.5612e-08, -1.5402e-01, +0.0000e+00, -2.5521e-07, -1.0258e-01, +1.0258e-01},
            { -1.2201e-02, -1.5402e-01, +9.5612e-08, +0.0000e+00, +2.9709e-01, +1.1786e-01, +1.1786e-01},
            { +0.0000e+00, +0.0000e+00, +0.0000e+00, +9.5612e-08, +0.0000e+00, -4.9775e-17, -3.1742e-17},
            { -2.0217e-08, -2.5521e-07, +2.9709e-01, +0.0000e+00, +9.5612e-08, -1.9820e-01, +1.9820e-01},
            { +4.5415e-04, -1.0258e-01, +1.1786e-01, -4.9775e-17, -1.9820e-01, -1.3763e+00, -2.0817e-17},
            { -4.5415e-04, +1.0258e-01, +1.1786e-01, -3.1742e-17, +1.9820e-01, -2.0817e-17, +1.3763e+00}
        };
        const arma::mat yy_std_oritent_matrix = {
            { +1.7021e-02, +1.3864e-02, +0.0000e+00, -2.6785e-17, +0.0000e+00, +2.7959e-03, +2.7959e-03},
            { +1.3864e-02, +4.9166e-01, +0.0000e+00, -3.3813e-16, +0.0000e+00, +2.8126e-01, +2.8126e-01},
            { +0.0000e+00, +0.0000e+00, +2.9709e-01, +0.0000e+00, +0.0000e+00, -1.3666e-01, +1.3666e-01},
            { -2.6785e-17, -3.3813e-16, +0.0000e+00, +8.9127e-01, +0.0000e+00, +1.2409e-16, -3.3126e-16},
            { +0.0000e+00, +0.0000e+00, +0.0000e+00, +0.0000e+00, +2.9709e-01, +1.1459e-01, +1.1459e-01},
            { +2.7959e-03, +2.8126e-01, -1.3666e-01, +1.2409e-16, +1.1459e-01, +6.4952e-01, +2.3158e-01},
            { +2.7959e-03, +2.8126e-01, +1.3666e-01, -3.3126e-16, +1.1459e-01, +2.3158e-01, +6.4952e-01}
        };
        const arma::mat yz_std_oritent_matrix = {
            { +6.3339e-17, +1.4992e-17, +0.0000e+00, -1.2201e-02, -1.3393e-17, +2.2381e-18, +2.7425e-18},
            { +1.4992e-17, +6.3339e-17, +0.0000e+00, -1.5402e-01, -1.6906e-16, +3.7341e-17, -7.6598e-17},
            { +0.0000e+00, +0.0000e+00, +6.3339e-17, +0.0000e+00, +0.0000e+00, -2.7901e-17, -5.3615e-17},
            { -1.2201e-02, -1.5402e-01, +0.0000e+00, +6.3339e-17, +2.9709e-01, +4.4462e-02, +4.4462e-02},
            { -1.3393e-17, -1.6906e-16, +0.0000e+00, +2.9709e-01, +6.3339e-17, +3.9101e-17, -1.8104e-16},
            { +2.2381e-18, +3.7341e-17, -2.7901e-17, +4.4462e-02, +3.9101e-17, +6.8006e-16, -2.1150e-17},
            { +2.7425e-18, -7.6598e-17, -5.3615e-17, +4.4462e-02, -1.8104e-16, -2.1150e-17, -8.4861e-16}
        };
        const arma::mat zz_std_oritent_matrix = {
            { +7.4723e-02, +2.7522e-02, +0.0000e+00, +0.0000e+00, -2.4402e-02, +4.7346e-03, +4.7346e-03},
            { +2.7522e-02, +5.4937e-01, +0.0000e+00, +0.0000e+00, -3.0803e-01, +3.3792e-01, +3.3792e-01},
            { +0.0000e+00, +0.0000e+00, +3.5479e-01, +0.0000e+00, +0.0000e+00, -1.7827e-01, +1.7827e-01},
            { +0.0000e+00, +0.0000e+00, +0.0000e+00, +3.5479e-01, +0.0000e+00, +1.2090e-16, -7.7102e-17},
            { -2.4402e-02, -3.0803e-01, +0.0000e+00, +0.0000e+00, +9.4897e-01, +2.3840e-01, +2.3840e-01},
            { +4.7346e-03, +3.3792e-01, -1.7827e-01, +1.2090e-16, +2.3840e-01, +1.5728e+00, +4.6328e-01},
            { +4.7346e-03, +3.3792e-01, +1.7827e-01, -7.7102e-17, +2.3840e-01, +4.6328e-01, +1.5728e+00}
        };
        arma::vec nuclei_charges = {8.0, 1.0, 1.0};
        const arma::mat density_operator = {
            { +1.0539e+00, -2.2767e-01, +4.1065e-09, +3.8820e-16, +5.4065e-02, -1.1237e-02, -1.1237e-02},
            { -2.2767e-01, +1.0033e+00, +2.8889e-09, -9.1465e-16, -3.0299e-01, -2.7526e-02, -2.7526e-02},
            { +4.1065e-09, +2.8889e-09, +3.7537e-01, +3.0677e-15, +6.9392e-09, -2.7522e-01, +2.7522e-01},
            { +3.8820e-16, -9.1465e-16, +3.0677e-15, +1.0000e+00, -6.9838e-16, +3.2701e-15, -1.8820e-15},
            { +5.4065e-02, -3.0299e-01, +6.9392e-09, -6.9838e-16, +5.8660e-01, +2.4212e-01, +2.4212e-01},
            { -1.1237e-02, -2.7526e-02, -2.7522e-01, +3.2701e-15, +2.4212e-01, +3.1306e-01, -9.0508e-02},
            { -1.1237e-02, -2.7526e-02, +2.7522e-01, -1.8820e-15, +2.4212e-01, -9.0508e-02, +3.1306e-01}
        };
        adapter.set_n_atoms(3)
                .set_atom_coords_std_frame(atom_coords_std_frame)
                .set_n_basis(5 + 1 + 1)
                .set_atomic_basis_sizes(atomic_basis_sizes)
                .set_rotation_to_std_frame(rotation_to_std_frame)
                .set_translation_to_std_frame(translation_to_std_frame)
                .set_overlap_matrix(overlap_matrix)
                .set_x_std_oritent_matrix(x_std_oritent_matrix)
                .set_y_std_oritent_matrix(y_std_oritent_matrix)
                .set_z_std_oritent_matrix(z_std_oritent_matrix)
                .set_xx_std_oritent_matrix(xx_std_oritent_matrix)
                .set_xy_std_oritent_matrix(xy_std_oritent_matrix)
                .set_xz_std_oritent_matrix(xz_std_oritent_matrix)
                .set_yy_std_oritent_matrix(yy_std_oritent_matrix)
                .set_yz_std_oritent_matrix(yz_std_oritent_matrix)
                .set_zz_std_oritent_matrix(zz_std_oritent_matrix)
                .set_nuclei_charges(nuclei_charges)
                .set_density_operators(density_operator, density_operator);
        return adapter;
    }

    // *****************************************************************************

    SimpleSystemAdapter create_system_oh_minus_hf_sto3g() {
        SimpleSystemAdapter adapter;
        const arma::mat atom_coords_std_frame = {
            {0.00000000, -0.00000000, +0.22426850}, // O
            {0.00000000, -0.00000000, -1.79414798} // H
        };
        const std::vector<unsigned> atomic_basis_sizes = {4, 1};
        const arma::mat rotation_to_std_frame = {
            {-0.00000000, -0.80000000, -0.60000000},
            {-0.80000000, +0.36000000, -0.48000000},
            {+0.60000000, +0.48000000, -0.64000000}
        };
        const arma::vec translation_to_std_frame = {
            10.00000000, 15.00000000, 20.00000000
        };
        const arma::mat overlap_matrix = {
            0
        };
        const arma::mat x_std_oritent_matrix = {
            11
        };
        const arma::mat y_std_oritent_matrix = {
            22
        };
        const arma::mat z_std_oritent_matrix = {
            33
        };
        const arma::mat xx_std_oritent_matrix = {
            111
        };
        const arma::mat xy_std_oritent_matrix = {
            112
        };
        const arma::mat xz_std_oritent_matrix = {
            113
        };
        const arma::mat yy_std_oritent_matrix = {
            122
        };
        const arma::mat yz_std_oritent_matrix = {
            123
        };
        const arma::mat zz_std_oritent_matrix = {
            133
        };
        arma::vec nuclei_charges = {8.0, 1.0, 1.0};
        const arma::mat density_operator = {
            1000000
        };
        adapter.set_n_atoms(2)
                .set_atom_coords_std_frame(atom_coords_std_frame)
                .set_n_basis(4 + 1)
                .set_atomic_basis_sizes(atomic_basis_sizes)
                .set_rotation_to_std_frame(rotation_to_std_frame)
                .set_translation_to_std_frame(translation_to_std_frame)
                .set_overlap_matrix(overlap_matrix)
                .set_x_std_oritent_matrix(x_std_oritent_matrix)
                .set_y_std_oritent_matrix(y_std_oritent_matrix)
                .set_z_std_oritent_matrix(z_std_oritent_matrix)
                .set_xx_std_oritent_matrix(xx_std_oritent_matrix)
                .set_xy_std_oritent_matrix(xy_std_oritent_matrix)
                .set_xz_std_oritent_matrix(xz_std_oritent_matrix)
                .set_yy_std_oritent_matrix(yy_std_oritent_matrix)
                .set_yz_std_oritent_matrix(yz_std_oritent_matrix)
                .set_zz_std_oritent_matrix(zz_std_oritent_matrix)
                .set_nuclei_charges(nuclei_charges)
                .set_density_operators(density_operator, density_operator);
        return adapter;
    }

} // end of namespace el_stat_prop
