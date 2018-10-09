/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_POSTHF_KIT_LT_MP2_HPP
#define NIEDOIDA_POSTHF_KIT_LT_MP2_HPP

#include "posthf_kit/mp2_base.hpp"

#include "misc_kit/quadratures.hpp"
#include "gto_kit/os1_integral_engine.hpp"
#include "core_kit/system.hpp"
#include "core_kit/integral_engine.hpp"
#include "core_kit/schwartz_estimator.hpp"

#include <boost/mpi.hpp>

#include <cstring>

namespace niedoida {

    namespace posthf {

        class RHF_LT_MP2: public MP2 {
        public:
            RHF_LT_MP2(
                std::shared_ptr<const niedoida::core::System> system,
                std::unique_ptr<niedoida::core::TwoElectronIntegralEngine> two_e_int_eng,
                const arma::vec& e,
                const arma::mat& C,
                unsigned long memory_pool,
                unsigned no_frozen,
                unsigned no_deleted,
                const niedoida::misc::Quadrature&);

            double energy_correction() const;

        private:
            arma::vec m_e;
            unsigned m_n;
            unsigned m_no_frozen;
            unsigned m_no_deleted;
            unsigned long m_memory_pool;
            std::unique_ptr<niedoida::core::TwoElectronIntegralEngine> m_2ei;
            double m_int_tresh;
            std::vector<unsigned> m_shell_sizes;
            unsigned m_no_shells;
            unsigned m_no_contractions;
            unsigned m_no_occ;
            unsigned m_no_virt;
            std::vector<unsigned> m_first_contraction_in_shell;
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

            void cache_sizes(std::shared_ptr<const niedoida::core::System> system);
            void alloc_mem();
            double update_e2(unsigned j_begin, unsigned j_end, double t);
            double m_e2;
    
            unsigned m_no_full_passes;
            unsigned m_no_occ_in_full_pass;
            unsigned m_overflow;
            void determine_passes();
            niedoida::core::SchwartzEstimator m_schwartz;
        };

        inline
        double RHF_LT_MP2::energy_correction() const { 
            return m_e2; 
        }

        class MP2_BasisStructure {
        protected:
            MP2_BasisStructure(std::shared_ptr<const niedoida::core::System> system);

            unsigned m_n;
            unsigned m_no_shells;
            unsigned m_no_contractions;
            unsigned m_no_occ;
            unsigned m_no_virt;
            unsigned m_no_frozen;
            unsigned m_no_deleted;
            std::vector<unsigned> m_shell_sizes;
            std::vector<unsigned> m_first_contraction_in_shell;
        };

        class LT_AO_MP2_Base {
        protected:
            virtual unsigned long long subd2_size(std::size_t, std::size_t) = 0;

            std::vector<std::size_t> split(std::size_t, std::size_t);

            struct Integrals {
                ~Integrals();

                struct Level4 {
                    Level4(std::size_t s):
                        size(s), 
                        indices(new std::size_t[s]), 
                        values(new double[s]) 
                        { 
                            std::memset(values, 0, s * sizeof (double)); 
                        }

                    Level4(const Level4& l4):
                        size(l4.size), indices(new std::size_t[size]), values(new double[size]) { std::memcpy(indices, l4.indices, size * sizeof (std::size_t)); std::memcpy(values, l4.values, size * sizeof (double)); }

                    ~Level4() { delete [] indices; delete [] values; }
            
                    std::size_t size;
                    std::size_t* indices;
                    double* values;
                };

                typedef std::pair<std::size_t, Level4*> P4;
                typedef std::vector<P4> Level3;
                typedef std::pair<std::size_t, Level3*> P3;
                typedef std::vector<P3> Level2;
                typedef std::vector<Level2*> Level1;
                Level1 roots;
            };

            struct Integrals_sh {
                ~Integrals_sh();

                typedef std::vector<std::size_t> Level4;
                typedef std::vector<std::pair<std::size_t, Level4*> > Level3;
                typedef std::vector<std::pair<std::size_t, Level3*> > Level2;
                typedef std::vector<Level2*> Level1;
                Level1 roots;
            };

            class IJKLShellQuartetIndexIterator: 
                public std::iterator<std::input_iterator_tag, niedoida::core::ShellQuartetIndex>
            {
            public:
                IJKLShellQuartetIndexIterator(Integrals_sh*);

                bool operator == (const IJKLShellQuartetIndexIterator&) const;
                bool operator != (const IJKLShellQuartetIndexIterator&) const;

                niedoida::core::ShellQuartetIndex operator* () const;

                IJKLShellQuartetIndexIterator& operator++ ();
                IJKLShellQuartetIndexIterator operator++ (int);

                IJKLShellQuartetIndexIterator make_end() const;

            private:
                void inc();

                Integrals_sh* _d;
                std::size_t _i;
                Integrals_sh::Level2* _l2;
                std::size_t _ji;
                Integrals_sh::Level3* _l3;
                std::size_t _ki;
                Integrals_sh::Level4* _l4;
                std::size_t _li;
   
            };

        private:
            std::size_t batch_size(std::size_t, std::size_t, std::size_t);
        };

        inline
        LT_AO_MP2_Base::IJKLShellQuartetIndexIterator::IJKLShellQuartetIndexIterator(Integrals_sh* d):
            _d(d)
        {
            _ji = 0;
            _ki = 0;
            _li = 0;

            for (_i = 0; _i < _d->roots.size(); ++_i)
                if (_d->roots[_i])
                    break;

            if (_i < _d->roots.size()) {
                _l2 = _d->roots[_i];
                _l3 = (*_l2)[_ji].second;
                _l4 = (*_l3)[_ki].second;
            } else {
                _l2 = 0;
                _l3 = 0;
                _l4 = 0;
            }
   
        }

        inline
        bool LT_AO_MP2_Base::IJKLShellQuartetIndexIterator::operator == (
            const IJKLShellQuartetIndexIterator& rhs) const
        {
            assert(_d == rhs._d);

            return _i == rhs._i && _ji == rhs._ji && _ki == rhs._ki && _li == rhs._li;
        }

        inline
        bool LT_AO_MP2_Base::IJKLShellQuartetIndexIterator::operator != (
            const IJKLShellQuartetIndexIterator& rhs) const
        {
            return !(*this == rhs);
        }

        inline
        niedoida::core::ShellQuartetIndex LT_AO_MP2_Base::IJKLShellQuartetIndexIterator::operator* () const
        {
            niedoida::core::ShellQuartetIndex sqi = {{static_cast<unsigned>(_i), static_cast<unsigned>((*_l2)[_ji].first), 
                                      static_cast<unsigned>((*_l3)[_ki].first), static_cast<unsigned>((*_l4)[_li])}};
            return sqi;
        }

        inline
        LT_AO_MP2_Base::IJKLShellQuartetIndexIterator& LT_AO_MP2_Base::IJKLShellQuartetIndexIterator::operator++ ()
        {
            inc();
            return *this;
        }

        inline
        LT_AO_MP2_Base::IJKLShellQuartetIndexIterator LT_AO_MP2_Base::IJKLShellQuartetIndexIterator::operator++ (int)
        {
            const IJKLShellQuartetIndexIterator t = *this;
            inc();
            return t;
        }


        inline
        LT_AO_MP2_Base::IJKLShellQuartetIndexIterator LT_AO_MP2_Base::IJKLShellQuartetIndexIterator::make_end() const
        {
            IJKLShellQuartetIndexIterator t(_d);

            t._ji = t._ki = t._li = 0;
            t._i = _d->roots.size();

            t._l2 = 0;
            t._l3 = 0;
            t._l4 = 0;

            return t;
        }

        inline
        void LT_AO_MP2_Base::IJKLShellQuartetIndexIterator::inc()
        {
    
            if (_i == _d->roots.size())
                return;

            if (++_li == _l4->size()) {
                _li = 0;
                if (++_ki == _l3->size()) {
                    _ki = 0;
                    if (++_ji == _l2->size()) {
                        _ji = 0;
                        do {
                            if (++_i == _d->roots.size()) {
                                _l2 = 0;
                                _l3 = 0;
                                _l4 = 0;
                                return;
                            }
                            _l2 = _d->roots[_i];
                        } while (!_l2);
                    }
                    _l3 = (*_l2)[_ji].second;
                }
                _l4 = (*_l3)[_ki].second;
            }
        }

        class LT_AO_MP2_2EIntegrals: public MP2_BasisStructure {
        protected:
            LT_AO_MP2_2EIntegrals(
                std::shared_ptr<const niedoida::core::System> system, 
                std::unique_ptr<niedoida::core::TwoElectronIntegralEngine> two_e_int_eng);

            std::unique_ptr<niedoida::core::TwoElectronIntegralEngine> m_2ei;
            std::size_t m_max_no_requests;
            std::vector<niedoida::core::Request> m_requests;
            boost::multi_array<double, 1> m_buf;
        };

        class LT_AO_MP2_SchwartzPrescreening: public LT_AO_MP2_2EIntegrals {
        protected:
            LT_AO_MP2_SchwartzPrescreening(
                std::shared_ptr<const niedoida::core::System> system,
                std::unique_ptr<niedoida::core::TwoElectronIntegralEngine> two_e_int_eng, 
                double eps);

            void matrices_max_elements();

            void generate_A();
            void generate_BCD(const arma::mat& X, const arma::mat& Y);

            void handle_request(
                const niedoida::core::Request&,
                const arma::mat& X, 
                const arma::mat& Y);

            double m_eps;

            niedoida::core::SchwartzEstimator m_schwartz;

            arma::mat m_A, m_B, m_C, m_D, m_D1, m_D2;
            arma::mat m_D_sh, m_A_sh, m_B_sh, m_C_sh, m_D_local, m_D_sh_local;
            arma::vec m_max_A_row;
            arma::vec m_max_A_row_local;
            arma::vec m_max_B_col;
            arma::vec m_max_B_col_local;
            arma::vec m_max_B_row;
            arma::vec m_max_C_col;
            arma::vec m_max_C_col_local;
            arma::vec m_max_C_row;
            arma::vec m_max_D_col;
            arma::vec m_max_D_col_local;
            arma::vec m_max_D_row;

            double m_max_A;
            double m_max_A_local;
            double m_max_B;
            double m_max_B_local;
            double m_max_C;
            double m_max_C_local;
            double m_max_D;
            double m_max_D_local;

            boost::mpi::communicator m_comm;
        };

        class RHF_LT_AO_MP2: public MP2, private LT_AO_MP2_Base, private LT_AO_MP2_SchwartzPrescreening {
        public:
            RHF_LT_AO_MP2(
                std::shared_ptr<const niedoida::core::System> system,
                std::unique_ptr<niedoida::core::TwoElectronIntegralEngine> two_e_int_eng,
                const arma::vec& e,
                const arma::mat& C,
                unsigned long memory_pool,
                unsigned no_frozen,
                unsigned no_deleted,
                const niedoida::misc::Quadrature&,
                const double eps);
            double energy_correction() const;

        private:
            std::size_t m_memory_pool;
            arma::vec m_e;
            arma::vec m_ef;
            double m_e2;
            arma::mat m_X;
            arma::mat m_Y;
            std::unique_ptr<std::size_t[]> m_indices_buf2;
            std::unique_ptr<std::size_t[]> m_indices_buf3;
            std::unique_ptr<std::size_t[]> m_indices_buf4;
            arma::vec m_X_local;
            arma::vec m_X_local_sh;
            arma::vec m_max_Y_sh;

            void make_local_matrices(const std::size_t, const std::size_t);


            unsigned long long subd2_size(std::size_t, std::size_t);

            void make_d2(std::size_t, std::size_t, Integrals&);
            void make_partial_d4(std::size_t, std::size_t, std::size_t*, std::size_t, Integrals&);
            void make_partial_d3(std::size_t, std::size_t, std::size_t*, std::size_t, Integrals&);
            void make_d_sh(Integrals_sh&, const Integrals&);
            void make_partial_d_sh(Integrals_sh&, const Integrals&);

            void trans12(std::size_t, std::size_t, Integrals&);
            void trans34(std::size_t, std::size_t, std::size_t*, std::size_t, Integrals&, Integrals&);
            void trans_partial_3(std::size_t, std::size_t, std::size_t*, std::size_t, Integrals&, Integrals&);
            void trans_partial_4(std::size_t, std::size_t, std::size_t*, std::size_t, Integrals&, Integrals&);
            void trans3partial(std::size_t, std::size_t, std::size_t, std::size_t, double, Integrals&);
            void trans4partial(std::size_t, std::size_t, std::size_t, std::size_t, double, Integrals&);
            double energy_partial_contribution(Integrals_sh&, const Integrals&);

            boost::mpi::communicator m_comm;
        };

        inline
        double RHF_LT_AO_MP2::energy_correction() const { 
            return m_e2; 
        }

        class RHF_LS_LT_AO_MP2: public MP2, private LT_AO_MP2_Base, private LT_AO_MP2_SchwartzPrescreening {
        public:
            RHF_LS_LT_AO_MP2(
                std::shared_ptr<const niedoida::core::System> system,
                std::unique_ptr<niedoida::core::TwoElectronIntegralEngine> two_e_int_eng,
                const arma::vec& e,
                const arma::mat& C,
                unsigned long memory_pool,
                unsigned no_frozen,
                unsigned no_deleted,
                const niedoida::misc::Quadrature&,
                const double eps);
            double energy_correction() const;

        private:
            std::size_t m_memory_pool;
            arma::vec m_e;
            arma::vec m_ef;
            double m_e2;
            double m_range_cutoff;
            arma::mat m_X;
            arma::mat m_Y;
            std::unique_ptr<std::size_t[]> m_indices_buf2;
            std::unique_ptr<std::size_t[]> m_indices_buf3;
            std::unique_ptr<std::size_t[]> m_indices_buf4;
            niedoida::gto::OS1Implementation::FlatBasisSet m_fbs;
            arma::vec m_X_local;
            arma::vec m_X_local_sh;
            arma::vec m_max_Y_sh;

            arma::vec m_ranges;
            boost::multi_array<double, 3> m_pair_centers;
            arma::mat m_pair_ranges;
            boost::multi_array<bool, 2> m_pair_significant;
            arma::mat m_pair_max_values;
            boost::multi_array<bool, 2> m_sh_pair_significant;
            arma::mat m_sh_pair_ranges;
            boost::multi_array<double, 3> m_sh_pair_centers;
            boost::multi_array<double, 3> m_M_sh;
            boost::multi_array<double, 3> m_M;
            arma::mat m_t_pair_ranges;
            arma::field<bool> m_t_pair_significant;
            boost::multi_array<double, 3> m_M_t;
            arma::mat m_d_pair_ranges;
            arma::field<bool> m_d_pair_significant;
            boost::multi_array<double, 3> m_M_d;
            arma::mat m_u_pair_ranges;
            arma::field<bool> m_u_pair_significant;
            boost::multi_array<double, 3> m_M_u;


            void calc_pair_ranges_2();
            void calc_pair_centers_ranges();
            void calc_pair_multipoles();
            void calc_sh_pair_significant();
            void calc_sh_pair_centers_ranges_multipoles();
            void calc_t_pair_ranges_multipoles(const double);
            void calc_d_pair_ranges_multipoles(const double);
            void calc_u_pair_ranges_multipoles(const double);

            double calc_range(const int,
                              const double,
                              const double*,
                              const double*,
                              const std::size_t);
            void calc_ranges(const double);

            void make_local_matrices(const std::size_t, const std::size_t);

            unsigned long long subd2_size(std::size_t, std::size_t);

            void make_d2(std::size_t, std::size_t, Integrals&);
            void make_partial_d4(std::size_t, std::size_t, std::size_t*, std::size_t, Integrals&);
            void make_partial_d3(std::size_t, std::size_t, std::size_t*, std::size_t, Integrals&);
            void make_d_sh(Integrals_sh&, const Integrals&);
            void make_partial_d_sh(Integrals_sh&, const Integrals&);

            void trans12(std::size_t, std::size_t, Integrals&);
            void trans34(std::size_t, std::size_t, std::size_t*, std::size_t, Integrals&, Integrals&);
            void trans_partial_3(std::size_t, std::size_t, std::size_t*, std::size_t, Integrals&, Integrals&);
            void trans_partial_4(std::size_t, std::size_t, std::size_t*, std::size_t, Integrals&, Integrals&);
            void trans3partial(std::size_t, std::size_t, std::size_t, std::size_t, double, Integrals&);
            void trans4partial(std::size_t, std::size_t, std::size_t, std::size_t, double, Integrals&);
            double energy_partial_contribution(Integrals_sh&, const Integrals&);

            boost::mpi::communicator m_comm;
        };

        inline
        double RHF_LS_LT_AO_MP2::energy_correction() const { 
            return m_e2; 
        }
    }
}
#endif
