/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_BASIS_SET_HPP
#define NIEDOIDA_CORE_KIT_BASIS_SET_HPP

#include <memory>
#include <vector>

#include <boost/noncopyable.hpp>
#include <armadillo>
#include "atom.hpp"

namespace niedoida {

    namespace core {

/**
 * @ingroup core_kit
 * 
 * @brief Shell
 *
 * The class represents a shell.
 * 
 */

        class Shell;
        class AtomicBasisSet;
        class BasisSet;
        class SchwartzEstimator;

        class Shell: public boost::noncopyable {
        public:

            void fill(const std::vector<unsigned>& l,
                      const arma::vec& primitive_exps,
                      const arma::mat& contraction_coeffs);

            const AtomicBasisSet& atomic_basis_set() const;
            unsigned l_min() const;
            unsigned l_max() const;
            const std::vector<unsigned>& l() const;
            const arma::vec& primitive_exps() const;
            const arma::mat& contraction_coeffs() const;
            unsigned naive_size() const;
            unsigned real_size() const;
            unsigned cartesian_size() const;

        private:
            friend class AtomicBasisSet;

            Shell(AtomicBasisSet&);
            AtomicBasisSet& m_atomic_basis_set;
            unsigned m_l_min;
            unsigned m_l_max;
            std::vector<unsigned> m_l;
            arma::vec m_primitive_exps;
            arma::mat m_contraction_coeffs;
        };

/**
 * @ingroup core_kit
 * 
 * @brief Atomic basis set.
 *
 * The class represents the basis set of an atom.
 * 
 */
        class AtomicBasisSet: public boost::noncopyable {
        public:
            ~AtomicBasisSet();

            const BasisSet& basis_set() const;
            const Atom& atom() const;

            const std::vector<Shell*>& valence_shells() const;

            Shell& add_valence_shell();
            unsigned naive_size() const;
            unsigned real_size() const;
            unsigned cartesian_size() const;

        private:
            friend class BasisSet;

            AtomicBasisSet(BasisSet&, Atom&);

            BasisSet& m_basis_set;
            Atom& m_atom;

            std::vector<Shell*> m_valence_shells;
        };

/**
 * @ingroup core_kit
 * 
 * @brief Basis set.
 *
 * The class represents the basis set of a whole system.
 * 
 */
        class BasisSet: public boost::noncopyable {
        public:
            ~BasisSet();

            const std::vector<AtomicBasisSet*>& atomic_basis_sets() const;
            std::vector<AtomicBasisSet*>& atomic_basis_sets();

            AtomicBasisSet& add_atomic_basis_set(Atom&);

            unsigned naive_size() const;
            unsigned real_size() const;
            unsigned cartesian_size() const;

            std::unique_ptr<arma::mat> the_basis;
            std::unique_ptr<arma::mat> overlap_matrix;
            std::unique_ptr<arma::mat> kinetic_matrix;
            std::shared_ptr<SchwartzEstimator> schwartz_estimator;

        private:
            std::vector<AtomicBasisSet*> m_atomic_basis_sets;

        };

//----------------------------------------------------------------------------
        inline
        const AtomicBasisSet& Shell::atomic_basis_set() const
        {
            return m_atomic_basis_set;
        }

//----------------------------------------------------------------------------
        inline
        unsigned Shell::l_min() const
        {
            return m_l_min;
        }

//----------------------------------------------------------------------------
        inline
        unsigned Shell::l_max() const
        {
            return m_l_max;
        }

//----------------------------------------------------------------------------
        inline
        const std::vector<unsigned>& Shell::l() const
        {
            return m_l;
        }

//----------------------------------------------------------------------------
        inline
        const arma::vec& Shell::primitive_exps() const
        {
            return m_primitive_exps;
        }

//----------------------------------------------------------------------------
        inline
        const arma::mat& Shell::contraction_coeffs() const
        {
            return m_contraction_coeffs;
        }

//----------------------------------------------------------------------------
        inline
        const BasisSet& AtomicBasisSet::basis_set() const
        {
            return m_basis_set;
        }

//----------------------------------------------------------------------------
        inline
        const Atom& AtomicBasisSet::atom() const
        {
            return m_atom;
        }

//----------------------------------------------------------------------------
        inline
        const std::vector<Shell*>& AtomicBasisSet::valence_shells() const
        {
            return m_valence_shells;
        }

//----------------------------------------------------------------------------
        inline
        const std::vector<AtomicBasisSet*>& BasisSet::atomic_basis_sets() const
        {
            return m_atomic_basis_sets;
        }
//----------------------------------------------------------------------------
        inline
        std::vector<AtomicBasisSet*>& BasisSet::atomic_basis_sets()
        {
            return m_atomic_basis_sets;
        }
//----------------------------------------------------------------------------
        inline
        unsigned Shell::naive_size() const
        {
            return m_l.size();
        }
    }
}


#endif
