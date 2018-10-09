/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2100_3_vr(const double ae,
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
                            const double* const g,
                            double* const vrx,
                            double* const vry,
                            double* const vrz)
{
    const double xAB = xA - xB;
    const double yAB = yA - yB;
    const double zAB = zA - zB;
    const double xCD = xC - xD;
    const double yCD = yC - yD;
    const double zCD = zC - zD;
    const double p = ae + be;
    const double q = ce + de;
    const double muab = ae * be / p;
    const double mucd = ce * de / q;
    const double rAB2 = xAB * xAB + yAB * yAB + zAB * zAB;
    const double rCD2 = xCD * xCD + yCD * yCD + zCD * zCD;
    const double xP = (ae * xA + be * xB) / p;
    const double yP = (ae * yA + be * yB) / p;
    const double zP = (ae * zA + be * zB) / p;
    const double xQ = (ce * xC + de * xD) / q;
    const double yQ = (ce * yC + de * yD) / q;
    const double zQ = (ce * zC + de * zD) / q;
    const double kab = std::exp(-muab * rAB2);
    const double kcd = std::exp(-mucd * rCD2);
    const double C8870 = g[0];
    const double C8890 = g[1];
    const double C8932 = g[2];
    const double C8988 = g[3];
    const double C9044 = g[4];
    const double C9058 = g[5];
    const double C9073 = g[6];
    const double C9100 = g[7];
    const double C9116 = g[8];
    const double C9130 = g[9];
    const double C9251 = g[10];
    const double C9581 = g[11];
    const double C9662 = g[12];
    const double C8873 = p + q;
    const double C8872 = p * q;
    const double C10166 = bs[4];
    const double C10165 = bs[3];
    const double C10164 = bs[2];
    const double C10162 = std::pow(Pi, 2.5);
    const double C10161 = ce * de;
    const double C10160 = bs[0];
    const double C10157 = bs[1];
    const double C10155 = zP - zQ;
    const double C10154 = be * zAB;
    const double C10153 = yP - yQ;
    const double C10152 = be * yAB;
    const double C10151 = 2 * p;
    const double C10149 = xP - xQ;
    const double C10148 = be * xAB;
    const double C8874 = C8873 * p;
    const double C10163 = std::sqrt(C8873);
    const double C10159 = q * C8873;
    const double C10158 = C8872 * ce;
    const double C10147 = C8873 * C8872;
    const double C10146 = ce * C8872;
    const double C10185 = 4 * C10162;
    const double C10184 = kab * C10161;
    const double C10175 = C10155 * C8872;
    const double C10174 = C10153 * C8872;
    const double C10172 = C10149 * C8872;
    const double C10186 = C8872 * C10163;
    const double C10183 = kab * C10158;
    const double C10190 = C9662 * C10146;
    const double C10187 = C9251 * C10146;
    const double C10182 = C9130 * C10146;
    const double C10181 = C9116 * C10146;
    const double C10179 = C9073 * C10146;
    const double C10178 = C9044 * C10146;
    const double C10177 = C8988 * C10146;
    const double C10176 = C8932 * C10146;
    const double C10171 = C8870 * C10146;
    const double C10203 = kcd * C10184;
    const double C10202 = kcd * C10183;
    const double C10207 = C10190 / C10147;
    const double C10204 = C10187 / C10147;
    const double C10201 = C10182 / C10147;
    const double C10200 = C10181 / C10147;
    const double C10198 = C10179 / C10147;
    const double C10197 = C10178 / C10147;
    const double C10196 = C10177 / C10147;
    const double C10195 = C10176 / C10147;
    const double C10193 = C10171 / C10147;
    const double C10219 = C10165 * C10203;
    const double C10217 = C10164 * C10203;
    const double C10215 = C10157 * C10203;
    const double C10213 = C10160 * C10203;
    const double C10218 = C10166 * C10202;
    const double C10216 = C10165 * C10202;
    const double C10214 = C10164 * C10202;
    const double C10212 = C10157 * C10202;
    const double C9255 =
        (((C10149 * C10218) / C10159 - (xCD * C10219) / q) * C10185) / C10186;
    const double C9687 =
        (((C10153 * C10218) / C10159 - (yCD * C10219) / q) * C10185) / C10186;
    const double C10110 =
        (((C10155 * C10218) / C10159 - (zCD * C10219) / q) * C10185) / C10186;
    const double C9105 =
        (((C10149 * C10216) / C10159 - (xCD * C10217) / q) * C10185) / C10186;
    const double C9543 =
        (((C10153 * C10216) / C10159 - (yCD * C10217) / q) * C10185) / C10186;
    const double C9968 =
        (((C10155 * C10216) / C10159 - (zCD * C10217) / q) * C10185) / C10186;
    const double C8895 =
        (((C10149 * C10214) / C10159 - (xCD * C10215) / q) * C10185) / C10186;
    const double C9327 =
        (((C10153 * C10214) / C10159 - (yCD * C10215) / q) * C10185) / C10186;
    const double C9752 =
        (((C10155 * C10214) / C10159 - (zCD * C10215) / q) * C10185) / C10186;
    const double C8894 =
        (((C10149 * C10212) / C10159 - (xCD * C10213) / q) * C10185) / C10186;
    const double C9326 =
        (((C10153 * C10212) / C10159 - (yCD * C10213) / q) * C10185) / C10186;
    const double C9751 =
        (((C10155 * C10212) / C10159 - (zCD * C10213) / q) * C10185) / C10186;
    const double C10156 = C9105 * C8872;
    const double C9104 =
        C10204 - (C9105 * C10148) / p - (C9255 * C10172) / C8874;
    const double C9161 = -((C9105 * C10152) / p + (C9255 * C10174) / C8874);
    const double C9201 = -((C9105 * C10154) / p + (C9255 * C10175) / C8874);
    const double C10168 = C9543 * C8872;
    const double C9557 = -((C9543 * C10148) / p + (C9687 * C10172) / C8874);
    const double C9586 =
        C10204 - (C9543 * C10152) / p - (C9687 * C10174) / C8874;
    const double C9626 = -((C9543 * C10154) / p + (C9687 * C10175) / C8874);
    const double C10170 = C9968 * C8872;
    const double C9982 = -((C9968 * C10148) / p + (C10110 * C10172) / C8874);
    const double C10010 = -((C9968 * C10152) / p + (C10110 * C10174) / C8874);
    const double C10050 =
        C10204 - (C9968 * C10154) / p - (C10110 * C10175) / C8874;
    const double C10150 = C8895 * C8872;
    const double C8879 =
        C10201 - (C8895 * C10148) / p - (C9105 * C10172) / C8874;
    const double C8951 = -((C8895 * C10152) / p + (C9105 * C10174) / C8874);
    const double C9007 = -((C8895 * C10154) / p + (C9105 * C10175) / C8874);
    const double C10167 = C9327 * C8872;
    const double C9311 = -((C9327 * C10148) / p + (C9543 * C10172) / C8874);
    const double C9382 =
        C10201 - (C9327 * C10152) / p - (C9543 * C10174) / C8874;
    const double C9437 = -((C9327 * C10154) / p + (C9543 * C10175) / C8874);
    const double C10169 = C9752 * C8872;
    const double C9736 = -((C9752 * C10148) / p + (C9968 * C10172) / C8874);
    const double C9807 = -((C9752 * C10152) / p + (C9968 * C10174) / C8874);
    const double C9862 =
        C10201 - (C9752 * C10154) / p - (C9968 * C10175) / C8874;
    const double C8878 =
        C10200 - (C8894 * C10148) / p - (C8895 * C10172) / C8874;
    const double C8950 = -((C8894 * C10152) / p + (C8895 * C10174) / C8874);
    const double C9006 = -((C8894 * C10154) / p + (C8895 * C10175) / C8874);
    const double C9310 = -((C9326 * C10148) / p + (C9327 * C10172) / C8874);
    const double C9381 =
        C10200 - (C9326 * C10152) / p - (C9327 * C10174) / C8874;
    const double C9436 = -((C9326 * C10154) / p + (C9327 * C10175) / C8874);
    const double C9735 = -((C9751 * C10148) / p + (C9752 * C10172) / C8874);
    const double C9806 = -((C9751 * C10152) / p + (C9752 * C10174) / C8874);
    const double C9861 =
        C10200 - (C9751 * C10154) / p - (C9752 * C10175) / C8874;
    const double C10180 = C10156 / C8874;
    const double C10189 = C10168 / C8874;
    const double C10192 = C10170 / C8874;
    const double C10173 = C10150 / C8874;
    const double C9062 = -((C9007 * C10152) / p + (C9201 * C10174) / C8874);
    const double C10188 = C10167 / C8874;
    const double C9490 =
        C10207 - (C9437 * C10152) / p - (C9626 * C10174) / C8874;
    const double C10191 = C10169 / C8874;
    const double C9915 = -((C9862 * C10152) / p + (C10050 * C10174) / C8874);
    const double C8499 =
        C10197 - (C8950 * C10148) / p - (C8951 * C10172) / C8874;
    const double C8522 =
        C10198 - (C9006 * C10148) / p - (C9007 * C10172) / C8874;
    const double C8544 = -((C9006 * C10152) / p + (C9007 * C10174) / C8874);
    const double C8641 = -((C9381 * C10148) / p + (C9382 * C10172) / C8874);
    const double C8664 = -((C9436 * C10148) / p + (C9437 * C10172) / C8874);
    const double C8686 =
        C10198 - (C9436 * C10152) / p - (C9437 * C10174) / C8874;
    const double C8783 = -((C9806 * C10148) / p + (C9807 * C10172) / C8874);
    const double C8806 = -((C9861 * C10148) / p + (C9862 * C10172) / C8874);
    const double C8828 = -((C9861 * C10152) / p + (C9862 * C10174) / C8874);
    const double C10199 = C8895 - C10180;
    const double C10206 = C9327 - C10189;
    const double C10209 = C9752 - C10192;
    const double C10194 = C8894 - C10173;
    const double C10205 = C9326 - C10188;
    const double C10208 = C9751 - C10191;
    const double C8514 = (C9058 * C10146) / C10147 - (C8544 * C10148) / p -
                         (C9062 * C10172) / C8874;
    const double C8656 = -((C8686 * C10148) / p + (C9490 * C10172) / C8874);
    const double C8798 = -((C8828 * C10148) / p + (C9915 * C10172) / C8874);
    const double C10211 = C10199 / C10151;
    const double C10221 = C10206 / C10151;
    const double C10223 = C10209 / C10151;
    const double C10210 = C10194 / C10151;
    const double C10220 = C10205 / C10151;
    const double C10222 = C10208 / C10151;
    const double C8877 = (C9100 * C10146) / C10147 - (C8879 * C10148) / p -
                         (C9104 * C10172) / C8874 + C10211;
    const double C8936 =
        C10211 - ((C8951 * C10152) / p + (C9161 * C10174) / C8874);
    const double C8992 =
        C10211 - ((C9007 * C10154) / p + (C9201 * C10175) / C8874);
    const double C9312 =
        C10221 - ((C9311 * C10148) / p + (C9557 * C10172) / C8874);
    const double C9367 = (C9581 * C10146) / C10147 - (C9382 * C10152) / p -
                         (C9586 * C10174) / C8874 + C10221;
    const double C9422 =
        C10221 - ((C9437 * C10154) / p + (C9626 * C10175) / C8874);
    const double C9737 =
        C10223 - ((C9736 * C10148) / p + (C9982 * C10172) / C8874);
    const double C9792 =
        C10223 - ((C9807 * C10152) / p + (C10010 * C10174) / C8874);
    const double C9847 =
        C10207 - (C9862 * C10154) / p - (C10050 * C10175) / C8874 + C10223;
    const double C8425 = (C8890 * C10146) / C10147 - (C8878 * C10148) / p -
                         (C8879 * C10172) / C8874 + C10210;
    const double C8450 =
        C10210 - ((C8950 * C10152) / p + (C8951 * C10174) / C8874);
    const double C8475 =
        C10210 - ((C9006 * C10154) / p + (C9007 * C10175) / C8874);
    const double C8567 =
        C10220 - ((C9310 * C10148) / p + (C9311 * C10172) / C8874);
    const double C8592 =
        C10197 - (C9381 * C10152) / p - (C9382 * C10174) / C8874 + C10220;
    const double C8617 =
        C10220 - ((C9436 * C10154) / p + (C9437 * C10175) / C8874);
    const double C8709 =
        C10222 - ((C9735 * C10148) / p + (C9736 * C10172) / C8874);
    const double C8734 =
        C10222 - ((C9806 * C10152) / p + (C9807 * C10174) / C8874);
    const double C8759 =
        C10198 - (C9861 * C10154) / p - (C9862 * C10175) / C8874 + C10222;
    const double C8424 = C10193 - (C8425 * C10148) / p -
                         (C8877 * C10172) / C8874 +
                         (C8878 - (C8879 * C8872) / C8874) / p;
    const double C8433 = -((C8425 * C10152) / p + (C8877 * C10174) / C8874);
    const double C8441 = -((C8425 * C10154) / p + (C8877 * C10175) / C8874);
    const double C8449 =
        C10195 - (C8450 * C10148) / p - (C8936 * C10172) / C8874;
    const double C8458 = (C8950 - (C8951 * C8872) / C8874) / p -
                         ((C8450 * C10152) / p + (C8936 * C10174) / C8874);
    const double C8466 = -((C8450 * C10154) / p + (C8936 * C10175) / C8874);
    const double C8474 =
        C10196 - (C8475 * C10148) / p - (C8992 * C10172) / C8874;
    const double C8483 = -((C8475 * C10152) / p + (C8992 * C10174) / C8874);
    const double C8491 = (C9006 - (C9007 * C8872) / C8874) / p -
                         ((C8475 * C10154) / p + (C8992 * C10175) / C8874);
    const double C8566 = (C9310 - (C9311 * C8872) / C8874) / p -
                         ((C8567 * C10148) / p + (C9312 * C10172) / C8874);
    const double C8575 =
        C10193 - (C8567 * C10152) / p - (C9312 * C10174) / C8874;
    const double C8583 = -((C8567 * C10154) / p + (C9312 * C10175) / C8874);
    const double C8591 = -((C8592 * C10148) / p + (C9367 * C10172) / C8874);
    const double C8600 = C10195 - (C8592 * C10152) / p -
                         (C9367 * C10174) / C8874 +
                         (C9381 - (C9382 * C8872) / C8874) / p;
    const double C8608 = -((C8592 * C10154) / p + (C9367 * C10175) / C8874);
    const double C8616 = -((C8617 * C10148) / p + (C9422 * C10172) / C8874);
    const double C8625 =
        C10196 - (C8617 * C10152) / p - (C9422 * C10174) / C8874;
    const double C8633 = (C9436 - (C9437 * C8872) / C8874) / p -
                         ((C8617 * C10154) / p + (C9422 * C10175) / C8874);
    const double C8708 = (C9735 - (C9736 * C8872) / C8874) / p -
                         ((C8709 * C10148) / p + (C9737 * C10172) / C8874);
    const double C8717 = -((C8709 * C10152) / p + (C9737 * C10174) / C8874);
    const double C8725 =
        C10193 - (C8709 * C10154) / p - (C9737 * C10175) / C8874;
    const double C8733 = -((C8734 * C10148) / p + (C9792 * C10172) / C8874);
    const double C8742 = (C9806 - (C9807 * C8872) / C8874) / p -
                         ((C8734 * C10152) / p + (C9792 * C10174) / C8874);
    const double C8750 =
        C10195 - (C8734 * C10154) / p - (C9792 * C10175) / C8874;
    const double C8758 = -((C8759 * C10148) / p + (C9847 * C10172) / C8874);
    const double C8767 = -((C8759 * C10152) / p + (C9847 * C10174) / C8874);
    const double C8775 = C10196 - (C8759 * C10154) / p -
                         (C9847 * C10175) / C8874 +
                         (C9861 - (C9862 * C8872) / C8874) / p;
    vrx[0] = C8424;
    vrx[1] = C8425;
    vrx[2] = C8433;
    vrx[3] = C8441;
    vrx[4] = C8449;
    vrx[5] = C8450;
    vrx[6] = C8458;
    vrx[7] = C8466;
    vrx[8] = C8474;
    vrx[9] = C8475;
    vrx[10] = C8483;
    vrx[11] = C8491;
    vrx[12] = C8499;
    vrx[13] = C8514;
    vrx[14] = C8522;
    vrx[15] = C8544;
    vry[0] = C8566;
    vry[1] = C8567;
    vry[2] = C8575;
    vry[3] = C8583;
    vry[4] = C8591;
    vry[5] = C8592;
    vry[6] = C8600;
    vry[7] = C8608;
    vry[8] = C8616;
    vry[9] = C8617;
    vry[10] = C8625;
    vry[11] = C8633;
    vry[12] = C8641;
    vry[13] = C8656;
    vry[14] = C8664;
    vry[15] = C8686;
    vrz[0] = C8708;
    vrz[1] = C8709;
    vrz[2] = C8717;
    vrz[3] = C8725;
    vrz[4] = C8733;
    vrz[5] = C8734;
    vrz[6] = C8742;
    vrz[7] = C8750;
    vrz[8] = C8758;
    vrz[9] = C8759;
    vrz[10] = C8767;
    vrz[11] = C8775;
    vrz[12] = C8783;
    vrz[13] = C8798;
    vrz[14] = C8806;
    vrz[15] = C8828;
}
