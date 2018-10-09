/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_FOCK_MATRIX_GENERATOR_HPP
#define NIEDOIDA_CORE_KIT_FOCK_MATRIX_GENERATOR_HPP

#include <memory>

#include <boost/mpi.hpp>

#include <boost/ptr_container/ptr_vector.hpp>

#include "core_kit/system.hpp"
#include "core_kit/basis_set_info.hpp"
#include "core_kit/spin.hpp"
#include "core_kit/integral_engine.hpp"
#include "core_kit/integral_engine_factory.hpp"
#include "core_kit/integral_cache.hpp"
#include "core_kit/efield.hpp"
#include "core_kit/shell_quartet_index_generator.hpp"
#include "core_kit/significant_shell_quartet_index_generator.hpp"
#include "core_kit/shell_ACD_index_generator.hpp"
#include "core_kit/shell_quartet_petite_list.hpp"
#include "core_kit/schwartz_estimator.hpp"
#include "core_kit/os1_integral_gradient_engine.hpp"

#include "misc_kit/threadpool.hpp"

namespace niedoida {

    namespace core {

        class MatrixGenerator {
        public:

            virtual ~MatrixGenerator()
            {
            };

            virtual void set_density_matrix( const arma::mat&,
                                             const arma::mat&,
                                             bool incremental = false ) = 0;

        };

        class MatrixCoreGradientGenerator {
        public:

            virtual ~MatrixCoreGradientGenerator()
            {
            };


            virtual void calc_matrix_core_gradient( std::vector<unsigned> &atoms, const arma::mat& P )  = 0;
        };

        class JMatrixGenerator: virtual public MatrixGenerator {
        public:
            virtual const arma::mat& coulomb_matrix() const = 0;
        };

        class JMatrixCoreGradientGenerator: virtual public MatrixCoreGradientGenerator {
        public:
            virtual const std::vector<arma::cube>& coulomb_matrix_core_gradient() const = 0;
        };

        class KMatrixGenerator: virtual public MatrixGenerator {
        public:
            virtual const arma::mat& exchange_matrix( Spin ) const = 0;
        };

        class KMatrixCoreGradientGenerator: virtual public MatrixCoreGradientGenerator {
        public:
            virtual const std::vector<arma::cube>& exchange_matrix_core_gradient( ) const = 0;
        };

        class JKMatrixGenerator:
            virtual public JMatrixGenerator,
            virtual public KMatrixGenerator {
        };

        class JKMatrixCoreGradientGenerator:
            virtual public JMatrixCoreGradientGenerator,
            virtual public KMatrixCoreGradientGenerator {
        };

        class AggregateJKMatrixGenerator: public JKMatrixGenerator {
        public:

            AggregateJKMatrixGenerator(
                std::unique_ptr<JMatrixGenerator> j,
                std::unique_ptr<KMatrixGenerator> k ):
                _j( std::move( j ) ), _k( std::move( k ) )
            {
            }

            void set_density_matrix( const arma::mat& P_alpha,
                                     const arma::mat& P_beta,
                                     bool incremental = false )
            {
                _j->set_density_matrix( P_alpha, P_beta, incremental );
                _k->set_density_matrix( P_alpha, P_beta, incremental );
            }

            const arma::mat& coulomb_matrix() const
            {
                return _j->coulomb_matrix();
            }

            const arma::mat& exchange_matrix( Spin s ) const
            {
                return _k->exchange_matrix( s );
            }

        private:
            std::unique_ptr<JMatrixGenerator> _j;
            std::unique_ptr<KMatrixGenerator> _k;
        };

        class AggregateJKMatrixCoreGradientGenerator: public JKMatrixCoreGradientGenerator {
        public:

            AggregateJKMatrixCoreGradientGenerator(
                std::unique_ptr<JMatrixCoreGradientGenerator> dj,
                std::unique_ptr<KMatrixCoreGradientGenerator> dk ):
                _dj( std::move( dj ) ), _dk( std::move( dk ) )
            {
            }

            void calc_matrix_core_gradient( std::vector<unsigned> &atoms, const arma::mat& P ) {
                _dj->calc_matrix_core_gradient( atoms, P );
                _dk->calc_matrix_core_gradient( atoms, P );
            }

            const std::vector<arma::cube>& coulomb_matrix_core_gradient() const
            {
                return _dj->coulomb_matrix_core_gradient();
            }

            const std::vector<arma::cube>& exchange_matrix_core_gradient( ) const
            {
                return _dk->exchange_matrix_core_gradient( );
            }

        private:
            std::unique_ptr<JMatrixCoreGradientGenerator> _dj;
            std::unique_ptr<KMatrixCoreGradientGenerator> _dk;
        };

        class StandardJMatrixGenerator: public JMatrixGenerator {
        public:
            StandardJMatrixGenerator( std::shared_ptr<const System>,
                                      std::shared_ptr<const TwoElectronIntegralEngineFactory> two_e_ie_factory,
                                      double threshold,
                                      std::size_t cache_size,
                                      std::unique_ptr<ShellQuartetPetiteList> );

            void set_density_matrix( const arma::mat&,
                                     const arma::mat&,
                                     bool incremental = false );

            const arma::mat& coulomb_matrix() const;

        private:
            void update( bool incremental );
            void set_max_P_shells( const std::size_t no_shells,
                                   const arma::mat& P );

            std::shared_ptr<const System> m_system;

            BasisSetInfo m_bs_info;

            struct Prescreening {

                Prescreening( double t, const System& s ):
                    threshold( t ), schwartz( *s.basis_set.schwartz_estimator )
                {
                }

                const double threshold;
                const SchwartzEstimator& schwartz;
            };

            Prescreening m_prescreening;

            std::mutex m_cache_mutex;

            unsigned long m_no_shell_quartets;

            arma::mat m_prev_P;
            arma::mat m_P;
            arma::mat m_delta_P;

            arma::mat m_J;

            arma::mat m_max_P_shells;

            std::unique_ptr<ShellQuartetPetiteList> m_sq_petite_list;

            SignificantShellPairsGenerator m_sspg;

            struct Batch {

                Batch( SignificantShellPairsGenerator sspg ):
                    sq( sspg ), begin( 0 ), end( std::distance( sq, sq.make_end() ) )
                {
                }

                std::mutex mutex;

                SignificantShellQuartetIndexGenerator sq;
                unsigned long begin;
                unsigned long end;
            };

            Batch m_batch;

            class WorkHorse {
            public:
                WorkHorse(
                    std::shared_ptr<const System> system,
                    std::unique_ptr<TwoElectronIntegralEngine> ie,
                    IntegralCache& cache,
                    std::mutex& cache_mutex,
                    const Prescreening& prescreening,
                    const arma::mat& P,
                    const arma::mat& delta_P,
                    const arma::mat& max_P_shells,
                    Batch& batch,
                    const BasisSetInfo& bs_info );

                void reset( bool incremental );
                void run();

                arma::mat m_J;
                std::vector<arma::cube> m_dJ;
            private:
                double max_P( const ShellQuartetIndex& ) const;

                void update_task( const arma::mat& P );

                void partial_update(
                    const arma::mat& P,
                    const Request& request,
                    double max_P );

                void contract_integral(
                    const arma::mat& P,
                    const unsigned i,
                    const unsigned j,
                    const unsigned k,
                    const unsigned l,
                    const double g );

                BasisSetInfo m_bs_info;

                unsigned m_cycle;

                std::unique_ptr<TwoElectronIntegralEngine> m_2ie;

                IntegralCache& m_cache;
                std::mutex& m_cache_mutex;

                bool m_incremental;
                const Prescreening& m_prescreening;
                const arma::mat& m_P;
                const arma::mat& m_delta_P;
                std::size_t m_max_no_requests;
                std::vector<Request> m_requests;
                boost::multi_array<double, 2> m_buf;
                std::unique_ptr<double[] > m_max_P;
                const arma::mat& m_max_P_shells;
                Batch& m_batch;
            };

            boost::ptr_vector<WorkHorse> m_workhorses;
            boost::mpi::communicator m_comm;
        };

        inline
        const arma::mat&
        StandardJMatrixGenerator::coulomb_matrix() const
        {
            return m_J;
        }

        inline
        void StandardJMatrixGenerator::WorkHorse::contract_integral(
            const arma::mat& P,
            const unsigned i,
            const unsigned j,
            const unsigned k,
            const unsigned l,
            const double g )
        {
            const double g2 = 2 * g;

            m_J( i, j ) += g2 * P( k, l );
            m_J( k, l ) += g2 * P( i, j );
        }

        class StandardJMatrixCoreGradientGenerator: public JMatrixCoreGradientGenerator {
        public:
            StandardJMatrixCoreGradientGenerator( std::shared_ptr<const System>,
                                                  double threshold,
                                                  std::size_t cache_size );

            void calc_matrix_core_gradient( std::vector<unsigned> &atoms, const arma::mat& P );

            const std::vector<arma::cube>& coulomb_matrix_core_gradient() const;

        private:
            void set_max_P_shells( const std::size_t no_shells,
                                   const arma::mat& P );

            void contract_d_integral( double dg, const arma::mat &P,
                                      std::size_t i, std::size_t j, std::size_t k, std::size_t l,
                                      std::size_t atom_ind, std::size_t coord_ind );

            double max_P2( const niedoida::core::ShellQuartetIndex& sq, const arma::mat& max_P_shells );

            std::shared_ptr<const System> m_system;

            BasisSetInfo m_bs_info;
            OS1TwoElectronIntegralGradientEngine m_gradient_engine2;

            struct Prescreening {

                Prescreening( double t, const System& s ):
                    threshold( t ), schwartz( *s.basis_set.schwartz_estimator )
                {
                }

                const double threshold;
                const SchwartzEstimator& schwartz;
            };

            Prescreening m_prescreening;

            std::mutex m_cache_mutex;

            unsigned long m_no_shell_quartets;

            arma::mat m_prev_P;
            arma::mat m_P;
            arma::mat m_delta_P;

            std::vector<arma::cube> m_dJ;

            arma::mat m_max_P_shells;

            //std::unique_ptr<ShellQuartetPetiteList> m_sq_petite_list;

            SignificantShellPairsGenerator m_sspg;

            struct Batch {

                Batch( SignificantShellPairsGenerator sspg ):
                    sq( sspg ), begin( 0 ), end( std::distance( sq, sq.make_end() ) )
                {
                }

                std::mutex mutex;

                SignificantShellQuartetIndexGenerator sq;
                unsigned long begin;
                unsigned long end;
            };

            Batch m_batch;


        };

        inline
        const std::vector<arma::cube>&
        StandardJMatrixCoreGradientGenerator::coulomb_matrix_core_gradient() const
        {
            return m_dJ;
        }


        inline
        void StandardJMatrixCoreGradientGenerator::contract_d_integral( double dg, const arma::mat &P,
                std::size_t i, std::size_t j, std::size_t k, std::size_t l,
                std::size_t atom_ind, std::size_t coord_ind ) {

            m_dJ[atom_ind].slice( coord_ind )( i, j ) += 2* dg * ( P( k, l ) + P( l, k ) );
            m_dJ[atom_ind].slice( coord_ind )( j, i ) += 2*dg * ( P( k, l ) + P( l, k ) );
            m_dJ[atom_ind].slice( coord_ind )( k, l ) += 2*dg * ( P( i, j ) + P( j, i ) );
            m_dJ[atom_ind].slice( coord_ind )( l, k ) += 2*dg * ( P( i, j ) +P( j, i ) );

        }

        class StandardKMatrixGenerator: public KMatrixGenerator {
        public:
            StandardKMatrixGenerator( std::shared_ptr<const System>,
                                      std::shared_ptr<const TwoElectronIntegralEngineFactory> two_e_ie_factory,
                                      double threshold,
                                      std::size_t cache_size,
                                      std::unique_ptr<ShellQuartetPetiteList> );

            void set_density_matrix( const arma::mat&,
                                     const arma::mat&,
                                     bool incremental = false );


            const arma::mat& exchange_matrix( Spin ) const;

        private:
            void update( bool incremental, bool polarized );
            void set_max_P_shells( const std::size_t no_shells,
                                   const arma::mat P[2],
                                   bool polarized );

            std::shared_ptr<const System> m_system;

            BasisSetInfo m_bs_info;

            struct Prescreening {

                Prescreening( double t, const System& s ):
                    threshold( t ), schwartz( *s.basis_set.schwartz_estimator )
                {
                }

                const double threshold;
                const SchwartzEstimator& schwartz;
            };

            Prescreening m_prescreening;

            std::mutex m_cache_mutex;

            unsigned long m_no_shell_quartets;

            arma::mat m_prev_P[2];
            arma::mat m_P[2];
            arma::mat m_delta_P[2];

            arma::mat m_K[2];
            std::vector<arma::cube> m_dK;

            arma::mat m_max_P_shells;

            std::unique_ptr<ShellQuartetPetiteList> m_sq_petite_list;

            SignificantShellPairsGenerator m_sspg;

            struct Batch {

                Batch( SignificantShellPairsGenerator sspg ):
                    sq( sspg ), begin( 0 ), end( std::distance( sq, sq.make_end() ) )
                {
                }

                std::mutex mutex;

                SignificantShellQuartetIndexGenerator sq;
                unsigned long begin;
                unsigned long end;
            };

            Batch m_batch;

            class WorkHorse {
            public:
                WorkHorse(
                    std::shared_ptr<const System> system,
                    std::unique_ptr<TwoElectronIntegralEngine> ie,
                    IntegralCache& cache,
                    std::mutex& cache_mutex,
                    const Prescreening& prescreening,
                    const arma::mat * const P,
                    const arma::mat * const delta_P,
                    const arma::mat& max_P_shells,
                    Batch& batch,
                    const BasisSetInfo & bs_info );

                void reset( bool incremental, bool unpolarized );
                void run();


                arma::mat m_J;
                arma::mat m_K[2];

            private:
                double max_P( const ShellQuartetIndex& ) const;

                void update_task( const arma::mat * const P );

                void partial_update_polarized(
                    const arma::mat P[2],
                    const Request& request,
                    double max_P );

                void partial_update_unpolarized(
                    const arma::mat& P,
                    const Request& request,
                    double max_P );

                void contract_integral_polarized(
                    const arma::mat P[2],
                    unsigned i,
                    unsigned j,
                    unsigned k,
                    unsigned l,
                    double g );

                void contract_integral_unpolarized(
                    const arma::mat& P,
                    const unsigned i,
                    const unsigned j,
                    const unsigned k,
                    const unsigned l,
                    const double g );

                BasisSetInfo m_bs_info;

                unsigned m_cycle;

                std::unique_ptr<TwoElectronIntegralEngine> m_2ie;

                IntegralCache& m_cache;
                std::mutex& m_cache_mutex;

                bool m_polarized;
                bool m_incremental;
                const Prescreening& m_prescreening;
                const arma::mat * const m_P;
                const arma::mat * const m_delta_P;
                std::size_t m_max_no_requests;
                std::vector<Request> m_requests;
                boost::multi_array<double, 2> m_buf;
                std::unique_ptr<double[] > m_max_P;
                const arma::mat& m_max_P_shells;
                Batch& m_batch;
            };
            boost::ptr_vector<WorkHorse> m_workhorses;
            boost::mpi::communicator m_comm;
        };

        inline
        const arma::mat&
        StandardKMatrixGenerator::exchange_matrix( Spin s ) const
        {
            return m_K[s];
        }

        inline
        void StandardKMatrixGenerator::WorkHorse::contract_integral_polarized(
            const arma::mat P[2],
            unsigned i,
            unsigned j,
            unsigned k,
            unsigned l,
            double g )
        {
            for( int s = SPIN_ALPHA; s <= SPIN_BETA; ++s ) {
                m_K[s]( i, k ) -= P[s]( j, l ) * g;
                m_K[s]( i, l ) -= P[s]( j, k ) * g;
                m_K[s]( j, k ) -= P[s]( i, l ) * g;
                m_K[s]( j, l ) -= P[s]( i, k ) * g;

                m_K[s]( k, i ) -= P[s]( j, l ) * g;
                m_K[s]( l, i ) -= P[s]( j, k ) * g;
                m_K[s]( k, j ) -= P[s]( i, l ) * g;
                m_K[s]( l, j ) -= P[s]( i, k ) * g;
            }
        }

        inline
        void StandardKMatrixGenerator::WorkHorse::contract_integral_unpolarized(
            const arma::mat& P,
            const unsigned i,
            const unsigned j,
            const unsigned k,
            const unsigned l,
            const double g )
        {
            arma::mat& K = m_K[SPIN_ALPHA];

            K( i, k ) -= P( j, l ) * g;
            K( i, l ) -= P( j, k ) * g;
            K( j, k ) -= P( i, l ) * g;
            K( j, l ) -= P( i, k ) * g;

            K( k, i ) -= P( j, l ) * g;
            K( l, i ) -= P( j, k ) * g;
            K( k, j ) -= P( i, l ) * g;
            K( l, j ) -= P( i, k ) * g;
        }

        class StandardKMatrixCoreGradientGenerator: public KMatrixCoreGradientGenerator {
        public:
            StandardKMatrixCoreGradientGenerator( std::shared_ptr<const System>,
                                                  double threshold,
                                                  std::size_t cache_size );

            void calc_matrix_core_gradient( std::vector<unsigned> &atoms, const arma::mat& P );

            const std::vector<arma::cube>& exchange_matrix_core_gradient() const;

        private:
            void set_max_P_shells( const std::size_t no_shells,
                                   const arma::mat& P );

            void contract_d_integral( double dg, const arma::mat &P,
                                      std::size_t i, std::size_t j, std::size_t k, std::size_t l,
                                      std::size_t atom_ind, std::size_t coord_ind );

            double max_P2( const niedoida::core::ShellQuartetIndex& sq, const arma::mat& max_P_shells );

            std::shared_ptr<const System> m_system;

            BasisSetInfo m_bs_info;
            OS1TwoElectronIntegralGradientEngine m_gradient_engine2;

            struct Prescreening {

                Prescreening( double t, const System& s ):
                    threshold( t ), schwartz( *s.basis_set.schwartz_estimator )
                {
                }

                const double threshold;
                const SchwartzEstimator& schwartz;
            };

            Prescreening m_prescreening;

            std::mutex m_cache_mutex;

            unsigned long m_no_shell_quartets;

            arma::mat m_prev_P;
            arma::mat m_P;
            arma::mat m_delta_P;

            std::vector<arma::cube> m_dK;

            arma::mat m_max_P_shells;

            SignificantShellPairsGenerator m_sspg;

            struct Batch {

                Batch( SignificantShellPairsGenerator sspg ):
                    sq( sspg ), begin( 0 ), end( std::distance( sq, sq.make_end() ) )
                {
                }

                std::mutex mutex;

                SignificantShellQuartetIndexGenerator sq;
                unsigned long begin;
                unsigned long end;
            };

            Batch m_batch;


        };

        inline
        const std::vector<arma::cube>&
        StandardKMatrixCoreGradientGenerator::exchange_matrix_core_gradient() const
        {
            return m_dK;
        }


        inline
        void StandardKMatrixCoreGradientGenerator::contract_d_integral( double dg, const arma::mat &P,
                std::size_t i, std::size_t j, std::size_t k, std::size_t l,
                std::size_t atom_ind, std::size_t coord_ind ) {

            m_dK[atom_ind].slice( coord_ind )( i, k ) -= P( j, l ) * dg;
            m_dK[atom_ind].slice( coord_ind )( k, i ) -= P( l, j ) * dg;
            m_dK[atom_ind].slice( coord_ind )( i, l ) -= P( j, k ) * dg;
            m_dK[atom_ind].slice( coord_ind )( l, i ) -= P( k, j ) * dg;
            m_dK[atom_ind].slice( coord_ind )( j, k ) -= P( i, l ) * dg;
            m_dK[atom_ind].slice( coord_ind )( k, j ) -= P( l, i ) * dg;
            m_dK[atom_ind].slice( coord_ind )( j, l ) -= P( i, k ) * dg;
            m_dK[atom_ind].slice( coord_ind )( l, j ) -= P( k, i ) * dg;

        }
        class DenFitJMatrixGenerator: public JMatrixGenerator {
        public:
            DenFitJMatrixGenerator(
                std::shared_ptr<const System>,
                std::shared_ptr<const QuasiTwoElectronIntegralEngineFactory> quasi_two_e_ie_factory,
                double threshold,
                std::size_t aux_cache_size );

            void set_density_matrix( const arma::mat& P_alpha,
                                     const arma::mat& P_beta,
                                     bool incremental );

            const arma::mat& coulomb_matrix() const;

            const arma::vec& d_alpha() const;

            const arma::vec& d_beta() const;

        private:

            void set_max_P_shells( const arma::mat P[2] );

            void calc_W();

            void set_max_W_shells();

            void set_max_d_shells( const arma::vec& d );

            void invert_W();

            void build_c_vector();

            void calc_d_vector();

            void update();

            std::shared_ptr<const System> m_system;
            BasisSetInfo m_bs_info;
            BasisSetInfo m_aux_bs_info;
            std::shared_ptr<const QuasiTwoElectronIntegralEngineFactory> m_q_2ie_factory;
            double m_threshold;
            arma::mat m_J;
            arma::mat m_W;
            arma::vec m_max_W_shells;
            arma::mat m_inverted_W;
            arma::vec m_d[2];
            arma::vec m_max_d_shells;
            arma::vec m_c[2];
            arma::mat m_P[2];
            arma::mat m_max_P_shells;
            bool m_unpolarized;
            double m_perturbation;

            unsigned long m_no_shell_pairs;
            unsigned long m_no_shell_ACDs;

            unsigned m_cycle;

            ShellPairIndexGenerator m_spig;
            ShellACDIndexGenerator m_saig;

            struct Prescreening {

                Prescreening( double t, const System& s ):
                    threshold( t ), schwartz( *s.basis_set.schwartz_estimator )
                {
                }

                const double threshold;
                const SchwartzEstimator& schwartz;
            };

            Prescreening m_prescreening;

            std::mutex m_cache_mutex;

            struct W_Batch {

                W_Batch( ShellPairIndexGenerator spig ):
                    sp( spig ), begin( 0 ), end( std::distance( sp, sp.make_end() ) )
                {
                }

                std::mutex mutex;

                ShellPairIndexGenerator sp;
                unsigned long begin;
                unsigned long end;
            };

            W_Batch m_W_batch;

            class W_WorkHorse {
            public:
                W_WorkHorse(
                    std::unique_ptr<QuasiTwoElectronIntegralEngine> q_ie,
                    W_Batch& batch,
                    const BasisSetInfo& aux_bs_info,
                    arma::mat& W );

                void run();

            private:
                void calc_W_task();

                std::unique_ptr<QuasiTwoElectronIntegralEngine> m_q_2ie;
                W_Batch& m_batch;
                BasisSetInfo m_aux_bs_info;
                arma::mat& m_W;

                std::vector<PairRequest> m_pair_requests;
                std::size_t m_max_no_pair_requests;
                boost::multi_array<double, 2> m_buf_pair;
            };

            struct c_Batch {

                c_Batch( ShellACDIndexGenerator ssa ):
                    sa( ssa ), begin( 0 ), end( std::distance( sa, sa.make_end() ) )
                {
                }

                std::mutex mutex;

                ShellACDIndexGenerator sa;
                unsigned long begin;
                unsigned long end;
            };

            c_Batch m_c_batch;

            class c_WorkHorse {
            public:
                c_WorkHorse(
                    std::shared_ptr<const System> system,
                    std::unique_ptr<QuasiTwoElectronIntegralEngine> q_ie,
                    ACDIntegralCache& aux_cache,
                    std::mutex& cache_mutex,
                    const Prescreening& prescreening,
                    const arma::mat * const P,
                    const arma::mat& max_P_shells,
                    const arma::vec& max_W_shells,
                    c_Batch& batch,
                    const BasisSetInfo& bs_info,
                    const BasisSetInfo& aux_bs_info,
                    const unsigned cycle,
                    const bool unpolarized );

                void run();

                arma::vec m_c[2];

            private:
                void build_c_vector_task();

                void partial_build_c_vector( const arma::mat P[2],
                                             const ACDRequest& request );

                void partial_build_c_vector_unpolarized( const arma::mat& P,
                        const ACDRequest& request );

                BasisSetInfo m_bs_info;
                BasisSetInfo m_aux_bs_info;

                unsigned m_cycle;

                std::unique_ptr<QuasiTwoElectronIntegralEngine> m_q_2ie;

                ACDIntegralCache& m_aux_cache;
                std::mutex& m_aux_cache_mutex;

                bool m_unpolarized;
                const Prescreening& m_prescreening;
                const arma::mat * const m_P;
                std::size_t m_max_no_ACD_requests;
                std::vector<ACDRequest> m_ACD_requests;
                boost::multi_array<double, 2> m_buf_ACD;
                const arma::mat& m_max_P_shells;
                const arma::vec& m_max_W_shells;
                c_Batch& m_batch;
            };

            c_Batch m_d_batch;

            class d_WorkHorse {
            public:
                d_WorkHorse(
                    std::shared_ptr<const System> system,
                    std::unique_ptr<QuasiTwoElectronIntegralEngine> q_ie,
                    ACDIntegralCache& aux_cache,
                    std::mutex& cache_mutex,
                    const Prescreening& prescreening,
                    const arma::vec& d,
                    const arma::vec& max_d_shells,
                    const arma::vec& max_W_shells,
                    c_Batch& batch,
                    const BasisSetInfo& bs_info,
                    const BasisSetInfo& aux_bs_info,
                    const unsigned cycle );

                void run();

                arma::mat m_J;

            private:
                void update_task();

                void partial_update(
                    const arma::vec& d,
                    const ACDRequest& request );

                BasisSetInfo m_bs_info;
                BasisSetInfo m_aux_bs_info;

                unsigned m_cycle;

                std::unique_ptr<QuasiTwoElectronIntegralEngine> m_q_2ie;

                ACDIntegralCache& m_aux_cache;
                std::mutex& m_aux_cache_mutex;

                const Prescreening& m_prescreening;
                std::size_t m_max_no_ACD_requests;
                std::vector<ACDRequest> m_ACD_requests;
                boost::multi_array<double, 2> m_buf_ACD;
                const arma::vec& m_d;
                const arma::vec& m_max_d_shells;
                const arma::vec& m_max_W_shells;
                c_Batch& m_batch;
            };

            boost::mpi::communicator m_comm;
        };

        class CombinedJKMatrixGenerator: public JKMatrixGenerator {
        public:
            CombinedJKMatrixGenerator( std::shared_ptr<const System>,
                                       std::shared_ptr<const TwoElectronIntegralEngineFactory> two_e_ie_factory,
                                       double threshold,
                                       std::size_t cache_size,
                                       std::unique_ptr<ShellQuartetPetiteList> );

            void set_density_matrix( const arma::mat&,
                                     const arma::mat&,
                                     bool incremental = false );


            const arma::mat& coulomb_matrix() const;
            const arma::mat& exchange_matrix( Spin ) const;

        private:
            void update( bool incremental, bool polarized );
            void reduce( bool polarized );
            void set_max_P_shells( const std::size_t no_shells,
                                   const arma::mat P[2],
                                   bool polarized );

            std::shared_ptr<const System> m_system;

            BasisSetInfo m_bs_info;

            struct Prescreening {

                Prescreening( double t, const System& s ):
                    threshold( t ), schwartz( *s.basis_set.schwartz_estimator )
                {
                }

                const double threshold;
                const SchwartzEstimator& schwartz;
            };

            Prescreening m_prescreening;

            std::mutex m_cache_mutex;

            unsigned long m_no_shell_quartets;

            arma::mat m_prev_P[2];
            arma::mat m_P[2];
            arma::mat m_delta_P[2];

            arma::mat m_J;
            arma::mat m_K[2];
            arma::mat m_mu[2][3];

            arma::mat m_max_P_shells;

            std::unique_ptr<ShellQuartetPetiteList> m_sq_petite_list;

            SignificantShellPairsGenerator m_sspg;

            struct Batch {

                Batch( SignificantShellPairsGenerator sspg ):
                    sq( sspg ), begin( 0 ), end( std::distance( sq, sq.make_end() ) )
                {
                }

                std::mutex mutex;

                SignificantShellQuartetIndexGenerator sq;
                unsigned long begin;
                unsigned long end;
            };

            Batch m_batch;

            class WorkHorse {
            public:
                WorkHorse(
                    std::shared_ptr<const System> system,
                    std::unique_ptr<TwoElectronIntegralEngine> ie,
                    IntegralCache& cache,
                    std::mutex& cache_mutex,
                    const Prescreening& prescreening,
                    const arma::mat * const P,
                    const arma::mat * const delta_P,
                    const arma::mat& max_P_shells,
                    Batch& batch,
                    const BasisSetInfo& bs_info );

                void reset( bool incremental, bool unpolarized );
                void run();

                arma::mat m_J;
                arma::mat m_K[2];

            private:
                double max_P( const ShellQuartetIndex& ) const;

                void update_task( const arma::mat * const P );

                void partial_update_polarized(
                    const arma::mat P[2],
                    const Request& request,
                    double max_P );

                void partial_update_unpolarized(
                    const arma::mat& P,
                    const Request& request,
                    double max_P );

                void contract_integral_polarized(
                    const arma::mat P[2],
                    unsigned i,
                    unsigned j,
                    unsigned k,
                    unsigned l,
                    double g );

                void contract_integral_unpolarized(
                    const arma::mat& P,
                    const unsigned i,
                    const unsigned j,
                    const unsigned k,
                    const unsigned l,
                    const double g );

                BasisSetInfo m_bs_info;

                unsigned m_cycle;

                std::unique_ptr<TwoElectronIntegralEngine> m_2ie;

                IntegralCache& m_cache;
                std::mutex& m_cache_mutex;

                bool m_polarized;
                bool m_incremental;
                const Prescreening& m_prescreening;
                const arma::mat * const m_P;
                const arma::mat * const m_delta_P;
                std::size_t m_max_no_requests;
                std::vector<Request> m_requests;
                boost::multi_array<double, 2> m_buf;
                std::unique_ptr<double[] > m_max_P;
                const arma::mat& m_max_P_shells;
                Batch& m_batch;
            };

            boost::ptr_vector<WorkHorse> m_workhorses;
            boost::mpi::communicator m_comm;
        };

        inline
        const arma::mat&
        CombinedJKMatrixGenerator::coulomb_matrix() const
        {
            return m_J;
        }

        inline
        const arma::mat&
        CombinedJKMatrixGenerator::exchange_matrix( Spin s ) const
        {
            return m_K[s];
        }

        inline
        void CombinedJKMatrixGenerator::WorkHorse::contract_integral_polarized(
            const arma::mat P[2],
            unsigned i,
            unsigned j,
            unsigned k,
            unsigned l,
            double g )
        {
            const double g2 = 2 * g;

            m_J( i, j ) +=
                g2 * ( P[SPIN_ALPHA]( k, l ) + P[SPIN_BETA]( k, l ) );

            m_J( k, l ) +=
                g2 * ( P[SPIN_ALPHA]( i, j ) + P[SPIN_BETA]( i, j ) );

            for( int s = SPIN_ALPHA; s <= SPIN_BETA; ++s ) {
                if( i <= k )
                    m_K[s]( i, k ) -= P[s]( j, l ) * g;
                else
                    m_K[s]( k, i ) -= P[s]( j, l ) * g;

                if( i <= l )
                    m_K[s]( i, l ) -= P[s]( j, k ) * g;
                else
                    m_K[s]( l, i ) -= P[s]( j, k ) * g;

                if( j <= k )
                    m_K[s]( j, k ) -= P[s]( i, l ) * g;
                else
                    m_K[s]( k, j ) -= P[s]( i, l ) * g;

                if( j <= l )
                    m_K[s]( j, l ) -= P[s]( i, k ) * g;
                else
                    m_K[s]( l, j ) -= P[s]( i, k ) * g;
            }
        }

        inline
        void CombinedJKMatrixGenerator::WorkHorse::contract_integral_unpolarized(
            const arma::mat& P,
            const unsigned i,
            const unsigned j,
            const unsigned k,
            const unsigned l,
            const double g )
        {
            const double g4 = 4 * g;

            arma::mat& _K = m_K[SPIN_ALPHA];

            m_J( i, j ) += g4 * P( k, l );
            m_J( k, l ) += g4 * P( i, j );

            if( i <= k )
                _K( i, k ) -= P( j, l ) * g;
            else
                _K( k, i ) -= P( j, l ) * g;

            if( i <= l )
                _K( i, l ) -= P( j, k ) * g;
            else
                _K( l, i ) -= P( j, k ) * g;

            if( j <= k )
                _K( j, k ) -= P( i, l ) * g;
            else
                _K( k, j ) -= P( i, l ) * g;

            if( j <= l )
                _K( j, l ) -= P( i, k ) * g;
            else
                _K( l, j ) -= P( i, k ) * g;
        }

        class CombinedJKMatrixCoreGradientGenerator: public JKMatrixCoreGradientGenerator {
        public:
            CombinedJKMatrixCoreGradientGenerator( std::shared_ptr<const System>,
                                                   double threshold,
                                                   std::size_t cache_size );

            void calc_matrix_core_gradient( std::vector<unsigned> &atoms, const arma::mat& P );

            const std::vector<arma::cube>& coulomb_matrix_core_gradient() const;
            const std::vector<arma::cube>& exchange_matrix_core_gradient() const;

        private:
            void set_max_P_shells( const std::size_t no_shells,
                                   const arma::mat& P );

            void contract_d_integral( double dg, const arma::mat &P,
                                      std::size_t i, std::size_t j, std::size_t k, std::size_t l,
                                      std::size_t atom_ind, std::size_t coord_ind );

            double max_P2( const niedoida::core::ShellQuartetIndex& sq, const arma::mat& max_P_shells );

            std::shared_ptr<const System> m_system;

            BasisSetInfo m_bs_info;
            OS1TwoElectronIntegralGradientEngine m_gradient_engine2;

            struct Prescreening {

                Prescreening( double t, const System& s ):
                    threshold( t ), schwartz( *s.basis_set.schwartz_estimator )
                {
                }

                const double threshold;
                const SchwartzEstimator& schwartz;
            };

            Prescreening m_prescreening;

            std::mutex m_cache_mutex;

            unsigned long m_no_shell_quartets;

            arma::mat m_prev_P;
            arma::mat m_P;
            arma::mat m_delta_P;

            std::vector<arma::cube> m_dJ;
            std::vector<arma::cube> m_dK;

            arma::mat m_max_P_shells;


            SignificantShellPairsGenerator m_sspg;

            struct Batch {

                Batch( SignificantShellPairsGenerator sspg ):
                    sq( sspg ), begin( 0 ), end( std::distance( sq, sq.make_end() ) )
                {
                }

                std::mutex mutex;

                SignificantShellQuartetIndexGenerator sq;
                unsigned long begin;
                unsigned long end;
            };

            Batch m_batch;


        };

        inline
        const std::vector<arma::cube>&
        CombinedJKMatrixCoreGradientGenerator::coulomb_matrix_core_gradient() const
        {
            return m_dJ;
        }

        inline
        const std::vector<arma::cube>&
        CombinedJKMatrixCoreGradientGenerator::exchange_matrix_core_gradient() const
        {
            return m_dK;
        }


        inline
        void CombinedJKMatrixCoreGradientGenerator::contract_d_integral( double dg, const arma::mat &P,
                std::size_t i, std::size_t j, std::size_t k, std::size_t l,
                std::size_t atom_ind, std::size_t coord_ind ) {

            m_dJ[atom_ind].slice( coord_ind )( i, j ) += 2* dg * ( P( k, l ) + P( l, k ) );
            m_dJ[atom_ind].slice( coord_ind )( j, i ) += 2*dg * ( P( k, l ) + P( l, k ) );
            m_dJ[atom_ind].slice( coord_ind )( k, l ) += 2*dg * ( P( i, j ) + P( j, i ) );
            m_dJ[atom_ind].slice( coord_ind )( l, k ) += 2*dg * ( P( i, j ) +P( j, i ) );

            m_dK[atom_ind].slice( coord_ind )( i, k ) -= P( j, l ) * dg;
            m_dK[atom_ind].slice( coord_ind )( k, i ) -= P( l, j ) * dg;
            m_dK[atom_ind].slice( coord_ind )( i, l ) -= P( j, k ) * dg;
            m_dK[atom_ind].slice( coord_ind )( l, i ) -= P( k, j ) * dg;
            m_dK[atom_ind].slice( coord_ind )( j, k ) -= P( i, l ) * dg;
            m_dK[atom_ind].slice( coord_ind )( k, j ) -= P( l, i ) * dg;
            m_dK[atom_ind].slice( coord_ind )( j, l ) -= P( i, k ) * dg;
            m_dK[atom_ind].slice( coord_ind )( l, j ) -= P( k, i ) * dg;

        }
        /**
        *  @ingroup core_kit
        *
        *  @brief An interface for Fock matrix generators.
        *
        *  The class defines an interface for Fock matrix generators. As such, it
        *  is an abstract class, not implementing any specific algorithm.
        *  Implementations of specific algorithms of calculating the Fock matrix
        *  should derive from this class.
        *
        */
        class FockMatrixGenerator:
            virtual public JMatrixGenerator,
            virtual public JMatrixCoreGradientGenerator,
            virtual public KMatrixGenerator,
            virtual public KMatrixCoreGradientGenerator {
        public:
            virtual double energy() const = 0;
            virtual double electronic_energy() const = 0;
            virtual const arma::mat& exchange_matrix_deriv_C( Spin s ) const = 0;
            virtual void set_density_matrix_for_CPHF( const arma::mat&,
                    const arma::mat&,
                    const arma::mat&,
                    const arma::mat& ) = 0;
            virtual void calc_matrix_core_gradient( std::vector<unsigned> &atoms, const arma::mat& P ) = 0;

            virtual std::vector<arma::cube> matrix_core_gradient(
                const std::vector<unsigned>& atoms ) const = 0;
            virtual arma::mat energy_gradient( std::shared_ptr<const System> system,
                                               const arma::mat& C,
                                               const arma::vec& eps,
                                               const std::vector<unsigned>& atoms ) const = 0;

            virtual arma::mat energy_hessian( std::shared_ptr<const System> system,
                                              const arma::mat& C,
                                              const arma::vec& eps,
                                              const std::vector<unsigned>& atoms,
                                              std::shared_ptr<const TwoElectronIntegralEngineFactory> ie_factory,
                                              std::shared_ptr<const FockMatrixGeneratorFactory> fm_gen ) const = 0;

        };

        /**
        *  @ingroup core_kit
        *
        *  @brief Hybrid DFT Fock matrix generator.
        *
        */
        class HybridKSFockMatrixGenerator: public FockMatrixGenerator {
        public:
            HybridKSFockMatrixGenerator( std::shared_ptr<const System>,
                                         std::unique_ptr<JKMatrixGenerator>,
                                         std::unique_ptr<QuasiOneElectronIntegralEngine>,
                                         double fock_exchange_contrib,
                                         double xc_contrib );

            void set_density_matrix( const arma::mat&,
                                     const arma::mat&,
                                     bool incremental = false );

            void calc_matrix_core_gradient( std::vector<unsigned> &atoms, const arma::mat& P );

            void set_density_matrix_for_CPHF( const arma::mat&,
                                              const arma::mat&,
                                              const arma::mat&,
                                              const arma::mat& );

            const arma::mat& coulomb_matrix() const;
            const std::vector<arma::cube>& coulomb_matrix_core_gradient() const;
            const arma::mat& exchange_matrix( Spin ) const;
            const std::vector<arma::cube>& exchange_matrix_core_gradient() const;

            double energy() const;
            double electronic_energy() const;
            const arma::mat& exchange_matrix_deriv_C( Spin s ) const;
            arma::mat energy_gradient( std::shared_ptr<const System> system,
                                       const arma::mat& C,
                                       const arma::vec& eps,
                                       const std::vector<unsigned>& atoms ) const;

            std::vector<arma::cube> matrix_core_gradient(
                const std::vector<unsigned>& atoms ) const;

            arma::mat energy_hessian( std::shared_ptr<const System> system,
                                      const arma::mat& C,
                                      const arma::vec& eps,
                                      const std::vector<unsigned>& atoms,
                                      std::shared_ptr<const TwoElectronIntegralEngineFactory> ie_factory,
                                      std::shared_ptr<const FockMatrixGeneratorFactory> fm_gen ) const;

        private:
            std::shared_ptr<const System> m_system;
            std::unique_ptr<JKMatrixGenerator> m_jk_matrix_generator;
            std::unique_ptr<JKMatrixCoreGradientGenerator>  m_JK_matrix_core_gradient_generator;
            std::unique_ptr<QuasiOneElectronIntegralEngine> m_xc_integral_engine;
            const double m_fock_exchange_contrib;
            const double m_xc_contrib;

            arma::mat m_P[2];
            arma::mat m_K[2];
        };

        inline
        const arma::mat&
        HybridKSFockMatrixGenerator::coulomb_matrix() const
        {
            return m_jk_matrix_generator->coulomb_matrix();
        }

        inline
        const std::vector<arma::cube>&
        HybridKSFockMatrixGenerator::coulomb_matrix_core_gradient() const
        {
            return m_JK_matrix_core_gradient_generator->coulomb_matrix_core_gradient();
        }


        inline
        const arma::mat&
        HybridKSFockMatrixGenerator::exchange_matrix( Spin s ) const
        {
            return m_K[s];
        }

        inline
        const std::vector<arma::cube>&
        HybridKSFockMatrixGenerator::exchange_matrix_core_gradient() const
        {
            return m_JK_matrix_core_gradient_generator->exchange_matrix_core_gradient();
        }

        inline
        const arma::mat&
        HybridKSFockMatrixGenerator::exchange_matrix_deriv_C( Spin s ) const
        {
            return m_K[s];
        }

        inline
        double HybridKSFockMatrixGenerator::energy() const
        {
            return electronic_energy() + *( m_system->efield_energy );
        }

        inline
        void HybridKSFockMatrixGenerator::set_density_matrix_for_CPHF( const arma::mat&,
                const arma::mat&, const arma::mat&,
                const arma::mat& ) {

        }

        inline
        double HybridKSFockMatrixGenerator::electronic_energy() const
        {
            const arma::mat Pa = m_P[SPIN_ALPHA];
            const arma::mat Ha =
                *m_system->basis_set.kinetic_matrix +
                *m_system->external_potential_matrix +
                0.5 * ( m_jk_matrix_generator->coulomb_matrix() +
                        m_fock_exchange_contrib * m_jk_matrix_generator->exchange_matrix( SPIN_ALPHA ) );

            const arma::mat Pb = m_P[SPIN_BETA];
            const arma::mat Hb =
                *m_system->basis_set.kinetic_matrix +
                *m_system->external_potential_matrix +
                0.5 * ( m_jk_matrix_generator->coulomb_matrix() +
                        m_fock_exchange_contrib * m_jk_matrix_generator->exchange_matrix( SPIN_BETA ) );

            return trace( Pa * Ha + Pb * Hb ) + m_xc_contrib * m_xc_integral_engine->energy();
        }

        inline
        arma::mat HybridKSFockMatrixGenerator::energy_hessian( std::shared_ptr<const System> system,
                const arma::mat& C,
                const arma::vec& eps,
                const std::vector<unsigned>& atoms,
                std::shared_ptr<const TwoElectronIntegralEngineFactory> ie_factory,
                std::shared_ptr<const FockMatrixGeneratorFactory> fm_gen ) const
        {
            return arma::zeros< arma::mat > ( 3, 3 );
        }

        inline
        std::vector<arma::cube> HybridKSFockMatrixGenerator::matrix_core_gradient(
            const std::vector<unsigned>& atoms ) const
        {
            return std::vector<arma::cube> ( 1, arma::cube( 1, 1, 3, arma::fill::zeros ) );
        }

        /**
         *  @ingroup core_kit
         *
         *  @brief Pure DFT Fock matrix generator.
         *
         */

        class PureKSFockMatrixGenerator: public FockMatrixGenerator {
        public:
            PureKSFockMatrixGenerator( std::shared_ptr<const System>,
                                       std::unique_ptr<JMatrixGenerator>,
                                       std::unique_ptr<QuasiOneElectronIntegralEngine> );

            void set_density_matrix( const arma::mat&,
                                     const arma::mat&,
                                     bool incremental = false );

            void calc_matrix_core_gradient( std::vector<unsigned> &atoms, const arma::mat& P );

            void set_density_matrix_for_CPHF( const arma::mat&,
                                              const arma::mat&,
                                              const arma::mat&,
                                              const arma::mat& );

            const arma::mat& coulomb_matrix() const;
            const std::vector<arma::cube>& coulomb_matrix_core_gradient() const;
            const arma::mat& exchange_matrix( Spin ) const;
            const std::vector<arma::cube>& exchange_matrix_core_gradient() const;

            double energy() const;
            double electronic_energy() const;
            const arma::mat& exchange_matrix_deriv_C( Spin s ) const;
            arma::mat energy_gradient( std::shared_ptr<const System> system,
                                       const arma::mat& C,
                                       const arma::vec& eps,
                                       const std::vector<unsigned>& atoms ) const;

            std::vector<arma::cube> matrix_core_gradient(
                const std::vector<unsigned>& atoms ) const;

            arma::mat energy_hessian( std::shared_ptr<const System> system,
                                      const arma::mat& C,
                                      const arma::vec& eps,
                                      const std::vector<unsigned>& atoms,
                                      std::shared_ptr<const TwoElectronIntegralEngineFactory> ie_factory,
                                      std::shared_ptr<const FockMatrixGeneratorFactory> fm_gen ) const;
        private:
            std::shared_ptr<const System> m_system;
            std::unique_ptr<JMatrixGenerator> m_J_matrix_generator;
            std::unique_ptr<JMatrixCoreGradientGenerator> m_J_matrix_core_gradient_generator;
            std::unique_ptr<QuasiOneElectronIntegralEngine> m_xc_integral_engine;

            arma::mat m_P[2];
            arma::mat m_K[2];
            arma::mat m_K_dC[2];
            arma::mat m_P_for_CPHF[2];
            std::vector<arma::cube> m_dK;
        };

        inline
        const arma::mat&
        PureKSFockMatrixGenerator::coulomb_matrix() const
        {
            return m_J_matrix_generator->coulomb_matrix();
        }

        inline
        const std::vector<arma::cube>&
        PureKSFockMatrixGenerator::coulomb_matrix_core_gradient() const
        {
            return m_J_matrix_core_gradient_generator->coulomb_matrix_core_gradient();
        }

        inline
        const arma::mat&
        PureKSFockMatrixGenerator::exchange_matrix( Spin s ) const
        {
            return m_K[s];
        }

        inline
        const std::vector<arma::cube>&
        PureKSFockMatrixGenerator::exchange_matrix_core_gradient() const
        {
            return m_xc_integral_engine->matrix_core_gradient();
        }

        inline
        const arma::mat&
        PureKSFockMatrixGenerator::exchange_matrix_deriv_C( Spin s ) const
        {
            return m_K_dC[s];
        }

        inline
        double PureKSFockMatrixGenerator::energy() const
        {
            return electronic_energy() + *( m_system->efield_energy );
        }

        inline
        double PureKSFockMatrixGenerator::electronic_energy() const
        {
            const arma::mat P = m_P[SPIN_ALPHA] + m_P[SPIN_BETA];
            const arma::mat H =
                *m_system->basis_set.kinetic_matrix +
                *m_system->external_potential_matrix +
                0.5 * coulomb_matrix();

            return trace( P * H ) + m_xc_integral_engine->energy();
        }

        inline
        arma::mat PureKSFockMatrixGenerator::energy_hessian( std::shared_ptr<const System> system,
                const arma::mat& C,
                const arma::vec& eps,
                const std::vector<unsigned>& atoms,
                std::shared_ptr<const TwoElectronIntegralEngineFactory> ie_factory,
                std::shared_ptr<const FockMatrixGeneratorFactory> fm_gen ) const
        {
            return arma::zeros<arma::mat>( 3, 3 );
        }

        class HFFockMatrixGenerator: public FockMatrixGenerator {
        public:
            HFFockMatrixGenerator( std::shared_ptr<const System>,
                                   std::unique_ptr<JKMatrixGenerator> );

            void set_density_matrix( const arma::mat&,
                                     const arma::mat&,
                                     bool incremental = false );

            void calc_matrix_core_gradient( std::vector<unsigned> &atoms, const arma::mat& P );

            void set_density_matrix_for_CPHF( const arma::mat&,
                                              const arma::mat&,
                                              const arma::mat&,
                                              const arma::mat& );

            const arma::mat& coulomb_matrix() const;
            const std::vector<arma::cube>& coulomb_matrix_core_gradient() const;
            const arma::mat& exchange_matrix( Spin ) const;
            const std::vector<arma::cube>& exchange_matrix_core_gradient() const;

            double energy() const;
            double electronic_energy() const;
            const arma::mat& exchange_matrix_deriv_C( Spin s ) const;
            arma::mat energy_gradient( std::shared_ptr<const System> system,
                                       const arma::mat& C,
                                       const arma::vec& eps,
                                       const std::vector<unsigned>& atoms ) const;

            std::vector<arma::cube> matrix_core_gradient(
                const std::vector<unsigned>& atoms ) const;

            arma::mat energy_hessian( std::shared_ptr<const System> system,
                                      const arma::mat& C,
                                      const arma::vec& eps,
                                      const std::vector<unsigned>& atoms,
                                      std::shared_ptr<const TwoElectronIntegralEngineFactory> ie_factory,
                                      std::shared_ptr<const FockMatrixGeneratorFactory> fm_gen ) const;

        private:
            std::shared_ptr<const System> m_system;
            std::unique_ptr<JKMatrixGenerator> m_JK_matrix_generator;
            std::unique_ptr<JKMatrixCoreGradientGenerator> m_JK_matrix_core_gradient_generator;

            arma::mat m_P[2];
        };

        inline
        const arma::mat&
        HFFockMatrixGenerator::coulomb_matrix() const
        {
            return m_JK_matrix_generator->coulomb_matrix();
        }

        inline
        const std::vector<arma::cube>&
        HFFockMatrixGenerator::coulomb_matrix_core_gradient() const
        {
            return m_JK_matrix_core_gradient_generator->coulomb_matrix_core_gradient();
        }

        inline
        const arma::mat&
        HFFockMatrixGenerator::exchange_matrix( Spin s ) const
        {
            return m_JK_matrix_generator->exchange_matrix( s );
        }

        inline
        const std::vector<arma::cube>&
        HFFockMatrixGenerator::exchange_matrix_core_gradient() const
        {
            return m_JK_matrix_core_gradient_generator->exchange_matrix_core_gradient();
        }

        inline
        const arma::mat&
        HFFockMatrixGenerator::exchange_matrix_deriv_C( Spin s ) const
        {
            return m_JK_matrix_generator->exchange_matrix( s );
        }

        inline
        double HFFockMatrixGenerator::energy() const
        {
            return electronic_energy() + *( m_system->efield_energy );
        }

        inline
        double HFFockMatrixGenerator::electronic_energy() const
        {
            const arma::mat Pa = m_P[SPIN_ALPHA];
            const arma::mat Ha =
                *m_system->basis_set.kinetic_matrix +
                *m_system->external_potential_matrix +
                0.5 * ( coulomb_matrix() +
                        exchange_matrix( SPIN_ALPHA ) );

            const arma::mat Pb = m_P[SPIN_BETA];
            const arma::mat Hb =
                *m_system->basis_set.kinetic_matrix +
                *m_system->external_potential_matrix +
                0.5 * ( coulomb_matrix() +
                        exchange_matrix( SPIN_BETA ) );

            return trace( Pa * Ha + Pb * Hb );
        }

    }
}

#endif
