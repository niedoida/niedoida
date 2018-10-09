/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef TDKS_HYBRID_RPA_HPP
#define TDKS_HYBRID_RPA_HPP

#include <boost/shared_ptr.hpp>
#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/matrix.hpp>

#include "misc/namespaces.hpp"
#include "core_kit/system.hpp"
#include "td_kit/xc_kernel_generator.hpp"
#include "core_kit/fock_matrix_generator_factory.hpp"
#include "scf_kit/scf_utils.hpp"
#include "td_kit/restricted_td.hpp"
#include "core_kit/pseudo_fock_matrix_generator.hpp"

class TDKS_HybridRPA: public RestrictedTD {

typedef RestrictedTD Base;

public:
    TDKS_HybridRPA(
        Multiplicity multiplicity,
        boost::shared_ptr<const System> system,
        const arma::mat C,
        const arma::vec eps,
        boost::shared_ptr<const TwoElectronIntegralEngineFactory>,
        unsigned no_frozen,
        unsigned no_deleted,
        unsigned no_states,
        unsigned no_iterations,
        double diagonalization_threshold,
        boost::shared_ptr<XCKernelGenerator> generator,
        std::string job_name,
        double hf_exchange_contribution = 0.0);

private:
    class Sigma: public Base::Sigma {
    public:
        Sigma(
            boost::shared_ptr<const System> system,
            const arma::mat& mo_coeffs,
            const arma::vec& eps,
            std::size_t no_frozen,
            std::size_t no_deleted,
            Multiplicity mult,
            PseudoFockMatrixGenerator& fm,
            boost::shared_ptr<XCKernelGenerator> generator,
            double hf_exchange_contribution);
        
    protected:
        arma::mat calc(const arma::mat&) const;
        arma::mat calc_AplusB(const arma::mat&) const;
        arma::mat calc_AminusB(const arma::mat&) const;
        PseudoFockMatrixGenerator* m_fock_matrix_generator;
        boost::shared_ptr<XCKernelGenerator> m_xc_kernel_generator;
    };
};

#endif

