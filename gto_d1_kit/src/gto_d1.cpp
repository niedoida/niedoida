/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include "gto_d1_kit/gto_d1_kit.hpp"

namespace {
    typedef void (*OG)(double,
                       double,
                       double,
                       double,
                       double,
                       double,
                       double* const,
                       double* const,
                       double* const,
                       std::size_t,
                       std::size_t,
                       std::size_t);

    OG ogs[4][4] = {{overlap_gradient_00,
                     overlap_gradient_01,
                     overlap_gradient_02,
                     overlap_gradient_03},
                    {overlap_gradient_10,
                     overlap_gradient_11,
                     overlap_gradient_12,
                     overlap_gradient_13},
                    {overlap_gradient_20,
                     overlap_gradient_21,
                     overlap_gradient_22,
                     overlap_gradient_23},
                    {overlap_gradient_30,
                     overlap_gradient_31,
                     overlap_gradient_32,
                     overlap_gradient_33}};

    typedef void (*VNEG)(double,
                         double,
                         double,
                         double,
                         double,
                         double,
                         double,
                         double,
                         double,
                         double,
                         double,
                         const double*,
                         double* const,
                         double* const,
                         double* const,
                         std::size_t,
                         std::size_t,
                         std::size_t);
    VNEG vnegs[3][3][3] = {
        {{vne_gradient_00_1, vne_gradient_01_1, vne_gradient_02_1},
         {vne_gradient_10_1, vne_gradient_11_1, vne_gradient_12_1},
         {vne_gradient_20_1, vne_gradient_21_1, vne_gradient_22_1}},
        {{vne_gradient_00_2, vne_gradient_01_2, vne_gradient_02_2},
         {vne_gradient_10_2, vne_gradient_11_2, vne_gradient_12_2},
         {vne_gradient_20_2, vne_gradient_21_2, vne_gradient_22_2}},
        {{vne_gradient_00_3, vne_gradient_01_3, vne_gradient_02_3},
         {vne_gradient_10_3, vne_gradient_11_3, vne_gradient_12_3},
         {vne_gradient_20_3, vne_gradient_21_3, vne_gradient_22_3}}};

    typedef void (*ERIG)(unsigned,
                         unsigned,
                         unsigned,
                         unsigned,
                         double,
                         double,
                         double,
                         double,
                         double,
                         double,
                         double,
                         double,
                         double,
                         double,
                         double,
                         double,
                         double,
                         double,
                         double,
                         double,
                         const double* const,
                         double* const,
                         double* const,
                         double* const);

    ERIG erigs[3][3][3][3][4] = {{ // s
                                  {// ss
                                   {
                                       // sss
                                       {// ssss
                                        two_electrons_gradient_ssss_A,
                                        two_electrons_gradient_ssss_B,
                                        two_electrons_gradient_ssss_C,
                                        two_electrons_gradient_ssss_D},
                                       {// sssp
                                        two_electrons_gradient_psss_A,
                                        two_electrons_gradient_psss_B,
                                        two_electrons_gradient_psss_C,
                                        two_electrons_gradient_psss_D},
                                       {// sssd
                                        two_electrons_gradient_dsss_A,
                                        two_electrons_gradient_dsss_B,
                                        two_electrons_gradient_dsss_C,
                                        two_electrons_gradient_dsss_D},
                                   },
                                   { // ssp
                                    {// ssps
                                     two_electrons_gradient_psss_A,
                                     two_electrons_gradient_psss_B,
                                     two_electrons_gradient_psss_C,
                                     two_electrons_gradient_psss_D},
                                    {// sspp
                                     two_electrons_gradient_ppss_A,
                                     two_electrons_gradient_ppss_B,
                                     two_electrons_gradient_ppss_C,
                                     two_electrons_gradient_ppss_D},
                                    {// sspd
                                     two_electrons_gradient_dpss_A,
                                     two_electrons_gradient_dpss_B,
                                     two_electrons_gradient_dpss_C,
                                     two_electrons_gradient_dpss_D}},
                                   { // ssd
                                    {// ssds
                                     two_electrons_gradient_dsss_A,
                                     two_electrons_gradient_dsss_B,
                                     two_electrons_gradient_dsss_C,
                                     two_electrons_gradient_dsss_D},
                                    {// ssdp
                                     two_electrons_gradient_dpss_A,
                                     two_electrons_gradient_dpss_B,
                                     two_electrons_gradient_dpss_C,
                                     two_electrons_gradient_dpss_D},
                                    {// ssdd
                                     two_electrons_gradient_ddss_A,
                                     two_electrons_gradient_ddss_B,
                                     two_electrons_gradient_ddss_C,
                                     two_electrons_gradient_ddss_D}}},
                                  {  // sp
                                   { // sps
                                    {// spss
                                     two_electrons_gradient_psss_A,
                                     two_electrons_gradient_psss_B,
                                     two_electrons_gradient_psss_C,
                                     two_electrons_gradient_psss_D},
                                    {// spsp
                                     two_electrons_gradient_ppss_A,
                                     two_electrons_gradient_ppss_B,
                                     two_electrons_gradient_ppss_C,
                                     two_electrons_gradient_ppss_D},
                                    {// spsd
                                     two_electrons_gradient_dpss_A,
                                     two_electrons_gradient_dpss_B,
                                     two_electrons_gradient_dpss_C,
                                     two_electrons_gradient_dpss_D}},
                                   { // spp
                                    {// spps
                                     two_electrons_gradient_ppss_A,
                                     two_electrons_gradient_ppss_B,
                                     two_electrons_gradient_ppss_C,
                                     two_electrons_gradient_ppss_D},
                                    {// sppp
                                     two_electrons_gradient_ppps_A,
                                     two_electrons_gradient_ppps_B,
                                     two_electrons_gradient_ppps_C,
                                     two_electrons_gradient_ppps_D},
                                    {// sppd
                                     two_electrons_gradient_dpps_A,
                                     two_electrons_gradient_dpps_B,
                                     two_electrons_gradient_dpps_C,
                                     two_electrons_gradient_dpps_D}},
                                   { // spd
                                    {// spds
                                     two_electrons_gradient_dpss_A,
                                     two_electrons_gradient_dpss_B,
                                     two_electrons_gradient_dpss_C,
                                     two_electrons_gradient_dpss_D},
                                    {// spdp
                                     two_electrons_gradient_dpps_A,
                                     two_electrons_gradient_dpps_B,
                                     two_electrons_gradient_dpps_C,
                                     two_electrons_gradient_dpps_D},
                                    {// spdd
                                     two_electrons_gradient_ddps_A,
                                     two_electrons_gradient_ddps_B,
                                     two_electrons_gradient_ddps_C,
                                     two_electrons_gradient_ddps_D}}},
                                  {  // sd
                                   { // sds
                                    {// sdss
                                     two_electrons_gradient_dsss_A,
                                     two_electrons_gradient_dsss_B,
                                     two_electrons_gradient_dsss_C,
                                     two_electrons_gradient_dsss_D},
                                    {// sdsp
                                     two_electrons_gradient_dpss_A,
                                     two_electrons_gradient_dpss_B,
                                     two_electrons_gradient_dpss_C,
                                     two_electrons_gradient_dpss_D},
                                    {// sdsd
                                     two_electrons_gradient_ddss_A,
                                     two_electrons_gradient_ddss_B,
                                     two_electrons_gradient_ddss_C,
                                     two_electrons_gradient_ddss_D}},
                                   { // sdp
                                    {// sdps
                                     two_electrons_gradient_dpss_A,
                                     two_electrons_gradient_dpss_B,
                                     two_electrons_gradient_dpss_C,
                                     two_electrons_gradient_dpss_D},
                                    {// sdpp
                                     two_electrons_gradient_dpps_A,
                                     two_electrons_gradient_dpps_B,
                                     two_electrons_gradient_dpps_C,
                                     two_electrons_gradient_dpps_D},
                                    {// sdpd
                                     two_electrons_gradient_ddps_A,
                                     two_electrons_gradient_ddps_B,
                                     two_electrons_gradient_ddps_C,
                                     two_electrons_gradient_ddps_D}},
                                   { // sdd
                                    {// sdds
                                     two_electrons_gradient_ddss_A,
                                     two_electrons_gradient_ddss_B,
                                     two_electrons_gradient_ddss_C,
                                     two_electrons_gradient_ddss_D},
                                    {// sddp
                                     two_electrons_gradient_ddps_A,
                                     two_electrons_gradient_ddps_B,
                                     two_electrons_gradient_ddps_C,
                                     two_electrons_gradient_ddps_D},
                                    {// sddd
                                     two_electrons_gradient_ddds_A,
                                     two_electrons_gradient_ddds_B,
                                     two_electrons_gradient_ddds_C,
                                     two_electrons_gradient_ddds_D}}}},
                                 { // p
                                  {// ps
                                   {
                                       // pss
                                       {// psss
                                        two_electrons_gradient_psss_A,
                                        two_electrons_gradient_psss_B,
                                        two_electrons_gradient_psss_C,
                                        two_electrons_gradient_psss_D},
                                       {// pssp
                                        two_electrons_gradient_ppss_A,
                                        two_electrons_gradient_ppss_B,
                                        two_electrons_gradient_ppss_C,
                                        two_electrons_gradient_ppss_D},
                                       {// pssd
                                        two_electrons_gradient_dpss_A,
                                        two_electrons_gradient_dpss_B,
                                        two_electrons_gradient_dpss_C,
                                        two_electrons_gradient_dpss_D},
                                   },
                                   { // psp
                                    {// psps
                                     two_electrons_gradient_ppss_A,
                                     two_electrons_gradient_ppss_B,
                                     two_electrons_gradient_ppss_C,
                                     two_electrons_gradient_ppss_D},
                                    {// pspp
                                     two_electrons_gradient_ppps_A,
                                     two_electrons_gradient_ppps_B,
                                     two_electrons_gradient_ppps_C,
                                     two_electrons_gradient_ppps_D},
                                    {// pspd
                                     two_electrons_gradient_dpps_A,
                                     two_electrons_gradient_dpps_B,
                                     two_electrons_gradient_dpps_C,
                                     two_electrons_gradient_dpps_D}},
                                   { // psd
                                    {// psds
                                     two_electrons_gradient_dpss_A,
                                     two_electrons_gradient_dpss_B,
                                     two_electrons_gradient_dpss_C,
                                     two_electrons_gradient_dpss_D},
                                    {// psdp
                                     two_electrons_gradient_dpps_A,
                                     two_electrons_gradient_dpps_B,
                                     two_electrons_gradient_dpps_C,
                                     two_electrons_gradient_dpps_D},
                                    {// psdd
                                     two_electrons_gradient_ddps_A,
                                     two_electrons_gradient_ddps_B,
                                     two_electrons_gradient_ddps_C,
                                     two_electrons_gradient_ddps_D}}},
                                  {  // pp
                                   { // pps
                                    {// ppss
                                     two_electrons_gradient_ppss_A,
                                     two_electrons_gradient_ppss_B,
                                     two_electrons_gradient_ppss_C,
                                     two_electrons_gradient_ppss_D},
                                    {// ppsp
                                     two_electrons_gradient_ppps_A,
                                     two_electrons_gradient_ppps_B,
                                     two_electrons_gradient_ppps_C,
                                     two_electrons_gradient_ppps_D},
                                    {// ppsd
                                     two_electrons_gradient_dpps_A,
                                     two_electrons_gradient_dpps_B,
                                     two_electrons_gradient_dpps_C,
                                     two_electrons_gradient_dpps_D}},
                                   { // ppp
                                    {// ppps
                                     two_electrons_gradient_ppps_A,
                                     two_electrons_gradient_ppps_B,
                                     two_electrons_gradient_ppps_C,
                                     two_electrons_gradient_ppps_D},
                                    {// pppp
                                     two_electrons_gradient_pppp_A,
                                     two_electrons_gradient_pppp_B,
                                     two_electrons_gradient_pppp_C,
                                     two_electrons_gradient_pppp_D},
                                    {// pppd
                                     two_electrons_gradient_dppp_A,
                                     two_electrons_gradient_dppp_B,
                                     two_electrons_gradient_dppp_C,
                                     two_electrons_gradient_dppp_D}},
                                   { // ppd
                                    {// ppds
                                     two_electrons_gradient_dpps_A,
                                     two_electrons_gradient_dpps_B,
                                     two_electrons_gradient_dpps_C,
                                     two_electrons_gradient_dpps_D},
                                    {// ppdp
                                     two_electrons_gradient_dppp_A,
                                     two_electrons_gradient_dppp_B,
                                     two_electrons_gradient_dppp_C,
                                     two_electrons_gradient_dppp_D},
                                    {// ppdd
                                     two_electrons_gradient_ddpp_A,
                                     two_electrons_gradient_ddpp_B,
                                     two_electrons_gradient_ddpp_C,
                                     two_electrons_gradient_ddpp_D}}},
                                  {  // pd
                                   { // pds
                                    {// pdss
                                     two_electrons_gradient_dpss_A,
                                     two_electrons_gradient_dpss_B,
                                     two_electrons_gradient_dpss_C,
                                     two_electrons_gradient_dpss_D},
                                    {// pdsp
                                     two_electrons_gradient_dpps_A,
                                     two_electrons_gradient_dpps_B,
                                     two_electrons_gradient_dpps_C,
                                     two_electrons_gradient_dpps_D},
                                    {// pdsd
                                     two_electrons_gradient_ddps_A,
                                     two_electrons_gradient_ddps_B,
                                     two_electrons_gradient_ddps_C,
                                     two_electrons_gradient_ddps_D}},
                                   { // pdp
                                    {// pdps
                                     two_electrons_gradient_dpps_A,
                                     two_electrons_gradient_dpps_B,
                                     two_electrons_gradient_dpps_C,
                                     two_electrons_gradient_dpps_D},
                                    {// pdpp
                                     two_electrons_gradient_dppp_A,
                                     two_electrons_gradient_dppp_B,
                                     two_electrons_gradient_dppp_C,
                                     two_electrons_gradient_dppp_D},
                                    {// pdpd
                                     two_electrons_gradient_ddpp_A,
                                     two_electrons_gradient_ddpp_B,
                                     two_electrons_gradient_ddpp_C,
                                     two_electrons_gradient_ddpp_D}},
                                   { // pdd
                                    {// pdds
                                     two_electrons_gradient_ddps_A,
                                     two_electrons_gradient_ddps_B,
                                     two_electrons_gradient_ddps_C,
                                     two_electrons_gradient_ddps_D},
                                    {// pddp
                                     two_electrons_gradient_ddpp_A,
                                     two_electrons_gradient_ddpp_B,
                                     two_electrons_gradient_ddpp_C,
                                     two_electrons_gradient_ddpp_D},
                                    {// pddd
                                     two_electrons_gradient_dddp_A,
                                     two_electrons_gradient_dddp_B,
                                     two_electrons_gradient_dddp_C,
                                     two_electrons_gradient_dddp_D}}}},
                                 { // d
                                  {// ds
                                   {
                                       // dss
                                       {// dsss
                                        two_electrons_gradient_dsss_A,
                                        two_electrons_gradient_dsss_B,
                                        two_electrons_gradient_dsss_C,
                                        two_electrons_gradient_dsss_D},
                                       {// dssp
                                        two_electrons_gradient_dpss_A,
                                        two_electrons_gradient_dpss_B,
                                        two_electrons_gradient_dpss_C,
                                        two_electrons_gradient_dpss_D},
                                       {// dssd
                                        two_electrons_gradient_ddss_A,
                                        two_electrons_gradient_ddss_B,
                                        two_electrons_gradient_ddss_C,
                                        two_electrons_gradient_ddss_D},
                                   },
                                   { // dsp
                                    {// dsps
                                     two_electrons_gradient_dpss_A,
                                     two_electrons_gradient_dpss_B,
                                     two_electrons_gradient_dpss_C,
                                     two_electrons_gradient_dpss_D},
                                    {// dspp
                                     two_electrons_gradient_dpps_A,
                                     two_electrons_gradient_dpps_B,
                                     two_electrons_gradient_dpps_C,
                                     two_electrons_gradient_dpps_D},
                                    {// dspd
                                     two_electrons_gradient_ddps_A,
                                     two_electrons_gradient_ddps_B,
                                     two_electrons_gradient_ddps_C,
                                     two_electrons_gradient_ddps_D}},
                                   { // dsd
                                    {// dsds
                                     two_electrons_gradient_ddss_A,
                                     two_electrons_gradient_ddss_B,
                                     two_electrons_gradient_ddss_C,
                                     two_electrons_gradient_ddss_D},
                                    {// dsdp
                                     two_electrons_gradient_ddps_A,
                                     two_electrons_gradient_ddps_B,
                                     two_electrons_gradient_ddps_C,
                                     two_electrons_gradient_ddps_D},
                                    {// dsdd
                                     two_electrons_gradient_ddds_A,
                                     two_electrons_gradient_ddds_B,
                                     two_electrons_gradient_ddds_C,
                                     two_electrons_gradient_ddds_D}}},
                                  {
                                      // dp
                                      { // dps
                                       {// dpss
                                        two_electrons_gradient_dpss_A,
                                        two_electrons_gradient_dpss_B,
                                        two_electrons_gradient_dpss_C,
                                        two_electrons_gradient_dpss_D},
                                       {// dpsp
                                        two_electrons_gradient_dpps_A,
                                        two_electrons_gradient_dpps_B,
                                        two_electrons_gradient_dpps_C,
                                        two_electrons_gradient_dpps_D},
                                       {// dpsd
                                        two_electrons_gradient_ddps_A,
                                        two_electrons_gradient_ddps_B,
                                        two_electrons_gradient_ddps_C,
                                        two_electrons_gradient_ddps_D}},
                                      { // dpp
                                       {// dpps
                                        two_electrons_gradient_dpps_A,
                                        two_electrons_gradient_dpps_B,
                                        two_electrons_gradient_dpps_C,
                                        two_electrons_gradient_dpps_D},
                                       {// dppp
                                        two_electrons_gradient_dppp_A,
                                        two_electrons_gradient_dppp_B,
                                        two_electrons_gradient_dppp_C,
                                        two_electrons_gradient_dppp_D},
                                       {// dppd
                                        two_electrons_gradient_ddpp_A,
                                        two_electrons_gradient_ddpp_B,
                                        two_electrons_gradient_ddpp_C,
                                        two_electrons_gradient_ddpp_D}},
                                      { // dpd
                                       {// dpds
                                        two_electrons_gradient_ddps_A,
                                        two_electrons_gradient_ddps_B,
                                        two_electrons_gradient_ddps_C,
                                        two_electrons_gradient_ddps_D},
                                       {// dpdp
                                        two_electrons_gradient_ddpp_A,
                                        two_electrons_gradient_ddpp_B,
                                        two_electrons_gradient_ddpp_C,
                                        two_electrons_gradient_ddpp_D},
                                       {// dpdd
                                        two_electrons_gradient_dddp_A,
                                        two_electrons_gradient_dddp_B,
                                        two_electrons_gradient_dddp_C,
                                        two_electrons_gradient_dddp_D}},
                                  },
                                  {  // dd
                                   { // dds
                                    {// ddss
                                     two_electrons_gradient_ddss_A,
                                     two_electrons_gradient_ddss_B,
                                     two_electrons_gradient_ddss_C,
                                     two_electrons_gradient_ddss_D},
                                    {// ddsp
                                     two_electrons_gradient_ddps_A,
                                     two_electrons_gradient_ddps_B,
                                     two_electrons_gradient_ddps_C,
                                     two_electrons_gradient_ddps_D},
                                    {// ddsd
                                     two_electrons_gradient_ddds_A,
                                     two_electrons_gradient_ddds_B,
                                     two_electrons_gradient_ddds_C,
                                     two_electrons_gradient_ddds_D}},
                                   { // ddp
                                    {// ddps
                                     two_electrons_gradient_ddps_A,
                                     two_electrons_gradient_ddps_B,
                                     two_electrons_gradient_ddps_C,
                                     two_electrons_gradient_ddps_D},
                                    {// ddpp
                                     two_electrons_gradient_ddpp_A,
                                     two_electrons_gradient_ddpp_B,
                                     two_electrons_gradient_ddpp_C,
                                     two_electrons_gradient_ddpp_D},
                                    {// ddpd
                                     two_electrons_gradient_dddp_A,
                                     two_electrons_gradient_dddp_B,
                                     two_electrons_gradient_dddp_C,
                                     two_electrons_gradient_dddp_D}},
                                   { // ddd
                                    {// ddds
                                     two_electrons_gradient_ddds_A,
                                     two_electrons_gradient_ddds_B,
                                     two_electrons_gradient_ddds_C,
                                     two_electrons_gradient_ddds_D},
                                    {// dddp
                                     two_electrons_gradient_dddp_A,
                                     two_electrons_gradient_dddp_B,
                                     two_electrons_gradient_dddp_C,
                                     two_electrons_gradient_dddp_D},
                                    {// dddd
                                     two_electrons_gradient_dddd_A,
                                     two_electrons_gradient_dddd_B,
                                     two_electrons_gradient_dddd_C,
                                     two_electrons_gradient_dddd_D}}}}};

    typedef void (*KG)(double,
                       double,
                       double,
                       double,
                       double,
                       double,
                       double* const,
                       double* const,
                       double* const,
                       std::size_t,
                       std::size_t,
                       std::size_t);

    KG kgs[4][4] = {{kinetic_gradient_00,
                     kinetic_gradient_01,
                     kinetic_gradient_02,
                     kinetic_gradient_03},
                    {kinetic_gradient_10,
                     kinetic_gradient_11,
                     kinetic_gradient_12,
                     kinetic_gradient_13},
                    {kinetic_gradient_20,
                     kinetic_gradient_21,
                     kinetic_gradient_22,
                     kinetic_gradient_23},
                    {kinetic_gradient_30,
                     kinetic_gradient_31,
                     kinetic_gradient_32,
                     kinetic_gradient_33}};
}

void gto_overlap_gradient(const unsigned Al,
                          const unsigned Bl,
                          double ae,
                          double be,
                          double cc,
                          double xAB,
                          double yAB,
                          double zAB,
                          double* const gx,
                          double* const gy,
                          double* const gz,
                          std::size_t matrix_size,
                          std::size_t Ai,
                          std::size_t Bi)
{
    ogs[Al][Bl](ae, be, cc, xAB, yAB, zAB, gx, gy, gz, matrix_size, Ai, Bi);
}

void gto_kinetic_gradient(const unsigned Al,
                          const unsigned Bl,
                          double ae,
                          double be,
                          double cc,
                          double xAB,
                          double yAB,
                          double zAB,
                          double* const gx,
                          double* const gy,
                          double* const gz,
                          std::size_t matrix_size,
                          std::size_t Ai,
                          std::size_t Bi)
{
    kgs[Al][Bl](ae, be, cc, xAB, yAB, zAB, gx, gy, gz, matrix_size, Ai, Bi);
}

void gto_two_electrons_gradient(const std::size_t atom,
                                const unsigned Al,
                                const unsigned Bl,
                                const unsigned Cl,
                                const unsigned Dl,
                                const double ae,
                                const double xA,
                                const double yA,
                                const double zA,
                                const double be,
                                const double xB,
                                const double yB,
                                const double zB,
                                const double ce,
                                const double xC,
                                const double yC,
                                const double zC,
                                const double de,
                                const double xD,
                                const double yD,
                                const double zD,
                                const double* const bs,
                                double* const gx,
                                double* const gy,
                                double* const gz)
{
    erigs[Al][Bl][Cl][Dl][atom](Al,
                                Bl,
                                Cl,
                                Dl,
                                ae,
                                xA,
                                yA,
                                zA,
                                be,
                                xB,
                                yB,
                                zB,
                                ce,
                                xC,
                                yC,
                                zC,
                                de,
                                xD,
                                yD,
                                zD,
                                bs,
                                gx,
                                gy,
                                gz);
}

void gto_vne_gradient(const std::size_t atom,
                      const unsigned Al,
                      const unsigned Bl,
                      double ae,
                      double be,
                      double xA,
                      double yA,
                      double zA,
                      double xB,
                      double yB,
                      double zB,
                      double xC,
                      double yC,
                      double zC,
                      const double* bs,
                      double* const gx,
                      double* const gy,
                      double* const gz,
                      std::size_t matrix_size,
                      std::size_t Ai,
                      std::size_t Bi)
{
    vnegs[atom][Al][Bl](ae,
                        be,
                        xA,
                        yA,
                        zA,
                        xB,
                        yB,
                        zB,
                        xC,
                        yC,
                        zC,
                        bs,
                        gx,
                        gy,
                        gz,
                        matrix_size,
                        Ai,
                        Bi);
}
