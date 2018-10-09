/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "niedoida/niedoida.hpp"

namespace niedoida {
    std::shared_ptr<const core::FockMatrixGeneratorFactory>
    create_fm_gen_factory(
        const Config& /*config*/,
        const InputData& input_data,
        std::shared_ptr<const core::TwoElectronIntegralEngineFactory>
            two_e_ie_factory,
        std::shared_ptr<const core::QuasiOneElectronIntegralEngineFactory>
            xc_ie_factory,
        std::shared_ptr<const core::QuasiTwoElectronIntegralEngineFactory>
            quasi_two_e_ie_factory,
        double dft_fock_exchange_contrib)
    {
        const double threshold = input_data.integration_params.threshold;
        const std::size_t cache_size = input_data.integration_params.cache_size;
        const std::size_t aux_cache_size =
            input_data.integration_params.aux_cache_size;

        std::shared_ptr<const core::JMatrixGeneratorFactory> jm_gen_factory;
        std::shared_ptr<const core::KMatrixGeneratorFactory> km_gen_factory;
        std::shared_ptr<const core::JKMatrixGeneratorFactory> jkm_gen_factory;
        std::shared_ptr<const core::FockMatrixGeneratorFactory> fm_gen_factory;

        const bool hybrid_DFT = dft_fock_exchange_contrib != 0;

        if (!xc_ie_factory) {                             // HF
            if (!input_data.aux_basis_set_name.empty()) { // DF-HF
                jm_gen_factory.reset(new core::DenFitJMatrixGeneratorFactory(
                    quasi_two_e_ie_factory, threshold, aux_cache_size));
                km_gen_factory.reset(new core::StandardKMatrixGeneratorFactory(
                    two_e_ie_factory, threshold, cache_size));
                jkm_gen_factory.reset(
                    new core::AggregateJKMatrixGeneratorFactory(
                        jm_gen_factory, km_gen_factory));
            } else { // conv HF
                jkm_gen_factory.reset(
                    new core::CombinedJKMatrixGeneratorFactory(
                        two_e_ie_factory, threshold, cache_size));
            }
            fm_gen_factory.reset(
                new core::HFFockMatrixGeneratorFactory(jkm_gen_factory));
        } else {                                              // DFT
            if (hybrid_DFT) {                                 // hybrid DFT
                if (!input_data.aux_basis_set_name.empty()) { // DF-hybrid DFT
                    jm_gen_factory.reset(
                        new core::DenFitJMatrixGeneratorFactory(
                            quasi_two_e_ie_factory, threshold, aux_cache_size));
                    km_gen_factory.reset(
                        new core::StandardKMatrixGeneratorFactory(
                            two_e_ie_factory, threshold, cache_size));
                    jkm_gen_factory.reset(
                        new core::AggregateJKMatrixGeneratorFactory(
                            jm_gen_factory, km_gen_factory));
                } else { // conv hybrid DFT
                    jkm_gen_factory.reset(
                        new core::CombinedJKMatrixGeneratorFactory(
                            two_e_ie_factory, threshold, cache_size));
                }
                fm_gen_factory.reset(
                    new core::HybridKSFockMatrixGeneratorFactory(
                        jkm_gen_factory,
                        xc_ie_factory,
                        dft_fock_exchange_contrib,
                        1));
                // FIXME: the last arg is 1 for all defined functionals.
                // what's the purpose of keeping this argument?
                // Maybe we should simply remove it???

            } else {                                          // pure DFT
                if (!input_data.aux_basis_set_name.empty()) { // DF-pure DFT
                    jm_gen_factory.reset(
                        new core::DenFitJMatrixGeneratorFactory(
                            quasi_two_e_ie_factory, threshold, aux_cache_size));
                } else { // conv pure DFT
                    jm_gen_factory.reset(
                        new core::StandardJMatrixGeneratorFactory(
                            two_e_ie_factory, threshold, cache_size));
                }
                fm_gen_factory.reset(new core::PureKSFockMatrixGeneratorFactory(
                    jm_gen_factory, xc_ie_factory));
            }
        }
        return fm_gen_factory;
    }
}
