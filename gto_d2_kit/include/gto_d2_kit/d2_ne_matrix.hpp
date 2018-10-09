/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef D2_NE_MATRIX_HPP
#define D2_NE_MATRIX_HPP

#include "gto_d2_kit/d2_ne_dd_AA.hpp"
#include "gto_d2_kit/d2_ne_dd_AB.hpp"
#include "gto_d2_kit/d2_ne_dd_AC.hpp"
#include "gto_d2_kit/d2_ne_dd_BB.hpp"
#include "gto_d2_kit/d2_ne_dd_BC.hpp"
#include "gto_d2_kit/d2_ne_dd_CC.hpp"
#include "gto_d2_kit/d2_ne_dp_AA.hpp"
#include "gto_d2_kit/d2_ne_dp_AB.hpp"
#include "gto_d2_kit/d2_ne_dp_AC.hpp"
#include "gto_d2_kit/d2_ne_dp_BB.hpp"
#include "gto_d2_kit/d2_ne_dp_BC.hpp"
#include "gto_d2_kit/d2_ne_dp_CC.hpp"
#include "gto_d2_kit/d2_ne_ds_AA.hpp"
#include "gto_d2_kit/d2_ne_ds_AB.hpp"
#include "gto_d2_kit/d2_ne_ds_AC.hpp"
#include "gto_d2_kit/d2_ne_ds_BB.hpp"
#include "gto_d2_kit/d2_ne_ds_BC.hpp"
#include "gto_d2_kit/d2_ne_ds_CC.hpp"
#include "gto_d2_kit/d2_ne_pd_AA.hpp"
#include "gto_d2_kit/d2_ne_pd_AB.hpp"
#include "gto_d2_kit/d2_ne_pd_AC.hpp"
#include "gto_d2_kit/d2_ne_pd_BB.hpp"
#include "gto_d2_kit/d2_ne_pd_BC.hpp"
#include "gto_d2_kit/d2_ne_pd_CC.hpp"
#include "gto_d2_kit/d2_ne_pp_AA.hpp"
#include "gto_d2_kit/d2_ne_pp_AB.hpp"
#include "gto_d2_kit/d2_ne_pp_AC.hpp"
#include "gto_d2_kit/d2_ne_pp_BB.hpp"
#include "gto_d2_kit/d2_ne_pp_BC.hpp"
#include "gto_d2_kit/d2_ne_pp_CC.hpp"
#include "gto_d2_kit/d2_ne_ps_AA.hpp"
#include "gto_d2_kit/d2_ne_ps_AB.hpp"
#include "gto_d2_kit/d2_ne_ps_AC.hpp"
#include "gto_d2_kit/d2_ne_ps_BB.hpp"
#include "gto_d2_kit/d2_ne_ps_BC.hpp"
#include "gto_d2_kit/d2_ne_ps_CC.hpp"
#include "gto_d2_kit/d2_ne_sd_AA.hpp"
#include "gto_d2_kit/d2_ne_sd_AB.hpp"
#include "gto_d2_kit/d2_ne_sd_AC.hpp"
#include "gto_d2_kit/d2_ne_sd_BB.hpp"
#include "gto_d2_kit/d2_ne_sd_BC.hpp"
#include "gto_d2_kit/d2_ne_sd_CC.hpp"
#include "gto_d2_kit/d2_ne_sp_AA.hpp"
#include "gto_d2_kit/d2_ne_sp_AB.hpp"
#include "gto_d2_kit/d2_ne_sp_AC.hpp"
#include "gto_d2_kit/d2_ne_sp_BB.hpp"
#include "gto_d2_kit/d2_ne_sp_BC.hpp"
#include "gto_d2_kit/d2_ne_sp_CC.hpp"
#include "gto_d2_kit/d2_ne_ss_AA.hpp"
#include "gto_d2_kit/d2_ne_ss_AB.hpp"
#include "gto_d2_kit/d2_ne_ss_AC.hpp"
#include "gto_d2_kit/d2_ne_ss_BB.hpp"
#include "gto_d2_kit/d2_ne_ss_BC.hpp"
#include "gto_d2_kit/d2_ne_ss_CC.hpp"

typedef void (*VNED2)(double, double, double, double, double, double, double, double, double, double, double, const double*,
                      double* const d2nexx, double* const d2nexy, double* const d2nexz,
                      double* const d2neyx, double* const d2neyy, double* const d2neyz,
                      double* const d2nezx, double* const d2nezy, double* const d2nezz, std::size_t, std::size_t, std::size_t);

VNED2 vned2[3][3][3][3]=
{
	{
		{
			{vne_second_derivative_00_11 , vne_second_derivative_00_12 , vne_second_derivative_00_13 },
			{vne_second_derivative_00_21 , vne_second_derivative_00_22 , vne_second_derivative_00_23 },
			{vne_second_derivative_00_31 , vne_second_derivative_00_32 , vne_second_derivative_00_33 }
		},
		{
			{vne_second_derivative_01_11 , vne_second_derivative_01_12 , vne_second_derivative_01_13 },
			{vne_second_derivative_01_21 , vne_second_derivative_01_22 , vne_second_derivative_01_23 },
			{vne_second_derivative_01_31 , vne_second_derivative_01_32 , vne_second_derivative_01_33 }
		},
		{
			{vne_second_derivative_02_11 , vne_second_derivative_02_12 , vne_second_derivative_02_13 },
			{vne_second_derivative_02_21 , vne_second_derivative_02_22 , vne_second_derivative_02_23 },
			{vne_second_derivative_02_31 , vne_second_derivative_02_32 , vne_second_derivative_02_33 }
		}
	},
	{
		{
			{vne_second_derivative_10_11 , vne_second_derivative_10_12 , vne_second_derivative_10_13 },
			{vne_second_derivative_10_21 , vne_second_derivative_10_22 , vne_second_derivative_10_23 },
			{vne_second_derivative_10_31 , vne_second_derivative_10_32 , vne_second_derivative_10_33 }
		},
		{
			{vne_second_derivative_11_11 , vne_second_derivative_11_12 , vne_second_derivative_11_13 },
			{vne_second_derivative_11_21 , vne_second_derivative_11_22 , vne_second_derivative_11_23 },
			{vne_second_derivative_11_31 , vne_second_derivative_11_32 , vne_second_derivative_11_33 }
		},
		{
			{vne_second_derivative_12_11 , vne_second_derivative_12_12 , vne_second_derivative_12_13 },
			{vne_second_derivative_12_21 , vne_second_derivative_12_22 , vne_second_derivative_12_23 },
			{vne_second_derivative_12_31 , vne_second_derivative_12_32 , vne_second_derivative_12_33 }
		}
	},
	{
		{
			{vne_second_derivative_20_11 , vne_second_derivative_20_12 , vne_second_derivative_20_13 },
			{vne_second_derivative_20_21 , vne_second_derivative_20_22 , vne_second_derivative_20_23 },
			{vne_second_derivative_20_31 , vne_second_derivative_20_32 , vne_second_derivative_20_33 }
		},
		{
			{vne_second_derivative_21_11 , vne_second_derivative_21_12 , vne_second_derivative_21_13 },
			{vne_second_derivative_21_21 , vne_second_derivative_21_22 , vne_second_derivative_21_23 },
			{vne_second_derivative_21_31 , vne_second_derivative_21_32 , vne_second_derivative_21_33 }
		},
		{
			{vne_second_derivative_22_11 , vne_second_derivative_22_12 , vne_second_derivative_22_13 },
			{vne_second_derivative_22_21 , vne_second_derivative_22_22 , vne_second_derivative_22_23 },
			{vne_second_derivative_22_31 , vne_second_derivative_22_32 , vne_second_derivative_22_33 }
		}
	}
};

#endif

       
