/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_PSEUDO_FOCK_MATRIX_GENERATOR_HPP
#define NIEDOIDA_CORE_KIT_PSEUDO_FOCK_MATRIX_GENERATOR_HPP

#include "core_kit/system.hpp"
#include "core_kit/basis_set_info.hpp"
#include "core_kit/fock_matrix_generator_factory.hpp"
#include "core_kit/integral_cache.hpp"

namespace niedoida {

    namespace core {

        arma::mat pseudo_density_matrix(
            const arma::mat& mo_coeffs, 
            const arma::mat& ci_coeffs);

        class PseudoFockMatrixGenerator {
        public:
            PseudoFockMatrixGenerator(
                std::shared_ptr<const System>,
                std::unique_ptr<TwoElectronIntegralEngine>,
                double treshold);

            void set_density_matrix(const arma::mat&,
                                    const arma::mat&);

            const arma::mat& coulomb_matrix() const;
            const arma::mat& exchange_matrix(Spin) const;

        private:
            void update();

            void update_task(
                const arma::mat P[2], 
                unsigned long begin, 
                unsigned long end,
                ShellQuartetIndexGenerator& i);

            void partial_update(
                const arma::mat P[2],
                const Request& request,
                double max_P);

            void contract_integral(
                const arma::mat P[2],
                unsigned i, 
                unsigned j, 
                unsigned k, 
                unsigned l, 
                double g);

            double max_P(const ShellQuartetIndex&) const;

            void reduce();

            void set_max_P_shells(
                const arma::mat P[2]);

            std::shared_ptr<const System> m_system;
            BasisSetInfo m_bs_info;
            std::unique_ptr<TwoElectronIntegralEngine> m_2ie;
            const double m_treshold;

            SchwartzEstimator m_schwartz;

            const std::size_t m_max_no_requests;
            std::vector<Request> m_requests;
            arma::mat m_buf;
            std::unique_ptr<double[]> m_max_P;

            unsigned long m_no_shell_quartets;
    
            arma::mat m_P[2];
            arma::mat m_J;
            arma::mat m_K[2];

            arma::mat m_max_P_shells;
        };

        class PseudoFockMultiMatrixGenerator {
        public:
            PseudoFockMultiMatrixGenerator(
                std::shared_ptr<const System>,
                std::shared_ptr<const TwoElectronIntegralEngineFactory> two_e_ie_factory,
                double treshold);

            void set_density_matrix(const std::vector<arma::cube>&);

            arma::mat coulomb_matrix(std::size_t) const;
            arma::mat exchange_matrix(std::size_t, Spin) const;

        private:
            void update();
            void reduce();
            void set_max_P_shells();

            std::shared_ptr<const System> m_system;
            BasisSetInfo m_bs_info;

            struct Prescreening {
                Prescreening(double t, const System& s, const TwoElectronIntegralEngine& ie):
                    threshold(t), schwartz(s, ie) {}

                const double threshold;
                const SchwartzEstimator schwartz;
            };

            Prescreening m_prescreening;

            std::mutex m_cache_mutex;

            struct Batch {
                Batch(unsigned long no_shells):
                    sq(no_shells), begin(0), end(std::distance(sq, sq.make_end())) {}

                std::mutex mutex;

                ShellQuartetIndexGenerator sq;
                unsigned long begin;
                unsigned long end;
            };

            Batch m_batch;

            class WorkHorse {
            public:
                WorkHorse(
                    std::shared_ptr<const System> system,
                    std::unique_ptr<TwoElectronIntegralEngine> ie,
                    IntegralCache* cache,
                    std::mutex& cache_mutex,
                    const Prescreening& prescreening,
                    const arma::cube* const P,
                    const arma::mat& max_P_shells,
                    Batch& batch,
                    const BasisSetInfo& bs_info);

                void reset(bool polarized);
                void run();

                arma::cube m_J;
                arma::cube m_K[2];

            private:
                double max_P(const ShellQuartetIndex&) const;

                void partial_update(
                    const Request& request,
                    double max_P);
    
                void contract_integral(
                    const unsigned i, 
                    const unsigned j, 
                    const unsigned k, 
                    const unsigned l, 
                    const double g);

                BasisSetInfo m_bs_info;

                unsigned m_cycle;

                std::unique_ptr<TwoElectronIntegralEngine> m_2ie;
                std::size_t m_max_no_requests;

                IntegralCache* m_cache;
                std::mutex& m_cache_mutex;

                bool m_polarized;
                bool m_incremental;
                const Prescreening& m_prescreening;
                const arma::cube* m_P;
                std::vector<Request> m_requests;
                arma::mat m_buf;
                std::unique_ptr<double[]> m_max_P;
                const arma::mat& m_max_P_shells;
                Batch& m_batch;
                std::size_t m_no_matrices;
            };

            std::unique_ptr<double[]> m_max_P;

            unsigned long m_no_shell_quartets;

            std::size_t m_no_matrices;
            arma::cube m_P[2];
            arma::cube m_J;
            arma::cube m_K[2];
    
            mutable arma::mat m_current_J;
            mutable arma::mat m_current_K[2];
    
            arma::mat m_max_P_shells;

            bool m_polarized;

            std::mutex m_state_mutex;
            std::condition_variable m_state_change;
            
            boost::ptr_vector<WorkHorse> m_workhorses;
        };

        inline
        const arma::mat& 
        PseudoFockMatrixGenerator::coulomb_matrix() const
        {
            return m_J;
        }

        inline
        const arma::mat& 
        PseudoFockMatrixGenerator::exchange_matrix(Spin s) const
        {
            return m_K[s];
        }

        inline
        void PseudoFockMatrixGenerator::contract_integral(
            const arma::mat P[2],
            unsigned i, 
            unsigned j, 
            unsigned k, 
            unsigned l, 
            double g)
        {
            m_J(i, j) += 
                g * (P[SPIN_ALPHA](k, l) + P[SPIN_BETA](k, l) +
                     P[SPIN_ALPHA](l, k) + P[SPIN_BETA](l, k));
        
            m_J(j, i) += 
                g * (P[SPIN_ALPHA](k, l) + P[SPIN_BETA](k, l) +
                     P[SPIN_ALPHA](l, k) + P[SPIN_BETA](l, k));

            m_J(k, l) += 
                g * (P[SPIN_ALPHA](i, j) + P[SPIN_BETA](i, j) +
                     P[SPIN_ALPHA](j, i) + P[SPIN_BETA](j, i));

            m_J(l, k) += 
                g * (P[SPIN_ALPHA](i, j) + P[SPIN_BETA](i, j) +
                     P[SPIN_ALPHA](j, i) + P[SPIN_BETA](j, i));

            for (int s = SPIN_ALPHA; s <= SPIN_BETA; ++s) {
                m_K[s](i, k) -= P[s](j, l) * g;
                m_K[s](k, i) -= P[s](l, j) * g;
                m_K[s](i, l) -= P[s](j, k) * g;
                m_K[s](l, i) -= P[s](k, j) * g;
                m_K[s](j, k) -= P[s](i, l) * g;
                m_K[s](k, j) -= P[s](l, i) * g;
                m_K[s](j, l) -= P[s](i, k) * g;
                m_K[s](l, j) -= P[s](k, i) * g;
            }
        }

        inline
        arma::mat 
        PseudoFockMultiMatrixGenerator::coulomb_matrix(std::size_t i) const
        {
            m_current_J = m_J.slice(i);
            
            return m_current_J;
        }

        inline
        arma::mat 
        PseudoFockMultiMatrixGenerator::exchange_matrix(std::size_t i, Spin s) const
        {
            Spin t = (m_polarized ? s : SPIN_ALPHA);

            m_current_K[t] = m_K[t].slice(i);
            
            return m_current_K[t];
        }

        inline
        void PseudoFockMultiMatrixGenerator::WorkHorse::contract_integral(
            unsigned i, 
            unsigned j, 
            unsigned k, 
            unsigned l, 
            double g)
        {
            if(!m_polarized) {
                m_J.tube(i, j) += 2 * g * m_P[SPIN_ALPHA].tube(k, l);
                m_J.tube(j, i) += 2 * g * m_P[SPIN_ALPHA].tube(k, l);
                m_J.tube(i, j) += 2 * g * m_P[SPIN_ALPHA].tube(l, k);
                m_J.tube(j, i) += 2 * g * m_P[SPIN_ALPHA].tube(l, k);
                m_J.tube(k, l) += 2 * g * m_P[SPIN_ALPHA].tube(i, j);
                m_J.tube(l, k) += 2 * g * m_P[SPIN_ALPHA].tube(i, j);
                m_J.tube(k, l) += 2 * g * m_P[SPIN_ALPHA].tube(j, i);
                m_J.tube(l, k) += 2 * g * m_P[SPIN_ALPHA].tube(j, i);

                m_K[SPIN_ALPHA].tube(i, k) -= g * m_P[SPIN_ALPHA].tube(j, l);
                m_K[SPIN_ALPHA].tube(k, i) -= g * m_P[SPIN_ALPHA].tube(l, j);
                m_K[SPIN_ALPHA].tube(i, l) -= g * m_P[SPIN_ALPHA].tube(j, k);
                m_K[SPIN_ALPHA].tube(l, i) -= g * m_P[SPIN_ALPHA].tube(k, j);
                m_K[SPIN_ALPHA].tube(j, k) -= g * m_P[SPIN_ALPHA].tube(i, l);
                m_K[SPIN_ALPHA].tube(k, j) -= g * m_P[SPIN_ALPHA].tube(l, i);
                m_K[SPIN_ALPHA].tube(j, l) -= g * m_P[SPIN_ALPHA].tube(i, k);
                m_K[SPIN_ALPHA].tube(l, j) -= g * m_P[SPIN_ALPHA].tube(k, i);
            } else {
                m_J.tube(i, j) += g * m_P[SPIN_ALPHA].tube(k, l);
                m_J.tube(j, i) += g * m_P[SPIN_ALPHA].tube(k, l);
                m_J.tube(i, j) += g * m_P[SPIN_ALPHA].tube(l, k);
                m_J.tube(j, i) += g * m_P[SPIN_ALPHA].tube(l, k);
                m_J.tube(k, l) += g * m_P[SPIN_ALPHA].tube(i, j);
                m_J.tube(l, k) += g * m_P[SPIN_ALPHA].tube(i, j);
                m_J.tube(k, l) += g * m_P[SPIN_ALPHA].tube(j, i);
                m_J.tube(l, k) += g * m_P[SPIN_ALPHA].tube(j, i);

                m_J.tube(i, j) += g * m_P[SPIN_BETA].tube(k, l);
                m_J.tube(j, i) += g * m_P[SPIN_BETA].tube(k, l);
                m_J.tube(i, j) += g * m_P[SPIN_BETA].tube(l, k);
                m_J.tube(j, i) += g * m_P[SPIN_BETA].tube(l, k);
                m_J.tube(k, l) += g * m_P[SPIN_BETA].tube(i, j);
                m_J.tube(l, k) += g * m_P[SPIN_BETA].tube(i, j);
                m_J.tube(k, l) += g * m_P[SPIN_BETA].tube(j, i);
                m_J.tube(l, k) += g * m_P[SPIN_BETA].tube(j, i);

                m_K[SPIN_ALPHA].tube(i, k) -= g * m_P[SPIN_ALPHA].tube(j, l);
                m_K[SPIN_ALPHA].tube(k, i) -= g * m_P[SPIN_ALPHA].tube(l, j);
                m_K[SPIN_ALPHA].tube(i, l) -= g * m_P[SPIN_ALPHA].tube(j, k);
                m_K[SPIN_ALPHA].tube(l, i) -= g * m_P[SPIN_ALPHA].tube(k, j);
                m_K[SPIN_ALPHA].tube(j, k) -= g * m_P[SPIN_ALPHA].tube(i, l);
                m_K[SPIN_ALPHA].tube(k, j) -= g * m_P[SPIN_ALPHA].tube(l, i);
                m_K[SPIN_ALPHA].tube(j, l) -= g * m_P[SPIN_ALPHA].tube(i, k);
                m_K[SPIN_ALPHA].tube(l, j) -= g * m_P[SPIN_ALPHA].tube(k, i);
        
                m_K[SPIN_BETA].tube(i, k) -= g * m_P[SPIN_BETA].tube(j, l);
                m_K[SPIN_BETA].tube(k, i) -= g * m_P[SPIN_BETA].tube(l, j);
                m_K[SPIN_BETA].tube(i, l) -= g * m_P[SPIN_BETA].tube(j, k);
                m_K[SPIN_BETA].tube(l, i) -= g * m_P[SPIN_BETA].tube(k, j);
                m_K[SPIN_BETA].tube(j, k) -= g * m_P[SPIN_BETA].tube(i, l);
                m_K[SPIN_BETA].tube(k, j) -= g * m_P[SPIN_BETA].tube(l, i);
                m_K[SPIN_BETA].tube(j, l) -= g * m_P[SPIN_BETA].tube(i, k);
                m_K[SPIN_BETA].tube(l, j) -= g * m_P[SPIN_BETA].tube(k, i);
            }
        }

    }
}

#endif
