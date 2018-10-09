/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "misc_kit/dispatcher.hpp"

#include <functional>

#include "io_kit/log.hpp"

namespace {
    const int WORK_TAG = 1;
    const int NO_WORK_TAG = 2;
    const int WORK_DONE_TAG = 3;
}

namespace niedoida {
    namespace misc {
        DynamicDispatcher::DynamicDispatcher(boost::mpi::communicator& comm,
                                             unsigned long size) :
            m_comm(comm),
            m_size(size),
            m_first_task(true),
            m_stats(new double[m_comm.size()]),
            m_t(nullptr)
        {
            m_comm.barrier();

            io::Log::instance().write(io::Logger::DEBUG, "problem size", size);
            io::Log::instance().write(
                io::Logger::DEBUG, "no_nodes", m_comm.size());

            const unsigned long no_nodes = m_comm.size();

            for (std::size_t i = 0; i < no_nodes; ++i)
                m_stats[i] = 0;

            if (m_comm.rank() == 0) {
                std::unique_lock<std::mutex> tasks_queue_lock(
                    m_tasks_queue_mutex);

                if (no_nodes > 1)
                    m_t = new std::thread(
                        std::bind(&DynamicDispatcher::dispatch, this));

                // prepare tasks queue
                if (no_nodes == 1) {
                    // we'got only one node, so there's no point in any
                    // partitioning
                    m_tasks_queue.push(Range(0, size));
                } else {
                    const unsigned long threshold = 500 * no_nodes;
                    const double factor = 1.0 / (no_nodes + 1);

                    unsigned long n0 = 0;
                    while (true) {
                        if (size < threshold) {
                            // the remaining part is so small that there's no
                            // point in splitting it anymore
                            simple_partition(n0, n0 + size);
                            break;
                        }

                        const unsigned long chunk =
                            static_cast<unsigned long>(factor * size);

                        simple_partition(n0, n0 + chunk);
                        size -= chunk;
                        n0 += chunk;
                    }
                }

                io::Log::instance().write(
                    io::Logger::DEBUG, "no_tasks", m_tasks_queue.size());

                if (no_nodes > 1)
                    m_tasks_queue_changed.notify_all();
            }
        }

        DynamicDispatcher::~DynamicDispatcher()
        {
            if (m_comm.rank() == 0) {
                std::unique_lock<std::mutex> tasks_queue_lock(
                    m_tasks_queue_mutex);

                while (!m_tasks_queue.empty())
                    m_tasks_queue_changed.wait(tasks_queue_lock);
            }

            m_t->join();

            delete m_t;

            m_comm.barrier();

            m_timer.stop();

            arma::vec t(m_comm.size(), arma::fill::zeros);
            double* p = &(t(0));

            if (m_comm.rank() == 0) {
                *p = m_timer.elapsed().system + m_timer.elapsed().user;

                for (int i = 0; i < m_comm.size(); ++i) {
                    if (i > 0)
                        m_comm.recv(i, 0, p + i, 1);
                }

                io::Log::instance().write(
                    io::Logger::DEBUG, "node cpu time", t);

            } else {
                m_comm.send(
                    0, 0, m_timer.elapsed().system + m_timer.elapsed().user);
            }

            boost::mpi::reduce(m_comm,
                               m_stats.get(),
                               m_comm.size(),
                               t.memptr(),
                               std::plus<double>(),
                               0);

            io::Log::instance().write(io::Logger::DEBUG, "node work share", t);
        }

        Dispatcher::TaskInfo DynamicDispatcher::get_task()
        {
            if (m_comm.rank() != 0 && !m_first_task)
                // slave must report master's dispatching thread that it's
                // ready to receive next task
                m_comm.send(0, WORK_DONE_TAG);

            m_first_task = false;

            if (m_comm.rank() == 0) {
                // master is not being served by the dispatching thread,
                // so it must take next task itself

                std::unique_lock<std::mutex> tasks_queue_lock(
                    m_tasks_queue_mutex);

                if (m_tasks_queue.empty())
                    return TaskInfo();

                const Range task = m_tasks_queue.front();
                m_tasks_queue.pop();
                tasks_queue_lock.unlock();
                // pthread_yield();
                m_stats[0] += (task.second - task.first) / double(m_size);

                return task;
            } else {
                // slave waits for the master's dispatching thread to get
                // next task
                unsigned long buf[2];
                boost::mpi::status status =
                    m_comm.recv(0, boost::mpi::any_tag, buf, 2);
                if (status.tag() == WORK_TAG) {
                    m_stats[m_comm.rank()] +=
                        (buf[1] - buf[0]) / double(m_size);

                    return TaskInfo(Range(buf[0], buf[1]));
                }

                return TaskInfo();
            }
        }

        void DynamicDispatcher::simple_partition(unsigned long n0,
                                                 unsigned long n1)
        {
            const unsigned long no_nodes = m_comm.size();

            const unsigned long task_size = static_cast<unsigned long>(
                std::ceil(static_cast<double>(n1 - n0) / no_nodes));

            for (unsigned long n = n0; n < n1; n += task_size)
                m_tasks_queue.push(
                    Dispatcher::Range(n, std::min(n + task_size, n1)));
        }

        void DynamicDispatcher::dispatch()
        {
            const int no_nodes = m_comm.size();

            if (no_nodes == 1)
                return;

            int busy_nodes = 1;

            {
                std::unique_lock<std::mutex> tasks_queue_lock(
                    m_tasks_queue_mutex);

                while (m_tasks_queue.empty())
                    m_tasks_queue_changed.wait(tasks_queue_lock);
            }

            // send initial tasks to all slaves
            for (int rank = 1; rank < no_nodes; ++rank) {

                int tag = NO_WORK_TAG;
                unsigned long buf[2] = {0, 0};

                std::unique_lock<std::mutex> tasks_queue_lock(
                    m_tasks_queue_mutex);

                if (!m_tasks_queue.empty()) {
                    tag = WORK_TAG;
                    const niedoida::misc::Dispatcher::Range& range =
                        m_tasks_queue.front();
                    buf[0] = range.first;
                    buf[1] = range.second;
                    m_tasks_queue.pop();
                    busy_nodes += 1;
                }

                m_comm.send(rank, tag, buf, 2);
            }

            if (busy_nodes == 1)
                return;

            // dispatch the rest of the tasks
            while (1) {

                // wait for someone who finished it's work
                const boost::mpi::status status =
                    m_comm.recv(boost::mpi::any_source, WORK_DONE_TAG);
                const int sender = status.source();

                {
                    std::unique_lock<std::mutex> tasks_queue_lock(
                        m_tasks_queue_mutex);

                    if (m_tasks_queue.empty()) {
                        tasks_queue_lock.unlock();

                        // we're done, wait for the rest to catch up
                        for (int rank = 1; rank < busy_nodes; ++rank)
                            if (rank != sender)
                                m_comm.recv(rank, WORK_DONE_TAG);

                        // tell everybody who had any work to do that we're done
                        for (int rank = 1; rank < busy_nodes; ++rank)
                            m_comm.send(rank, NO_WORK_TAG);

                        // and exit
                        break;

                    } else {
                        // there's another task to be done - send it to the
                        // slave which just finished the previous task
                        const niedoida::misc::Dispatcher::Range& range =
                            m_tasks_queue.front();
                        const unsigned long buf[2] = {range.first,
                                                      range.second};
                        m_tasks_queue.pop();

                        m_tasks_queue_changed.notify_all();

                        tasks_queue_lock.unlock();

                        m_comm.send(sender, WORK_TAG, buf, 2);
                    }
                }
            }
        }
    }
}
