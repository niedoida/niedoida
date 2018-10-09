/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void overlap_gradient_33(double ae,
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
    const double C26108 = ae + be;
    const double C26110 = Pi / C26108;
    const double C26111 = std::sqrt(C26110);
    const double C26114 = std::pow(C26108, 2);
    const double C26113 = be * xAB;
    const double C26117 = 2. * C26108;
    const double C26116 = std::pow(C26113, 2);
    const double C26119 = C26111 / C26117;
    const double C26118 = C26111 * C26116;
    const double C26120 = C26118 / C26114;
    const double C26121 = C26120 + C26119;
    const double C26127 = ae * xAB;
    const double C26126 = C26121 * C26113;
    const double C26125 = 2. * C26114;
    const double C26124 = C26111 * C26113;
    const double C26129 = C26126 / C26108;
    const double C26128 = -2. * C26124;
    const double C26130 = C26128 / C26125;
    const double C26131 = C26130 - C26129;
    const double C26137 = C26121 * C26127;
    const double C26136 = 3. * C26121;
    const double C26135 = C26131 * C26127;
    const double C26140 = C26137 / C26108;
    const double C26139 = C26136 / C26117;
    const double C26138 = C26135 / C26108;
    const double C26142 = C26140 + C26130;
    const double C26141 = C26138 + C26139;
    const double C26146 = ae * yAB;
    const double C26150 = ae * zAB;
    const double C26156 = be * yAB;
    const double C26161 = std::pow(C26156, 2);
    const double C26160 = C26111 * C26156;
    const double C26163 = C26111 * C26161;
    const double C26162 = -2. * C26160;
    const double C26165 = C26163 / C26114;
    const double C26164 = C26162 / C26125;
    const double C26166 = C26165 + C26119;
    const double C26169 = C26166 * C26146;
    const double C26168 = 3. * C26166;
    const double C26167 = C26166 * C26156;
    const double C26172 = C26169 / C26108;
    const double C26171 = C26168 / C26117;
    const double C26170 = C26167 / C26108;
    const double C26174 = C26172 + C26164;
    const double C26173 = C26164 - C26170;
    const double C26175 = C26173 * C26146;
    const double C26176 = C26175 / C26108;
    const double C26177 = C26176 + C26171;
    const double C26182 = be * zAB;
    const double C26186 = std::pow(C26182, 2);
    const double C26185 = C26111 * C26182;
    const double C26188 = C26111 * C26186;
    const double C26187 = -2. * C26185;
    const double C26190 = C26188 / C26114;
    const double C26189 = C26187 / C26125;
    const double C26191 = C26190 + C26119;
    const double C26194 = C26191 * C26150;
    const double C26193 = 3. * C26191;
    const double C26192 = C26191 * C26182;
    const double C26197 = C26194 / C26108;
    const double C26196 = C26193 / C26117;
    const double C26195 = C26192 / C26108;
    const double C26199 = C26197 + C26189;
    const double C26198 = C26189 - C26195;
    const double C26200 = C26198 * C26150;
    const double C26201 = C26200 / C26108;
    const double C26202 = C26201 + C26196;
    const double C26209 = C26127 * C26124;
    const double C26210 = C26209 / C26114;
    const double C26211 = C26119 - C26210;
    const double C26213 = C26146 * C26160;
    const double C26214 = C26213 / C26114;
    const double C26215 = C26119 - C26214;
    const double C26219 = C26150 * C26185;
    const double C26220 = C26219 / C26114;
    const double C26221 = C26119 - C26220;
    const double C26261 = 2 * C26221;
    const double C26260 = C26185 / C26108;
    const double C26259 = C26221 * C26150;
    const double C26258 = 2 * C26215;
    const double C26257 = C26160 / C26108;
    const double C26256 = C26215 * C26146;
    const double C26255 = C26124 / C26108;
    const double C26254 = C26211 * C26127;
    const double C26253 = 2 * C26211;
    const double C26252 = C26199 * C26150;
    const double C26251 = 3 * C26199;
    const double C26250 = C26202 * C26150;
    const double C26249 = std::pow(C26182, 2);
    const double C26248 = C26174 * C26146;
    const double C26247 = 3 * C26174;
    const double C26246 = C26177 * C26146;
    const double C26245 = std::pow(C26156, 2);
    const double C26244 = std::pow(C26127, 2);
    const double C26243 = C26111 * C26127;
    const double C26242 = C26111 * C26150;
    const double C26241 = std::pow(C26150, 2);
    const double C26240 = C26111 * C26146;
    const double C26239 = std::pow(C26146, 2);
    const double C26238 = C26127 * C26124;
    const double C26237 = C26142 * C26127;
    const double C26236 = 3. * C26121;
    const double C26235 = ae * xAB;
    const double C26234 = 2. * C26114;
    const double C26233 = C26111 * C26113;
    const double C26232 = 2. * C26108;
    const double C26231 = be * xAB;
    const double C26285 = C26261 + C26191;
    const double C26284 = C26258 + C26166;
    const double C26283 = C26259 / C26108;
    const double C26282 = C26256 / C26108;
    const double C26281 = C26254 / C26108;
    const double C26280 = C26252 / C26108;
    const double C26279 = C26251 + C26198;
    const double C26278 = C26250 / C26108;
    const double C26277 = C26111 * C26249;
    const double C26276 = C26248 / C26108;
    const double C26275 = C26247 + C26173;
    const double C26274 = C26246 / C26108;
    const double C26273 = C26111 * C26245;
    const double C26272 = C26111 * C26244;
    const double C26271 = C26243 / C26108;
    const double C26270 = C26242 / C26108;
    const double C26269 = C26111 * C26241;
    const double C26268 = C26240 / C26108;
    const double C26267 = C26111 * C26239;
    const double C26266 = C26238 / C26114;
    const double C26265 = C26237 / C26108;
    const double C26264 = C26236 / C26117;
    const double C26263 = -2. * C26233;
    const double C26262 = C26111 / C26232;
    const double C26299 = C26285 / C26117;
    const double C26298 = C26284 / C26117;
    const double C26297 = C26270 - C26260;
    const double C26296 = C26268 - C26257;
    const double C26295 = C26271 - C26255;
    const double C26294 = C26279 / C26117;
    const double C26293 = C26277 / C26114;
    const double C26292 = C26275 / C26117;
    const double C26291 = C26273 / C26114;
    const double C26290 = C26272 / C26114;
    const double C26289 = C26269 / C26114;
    const double C26288 = C26267 / C26114;
    const double C26287 = C26119 - C26266;
    const double C26286 = C26263 / C26234;
    const double C26312 = C26280 + C26299;
    const double C26311 = C26276 + C26298;
    const double C26310 = C26297 / C26117;
    const double C26309 = C26296 / C26117;
    const double C26308 = C26295 / C26117;
    const double C26307 = C26278 + C26294;
    const double C26306 = C26293 + C26119;
    const double C26305 = C26274 + C26292;
    const double C26304 = C26291 + C26119;
    const double C26303 = C26290 + C26119;
    const double C26302 = C26289 + C26119;
    const double C26301 = C26288 + C26119;
    const double C26300 = 2 * C26287;
    const double C26316 = C26283 + C26310;
    const double C26315 = C26282 + C26309;
    const double C26314 = C26281 + C26308;
    const double C26313 = C26300 + C26121;
    const double C26317 = C26313 / C26117;
    const double C26318 = C26265 + C26317;
    const double C25685 = std::sqrt(Pi / (ae + be));
    const double C25686 = -(std::sqrt(Pi / C26108) * C26231) / C26108;
    const double C25687 =
        (C26111 * std::pow(C26231, 2)) / std::pow(C26108, 2) + C26262;
    const double C25688 =
        C26286 -
        (((C26111 * std::pow(C26113, 2)) / C26114 + C26262) * C26113) / C26108;
    const double C25689 =
        ((C26286 - (C26121 * C26113) / C26108) * C26235) / C26108 + C26264;
    const double C25690 = (C26121 * C26235) / C26108 + C26286;
    const double C25691 =
        (((C26131 * C26127) / C26108 + C26264) * C26127) / C26108 +
        (3 * ((C26121 * C26127) / C26108 + C26130) + C26131) / C26117;
    const double C25694 =
        (((C26141 * C26127) / C26108 + (3 * C26142 + C26131) / C26117) *
         C26127) /
            C26108 +
        (3 * C26318 + 2 * C26141) / C26117;
    const double C25695 = -(C26111 * be * yAB) / C26108;
    const double C25696 = -(C26111 * be * zAB) / C26108;
    const double C25744 = (C26301 * C26146) / C26108 + (2. * C26240) / C26125;
    const double C25759 = (C26302 * C26150) / C26108 + (2. * C26242) / C26125;
    const double C25790 =
        (-2. * C26111 * C26156) / C26125 - (C26304 * C26156) / C26108;
    const double C25791 = (C26303 * C26127) / C26108 + (2. * C26243) / C26125;
    const double C25812 =
        (C26305 * C26146) / C26108 +
        (3 * (C26276 +
              (2 * (C26119 - (C26146 * C26160) / C26114) + C26166) / C26117) +
         2 * C26177) /
            C26117;
    const double C25866 =
        (-2. * C26111 * C26182) / C26125 - (C26306 * C26182) / C26108;
    const double C25882 =
        (C26307 * C26150) / C26108 +
        (3 * (C26280 +
              (2 * (C26119 - (C26150 * C26185) / C26114) + C26191) / C26117) +
         2 * C26202) /
            C26117;
    const double C25936 =
        ((C26265 + (C26253 + C26121) / C26117) * C26127) / C26108 +
        (2 * C26314 + 2 * C26142) / C26117;
    const double C25945 =
        (C26315 * C26146) / C26108 + (C26301 + C26258) / C26117;
    const double C25976 =
        (C26316 * C26150) / C26108 + (C26302 + C26261) / C26117;
    const double C26003 =
        (C26311 * C26146) / C26108 + (2 * C26315 + 2 * C26174) / C26117;
    const double C26024 =
        (C26314 * C26127) / C26108 + (C26303 + C26253) / C26117;
    const double C26049 =
        (C26312 * C26150) / C26108 + (2 * C26316 + 2 * C26199) / C26117;
    const double C25705 = ae * C25687;
    const double C25704 = ae * C25688;
    const double C25703 = ae * xAB;
    const double C25702 = be * C25686;
    const double C25701 = be * C25687;
    const double C25700 = be * xAB;
    const double C25699 = ae * C25686;
    const double C25698 = ae + be;
    const double C25697 = be * C25685;
    const double C25713 = 2 * C25705;
    const double C25712 = 2 * C25704;
    const double C25711 = 2 * C25702;
    const double C25710 = 2 * C25699;
    const double C25709 = 2 * C25701;
    const double C25708 = C25699 * C25700;
    const double C25707 = 2. * C25698;
    const double C25706 = 2 * C25697;
    const double C25716 = C25710 - C25711;
    const double C25715 = 2 * C25708;
    const double C25714 = -C25706;
    const double C25719 = C25716 / C25707;
    const double C25718 = C25715 / C25698;
    const double C25717 = C25714 / C25707;
    const double C25720 = C25717 - C25718;
    const double C25722 = C25720 * C25700;
    const double C25721 = 2 * C25720;
    const double C25725 = C25721 + C25713;
    const double C25724 = C25722 / C25698;
    const double C25723 = C25721 - C25709;
    const double C25728 = C25725 / C25707;
    const double C25727 = C25719 - C25724;
    const double C25726 = C25723 / C25707;
    const double C25731 = C25727 * C25703;
    const double C25730 = 3 * C25727;
    const double C25729 = C25727 * C25700;
    const double C25734 = C25731 / C25698;
    const double C25733 = C25730 + C25712;
    const double C25732 = C25729 / C25698;
    const double C25737 = C25734 + C25728;
    const double C25736 = C25733 / C25707;
    const double C25735 = C25726 - C25732;
    const double C25738 = C25735 * C25703;
    const double C25739 = C25738 / C25698;
    const double C25740 = C25739 + C25736;
    const double C25749 = ae * C26111;
    const double C25748 = ae * yAB;
    const double C25747 = ae * C25695;
    const double C25751 = 2. * C25749;
    const double C25750 = C25747 * C25748;
    const double C25753 = C25751 / C25707;
    const double C25752 = 2 * C25750;
    const double C25754 = C25752 / C25698;
    const double C25755 = C25754 + C25753;
    const double C25764 = ae * C26111;
    const double C25763 = ae * zAB;
    const double C25762 = ae * C25696;
    const double C25766 = 2. * C25764;
    const double C25765 = C25762 * C25763;
    const double C25768 = C25766 / C25707;
    const double C25767 = 2 * C25765;
    const double C25769 = C25767 / C25698;
    const double C25770 = C25769 + C25768;
    const double C25796 = be * yAB;
    const double C25795 = be * C26111;
    const double C25794 = ae * C25685;
    const double C25793 = C25699 * C25703;
    const double C25800 = C25747 * C25796;
    const double C25799 = 2 * C25795;
    const double C25798 = 2. * C25794;
    const double C25797 = 2 * C25793;
    const double C25804 = 2 * C25800;
    const double C25803 = -C25799;
    const double C25802 = C25798 / C25707;
    const double C25801 = C25797 / C25698;
    const double C25807 = C25804 / C25698;
    const double C25806 = C25803 / C25707;
    const double C25805 = C25801 + C25802;
    const double C25808 = C25806 - C25807;
    const double C25822 = ae * C26304;
    const double C25821 = ae * C25790;
    const double C25820 = C25808 * C25796;
    const double C25819 = be * C25695;
    const double C25818 = 2 * C25747;
    const double C25817 = be * C26304;
    const double C25816 = 2 * C25808;
    const double C25827 = 2 * C25822;
    const double C25826 = 2 * C25821;
    const double C25825 = C25820 / C25698;
    const double C25824 = 2 * C25819;
    const double C25823 = 2 * C25817;
    const double C25830 = C25816 + C25827;
    const double C25829 = C25818 - C25824;
    const double C25828 = C25816 - C25823;
    const double C25833 = C25830 / C25707;
    const double C25832 = C25829 / C25707;
    const double C25831 = C25828 / C25707;
    const double C25834 = C25832 - C25825;
    const double C25837 = C25834 * C25748;
    const double C25836 = 3 * C25834;
    const double C25835 = C25834 * C25796;
    const double C25840 = C25837 / C25698;
    const double C25839 = C25836 + C25826;
    const double C25838 = C25835 / C25698;
    const double C25843 = C25840 + C25833;
    const double C25842 = C25839 / C25707;
    const double C25841 = C25831 - C25838;
    const double C25844 = C25841 * C25748;
    const double C25845 = C25844 / C25698;
    const double C25846 = C25845 + C25842;
    const double C25869 = be * zAB;
    const double C25868 = be * C26111;
    const double C25871 = C25762 * C25869;
    const double C25870 = 2 * C25868;
    const double C25873 = 2 * C25871;
    const double C25872 = -C25870;
    const double C25875 = C25873 / C25698;
    const double C25874 = C25872 / C25707;
    const double C25876 = C25874 - C25875;
    const double C25892 = ae * C26306;
    const double C25891 = ae * C25866;
    const double C25890 = C25876 * C25869;
    const double C25889 = be * C25696;
    const double C25888 = 2 * C25762;
    const double C25887 = be * C26306;
    const double C25886 = 2 * C25876;
    const double C25897 = 2 * C25892;
    const double C25896 = 2 * C25891;
    const double C25895 = C25890 / C25698;
    const double C25894 = 2 * C25889;
    const double C25893 = 2 * C25887;
    const double C25900 = C25886 + C25897;
    const double C25899 = C25888 - C25894;
    const double C25898 = C25886 - C25893;
    const double C25903 = C25900 / C25707;
    const double C25902 = C25899 / C25707;
    const double C25901 = C25898 / C25707;
    const double C25904 = C25902 - C25895;
    const double C25907 = C25904 * C25763;
    const double C25906 = 3 * C25904;
    const double C25905 = C25904 * C25869;
    const double C25910 = C25907 / C25698;
    const double C25909 = C25906 + C25896;
    const double C25908 = C25905 / C25698;
    const double C25913 = C25910 + C25903;
    const double C25912 = C25909 / C25707;
    const double C25911 = C25901 - C25908;
    const double C25914 = C25911 * C25763;
    const double C25915 = C25914 / C25698;
    const double C25916 = C25915 + C25912;
    const double C25938 = 4. * C25699;
    const double C25937 = C25720 * C25703;
    const double C25940 = C25938 / C25707;
    const double C25939 = C25937 / C25698;
    const double C25941 = C25939 + C25940;
    const double C25949 = 4. * C25747;
    const double C25948 = C25808 * C25748;
    const double C25951 = C25949 / C25707;
    const double C25950 = C25948 / C25698;
    const double C25952 = C25950 + C25951;
    const double C25980 = 4. * C25762;
    const double C25979 = C25876 * C25763;
    const double C25982 = C25980 / C25707;
    const double C25981 = C25979 / C25698;
    const double C25983 = C25981 + C25982;
    const double C26370 = ae * C26312;
    const double C26369 = 2 * C25913;
    const double C26368 = ae * C26314;
    const double C26367 = ae * C26311;
    const double C26366 = 2 * C25843;
    const double C26365 = ae * C26316;
    const double C26364 = ae * C26221;
    const double C26363 = C25770 + C25876;
    const double C26362 = C25983 * C25763;
    const double C26361 = ae * C26315;
    const double C26360 = ae * C26215;
    const double C26359 = C25755 + C25808;
    const double C26358 = C25952 * C25748;
    const double C26357 = ae * C26318;
    const double C26356 = 2 * C25737;
    const double C26355 = ae * C26287;
    const double C26354 = C25805 + C25720;
    const double C26353 = C25941 * C25703;
    const double C26352 = ae * C26199;
    const double C26351 = 2 * C25983;
    const double C26350 = C25913 * C25763;
    const double C26349 = ae * C26202;
    const double C26348 = 3 * C25913;
    const double C26347 = C25916 * C25763;
    const double C26346 = ae * C26174;
    const double C26345 = 2 * C25952;
    const double C26344 = C25843 * C25748;
    const double C26343 = ae * C26177;
    const double C26342 = 3 * C25843;
    const double C26341 = C25846 * C25748;
    const double C26340 = ae * C26303;
    const double C26339 = 2 * C25805;
    const double C26338 = ae * C26271;
    const double C26337 = C25805 * C25703;
    const double C26336 = ae * C26302;
    const double C26335 = 2 * C25770;
    const double C26334 = ae * C26270;
    const double C26333 = C25770 * C25763;
    const double C26332 = ae * C26301;
    const double C26331 = 2 * C25755;
    const double C26330 = ae * C26268;
    const double C26329 = C25755 * C25748;
    const double C26328 = ae * C25690;
    const double C26327 = 2 * C25941;
    const double C26326 = C25737 * C25703;
    const double C26325 = ae * C25689;
    const double C26324 = 3 * C25737;
    const double C26323 = C25740 * C25703;
    const double C26409 = 2 * C26370;
    const double C26408 = 2 * C26368;
    const double C26407 = 2 * C26367;
    const double C26406 = 2 * C26365;
    const double C26405 = 2 * C26364;
    const double C26404 = C26362 / C25698;
    const double C26403 = 2 * C26361;
    const double C26402 = 2 * C26360;
    const double C26401 = C26358 / C25698;
    const double C26400 = 2 * C26357;
    const double C26399 = 2 * C26355;
    const double C26398 = C26353 / C25698;
    const double C26397 = 2 * C26352;
    const double C26396 = C26351 + C25904;
    const double C26395 = C26350 / C25698;
    const double C26394 = 2 * C26349;
    const double C26393 = C26348 + C25911;
    const double C26392 = C26347 / C25698;
    const double C26391 = 2 * C26346;
    const double C26390 = C26345 + C25834;
    const double C26389 = C26344 / C25698;
    const double C26388 = 2 * C26343;
    const double C26387 = C26342 + C25841;
    const double C26386 = C26341 / C25698;
    const double C26385 = 2 * C26340;
    const double C26384 = 2 * C26338;
    const double C26383 = C26337 / C25698;
    const double C26382 = 2 * C26336;
    const double C26381 = 2 * C26334;
    const double C26380 = C26333 / C25698;
    const double C26379 = 2 * C26332;
    const double C26378 = 2 * C26330;
    const double C26377 = C26329 / C25698;
    const double C26376 = 2 * C26328;
    const double C26375 = C26327 + C25727;
    const double C26374 = C26326 / C25698;
    const double C26373 = 2 * C26325;
    const double C26372 = C26324 + C25735;
    const double C26371 = C26323 / C25698;
    const double C26424 = C26363 + C26405;
    const double C26423 = C26359 + C26402;
    const double C26422 = C26354 + C26399;
    const double C26421 = C26396 + C26397;
    const double C26420 = C26393 + C26394;
    const double C26419 = C26390 + C26391;
    const double C26418 = C26387 + C26388;
    const double C26417 = C26339 + C26385;
    const double C26416 = C25710 + C26384;
    const double C26415 = C26335 + C26382;
    const double C26414 = C25888 + C26381;
    const double C26413 = C26331 + C26379;
    const double C26412 = C25818 + C26378;
    const double C26411 = C26375 + C26376;
    const double C26410 = C26372 + C26373;
    const double C26439 = C26424 / C25707;
    const double C26438 = C26423 / C25707;
    const double C26437 = C26422 / C25707;
    const double C26436 = C26421 / C25707;
    const double C26435 = C26420 / C25707;
    const double C26434 = C26419 / C25707;
    const double C26433 = C26418 / C25707;
    const double C26432 = C26417 / C25707;
    const double C26431 = C26416 / C25707;
    const double C26430 = C26415 / C25707;
    const double C26429 = C26414 / C25707;
    const double C26428 = C26413 / C25707;
    const double C26427 = C26412 / C25707;
    const double C26426 = C26411 / C25707;
    const double C26425 = C26410 / C25707;
    const double C26451 = C26404 + C26439;
    const double C26450 = C26401 + C26438;
    const double C26449 = C26398 + C26437;
    const double C26448 = C26395 + C26436;
    const double C26447 = C26392 + C26435;
    const double C26446 = C26389 + C26434;
    const double C26445 = C26386 + C26433;
    const double C26444 = C26383 + C26431;
    const double C26443 = C26380 + C26429;
    const double C26442 = C26377 + C26427;
    const double C26441 = C26374 + C26426;
    const double C26440 = C26371 + C26425;
    const double C26466 = 2 * C26451;
    const double C26465 = C26448 * C25763;
    const double C26464 = C26444 + C26327;
    const double C26463 = C26449 * C25703;
    const double C26462 = 2 * C26450;
    const double C26461 = C26446 * C25748;
    const double C26460 = C26443 + C26351;
    const double C26459 = C26451 * C25763;
    const double C26458 = C26442 + C26345;
    const double C26457 = C26450 * C25748;
    const double C26456 = 2 * C26449;
    const double C26455 = C26441 * C25703;
    const double C26454 = C26444 * C25703;
    const double C26453 = C26443 * C25763;
    const double C26452 = C26442 * C25748;
    const double C26481 = C26466 + C26369;
    const double C26480 = C26465 / C25698;
    const double C26479 = C26464 + C26408;
    const double C26478 = C26463 / C25698;
    const double C26477 = C26462 + C26366;
    const double C26476 = C26461 / C25698;
    const double C26475 = C26460 + C26406;
    const double C26474 = C26459 / C25698;
    const double C26473 = C26458 + C26403;
    const double C26472 = C26457 / C25698;
    const double C26471 = C26456 + C26356;
    const double C26470 = C26455 / C25698;
    const double C26469 = C26454 / C25698;
    const double C26468 = C26453 / C25698;
    const double C26467 = C26452 / C25698;
    const double C26490 = C26481 + C26409;
    const double C26489 = C26479 / C25707;
    const double C26488 = C26477 + C26407;
    const double C26487 = C26475 / C25707;
    const double C26486 = C26473 / C25707;
    const double C26485 = C26471 + C26400;
    const double C26484 = C26469 + C26432;
    const double C26483 = C26468 + C26430;
    const double C26482 = C26467 + C26428;
    const double C26496 = C26490 / C25707;
    const double C26495 = C26478 + C26489;
    const double C26494 = C26488 / C25707;
    const double C26493 = C26474 + C26487;
    const double C26492 = C26472 + C26486;
    const double C26491 = C26485 / C25707;
    const double C26499 = C26480 + C26496;
    const double C26498 = C26476 + C26494;
    const double C26497 = C26470 + C26491;
    const double gx300300 =
        ((C26440 * C25703) / C25698 +
         (3 * C26441 + 2 * C25740 + 2 * ae * C25691) / C25707) *
        std::pow(C26111, 2);
    const double gx300030 = C25735 * C25744 * C26111;
    const double gx300003 = C25735 * C26111 * C25759;
    const double gx300210 = C26440 * C26268 * C26111;
    const double gx300201 = C26440 * C26111 * C26270;
    const double gx300021 = C25735 * C26301 * C26270;
    const double gx300120 = C25740 * C26301 * C26111;
    const double gx300102 = C25740 * C26111 * C26302;
    const double gx300012 = C25735 * C26268 * C26302;
    const double gx300111 = C25740 * C26268 * C26270;
    const double gx030300 = C26484 * C25790 * C26111;
    const double gx030030 = 2 * C25699 * C25812 * C26111;
    const double gx030003 = 2 * C25699 * C25790 * C25759;
    const double gx030210 = C26444 * C26177 * C26111;
    const double gx030201 = C26444 * C25790 * C26270;
    const double gx030021 = 2 * C25699 * C26305 * C26270;
    const double gx030120 = C25805 * C26305 * C26111;
    const double gx030102 = C25805 * C25790 * C26302;
    const double gx030012 = 2 * C25699 * C26177 * C26302;
    const double gx030111 = C25805 * C26177 * C26270;
    const double gx003300 = C26484 * C26111 * C25866;
    const double gx003030 = 2 * C25699 * C25744 * C25866;
    const double gx003003 = 2 * C25699 * C26111 * C25882;
    const double gx003210 = C26444 * C26268 * C25866;
    const double gx003201 = C26444 * C26111 * C26202;
    const double gx003021 = 2 * C25699 * C26301 * C26202;
    const double gx003120 = C25805 * C26301 * C25866;
    const double gx003102 = C25805 * C26111 * C26307;
    const double gx003012 = 2 * C25699 * C26268 * C26307;
    const double gx003111 = C25805 * C26268 * C26202;
    const double gx210300 = C26497 * C25695 * C26111;
    const double gx210030 = C25727 * C25945 * C26111;
    const double gx210003 = C25727 * C25695 * C25759;
    const double gx210210 = C26441 * C26215 * C26111;
    const double gx210201 = C26441 * C25695 * C26270;
    const double gx210021 = C25727 * C26315 * C26270;
    const double gx210120 = C25737 * C26315 * C26111;
    const double gx210102 = C25737 * C25695 * C26302;
    const double gx210012 = C25727 * C26215 * C26302;
    const double gx210111 = C25737 * C26215 * C26270;
    const double gx201300 = C26497 * C26111 * C25696;
    const double gx201030 = C25727 * C25744 * C25696;
    const double gx201003 = C25727 * C26111 * C25976;
    const double gx201210 = C26441 * C26268 * C25696;
    const double gx201201 = C26441 * C26111 * C26221;
    const double gx201021 = C25727 * C26301 * C26221;
    const double gx201120 = C25737 * C26301 * C25696;
    const double gx201102 = C25737 * C26111 * C26316;
    const double gx201012 = C25727 * C26268 * C26316;
    const double gx201111 = C25737 * C26268 * C26221;
    const double gx021300 = C26484 * C26304 * C25696;
    const double gx021030 = 2 * C25699 * C26003 * C25696;
    const double gx021003 = 2 * C25699 * C26304 * C25976;
    const double gx021210 = C26444 * C26174 * C25696;
    const double gx021201 = C26444 * C26304 * C26221;
    const double gx021021 = 2 * C25699 * C26311 * C26221;
    const double gx021120 = C25805 * C26311 * C25696;
    const double gx021102 = C25805 * C26304 * C26316;
    const double gx021012 = 2 * C25699 * C26174 * C26316;
    const double gx021111 = C25805 * C26174 * C26221;
    const double gx120300 = C26495 * C26304 * C26111;
    const double gx120030 = C25720 * C26003 * C26111;
    const double gx120003 = C25720 * C26304 * C25759;
    const double gx120210 = C26449 * C26174 * C26111;
    const double gx120201 = C26449 * C26304 * C26270;
    const double gx120021 = C25720 * C26311 * C26270;
    const double gx120120 = C25941 * C26311 * C26111;
    const double gx120102 = C25941 * C26304 * C26302;
    const double gx120012 = C25720 * C26174 * C26302;
    const double gx120111 = C25941 * C26174 * C26270;
    const double gx102300 = C26495 * C26111 * C26306;
    const double gx102030 = C25720 * C25744 * C26306;
    const double gx102003 = C25720 * C26111 * C26049;
    const double gx102210 = C26449 * C26268 * C26306;
    const double gx102201 = C26449 * C26111 * C26199;
    const double gx102021 = C25720 * C26301 * C26199;
    const double gx102120 = C25941 * C26301 * C26306;
    const double gx102102 = C25941 * C26111 * C26312;
    const double gx102012 = C25720 * C26268 * C26312;
    const double gx102111 = C25941 * C26268 * C26199;
    const double gx012300 = C26484 * C25695 * C26306;
    const double gx012030 = 2 * C25699 * C25945 * C26306;
    const double gx012003 = 2 * C25699 * C25695 * C26049;
    const double gx012210 = C26444 * C26215 * C26306;
    const double gx012201 = C26444 * C25695 * C26199;
    const double gx012021 = 2 * C25699 * C26315 * C26199;
    const double gx012120 = C25805 * C26315 * C26306;
    const double gx012102 = C25805 * C25695 * C26312;
    const double gx012012 = 2 * C25699 * C26215 * C26312;
    const double gx012111 = C25805 * C26215 * C26199;
    const double gx111300 = C26495 * C25695 * C25696;
    const double gx111030 = C25720 * C25945 * C25696;
    const double gx111003 = C25720 * C25695 * C25976;
    const double gx111210 = C26449 * C26215 * C25696;
    const double gx111201 = C26449 * C25695 * C26221;
    const double gx111021 = C25720 * C26315 * C26221;
    const double gx111120 = C25941 * C26315 * C25696;
    const double gx111102 = C25941 * C25695 * C26316;
    const double gx111012 = C25720 * C26215 * C26316;
    const double gx111111 = C25941 * C26215 * C26221;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(25. / 64.) * gx030030 - std::sqrt(225. / 64.) * gx030210 -
         std::sqrt(225. / 64.) * gx210030 + std::sqrt(2025. / 64.) * gx210210);
    gx[(Ai + 0) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(675. / 8.0) * gx210111 - std::sqrt(75. / 8.0) * gx030111);
    gx[(Ai + 0) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(15. / 64.) * gx030030 + std::sqrt(15. / 64.) * gx030210 +
         std::sqrt(30. / 8.0) * gx030012 - std::sqrt(135. / 64.) * gx210030 -
         std::sqrt(135. / 64.) * gx210210 - std::sqrt(270. / 8.0) * gx210012);
    gx[(Ai + 0) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(11.25 / 8.0) * gx030201 - std::sqrt(5.0 / 8.0) * gx030003 +
         std::sqrt(11.25 / 8.0) * gx030021 + std::sqrt(45. / 8.0) * gx210003 -
         std::sqrt(101.25 / 8.0) * gx210201 -
         std::sqrt(101.25 / 8.0) * gx210021);
    gx[(Ai + 0) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(15. / 64.) * gx030300 + std::sqrt(15. / 64.) * gx030120 -
         std::sqrt(30. / 8.0) * gx030102 - std::sqrt(135. / 64.) * gx210300 -
         std::sqrt(135. / 64.) * gx210120 + std::sqrt(270. / 8.0) * gx210102);
    gx[(Ai + 0) * matrix_size + Bi + 5] +=
        cc *
        (std::sqrt(37.5 / 8.0) * gx030021 - std::sqrt(37.5 / 8.0) * gx030201 +
         std::sqrt(337.5 / 8.0) * gx210201 - std::sqrt(337.5 / 8.0) * gx210021);
    gx[(Ai + 0) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(225. / 64.) * gx210300 -
         (std::sqrt(225. / 64.) * gx030120 + std::sqrt(25. / 64.) * gx030300) +
         std::sqrt(2025. / 64.) * gx210120);
    gx[(Ai + 1) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(675. / 8.0) * gx111210 - std::sqrt(75. / 8.0) * gx111030);
    gx[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(225.) * gx111111;
    gx[(Ai + 1) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(90.) * gx111012 + std::sqrt(45. / 8.0) * gx111210 +
               std::sqrt(45. / 8.0) * gx111030);
    gx[(Ai + 1) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(15.0) * gx111003 - std::sqrt(33.75) * gx111201 -
              std::sqrt(33.75) * gx111021);
    gx[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(90.) * gx111102 - (std::sqrt(45. / 8.0) * gx111120 +
                                           std::sqrt(45. / 8.0) * gx111300));
    gx[(Ai + 1) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(112.5) * gx111201 - std::sqrt(112.5) * gx111021);
    gx[(Ai + 1) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(75. / 8.0) * gx111300 + std::sqrt(675. / 8.0) * gx111120);
    gx[(Ai + 2) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(15. / 64.) * gx030030 - std::sqrt(135. / 64.) * gx030210 +
         std::sqrt(15. / 64.) * gx210030 - std::sqrt(135. / 64.) * gx210210 +
         std::sqrt(30. / 8.0) * gx012030 - std::sqrt(270. / 8.0) * gx012210);
    gx[(Ai + 2) * matrix_size + Bi + 1] +=
        -cc * (std::sqrt(90.) * gx012111 + std::sqrt(45. / 8.0) * gx210111 +
               std::sqrt(45. / 8.0) * gx030111);
    gx[(Ai + 2) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(9. / 64.) * gx030030 + std::sqrt(9. / 64.) * gx030210 +
              std::sqrt(18. / 8.0) * gx030012 + std::sqrt(9. / 64.) * gx210030 +
              std::sqrt(9. / 64.) * gx210210 + std::sqrt(18. / 8.0) * gx210012 +
              std::sqrt(18. / 8.0) * gx012030 +
              std::sqrt(18. / 8.0) * gx012210 + std::sqrt(36.) * gx012012);
    gx[(Ai + 2) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(6.75 / 8.0) * gx030201 - std::sqrt(3.0 / 8.0) * gx030003 +
         std::sqrt(6.75 / 8.0) * gx030021 - std::sqrt(3.0 / 8.0) * gx210003 +
         std::sqrt(6.75 / 8.0) * gx210201 + std::sqrt(6.75 / 8.0) * gx210021 -
         std::sqrt(6.0) * gx012003 + std::sqrt(13.5) * gx012201 +
         std::sqrt(13.5) * gx012021);
    gx[(Ai + 2) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(9. / 64.) * gx030300 + std::sqrt(9. / 64.) * gx030120 -
              std::sqrt(18. / 8.0) * gx030102 + std::sqrt(9. / 64.) * gx210300 +
              std::sqrt(9. / 64.) * gx210120 - std::sqrt(18. / 8.0) * gx210102 +
              std::sqrt(18. / 8.0) * gx012300 +
              std::sqrt(18. / 8.0) * gx012120 - std::sqrt(36.) * gx012102);
    gx[(Ai + 2) * matrix_size + Bi + 5] +=
        cc *
        (std::sqrt(22.5 / 8.0) * gx030021 - std::sqrt(22.5 / 8.0) * gx030201 -
         std::sqrt(22.5 / 8.0) * gx210201 + std::sqrt(22.5 / 8.0) * gx210021 -
         std::sqrt(45.) * gx012201 + std::sqrt(45.) * gx012021);
    gx[(Ai + 2) * matrix_size + Bi + 6] +=
        -cc *
        (std::sqrt(270. / 8.0) * gx012120 + std::sqrt(30. / 8.0) * gx012300 +
         std::sqrt(135. / 64.) * gx210120 + std::sqrt(15. / 64.) * gx210300 +
         std::sqrt(135. / 64.) * gx030120 + std::sqrt(15. / 64.) * gx030300);
    gx[(Ai + 3) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gx003210 - std::sqrt(5.0 / 8.0) * gx003030 +
         std::sqrt(11.25 / 8.0) * gx201030 -
         std::sqrt(101.25 / 8.0) * gx201210 +
         std::sqrt(11.25 / 8.0) * gx021030 -
         std::sqrt(101.25 / 8.0) * gx021210);
    gx[(Ai + 3) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(15.0) * gx003111 - std::sqrt(33.75) * gx201111 -
              std::sqrt(33.75) * gx021111);
    gx[(Ai + 3) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(6.75 / 8.0) * gx201030 -
              (std::sqrt(6.0) * gx003012 + std::sqrt(3.0 / 8.0) * gx003210 +
               std::sqrt(3.0 / 8.0) * gx003030) +
              std::sqrt(6.75 / 8.0) * gx201210 + std::sqrt(13.5) * gx201012 +
              std::sqrt(6.75 / 8.0) * gx021030 +
              std::sqrt(6.75 / 8.0) * gx021210 + std::sqrt(13.5) * gx021012);
    gx[(Ai + 3) * matrix_size + Bi + 3] +=
        cc * (gx003003 - 1.5 * gx003201 - 1.5 * gx003021 - 1.5 * gx201003 +
              2.25 * gx201201 + 2.25 * gx201021 - 1.5 * gx021003 +
              2.25 * gx021201 + 2.25 * gx021021);
    gx[(Ai + 3) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(6.0) * gx003102 -
         (std::sqrt(3.0 / 8.0) * gx003120 + std::sqrt(3.0 / 8.0) * gx003300) +
         std::sqrt(6.75 / 8.0) * gx201300 + std::sqrt(6.75 / 8.0) * gx201120 -
         std::sqrt(13.5) * gx201102 + std::sqrt(6.75 / 8.0) * gx021300 +
         std::sqrt(6.75 / 8.0) * gx021120 - std::sqrt(13.5) * gx021102);
    gx[(Ai + 3) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(7.5) * gx003201 - std::sqrt(7.5) * gx003021 -
              std::sqrt(16.875) * gx201201 + std::sqrt(16.875) * gx201021 -
              std::sqrt(16.875) * gx021201 + std::sqrt(16.875) * gx021021);
    gx[(Ai + 3) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gx003300 + std::sqrt(45.0 / 8.0) * gx003120 -
         std::sqrt(11.25 / 8.0) * gx201300 -
         std::sqrt(101.25 / 8.0) * gx201120 -
         std::sqrt(11.25 / 8.0) * gx021300 -
         std::sqrt(101.25 / 8.0) * gx021120);
    gx[(Ai + 4) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(15. / 64.) * gx300030 - std::sqrt(135. / 64.) * gx300210 +
         std::sqrt(15. / 64.) * gx120030 - std::sqrt(135. / 64.) * gx120210 -
         std::sqrt(30. / 8.0) * gx102030 + std::sqrt(270. / 8.0) * gx102210);
    gx[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(90.) * gx102111 - (std::sqrt(45. / 8.0) * gx120111 +
                                           std::sqrt(45. / 8.0) * gx300111));
    gx[(Ai + 4) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(9. / 64.) * gx300030 + std::sqrt(9. / 64.) * gx300210 +
              std::sqrt(18. / 8.0) * gx300012 + std::sqrt(9. / 64.) * gx120030 +
              std::sqrt(9. / 64.) * gx120210 + std::sqrt(18. / 8.0) * gx120012 -
              std::sqrt(18. / 8.0) * gx102030 -
              std::sqrt(18. / 8.0) * gx102210 - std::sqrt(36.) * gx102012);
    gx[(Ai + 4) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(6.75 / 8.0) * gx300201 - std::sqrt(3.0 / 8.0) * gx300003 +
         std::sqrt(6.75 / 8.0) * gx300021 - std::sqrt(3.0 / 8.0) * gx120003 +
         std::sqrt(6.75 / 8.0) * gx120201 + std::sqrt(6.75 / 8.0) * gx120021 +
         std::sqrt(6.0) * gx102003 - std::sqrt(13.5) * gx102201 -
         std::sqrt(13.5) * gx102021);
    gx[(Ai + 4) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(9. / 64.) * gx300300 + std::sqrt(9. / 64.) * gx300120 -
              std::sqrt(18. / 8.0) * gx300102 + std::sqrt(9. / 64.) * gx120300 +
              std::sqrt(9. / 64.) * gx120120 - std::sqrt(18. / 8.0) * gx120102 -
              std::sqrt(18. / 8.0) * gx102300 -
              std::sqrt(18. / 8.0) * gx102120 + std::sqrt(36.) * gx102102);
    gx[(Ai + 4) * matrix_size + Bi + 5] +=
        cc *
        (std::sqrt(22.5 / 8.0) * gx300021 - std::sqrt(22.5 / 8.0) * gx300201 -
         std::sqrt(22.5 / 8.0) * gx120201 + std::sqrt(22.5 / 8.0) * gx120021 +
         std::sqrt(45.) * gx102201 - std::sqrt(45.) * gx102021);
    gx[(Ai + 4) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(30. / 8.0) * gx102300 -
         (std::sqrt(135. / 64.) * gx120120 + std::sqrt(15. / 64.) * gx120300 +
          std::sqrt(135. / 64.) * gx300120 + std::sqrt(15. / 64.) * gx300300) +
         std::sqrt(270. / 8.0) * gx102120);
    gx[(Ai + 5) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(337.5 / 8.0) * gx201210 - std::sqrt(37.5 / 8.0) * gx201030 +
         std::sqrt(37.5 / 8.0) * gx021030 - std::sqrt(337.5 / 8.0) * gx021210);
    gx[(Ai + 5) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(112.5) * gx201111 - std::sqrt(112.5) * gx021111);
    gx[(Ai + 5) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(22.5 / 8.0) * gx021030 -
              (std::sqrt(45.) * gx201012 + std::sqrt(22.5 / 8.0) * gx201210 +
               std::sqrt(22.5 / 8.0) * gx201030) +
              std::sqrt(22.5 / 8.0) * gx021210 + std::sqrt(45.) * gx021012);
    gx[(Ai + 5) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(7.5) * gx201003 - std::sqrt(16.875) * gx201201 -
              std::sqrt(16.875) * gx201021 - std::sqrt(7.5) * gx021003 +
              std::sqrt(16.875) * gx021201 + std::sqrt(16.875) * gx021021);
    gx[(Ai + 5) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(45.) * gx201102 -
         (std::sqrt(22.5 / 8.0) * gx201120 + std::sqrt(22.5 / 8.0) * gx201300) +
         std::sqrt(22.5 / 8.0) * gx021300 + std::sqrt(22.5 / 8.0) * gx021120 -
         std::sqrt(45.) * gx021102);
    gx[(Ai + 5) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(56.25) * gx201201 - std::sqrt(56.25) * gx201021 -
              std::sqrt(56.25) * gx021201 + std::sqrt(56.25) * gx021021);
    gx[(Ai + 5) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(37.5 / 8.0) * gx201300 + std::sqrt(337.5 / 8.0) * gx201120 -
         std::sqrt(37.5 / 8.0) * gx021300 - std::sqrt(337.5 / 8.0) * gx021120);
    gx[(Ai + 6) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(225. / 64.) * gx300210 - std::sqrt(25. / 64.) * gx300030 -
         std::sqrt(225. / 64.) * gx120030 + std::sqrt(2025. / 64.) * gx120210);
    gx[(Ai + 6) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(75. / 8.0) * gx300111 + std::sqrt(675. / 8.0) * gx120111);
    gx[(Ai + 6) * matrix_size + Bi + 2] +=
        -cc *
        (std::sqrt(270. / 8.0) * gx120012 + std::sqrt(135. / 64.) * gx120210 +
         std::sqrt(135. / 64.) * gx120030 + std::sqrt(30. / 8.0) * gx300012 +
         std::sqrt(15. / 64.) * gx300210 + std::sqrt(15. / 64.) * gx300030);
    gx[(Ai + 6) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gx300003 - std::sqrt(11.25 / 8.0) * gx300201 -
         std::sqrt(11.25 / 8.0) * gx300021 + std::sqrt(45.0 / 8.0) * gx120003 -
         std::sqrt(101.25 / 8.0) * gx120201 -
         std::sqrt(101.25 / 8.0) * gx120021);
    gx[(Ai + 6) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(30. / 8.0) * gx300102 -
         (std::sqrt(15. / 64.) * gx300120 + std::sqrt(15. / 64.) * gx300300) -
         std::sqrt(135. / 64.) * gx120300 - std::sqrt(135. / 64.) * gx120120 +
         std::sqrt(270. / 8.0) * gx120102);
    gx[(Ai + 6) * matrix_size + Bi + 5] +=
        cc *
        (std::sqrt(37.5 / 8.0) * gx300201 - std::sqrt(37.5 / 8.0) * gx300021 +
         std::sqrt(337.5 / 8.0) * gx120201 - std::sqrt(337.5 / 8.0) * gx120021);
    gx[(Ai + 6) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(25. / 64.) * gx300300 + std::sqrt(225. / 64.) * gx300120 +
         std::sqrt(225. / 64.) * gx120300 + std::sqrt(2025. / 64.) * gx120120);
    const double gy300300 = C25694 * C25818 * C26111;
    const double gy300030 = C25688 * C26482 * C26111;
    const double gy300003 = C25688 * C25818 * C25759;
    const double gy300210 = C25691 * C25755 * C26111;
    const double gy300201 = C25691 * C25818 * C26270;
    const double gy300021 = C25688 * C26442 * C26270;
    const double gy300120 = C25689 * C26442 * C26111;
    const double gy300102 = C25689 * C25818 * C26302;
    const double gy300012 = C25688 * C25755 * C26302;
    const double gy300111 = C25689 * C25755 * C26270;
    const double gy030300 = C25791 * C25841 * C26111;
    const double gy030030 =
        C25685 *
        ((C26445 * C25748) / C25698 +
         (3 * C26446 + 2 * C25846 + 2 * ae * C26305) / C25707) *
        C26111;
    const double gy030003 = C25685 * C25841 * C25759;
    const double gy030210 = C26303 * C25846 * C26111;
    const double gy030201 = C26303 * C25841 * C26270;
    const double gy030021 = C25685 * C26445 * C26270;
    const double gy030120 = C26271 * C26445 * C26111;
    const double gy030102 = C26271 * C25841 * C26302;
    const double gy030012 = C25685 * C25846 * C26302;
    const double gy030111 = C26271 * C25846 * C26270;
    const double gy003300 = C25791 * C25818 * C25866;
    const double gy003030 = C25685 * C26482 * C25866;
    const double gy003003 = C25685 * C25818 * C25882;
    const double gy003210 = C26303 * C25755 * C25866;
    const double gy003201 = C26303 * C25818 * C26202;
    const double gy003021 = C25685 * C26442 * C26202;
    const double gy003120 = C26271 * C26442 * C25866;
    const double gy003102 = C26271 * C25818 * C26307;
    const double gy003012 = C25685 * C25755 * C26307;
    const double gy003111 = C26271 * C25755 * C26202;
    const double gy210300 = C25936 * C25808 * C26111;
    const double gy210030 = C25687 * C26492 * C26111;
    const double gy210003 = C25687 * C25808 * C25759;
    const double gy210210 = C26318 * C25952 * C26111;
    const double gy210201 = C26318 * C25808 * C26270;
    const double gy210021 = C25687 * C26450 * C26270;
    const double gy210120 = C25690 * C26450 * C26111;
    const double gy210102 = C25690 * C25808 * C26302;
    const double gy210012 = C25687 * C25952 * C26302;
    const double gy210111 = C25690 * C25952 * C26270;
    const double gy201300 = C25936 * C25818 * C25696;
    const double gy201030 = C25687 * C26482 * C25696;
    const double gy201003 = C25687 * C25818 * C25976;
    const double gy201210 = C26318 * C25755 * C25696;
    const double gy201201 = C26318 * C25818 * C26221;
    const double gy201021 = C25687 * C26442 * C26221;
    const double gy201120 = C25690 * C26442 * C25696;
    const double gy201102 = C25690 * C25818 * C26316;
    const double gy201012 = C25687 * C25755 * C26316;
    const double gy201111 = C25690 * C25755 * C26221;
    const double gy021300 = C25791 * C25834 * C25696;
    const double gy021030 = C25685 * C26498 * C25696;
    const double gy021003 = C25685 * C25834 * C25976;
    const double gy021210 = C26303 * C25843 * C25696;
    const double gy021201 = C26303 * C25834 * C26221;
    const double gy021021 = C25685 * C26446 * C26221;
    const double gy021120 = C26271 * C26446 * C25696;
    const double gy021102 = C26271 * C25834 * C26316;
    const double gy021012 = C25685 * C25843 * C26316;
    const double gy021111 = C26271 * C25843 * C26221;
    const double gy120300 = C26024 * C25834 * C26111;
    const double gy120030 = C25686 * C26498 * C26111;
    const double gy120003 = C25686 * C25834 * C25759;
    const double gy120210 = C26314 * C25843 * C26111;
    const double gy120201 = C26314 * C25834 * C26270;
    const double gy120021 = C25686 * C26446 * C26270;
    const double gy120120 = C26287 * C26446 * C26111;
    const double gy120102 = C26287 * C25834 * C26302;
    const double gy120012 = C25686 * C25843 * C26302;
    const double gy120111 = C26287 * C25843 * C26270;
    const double gy102300 = C26024 * C25818 * C26306;
    const double gy102030 = C25686 * C26482 * C26306;
    const double gy102003 = C25686 * C25818 * C26049;
    const double gy102210 = C26314 * C25755 * C26306;
    const double gy102201 = C26314 * C25818 * C26199;
    const double gy102021 = C25686 * C26442 * C26199;
    const double gy102120 = C26287 * C26442 * C26306;
    const double gy102102 = C26287 * C25818 * C26312;
    const double gy102012 = C25686 * C25755 * C26312;
    const double gy102111 = C26287 * C25755 * C26199;
    const double gy012300 = C25791 * C25808 * C26306;
    const double gy012030 = C25685 * C26492 * C26306;
    const double gy012003 = C25685 * C25808 * C26049;
    const double gy012210 = C26303 * C25952 * C26306;
    const double gy012201 = C26303 * C25808 * C26199;
    const double gy012021 = C25685 * C26450 * C26199;
    const double gy012120 = C26271 * C26450 * C26306;
    const double gy012102 = C26271 * C25808 * C26312;
    const double gy012012 = C25685 * C25952 * C26312;
    const double gy012111 = C26271 * C25952 * C26199;
    const double gy111300 = C26024 * C25808 * C25696;
    const double gy111030 = C25686 * C26492 * C25696;
    const double gy111003 = C25686 * C25808 * C25976;
    const double gy111210 = C26314 * C25952 * C25696;
    const double gy111201 = C26314 * C25808 * C26221;
    const double gy111021 = C25686 * C26450 * C26221;
    const double gy111120 = C26287 * C26450 * C25696;
    const double gy111102 = C26287 * C25808 * C26316;
    const double gy111012 = C25686 * C25952 * C26316;
    const double gy111111 = C26287 * C25952 * C26221;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(25. / 64.) * gy030030 - std::sqrt(225. / 64.) * gy030210 -
         std::sqrt(225. / 64.) * gy210030 + std::sqrt(2025. / 64.) * gy210210);
    gy[(Ai + 0) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(675. / 8.0) * gy210111 - std::sqrt(75. / 8.0) * gy030111);
    gy[(Ai + 0) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(15. / 64.) * gy030030 + std::sqrt(15. / 64.) * gy030210 +
         std::sqrt(30. / 8.0) * gy030012 - std::sqrt(135. / 64.) * gy210030 -
         std::sqrt(135. / 64.) * gy210210 - std::sqrt(270. / 8.0) * gy210012);
    gy[(Ai + 0) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(11.25 / 8.0) * gy030201 - std::sqrt(5.0 / 8.0) * gy030003 +
         std::sqrt(11.25 / 8.0) * gy030021 + std::sqrt(45. / 8.0) * gy210003 -
         std::sqrt(101.25 / 8.0) * gy210201 -
         std::sqrt(101.25 / 8.0) * gy210021);
    gy[(Ai + 0) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(15. / 64.) * gy030300 + std::sqrt(15. / 64.) * gy030120 -
         std::sqrt(30. / 8.0) * gy030102 - std::sqrt(135. / 64.) * gy210300 -
         std::sqrt(135. / 64.) * gy210120 + std::sqrt(270. / 8.0) * gy210102);
    gy[(Ai + 0) * matrix_size + Bi + 5] +=
        cc *
        (std::sqrt(37.5 / 8.0) * gy030021 - std::sqrt(37.5 / 8.0) * gy030201 +
         std::sqrt(337.5 / 8.0) * gy210201 - std::sqrt(337.5 / 8.0) * gy210021);
    gy[(Ai + 0) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(225. / 64.) * gy210300 -
         (std::sqrt(225. / 64.) * gy030120 + std::sqrt(25. / 64.) * gy030300) +
         std::sqrt(2025. / 64.) * gy210120);
    gy[(Ai + 1) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(675. / 8.0) * gy111210 - std::sqrt(75. / 8.0) * gy111030);
    gy[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(225.) * gy111111;
    gy[(Ai + 1) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(90.) * gy111012 + std::sqrt(45. / 8.0) * gy111210 +
               std::sqrt(45. / 8.0) * gy111030);
    gy[(Ai + 1) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(15.0) * gy111003 - std::sqrt(33.75) * gy111201 -
              std::sqrt(33.75) * gy111021);
    gy[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(90.) * gy111102 - (std::sqrt(45. / 8.0) * gy111120 +
                                           std::sqrt(45. / 8.0) * gy111300));
    gy[(Ai + 1) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(112.5) * gy111201 - std::sqrt(112.5) * gy111021);
    gy[(Ai + 1) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(75. / 8.0) * gy111300 + std::sqrt(675. / 8.0) * gy111120);
    gy[(Ai + 2) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(15. / 64.) * gy030030 - std::sqrt(135. / 64.) * gy030210 +
         std::sqrt(15. / 64.) * gy210030 - std::sqrt(135. / 64.) * gy210210 +
         std::sqrt(30. / 8.0) * gy012030 - std::sqrt(270. / 8.0) * gy012210);
    gy[(Ai + 2) * matrix_size + Bi + 1] +=
        -cc * (std::sqrt(90.) * gy012111 + std::sqrt(45. / 8.0) * gy210111 +
               std::sqrt(45. / 8.0) * gy030111);
    gy[(Ai + 2) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(9. / 64.) * gy030030 + std::sqrt(9. / 64.) * gy030210 +
              std::sqrt(18. / 8.0) * gy030012 + std::sqrt(9. / 64.) * gy210030 +
              std::sqrt(9. / 64.) * gy210210 + std::sqrt(18. / 8.0) * gy210012 +
              std::sqrt(18. / 8.0) * gy012030 +
              std::sqrt(18. / 8.0) * gy012210 + std::sqrt(36.) * gy012012);
    gy[(Ai + 2) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(6.75 / 8.0) * gy030201 - std::sqrt(3.0 / 8.0) * gy030003 +
         std::sqrt(6.75 / 8.0) * gy030021 - std::sqrt(3.0 / 8.0) * gy210003 +
         std::sqrt(6.75 / 8.0) * gy210201 + std::sqrt(6.75 / 8.0) * gy210021 -
         std::sqrt(6.0) * gy012003 + std::sqrt(13.5) * gy012201 +
         std::sqrt(13.5) * gy012021);
    gy[(Ai + 2) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(9. / 64.) * gy030300 + std::sqrt(9. / 64.) * gy030120 -
              std::sqrt(18. / 8.0) * gy030102 + std::sqrt(9. / 64.) * gy210300 +
              std::sqrt(9. / 64.) * gy210120 - std::sqrt(18. / 8.0) * gy210102 +
              std::sqrt(18. / 8.0) * gy012300 +
              std::sqrt(18. / 8.0) * gy012120 - std::sqrt(36.) * gy012102);
    gy[(Ai + 2) * matrix_size + Bi + 5] +=
        cc *
        (std::sqrt(22.5 / 8.0) * gy030021 - std::sqrt(22.5 / 8.0) * gy030201 -
         std::sqrt(22.5 / 8.0) * gy210201 + std::sqrt(22.5 / 8.0) * gy210021 -
         std::sqrt(45.) * gy012201 + std::sqrt(45.) * gy012021);
    gy[(Ai + 2) * matrix_size + Bi + 6] +=
        -cc *
        (std::sqrt(270. / 8.0) * gy012120 + std::sqrt(30. / 8.0) * gy012300 +
         std::sqrt(135. / 64.) * gy210120 + std::sqrt(15. / 64.) * gy210300 +
         std::sqrt(135. / 64.) * gy030120 + std::sqrt(15. / 64.) * gy030300);
    gy[(Ai + 3) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gy003210 - std::sqrt(5.0 / 8.0) * gy003030 +
         std::sqrt(11.25 / 8.0) * gy201030 -
         std::sqrt(101.25 / 8.0) * gy201210 +
         std::sqrt(11.25 / 8.0) * gy021030 -
         std::sqrt(101.25 / 8.0) * gy021210);
    gy[(Ai + 3) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(15.0) * gy003111 - std::sqrt(33.75) * gy201111 -
              std::sqrt(33.75) * gy021111);
    gy[(Ai + 3) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(6.75 / 8.0) * gy201030 -
              (std::sqrt(6.0) * gy003012 + std::sqrt(3.0 / 8.0) * gy003210 +
               std::sqrt(3.0 / 8.0) * gy003030) +
              std::sqrt(6.75 / 8.0) * gy201210 + std::sqrt(13.5) * gy201012 +
              std::sqrt(6.75 / 8.0) * gy021030 +
              std::sqrt(6.75 / 8.0) * gy021210 + std::sqrt(13.5) * gy021012);
    gy[(Ai + 3) * matrix_size + Bi + 3] +=
        cc * (gy003003 - 1.5 * gy003201 - 1.5 * gy003021 - 1.5 * gy201003 +
              2.25 * gy201201 + 2.25 * gy201021 - 1.5 * gy021003 +
              2.25 * gy021201 + 2.25 * gy021021);
    gy[(Ai + 3) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(6.0) * gy003102 -
         (std::sqrt(3.0 / 8.0) * gy003120 + std::sqrt(3.0 / 8.0) * gy003300) +
         std::sqrt(6.75 / 8.0) * gy201300 + std::sqrt(6.75 / 8.0) * gy201120 -
         std::sqrt(13.5) * gy201102 + std::sqrt(6.75 / 8.0) * gy021300 +
         std::sqrt(6.75 / 8.0) * gy021120 - std::sqrt(13.5) * gy021102);
    gy[(Ai + 3) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(7.5) * gy003201 - std::sqrt(7.5) * gy003021 -
              std::sqrt(16.875) * gy201201 + std::sqrt(16.875) * gy201021 -
              std::sqrt(16.875) * gy021201 + std::sqrt(16.875) * gy021021);
    gy[(Ai + 3) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gy003300 + std::sqrt(45.0 / 8.0) * gy003120 -
         std::sqrt(11.25 / 8.0) * gy201300 -
         std::sqrt(101.25 / 8.0) * gy201120 -
         std::sqrt(11.25 / 8.0) * gy021300 -
         std::sqrt(101.25 / 8.0) * gy021120);
    gy[(Ai + 4) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(15. / 64.) * gy300030 - std::sqrt(135. / 64.) * gy300210 +
         std::sqrt(15. / 64.) * gy120030 - std::sqrt(135. / 64.) * gy120210 -
         std::sqrt(30. / 8.0) * gy102030 + std::sqrt(270. / 8.0) * gy102210);
    gy[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(90.) * gy102111 - (std::sqrt(45. / 8.0) * gy120111 +
                                           std::sqrt(45. / 8.0) * gy300111));
    gy[(Ai + 4) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(9. / 64.) * gy300030 + std::sqrt(9. / 64.) * gy300210 +
              std::sqrt(18. / 8.0) * gy300012 + std::sqrt(9. / 64.) * gy120030 +
              std::sqrt(9. / 64.) * gy120210 + std::sqrt(18. / 8.0) * gy120012 -
              std::sqrt(18. / 8.0) * gy102030 -
              std::sqrt(18. / 8.0) * gy102210 - std::sqrt(36.) * gy102012);
    gy[(Ai + 4) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(6.75 / 8.0) * gy300201 - std::sqrt(3.0 / 8.0) * gy300003 +
         std::sqrt(6.75 / 8.0) * gy300021 - std::sqrt(3.0 / 8.0) * gy120003 +
         std::sqrt(6.75 / 8.0) * gy120201 + std::sqrt(6.75 / 8.0) * gy120021 +
         std::sqrt(6.0) * gy102003 - std::sqrt(13.5) * gy102201 -
         std::sqrt(13.5) * gy102021);
    gy[(Ai + 4) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(9. / 64.) * gy300300 + std::sqrt(9. / 64.) * gy300120 -
              std::sqrt(18. / 8.0) * gy300102 + std::sqrt(9. / 64.) * gy120300 +
              std::sqrt(9. / 64.) * gy120120 - std::sqrt(18. / 8.0) * gy120102 -
              std::sqrt(18. / 8.0) * gy102300 -
              std::sqrt(18. / 8.0) * gy102120 + std::sqrt(36.) * gy102102);
    gy[(Ai + 4) * matrix_size + Bi + 5] +=
        cc *
        (std::sqrt(22.5 / 8.0) * gy300021 - std::sqrt(22.5 / 8.0) * gy300201 -
         std::sqrt(22.5 / 8.0) * gy120201 + std::sqrt(22.5 / 8.0) * gy120021 +
         std::sqrt(45.) * gy102201 - std::sqrt(45.) * gy102021);
    gy[(Ai + 4) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(30. / 8.0) * gy102300 -
         (std::sqrt(135. / 64.) * gy120120 + std::sqrt(15. / 64.) * gy120300 +
          std::sqrt(135. / 64.) * gy300120 + std::sqrt(15. / 64.) * gy300300) +
         std::sqrt(270. / 8.0) * gy102120);
    gy[(Ai + 5) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(337.5 / 8.0) * gy201210 - std::sqrt(37.5 / 8.0) * gy201030 +
         std::sqrt(37.5 / 8.0) * gy021030 - std::sqrt(337.5 / 8.0) * gy021210);
    gy[(Ai + 5) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(112.5) * gy201111 - std::sqrt(112.5) * gy021111);
    gy[(Ai + 5) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(22.5 / 8.0) * gy021030 -
              (std::sqrt(45.) * gy201012 + std::sqrt(22.5 / 8.0) * gy201210 +
               std::sqrt(22.5 / 8.0) * gy201030) +
              std::sqrt(22.5 / 8.0) * gy021210 + std::sqrt(45.) * gy021012);
    gy[(Ai + 5) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(7.5) * gy201003 - std::sqrt(16.875) * gy201201 -
              std::sqrt(16.875) * gy201021 - std::sqrt(7.5) * gy021003 +
              std::sqrt(16.875) * gy021201 + std::sqrt(16.875) * gy021021);
    gy[(Ai + 5) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(45.) * gy201102 -
         (std::sqrt(22.5 / 8.0) * gy201120 + std::sqrt(22.5 / 8.0) * gy201300) +
         std::sqrt(22.5 / 8.0) * gy021300 + std::sqrt(22.5 / 8.0) * gy021120 -
         std::sqrt(45.) * gy021102);
    gy[(Ai + 5) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(56.25) * gy201201 - std::sqrt(56.25) * gy201021 -
              std::sqrt(56.25) * gy021201 + std::sqrt(56.25) * gy021021);
    gy[(Ai + 5) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(37.5 / 8.0) * gy201300 + std::sqrt(337.5 / 8.0) * gy201120 -
         std::sqrt(37.5 / 8.0) * gy021300 - std::sqrt(337.5 / 8.0) * gy021120);
    gy[(Ai + 6) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(225. / 64.) * gy300210 - std::sqrt(25. / 64.) * gy300030 -
         std::sqrt(225. / 64.) * gy120030 + std::sqrt(2025. / 64.) * gy120210);
    gy[(Ai + 6) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(75. / 8.0) * gy300111 + std::sqrt(675. / 8.0) * gy120111);
    gy[(Ai + 6) * matrix_size + Bi + 2] +=
        -cc *
        (std::sqrt(270. / 8.0) * gy120012 + std::sqrt(135. / 64.) * gy120210 +
         std::sqrt(135. / 64.) * gy120030 + std::sqrt(30. / 8.0) * gy300012 +
         std::sqrt(15. / 64.) * gy300210 + std::sqrt(15. / 64.) * gy300030);
    gy[(Ai + 6) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gy300003 - std::sqrt(11.25 / 8.0) * gy300201 -
         std::sqrt(11.25 / 8.0) * gy300021 + std::sqrt(45.0 / 8.0) * gy120003 -
         std::sqrt(101.25 / 8.0) * gy120201 -
         std::sqrt(101.25 / 8.0) * gy120021);
    gy[(Ai + 6) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(30. / 8.0) * gy300102 -
         (std::sqrt(15. / 64.) * gy300120 + std::sqrt(15. / 64.) * gy300300) -
         std::sqrt(135. / 64.) * gy120300 - std::sqrt(135. / 64.) * gy120120 +
         std::sqrt(270. / 8.0) * gy120102);
    gy[(Ai + 6) * matrix_size + Bi + 5] +=
        cc *
        (std::sqrt(37.5 / 8.0) * gy300201 - std::sqrt(37.5 / 8.0) * gy300021 +
         std::sqrt(337.5 / 8.0) * gy120201 - std::sqrt(337.5 / 8.0) * gy120021);
    gy[(Ai + 6) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(25. / 64.) * gy300300 + std::sqrt(225. / 64.) * gy300120 +
         std::sqrt(225. / 64.) * gy120300 + std::sqrt(2025. / 64.) * gy120120);
    const double gz300300 = C25694 * C26111 * C25888;
    const double gz300030 = C25688 * C25744 * C25888;
    const double gz300003 = C25688 * C26111 * C26483;
    const double gz300210 = C25691 * C26268 * C25888;
    const double gz300201 = C25691 * C26111 * C25770;
    const double gz300021 = C25688 * C26301 * C25770;
    const double gz300120 = C25689 * C26301 * C25888;
    const double gz300102 = C25689 * C26111 * C26443;
    const double gz300012 = C25688 * C26268 * C26443;
    const double gz300111 = C25689 * C26268 * C25770;
    const double gz030300 = C25791 * C25790 * C25888;
    const double gz030030 = C25685 * C25812 * C25888;
    const double gz030003 = C25685 * C25790 * C26483;
    const double gz030210 = C26303 * C26177 * C25888;
    const double gz030201 = C26303 * C25790 * C25770;
    const double gz030021 = C25685 * C26305 * C25770;
    const double gz030120 = C26271 * C26305 * C25888;
    const double gz030102 = C26271 * C25790 * C26443;
    const double gz030012 = C25685 * C26177 * C26443;
    const double gz030111 = C26271 * C26177 * C25770;
    const double gz003300 = C25791 * C26111 * C25911;
    const double gz003030 = C25685 * C25744 * C25911;
    const double gz003003 =
        C25685 * C26111 *
        ((C26447 * C25763) / C25698 +
         (3 * C26448 + 2 * C25916 + 2 * ae * C26307) / C25707);
    const double gz003210 = C26303 * C26268 * C25911;
    const double gz003201 = C26303 * C26111 * C25916;
    const double gz003021 = C25685 * C26301 * C25916;
    const double gz003120 = C26271 * C26301 * C25911;
    const double gz003102 = C26271 * C26111 * C26447;
    const double gz003012 = C25685 * C26268 * C26447;
    const double gz003111 = C26271 * C26268 * C25916;
    const double gz210300 = C25936 * C25695 * C25888;
    const double gz210030 = C25687 * C25945 * C25888;
    const double gz210003 = C25687 * C25695 * C26483;
    const double gz210210 = C26318 * C26215 * C25888;
    const double gz210201 = C26318 * C25695 * C25770;
    const double gz210021 = C25687 * C26315 * C25770;
    const double gz210120 = C25690 * C26315 * C25888;
    const double gz210102 = C25690 * C25695 * C26443;
    const double gz210012 = C25687 * C26215 * C26443;
    const double gz210111 = C25690 * C26215 * C25770;
    const double gz201300 = C25936 * C26111 * C25876;
    const double gz201030 = C25687 * C25744 * C25876;
    const double gz201003 = C25687 * C26111 * C26493;
    const double gz201210 = C26318 * C26268 * C25876;
    const double gz201201 = C26318 * C26111 * C25983;
    const double gz201021 = C25687 * C26301 * C25983;
    const double gz201120 = C25690 * C26301 * C25876;
    const double gz201102 = C25690 * C26111 * C26451;
    const double gz201012 = C25687 * C26268 * C26451;
    const double gz201111 = C25690 * C26268 * C25983;
    const double gz021300 = C25791 * C26304 * C25876;
    const double gz021030 = C25685 * C26003 * C25876;
    const double gz021003 = C25685 * C26304 * C26493;
    const double gz021210 = C26303 * C26174 * C25876;
    const double gz021201 = C26303 * C26304 * C25983;
    const double gz021021 = C25685 * C26311 * C25983;
    const double gz021120 = C26271 * C26311 * C25876;
    const double gz021102 = C26271 * C26304 * C26451;
    const double gz021012 = C25685 * C26174 * C26451;
    const double gz021111 = C26271 * C26174 * C25983;
    const double gz120300 = C26024 * C26304 * C25888;
    const double gz120030 = C25686 * C26003 * C25888;
    const double gz120003 = C25686 * C26304 * C26483;
    const double gz120210 = C26314 * C26174 * C25888;
    const double gz120201 = C26314 * C26304 * C25770;
    const double gz120021 = C25686 * C26311 * C25770;
    const double gz120120 = C26287 * C26311 * C25888;
    const double gz120102 = C26287 * C26304 * C26443;
    const double gz120012 = C25686 * C26174 * C26443;
    const double gz120111 = C26287 * C26174 * C25770;
    const double gz102300 = C26024 * C26111 * C25904;
    const double gz102030 = C25686 * C25744 * C25904;
    const double gz102003 = C25686 * C26111 * C26499;
    const double gz102210 = C26314 * C26268 * C25904;
    const double gz102201 = C26314 * C26111 * C25913;
    const double gz102021 = C25686 * C26301 * C25913;
    const double gz102120 = C26287 * C26301 * C25904;
    const double gz102102 = C26287 * C26111 * C26448;
    const double gz102012 = C25686 * C26268 * C26448;
    const double gz102111 = C26287 * C26268 * C25913;
    const double gz012300 = C25791 * C25695 * C25904;
    const double gz012030 = C25685 * C25945 * C25904;
    const double gz012003 = C25685 * C25695 * C26499;
    const double gz012210 = C26303 * C26215 * C25904;
    const double gz012201 = C26303 * C25695 * C25913;
    const double gz012021 = C25685 * C26315 * C25913;
    const double gz012120 = C26271 * C26315 * C25904;
    const double gz012102 = C26271 * C25695 * C26448;
    const double gz012012 = C25685 * C26215 * C26448;
    const double gz012111 = C26271 * C26215 * C25913;
    const double gz111300 = C26024 * C25695 * C25876;
    const double gz111030 = C25686 * C25945 * C25876;
    const double gz111003 = C25686 * C25695 * C26493;
    const double gz111210 = C26314 * C26215 * C25876;
    const double gz111201 = C26314 * C25695 * C25983;
    const double gz111021 = C25686 * C26315 * C25983;
    const double gz111120 = C26287 * C26315 * C25876;
    const double gz111102 = C26287 * C25695 * C26451;
    const double gz111012 = C25686 * C26215 * C26451;
    const double gz111111 = C26287 * C26215 * C25983;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(25. / 64.) * gz030030 - std::sqrt(225. / 64.) * gz030210 -
         std::sqrt(225. / 64.) * gz210030 + std::sqrt(2025. / 64.) * gz210210);
    gz[(Ai + 0) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(675. / 8.0) * gz210111 - std::sqrt(75. / 8.0) * gz030111);
    gz[(Ai + 0) * matrix_size + Bi + 2] +=
        cc *
        (std::sqrt(15. / 64.) * gz030030 + std::sqrt(15. / 64.) * gz030210 +
         std::sqrt(30. / 8.0) * gz030012 - std::sqrt(135. / 64.) * gz210030 -
         std::sqrt(135. / 64.) * gz210210 - std::sqrt(270. / 8.0) * gz210012);
    gz[(Ai + 0) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(11.25 / 8.0) * gz030201 - std::sqrt(5.0 / 8.0) * gz030003 +
         std::sqrt(11.25 / 8.0) * gz030021 + std::sqrt(45. / 8.0) * gz210003 -
         std::sqrt(101.25 / 8.0) * gz210201 -
         std::sqrt(101.25 / 8.0) * gz210021);
    gz[(Ai + 0) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(15. / 64.) * gz030300 + std::sqrt(15. / 64.) * gz030120 -
         std::sqrt(30. / 8.0) * gz030102 - std::sqrt(135. / 64.) * gz210300 -
         std::sqrt(135. / 64.) * gz210120 + std::sqrt(270. / 8.0) * gz210102);
    gz[(Ai + 0) * matrix_size + Bi + 5] +=
        cc *
        (std::sqrt(37.5 / 8.0) * gz030021 - std::sqrt(37.5 / 8.0) * gz030201 +
         std::sqrt(337.5 / 8.0) * gz210201 - std::sqrt(337.5 / 8.0) * gz210021);
    gz[(Ai + 0) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(225. / 64.) * gz210300 -
         (std::sqrt(225. / 64.) * gz030120 + std::sqrt(25. / 64.) * gz030300) +
         std::sqrt(2025. / 64.) * gz210120);
    gz[(Ai + 1) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(675. / 8.0) * gz111210 - std::sqrt(75. / 8.0) * gz111030);
    gz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(225.) * gz111111;
    gz[(Ai + 1) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(90.) * gz111012 + std::sqrt(45. / 8.0) * gz111210 +
               std::sqrt(45. / 8.0) * gz111030);
    gz[(Ai + 1) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(15.0) * gz111003 - std::sqrt(33.75) * gz111201 -
              std::sqrt(33.75) * gz111021);
    gz[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(90.) * gz111102 - (std::sqrt(45. / 8.0) * gz111120 +
                                           std::sqrt(45. / 8.0) * gz111300));
    gz[(Ai + 1) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(112.5) * gz111201 - std::sqrt(112.5) * gz111021);
    gz[(Ai + 1) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(75. / 8.0) * gz111300 + std::sqrt(675. / 8.0) * gz111120);
    gz[(Ai + 2) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(15. / 64.) * gz030030 - std::sqrt(135. / 64.) * gz030210 +
         std::sqrt(15. / 64.) * gz210030 - std::sqrt(135. / 64.) * gz210210 +
         std::sqrt(30. / 8.0) * gz012030 - std::sqrt(270. / 8.0) * gz012210);
    gz[(Ai + 2) * matrix_size + Bi + 1] +=
        -cc * (std::sqrt(90.) * gz012111 + std::sqrt(45. / 8.0) * gz210111 +
               std::sqrt(45. / 8.0) * gz030111);
    gz[(Ai + 2) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(9. / 64.) * gz030030 + std::sqrt(9. / 64.) * gz030210 +
              std::sqrt(18. / 8.0) * gz030012 + std::sqrt(9. / 64.) * gz210030 +
              std::sqrt(9. / 64.) * gz210210 + std::sqrt(18. / 8.0) * gz210012 +
              std::sqrt(18. / 8.0) * gz012030 +
              std::sqrt(18. / 8.0) * gz012210 + std::sqrt(36.) * gz012012);
    gz[(Ai + 2) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(6.75 / 8.0) * gz030201 - std::sqrt(3.0 / 8.0) * gz030003 +
         std::sqrt(6.75 / 8.0) * gz030021 - std::sqrt(3.0 / 8.0) * gz210003 +
         std::sqrt(6.75 / 8.0) * gz210201 + std::sqrt(6.75 / 8.0) * gz210021 -
         std::sqrt(6.0) * gz012003 + std::sqrt(13.5) * gz012201 +
         std::sqrt(13.5) * gz012021);
    gz[(Ai + 2) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(9. / 64.) * gz030300 + std::sqrt(9. / 64.) * gz030120 -
              std::sqrt(18. / 8.0) * gz030102 + std::sqrt(9. / 64.) * gz210300 +
              std::sqrt(9. / 64.) * gz210120 - std::sqrt(18. / 8.0) * gz210102 +
              std::sqrt(18. / 8.0) * gz012300 +
              std::sqrt(18. / 8.0) * gz012120 - std::sqrt(36.) * gz012102);
    gz[(Ai + 2) * matrix_size + Bi + 5] +=
        cc *
        (std::sqrt(22.5 / 8.0) * gz030021 - std::sqrt(22.5 / 8.0) * gz030201 -
         std::sqrt(22.5 / 8.0) * gz210201 + std::sqrt(22.5 / 8.0) * gz210021 -
         std::sqrt(45.) * gz012201 + std::sqrt(45.) * gz012021);
    gz[(Ai + 2) * matrix_size + Bi + 6] +=
        -cc *
        (std::sqrt(270. / 8.0) * gz012120 + std::sqrt(30. / 8.0) * gz012300 +
         std::sqrt(135. / 64.) * gz210120 + std::sqrt(15. / 64.) * gz210300 +
         std::sqrt(135. / 64.) * gz030120 + std::sqrt(15. / 64.) * gz030300);
    gz[(Ai + 3) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gz003210 - std::sqrt(5.0 / 8.0) * gz003030 +
         std::sqrt(11.25 / 8.0) * gz201030 -
         std::sqrt(101.25 / 8.0) * gz201210 +
         std::sqrt(11.25 / 8.0) * gz021030 -
         std::sqrt(101.25 / 8.0) * gz021210);
    gz[(Ai + 3) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(15.0) * gz003111 - std::sqrt(33.75) * gz201111 -
              std::sqrt(33.75) * gz021111);
    gz[(Ai + 3) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(6.75 / 8.0) * gz201030 -
              (std::sqrt(6.0) * gz003012 + std::sqrt(3.0 / 8.0) * gz003210 +
               std::sqrt(3.0 / 8.0) * gz003030) +
              std::sqrt(6.75 / 8.0) * gz201210 + std::sqrt(13.5) * gz201012 +
              std::sqrt(6.75 / 8.0) * gz021030 +
              std::sqrt(6.75 / 8.0) * gz021210 + std::sqrt(13.5) * gz021012);
    gz[(Ai + 3) * matrix_size + Bi + 3] +=
        cc * (gz003003 - 1.5 * gz003201 - 1.5 * gz003021 - 1.5 * gz201003 +
              2.25 * gz201201 + 2.25 * gz201021 - 1.5 * gz021003 +
              2.25 * gz021201 + 2.25 * gz021021);
    gz[(Ai + 3) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(6.0) * gz003102 -
         (std::sqrt(3.0 / 8.0) * gz003120 + std::sqrt(3.0 / 8.0) * gz003300) +
         std::sqrt(6.75 / 8.0) * gz201300 + std::sqrt(6.75 / 8.0) * gz201120 -
         std::sqrt(13.5) * gz201102 + std::sqrt(6.75 / 8.0) * gz021300 +
         std::sqrt(6.75 / 8.0) * gz021120 - std::sqrt(13.5) * gz021102);
    gz[(Ai + 3) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(7.5) * gz003201 - std::sqrt(7.5) * gz003021 -
              std::sqrt(16.875) * gz201201 + std::sqrt(16.875) * gz201021 -
              std::sqrt(16.875) * gz021201 + std::sqrt(16.875) * gz021021);
    gz[(Ai + 3) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gz003300 + std::sqrt(45.0 / 8.0) * gz003120 -
         std::sqrt(11.25 / 8.0) * gz201300 -
         std::sqrt(101.25 / 8.0) * gz201120 -
         std::sqrt(11.25 / 8.0) * gz021300 -
         std::sqrt(101.25 / 8.0) * gz021120);
    gz[(Ai + 4) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(15. / 64.) * gz300030 - std::sqrt(135. / 64.) * gz300210 +
         std::sqrt(15. / 64.) * gz120030 - std::sqrt(135. / 64.) * gz120210 -
         std::sqrt(30. / 8.0) * gz102030 + std::sqrt(270. / 8.0) * gz102210);
    gz[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(90.) * gz102111 - (std::sqrt(45. / 8.0) * gz120111 +
                                           std::sqrt(45. / 8.0) * gz300111));
    gz[(Ai + 4) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(9. / 64.) * gz300030 + std::sqrt(9. / 64.) * gz300210 +
              std::sqrt(18. / 8.0) * gz300012 + std::sqrt(9. / 64.) * gz120030 +
              std::sqrt(9. / 64.) * gz120210 + std::sqrt(18. / 8.0) * gz120012 -
              std::sqrt(18. / 8.0) * gz102030 -
              std::sqrt(18. / 8.0) * gz102210 - std::sqrt(36.) * gz102012);
    gz[(Ai + 4) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(6.75 / 8.0) * gz300201 - std::sqrt(3.0 / 8.0) * gz300003 +
         std::sqrt(6.75 / 8.0) * gz300021 - std::sqrt(3.0 / 8.0) * gz120003 +
         std::sqrt(6.75 / 8.0) * gz120201 + std::sqrt(6.75 / 8.0) * gz120021 +
         std::sqrt(6.0) * gz102003 - std::sqrt(13.5) * gz102201 -
         std::sqrt(13.5) * gz102021);
    gz[(Ai + 4) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(9. / 64.) * gz300300 + std::sqrt(9. / 64.) * gz300120 -
              std::sqrt(18. / 8.0) * gz300102 + std::sqrt(9. / 64.) * gz120300 +
              std::sqrt(9. / 64.) * gz120120 - std::sqrt(18. / 8.0) * gz120102 -
              std::sqrt(18. / 8.0) * gz102300 -
              std::sqrt(18. / 8.0) * gz102120 + std::sqrt(36.) * gz102102);
    gz[(Ai + 4) * matrix_size + Bi + 5] +=
        cc *
        (std::sqrt(22.5 / 8.0) * gz300021 - std::sqrt(22.5 / 8.0) * gz300201 -
         std::sqrt(22.5 / 8.0) * gz120201 + std::sqrt(22.5 / 8.0) * gz120021 +
         std::sqrt(45.) * gz102201 - std::sqrt(45.) * gz102021);
    gz[(Ai + 4) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(30. / 8.0) * gz102300 -
         (std::sqrt(135. / 64.) * gz120120 + std::sqrt(15. / 64.) * gz120300 +
          std::sqrt(135. / 64.) * gz300120 + std::sqrt(15. / 64.) * gz300300) +
         std::sqrt(270. / 8.0) * gz102120);
    gz[(Ai + 5) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(337.5 / 8.0) * gz201210 - std::sqrt(37.5 / 8.0) * gz201030 +
         std::sqrt(37.5 / 8.0) * gz021030 - std::sqrt(337.5 / 8.0) * gz021210);
    gz[(Ai + 5) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(112.5) * gz201111 - std::sqrt(112.5) * gz021111);
    gz[(Ai + 5) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(22.5 / 8.0) * gz021030 -
              (std::sqrt(45.) * gz201012 + std::sqrt(22.5 / 8.0) * gz201210 +
               std::sqrt(22.5 / 8.0) * gz201030) +
              std::sqrt(22.5 / 8.0) * gz021210 + std::sqrt(45.) * gz021012);
    gz[(Ai + 5) * matrix_size + Bi + 3] +=
        cc * (std::sqrt(7.5) * gz201003 - std::sqrt(16.875) * gz201201 -
              std::sqrt(16.875) * gz201021 - std::sqrt(7.5) * gz021003 +
              std::sqrt(16.875) * gz021201 + std::sqrt(16.875) * gz021021);
    gz[(Ai + 5) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(45.) * gz201102 -
         (std::sqrt(22.5 / 8.0) * gz201120 + std::sqrt(22.5 / 8.0) * gz201300) +
         std::sqrt(22.5 / 8.0) * gz021300 + std::sqrt(22.5 / 8.0) * gz021120 -
         std::sqrt(45.) * gz021102);
    gz[(Ai + 5) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(56.25) * gz201201 - std::sqrt(56.25) * gz201021 -
              std::sqrt(56.25) * gz021201 + std::sqrt(56.25) * gz021021);
    gz[(Ai + 5) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(37.5 / 8.0) * gz201300 + std::sqrt(337.5 / 8.0) * gz201120 -
         std::sqrt(37.5 / 8.0) * gz021300 - std::sqrt(337.5 / 8.0) * gz021120);
    gz[(Ai + 6) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(225. / 64.) * gz300210 - std::sqrt(25. / 64.) * gz300030 -
         std::sqrt(225. / 64.) * gz120030 + std::sqrt(2025. / 64.) * gz120210);
    gz[(Ai + 6) * matrix_size + Bi + 1] +=
        cc *
        (std::sqrt(75. / 8.0) * gz300111 + std::sqrt(675. / 8.0) * gz120111);
    gz[(Ai + 6) * matrix_size + Bi + 2] +=
        -cc *
        (std::sqrt(270. / 8.0) * gz120012 + std::sqrt(135. / 64.) * gz120210 +
         std::sqrt(135. / 64.) * gz120030 + std::sqrt(30. / 8.0) * gz300012 +
         std::sqrt(15. / 64.) * gz300210 + std::sqrt(15. / 64.) * gz300030);
    gz[(Ai + 6) * matrix_size + Bi + 3] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gz300003 - std::sqrt(11.25 / 8.0) * gz300201 -
         std::sqrt(11.25 / 8.0) * gz300021 + std::sqrt(45.0 / 8.0) * gz120003 -
         std::sqrt(101.25 / 8.0) * gz120201 -
         std::sqrt(101.25 / 8.0) * gz120021);
    gz[(Ai + 6) * matrix_size + Bi + 4] +=
        cc *
        (std::sqrt(30. / 8.0) * gz300102 -
         (std::sqrt(15. / 64.) * gz300120 + std::sqrt(15. / 64.) * gz300300) -
         std::sqrt(135. / 64.) * gz120300 - std::sqrt(135. / 64.) * gz120120 +
         std::sqrt(270. / 8.0) * gz120102);
    gz[(Ai + 6) * matrix_size + Bi + 5] +=
        cc *
        (std::sqrt(37.5 / 8.0) * gz300201 - std::sqrt(37.5 / 8.0) * gz300021 +
         std::sqrt(337.5 / 8.0) * gz120201 - std::sqrt(337.5 / 8.0) * gz120021);
    gz[(Ai + 6) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(25. / 64.) * gz300300 + std::sqrt(225. / 64.) * gz300120 +
         std::sqrt(225. / 64.) * gz120300 + std::sqrt(2025. / 64.) * gz120120);
}
