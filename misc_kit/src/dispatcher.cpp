/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "misc_kit/dispatcher.hpp"

namespace niedoida {
    namespace misc {
#ifndef _WIN32
        static DispatchingAlgorithm default_dispatching_algorithm =
            STATIC_DISPATCHING_ALGORITHM;
        static boost::mpi::communicator* default_communicator = nullptr;

        void set_default_dispatching_algorithm(DispatchingAlgorithm a)
        {
            default_dispatching_algorithm = a;
        }

        std::unique_ptr<Dispatcher> dispatcher(unsigned long n)
        {
            if (!default_communicator)
                default_communicator = new boost::mpi::communicator();

            return dispatcher(*default_communicator, n);
        }

        std::unique_ptr<Dispatcher> dispatcher(boost::mpi::communicator& comm,
                                               unsigned long n)
        {
            return dispatcher(comm, n, default_dispatching_algorithm);
        }

        std::unique_ptr<Dispatcher> dispatcher(boost::mpi::communicator& comm,
                                               unsigned long n,
                                               DispatchingAlgorithm a)
        {
            switch (a) {
            case STATIC_DISPATCHING_ALGORITHM:
                return std::unique_ptr<Dispatcher>(new StaticDispatcher(n));
            case DYNAMIC_DISPATCHING_ALGORITHM:
                return std::unique_ptr<Dispatcher>(
                    new DynamicDispatcher(comm, n));
            case DYNAMIC_CACHE_DISPATCHING_ALGORITHM:
                return std::unique_ptr<Dispatcher>(
                    new DynamicCacheDispatcher(comm, n));
            default: // we never get here, right?
                assert(false);
                return std::unique_ptr<Dispatcher>(new StaticDispatcher(n));
            }
        }
#else
        void set_default_dispatching_algorithm(DispatchingAlgorithm) {}

        std::unique_ptr<Dispatcher> dispatcher(unsigned long n)
        {
            return std::unique_ptr<Dispatcher>(new StaticDispatcher(n));
        }

        std::unique_ptr<Dispatcher> dispatcher(boost::mpi::communicator& comm,
                                               unsigned long n)
        {
            return std::unique_ptr<Dispatcher>(new StaticDispatcher(n));
        }

        std::unique_ptr<Dispatcher> dispatcher(boost::mpi::communicator& comm,
                                               unsigned long n,
                                               DispatchingAlgorithm a)
        {
            return std::unique_ptr<Dispatcher>(new StaticDispatcher(n));
        }
#endif
    }
}
