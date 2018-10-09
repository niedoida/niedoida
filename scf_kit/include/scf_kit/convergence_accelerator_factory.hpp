/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_SCF_KIT_CONVERGENCE_ACCELERATOR_FACTORY_HPP
#define NIEDOIDA_SCF_KIT_CONVERGENCE_ACCELERATOR_FACTORY_HPP

#include "scf_kit/convergence_accelerators.hpp"
#include "core_kit/factory.hpp"

namespace niedoida {
    namespace scf {
        class ConvergenceAcceleratorFactory: 
            public core::Factory<ConvergenceAccelerator> {
        };

        class NullConvergenceAcceleratorFactory:
            public ConvergenceAcceleratorFactory {
        public:
            Product make(std::shared_ptr<const core::System>) const
            {
                return Product(new NullConvergenceAccelerator);
            }
        };

        class DIISFactory:
            public ConvergenceAcceleratorFactory {
        public:
            DIISFactory(double threshold):
                _threshold(threshold) {}

            Product make(std::shared_ptr<const core::System>) const
            {
                return Product(new DIIS(_threshold));
            }

        private:
            double _threshold;
        };
    }
}

#endif
