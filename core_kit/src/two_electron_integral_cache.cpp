/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/integral_engine.hpp"

#include <cstring>

#include <boost/lambda/bind.hpp>

#include "io_kit/io_kit.hpp"

namespace niedoida {

    namespace core {

        TwoElectronIntegralCache::TwoElectronIntegralCache(
            const BasisSet& basis_set,
            std::unique_ptr<TwoElectronIntegralEngine> ie,
            std::size_t max_size) :
            m_ie(std::move(ie)),
            m_max_size(max_size),
            m_size(0),
            m_no_hits(0),
            m_no_misses(0)
        {
            // cache shell sizes

            std::vector<Shell*> shells;
            for (auto abs : basis_set.atomic_basis_sets())
                for (auto shell : abs->valence_shells())
                    shells.push_back(shell);

            for (const Shell* s : shells)
                m_shell_sizes.push_back(s->real_size());

            if (m_max_size < 256)
                m_max_size = 256;
        }

        TwoElectronIntegralCache::~TwoElectronIntegralCache()
        {
            niedoida::io::Log::Section section("2e integral cache statistics");

            double total = m_no_hits + m_no_misses;
            double ratio = double(m_no_hits) / total;

            niedoida::io::Log::instance().write(
                niedoida::io::Logger::NORMAL, "no_calls", total);
            niedoida::io::Log::instance().write(
                niedoida::io::Logger::NORMAL, "hit_ratio", ratio);
        }

        std::size_t TwoElectronIntegralCache::preferred_no_requests() const
        {
            return m_ie->preferred_no_requests();
        }

#if 0
        void TwoElectronIntegralCache::calc(
            std::vector<Request>& requests
            ) const
        {
            unsigned long no_hits = 0;
            unsigned long no_misses = 0;

            // handle all requests for which we have cached data
            for (std::vector<Request>::iterator r = requests.begin(); r != requests.end(); ++r)
                if (!(*r).done) {
                    IndexIntsMap::const_iterator i = 
                        m_index_ints_map.find(boost::make_tuple((*r).shells[0], 
                                                                (*r).shells[1], 
                                                                (*r).shells[2], 
                                                                (*r).shells[3]));

                    if (i != m_index_ints_map.end()) {
                        const std::vector<double>& data = (*i).second;
                        std::memcpy((*r).results, &(*data.begin()), 
                                    data.size() * sizeof (double));
                        (*r).done = true;
                        no_hits += 1;
                    }
                }

            no_misses = requests.size() - no_hits;

            m_no_hits += no_hits;
            m_no_misses += no_misses;

            // remember which integrals are already have cached
            std::vector<bool> cached;
            cached.reserve(requests.size());

            for(const Request* r : requests) 
                cached.push_back(r->done());

            // pass the rest further down
            m_ie->calc(requests);

            // check if there's anything new worth putting to cache
            for (std::size_t i = 0; i < requests.size(); ++i) {
                if (cached[i])
                    continue;

                const Request& request = requests[i];

                const std::size_t no_ints = 
                    m_shell_sizes[request.shells[0]] *  
                    m_shell_sizes[request.shells[1]] *  
                    m_shell_sizes[request.shells[2]] *  
                    m_shell_sizes[request.shells[3]];

                double (*dabs)(double) = &std::abs;

                const double max_int =
                    *std::max_element(request.results, request.results + no_ints,
                                      boost::lambda::bind(dabs, boost::lambda::_1) < boost::lambda::bind(dabs, boost::lambda::_2));

                // we cache everything if there's free space
                if (m_max_size >= m_size + no_ints * sizeof (double)) {

                    const ShellQuartetIndex index = 
                        boost::make_tuple(request.shells[0],
                                          request.shells[1],
                                          request.shells[2],
                                          request.shells[3]);

                    std::vector<double>& data = m_index_ints_map[index];
                    data.resize(no_ints);
                    std::memcpy(&(*data.begin()), 
                                request.results, 
                                no_ints * sizeof (double));

                    Entry entry = {
                        index,
                        no_ints,
                        max_int
                    };

                    m_smallest.push(entry);

                    m_size += no_ints * sizeof (double);

                    // if there's no free space, check if we could replace an entry
                } else if (!m_smallest.empty() && 
                           std::abs(max_int) > std::abs(m_smallest.top().max_int)) {
            
                    const Entry& top_entry = m_smallest.top();

                    // check if replacing is allowed free-space-wise
                    if (m_size + no_ints * sizeof (double) < m_max_size + top_entry.no_ints * sizeof (double)) {
                        const int delta = (no_ints - top_entry.no_ints) * sizeof (double);
                        m_index_ints_map.erase(top_entry.index);
                        m_smallest.pop();

                        const ShellQuartetIndex index = 
                            boost::make_tuple(request.shells[0],
                                              request.shells[1],
                                              request.shells[2],
                                              request.shells[3]);

                        std::vector<double>& data = m_index_ints_map[index];
                        data.resize(no_ints);
                        std::memcpy(&(*data.begin()), 
                                    request.results, 
                                    no_ints * sizeof (double));

                        Entry entry = {
                            index,
                            no_ints,
                            max_int
                        };

                        m_smallest.push(entry);

                        m_size += delta;
                
                    } else { // try replacing more than one entry
                        std::vector<Entry> top_entries;

                        const std::size_t free0 = m_max_size - m_size;
                        std::size_t free = free0;

                        do {
                            top_entries.push_back(m_smallest.top());
                            free += m_smallest.top().no_ints * sizeof (double);
                            m_smallest.pop();
                        } while (!m_smallest.empty() && free >= no_ints * sizeof (double) && top_entries.back().max_int < max_int);


                        if (free >= no_ints * sizeof (double)) { // commit
                            for (std::size_t i = 0; i < top_entries.size(); ++i)
                                m_index_ints_map.erase(top_entries[i].index);

                            const ShellQuartetIndex index = 
                                boost::make_tuple(request.shells[0],
                                                  request.shells[1],
                                                  request.shells[2],
                                                  request.shells[3]);

                            std::vector<double>& data = m_index_ints_map[index];
                            data.resize(no_ints);
                            std::memcpy(&(*data.begin()), 
                                        request.results, 
                                        no_ints * sizeof (double));

                            Entry entry = {
                                index,
                                no_ints,
                                max_int
                            };

                            m_smallest.push(entry);

                            m_size -= free - free0 - no_ints * sizeof (double);

                        } else { // cancel
                            for (std::size_t i = 0; i < top_entries.size(); ++i)
                                m_smallest.push(top_entries[i]);
                        }
                    }
                }
            }
        }

#else

        void
        TwoElectronIntegralCache::calc(std::vector<Request>& requests) const
        {
            unsigned long no_hits = 0;
            unsigned long no_misses = 0;

            // handle all requests for which we have cached data
            for (std::vector<Request>::iterator r = requests.begin();
                 r != requests.end();
                 ++r)
                if (!(*r).done) {
                    IndexIntsMap::const_iterator i = m_index_ints_map.find(
                        boost::make_tuple((*r).shells[0],
                                          (*r).shells[1],
                                          (*r).shells[2],
                                          (*r).shells[3]));

                    if (i != m_index_ints_map.end()) {
                        const std::vector<double>& data = (*i).second;
                        std::memcpy((*r).results,
                                    &(*data.begin()),
                                    data.size() * sizeof(double));
                        (*r).done = true;
                        no_hits += 1;
                    }
                }

            no_misses = requests.size() - no_hits;

            m_no_hits += no_hits;
            m_no_misses += no_misses;

            // remember which integrals are already have cached
            std::vector<bool> cached;
            cached.reserve(requests.size());

            for (const Request& r : requests)
                cached.push_back(r.done);

            // pass the rest further down
            m_ie->calc(requests);

            // check if there's anything new worth putting to cache
            for (std::size_t i = 0; i < requests.size(); ++i) {
                if (cached[i])
                    continue;

                const Request& request = requests[i];

                const std::size_t no_ints = m_shell_sizes[request.shells[0]] *
                                            m_shell_sizes[request.shells[1]] *
                                            m_shell_sizes[request.shells[2]] *
                                            m_shell_sizes[request.shells[3]];

                // we cache everything if there's free space
                if (m_max_size >= m_size + no_ints * sizeof(double)) {

                    const ShellQuartetIndex index =
                        boost::make_tuple(request.shells[0],
                                          request.shells[1],
                                          request.shells[2],
                                          request.shells[3]);

                    std::vector<double>& data = m_index_ints_map[index];
                    data.resize(no_ints);
                    std::memcpy(&(*data.begin()),
                                request.results,
                                no_ints * sizeof(double));

                    m_size += no_ints * sizeof(double);
                }
            }
        }
    }
}

#endif
