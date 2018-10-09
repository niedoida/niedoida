/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "property_kit/voronoi_analysis.hpp"

#include "misc_kit/dispatcher.hpp"

namespace niedoida {
    namespace property {
        VoronoiAnalysis::VoronoiAnalysis(
            std::shared_ptr<const core::System> system,
            const arma::mat& P,
            std::unique_ptr<core::Grid> grid,
            std::unique_ptr<core::AOValueEngine> ao_value_engine) :
            GridIntegralImplementation(system, std::move(ao_value_engine)),
            m_atomic_populations(arma::zeros<arma::vec>(system->atoms.size())),
            m_P(P),
            m_overlap_buf(new double[(m_bs_info.m_no_contractions *
                                      (m_bs_info.m_no_contractions + 1)) /
                                     2])
        {
            for (std::size_t a = 0; a < m_bs_info.m_no_atoms; ++a) {
                arma::vec r(3);
                r(0) = system->atoms[a]->coords[0];
                r(1) = system->atoms[a]->coords[1];
                r(2) = system->atoms[a]->coords[2];

                m_atomic_coords.push_back(r);
            }

            m_ao_values_buf.set_size(m_bs_info.m_no_shells,
                                     m_bs_info.m_max_shell_size);

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
        }

        void VoronoiAnalysis::calc_block(
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
                    // ola::scal(i + 1, *(v + i), v, s);

                    const arma::vec vv(v, i + 1, false, true);
                    arma::vec ss(s, i + 1, false, true);
                    ss = *(v + i) * vv;

                    s += i + 1;
                }

                s = m_overlap_buf.get();

                // and density
                // FIXME: !!!
                const double rho =
                    0; // density(m_P, n, s, data.point_ao_data[p].indices);

                // find the closest atom
                arma::vec r(3);
                r(0) = block.coords(p, 0);
                r(1) = block.coords(p, 1);
                r(2) = block.coords(p, 2);

                std::vector<double> d;
                for (std::size_t a = 0; a < m_bs_info.m_no_atoms; ++a)
                    d.push_back(arma::norm(m_atomic_coords[a] - r, 2));

                const std::size_t closest_atom = std::distance(
                    d.begin(), std::min_element(d.begin(), d.end()));

                // and assign the density to it
                m_atomic_populations(closest_atom) += block.weights[p] * rho;
            }
        }

        void VoronoiAnalysis::reduce()
        {
#ifdef WITH_MPI
            const std::size_t n = m_atomic_populations.size();
            const arma::vec partial = m_atomic_populations;

            MPI::COMM_WORLD.Allreduce(partial.memptr(),
                                      m_atomic_populations.memptr(),
                                      n,
                                      MPI::DOUBLE,
                                      MPI::SUM);
#endif
        }
    }
}
