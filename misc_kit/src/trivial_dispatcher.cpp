/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "misc_kit/dispatcher.hpp"

#include <boost/mpi.hpp>

namespace niedoida {
    namespace misc {
        TrivialDispatcher::TrivialDispatcher(unsigned long n)
        {
            if (boost::mpi::communicator().rank() == 0)
                m_tasks_queue.push(Range(0, n));
        }

        Dispatcher::TaskInfo TrivialDispatcher::get_task()
        {
            if (m_tasks_queue.empty())
                return TaskInfo();

            const Range task = m_tasks_queue.front();
            m_tasks_queue.pop();

            return task;
        }
    }
}
