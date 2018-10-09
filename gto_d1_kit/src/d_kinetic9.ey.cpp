/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void kinetic_gradient_21(double ae,
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
    const double C7346 = ae + be;
    const double C7349 = Pi / C7346;
    const double C7350 = std::sqrt(C7349);
    const double C7356 = std::pow(C7346, 2);
    const double C7355 = be * xAB;
    const double C7363 = be * yAB;
    const double C7366 = be * zAB;
    const double C7382 = C7350 * C7366;
    const double C7381 = C7350 * C7363;
    const double C7380 = ae * zAB;
    const double C7379 = ae * yAB;
    const double C7378 = be * zAB;
    const double C7377 = 2. * C7356;
    const double C7376 = C7350 * C7355;
    const double C7375 = ae * xAB;
    const double C7374 = be * yAB;
    const double C7373 = 2. * C7346;
    const double C7372 = be * xAB;
    const double C7371 = Pi / C7346;
    const double C7384 = C7350 / C7373;
    const double C7383 = std::sqrt(C7371);
    const double C6922 = -(C7383 * C7372) / C7346;
    const double C6924 =
        (C7350 * std::pow(C7372, 2)) / std::pow(C7346, 2) + C7384;
    const double C6927 = -(C7350 * C7374) / C7346;
    const double C6928 =
        (((C7350 * std::pow(C7355, 2)) / C7356 + C7384) * C7375) / C7346 +
        (-2. * C7376) / C7377;
    const double C6929 = -(C7350 * C7378) / C7346;
    const double C7048 = (C7350 * C7379) / C7346;
    const double C7077 = (C7350 * C7380) / C7346;
    const double C7106 = (C7350 * std::pow(C7374, 2)) / C7356 + C7384;
    const double C7107 = (C7350 * C7375) / C7346;
    const double C7164 =
        (((C7350 * std::pow(C7363, 2)) / C7356 + C7384) * C7379) / C7346 +
        (-2. * C7381) / C7377;
    const double C7198 = (C7350 * std::pow(C7378, 2)) / C7356 + C7384;
    const double C7242 =
        (((C7350 * std::pow(C7366, 2)) / C7356 + C7384) * C7380) / C7346 +
        (-2. * C7382) / C7377;
    const double C7274 = C7384 - (C7375 * C7376) / C7356;
    const double C7294 = C7384 - (C7379 * C7381) / C7356;
    const double C7320 = C7384 - (C7380 * C7382) / C7356;
    const double C6941 = ae * C6929;
    const double C6940 = ae * C6927;
    const double C6939 = be * zAB;
    const double C6938 = be * yAB;
    const double C6937 = std::pow(ae, 2);
    const double C6936 = ae * C6924;
    const double C6935 = ae * xAB;
    const double C6934 = be * xAB;
    const double C6933 = be * C7383;
    const double C6932 = ae + be;
    const double C6931 = be * C6922;
    const double C6930 = ae * C6922;
    const double C6955 = 2 * C6941;
    const double C6954 = 2 * C6940;
    const double C6953 = std::pow(C6934, 2);
    const double C6952 = std::pow(C6932, 2);
    const double C6951 = C6934 / C6932;
    const double C6950 = C6939 / C6932;
    const double C6949 = Pi / C6932;
    const double C6948 = C6938 / C6932;
    const double C6947 = 2 * C6936;
    const double C6946 = C6930 * C6934;
    const double C6945 = 2 * C6933;
    const double C6944 = 2. * C6932;
    const double C6943 = 2 * C6931;
    const double C6942 = 2 * C6930;
    const double C6965 = 2. * C6952;
    const double C6964 = std::pow(C6951, 2);
    const double C6963 = std::pow(C6950, 2);
    const double C6962 = be * C6942;
    const double C6961 = std::sqrt(C6949);
    const double C6960 = 1 / C6944;
    const double C6959 = std::pow(C6948, 2);
    const double C6958 = 2 * C6946;
    const double C6957 = -C6945;
    const double C6956 = C6942 - C6943;
    const double C6975 = C6961 / C6944;
    const double C6974 = C6961 * C6953;
    const double C6973 = C6961 * C6934;
    const double C6972 = C6964 + C6960;
    const double C6971 = C6963 + C6960;
    const double C6970 = 4 * C6962;
    const double C6969 = C6959 + C6960;
    const double C6968 = C6958 / C6932;
    const double C6967 = C6957 / C6944;
    const double C6966 = C6956 / C6944;
    const double C6983 = -2. * C6973;
    const double C6982 = C6974 / C6952;
    const double C6981 = ae * C6973;
    const double C6980 = C6937 * C6972;
    const double C6979 = C6937 * C6971;
    const double C6978 = -C6970;
    const double C6977 = C6937 * C6969;
    const double C6976 = C6967 - C6968;
    const double C6993 = C6983 / C6965;
    const double C6992 = C6982 + C6975;
    const double C6991 = -2 * C6981;
    const double C6990 = 2 * C6980;
    const double C6989 = 2 * C6979;
    const double C6988 = ae * C6976;
    const double C6987 = C6978 / C6944;
    const double C6986 = 2 * C6977;
    const double C6985 = 2 * C6976;
    const double C6984 = C6976 * C6934;
    const double C7003 = C6992 * C6935;
    const double C7002 = ae * C6992;
    const double C7001 = be * C6991;
    const double C7000 = ae - C6990;
    const double C6999 = ae - C6989;
    const double C6998 = 2 * C6988;
    const double C6997 = C6988 * C6934;
    const double C6996 = ae - C6986;
    const double C6995 = C6985 + C6947;
    const double C6994 = C6984 / C6932;
    const double C7013 = C7003 / C6932;
    const double C7012 = 2 * C7002;
    const double C7011 = C7001 / C6952;
    const double C7010 = C7000 * C6961;
    const double C7009 = C6999 * C6961;
    const double C7008 = be * C6998;
    const double C7007 = 2 * C6997;
    const double C7006 = C6996 * C6961;
    const double C7005 = C6995 / C6944;
    const double C7004 = C6966 - C6994;
    const double C7020 = C7013 + C6993;
    const double C7019 = C7012 - C6961;
    const double C7018 = C7010 * C6934;
    const double C7017 = C7010 / C6944;
    const double C7016 = 6 * C7008;
    const double C7015 = C7007 / C6932;
    const double C7014 = C7004 * C6935;
    const double C7026 = be * C7020;
    const double C7025 = C7019 * be;
    const double C7024 = C7018 / C6932;
    const double C7023 = -C7016;
    const double C7022 = C6987 - C7015;
    const double C7021 = C7014 / C6932;
    const double C7032 = C7026 * ae;
    const double C7031 = C7025 / C6932;
    const double C7030 = C7011 - C7024;
    const double C7029 = C7023 / C6944;
    const double C7028 = ae * C7022;
    const double C7027 = C7021 + C7005;
    const double C7035 = 2 * C7032;
    const double C7034 = C7030 * C6934;
    const double C7033 = C7028 * C6934;
    const double C7037 = C7034 / C6932;
    const double C7036 = 2 * C7033;
    const double C7039 = C7017 - C7037;
    const double C7038 = C7036 / C6932;
    const double C7041 = C7039 + C7031;
    const double C7040 = C7029 - C7038;
    const double C7042 = C7041 * C6935;
    const double C7043 = C7042 + C7030;
    const double C7044 = C7043 + C7035;
    const double C7052 = C6940 * C6938;
    const double C7051 = be * C7350;
    const double C7050 = ae * C7350;
    const double C7049 = ae * yAB;
    const double C7058 = 2 * C7052;
    const double C7057 = 2 * C7051;
    const double C7056 = 2. * C7050;
    const double C7055 = C6940 * C7049;
    const double C7054 = C6961 * C7049;
    const double C7053 = C7006 * C7049;
    const double C7064 = C7058 / C6932;
    const double C7063 = -C7057;
    const double C7062 = C7056 / C6944;
    const double C7061 = 2 * C7055;
    const double C7060 = be * C7054;
    const double C7059 = C7053 / C6932;
    const double C7067 = C7063 / C6944;
    const double C7066 = C7061 / C6932;
    const double C7065 = 2 * C7060;
    const double C7070 = C7067 - C7064;
    const double C7069 = C7066 + C7062;
    const double C7068 = ae * C7065;
    const double C7072 = ae * C7070;
    const double C7071 = C7068 / C6952;
    const double C7073 = C7059 + C7071;
    const double C7081 = C6941 * C6939;
    const double C7080 = be * C7350;
    const double C7079 = ae * C7350;
    const double C7078 = ae * zAB;
    const double C7087 = 2 * C7081;
    const double C7086 = 2 * C7080;
    const double C7085 = 2. * C7079;
    const double C7084 = C6941 * C7078;
    const double C7083 = C6961 * C7078;
    const double C7082 = C7009 * C7078;
    const double C7093 = C7087 / C6932;
    const double C7092 = -C7086;
    const double C7091 = C7085 / C6944;
    const double C7090 = 2 * C7084;
    const double C7089 = be * C7083;
    const double C7088 = C7082 / C6932;
    const double C7096 = C7092 / C6944;
    const double C7095 = C7090 / C6932;
    const double C7094 = 2 * C7089;
    const double C7099 = C7096 - C7093;
    const double C7098 = C7095 + C7091;
    const double C7097 = ae * C7094;
    const double C7101 = ae * C7099;
    const double C7100 = C7097 / C6952;
    const double C7102 = C7088 + C7100;
    const double C7119 = C7072 * C6938;
    const double C7118 = be * C6954;
    const double C7117 = C7070 * C6938;
    const double C7116 = be * C6927;
    const double C7115 = C6961 * C6935;
    const double C7114 = C7010 * C6935;
    const double C7113 = std::pow(C6938, 2);
    const double C7112 = C7006 * C6938;
    const double C7111 = C6961 * C6938;
    const double C7110 = C7006 / C6944;
    const double C7109 = ae * C7383;
    const double C7108 = C6930 * C6935;
    const double C7130 = 2 * C7119;
    const double C7129 = 4 * C7118;
    const double C7128 = C7117 / C6932;
    const double C7127 = 2 * C7116;
    const double C7126 = be * C7115;
    const double C7125 = C7114 / C6932;
    const double C7124 = C6961 * C7113;
    const double C7123 = C7112 / C6932;
    const double C7122 = ae * C7111;
    const double C7121 = 2. * C7109;
    const double C7120 = 2 * C7108;
    const double C7138 = C7130 / C6932;
    const double C7137 = -C7129;
    const double C7136 = C6954 - C7127;
    const double C7135 = 2 * C7126;
    const double C7134 = C7124 / C6952;
    const double C7133 = -2 * C7122;
    const double C7132 = C7121 / C6944;
    const double C7131 = C7120 / C6932;
    const double C7144 = C7137 / C6944;
    const double C7143 = C7136 / C6944;
    const double C7142 = ae * C7135;
    const double C7141 = C7134 + C6975;
    const double C7140 = be * C7133;
    const double C7139 = C7131 + C7132;
    const double C7149 = C7144 - C7138;
    const double C7148 = C7143 - C7128;
    const double C7147 = C7142 / C6952;
    const double C7146 = ae * C7141;
    const double C7145 = C7140 / C6952;
    const double C7153 = ae * C7149;
    const double C7152 = C7125 + C7147;
    const double C7151 = 2 * C7146;
    const double C7150 = C7145 - C7123;
    const double C7155 = C7151 - C6961;
    const double C7154 = C7150 * C6938;
    const double C7157 = C7155 * be;
    const double C7156 = C7154 / C6932;
    const double C7159 = C7157 / C6932;
    const double C7158 = C7110 - C7156;
    const double C7160 = C7158 + C7159;
    const double C7172 = C7153 * C6938;
    const double C7171 = 2 * C7072;
    const double C7170 = ae * C7106;
    const double C7169 = 2 * C7070;
    const double C7168 = C7148 * C7049;
    const double C7167 = -2. * C7111;
    const double C7166 = C7141 * C7049;
    const double C7165 = C7160 * C7049;
    const double C7179 = 2 * C7172;
    const double C7178 = be * C7171;
    const double C7177 = 2 * C7170;
    const double C7176 = C7168 / C6932;
    const double C7175 = C7167 / C6965;
    const double C7174 = C7166 / C6932;
    const double C7173 = C7165 + C7150;
    const double C7183 = C7179 / C6932;
    const double C7182 = 6 * C7178;
    const double C7181 = C7169 + C7177;
    const double C7180 = C7174 + C7175;
    const double C7186 = -C7182;
    const double C7185 = C7181 / C6944;
    const double C7184 = be * C7180;
    const double C7189 = C7186 / C6944;
    const double C7188 = C7176 + C7185;
    const double C7187 = C7184 * ae;
    const double C7191 = C7189 - C7183;
    const double C7190 = 2 * C7187;
    const double C7192 = C7173 + C7190;
    const double C7206 = C7101 * C6939;
    const double C7205 = be * C6955;
    const double C7204 = C7099 * C6939;
    const double C7203 = be * C6929;
    const double C7202 = std::pow(C6939, 2);
    const double C7201 = C7009 * C6939;
    const double C7200 = C6961 * C6939;
    const double C7199 = C7009 / C6944;
    const double C7213 = 2 * C7206;
    const double C7212 = 4 * C7205;
    const double C7211 = C7204 / C6932;
    const double C7210 = 2 * C7203;
    const double C7209 = C6961 * C7202;
    const double C7208 = C7201 / C6932;
    const double C7207 = ae * C7200;
    const double C7218 = C7213 / C6932;
    const double C7217 = -C7212;
    const double C7216 = C6955 - C7210;
    const double C7215 = C7209 / C6952;
    const double C7214 = -2 * C7207;
    const double C7222 = C7217 / C6944;
    const double C7221 = C7216 / C6944;
    const double C7220 = C7215 + C6975;
    const double C7219 = be * C7214;
    const double C7226 = C7222 - C7218;
    const double C7225 = C7221 - C7211;
    const double C7224 = ae * C7220;
    const double C7223 = C7219 / C6952;
    const double C7229 = ae * C7226;
    const double C7228 = 2 * C7224;
    const double C7227 = C7223 - C7208;
    const double C7231 = C7228 - C6961;
    const double C7230 = C7227 * C6939;
    const double C7233 = C7231 * be;
    const double C7232 = C7230 / C6932;
    const double C7235 = C7233 / C6932;
    const double C7234 = C7199 - C7232;
    const double C7236 = C7234 + C7235;
    const double C7250 = C7229 * C6939;
    const double C7249 = 2 * C7101;
    const double C7248 = ae * C7198;
    const double C7247 = 2 * C7099;
    const double C7246 = C7225 * C7078;
    const double C7245 = -2. * C7200;
    const double C7244 = C7220 * C7078;
    const double C7243 = C7236 * C7078;
    const double C7257 = 2 * C7250;
    const double C7256 = be * C7249;
    const double C7255 = 2 * C7248;
    const double C7254 = C7246 / C6932;
    const double C7253 = C7245 / C6965;
    const double C7252 = C7244 / C6932;
    const double C7251 = C7243 + C7227;
    const double C7261 = C7257 / C6932;
    const double C7260 = 6 * C7256;
    const double C7259 = C7247 + C7255;
    const double C7258 = C7252 + C7253;
    const double C7264 = -C7260;
    const double C7263 = C7259 / C6944;
    const double C7262 = be * C7258;
    const double C7267 = C7264 / C6944;
    const double C7266 = C7254 + C7263;
    const double C7265 = C7262 * ae;
    const double C7269 = C7267 - C7261;
    const double C7268 = 2 * C7265;
    const double C7270 = C7251 + C7268;
    const double C7278 = C6935 * C6973;
    const double C7277 = C7030 * C6935;
    const double C7276 = 4. * C6930;
    const double C7275 = C6976 * C6935;
    const double C7282 = C7278 / C6952;
    const double C7281 = C7277 / C6932;
    const double C7280 = C7276 / C6944;
    const double C7279 = C7275 / C6932;
    const double C7285 = C6975 - C7282;
    const double C7284 = C7281 + C7017;
    const double C7283 = C7279 + C7280;
    const double C7286 = be * C7285;
    const double C7287 = C7286 * ae;
    const double C7288 = 2 * C7287;
    const double C7289 = C7288 / C6932;
    const double C7290 = C7284 + C7289;
    const double C7298 = 4. * C6940;
    const double C7297 = C7070 * C7049;
    const double C7296 = C7049 * C7111;
    const double C7295 = C7150 * C7049;
    const double C7302 = C7298 / C6944;
    const double C7301 = C7297 / C6932;
    const double C7300 = C7296 / C6952;
    const double C7299 = C7295 / C6932;
    const double C7305 = C7301 + C7302;
    const double C7304 = C6975 - C7300;
    const double C7303 = C7299 + C7110;
    const double C7306 = be * C7304;
    const double C7307 = C7306 * ae;
    const double C7308 = 2 * C7307;
    const double C7309 = C7308 / C6932;
    const double C7310 = C7303 + C7309;
    const double C7324 = 4. * C6941;
    const double C7323 = C7099 * C7078;
    const double C7322 = C7078 * C7200;
    const double C7321 = C7227 * C7078;
    const double C7328 = C7324 / C6944;
    const double C7327 = C7323 / C6932;
    const double C7326 = C7322 / C6952;
    const double C7325 = C7321 / C6932;
    const double C7331 = C7327 + C7328;
    const double C7330 = C6975 - C7326;
    const double C7329 = C7325 + C7199;
    const double C7332 = be * C7330;
    const double C7333 = C7332 * ae;
    const double C7334 = 2 * C7333;
    const double C7335 = C7334 / C6932;
    const double C7336 = C7329 + C7335;
    const double C7416 = 6 * C7229;
    const double C7415 = C7269 * C7078;
    const double C7414 = C7261 - C7267;
    const double C7413 = 6 * C7153;
    const double C7412 = C7191 * C7049;
    const double C7411 = C7038 - C7029;
    const double C7410 = C7183 - C7189;
    const double C7409 = 6 * C7028;
    const double C7408 = C7040 * C6935;
    const double C7407 = be * C7226;
    const double C7406 = 2 * C7229;
    const double C7405 = C7269 * C6939;
    const double C7404 = -2 * C7028;
    const double C7403 = -2 * C7229;
    const double C7402 = be * C7149;
    const double C7401 = 2 * C7153;
    const double C7400 = C7191 * C6938;
    const double C7399 = ae * C6998;
    const double C7398 = C7028 * C6935;
    const double C7397 = ae * C7249;
    const double C7396 = C7229 * C7078;
    const double C7395 = ae * C7171;
    const double C7394 = C7153 * C7049;
    const double C7393 = C7067 - C7093;
    const double C7392 = -2 * C7153;
    const double C7391 = C7040 * C6934;
    const double C7390 = be * C7022;
    const double C7389 = 2 * C7028;
    const double C7435 = C7406 + C7416;
    const double C7434 = C7415 / C6932;
    const double C7433 = C7401 + C7413;
    const double C7432 = C7412 / C6932;
    const double C7431 = C7389 + C7409;
    const double C7430 = C7408 / C6932;
    const double C7429 = 6 * C7407;
    const double C7428 = C7405 / C6932;
    const double C7427 = 6 * C7402;
    const double C7426 = C7400 / C6932;
    const double C7425 = 6. * C7399;
    const double C7424 = 2 * C7398;
    const double C7423 = 6. * C7397;
    const double C7422 = 2 * C7396;
    const double C7421 = 6. * C7395;
    const double C7420 = 2 * C7394;
    const double C7419 = ae * C7393;
    const double C7418 = C7391 / C6932;
    const double C7417 = 6 * C7390;
    const double C7448 = C7435 / C6944;
    const double C7447 = C7433 / C6944;
    const double C7446 = C7431 / C6944;
    const double C7445 = C7406 - C7429;
    const double C7444 = C7401 - C7427;
    const double C7443 = C7425 / C6944;
    const double C7442 = C7424 / C6932;
    const double C7441 = C7423 / C6944;
    const double C7440 = C7422 / C6932;
    const double C7439 = C7421 / C6944;
    const double C7438 = C7420 / C6932;
    const double C7437 = C7419 * C6939;
    const double C7436 = C7389 - C7417;
    const double C7458 = C7434 + C7448;
    const double C7457 = C7432 + C7447;
    const double C7456 = C7430 + C7446;
    const double C7455 = C7445 / C6944;
    const double C7454 = C7444 / C6944;
    const double C7453 = C7442 + C7443;
    const double C7452 = C7440 + C7441;
    const double C7451 = C7438 + C7439;
    const double C7450 = 2 * C7437;
    const double C7449 = C7436 / C6944;
    const double C7462 = C7428 - C7455;
    const double C7461 = C7426 - C7454;
    const double C7460 = C7418 - C7449;
    const double C7459 = C7450 / C6932;
    const double C7463 = C7222 - C7459;
    const double C7464 = ae * C7463;
    const double C7465 = -2 * C7464;
    const double gx200100 =
        C7027 * C7006 * C7350 -
        ((((C7449 - C7418) * C6935) / C6932 +
          (2 * C7040 +
           6 * ae *
               ((C6998 - 4 * be * C6976) / C6944 - (C7022 * C6934) / C6932)) /
              C6944) *
         std::pow(C7350, 2)) /
            2.0 +
        C7027 * C7350 * C7009;
    const double gx200010 = (C7350 * C7048 * C7460) / 2.0 +
                            C7004 * C7073 * C7350 + C7004 * C7048 * C7009;
    const double gx200001 = (C7077 * C7350 * C7460) / 2.0 +
                            C7004 * C7006 * C7077 + C7004 * C7350 * C7102;
    const double gx020100 = C7139 * C7160 * C7350 -
                            (C7350 * C7106 * C7453) / 2.0 +
                            C7139 * C7106 * C7009;
    const double gx020010 = (C7350 * C7164 * C7404) / 2.0 +
                            (C7350 * 2 * C6930 * C7192) / C6932 +
                            2 * C6930 * C7164 * C7009;
    const double gx020001 = (C7077 * C7106 * C7404) / 2.0 +
                            2 * C6930 * C7160 * C7077 +
                            2 * C6930 * C7106 * C7102;
    const double gx002100 = C7139 * C7006 * C7198 -
                            (C7198 * C7350 * C7453) / 2.0 +
                            C7139 * C7350 * C7236;
    const double gx002010 = (C7198 * C7048 * C7404) / 2.0 +
                            2 * C6930 * C7073 * C7198 +
                            2 * C6930 * C7048 * C7236;
    const double gx002001 = (C7242 * C7350 * C7404) / 2.0 +
                            2 * C6930 * C7006 * C7242 +
                            (2 * C6930 * C7350 * C7270) / C6932;
    const double gx110100 = C7283 * C7150 * C7350 -
                            (C7350 * C6927 * C7456) / 2.0 +
                            C7283 * C6927 * C7009;
    const double gx110010 = (C7350 * C7294 * C7411) / 2.0 +
                            C6976 * C7310 * C7350 + C6976 * C7294 * C7009;
    const double gx110001 = (C7077 * C6927 * C7411) / 2.0 +
                            C6976 * C7150 * C7077 + C6976 * C6927 * C7102;
    const double gx101100 = C7283 * C7006 * C6929 -
                            (C6929 * C7350 * C7456) / 2.0 +
                            C7283 * C7350 * C7227;
    const double gx101010 = (C6929 * C7048 * C7411) / 2.0 +
                            C6976 * C7073 * C6929 + C6976 * C7048 * C7227;
    const double gx101001 = (C7320 * C7350 * C7411) / 2.0 +
                            C6976 * C7006 * C7320 + C6976 * C7350 * C7336;
    const double gx011100 = C7139 * C7150 * C6929 -
                            (C6929 * C6927 * C7453) / 2.0 +
                            C7139 * C6927 * C7227;
    const double gx011010 = (C6929 * C7294 * C7404) / 2.0 +
                            2 * C6930 * C7310 * C6929 +
                            2 * C6930 * C7294 * C7227;
    const double gx011001 = (C7320 * C6927 * C7404) / 2.0 +
                            2 * C6930 * C7150 * C7320 +
                            2 * C6930 * C6927 * C7336;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gx110100;
    gx[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gx110010;
    gx[(Ai + 0) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * gx110001;
    gx[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gx011100;
    gx[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gx011010;
    gx[(Ai + 1) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * gx011001;
    gx[(Ai + 2) * matrix_size + Bi + 0] +=
        cc * (-0.5 * gx200100 - 0.5 * gx020100 + gx002100);
    gx[(Ai + 2) * matrix_size + Bi + 1] +=
        cc * (-0.5 * gx200010 - 0.5 * gx020010 + gx002010);
    gx[(Ai + 2) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gx200001 - 0.5 * gx020001 + gx002001);
    gx[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gx101100;
    gx[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gx101010;
    gx[(Ai + 3) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * gx101001;
    gx[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(0.75) * gx200100 - std::sqrt(0.75) * gx020100);
    gx[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(0.75) * gx200010 - std::sqrt(0.75) * gx020010);
    gx[(Ai + 4) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(0.75) * gx200001 - std::sqrt(0.75) * gx020001);
    const double gy200100 = (C7350 * 2 * C6940 * C7044) / C6932 +
                            (C7350 * C6928 * C7392) / 2.0 +
                            C6928 * C6954 * C7009;
    const double gy200010 = C7041 * C7069 * C7350 -
                            (C7350 * C6924 * C7451) / 2.0 +
                            C6924 * C7069 * C7009;
    const double gy200001 = C7041 * C6954 * C7077 +
                            (C7077 * C6924 * C7392) / 2.0 +
                            C6924 * C6954 * C7102;
    const double gy020100 = C7152 * C7148 * C7350 +
                            (C7350 * C7107 * C7461) / 2.0 +
                            C7107 * C7148 * C7009;
    const double gy020010 =
        C7010 * C7188 * C7350 -
        (C7350 * C7383 *
         (((C7454 - C7426) * C7049) / C6932 +
          (2 * C7191 +
           6 * ae *
               ((C7171 - 4 * be * C7070) / C6944 - (C7149 * C6938) / C6932)) /
              C6944)) /
            2.0 +
        C7383 * C7188 * C7009;
    const double gy020001 = C7010 * C7148 * C7077 +
                            (C7077 * C7383 * C7461) / 2.0 +
                            C7383 * C7148 * C7102;
    const double gy002100 = C7152 * C6954 * C7198 +
                            (C7198 * C7107 * C7392) / 2.0 +
                            C7107 * C6954 * C7236;
    const double gy002010 = C7010 * C7069 * C7198 -
                            (C7198 * C7383 * C7451) / 2.0 +
                            C7383 * C7069 * C7236;
    const double gy002001 = C7010 * C6954 * C7242 +
                            (C7242 * C7383 * C7392) / 2.0 +
                            (C7383 * C6954 * C7270) / C6932;
    const double gy110100 = C7290 * C7070 * C7350 +
                            (C7350 * C7274 * C7410) / 2.0 +
                            C7274 * C7070 * C7009;
    const double gy110010 = C7030 * C7305 * C7350 -
                            (C7350 * C6922 * C7457) / 2.0 +
                            C6922 * C7305 * C7009;
    const double gy110001 = C7030 * C7070 * C7077 +
                            (C7077 * C6922 * C7410) / 2.0 +
                            C6922 * C7070 * C7102;
    const double gy101100 = C7290 * C6954 * C6929 +
                            (C6929 * C7274 * C7392) / 2.0 +
                            C7274 * C6954 * C7227;
    const double gy101010 = C7030 * C7069 * C6929 -
                            (C6929 * C6922 * C7451) / 2.0 +
                            C6922 * C7069 * C7227;
    const double gy101001 = C7030 * C6954 * C7320 +
                            (C7320 * C6922 * C7392) / 2.0 +
                            C6922 * C6954 * C7336;
    const double gy011100 = C7152 * C7070 * C6929 +
                            (C6929 * C7107 * C7410) / 2.0 +
                            C7107 * C7070 * C7227;
    const double gy011010 = C7010 * C7305 * C6929 -
                            (C6929 * C7383 * C7457) / 2.0 +
                            C7383 * C7305 * C7227;
    const double gy011001 = C7010 * C7070 * C7320 +
                            (C7320 * C7383 * C7410) / 2.0 +
                            C7383 * C7070 * C7336;
    gy[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gy110100;
    gy[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gy110010;
    gy[(Ai + 0) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * gy110001;
    gy[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gy011100;
    gy[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gy011010;
    gy[(Ai + 1) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * gy011001;
    gy[(Ai + 2) * matrix_size + Bi + 0] +=
        cc * (-0.5 * gy200100 - 0.5 * gy020100 + gy002100);
    gy[(Ai + 2) * matrix_size + Bi + 1] +=
        cc * (-0.5 * gy200010 - 0.5 * gy020010 + gy002010);
    gy[(Ai + 2) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gy200001 - 0.5 * gy020001 + gy002001);
    gy[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gy101100;
    gy[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gy101010;
    gy[(Ai + 3) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * gy101001;
    gy[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(0.75) * gy200100 - std::sqrt(0.75) * gy020100);
    gy[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(0.75) * gy200010 - std::sqrt(0.75) * gy020010);
    gy[(Ai + 4) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(0.75) * gy200001 - std::sqrt(0.75) * gy020001);
    const double gz200100 = (2 * C6941 * C7350 * C7044) / C6932 +
                            C6928 * C7006 * C6955 +
                            (C6928 * C7350 * C7465) / 2.0;
    const double gz200010 = C7041 * C7048 * C6955 + C6924 * C7073 * C6955 +
                            (C6924 * C7048 * C7465) / 2.0;
    const double gz200001 = C7041 * C7350 * C7098 + C6924 * C7006 * C7098 -
                            (C6924 * C7350 * C7452) / 2.0;
    const double gz020100 = C7152 * C7106 * C6955 + C7107 * C7160 * C6955 +
                            (C7107 * C7106 * C7403) / 2.0;
    const double gz020010 = C7010 * C7164 * C6955 +
                            (2 * C6941 * C7383 * C7192) / C6932 +
                            (C7383 * C7164 * C7403) / 2.0;
    const double gz020001 = C7010 * C7106 * C7098 + C7383 * C7160 * C7098 -
                            (C7383 * C7106 * C7452) / 2.0;
    const double gz002100 = C7152 * C7350 * C7225 + C7107 * C7006 * C7225 +
                            (C7107 * C7350 * C7462) / 2.0;
    const double gz002010 = C7010 * C7048 * C7225 + C7383 * C7073 * C7225 +
                            (C7383 * C7048 * C7462) / 2.0;
    const double gz002001 =
        C7010 * C7350 * C7266 + C7383 * C7006 * C7266 -
        (C7383 * C7350 *
         (((C7455 - C7428) * C7078) / C6932 +
          (2 * C7269 +
           6 * ae *
               ((C7249 - 4 * be * C7099) / C6944 - (C7226 * C6939) / C6932)) /
              C6944)) /
            2.0;
    const double gz110100 = C7290 * C6927 * C6955 + C7274 * C7150 * C6955 +
                            (C7274 * C6927 * C7403) / 2.0;
    const double gz110010 = C7030 * C7294 * C6955 + C6922 * C7310 * C6955 +
                            (C6922 * C7294 * C7403) / 2.0;
    const double gz110001 = C7030 * C6927 * C7098 + C6922 * C7150 * C7098 -
                            (C6922 * C6927 * C7452) / 2.0;
    const double gz101100 = C7290 * C7350 * C7099 + C7274 * C7006 * C7099 +
                            (C7274 * C7350 * C7414) / 2.0;
    const double gz101010 = C7030 * C7048 * C7099 + C6922 * C7073 * C7099 +
                            (C6922 * C7048 * C7414) / 2.0;
    const double gz101001 = C7030 * C7350 * C7331 + C6922 * C7006 * C7331 -
                            (C6922 * C7350 * C7458) / 2.0;
    const double gz011100 = C7152 * C6927 * C7099 + C7107 * C7150 * C7099 +
                            (C7107 * C6927 * C7414) / 2.0;
    const double gz011010 = C7010 * C7294 * C7099 + C7383 * C7310 * C7099 +
                            (C7383 * C7294 * C7414) / 2.0;
    const double gz011001 = C7010 * C6927 * C7331 + C7383 * C7150 * C7331 -
                            (C7383 * C6927 * C7458) / 2.0;
    gz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gz110100;
    gz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gz110010;
    gz[(Ai + 0) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * gz110001;
    gz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gz011100;
    gz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gz011010;
    gz[(Ai + 1) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * gz011001;
    gz[(Ai + 2) * matrix_size + Bi + 0] +=
        cc * (-0.5 * gz200100 - 0.5 * gz020100 + gz002100);
    gz[(Ai + 2) * matrix_size + Bi + 1] +=
        cc * (-0.5 * gz200010 - 0.5 * gz020010 + gz002010);
    gz[(Ai + 2) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gz200001 - 0.5 * gz020001 + gz002001);
    gz[(Ai + 3) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gz101100;
    gz[(Ai + 3) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gz101010;
    gz[(Ai + 3) * matrix_size + Bi + 2] += cc * std::sqrt(3.0) * gz101001;
    gz[(Ai + 4) * matrix_size + Bi + 0] +=
        cc * (std::sqrt(0.75) * gz200100 - std::sqrt(0.75) * gz020100);
    gz[(Ai + 4) * matrix_size + Bi + 1] +=
        cc * (std::sqrt(0.75) * gz200010 - std::sqrt(0.75) * gz020010);
    gz[(Ai + 4) * matrix_size + Bi + 2] +=
        cc * (std::sqrt(0.75) * gz200001 - std::sqrt(0.75) * gz020001);
}

// Automatically generated, do not edit
