/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_21_3(double ae,
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
    const double C2809 = ae + be;
    const double C2816 = 2. * Pi;
    const double C2815 = ae * be;
    const double C2814 = zA - zB;
    const double C2813 = yA - yB;
    const double C2812 = xA - xB;
    const double C2811 = bs[1];
    const double C2819 = std::pow(C2814, 2);
    const double C2818 = std::pow(C2813, 2);
    const double C2817 = std::pow(C2812, 2);
    const double C2820 = C2817 + C2818;
    const double C2821 = C2820 + C2819;
    const double C2822 = C2821 * C2815;
    const double C2823 = C2822 / C2809;
    const double C2824 = -C2823;
    const double C2825 = std::exp(C2824);
    const double C2826 = C2825 * C2816;
    const double C2827 = C2811 * C2826;
    const double C2833 = be * xB;
    const double C2832 = ae * xA;
    const double C2831 = be * C2812;
    const double C2830 = bs[2];
    const double C2836 = C2832 + C2833;
    const double C2835 = C2827 * C2831;
    const double C2834 = C2830 * C2826;
    const double C2838 = C2836 / C2809;
    const double C2837 = C2835 / C2809;
    const double C2840 = C2838 - xC;
    const double C2839 = -C2837;
    const double C2842 = C2840 * C2834;
    const double C2841 = C2839 / C2809;
    const double C2843 = C2842 / C2809;
    const double C2844 = C2841 - C2843;
    const double C2849 = C2812 * C2827;
    const double C2850 = C2849 / C2809;
    const double C2851 = C2844 + C2850;
    const double C2859 = be * yB;
    const double C2858 = ae * yA;
    const double C2857 = be * C2813;
    const double C2861 = C2858 + C2859;
    const double C2860 = C2827 * C2857;
    const double C2863 = C2861 / C2809;
    const double C2862 = C2860 / C2809;
    const double C2865 = C2863 - yC;
    const double C2864 = -C2862;
    const double C2867 = C2865 * C2834;
    const double C2866 = C2864 / C2809;
    const double C2868 = C2867 / C2809;
    const double C2869 = C2866 - C2868;
    const double C2871 = C2813 * C2827;
    const double C2872 = C2871 / C2809;
    const double C2873 = C2869 + C2872;
    const double C2877 = be * zB;
    const double C2876 = ae * zA;
    const double C2875 = be * C2814;
    const double C2879 = C2876 + C2877;
    const double C2878 = C2827 * C2875;
    const double C2881 = C2879 / C2809;
    const double C2880 = C2878 / C2809;
    const double C2883 = C2881 - zC;
    const double C2882 = -C2880;
    const double C2885 = C2883 * C2834;
    const double C2884 = C2882 / C2809;
    const double C2886 = C2885 / C2809;
    const double C2887 = C2884 - C2886;
    const double C2906 = C2834 * C2857;
    const double C2905 = C2814 * C2827;
    const double C2904 = be * zB;
    const double C2903 = ae * zA;
    const double C2902 = be * C2814;
    const double C2901 = C2813 * C2834;
    const double C2900 = C2813 * C2827;
    const double C2899 = be * yB;
    const double C2898 = ae * yA;
    const double C2897 = be * C2813;
    const double C2896 = C2812 * C2834;
    const double C2895 = bs[3];
    const double C2894 = C2834 * C2831;
    const double C2893 = 2. * C2809;
    const double C2892 = C2834 / C2809;
    const double C2891 = C2827 / C2809;
    const double C2890 = C2812 * C2827;
    const double C2889 = bs[2];
    const double C2918 = C2906 / C2809;
    const double C2917 = C2905 / C2809;
    const double C2916 = C2903 + C2904;
    const double C2915 = C2901 / C2809;
    const double C2914 = C2900 / C2809;
    const double C2913 = C2898 + C2899;
    const double C2912 = C2896 / C2809;
    const double C2911 = C2895 * C2826;
    const double C2910 = C2894 / C2809;
    const double C2909 = C2891 - C2892;
    const double C2908 = C2890 / C2809;
    const double C2907 = C2889 * C2826;
    const double C2925 = C2865 * C2911;
    const double C2924 = -C2918;
    const double C2923 = C2916 / C2809;
    const double C2922 = C2913 / C2809;
    const double C2921 = C2840 * C2911;
    const double C2920 = -C2910;
    const double C2919 = C2909 / C2893;
    const double C2931 = C2925 / C2809;
    const double C2930 = C2924 / C2809;
    const double C2929 = C2923 - zC;
    const double C2928 = C2922 - yC;
    const double C2927 = C2921 / C2809;
    const double C2926 = C2920 / C2809;
    const double C2933 = C2930 - C2931;
    const double C2932 = C2926 - C2927;
    const double C2934 = C2932 + C2912;
    const double C192 =
        (bs[1] *
         std::exp(-((std::pow(xA - xB, 2) + std::pow(yA - yB, 2) +
                     std::pow(zA - zB, 2)) *
                    ae * be) /
                  C2809) *
         2. * Pi) /
        C2809;
    const double C193 = (-(C2827 * be * C2812) / C2809) / C2809 -
                        (((ae * xA + be * xB) / C2809 - xC) * C2907) / C2809 +
                        C2908;
    const double C194 = C2907 / C2809;
    const double C195 = C2919 - ((C2844 * C2831) / C2809 + C2840 * C2932) +
                        C2812 * C2844 + C2812 * (C2844 + C2908);
    const double C197 = C2911 / C2809;
    const double C439 =
        (-(C2827 * C2897) / C2809) / C2809 - (C2928 * C2834) / C2809 + C2914;
    const double C440 =
        C2813 * C2851 - ((C2851 * C2897) / C2809 + C2928 * C2934);
    const double C441 =
        (-(C2834 * C2897) / C2809) / C2809 - (C2928 * C2911) / C2809 + C2915;
    const double C621 =
        (-(C2827 * C2902) / C2809) / C2809 - (C2929 * C2834) / C2809 + C2917;
    const double C622 =
        C2814 * C2851 - ((C2851 * C2902) / C2809 + C2929 * C2934);
    const double C623 = (-(C2834 * C2902) / C2809) / C2809 -
                        (C2929 * C2911) / C2809 + (C2814 * C2834) / C2809;
    const double C791 = C2919 - ((C2869 * C2857) / C2809 + C2865 * C2933) +
                        C2813 * C2869 + C2813 * (C2869 + C2914);
    const double C1109 =
        C2814 * C2873 - ((C2873 * C2902) / C2809 + C2929 * (C2933 + C2915));
    const double C1256 =
        C2919 -
        ((C2887 * C2875) / C2809 + C2883 * ((-(C2834 * C2875) / C2809) / C2809 -
                                            (C2883 * C2911) / C2809)) +
        C2814 * C2887 + C2814 * (C2887 + C2917);
    const double C212 = be * zB;
    const double C211 = ae * zA;
    const double C210 = be * yB;
    const double C209 = ae * yA;
    const double C208 = bs[4];
    const double C207 = bs[3];
    const double C206 = bs[2];
    const double C205 = ae * be;
    const double C204 = zA - zB;
    const double C203 = yA - yB;
    const double C202 = xA - xB;
    const double C201 = bs[1];
    const double C200 = ae + be;
    const double C199 = be * xB;
    const double C198 = ae * xA;
    const double C219 = C211 + C212;
    const double C218 = C209 + C210;
    const double C217 = 2 * C200;
    const double C216 = std::pow(C204, 2);
    const double C215 = std::pow(C203, 2);
    const double C214 = std::pow(C202, 2);
    const double C213 = C198 + C199;
    const double C223 = C219 / C200;
    const double C222 = C218 / C200;
    const double C221 = C214 + C215;
    const double C220 = C213 / C200;
    const double C228 = C223 - zC;
    const double C227 = C222 - yC;
    const double C226 = C220 - xC;
    const double C225 = C221 + C216;
    const double C224 = C220 - xB;
    const double C229 = C225 * C205;
    const double C230 = C229 / C200;
    const double C231 = -C230;
    const double C232 = std::exp(C231);
    const double C233 = Pi * C232;
    const double C236 = C233 * C228;
    const double C235 = C233 * C227;
    const double C234 = C233 * C226;
    const double C239 = 4 * C236;
    const double C238 = 4 * C235;
    const double C237 = 4 * C234;
    const double C248 = C207 * C239;
    const double C247 = C206 * C239;
    const double C246 = C201 * C239;
    const double C245 = C207 * C238;
    const double C244 = C206 * C238;
    const double C243 = C201 * C238;
    const double C242 = C207 * C237;
    const double C241 = C206 * C237;
    const double C240 = C201 * C237;
    const double C266 = C247 / C217;
    const double C265 = C226 * C248;
    const double C264 = C224 * C247;
    const double C263 = C246 / C217;
    const double C262 = C226 * C247;
    const double C261 = C224 * C246;
    const double C260 = C244 / C217;
    const double C259 = C226 * C245;
    const double C258 = C224 * C244;
    const double C257 = C243 / C217;
    const double C256 = C226 * C244;
    const double C255 = C224 * C243;
    const double C254 = C241 / C217;
    const double C253 = C226 * C242;
    const double C252 = C224 * C241;
    const double C251 = C240 / C217;
    const double C250 = C226 * C241;
    const double C249 = C224 * C240;
    const double C272 = C264 - C265;
    const double C271 = C261 - C262;
    const double C270 = C258 - C259;
    const double C269 = C255 - C256;
    const double C268 = C252 + C194;
    const double C267 = C249 + C192;
    const double C278 = C226 * C272;
    const double C277 = C224 * C271;
    const double C276 = C226 * C270;
    const double C275 = C224 * C269;
    const double C274 = C268 - C253;
    const double C273 = C267 - C250;
    const double C282 = C277 + C263;
    const double C281 = C275 + C257;
    const double C280 = C226 * C274;
    const double C279 = C224 * C273;
    const double C285 = C282 - C278;
    const double C284 = C281 - C276;
    const double C283 = C279 + C251;
    const double C288 = C285 - C266;
    const double C287 = C284 - C260;
    const double C286 = C283 + C193;
    const double C289 = C286 - C280;
    const double C290 = C289 - C254;
    const double C448 = C227 * C248;
    const double C447 = C227 * C247;
    const double C446 = C227 * C245;
    const double C445 = C227 * C244;
    const double C444 = C227 * C242;
    const double C443 = C227 * C241;
    const double C442 = C222 - yB;
    const double C454 = C442 * C247;
    const double C453 = C442 * C246;
    const double C452 = C442 * C244;
    const double C451 = C442 * C243;
    const double C450 = C442 * C241;
    const double C449 = C442 * C240;
    const double C460 = C454 - C448;
    const double C459 = C453 - C447;
    const double C458 = C452 + C194;
    const double C457 = C451 + C192;
    const double C456 = C450 - C444;
    const double C455 = C449 - C443;
    const double C466 = C226 * C460;
    const double C465 = C224 * C459;
    const double C464 = C458 - C446;
    const double C463 = C457 - C445;
    const double C462 = C226 * C456;
    const double C461 = C224 * C455;
    const double C470 = C465 - C466;
    const double C469 = C226 * C464;
    const double C468 = C224 * C463;
    const double C467 = C461 + C439;
    const double C472 = C468 - C469;
    const double C471 = C467 - C462;
    const double C630 = C228 * C248;
    const double C629 = C228 * C247;
    const double C628 = C228 * C245;
    const double C627 = C228 * C244;
    const double C626 = C228 * C242;
    const double C625 = C228 * C241;
    const double C624 = C223 - zB;
    const double C636 = C624 * C247;
    const double C635 = C624 * C246;
    const double C634 = C624 * C244;
    const double C633 = C624 * C243;
    const double C632 = C624 * C241;
    const double C631 = C624 * C240;
    const double C642 = C636 + C194;
    const double C641 = C635 + C192;
    const double C640 = C634 - C628;
    const double C639 = C633 - C627;
    const double C638 = C632 - C626;
    const double C637 = C631 - C625;
    const double C648 = C642 - C630;
    const double C647 = C641 - C629;
    const double C646 = C226 * C640;
    const double C645 = C224 * C639;
    const double C644 = C226 * C638;
    const double C643 = C224 * C637;
    const double C652 = C226 * C648;
    const double C651 = C224 * C647;
    const double C650 = C645 - C646;
    const double C649 = C643 + C621;
    const double C654 = C651 - C652;
    const double C653 = C649 - C644;
    const double C950 = C227 * C460;
    const double C949 = C442 * C459;
    const double C948 = C227 * C464;
    const double C947 = C442 * C463;
    const double C946 = C227 * C456;
    const double C945 = C442 * C455;
    const double C953 = C949 + C263;
    const double C952 = C947 + C257;
    const double C951 = C945 + C251;
    const double C956 = C953 - C950;
    const double C955 = C952 + C439;
    const double C954 = C951 - C946;
    const double C959 = C956 - C266;
    const double C958 = C955 - C948;
    const double C957 = C954 - C254;
    const double C960 = C958 - C260;
    const double C1115 = C227 * C648;
    const double C1114 = C442 * C647;
    const double C1113 = C227 * C640;
    const double C1112 = C442 * C639;
    const double C1111 = C227 * C638;
    const double C1110 = C442 * C637;
    const double C1118 = C1114 - C1115;
    const double C1117 = C1112 + C621;
    const double C1116 = C1110 - C1111;
    const double C1119 = C1117 - C1113;
    const double C1550 = C228 * C648;
    const double C1549 = C624 * C647;
    const double C1548 = C228 * C640;
    const double C1547 = C624 * C639;
    const double C1546 = C228 * C638;
    const double C1545 = C624 * C637;
    const double C1553 = C1549 + C263;
    const double C1552 = C1547 + C257;
    const double C1551 = C1545 + C251;
    const double C1556 = C1553 + C621;
    const double C1555 = C1552 - C1548;
    const double C1554 = C1551 - C1546;
    const double C1559 = C1556 - C1550;
    const double C1558 = C1555 - C260;
    const double C1557 = C1554 - C254;
    const double C1560 = C1559 - C266;
    const double C3028 = C204 * C470;
    const double C3027 = C204 * C472;
    const double C3026 = C204 * C471;
    const double C3025 = C224 * C1118;
    const double C3024 = C224 * C1119;
    const double C3023 = C224 * C1116;
    const double C3022 = C204 * C647;
    const double C3021 = C204 * C639;
    const double C3020 = C204 * C637;
    const double C3019 = C204 * C459;
    const double C3018 = C204 * C1118;
    const double C3017 = C442 * C1560;
    const double C3016 = C204 * C463;
    const double C3015 = C204 * C1119;
    const double C3014 = C442 * C1558;
    const double C3013 = C204 * C455;
    const double C3012 = C204 * C1116;
    const double C3011 = C442 * C1557;
    const double C3010 = C204 * C271;
    const double C3009 = C204 * C654;
    const double C3008 = C624 * C648;
    const double C3007 = C224 * C1560;
    const double C3006 = C204 * C269;
    const double C3005 = C204 * C650;
    const double C3004 = C624 * C640;
    const double C3003 = C224 * C1558;
    const double C3002 = C204 * C273;
    const double C3001 = C204 * C653;
    const double C3000 = C624 * C638;
    const double C2999 = C224 * C1557;
    const double C2998 = C203 * C647;
    const double C2997 = C442 * C648;
    const double C2996 = C442 * C1118;
    const double C2995 = C203 * C639;
    const double C2994 = C442 * C640;
    const double C2993 = C442 * C1119;
    const double C2992 = C203 * C637;
    const double C2991 = C442 * C638;
    const double C2990 = C442 * C1116;
    const double C2989 = C203 * C459;
    const double C2988 = C203 * C463;
    const double C2987 = C203 * C455;
    const double C2986 = C203 * C271;
    const double C2985 = C203 * C470;
    const double C2984 = C442 * C460;
    const double C2983 = C224 * C959;
    const double C2982 = C203 * C269;
    const double C2981 = C203 * C472;
    const double C2980 = C442 * C464;
    const double C2979 = C224 * C960;
    const double C2978 = C203 * C273;
    const double C2977 = C203 * C471;
    const double C2976 = C442 * C456;
    const double C2975 = C224 * C957;
    const double C2974 = C648 / C217;
    const double C2973 = C624 * C248;
    const double C2972 = C224 * C648;
    const double C2971 = C647 / C217;
    const double C2970 = C224 * C654;
    const double C2969 = C640 / C217;
    const double C2968 = C624 * C245;
    const double C2967 = C224 * C640;
    const double C2966 = C639 / C217;
    const double C2965 = C224 * C650;
    const double C2964 = C638 / C217;
    const double C2963 = C624 * C242;
    const double C2962 = C224 * C638;
    const double C2961 = C637 / C217;
    const double C2960 = C224 * C653;
    const double C2959 = C460 / C217;
    const double C2958 = C442 * C248;
    const double C2957 = C224 * C460;
    const double C2956 = C459 / C217;
    const double C2955 = C224 * C470;
    const double C2954 = C464 / C217;
    const double C2953 = C442 * C245;
    const double C2952 = C224 * C464;
    const double C2951 = C463 / C217;
    const double C2950 = C224 * C472;
    const double C2949 = C456 / C217;
    const double C2948 = C442 * C242;
    const double C2947 = C224 * C456;
    const double C2946 = C455 / C217;
    const double C2945 = C224 * C471;
    const double C2944 = C248 / C217;
    const double C2943 = C208 * C239;
    const double C2942 = C245 / C217;
    const double C2941 = C208 * C238;
    const double C2940 = C242 / C217;
    const double C2939 = C208 * C237;
    const double C3076 = C3023 + C1109;
    const double C3075 = C1560 - C3022;
    const double C3074 = C1558 - C3021;
    const double C3073 = C1557 - C3020;
    const double C3072 = C1118 - C3019;
    const double C3071 = C1119 - C3016;
    const double C3070 = C3014 + C1256;
    const double C3069 = C1116 - C3013;
    const double C3068 = C654 - C3010;
    const double C3067 = C3008 + C266;
    const double C3066 = C650 - C3006;
    const double C3065 = C3004 + C260;
    const double C3064 = C653 - C3002;
    const double C3063 = C3000 + C254;
    const double C3062 = C2999 + C1256;
    const double C3061 = C1118 - C2998;
    const double C3060 = C2996 + C2971;
    const double C3059 = C1119 - C2995;
    const double C3058 = C2994 + C623;
    const double C3057 = C2993 + C2966;
    const double C3056 = C1116 - C2992;
    const double C3055 = C2990 + C2961;
    const double C3054 = C959 - C2989;
    const double C3053 = C960 - C2988;
    const double C3052 = C957 - C2987;
    const double C3051 = C470 - C2986;
    const double C3050 = C2984 + C266;
    const double C3049 = C472 - C2982;
    const double C3048 = C2980 + C260;
    const double C3047 = C471 - C2978;
    const double C3046 = C2976 + C254;
    const double C3045 = C2975 + C791;
    const double C3044 = C228 * C2943;
    const double C3043 = C2973 + C197;
    const double C3042 = C2970 + C2971;
    const double C3041 = C228 * C2941;
    const double C3040 = C2965 + C2966;
    const double C3039 = C228 * C2939;
    const double C3038 = C2962 + C623;
    const double C3037 = C2960 + C2961;
    const double C3036 = C227 * C2943;
    const double C3035 = C2955 + C2956;
    const double C3034 = C227 * C2941;
    const double C3033 = C2953 + C197;
    const double C3032 = C2950 + C2951;
    const double C3031 = C227 * C2939;
    const double C3030 = C2947 + C441;
    const double C3029 = C2945 + C2946;
    const double C3087 = C3067 + C623;
    const double C3086 = C3057 + C1109;
    const double C3085 = C3048 + C441;
    const double C3084 = C3043 - C3044;
    const double C3083 = C2968 - C3041;
    const double C3082 = C2963 - C3039;
    const double C3081 = C3037 + C622;
    const double C3080 = C2958 - C3036;
    const double C3079 = C3033 - C3034;
    const double C3078 = C2948 - C3031;
    const double C3077 = C3029 + C440;
    const double C3102 = C228 * C3084;
    const double C3101 = C228 * C3083;
    const double C3100 = C228 * C3082;
    const double C3099 = C227 * C3084;
    const double C3098 = C227 * C3083;
    const double C3097 = C227 * C3082;
    const double C3096 = C227 * C3080;
    const double C3095 = C227 * C3079;
    const double C3094 = C227 * C3078;
    const double C3093 = C226 * C3084;
    const double C3092 = C226 * C3083;
    const double C3091 = C226 * C3082;
    const double C3090 = C226 * C3080;
    const double C3089 = C226 * C3079;
    const double C3088 = C226 * C3078;
    const double C3117 = C3087 - C3102;
    const double C3116 = C3065 - C3101;
    const double C3115 = C3063 - C3100;
    const double C3114 = C2997 - C3099;
    const double C3113 = C3058 - C3098;
    const double C3112 = C2991 - C3097;
    const double C3111 = C3050 - C3096;
    const double C3110 = C3085 - C3095;
    const double C3109 = C3046 - C3094;
    const double C3108 = C2972 - C3093;
    const double C3107 = C2967 - C3092;
    const double C3106 = C3038 - C3091;
    const double C3105 = C2957 - C3090;
    const double C3104 = C2952 - C3089;
    const double C3103 = C3030 - C3088;
    const double C3135 = C226 * C3114;
    const double C3134 = C226 * C3113;
    const double C3133 = C226 * C3112;
    const double C3132 = C3117 - C2944;
    const double C3131 = C3116 - C2942;
    const double C3130 = C3115 - C2940;
    const double C3129 = C227 * C3114;
    const double C3128 = C227 * C3113;
    const double C3127 = C227 * C3112;
    const double C3126 = C3111 - C2944;
    const double C3125 = C3110 - C2942;
    const double C3124 = C3109 - C2940;
    const double C3123 = C226 * C3108;
    const double C3122 = C226 * C3107;
    const double C3121 = C226 * C3106;
    const double C3120 = C226 * C3105;
    const double C3119 = C226 * C3104;
    const double C3118 = C226 * C3103;
    const double C3156 = C3025 - C3135;
    const double C3155 = C3024 - C3134;
    const double C3154 = C3076 - C3133;
    const double C3153 = C227 * C3132;
    const double C3152 = C227 * C3131;
    const double C3151 = C227 * C3130;
    const double C3150 = C226 * C3132;
    const double C3149 = C226 * C3131;
    const double C3148 = C226 * C3130;
    const double C3147 = C3060 - C3129;
    const double C3146 = C3086 - C3128;
    const double C3145 = C3055 - C3127;
    const double C3144 = C226 * C3126;
    const double C3143 = C226 * C3125;
    const double C3142 = C226 * C3124;
    const double C3141 = C3042 - C3123;
    const double C3140 = C3040 - C3122;
    const double C3139 = C3081 - C3121;
    const double C3138 = C3035 - C3120;
    const double C3137 = C3032 - C3119;
    const double C3136 = C3077 - C3118;
    const double C3177 = C3156 - C3028;
    const double C3176 = C3155 - C3027;
    const double C3175 = C3154 - C3026;
    const double C3174 = C3017 - C3153;
    const double C3173 = C3070 - C3152;
    const double C3172 = C3011 - C3151;
    const double C3171 = C3007 - C3150;
    const double C3170 = C3003 - C3149;
    const double C3169 = C3062 - C3148;
    const double C3168 = C3147 - C2974;
    const double C3167 = C3146 - C2969;
    const double C3166 = C3145 - C2964;
    const double C3165 = C2983 - C3144;
    const double C3164 = C2979 - C3143;
    const double C3163 = C3045 - C3142;
    const double C3162 = C3141 - C2974;
    const double C3161 = C3140 - C2969;
    const double C3160 = C3139 - C2964;
    const double C3159 = C3138 - C2959;
    const double C3158 = C3137 - C2954;
    const double C3157 = C3136 - C2949;
    const double C3186 = C3174 - C3018;
    const double C3185 = C3173 - C3015;
    const double C3184 = C3172 - C3012;
    const double C3183 = C3171 - C3009;
    const double C3182 = C3170 - C3005;
    const double C3181 = C3169 - C3001;
    const double C3180 = C3165 - C2985;
    const double C3179 = C3164 - C2981;
    const double C3178 = C3163 - C2977;
    const double gx200100 =
        C224 * C290 + C273 / C200 + C195 -
        C226 * (C224 * C274 + C254 + C2934 -
                C226 * (C224 * C242 + C197 - C226 * C2939) - C2940) -
        C274 / C200 - C202 * C290 - C202 * (C290 - C202 * C273);
    const double gx200010 = C3157 - C202 * C471 - C202 * (C471 - C202 * C455);
    const double gx200001 = C3160 - C202 * C653 - C202 * (C653 - C202 * C637);
    const double gx020100 = C3178 - C203 * C3047;
    const double gx020010 = C442 * C957 + C455 / C200 - C227 * C3124 -
                            C456 / C200 - C203 * C957 - C203 * C3052;
    const double gx020001 = C3166 - C203 * C1116 - C203 * C3056;
    const double gx002100 = C3181 - C204 * C3064;
    const double gx002010 = C3184 - C204 * C3069;
    const double gx002001 = C624 * C1557 + C637 / C200 - C228 * C3130 -
                            C638 / C200 - C204 * C1557 - C204 * C3073;
    const double gx110100 = C3157 - C203 * C290 - C202 * C3047;
    const double gx110010 = C3178 - C202 * C3052;
    const double gx110001 = C3154 - C203 * C653 - C202 * C3056;
    const double gx101100 = C3160 - C204 * C290 - C202 * C3064;
    const double gx101010 = C3175 - C202 * C3069;
    const double gx101001 = C3181 - C202 * C3073;
    const double gx011100 = C3175 - C203 * C3064;
    const double gx011010 = C3166 - C204 * C957 - C203 * C3069;
    const double gx011001 = C3184 - C203 * C3073;
    gx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * gx110100;
    gx[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * gx110010;
    gx[(Ai + 0) * matrix_size + Bi + 2] += std::sqrt(3.0) * gx110001;
    gx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * gx011100;
    gx[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * gx011010;
    gx[(Ai + 1) * matrix_size + Bi + 2] += std::sqrt(3.0) * gx011001;
    gx[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * gx200100 - 0.5 * gx020100 + gx002100;
    gx[(Ai + 2) * matrix_size + Bi + 1] +=
        -0.5 * gx200010 - 0.5 * gx020010 + gx002010;
    gx[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * gx200001 - 0.5 * gx020001 + gx002001;
    gx[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * gx101100;
    gx[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(3.0) * gx101010;
    gx[(Ai + 3) * matrix_size + Bi + 2] += std::sqrt(3.0) * gx101001;
    gx[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * gx200100 - std::sqrt(0.75) * gx020100;
    gx[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(0.75) * gx200010 - std::sqrt(0.75) * gx020010;
    gx[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * gx200001 - std::sqrt(0.75) * gx020001;
    const double gy200100 =
        C224 * C287 + C269 / C200 -
        C226 *
            (C224 * C270 + C260 - C226 * (C224 * C245 - C226 * C2941) - C2942) -
        C270 / C200 - C202 * C287 - C202 * (C287 - C202 * C269);
    const double gy200010 = C3158 - C202 * C472 - C202 * (C472 - C202 * C463);
    const double gy200001 = C3161 - C202 * C650 - C202 * (C650 - C202 * C639);
    const double gy020100 = C3179 - C203 * C3049;
    const double gy020010 = C442 * C960 + C463 / C200 + C791 - C227 * C3125 -
                            C464 / C200 - C203 * C960 - C203 * C3053;
    const double gy020001 = C3167 - C203 * C1119 - C203 * C3059;
    const double gy002100 = C3182 - C204 * C3066;
    const double gy002010 = C3185 - C204 * C3071;
    const double gy002001 = C624 * C1558 + C639 / C200 - C228 * C3131 -
                            C640 / C200 - C204 * C1558 - C204 * C3074;
    const double gy110100 = C3158 - C203 * C287 - C202 * C3049;
    const double gy110010 = C3179 - C202 * C3053;
    const double gy110001 = C3155 - C203 * C650 - C202 * C3059;
    const double gy101100 = C3161 - C204 * C287 - C202 * C3066;
    const double gy101010 = C3176 - C202 * C3071;
    const double gy101001 = C3182 - C202 * C3074;
    const double gy011100 = C3176 - C203 * C3066;
    const double gy011010 = C3167 - C204 * C960 - C203 * C3071;
    const double gy011001 = C3185 - C203 * C3074;
    gy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * gy110100;
    gy[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * gy110010;
    gy[(Ai + 0) * matrix_size + Bi + 2] += std::sqrt(3.0) * gy110001;
    gy[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * gy011100;
    gy[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * gy011010;
    gy[(Ai + 1) * matrix_size + Bi + 2] += std::sqrt(3.0) * gy011001;
    gy[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * gy200100 - 0.5 * gy020100 + gy002100;
    gy[(Ai + 2) * matrix_size + Bi + 1] +=
        -0.5 * gy200010 - 0.5 * gy020010 + gy002010;
    gy[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * gy200001 - 0.5 * gy020001 + gy002001;
    gy[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * gy101100;
    gy[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(3.0) * gy101010;
    gy[(Ai + 3) * matrix_size + Bi + 2] += std::sqrt(3.0) * gy101001;
    gy[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * gy200100 - std::sqrt(0.75) * gy020100;
    gy[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(0.75) * gy200010 - std::sqrt(0.75) * gy020010;
    gy[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * gy200001 - std::sqrt(0.75) * gy020001;
    const double gz200100 =
        C224 * C288 + C271 / C200 -
        C226 *
            (C224 * C272 + C266 - C226 * (C224 * C248 - C226 * C2943) - C2944) -
        C272 / C200 - C202 * C288 - C202 * (C288 - C202 * C271);
    const double gz200010 = C3159 - C202 * C470 - C202 * (C470 - C202 * C459);
    const double gz200001 = C3162 - C202 * C654 - C202 * (C654 - C202 * C647);
    const double gz020100 = C3180 - C203 * C3051;
    const double gz020010 = C442 * C959 + C459 / C200 - C227 * C3126 -
                            C460 / C200 - C203 * C959 - C203 * C3054;
    const double gz020001 = C3168 - C203 * C1118 - C203 * C3061;
    const double gz002100 = C3183 - C204 * C3068;
    const double gz002010 = C3186 - C204 * C3072;
    const double gz002001 = C624 * C1560 + C647 / C200 + C1256 - C228 * C3132 -
                            C648 / C200 - C204 * C1560 - C204 * C3075;
    const double gz110100 = C3159 - C203 * C288 - C202 * C3051;
    const double gz110010 = C3180 - C202 * C3054;
    const double gz110001 = C3156 - C203 * C654 - C202 * C3061;
    const double gz101100 = C3162 - C204 * C288 - C202 * C3068;
    const double gz101010 = C3177 - C202 * C3072;
    const double gz101001 = C3183 - C202 * C3075;
    const double gz011100 = C3177 - C203 * C3068;
    const double gz011010 = C3168 - C204 * C959 - C203 * C3072;
    const double gz011001 = C3186 - C203 * C3075;
    gz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * gz110100;
    gz[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * gz110010;
    gz[(Ai + 0) * matrix_size + Bi + 2] += std::sqrt(3.0) * gz110001;
    gz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * gz011100;
    gz[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * gz011010;
    gz[(Ai + 1) * matrix_size + Bi + 2] += std::sqrt(3.0) * gz011001;
    gz[(Ai + 2) * matrix_size + Bi + 0] +=
        -0.5 * gz200100 - 0.5 * gz020100 + gz002100;
    gz[(Ai + 2) * matrix_size + Bi + 1] +=
        -0.5 * gz200010 - 0.5 * gz020010 + gz002010;
    gz[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * gz200001 - 0.5 * gz020001 + gz002001;
    gz[(Ai + 3) * matrix_size + Bi + 0] += std::sqrt(3.0) * gz101100;
    gz[(Ai + 3) * matrix_size + Bi + 1] += std::sqrt(3.0) * gz101010;
    gz[(Ai + 3) * matrix_size + Bi + 2] += std::sqrt(3.0) * gz101001;
    gz[(Ai + 4) * matrix_size + Bi + 0] +=
        std::sqrt(0.75) * gz200100 - std::sqrt(0.75) * gz020100;
    gz[(Ai + 4) * matrix_size + Bi + 1] +=
        std::sqrt(0.75) * gz200010 - std::sqrt(0.75) * gz020010;
    gz[(Ai + 4) * matrix_size + Bi + 2] +=
        std::sqrt(0.75) * gz200001 - std::sqrt(0.75) * gz020001;
}
