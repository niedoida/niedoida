/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/symmetry_group.hpp"

#include "symmetry_kit/decomposition.hpp"
#include "symmetry_kit/symmetry_operation_info.hpp"

#include <boost/optional.hpp>

#include <cassert>
#include <list>
#include <set>

namespace {

    class matrix_approx_eq : public std::unary_function<arma::mat, bool> {
        arma::mat m_x;
        double m_eps;

    public:
        matrix_approx_eq(const arma::mat& x, double eps) : m_x(x), m_eps(eps) {}

        bool operator()(const arma::mat& x) const
        {
            assert(m_x.n_rows == x.n_rows && m_x.n_cols == x.n_cols);
            return arma::approx_equal(x, m_x, "absdiff", m_eps);
        }
    };

    typedef std::vector<arma::mat> Elements;

    Elements generate(const Elements& generators)
    {
        const double eps = 1e-2;

        Elements elements;
        // Add identity as first element
        elements.push_back(arma::mat(3, 3, arma::fill::eye));
        // For starters use the generators as elements. Do not assume
        // the generators are all distinct - it's easy to build
        // generator set containing duplicate elements.
        for (Elements::const_iterator i = generators.begin();
             i != generators.end();
             ++i)
            if (find_if(elements.begin(),
                        elements.end(),
                        matrix_approx_eq(*i, eps)) == elements.end())
                elements.push_back(*i);

        // Generate the whole rest of elements
        Elements new_elements;
        // int t=0;
        do {
            new_elements.clear();

            for (Elements::const_iterator i = elements.begin();
                 i != elements.end();
                 ++i) {
                for (Elements::const_iterator j = elements.begin();
                     j != elements.end();
                     ++j) {
                    const arma::mat e = (*i) * (*j);

                    if (find_if(elements.begin(),
                                elements.end(),
                                matrix_approx_eq(e, eps)) == elements.end() &&
                        find_if(new_elements.begin(),
                                new_elements.end(),
                                matrix_approx_eq(e, eps)) ==
                            new_elements.end()) {
                        new_elements.push_back(e);
                    }
                }
            }

            std::copy(new_elements.begin(),
                      new_elements.end(),
                      std::back_inserter(elements));

        } while (!new_elements.empty());

        return elements;
    }

    arma::umat cayley_table(const Elements& elements)
    {
        const unsigned size = elements.size();

        arma::umat ct(size, size);

        for (unsigned row = 0; row < size; ++row)
            for (unsigned col = 0; col < size; ++col) {
                const Elements::const_iterator i = std::find_if(
                    elements.begin(),
                    elements.end(),
                    matrix_approx_eq(elements[row] * elements[col], 1e-2));
                if (i == elements.end())
                    throw std::logic_error("symmetry element not found");
                ct(row, col) = i - elements.begin();
            }

        return ct;
    }

    arma::uvec elements_order(const arma::umat& cayley_table)
    {
        const unsigned size = cayley_table.n_cols;

        arma::uvec orders(size);

        for (unsigned i = 0; i < size; ++i) {
            unsigned order = 1;
            unsigned j = cayley_table(i, i);
            while (i != j) {
                j = cayley_table(j, i);
                order++;
                if (order > size) {
                    order = 0;
                    break;
                }
            }
            orders(i) = order;
        }

        return orders;
    }

    std::vector<std::vector<unsigned>>
    determine_conj_classes(const arma::umat& cayley_table)
    {
        std::vector<std::vector<unsigned>> conj_classes;

        const unsigned group_order = cayley_table.n_rows;
        std::vector<unsigned> Inv(group_order);

        for (unsigned i = 0; i < group_order; i++)
            for (unsigned j = 0; j < group_order; j++)
                if (cayley_table(i, j) == 0) {
                    Inv[i] = j;
                    break;
                }

        std::list<unsigned> elements;
        for (unsigned i = 0; i < group_order; i++)
            elements.push_back(i);
        while (!elements.empty()) {
            std::vector<unsigned> cc;
            unsigned representant = *(elements.begin());
            for (std::list<unsigned>::iterator it = elements.begin();
                 it != elements.end();) {
                bool conjugate = false;
                for (unsigned j = 0; j < group_order; j++) {
                    if (cayley_table(cayley_table(j, *it), Inv[j]) ==
                        representant) {
                        conjugate = true;
                        break;
                    }
                }
                if (conjugate) {
                    cc.push_back(*it);
                    it = elements.erase(it);
                } else
                    it++;
            }
            conj_classes.push_back(cc);
        }
        return conj_classes;
    }

    void sort_and_clean_char_table(arma::cx_mat& char_table)
    {
        const double eps = 1e-10;
        char_table.each_col([eps](arma::cx_vec& chi) {
            for (std::complex<double>& c : chi) {
                const double real = c.real();
                const double imag = c.imag();
                if (std::abs(real) < eps && std::abs(imag) < eps)
                    c = std::complex<double>(0., 0.);
                else if (std::abs(real) < eps)
                    c = std::complex<double>(0., imag);
                else if (std::abs(imag) < eps)
                    c = std::complex<double>(real, 0.);
            }
        });

        const unsigned size = char_table.n_cols;
        for (unsigned i = 0; i < size; i++) {
            double max = char_table(0, i).real();
            unsigned max_ind = i;
            for (unsigned j = i; j < size; j++) {
                const double next = char_table(0, j).real();
                if (next > max) {
                    max = next;
                    max_ind = j;
                }
            }
            char_table.swap_cols(i, max_ind);
        }
    }
    // funkcja ta buduje macierze (M_R)_{ST} o elementach c_{RST}

    arma::cube build_ms(const arma::umat& cayley_table,
                        const std::vector<std::vector<unsigned>>& conj_classes)
    {
        const unsigned no_cc = conj_classes.size();
        std::vector<unsigned> cc_sizes;
        for (const std::vector<unsigned>& ConjClas : conj_classes)
            cc_sizes.push_back(ConjClas.size());

        arma::cube Ms(no_cc, no_cc, no_cc, arma::fill::zeros);

        for (unsigned R = 0; R < no_cc; R++)
            for (unsigned S = 0; S < no_cc; S++)
                for (unsigned r : conj_classes[R])
                    for (unsigned s : conj_classes[S])
                        for (unsigned T = 0; T < no_cc; T++) {
                            for (unsigned t : conj_classes[T])
                                if (cayley_table(r, s) == t)
                                    Ms(S, T, R) += 1;
                        }

        for (unsigned R = 0; R < no_cc; R++)
            for (unsigned S = 0; S < no_cc; S++)
                for (unsigned T = 0; T < no_cc; T++)
                    Ms(S, T, R) /=
                        std::sqrt(cc_sizes[S]) * std::sqrt(cc_sizes[T]);

        return Ms;
    }

    arma::cx_mat
    build_char_table(const arma::umat& cayley_table,
                     const std::vector<std::vector<unsigned>>& conj_classes)
    {
        // Argumenty funkcji:
        //
        // arma::mat& cayley_table to tabela mnozenia w grupie;
        // Konwencje:
        // lewy indeks(indeks wiersza)  odpowiada elementowi stojącemu po
        // lewej  stronie znaku dzialania grupowego. prawy indeks(indeks
        // kolumny) odpowiada elementowi stojącemu po prawej stronie znaku
        // dzialania grupowego. Elementem grupy odpowiadającym indeksowi
        // równemu zero jest element neutralny.
        //
        // std::vector<std::vector<unsigned> >& conj_classes
        // to wektor trzymajacy klasy sprzezonosci
        // klasa sprzezonosci jest tu wektorem indeksow elementow grupy z
        // tejze klasy

        // pomocnicza wielkosci: rzad grupy, liosc klas sprzezonosci oraz
        // ilosci elelentow w kolejnych klasach sprzezonosci
        const unsigned group_order = cayley_table.n_rows;
        std::vector<unsigned> cc_sizes;
        for (const std::vector<unsigned>& cc : conj_classes)
            cc_sizes.push_back(cc.size());

        // budujemy macierze M wystepujace w algorytmie Burnsidea i
        // (wspolnie) je diagonalizujemy
        const arma::cube Ms = build_ms(cayley_table, conj_classes);

        arma::cx_cube cxMs(Ms, arma::zeros<arma::cube>(arma::size(Ms)));

        // Analizyjemy wspolne wektory wlasne i wyciagamy z nich informacje o
        // charakterach (jeden wektro wlasny - jeden wiersz w tab charakterow)
        const niedoida::symmetry::Decomposition dec =
            niedoida::symmetry::common_eig_gen(cxMs);

        // analizyjemy wspolne wektory wlasne i wyciagamy z nich informacje
        // o charakterach (jeden wektor wlasny - jeden wiersz w tab
        // charakterow)
        arma::cx_mat Chis;
        dec.get_basis().each_col(
            [&Chis, &cc_sizes, &group_order](arma::cx_vec Chi) {
                // najpierw z wektora bazowego robimy wektor, ktory bedzie
                // proporcjonalny do wiersza w tab charakterow
                for (unsigned i = 0; i < cc_sizes.size(); ++i)
                    Chi(i) /= std::sqrt(cc_sizes[i]);
                // normowanie z norma jak dla charakterow
                double norm = 0;
                for (unsigned i = 0; i < cc_sizes.size(); ++i)
                    norm += (cc_sizes[i]) * real(conj(Chi(i)) * Chi(i));
                Chi /= std::sqrt(norm / group_order);
                const arma::cx_double z = Chi(0) / std::abs(Chi(0));
                Chi /= z;
                Chis = arma::join_rows(Chis, Chi);
            });

        sort_and_clean_char_table(Chis);

        return Chis.t();
    }

    arma::mat build_real_character_table(const arma::cx_mat ct)
    {
        arma::mat rct;

        // simply pass real characters, collect pairs of conjugate complex
        // characters
        for (std::size_t i = 0; i < ct.n_rows; ++i) {
            if (norm(imag(ct.row(i))) < 1e-10)
                rct.insert_rows(rct.n_rows, real(ct.row(i)));
            else
                for (std::size_t j = 0; j < i; ++j)
                    if (norm(imag(ct.row(i)) + imag(ct.row(j))) < 1e-10) {
                        rct.insert_rows(rct.n_rows, 2 * real(ct.row(j)));
                        break;
                    }
        }

        return rct;
    }

    arma::mat sort_character_table(const arma::mat& character_table,
                                   unsigned ecc,
                                   unsigned pacc,
                                   boost::optional<unsigned> icc,
                                   boost::optional<unsigned> c2hcc,
                                   boost::optional<unsigned> shcc,
                                   boost::optional<unsigned> svcc)
    {
        std::vector<arma::rowvec> t(character_table.n_rows);
        for (size_t i = 0; i < character_table.n_rows; ++i)
            t[i] = character_table.row(i);

        std::sort(t.begin(),
                  t.end(),
                  [&ecc, &pacc, &icc, &shcc, &c2hcc, &svcc](
                      const arma::rowvec& a, const arma::rowvec& b) -> bool {
                      std::vector<unsigned> used_indices;
                      arma::irowvec x(a.n_cols);
                      arma::irowvec y(b.n_cols);

                      for (unsigned i = 0; i < x.n_cols; ++i) {
                          x(i) = std::round(1000 * a(i));
                          y(i) = std::round(1000 * b(i));
                      }

                      if (icc) {
                          if (x(*icc) > 0 && y(*icc) < 0) {
                              used_indices.push_back(*icc);
                              return true;
                          }
                          if (x(*icc) < 0 && y(*icc) > 0) {
                              used_indices.push_back(*icc);
                              return false;
                          }

                          if (std::abs(x(*icc)) <
                              std::abs(y(*icc))) { // increasing ord
                              used_indices.push_back(*icc);
                              return true;
                          }
                          if (std::abs(x(*icc)) > std::abs(y(*icc))) {
                              used_indices.push_back(*icc);
                              return false;
                          }
                      }
                      if (x(ecc) < y(ecc)) {
                          used_indices.push_back(ecc);
                          return true;
                      }
                      if (x(ecc) > y(ecc)) {
                          used_indices.push_back(ecc);
                          return false;
                      }
                      if (x(pacc) > y(pacc)) {
                          used_indices.push_back(pacc);
                          return true;
                      }
                      if (x(pacc) < y(pacc)) {
                          used_indices.push_back(pacc);
                          return false;
                      }
                      if (shcc) {
                          if (x(*shcc) > y(*shcc)) {
                              used_indices.push_back(*shcc);
                              return true;
                          }
                          if (x(*shcc) < y(*shcc)) {
                              used_indices.push_back(*shcc);
                              return false;
                          }
                      }
                      if (c2hcc) {
                          if (x(*c2hcc) > y(*c2hcc)) {
                              used_indices.push_back(*c2hcc);
                              return true;
                          }
                          if (x(*c2hcc) < y(*c2hcc)) {
                              used_indices.push_back(*c2hcc);
                              return false;
                          }
                      }
                      if (svcc) {
                          if (x(*svcc) > y(*svcc)) {
                              used_indices.push_back(*svcc);
                              return true;
                          }
                          if (x(*svcc) < y(*svcc)) {
                              used_indices.push_back(*svcc);
                              return false;
                          }
                      }

                      std::vector<unsigned> all_indices;
                      std::vector<unsigned> diff;

                      for (unsigned i = 0; i < a.n_cols; ++i)
                          all_indices.push_back(i);

                      std::set_difference(all_indices.begin(),
                                          all_indices.end(),
                                          used_indices.begin(),
                                          used_indices.end(),
                                          std::inserter(diff, diff.begin()));

                      arma::irowvec x_sliced(diff.size());
                      arma::irowvec y_sliced(diff.size());

                      for (unsigned i = 0; i < diff.size(); ++i) {
                          x_sliced(i) = x(diff[i]);
                          y_sliced(i) = y(diff[i]);
                      }
                      return std::lexicographical_compare(x_sliced.begin(),
                                                          x_sliced.end(),
                                                          y_sliced.begin(),
                                                          y_sliced.end());
                  });

        arma::mat A(character_table.n_rows, character_table.n_cols);
        for (unsigned i = 0; i < t.size(); ++i)
            A.row(i) = t[i];
        return A;
    }

    std::vector<std::string>
    number_labels(const std::vector<std::string>& labels)
    {
        const std::map<std::string, unsigned> counter_template = {{"", 0},
                                                                  {"'", 0},
                                                                  {"\"", 0},
                                                                  {"g", 0},
                                                                  {"u", 0},
                                                                  {"g'", 0},
                                                                  {"g\"", 0},
                                                                  {"u'", 0},
                                                                  {"u\"", 0}};
        std::map<char, std::map<std::string, unsigned>> all_counters = {
            {'A', counter_template},
            {'B', counter_template},
            {'E', counter_template},
            {'T', counter_template},
            {'G', counter_template},
            {'H', counter_template}};

        for (const std::string& label : labels) {
            std::map<std::string, unsigned>& counters =
                all_counters[label.front()];
            counters[label.substr(1)] += 1;
        }

        std::map<char, std::map<std::string, unsigned>> old_counters =
            all_counters;

        all_counters = {{'A', counter_template},
                        {'B', counter_template},
                        {'E', counter_template},
                        {'T', counter_template},
                        {'G', counter_template},
                        {'H', counter_template}};

        std::vector<std::string> numbered_labels = labels;

        for (std::string& label : numbered_labels) {
            if (old_counters[label.front()][label.substr(1)] > 1) {
                std::map<std::string, unsigned>& counters =
                    all_counters[label.front()];
                label.insert(1, std::to_string(++counters[label.substr(1)]));
            }
        }

        return numbered_labels;
    }
}

namespace niedoida {
    namespace symmetry {
        FiniteSymmetryGroup::FiniteSymmetryGroup(
            const std::vector<arma::mat>& generators) :
            _elements(generate(generators)),
            _cayley_table(cayley_table(_elements)),
            _abelian(
                arma::all(arma::vectorise(_cayley_table == _cayley_table.t()))),
            _conjugacy_classes(determine_conj_classes(_cayley_table)),
            _element_order(elements_order(_cayley_table)),
            _character_table(
                build_char_table(_cayley_table, _conjugacy_classes)),
            _real_character_table(build_real_character_table(_character_table))
        {
            unsigned eidx; // identity (always first, but just in case)
            boost::optional<unsigned> iidx;   // inversion
            boost::optional<unsigned> c2hidx; // c_2h
            boost::optional<unsigned> shidx;  // sigma_h
            boost::optional<unsigned> svidx;  // sigma_v
            boost::optional<unsigned> sdidx;  // sigma_d

            // Variables used to determine principal axis
            boost::optional<unsigned> piaidx;
            unsigned piafold = 0; // principal improper axis fold
            boost::optional<unsigned> ppaidx;
            unsigned ppafold = 0; // principal proper axis fold

            for (unsigned i = 0; i < _elements.size(); ++i) {
                const SymmetryOperationInfo e(_elements[i]);

                const arma::vec3 x = {1, 0, 0};
                const arma::vec3 y = {0, 1, 0};
                const arma::vec3 z = {0, 0, 1};

                if (e.label().substr(0, 2) == "C1")
                    eidx = i;
                else if (e.label() == "i")
                    iidx = i;
                else if (e.label().substr(0, 2) == "C2" &&
                         std::abs(arma::dot(e.direction(), z)) < 1e-3)
                    c2hidx = i;
                else if (e.label().substr(0, 2) == "S1" &&
                         arma::norm(arma::cross(e.direction(), z)) < 1e-3)
                    shidx = i;
                else if (e.label().substr(0, 2) == "S1" &&
                         (arma::norm(arma::cross(e.direction(), x)) < 1e-3 ||
                          arma::norm(arma::cross(e.direction(), y)) < 1e-3))
                    svidx = i;
                else if (e.label().substr(0, 2) == "S1" &&
                         std::abs(arma::dot(e.direction(), z)) < 1e-3)
                    sdidx = i;

                if (e.label().front() == 'S' &&
                    std::abs(arma::dot(e.direction(), z) - 1) < 1e-3 &&
                    e.fold().denominator() > piafold) {
                    piaidx = i;
                    piafold = e.fold().denominator();
                }

                if (e.label().front() == 'C' &&
                    std::abs(arma::dot(e.direction(), z) - 1) < 1e-3 &&
                    e.fold().denominator() > ppafold) {
                    ppaidx = i;
                    ppafold = e.fold().denominator();
                }
            }

            // If group contains: inversion, improper axis of fold
            // 2n and proper axis of fold n, the proper axis is the
            // principal one. If group does not contain inversion
            // but contains improper axis of fold 2n and proper axis
            // of fold n, improper axis is principal
            const unsigned paidx =
                (!iidx && piaidx && piafold == 2 * ppafold) ? *piaidx : *ppaidx;

            unsigned ecc;
            boost::optional<unsigned> icc;
            boost::optional<unsigned> c2hcc;
            boost::optional<unsigned> shcc;
            boost::optional<unsigned> svcc;
            unsigned pacc;

            for (unsigned i = 0; i < _conjugacy_classes.size(); ++i) {

                const std::vector<unsigned>& cc = _conjugacy_classes[i];

                std::vector<unsigned>::const_iterator it =
                    std::find(cc.begin(), cc.end(), eidx);
                if (it != cc.end())
                    ecc = i;

                it = std::find(cc.begin(), cc.end(), paidx);
                if (it != cc.end())
                    pacc = i;

                if (iidx) {
                    it = std::find(cc.begin(), cc.end(), *iidx);
                    if (it != cc.end())
                        icc = i;
                }
                if (c2hidx) {
                    it = std::find(cc.begin(), cc.end(), *c2hidx);
                    if (it != cc.end())
                        c2hcc = i;
                }
                if (shidx) {
                    it = std::find(cc.begin(), cc.end(), *shidx);
                    if (it != cc.end())
                        shcc = i;
                }
                if (svidx) {
                    it = std::find(cc.begin(), cc.end(), *svidx);
                    if (it != cc.end())
                        svcc = i;
                }
            }

            _real_character_table = sort_character_table(
                _real_character_table, ecc, pacc, icc, shcc, c2hcc, svcc);

            for (unsigned i = 0; i < _real_character_table.n_rows; ++i) {
                switch (static_cast<int>(
                    std::round(_real_character_table(i, ecc)))) {
                case 5:
                    _real_character_labels.push_back("H");
                    break;
                case 4:
                    _real_character_labels.push_back("G");
                    break;
                case 3:
                    _real_character_labels.push_back("T");
                    break;
                case 2:
                    _real_character_labels.push_back("E");
                    break;
                case 1:
                    if (_real_character_table(i, pacc) > 0)
                        _real_character_labels.push_back("A");
                    else
                        _real_character_labels.push_back("B");
                    break;
                }

                if (icc) {
                    if (_real_character_table(i, *icc) > 0)
                        _real_character_labels.back().append("g");
                    else
                        _real_character_labels.back().append("u");
                } else if (shcc) {
                    if (_real_character_table(i, *shcc) > 0)
                        _real_character_labels.back().append("'");
                    else if (_real_character_table(i, *shcc) < 0)
                        _real_character_labels.back().append("\"");
                }
            }

            std::set<std::string> tattered_labels;
            for (std::string label : _real_character_labels) {
                std::string::size_type p = label.find("'");
                if (p == std::string::npos)
                    p = label.find("\"");
                if (p != std::string::npos) {
                    label.erase(p, 1);
                    tattered_labels.insert(label);
                }
            }

            if (tattered_labels.size() == _real_character_labels.size())
                for (std::string& label : _real_character_labels) {
                    std::string::size_type p = label.find("'");
                    if (p == std::string::npos)
                        p = label.find("\"");
                    if (p != std::string::npos)
                        label.erase(p, 1);
                }

            _real_character_labels = number_labels(_real_character_labels);
        }

        unsigned FiniteSymmetryGroup::rank() const { return _elements.size(); }

        const std::vector<arma::mat>& FiniteSymmetryGroup::elements() const
        {
            return _elements;
        }

        const arma::uvec& FiniteSymmetryGroup::element_order() const
        {
            return _element_order;
        }

        bool FiniteSymmetryGroup::is_abelian() const { return _abelian; }

        const std::vector<std::vector<unsigned>>&
        FiniteSymmetryGroup::conjugacy_classes() const
        {
            return _conjugacy_classes;
        }

        const arma::umat& FiniteSymmetryGroup::multiplication_table() const
        {
            return _cayley_table;
        }

        const arma::cx_mat& FiniteSymmetryGroup::character_table() const
        {
            return _character_table;
        }

        const arma::mat& FiniteSymmetryGroup::real_character_table() const
        {
            return _real_character_table;
        }

        const std::vector<std::string>&
        FiniteSymmetryGroup::real_character_labels() const
        {
            return _real_character_labels;
        }
    }
}
