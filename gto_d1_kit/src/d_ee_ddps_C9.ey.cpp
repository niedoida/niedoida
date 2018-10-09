/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2210_3(const double ae,
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
    double g[84];
    eri_gradient_2210_3_ints(
        ae, xA, yA, zA, be, xB, yB, zB, ce, xC, yC, zC, de, xD, yD, zD, bs, g);
    double vrx[55];
    double vry[55];
    double vrz[55];
    eri_gradient_2210_3_vr(ae,
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
                           g,
                           vrx,
                           vry,
                           vrz);
    double etx[93];
    double ety[93];
    double etz[93];
    eri_gradient_2210_3_et(ae,
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
                           g,
                           vrx,
                           vry,
                           vrz,
                           etx,
                           ety,
                           etz);
    double hrx[108];
    double hry[108];
    double hrz[108];
    eri_gradient_2210_3_hr(ae,
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
                           g,
                           etx,
                           ety,
                           etz,
                           hrx,
                           hry,
                           hrz);
    const double C18162 = hrx[0];
    const double C18711 = hrx[1];
    const double C19261 = hrx[2];
    const double C19811 = hrx[3];
    const double C20361 = hrx[4];
    const double C20911 = hrx[5];
    const double C21461 = hrx[6];
    const double C22011 = hrx[7];
    const double C22561 = hrx[8];
    const double C23111 = hrx[9];
    const double C23661 = hrx[10];
    const double C24211 = hrx[11];
    const double C24761 = hrx[12];
    const double C25311 = hrx[13];
    const double C25861 = hrx[14];
    const double C26411 = hrx[15];
    const double C26961 = hrx[16];
    const double C27511 = hrx[17];
    const double C28061 = hrx[18];
    const double C28611 = hrx[19];
    const double C29161 = hrx[20];
    const double C29711 = hrx[21];
    const double C30261 = hrx[22];
    const double C30811 = hrx[23];
    const double C31361 = hrx[24];
    const double C31911 = hrx[25];
    const double C32461 = hrx[26];
    const double C33011 = hrx[27];
    const double C33561 = hrx[28];
    const double C34111 = hrx[29];
    const double C34661 = hrx[30];
    const double C35211 = hrx[31];
    const double C35761 = hrx[32];
    const double C36311 = hrx[33];
    const double C36861 = hrx[34];
    const double C37411 = hrx[35];
    const double C37961 = hrx[36];
    const double C38511 = hrx[37];
    const double C39061 = hrx[38];
    const double C39611 = hrx[39];
    const double C40161 = hrx[40];
    const double C40711 = hrx[41];
    const double C41261 = hrx[42];
    const double C41811 = hrx[43];
    const double C42361 = hrx[44];
    const double C42911 = hrx[45];
    const double C43461 = hrx[46];
    const double C44011 = hrx[47];
    const double C44561 = hrx[48];
    const double C45111 = hrx[49];
    const double C45661 = hrx[50];
    const double C46211 = hrx[51];
    const double C46761 = hrx[52];
    const double C47311 = hrx[53];
    const double C47861 = hrx[54];
    const double C48411 = hrx[55];
    const double C48961 = hrx[56];
    const double C49511 = hrx[57];
    const double C50061 = hrx[58];
    const double C50611 = hrx[59];
    const double C51161 = hrx[60];
    const double C51711 = hrx[61];
    const double C52261 = hrx[62];
    const double C52811 = hrx[63];
    const double C53361 = hrx[64];
    const double C53911 = hrx[65];
    const double C54461 = hrx[66];
    const double C55011 = hrx[67];
    const double C55561 = hrx[68];
    const double C56111 = hrx[69];
    const double C56661 = hrx[70];
    const double C57211 = hrx[71];
    const double C57761 = hrx[72];
    const double C58311 = hrx[73];
    const double C58861 = hrx[74];
    const double C59411 = hrx[75];
    const double C59961 = hrx[76];
    const double C60511 = hrx[77];
    const double C61061 = hrx[78];
    const double C61611 = hrx[79];
    const double C62161 = hrx[80];
    const double C62711 = hrx[81];
    const double C63261 = hrx[82];
    const double C63811 = hrx[83];
    const double C64361 = hrx[84];
    const double C64911 = hrx[85];
    const double C65461 = hrx[86];
    const double C66011 = hrx[87];
    const double C66561 = hrx[88];
    const double C67111 = hrx[89];
    const double C67661 = hrx[90];
    const double C68211 = hrx[91];
    const double C68761 = hrx[92];
    const double C69311 = hrx[93];
    const double C69861 = hrx[94];
    const double C70411 = hrx[95];
    const double C70961 = hrx[96];
    const double C71511 = hrx[97];
    const double C72061 = hrx[98];
    const double C72611 = hrx[99];
    const double C73161 = hrx[100];
    const double C73711 = hrx[101];
    const double C74261 = hrx[102];
    const double C74811 = hrx[103];
    const double C75361 = hrx[104];
    const double C75911 = hrx[105];
    const double C76461 = hrx[106];
    const double C77011 = hrx[107];
    const double C18344 = hry[0];
    const double C18894 = hry[1];
    const double C19444 = hry[2];
    const double C19994 = hry[3];
    const double C20544 = hry[4];
    const double C21094 = hry[5];
    const double C21644 = hry[6];
    const double C22194 = hry[7];
    const double C22744 = hry[8];
    const double C23294 = hry[9];
    const double C23844 = hry[10];
    const double C24394 = hry[11];
    const double C24944 = hry[12];
    const double C25494 = hry[13];
    const double C26044 = hry[14];
    const double C26594 = hry[15];
    const double C27144 = hry[16];
    const double C27694 = hry[17];
    const double C28244 = hry[18];
    const double C28794 = hry[19];
    const double C29344 = hry[20];
    const double C29894 = hry[21];
    const double C30444 = hry[22];
    const double C30994 = hry[23];
    const double C31544 = hry[24];
    const double C32094 = hry[25];
    const double C32644 = hry[26];
    const double C33194 = hry[27];
    const double C33744 = hry[28];
    const double C34294 = hry[29];
    const double C34844 = hry[30];
    const double C35394 = hry[31];
    const double C35944 = hry[32];
    const double C36494 = hry[33];
    const double C37044 = hry[34];
    const double C37594 = hry[35];
    const double C38144 = hry[36];
    const double C38694 = hry[37];
    const double C39244 = hry[38];
    const double C39794 = hry[39];
    const double C40344 = hry[40];
    const double C40894 = hry[41];
    const double C41444 = hry[42];
    const double C41994 = hry[43];
    const double C42544 = hry[44];
    const double C43094 = hry[45];
    const double C43644 = hry[46];
    const double C44194 = hry[47];
    const double C44744 = hry[48];
    const double C45294 = hry[49];
    const double C45844 = hry[50];
    const double C46394 = hry[51];
    const double C46944 = hry[52];
    const double C47494 = hry[53];
    const double C48044 = hry[54];
    const double C48594 = hry[55];
    const double C49144 = hry[56];
    const double C49694 = hry[57];
    const double C50244 = hry[58];
    const double C50794 = hry[59];
    const double C51344 = hry[60];
    const double C51894 = hry[61];
    const double C52444 = hry[62];
    const double C52994 = hry[63];
    const double C53544 = hry[64];
    const double C54094 = hry[65];
    const double C54644 = hry[66];
    const double C55194 = hry[67];
    const double C55744 = hry[68];
    const double C56294 = hry[69];
    const double C56844 = hry[70];
    const double C57394 = hry[71];
    const double C57944 = hry[72];
    const double C58494 = hry[73];
    const double C59044 = hry[74];
    const double C59594 = hry[75];
    const double C60144 = hry[76];
    const double C60694 = hry[77];
    const double C61244 = hry[78];
    const double C61794 = hry[79];
    const double C62344 = hry[80];
    const double C62894 = hry[81];
    const double C63444 = hry[82];
    const double C63994 = hry[83];
    const double C64544 = hry[84];
    const double C65094 = hry[85];
    const double C65644 = hry[86];
    const double C66194 = hry[87];
    const double C66744 = hry[88];
    const double C67294 = hry[89];
    const double C67844 = hry[90];
    const double C68394 = hry[91];
    const double C68944 = hry[92];
    const double C69494 = hry[93];
    const double C70044 = hry[94];
    const double C70594 = hry[95];
    const double C71144 = hry[96];
    const double C71694 = hry[97];
    const double C72244 = hry[98];
    const double C72794 = hry[99];
    const double C73344 = hry[100];
    const double C73894 = hry[101];
    const double C74444 = hry[102];
    const double C74994 = hry[103];
    const double C75544 = hry[104];
    const double C76094 = hry[105];
    const double C76644 = hry[106];
    const double C77194 = hry[107];
    const double C18527 = hrz[0];
    const double C19077 = hrz[1];
    const double C19627 = hrz[2];
    const double C20177 = hrz[3];
    const double C20727 = hrz[4];
    const double C21277 = hrz[5];
    const double C21827 = hrz[6];
    const double C22377 = hrz[7];
    const double C22927 = hrz[8];
    const double C23477 = hrz[9];
    const double C24027 = hrz[10];
    const double C24577 = hrz[11];
    const double C25127 = hrz[12];
    const double C25677 = hrz[13];
    const double C26227 = hrz[14];
    const double C26777 = hrz[15];
    const double C27327 = hrz[16];
    const double C27877 = hrz[17];
    const double C28427 = hrz[18];
    const double C28977 = hrz[19];
    const double C29527 = hrz[20];
    const double C30077 = hrz[21];
    const double C30627 = hrz[22];
    const double C31177 = hrz[23];
    const double C31727 = hrz[24];
    const double C32277 = hrz[25];
    const double C32827 = hrz[26];
    const double C33377 = hrz[27];
    const double C33927 = hrz[28];
    const double C34477 = hrz[29];
    const double C35027 = hrz[30];
    const double C35577 = hrz[31];
    const double C36127 = hrz[32];
    const double C36677 = hrz[33];
    const double C37227 = hrz[34];
    const double C37777 = hrz[35];
    const double C38327 = hrz[36];
    const double C38877 = hrz[37];
    const double C39427 = hrz[38];
    const double C39977 = hrz[39];
    const double C40527 = hrz[40];
    const double C41077 = hrz[41];
    const double C41627 = hrz[42];
    const double C42177 = hrz[43];
    const double C42727 = hrz[44];
    const double C43277 = hrz[45];
    const double C43827 = hrz[46];
    const double C44377 = hrz[47];
    const double C44927 = hrz[48];
    const double C45477 = hrz[49];
    const double C46027 = hrz[50];
    const double C46577 = hrz[51];
    const double C47127 = hrz[52];
    const double C47677 = hrz[53];
    const double C48227 = hrz[54];
    const double C48777 = hrz[55];
    const double C49327 = hrz[56];
    const double C49877 = hrz[57];
    const double C50427 = hrz[58];
    const double C50977 = hrz[59];
    const double C51527 = hrz[60];
    const double C52077 = hrz[61];
    const double C52627 = hrz[62];
    const double C53177 = hrz[63];
    const double C53727 = hrz[64];
    const double C54277 = hrz[65];
    const double C54827 = hrz[66];
    const double C55377 = hrz[67];
    const double C55927 = hrz[68];
    const double C56477 = hrz[69];
    const double C57027 = hrz[70];
    const double C57577 = hrz[71];
    const double C58127 = hrz[72];
    const double C58677 = hrz[73];
    const double C59227 = hrz[74];
    const double C59777 = hrz[75];
    const double C60327 = hrz[76];
    const double C60877 = hrz[77];
    const double C61427 = hrz[78];
    const double C61977 = hrz[79];
    const double C62527 = hrz[80];
    const double C63077 = hrz[81];
    const double C63627 = hrz[82];
    const double C64177 = hrz[83];
    const double C64727 = hrz[84];
    const double C65277 = hrz[85];
    const double C65827 = hrz[86];
    const double C66377 = hrz[87];
    const double C66927 = hrz[88];
    const double C67477 = hrz[89];
    const double C68027 = hrz[90];
    const double C68577 = hrz[91];
    const double C69127 = hrz[92];
    const double C69677 = hrz[93];
    const double C70227 = hrz[94];
    const double C70777 = hrz[95];
    const double C71327 = hrz[96];
    const double C71877 = hrz[97];
    const double C72427 = hrz[98];
    const double C72977 = hrz[99];
    const double C73527 = hrz[100];
    const double C74077 = hrz[101];
    const double C74627 = hrz[102];
    const double C75177 = hrz[103];
    const double C75727 = hrz[104];
    const double C76277 = hrz[105];
    const double C76827 = hrz[106];
    const double C77377 = hrz[107];
    gx[0] += std::sqrt(9.) * C52811;
    gy[0] += std::sqrt(9.) * C52994;
    gz[0] += std::sqrt(9.) * C53177;
    gx[1] += std::sqrt(9.) * C53361;
    gy[1] += std::sqrt(9.) * C53544;
    gz[1] += std::sqrt(9.) * C53727;
    gx[2] += std::sqrt(9.) * C53911;
    gy[2] += std::sqrt(9.) * C54094;
    gz[2] += std::sqrt(9.) * C54277;
    gx[3] += std::sqrt(9.) * C56111;
    gy[3] += std::sqrt(9.) * C56294;
    gz[3] += std::sqrt(9.) * C56477;
    gx[4] += std::sqrt(9.) * C56661;
    gy[4] += std::sqrt(9.) * C56844;
    gz[4] += std::sqrt(9.) * C57027;
    gx[5] += std::sqrt(9.) * C57211;
    gy[5] += std::sqrt(9.) * C57394;
    gz[5] += std::sqrt(9.) * C57577;
    gx[6] += std::sqrt(3.0) * C51161 -
             (std::sqrt(0.75) * C49511 + std::sqrt(0.75) * C47861);
    gy[6] += std::sqrt(3.0) * C51344 -
             (std::sqrt(0.75) * C49694 + std::sqrt(0.75) * C48044);
    gz[6] += std::sqrt(3.0) * C51527 -
             (std::sqrt(0.75) * C49877 + std::sqrt(0.75) * C48227);
    gx[7] += std::sqrt(3.0) * C51711 -
             (std::sqrt(0.75) * C50061 + std::sqrt(0.75) * C48411);
    gy[7] += std::sqrt(3.0) * C51894 -
             (std::sqrt(0.75) * C50244 + std::sqrt(0.75) * C48594);
    gz[7] += std::sqrt(3.0) * C52077 -
             (std::sqrt(0.75) * C50427 + std::sqrt(0.75) * C48777);
    gx[8] += std::sqrt(3.0) * C52261 -
             (std::sqrt(0.75) * C50611 + std::sqrt(0.75) * C48961);
    gy[8] += std::sqrt(3.0) * C52444 -
             (std::sqrt(0.75) * C50794 + std::sqrt(0.75) * C49144);
    gz[8] += std::sqrt(3.0) * C52627 -
             (std::sqrt(0.75) * C50977 + std::sqrt(0.75) * C49327);
    gx[9] += std::sqrt(9.) * C54461;
    gy[9] += std::sqrt(9.) * C54644;
    gz[9] += std::sqrt(9.) * C54827;
    gx[10] += std::sqrt(9.) * C55011;
    gy[10] += std::sqrt(9.) * C55194;
    gz[10] += std::sqrt(9.) * C55377;
    gx[11] += std::sqrt(9.) * C55561;
    gy[11] += std::sqrt(9.) * C55744;
    gz[11] += std::sqrt(9.) * C55927;
    gx[12] += std::sqrt(2.25) * C47861 - std::sqrt(2.25) * C49511;
    gy[12] += std::sqrt(2.25) * C48044 - std::sqrt(2.25) * C49694;
    gz[12] += std::sqrt(2.25) * C48227 - std::sqrt(2.25) * C49877;
    gx[13] += std::sqrt(2.25) * C48411 - std::sqrt(2.25) * C50061;
    gy[13] += std::sqrt(2.25) * C48594 - std::sqrt(2.25) * C50244;
    gz[13] += std::sqrt(2.25) * C48777 - std::sqrt(2.25) * C50427;
    gx[14] += std::sqrt(2.25) * C48961 - std::sqrt(2.25) * C50611;
    gy[14] += std::sqrt(2.25) * C49144 - std::sqrt(2.25) * C50794;
    gz[14] += std::sqrt(2.25) * C49327 - std::sqrt(2.25) * C50977;
    gx[15] += std::sqrt(9.) * C72611;
    gy[15] += std::sqrt(9.) * C72794;
    gz[15] += std::sqrt(9.) * C72977;
    gx[16] += std::sqrt(9.) * C73161;
    gy[16] += std::sqrt(9.) * C73344;
    gz[16] += std::sqrt(9.) * C73527;
    gx[17] += std::sqrt(9.) * C73711;
    gy[17] += std::sqrt(9.) * C73894;
    gz[17] += std::sqrt(9.) * C74077;
    gx[18] += std::sqrt(9.) * C75911;
    gy[18] += std::sqrt(9.) * C76094;
    gz[18] += std::sqrt(9.) * C76277;
    gx[19] += std::sqrt(9.) * C76461;
    gy[19] += std::sqrt(9.) * C76644;
    gz[19] += std::sqrt(9.) * C76827;
    gx[20] += std::sqrt(9.) * C77011;
    gy[20] += std::sqrt(9.) * C77194;
    gz[20] += std::sqrt(9.) * C77377;
    gx[21] += std::sqrt(3.0) * C70961 -
              (std::sqrt(0.75) * C69311 + std::sqrt(0.75) * C67661);
    gy[21] += std::sqrt(3.0) * C71144 -
              (std::sqrt(0.75) * C69494 + std::sqrt(0.75) * C67844);
    gz[21] += std::sqrt(3.0) * C71327 -
              (std::sqrt(0.75) * C69677 + std::sqrt(0.75) * C68027);
    gx[22] += std::sqrt(3.0) * C71511 -
              (std::sqrt(0.75) * C69861 + std::sqrt(0.75) * C68211);
    gy[22] += std::sqrt(3.0) * C71694 -
              (std::sqrt(0.75) * C70044 + std::sqrt(0.75) * C68394);
    gz[22] += std::sqrt(3.0) * C71877 -
              (std::sqrt(0.75) * C70227 + std::sqrt(0.75) * C68577);
    gx[23] += std::sqrt(3.0) * C72061 -
              (std::sqrt(0.75) * C70411 + std::sqrt(0.75) * C68761);
    gy[23] += std::sqrt(3.0) * C72244 -
              (std::sqrt(0.75) * C70594 + std::sqrt(0.75) * C68944);
    gz[23] += std::sqrt(3.0) * C72427 -
              (std::sqrt(0.75) * C70777 + std::sqrt(0.75) * C69127);
    gx[24] += std::sqrt(9.) * C74261;
    gy[24] += std::sqrt(9.) * C74444;
    gz[24] += std::sqrt(9.) * C74627;
    gx[25] += std::sqrt(9.) * C74811;
    gy[25] += std::sqrt(9.) * C74994;
    gz[25] += std::sqrt(9.) * C75177;
    gx[26] += std::sqrt(9.) * C75361;
    gy[26] += std::sqrt(9.) * C75544;
    gz[26] += std::sqrt(9.) * C75727;
    gx[27] += std::sqrt(2.25) * C67661 - std::sqrt(2.25) * C69311;
    gy[27] += std::sqrt(2.25) * C67844 - std::sqrt(2.25) * C69494;
    gz[27] += std::sqrt(2.25) * C68027 - std::sqrt(2.25) * C69677;
    gx[28] += std::sqrt(2.25) * C68211 - std::sqrt(2.25) * C69861;
    gy[28] += std::sqrt(2.25) * C68394 - std::sqrt(2.25) * C70044;
    gz[28] += std::sqrt(2.25) * C68577 - std::sqrt(2.25) * C70227;
    gx[29] += std::sqrt(2.25) * C68761 - std::sqrt(2.25) * C70411;
    gy[29] += std::sqrt(2.25) * C68944 - std::sqrt(2.25) * C70594;
    gz[29] += std::sqrt(2.25) * C69127 - std::sqrt(2.25) * C70777;
    gx[30] += std::sqrt(3.0) * C42911 -
              (std::sqrt(0.75) * C33011 + std::sqrt(0.75) * C23111);
    gy[30] += std::sqrt(3.0) * C43094 -
              (std::sqrt(0.75) * C33194 + std::sqrt(0.75) * C23294);
    gz[30] += std::sqrt(3.0) * C43277 -
              (std::sqrt(0.75) * C33377 + std::sqrt(0.75) * C23477);
    gx[31] += std::sqrt(3.0) * C43461 -
              (std::sqrt(0.75) * C33561 + std::sqrt(0.75) * C23661);
    gy[31] += std::sqrt(3.0) * C43644 -
              (std::sqrt(0.75) * C33744 + std::sqrt(0.75) * C23844);
    gz[31] += std::sqrt(3.0) * C43827 -
              (std::sqrt(0.75) * C33927 + std::sqrt(0.75) * C24027);
    gx[32] += std::sqrt(3.0) * C44011 -
              (std::sqrt(0.75) * C34111 + std::sqrt(0.75) * C24211);
    gy[32] += std::sqrt(3.0) * C44194 -
              (std::sqrt(0.75) * C34294 + std::sqrt(0.75) * C24394);
    gz[32] += std::sqrt(3.0) * C44377 -
              (std::sqrt(0.75) * C34477 + std::sqrt(0.75) * C24577);
    gx[33] += std::sqrt(3.0) * C46211 -
              (std::sqrt(0.75) * C36311 + std::sqrt(0.75) * C26411);
    gy[33] += std::sqrt(3.0) * C46394 -
              (std::sqrt(0.75) * C36494 + std::sqrt(0.75) * C26594);
    gz[33] += std::sqrt(3.0) * C46577 -
              (std::sqrt(0.75) * C36677 + std::sqrt(0.75) * C26777);
    gx[34] += std::sqrt(3.0) * C46761 -
              (std::sqrt(0.75) * C36861 + std::sqrt(0.75) * C26961);
    gy[34] += std::sqrt(3.0) * C46944 -
              (std::sqrt(0.75) * C37044 + std::sqrt(0.75) * C27144);
    gz[34] += std::sqrt(3.0) * C47127 -
              (std::sqrt(0.75) * C37227 + std::sqrt(0.75) * C27327);
    gx[35] += std::sqrt(3.0) * C47311 -
              (std::sqrt(0.75) * C37411 + std::sqrt(0.75) * C27511);
    gy[35] += std::sqrt(3.0) * C47494 -
              (std::sqrt(0.75) * C37594 + std::sqrt(0.75) * C27694);
    gz[35] += std::sqrt(3.0) * C47677 -
              (std::sqrt(0.75) * C37777 + std::sqrt(0.75) * C27877);
    gx[36] += 0.25 * C18162 + 0.25 * C19811 - 0.5 * C21461 + 0.25 * C28061 +
              0.25 * C29711 - 0.5 * C31361 - 0.5 * C37961 - 0.5 * C39611 +
              C41261;
    gy[36] += 0.25 * C18344 + 0.25 * C19994 - 0.5 * C21644 + 0.25 * C28244 +
              0.25 * C29894 - 0.5 * C31544 - 0.5 * C38144 - 0.5 * C39794 +
              C41444;
    gz[36] += 0.25 * C18527 + 0.25 * C20177 - 0.5 * C21827 + 0.25 * C28427 +
              0.25 * C30077 - 0.5 * C31727 - 0.5 * C38327 - 0.5 * C39977 +
              C41627;
    gx[37] += 0.25 * C18711 + 0.25 * C20361 - 0.5 * C22011 + 0.25 * C28611 +
              0.25 * C30261 - 0.5 * C31911 - 0.5 * C38511 - 0.5 * C40161 +
              C41811;
    gy[37] += 0.25 * C18894 + 0.25 * C20544 - 0.5 * C22194 + 0.25 * C28794 +
              0.25 * C30444 - 0.5 * C32094 - 0.5 * C38694 - 0.5 * C40344 +
              C41994;
    gz[37] += 0.25 * C19077 + 0.25 * C20727 - 0.5 * C22377 + 0.25 * C28977 +
              0.25 * C30627 - 0.5 * C32277 - 0.5 * C38877 - 0.5 * C40527 +
              C42177;
    gx[38] += 0.25 * C19261 + 0.25 * C20911 - 0.5 * C22561 + 0.25 * C29161 +
              0.25 * C30811 - 0.5 * C32461 - 0.5 * C39061 - 0.5 * C40711 +
              C42361;
    gy[38] += 0.25 * C19444 + 0.25 * C21094 - 0.5 * C22744 + 0.25 * C29344 +
              0.25 * C30994 - 0.5 * C32644 - 0.5 * C39244 - 0.5 * C40894 +
              C42544;
    gz[38] += 0.25 * C19627 + 0.25 * C21277 - 0.5 * C22927 + 0.25 * C29527 +
              0.25 * C31177 - 0.5 * C32827 - 0.5 * C39427 - 0.5 * C41077 +
              C42727;
    gx[39] += std::sqrt(3.0) * C44561 -
              (std::sqrt(0.75) * C34661 + std::sqrt(0.75) * C24761);
    gy[39] += std::sqrt(3.0) * C44744 -
              (std::sqrt(0.75) * C34844 + std::sqrt(0.75) * C24944);
    gz[39] += std::sqrt(3.0) * C44927 -
              (std::sqrt(0.75) * C35027 + std::sqrt(0.75) * C25127);
    gx[40] += std::sqrt(3.0) * C45111 -
              (std::sqrt(0.75) * C35211 + std::sqrt(0.75) * C25311);
    gy[40] += std::sqrt(3.0) * C45294 -
              (std::sqrt(0.75) * C35394 + std::sqrt(0.75) * C25494);
    gz[40] += std::sqrt(3.0) * C45477 -
              (std::sqrt(0.75) * C35577 + std::sqrt(0.75) * C25677);
    gx[41] += std::sqrt(3.0) * C45661 -
              (std::sqrt(0.75) * C35761 + std::sqrt(0.75) * C25861);
    gy[41] += std::sqrt(3.0) * C45844 -
              (std::sqrt(0.75) * C35944 + std::sqrt(0.75) * C26044);
    gz[41] += std::sqrt(3.0) * C46027 -
              (std::sqrt(0.75) * C36127 + std::sqrt(0.75) * C26227);
    gx[42] += std::sqrt(0.1875) * C19811 - std::sqrt(0.1875) * C18162 -
              std::sqrt(0.1875) * C28061 + std::sqrt(0.1875) * C29711 +
              std::sqrt(0.75) * C37961 - std::sqrt(0.75) * C39611;
    gy[42] += std::sqrt(0.1875) * C19994 - std::sqrt(0.1875) * C18344 -
              std::sqrt(0.1875) * C28244 + std::sqrt(0.1875) * C29894 +
              std::sqrt(0.75) * C38144 - std::sqrt(0.75) * C39794;
    gz[42] += std::sqrt(0.1875) * C20177 - std::sqrt(0.1875) * C18527 -
              std::sqrt(0.1875) * C28427 + std::sqrt(0.1875) * C30077 +
              std::sqrt(0.75) * C38327 - std::sqrt(0.75) * C39977;
    gx[43] += std::sqrt(0.1875) * C20361 - std::sqrt(0.1875) * C18711 -
              std::sqrt(0.1875) * C28611 + std::sqrt(0.1875) * C30261 +
              std::sqrt(0.75) * C38511 - std::sqrt(0.75) * C40161;
    gy[43] += std::sqrt(0.1875) * C20544 - std::sqrt(0.1875) * C18894 -
              std::sqrt(0.1875) * C28794 + std::sqrt(0.1875) * C30444 +
              std::sqrt(0.75) * C38694 - std::sqrt(0.75) * C40344;
    gz[43] += std::sqrt(0.1875) * C20727 - std::sqrt(0.1875) * C19077 -
              std::sqrt(0.1875) * C28977 + std::sqrt(0.1875) * C30627 +
              std::sqrt(0.75) * C38877 - std::sqrt(0.75) * C40527;
    gx[44] += std::sqrt(0.1875) * C20911 - std::sqrt(0.1875) * C19261 -
              std::sqrt(0.1875) * C29161 + std::sqrt(0.1875) * C30811 +
              std::sqrt(0.75) * C39061 - std::sqrt(0.75) * C40711;
    gy[44] += std::sqrt(0.1875) * C21094 - std::sqrt(0.1875) * C19444 -
              std::sqrt(0.1875) * C29344 + std::sqrt(0.1875) * C30994 +
              std::sqrt(0.75) * C39244 - std::sqrt(0.75) * C40894;
    gz[44] += std::sqrt(0.1875) * C21277 - std::sqrt(0.1875) * C19627 -
              std::sqrt(0.1875) * C29527 + std::sqrt(0.1875) * C31177 +
              std::sqrt(0.75) * C39427 - std::sqrt(0.75) * C41077;
    gx[45] += std::sqrt(9.) * C62711;
    gy[45] += std::sqrt(9.) * C62894;
    gz[45] += std::sqrt(9.) * C63077;
    gx[46] += std::sqrt(9.) * C63261;
    gy[46] += std::sqrt(9.) * C63444;
    gz[46] += std::sqrt(9.) * C63627;
    gx[47] += std::sqrt(9.) * C63811;
    gy[47] += std::sqrt(9.) * C63994;
    gz[47] += std::sqrt(9.) * C64177;
    gx[48] += std::sqrt(9.) * C66011;
    gy[48] += std::sqrt(9.) * C66194;
    gz[48] += std::sqrt(9.) * C66377;
    gx[49] += std::sqrt(9.) * C66561;
    gy[49] += std::sqrt(9.) * C66744;
    gz[49] += std::sqrt(9.) * C66927;
    gx[50] += std::sqrt(9.) * C67111;
    gy[50] += std::sqrt(9.) * C67294;
    gz[50] += std::sqrt(9.) * C67477;
    gx[51] += std::sqrt(3.0) * C61061 -
              (std::sqrt(0.75) * C59411 + std::sqrt(0.75) * C57761);
    gy[51] += std::sqrt(3.0) * C61244 -
              (std::sqrt(0.75) * C59594 + std::sqrt(0.75) * C57944);
    gz[51] += std::sqrt(3.0) * C61427 -
              (std::sqrt(0.75) * C59777 + std::sqrt(0.75) * C58127);
    gx[52] += std::sqrt(3.0) * C61611 -
              (std::sqrt(0.75) * C59961 + std::sqrt(0.75) * C58311);
    gy[52] += std::sqrt(3.0) * C61794 -
              (std::sqrt(0.75) * C60144 + std::sqrt(0.75) * C58494);
    gz[52] += std::sqrt(3.0) * C61977 -
              (std::sqrt(0.75) * C60327 + std::sqrt(0.75) * C58677);
    gx[53] += std::sqrt(3.0) * C62161 -
              (std::sqrt(0.75) * C60511 + std::sqrt(0.75) * C58861);
    gy[53] += std::sqrt(3.0) * C62344 -
              (std::sqrt(0.75) * C60694 + std::sqrt(0.75) * C59044);
    gz[53] += std::sqrt(3.0) * C62527 -
              (std::sqrt(0.75) * C60877 + std::sqrt(0.75) * C59227);
    gx[54] += std::sqrt(9.) * C64361;
    gy[54] += std::sqrt(9.) * C64544;
    gz[54] += std::sqrt(9.) * C64727;
    gx[55] += std::sqrt(9.) * C64911;
    gy[55] += std::sqrt(9.) * C65094;
    gz[55] += std::sqrt(9.) * C65277;
    gx[56] += std::sqrt(9.) * C65461;
    gy[56] += std::sqrt(9.) * C65644;
    gz[56] += std::sqrt(9.) * C65827;
    gx[57] += std::sqrt(2.25) * C57761 - std::sqrt(2.25) * C59411;
    gy[57] += std::sqrt(2.25) * C57944 - std::sqrt(2.25) * C59594;
    gz[57] += std::sqrt(2.25) * C58127 - std::sqrt(2.25) * C59777;
    gx[58] += std::sqrt(2.25) * C58311 - std::sqrt(2.25) * C59961;
    gy[58] += std::sqrt(2.25) * C58494 - std::sqrt(2.25) * C60144;
    gz[58] += std::sqrt(2.25) * C58677 - std::sqrt(2.25) * C60327;
    gx[59] += std::sqrt(2.25) * C58861 - std::sqrt(2.25) * C60511;
    gy[59] += std::sqrt(2.25) * C59044 - std::sqrt(2.25) * C60694;
    gz[59] += std::sqrt(2.25) * C59227 - std::sqrt(2.25) * C60877;
    gx[60] += std::sqrt(2.25) * C23111 - std::sqrt(2.25) * C33011;
    gy[60] += std::sqrt(2.25) * C23294 - std::sqrt(2.25) * C33194;
    gz[60] += std::sqrt(2.25) * C23477 - std::sqrt(2.25) * C33377;
    gx[61] += std::sqrt(2.25) * C23661 - std::sqrt(2.25) * C33561;
    gy[61] += std::sqrt(2.25) * C23844 - std::sqrt(2.25) * C33744;
    gz[61] += std::sqrt(2.25) * C24027 - std::sqrt(2.25) * C33927;
    gx[62] += std::sqrt(2.25) * C24211 - std::sqrt(2.25) * C34111;
    gy[62] += std::sqrt(2.25) * C24394 - std::sqrt(2.25) * C34294;
    gz[62] += std::sqrt(2.25) * C24577 - std::sqrt(2.25) * C34477;
    gx[63] += std::sqrt(2.25) * C26411 - std::sqrt(2.25) * C36311;
    gy[63] += std::sqrt(2.25) * C26594 - std::sqrt(2.25) * C36494;
    gz[63] += std::sqrt(2.25) * C26777 - std::sqrt(2.25) * C36677;
    gx[64] += std::sqrt(2.25) * C26961 - std::sqrt(2.25) * C36861;
    gy[64] += std::sqrt(2.25) * C27144 - std::sqrt(2.25) * C37044;
    gz[64] += std::sqrt(2.25) * C27327 - std::sqrt(2.25) * C37227;
    gx[65] += std::sqrt(2.25) * C27511 - std::sqrt(2.25) * C37411;
    gy[65] += std::sqrt(2.25) * C27694 - std::sqrt(2.25) * C37594;
    gz[65] += std::sqrt(2.25) * C27877 - std::sqrt(2.25) * C37777;
    gx[66] += std::sqrt(0.75) * C21461 -
              (std::sqrt(0.1875) * C19811 + std::sqrt(0.1875) * C18162) +
              std::sqrt(0.1875) * C28061 + std::sqrt(0.1875) * C29711 -
              std::sqrt(0.75) * C31361;
    gy[66] += std::sqrt(0.75) * C21644 -
              (std::sqrt(0.1875) * C19994 + std::sqrt(0.1875) * C18344) +
              std::sqrt(0.1875) * C28244 + std::sqrt(0.1875) * C29894 -
              std::sqrt(0.75) * C31544;
    gz[66] += std::sqrt(0.75) * C21827 -
              (std::sqrt(0.1875) * C20177 + std::sqrt(0.1875) * C18527) +
              std::sqrt(0.1875) * C28427 + std::sqrt(0.1875) * C30077 -
              std::sqrt(0.75) * C31727;
    gx[67] += std::sqrt(0.75) * C22011 -
              (std::sqrt(0.1875) * C20361 + std::sqrt(0.1875) * C18711) +
              std::sqrt(0.1875) * C28611 + std::sqrt(0.1875) * C30261 -
              std::sqrt(0.75) * C31911;
    gy[67] += std::sqrt(0.75) * C22194 -
              (std::sqrt(0.1875) * C20544 + std::sqrt(0.1875) * C18894) +
              std::sqrt(0.1875) * C28794 + std::sqrt(0.1875) * C30444 -
              std::sqrt(0.75) * C32094;
    gz[67] += std::sqrt(0.75) * C22377 -
              (std::sqrt(0.1875) * C20727 + std::sqrt(0.1875) * C19077) +
              std::sqrt(0.1875) * C28977 + std::sqrt(0.1875) * C30627 -
              std::sqrt(0.75) * C32277;
    gx[68] += std::sqrt(0.75) * C22561 -
              (std::sqrt(0.1875) * C20911 + std::sqrt(0.1875) * C19261) +
              std::sqrt(0.1875) * C29161 + std::sqrt(0.1875) * C30811 -
              std::sqrt(0.75) * C32461;
    gy[68] += std::sqrt(0.75) * C22744 -
              (std::sqrt(0.1875) * C21094 + std::sqrt(0.1875) * C19444) +
              std::sqrt(0.1875) * C29344 + std::sqrt(0.1875) * C30994 -
              std::sqrt(0.75) * C32644;
    gz[68] += std::sqrt(0.75) * C22927 -
              (std::sqrt(0.1875) * C21277 + std::sqrt(0.1875) * C19627) +
              std::sqrt(0.1875) * C29527 + std::sqrt(0.1875) * C31177 -
              std::sqrt(0.75) * C32827;
    gx[69] += std::sqrt(2.25) * C24761 - std::sqrt(2.25) * C34661;
    gy[69] += std::sqrt(2.25) * C24944 - std::sqrt(2.25) * C34844;
    gz[69] += std::sqrt(2.25) * C25127 - std::sqrt(2.25) * C35027;
    gx[70] += std::sqrt(2.25) * C25311 - std::sqrt(2.25) * C35211;
    gy[70] += std::sqrt(2.25) * C25494 - std::sqrt(2.25) * C35394;
    gz[70] += std::sqrt(2.25) * C25677 - std::sqrt(2.25) * C35577;
    gx[71] += std::sqrt(2.25) * C25861 - std::sqrt(2.25) * C35761;
    gy[71] += std::sqrt(2.25) * C26044 - std::sqrt(2.25) * C35944;
    gz[71] += std::sqrt(2.25) * C26227 - std::sqrt(2.25) * C36127;
    gx[72] += std::sqrt(0.5625) * C18162 - std::sqrt(0.5625) * C19811 -
              std::sqrt(0.5625) * C28061 + std::sqrt(0.5625) * C29711;
    gy[72] += std::sqrt(0.5625) * C18344 - std::sqrt(0.5625) * C19994 -
              std::sqrt(0.5625) * C28244 + std::sqrt(0.5625) * C29894;
    gz[72] += std::sqrt(0.5625) * C18527 - std::sqrt(0.5625) * C20177 -
              std::sqrt(0.5625) * C28427 + std::sqrt(0.5625) * C30077;
    gx[73] += std::sqrt(0.5625) * C18711 - std::sqrt(0.5625) * C20361 -
              std::sqrt(0.5625) * C28611 + std::sqrt(0.5625) * C30261;
    gy[73] += std::sqrt(0.5625) * C18894 - std::sqrt(0.5625) * C20544 -
              std::sqrt(0.5625) * C28794 + std::sqrt(0.5625) * C30444;
    gz[73] += std::sqrt(0.5625) * C19077 - std::sqrt(0.5625) * C20727 -
              std::sqrt(0.5625) * C28977 + std::sqrt(0.5625) * C30627;
    gx[74] += std::sqrt(0.5625) * C19261 - std::sqrt(0.5625) * C20911 -
              std::sqrt(0.5625) * C29161 + std::sqrt(0.5625) * C30811;
    gy[74] += std::sqrt(0.5625) * C19444 - std::sqrt(0.5625) * C21094 -
              std::sqrt(0.5625) * C29344 + std::sqrt(0.5625) * C30994;
    gz[74] += std::sqrt(0.5625) * C19627 - std::sqrt(0.5625) * C21277 -
              std::sqrt(0.5625) * C29527 + std::sqrt(0.5625) * C31177;
}
