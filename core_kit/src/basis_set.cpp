/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/basis_set.hpp"

#include <algorithm>

#include <boost/lambda/bind.hpp>
#include <boost/lambda/construct.hpp>
#include <boost/lambda/lambda.hpp>

namespace niedoida {

    namespace core {
        BasisSet::~BasisSet()
        {
            using namespace boost::lambda;

            std::for_each(m_atomic_basis_sets.begin(),
                          m_atomic_basis_sets.end(),
                          bind(delete_ptr(), _1));
        }

        AtomicBasisSet& BasisSet::add_atomic_basis_set(Atom& atom)
        {
            AtomicBasisSet* abs = new AtomicBasisSet(*this, atom);

            m_atomic_basis_sets.push_back(abs);

            return *abs;
        }

        unsigned BasisSet::naive_size() const
        {
            unsigned a = 0;
            for (unsigned i = 0; i < m_atomic_basis_sets.size(); ++i)
                a += (*m_atomic_basis_sets[i]).naive_size();

            return a;
        }

        unsigned BasisSet::real_size() const
        {
            unsigned a = 0;
            for (unsigned i = 0; i < m_atomic_basis_sets.size(); ++i)
                a += (*m_atomic_basis_sets[i]).real_size();

            return a;
        }

        unsigned BasisSet::cartesian_size() const
        {
            unsigned a = 0;
            for (unsigned i = 0; i < m_atomic_basis_sets.size(); ++i)
                a += (*m_atomic_basis_sets[i]).cartesian_size();

            return a;
        }
    }
}
