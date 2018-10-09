/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_MISC_KIT_DISPATCHER_HPP
#define NIEDOIDA_MISC_KIT_DISPATCHER_HPP

#include <condition_variable>
#include <memory>
#include <mutex>
#include <queue>
#include <thread>



#include <boost/mpi.hpp>
#include <boost/noncopyable.hpp>
#include <boost/optional.hpp>
#include <boost/timer/timer.hpp>


namespace niedoida {
    namespace misc {
        class Dispatcher: boost::noncopyable {
        public:
            typedef std::pair<unsigned long, unsigned long> Range;
            typedef boost::optional<Range> TaskInfo;

            virtual ~Dispatcher() = default;

            virtual TaskInfo get_task() = 0;
        };

        class TrivialDispatcher: public Dispatcher {
        public:
            TrivialDispatcher(unsigned long size);

            TaskInfo get_task();
            
        private:
            std::queue<Range> m_tasks_queue;
        };

        class StaticDispatcher: public Dispatcher {
        public:
            StaticDispatcher(unsigned long size);

            TaskInfo get_task();
            
        private:
            std::queue<Dispatcher::Range> m_tasks_queue;
        };

#ifndef _WIN32
        class DynamicDispatcher: public Dispatcher {
        public:
            DynamicDispatcher(boost::mpi::communicator&, unsigned long size);
            ~DynamicDispatcher();

            TaskInfo get_task();

        private:
            void simple_partition(unsigned long, unsigned long);
            void dispatch();

            boost::mpi::communicator& m_comm;
            
            std::queue<Dispatcher::Range> m_tasks_queue;
            unsigned long m_size;
            bool m_first_task;

            std::mutex m_tasks_queue_mutex; 
            std::condition_variable m_tasks_queue_changed;

            boost::timer::cpu_timer m_timer;
            std::unique_ptr<double[]> m_stats;

            std::thread* m_t;
        };

        class DynamicCacheDispatcher: public Dispatcher {
        public:
            DynamicCacheDispatcher(boost::mpi::communicator&, unsigned long size);
            ~DynamicCacheDispatcher();

            TaskInfo get_task();

        private:
            bool _tasks_available();
            boost::optional<Dispatcher::Range> _get_task(std::size_t hint);
            void simple_partition(unsigned long n0, unsigned long n1);
            void dispatch();

            boost::mpi::communicator& m_comm;
            
            typedef std::vector<boost::optional<Dispatcher::Range> > Bundle;
            std::queue<Bundle> bundle_queue;
            boost::optional<Bundle> current_bundle;
            std::mutex m_bundle_queue_mutex; 
            std::condition_variable m_bundle_queue_changed;

            unsigned long m_size;
            bool m_first_task;

            boost::timer::cpu_timer m_timer;

            std::unique_ptr<double[]> m_stats;
            
            std::thread* m_t;
        };
#endif

        enum DispatchingAlgorithm {
            STATIC_DISPATCHING_ALGORITHM,
            DYNAMIC_DISPATCHING_ALGORITHM,
            DYNAMIC_CACHE_DISPATCHING_ALGORITHM
        };

        void set_default_dispatching_algorithm(DispatchingAlgorithm a);

        std::unique_ptr<Dispatcher> dispatcher(boost::mpi::communicator&, unsigned long n, DispatchingAlgorithm);
        std::unique_ptr<Dispatcher> dispatcher(boost::mpi::communicator&, unsigned long n);
        std::unique_ptr<Dispatcher> dispatcher(unsigned long n);
    }
}

#endif
