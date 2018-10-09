/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "io_kit/log.hpp"
#include "io_kit/null_logger.hpp"

namespace niedoida {
    namespace io {
        Log::Section::Section(const std::string& s) :
            _parent(Log::reset(Log::instance().sublogger(s)))
        {
        }

        Log::Section::~Section() { Log::reset(std::move(_parent)); }

        Logger& Log::instance()
        {
            if (!_instance)
                _instance.reset(new NullLogger);

            return *_instance;
        }

        std::unique_ptr<Logger> Log::reset(std::unique_ptr<Logger> l)
        {
            _instance.swap(l);
            return std::move(l);
        }

        std::unique_ptr<Logger> Log::_instance;
    }
}
