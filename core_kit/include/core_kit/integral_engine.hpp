/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_CORE_KIT_INTEGRAL_ENGINE_HPP
#define NIEDOIDA_CORE_KIT_INTEGRAL_ENGINE_HPP

#include <algorithm>
#include <map>
#include <memory>
#include <queue>
#include <vector>

#include <boost/tuple/tuple.hpp>
#include <boost/tuple/tuple_comparison.hpp>
#include <boost/filesystem/path.hpp>

#include "core_kit/system.hpp"
#include "core_kit/shell_quartet_index_generator.hpp"
#include "core_kit/shell_pair_index_generator.hpp"
#include "core_kit/shell_ACD_index_generator.hpp"
#include "core_kit/spin.hpp"

#include <hdf5.h>

namespace niedoida {

    namespace core {

/**
 * @defgroup integration Integration
 * @ingroup core_kit
 * @{
 */

/**
 * @brief Interface for one-electron integral engines.
 *
 * This class defines the interface one-electron integral
 * engines should follow. Being an abstract class, it doesn't
 * implement any functionality. Concrete engines should publicly
 * derive from this class.
 * 
 */
        class OneElectronIntegralEngine {
        public:
	  virtual ~OneElectronIntegralEngine() {};

	  virtual const arma::mat& overlap_matrix() const = 0;
	  virtual const arma::mat& kinetic_matrix() const = 0;
	  virtual const arma::mat& external_potential_matrix_from_ext_chrgs() const = 0;
	  virtual const arma::mat& external_potential_matrix_from_nucl() const = 0;
	  
        };

        struct Request {
            ShellQuartetIndex shells;
    
            bool done;
            double* results;
        };

        struct PairRequest {
            ShellPairIndex shells;
    
            bool done;
            double* results;
        };

        struct ACDRequest {
            ShellACDIndex shells;
    
            bool done;
            double* results;
        };

/**
 * @brief Interface for two-electron integral engines.
 *
 * This class defines the interface two-electron integral
 * engines should follow. Being an abstract class, it doesn't
 * implement any functionality. Concrete engines should publicly
 * derive from this class.
 * 
 */
        class TwoElectronIntegralEngine {
        public:
            virtual ~TwoElectronIntegralEngine() {};

            virtual std::size_t preferred_no_requests() const = 0;
            virtual void calc(std::vector<Request>&) const = 0;
        };

/**
 * @brief Interface for engines calculating derivatives of
 * two-electron integrals.
 *
 * This class defines the interface two-electron integral derivative
 * engines should follow. Being an abstract class, it doesn't
 * implement any functionality. Concrete engines should publicly
 * derive from this class.
 * 
 */
        class TwoElectronIntegralDerivEngine {
        public:
            virtual ~TwoElectronIntegralDerivEngine() {}

            virtual std::size_t preferred_no_requests() const = 0;
            virtual void calc(std::vector<Request>&) const = 0;
        };

/**
 * @brief Interface for Poisson two-electron integral engines.
 *
 */
        class PoissonTwoElectronIntegralEngine {
        public:
            virtual ~PoissonTwoElectronIntegralEngine() {};

            virtual std::size_t preferred_no_pair_requests() const = 0;
            virtual std::size_t preferred_no_ACD_requests() const = 0;
            virtual void calc_AC(std::vector<PairRequest>&) const = 0;
            virtual void calc_ACD(std::vector<ACDRequest>&) const = 0;
            virtual void calc_A_aux(std::vector<PairRequest>&) const = 0; 
        };

/**
 * @brief Interface for quasi two-electron integral engines.
 *
 */
        class QuasiTwoElectronIntegralEngine {
        public:
            virtual ~QuasiTwoElectronIntegralEngine() {};

            virtual std::size_t preferred_no_pair_requests() const = 0;
            virtual std::size_t preferred_no_ACD_requests() const = 0;
            virtual void calc_AC(std::vector<PairRequest>&) const = 0;
            virtual void calc_pair(std::vector<PairRequest>&) const = 0;
            virtual void calc_ACD(std::vector<ACDRequest>&) const = 0;
        };



/**
 * @brief Interface for one-electron density-dependent integrals.
 *
 */
        class QuasiOneElectronIntegralEngine {
        public:
            virtual ~QuasiOneElectronIntegralEngine() {};

            virtual void set_density_matrix(
                const arma::mat&,
                const arma::mat&) = 0;
            
            virtual void set_density_matrix_for_CPHF(
                const arma::mat&,
                const arma::mat&,
                const arma::mat&,
                const arma::mat&
                ) =0;
            
            
            virtual void calc_matrix_core_gradient( const arma::mat& , const std::vector<unsigned>& atoms) = 0;

            virtual const arma::mat& integrals(Spin) const = 0;
            virtual const arma::mat& integrals_dC(Spin) const = 0;
            virtual double energy() const = 0;
            virtual arma::mat energy_gradient(const std::vector<unsigned>& atoms) = 0;
            virtual const std::vector<arma::cube>& matrix_core_gradient( ) const = 0;
        };

/**
 * @brief Simple in-memory two-electron integrals cache.
 *
 */
        class TwoElectronIntegralCache: public TwoElectronIntegralEngine {
        public:
            TwoElectronIntegralCache(
                const BasisSet&,
                std::unique_ptr<TwoElectronIntegralEngine>, 
                std::size_t max_size);

            ~TwoElectronIntegralCache();

            std::size_t preferred_no_requests() const;
            void calc(std::vector<Request>&) const;

        private:
            typedef boost::tuple<unsigned, unsigned, unsigned, unsigned> ShellQuartetIndex;
            typedef std::map<ShellQuartetIndex, std::vector<double> > IndexIntsMap;
            struct Entry {
                ShellQuartetIndex index;
                std::size_t no_ints;
                double max_int;
            };

            struct CompareEntries: 
                public std::binary_function<const Entry&, const Entry&, bool>
            {
                bool operator ()(const Entry& lhs, const Entry& rhs) const
                    {
                        return std::abs(lhs.max_int) > std::abs(rhs.max_int);
                    }

            };

            std::unique_ptr<TwoElectronIntegralEngine> m_ie;
            std::size_t m_max_size;
            std::vector<std::size_t> m_shell_sizes;

            mutable std::size_t m_size;
            mutable IndexIntsMap m_index_ints_map;
            mutable std::priority_queue<Entry, std::vector<Entry>, CompareEntries> m_smallest;
            mutable unsigned long m_no_hits;
            mutable unsigned long m_no_misses;
        };

/**
 * @brief Simple implementation of disk-based two-electron integral engine.
 *
 */
        class TwoElectronDiskIntegralEngine: public TwoElectronIntegralEngine {
        public:
            enum StorageType {
                LOCAL_STORAGE,
                SHARED_STORAGE
            };

            TwoElectronDiskIntegralEngine(StorageType,
                                          const boost::filesystem::path&,
                                          std::shared_ptr<const System>,
                                          std::unique_ptr<TwoElectronIntegralEngine>,
                                          double treshold);

            TwoElectronDiskIntegralEngine(StorageType,
                                          const boost::filesystem::path&, 
                                          const BasisSet&);

            ~TwoElectronDiskIntegralEngine();

            std::size_t preferred_no_requests() const;

            void calc(std::vector<Request>&) const;

        private:
            hid_t m_file;
            hid_t m_index_dset;
            hid_t m_ints_dset;

            std::vector<unsigned> m_shell_sizes;

            mutable std::vector<hsize_t> m_index_offsets;
            mutable std::vector<hsize_t> m_ints_offsets;
            mutable std::vector<hsize_t> m_ints_counts;
            mutable std::vector<double> m_ints_buf;
        };

/**
 * @brief Simple implementation of in-core two-electron integral engine.
 *
 */
        class TwoElectronInCoreIntegralEngine: public TwoElectronIntegralEngine {
        public:
            TwoElectronInCoreIntegralEngine(const BasisSet&,
                                            std::unique_ptr<TwoElectronIntegralEngine>,
                                            double treshold);

            std::size_t preferred_no_requests() const;

            void calc(std::vector<Request>&) const;

        private:
            void do_calc(Request&) const;

            std::vector<std::size_t> m_shell_sizes;
            std::size_t m_no_shells;
            std::vector<const double*> m_pointers;
            std::vector<double> m_ints;
            std::unique_ptr<double[]> m_swap_buf;
        };


        class TwoElectronIntegralEngineProxy: public TwoElectronIntegralEngine {
        public:
            TwoElectronIntegralEngineProxy(
                std::shared_ptr<TwoElectronIntegralEngine> ie):
                m_ie(ie) {}

            std::size_t preferred_no_requests() const
                {
                    return m_ie->preferred_no_requests();
                }

            void calc(std::vector<Request>& requests) const
                {
                    return m_ie->calc(requests);
                }

        private:
            std::shared_ptr<TwoElectronIntegralEngine> m_ie;
        };



/**
 * @}
 */
    }
}

#endif
