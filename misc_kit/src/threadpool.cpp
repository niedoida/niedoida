/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "misc_kit/threadpool.hpp"

namespace niedoida {
    namespace misc {

        ThreadPool::ThreadPool(std::size_t no_threads) : _shutdown(false)
        {
            for (std::size_t n = 0; n < no_threads; ++n)
                _threads.emplace_back(std::bind(&ThreadPool::_tf, this));
        }

        ThreadPool::~ThreadPool()
        {
            {
                std::unique_lock<std::mutex> lock(_state_mutex);
                _shutdown = true;
            }

            _state_change.notify_all();

            for (std::thread& t : _threads)
                t.join();
        }

        void ThreadPool::schedule(Task task)
        {
            std::unique_lock<std::mutex> lock(_state_mutex);

            _tasks.push(task);

            _state_change.notify_all();
        }

        void ThreadPool::wait()
        {
            for (;;) {
                {
                    std::unique_lock<std::mutex> lock(_state_mutex);

                    if (_tasks.empty() && _busy.empty())
                        break;

                    _state_change.wait(lock);
                }
            }
        }

        void ThreadPool::_tf()
        {
            Task task;

            for (;;) {
                {
                    std::unique_lock<std::mutex> lock(_state_mutex);

                    if (_shutdown && _tasks.empty())
                        return;

                    if (_tasks.empty())
                        _state_change.wait(lock);

                    if (_tasks.empty())
                        continue;

                    task = _tasks.front();
                    _tasks.pop();

                    _busy.insert(std::this_thread::get_id());
                }

                task();

                {
                    std::unique_lock<std::mutex> lock(_state_mutex);

                    _busy.erase(std::this_thread::get_id());
                }

                _state_change.notify_all();
            }
        }

        std::size_t GlobalThreadPool::no_threads() { return _no_threads; }

        void GlobalThreadPool::no_threads(std::size_t n)
        {
            if (n != _no_threads) {
                _tp.reset(nullptr);
                _no_threads = n;
            }
        }

        ThreadPool& GlobalThreadPool::instance()
        {
            if (!_tp)
                _tp.reset(new ThreadPool(_no_threads));

            return *_tp.get();
        }

        std::size_t GlobalThreadPool::_no_threads =
            std::thread::hardware_concurrency()
                ? std::thread::hardware_concurrency()
                : 1;

        std::unique_ptr<ThreadPool> GlobalThreadPool::_tp;
    }
}
