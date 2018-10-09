/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef ADAPTER_HPP
#define ADAPTER_HPP

#include<armadillo>
#include<el_stat_prop_kit/direction_enum.hpp>


namespace el_stat_prop {

    // *****************************************************************************

    /*
     *                   <<< interface SystemAdapter >>>
     * 
     * A class implementing SystemAdapterAbstractBase should be provided
     * (by users of the library) to bind library with the rest of the code.
     * Functions in el-stat-prop-kit library will be refer to
     * provided instance of a class implementing SystemAdapterAbstractBase.
     * 
     * Usage:   The provided instance is needed when tags objects
     *          are transformed into the corresponding bits objects.
     * 
     * Caveats: Bits objects refer to the provided instance by means of reference.
     *          Hence the lifetime of the provided instance should exceed
     *          lifetimes of the created bits objects.
     *
     * Caveats: Convention for rotation_to_std_frame and translation_to_std_frame():
     *                      coords_inpCrd = R.t() * coords_stdCrd + t
     *          where:
     *          SystemAdapterAbstractBase system& = ...
     *          const arma::mat & R = system.rotation_to_std_frame();
     *          const arma::vec & t = system.translation_to_std_frame();
     */

    class SystemAdapterAbstractBase {
    public:
        // Data: positions in physical-space:
        virtual unsigned n_atoms() const = 0;
        virtual arma::vec3 atom_coords_std_frame(unsigned atom) const = 0;
        // Data: basis and 1e-integrals:    
        virtual unsigned n_basis() const = 0;
        virtual arma::span atomic_basis_span(unsigned atom) const = 0;
        virtual arma::mat33 rotation_to_std_frame() const = 0;
        virtual arma::vec3 translation_to_std_frame() const = 0;
        virtual arma::mat overlap_matrix() const = 0;
        virtual arma::mat sqrt_overlap_matrix() const = 0;
        virtual arma::mat inv_sqrt_overlap_matrix() const = 0;
        virtual arma::mat r_std_oritent_matrix(Direction) const = 0;
        virtual arma::mat rr_std_oritent_matrix(Direction, Direction) const = 0;
        // Data: Charge distribution:        
        virtual double nuclei_charge(unsigned atom) const = 0;
        virtual arma::mat density_operator(int spin) const = 0; // alpha = 0, beta = 1
        // Destructors:
        virtual ~SystemAdapterAbstractBase() = 0;
    };

    // *****************************************************************************

    /*
     *                   <<< cass SystemAdapterBase >>>
     * 
     * SystemAdapterBase is a simple not-abstract implementation
     * of SystemAdapterAbstractBase that:
     * -> Implements member functions sqrt_overlap_matrix() using overlap_matrix().
     * -> Implements member functions inv_sqrt_overlap_matrix() using overlap_matrix().
     * -> Throws "The provided system-adapter does not support ..."
     *    in other member functions.
     * 
     * This class is intended to be further derived --
     * it may help to build concrete implementation of SystemAdapterAbstractBase
     * or during the testing time.
     */

    class SystemAdapterBase : public SystemAdapterAbstractBase {
    public:
        unsigned n_atoms() const override;
        arma::vec3 atom_coords_std_frame(unsigned atom) const override;
        unsigned n_basis() const override;
        arma::span atomic_basis_span(unsigned atom) const override;
        arma::mat33 rotation_to_std_frame() const override;
        arma::vec3 translation_to_std_frame() const override;
        arma::mat overlap_matrix() const override;
        arma::mat sqrt_overlap_matrix() const override;
        arma::mat inv_sqrt_overlap_matrix() const override;
        arma::mat r_std_oritent_matrix(Direction) const override;
        arma::mat rr_std_oritent_matrix(Direction, Direction) const override;
        double nuclei_charge(unsigned atom) const override;
        arma::mat density_operator(int spin) const override;
    };

} // end of namespace el_stat_prop

#endif
