/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "posthf_kit/lt_mp2.hpp"

#include "io_kit/io_kit.hpp"

namespace niedoida {

    namespace posthf {

        LT_AO_MP2_Base::Integrals::~Integrals()
        {
            const std::size_t roots_size = roots.size();
            for (std::size_t l = 0; l < roots_size; ++l) {
                Level2* l2 = roots[l];
                for (std::size_t ki = 0; l2 && ki < l2->size(); ++ki) {
                    Level3* l3 = (*l2)[ki].second;
                    for (std::size_t ji = 0; l3 && ji < l3->size(); ++ji) {
                        Level4* l4 = (*l3)[ji].second;
                        delete l4;
                    }
                    delete l3;
                }
                delete l2;
            }
        }

        LT_AO_MP2_Base::Integrals_sh::~Integrals_sh()
        {
            const std::size_t roots_size = roots.size();
            for (std::size_t l = 0; l < roots_size; ++l) {
                Level2* l2 = roots[l];
                for (std::size_t ki = 0; l2 && ki < l2->size(); ++ki) {
                    Level3* l3 = (*l2)[ki].second;
                    for (std::size_t ji = 0; l3 && ji < l3->size(); ++ji) {
                        Level4* l4 = (*l3)[ji].second;
                        delete l4;
                    }
                    delete l3;
                }
                delete l2;
            }
        }

        std::vector<std::size_t> LT_AO_MP2_Base::split(std::size_t memory_pool,
                                                       std::size_t n)
        {
            std::vector<std::size_t> il;

            std::size_t ib = 0;
            std::size_t ie = n;

            std::size_t eie = ie;

            il.push_back(0);
            do {
                std::size_t bs = batch_size(memory_pool, ib, std::min(eie, ie));
                niedoida::io::Log::instance().write(
                    niedoida::io::Logger::DEBUG, "batch_size", int(bs));
                niedoida::io::Log::instance().write(
                    niedoida::io::Logger::DEBUG, "ib", int(ib));
                niedoida::io::Log::instance().write(
                    niedoida::io::Logger::DEBUG, "ie", int(ib + bs));

                if (bs == 0)
                    throw std::runtime_error("not enough memory");

                ib += bs;
                il.push_back(ib);

                eie = ib + 1.2 * bs;
            } while (ib < ie);

            return il;
        }

        std::size_t LT_AO_MP2_Base::batch_size(std::size_t pool_size,
                                               std::size_t ib,
                                               std::size_t ie)
        {
            const std::size_t subpool_size = pool_size / 1.2; // quick and dirty

            unsigned long long hs = subd2_size(ib, ie);

            if (hs <= subpool_size)
                return ie - ib;

            std::size_t d = ie - ib;

            std::size_t dl = 0;
            std::size_t dh = d;

            while (dl + 1 < dh) {
                std::size_t d2 = dl + (dh - dl) / 2;
                if (subd2_size(ib, ib + d2) <= subpool_size) {
                    dl = d2;
                } else {
                    dh = d2;
                }
            }

            return dl;
        }
    }
}
