/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "misc_kit/dispatcher.hpp"

#include <boost/mpi.hpp>

namespace niedoida {
    namespace misc {
        StaticDispatcher::StaticDispatcher(unsigned long n)
        {
            boost::mpi::communicator world;
            const unsigned long rank = world.rank();
            const unsigned long size = world.size();

            const unsigned long k = n / size;
            const unsigned long l = n % size;

            if (rank < l)
                m_tasks_queue.push(Range(rank * (k + 1), (rank + 1) * (k + 1)));
            else
                m_tasks_queue.push(Range(rank * k + l, (rank + 1) * k + l));
        }

        Dispatcher::TaskInfo StaticDispatcher::get_task()
        {
            if (m_tasks_queue.empty())
                return TaskInfo();

            const Range task = m_tasks_queue.front();
            m_tasks_queue.pop();

            return task;
        }
    }
}
