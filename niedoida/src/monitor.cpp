/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "io_kit/log.hpp"
#include "niedoida/niedoida.hpp"

namespace niedoida {
    int monitor(Tao tao, void* vctx)
    {
        GeometryOptimizationMonitorContext* ctx =
            static_cast<GeometryOptimizationMonitorContext*>(vctx);

        int iterate;
        double f;
        double gnorm;
        double xdiff;
        TaoConvergedReason reason;

        TaoGetSolutionStatus(tao, &iterate, &f, &gnorm, 0, &xdiff, &reason);

        io::Log::instance().write(io::Logger::NORMAL, "geometry step", iterate);
        io::Log::instance().write(io::Logger::NORMAL, "energy", f);
        io::Log::instance().write(
            io::Logger::NORMAL, "gradient norm", gnorm * COORDS_SCALE);
        io::Log::instance().write(io::Logger::NORMAL, "trust radius", xdiff);
        // Log::instance().write("status", tao_solver_status_string(reason));

        Vec xx;
        TaoGetSolutionVector(tao, &xx);

        std::shared_ptr<core::System> system = deep_copy(*(ctx->system));
        update_coords(*system, xx);

        arma::mat coords(system->atoms.size(), 3);

        for (std::size_t i = 0; i < system->atoms.size(); ++i)
            for (std::size_t j = 0; j < 3; ++j)
                coords(i, j) = system->atoms[i]->coords[j];

        io::Logger::MatrixFormatInfo fi = io::Logger::DEFAULT_MATRIX_FORMAT;

        fi.column_labels = std::vector<std::string>();
        fi.column_labels->push_back("x");
        fi.column_labels->push_back("y");
        fi.column_labels->push_back("z");

        fi.row_labels = std::vector<std::string>();
        for (std::size_t i = 0; i < system->atoms.size(); ++i)
            fi.row_labels->push_back(system->atoms[i]->label);
        io::Log::instance().write(
            niedoida::io::Logger::NORMAL, "coordinates", coords, fi);

        Vec gg;
        TaoGetGradientVector(tao, &gg);

        arma::mat gradient(system->atoms.size(), 3);

        for (std::size_t a = 0; a < ctx->system->atoms.size(); ++a) {
            for (int k = 0; k < 3; ++k) {
                int ix = 3 * a + k;
                VecGetValues(gg, 1, &ix, &(gradient(a, k)));
            }
        }

        gradient *= COORDS_SCALE;

        arma::mat rtsf(3, 3);

        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                rtsf(i, j) =
                    system->symmetry_info->rotation_to_std_frame()(i, j);

        gradient = arma::trans(rtsf * arma::trans(gradient));

        io::Log::instance().write(
            niedoida::io::Logger::NORMAL, "gradient", gradient, fi);

        return 0;
    }
}
