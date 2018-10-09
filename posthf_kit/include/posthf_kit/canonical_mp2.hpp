/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_POSTHF_KIT_CANONICAL_MP2_HPP
#define NIEDOIDA_POSTHF_KIT_CANONICAL_MP2_HPP

#include "posthf_kit/mp2_base.hpp"

#include <boost/ptr_container/ptr_vector.hpp>

#include "core_kit/system.hpp"
#include "core_kit/integral_engine.hpp"
#include "core_kit/integral_engine_factory.hpp"
#include "core_kit/integral_cache.hpp"
#include "core_kit/schwartz_estimator.hpp"
#include "core_kit/spin.hpp"
#include "core_kit/basis_set_info.hpp"
#include <utility>

#include "misc_kit/threadpool.hpp"

#include <boost/multi_array.hpp>

#include "core_kit/significant_shell_pairs_generator.hpp"

namespace niedoida {

    namespace posthf {

/**
 * testowa implementacja MP2
 */
        class NaiveMP2: public MP2, public niedoida::core::BasisSetInfo {
        public:
            NaiveMP2(const std::shared_ptr<const niedoida::core::System> system,
                     std::unique_ptr<niedoida::core::TwoElectronIntegralEngine> two_e_int_eng,
                     const std::vector<double>& e,
                     const arma::mat& C);

            double energy_correction() const;
        private:
            const arma::mat m_C;
            const std::vector<double> m_e;
            unsigned m_no_elect_alpha;
            unsigned m_no_elect_beta;
            unsigned m_n;
            std::unique_ptr<niedoida::core::TwoElectronIntegralEngine> m_2ei;
            std::vector<bool> m_occ_alpha;
            std::vector<bool> m_occ_beta;
            std::vector<niedoida::core::Request> m_requests;
            boost::multi_array<double, 2> m_buf;
            arma::vec m_gmo;
            double m_energy;
    
            void integral_transform();
            void partial_int_transform(unsigned);
            double transform_coeff(
                unsigned, unsigned, unsigned, unsigned,
                unsigned, unsigned, unsigned, unsigned,
                unsigned, unsigned, unsigned, unsigned);
            void compute_energy_correction();
        };

        inline 
        double NaiveMP2::energy_correction() const { 
            return m_energy; 
        }

/**
 * testowa implementacja Unrestricted MP2
 */
        class NaiveUMP2: public MP2, public niedoida::core::BasisSetInfo {
        public:
            NaiveUMP2(const std::shared_ptr<const niedoida::core::System> system,
                      std::unique_ptr<niedoida::core::TwoElectronIntegralEngine> two_e_int_eng,
                      const arma::vec& e_alpha,
                      const arma::vec& e_beta,
                      const arma::mat& C_alpha,
                      const arma::mat& C_beta);

            double energy_correction() const;
        private:
            const arma::mat m_C_alpha;
            const arma::mat m_C_beta;
            const arma::vec m_e_alpha;
            const arma::vec m_e_beta;

            unsigned m_no_elect_alpha;
            unsigned m_no_elect_beta;
            unsigned m_n;
            std::unique_ptr<niedoida::core::TwoElectronIntegralEngine> m_2ei;
            std::vector<bool> m_occ_alpha;
            std::vector<bool> m_occ_beta;
            std::vector<niedoida::core::Request> m_requests;
            boost::multi_array<double, 2> m_buf;
            arma::vec m_gmo;
            double m_energy;
    
            void integral_transform_AAAA();
            void partial_int_transform_AAAA(unsigned);
            double transform_coeff_AAAA(
                unsigned, unsigned, unsigned, unsigned,
                unsigned, unsigned, unsigned, unsigned,
                unsigned, unsigned, unsigned, unsigned);
            void compute_energy_correction_AAAA();

            void integral_transform_BBBB();
            void partial_int_transform_BBBB(unsigned);
            double transform_coeff_BBBB(
                unsigned, unsigned, unsigned, unsigned,
                unsigned, unsigned, unsigned, unsigned,
                unsigned, unsigned, unsigned, unsigned);
            void compute_energy_correction_BBBB();

            void integral_transform_ABAB();
            void partial_int_transform_ABAB(unsigned);
            double transform_coeff_ABAB(
                unsigned, unsigned, unsigned, unsigned,
                unsigned, unsigned, unsigned, unsigned,
                unsigned, unsigned, unsigned, unsigned);
            void compute_energy_correction_ABAB();
        };

        inline 
        double NaiveUMP2::energy_correction() const { 
            return m_energy; 
        }

/*
 * new restricted mp2
 */

        class RHF_MP2: public MP2, public niedoida::core::BasisSetInfo {
        public:
            RHF_MP2(
                std::shared_ptr<const niedoida::core::System> system,
                std::unique_ptr<niedoida::core::TwoElectronIntegralEngine> two_e_int_eng,
                const arma::vec& e,
                const arma::mat& C,
                unsigned long memory_pool,
                unsigned no_frozen,
                unsigned no_deleted,
                double threshold,
                const bool dc);

            double energy_correction() const;

        private:
            const bool m_dc;
            arma::vec m_e;
            unsigned m_n;
            unsigned m_no_frozen;
            unsigned m_no_deleted;
            unsigned long m_memory_pool;
            std::unique_ptr<niedoida::core::TwoElectronIntegralEngine> m_2ei;
            double m_int_tresh;
            unsigned m_no_occ;
            unsigned m_no_virt;
            unsigned m_max_no_requests;
            std::vector<niedoida::core::Request> m_requests;
  
            arma::mat m_C_occ, m_C_virt, m_C_T_virt, m_C_T_occ;
            arma::mat m_TT_1, m_TT_2, m_TT_3, m_TT_4, m_TT_5;
  
            boost::multi_array<double, 1> m_buf;
            boost::multi_array<double, 3> m_T1;
  
            bool fill_int_buff(unsigned P, unsigned Q, unsigned R,
                               unsigned S1, unsigned& S2);
            std::size_t trans1(double *buf_ptr, unsigned P, unsigned Q, 
                               unsigned R, unsigned S, unsigned j_begin, unsigned j_scope);
            void trans23(unsigned j_scope);
            void trans4(unsigned j_scope);

            void alloc_mem();
            void update_e2(unsigned j_begin, unsigned j_end);
            double m_e2;

            unsigned m_no_full_passes;
            unsigned m_no_occ_in_full_pass;
            unsigned m_overflow;
            void determine_passes();

            niedoida::core::SchwartzEstimator m_schwartz;
            boost::mpi::communicator m_comm;
        };

        inline
        double RHF_MP2::energy_correction() const { 
            return m_e2; 
        }

        class RHF_MP2_IMP: public MP2, public niedoida::core::BasisSetInfo {
        public:
            RHF_MP2_IMP(
                std::shared_ptr<const niedoida::core::System> system,
                std::unique_ptr<niedoida::core::TwoElectronIntegralEngine> two_e_int_eng,
                const arma::vec& e,
                const arma::mat& C,
                unsigned long memory_pool,
                unsigned no_frozen,
                unsigned no_deleted,
                double threshold,
                const bool dc);

            double energy_correction() const;

        private:
            const bool m_dc;
            arma::vec m_e;
            unsigned m_n;
            unsigned m_no_frozen;
            unsigned m_no_deleted;
            unsigned long m_memory_pool;
            std::unique_ptr<niedoida::core::TwoElectronIntegralEngine> m_2ei;
            double m_int_tresh;
            unsigned m_no_occ;
            unsigned m_no_virt;
            unsigned m_max_no_requests;
            std::vector<niedoida::core::Request> m_requests;
            double m_e2;
            niedoida::core::SchwartzEstimator m_schwartz;
            unsigned m_no_full_passes;
            unsigned m_no_occ_in_full_pass;
            unsigned m_overflow;
  
            arma::mat m_C_occ, m_C_virt, m_C_T_virt, m_C_T_occ;
            arma::mat m_Ci_occ, m_TT_1, m_TT_2, m_TT_2a, m_TT_3, m_TT_4;
            arma::vec m_C_sprs;
  
            boost::multi_array<double, 1> m_buf;
            boost::multi_array<double, 4> m_T_1;
            boost::multi_array<double, 4> m_T_1a;
            boost::multi_array<double, 4> m_T_2;

            boost::mpi::communicator m_comm;
  
            bool fill_int_buff(unsigned P, unsigned Q, unsigned R,
                               unsigned S1, unsigned& S2);
            void first_half(unsigned i_begin, unsigned i_scope);
            void second_half(unsigned i_begin, unsigned i_scope);

            void alloc_mem();

            void determine_passes();

        };

        inline
        double RHF_MP2_IMP::energy_correction() const { 
            return m_e2; 
        }

        class RHF_MP2_MINMEM: public MP2, public niedoida::core::BasisSetInfo {
        public:
            RHF_MP2_MINMEM(
                std::shared_ptr<const niedoida::core::System> system,
                std::unique_ptr<niedoida::core::TwoElectronIntegralEngine> two_e_int_eng,
                const arma::vec& e,
                const arma::mat& C,
                unsigned long memory_pool,
                unsigned no_frozen,
                unsigned no_deleted,
                double threshold,
                const bool dc);

            double energy_correction() const;

        private:
            const bool m_dc;
            arma::vec m_e;
            unsigned m_n;
            unsigned m_no_frozen;
            unsigned m_no_deleted;
            unsigned long m_memory_pool;
            std::unique_ptr<niedoida::core::TwoElectronIntegralEngine> m_2ei;
            double m_int_tresh;
            unsigned m_no_occ;
            unsigned m_no_virt;
            unsigned m_max_no_requests;
            std::vector<niedoida::core::Request> m_requests;
            double m_e2;
            niedoida::core::SchwartzEstimator m_schwartz;
            unsigned m_no_pairs_in_full_pass;
            unsigned m_no_pairs;
            unsigned m_no_passes;
            double m_max_C_virt;
  
            arma::mat m_C_occ, m_C_virt, m_C_T_virt, m_C_T_occ;
            arma::mat m_I2_ij, m_I3_ij, m_I4_ij, m_P_prs, m_P_pr; 
  
            std::vector<std::pair<unsigned, unsigned> > m_ij;
            std::vector<std::pair<unsigned, unsigned> > m_ij_indices;

            boost::multi_array<double, 1> m_buf;
            boost::multi_array<double, 3> m_I;
            boost::multi_array<double, 3> m_P;

            boost::mpi::communicator m_comm;
    
            void trans(const unsigned ij_begin, const unsigned ij_end);
            void contract_integrals(const niedoida::core::Request& request,
                                    const unsigned ij_size);
            void contract_integral(const unsigned alpha, const unsigned beta,
                                   const unsigned gamma, const unsigned delta,
                                   const double g, const unsigned ij_size);
            void calc_P();
            void calc_P_prs();
            void second_half_ij(const unsigned i, const unsigned j);
            void alloc_mem();
            void determine_passes();
        };

        inline
        double RHF_MP2_MINMEM::energy_correction() const { 
            return m_e2; 
        }

        class RHF_MP2_IMP_2: public MP2 {
        public:
            RHF_MP2_IMP_2(
                std::shared_ptr<const niedoida::core::System> system,
                std::shared_ptr<const niedoida::core::TwoElectronIntegralEngineFactory> two_e_ie_factory,
                const arma::vec& e,
                const arma::mat& C,
                unsigned long memory_pool,
                unsigned no_frozen,
                unsigned no_deleted,
                double threshold,
                std::size_t cache_size,
                const bool dc);

            double energy_correction() const;

        private:
            const bool m_dc;
            std::shared_ptr<const niedoida::core::System> m_system;
            niedoida::core::BasisSetInfo m_bs_info;
            arma::vec m_e;
            unsigned m_n;
            unsigned m_no_frozen;
            unsigned m_no_deleted;
            unsigned long m_memory_pool;
            std::shared_ptr<const niedoida::core::TwoElectronIntegralEngineFactory> m_2_ie_factory;
            double m_int_tresh;
            unsigned m_no_occ;
            unsigned m_no_virt;
            double m_e2;
            const niedoida::core::SchwartzEstimator& m_schwartz;
            unsigned m_no_passes;
            double m_max_C_occ;
            double m_max_C_virt;

            std::vector<std::pair<unsigned, unsigned> > m_pairs;
  
            arma::mat m_C_occ, m_C_virt;
            arma::mat m_TT_2, m_TT_3, m_TT_4;
            arma::vec m_C_sprs, m_C_occ_pr, m_C_virt_pr, m_C_prs;

            std::vector<std::pair<unsigned, unsigned> > m_full_passes;

            boost::multi_array<double, 4> m_T_1;

            std::unique_ptr<double[]> m_trans_pool;

            niedoida::core::SignificantShellPairsGenerator m_sspg;

            struct Batch {
                Batch(const unsigned no_pairs):
                    begin(0), end(no_pairs) {}

                std::mutex mutex;
                unsigned long begin;
                unsigned long end;
            };

            Batch m_batch;

            unsigned m_chunk_size;

            std::mutex m_cache_mutex;
            std::unique_ptr<std::mutex[]> m_T3_mutex;

            boost::mpi::communicator m_comm;
 
            unsigned determine_passes();

            class WorkHorse {
            public:
                WorkHorse(const unsigned no_ijs,
                          const bool dc,
                          const unsigned first,
                          const unsigned last,
                          const unsigned offset,
                          const std::vector<std::pair<unsigned, unsigned> >& pairs,
                          const unsigned no_virt,
                          const unsigned n,
                          double* T_3,
                          arma::vec& e,
                          const unsigned no_occ,
                          const unsigned no_frozen,
                          arma::mat& C_virt);       
                double m_e2;
                void reset(const unsigned first, const unsigned last,
                           const unsigned offset, const unsigned no_ijs);
                void finalize();
            private:
                unsigned m_no_ijs;
                const bool m_dc;
                unsigned m_first;
                unsigned m_last;
                unsigned m_offset;
                const std::vector<std::pair<unsigned, unsigned> >& m_pairs;
                const unsigned m_no_virt;
                const unsigned m_n;
                arma::mat m_TT_3;
                double* m_T_3;
                arma::mat m_TT_4;
                arma::vec& m_e;
                const unsigned m_no_occ;
                const unsigned m_no_frozen;
                arma::mat& m_C_virt;
            };

            class WorkHorse_13 {
            public:
                WorkHorse_13(
                    const unsigned no_ijs,
                    const unsigned first,
                    const unsigned last,
                    const unsigned begin,
                    const unsigned end,
                    const unsigned n,
                    const std::vector<std::pair<unsigned, unsigned> >& shell_pairs,
                    const double max_C_occ,
                    const double max_C_virt,
                    const niedoida::core::BasisSetInfo& bs_info,
                    const niedoida::core::SchwartzEstimator& schwartz,
                    const double int_tresh,
                    const arma::vec& C_sprs,
                    std::unique_ptr<niedoida::core::TwoElectronIntegralEngine> q_2ei,
                    niedoida::core::IntegralCache& cache,
                    std::mutex& cache_mutex,
                    std::mutex* T3_mutex,
                    const arma::vec& C_occ_pr,
                    const arma::vec& C_prs,
                    const arma::vec& C_virt_pr,
                    const arma::mat& C_occ,
                    const arma::mat& C_virt,
                    double* T_3,
                    const unsigned m_no_virt,
                    Batch& batch,
                    const unsigned chunk_size);
                void reset(const unsigned begin, const unsigned end, const unsigned no_ijs);
                bool fill_int_buffer(unsigned ij, unsigned kl_1, unsigned& kl_2);
                void trans();
            private:
                unsigned m_no_ijs;
                unsigned m_first;
                unsigned m_last;
                unsigned i_begin;
                unsigned i_end;
                unsigned m_n;
                const std::vector<std::pair<unsigned, unsigned> >& m_shell_pairs;
                double m_max_C_occ;
                double m_max_C_virt;
                unsigned m_max_no_requests;
                std::vector<niedoida::core::Request> m_requests;
                boost::multi_array<double, 1> m_buf;
                const niedoida::core::BasisSetInfo& m_bs_info;
                const niedoida::core::SchwartzEstimator& m_schwartz;
                double m_int_tresh;
                const arma::vec& m_C_sprs;
                std::unique_ptr<niedoida::core::TwoElectronIntegralEngine> m_2ei;
                niedoida::core::IntegralCache& m_cache;
                unsigned m_cycle;
                std::mutex& m_cache_mutex;
                std::mutex* m_T3_mutex;
                const arma::vec& m_C_occ_pr;
                const arma::vec& m_C_prs;
                const arma::vec& m_C_virt_pr;
                const arma::mat& m_C_occ;
                const arma::mat& m_C_virt;
                double* m_T_3;
                boost::multi_array<double, 4> m_T_1;
                arma::mat m_TT_2;
                unsigned m_no_virt;
                Batch& m_batch;
                unsigned m_chunk_size;
            };
            boost::ptr_vector<WorkHorse> m_workhorses;
            boost::ptr_vector<WorkHorse_13> m_workhorses_13;
        };

        inline
        double RHF_MP2_IMP_2::energy_correction() const { 
            return m_e2; 
        }

        class UHF_MP2_IMP_2: public MP2, public niedoida::core::BasisSetInfo  {
        public:
            UHF_MP2_IMP_2(
                std::shared_ptr<const niedoida::core::System> system,
                std::unique_ptr<niedoida::core::TwoElectronIntegralEngine> two_e_int_eng,
                const arma::vec e[2],
                const arma::mat C[2],
                unsigned long memory_pool,
                unsigned no_frozen[2],
                unsigned no_deleted[2],
                double threshold);

            double energy_correction() const;

        private:
            enum SpinType{
                ST_AAAA,
                ST_BBBB,
                ST_ABAB
            };
            arma::vec m_e[2];
            unsigned m_n;
            unsigned m_no_frozen[2];
            unsigned m_no_deleted[2];
            unsigned long m_memory_pool;
            std::unique_ptr<niedoida::core::TwoElectronIntegralEngine> m_2ei;
            double m_int_tresh;
            unsigned m_no_occ[2];
            unsigned m_no_virt[2];
            unsigned m_max_no_requests;
            std::vector<niedoida::core::Request> m_requests;
            double m_e2;
            niedoida::core::SchwartzEstimator m_schwartz;
            unsigned m_no_passes;
            double m_max_C_occ[2];
            double m_max_C_virt[2];
  
            arma::mat m_C_occ[2], m_C_virt[2];
            arma::mat m_TT_2, m_TT_3, m_TT_4;
            arma::vec m_C_sprs[2], m_C_occ_pr[2], m_C_virt_pr[2], m_C_prs[2];

            std::vector<std::pair<std::pair<unsigned, unsigned>, SpinType > > m_full_passes;
  
            boost::multi_array<double, 1> m_buf;
            boost::multi_array<double, 4> m_T_1;
            boost::multi_array<double, 3> m_T_3;

            boost::mpi::communicator m_comm;

            bool fill_int_buff(unsigned P, unsigned R, unsigned Q,
                               unsigned S1, unsigned& S2, 
                               niedoida::core::Spin SPIN1, niedoida::core::Spin SPIN2);

            void trans_1_3(unsigned i_begin, unsigned i_end, niedoida::core::Spin SPIN);
            void finalize(unsigned i_begin, unsigned i_end, niedoida::core::Spin SPIN);
            void determine_passes();

            void trans_1_3_ab(unsigned i_begin, unsigned i_end);
            void finalize_ab(unsigned i_begin, unsigned i_end);
        };

        inline
        double UHF_MP2_IMP_2::energy_correction() const { 
            return m_e2; 
        }


        class DF_RHF_MP2: public MP2 {
        public:
            DF_RHF_MP2(
                std::shared_ptr<const niedoida::core::System> system,
                std::shared_ptr<const niedoida::core::PostHFQuasiTwoElectronIntegralEngineFactory> quasi_two_e_ie_factory,
                const arma::vec& e,
                const arma::mat& C,
                unsigned long memory_pool,
                unsigned no_frozen,
                unsigned no_deleted,
                double threshold,
                const bool dc);

            double energy_correction() const;

            void set_max_J_shells();
            void calc_J();
            void calc_W();

        private:
            const bool m_dc;
            std::shared_ptr<const niedoida::core::System> m_system;
            niedoida::core::BasisSetInfo m_bs_info;
            niedoida::core::BasisSetInfo m_posthf_aux_bs_info;
            arma::vec m_e;
            unsigned m_n;
            unsigned m_n_posthf_aux;
            unsigned m_n_posthf_aux_shells;
            unsigned m_no_frozen;
            unsigned m_no_deleted;
            unsigned long m_memory_pool;
            std::shared_ptr<const niedoida::core::PostHFQuasiTwoElectronIntegralEngineFactory> m_q_2_ie_factory;
            double m_int_tresh;
            unsigned m_no_occ;
            unsigned m_no_virt;
            unsigned m_max_no_pair_requests;
            std::vector<niedoida::core::PairRequest> m_pair_requests;
            double m_e2;
            const niedoida::core::SchwartzEstimator& m_schwartz;
            arma::vec m_max_J_shells;

            boost::multi_array<double, 2> m_buf_pair;
  
            arma::mat m_C_occ, m_C_virt;
            arma::mat m_W;
            arma::mat m_J;

            boost::multi_array<double, 3> m_T_23;

            unsigned m_no_shell_pairs;

            std::vector<std::pair<unsigned, unsigned> > m_pairs;

            std::unique_ptr<niedoida::core::QuasiTwoElectronIntegralEngine> m_q_2_ie;

            struct Batch {
                Batch(const unsigned n):
                    begin(0), end(n) {}

                std::mutex mutex;
                unsigned long begin;
                unsigned long end;
            };

            Batch m_batch;

            class WorkHorse {
            public:
                WorkHorse(Batch& batch,
                          const bool dc,
                          const unsigned first,
                          const unsigned last,
                          const std::vector<std::pair<unsigned, unsigned> >& pairs,
                          const unsigned no_virt,
                          const unsigned no_occ,
                          const unsigned no_frozen,
                          const unsigned n_posthf_aux,
                          double* T_23,
                          arma::vec& e);       
                double m_e2;
                void finalize();
            private:
                Batch& m_batch;
                const bool m_dc;
                unsigned m_first;
                unsigned m_last;
                const std::vector<std::pair<unsigned, unsigned> >& m_pairs;
                const unsigned m_no_virt;
                const unsigned m_no_occ;
                const unsigned m_no_frozen;
                const unsigned m_n_posthf_aux;
                double* m_T_23;
                arma::vec& m_e;
                arma::mat m_T_4;
            };

            Batch m_batch_3;

            class WorkHorse_3 {
            public:
                WorkHorse_3(Batch& batch,
                            const unsigned first,
                            const unsigned last,
                            const unsigned no_virt,
                            const unsigned no_occ,
                            const unsigned n_posthf_aux,
                            double* T_23,
                            const arma::mat& W);       
                void trans_3();
            private:
                Batch& m_batch;
                unsigned m_first;
                unsigned m_last;
                const unsigned m_no_virt;
                const unsigned m_no_occ;
                const unsigned m_n_posthf_aux;
                double* m_T_23;
                arma::mat m_buf_T23;
                const arma::mat& m_W;
            };

            Batch m_batch_TT;

            class WorkHorse_TT {
            public:
                WorkHorse_TT(Batch& batch,
                             const unsigned first,
                             const unsigned last,
                             const unsigned no_virt,
                             const unsigned no_occ,
                             const unsigned n_posthf_aux,
                             const niedoida::core::BasisSetInfo& bs_info,
                             const niedoida::core::BasisSetInfo& posthf_aux_bs_info,
                             const unsigned n,
                             const unsigned no_shell_pairs,
                             std::unique_ptr<niedoida::core::QuasiTwoElectronIntegralEngine> q_2_ie,
                             const niedoida::core::SchwartzEstimator& schwartz,
                             const arma::vec& max_J_shells,
                             const double int_tresh,
                             double* T_23,
                             const arma::mat& C_occ,
                             const arma::mat& C_virt);       
                void calc_TT();
            private:
                Batch& m_batch;
                unsigned m_first;
                unsigned m_last;
                const unsigned m_no_virt;
                const unsigned m_no_occ;
                const unsigned m_n_posthf_aux;
                const niedoida::core::BasisSetInfo& m_bs_info;
                const niedoida::core::BasisSetInfo& m_posthf_aux_bs_info;
                const unsigned m_n;
                const unsigned m_no_shell_pairs;
                boost::multi_array<double, 3> m_T_0;
                std::unique_ptr<niedoida::core::QuasiTwoElectronIntegralEngine> m_q_2_ie;
                const niedoida::core::SchwartzEstimator& m_schwartz;
                const arma::vec& m_max_J_shells;
                const double m_int_tresh;
                std::vector<niedoida::core::ACDRequest> m_ACD_requests;
                boost::multi_array<double, 2> m_buf_ACD;
                unsigned m_max_no_ACD_requests;
                arma::mat m_TT_1;
                arma::mat m_TT_2;
                double* m_T_23;
                const arma::mat& m_C_occ;
                const arma::mat& m_C_virt;
            };

            boost::mpi::communicator m_comm;
        };

        inline
        double DF_RHF_MP2::energy_correction() const { 
            return m_e2; 
        }
    }

}
#endif
