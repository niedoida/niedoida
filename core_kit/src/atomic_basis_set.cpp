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

        AtomicBasisSet::AtomicBasisSet(BasisSet& basis_set, Atom& atom) :
            m_basis_set(basis_set),
            m_atom(atom)
        {
        }

        AtomicBasisSet::~AtomicBasisSet()
        {
            using namespace boost::lambda;

            std::for_each(m_valence_shells.begin(),
                          m_valence_shells.end(),
                          bind(delete_ptr(), _1));
        }

        Shell& AtomicBasisSet::add_valence_shell()
        {
            Shell* s = new Shell(*this);
            m_valence_shells.push_back(s);
            return *s;
        }

        unsigned AtomicBasisSet::naive_size() const
        {
            unsigned a = 0;
            for (unsigned i = 0; i < m_valence_shells.size(); ++i)
                a += (*m_valence_shells[i]).naive_size();

            return a;
        }

        unsigned AtomicBasisSet::real_size() const
        {
            unsigned a = 0;
            for (unsigned i = 0; i < m_valence_shells.size(); ++i)
                a += (*m_valence_shells[i]).real_size();

            return a;
        }

        unsigned AtomicBasisSet::cartesian_size() const
        {
            unsigned a = 0;
            for (unsigned i = 0; i < m_valence_shells.size(); ++i)
                a += (*m_valence_shells[i]).cartesian_size();

            return a;
        }
    }
}
