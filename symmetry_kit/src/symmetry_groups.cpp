/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/symmetry_group.hpp"

#include <stdexcept>

namespace niedoida {
    namespace symmetry {
        SymmetryGroups* SymmetryGroups::_instance = 0;

        SymmetryGroups::~SymmetryGroups()
        {
            for (iterator i = begin(); i != end(); ++i)
                delete (*i).second;
        }

        SymmetryGroups& SymmetryGroups::instance()
        {
            if (!_instance)
                _instance = new SymmetryGroups();

            return *_instance;
        }

        const SymmetryGroup&
        SymmetryGroups::get(const std::string& symbol) const
        {
            iterator i = m_groups.find(symbol);

            if (i == m_groups.end())
                throw std::runtime_error("no such group");

            return *(*i).second;
        }

        SymmetryGroups::iterator SymmetryGroups::begin() const
        {
            return m_groups.begin();
        }

        SymmetryGroups::iterator SymmetryGroups::end() const
        {
            return m_groups.end();
        }

        SymmetryGroups::SymmetryGroups()
        {
            const SymmetryGroup* const kh = new KhSymmetryGroup();
            m_groups[kh->name()] = kh;

            const SymmetryGroup* const dinfh = new DInfhSymmetryGroup();
            m_groups[dinfh->name()] = dinfh;

            const SymmetryGroup* const cinfv = new CInfvSymmetryGroup();
            m_groups[cinfv->name()] = cinfv;

            const SymmetryGroup* const cs = new CsSymmetryGroup();
            m_groups[cs->name()] = cs;

            const SymmetryGroup* const ci = new CiSymmetryGroup();
            m_groups[ci->name()] = ci;

            for (unsigned i = 1; i < 9; ++i) {
                const SymmetryGroup* const cn = new CnSymmetryGroup(i);
                m_groups[cn->name()] = cn;
            }

            for (unsigned i = 2; i < 9; ++i) {
                const SymmetryGroup* const cnh = new CnhSymmetryGroup(i);
                m_groups[cnh->name()] = cnh;
                const SymmetryGroup* const cnv = new CnvSymmetryGroup(i);
                m_groups[cnv->name()] = cnv;
                const SymmetryGroup* const dn = new DnSymmetryGroup(i);
                m_groups[dn->name()] = dn;
                const SymmetryGroup* const dnh = new DnhSymmetryGroup(i);
                m_groups[dnh->name()] = dnh;
                const SymmetryGroup* const dnd = new DndSymmetryGroup(i);
                m_groups[dnd->name()] = dnd;
            }

            for (unsigned i = 4; i <= 10; i += 2) {
                const SymmetryGroup* const sn = new SnSymmetryGroup(i);
                m_groups[sn->name()] = sn;
            }

            const SymmetryGroup* const t = new TSymmetryGroup();
            m_groups[t->name()] = t;
            const SymmetryGroup* const th = new ThSymmetryGroup();
            m_groups[th->name()] = th;
            const SymmetryGroup* const td = new TdSymmetryGroup();
            m_groups[td->name()] = td;

            const SymmetryGroup* const o = new OSymmetryGroup();
            m_groups[o->name()] = o;
            const SymmetryGroup* const oh = new OhSymmetryGroup();
            m_groups[oh->name()] = oh;

            const SymmetryGroup* const i = new ISymmetryGroup();
            m_groups[i->name()] = i;
            const SymmetryGroup* const ih = new IhSymmetryGroup();
            m_groups[ih->name()] = ih;
        }
    }
}
