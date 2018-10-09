/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_SYMMETRY_KIT_SYMMETRY_OPERATION_INFO_HPP
#define NIEDOIDA_SYMMETRY_KIT_SYMMETRY_OPERATION_INFO_HPP

#include <armadillo>
#include <string>

#include <boost/rational.hpp>

namespace niedoida {
    namespace symmetry {
        class SymmetryOperationInfo {
        public:
            explicit SymmetryOperationInfo(const arma::mat&);

            const std::string& label() const;
            bool is_proper() const;
            const arma::vec3& direction() const;
            const boost::rational<unsigned>& fold() const;

        private:
            bool _is_proper;
            arma::vec3 _direction;
            boost::rational<unsigned> _fold;
            std::string _label;
        };

        inline const std::string& SymmetryOperationInfo::label() const
        {
            return _label;
        }

        inline bool SymmetryOperationInfo::is_proper() const
        {
            return _is_proper;
        }

        inline const boost::rational<unsigned>&
        SymmetryOperationInfo::fold() const
        {
            return _fold;
        }

        inline const arma::vec3& SymmetryOperationInfo::direction() const
        {
            return _direction;
        }
    }
}

#endif
