/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/symmetry_info.hpp"

#include "symmetry_kit/rotation_matrix.hpp"
#include "symmetry_kit/symmetry_utils.hpp"

#include <boost/math/constants/constants.hpp>
#include <boost/math/quaternion.hpp>

#include <algorithm>
#include <cassert>
#include <set>

namespace {
    using namespace niedoida::symmetry;

    arma::mat33 inertia(const arma::mat& r, const std::vector<unsigned>& m)
    {
        assert(r.n_cols == m.size());

        arma::mat33 I = arma::zeros<arma::mat>(3, 3);

        for (unsigned i = 0; i < r.n_cols; ++i) {
            const double x = r(0, i);
            const double y = r(1, i);
            const double z = r(2, i);

            I(0, 0) += m[i] * (y * y + z * z);
            I(1, 1) += m[i] * (x * x + z * z);
            I(2, 2) += m[i] * (x * x + y * y);
            I(0, 1) -= m[i] * x * y;
            I(0, 2) -= m[i] * x * z;
            I(1, 2) -= m[i] * y * z;
        }
        I(1, 0) = I(0, 1);
        I(2, 0) = I(0, 2);
        I(2, 1) = I(1, 2);
        return I;
    }


    arma::vec canonic(const arma::vec& vec, double tol = 1e-3)
    {
        for (int i = vec.size() - 1; i >= 0; --i) {
            if (std::abs(vec(i)) < tol)
                continue;

            if (vec(i) < 0)
                return -vec;
            else
                return vec;
        }
        return vec;
    }

    struct SymmetryElement {
        arma::vec3 dir;
        int fold;
    };

    struct fp_less : std::binary_function<double, double, bool> {

        explicit fp_less(double eps) : eps(eps) {}

        bool operator()(double lhs, double rhs) const
        {
            if (std::abs(lhs - rhs) < eps)
                return false;

            return lhs < rhs;
        }
        const double eps;
    };

    struct compare_vecs
        : std::binary_function<const arma::vec&, const arma::vec&, bool> {

        explicit compare_vecs(double eps) : comp(eps) {}

        bool operator()(const arma::vec& lhs, const arma::vec& rhs) const
        {
            return std::lexicographical_compare(
                lhs.begin(), lhs.end(), rhs.begin(), rhs.end(), comp);
        }

        const fp_less comp;
    };

    struct compare_axes : std::binary_function<const SymmetryElement&,
                                               const SymmetryElement&,
                                               bool> {

        explicit compare_axes(double eps) : vec_compare(eps) {}

        bool operator()(const SymmetryElement& lhs,
                        const SymmetryElement& rhs) const
        {
            if (lhs.fold != rhs.fold) {
                return lhs.fold < rhs.fold;
            }

            return vec_compare(lhs.dir, rhs.dir);
        }

        const compare_vecs vec_compare;
    };

    typedef std::set<SymmetryElement, compare_axes> AxisSet;

    bool are_equivalent(const arma::mat& coords_1,
                        const arma::mat& coords_2,
                        const std::vector<unsigned>& q,
                        double tol_dist)
    {
        assert(coords_1.n_cols == coords_2.n_cols);

        const std::size_t n = coords_1.n_cols;

        for (std::size_t i = 0; i < n; ++i) {
            const arma::vec& atom_1 = coords_1.col(i);
            bool flag = false;
            for (std::size_t j = 0; j < n; ++j) {
                const arma::vec& atom_2 = coords_2.col(j);
                if ((q[i] == q[j]) &&
                    (arma::norm(atom_1 - atom_2, 2) <= tol_dist))
                    flag = true;
            }
            if (!flag)
                return false;
        }
        return true;
    }

    arma::mat rotate(const arma::mat& coords, const SymmetryElement& axis)
    {
        return rotation_matrix(axis.fold, axis.dir) * coords;
    }

    class UnknownSymmetryGroup : public FiniteSymmetryGroup {
    public:
        UnknownSymmetryGroup(const std::vector<arma::mat>& generators) :
            FiniteSymmetryGroup(generators)
        {
        }

        std::string name() const { return "???"; }
    };

    const FiniteSymmetryGroup& find_finite_group(const AxisSet& elems)
    {
        std::vector<arma::mat> generators;
        for (const auto& e : elems)
            generators.push_back(rotation_matrix(e.fold, e.dir));

        const FiniteSymmetryGroup* result =
            dynamic_cast<const FiniteSymmetryGroup*>(
                &SymmetryGroups::instance().get("C1"));

        UnknownSymmetryGroup unknown(generators);

        const SymmetryGroups& groups = SymmetryGroups::instance();

        for (SymmetryGroups::iterator g = groups.begin(); g != groups.end();
             ++g) {
            if (!g->second->is_finite())
                continue;

            const FiniteSymmetryGroup& fg =
                dynamic_cast<const FiniteSymmetryGroup&>(*(*g).second);

            if (is_subgroup(fg, unknown) && fg.rank() > result->rank()) {
                result = &fg;
            }
        }
        return *result;
    }

    arma::mat align_to_z_axis(arma::vec3 v)
    {
        v = arma::normalise(v);

        const arma::vec3 z = {0.0, 0.0, 1.0};

        const arma::vec3 x = arma::cross(v, z);
        const double s = arma::norm(x);

        if (std::abs(s) < std::numeric_limits<double>::epsilon())
            return (v(2) < 0 ? -1 : 1) * arma::eye<arma::mat>(3, 3);

        const arma::mat xx = {
            {0.0, -x(2), x(1)}, {x(2), 0.0, -x(0)}, {-x(1), x(0), 0.0}};

        const double c = arma::dot(v, z);

        return arma::eye<arma::mat>(3, 3) +
               xx * (arma::eye<arma::mat>(3, 3) + xx / (1 + c));
    }

    AxisSet find_proper_elements(const arma::mat& coords,
                                 const std::vector<unsigned>& q,
                                 double tol_dist)
    {
        const compare_axes compare_axes(tol_dist);
        AxisSet axes(compare_axes);
        for (int n = 8; n > 1; --n) {
            for (unsigned i = 0; i < coords.n_cols; ++i) {
                const arma::vec& first = coords.col(i);
                if (arma::norm(first) > tol_dist) {
                    const SymmetryElement axis = {canonic(normalise(first)), n};
                    if (are_equivalent(
                            coords, rotate(coords, axis), q, tol_dist))
                        axes.insert(axis);
                }
                for (unsigned j = i + 1; j < coords.n_cols; ++j) {
                    const arma::vec& second = coords.col(j);

                    if (arma::norm(first + second) > tol_dist) {
                        const SymmetryElement axis = {
                            canonic(normalise(first + second)), n};
                        if (are_equivalent(
                                coords, rotate(coords, axis), q, tol_dist))
                            axes.insert(axis);
                    }

                    if (arma::norm(first - second) > tol_dist) {
                        SymmetryElement axis = {
                            canonic(normalise(first - second)), n};
                        if (are_equivalent(
                                coords, rotate(coords, axis), q, tol_dist))
                            axes.insert(axis);
                    }

                    for (unsigned k = j + 1; k < coords.n_cols; ++k) {
                        const arma::vec& third = coords.col(k);

                        if (arma::norm(arma::cross(second - first,
                                                   third - first)) < tol_dist)
                            continue;

                        const SymmetryElement axis = {
                            canonic(arma::normalise(
                                arma::cross(second - first, third - first))),
                            n};

                        if (are_equivalent(
                                coords, rotate(coords, axis), q, tol_dist))
                            axes.insert(axis);
                    }
                }
            }
        }

        AxisSet unique_axes(compare_axes);
        for (const SymmetryElement& a : axes) {
            bool redundant = false;
            for (const SymmetryElement& b : axes) {
                if (arma::norm(a.dir - b.dir) <
                    std::numeric_limits<double>::epsilon())
                    if (b.fold > a.fold && (b.fold % a.fold) == 0) {
                        redundant = true;
                        break;
                    }
            }

            if (!redundant)
                unique_axes.insert(a);
        }
        return unique_axes;
    }

    AxisSet find_improper_elements(const arma::mat& coords,
                                   const std::vector<unsigned>& q,
                                   double tol_dist)
    {
        const compare_axes compare_axes(tol_dist);
        AxisSet axes(compare_axes);
        for (int n = 12; n > 1; --n) {
            for (unsigned i = 0; i < coords.n_cols; ++i) {
                const arma::vec& first = coords.col(i);
                if (arma::norm(first) > tol_dist) {
                    SymmetryElement axis = {canonic(normalise(first)),
                                            n > 2 ? -n : -1};
                    if (are_equivalent(
                            coords, rotate(coords, axis), q, tol_dist))
                        axes.insert(axis);
                }
                for (unsigned j = i + 1; j < coords.n_cols; ++j) {
                    const arma::vec& second = coords.col(j);

                    if (arma::norm(first + second) > tol_dist) {
                        const SymmetryElement axis = {
                            canonic(normalise(first + second)),
                            n > 2 ? -n : -1};
                        if (are_equivalent(
                                coords, rotate(coords, axis), q, tol_dist))
                            axes.insert(axis);
                    }

                    if (arma::norm(first - second) > tol_dist) {
                        const SymmetryElement axis = {
                            canonic(normalise(first - second)),
                            n > 2 ? -n : -1};
                        if (are_equivalent(
                                coords, rotate(coords, axis), q, tol_dist))
                            axes.insert(axis);
                    }

                    for (unsigned k = j + 1; k < coords.n_cols; ++k) {
                        const arma::vec& third = coords.col(k);

                        if (arma::norm(arma::cross(second - first,
                                                   third - first)) < tol_dist)
                            continue;

                        const SymmetryElement axis = {
                            canonic(arma::normalise(
                                arma::cross(second - first, third - first))),
                            n > 2 ? -n : -1};

                        if (are_equivalent(
                                coords, rotate(coords, axis), q, tol_dist))
                            axes.insert(axis);
                    }
                }
            }
        }

        AxisSet unique_axes(compare_axes);
        for (const SymmetryElement& a : axes) {
            bool redundant = false;
            for (const SymmetryElement& b : axes) {
                if (arma::norm(a.dir - b.dir) < 1e-16) {
                    if (a.fold < -1 && b.fold < a.fold &&
                        (b.fold % a.fold) == 0) {
                        redundant = true;
                        break;
                    }
                }
            }

            if (!redundant)
                unique_axes.insert(a);
        }
        return unique_axes;
    }

    arma::mat33 standard_orientation(const AxisSet& elems)
    {
        // FIXME: This spaghetti most likely could be replaced by going
        // through symmetry groups and trying to align passed symmetry
        // elements to those present in a group. This way both finding the
        // symmetry group of the molecule and standard orientation of the
        // molecule could be done in a simpler and more robust way.

        // C1
        if (elems.empty())
            return arma::eye<arma::mat>(3, 3);

        // Cs or Cn
        if (elems.size() == 1)
            return align_to_z_axis(elems.begin()->dir);

        // Cnh or Cnv
        if (std::count_if(
                elems.begin(),
                elems.end(),
                [](const SymmetryElement& a) { return a.fold > 0; }) == 1 &&
            elems.begin()->fold >= -elems.rbegin()->fold) {
            // Cnh
            if (std::count_if(
                    elems.begin(), elems.end(), [](const SymmetryElement& a) {
                        return a.fold == -1;
                    }) == 1) {
                return align_to_z_axis(elems.rbegin()->dir);
            } else { // Cnv
                arma::mat33 R;

                R.col(2) = elems.rbegin()->dir;
                R.col(1) = elems.begin()->dir;
                R.col(0) = arma::cross(R.col(1), R.col(2));

                return R.t();
            }
        }

        // Dn or Dnd or Dnh
        if (std::next(elems.rbegin())->fold == 2 &&
            std::count_if(elems.begin(),
                          std::prev(elems.end()),
                          [](const SymmetryElement& a) {
                              return a.fold == 2;
                          }) == elems.rbegin()->fold) {

            const int fold = elems.rbegin()->fold;

            arma::mat33 R;

            R.col(2) = elems.rbegin()->dir;
            R.col(0) = std::next(elems.rbegin())->dir;

            if (elems.begin()->fold == -2 * fold) {
                // Dnd
                R.col(2) = elems.begin()->dir;
                if (std::abs(arma::dot(R.col(2), R.col(0)) - 1) <
                    std::numeric_limits<double>::epsilon())
                    R.col(0) = elems.rbegin()->dir;
            }

            R.col(1) = arma::cross(R.col(2), R.col(0));

            return R.t();
        }

        // Sn
        if (elems.begin()->fold < -1 &&
            elems.begin()->fold != std::next(elems.begin())->fold)
            return align_to_z_axis(elems.begin()->dir);

        // I or Ih
        if (std::count_if(
                elems.begin(), elems.end(), [](const SymmetryElement& a) {
                    return a.fold == 5;
                }) == 6) {
            const auto p = std::find_if(
                elems.begin(), elems.end(), [](const SymmetryElement& a) {
                    return a.fold == 2;
                });

            const auto q = std::find_if(
                elems.begin(), elems.end(), [&p](const SymmetryElement& a) {
                    return a.fold == 2 &&
                           std::abs(arma::dot(p->dir, a.dir)) < 1e-8;
                });
            arma::mat33 R;

            R.col(2) = p->dir;
            R.col(1) = q->dir;
            R.col(0) = arma::cross(R.col(1), R.col(2));

            return R.t();
        }

        // O or Oh
        if (std::count_if(
                elems.begin(), elems.end(), [](const SymmetryElement& a) {
                    return a.fold == 4;
                }) == 3) {
            const auto p = std::find_if(
                elems.begin(), elems.end(), [](const SymmetryElement& a) {
                    return a.fold == 4;
                });

            arma::mat33 R;

            R.col(2) = p->dir;
            R.col(1) = std::next(p)->dir;
            R.col(0) = arma::cross(R.col(1), R.col(2));

            return R.t();
        }

        // T or Td or Th
        if (std::count_if(
                elems.begin(), elems.end(), [](const SymmetryElement& a) {
                    return a.fold == 3;
                }) == 4) {

            const auto p = std::find_if(
                elems.begin(), elems.end(), [](const SymmetryElement& a) {
                    return a.fold == 2;
                });

            arma::mat33 R;

            R.col(2) = p->dir;
            R.col(1) = std::next(p)->dir;
            R.col(0) = arma::cross(R.col(1), R.col(2));

            return R.t();
        }

        // Ups, failed to recognize the group
        // FIXME: warn the user
        return arma::eye<arma::mat>(3, 3);
    }
}

namespace niedoida {
    namespace symmetry {
        SymmetryInfo::SymmetryInfo(const arma::mat& coords_start,
                                   const std::vector<unsigned>& q,
                                   double tol_dist,
                                   unsigned max_axis_rep,
                                   double tol_eigenvectors) :
            _symmetry_group(&SymmetryGroups::instance().get("C1")),
            _translation_to_std_frame(
                (coords_start * arma::conv_to<arma::uvec>::from(q)) /
                arma::sum(arma::conv_to<arma::uvec>::from(q)))
        {
            arma::mat coords =
                coords_start -
                arma::repmat(_translation_to_std_frame, 1, q.size());

            if (q.size() == 1) {
                _symmetry_type = ATOMIC_SYMMETRY;
                _top_type = SPHERIC_TOP;
                _symmetry_group = &SymmetryGroups::instance().get("Kh");
                downgrade_infinite_symm_group(max_axis_rep);
                _rotation_to_std_frame = arma::mat(3, 3, arma::fill::eye);
                _symmetrized_coords = arma::mat(1, 3, arma::fill::zeros);

                return;
            }

            arma::vec lambda;
            arma::mat beta;
            arma::eig_sym(lambda, beta, inertia(coords, q));

            if (lambda(0) < 1e-2) {
                _symmetry_type = LINEAR_SYMMETRY;
                _top_type = SYMMETRIC_TOP;

                arma::vec3 v = arma::normalise(coords.col(1) - coords.col(0));

                // prevent flipping
                if (arma::dot(v, arma::vec3({0.0, 0.0, 1.0})) < 0)
                    v = -v;

                _rotation_to_std_frame = align_to_z_axis(v);
                _symmetrized_coords = _rotation_to_std_frame * coords;

                if (are_equivalent(
                        _symmetrized_coords, -_symmetrized_coords, q, tol_dist))
                    _symmetry_group = &SymmetryGroups::instance().get("D*h");
                else
                    _symmetry_group = &SymmetryGroups::instance().get("C*v");

                downgrade_infinite_symm_group(max_axis_rep);

                for (std::size_t i = 0; i < _finite_symmetry_group->rank();
                     ++i) {
                    _perm_rep.push_back(
                        create_perm_rep(_finite_symmetry_group->elements()[i],
                                        _symmetrized_coords,
                                        tol_dist));
                }

                symmetrize_coords(_symmetrized_coords);

                return;
            }

            _symmetry_type = NON_LINEAR_SYMMETRY;

            const arma::vec diff = {std::abs(lambda(0) - lambda(1)),
                                    std::abs(lambda(0) - lambda(2)),
                                    std::abs(lambda(1) - lambda(2))};

            if (arma::min(diff) < tol_eigenvectors)
                if (arma::sum(diff) < 3 * tol_eigenvectors)
                    _top_type = SPHERIC_TOP;
                else
                    _top_type = SYMMETRIC_TOP;
            else
                _top_type = ASYMMETRIC_TOP;

            const arma::vec3 x = {1.0, 0.0, 0.0};
            const arma::vec3 z = {0.0, 0.0, 1.0};

            if (_top_type == SPHERIC_TOP) {
                // any orthogonal system will do, so we'll find one later on
                beta = arma::eye<arma::mat>(3, 3);
            } else if (_top_type == SYMMETRIC_TOP) {
                // find the nondegenerate dimension
                const unsigned p = 2 - arma::index_min(diff);
                if (p != 2) {
                    beta.swap_cols(2, p);
                }
            } else {
                // find the axis most similar to z
                const unsigned p = arma::index_max(
                    arma::abs(z.t() * beta));
                if (p != 2) {
                    beta.swap_cols(2, p);
                }
            }

            if (arma::dot(z, beta.col(2)) < 0)
                beta.col(2) = -beta.col(2);

            if (arma::index_max(arma::abs(x.t() * beta.head_cols(2))) != 0)
                beta.swap_cols(0, 1);

            if (arma::dot(x, beta.col(0)) < 0)
                beta.col(0) = -beta.col(0);

            // enforce proper rotation
            if (arma::det(beta) < 0)
                beta.col(1) = -beta.col(1);

            coords = beta.t() * coords;

            const AxisSet proper_elems =
                find_proper_elements(coords, q, tol_dist);
            const AxisSet improper_elems =
                find_improper_elements(coords, q, tol_dist);

            AxisSet elems(proper_elems);
            elems.insert(improper_elems.begin(), improper_elems.end());

            const arma::mat R = standard_orientation(elems);

            coords = R * coords;
            _rotation_to_std_frame = R * beta.t();

            const compare_axes compare_axes(tol_dist);
            AxisSet sf_elems(compare_axes);

            for (const auto& e : elems)
                sf_elems.insert({R * e.dir, e.fold});

            if (are_equivalent(coords, -coords, q, tol_dist))
                sf_elems.insert({{0.0, 0.0, 1.0}, -2});

            _finite_symmetry_group = &find_finite_group(sf_elems);
            _symmetry_group = _finite_symmetry_group;

            for (std::size_t i = 0; i < _finite_symmetry_group->rank(); ++i) {
                _perm_rep.push_back(
                    create_perm_rep(_finite_symmetry_group->elements()[i],
                                    coords,
                                    tol_dist));
            }

            symmetrize_coords(coords);
        }

        SymmetryInfo::SymmetryType SymmetryInfo::symmetry_type() const
        {
            return _symmetry_type;
        }

        SymmetryInfo::TopType SymmetryInfo::top_type() const
        {
            return _top_type;
        }

        const SymmetryGroup& SymmetryInfo::symmetry_group() const
        {
            return *_symmetry_group;
        }

        const FiniteSymmetryGroup& SymmetryInfo::finite_symmetry_group() const
        {
            return *_finite_symmetry_group;
        }

        const arma::mat& SymmetryInfo::rotation_to_std_frame() const
        {
            return _rotation_to_std_frame;
        }

        const arma::vec& SymmetryInfo::translation_to_std_frame() const
        {
            return _translation_to_std_frame;
        }

        const arma::mat& SymmetryInfo::symmetrized_coords() const
        {
            return _symmetrized_coords;
        }

        const std::vector<std::vector<unsigned>>& SymmetryInfo::perm_rep() const
        {
            return _perm_rep;
        }

        const std::vector<unsigned>& SymmetryInfo::unique_atoms() const
        {
            return _unique_atoms;
        }
    }
}
