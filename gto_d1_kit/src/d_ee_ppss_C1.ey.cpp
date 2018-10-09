/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1100_3_vr(const double ae,
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
    const double C338 = g[0];
    const double C358 = g[1];
    const double C372 = g[2];
    const double C387 = g[3];
    const double C467 = g[4];
    const double C341 = p + q;
    const double C340 = p * q;
    const double C907 = bs[3];
    const double C906 = bs[2];
    const double C904 = std::pow(Pi, 2.5);
    const double C903 = ce * de;
    const double C902 = bs[0];
    const double C899 = bs[1];
    const double C898 = zP - zQ;
    const double C897 = be * zAB;
    const double C896 = yP - yQ;
    const double C895 = be * yAB;
    const double C894 = 2 * p;
    const double C892 = xP - xQ;
    const double C891 = be * xAB;
    const double C342 = C341 * p;
    const double C905 = std::sqrt(C341);
    const double C901 = q * C341;
    const double C900 = C340 * ce;
    const double C890 = C341 * C340;
    const double C889 = ce * C340;
    const double C920 = 4 * C904;
    const double C919 = kab * C903;
    const double C916 = C898 * C340;
    const double C915 = C896 * C340;
    const double C910 = C892 * C340;
    const double C921 = C340 * C905;
    const double C918 = kab * C900;
    const double C917 = C467 * C889;
    const double C914 = C387 * C889;
    const double C913 = C372 * C889;
    const double C912 = C358 * C889;
    const double C930 = kcd * C919;
    const double C929 = kcd * C918;
    const double C928 = C917 / C890;
    const double C927 = C914 / C890;
    const double C926 = C913 / C890;
    const double C925 = C912 / C890;
    const double C939 = C906 * C930;
    const double C937 = C899 * C930;
    const double C935 = C902 * C930;
    const double C938 = C907 * C929;
    const double C936 = C906 * C929;
    const double C934 = C899 * C929;
    const double C471 =
        (((C892 * C938) / C901 - (xCD * C939) / q) * C920) / C921;
    const double C669 =
        (((C896 * C938) / C901 - (yCD * C939) / q) * C920) / C921;
    const double C853 =
        (((C898 * C938) / C901 - (zCD * C939) / q) * C920) / C921;
    const double C347 =
        (((C892 * C936) / C901 - (xCD * C937) / q) * C920) / C921;
    const double C534 =
        (((C896 * C936) / C901 - (yCD * C937) / q) * C920) / C921;
    const double C718 =
        (((C898 * C936) / C901 - (zCD * C937) / q) * C920) / C921;
    const double C346 =
        (((C892 * C934) / C901 - (xCD * C935) / q) * C920) / C921;
    const double C533 =
        (((C896 * C934) / C901 - (yCD * C935) / q) * C920) / C921;
    const double C717 =
        (((C898 * C934) / C901 - (zCD * C935) / q) * C920) / C921;
    const double C893 = C347 * C340;
    const double C345 = C928 - (C347 * C891) / p - (C471 * C910) / C342;
    const double C376 = -((C347 * C895) / p + (C471 * C915) / C342);
    const double C391 = -((C347 * C897) / p + (C471 * C916) / C342);
    const double C908 = C534 * C340;
    const double C535 = -((C534 * C891) / p + (C669 * C910) / C342);
    const double C562 = C928 - (C534 * C895) / p - (C669 * C915) / C342;
    const double C576 = -((C534 * C897) / p + (C669 * C916) / C342);
    const double C909 = C718 * C340;
    const double C719 = -((C718 * C891) / p + (C853 * C910) / C342);
    const double C746 = -((C718 * C895) / p + (C853 * C915) / C342);
    const double C760 = C928 - (C718 * C897) / p - (C853 * C916) / C342;
    const double C111 = C925 - (C346 * C891) / p - (C347 * C910) / C342;
    const double C135 = -((C346 * C895) / p + (C347 * C915) / C342);
    const double C158 = -((C346 * C897) / p + (C347 * C916) / C342);
    const double C180 = -((C533 * C891) / p + (C534 * C910) / C342);
    const double C204 = C925 - (C533 * C895) / p - (C534 * C915) / C342;
    const double C227 = -((C533 * C897) / p + (C534 * C916) / C342);
    const double C249 = -((C717 * C891) / p + (C718 * C910) / C342);
    const double C273 = -((C717 * C895) / p + (C718 * C915) / C342);
    const double C296 = C925 - (C717 * C897) / p - (C718 * C916) / C342;
    const double C911 = C893 / C342;
    const double C922 = C908 / C342;
    const double C923 = C909 / C342;
    const double C119 = C926 - (C135 * C891) / p - (C376 * C910) / C342;
    const double C127 = C927 - (C158 * C891) / p - (C391 * C910) / C342;
    const double C150 = -((C158 * C895) / p + (C391 * C915) / C342);
    const double C188 = -((C204 * C891) / p + (C562 * C910) / C342);
    const double C196 = -((C227 * C891) / p + (C576 * C910) / C342);
    const double C219 = C927 - (C227 * C895) / p - (C576 * C915) / C342;
    const double C257 = -((C273 * C891) / p + (C746 * C910) / C342);
    const double C265 = -((C296 * C891) / p + (C760 * C910) / C342);
    const double C288 = -((C296 * C895) / p + (C760 * C915) / C342);
    const double C924 = C346 - C911;
    const double C931 = C533 - C922;
    const double C932 = C717 - C923;
    const double C933 = C924 / C894;
    const double C940 = C931 / C894;
    const double C941 = C932 / C894;
    const double C110 =
        (C338 * C889) / C890 - (C111 * C891) / p - (C345 * C910) / C342 + C933;
    const double C142 = C933 - ((C135 * C895) / p + (C376 * C915) / C342);
    const double C172 = C933 - ((C158 * C897) / p + (C391 * C916) / C342);
    const double C179 = C940 - ((C180 * C891) / p + (C535 * C910) / C342);
    const double C211 = C926 - (C204 * C895) / p - (C562 * C915) / C342 + C940;
    const double C241 = C940 - ((C227 * C897) / p + (C576 * C916) / C342);
    const double C248 = C941 - ((C249 * C891) / p + (C719 * C910) / C342);
    const double C280 = C941 - ((C273 * C895) / p + (C746 * C915) / C342);
    const double C310 = C927 - (C296 * C897) / p - (C760 * C916) / C342 + C941;
    vrx[0] = C110;
    vrx[1] = C111;
    vrx[2] = C119;
    vrx[3] = C127;
    vrx[4] = C135;
    vrx[5] = C142;
    vrx[6] = C150;
    vrx[7] = C158;
    vrx[8] = C172;
    vry[0] = C179;
    vry[1] = C180;
    vry[2] = C188;
    vry[3] = C196;
    vry[4] = C204;
    vry[5] = C211;
    vry[6] = C219;
    vry[7] = C227;
    vry[8] = C241;
    vrz[0] = C248;
    vrz[1] = C249;
    vrz[2] = C257;
    vrz[3] = C265;
    vrz[4] = C273;
    vrz[5] = C280;
    vrz[6] = C288;
    vrz[7] = C296;
    vrz[8] = C310;
}
