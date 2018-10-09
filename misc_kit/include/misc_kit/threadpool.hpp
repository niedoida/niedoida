/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_MISC_KIT_THREADPOOL_HPP
#define NIEDOIDA_MISC_KIT_THREADPOOL_HPP

#include <functional>
#include <queue>
#include <set>

#include <boost/noncopyable.hpp>

#include <condition_variable>
#include <mutex>
#include <thread>

namespace niedoida {
    namespace misc {
        class ThreadPool: boost::noncopyable {
        public:
            typedef std::function<void()> Task;

            ThreadPool(std::size_t no_threads);
            ~ThreadPool();

            void schedule(Task);

            void wait();

        private:
            bool _shutdown;
            std::vector<std::thread> _threads;
            std::mutex _state_mutex;
            std::condition_variable _state_change;
            std::queue<Task> _tasks;
            std::set<std::thread::id> _busy;
            void _tf();
        };
        
        class GlobalThreadPool {
        public:
            static std::size_t no_threads();
            static void no_threads(std::size_t);

            static ThreadPool& instance();

        private:
            static std::size_t _no_threads;

            static std::unique_ptr<ThreadPool> _tp;
        };
    }
}

#endif
