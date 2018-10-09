/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "grid_kit/atomic_grid.hpp"

#include "grid_kit/grid_utils.hpp"
#include "io_kit/log.hpp"
#include "misc_kit/threadpool.hpp"
#include "symmetry_kit/symmetry_utils.hpp"

#include <boost/multi_array.hpp>

#include <set>

namespace {
    using namespace niedoida;

    constexpr unsigned GRID_SIZE = 1024;

    inline double diff_norm(const double* NIEDOIDA_RESTRICT const p,
                            const double* NIEDOIDA_RESTRICT const q)
    {
        const double dx = p[0] - q[0];
        const double dy = p[1] - q[1];
        const double dz = p[2] - q[2];

        return dx * dx + dy * dy + dz * dz;
    }

    void trim(std::shared_ptr<core::Grid::Block>& block, double threshold)
    {
        std::size_t diet_block_size = 0;
        for (std::size_t j = 0; j < block->size; ++j)
            if (block->weights(j) > threshold &&
                block->significant_shells[j].size() != 0)
                diet_block_size += 1;

        if (diet_block_size == 0) {
            block = std::shared_ptr<core::Grid::Block>();
            return;
        }

        std::shared_ptr<core::Grid::Block> diet_block(
            new core::Grid::Block(diet_block_size));
        std::size_t k = 0;
        for (std::size_t j = 0; j < block->size; ++j) {
            if (block->weights[j] > threshold &&
                block->significant_shells[j].size() != 0) {
                diet_block->coords.col(k) = block->coords.col(j);
                diet_block->weights(k) = block->weights(j);
                diet_block->significant_shells[k] =
                    block->significant_shells[j];

                k += 1;
            }
        }

        block = diet_block;
    }

    void rebatch(const std::vector<std::shared_ptr<core::Grid::Block>>& ag,
                 std::size_t chunk_size,
                 std::vector<std::shared_ptr<core::Grid::Block>>& oag)
    {
        oag.clear();

        const std::size_t no_blocks = ag.size();

        std::vector<std::size_t> no_points(no_blocks);

        std::size_t max_no_points = 0;
        for (std::size_t b = 0; b < no_blocks; ++b) {
            const std::size_t n = ag[b]->size;
            no_points[b] = n;
            if (n > max_no_points)
                max_no_points = n;
        }

        boost::multi_array<bool, 2> taken(
            boost::extents[no_blocks][max_no_points]);

        for (std::size_t b = 0; b < no_blocks; ++b) {
            bool* taken_b = &(taken[b][0]);
            const std::size_t no_points_b = no_points[b];
            for (std::size_t p = 0; p < no_points_b; ++p) {

                if (taken_b[p])
                    continue;

                taken_b[p] = true;

                std::shared_ptr<core::Grid::Block> block(
                    new core::Grid::Block(chunk_size));

                block->coords.col(0) = ag[b]->coords.col(p);
                block->weights[0] = ag[b]->weights[p];
                block->significant_shells[0].swap(ag[b]->significant_shells[p]);

                const double* const q = &(ag[b]->coords(0, p));

                for (std::size_t i = 1; i < chunk_size; ++i) {

                    double min_d = std::numeric_limits<double>::max();

                    std::size_t min_b = 0;
                    std::size_t min_p = 0;

                    std::size_t tried = 0;

                    for (std::size_t bb = b; bb < no_blocks; ++bb) {
                        const std::size_t no_points_bb = no_points[bb];
                        bool* taken_bb = &(taken[bb][0]);
                        for (std::size_t pp = 0; pp < no_points_bb; ++pp) {
                            if (taken_bb[pp])
                                continue;

                            tried += 1;
                            if (tried > 512)
                                goto done;

                            const double* const r = &(ag[bb]->coords(0, pp));

                            const double d = diff_norm(q, r);

                            if (d < min_d) {
                                min_d = d;
                                min_b = bb;
                                min_p = pp;
                            }
                        }
                    }

                done:

                    if (min_b == 0 && min_p == 0) {
                        trim(block, std::numeric_limits<double>::epsilon());
                        break;
                    } else {
                        taken[min_b][min_p] = true;

                        block->coords.col(i) = ag[min_b]->coords.col(min_p);
                        block->weights[i] = ag[min_b]->weights[min_p];
                        block->significant_shells[i].swap(
                            ag[min_b]->significant_shells[min_p]);
                    }
                }

                if (!!block) {
                    std::set<std::size_t> t;
                    for (std::size_t i = 0; i < block->size; ++i)
                        t.insert(block->significant_shells[i].begin(),
                                 block->significant_shells[i].end());
                    std::vector<std::size_t>& v =
                        block->block_significant_shells;
                    v.reserve(t.size());
                    std::copy(t.begin(), t.end(), std::back_inserter(v));
                    oag.push_back(block);
                }
            }
        }
    }
}

namespace niedoida {
    namespace grid {

        std::size_t AtomicGrid::no_blocks() const
        {
            if (!_blocks.get())
                create_grid();

            return _blocks->size();
        }

        std::shared_ptr<const core::Grid::Block>
        AtomicGrid::get_block(std::size_t block) const
        {
            if (!_blocks.get())
                create_grid();

            return (*_blocks)[block];
        }

        void AtomicGrid::create_grid() const
        {
            io::Log::Section section("molecular grid construction");

            _blocks.reset(new std::vector<std::shared_ptr<Block>>());

            const std::size_t n = _system->atoms.size();

            for (std::size_t a = 0; a < n; ++a) {
                io::Log::Section section("atomic grid construction");
                io::Log::instance().write(io::Logger::VERBOSE, "atom", a);

                std::vector<std::shared_ptr<Block>> atomic_grid =
                    make_atomic_grid(a, *_pf);

                {
                    io::Log::Section section("partitioning");

                    for (std::size_t b = 0; b < atomic_grid.size(); ++b) {
                        Block& block = *atomic_grid[b];
                        const std::size_t bs = block.size;
                        double* coords = block.coords.memptr();
                        double* weights = block.weights.memptr();

                        misc::GlobalThreadPool::instance().schedule(
                            std::bind(&PartitionFunction::operator(),
                                      _pf.get(),
                                      a,
                                      bs,
                                      coords,
                                      weights));
                    }

                    misc::GlobalThreadPool::instance().wait();
                }

                {
                    io::Log::Section section("trimming");

                    std::vector<std::shared_ptr<Block>> trimmed_atomic_grid;

                    for (std::size_t b = 0; b < atomic_grid.size(); ++b)
                        misc::GlobalThreadPool::instance().schedule(
                            std::bind(&trim,
                                      atomic_grid[b],
                                      std::numeric_limits<double>::epsilon()));

                    misc::GlobalThreadPool::instance().wait();

                    trimmed_atomic_grid.reserve(atomic_grid.size());

                    for (std::size_t b = 0; b < atomic_grid.size(); ++b)
                        if (atomic_grid[b])
                            trimmed_atomic_grid.push_back(atomic_grid[b]);

                    atomic_grid.swap(trimmed_atomic_grid);
                }

                std::vector<std::shared_ptr<Block>> rebatched_atomic_grid;

                {
                    io::Log::Section section("rebatching");

                    const std::size_t subgrid_size = 10;
                    const std::size_t no_subgrids =
                        atomic_grid.size() / subgrid_size;

                    std::vector<std::vector<std::shared_ptr<Block>>>
                        atomic_subgrids(no_subgrids);

                    for (std::size_t i = 0; i < no_subgrids; ++i) {
                        atomic_subgrids[i] =
                            i != no_subgrids - 1
                                ? std::vector<std::shared_ptr<Block>>(
                                      atomic_grid.begin() + i * subgrid_size,
                                      atomic_grid.begin() +
                                          (i + 1) * subgrid_size)
                                : std::vector<std::shared_ptr<Block>>(
                                      atomic_grid.begin() + i * subgrid_size,
                                      atomic_grid.end());
                    }

                    atomic_grid.clear();

                    std::vector<std::vector<std::shared_ptr<Block>>>
                        rebatched_atomic_subgrids(no_subgrids);
                    for (std::size_t i = 0; i < atomic_subgrids.size(); ++i) {
                        misc::ThreadPool::Task t =
                            std::bind(&rebatch,
                                      std::cref(atomic_subgrids[i]),
                                      GRID_SIZE,
                                      std::ref(rebatched_atomic_subgrids[i]));
                        misc::GlobalThreadPool::instance().schedule(t);
                    }

                    misc::GlobalThreadPool::instance().wait();

                    for (std::size_t i = 0; i < no_subgrids; ++i)
                        rebatched_atomic_grid.insert(
                            rebatched_atomic_grid.end(),
                            rebatched_atomic_subgrids[i].begin(),
                            rebatched_atomic_subgrids[i].end());
                }

                const std::size_t m = rebatched_atomic_grid.size();

                std::size_t no_blocks = 0;
                std::size_t no_points = 0;

                double no_block_shells = 0;
                double no_point_shells = 0;

                for (std::size_t b = 0; b < m; ++b) {
                    std::shared_ptr<Block> block = rebatched_atomic_grid[b];
                    _blocks->push_back(block);

                    no_blocks += 1;
                    no_points += block->size;
                    no_block_shells += block->block_significant_shells.size();

                    for (std::size_t p = 0; p < block->size; ++p)
                        no_point_shells += block->significant_shells[p].size();
                }

                io::Log::instance().write(
                    io::Logger::VERBOSE, "no_points", no_points);
                io::Log::instance().write(
                    io::Logger::VERBOSE, "no_blocks", no_blocks);
                io::Log::instance().write(io::Logger::VERBOSE,
                                          "average_shells_per_point",
                                          no_point_shells / no_points);
                io::Log::instance().write(io::Logger::VERBOSE,
                                          "average_shells_per_block",
                                          no_block_shells / no_blocks);
            }

            double nss = 0;
            double nssb = 0;
            std::size_t np = 0;

            for (std::size_t b = 0; b < _blocks->size(); ++b) {
                const Block& block = *(*_blocks)[b];
                np += block.size;
                nssb += block.block_significant_shells.size();
                for (std::size_t p = 0; p < block.size; ++p)
                    nss += block.significant_shells[p].size();
            }

            io::Log::instance().write(io::Logger::TERSE, "no_points", np);
            io::Log::instance().write(
                io::Logger::TERSE, "no_blocks", _blocks->size());
            io::Log::instance().write(
                io::Logger::TERSE, "average_shells_per_point", nss / np);
            io::Log::instance().write(io::Logger::TERSE,
                                      "average_shells_per_block",
                                      nssb / _blocks->size());
        }
    }
}
