/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include<stdexcept>
#include<el_stat_prop_kit/fragments_bits.hpp>

namespace el_stat_prop {

    // *****************************************************************************
    // ***********        FragmentBit - abstract base class:          **************
    // *****************************************************************************

    FragmentBit::FragmentBit(const SystemAdapterAbstractBase& system) :
    m_system(system) {
    }

    FragmentBit::~FragmentBit() = default;

    // *****************************************************************************
    // ***********        FragmentTag - concrete classes:             **************
    // *****************************************************************************

    MullikenBit::MullikenBit(
            tag_t tag,
            const SystemAdapterAbstractBase& system) :
    FragmentBit(system),
    m_tag(tag) {
    }

    arma::mat MullikenBit::trim_electron_operator(const arma::mat& one_electron_operator) const {
        // acquisition necessary data:
        const arma::span atomic_spans = m_system.atomic_basis_span(m_tag.m_atom);
        const unsigned n_basis = m_system.n_basis();
        // formal argument validity check:
        if (one_electron_operator.n_rows != n_basis || one_electron_operator.n_cols != n_basis) {
            std::string message = "The one_electron_operator formal argument has wrong shape.";
            throw std::invalid_argument(message);
        }
        // calculations: 
        arma::mat result(n_basis, n_basis, arma::fill::zeros);
        result.submat(arma::span::all, atomic_spans) = one_electron_operator.submat(arma::span::all, atomic_spans);
        return ( result + result.t()) / 2.0;
    }

    arma::vec MullikenBit::trim_nuclei_contraction_coeffs(const arma::vec& nuclei_contraction_coeffs) const {
        // acquisition necessary data:
        const unsigned n_atom = m_system.n_atoms();
        // formal argument validity check:
        if (nuclei_contraction_coeffs.n_rows != n_atom) {
            std::string message = "The nuclei_contraction_coeffs formal argument has wrong shape.";
            throw std::invalid_argument(message);
        }
        // calculations: 
        arma::vec result(n_atom, arma::fill::zeros);
        result(m_tag.m_atom) = nuclei_contraction_coeffs(m_tag.m_atom);
        return result;
    }

    // *****************************************************************************

    LowdinBit::LowdinBit(
            tag_t tag,
            const SystemAdapterAbstractBase& system) :
    FragmentBit(system),
    m_tag(tag) {
    }

    arma::mat LowdinBit::trim_electron_operator(const arma::mat& one_electron_operator) const {
        // acquisition necessary data:
        const arma::span atomic_spans = m_system.atomic_basis_span(m_tag.m_atom);
        const unsigned n_basis = m_system.n_basis();
        // formal argument validity check:
        if (one_electron_operator.n_rows != n_basis || one_electron_operator.n_cols != n_basis) {
            std::string message = "The one_electron_operator formal argument has wrong shape.";
            throw std::invalid_argument(message);
        }
        // calculations:
        const arma::mat tmp =
                m_system.sqrt_overlap_matrix()(arma::span::all, atomic_spans) *
                m_system.inv_sqrt_overlap_matrix()(atomic_spans, arma::span::all);
        arma::mat result = tmp * one_electron_operator;
        return (result + result.t()) / 2.0;
    }

    arma::vec LowdinBit::trim_nuclei_contraction_coeffs(const arma::vec& nuclei_contraction_coeffs) const {
        // acquisition necessary data:
        const unsigned n_atom = m_system.n_atoms();
        // formal argument validity check:
        if (nuclei_contraction_coeffs.n_rows != n_atom) {
            std::string message = "The nuclei_contraction_coeffs formal argument has wrong shape.";
            throw std::invalid_argument(message);
        }
        // calculations: 
        arma::vec result(n_atom, arma::fill::zeros);
        result(m_tag.m_atom) = nuclei_contraction_coeffs(m_tag.m_atom);
        return result;
    }

} // end of namespace el_stat_prop
