/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2020_1_vr(const double ae,
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
    const double C19706 = g[18];
    const double C19723 = g[19];
    const double C19739 = g[20];
    const double C19888 = g[21];
    const double C19904 = g[22];
    const double C20052 = g[23];
    const double C20068 = g[24];
    const double C20201 = g[25];
    const double C20289 = g[28];
    const double C20319 = g[30];
    const double C20404 = g[31];
    const double C21274 = g[33];
    const double C21423 = g[34];
    const double C21766 = g[35];
    const double C22784 = g[36];
    const double C23291 = g[37];
    const double C23341 = g[38];
    const double C23356 = g[39];
    const double C23392 = g[40];
    const double C23393 = g[41];
    const double C23408 = g[42];
    const double C23424 = g[43];
    const double C23454 = g[44];
    const double C23485 = g[45];
    const double C23545 = g[46];
    const double C23632 = g[47];
    const double C23647 = g[48];
    const double C23677 = g[49];
    const double C23749 = g[50];
    const double C23764 = g[51];
    const double C23793 = g[52];
    const double C23809 = g[53];
    const double C23860 = g[54];
    const double C23876 = g[55];
    const double C23892 = g[56];
    const double C23923 = g[57];
    const double C24045 = g[58];
    const double C24061 = g[59];
    const double C24142 = g[60];
    const double C24420 = g[61];
    const double C24773 = g[62];
    const double C24904 = g[63];
    const double C24970 = g[64];
    const double C25875 = g[65];
    const double C23294 = p + q;
    const double C23293 = p * q;
    const double C25966 = bs[5];
    const double C25965 = bs[4];
    const double C25963 = bs[3];
    const double C25961 = bs[2];
    const double C25957 = std::pow(Pi, 2.5);
    const double C25954 = bs[1];
    const double C25953 = ae * be;
    const double C25952 = bs[0];
    const double C25951 = zP - zQ;
    const double C25950 = be * zAB;
    const double C25949 = yP - yQ;
    const double C25948 = be * yAB;
    const double C25947 = 2 * p;
    const double C25945 = xP - xQ;
    const double C25944 = std::pow(p, 2);
    const double C25942 = be * xAB;
    const double C25941 = ae / p;
    const double C23295 = C23294 * p;
    const double C25958 = std::sqrt(C23294);
    const double C25956 = p * C23294;
    const double C25955 = kab * C23293;
    const double C25943 = ae * C23293;
    const double C25987 = 4 * C25957;
    const double C25985 = kab * C25953;
    const double C25982 = C25951 * C23293;
    const double C25981 = C25949 * C23293;
    const double C25979 = C25945 * C23293;
    const double C25978 = C23294 * C25944;
    const double C25977 = C25941 - 1;
    const double C25988 = C23293 * C25958;
    const double C25986 = kcd * C25955;
    const double C26011 = C24904 * C25943;
    const double C26006 = C24142 * C25943;
    const double C26004 = C24045 * C25943;
    const double C26003 = C23923 * C25943;
    const double C26002 = C23892 * C25943;
    const double C26001 = C23876 * C25943;
    const double C25999 = C23809 * C25943;
    const double C25998 = C23764 * C25943;
    const double C25997 = C23749 * C25943;
    const double C25996 = C23677 * C25943;
    const double C25995 = C23632 * C25943;
    const double C25994 = C23545 * C25943;
    const double C25991 = C23424 * C25943;
    const double C25990 = C23408 * C25943;
    const double C25989 = C23393 * C25943;
    const double C25984 = C23356 * C25943;
    const double C25983 = C23341 * C25943;
    const double C26023 = kcd * C25985;
    const double C26065 = C25977 * C23356;
    const double C26058 = C25977 * C24045;
    const double C26054 = C25977 * C23809;
    const double C26051 = C25977 * C23677;
    const double C26049 = C25977 * C23545;
    const double C26047 = C25977 * C23408;
    const double C26043 = C25977 * C23393;
    const double C26041 = C25977 * C22784;
    const double C26039 = C25977 * C21423;
    const double C26037 = C25977 * C20052;
    const double C26035 = C25977 * C21274;
    const double C26033 = C25977 * C19888;
    const double C26029 = C25977 * C19739;
    const double C26027 = C25977 * C19723;
    const double C26025 = C25977 * C23392;
    const double C26021 = C25977 * C20289;
    const double C26019 = C25977 * C20201;
    const double C26060 = C25966 * C25986;
    const double C26057 = C25965 * C25986;
    const double C26053 = C25963 * C25986;
    const double C26045 = C25961 * C25986;
    const double C26024 = C25954 * C25986;
    const double C26066 = C26011 / C25978;
    const double C26059 = C26006 / C25978;
    const double C26055 = C26004 / C25978;
    const double C26052 = C26003 / C25978;
    const double C26050 = C26002 / C25978;
    const double C26048 = C26001 / C25978;
    const double C26044 = C25999 / C25978;
    const double C26042 = C25998 / C25978;
    const double C26040 = C25997 / C25978;
    const double C26038 = C25996 / C25978;
    const double C26036 = C25995 / C25978;
    const double C26034 = C25994 / C25978;
    const double C26030 = C25991 / C25978;
    const double C26028 = C25990 / C25978;
    const double C26026 = C25989 / C25978;
    const double C26022 = C25984 / C25978;
    const double C26020 = C25983 / C25978;
    const double C26085 = C25965 * C26023;
    const double C26083 = C25963 * C26023;
    const double C26080 = C25961 * C26023;
    const double C26077 = C25954 * C26023;
    const double C26074 = C25952 * C26023;
    const double C26086 = C26060 * ae;
    const double C26084 = C26057 * ae;
    const double C26081 = C26053 * ae;
    const double C26078 = C26045 * ae;
    const double C26075 = C26024 * ae;
    const double C24146 =
        -(((xAB * C26085) / p + (C25945 * C26086) / C25956) * C25987) / C25988;
    const double C25026 =
        -(((yAB * C26085) / p + (C25949 * C26086) / C25956) * C25987) / C25988;
    const double C25903 =
        -(((zAB * C26085) / p + (C25951 * C26086) / C25956) * C25987) / C25988;
    const double C24049 =
        -(((xAB * C26083) / p + (C25945 * C26084) / C25956) * C25987) / C25988;
    const double C24930 =
        -(((yAB * C26083) / p + (C25949 * C26084) / C25956) * C25987) / C25988;
    const double C25807 =
        -(((zAB * C26083) / p + (C25951 * C26084) / C25956) * C25987) / C25988;
    const double C23813 =
        -(((xAB * C26080) / p + (C25945 * C26081) / C25956) * C25987) / C25988;
    const double C24704 =
        -(((yAB * C26080) / p + (C25949 * C26081) / C25956) * C25987) / C25988;
    const double C25583 =
        -(((zAB * C26080) / p + (C25951 * C26081) / C25956) * C25987) / C25988;
    const double C23299 =
        -(((xAB * C26077) / p + (C25945 * C26078) / C25956) * C25987) / C25988;
    const double C24197 =
        -(((yAB * C26077) / p + (C25949 * C26078) / C25956) * C25987) / C25988;
    const double C25077 =
        -(((zAB * C26077) / p + (C25951 * C26078) / C25956) * C25987) / C25988;
    const double C19710 =
        -(((xAB * C26074) / p + (C25945 * C26075) / C25956) * C25987) / C25988;
    const double C21041 =
        -(((yAB * C26074) / p + (C25949 * C26075) / C25956) * C25987) / C25988;
    const double C22361 =
        -(((zAB * C26074) / p + (C25951 * C26075) / C25956) * C25987) / C25988;
    const double C25964 = C24049 * C23293;
    const double C24065 =
        C26058 - (C24049 * C25942) / p - C26059 - (C24146 * C25979) / C23295;
    const double C24080 = -((C24049 * C25948) / p + (C24146 * C25981) / C23295);
    const double C24109 = -((C24049 * C25950) / p + (C24146 * C25982) / C23295);
    const double C25971 = C24930 * C23293;
    const double C24945 = -((C24930 * C25942) / p + (C25026 * C25979) / C23295);
    const double C24975 =
        C26058 - (C24930 * C25948) / p - C26059 - (C25026 * C25981) / C23295;
    const double C25004 = -((C24930 * C25950) / p + (C25026 * C25982) / C23295);
    const double C25976 = C25807 * C23293;
    const double C25822 = -((C25807 * C25942) / p + (C25903 * C25979) / C23295);
    const double C25851 = -((C25807 * C25948) / p + (C25903 * C25981) / C23295);
    const double C25881 =
        C26058 - (C25807 * C25950) / p - C26059 - (C25903 * C25982) / C23295;
    const double C25962 = C23813 * C23293;
    const double C23864 =
        C26054 - (C23813 * C25942) / p - C26055 - (C24049 * C25979) / C23295;
    const double C23911 = -((C23813 * C25948) / p + (C24049 * C25981) / C23295);
    const double C23942 = -((C23813 * C25950) / p + (C24049 * C25982) / C23295);
    const double C25970 = C24704 * C23293;
    const double C24747 = -((C24704 * C25942) / p + (C24930 * C25979) / C23295);
    const double C24778 =
        C26054 - (C24704 * C25948) / p - C26055 - (C24930 * C25981) / C23295;
    const double C24808 = -((C24704 * C25950) / p + (C24930 * C25982) / C23295);
    const double C25975 = C25583 * C23293;
    const double C25626 = -((C25583 * C25942) / p + (C25807 * C25979) / C23295);
    const double C25656 = -((C25583 * C25948) / p + (C25807 * C25981) / C23295);
    const double C25686 =
        C26054 - (C25583 * C25950) / p - C26055 - (C25807 * C25982) / C23295;
    const double C25946 = C23299 * C23293;
    const double C23298 =
        C26043 - (C23299 * C25942) / p - C26044 - (C23813 * C25979) / C23295;
    const double C23314 = -((C23299 * C25948) / p + (C23813 * C25981) / C23295);
    const double C23329 = -((C23299 * C25950) / p + (C23813 * C25982) / C23295);
    const double C25967 = C24197 * C23293;
    const double C24198 = -((C24197 * C25942) / p + (C24704 * C25979) / C23295);
    const double C24213 =
        C26043 - (C24197 * C25948) / p - C26044 - (C24704 * C25981) / C23295;
    const double C24228 = -((C24197 * C25950) / p + (C24704 * C25982) / C23295);
    const double C25972 = C25077 * C23293;
    const double C25078 = -((C25077 * C25942) / p + (C25583 * C25979) / C23295);
    const double C25093 = -((C25077 * C25948) / p + (C25583 * C25981) / C23295);
    const double C25108 =
        C26043 - (C25077 * C25950) / p - C26044 - (C25583 * C25982) / C23295;
    const double C19711 =
        C26025 - (C19710 * C25942) / p - C26026 - (C23299 * C25979) / C23295;
    const double C19921 = -((C19710 * C25948) / p + (C23299 * C25981) / C23295);
    const double C20114 = -((C19710 * C25950) / p + (C23299 * C25982) / C23295);
    const double C21042 = -((C21041 * C25942) / p + (C24197 * C25979) / C23295);
    const double C21248 =
        C26025 - (C21041 * C25948) / p - C26026 - (C24197 * C25981) / C23295;
    const double C21441 = -((C21041 * C25950) / p + (C24197 * C25982) / C23295);
    const double C22362 = -((C22361 * C25942) / p + (C25077 * C25979) / C23295);
    const double C22568 = -((C22361 * C25948) / p + (C25077 * C25981) / C23295);
    const double C22759 =
        C26025 - (C22361 * C25950) / p - C26026 - (C25077 * C25982) / C23295;
    const double C26005 = C25964 / C23295;
    const double C26012 = C25971 / C23295;
    const double C26017 = C25976 / C23295;
    const double C26000 = C25962 / C23295;
    const double C26010 = C25970 / C23295;
    const double C26016 = C25975 / C23295;
    const double C25980 = C25946 / C23295;
    const double C23797 = -((C23329 * C25948) / p + (C23942 * C25981) / C23295);
    const double C26007 = C25967 / C23295;
    const double C24682 =
        C26065 - (C24228 * C25948) / p - C26066 - (C24808 * C25981) / C23295;
    const double C26013 = C25972 / C23295;
    const double C25561 = -((C25108 * C25948) / p + (C25686 * C25981) / C23295);
    const double C19430 =
        C26019 - (C19921 * C25942) / p - C26020 - (C23314 * C25979) / C23295;
    const double C19524 =
        C26021 - (C20114 * C25942) / p - C26022 - (C23329 * C25979) / C23295;
    const double C19618 = -((C20114 * C25948) / p + (C23329 * C25981) / C23295);
    const double C20770 = -((C21248 * C25942) / p + (C24213 * C25979) / C23295);
    const double C20861 = -((C21441 * C25942) / p + (C24228 * C25979) / C23295);
    const double C20952 =
        C26021 - (C21441 * C25948) / p - C26022 - (C24228 * C25981) / C23295;
    const double C22090 = -((C22568 * C25942) / p + (C25093 * C25979) / C23295);
    const double C22181 = -((C22759 * C25942) / p + (C25108 * C25979) / C23295);
    const double C22272 = -((C22759 * C25948) / p + (C25108 * C25981) / C23295);
    const double C26056 = C23813 - C26005;
    const double C26067 = C24704 - C26012;
    const double C26072 = C25583 - C26017;
    const double C26046 = C23299 - C26000;
    const double C26064 = C24197 - C26010;
    const double C26071 = C25077 - C26016;
    const double C26018 = C19710 - C25980;
    const double C26061 = C21041 - C26007;
    const double C26068 = C22361 - C26013;
    const double C20263 = C25977 * C20404 - (C19618 * C25942) / p -
                          (C23793 * C25943) / C25978 -
                          (C23797 * C25979) / C23295;
    const double C21587 = -((C20952 * C25942) / p + (C24682 * C25979) / C23295);
    const double C22906 = -((C22272 * C25942) / p + (C25561 * C25979) / C23295);
    const double C26082 = C26056 / C25947;
    const double C26090 = C26067 / C25947;
    const double C26094 = C26072 / C25947;
    const double C26079 = C26046 / C25947;
    const double C26089 = C26064 / C25947;
    const double C26093 = C26071 / C25947;
    const double C26073 = C26018 / C25947;
    const double C26087 = C26061 / C25947;
    const double C26091 = C26068 / C25947;
    const double C23880 = C25977 * C23860 - (C23864 * C25942) / p -
                          (C24061 * C25943) / C25978 -
                          (C24065 * C25979) / C23295 + C26082;
    const double C23896 =
        C26082 - ((C23911 * C25948) / p + (C24080 * C25981) / C23295);
    const double C23927 =
        C26082 - ((C23942 * C25950) / p + (C24109 * C25982) / C23295);
    const double C24762 =
        C26090 - ((C24747 * C25942) / p + (C24945 * C25979) / C23295);
    const double C24793 = C25977 * C24773 - (C24778 * C25948) / p -
                          (C24970 * C25943) / C25978 -
                          (C24975 * C25981) / C23295 + C26090;
    const double C24823 =
        C26090 - ((C24808 * C25950) / p + (C25004 * C25982) / C23295);
    const double C25641 =
        C26094 - ((C25626 * C25942) / p + (C25822 * C25979) / C23295);
    const double C25671 =
        C26094 - ((C25656 * C25948) / p + (C25851 * C25981) / C23295);
    const double C25701 = C25977 * C24904 - (C25686 * C25950) / p -
                          (C25875 * C25943) / C25978 -
                          (C25881 * C25982) / C23295 + C26094;
    const double C23412 = C25977 * C23291 - (C23298 * C25942) / p -
                          (C23860 * C25943) / C25978 -
                          (C23864 * C25979) / C23295 + C26079;
    const double C23459 =
        C26079 - ((C23314 * C25948) / p + (C23911 * C25981) / C23295);
    const double C23490 =
        C26079 - ((C23329 * C25950) / p + (C23942 * C25982) / C23295);
    const double C24306 =
        C26089 - ((C24198 * C25942) / p + (C24747 * C25979) / C23295);
    const double C24350 = C25977 * C23341 - (C24213 * C25948) / p -
                          (C24773 * C25943) / C25978 -
                          (C24778 * C25981) / C23295 + C26089;
    const double C24380 =
        C26089 - ((C24228 * C25950) / p + (C24808 * C25982) / C23295);
    const double C25186 =
        C26093 - ((C25078 * C25942) / p + (C25626 * C25979) / C23295);
    const double C25230 =
        C26093 - ((C25093 * C25948) / p + (C25656 * C25981) / C23295);
    const double C25260 = C26065 - (C25108 * C25950) / p - C26066 -
                          (C25686 * C25982) / C23295 + C26093;
    const double C19132 = C25977 * C19706 - (C19711 * C25942) / p -
                          (C23291 * C25943) / C25978 -
                          (C23298 * C25979) / C23295 + C26073;
    const double C19230 =
        C26073 - ((C19921 * C25948) / p + (C23314 * C25981) / C23295);
    const double C19329 =
        C26073 - ((C20114 * C25950) / p + (C23329 * C25982) / C23295);
    const double C20482 =
        C26087 - ((C21042 * C25942) / p + (C24198 * C25979) / C23295);
    const double C20577 = C26019 - (C21248 * C25948) / p - C26020 -
                          (C24213 * C25981) / C23295 + C26087;
    const double C20673 =
        C26087 - ((C21441 * C25950) / p + (C24228 * C25982) / C23295);
    const double C21802 =
        C26091 - ((C22362 * C25942) / p + (C25078 * C25979) / C23295);
    const double C21897 =
        C26091 - ((C22568 * C25948) / p + (C25093 * C25981) / C23295);
    const double C21993 = C26021 - (C22759 * C25950) / p - C26022 -
                          (C25108 * C25982) / C23295 + C26091;
    const double C23428 = C26047 - (C23412 * C25942) / p - C26048 -
                          (C23880 * C25979) / C23295 +
                          (C23298 - (C23864 * C23293) / C23295) / p;
    const double C23533 = -((C23412 * C25950) / p + (C23880 * C25982) / C23295);
    const double C25959 = C23459 * C23293;
    const double C23458 =
        C26049 - (C23459 * C25942) / p - C26050 - (C23896 * C25979) / C23295;
    const double C23591 = (C23314 - (C23911 * C23293) / C23295) / p -
                          ((C23459 * C25948) / p + (C23896 * C25981) / C23295);
    const double C23651 = -((C23459 * C25950) / p + (C23896 * C25982) / C23295);
    const double C25960 = C23490 * C23293;
    const double C23489 =
        C26051 - (C23490 * C25942) / p - C26052 - (C23927 * C25979) / C23295;
    const double C23620 = -((C23490 * C25948) / p + (C23927 * C25981) / C23295);
    const double C23737 = (C23329 - (C23942 * C23293) / C23295) / p -
                          ((C23490 * C25950) / p + (C23927 * C25982) / C23295);
    const double C24321 = (C24198 - (C24747 * C23293) / C23295) / p -
                          ((C24306 * C25942) / p + (C24762 * C25979) / C23295);
    const double C24425 = -((C24306 * C25950) / p + (C24762 * C25982) / C23295);
    const double C25968 = C24350 * C23293;
    const double C24351 = -((C24350 * C25942) / p + (C24793 * C25979) / C23295);
    const double C24482 = C26049 - (C24350 * C25948) / p - C26050 -
                          (C24793 * C25981) / C23295 +
                          (C24213 - (C24778 * C23293) / C23295) / p;
    const double C24540 = -((C24350 * C25950) / p + (C24793 * C25982) / C23295);
    const double C25969 = C24380 * C23293;
    const double C24381 = -((C24380 * C25942) / p + (C24823 * C25979) / C23295);
    const double C24511 =
        C26051 - (C24380 * C25948) / p - C26052 - (C24823 * C25981) / C23295;
    const double C24625 = (C24228 - (C24808 * C23293) / C23295) / p -
                          ((C24380 * C25950) / p + (C24823 * C25982) / C23295);
    const double C25201 = (C25078 - (C25626 * C23293) / C23295) / p -
                          ((C25186 * C25942) / p + (C25641 * C25979) / C23295);
    const double C25304 =
        C26047 - (C25186 * C25950) / p - C26048 - (C25641 * C25982) / C23295;
    const double C25973 = C25230 * C23293;
    const double C25231 = -((C25230 * C25942) / p + (C25671 * C25979) / C23295);
    const double C25361 = (C25093 - (C25656 * C23293) / C23295) / p -
                          ((C25230 * C25948) / p + (C25671 * C25981) / C23295);
    const double C25419 =
        C26049 - (C25230 * C25950) / p - C26050 - (C25671 * C25982) / C23295;
    const double C25974 = C25260 * C23293;
    const double C25261 = -((C25260 * C25942) / p + (C25701 * C25979) / C23295);
    const double C25390 = -((C25260 * C25948) / p + (C25701 * C25981) / C23295);
    const double C25504 = C26051 - (C25260 * C25950) / p - C26052 -
                          (C25701 * C25982) / C23295 +
                          (C25108 - (C25686 * C23293) / C23295) / p;
    const double C19727 = C26027 - (C19132 * C25942) / p - C26028 -
                          (C23412 * C25979) / C23295 +
                          (C19711 - (C23298 * C23293) / C23295) / p;
    const double C19758 = -((C19132 * C25948) / p + (C23412 * C25981) / C23295);
    const double C19788 = -((C19132 * C25950) / p + (C23412 * C25982) / C23295);
    const double C19892 =
        C26033 - (C19230 * C25942) / p - C26034 - (C23459 * C25979) / C23295;
    const double C19936 = (C19921 - (C23314 * C23293) / C23295) / p -
                          ((C19230 * C25948) / p + (C23459 * C25981) / C23295);
    const double C19966 = -((C19230 * C25950) / p + (C23459 * C25982) / C23295);
    const double C20056 =
        C26037 - (C19329 * C25942) / p - C26038 - (C23490 * C25979) / C23295;
    const double C20086 = -((C19329 * C25948) / p + (C23490 * C25981) / C23295);
    const double C20129 = (C20114 - (C23329 * C23293) / C23295) / p -
                          ((C19329 * C25950) / p + (C23490 * C25982) / C23295);
    const double C21057 = (C21042 - (C24198 * C23293) / C23295) / p -
                          ((C20482 * C25942) / p + (C24306 * C25979) / C23295);
    const double C21087 =
        C26027 - (C20482 * C25948) / p - C26028 - (C24306 * C25981) / C23295;
    const double C21117 = -((C20482 * C25950) / p + (C24306 * C25982) / C23295);
    const double C21220 = -((C20577 * C25942) / p + (C24350 * C25979) / C23295);
    const double C21263 = C26033 - (C20577 * C25948) / p - C26034 -
                          (C24350 * C25981) / C23295 +
                          (C21248 - (C24213 * C23293) / C23295) / p;
    const double C21294 = -((C20577 * C25950) / p + (C24350 * C25982) / C23295);
    const double C21383 = -((C20673 * C25942) / p + (C24380 * C25979) / C23295);
    const double C21412 =
        C26037 - (C20673 * C25948) / p - C26038 - (C24380 * C25981) / C23295;
    const double C21456 = (C21441 - (C24228 * C23293) / C23295) / p -
                          ((C20673 * C25950) / p + (C24380 * C25982) / C23295);
    const double C22377 = (C22362 - (C25078 * C23293) / C23295) / p -
                          ((C21802 * C25942) / p + (C25186 * C25979) / C23295);
    const double C22407 = -((C21802 * C25948) / p + (C25186 * C25981) / C23295);
    const double C22437 =
        C26027 - (C21802 * C25950) / p - C26028 - (C25186 * C25982) / C23295;
    const double C22540 = -((C21897 * C25942) / p + (C25230 * C25979) / C23295);
    const double C22583 = (C22568 - (C25093 * C23293) / C23295) / p -
                          ((C21897 * C25948) / p + (C25230 * C25981) / C23295);
    const double C22613 =
        C26033 - (C21897 * C25950) / p - C26034 - (C25230 * C25982) / C23295;
    const double C22702 = -((C21993 * C25942) / p + (C25260 * C25979) / C23295);
    const double C22731 = -((C21993 * C25948) / p + (C25260 * C25981) / C23295);
    const double C22774 = C26037 - (C21993 * C25950) / p - C26038 -
                          (C25260 * C25982) / C23295 +
                          (C22759 - (C25108 * C23293) / C23295) / p;
    const double C25992 = C25959 / C23295;
    const double C25993 = C25960 / C23295;
    const double C26008 = C25968 / C23295;
    const double C26009 = C25969 / C23295;
    const double C26014 = C25973 / C23295;
    const double C26015 = C25974 / C23295;
    const double C19743 = C26029 - (C19727 * C25942) / p - C26030 -
                          (C23428 * C25979) / C23295 +
                          (3 * (C19132 - (C23412 * C23293) / C23295)) / C25947;
    const double C19832 = -((C19727 * C25948) / p + (C23428 * C25981) / C23295);
    const double C19861 = -((C19727 * C25950) / p + (C23428 * C25982) / C23295);
    const double C19876 = -((C19788 * C25948) / p + (C23533 * C25981) / C23295);
    const double C19996 =
        C26035 - (C19936 * C25942) / p - C26036 - (C23591 * C25979) / C23295;
    const double C20040 = -((C19936 * C25950) / p + (C23591 * C25982) / C23295);
    const double C20011 = C25977 * C21766 - (C19966 * C25942) / p -
                          (C23647 * C25943) / C25978 -
                          (C23651 * C25979) / C23295;
    const double C20159 =
        C26039 - (C20086 * C25942) / p - C26040 - (C23620 * C25979) / C23295;
    const double C20174 =
        C26041 - (C20129 * C25942) / p - C26042 - (C23737 * C25979) / C23295;
    const double C20189 = -((C20129 * C25948) / p + (C23737 * C25981) / C23295);
    const double C21072 = (3 * (C20482 - (C24306 * C23293) / C23295)) / C25947 -
                          ((C21057 * C25942) / p + (C24321 * C25979) / C23295);
    const double C21161 =
        C26029 - (C21057 * C25948) / p - C26030 - (C24321 * C25981) / C23295;
    const double C21190 = -((C21057 * C25950) / p + (C24321 * C25982) / C23295);
    const double C21205 = C25977 * C20319 - (C21117 * C25948) / p -
                          (C24420 * C25943) / C25978 -
                          (C24425 * C25981) / C23295;
    const double C21324 = -((C21263 * C25942) / p + (C24482 * C25979) / C23295);
    const double C21368 = -((C21263 * C25950) / p + (C24482 * C25982) / C23295);
    const double C21339 = -((C21294 * C25942) / p + (C24540 * C25979) / C23295);
    const double C21486 = -((C21412 * C25942) / p + (C24511 * C25979) / C23295);
    const double C21501 = -((C21456 * C25942) / p + (C24625 * C25979) / C23295);
    const double C21516 =
        C26041 - (C21456 * C25948) / p - C26042 - (C24625 * C25981) / C23295;
    const double C22392 = (3 * (C21802 - (C25186 * C23293) / C23295)) / C25947 -
                          ((C22377 * C25942) / p + (C25201 * C25979) / C23295);
    const double C22481 = -((C22377 * C25948) / p + (C25201 * C25981) / C23295);
    const double C22510 =
        C26029 - (C22377 * C25950) / p - C26030 - (C25201 * C25982) / C23295;
    const double C22525 = -((C22437 * C25948) / p + (C25304 * C25981) / C23295);
    const double C22643 = -((C22583 * C25942) / p + (C25361 * C25979) / C23295);
    const double C22687 =
        C26035 - (C22583 * C25950) / p - C26036 - (C25361 * C25982) / C23295;
    const double C22658 = -((C22613 * C25942) / p + (C25419 * C25979) / C23295);
    const double C22805 = -((C22731 * C25942) / p + (C25390 * C25979) / C23295);
    const double C22820 = -((C22774 * C25942) / p + (C25504 * C25979) / C23295);
    const double C22835 = -((C22774 * C25948) / p + (C25504 * C25981) / C23295);
    const double C26031 = C19230 - C25992;
    const double C26032 = C19329 - C25993;
    const double C26062 = C20577 - C26008;
    const double C26063 = C20673 - C26009;
    const double C26069 = C21897 - C26014;
    const double C26070 = C21993 - C26015;
    const double C19773 = C25977 * C19904 - (C19892 * C25942) / p -
                          (C23454 * C25943) / C25978 -
                          (C23458 * C25979) / C23295 + C26031 / C25947;
    const double C19951 = (3 * C26031) / C25947 -
                          ((C19936 * C25948) / p + (C23591 * C25981) / C23295);
    const double C26076 = C26032 / C25947;
    const double C20144 = (3 * C26032) / C25947 -
                          ((C20129 * C25950) / p + (C23737 * C25982) / C23295);
    const double C21102 =
        C26062 / C25947 - ((C21220 * C25942) / p + (C24351 * C25979) / C23295);
    const double C21279 = C26035 - (C21263 * C25948) / p - C26036 -
                          (C24482 * C25981) / C23295 + (3 * C26062) / C25947;
    const double C26088 = C26063 / C25947;
    const double C21471 = (3 * C26063) / C25947 -
                          ((C21456 * C25950) / p + (C24625 * C25982) / C23295);
    const double C22422 =
        C26069 / C25947 - ((C22540 * C25942) / p + (C25231 * C25979) / C23295);
    const double C22598 = (3 * C26069) / C25947 -
                          ((C22583 * C25948) / p + (C25361 * C25981) / C23295);
    const double C26092 = C26070 / C25947;
    const double C22790 = C26041 - (C22774 * C25950) / p - C26042 -
                          (C25504 * C25982) / C23295 + (3 * C26070) / C25947;
    const double C19803 = C25977 * C20068 - (C20056 * C25942) / p -
                          (C23485 * C25943) / C25978 -
                          (C23489 * C25979) / C23295 + C26076;
    const double C19981 =
        C26076 - ((C20086 * C25948) / p + (C23620 * C25981) / C23295);
    const double C21132 =
        C26088 - ((C21383 * C25942) / p + (C24381 * C25979) / C23295);
    const double C21309 = C26039 - (C21412 * C25948) / p - C26040 -
                          (C24511 * C25981) / C23295 + C26088;
    const double C22452 =
        C26092 - ((C22702 * C25942) / p + (C25261 * C25979) / C23295);
    const double C22628 =
        C26092 - ((C22731 * C25948) / p + (C25390 * C25981) / C23295);
    vrx[0] = C19132;
    vrx[1] = C19230;
    vrx[2] = C19329;
    vrx[3] = C19430;
    vrx[4] = C19524;
    vrx[5] = C19618;
    vrx[6] = C19710;
    vrx[7] = C19711;
    vrx[8] = C19727;
    vrx[9] = C19743;
    vrx[10] = C19758;
    vrx[11] = C19773;
    vrx[12] = C19788;
    vrx[13] = C19803;
    vrx[14] = C19832;
    vrx[15] = C19861;
    vrx[16] = C19876;
    vrx[17] = C19892;
    vrx[18] = C19921;
    vrx[19] = C19936;
    vrx[20] = C19951;
    vrx[21] = C19966;
    vrx[22] = C19981;
    vrx[23] = C19996;
    vrx[24] = C20011;
    vrx[25] = C20040;
    vrx[26] = C20056;
    vrx[27] = C20086;
    vrx[28] = C20114;
    vrx[29] = C20129;
    vrx[30] = C20144;
    vrx[31] = C20159;
    vrx[32] = C20174;
    vrx[33] = C20189;
    vrx[34] = C20263;
    vry[0] = C20482;
    vry[1] = C20577;
    vry[2] = C20673;
    vry[3] = C20770;
    vry[4] = C20861;
    vry[5] = C20952;
    vry[6] = C21041;
    vry[7] = C21042;
    vry[8] = C21057;
    vry[9] = C21072;
    vry[10] = C21087;
    vry[11] = C21102;
    vry[12] = C21117;
    vry[13] = C21132;
    vry[14] = C21161;
    vry[15] = C21190;
    vry[16] = C21205;
    vry[17] = C21220;
    vry[18] = C21248;
    vry[19] = C21263;
    vry[20] = C21279;
    vry[21] = C21294;
    vry[22] = C21309;
    vry[23] = C21324;
    vry[24] = C21339;
    vry[25] = C21368;
    vry[26] = C21383;
    vry[27] = C21412;
    vry[28] = C21441;
    vry[29] = C21456;
    vry[30] = C21471;
    vry[31] = C21486;
    vry[32] = C21501;
    vry[33] = C21516;
    vry[34] = C21587;
    vrz[0] = C21802;
    vrz[1] = C21897;
    vrz[2] = C21993;
    vrz[3] = C22090;
    vrz[4] = C22181;
    vrz[5] = C22272;
    vrz[6] = C22361;
    vrz[7] = C22362;
    vrz[8] = C22377;
    vrz[9] = C22392;
    vrz[10] = C22407;
    vrz[11] = C22422;
    vrz[12] = C22437;
    vrz[13] = C22452;
    vrz[14] = C22481;
    vrz[15] = C22510;
    vrz[16] = C22525;
    vrz[17] = C22540;
    vrz[18] = C22568;
    vrz[19] = C22583;
    vrz[20] = C22598;
    vrz[21] = C22613;
    vrz[22] = C22628;
    vrz[23] = C22643;
    vrz[24] = C22658;
    vrz[25] = C22687;
    vrz[26] = C22702;
    vrz[27] = C22731;
    vrz[28] = C22759;
    vrz[29] = C22774;
    vrz[30] = C22790;
    vrz[31] = C22805;
    vrz[32] = C22820;
    vrz[33] = C22835;
    vrz[34] = C22906;
}
