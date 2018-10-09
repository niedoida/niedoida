/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_SYMMETRY_KIT_SYMMETRY_GROUP_HPP
#define NIEDOIDA_SYMMETRY_KIT_SYMMETRY_GROUP_HPP

#include <armadillo>
#include <boost/noncopyable.hpp>
#include <map>
#include <string>
#include <vector>

namespace niedoida {
    namespace symmetry {

        class SymmetryGroup {
        public:
            virtual ~SymmetryGroup() = default;
            virtual std::string name() const = 0;
            virtual bool is_finite() const = 0;
            virtual bool is_abelian() const = 0;
        };

        class InfiniteSymmetryGroup : public SymmetryGroup {
        public:
            bool is_finite() const override { return false; }
        };

        class FiniteSymmetryGroup : public SymmetryGroup {
        public:
            explicit FiniteSymmetryGroup(
                const std::vector<arma::mat>& generators);
            FiniteSymmetryGroup() = default;

            bool is_finite() const override { return true; }
            bool is_abelian() const override;

            unsigned rank() const;
            const std::vector<arma::mat>& elements() const;
            const std::vector<std::vector<unsigned>>& conjugacy_classes() const;
            const arma::uvec& element_order() const;
            const arma::umat& multiplication_table() const;
            const arma::cx_mat& character_table() const;
            const arma::mat& real_character_table() const;
            const std::vector<std::string>& real_character_labels() const;

        protected:
            std::vector<arma::mat> _elements;
            arma::umat _cayley_table;
            bool _abelian;
            std::vector<std::vector<unsigned>> _conjugacy_classes;
            arma::uvec _element_order;
            arma::cx_mat _character_table;
            arma::mat _real_character_table;
            std::vector<std::string> _real_character_labels;
        };

        bool is_subgroup(const FiniteSymmetryGroup& sub,
                         const FiniteSymmetryGroup& super);

        const FiniteSymmetryGroup&
        largest_abelian_subgroup(const FiniteSymmetryGroup&);

        class SymmetryGroups : boost::noncopyable {
        public:
            ~SymmetryGroups();

            static SymmetryGroups& instance();
            const SymmetryGroup& get(const std::string& symbol) const;
            typedef std::map<std::string, const SymmetryGroup*>::const_iterator
                iterator;
            iterator begin() const;
            iterator end() const;

        private:
            SymmetryGroups();
            std::map<std::string, const SymmetryGroup*> m_groups;
            static SymmetryGroups* _instance;
        };

        class KhSymmetryGroup : public InfiniteSymmetryGroup {
        public:
            std::string name() const override { return "Kh"; }

            bool is_abelian() const override { return true; }
        };

        class DInfhSymmetryGroup : public InfiniteSymmetryGroup {
        public:
            std::string name() const override { return "D*h"; }

            bool is_abelian() const override { return false; }
        };

        class CInfvSymmetryGroup : public InfiniteSymmetryGroup {
        public:
            std::string name() const override { return "C*v"; }

            bool is_abelian() const override { return true; }
        };

        class CsSymmetryGroup : public FiniteSymmetryGroup {
        public:
            CsSymmetryGroup();

            std::string name() const override { return "Cs"; }
        };

        class CiSymmetryGroup : public FiniteSymmetryGroup {
        public:
            CiSymmetryGroup();

            std::string name() const override { return "Ci"; }
        };

        class CnSymmetryGroup : public FiniteSymmetryGroup {
        public:
            CnSymmetryGroup(unsigned /*n*/);
            virtual std::string name() const override;

        protected:
            CnSymmetryGroup(unsigned /*n*/,
                            const std::vector<arma::mat>& /*super_generators*/);

            const unsigned m_n;
        };

        class CnhSymmetryGroup : public CnSymmetryGroup {
        public:
            CnhSymmetryGroup(unsigned /*n*/);
            std::string name() const override;
        };

        class CnvSymmetryGroup : public CnSymmetryGroup {
        public:
            CnvSymmetryGroup(unsigned /*n*/);
            std::string name() const override;
        };

        class DnSymmetryGroup : public CnSymmetryGroup {
        public:
            DnSymmetryGroup(unsigned /*n*/);
            std::string name() const override;

        protected:
            DnSymmetryGroup(unsigned /*n*/,
                            const std::vector<arma::mat>& /*super_generators*/);
        };

        class DnhSymmetryGroup : public DnSymmetryGroup {
        public:
            DnhSymmetryGroup(unsigned /*n*/);
            std::string name() const override;
        };

        class DndSymmetryGroup : public DnSymmetryGroup {
        public:
            DndSymmetryGroup(unsigned /*n*/);
            std::string name() const override;
        };

        class SnSymmetryGroup : public FiniteSymmetryGroup {
        public:
            SnSymmetryGroup(unsigned n);
            std::string name() const override;

        protected:
            const unsigned m_n;
        };

        class TSymmetryGroup : public FiniteSymmetryGroup {
        public:
            TSymmetryGroup();
            virtual std::string name() const override;

        protected:
            TSymmetryGroup(const std::vector<arma::mat>&);
        };

        class ThSymmetryGroup : public TSymmetryGroup {
        public:
            ThSymmetryGroup();
            std::string name() const override;
        };

        class TdSymmetryGroup : public TSymmetryGroup {
        public:
            TdSymmetryGroup();
            std::string name() const override;
        };

        class OSymmetryGroup : public FiniteSymmetryGroup {
        public:
            OSymmetryGroup();
            std::string name() const override;

        protected:
            OSymmetryGroup(const std::vector<arma::mat>&);
        };

        class OhSymmetryGroup : public OSymmetryGroup {
        public:
            OhSymmetryGroup();
            std::string name() const override;
        };

        class ISymmetryGroup : public FiniteSymmetryGroup {
        public:
            ISymmetryGroup();
            std::string name() const override;

        protected:
            ISymmetryGroup(const std::vector<arma::mat>&);
        };

        class IhSymmetryGroup : public ISymmetryGroup {
        public:
            IhSymmetryGroup();
            std::string name() const override;
        };
    }
}

#endif
