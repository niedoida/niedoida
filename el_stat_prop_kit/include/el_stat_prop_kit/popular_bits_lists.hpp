/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef POPULAR_BITS_LISTS
#define POPULAR_BITS_LISTS

#include<array>
#include<vector>
#include<armadillo>

#include<el_stat_prop_kit/properties_bits.hpp>
#include<el_stat_prop_kit/fragment_property_bit.hpp>
#include<el_stat_prop_kit/adapter.hpp>

namespace el_stat_prop {

    std::array<std::shared_ptr<ChargeBit>, 1>
    charge_bit(const SystemAdapterAbstractBase& system);

    std::array<std::shared_ptr<DipoleMomentBit>, 3>
    dipole_bits_in_std_frame(const SystemAdapterAbstractBase& system);

    std::array<std::shared_ptr<DipoleMomentBit>, 3>
    dipole_bits_in_inp_frame(const SystemAdapterAbstractBase& system);

    std::array<std::shared_ptr<QuadrupoleMomentBit>, 6>
    quadrupole_bits_in_std_frame(const SystemAdapterAbstractBase& system);

    std::array<std::shared_ptr<QuadrupoleMomentBit>, 6>
    quadrupole_bits_in_inp_frame(const SystemAdapterAbstractBase& system);

    std::vector<std::shared_ptr<FragmentPropertyBit>>
    atomic_partial_mulliken_charges_bits(const SystemAdapterAbstractBase& system);

    std::vector<std::shared_ptr<FragmentPropertyBit>>
    atomic_partial_lowdin_charges_bits(const SystemAdapterAbstractBase& system);

    std::vector<std::shared_ptr<FragmentPropertyBit>>
    atomic_partial_mulliken_dipoles_bits_in_std_frame(const SystemAdapterAbstractBase& system);

    std::vector<std::shared_ptr<FragmentPropertyBit>>
    atomic_partial_mulliken_dipoles_bits_in_inp_frame(const SystemAdapterAbstractBase& system);

    std::vector<std::shared_ptr<FragmentPropertyBit>>
    atomic_partial_lowdin_dipoles_bits_in_std_frame(const SystemAdapterAbstractBase& system);

    std::vector<std::shared_ptr<FragmentPropertyBit>>
    atomic_partial_lowdin_dipoles_bits_in_inp_frame(const SystemAdapterAbstractBase& system);

    std::vector<std::shared_ptr<FragmentPropertyBit>>
    atomic_partial_mulliken_quadrupoles_bits_in_std_frame(const SystemAdapterAbstractBase& system);

    std::vector<std::shared_ptr<FragmentPropertyBit>>
    atomic_partial_mulliken_quadrupoles_bits_in_inp_frame(const SystemAdapterAbstractBase& system);

    std::vector<std::shared_ptr<FragmentPropertyBit>>
    atomic_partial_lowdin_quadrupoles_bits_in_std_frame(const SystemAdapterAbstractBase& system);

    std::vector<std::shared_ptr<FragmentPropertyBit>>
    atomic_partial_lowdin_quadrupoles_bits_in_inp_frame(const SystemAdapterAbstractBase& system);

    std::vector<std::shared_ptr<PropertyBit>>
    bits_for_pi4N_mulliken_in_inp_frame(const SystemAdapterAbstractBase& system);

    std::vector<std::shared_ptr<PropertyBit>>
    bits_for_pi4N_lowdin_in_inp_frame(const SystemAdapterAbstractBase& system);

    std::vector<std::shared_ptr<PropertyBit>>
    bits_for_pi10N_mulliken_in_std_frame(const SystemAdapterAbstractBase& system);

    std::vector<std::shared_ptr<PropertyBit>>
    bits_for_pi10N_mulliken_in_inp_frame(const SystemAdapterAbstractBase& system);

    std::vector<std::shared_ptr<PropertyBit>>
    bits_for_pi10N_lowdin_in_std_frame(const SystemAdapterAbstractBase& system);

    std::vector<std::shared_ptr<PropertyBit>>
    bits_for_pi10N_lowdin_in_inp_frame(const SystemAdapterAbstractBase& system);

    
    // *****************************************************************************
    // *******************  container of bits transformation         ***************
    // *****************************************************************************

    // forward-definition:
    class BitsValues;

    // forward-definition:
    template<class RandomAccessBitIt>
    BitsValues transform_bit_collection_to_values(RandomAccessBitIt first, RandomAccessBitIt last);

    /* The below class is intended to be a wrapper of 
     * the transform_bits_to_their_values(...) results.
     */
    class BitsValues {
    public:
        BitsValues(unsigned n_values);
        const arma::vec& value_electron() const;
        const arma::vec& value_nuclei() const;
    private:
        arma::vec m_value_nuclei;
        arma::vec m_value_electron;
        template<class RandomAccessBitIt>
        friend BitsValues transform_bit_collection_to_values(RandomAccessBitIt first, RandomAccessBitIt last);
    };

    /* The templates below is intended to work with diverse stl-containers types
     * storing std::shared_ptr<FragmentPropertyBit>.
     * The necessity of using template stems from the fact,
     * that the functions defined above in this header 
     * are quite specific in the return types
     * (take advantage of std::vector and std::array)
     */
    template<class RandomAccessBitIt>
    BitsValues transform_bit_collection_to_values(RandomAccessBitIt first, RandomAccessBitIt last) {
        BitsValues retult(last - first);
        using value_fn_t = double (PropertyBit::*)() const;
        value_fn_t value_nuclei = &PropertyBit::value_nuclei;
        value_fn_t value_electron = &PropertyBit::value_electron;
        std::transform(first, last, retult.m_value_nuclei.begin(), std::bind(value_nuclei, std::placeholders::_1));
        std::transform(first, last, retult.m_value_electron.begin(), std::bind(value_electron, std::placeholders::_1));
        return retult;
    }

    template<class RandomAccessBitIt>
    std::vector<arma::mat> transform_bit_collection_to_electron_operators(RandomAccessBitIt first, RandomAccessBitIt last) {
        std::vector<arma::mat> retult(last - first);
        using fn_t = arma::mat(PropertyBit::*)() const;
        fn_t electron_operator = &PropertyBit::electron_operator;
        std::transform(first, last, retult.begin(), std::bind(electron_operator, std::placeholders::_1));
        return retult;
    }


} // end of namespace el_stat_prop

#endif
