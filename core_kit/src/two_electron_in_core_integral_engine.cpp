/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/integral_engine.hpp"
#include "core_kit/shell_quartet_index_generator.hpp"

namespace niedoida {

    namespace core {

        namespace {
            inline unsigned _t(unsigned n) { return (n * (n + 1)) / 2; }

            inline unsigned pair_index(unsigned n, unsigned i, unsigned j)
            {
                assert(j >= i);
                assert(j < n);

                return (i * (2 * n - i - 1)) / 2 + j;
            }

            inline unsigned quartet_index(
                unsigned n, unsigned i, unsigned j, unsigned k, unsigned l)
            {
                assert(j >= i);
                assert(l >= k);
                assert(j < n);
                assert(l < n);

                const unsigned s = pair_index(n, i, j);
                return s * (_t(n) - 1) + pair_index(n, k, l) -
                       ((s > 1) ? _t(s - 1) : 0);
            }
        }

        TwoElectronInCoreIntegralEngine::TwoElectronInCoreIntegralEngine(
            const BasisSet& basis_set,
            std::unique_ptr<TwoElectronIntegralEngine> ie,
            double treshold)
        {
            std::vector<const Shell*> shells;
            for (auto abs : basis_set.atomic_basis_sets())
                for (auto shell : abs->valence_shells())
                    shells.push_back(shell);

            for (const Shell* s : shells)
                m_shell_sizes.push_back(s->real_size());

            m_no_shells = m_shell_sizes.size();

            const std::size_t max_shell_size =
                *std::max_element(m_shell_sizes.begin(), m_shell_sizes.end());

            const std::size_t max_shell_size2 = max_shell_size * max_shell_size;

            m_swap_buf.reset(new double[max_shell_size2 * max_shell_size2]);

            std::vector<std::size_t> index(quartet_index(m_no_shells,
                                                         m_no_shells - 1,
                                                         m_no_shells - 1,
                                                         m_no_shells - 1,
                                                         m_no_shells - 1) +
                                           1);

            std::vector<bool> is_significant(quartet_index(m_no_shells,
                                                           m_no_shells - 1,
                                                           m_no_shells - 1,
                                                           m_no_shells - 1,
                                                           m_no_shells - 1) +
                                             1);

            const ShellQuartetIndexGenerator sq_begin(m_no_shells);
            const ShellQuartetIndexGenerator sq_end = sq_begin.make_end();

            std::size_t offset = 0;
            for (ShellQuartetIndexGenerator i = sq_begin; i != sq_end; ++i) {
                const unsigned s1 = (*i)[0];
                const unsigned s2 = (*i)[1];
                const unsigned s3 = (*i)[2];
                const unsigned s4 = (*i)[3];

                std::size_t n = quartet_index(m_no_shells, s1, s2, s3, s4);
                index[n] = offset;
                is_significant[n] = true;

                offset += m_shell_sizes[s1] * m_shell_sizes[s2] *
                          m_shell_sizes[s3] * m_shell_sizes[s4];
            }

            m_pointers.resize(quartet_index(m_no_shells,
                                            m_no_shells - 1,
                                            m_no_shells - 1,
                                            m_no_shells - 1,
                                            m_no_shells - 1) +
                              1);

            m_ints.resize(offset);

            const std::size_t max_no_requests = ie->preferred_no_requests();

            std::vector<Request> requests;
            requests.reserve(max_no_requests);

            ShellQuartetIndexGenerator i = sq_begin;

            do {
                // pile up requests
                requests.clear();
                unsigned r = 0;

                while (i != sq_end) {

                    const unsigned s1 = (*i)[0];
                    const unsigned s2 = (*i)[1];
                    const unsigned s3 = (*i)[2];
                    const unsigned s4 = (*i)[3];

                    const std::size_t n =
                        quartet_index(m_no_shells, s1, s2, s3, s4);
                    double* const p = &m_ints[index[n]];
                    m_pointers[n] = p;

                    const Request request = {*i, false, p};

                    requests.push_back(request);

                    ++i;

                    if (++r >= max_no_requests)
                        break;
                }

                // get the integrals
                ie->calc(requests);

            } while (i != sq_end);
        }

        std::size_t
        TwoElectronInCoreIntegralEngine::preferred_no_requests() const
        {
            return 32;
        }

        void TwoElectronInCoreIntegralEngine::calc(
            std::vector<Request>& requests) const
        {
            const std::size_t no_requests = requests.size();

            for (std::size_t ri = 0; ri < no_requests; ++ri) {
                Request& r = requests[ri];

                if (!r.done) {

                    bool swap = false;
                    double* const results = r.results;

                    if (r.shells[0] > r.shells[2] ||
                        (r.shells[0] == r.shells[2] &&
                         r.shells[1] > r.shells[3])) {

                        swap = true;

                        // swap indices to the canonical order
                        std::swap(r.shells[0], r.shells[2]);
                        std::swap(r.shells[1], r.shells[3]);

                        // and redirect the results to temporary buffer
                        r.results = m_swap_buf.get();
                    }

                    do_calc(r);

                    if (swap) {
                        // revert indices back to the original order
                        std::swap(r.shells[0], r.shells[2]);
                        std::swap(r.shells[1], r.shells[3]);

                        // copy results from the temporary buffer, reordering
                        // them as necessary
                        const std::size_t ni = m_shell_sizes[r.shells[0]];
                        const std::size_t nj = m_shell_sizes[r.shells[1]];
                        const std::size_t nk = m_shell_sizes[r.shells[2]];
                        const std::size_t nl = m_shell_sizes[r.shells[3]];

                        double* p = results;

                        for (std::size_t i = 0; i < ni; ++i)
                            for (std::size_t j = 0; j < nj; ++j)
                                for (std::size_t k = 0; k < nk; ++k)
                                    for (std::size_t l = 0; l < nl; ++l)
                                        *p++ =
                                            m_swap_buf[((k * nl + l) * ni + i) *
                                                           nj +
                                                       j];

                        // set the pointer to integrals back to the original
                        // value
                        r.results = results;
                    }

                    r.done = true;
                }
            }
        }

        void TwoElectronInCoreIntegralEngine::do_calc(Request& request) const
        {
            const std::size_t s1 = request.shells[0];
            const std::size_t s2 = request.shells[1];
            const std::size_t s3 = request.shells[2];
            const std::size_t s4 = request.shells[3];

            const double* const p =
                m_pointers[quartet_index(m_no_shells, s1, s2, s3, s4)];
            const std::size_t n = m_shell_sizes[s1] * m_shell_sizes[s2] *
                                  m_shell_sizes[s3] * m_shell_sizes[s4];

            if (p != 0)
                std::memcpy(request.results, p, n * sizeof(double));
            else
                std::memset(request.results, 0, n * sizeof(double));
        }
    }
}
