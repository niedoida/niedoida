/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2111_3_ints(const double ae,
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
                              double* const g)
{
    const double xAB = xA - xB;
    const double yAB = yA - yB;
    const double zAB = zA - zB;
    const double xCD = xC - xD;
    const double yCD = yC - yD;
    const double zCD = zC - zD;
    const double p = ae + be;
    const double q = ce + de;
    const double xP = (ae * xA + be * xB) / p;
    const double yP = (ae * yA + be * yB) / p;
    const double zP = (ae * zA + be * zB) / p;
    const double xQ = (ce * xC + de * xD) / q;
    const double yQ = (ce * yC + de * yD) / q;
    const double zQ = (ce * zC + de * zD) / q;
    const double muab = ae * be / p;
    const double mucd = ce * de / q;
    const double rAB2 = xAB * xAB + yAB * yAB + zAB * zAB;
    const double rCD2 = xCD * xCD + yCD * yCD + zCD * zCD;
    const double kab = std::exp(-muab * rAB2);
    const double kcd = std::exp(-mucd * rCD2);
    const double C23405 = de * zCD;
    const double C23404 = be * zAB;
    const double C23401 = de * yCD;
    const double C23400 = be * yAB;
    const double C23399 = de * xCD;
    const double C23398 = be * xAB;
    const double C23397 = 2 * q;
    const double C23449 = p + q;
    const double C23959 = p * q;
    const double C23958 = std::pow(Pi, 2.5);
    const double C23954 = zP - zQ;
    const double C23953 = yP - yQ;
    const double C23952 = 2 * p;
    const double C23950 = xP - xQ;
    const double C23428 = C23404 + C23405;
    const double C23427 = C23400 + C23401;
    const double C23426 = C23398 + C23399;
    const double C23960 = std::sqrt(C23449);
    const double C23972 = C23958 * kab;
    const double C23968 = C23954 * q;
    const double C23967 = C23953 * q;
    const double C23965 = C23950 * q;
    const double C23973 = C23959 * C23960;
    const double C23982 = C23972 * kcd;
    const double C18194 = (2. * C23982 * bs[1]) / C23973;
    const double C18937 = (2. * C23982 * bs[2]) / C23973;
    const double C19302 = (2. * C23982 * bs[3]) / C23973;
    const double C19484 = (2. * C23982 * bs[4]) / C23973;
    const double C19575 = (2. * C23982 * bs[5]) / C23973;
    const double C23455 = (2. * C23982 * bs[0]) / C23973;
    const double C23951 = C18194 * q;
    const double C23957 = C18937 * q;
    const double C18164 = -((C18194 * C23398) / p + (C18937 * C23965) / C23449);
    const double C18260 = -((C18194 * C23400) / p + (C18937 * C23967) / C23449);
    const double C18305 = -((C18194 * C23404) / p + (C18937 * C23968) / C23449);
    const double C23963 = C19302 * q;
    const double C18921 = -((C18937 * C23398) / p + (C19302 * C23965) / C23449);
    const double C20439 = -((C18937 * C23400) / p + (C19302 * C23967) / C23449);
    const double C20574 = -((C18937 * C23404) / p + (C19302 * C23968) / C23449);
    const double C23964 = C19484 * q;
    const double C19324 = -((C19302 * C23398) / p + (C19484 * C23965) / C23449);
    const double C20799 = -((C19302 * C23400) / p + (C19484 * C23967) / C23449);
    const double C22263 = -((C19302 * C23404) / p + (C19484 * C23968) / C23449);
    const double C19525 = -((C19484 * C23398) / p + (C19575 * C23965) / C23449);
    const double C20983 = -((C19484 * C23400) / p + (C19575 * C23967) / C23449);
    const double C22434 = -((C19484 * C23404) / p + (C19575 * C23968) / C23449);
    const double C11473 = -((C23455 * C23398) / p + (C18194 * C23965) / C23449);
    const double C12103 = -((C23455 * C23400) / p + (C18194 * C23967) / C23449);
    const double C12133 = -((C23455 * C23404) / p + (C18194 * C23968) / C23449);
    const double C23966 = C23951 / C23449;
    const double C23971 = C23957 / C23449;
    const double C23976 = C23963 / C23449;
    const double C18606 = -((C18305 * C23400) / p + (C20574 * C23967) / C23449);
    const double C23977 = C23964 / C23449;
    const double C23436 = C11473 / C23397;
    const double C23435 = C12103 / C23397;
    const double C10949 = -((C12103 * C23398) / p + (C18260 * C23965) / C23449);
    const double C23437 = C12133 / C23397;
    const double C11212 = -((C12133 * C23398) / p + (C18305 * C23965) / C23449);
    const double C11343 = -((C12133 * C23400) / p + (C18305 * C23967) / C23449);
    const double C23978 = C23455 - C23966;
    const double C23981 = C18194 - C23971;
    const double C23985 = C18937 - C23976;
    const double C23986 = C19302 - C23977;
    const double C23408 = C10949 / q;
    const double C23411 = C11212 / q;
    const double C23418 = C11343 / q;
    const double C11081 = -((C11343 * C23398) / p + (C18606 * C23965) / C23449);
    const double C23987 = C23978 / C23952;
    const double C23989 = C23981 / C23952;
    const double C23991 = C23985 / C23952;
    const double C23992 = C23986 / C23952;
    const double C23425 = C11081 * p;
    const double C9346 =
        C23987 - ((C11473 * C23398) / p + (C18164 * C23965) / C23449);
    const double C9894 =
        C23987 - ((C12103 * C23400) / p + (C18260 * C23967) / C23449);
    const double C10439 =
        C23987 - ((C12133 * C23404) / p + (C18305 * C23968) / C23449);
    const double C18145 =
        C23989 - ((C18164 * C23398) / p + (C18921 * C23965) / C23449);
    const double C18336 =
        C23989 - ((C18260 * C23400) / p + (C20439 * C23967) / C23449);
    const double C18485 =
        C23989 - ((C18305 * C23404) / p + (C20574 * C23968) / C23449);
    const double C18958 =
        C23991 - ((C18921 * C23398) / p + (C19324 * C23965) / C23449);
    const double C18986 =
        C23991 - ((C20439 * C23400) / p + (C20799 * C23967) / C23449);
    const double C19041 =
        C23991 - ((C20574 * C23404) / p + (C22263 * C23968) / C23449);
    const double C19393 =
        C23992 - ((C19324 * C23398) / p + (C19525 * C23965) / C23449);
    const double C19422 =
        C23992 - ((C20799 * C23400) / p + (C20983 * C23967) / C23449);
    const double C19436 =
        C23992 - ((C22263 * C23404) / p + (C22434 * C23968) / C23449);
    const double C10979 = -(C10949 * C23428 + C23425) / q;
    const double C11227 = -(C11212 * C23427 + C23425) / q;
    const double C11328 = -(C11343 * C23426 + C23425) / q;
    const double C23429 = C9346 / C23397;
    const double C23432 = C9894 / C23397;
    const double C23434 = C10439 / C23397;
    const double C9330 = (C11473 - (C18164 * q) / C23449) / p -
                         ((C9346 * C23398) / p + (C18145 * C23965) / C23449);
    const double C9589 = -((C9346 * C23400) / p + (C18145 * C23967) / C23449);
    const double C9726 = -((C9346 * C23404) / p + (C18145 * C23968) / C23449);
    const double C23955 = C18336 * q;
    const double C9879 = -((C9894 * C23398) / p + (C18336 * C23965) / C23449);
    const double C10135 = (C12103 - (C18260 * q) / C23449) / p -
                          ((C9894 * C23400) / p + (C18336 * C23967) / C23449);
    const double C10271 = -((C9894 * C23404) / p + (C18336 * C23968) / C23449);
    const double C23956 = C18485 * q;
    const double C10424 = -((C10439 * C23398) / p + (C18485 * C23965) / C23449);
    const double C10680 = -((C10439 * C23400) / p + (C18485 * C23967) / C23449);
    const double C10814 = (C12133 - (C18305 * q) / C23449) / p -
                          ((C10439 * C23404) / p + (C18485 * C23968) / C23449);
    const double C18179 = (C18164 - (C18921 * q) / C23449) / p -
                          ((C18145 * C23398) / p + (C18958 * C23965) / C23449);
    const double C19760 = -((C18145 * C23404) / p + (C18958 * C23968) / C23449);
    const double C23961 = C18986 * q;
    const double C18275 = -((C18336 * C23398) / p + (C18986 * C23965) / C23449);
    const double C18363 = (C18260 - (C20439 * q) / C23449) / p -
                          ((C18336 * C23400) / p + (C18986 * C23967) / C23449);
    const double C18404 = -((C18336 * C23404) / p + (C18986 * C23968) / C23449);
    const double C23962 = C19041 * q;
    const double C18320 = -((C18485 * C23398) / p + (C19041 * C23965) / C23449);
    const double C18512 = -((C18485 * C23400) / p + (C19041 * C23967) / C23449);
    const double C18539 = (C18305 - (C20574 * q) / C23449) / p -
                          ((C18485 * C23404) / p + (C19041 * C23968) / C23449);
    const double C19135 = (C18921 - (C19324 * q) / C23449) / p -
                          ((C18958 * C23398) / p + (C19393 * C23965) / C23449);
    const double C19176 = (C20439 - (C20799 * q) / C23449) / p -
                          ((C18986 * C23400) / p + (C19422 * C23967) / C23449);
    const double C19191 = -((C18986 * C23398) / p + (C19422 * C23965) / C23449);
    const double C19206 = -((C19041 * C23398) / p + (C19436 * C23965) / C23449);
    const double C19221 = (C20574 - (C22263 * q) / C23449) / p -
                          ((C19041 * C23404) / p + (C19436 * C23968) / C23449);
    const double C20710 = -((C19041 * C23400) / p + (C19436 * C23967) / C23449);
    const double C9313 = C11473 / q - (C9346 * C23426) / q - (C9330 * p) / q;
    const double C23403 = C9589 * p;
    const double C23407 = C9726 * p;
    const double C23969 = C23955 / C23449;
    const double C23413 = C9879 * p;
    const double C9924 = C12103 / q - (C9894 * C23427) / q - (C10135 * p) / q;
    const double C23416 = C10271 * p;
    const double C23970 = C23956 / C23449;
    const double C23420 = C10424 * p;
    const double C23422 = C10680 * p;
    const double C10500 = C12133 / q - (C10439 * C23428) / q - (C10814 * p) / q;
    const double C11458 = (3 * (C9346 - (C18145 * q) / C23449)) / C23952 -
                          ((C9330 * C23398) / p + (C18179 * C23965) / C23449);
    const double C11592 = -((C9330 * C23400) / p + (C18179 * C23967) / C23449);
    const double C11652 = -((C9330 * C23404) / p + (C18179 * C23968) / C23449);
    const double C12118 = -((C9726 * C23400) / p + (C19760 * C23967) / C23449);
    const double C23974 = C23961 / C23449;
    const double C11797 = -((C10135 * C23398) / p + (C18363 * C23965) / C23449);
    const double C14682 = -((C10135 * C23404) / p + (C18363 * C23968) / C23449);
    const double C11857 = -((C10271 * C23398) / p + (C18404 * C23965) / C23449);
    const double C23975 = C23962 / C23449;
    const double C12001 = -((C10680 * C23398) / p + (C18512 * C23965) / C23449);
    const double C12045 = -((C10814 * C23398) / p + (C18539 * C23965) / C23449);
    const double C14869 = -((C10814 * C23400) / p + (C18539 * C23967) / C23449);
    const double C18621 = (3 * (C18145 - (C18958 * q) / C23449)) / C23952 -
                          ((C18179 * C23398) / p + (C19135 * C23965) / C23449);
    const double C20129 = -((C18179 * C23400) / p + (C19135 * C23967) / C23449);
    const double C20144 = -((C18179 * C23404) / p + (C19135 * C23968) / C23449);
    const double C18710 = -((C18363 * C23398) / p + (C19176 * C23965) / C23449);
    const double C18783 = -((C18363 * C23404) / p + (C19176 * C23968) / C23449);
    const double C18753 = -((C18539 * C23398) / p + (C19221 * C23965) / C23449);
    const double C18866 = -((C18539 * C23400) / p + (C19221 * C23967) / C23449);
    const double C9378 = -(C9346 * C23427 + C23403) / q;
    const double C10933 = C23435 - (C10949 * C23426) / q - C23403 / q;
    const double C9410 = -(C9346 * C23428 + C23407) / q;
    const double C11196 = C23437 - (C11212 * C23426) / q - C23407 / q;
    const double C23979 = C9894 - C23969;
    const double C9863 = -(C9894 * C23426 + C23413) / q;
    const double C10964 = C23436 - (C10949 * C23427) / q - C23413 / q;
    const double C9954 = -(C9894 * C23428 + C23416) / q;
    const double C11358 = C23437 - (C11343 * C23427) / q - C23416 / q;
    const double C23980 = C10439 - C23970;
    const double C10408 = -(C10439 * C23426 + C23420) / q;
    const double C11243 = C23436 - (C11212 * C23428) / q - C23420 / q;
    const double C10470 = -(C10439 * C23427 + C23422) / q;
    const double C11373 = C23435 - (C11343 * C23428) / q - C23422 / q;
    const double C9295 =
        (3 * C9346) / C23397 - (C9330 * C23426) / q - (C11458 * p) / q;
    const double C23402 = C11592 * p;
    const double C23406 = C11652 * p;
    const double C23410 = C12118 * p;
    const double C23983 = C18336 - C23974;
    const double C23414 = C11797 * p;
    const double C23417 = C14682 * p;
    const double C23415 = C11857 * p;
    const double C23984 = C18485 - C23975;
    const double C23421 = C12001 * p;
    const double C23423 = C12045 * p;
    const double C23424 = C14869 * p;
    const double C11710 =
        C23979 / C23952 - ((C9879 * C23398) / p + (C18275 * C23965) / C23449);
    const double C14608 = (3 * C23979) / C23952 -
                          ((C10135 * C23400) / p + (C18363 * C23967) / C23449);
    const double C23988 = C23980 / C23952;
    const double C17673 = (3 * C23980) / C23952 -
                          ((C10814 * C23404) / p + (C18539 * C23968) / C23449);
    const double C1180 = C9295 + xAB * C9313;
    const double C9362 = -(C9330 * C23427 + C23402) / q;
    const double C9573 = C23408 - (C9589 * C23426) / q - C23402 / q;
    const double C9394 = -(C9330 * C23428 + C23406) / q;
    const double C9710 = C23411 - (C9726 * C23426) / q - C23406 / q;
    const double C9620 = -(C9589 * C23428 + C23410) / q;
    const double C9742 = -(C9726 * C23427 + C23410) / q;
    const double C11065 = C11343 / C23397 - (C11081 * C23426) / q - C23410 / q;
    const double C18768 = (3 * C23983) / C23952 -
                          ((C18363 * C23400) / p + (C19176 * C23967) / C23449);
    const double C21626 =
        C23983 / C23952 - ((C18275 * C23398) / p + (C19191 * C23965) / C23449);
    const double C9909 = C23408 - (C9879 * C23427) / q - C23414 / q;
    const double C10119 = -(C10135 * C23426 + C23414) / q;
    const double C10165 = -(C10135 * C23428 + C23417) / q;
    const double C10286 = C23418 - (C10271 * C23427) / q - C23417 / q;
    const double C9939 = -(C9879 * C23428 + C23415) / q;
    const double C10255 = -(C10271 * C23426 + C23415) / q;
    const double C11096 = C11212 / C23397 - (C11081 * C23427) / q - C23415 / q;
    const double C23990 = C23984 / C23952;
    const double C18880 = (3 * C23984) / C23952 -
                          ((C18539 * C23404) / p + (C19221 * C23968) / C23449);
    const double C10454 = -(C10424 * C23427 + C23421) / q;
    const double C10664 = -(C10680 * C23426 + C23421) / q;
    const double C11111 = C10949 / C23397 - (C11081 * C23428) / q - C23421 / q;
    const double C10485 = C23411 - (C10424 * C23428) / q - C23423 / q;
    const double C10798 = -(C10814 * C23426 + C23423) / q;
    const double C10710 = C23418 - (C10680 * C23428) / q - C23424 / q;
    const double C10829 = -(C10814 * C23427 + C23424) / q;
    const double C23409 = C11710 * p;
    const double C10150 =
        (3 * C9894) / C23397 - (C10135 * C23427) / q - (C14608 * p) / q;
    const double C11915 =
        C23988 - ((C10424 * C23398) / p + (C18320 * C23965) / C23449);
    const double C14811 =
        C23988 - ((C10680 * C23400) / p + (C18512 * C23967) / C23449);
    const double C10845 =
        (3 * C10439) / C23397 - (C10814 * C23428) / q - (C17673 * p) / q;
    const double C1209 = C9362 + xAB * C9378;
    const double C1261 = C9573 + yAB * C9313;
    const double C1909 = C9573 + xAB * C10933;
    const double C1236 = C9394 + xAB * C9410;
    const double C1342 = C9710 + zAB * C9313;
    const double C2152 = C9710 + xAB * C11196;
    const double C1317 = C9620 + yAB * C9410;
    const double C1965 = C9620 + xAB * C10979;
    const double C1371 = C9742 + zAB * C9378;
    const double C2181 = C9742 + xAB * C11227;
    const double C2071 = C11065 + zAB * C10933;
    const double C2233 = C11065 + yAB * C11196;
    const double C2395 = C11065 + xAB * C11328;
    const double C1452 = C9909 + xAB * C9924;
    const double C2019 = C9909 + yAB * C10964;
    const double C1504 = C10119 + yAB * C9863;
    const double C1560 = C10165 + yAB * C9954;
    const double C1614 = C10286 + zAB * C9924;
    const double C2505 = C10286 + yAB * C11358;
    const double C1479 = C9939 + xAB * C9954;
    const double C2046 = C9939 + yAB * C10979;
    const double C1585 = C10255 + zAB * C9863;
    const double C2476 = C10255 + yAB * C11328;
    const double C2100 = C11096 + zAB * C10964;
    const double C2262 = C11096 + yAB * C11227;
    const double C2424 = C11096 + xAB * C11358;
    const double C18798 =
        C23990 - ((C18512 * C23400) / p + (C20710 * C23967) / C23449);
    const double C20200 =
        C23990 - ((C18320 * C23398) / p + (C19206 * C23965) / C23449);
    const double C1695 = C10454 + xAB * C10470;
    const double C2343 = C10454 + zAB * C11227;
    const double C1747 = C10664 + yAB * C10408;
    const double C2557 = C10664 + zAB * C11328;
    const double C2127 = C11111 + zAB * C10979;
    const double C2289 = C11111 + yAB * C11243;
    const double C2451 = C11111 + xAB * C11373;
    const double C1722 = C10485 + xAB * C10500;
    const double C2370 = C10485 + zAB * C11243;
    const double C1828 = C10798 + zAB * C10408;
    const double C1803 = C10710 + yAB * C10500;
    const double C2613 = C10710 + zAB * C11373;
    const double C1857 = C10829 + zAB * C10470;
    const double C23430 = C23409 / q;
    const double C1533 = C10150 + yAB * C9924;
    const double C23412 = C11915 * p;
    const double C23419 = C14811 * p;
    const double C1884 = C10845 + zAB * C10500;
    const double C9605 = C23429 - (C9589 * C23427) / q - C23430;
    const double C9846 = C23432 - (C9879 * C23426) / q - C23430;
    const double C23431 = C23412 / q;
    const double C23433 = C23419 / q;
    const double C1290 = C9605 + yAB * C9378;
    const double C1938 = C9605 + xAB * C10964;
    const double C1423 = C9846 + xAB * C9863;
    const double C1990 = C9846 + yAB * C10933;
    const double C9758 = C23429 - (C9726 * C23428) / q - C23431;
    const double C10391 = C23434 - (C10424 * C23426) / q - C23431;
    const double C10302 = C23432 - (C10271 * C23428) / q - C23433;
    const double C10695 = C23434 - (C10680 * C23427) / q - C23433;
    const double C1398 = C9758 + zAB * C9410;
    const double C2208 = C9758 + xAB * C11243;
    const double C1666 = C10391 + xAB * C10408;
    const double C2314 = C10391 + zAB * C11196;
    const double C1641 = C10302 + zAB * C9954;
    const double C2532 = C10302 + yAB * C11373;
    const double C1776 = C10695 + yAB * C10470;
    const double C2586 = C10695 + zAB * C11358;
    g[0] = C1180;
    g[1] = C1209;
    g[2] = C1236;
    g[3] = C1261;
    g[4] = C1290;
    g[5] = C1317;
    g[6] = C1342;
    g[7] = C1371;
    g[8] = C1398;
    g[9] = C1423;
    g[10] = C1452;
    g[11] = C1479;
    g[12] = C1504;
    g[13] = C1533;
    g[14] = C1560;
    g[15] = C1585;
    g[16] = C1614;
    g[17] = C1641;
    g[18] = C1666;
    g[19] = C1695;
    g[20] = C1722;
    g[21] = C1747;
    g[22] = C1776;
    g[23] = C1803;
    g[24] = C1828;
    g[25] = C1857;
    g[26] = C1884;
    g[27] = C1909;
    g[28] = C1938;
    g[29] = C1965;
    g[30] = C1990;
    g[31] = C2019;
    g[32] = C2046;
    g[33] = C2071;
    g[34] = C2100;
    g[35] = C2127;
    g[36] = C2152;
    g[37] = C2181;
    g[38] = C2208;
    g[39] = C2233;
    g[40] = C2262;
    g[41] = C2289;
    g[42] = C2314;
    g[43] = C2343;
    g[44] = C2370;
    g[45] = C2395;
    g[46] = C2424;
    g[47] = C2451;
    g[48] = C2476;
    g[49] = C2505;
    g[50] = C2532;
    g[51] = C2557;
    g[52] = C2586;
    g[53] = C2613;
    g[54] = C9295;
    g[55] = C9313;
    g[56] = C9330;
    g[57] = C9346;
    g[58] = C9362;
    g[59] = C9378;
    g[60] = C9394;
    g[61] = C9410;
    g[62] = C9573;
    g[63] = C9589;
    g[64] = C9605;
    g[65] = C9620;
    g[66] = C9710;
    g[67] = C9726;
    g[68] = C9742;
    g[69] = C9758;
    g[70] = C9846;
    g[71] = C9863;
    g[72] = C9879;
    g[73] = C9894;
    g[74] = C9909;
    g[75] = C9924;
    g[76] = C9939;
    g[77] = C9954;
    g[78] = C10119;
    g[79] = C10135;
    g[80] = C10150;
    g[81] = C10165;
    g[82] = C10255;
    g[83] = C10271;
    g[84] = C10286;
    g[85] = C10302;
    g[86] = C10391;
    g[87] = C10408;
    g[88] = C10424;
    g[89] = C10439;
    g[90] = C10454;
    g[91] = C10470;
    g[92] = C10485;
    g[93] = C10500;
    g[94] = C10664;
    g[95] = C10680;
    g[96] = C10695;
    g[97] = C10710;
    g[98] = C10798;
    g[99] = C10814;
    g[100] = C10829;
    g[101] = C10845;
    g[102] = C10933;
    g[103] = C10949;
    g[104] = C10964;
    g[105] = C10979;
    g[106] = C11065;
    g[107] = C11081;
    g[108] = C11096;
    g[109] = C11111;
    g[110] = C11196;
    g[111] = C11212;
    g[112] = C11227;
    g[113] = C11243;
    g[114] = C11328;
    g[115] = C11343;
    g[116] = C11358;
    g[117] = C11373;
    g[118] = C11458;
    g[119] = C11473;
    g[120] = C11592;
    g[121] = C11652;
    g[122] = C11710;
    g[123] = C11797;
    g[124] = C11857;
    g[125] = C11915;
    g[126] = C12001;
    g[127] = C12045;
    g[128] = C12103;
    g[129] = C12118;
    g[130] = C12133;
    g[131] = C14608;
    g[132] = C14682;
    g[133] = C14811;
    g[134] = C14869;
    g[135] = C17673;
    g[136] = C18145;
    g[137] = C18164;
    g[138] = C18179;
    g[139] = C18194;
    g[140] = C18260;
    g[141] = C18275;
    g[142] = C18305;
    g[143] = C18320;
    g[144] = C18336;
    g[145] = C18363;
    g[146] = C18404;
    g[147] = C18485;
    g[148] = C18512;
    g[149] = C18539;
    g[150] = C18606;
    g[151] = C18621;
    g[152] = C18710;
    g[153] = C18753;
    g[154] = C18768;
    g[155] = C18783;
    g[156] = C18798;
    g[157] = C18866;
    g[158] = C18880;
    g[159] = C18921;
    g[160] = C18937;
    g[161] = C18958;
    g[162] = C18986;
    g[163] = C19041;
    g[164] = C19135;
    g[165] = C19176;
    g[166] = C19191;
    g[167] = C19206;
    g[168] = C19221;
    g[169] = C19302;
    g[170] = C19324;
    g[171] = C19393;
    g[172] = C19422;
    g[173] = C19436;
    g[174] = C19484;
    g[175] = C19525;
    g[176] = C19575;
    g[177] = C19760;
    g[178] = C20129;
    g[179] = C20144;
    g[180] = C20200;
    g[181] = C20439;
    g[182] = C20574;
    g[183] = C20710;
    g[184] = C20799;
    g[185] = C20983;
    g[186] = C21626;
    g[187] = C22263;
    g[188] = C22434;
}
