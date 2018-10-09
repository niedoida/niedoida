/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_INITIAL_GUESS
#define NIEDOIDA_CORE_KIT_INITIAL_GUESS

#include "core_kit/promolecule.hpp"
#include <boost/optional.hpp>
#include "core_kit/basis_set.hpp"
#include "core_kit/atom.hpp"

namespace niedoida {

    namespace core {

/**
 * @brief Initial guess for density matrix
 *
 */

        class InitialGuess {
        public:
            virtual const arma::mat& density_matrix(Spin) const = 0;
        };

/**
 * @brief Inital guess containing start orbitals (in addition to dens. matrix)
 */
        class InitialGuessWithMO: public InitialGuess {
        public:
            virtual const arma::mat& mo_coefficients(Spin s) const = 0;
        };


/**
 * @brief Initial guess from core Hamiltonian (neglecting all electrons)
 */
        class InitialGuessHCore : public InitialGuess {
        public:
            InitialGuessHCore(unsigned no_basis_functions) {
                m_P[SPIN_ALPHA].zeros(no_basis_functions, no_basis_functions);
                m_P[SPIN_BETA ].zeros(no_basis_functions, no_basis_functions);
            }
    
            const arma::mat& density_matrix(Spin s) const
                {
                    return m_P[s]; 
                }

        private:
            arma::mat m_P[NO_SPINS];
        };

/**
 * @brief Initial guess from fragments (promolecule)
 */
        class InitialGuessFragments : public InitialGuess {
        public:
            InitialGuessFragments(const Promolecule& /*promolecule*/,
                                  unsigned /*no_electrons_alpha*/,
                                  unsigned /*no_electrons_beta*/);

            const arma::mat& density_matrix(Spin s) const
                {
                    return m_P[s]; 
                }

        private:
            arma::mat m_P[NO_SPINS];
        };

/** 
 * @brief Initial guess made of orbitals read from a file
 */
        class InitialGuessFromFile : public InitialGuessWithMO {
        public:
            InitialGuessFromFile(const std::string& /*initial_guess_filename*/, 
                                 //const Config& config, 
                                 const std::vector<Atom*>& atoms,
                                 const BasisSet & basis_set,                                                   
                                 // unsigned /*no_basis_functions*/,
                                 unsigned /*no_electrons_alpha*/, 
                                 unsigned /*no_electrons_beta*/,
                                 const std::vector<std::pair<unsigned, unsigned> > & /*mo_transpose_alpha*/,
                                 const std::vector<std::pair<unsigned, unsigned> > & /*mo_transpose_beta*/);

            const arma::mat& mo_coefficients(Spin s) const
                {
                    return m_C[s]; 
                }

            const arma::mat& density_matrix(Spin s) const
                {
                    return m_P[s]; 
                }

        private:
            arma::mat m_P[NO_SPINS];
            arma::mat m_C[NO_SPINS];
        };

    }
}

#endif
