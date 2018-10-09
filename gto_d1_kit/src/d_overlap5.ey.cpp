/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void overlap_gradient_11(double ae,
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
    const double C837 = ae + be;
    const double C841 = Pi / C837;
    const double C842 = std::sqrt(C841);
    const double C859 = ae * zAB;
    const double C858 = ae * yAB;
    const double C857 = be * zAB;
    const double C856 = be * yAB;
    const double C855 = std::pow(C837, 2);
    const double C854 = ae * xAB;
    const double C853 = 2. * C837;
    const double C852 = be * xAB;
    const double C851 = Pi / C837;
    const double C863 = C842 * C857;
    const double C862 = C842 * C856;
    const double C861 = C842 / C853;
    const double C860 = std::sqrt(C851);
    const double C798 = std::sqrt(Pi / (ae + be));
    const double C799 = -(C860 * C852) / C837;
    const double C802 = C861 - (C854 * C842 * C852) / C855;
    const double C803 = -C862 / C837;
    const double C804 = -C863 / C837;
    const double C811 = (C842 * C858) / C837;
    const double C814 = (C842 * C859) / C837;
    const double C817 = (C842 * C854) / C837;
    const double C820 = C861 - (C858 * C862) / C855;
    const double C831 = C861 - (C859 * C863) / C855;
    const double C806 = ae * C799;
    const double C805 = ae + be;
    const double C807 = 2. * C805;
    const double C821 = ae * C803;
    const double C832 = ae * C804;
    const double C879 = C832 * C857;
    const double C878 = C821 * C856;
    const double C877 = be * C860;
    const double C876 = ae * C798;
    const double C875 = C806 * C854;
    const double C874 = C832 * C859;
    const double C873 = ae * C860;
    const double C872 = C821 * C858;
    const double C871 = 2 * C832;
    const double C870 = 2 * C821;
    const double C869 = C806 * C852;
    const double C868 = be * C798;
    const double C889 = 2 * C879;
    const double C888 = 2 * C878;
    const double C887 = 2 * C877;
    const double C886 = 2. * C876;
    const double C885 = 2 * C875;
    const double C884 = 2 * C874;
    const double C883 = 2. * C873;
    const double C882 = 2 * C872;
    const double C881 = 2 * C869;
    const double C880 = 2 * C868;
    const double C899 = C889 / C805;
    const double C898 = C888 / C805;
    const double C897 = -C887;
    const double C896 = C886 / C807;
    const double C895 = C885 / C805;
    const double C894 = C884 / C805;
    const double C893 = C883 / C807;
    const double C892 = C882 / C805;
    const double C891 = C881 / C805;
    const double C890 = -C880;
    const double C904 = C897 / C807;
    const double C903 = C895 + C896;
    const double C902 = C894 + C893;
    const double C901 = C892 + C893;
    const double C900 = C890 / C807;
    const double C907 = C904 - C899;
    const double C906 = C904 - C898;
    const double C905 = C900 - C891;
    const double gx100100 =
        ((C905 * C854) / C805 + (4. * C806) / C807) * std::pow(C860, 2);
    const double gx100010 = C905 * C811 * C860;
    const double gx100001 = C905 * C860 * C814;
    const double gx010100 = C903 * C803 * C860;
    const double gx010010 = 2 * C806 * C820 * C860;
    const double gx010001 = 2 * C806 * C803 * C814;
    const double gx001100 = C903 * C860 * C804;
    const double gx001010 = 2 * C806 * C811 * C804;
    const double gx001001 = 2 * C806 * C860 * C831;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cc * gx100100;
    gx[(Ai + 0) * matrix_size + Bi + 1] += cc * gx100010;
    gx[(Ai + 0) * matrix_size + Bi + 2] += cc * gx100001;
    gx[(Ai + 1) * matrix_size + Bi + 0] += cc * gx010100;
    gx[(Ai + 1) * matrix_size + Bi + 1] += cc * gx010010;
    gx[(Ai + 1) * matrix_size + Bi + 2] += cc * gx010001;
    gx[(Ai + 2) * matrix_size + Bi + 0] += cc * gx001100;
    gx[(Ai + 2) * matrix_size + Bi + 1] += cc * gx001010;
    gx[(Ai + 2) * matrix_size + Bi + 2] += cc * gx001001;
    const double gy100100 = C802 * C870 * C860;
    const double gy100010 = C799 * C901 * C860;
    const double gy100001 = C799 * C870 * C814;
    const double gy010100 = C817 * C906 * C860;
    const double gy010010 =
        C798 * ((C906 * C858) / C805 + (4. * C821) / C807) * C860;
    const double gy010001 = C798 * C906 * C814;
    const double gy001100 = C817 * C870 * C804;
    const double gy001010 = C798 * C901 * C804;
    const double gy001001 = C798 * C870 * C831;
    gy[(Ai + 0) * matrix_size + Bi + 0] += cc * gy100100;
    gy[(Ai + 0) * matrix_size + Bi + 1] += cc * gy100010;
    gy[(Ai + 0) * matrix_size + Bi + 2] += cc * gy100001;
    gy[(Ai + 1) * matrix_size + Bi + 0] += cc * gy010100;
    gy[(Ai + 1) * matrix_size + Bi + 1] += cc * gy010010;
    gy[(Ai + 1) * matrix_size + Bi + 2] += cc * gy010001;
    gy[(Ai + 2) * matrix_size + Bi + 0] += cc * gy001100;
    gy[(Ai + 2) * matrix_size + Bi + 1] += cc * gy001010;
    gy[(Ai + 2) * matrix_size + Bi + 2] += cc * gy001001;
    const double gz100100 = C802 * C860 * C871;
    const double gz100010 = C799 * C811 * C871;
    const double gz100001 = C799 * C860 * C902;
    const double gz010100 = C817 * C803 * C871;
    const double gz010010 = C798 * C820 * C871;
    const double gz010001 = C798 * C803 * C902;
    const double gz001100 = C817 * C860 * C907;
    const double gz001010 = C798 * C811 * C907;
    const double gz001001 =
        C798 * C860 * ((C907 * C859) / C805 + (4. * C832) / C807);
    gz[(Ai + 0) * matrix_size + Bi + 0] += cc * gz100100;
    gz[(Ai + 0) * matrix_size + Bi + 1] += cc * gz100010;
    gz[(Ai + 0) * matrix_size + Bi + 2] += cc * gz100001;
    gz[(Ai + 1) * matrix_size + Bi + 0] += cc * gz010100;
    gz[(Ai + 1) * matrix_size + Bi + 1] += cc * gz010010;
    gz[(Ai + 1) * matrix_size + Bi + 2] += cc * gz010001;
    gz[(Ai + 2) * matrix_size + Bi + 0] += cc * gz001100;
    gz[(Ai + 2) * matrix_size + Bi + 1] += cc * gz001010;
    gz[(Ai + 2) * matrix_size + Bi + 2] += cc * gz001001;
}

// Automatically generated, do not edit
