/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_GTO_KIT_OS1_ELECTRON_INTEGRAL_ENGINE_HPP
#define NIEDOIDA_GTO_KIT_OS1_ELECTRON_INTEGRAL_ENGINE_HPP

#include "core_kit/system.hpp"
#include "core_kit/integral_engine.hpp"
#include <boost/multi_array.hpp>
#include <vector>
#include "gto_kit/os1_constants.hpp"

namespace niedoida {
  namespace gto {
    /**
     * @defgroup os1 OS1 Scheme
     * @ingroup gto_kit
     * @{
     */

    class OS1Implementation {
    public:
      struct FlatBasisSet {
	struct Shell{
	  bool spherical;
	  double primitive_exps_min;
	  double primitive_exps_max;
	  unsigned contraction_starting_number;
	  const core::Atom* atom;
	  unsigned l_min;
	  unsigned l_max;
	  std::vector<unsigned> l;
	  arma::vec primitive_exps;
	  arma::mat prenormed_contraction_coeffs;
	  unsigned size;
	  unsigned cartesian_size;
	  unsigned naive_size;
	};
	FlatBasisSet(const core::BasisSet&);
	std::vector<Shell> shells;
	double primitive_exps_max;
	double primitive_exps_min;
	std::vector<arma::mat> cart_to_spher_matrices;
	unsigned size;
	unsigned max_l;
	unsigned max_primitive_size;
	unsigned max_naive_size;
	unsigned AAAA_max_size;
	unsigned BBBBBB_max_size;
	bool spherical;
      };

      inline
      static unsigned triple_index_map(unsigned i, unsigned j, unsigned k) {
	const unsigned t = i + j + k;
	return (t * (t + 1) * (t + 2) / 6 + (j + k) * (j + k + 1) / 2 + k);
      }

      inline
      static unsigned quadruple_index_map(
					  unsigned i, unsigned j, unsigned k, unsigned l,
					  unsigned j_size, unsigned k_size, unsigned l_size) {
	return (((i * j_size + j) * k_size + k) * l_size) + l;
      }

      inline
      static unsigned sum1n(unsigned n) {
	return (n * (n + 1)) / 2;
      }

      inline
      static void prepare_contraction(const double* NIEDOIDA_RESTRICT CT_1,
				      const double* NIEDOIDA_RESTRICT CT_2,
				      double* NIEDOIDA_RESTRICT CT_12,
				      const unsigned prim_size_1,
				      const unsigned prim_size_2,
				      const unsigned naive_size_1,
				      const unsigned naive_size_2)
      {
	if(naive_size_1 * naive_size_2 == 1) {
	  for(unsigned i = 0; i < prim_size_1; ++i) {
	    const double factor = *CT_1++; 
	    const double* NIEDOIDA_RESTRICT CT_2_cur = CT_2;
	    for(unsigned j = 0; j < prim_size_2; ++j) {
	      *CT_12++ = factor * *CT_2_cur++;
	    }
	  }      
	} else {
	  for(unsigned i = 0; i < prim_size_1; ++i) {
	    const double* NIEDOIDA_RESTRICT CT_1_i = CT_1 + i * naive_size_1; 
	    for(unsigned j = 0; j < prim_size_2; ++j) {
	      const double* NIEDOIDA_RESTRICT CT_2_j = CT_2 + j * naive_size_2;
	      for(unsigned p = 0; p < naive_size_1; ++p) {
		const double factor = CT_1_i[p];
		for(unsigned q = 0; q < naive_size_2; ++q)
		  *CT_12++ = factor * CT_2_j[q];
	      }
	    }
	  }
	}
      }

      inline 
      static void segmented_contraction(double* NIEDOIDA_RESTRICT A,
					const double* NIEDOIDA_RESTRICT B,
					const unsigned range)
      {
	const unsigned overflow = range % 5;
	const unsigned steps = range / 5;
	for(unsigned i = 0; i < overflow; ++i)
	  *A++ += *B++;
	for(unsigned i = 0; i < steps; ++i, B += 5, A += 5) {
	  *A += *B;
	  *(A + 1) += *(B + 1);
	  *(A + 2) += *(B + 2);
	  *(A + 3) += *(B + 3);
	  *(A + 4) += *(B + 4);
	}
      }

      inline
      static void general_contraction(const double* NIEDOIDA_RESTRICT CT,
				      double* NIEDOIDA_RESTRICT A, 
				      const double* NIEDOIDA_RESTRICT B_b,
				      const unsigned range,
				      const unsigned naive_size)
      {
	const unsigned overflow = range % 5;
	const unsigned steps = range / 5;
	const unsigned macrosteps  = naive_size  / 2;
	if(naive_size & 1) {
	  const double* NIEDOIDA_RESTRICT B = B_b;
	  const double factor = *CT++;
	  for(unsigned i = 0; i < overflow; ++i)
	    *A++ += factor * *B++;
	  for(unsigned i = 0; i < steps; ++i) {
	    *A++ += factor * *B++;
	    *A++ += factor * *B++;
	    *A++ += factor * *B++;
	    *A++ += factor * *B++;
	    *A++ += factor * *B++;
	  }
	}

	for(unsigned j = 0; j < macrosteps; ++j) {
	  const double* NIEDOIDA_RESTRICT B = B_b;
	  const double factor = *CT++;
	  const double factor1 = *CT++;
	  double* NIEDOIDA_RESTRICT A1 = A + range;
	  for(unsigned i = 0; i < overflow; ++i) {
	    const double B0 = *B++;
	    *A++ += factor * B0;
	    *A1++ += factor1 * B0;
	  }
	  for(unsigned i = 0; i < steps; ++i) {
	    const double B0 = *B++;
	    const double B1 = *B++;
	    const double B2 = *B++;
	    const double B3 = *B++;
	    const double B4 = *B++;            
	    *A++ += factor * B0;
	    *A++ += factor * B1;
	    *A++ += factor * B2;
	    *A++ += factor * B3;
	    *A++ += factor * B4;
	    *A1++ += factor1 * B0;
	    *A1++ += factor1 * B1;
	    *A1++ += factor1 * B2;
	    *A1++ += factor1 * B3;
	    *A1++ += factor1 * B4;
	  }
	  A += range; 
	}
      }

      inline
      static void unswap(const double* NIEDOIDA_RESTRICT b, const unsigned s12, 
			 const unsigned s, double* NIEDOIDA_RESTRICT results,
			 const unsigned i_scope, const unsigned j_scope,
			 const unsigned k_scope, const unsigned l_scope,
			 const unsigned size_1, const unsigned size_2,
			 const unsigned size_3, const unsigned size_4,
			 const unsigned i_begin, const unsigned j_begin,
			 const unsigned  k_begin, const unsigned l_begin,
			 const bool swapped_1, const bool swapped_2,
			 const bool swapped_12)
      { 
	if(swapped_1) {
	  if(swapped_2) {
	    if(swapped_12) {//lkji
	      double* NIEDOIDA_RESTRICT begin = results + 
		quadruple_index_map(l_begin, k_begin,
				    j_begin, i_begin,
				    size_3, size_2, size_1);
	      unsigned ij_index = 0;
	      for(unsigned i = 0; i < i_scope; ++i)
		for(unsigned j = 0; j < j_scope; ++j, ++ij_index)
		  for(unsigned k = 0; k < k_scope; ++k)
		    for(unsigned l = 0; l < l_scope; ++l)
		      *(begin + quadruple_index_map(l, k,
						    j, i,
						    size_3, size_2, size_1)) =
			*(b + ij_index * s12 + k * s + l);
	    }
	    else {//jilk
	      unsigned ij_index = 0;
	      double* NIEDOIDA_RESTRICT begin = results + 
		quadruple_index_map(j_begin, i_begin,
				    l_begin, k_begin,
				    size_1, size_4, size_3);
	      for(unsigned i = 0; i < i_scope; ++i)
		for(unsigned j = 0; j < j_scope; ++j, ++ij_index)
		  for(unsigned k = 0; k < k_scope; ++k)
		    for(unsigned l = 0; l < l_scope; ++l)
		      *(begin + quadruple_index_map(j, i,
						    l, k,
						    size_1, size_4, size_3)) =
			*(b + ij_index * s12 + k * s + l);
	    }
	  }
	  else {
	    if(swapped_12) {//klji
	      unsigned ij_index = 0;
	      double* NIEDOIDA_RESTRICT begin = results + 
		quadruple_index_map(l_begin, k_begin,
				    i_begin, j_begin,
				    size_3, size_1, size_2);
	      for(unsigned i = 0; i < i_scope; ++i)
		for(unsigned j = 0; j < j_scope; ++j, ++ij_index)
		  for(unsigned k = 0; k < k_scope; ++k)
		    for(unsigned l = 0; l < l_scope; ++l)
		      *(begin + quadruple_index_map(l, k,
						    i, j,
						    size_3, size_1, size_2)) =
			*(b + ij_index * s12 + k * s + l);
	    }
	    else {//jikl
	      unsigned ij_index = 0;
	      double* NIEDOIDA_RESTRICT begin = results + 
		quadruple_index_map(j_begin, i_begin,
				    k_begin, l_begin,
				    size_1, size_3, size_4);
	      for(unsigned i = 0; i < i_scope; ++i)
		for(unsigned j = 0; j < j_scope; ++j, ++ij_index)
		  for(unsigned k = 0; k < k_scope; ++k)
		    for(unsigned l = 0; l < l_scope; ++l)
		      *(begin + quadruple_index_map(j, i,
						    k, l,
						    size_1, size_3, size_4)) =
			*(b + ij_index * s12 + k * s + l);
	    }
	  }
	}
	else {
	  if(swapped_2) {
	    if(swapped_12) {//lkij
	      unsigned ij_index = 0;
	      double* NIEDOIDA_RESTRICT begin = results + 
		quadruple_index_map(k_begin, l_begin,
				    j_begin, i_begin,
				    size_4, size_2, size_1);
	      for(unsigned i = 0; i < i_scope; ++i)
		for(unsigned j = 0; j < j_scope; ++j, ++ij_index)
		  for(unsigned k = 0; k < k_scope; ++k)
		    for(unsigned l = 0; l < l_scope; ++l)
		      *(begin + quadruple_index_map(k, l,
						    j, i,
						    size_4, size_2, size_1)) =
			*(b + ij_index * s12 + k * s + l);
	    }
	    else {//ijlk
	      unsigned ij_index = 0;
	      double* NIEDOIDA_RESTRICT begin = results + 
		quadruple_index_map(i_begin, j_begin,
				    l_begin, k_begin,
				    size_2, size_4, size_3);
	      for(unsigned i = 0; i < i_scope; ++i)
		for(unsigned j = 0; j < j_scope; ++j, ++ij_index)
		  for(unsigned k = 0; k < k_scope; ++k)
		    for(unsigned l = 0; l < l_scope; ++l)
		      *(begin + quadruple_index_map(i, j,
						    l, k,
						    size_2, size_4, size_3)) =
			*(b + ij_index * s12 + k * s + l);
	    }
	  }
	  else {
	    if(swapped_12) {//klij
	      unsigned ij_index = 0;
	      double* NIEDOIDA_RESTRICT begin = results + 
		quadruple_index_map(k_begin, l_begin,
				    i_begin, j_begin,
				    size_4, size_1, size_2);
	      for(unsigned i = 0; i < i_scope; ++i)
		for(unsigned j = 0; j < j_scope; ++j, ++ij_index)
		  for(unsigned k = 0; k < k_scope; ++k)
		    for(unsigned l = 0; l < l_scope; ++l)
		      *(begin + quadruple_index_map(k, l,
						    i, j,
						    size_4, size_1, size_2)) =
			*(b + ij_index * s12 + k * s + l);
	    }
	    else {//ijkl
	      unsigned ij_index = 0;
	      double* NIEDOIDA_RESTRICT begin = results + 
		quadruple_index_map(i_begin, j_begin,
				    k_begin, l_begin,
				    size_2, size_3, size_4);
	      for(unsigned i = 0; i < i_scope; ++i)
		for(unsigned j = 0; j < j_scope; ++j, ++ij_index)
		  for(unsigned k = 0; k < k_scope; ++k)
		    for(unsigned l = 0; l < l_scope; ++l)
		      *(begin + quadruple_index_map(i, j,
						    k, l,
						    size_2, size_3, size_4)) =
			*(b + ij_index * s12 + k * s + l);
	    }
	  }
	}
      }
      inline
      static void cart_to_spher_2(const unsigned l_j,const unsigned i_begin,
				  const unsigned i_end, const unsigned k_begin,
				  const unsigned k_end, double* NIEDOIDA_RESTRICT b,
				  const unsigned s_12, const unsigned s)
      {

	if(l_j == 2) {
	  for(unsigned k = k_begin; k < k_end; ++k) {
	    double* NIEDOIDA_RESTRICT b_cur = b + k * s_12 + i_begin * s;
	    for(unsigned i = i_begin; i < i_end; ++i, b_cur += s) {
	      *b_cur = *(b_cur + 5) * sqrt3;
	      *(b_cur + 1) = *(b_cur + 8) * sqrt3;
	      *(b_cur + 2) = (2 * *(b_cur + 9) - *(b_cur + 4) - *(b_cur + 7)) / sqrt12 * sqrt3;
	      *(b_cur + 3) = *(b_cur + 6) * sqrt3;
	      *(b_cur + 4) = (*(b_cur + 4) - *(b_cur + 7)) / 2 * sqrt3;
	    }
	  }
	} else if(l_j == 3) {
	  for(unsigned k = k_begin; k < k_end; ++k) {
	    double* NIEDOIDA_RESTRICT b_cur = b + k * s_12 + i_begin * s;
	    for(unsigned i = i_begin; i < i_end; ++i, b_cur += s) {
	      *b_cur = (3 * *(b_cur + 11) - *(b_cur + 16)) / sqrt24 * sqrt15;
	      *(b_cur + 1) = *(b_cur + 14) * sqrt15;
	      *(b_cur + 2) = (4 * *(b_cur + 18) - *(b_cur + 16) - *(b_cur + 11)) / sqrt40 * sqrt15;
	      *(b_cur + 3) = (2 * *(b_cur + 19) - 3 * (*(b_cur + 17) + *(b_cur + 12))) / sqrt60 * sqrt15;
	      *(b_cur + 4) = (4 * *(b_cur + 15) - *(b_cur + 10) - *(b_cur + 13)) / sqrt40 * sqrt15;
	      *(b_cur + 5) = (*(b_cur + 12) - *(b_cur + 17)) / 2 * sqrt15;
	      *(b_cur + 6) = (*(b_cur + 10) - 3 * *(b_cur + 13)) / sqrt24 * sqrt15;
	    }
	  }
	} else if(l_j == 4) {
	  for(unsigned k = k_begin; k < k_end; ++k) {
	    double* NIEDOIDA_RESTRICT b_cur = b + k * s_12 + i_begin * s;
	    for(unsigned i = i_begin; i < i_end; ++i, b_cur += s) {
	      *b_cur = (*(b_cur + 21) - *(b_cur + 26)) / sqrt12 * sqrt105;
	      *(b_cur + 1) = (3 * *(b_cur + 24) - *(b_cur + 31)) / sqrt24 * sqrt105;
	      *(b_cur + 2) = (6 * *(b_cur + 28) - *(b_cur + 26) - *(b_cur + 21)) / sqrt84 * sqrt105;
	      *(b_cur + 3) = (4 * *(b_cur + 33) - 3 * *(b_cur + 24) - *(b_cur + 31)) / sqrt168 * sqrt105;
	      *(b_cur + 4) = (8 * *(b_cur + 34) + 6 * *(b_cur + 23) - 24 * (*(b_cur + 25) + *(b_cur + 32)) + 
			      3 * (*(b_cur + 20) + *(b_cur + 30))) / sqrt6720 * sqrt105;
	      *(b_cur + 5) = (4 * *(b_cur + 29) - 3 * *(b_cur + 27) - 3 * *(b_cur + 22)) / sqrt168 * sqrt105;
	      *(b_cur + 6) = (6 * (*(b_cur + 25) - *(b_cur + 32)) - *(b_cur + 20) + *(b_cur + 30)) / sqrt336 * sqrt105;
	      *(b_cur + 7) = (*(b_cur + 22) - *(b_cur + 27)) / sqrt24 * sqrt105;
	      *(b_cur + 8) = (*(b_cur + 20) + *(b_cur + 30) - 6 * *(b_cur + 23)) / sqrt192 * sqrt105;
	    }
	  }
	} else if(l_j == 5) {
	  for(unsigned k = k_begin; k < k_end; ++k) {
	    double* NIEDOIDA_RESTRICT b_cur = b + k * s_12 + i_begin * s;
	    for(unsigned i = i_begin; i < i_end; ++i, b_cur += s) {	      
	      *b_cur = (*(b_cur + 50) - 10 * *(b_cur + 41) + 5 * *(b_cur + 36)) / sqrt1920 * sqrt945;
	      *(b_cur + 1) = (*(b_cur + 39) - *(b_cur + 46)) / sqrt12 * sqrt945;
	      *(b_cur + 2) = (24 * *(b_cur + 43) - 3 * *(b_cur + 36) - 2 * *(b_cur + 41) +
				  *(b_cur + 50) - 8 * *(b_cur + 52)) / sqrt3456 * sqrt945;
	      *(b_cur + 3) = (2 * *(b_cur + 48) - *(b_cur + 39) - *(b_cur + 46)) / 6 * sqrt945;
	      *(b_cur + 4) = (12 * *(b_cur + 43) + 8 * *(b_cur + 54) - *(b_cur + 36) + 12 * *(b_cur + 52) - 
				  2 * *(b_cur + 41) - *(b_cur + 50)) / sqrt4032 * sqrt945;
	      *(b_cur + 5) = (8 * *(b_cur + 55) + 15 * (*(b_cur + 37) + *(b_cur + 51)) -
				  40 * (*(b_cur + 44) + *(b_cur + 53))) / sqrt60480 * sqrt945;
	      *(b_cur + 6) =  (*(b_cur + 35) + 2 * *(b_cur + 38) - 12 * *(b_cur + 40) + *(b_cur + 45) + 
				  8 * *(b_cur + 49) - 12 * *(b_cur + 47))/ sqrt4032 * sqrt945;
	      *(b_cur + 7) = (2 * (*(b_cur + 44) - *(b_cur + 53)) - *(b_cur + 37) + *(b_cur + 51)) / 12 * sqrt945;
	      *(b_cur + 8) = (8 * *(b_cur + 40) - *(b_cur + 35) + 2 * *(b_cur + 38) +
				  3 * *(b_cur + 45) - 24 * *(b_cur + 47)) / sqrt3456 * sqrt945;     
	      *(b_cur + 9) = (*(b_cur + 37) + *(b_cur + 51) - 6 * *(b_cur + 42)) / sqrt192 * sqrt945;
	      *(b_cur + 10) = (*(b_cur + 35) - 10 * *(b_cur + 38) + 5 * *(b_cur + 45)) / sqrt1920 * sqrt945;  
	    }
	  }
	}
      }
      inline
      static void cart_to_cart_2(const unsigned l_j,const unsigned i_begin,
				 const unsigned i_end, const unsigned k_begin,
				 const unsigned k_end, double* NIEDOIDA_RESTRICT b, 
				 const unsigned s_12, const unsigned s)
      {
	if(l_j == 2) {
	  for(unsigned k = k_begin; k < k_end; ++k)  {
	    double* NIEDOIDA_RESTRICT b_cur = b + k * s_12 + i_begin * s;
	    for(unsigned i = i_begin; i < i_end; ++i, b_cur += s) {
	      *b_cur = *(b_cur + 4) / sqrt3 * sqrt3;
	      *(b_cur + 1) = *(b_cur + 5) * sqrt3;
	      *(b_cur + 2) = *(b_cur + 6) * sqrt3;
	      *(b_cur + 3) = *(b_cur + 7) / sqrt3 * sqrt3;
	      *(b_cur + 4) = *(b_cur + 8) * sqrt3;
	      *(b_cur + 5) = *(b_cur + 9) / sqrt3 * sqrt3;
	    }
	  }
	} else if(l_j == 3) {
	  for(unsigned k = k_begin; k < k_end; ++k) {
	    double* NIEDOIDA_RESTRICT b_cur = b + k * s_12 + i_begin * s;
	    for(unsigned i = i_begin; i < i_end; ++i, b_cur += s) {
	      *b_cur = *(b_cur + 10) / sqrt15 * sqrt15;
	      *(b_cur + 1) = *(b_cur + 11) / sqrt3 * sqrt15;
	      *(b_cur + 2) = *(b_cur + 12) / sqrt3 * sqrt15;
	      *(b_cur + 3) = *(b_cur + 13) / sqrt3 * sqrt15;
	      *(b_cur + 4) = *(b_cur + 14) * sqrt15;
	      *(b_cur + 5) = *(b_cur + 15) / sqrt3 * sqrt15;
	      *(b_cur + 6) = *(b_cur + 16) / sqrt15 * sqrt15;
	      *(b_cur + 7) = *(b_cur + 17) / sqrt3 * sqrt15;
	      *(b_cur + 8) = *(b_cur + 18) / sqrt3 * sqrt15;
	      *(b_cur + 9) = *(b_cur + 19) / sqrt15 * sqrt15;
	    }
	  }
	} else if(l_j == 4) {
	  for(unsigned k = k_begin; k < k_end; ++k) {
	    double* NIEDOIDA_RESTRICT b_cur = b + k * s_12 + i_begin * s;
	    for(unsigned i = i_begin; i < i_end; ++i, b_cur += s) {
	      *b_cur = *(b_cur + 20) / sqrt105 * sqrt105;
	      *(b_cur + 1) = *(b_cur + 21) / sqrt15 * sqrt105;
	      *(b_cur + 2) = *(b_cur + 22) / sqrt15 * sqrt105;
	      *(b_cur + 3) = *(b_cur + 23) / 3 * sqrt105;
	      *(b_cur + 4) = *(b_cur + 24) / sqrt3 * sqrt105;
	      *(b_cur + 5) = *(b_cur + 25) / 3 * sqrt105;
	      *(b_cur + 6) = *(b_cur + 26) / sqrt15 * sqrt105;
	      *(b_cur + 7) = *(b_cur + 27) / sqrt3 * sqrt105;
	      *(b_cur + 8) = *(b_cur + 28) / sqrt3 * sqrt105;
	      *(b_cur + 9) = *(b_cur + 29) / sqrt15 * sqrt105;
	      *(b_cur + 10) = *(b_cur + 30) / sqrt105 * sqrt105;
	      *(b_cur + 11) = *(b_cur + 31) / sqrt15 * sqrt105;
	      *(b_cur + 12) = *(b_cur + 32) / 3 * sqrt105;
	      *(b_cur + 13) = *(b_cur + 33) / sqrt15 * sqrt105;
	      *(b_cur + 14) = *(b_cur + 34) / sqrt105 * sqrt105;
	    }
	  }
	} else if(l_j == 5) {
	  for(unsigned k = k_begin; k < k_end ; ++k) {
	    double* NIEDOIDA_RESTRICT b_cur = b  + k * s_12 + i_begin * s;
	    for(unsigned i = i_begin; i < i_end; ++i, b_cur += s) {
	      *b_cur = *(b_cur + 35) / sqrt945 * sqrt945;
	      *(b_cur + 1) = *(b_cur + 36) / sqrt105 * sqrt945;
	      *(b_cur + 2) = *(b_cur + 37) / sqrt105 * sqrt945;
	      *(b_cur + 3) = *(b_cur + 38) / sqrt45 * sqrt945;
	      *(b_cur + 4) = *(b_cur + 39) / sqrt15 * sqrt945;
	      *(b_cur + 5) = *(b_cur + 40) / sqrt45 * sqrt945;
	      *(b_cur + 6) = *(b_cur + 41) / sqrt45 * sqrt945;
	      *(b_cur + 7) = *(b_cur + 42) / 3 * sqrt945;
	      *(b_cur + 8) = *(b_cur + 43) / 3 * sqrt945;
	      *(b_cur + 9) = *(b_cur + 44) / sqrt45 * sqrt945;
	      *(b_cur + 10) = *(b_cur + 45) / sqrt105 * sqrt945;
	      *(b_cur + 11) = *(b_cur + 46) / sqrt15 * sqrt945;
	      *(b_cur + 12) = *(b_cur + 47) / 3 * sqrt945;
	      *(b_cur + 13) = *(b_cur + 48) / sqrt15 * sqrt945;
	      *(b_cur + 14) = *(b_cur + 49) / sqrt105 * sqrt945;
	      *(b_cur + 16) = *(b_cur + 50) / sqrt945 * sqrt945;
	      *(b_cur + 17) = *(b_cur + 51) / sqrt105 * sqrt945;
	      *(b_cur + 18) = *(b_cur + 52) / sqrt45 * sqrt945;
	      *(b_cur + 19) = *(b_cur + 53) / sqrt45 * sqrt945;
	      *(b_cur + 20) = *(b_cur + 54) / sqrt105 * sqrt945;
	      *(b_cur + 21) = *(b_cur + 55) / sqrt945 * sqrt945;
	    }
	  }
	}
      }

      inline
      static void cart_to_spher_1(const unsigned l_i, const unsigned j_scope,
				  const unsigned k_begin, const unsigned k_end,
				  double* NIEDOIDA_RESTRICT b, const unsigned s_12,
				  const unsigned s)
      {
	if(l_i == 2) {
	  for(unsigned k = k_begin; k < k_end ; ++k) {
	    double* NIEDOIDA_RESTRICT b_cur = b + k * s_12;
	    for(unsigned j = 0; j < j_scope; ++j, ++b_cur) {
	      *b_cur = *(b_cur + 5 * s) * sqrt3;
	      *(b_cur + 1 * s) = *(b_cur + 8 * s) * sqrt3;
	      *(b_cur + 2 * s) = (2 * *(b_cur + 9 * s) - *(b_cur + 4 * s) - *(b_cur + 7 * s)) / sqrt12 * sqrt3;
	      *(b_cur + 3 * s) = *(b_cur + 6 * s) * sqrt3;
	      *(b_cur + 4 * s) = (*(b_cur + 4 * s) - *(b_cur + 7 * s)) / 2 * sqrt3;
	    }
	  }
	} else if(l_i == 3) {
	  for(unsigned k = k_begin; k < k_end ; ++k) {
	    double* NIEDOIDA_RESTRICT b_cur = b  + k * s_12;
	    for(unsigned j = 0; j < j_scope; ++j, ++b_cur) {
	      *b_cur = (3 * *(b_cur + 11 * s) - *(b_cur + 16 * s)) / sqrt24 * sqrt15;
	      *(b_cur + 1 * s) = *(b_cur + 14 * s) * sqrt15;
	      *(b_cur + 2 * s) = (4 * *(b_cur + 18 * s) - *(b_cur + 16 * s) - *(b_cur + 11 * s)) / sqrt40 * sqrt15;
	      *(b_cur + 3 * s) = (2 * *(b_cur + 19 * s) - 3 * (*(b_cur + 17 * s) + *(b_cur + 12 * s))) / sqrt60 * sqrt15;
	      *(b_cur + 4 * s) = (4 * *(b_cur + 15 * s) - *(b_cur + 10 * s) - *(b_cur + 13 * s)) / sqrt40 * sqrt15;
	      *(b_cur + 5 * s) = (*(b_cur + 12 * s) - *(b_cur + 17 * s)) / 2 * sqrt15;
	      *(b_cur + 6 * s) = (*(b_cur + 10 * s) - 3 * *(b_cur + 13 * s)) / sqrt24 * sqrt15;
	    }
	  }
	} else if(l_i == 4) {
	  for(unsigned k = k_begin; k < k_end ; ++k) {
	    double* NIEDOIDA_RESTRICT b_cur = b + k * s_12;
	    for(unsigned j = 0; j < j_scope; ++j, ++b_cur) {
	      *b_cur = (*(b_cur + 21 * s) - *(b_cur + 26 * s)) / sqrt12 * sqrt105;
	      *(b_cur + 1 * s) = (3 * *(b_cur + 24 * s) - *(b_cur + 31 * s)) / sqrt24 * sqrt105;
	      *(b_cur + 2 * s) = (6 * *(b_cur + 28 * s) - *(b_cur + 26 * s) - *(b_cur + 21 * s)) / sqrt84 * sqrt105;
	      *(b_cur + 3 * s) = (4 * *(b_cur + 33 * s) - 3 * *(b_cur + 24 * s) - *(b_cur + 31 * s)) / sqrt168 * sqrt105;
	      *(b_cur + 4 * s) = (8 * *(b_cur + 34 * s) + 6 * *(b_cur + 23 * s) - 24 * (*(b_cur + 25 * s) + *(b_cur + 32 * s)) + 
				  3 * (*(b_cur + 20 * s) + *(b_cur + 30 * s))) / sqrt6720 * sqrt105;
	      *(b_cur + 5 * s) = (4 * *(b_cur + 29 * s) - 3 * *(b_cur + 27 * s) - 3 * *(b_cur + 22 * s)) / sqrt168 * sqrt105;
	      *(b_cur + 6 * s) = (6 * (*(b_cur + 25 * s) - *(b_cur + 32 * s)) - *(b_cur + 20 * s) + *(b_cur + 30 * s)) / sqrt336 * sqrt105;
	      *(b_cur + 7 * s) = (*(b_cur + 22 * s) - *(b_cur + 27 * s)) / sqrt24 * sqrt105;
	      *(b_cur + 8 * s) = (*(b_cur + 20 * s) + *(b_cur + 30 * s) - 6 * *(b_cur + 23 * s)) / sqrt192 * sqrt105;            
	    }
	  } 
	} else if(l_i == 5) {
	  for(unsigned k = k_begin; k < k_end ; ++k) {
	    double* NIEDOIDA_RESTRICT b_cur = b + k * s_12;
	    for(unsigned j = 0; j < j_scope; ++j, ++b_cur) {
	      *b_cur = (*(b_cur + 50 * s) - 10 * *(b_cur + 41 * s) + 5 * *(b_cur + 36 * s)) / sqrt1920 * sqrt945;
	      *(b_cur + 1 * s) = (*(b_cur + 39 * s) - *(b_cur + 46 * s)) / sqrt12 * sqrt945;
	      *(b_cur + 2 * s) = (24 * *(b_cur + 43 * s) - 3 * *(b_cur + 36 * s) - 2 * *(b_cur + 41 * s) +
				  *(b_cur + 50 * s) - 8 * *(b_cur + 52 * s)) / sqrt3456 * sqrt945;
	      *(b_cur + 3 * s) = (2 * *(b_cur + 48 * s) - *(b_cur + 39 * s) - *(b_cur + 46 * s)) / 6 * sqrt945;
	      *(b_cur + 4 * s) = (12 * *(b_cur + 43 * s) + 8 * *(b_cur + 54 * s) - *(b_cur + 36 * s) + 12 * *(b_cur + 52 * s) - 
				  2 * *(b_cur + 41 * s) - *(b_cur + 50 * s)) / sqrt4032 * sqrt945;
	      *(b_cur + 5 * s) = (8 * *(b_cur + 55 * s) + 15 * (*(b_cur + 37 * s) + *(b_cur + 51 * s)) -
				  40 * (*(b_cur + 44 * s) + *(b_cur + 53 * s))) / sqrt60480 * sqrt945;
	      *(b_cur + 6 * s) =  (*(b_cur + 35 * s) + 2 * *(b_cur + 38 * s) - 12 * *(b_cur + 40 * s) + *(b_cur + 45 * s) + 
				  8 * *(b_cur + 49 * s) - 12 * *(b_cur + 47 * s))/ sqrt4032 * sqrt945;
	      *(b_cur + 7 * s) = (2 * (*(b_cur + 44 * s) - *(b_cur + 53 * s)) - *(b_cur + 37 * s) + *(b_cur + 51 * s)) / 12 * sqrt945;
	      *(b_cur + 8 * s) = (8 * *(b_cur + 40 * s) - *(b_cur + 35 * s) + 2 * *(b_cur + 38 * s) +
				  3 * *(b_cur + 45 * s) - 24 * *(b_cur + 47 * s)) / sqrt3456 * sqrt945;     
	      *(b_cur + 9 * s) = (*(b_cur + 37 * s) + *(b_cur + 51 * s) - 6 * *(b_cur + 42 * s)) / sqrt192 * sqrt945;
	      *(b_cur + 10 * s) = (*(b_cur + 35 * s) - 10 * *(b_cur + 38 * s) + 5 * *(b_cur + 45 * s)) / sqrt1920 * sqrt945;                   
	    }
	  } 
	} 
      }

      inline 
      static void cart_to_cart_1(const unsigned l_i, const unsigned j_scope,
				 const unsigned k_begin, const unsigned k_end,
				 double* NIEDOIDA_RESTRICT b, const unsigned s_12,
				 const unsigned s)
      {
	if(l_i == 2) {	
	  for(unsigned k = k_begin; k < k_end ; ++k) {
	    double* NIEDOIDA_RESTRICT b_cur = b + k * s_12;
	    for(unsigned j = 0; j < j_scope; ++j, ++b_cur) {
	      *b_cur = *(b_cur + 4 * s) / sqrt3 * sqrt3;
	      *(b_cur + 1 * s) = *(b_cur + 5 * s) * sqrt3;
	      *(b_cur + 2 * s) = *(b_cur + 6 * s) * sqrt3;
	      *(b_cur + 3 * s) = *(b_cur + 7 * s) / sqrt3 * sqrt3;
	      *(b_cur + 4 * s) = *(b_cur + 8 * s) * sqrt3;
	      *(b_cur + 5 * s) = *(b_cur + 9 * s) / sqrt3 * sqrt3;
	    }
	  }
	} else if(l_i == 3) {
	  for(unsigned k = k_begin; k < k_end ; ++k) {
	    double* NIEDOIDA_RESTRICT b_cur = b + k * s_12;
	    for(unsigned j = 0; j < j_scope; ++j, ++b_cur) {
	      *b_cur = *(b_cur + 10 * s) / sqrt15 * sqrt15;
	      *(b_cur + 1 * s) = *(b_cur + 11 * s) / sqrt3 * sqrt15;
	      *(b_cur + 2 * s) = *(b_cur + 12 * s) / sqrt3 * sqrt15;
	      *(b_cur + 3 * s) = *(b_cur + 13 * s) / sqrt3 * sqrt15;
	      *(b_cur + 4 * s) = *(b_cur + 14 * s) * sqrt15;
	      *(b_cur + 5 * s) = *(b_cur + 15 * s) / sqrt3 * sqrt15;
	      *(b_cur + 6 * s) = *(b_cur + 16 * s) / sqrt15 * sqrt15;
	      *(b_cur + 7 * s) = *(b_cur + 17 * s) / sqrt3 * sqrt15;
	      *(b_cur + 8 * s) = *(b_cur + 18 * s) / sqrt3 * sqrt15;
	      *(b_cur + 9 * s) = *(b_cur + 19 * s) / sqrt15 * sqrt15;
	    }
	  }
	} else if(l_i == 4) {
	  for(unsigned k = k_begin; k < k_end ; ++k) {
	    double* NIEDOIDA_RESTRICT b_cur = b  + k * s_12;
	    for(unsigned j = 0; j < j_scope; ++j, ++b_cur) {
	      *b_cur = *(b_cur + 20 * s) / sqrt105 * sqrt105;
	      *(b_cur + 1 * s) = *(b_cur + 21 * s) / sqrt15 * sqrt105;
	      *(b_cur + 2 * s) = *(b_cur + 22 * s) / sqrt15 * sqrt105;
	      *(b_cur + 3 * s) = *(b_cur + 23 * s) / 3 * sqrt105;
	      *(b_cur + 4 * s) = *(b_cur + 24 * s) / sqrt3 * sqrt105;
	      *(b_cur + 5 * s) = *(b_cur + 25 * s) / 3 * sqrt105;
	      *(b_cur + 6 * s) = *(b_cur + 26 * s) / sqrt15 * sqrt105;
	      *(b_cur + 7 * s) = *(b_cur + 27 * s) / sqrt3 * sqrt105;
	      *(b_cur + 8 * s) = *(b_cur + 28 * s) / sqrt3 * sqrt105;
	      *(b_cur + 9 * s) = *(b_cur + 29 * s) / sqrt15 * sqrt105;
	      *(b_cur + 10 * s) = *(b_cur + 30 * s) / sqrt105 * sqrt105;
	      *(b_cur + 11 * s) = *(b_cur + 31 * s) / sqrt15 * sqrt105;
	      *(b_cur + 12 * s) = *(b_cur + 32 * s) / 3 * sqrt105;
	      *(b_cur + 13 * s) = *(b_cur + 33 * s) / sqrt15 * sqrt105;
	      *(b_cur + 14 * s) = *(b_cur + 34 * s) / sqrt105 * sqrt105;
	    }
	  }
	} else if(l_i == 5) {
	  for(unsigned k = k_begin; k < k_end ; ++k) {
	    double* NIEDOIDA_RESTRICT b_cur = b  + k * s_12;
	    for(unsigned j = 0; j < j_scope; ++j, ++b_cur) {
	      *b_cur = *(b_cur + 35 * s) / sqrt945 * sqrt945;
	      *(b_cur + 1 * s) = *(b_cur + 36 * s) / sqrt105 * sqrt945;
	      *(b_cur + 2 * s) = *(b_cur + 37 * s) / sqrt105 * sqrt945;
	      *(b_cur + 3 * s) = *(b_cur + 38 * s) / sqrt45 * sqrt945;
	      *(b_cur + 4 * s) = *(b_cur + 39 * s) / sqrt15 * sqrt945;
	      *(b_cur + 5 * s) = *(b_cur + 40 * s) / sqrt45 * sqrt945;
	      *(b_cur + 6 * s) = *(b_cur + 41 * s) / sqrt45 * sqrt945;
	      *(b_cur + 7 * s) = *(b_cur + 42 * s) / 3 * sqrt945;
	      *(b_cur + 8 * s) = *(b_cur + 43 * s) / 3 * sqrt945;
	      *(b_cur + 9 * s) = *(b_cur + 44 * s) / sqrt45 * sqrt945;
	      *(b_cur + 10 * s) = *(b_cur + 45 * s) / sqrt105 * sqrt945;
	      *(b_cur + 11 * s) = *(b_cur + 46 * s) / sqrt15 * sqrt945;
	      *(b_cur + 12 * s) = *(b_cur + 47 * s) / 3 * sqrt945;
	      *(b_cur + 13 * s) = *(b_cur + 48 * s) / sqrt15 * sqrt945;
	      *(b_cur + 14 * s) = *(b_cur + 49 * s) / sqrt105 * sqrt945;
	      *(b_cur + 16 * s) = *(b_cur + 50 * s) / sqrt945 * sqrt945;
	      *(b_cur + 17 * s) = *(b_cur + 51 * s) / sqrt105 * sqrt945;
	      *(b_cur + 18 * s) = *(b_cur + 52 * s) / sqrt45 * sqrt945;
	      *(b_cur + 19 * s) = *(b_cur + 53 * s) / sqrt45 * sqrt945;
	      *(b_cur + 20 * s) = *(b_cur + 54 * s) / sqrt105 * sqrt945;
	      *(b_cur + 21 * s) = *(b_cur + 55 * s) / sqrt945 * sqrt945;
	    }
	  }
	}
      }
    };

    class OS1OneElectronIntegralEngine:
      public core::OneElectronIntegralEngine,
      private OS1Implementation {

    public:
      OS1OneElectronIntegralEngine(const core::System&);
      const arma::mat& overlap_matrix() const override; //override abstract: core::OneElectronIntegralEngine::overlap_matrix()
      const arma::mat& kinetic_matrix() const override; //override abstract: core::OneElectronIntegralEngine::kinetic_matrix()
      const arma::mat& external_potential_matrix_from_ext_chrgs() const override; //override abstract: core::OneElectronIntegralEngine::external_potential_matrix_from_ext_chrgs()
      const arma::mat& external_potential_matrix_from_nucl() const override; //override abstract: core::OneElectronIntegralEngine::external_potential_matrix_from_nucl()
      //const arma::mat& external_potential_matrix() const override; //override abstract: core::OneElectronIntegralEngine::external_potential_matrix()
      const arma::mat& adiabatic_correction_matrix() const;

    private:
      const core::System& m_system;
      FlatBasisSet m_fbs;
      mutable std::unique_ptr<double[]> memory_pool;

      arma::mat m_overlap_matrix;
      arma::mat m_kinetic_matrix;
      arma::mat m_external_potential_matrix_from_ext_chrgs;
      arma::mat m_external_potential_matrix_from_nucl;
      //arma::mat m_external_potential_matrix;
      arma::mat m_adiabatic_correction_matrix;

      void calc_noncoulombic_matrices();
      void calc_external_matrix(const arma::mat & positions, const arma::vec & charges, arma::mat & external_potential_matrix);
      void calc_external_matrix_from_ext_chrgs();
      void calc_external_matrix_from_nucl();
      //void calc_external_matrix();
      void update_shells_external(const FlatBasisSet::Shell&, const FlatBasisSet::Shell&, const arma::mat & positions, const arma::vec & charges, arma::mat & external_potential_matrix); 
      void update_shells_noncoulombic(const FlatBasisSet::Shell&, const FlatBasisSet::Shell&);

      boost::multi_array<double, 4> A;  
      boost::multi_array<double, 5> AA;
      boost::multi_array<double, 4> B;
      boost::multi_array<double, 4> C;
      boost::multi_array<double, 5> D_2;
    };

    class OS1MultipoleIntegralEngine: 
      private OS1Implementation {
    public:
      OS1MultipoleIntegralEngine(const core::System&);

      const std::vector<arma::mat>& dipole_matrices() const;
      const arma::field<arma::mat>& quadrupole_matrices() const;

    private:
      arma::mat m_overlap_matrix;
      arma::mat m_kinetic_matrix;
      std::vector<arma::mat> m_dipole_matrices;
      arma::field<arma::mat> m_quadrupole_matrices;
      arma::mat m_adiabatic_correction_matrix;

      void diagonal(const FlatBasisSet::Shell&);
      void nondiagonal(const FlatBasisSet::Shell&, const FlatBasisSet::Shell&);

      void contract_same(
			 const FlatBasisSet::Shell& es1, unsigned i, 
			 const FlatBasisSet::Shell& es2, unsigned j);
      void contract_diff(
			 const FlatBasisSet::Shell& es1, unsigned i, 
			 const FlatBasisSet::Shell& es2, unsigned j);
      void c2s(
	       const FlatBasisSet::Shell& es1, 
	       unsigned i, unsigned n_i,
	       const FlatBasisSet::Shell& es2, 
	       unsigned j, unsigned n_j);

      boost::multi_array<double, 4> A;  
      boost::multi_array<double, 5> AA;
      boost::multi_array<double, 5> D;
      boost::multi_array<double, 6> Q;
      boost::multi_array<double, 5> M_1;
      boost::multi_array<double, 5> M_2;
    };


    class OS1TwoElectronIntegralEngine: 
      public core::TwoElectronIntegralEngine,
      private OS1Implementation {
    public:
      OS1TwoElectronIntegralEngine(const core::BasisSet&, const double);

      std::size_t preferred_no_requests() const;
      void calc(std::vector<core::Request>&) const;

    private:
      FlatBasisSet m_fbs;
      bool spherical_basis;
      double m_treshold;
      mutable std::unique_ptr<double[]> memory_pool;

      void calc(core::Request&) const;

      void calc_ABCD_shells(const FlatBasisSet::Shell&,
			    const FlatBasisSet::Shell&,
			    const FlatBasisSet::Shell&,
			    const FlatBasisSet::Shell&,
			    double* ) const;

      void calc_ssss_shells(const FlatBasisSet::Shell&,
			    const FlatBasisSet::Shell&,
			    const FlatBasisSet::Shell&,
			    const FlatBasisSet::Shell&,
			    double* ) const;

      void calc_total_l_1_shells(const FlatBasisSet::Shell&,
				 const FlatBasisSet::Shell&,
				 const FlatBasisSet::Shell&,
				 const FlatBasisSet::Shell&,
				 double* ) const;

      void calc_bra_l_2_ket_l_0_shells(const FlatBasisSet::Shell&,
				       const FlatBasisSet::Shell&,
				       const FlatBasisSet::Shell&,
				       const FlatBasisSet::Shell&,
				       double*) const;

      void calc_bra_l_1_ket_l_1_shells(const FlatBasisSet::Shell&,
				       const FlatBasisSet::Shell&,
				       const FlatBasisSet::Shell&,
				       const FlatBasisSet::Shell&,
				       double*) const;

      void calc_bra_l_2_ket_l_1_shells(const FlatBasisSet::Shell&,
				       const FlatBasisSet::Shell&,
				       const FlatBasisSet::Shell&,
				       const FlatBasisSet::Shell&,
				       double*) const;

      void calc_bra_l_2_ket_l_2_shells(const FlatBasisSet::Shell&,
				       const FlatBasisSet::Shell&,
				       const FlatBasisSet::Shell&,
				       const FlatBasisSet::Shell&,
				       double*) const; 
    };

    inline
    const arma::mat& OS1OneElectronIntegralEngine::overlap_matrix() const
    {
      return m_overlap_matrix;
    }

    inline
    const arma::mat& OS1OneElectronIntegralEngine::kinetic_matrix() const
    {
      return m_kinetic_matrix;
    }

    inline
    const arma::mat& OS1OneElectronIntegralEngine::external_potential_matrix_from_ext_chrgs() const
    {
      return m_external_potential_matrix_from_ext_chrgs;
    }

    inline
    const arma::mat& OS1OneElectronIntegralEngine::external_potential_matrix_from_nucl() const
    {
      return m_external_potential_matrix_from_nucl;
    }

    //inline
    //const arma::mat& OS1OneElectronIntegralEngine::external_potential_matrix() const
    //{
    //  return m_external_potential_matrix;
    //}

    inline
    const arma::mat& OS1OneElectronIntegralEngine::adiabatic_correction_matrix() const
    {
      return m_adiabatic_correction_matrix;
    }

    inline
    const std::vector<arma::mat >& OS1MultipoleIntegralEngine::dipole_matrices() const
    {
      return m_dipole_matrices;
    }

    inline
    const arma::field<arma::mat >& OS1MultipoleIntegralEngine::quadrupole_matrices() const
    {
      return m_quadrupole_matrices;
    }

    class OS1QuasiTwoElectronIntegralEngine: 
      public core::QuasiTwoElectronIntegralEngine,
      private OS1Implementation {
    public:
      OS1QuasiTwoElectronIntegralEngine(
					const core::BasisSet&, const core::BasisSet&, const double);
      std::size_t preferred_no_pair_requests() const;
      std::size_t preferred_no_ACD_requests() const;
      void calc_AC(std::vector<core::PairRequest>&) const;
      void calc_pair(std::vector<core::PairRequest>&) const;
      void calc_ACD(std::vector<core::ACDRequest>&) const;

    private:
      void calc_AC(core::PairRequest&) const;
      void calc_pair(core::PairRequest&) const;
      void calc_ACD(core::ACDRequest&) const;

      void calc_ACD(const FlatBasisSet::Shell&,
		    const FlatBasisSet::Shell&,
		    const FlatBasisSet::Shell&,
		    double* results) const;

      void calc_AC(const FlatBasisSet::Shell&,
		   const FlatBasisSet::Shell&,
		   double* results) const;

      FlatBasisSet m_fbs;
      FlatBasisSet m_aux_fbs;
      bool spherical_basis;
      double m_treshold;
      mutable std::unique_ptr<double[]> memory_pool;
    };

    class OS1PoissonTwoElectronIntegralEngine: 
      public core::PoissonTwoElectronIntegralEngine,
      private OS1Implementation {
    public:
      OS1PoissonTwoElectronIntegralEngine(
					  const core::BasisSet&, const core::BasisSet&, const core::BasisSet&, const double);
      std::size_t preferred_no_pair_requests() const;
      std::size_t preferred_no_ACD_requests() const;
      void calc_AC(std::vector<core::PairRequest>&) const;
      void calc_ACD(std::vector<core::ACDRequest>&) const;
      void calc_A_aux(std::vector<core::PairRequest>&) const;

    private:
      void calc_AC(core::PairRequest&) const;
      void calc_ACD(core::ACDRequest&) const;
      void calc_A_aux(core::PairRequest&) const;

      void calc_ACD(const FlatBasisSet::Shell&,
		    const FlatBasisSet::Shell&,
		    const FlatBasisSet::Shell&,
		    double* results) const;

      void calc_AC(const FlatBasisSet::Shell&,
		   const FlatBasisSet::Shell&,
		   double* results) const;

      void calc_mixed(const FlatBasisSet::Shell&,
		      const FlatBasisSet::Shell&,
		      double* results) const;

      FlatBasisSet m_fbs;
      FlatBasisSet m_poisson_fbs;
      FlatBasisSet m_aux_fbs;
      bool spherical_basis;
      double m_treshold;
      mutable std::unique_ptr<double[]> memory_pool;
    };

    /**
     * @}
     */
  }
}
#endif
