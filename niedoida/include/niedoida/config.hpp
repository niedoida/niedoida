/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CONFIG_HPP
#define NIEDOIDA_CONFIG_HPP

#include <map>
#include <string>

#include <boost/filesystem/path.hpp>

namespace niedoida {

    struct ConfigData;
    
    class Config {
    public:
        Config(const boost::filesystem::path& work_dir, const std::string& job_name);
        ~Config();

        std::string job_name() const;
        boost::filesystem::path data_dir() const;
        boost::filesystem::path scratch_dir() const;

        std::string basis_set_format(const std::string& id) const;
        boost::filesystem::path basis_set_path(const std::string& id) const;

    private:
        void init(const boost::filesystem::path& work_dir, const std::string& job_name);

        ConfigData* _data;
    };
}

#endif
