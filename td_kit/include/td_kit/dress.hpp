/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_TDK_KIT_DRESS_HPP
#define NIEDOIDA_TDK_KIT_DRESS_HPP

#include <map>

#include "td_kit/mo_integral.hpp"
#include "core_kit/pseudo_fock_matrix_generator.hpp"

namespace niedoida {
    namespace td {
        typedef std::map<std::pair<std::size_t, std::size_t>,double> DiagonalInts;
        
        class Dress_matrix {

        public:
            //typedef std::map<std::pair<std::size_t, std::size_t>,double> DiagonalInts;

            Dress_matrix(
                const DiagonalInts& diagonal,
                const double& denominator);

            Dress_matrix(const Dress_matrix& old);

            ~Dress_matrix() {};

            arma::mat operator() (const arma::mat& ci_coeffs) const;
            double denominator() const;
            DiagonalInts diagonalInts() const;
            void set_denominator(double new_denominator);

        protected:
            DiagonalInts m_diagonal;
            double m_denominator;
        };




        class Dress {
        public:

            typedef std::vector<std::pair<std::vector<Dress_matrix>,std::vector<double> > > Full_dress;

            Dress(
                const std::shared_ptr<const core::System>& system,
                const arma::mat& tddft_coeffs,
                const arma::vec& calculated_tddft_energies,
                const arma::mat& mo_coeffs,
                const arma::vec& eps,
                const unsigned& no_states,
                std::shared_ptr<const MOOneEIntGenerator> mo_one_e_int_gen,
                std::shared_ptr<MOTwoEIntGenerator> mo_two_e_int_gen,
                std::shared_ptr<const core::TwoElectronIntegralEngineFactory> two_e_ie_factory,
                const double delta,
                unsigned state);

            void update_dress(const arma::vec& new_tddft_energies,
                              const arma::mat& new_coeffs);

            std::vector<Dress_matrix> get_dress_matrix() const;

        protected:
            const unsigned no_occ;
            const unsigned no_states;
            const unsigned no_virt; 
            arma::mat coeffs;
            arma::vec tddft_energies;
            const arma::mat m_mo_coeffs;
            Full_dress single_excitations_vector;
            
        private:
            void getHdd ( std::vector< std::pair < std::pair<std::size_t, std::size_t>, double> > &H_dd_vector, 
                    const double double_excitation_min_energy, const double double_excitation_max_energy, const arma::vec& eps);
            
            void makePseudoDensityMatrix( const std::vector< std::pair < std::pair<std::size_t, std::size_t>, double> > &H_dd_vector,
                                          std::vector<arma::cube> &fakeP );
            
            std::map< std::size_t, std::size_t > m_ia2fakePind;
        };
    }
}


#endif
