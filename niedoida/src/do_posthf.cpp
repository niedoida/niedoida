/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "io_kit/log.hpp"
#include "niedoida/niedoida.hpp"
#include "posthf_kit/posthf_kit.hpp"

namespace niedoida {
    void do_posthf(
        const InputData& input_data,
        std::shared_ptr<const core::System> system,
        const scf::SCF& scf,
        std::shared_ptr<const core::TwoElectronIntegralEngineFactory>
            two_e_ie_factory,
        std::shared_ptr<const core::PostHFQuasiTwoElectronIntegralEngineFactory>
            posthf_quasi_two_e_ie_factory,
        std::shared_ptr<const DFTMethod> dft_method)
    {
        std::unique_ptr<posthf::MP2> mp2;

        if (!input_data.posthf_aux_basis_set_name.empty()) {

            if (!scf.is_restricted())
                abort();

            mp2.reset(new posthf::DF_RHF_MP2(
                system,
                posthf_quasi_two_e_ie_factory,
                scf.mo_energies(core::SPIN_ALPHA),
                scf.mo_coefficients(core::SPIN_ALPHA),
                input_data.moller_plesset_params.memory_pool *
                    storage_unit_factor(input_data),
                input_data.moller_plesset_params.no_frozen,
                input_data.moller_plesset_params.no_deleted,
                input_data.moller_plesset_params.eps,
                input_data.moller_plesset_params.degeneracy_corrected));

        } else {

            std::unique_ptr<core::TwoElectronIntegralEngine> two_e_ints =
                two_e_ie_factory->make(system);

            if (scf.is_restricted()) {
                if (input_data.moller_plesset_params.type ==
                    InputData::MollerPlessetParams::CONVENTIONAL_MP2) {
                    mp2.reset(new posthf::RHF_MP2(
                        system,
                        std::move(two_e_ints),
                        scf.mo_energies(core::SPIN_ALPHA),
                        scf.mo_coefficients(core::SPIN_ALPHA),
                        input_data.moller_plesset_params.memory_pool *
                            storage_unit_factor(input_data),
                        input_data.moller_plesset_params.no_frozen,
                        input_data.moller_plesset_params.no_deleted,
                        input_data.moller_plesset_params.eps,
                        input_data.moller_plesset_params.degeneracy_corrected));
                }
                if (input_data.moller_plesset_params.type ==
                    InputData::MollerPlessetParams::CONVENTIONAL_MP2_IMP) {
                    mp2.reset(new posthf::RHF_MP2_IMP(
                        system,
                        std::move(two_e_ints),
                        scf.mo_energies(core::SPIN_ALPHA),
                        scf.mo_coefficients(core::SPIN_ALPHA),
                        input_data.moller_plesset_params.memory_pool *
                            storage_unit_factor(input_data),
                        input_data.moller_plesset_params.no_frozen,
                        input_data.moller_plesset_params.no_deleted,
                        input_data.moller_plesset_params.eps,
                        input_data.moller_plesset_params.degeneracy_corrected));
                }
                if (input_data.moller_plesset_params.type ==
                    InputData::MollerPlessetParams::CONVENTIONAL_MP2_MINMEM) {
                    mp2.reset(new posthf::RHF_MP2_MINMEM(
                        system,
                        std::move(two_e_ints),
                        scf.mo_energies(core::SPIN_ALPHA),
                        scf.mo_coefficients(core::SPIN_ALPHA),
                        input_data.moller_plesset_params.memory_pool *
                            storage_unit_factor(input_data),
                        input_data.moller_plesset_params.no_frozen,
                        input_data.moller_plesset_params.no_deleted,
                        input_data.moller_plesset_params.eps,
                        input_data.moller_plesset_params.degeneracy_corrected));
                }
                if (input_data.moller_plesset_params.type ==
                    InputData::MollerPlessetParams::CONVENTIONAL_MP2_IMP_2) {
                    mp2.reset(new posthf::RHF_MP2_IMP_2(
                        system,
                        two_e_ie_factory,
                        scf.mo_energies(core::SPIN_ALPHA),
                        scf.mo_coefficients(core::SPIN_ALPHA),
                        input_data.moller_plesset_params.memory_pool *
                            storage_unit_factor(input_data),
                        input_data.moller_plesset_params.no_frozen,
                        input_data.moller_plesset_params.no_deleted,
                        input_data.moller_plesset_params.eps,
                        input_data.integration_params.cache_size,
                        input_data.moller_plesset_params.degeneracy_corrected));
                }
            } else {
                unsigned no_frozen_ab[2], no_deleted_ab[2];
                arma::mat C_ab[2];
                arma::vec e_ab[2];

                no_frozen_ab[core::SPIN_ALPHA] =
                    input_data.moller_plesset_params.no_frozen;
                no_frozen_ab[core::SPIN_BETA] =
                    input_data.moller_plesset_params.no_frozen_beta;
                no_deleted_ab[core::SPIN_ALPHA] =
                    input_data.moller_plesset_params.no_deleted;
                no_deleted_ab[core::SPIN_BETA] =
                    input_data.moller_plesset_params.no_deleted_beta;

                e_ab[core::SPIN_ALPHA] = scf.mo_energies(core::SPIN_ALPHA);
                e_ab[core::SPIN_BETA] = scf.mo_energies(core::SPIN_BETA);
                C_ab[core::SPIN_ALPHA] = scf.mo_coefficients(core::SPIN_ALPHA);
                C_ab[core::SPIN_BETA] = scf.mo_coefficients(core::SPIN_BETA);
                mp2.reset(new posthf::UHF_MP2_IMP_2(
                    system,
                    std::move(two_e_ints),
                    e_ab,
                    C_ab,
                    input_data.moller_plesset_params.memory_pool *
                        storage_unit_factor(input_data),
                    no_frozen_ab,
                    no_deleted_ab,
                    input_data.moller_plesset_params.eps));
            }
        }

        const double Emp2 = mp2->energy_correction();

        io::Log::instance().write(
            io::Logger::NORMAL, "mp2_energy_correction", Emp2);
        const bool double_hybrid_dft =
            (dft_method->mp2_correlation_contrib != 0);
        const double c =
            double_hybrid_dft ? dft_method->mp2_correlation_contrib : 1;
        if (c != 1) {
            io::Log::instance().write(
                io::Logger::NORMAL, "mp2_scaling_factor", c);
        }
        io::Log::instance().write(
            io::Logger::NORMAL, "total_mp2_energy", scf.energy() + c * Emp2);
    }
}
