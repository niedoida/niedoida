/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "property_kit/hirshfeld_analysis.hpp"

#include "grid_kit/grid_integral_implementation.hpp"
#include "misc_kit/dispatcher.hpp"

#include <limits>

namespace niedoida {
    namespace property {
        HirshfeldAnalysis::HirshfeldAnalysis(
            std::shared_ptr<const core::System> system,
            const arma::mat& P,
            std::shared_ptr<const core::Promolecule> promolecule,
            std::unique_ptr<core::Grid> grid,
            std::unique_ptr<core::AOValueEngine> ao_value_engine) :
            GridIntegralImplementation(system, std::move(ao_value_engine)),
            m_atomic_populations(arma::zeros<arma::vec>(system->atoms.size())),
            m_P(P),
            m_P0(promolecule->average_density_matrix(core::SPIN_ALPHA) +
                 promolecule->average_density_matrix(core::SPIN_BETA)),
            m_overlap_buf(new double[(m_bs_info.m_no_contractions *
                                      (m_bs_info.m_no_contractions + 1)) /
                                     2])
        {
            m_PA.reserve(m_bs_info.m_no_atoms);

            std::size_t n0 = 0;
            for (std::size_t a = 0; a < m_bs_info.m_no_atoms; ++a) {

                const std::size_t n =
                    system->basis_set.atomic_basis_sets()[a]->real_size();

                arma::mat P(m_bs_info.m_no_contractions,
                            m_bs_info.m_no_contractions,
                            arma::fill::zeros);

                P.submat(arma::span(n0, n0 + n - 1),
                         arma::span(n0, n0 + n - 1)) =
                    m_P0.submat(arma::span(n0, n0 + n - 1),
                                arma::span(n0, n0 + n - 1));

                n0 += n;

                m_PA.push_back(P);
            }

            std::unique_ptr<misc::Dispatcher> d(
                misc::dispatcher(grid->no_blocks()));

            while (const misc::Dispatcher::TaskInfo task_info = d->get_task()) {

                for (std::size_t b = task_info->first; b < task_info->second;
                     ++b) {
                    std::shared_ptr<const core::Grid::Block> block =
                        grid->get_block(b);

                    // FIXME:
                    calc_block(*block, *block_ao_data(*block, 1e-20, false));
                }
            }

            reduce();
        }

        void HirshfeldAnalysis::calc_block(
            const core::Grid::Block& block,
            const grid::GridIntegralImplementation::BlockAOData& data)
        {
            // in each point of the block...
            for (std::size_t p = 0; p < block.size; ++p) {

                // calculate overlap
                const std::size_t n = data.point_ao_data[p].no_contractions;
                /*const*/ double* const NIEDOIDA_RESTRICT v =
                    data.point_ao_data[p].values;
                double* NIEDOIDA_RESTRICT s = m_overlap_buf.get();

                for (std::size_t i = 0; i < n; ++i) {
                    const arma::vec vv(v, i + 1, false, true);
                    arma::vec ss(s, i + 1, false, true);
                    ss = *(v + i) * vv;

                    s += i + 1;
                }

                s = m_overlap_buf.get();

                // and all the densities we need
                const double rho =
                    grid::density(m_P, n, s, data.point_ao_data[p].indices);
                const double rho0 =
                    grid::density(m_P0, n, s, data.point_ao_data[p].indices);

                arma::vec rhoA(m_bs_info.m_no_atoms);

                for (std::size_t a = 0; a < m_bs_info.m_no_atoms; ++a)
                    rhoA(a) = grid::density(
                        m_PA[a], n, s, data.point_ao_data[p].indices);

                // and finally update atomic populations
                if (rho0 >= std::numeric_limits<double>::epsilon())
                    m_atomic_populations +=
                        block.weights[p] * rho * rhoA / rho0;
            }
        }

        void HirshfeldAnalysis::reduce()
        {
            boost::mpi::communicator world;

            const std::size_t n = m_atomic_populations.size();
            const arma::vec partial = m_atomic_populations;

            boost::mpi::all_reduce(world,
                                   partial.memptr(),
                                   n,
                                   m_atomic_populations.memptr(),
                                   std::plus<double>());
        }
    }
}
