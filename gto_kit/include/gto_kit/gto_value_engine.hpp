/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_GTO_KIT_GTO_VALUE_ENGINE_HPP
#define NIEDOIDA_GTO_KIT_GTO_VALUE_ENGINE_HPP

#include "core_kit/ao_value_engine.hpp"
#include "core_kit/basis_set.hpp"
#include "core_kit/ao_value_engine_factory.hpp"

namespace niedoida {
    namespace gto {
        class GTOValueEngine: public core::AOValueEngine {
        public:
            GTOValueEngine(const core::BasisSet& basis_set);

            void calc(
                    const arma::vec::fixed<3>& coords, 
                    const std::vector<std::size_t>& significant_shells,
                    double* const values, 
                    double* const derivs = 0,
                    double* const derivs2 = 0) const override;

        private:
            void do_calc_s(
                const unsigned shell_idx,
                double* NIEDOIDA_RESTRICT values,
                double* NIEDOIDA_RESTRICT derivs,
                double* NIEDOIDA_RESTRICT derivs2) const;

            void do_calc_p(
                const unsigned shell_idx,
                double* NIEDOIDA_RESTRICT values,
                double* NIEDOIDA_RESTRICT derivs,
                double* NIEDOIDA_RESTRICT derivs2) const;

            void do_calc_segmented_sp(
                const unsigned shell_idx,
                double* NIEDOIDA_RESTRICT values,
                double* NIEDOIDA_RESTRICT derivs,
                double* NIEDOIDA_RESTRICT derivs2) const;

            void do_calc(
                const unsigned shell_idx,
                double* NIEDOIDA_RESTRICT values,
                double* NIEDOIDA_RESTRICT derivs,
                double* NIEDOIDA_RESTRICT derivs2) const;

            void update_atom_point_pair(
                const core::Atom* atom, 
                const arma::vec::fixed<3>& coords) const;

            mutable std::unique_ptr<double[]> m_primitive_exp_values;
            mutable std::unique_ptr<double[]> m_radial_values;
            mutable std::unique_ptr<double[]> m_radial_derivs;
            mutable std::unique_ptr<double[]> m_radial_derivs2;

            mutable const core::Atom* m_atom;
            mutable double m_x;
            mutable double m_y;
            mutable double m_z;
            mutable double m_r2;

            std::vector<const core::Shell*> m_shells;
            std::vector<std::size_t> m_shell_sizes;
            std::vector<const core::Atom*> m_atoms;
            std::vector<arma::mat > m_prenormed_contraction_coeffs;
            std::size_t m_max_shell_size;
            std::size_t m_max_no_primitives;

            enum ShellType {
                SHELL_TYPE_S,
                SHELL_TYPE_P,
                SHELL_TYPE_SP,
                SHELL_TYPE_GENERAL
            };

            std::vector<ShellType> m_shell_types;
        };

        class GTOValueEngineFactory: public core::AOValueEngineFactory {
        public:
            Product make(std::shared_ptr<const core::System> system) const
            {
                return std::unique_ptr<core::AOValueEngine>(new GTOValueEngine(system->basis_set));
            }
        };
    }
}

#endif
