/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include <iostream>
#include <set>

namespace {
    void swap(unsigned& i, unsigned& j, bool& swapped)
    {
        unsigned tmp = j;
        j = i;
        i = tmp;
        swapped = !swapped;
    }

    void swap(unsigned& i, unsigned& j)
    {
        unsigned tmp = j;
        j = i;
        i = tmp;
    }

    void permute_d1_e2(unsigned& li,
                       unsigned& lj,
                       unsigned& lk,
                       unsigned& ll,
                       unsigned& center,
                       bool& swapped_1,
                       bool& swapped_2,
                       bool& swapped_12)
    {
        swapped_1 = false;
        swapped_2 = false;
        swapped_12 = false;

        if (li < lj) {
            swap(li, lj, swapped_1);
            if (center == 0)
                center = 1;
            else if (center == 1)
                center = 0;
        }

        if (lk < ll) {
            swap(lk, ll, swapped_2);
            if (center == 2)
                center = 3;
            else if (center == 3)
                center = 2;
        }

        if (li < lk || (li == lk && lj < ll)) {
            swap(li, lk, swapped_12);
            swap(lj, ll);
            if (center == 0)
                center = 2;
            else if (center == 1)
                center = 3;
            else if (center == 2)
                center = 0;
            else if (center == 3)
                center = 1;
        }

        if (lk == ll && center == 3) {
            swap(lk, ll, swapped_2);
            center = 2;
        }

        if (li == lj && center == 1) {
            swap(li, lj, swapped_1);
            center = 0;
        }

        if (li == lk && lj == ll && center > 1) {
            swap(li, lk, swapped_12);
            swap(lj, ll);
            if (center == 2)
                center = 0;
            else if (center == 3)
                center = 1;
        }
    }

    void
    permute_d1_e1(unsigned& li, unsigned& lj, unsigned& center, bool& swapped)
    {
        swapped = false;
        if (li < lj || (li == lj && center == 1)) {
            swap(li, lj, swapped);
            if (center == 0)
                center = 1;
            else if (center == 1)
                center = 0;
        }
    }

    struct Quintet {
        unsigned li, lj, lk, ll, center;
        Quintet(unsigned li,
                unsigned lj,
                unsigned lk,
                unsigned ll,
                unsigned center) :
            li(li),
            lj(lj),
            lk(lk),
            ll(ll),
            center(center)
        {
        }
    };

    struct QuintetCompare {
        bool operator()(const Quintet& a, const Quintet& b) const
        {
            if (a.li < b.li)
                return true;
            if (a.lj < b.lj)
                return true;
            if (a.lk < b.lk)
                return true;
            if (a.ll < b.ll)
                return true;
            if (a.center < b.center)
                return true;
            return false;
        }
    };

    struct Triplet {
        unsigned li, lj, center;
        Triplet(unsigned li, unsigned lj, unsigned center) :
            li(li),
            lj(lj),
            center(center)
        {
        }
    };

    struct TripletCompare {
        bool operator()(const Triplet& a, const Triplet& b) const
        {
            if (a.li < b.li)
                return true;
            if (a.lj < b.lj)
                return true;
            if (a.center < b.center)
                return true;
            return false;
        }
    };

    void generate_unique(const unsigned L)
    {

        bool swapped = false, swapped_1 = false, swapped_2 = false,
             swapped_12 = false;

        std::set<Quintet, QuintetCompare> quintets;
        std::set<Triplet, TripletCompare> triplets_overlap;
        std::set<Triplet, TripletCompare> triplets_kinetic;
        std::set<Triplet, TripletCompare> triplets_ne;

        for (unsigned li = 0; li <= L; ++li)
            for (unsigned lj = 0; lj <= L; ++lj)
                for (unsigned center = 0; center <= 1; ++center) {
                    unsigned lli = li;
                    unsigned llj = lj;
                    unsigned ccenter = center;
                    permute_d1_e1(lli, llj, ccenter, swapped);
                    Triplet t(lli, llj, ccenter);
                    triplets_overlap.insert(t);
                    triplets_kinetic.insert(t);
                }

        for (unsigned li = 0; li <= L; ++li)
            for (unsigned lj = 0; lj <= L; ++lj)
                for (unsigned center = 0; center <= 2; ++center) {
                    unsigned lli = li;
                    unsigned llj = lj;
                    unsigned ccenter = center;
                    permute_d1_e1(lli, llj, ccenter, swapped);
                    Triplet t(lli, llj, ccenter);
                    triplets_ne.insert(t);
                }

        for (unsigned li = 0; li <= L; ++li)
            for (unsigned lj = 0; lj <= L; ++lj)
                for (unsigned lk = 0; lk <= L; ++lk)
                    for (unsigned ll = 0; ll <= L; ++ll)
                        for (unsigned center = 0; center <= 3; ++center) {
                            unsigned lli = li;
                            unsigned llj = lj;
                            unsigned llk = lk;
                            unsigned lll = ll;
                            unsigned ccenter = center;
                            permute_d1_e2(lli,
                                          llj,
                                          llk,
                                          lll,
                                          ccenter,
                                          swapped_1,
                                          swapped_2,
                                          swapped_12);
                            Quintet q(lli, llj, llk, lll, ccenter);
                            quintets.insert(q);
                        }

        std::cout << "Overlap" << std::endl;
        for (std::set<Triplet, TripletCompare>::iterator iter =
                 triplets_overlap.begin();
             iter != triplets_overlap.end();
             ++iter) {
            std::cout << iter->li << iter->lj << iter->center << std::endl;
        }

        std::cout << "Kinetic" << std::endl;
        for (std::set<Triplet, TripletCompare>::iterator iter =
                 triplets_kinetic.begin();
             iter != triplets_kinetic.end();
             ++iter) {
            std::cout << iter->li << iter->lj << iter->center << std::endl;
        }

        std::cout << "Ne" << std::endl;
        for (std::set<Triplet, TripletCompare>::iterator iter =
                 triplets_ne.begin();
             iter != triplets_ne.end();
             ++iter) {
            std::cout << iter->li << iter->lj << iter->center << std::endl;
        }

        std::cout << "2e" << std::endl;
        for (std::set<Quintet, QuintetCompare>::iterator iter =
                 quintets.begin();
             iter != quintets.end();
             ++iter) {
            std::cout << iter->li << iter->lj << iter->lk << iter->ll
                      << iter->center << std::endl;
        }
    }
}
