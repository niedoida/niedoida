/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef PSEUDO_FOCK_MATRIX_GENERATOR_HPP
#define PSEUDO_FOCK_MATRIX_GENERATOR_HPP

#include <boost/shared_ptr.hpp>
#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/matrix.hpp>

#include "misc/namespaces.hpp"
#include "core_kit/system.hpp"
#include "core_kit/fock_matrix_generator_factory.hpp"
#include "scf_kit/scf_utils.hpp"


ublas::matrix<double> pseudo_density_matrix(
    const ublas::matrix<double>& mo_coeffs, 
    const ublas::matrix<double>& ci_coeffs);

class PseudoFockMatrixGenerator {
public:
    PseudoFockMatrixGenerator(
        boost::shared_ptr<const System>,
        std::unique_ptr<TwoElectronIntegralEngine>,
        double treshold);

    void set_density_matrix(const ublas::matrix<double>&,
                            const ublas::matrix<double>&);

    const ublas::symmetric_matrix<double>& coulomb_matrix() const;
    const ublas::matrix<double>& exchange_matrix(Spin) const;

private:
    void update();

    void update_task(
        const ublas::matrix<double> P[2], 
        unsigned long begin, 
        unsigned long end,
        ShellQuartetIndexGenerator& i);

    void partial_update(
        const ublas::matrix<double> P[2],
        const TwoElectronIntegralEngine::Request& request,
        double max_P);

    void contract_integral(
        const ublas::matrix<double> P[2],
        unsigned i, 
        unsigned j, 
        unsigned k, 
        unsigned l, 
        double g);

    double max_P(const ShellQuartetIndex&) const;

    void reduce();

    void set_max_P_shells(
        const ublas::matrix<double> P[2]);

    boost::shared_ptr<const System> m_system;
    std::unique_ptr<TwoElectronIntegralEngine> m_2ie;
    const double m_treshold;

    SchwartzEstimator m_schwartz;

    std::vector<unsigned> m_shell_sizes;
    unsigned m_no_contractions;
    std::vector<unsigned> m_first_contraction_in_shell;

    const std::size_t m_max_no_requests;
    std::vector<TwoElectronIntegralEngine::Request> m_requests;
    boost::multi_array<double, 2> m_buf;
    boost::scoped_array<double> m_max_P;

    unsigned long m_no_shell_quartets;
    
    ublas::matrix<double> m_P[2];
    ublas::symmetric_matrix<double> m_J;
    ublas::matrix<double> m_K[2];

    ublas::matrix<double> m_max_P_shells;
};


class PseudoFockMultiMatrixGenerator {
public:
    PseudoFockMultiMatrixGenerator(
        boost::shared_ptr<const System>,
        std::unique_ptr<TwoElectronIntegralEngine>,
        double treshold);

    void set_density_matrix(const boost::multi_array<ublas::matrix<double>, 2>&);

    const ublas::symmetric_matrix<double>& coulomb_matrix(std::size_t) const;
    const ublas::matrix<double>& exchange_matrix(std::size_t, Spin) const;

private:
    void update();

    void update_task(
        const boost::multi_array<ublas::matrix<double>, 2>&,
        unsigned long begin, 
        unsigned long end,
        ShellQuartetIndexGenerator& i);

    void partial_update(
        const boost::multi_array<ublas::matrix<double>, 2>&,
        const TwoElectronIntegralEngine::Request& request,
        double max_P);

    void contract_integral(
        const boost::multi_array<ublas::matrix<double>, 2>&,
        unsigned i, 
        unsigned j, 
        unsigned k, 
        unsigned l, 
        double g);

    double max_P(const ShellQuartetIndex&) const;

    void reduce();

    void set_max_P_shells(
        const boost::multi_array<ublas::matrix<double>, 2>& P);

    boost::shared_ptr<const System> m_system;
    std::unique_ptr<TwoElectronIntegralEngine> m_2ie;
    const double m_treshold;

    SchwartzEstimator m_schwartz;

    std::vector<unsigned> m_shell_sizes;
    unsigned m_no_contractions;
    std::vector<unsigned> m_first_contraction_in_shell;

    const std::size_t m_max_no_requests;
    std::vector<TwoElectronIntegralEngine::Request> m_requests;
    boost::multi_array<double, 2> m_buf;
    boost::scoped_array<double> m_max_P;

    unsigned long m_no_shell_quartets;

    std::size_t m_no_matrices;
    boost::multi_array<ublas::matrix<double>, 2> m_P;
    boost::multi_array<ublas::symmetric_matrix<double>, 1> m_J;
    boost::multi_array<ublas::matrix<double>, 2> m_K;

    ublas::matrix<double> m_max_P_shells;
};



inline
const ublas::symmetric_matrix<double>& 
PseudoFockMatrixGenerator::coulomb_matrix() const
{
    return m_J;
}

inline
const ublas::matrix<double>& 
PseudoFockMatrixGenerator::exchange_matrix(Spin s) const
{
    return m_K[s];
}

inline
void PseudoFockMatrixGenerator::contract_integral(
    const ublas::matrix<double> P[2],
    unsigned i, 
    unsigned j, 
    unsigned k, 
    unsigned l, 
    double g)
{
    m_J(i, j) += 
        g * (P[SPIN_ALPHA](k, l) + P[SPIN_BETA](k, l) +
             P[SPIN_ALPHA](l, k) + P[SPIN_BETA](l, k));
        
    m_J(k, l) += 
        g * (P[SPIN_ALPHA](i, j) + P[SPIN_BETA](i, j) +
             P[SPIN_ALPHA](j, i) + P[SPIN_BETA](j, i));

    for (int s = SPIN_ALPHA; s <= SPIN_BETA; ++s) {
        m_K[s](i, k) -= P[s](j, l) * g;
        m_K[s](k, i) -= P[s](l, j) * g;
        m_K[s](i, l) -= P[s](j, k) * g;
        m_K[s](l, i) -= P[s](k, j) * g;
        m_K[s](j, k) -= P[s](i, l) * g;
        m_K[s](k, j) -= P[s](l, i) * g;
        m_K[s](j, l) -= P[s](i, k) * g;
        m_K[s](l, j) -= P[s](k, i) * g;
    }
}

inline
const ublas::symmetric_matrix<double>& 
PseudoFockMultiMatrixGenerator::coulomb_matrix(std::size_t i) const
{
    return m_J[i];
}

inline
const ublas::matrix<double>& 
PseudoFockMultiMatrixGenerator::exchange_matrix(std::size_t i, Spin s) const
{
    return m_K[i][s];
}

inline
void PseudoFockMultiMatrixGenerator::contract_integral(
    const boost::multi_array<ublas::matrix<double>, 2>& P,
    unsigned i, 
    unsigned j, 
    unsigned k, 
    unsigned l, 
    double g)
{
    for (std::size_t n = 0; n < m_no_matrices; ++n) {
        const ublas::matrix<double>& P_alpha = P[n][SPIN_ALPHA];
        const ublas::matrix<double>& P_beta = P[n][SPIN_BETA];

        ublas::symmetric_matrix<double>& J = m_J[n];

        ublas::matrix<double>& K_alpha = m_K[n][SPIN_ALPHA];
        ublas::matrix<double>& K_beta = m_K[n][SPIN_BETA];

        J(i, j) += 
            g * (P_alpha(k, l) + P_beta(k, l) +
                 P_alpha(l, k) + P_beta(l, k));
        
        J(k, l) += 
            g * (P_alpha(i, j) + P_beta(i, j) +
                 P_alpha(j, i) + P_beta(j, i));

        K_alpha(i, k) -= P_alpha(j, l) * g;
        K_alpha(k, i) -= P_alpha(l, j) * g;
        K_alpha(i, l) -= P_alpha(j, k) * g;
        K_alpha(l, i) -= P_alpha(k, j) * g;
        K_alpha(j, k) -= P_alpha(i, l) * g;
        K_alpha(k, j) -= P_alpha(l, i) * g;
        K_alpha(j, l) -= P_alpha(i, k) * g;
        K_alpha(l, j) -= P_alpha(k, i) * g;

        K_beta(i, k) -= P_beta(j, l) * g;
        K_beta(k, i) -= P_beta(l, j) * g;
        K_beta(i, l) -= P_beta(j, k) * g;
        K_beta(l, i) -= P_beta(k, j) * g;
        K_beta(j, k) -= P_beta(i, l) * g;
        K_beta(k, j) -= P_beta(l, i) * g;
        K_beta(j, l) -= P_beta(i, k) * g;
        K_beta(l, j) -= P_beta(k, i) * g;
    }
}


#endif
