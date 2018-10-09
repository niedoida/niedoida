/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "td_kit/mo_integral.hpp"

#include "misc_kit/dispatcher.hpp"

#include <boost/mpi.hpp>

#include <cmath>

namespace niedoida {
    namespace td {
        MOOneEIntGenerator::MOOneEIntGenerator(
            std::unique_ptr<core::OneElectronIntegralEngine> one_e_ie_engine,
            const arma::mat& mo_coeffs) :
            m_1ei(std::move(one_e_ie_engine)),
            m_mo_coeffs(mo_coeffs)
        {
            arma::mat ao_matrix = m_1ei->kinetic_matrix() +
                                  m_1ei->external_potential_matrix_from_nucl();
            arma::mat tmp = ao_matrix * mo_coeffs;
            arma::mat m_one_e_int_matrix_mo = trans(mo_coeffs) * tmp;
        }

        double MOOneEIntGenerator::value(std::size_t i, std::size_t j) const
        {
            return m_one_e_int_matrix_mo(i, j);
        }

        MOTwoEIntGenerator::MOTwoEIntGenerator(
            std::shared_ptr<const core::System> system,
            std::unique_ptr<core::TwoElectronIntegralEngine> two_e_int_eng,
            const arma::mat& mo_coeffs) :
            m_system(system),
            m_bs_info(system->basis_set),
            m_2ie(std::move(two_e_int_eng)),
            m_mo_coeffs(mo_coeffs),
            m_max_no_requests(m_2ie->preferred_no_requests()),
            m_schwartz(*m_system, *m_2ie),
            m_threshold(1e-10)
        {
            // initialize structures used by update

            m_requests.reserve(m_max_no_requests);

            const std::size_t max_shell_size2 =
                m_bs_info.m_max_shell_size * m_bs_info.m_max_shell_size;
            m_buf.set_size(max_shell_size2 * max_shell_size2,
                           m_max_no_requests);

            core::ShellQuartetIndexGenerator sq_begin(m_bs_info.m_no_shells);
            core::ShellQuartetIndexGenerator sq_end = sq_begin.make_end();

            m_no_shell_quartets = std::distance(sq_begin, sq_end);
        }

        double MOTwoEIntGenerator::value(std::size_t a,
                                         std::size_t b,
                                         std::size_t c,
                                         std::size_t d)
        {
            m_g = 0.0;

            update(a, b, c, d);

            return m_g;
        }

        void MOTwoEIntGenerator::update(std::size_t a,
                                        std::size_t b,
                                        std::size_t c,
                                        std::size_t d)
        {
            {
                std::unique_ptr<misc::Dispatcher> disp(
                    misc::dispatcher(m_no_shell_quartets));

                while (misc::Dispatcher::TaskInfo task_info = disp->get_task())
                    update_task(
                        a, b, c, d, task_info->first, task_info->second);
            }

            reduce();
        }

        void MOTwoEIntGenerator::update_task(std::size_t a,
                                             std::size_t b,
                                             std::size_t c,
                                             std::size_t d,
                                             unsigned long begin,
                                             unsigned long end)
        {
            core::ShellQuartetIndexGenerator sq_begin(m_bs_info.m_no_shells);
            core::ShellQuartetIndexGenerator sq_end = sq_begin.make_end();

            core::ShellQuartetIndexGenerator i(sq_begin);
            unsigned n = 0;
            do {
                // pile up requests
                m_requests.clear();

                while (i != sq_end) {

                    if (n >= begin && n < end) {

                        // Schwartz inequality based prescreening
                        const double max_integral = m_schwartz.max_integral(*i);

                        if (max_integral > m_threshold) {
                            const core::Request request = {
                                *i, false, m_buf.colptr(m_requests.size())};

                            m_requests.push_back(request);
                        }
                    }

                    ++i;
                    ++n;

                    if (m_requests.size() >= m_max_no_requests)
                        break;
                }

                // get the integrals
                m_2ie->calc(m_requests);

                // and use'em
                for (unsigned r = 0; r < m_requests.size(); ++r)
                    partial_update(a, b, c, d, m_requests[r]);

            } while (i != sq_end);
        }

        namespace {

            static double contract(std::size_t a,
                                   std::size_t b,
                                   std::size_t c,
                                   std::size_t d,
                                   std::size_t i,
                                   std::size_t j,
                                   std::size_t k,
                                   std::size_t l,
                                   const arma::mat& mo_coeffs,
                                   double g_ao)
            {
                double m_g = 0;

                m_g += mo_coeffs(i, a) * mo_coeffs(j, b) * mo_coeffs(k, c) *
                       mo_coeffs(l, d) * g_ao;
                m_g += mo_coeffs(j, a) * mo_coeffs(i, b) * mo_coeffs(k, c) *
                       mo_coeffs(l, d) * g_ao;
                m_g += mo_coeffs(i, a) * mo_coeffs(j, b) * mo_coeffs(l, c) *
                       mo_coeffs(k, d) * g_ao;
                m_g += mo_coeffs(j, a) * mo_coeffs(i, b) * mo_coeffs(l, c) *
                       mo_coeffs(k, d) * g_ao;

                m_g += mo_coeffs(k, a) * mo_coeffs(l, b) * mo_coeffs(i, c) *
                       mo_coeffs(j, d) * g_ao;
                m_g += mo_coeffs(k, a) * mo_coeffs(l, b) * mo_coeffs(j, c) *
                       mo_coeffs(i, d) * g_ao;
                m_g += mo_coeffs(l, a) * mo_coeffs(k, b) * mo_coeffs(i, c) *
                       mo_coeffs(j, d) * g_ao;
                m_g += mo_coeffs(l, a) * mo_coeffs(k, b) * mo_coeffs(j, c) *
                       mo_coeffs(i, d) * g_ao;

                return m_g;
            }
        }

        void MOTwoEIntGenerator::partial_update(std::size_t a,
                                                std::size_t b,
                                                std::size_t c,
                                                std::size_t d,
                                                const core::Request& request)
        {
            const unsigned s1 = request.shells[0];
            const unsigned s2 = request.shells[1];
            const unsigned s3 = request.shells[2];
            const unsigned s4 = request.shells[3];

            const unsigned b1 = m_bs_info.m_first_contraction_in_shell[s1];
            const unsigned b2 = m_bs_info.m_first_contraction_in_shell[s2];
            const unsigned b3 = m_bs_info.m_first_contraction_in_shell[s3];
            const unsigned b4 = m_bs_info.m_first_contraction_in_shell[s4];

            const unsigned n1 = m_bs_info.m_shell_sizes[s1];
            const unsigned n2 = m_bs_info.m_shell_sizes[s2];
            const unsigned n3 = m_bs_info.m_shell_sizes[s3];
            const unsigned n4 = m_bs_info.m_shell_sizes[s4];

            const core::ShellQuartetType type =
                core::shell_quartet_type(request.shells[0],
                                         request.shells[1],
                                         request.shells[2],
                                         request.shells[3]);

            switch (type) {
            case core::SHELL_QUARTET_TYPE_ABCD: {
                double* results = request.results;
                for (unsigned i = b1; i < b1 + n1; ++i)
                    for (unsigned j = b2; j < b2 + n2; ++j)
                        for (unsigned k = b3; k < b3 + n3; ++k)
                            for (unsigned l = b4; l < b4 + n4; ++l) {
                                double g_ao = *results++;

                                if (std::abs(g_ao) < m_threshold)
                                    continue;

                                m_g += contract(
                                    a, b, c, d, i, j, k, l, m_mo_coeffs, g_ao);
                            }
                break;
            }
            case core::SHELL_QUARTET_TYPE_AACD: {
                for (unsigned i = b1; i < b1 + n1; ++i)
                    for (unsigned j = std::max(i, b2); j < b2 + n2; ++j)
                        for (unsigned k = b3; k < b3 + n3; ++k)
                            for (unsigned l = b4; l < b4 + n4; ++l) {
                                double g_ao =
                                    *(request.results +
                                      ((((i - b1) * n2 + (j - b2)) * n3 +
                                        (k - b3)) *
                                       n4) +
                                      (l - b4));

                                if (std::abs(g_ao) < m_threshold)
                                    continue;

                                if (i == j)
                                    g_ao *= 0.5;

                                m_g += contract(
                                    a, b, c, d, i, j, k, l, m_mo_coeffs, g_ao);
                            }
                break;
            }
            case core::SHELL_QUARTET_TYPE_ABCC: {
                for (unsigned i = b1; i < b1 + n1; ++i)
                    for (unsigned j = b2; j < b2 + n2; ++j)
                        for (unsigned k = b3; k < b3 + n3; ++k)
                            for (unsigned l = std::max(k, b4); l < b4 + n4;
                                 ++l) {
                                double g_ao =
                                    *(request.results +
                                      ((((i - b1) * n2 + (j - b2)) * n3 +
                                        (k - b3)) *
                                       n4) +
                                      (l - b4));

                                if (std::abs(g_ao) < m_threshold)
                                    continue;

                                if (k == l)
                                    g_ao *= 0.5;

                                m_g += contract(
                                    a, b, c, d, i, j, k, l, m_mo_coeffs, g_ao);
                            }
                break;
            }
            default: {
                for (unsigned i = b1; i < b1 + n1; ++i)
                    for (unsigned j = std::max(i, b2); j < b2 + n2; ++j) {
                        for (unsigned k = std::max(i, b3); k < b3 + n3; ++k) {
                            const unsigned l0 =
                                k == i ? std::max(j, b4) : std::max(k, b4);
                            for (unsigned l = l0; l < b4 + n4; ++l) {
                                double g_ao =
                                    *(request.results +
                                      ((((i - b1) * n2 + (j - b2)) * n3 +
                                        (k - b3)) *
                                       n4) +
                                      (l - b4));

                                if (std::abs(g_ao) < m_threshold)
                                    continue;

                                if (i == j)
                                    g_ao *= 0.5;
                                if (k == l)
                                    g_ao *= 0.5;
                                if (i == k && j == l)
                                    g_ao *= 0.5;

                                m_g += contract(
                                    a, b, c, d, i, j, k, l, m_mo_coeffs, g_ao);
                            }
                        }
                    }
                break;
            }
            }
        }

        void MOTwoEIntGenerator::reduce()
        {
            boost::mpi::communicator world;
            const double partial_g = m_g;

            boost::mpi::all_reduce(world, partial_g, m_g, std::plus<double>());
        }
    }
}
