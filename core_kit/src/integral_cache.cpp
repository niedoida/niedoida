/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/integral_cache.hpp"

#include "io_kit/io_kit.hpp"

namespace niedoida {

    namespace core {

        IntegralCache::IntegralCache(std::shared_ptr<const System> system,
                                     std::size_t max_size) :
            _bs_info(system->basis_set),
            _max_no_ints(max_size / sizeof(double)),
            _no_ints(0),
            _data(new double[max_size / sizeof(double)]),
            _no_hits(0),
            _no_misses(0)
        {
        }

        IntegralCache::~IntegralCache()
        {
            unsigned long total_no_hits, total_no_misses;

            boost::mpi::all_reduce(m_comm,
                                   &_no_hits,
                                   1,
                                   &total_no_hits,
                                   std::plus<unsigned long>());

            boost::mpi::all_reduce(m_comm,
                                   &_no_misses,
                                   1,
                                   &total_no_misses,
                                   std::plus<unsigned long>());

            const double cache_hit_ratio =
                double(total_no_hits) / (total_no_hits + total_no_misses);

            niedoida::io::Log::instance().write(
                niedoida::io::Logger::NORMAL,
                "integral cache searches",
                double(total_no_hits + total_no_misses));
            niedoida::io::Log::instance().write(niedoida::io::Logger::NORMAL,
                                                "integral cache hit ratio",
                                                cache_hit_ratio);

            delete[] _data;
        }

        bool IntegralCache::store(Request& request)
        {
            assert(request.done);

            Map::const_iterator i = _idx_data_map.find(request.shells);

            if (i != _idx_data_map.end())
                return false;

            const std::size_t no_ints =
                _bs_info.m_shell_sizes[request.shells[0]] *
                _bs_info.m_shell_sizes[request.shells[1]] *
                _bs_info.m_shell_sizes[request.shells[2]] *
                _bs_info.m_shell_sizes[request.shells[3]];

            const std::size_t s = no_ints * sizeof(double);

            if (_max_no_ints >= _no_ints + no_ints) {
                double* const p = _data + _no_ints;
                _idx_data_map.insert(std::make_pair(request.shells, p));
                std::memcpy(p, request.results, s);
                _no_ints += no_ints;

                return true;
            }

            return false;
        }

        bool IntegralCache::retrieve(Request& request) const
        {
            Map::const_iterator i = _idx_data_map.find(request.shells);

            if (i == _idx_data_map.end()) {
                _no_misses += 1;
                return false;
            }

            _no_hits += 1;

            const std::size_t no_ints =
                _bs_info.m_shell_sizes[request.shells[0]] *
                _bs_info.m_shell_sizes[request.shells[1]] *
                _bs_info.m_shell_sizes[request.shells[2]] *
                _bs_info.m_shell_sizes[request.shells[3]];

            const std::size_t s = no_ints * sizeof(double);

            std::memcpy(request.results, (*i).second, s);

            request.done = true;

            return true;
        }

        ACDIntegralCache::ACDIntegralCache(std::shared_ptr<const System> system,
                                           std::size_t max_size) :
            _bs_info(system->basis_set),
            _aux_bs_info(*system->aux_basis_set),
            _max_no_ints(max_size / sizeof(double)),
            _no_ints(0),
            _data(new double[max_size / sizeof(double)]),
            _no_hits(0),
            _no_misses(0)
        {
        }

        ACDIntegralCache::~ACDIntegralCache()
        {
            unsigned long total_no_hits, total_no_misses;

            boost::mpi::all_reduce(m_comm,
                                   &_no_hits,
                                   1,
                                   &total_no_hits,
                                   std::plus<unsigned long>());

            boost::mpi::all_reduce(m_comm,
                                   &_no_misses,
                                   1,
                                   &total_no_misses,
                                   std::plus<unsigned long>());

            const double cache_hit_ratio =
                double(total_no_hits) / (total_no_hits + total_no_misses);

            niedoida::io::Log::instance().write(
                niedoida::io::Logger::NORMAL,
                "integral cache searches",
                double(total_no_hits + total_no_misses));
            niedoida::io::Log::instance().write(niedoida::io::Logger::NORMAL,
                                                "integral cache hit ratio",
                                                cache_hit_ratio);

            delete[] _data;
        }

        bool ACDIntegralCache::store(ACDRequest& request)
        {
            assert(request.done);

            Map::const_iterator i = _idx_data_map.find(request.shells);

            if (i != _idx_data_map.end())
                return false;

            const std::size_t no_ints =
                _aux_bs_info.m_shell_sizes[request.shells[0]] *
                _bs_info.m_shell_sizes[request.shells[1]] *
                _bs_info.m_shell_sizes[request.shells[2]];

            const std::size_t s = no_ints * sizeof(double);

            if (_max_no_ints >= _no_ints + no_ints) {
                double* const p = _data + _no_ints;
                _idx_data_map.insert(std::make_pair(request.shells, p));
                std::memcpy(p, request.results, s);
                _no_ints += no_ints;

                return true;
            }

            return false;
        }

        bool ACDIntegralCache::retrieve(ACDRequest& request) const
        {
            Map::const_iterator i = _idx_data_map.find(request.shells);

            if (i == _idx_data_map.end()) {
                _no_misses += 1;
                return false;
            }

            _no_hits += 1;

            const std::size_t no_ints =
                _aux_bs_info.m_shell_sizes[request.shells[0]] *
                _bs_info.m_shell_sizes[request.shells[1]] *
                _bs_info.m_shell_sizes[request.shells[2]];

            const std::size_t s = no_ints * sizeof(double);

            std::memcpy(request.results, (*i).second, s);

            request.done = true;

            return true;
        }
    }
}
