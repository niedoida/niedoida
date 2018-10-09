/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef PARTITION_FUNCTION_HPP
#define PARTITION_FUNCTION_HPP

#include "core_kit/system.hpp"
#include "core_kit/grid.hpp"

#include <boost/numeric/ublas/lu.hpp>

namespace niedoida {
    namespace grid {

        class PartitionFunction {
        public:
            virtual ~PartitionFunction() {}

            virtual void operator()(
                std::size_t atom, 
                std::size_t n, 
                const double* coords, 
                double* weights) const = 0;
        };

        class SSPartitionFunction: public PartitionFunction {
        public:
            SSPartitionFunction(std::shared_ptr<const core::System>);

            virtual void operator()(
                std::size_t atom, 
                std::size_t n, 
                const double* coords, 
                double* weights) const;

        private:
            double w(const std::size_t k, const double* rg, const std::size_t atom, const double ratom) const;

            std::size_t _n;
            std::unique_ptr<double[]> _coords;
            std::unique_ptr<double[]> _inv_distances;
            std::vector<boost::numeric::ublas::permutation_matrix<> > _neighbours;
        };

    }
}

#endif
