/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_IO_KIT_LOG_HPP
#define NIEDOIDA_IO_KIT_LOG_HPP

#include "logger.hpp"

namespace niedoida {
    namespace io {
        class Log {
        public:
            class Section {
            public:
                Section(const std::string&);
                ~Section();
                
            private:
                std::unique_ptr<Logger> _parent;
            };
            
            static Logger& instance();

            static std::unique_ptr<Logger> reset(std::unique_ptr<Logger>);

            private:
                static std::unique_ptr<Logger> _instance;
        };
    }
}

#endif

