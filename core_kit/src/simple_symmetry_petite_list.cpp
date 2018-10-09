/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/shell_quartet_petite_list.hpp"

#include "symmetry_kit/symmetry_utils.hpp"

#include <boost/next_prior.hpp>

#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace niedoida {

    namespace core {

        namespace {
            std::vector<unsigned>
            _create_perm_rep(const arma::mat& cart_rep,
                             std::shared_ptr<const System> system,
                             double tol_dist)
            {
                const std::size_t n = system->atoms.size();
                arma::mat coords(n, 3);
                for (unsigned i = 0; i < system->atoms.size(); ++i)
                    for (unsigned j = 0; j < 3; ++j)
                        coords(i, j) = system->atoms[i]->coords[j];

                return niedoida::symmetry::create_perm_rep(
                    cart_rep, coords, tol_dist);
            }
        }

        SimpleSymmetryPetiteList::SimpleSymmetryPetiteList(
            std::shared_ptr<System> system,
            const niedoida::symmetry::FiniteSymmetryGroup& symmetry_group,
            double tol_dist)
        {
            for (auto abs : system->basis_set.atomic_basis_sets())
                for (auto shell : abs->valence_shells())
                    m_shells.push_back(shell);

            for (const Shell* s : m_shells)
                m_shell_sizes.push_back(s->real_size());

            const unsigned max_shell_size =
                *std::max_element(m_shell_sizes.begin(), m_shell_sizes.end());

            for (unsigned sh = 0; sh < 4; ++sh)
                m_inv_mask[sh].resize(max_shell_size);

            // temporarly cache number of shells  ...
            std::vector<unsigned> no_shells_in_atom;
            for (auto abs : system->basis_set.atomic_basis_sets())
                no_shells_in_atom.push_back(abs->valence_shells().size());

            // ... and indices of first shell for each atom
            std::vector<unsigned> first_shell_in_atom;
            first_shell_in_atom.push_back(0);
            std::partial_sum(no_shells_in_atom.begin(),
                             boost::prior(no_shells_in_atom.end()),
                             std::back_inserter(first_shell_in_atom));

            // collect unique atom permutations
            // coming only from simple symmetry elements
            // (belonging to D_{2h}, i.e. having diagonal cartesian repr.)
            // and remember signs of their diagonal element
            // in corresponding elements of invx, invy and invz.
            std::vector<bool> invx, invy, invz;
            std::vector<std::vector<unsigned>> atom_trans;

            std::vector<unsigned> id_perm(system->atoms.size());
            for (unsigned i = 0; i < id_perm.size(); ++i)
                id_perm[i] = i;
            atom_trans.push_back(id_perm);

            const std::vector<arma::mat>& elements = symmetry_group.elements();
            for (unsigned r = 0; r < elements.size(); ++r)
                if (is_diagonal(elements[r])) {
                    std::vector<unsigned> p =
                        _create_perm_rep(elements[r], system, tol_dist);
                    if (std::find_if(atom_trans.begin(),
                                     atom_trans.end(),
                                     vector_eq(p)) == atom_trans.end()) {
                        atom_trans.push_back(p);
                        invx.push_back((elements[r](0, 0) < 0) ? true : false);
                        invy.push_back((elements[r](1, 1) < 0) ? true : false);
                        invz.push_back((elements[r](2, 2) < 0) ? true : false);
                    }
                }

            atom_trans.erase(atom_trans.begin());

            // represent all those elements as permutations of shells
            const unsigned no_shells = m_shells.size();
            for (unsigned t = 0; t < atom_trans.size(); ++t) {
                m_shell_trans.push_back(std::vector<unsigned>(no_shells));
                for (unsigned a = 0; a < no_shells_in_atom.size(); ++a)
                    for (unsigned i = 0; i < no_shells_in_atom[a]; ++i)
                        m_shell_trans[t][first_shell_in_atom[a] + i] =
                            first_shell_in_atom[atom_trans[t][a]] + i;
            }

            m_indices.reserve(m_shell_trans.size());

            // Obtain inversion masks, i.e. bool array of form
            //
            // m_inv_mask[t][i]
            //
            // The logical value of above element indicates wheter
            // `i'-th contraction changes sign under `t'-th symmetry
            // operation or not.
            m_inv_mask2.resize(boost::extents[m_shell_trans.size()]
                                             [system->basis_set.real_size()]);
            bool* imask = m_inv_mask2.data();
            for (unsigned t = 0; t < m_shell_trans.size(); ++t) {
                for (unsigned s = 0; s < m_shells.size(); ++s) {
                    for (unsigned k = 0; k < m_shells[s]->l().size(); ++k) {

                        switch (m_shells[s]->l()[k]) {

                        case 0: // s
                            *imask++ = false;
                            break;

                        case 1: // p
                            *imask++ = invx[t];
                            *imask++ = invy[t];
                            *imask++ = invz[t];
                            break;

                        case 2: // d
                            *imask++ = invx[t] ^ invy[t];
                            *imask++ = invy[t] ^ invz[t];
                            *imask++ = false;
                            *imask++ = invx[t] ^ invz[t];
                            *imask++ = false;
                            break;

                        case 3: // f
                            *imask++ = invy[t];
                            *imask++ = invx[t] ^ invy[t] ^ invz[t];
                            *imask++ = invy[t];
                            *imask++ = invz[t];
                            *imask++ = invx[t];
                            *imask++ = invz[t];
                            *imask++ = invx[t];
                            break;

                        default:
                            throw std::runtime_error(
                                "angular momentum l > 3 not supported");
                        }
                    }
                }
            }
            // cache indices of first contraction in each shell
            m_first_cntrn_in_shell.push_back(0);
            std::partial_sum(m_shell_sizes.begin(),
                             boost::prior(m_shell_sizes.end()),
                             std::back_inserter(m_first_cntrn_in_shell));
        }

        void SimpleSymmetryPetiteList::prepare_storage(
            std::vector<request_type>& eq_reqs, arma::vec& buf) const
        {
            const unsigned max_shell_size =
                *std::max_element(m_shell_sizes.begin(), m_shell_sizes.end());
            const std::size_t max_shell_size2 = max_shell_size * max_shell_size;
            buf.resize(m_shell_trans.size() * max_shell_size2 *
                       max_shell_size2);

            eq_reqs.reserve(m_shell_trans.size());
        }

        bool SimpleSymmetryPetiteList::is_unique(const ShellQuartetIndex& sqi)
        {
            const unsigned p = sqi[0];
            const unsigned q = sqi[1];
            const unsigned r = sqi[2];
            const unsigned s = sqi[3];

            for (unsigned t = 0; t < m_shell_trans.size(); ++t) {
                unsigned pp = m_shell_trans[t][p];
                unsigned qq = m_shell_trans[t][q];
                unsigned rr = m_shell_trans[t][r];
                unsigned ss = m_shell_trans[t][s];

                // ordering
                if (pp > qq)
                    std::swap(pp, qq);
                if (rr > ss)
                    std::swap(rr, ss);
                if (pp > rr || (pp == rr && qq > ss)) {
                    std::swap(pp, rr);
                    std::swap(qq, ss);
                }

                if (!(pp > p ||
                      (pp == p &&
                       (qq > q ||
                        (qq == q && (rr > r || (rr == r && ss >= s)))))))
                    return false;
            }
            return true;
        }

        void SimpleSymmetryPetiteList::get_equivalent_requests(
            const request_type& request,
            std::vector<request_type>& eq_reqs,
            arma::vec& buf)
        {
            const unsigned p = request.shells[0];
            const unsigned q = request.shells[1];
            const unsigned r = request.shells[2];
            const unsigned s = request.shells[3];

            eq_reqs.clear();
            m_indices.clear();

            // remember indices of the original request
            const index ix = {p, q, r, s};
            m_indices.push_back(ix);

            // current position in transformed integral buffer
            double* buf_pos = buf.memptr();

            // generate list of shell quartets equivalent to one
            // given in the request and transform values to generate
            // integrals for all equivalent requests
            for (unsigned t = 0; t < m_shell_trans.size(); ++t) {
                unsigned pp = m_shell_trans[t][p];
                unsigned qq = m_shell_trans[t][q];
                unsigned rr = m_shell_trans[t][r];
                unsigned ss = m_shell_trans[t][s];

                // ordering
                m_p[0] = 0;
                m_p[1] = 1;
                m_p[2] = 2;
                m_p[3] = 3;
                if (pp > qq) {
                    std::swap(pp, qq);
                    std::swap(m_p[0], m_p[1]);
                }
                if (rr > ss) {
                    std::swap(rr, ss);
                    std::swap(m_p[2], m_p[3]);
                }
                if (pp > rr || (pp == rr && qq > ss)) {
                    std::swap(pp, rr);
                    std::swap(m_p[0], m_p[2]);
                    std::swap(qq, ss);
                    std::swap(m_p[1], m_p[3]);
                }

                // has this shell quartet already been created?
                const index ix = {pp, qq, rr, ss};
                if (std::find(m_indices.begin(), m_indices.end(), ix) !=
                    m_indices.end())
                    continue;

                m_indices.push_back(ix); // remember ordered indices

                // new symmetry equivalent request ...
                request_type new_request;
                new_request.shells[0] = pp;
                new_request.shells[1] = qq;
                new_request.shells[2] = rr;
                new_request.shells[3] = ss;

                new_request.done = request.done;
                new_request.results = buf_pos;

                // ... integral values for which can be simply obtained by
                // transformation of the original values
                buf_pos = transform_values(buf_pos, t, request);

                eq_reqs.push_back(new_request);
            }
        }

        double* SimpleSymmetryPetiteList::transform_values(
            double* buf_pos, unsigned t, const request_type& src)
        {
            const unsigned s0 = m_shell_sizes[src.shells[m_p[0]]];
            const unsigned s1 = m_shell_sizes[src.shells[m_p[1]]];
            const unsigned s2 = m_shell_sizes[src.shells[m_p[2]]];
            const unsigned s3 = m_shell_sizes[src.shells[m_p[3]]];
            double* results = src.results;
            unsigned i[4];
            for (i[0] = 0; i[0] < m_shell_sizes[src.shells[0]]; ++(i[0]))
                for (i[1] = 0; i[1] < m_shell_sizes[src.shells[1]]; ++(i[1]))
                    for (i[2] = 0; i[2] < m_shell_sizes[src.shells[2]];
                         ++(i[2]))
                        for (i[3] = 0; i[3] < m_shell_sizes[src.shells[3]];
                             ++(i[3]))
                            buf_pos[i[m_p[3]] +
                                    s3 * (i[m_p[2]] +
                                          s2 * (i[m_p[1]] + s1 * i[m_p[0]]))] =
                                m_inv_mask2[t][m_first_cntrn_in_shell
                                                   [src.shells[0]] +
                                               i[0]] ^
                                        m_inv_mask2[t][m_first_cntrn_in_shell
                                                           [src.shells[1]] +
                                                       i[1]] ^
                                        m_inv_mask2[t][m_first_cntrn_in_shell
                                                           [src.shells[2]] +
                                                       i[2]] ^
                                        m_inv_mask2[t][m_first_cntrn_in_shell
                                                           [src.shells[3]] +
                                                       i[3]]
                                    ? -(*results++)
                                    : *results++;
            return buf_pos + s0 * s1 * s2 * s3;
        }

        bool SimpleSymmetryPetiteList::is_diagonal(const arma::mat& x)
        {
            for (unsigned i = 0; i < x.n_rows; ++i)
                for (unsigned j = 0; j < x.n_cols; ++j)
                    if (i != j && std::fabs(x(i, j)) > 1e-4)
                        return false;
            return true;
        }
    }
}
