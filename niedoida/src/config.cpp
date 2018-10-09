/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "niedoida/config.hpp"

#include <yaml-cpp/yaml.h>

#include <fstream>
#include <sstream>
#include <stdexcept>

#include <boost/format.hpp>

#include <boost/filesystem/convenience.hpp>
#include <boost/filesystem/fstream.hpp>
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/path.hpp>

#include <boost/algorithm/string/erase.hpp>
#include <boost/algorithm/string/replace.hpp>

#include <iostream>

extern "C" {
#ifndef _WIN32
#    include <libgen.h>
#    include <pwd.h>
#    include <sys/stat.h>
#    include <sys/types.h>
#    include <unistd.h>
#else
#    include <shlobj.h>
#    include <shlwapi.h>
#    include <windows.h>
#endif

#if defined(__FreeBSD__) || defined(__DragonFly__)
#    include <stddef.h>
#    include <sys/sysctl.h>
#    include <sys/syslimits.h>
#    include <sys/types.h>
#    include <unistd.h>
#endif

#if defined(__APPLE__)
#    include <mach-o/dyld.h>
#endif
}

namespace niedoida {

    namespace fs = boost::filesystem;

    struct ConfigData {
        std::string job_name;
        fs::path data_dir;
        fs::path scratch_dir;

        std::map<std::string, std::pair<std::string, fs::path>> basis_sets_info;
    };

    void parse_config(const fs::path& path,
                      ConfigData& data,
                      const fs::path& data_dir)
    {
        YAML::Node cfg = YAML::LoadFile(path.string());

        if (cfg["scratch_dir"])
            data.scratch_dir = cfg["scratch_dir"].as<std::string>();

        if (cfg["basis_sets"])
            for (const YAML::Node& entry : cfg["basis_sets"]) {
                const std::string name = entry["name"].as<std::string>();
                const std::string type = entry["type"].as<std::string>();
                std::string fname = entry["file"].as<std::string>();
                boost::algorithm::replace_all(
                    fname, "${DATA_DIR}", data_dir.string());

                fs::path p = fname;
                if (p.is_relative())
                    p = path.parent_path() / p;

                data.basis_sets_info[name] = std::make_pair(type, p);
            }
    }

    Config::Config(const fs::path& work_dir, const std::string& job_name) :
        _data(new ConfigData)
    {
        init(work_dir, job_name);
    }

    Config::~Config() { delete _data; }

    void Config::init(const fs::path& work_dir, const std::string& job_name)
    {
        assert(_data != 0);

        std::string root_dir;

#if defined(__APPLE__)
        char buf[PATH_MAX];
        uint32_t size = sizeof(buf);
        _NSGetExecutablePath(buf, &size);

        char path[PATH_MAX];
        realpath(buf, path);
        root_dir = dirname(dirname(path));
#elif defined(__FreeBSD__) || defined(__DragonFly__)
        int mib[4] = {CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, -1};
        char buf[PATH_MAX] = {};
        size_t cb = sizeof(buf);
        if (sysctl(mib, 4, buf, &cb, NULL, 0) != 0) {
            std::cerr
                << "niedoida: failed to locate the executable, bailing out\n";
            exit(EXIT_FAILURE);
        }
        root_dir = dirname(dirname(buf));
#elif defined(__linux__)
        {
            struct stat sb;
            if (stat("/proc/self/exe", &sb) == -1) {
                std::cerr
                    << "niedoida: failed to stat /proc/self/exe, bailing out\n";
                exit(EXIT_FAILURE);
            }

            std::vector<char> buf(sb.st_size + 1);

            const ssize_t r =
                readlink("/proc/self/exe", buf.data(), sb.st_size + 1);

            if (r == -1) {
                std::cerr
                    << "niedoida: failed to read /proc/self/exe, bailing out\n";
                std::exit(EXIT_FAILURE);
            }

            if (r > sb.st_size) {
                std::cerr
                    << "niedoida: /proc/self/exe changed between stat and "
                       "readlink\n";
                std::exit(EXIT_FAILURE);
            }

            buf[r] = '\0';

            root_dir = dirname(dirname(buf.data()));
        }
#elif defined(_WIN32)
        char buf[MAX_PATH];
        if (!GetModuleFileName(nullptr, buf, MAX_PATH)) {
            std::cerr
                << "niedoida: failed to locate the executable, bailing out\n";
            exit(EXIT_FAILURE);
        }

        PathRemoveFileSpec(buf);
        PathRemoveFileSpec(buf);

        root_dir = buf;

        for (char& c : root_dir)
            if (c == '\\')
                c = '/';
#else
#    error "This platform is not yet supported."
#endif

        _data->job_name = job_name;
        _data->data_dir = fs::path(root_dir) / "share" / "niedoida";
        _data->scratch_dir = fs::path("/tmp");

        fs::path global_config_path = _data->data_dir / "niedoida.cfg";
#ifdef _WIN32
        PWSTR p;
        SHGetKnownFolderPath(
            FOLDERID_LocalAppData, KF_FLAG_CREATE, nullptr, &p);

        fs::path user_config_path =
            fs::path(p) / fs::path(".niedoida") / fs::path("niedoida.cfg");

        CoTaskMemFree(p);
#else
        fs::path user_config_path = fs::path(getpwuid(getuid())->pw_dir) /
                                    fs::path(".niedoida") /
                                    fs::path("niedoida.cfg");
#endif
        fs::path local_config_path = work_dir / fs::path("niedoida.cfg");

        if (exists(global_config_path))
            parse_config(global_config_path, *_data, _data->data_dir);

        if (exists(user_config_path))
            parse_config(user_config_path, *_data, _data->data_dir);

        if (exists(local_config_path))
            parse_config(local_config_path, *_data, _data->data_dir);
    }

    std::string Config::job_name() const { return _data->job_name; }

    fs::path Config::data_dir() const { return _data->data_dir; }

    fs::path Config::scratch_dir() const { return _data->scratch_dir; }

    std::string Config::basis_set_format(const std::string& id) const
    {
        return _data->basis_sets_info[id].first;
    }

    fs::path Config::basis_set_path(const std::string& id) const
    {
        return _data->basis_sets_info[id].second;
    }
}