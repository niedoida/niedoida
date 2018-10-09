/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_INTEGRAL_CACHE_HPP
#define NIEDOIDA_CORE_KIT_INTEGRAL_CACHE_HPP

#include <map>

#include "core_kit/system.hpp"
#include "core_kit/integral_engine.hpp"
#include "core_kit/basis_set_info.hpp"

#include <boost/mpi.hpp>

namespace niedoida {

    namespace core {

        class IntegralCache {
        public:
            IntegralCache(
                std::shared_ptr<const System> system, 
                std::size_t max_size);

            ~IntegralCache();

            bool store(Request&);
            bool retrieve(Request&) const;

        private:
            typedef std::map<ShellQuartetIndex, double*> Map;

            BasisSetInfo _bs_info;
    
            const std::size_t _max_no_ints;
            std::size_t _no_ints;
            Map _idx_data_map;
            double* _data;

            mutable unsigned long _no_hits;
            mutable unsigned long _no_misses;

            boost::mpi::communicator m_comm;
        };

        class ACDIntegralCache {
        public:
            ACDIntegralCache(
                std::shared_ptr<const System> system, 
                std::size_t max_size);

            ~ACDIntegralCache();

            bool store(ACDRequest&);
            bool retrieve(ACDRequest&) const;

        private:
            typedef std::map<ShellACDIndex, double*> Map;

            BasisSetInfo _bs_info;
            BasisSetInfo _aux_bs_info;

            const std::size_t _max_no_ints;
            std::size_t _no_ints;
            Map _idx_data_map;
            double* _data;

            mutable unsigned long _no_hits;
            mutable unsigned long _no_misses;

            boost::mpi::communicator m_comm;
        };
    }
}

#endif
