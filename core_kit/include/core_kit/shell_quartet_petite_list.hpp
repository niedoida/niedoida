/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_SHELL_QUARTET_PETITE_LIST
#define NIEDOIDA_CORE_KIT_SHELL_QUARTET_PETITE_LIST

#include "core_kit/system.hpp"
#include "symmetry_kit/symmetry_group.hpp"
#include "core_kit/shell_quartet_index_generator.hpp"
#include "core_kit/integral_engine.hpp"


#include <boost/multi_array.hpp>

#include <armadillo>
#include <vector>
#include <functional>

namespace niedoida {
    
    namespace core {


/**
 * @ingroup core_kit
 *
 * @brief Abstract base class for any petit list of shell quartets
 *
 */
        class ShellQuartetPetiteList {
        public:
            typedef Request request_type;
    
            virtual ~ShellQuartetPetiteList() {} 

            /**
             * @brief check if shell quartet is unique 
             */
            virtual bool is_unique(const ShellQuartetIndex&) = 0;

            /**
             * @brief prepare storage for symmetry equivalent requests
             * and transformed integrals
             */
            virtual void prepare_storage(
                std::vector<request_type>& eq_reqs,
                arma::vec& buf) const = 0;

            /**
             * @brief get all symmetry equivalent requests
             */
            virtual void get_equivalent_requests(
                const request_type& request,
                std::vector<request_type>& eq_reqs,
                arma::vec& buf) = 0;
        };

/**
 * @ingroup core_kit
 * 
 * @brief  Petite list of shell quartets using no symmetry information
 *
 * Does not do anything, only obeys the interface above,
 * which helps to implement fock_matrix_generators
 *
 */
        class NoSymmetryPetiteList: public ShellQuartetPetiteList {
        public:
            bool is_unique(const ShellQuartetIndex&) { return true; }

            void prepare_storage(
                std::vector<request_type>& /*eq_reqs*/,
                arma::vec& /*buf*/) const {}

            void get_equivalent_requests(
                const request_type& /*request*/,
                std::vector<request_type>& /*eq_reqs*/,
                arma::vec& /*buf*/) {}
        };

/**
 * @ingroup core_kit
 *
 * @brief Petite list of shell quartets using simple symmetry
 *
 */
        class SimpleSymmetryPetiteList: public ShellQuartetPetiteList {
        public:
            SimpleSymmetryPetiteList(
                std::shared_ptr<System> /*system*/,
                const niedoida::symmetry::FiniteSymmetryGroup& /*symmetry_group*/,
                double /*tol_dist*/);

            bool is_unique(const ShellQuartetIndex&);
    
            void prepare_storage(
                std::vector<request_type>& eq_reqs,
                arma::vec& buf) const;

            void get_equivalent_requests(
                const request_type& request,
                std::vector<request_type>& eq_reqs,
                arma::vec& buf);

        private:
            double* transform_values(double *buf_pos,
                                     unsigned t, 
                                     const request_type& src);

            void create_mask(bool invx, bool invy, bool invz,
                             const Shell *shell,
                             std::vector<bool>& mask);

            bool is_diagonal(const arma::mat&);

            std::vector<Shell*> m_shells;    
            std::vector<unsigned> m_shell_sizes;
            std::vector<unsigned> m_first_cntrn_in_shell;

            std::vector<std::vector<unsigned> > m_shell_trans;
            std::vector<bool> m_inv_mask[4];
	    boost::multi_array<bool, 2> m_inv_mask2;
            unsigned m_p[4];

            struct index {
                unsigned p, q, r, s;
                bool operator == (const index& ix) {
                    return p == ix.p && q == ix.q && r == ix.r && s == ix.s;
                }
            };
            std::vector<index> m_indices;

            class vector_eq : 
                public std::unary_function<std::vector<unsigned>, bool> {
            private:
                std::vector<unsigned> m_v;
            public:
                vector_eq(const std::vector<unsigned>& v) : m_v(v) { }
        
                bool operator () (const std::vector<unsigned>& v) 
                    { return std::equal(m_v.begin(), m_v.end(), v.begin()); }
            };
        };

    }
}

#endif
