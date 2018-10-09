/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_SCF_KIT_SCF_FACTORY_HPP
#define NIEDOIDA_SCF_KIT_SCF_FACTORY_HPP

#include "core_kit/factory.hpp"
#include "core_kit/occupations_factory.hpp"
#include "core_kit/fock_matrix_generator_factory.hpp"

#include "scf.hpp"
#include "rhf.hpp"
#include "uhf.hpp"
#include "rohf.hpp"
#include "convergence_accelerator_factory.hpp"

namespace niedoida {
    namespace scf {
        class SCFFactory: public core::Factory<SCF> {
        public:
            SCFFactory(
                std::shared_ptr<const core::OccupationsFactory> occupations_factory,
                std::shared_ptr<const core::FockMatrixGeneratorFactory> fmg_factory, 
                std::shared_ptr<const ConvergenceAcceleratorFactory> ca_factory,
                bool incremental,
                double energy_threshold,
                double density_threshold):
                _occupations_factory(occupations_factory),
                _fmg_factory(fmg_factory),
                _ca_factory(ca_factory),
                _incremental(incremental),
                _energy_threshold(energy_threshold),
                _density_threshold(density_threshold) {}

        protected:
            std::shared_ptr<const core::OccupationsFactory> _occupations_factory;
            std::shared_ptr<const core::FockMatrixGeneratorFactory> _fmg_factory;
            std::shared_ptr<const ConvergenceAcceleratorFactory> _ca_factory;
            bool _incremental;
            double _energy_threshold;
            double _density_threshold;
        };

        class RHFFactory: public SCFFactory {
        public:
            RHFFactory(
                std::shared_ptr<const core::OccupationsFactory> occupations_factory,
                std::shared_ptr<const core::FockMatrixGeneratorFactory> fmg_factory, 
                std::shared_ptr<const ConvergenceAcceleratorFactory> ca_factory,
                bool incremental,
                boost::optional<double> shift,
                double energy_threshold,
                double density_threshold):
                SCFFactory(
                    occupations_factory,
                    fmg_factory, 
                    ca_factory,
                    incremental,
                    energy_threshold,
                    density_threshold),
                _shift(shift) {}

            Product make(std::shared_ptr<const core::System> system) const
            {
                std::unique_ptr<core::Occupations> occupations = 
                    _occupations_factory->make(system);

                std::unique_ptr<core::FockMatrixGenerator> fock_matrix_generator = 
                    _fmg_factory->make(system);

                std::unique_ptr<const DiagonalizeFockMatrix> diagonalize_fock_matrix(new LinIndDiagonalizeFockMatrix(*(system->basis_set.the_basis)));

                std::unique_ptr<ConvergenceAccelerator> convergence_accelerator = 
                    _ca_factory->make(system);

                return Product(
                    new RHF(
                        system,
                        std::move(occupations),
                        std::move(fock_matrix_generator),
                        std::move(diagonalize_fock_matrix),
                        std::move(convergence_accelerator),
                        _incremental,
                        _shift,
                        _energy_threshold,
                        _density_threshold));
            }

        private:
            boost::optional<double> _shift;
        };

        class UHFFactory: public SCFFactory {
        public:
            UHFFactory(
                std::shared_ptr<const core::OccupationsFactory> occupations_factory,
                std::shared_ptr<const core::FockMatrixGeneratorFactory> fmg_factory, 
                std::shared_ptr<const ConvergenceAcceleratorFactory> ca_factory,
                bool incremental,
                boost::optional<double> shift_alpha,
                boost::optional<double> shift_beta,
                double energy_threshold,
                double density_threshold):
                SCFFactory(
                    occupations_factory,
                    fmg_factory, 
                    ca_factory,
                    incremental,
                    energy_threshold,
                    density_threshold),
                _shift_alpha(shift_alpha),
                _shift_beta(shift_beta)
            {
            }

            Product make(std::shared_ptr<const core::System> system) const
            {
                std::unique_ptr<core::Occupations> occupations = 
                    _occupations_factory->make(system);

                std::unique_ptr<core::FockMatrixGenerator> fock_matrix_generator = 
                    _fmg_factory->make(system);

                std::unique_ptr<const DiagonalizeFockMatrix> diagonalize_fock_matrix(new LinIndDiagonalizeFockMatrix(*(system->basis_set.the_basis)));

                std::unique_ptr<ConvergenceAccelerator> convergence_accelerator = 
                    _ca_factory->make(system);

                return Product(
                    new UHF(
                        system,
                        std::move(occupations),
                        std::move(fock_matrix_generator),
                        std::move(diagonalize_fock_matrix),
                        std::move(convergence_accelerator),
                        _incremental,
                        _shift_alpha,
                        _shift_beta,
                        _energy_threshold,
                        _density_threshold));
            }

        private:
            boost::optional<double> _shift_alpha;
            boost::optional<double> _shift_beta;
        };

        class ROHFFactory: public SCFFactory {
        public:
            ROHFFactory(
                std::shared_ptr<const core::OccupationsFactory> occupations_factory,
                std::shared_ptr<const core::FockMatrixGeneratorFactory> fmg_factory, 
                std::shared_ptr<const ConvergenceAcceleratorFactory> ca_factory,
                bool incremental,
                boost::optional<double> shift_alpha,
                boost::optional<double> shift_beta,
                double energy_threshold,
                double density_threshold):
                SCFFactory(
                    occupations_factory,
                    fmg_factory, 
                    ca_factory,
                    incremental,
                    energy_threshold,
                    density_threshold),
                _shift_alpha(shift_alpha),
                _shift_beta(shift_beta) {}

            Product make(std::shared_ptr<const core::System> system) const
            {
                std::unique_ptr<core::Occupations> occupations = 
                    _occupations_factory->make(system);

                std::unique_ptr<core::FockMatrixGenerator> fock_matrix_generator = 
                    _fmg_factory->make(system);

                std::unique_ptr<const DiagonalizeFockMatrix> diagonalize_fock_matrix(new LinIndDiagonalizeFockMatrix(*(system->basis_set.the_basis)));

                std::unique_ptr<ConvergenceAccelerator> convergence_accelerator = 
                    _ca_factory->make(system);

                return Product(
                    new ROHF(
                        system,
                        std::move(occupations),
                        std::move(fock_matrix_generator),
                        std::move(diagonalize_fock_matrix),
                        std::move(convergence_accelerator),
                        _incremental,
                        _shift_alpha,
                        _shift_beta,
                        _energy_threshold,
                        _density_threshold));
            }

        private:
            boost::optional<double> _shift_alpha;
            boost::optional<double> _shift_beta;
        };
    }
}

#endif
