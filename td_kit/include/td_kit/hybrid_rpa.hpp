/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef HYBRID_RPA_HPP
#define HYBRID_RPA_HPP

#include <boost/shared_ptr.hpp>
#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/matrix.hpp>

#include "misc/namespaces.hpp"
#include "core_kit/system.hpp"
#include "posthf_kit/xc_kernel_generator.hpp"
#include "core_kit/fock_matrix_generator_factory.hpp"
#include "scf_kit/scf_utils.hpp"
#include "posthf_kit/restricted_td.hpp"
#include "core_kit/pseudo_fock_matrix_generator.hpp"

class HYBRID_RPA: public RestrictedTD {

typedef RestrictedTD Base;

public:
    HYBRID_RPA(
        Multiplicity multiplicity,
        boost::shared_ptr<const System> system,
        const ublas::matrix<double> C,
        const ublas::vector<double> eps,
        boost::shared_ptr<const TwoElectronIntegralEngineFactory>,
        unsigned no_frozen,
        unsigned no_deleted,
        unsigned no_states,
        unsigned no_iterations,
        double diagonalization_threshold,
        boost::shared_ptr<XCKernelGenerator> generator,
        double hf_exchange_contribution = 0.0);

private:
    class Sigma: public Base::Sigma {
    public:
        Sigma(
            boost::shared_ptr<const System> system,
            const ublas::matrix<double>& mo_coeffs,
            const ublas::vector<double>& eps,
            std::size_t no_frozen,
            std::size_t no_deleted,
            Multiplicity mult,
            PseudoFockMatrixGenerator& fm,
            boost::shared_ptr<XCKernelGenerator> generator,
            double hf_exchange_contribution);
        
        ublas::vector<double> operator()(const ublas::vector<double>& cv) const;

    protected:
        ublas::matrix<double> calc(ublas::matrix<double>&) const;
        PseudoFockMatrixGenerator* m_fock_matrix_generator;
        boost::shared_ptr<XCKernelGenerator> m_xc_kernel_generator;
    };
};

#endif

