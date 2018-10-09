/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2210_1(const double ae,
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
    double g[190];
    eri_gradient_2210_1_ints(
        ae, xA, yA, zA, be, xB, yB, zB, ce, xC, yC, zC, de, xD, yD, zD, bs, g);
    double vrx[55];
    double vry[55];
    double vrz[55];
    eri_gradient_2210_1_vr(ae,
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
    eri_gradient_2210_1_et(ae,
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
    eri_gradient_2210_1_hr(ae,
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
    const double C19258 = hrx[0];
    const double C19807 = hrx[1];
    const double C20357 = hrx[2];
    const double C20907 = hrx[3];
    const double C21457 = hrx[4];
    const double C22007 = hrx[5];
    const double C22557 = hrx[6];
    const double C23107 = hrx[7];
    const double C23657 = hrx[8];
    const double C24207 = hrx[9];
    const double C24757 = hrx[10];
    const double C25307 = hrx[11];
    const double C25857 = hrx[12];
    const double C26407 = hrx[13];
    const double C26957 = hrx[14];
    const double C27507 = hrx[15];
    const double C28057 = hrx[16];
    const double C28607 = hrx[17];
    const double C29157 = hrx[18];
    const double C29707 = hrx[19];
    const double C30257 = hrx[20];
    const double C30807 = hrx[21];
    const double C31357 = hrx[22];
    const double C31907 = hrx[23];
    const double C32457 = hrx[24];
    const double C33007 = hrx[25];
    const double C33557 = hrx[26];
    const double C34107 = hrx[27];
    const double C34657 = hrx[28];
    const double C35207 = hrx[29];
    const double C35757 = hrx[30];
    const double C36307 = hrx[31];
    const double C36857 = hrx[32];
    const double C37407 = hrx[33];
    const double C37957 = hrx[34];
    const double C38507 = hrx[35];
    const double C39057 = hrx[36];
    const double C39607 = hrx[37];
    const double C40157 = hrx[38];
    const double C40707 = hrx[39];
    const double C41257 = hrx[40];
    const double C41807 = hrx[41];
    const double C42357 = hrx[42];
    const double C42907 = hrx[43];
    const double C43457 = hrx[44];
    const double C44007 = hrx[45];
    const double C44557 = hrx[46];
    const double C45107 = hrx[47];
    const double C45657 = hrx[48];
    const double C46207 = hrx[49];
    const double C46757 = hrx[50];
    const double C47307 = hrx[51];
    const double C47857 = hrx[52];
    const double C48407 = hrx[53];
    const double C48957 = hrx[54];
    const double C49507 = hrx[55];
    const double C50057 = hrx[56];
    const double C50607 = hrx[57];
    const double C51157 = hrx[58];
    const double C51707 = hrx[59];
    const double C52257 = hrx[60];
    const double C52807 = hrx[61];
    const double C53357 = hrx[62];
    const double C53907 = hrx[63];
    const double C54457 = hrx[64];
    const double C55007 = hrx[65];
    const double C55557 = hrx[66];
    const double C56107 = hrx[67];
    const double C56657 = hrx[68];
    const double C57207 = hrx[69];
    const double C57757 = hrx[70];
    const double C58307 = hrx[71];
    const double C58857 = hrx[72];
    const double C59407 = hrx[73];
    const double C59957 = hrx[74];
    const double C60507 = hrx[75];
    const double C61057 = hrx[76];
    const double C61607 = hrx[77];
    const double C62157 = hrx[78];
    const double C62707 = hrx[79];
    const double C63257 = hrx[80];
    const double C63807 = hrx[81];
    const double C64357 = hrx[82];
    const double C64907 = hrx[83];
    const double C65457 = hrx[84];
    const double C66007 = hrx[85];
    const double C66557 = hrx[86];
    const double C67107 = hrx[87];
    const double C67657 = hrx[88];
    const double C68207 = hrx[89];
    const double C68757 = hrx[90];
    const double C69307 = hrx[91];
    const double C69857 = hrx[92];
    const double C70407 = hrx[93];
    const double C70957 = hrx[94];
    const double C71507 = hrx[95];
    const double C72057 = hrx[96];
    const double C72607 = hrx[97];
    const double C73157 = hrx[98];
    const double C73707 = hrx[99];
    const double C74257 = hrx[100];
    const double C74807 = hrx[101];
    const double C75357 = hrx[102];
    const double C75907 = hrx[103];
    const double C76457 = hrx[104];
    const double C77007 = hrx[105];
    const double C77557 = hrx[106];
    const double C78107 = hrx[107];
    const double C19440 = hry[0];
    const double C19990 = hry[1];
    const double C20540 = hry[2];
    const double C21090 = hry[3];
    const double C21640 = hry[4];
    const double C22190 = hry[5];
    const double C22740 = hry[6];
    const double C23290 = hry[7];
    const double C23840 = hry[8];
    const double C24390 = hry[9];
    const double C24940 = hry[10];
    const double C25490 = hry[11];
    const double C26040 = hry[12];
    const double C26590 = hry[13];
    const double C27140 = hry[14];
    const double C27690 = hry[15];
    const double C28240 = hry[16];
    const double C28790 = hry[17];
    const double C29340 = hry[18];
    const double C29890 = hry[19];
    const double C30440 = hry[20];
    const double C30990 = hry[21];
    const double C31540 = hry[22];
    const double C32090 = hry[23];
    const double C32640 = hry[24];
    const double C33190 = hry[25];
    const double C33740 = hry[26];
    const double C34290 = hry[27];
    const double C34840 = hry[28];
    const double C35390 = hry[29];
    const double C35940 = hry[30];
    const double C36490 = hry[31];
    const double C37040 = hry[32];
    const double C37590 = hry[33];
    const double C38140 = hry[34];
    const double C38690 = hry[35];
    const double C39240 = hry[36];
    const double C39790 = hry[37];
    const double C40340 = hry[38];
    const double C40890 = hry[39];
    const double C41440 = hry[40];
    const double C41990 = hry[41];
    const double C42540 = hry[42];
    const double C43090 = hry[43];
    const double C43640 = hry[44];
    const double C44190 = hry[45];
    const double C44740 = hry[46];
    const double C45290 = hry[47];
    const double C45840 = hry[48];
    const double C46390 = hry[49];
    const double C46940 = hry[50];
    const double C47490 = hry[51];
    const double C48040 = hry[52];
    const double C48590 = hry[53];
    const double C49140 = hry[54];
    const double C49690 = hry[55];
    const double C50240 = hry[56];
    const double C50790 = hry[57];
    const double C51340 = hry[58];
    const double C51890 = hry[59];
    const double C52440 = hry[60];
    const double C52990 = hry[61];
    const double C53540 = hry[62];
    const double C54090 = hry[63];
    const double C54640 = hry[64];
    const double C55190 = hry[65];
    const double C55740 = hry[66];
    const double C56290 = hry[67];
    const double C56840 = hry[68];
    const double C57390 = hry[69];
    const double C57940 = hry[70];
    const double C58490 = hry[71];
    const double C59040 = hry[72];
    const double C59590 = hry[73];
    const double C60140 = hry[74];
    const double C60690 = hry[75];
    const double C61240 = hry[76];
    const double C61790 = hry[77];
    const double C62340 = hry[78];
    const double C62890 = hry[79];
    const double C63440 = hry[80];
    const double C63990 = hry[81];
    const double C64540 = hry[82];
    const double C65090 = hry[83];
    const double C65640 = hry[84];
    const double C66190 = hry[85];
    const double C66740 = hry[86];
    const double C67290 = hry[87];
    const double C67840 = hry[88];
    const double C68390 = hry[89];
    const double C68940 = hry[90];
    const double C69490 = hry[91];
    const double C70040 = hry[92];
    const double C70590 = hry[93];
    const double C71140 = hry[94];
    const double C71690 = hry[95];
    const double C72240 = hry[96];
    const double C72790 = hry[97];
    const double C73340 = hry[98];
    const double C73890 = hry[99];
    const double C74440 = hry[100];
    const double C74990 = hry[101];
    const double C75540 = hry[102];
    const double C76090 = hry[103];
    const double C76640 = hry[104];
    const double C77190 = hry[105];
    const double C77740 = hry[106];
    const double C78290 = hry[107];
    const double C19623 = hrz[0];
    const double C20173 = hrz[1];
    const double C20723 = hrz[2];
    const double C21273 = hrz[3];
    const double C21823 = hrz[4];
    const double C22373 = hrz[5];
    const double C22923 = hrz[6];
    const double C23473 = hrz[7];
    const double C24023 = hrz[8];
    const double C24573 = hrz[9];
    const double C25123 = hrz[10];
    const double C25673 = hrz[11];
    const double C26223 = hrz[12];
    const double C26773 = hrz[13];
    const double C27323 = hrz[14];
    const double C27873 = hrz[15];
    const double C28423 = hrz[16];
    const double C28973 = hrz[17];
    const double C29523 = hrz[18];
    const double C30073 = hrz[19];
    const double C30623 = hrz[20];
    const double C31173 = hrz[21];
    const double C31723 = hrz[22];
    const double C32273 = hrz[23];
    const double C32823 = hrz[24];
    const double C33373 = hrz[25];
    const double C33923 = hrz[26];
    const double C34473 = hrz[27];
    const double C35023 = hrz[28];
    const double C35573 = hrz[29];
    const double C36123 = hrz[30];
    const double C36673 = hrz[31];
    const double C37223 = hrz[32];
    const double C37773 = hrz[33];
    const double C38323 = hrz[34];
    const double C38873 = hrz[35];
    const double C39423 = hrz[36];
    const double C39973 = hrz[37];
    const double C40523 = hrz[38];
    const double C41073 = hrz[39];
    const double C41623 = hrz[40];
    const double C42173 = hrz[41];
    const double C42723 = hrz[42];
    const double C43273 = hrz[43];
    const double C43823 = hrz[44];
    const double C44373 = hrz[45];
    const double C44923 = hrz[46];
    const double C45473 = hrz[47];
    const double C46023 = hrz[48];
    const double C46573 = hrz[49];
    const double C47123 = hrz[50];
    const double C47673 = hrz[51];
    const double C48223 = hrz[52];
    const double C48773 = hrz[53];
    const double C49323 = hrz[54];
    const double C49873 = hrz[55];
    const double C50423 = hrz[56];
    const double C50973 = hrz[57];
    const double C51523 = hrz[58];
    const double C52073 = hrz[59];
    const double C52623 = hrz[60];
    const double C53173 = hrz[61];
    const double C53723 = hrz[62];
    const double C54273 = hrz[63];
    const double C54823 = hrz[64];
    const double C55373 = hrz[65];
    const double C55923 = hrz[66];
    const double C56473 = hrz[67];
    const double C57023 = hrz[68];
    const double C57573 = hrz[69];
    const double C58123 = hrz[70];
    const double C58673 = hrz[71];
    const double C59223 = hrz[72];
    const double C59773 = hrz[73];
    const double C60323 = hrz[74];
    const double C60873 = hrz[75];
    const double C61423 = hrz[76];
    const double C61973 = hrz[77];
    const double C62523 = hrz[78];
    const double C63073 = hrz[79];
    const double C63623 = hrz[80];
    const double C64173 = hrz[81];
    const double C64723 = hrz[82];
    const double C65273 = hrz[83];
    const double C65823 = hrz[84];
    const double C66373 = hrz[85];
    const double C66923 = hrz[86];
    const double C67473 = hrz[87];
    const double C68023 = hrz[88];
    const double C68573 = hrz[89];
    const double C69123 = hrz[90];
    const double C69673 = hrz[91];
    const double C70223 = hrz[92];
    const double C70773 = hrz[93];
    const double C71323 = hrz[94];
    const double C71873 = hrz[95];
    const double C72423 = hrz[96];
    const double C72973 = hrz[97];
    const double C73523 = hrz[98];
    const double C74073 = hrz[99];
    const double C74623 = hrz[100];
    const double C75173 = hrz[101];
    const double C75723 = hrz[102];
    const double C76273 = hrz[103];
    const double C76823 = hrz[104];
    const double C77373 = hrz[105];
    const double C77923 = hrz[106];
    const double C78473 = hrz[107];
    gx[0] += std::sqrt(9.) * C53907;
    gy[0] += std::sqrt(9.) * C54090;
    gz[0] += std::sqrt(9.) * C54273;
    gx[1] += std::sqrt(9.) * C54457;
    gy[1] += std::sqrt(9.) * C54640;
    gz[1] += std::sqrt(9.) * C54823;
    gx[2] += std::sqrt(9.) * C55007;
    gy[2] += std::sqrt(9.) * C55190;
    gz[2] += std::sqrt(9.) * C55373;
    gx[3] += std::sqrt(9.) * C57207;
    gy[3] += std::sqrt(9.) * C57390;
    gz[3] += std::sqrt(9.) * C57573;
    gx[4] += std::sqrt(9.) * C57757;
    gy[4] += std::sqrt(9.) * C57940;
    gz[4] += std::sqrt(9.) * C58123;
    gx[5] += std::sqrt(9.) * C58307;
    gy[5] += std::sqrt(9.) * C58490;
    gz[5] += std::sqrt(9.) * C58673;
    gx[6] += std::sqrt(3.0) * C52257 -
             (std::sqrt(0.75) * C50607 + std::sqrt(0.75) * C48957);
    gy[6] += std::sqrt(3.0) * C52440 -
             (std::sqrt(0.75) * C50790 + std::sqrt(0.75) * C49140);
    gz[6] += std::sqrt(3.0) * C52623 -
             (std::sqrt(0.75) * C50973 + std::sqrt(0.75) * C49323);
    gx[7] += std::sqrt(3.0) * C52807 -
             (std::sqrt(0.75) * C51157 + std::sqrt(0.75) * C49507);
    gy[7] += std::sqrt(3.0) * C52990 -
             (std::sqrt(0.75) * C51340 + std::sqrt(0.75) * C49690);
    gz[7] += std::sqrt(3.0) * C53173 -
             (std::sqrt(0.75) * C51523 + std::sqrt(0.75) * C49873);
    gx[8] += std::sqrt(3.0) * C53357 -
             (std::sqrt(0.75) * C51707 + std::sqrt(0.75) * C50057);
    gy[8] += std::sqrt(3.0) * C53540 -
             (std::sqrt(0.75) * C51890 + std::sqrt(0.75) * C50240);
    gz[8] += std::sqrt(3.0) * C53723 -
             (std::sqrt(0.75) * C52073 + std::sqrt(0.75) * C50423);
    gx[9] += std::sqrt(9.) * C55557;
    gy[9] += std::sqrt(9.) * C55740;
    gz[9] += std::sqrt(9.) * C55923;
    gx[10] += std::sqrt(9.) * C56107;
    gy[10] += std::sqrt(9.) * C56290;
    gz[10] += std::sqrt(9.) * C56473;
    gx[11] += std::sqrt(9.) * C56657;
    gy[11] += std::sqrt(9.) * C56840;
    gz[11] += std::sqrt(9.) * C57023;
    gx[12] += std::sqrt(2.25) * C48957 - std::sqrt(2.25) * C50607;
    gy[12] += std::sqrt(2.25) * C49140 - std::sqrt(2.25) * C50790;
    gz[12] += std::sqrt(2.25) * C49323 - std::sqrt(2.25) * C50973;
    gx[13] += std::sqrt(2.25) * C49507 - std::sqrt(2.25) * C51157;
    gy[13] += std::sqrt(2.25) * C49690 - std::sqrt(2.25) * C51340;
    gz[13] += std::sqrt(2.25) * C49873 - std::sqrt(2.25) * C51523;
    gx[14] += std::sqrt(2.25) * C50057 - std::sqrt(2.25) * C51707;
    gy[14] += std::sqrt(2.25) * C50240 - std::sqrt(2.25) * C51890;
    gz[14] += std::sqrt(2.25) * C50423 - std::sqrt(2.25) * C52073;
    gx[15] += std::sqrt(9.) * C73707;
    gy[15] += std::sqrt(9.) * C73890;
    gz[15] += std::sqrt(9.) * C74073;
    gx[16] += std::sqrt(9.) * C74257;
    gy[16] += std::sqrt(9.) * C74440;
    gz[16] += std::sqrt(9.) * C74623;
    gx[17] += std::sqrt(9.) * C74807;
    gy[17] += std::sqrt(9.) * C74990;
    gz[17] += std::sqrt(9.) * C75173;
    gx[18] += std::sqrt(9.) * C77007;
    gy[18] += std::sqrt(9.) * C77190;
    gz[18] += std::sqrt(9.) * C77373;
    gx[19] += std::sqrt(9.) * C77557;
    gy[19] += std::sqrt(9.) * C77740;
    gz[19] += std::sqrt(9.) * C77923;
    gx[20] += std::sqrt(9.) * C78107;
    gy[20] += std::sqrt(9.) * C78290;
    gz[20] += std::sqrt(9.) * C78473;
    gx[21] += std::sqrt(3.0) * C72057 -
              (std::sqrt(0.75) * C70407 + std::sqrt(0.75) * C68757);
    gy[21] += std::sqrt(3.0) * C72240 -
              (std::sqrt(0.75) * C70590 + std::sqrt(0.75) * C68940);
    gz[21] += std::sqrt(3.0) * C72423 -
              (std::sqrt(0.75) * C70773 + std::sqrt(0.75) * C69123);
    gx[22] += std::sqrt(3.0) * C72607 -
              (std::sqrt(0.75) * C70957 + std::sqrt(0.75) * C69307);
    gy[22] += std::sqrt(3.0) * C72790 -
              (std::sqrt(0.75) * C71140 + std::sqrt(0.75) * C69490);
    gz[22] += std::sqrt(3.0) * C72973 -
              (std::sqrt(0.75) * C71323 + std::sqrt(0.75) * C69673);
    gx[23] += std::sqrt(3.0) * C73157 -
              (std::sqrt(0.75) * C71507 + std::sqrt(0.75) * C69857);
    gy[23] += std::sqrt(3.0) * C73340 -
              (std::sqrt(0.75) * C71690 + std::sqrt(0.75) * C70040);
    gz[23] += std::sqrt(3.0) * C73523 -
              (std::sqrt(0.75) * C71873 + std::sqrt(0.75) * C70223);
    gx[24] += std::sqrt(9.) * C75357;
    gy[24] += std::sqrt(9.) * C75540;
    gz[24] += std::sqrt(9.) * C75723;
    gx[25] += std::sqrt(9.) * C75907;
    gy[25] += std::sqrt(9.) * C76090;
    gz[25] += std::sqrt(9.) * C76273;
    gx[26] += std::sqrt(9.) * C76457;
    gy[26] += std::sqrt(9.) * C76640;
    gz[26] += std::sqrt(9.) * C76823;
    gx[27] += std::sqrt(2.25) * C68757 - std::sqrt(2.25) * C70407;
    gy[27] += std::sqrt(2.25) * C68940 - std::sqrt(2.25) * C70590;
    gz[27] += std::sqrt(2.25) * C69123 - std::sqrt(2.25) * C70773;
    gx[28] += std::sqrt(2.25) * C69307 - std::sqrt(2.25) * C70957;
    gy[28] += std::sqrt(2.25) * C69490 - std::sqrt(2.25) * C71140;
    gz[28] += std::sqrt(2.25) * C69673 - std::sqrt(2.25) * C71323;
    gx[29] += std::sqrt(2.25) * C69857 - std::sqrt(2.25) * C71507;
    gy[29] += std::sqrt(2.25) * C70040 - std::sqrt(2.25) * C71690;
    gz[29] += std::sqrt(2.25) * C70223 - std::sqrt(2.25) * C71873;
    gx[30] += std::sqrt(3.0) * C44007 -
              (std::sqrt(0.75) * C34107 + std::sqrt(0.75) * C24207);
    gy[30] += std::sqrt(3.0) * C44190 -
              (std::sqrt(0.75) * C34290 + std::sqrt(0.75) * C24390);
    gz[30] += std::sqrt(3.0) * C44373 -
              (std::sqrt(0.75) * C34473 + std::sqrt(0.75) * C24573);
    gx[31] += std::sqrt(3.0) * C44557 -
              (std::sqrt(0.75) * C34657 + std::sqrt(0.75) * C24757);
    gy[31] += std::sqrt(3.0) * C44740 -
              (std::sqrt(0.75) * C34840 + std::sqrt(0.75) * C24940);
    gz[31] += std::sqrt(3.0) * C44923 -
              (std::sqrt(0.75) * C35023 + std::sqrt(0.75) * C25123);
    gx[32] += std::sqrt(3.0) * C45107 -
              (std::sqrt(0.75) * C35207 + std::sqrt(0.75) * C25307);
    gy[32] += std::sqrt(3.0) * C45290 -
              (std::sqrt(0.75) * C35390 + std::sqrt(0.75) * C25490);
    gz[32] += std::sqrt(3.0) * C45473 -
              (std::sqrt(0.75) * C35573 + std::sqrt(0.75) * C25673);
    gx[33] += std::sqrt(3.0) * C47307 -
              (std::sqrt(0.75) * C37407 + std::sqrt(0.75) * C27507);
    gy[33] += std::sqrt(3.0) * C47490 -
              (std::sqrt(0.75) * C37590 + std::sqrt(0.75) * C27690);
    gz[33] += std::sqrt(3.0) * C47673 -
              (std::sqrt(0.75) * C37773 + std::sqrt(0.75) * C27873);
    gx[34] += std::sqrt(3.0) * C47857 -
              (std::sqrt(0.75) * C37957 + std::sqrt(0.75) * C28057);
    gy[34] += std::sqrt(3.0) * C48040 -
              (std::sqrt(0.75) * C38140 + std::sqrt(0.75) * C28240);
    gz[34] += std::sqrt(3.0) * C48223 -
              (std::sqrt(0.75) * C38323 + std::sqrt(0.75) * C28423);
    gx[35] += std::sqrt(3.0) * C48407 -
              (std::sqrt(0.75) * C38507 + std::sqrt(0.75) * C28607);
    gy[35] += std::sqrt(3.0) * C48590 -
              (std::sqrt(0.75) * C38690 + std::sqrt(0.75) * C28790);
    gz[35] += std::sqrt(3.0) * C48773 -
              (std::sqrt(0.75) * C38873 + std::sqrt(0.75) * C28973);
    gx[36] += 0.25 * C19258 + 0.25 * C20907 - 0.5 * C22557 + 0.25 * C29157 +
              0.25 * C30807 - 0.5 * C32457 - 0.5 * C39057 - 0.5 * C40707 +
              C42357;
    gy[36] += 0.25 * C19440 + 0.25 * C21090 - 0.5 * C22740 + 0.25 * C29340 +
              0.25 * C30990 - 0.5 * C32640 - 0.5 * C39240 - 0.5 * C40890 +
              C42540;
    gz[36] += 0.25 * C19623 + 0.25 * C21273 - 0.5 * C22923 + 0.25 * C29523 +
              0.25 * C31173 - 0.5 * C32823 - 0.5 * C39423 - 0.5 * C41073 +
              C42723;
    gx[37] += 0.25 * C19807 + 0.25 * C21457 - 0.5 * C23107 + 0.25 * C29707 +
              0.25 * C31357 - 0.5 * C33007 - 0.5 * C39607 - 0.5 * C41257 +
              C42907;
    gy[37] += 0.25 * C19990 + 0.25 * C21640 - 0.5 * C23290 + 0.25 * C29890 +
              0.25 * C31540 - 0.5 * C33190 - 0.5 * C39790 - 0.5 * C41440 +
              C43090;
    gz[37] += 0.25 * C20173 + 0.25 * C21823 - 0.5 * C23473 + 0.25 * C30073 +
              0.25 * C31723 - 0.5 * C33373 - 0.5 * C39973 - 0.5 * C41623 +
              C43273;
    gx[38] += 0.25 * C20357 + 0.25 * C22007 - 0.5 * C23657 + 0.25 * C30257 +
              0.25 * C31907 - 0.5 * C33557 - 0.5 * C40157 - 0.5 * C41807 +
              C43457;
    gy[38] += 0.25 * C20540 + 0.25 * C22190 - 0.5 * C23840 + 0.25 * C30440 +
              0.25 * C32090 - 0.5 * C33740 - 0.5 * C40340 - 0.5 * C41990 +
              C43640;
    gz[38] += 0.25 * C20723 + 0.25 * C22373 - 0.5 * C24023 + 0.25 * C30623 +
              0.25 * C32273 - 0.5 * C33923 - 0.5 * C40523 - 0.5 * C42173 +
              C43823;
    gx[39] += std::sqrt(3.0) * C45657 -
              (std::sqrt(0.75) * C35757 + std::sqrt(0.75) * C25857);
    gy[39] += std::sqrt(3.0) * C45840 -
              (std::sqrt(0.75) * C35940 + std::sqrt(0.75) * C26040);
    gz[39] += std::sqrt(3.0) * C46023 -
              (std::sqrt(0.75) * C36123 + std::sqrt(0.75) * C26223);
    gx[40] += std::sqrt(3.0) * C46207 -
              (std::sqrt(0.75) * C36307 + std::sqrt(0.75) * C26407);
    gy[40] += std::sqrt(3.0) * C46390 -
              (std::sqrt(0.75) * C36490 + std::sqrt(0.75) * C26590);
    gz[40] += std::sqrt(3.0) * C46573 -
              (std::sqrt(0.75) * C36673 + std::sqrt(0.75) * C26773);
    gx[41] += std::sqrt(3.0) * C46757 -
              (std::sqrt(0.75) * C36857 + std::sqrt(0.75) * C26957);
    gy[41] += std::sqrt(3.0) * C46940 -
              (std::sqrt(0.75) * C37040 + std::sqrt(0.75) * C27140);
    gz[41] += std::sqrt(3.0) * C47123 -
              (std::sqrt(0.75) * C37223 + std::sqrt(0.75) * C27323);
    gx[42] += std::sqrt(0.1875) * C20907 - std::sqrt(0.1875) * C19258 -
              std::sqrt(0.1875) * C29157 + std::sqrt(0.1875) * C30807 +
              std::sqrt(0.75) * C39057 - std::sqrt(0.75) * C40707;
    gy[42] += std::sqrt(0.1875) * C21090 - std::sqrt(0.1875) * C19440 -
              std::sqrt(0.1875) * C29340 + std::sqrt(0.1875) * C30990 +
              std::sqrt(0.75) * C39240 - std::sqrt(0.75) * C40890;
    gz[42] += std::sqrt(0.1875) * C21273 - std::sqrt(0.1875) * C19623 -
              std::sqrt(0.1875) * C29523 + std::sqrt(0.1875) * C31173 +
              std::sqrt(0.75) * C39423 - std::sqrt(0.75) * C41073;
    gx[43] += std::sqrt(0.1875) * C21457 - std::sqrt(0.1875) * C19807 -
              std::sqrt(0.1875) * C29707 + std::sqrt(0.1875) * C31357 +
              std::sqrt(0.75) * C39607 - std::sqrt(0.75) * C41257;
    gy[43] += std::sqrt(0.1875) * C21640 - std::sqrt(0.1875) * C19990 -
              std::sqrt(0.1875) * C29890 + std::sqrt(0.1875) * C31540 +
              std::sqrt(0.75) * C39790 - std::sqrt(0.75) * C41440;
    gz[43] += std::sqrt(0.1875) * C21823 - std::sqrt(0.1875) * C20173 -
              std::sqrt(0.1875) * C30073 + std::sqrt(0.1875) * C31723 +
              std::sqrt(0.75) * C39973 - std::sqrt(0.75) * C41623;
    gx[44] += std::sqrt(0.1875) * C22007 - std::sqrt(0.1875) * C20357 -
              std::sqrt(0.1875) * C30257 + std::sqrt(0.1875) * C31907 +
              std::sqrt(0.75) * C40157 - std::sqrt(0.75) * C41807;
    gy[44] += std::sqrt(0.1875) * C22190 - std::sqrt(0.1875) * C20540 -
              std::sqrt(0.1875) * C30440 + std::sqrt(0.1875) * C32090 +
              std::sqrt(0.75) * C40340 - std::sqrt(0.75) * C41990;
    gz[44] += std::sqrt(0.1875) * C22373 - std::sqrt(0.1875) * C20723 -
              std::sqrt(0.1875) * C30623 + std::sqrt(0.1875) * C32273 +
              std::sqrt(0.75) * C40523 - std::sqrt(0.75) * C42173;
    gx[45] += std::sqrt(9.) * C63807;
    gy[45] += std::sqrt(9.) * C63990;
    gz[45] += std::sqrt(9.) * C64173;
    gx[46] += std::sqrt(9.) * C64357;
    gy[46] += std::sqrt(9.) * C64540;
    gz[46] += std::sqrt(9.) * C64723;
    gx[47] += std::sqrt(9.) * C64907;
    gy[47] += std::sqrt(9.) * C65090;
    gz[47] += std::sqrt(9.) * C65273;
    gx[48] += std::sqrt(9.) * C67107;
    gy[48] += std::sqrt(9.) * C67290;
    gz[48] += std::sqrt(9.) * C67473;
    gx[49] += std::sqrt(9.) * C67657;
    gy[49] += std::sqrt(9.) * C67840;
    gz[49] += std::sqrt(9.) * C68023;
    gx[50] += std::sqrt(9.) * C68207;
    gy[50] += std::sqrt(9.) * C68390;
    gz[50] += std::sqrt(9.) * C68573;
    gx[51] += std::sqrt(3.0) * C62157 -
              (std::sqrt(0.75) * C60507 + std::sqrt(0.75) * C58857);
    gy[51] += std::sqrt(3.0) * C62340 -
              (std::sqrt(0.75) * C60690 + std::sqrt(0.75) * C59040);
    gz[51] += std::sqrt(3.0) * C62523 -
              (std::sqrt(0.75) * C60873 + std::sqrt(0.75) * C59223);
    gx[52] += std::sqrt(3.0) * C62707 -
              (std::sqrt(0.75) * C61057 + std::sqrt(0.75) * C59407);
    gy[52] += std::sqrt(3.0) * C62890 -
              (std::sqrt(0.75) * C61240 + std::sqrt(0.75) * C59590);
    gz[52] += std::sqrt(3.0) * C63073 -
              (std::sqrt(0.75) * C61423 + std::sqrt(0.75) * C59773);
    gx[53] += std::sqrt(3.0) * C63257 -
              (std::sqrt(0.75) * C61607 + std::sqrt(0.75) * C59957);
    gy[53] += std::sqrt(3.0) * C63440 -
              (std::sqrt(0.75) * C61790 + std::sqrt(0.75) * C60140);
    gz[53] += std::sqrt(3.0) * C63623 -
              (std::sqrt(0.75) * C61973 + std::sqrt(0.75) * C60323);
    gx[54] += std::sqrt(9.) * C65457;
    gy[54] += std::sqrt(9.) * C65640;
    gz[54] += std::sqrt(9.) * C65823;
    gx[55] += std::sqrt(9.) * C66007;
    gy[55] += std::sqrt(9.) * C66190;
    gz[55] += std::sqrt(9.) * C66373;
    gx[56] += std::sqrt(9.) * C66557;
    gy[56] += std::sqrt(9.) * C66740;
    gz[56] += std::sqrt(9.) * C66923;
    gx[57] += std::sqrt(2.25) * C58857 - std::sqrt(2.25) * C60507;
    gy[57] += std::sqrt(2.25) * C59040 - std::sqrt(2.25) * C60690;
    gz[57] += std::sqrt(2.25) * C59223 - std::sqrt(2.25) * C60873;
    gx[58] += std::sqrt(2.25) * C59407 - std::sqrt(2.25) * C61057;
    gy[58] += std::sqrt(2.25) * C59590 - std::sqrt(2.25) * C61240;
    gz[58] += std::sqrt(2.25) * C59773 - std::sqrt(2.25) * C61423;
    gx[59] += std::sqrt(2.25) * C59957 - std::sqrt(2.25) * C61607;
    gy[59] += std::sqrt(2.25) * C60140 - std::sqrt(2.25) * C61790;
    gz[59] += std::sqrt(2.25) * C60323 - std::sqrt(2.25) * C61973;
    gx[60] += std::sqrt(2.25) * C24207 - std::sqrt(2.25) * C34107;
    gy[60] += std::sqrt(2.25) * C24390 - std::sqrt(2.25) * C34290;
    gz[60] += std::sqrt(2.25) * C24573 - std::sqrt(2.25) * C34473;
    gx[61] += std::sqrt(2.25) * C24757 - std::sqrt(2.25) * C34657;
    gy[61] += std::sqrt(2.25) * C24940 - std::sqrt(2.25) * C34840;
    gz[61] += std::sqrt(2.25) * C25123 - std::sqrt(2.25) * C35023;
    gx[62] += std::sqrt(2.25) * C25307 - std::sqrt(2.25) * C35207;
    gy[62] += std::sqrt(2.25) * C25490 - std::sqrt(2.25) * C35390;
    gz[62] += std::sqrt(2.25) * C25673 - std::sqrt(2.25) * C35573;
    gx[63] += std::sqrt(2.25) * C27507 - std::sqrt(2.25) * C37407;
    gy[63] += std::sqrt(2.25) * C27690 - std::sqrt(2.25) * C37590;
    gz[63] += std::sqrt(2.25) * C27873 - std::sqrt(2.25) * C37773;
    gx[64] += std::sqrt(2.25) * C28057 - std::sqrt(2.25) * C37957;
    gy[64] += std::sqrt(2.25) * C28240 - std::sqrt(2.25) * C38140;
    gz[64] += std::sqrt(2.25) * C28423 - std::sqrt(2.25) * C38323;
    gx[65] += std::sqrt(2.25) * C28607 - std::sqrt(2.25) * C38507;
    gy[65] += std::sqrt(2.25) * C28790 - std::sqrt(2.25) * C38690;
    gz[65] += std::sqrt(2.25) * C28973 - std::sqrt(2.25) * C38873;
    gx[66] += std::sqrt(0.75) * C22557 -
              (std::sqrt(0.1875) * C20907 + std::sqrt(0.1875) * C19258) +
              std::sqrt(0.1875) * C29157 + std::sqrt(0.1875) * C30807 -
              std::sqrt(0.75) * C32457;
    gy[66] += std::sqrt(0.75) * C22740 -
              (std::sqrt(0.1875) * C21090 + std::sqrt(0.1875) * C19440) +
              std::sqrt(0.1875) * C29340 + std::sqrt(0.1875) * C30990 -
              std::sqrt(0.75) * C32640;
    gz[66] += std::sqrt(0.75) * C22923 -
              (std::sqrt(0.1875) * C21273 + std::sqrt(0.1875) * C19623) +
              std::sqrt(0.1875) * C29523 + std::sqrt(0.1875) * C31173 -
              std::sqrt(0.75) * C32823;
    gx[67] += std::sqrt(0.75) * C23107 -
              (std::sqrt(0.1875) * C21457 + std::sqrt(0.1875) * C19807) +
              std::sqrt(0.1875) * C29707 + std::sqrt(0.1875) * C31357 -
              std::sqrt(0.75) * C33007;
    gy[67] += std::sqrt(0.75) * C23290 -
              (std::sqrt(0.1875) * C21640 + std::sqrt(0.1875) * C19990) +
              std::sqrt(0.1875) * C29890 + std::sqrt(0.1875) * C31540 -
              std::sqrt(0.75) * C33190;
    gz[67] += std::sqrt(0.75) * C23473 -
              (std::sqrt(0.1875) * C21823 + std::sqrt(0.1875) * C20173) +
              std::sqrt(0.1875) * C30073 + std::sqrt(0.1875) * C31723 -
              std::sqrt(0.75) * C33373;
    gx[68] += std::sqrt(0.75) * C23657 -
              (std::sqrt(0.1875) * C22007 + std::sqrt(0.1875) * C20357) +
              std::sqrt(0.1875) * C30257 + std::sqrt(0.1875) * C31907 -
              std::sqrt(0.75) * C33557;
    gy[68] += std::sqrt(0.75) * C23840 -
              (std::sqrt(0.1875) * C22190 + std::sqrt(0.1875) * C20540) +
              std::sqrt(0.1875) * C30440 + std::sqrt(0.1875) * C32090 -
              std::sqrt(0.75) * C33740;
    gz[68] += std::sqrt(0.75) * C24023 -
              (std::sqrt(0.1875) * C22373 + std::sqrt(0.1875) * C20723) +
              std::sqrt(0.1875) * C30623 + std::sqrt(0.1875) * C32273 -
              std::sqrt(0.75) * C33923;
    gx[69] += std::sqrt(2.25) * C25857 - std::sqrt(2.25) * C35757;
    gy[69] += std::sqrt(2.25) * C26040 - std::sqrt(2.25) * C35940;
    gz[69] += std::sqrt(2.25) * C26223 - std::sqrt(2.25) * C36123;
    gx[70] += std::sqrt(2.25) * C26407 - std::sqrt(2.25) * C36307;
    gy[70] += std::sqrt(2.25) * C26590 - std::sqrt(2.25) * C36490;
    gz[70] += std::sqrt(2.25) * C26773 - std::sqrt(2.25) * C36673;
    gx[71] += std::sqrt(2.25) * C26957 - std::sqrt(2.25) * C36857;
    gy[71] += std::sqrt(2.25) * C27140 - std::sqrt(2.25) * C37040;
    gz[71] += std::sqrt(2.25) * C27323 - std::sqrt(2.25) * C37223;
    gx[72] += std::sqrt(0.5625) * C19258 - std::sqrt(0.5625) * C20907 -
              std::sqrt(0.5625) * C29157 + std::sqrt(0.5625) * C30807;
    gy[72] += std::sqrt(0.5625) * C19440 - std::sqrt(0.5625) * C21090 -
              std::sqrt(0.5625) * C29340 + std::sqrt(0.5625) * C30990;
    gz[72] += std::sqrt(0.5625) * C19623 - std::sqrt(0.5625) * C21273 -
              std::sqrt(0.5625) * C29523 + std::sqrt(0.5625) * C31173;
    gx[73] += std::sqrt(0.5625) * C19807 - std::sqrt(0.5625) * C21457 -
              std::sqrt(0.5625) * C29707 + std::sqrt(0.5625) * C31357;
    gy[73] += std::sqrt(0.5625) * C19990 - std::sqrt(0.5625) * C21640 -
              std::sqrt(0.5625) * C29890 + std::sqrt(0.5625) * C31540;
    gz[73] += std::sqrt(0.5625) * C20173 - std::sqrt(0.5625) * C21823 -
              std::sqrt(0.5625) * C30073 + std::sqrt(0.5625) * C31723;
    gx[74] += std::sqrt(0.5625) * C20357 - std::sqrt(0.5625) * C22007 -
              std::sqrt(0.5625) * C30257 + std::sqrt(0.5625) * C31907;
    gy[74] += std::sqrt(0.5625) * C20540 - std::sqrt(0.5625) * C22190 -
              std::sqrt(0.5625) * C30440 + std::sqrt(0.5625) * C32090;
    gz[74] += std::sqrt(0.5625) * C20723 - std::sqrt(0.5625) * C22373 -
              std::sqrt(0.5625) * C30623 + std::sqrt(0.5625) * C32273;
}
