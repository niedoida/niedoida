/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2222_1_et(const double ae,
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
                            const double* const vrx,
                            const double* const vry,
                            const double* const vrz,
                            double* const etx,
                            double* const ety,
                            double* const etz)
{
    const double xAB = xA - xB;
    const double yAB = yA - yB;
    const double zAB = zA - zB;
    const double xCD = xC - xD;
    const double yCD = yC - yD;
    const double zCD = zC - zD;
    const double p = ae + be;
    const double q = ce + de;
    const double C42531 = g[560];
    const double C42542 = g[561];
    const double C42552 = g[562];
    const double C42563 = g[563];
    const double C42636 = g[570];
    const double C42647 = g[571];
    const double C42720 = g[578];
    const double C42731 = g[579];
    const double C42741 = g[580];
    const double C42752 = g[581];
    const double C42783 = g[584];
    const double C42794 = g[585];
    const double C42825 = g[588];
    const double C42836 = g[589];
    const double C42909 = g[596];
    const double C42920 = g[597];
    const double C42930 = g[598];
    const double C42941 = g[599];
    const double C42951 = g[600];
    const double C42962 = g[601];
    const double C42993 = g[604];
    const double C43004 = g[605];
    const double C43140 = g[618];
    const double C43151 = g[619];
    const double C45134 = g[622];
    const double C45144 = g[623];
    const double C45154 = g[624];
    const double C45164 = g[625];
    const double C45234 = g[632];
    const double C45244 = g[633];
    const double C45314 = g[640];
    const double C45324 = g[641];
    const double C45334 = g[642];
    const double C45344 = g[643];
    const double C45374 = g[646];
    const double C45384 = g[647];
    const double C45414 = g[650];
    const double C45424 = g[651];
    const double C45494 = g[658];
    const double C45504 = g[659];
    const double C45514 = g[660];
    const double C45524 = g[661];
    const double C45534 = g[662];
    const double C45544 = g[663];
    const double C45574 = g[666];
    const double C45584 = g[667];
    const double C45714 = g[680];
    const double C45724 = g[681];
    const double C47707 = g[684];
    const double C47717 = g[685];
    const double C47727 = g[686];
    const double C47737 = g[687];
    const double C47807 = g[694];
    const double C47817 = g[695];
    const double C47887 = g[702];
    const double C47897 = g[703];
    const double C47907 = g[704];
    const double C47917 = g[705];
    const double C47947 = g[708];
    const double C47957 = g[709];
    const double C47987 = g[712];
    const double C47997 = g[713];
    const double C48067 = g[720];
    const double C48077 = g[721];
    const double C48087 = g[722];
    const double C48097 = g[723];
    const double C48107 = g[724];
    const double C48117 = g[725];
    const double C48147 = g[728];
    const double C48157 = g[729];
    const double C48287 = g[742];
    const double C48297 = g[743];
    const double C50248 = g[746];
    const double C50257 = g[747];
    const double C50267 = g[748];
    const double C50276 = g[749];
    const double C50343 = g[756];
    const double C50352 = g[757];
    const double C50419 = g[764];
    const double C50428 = g[765];
    const double C50438 = g[766];
    const double C50447 = g[767];
    const double C50476 = g[770];
    const double C50485 = g[771];
    const double C50514 = g[774];
    const double C50523 = g[775];
    const double C50590 = g[782];
    const double C50599 = g[783];
    const double C50609 = g[784];
    const double C50618 = g[785];
    const double C50628 = g[786];
    const double C50637 = g[787];
    const double C50666 = g[790];
    const double C50675 = g[791];
    const double C50799 = g[804];
    const double C50808 = g[805];
    const double C51612 = g[808];
    const double C51621 = g[809];
    const double C51631 = g[810];
    const double C51640 = g[811];
    const double C51707 = g[818];
    const double C51716 = g[819];
    const double C51783 = g[826];
    const double C51792 = g[827];
    const double C51802 = g[828];
    const double C51811 = g[829];
    const double C51840 = g[832];
    const double C51849 = g[833];
    const double C51878 = g[836];
    const double C51887 = g[837];
    const double C51954 = g[844];
    const double C51963 = g[845];
    const double C51973 = g[846];
    const double C51982 = g[847];
    const double C51992 = g[848];
    const double C52001 = g[849];
    const double C52030 = g[852];
    const double C52039 = g[853];
    const double C52163 = g[866];
    const double C52172 = g[867];
    const double C53193 = g[870];
    const double C53202 = g[871];
    const double C53212 = g[872];
    const double C53221 = g[873];
    const double C53288 = g[880];
    const double C53297 = g[881];
    const double C53364 = g[888];
    const double C53373 = g[889];
    const double C53383 = g[890];
    const double C53392 = g[891];
    const double C53421 = g[894];
    const double C53430 = g[895];
    const double C53459 = g[898];
    const double C53468 = g[899];
    const double C53535 = g[906];
    const double C53544 = g[907];
    const double C53554 = g[908];
    const double C53563 = g[909];
    const double C53573 = g[910];
    const double C53582 = g[911];
    const double C53611 = g[914];
    const double C53620 = g[915];
    const double C53744 = g[928];
    const double C53753 = g[929];
    const double C90459 = g[931];
    const double C90478 = g[932];
    const double C90554 = g[936];
    const double C90630 = g[940];
    const double C90649 = g[941];
    const double C90687 = g[943];
    const double C90725 = g[945];
    const double C90801 = g[949];
    const double C90820 = g[950];
    const double C90839 = g[951];
    const double C90877 = g[953];
    const double C91010 = g[960];
    const double C93000 = g[962];
    const double C93018 = g[963];
    const double C93090 = g[967];
    const double C93162 = g[971];
    const double C93180 = g[972];
    const double C93216 = g[974];
    const double C93252 = g[976];
    const double C93324 = g[980];
    const double C93342 = g[981];
    const double C93360 = g[982];
    const double C93396 = g[984];
    const double C93522 = g[991];
    const double C98300 = g[993];
    const double C98317 = g[994];
    const double C98385 = g[998];
    const double C98453 = g[1002];
    const double C98470 = g[1003];
    const double C98504 = g[1005];
    const double C98538 = g[1007];
    const double C98606 = g[1011];
    const double C98623 = g[1012];
    const double C98640 = g[1013];
    const double C98674 = g[1015];
    const double C98793 = g[1022];
    const double C138048 = g[1024];
    const double C138067 = g[1025];
    const double C138143 = g[1029];
    const double C138219 = g[1033];
    const double C138238 = g[1034];
    const double C138276 = g[1036];
    const double C138314 = g[1038];
    const double C138390 = g[1042];
    const double C138409 = g[1043];
    const double C138428 = g[1044];
    const double C138466 = g[1046];
    const double C138599 = g[1053];
    const double C143561 = g[1054];
    const double C143607 = g[1055];
    const double C143655 = g[1056];
    const double C143672 = g[1057];
    const double C143688 = g[1058];
    const double C143705 = g[1059];
    const double C143793 = g[1060];
    const double C144010 = g[1061];
    const double C144275 = g[1062];
    const double C144320 = g[1063];
    const double C144408 = g[1064];
    const double C144630 = g[1065];
    const double C144675 = g[1066];
    const double C144763 = g[1067];
    const double C144779 = g[1068];
    const double C144794 = g[1069];
    const double C144810 = g[1070];
    const double C144855 = g[1071];
    const double C144871 = g[1072];
    const double C144886 = g[1073];
    const double C144947 = g[1074];
    const double C144977 = g[1075];
    const double C145009 = g[1076];
    const double C145027 = g[1077];
    const double C145045 = g[1078];
    const double C145104 = g[1079];
    const double C145250 = g[1080];
    const double C145426 = g[1081];
    const double C145456 = g[1082];
    const double C145515 = g[1083];
    const double C145663 = g[1084];
    const double C145693 = g[1085];
    const double C145752 = g[1086];
    const double C145769 = g[1087];
    const double C145785 = g[1088];
    const double C145815 = g[1089];
    const double C145832 = g[1090];
    const double C145877 = g[1091];
    const double C145907 = g[1092];
    const double C145939 = g[1093];
    const double C145957 = g[1094];
    const double C145975 = g[1095];
    const double C146034 = g[1096];
    const double C146180 = g[1097];
    const double C146358 = g[1098];
    const double C146388 = g[1099];
    const double C146447 = g[1100];
    const double C146594 = g[1101];
    const double C146624 = g[1102];
    const double C146683 = g[1103];
    const double C146700 = g[1104];
    const double C146717 = g[1105];
    const double C146747 = g[1106];
    const double C146764 = g[1107];
    const double C146809 = g[1108];
    const double C146824 = g[1109];
    const double C146839 = g[1110];
    const double C146856 = g[1111];
    const double C146886 = g[1112];
    const double C146961 = g[1113];
    const double C147047 = g[1114];
    const double C147062 = g[1115];
    const double C147093 = g[1116];
    const double C147167 = g[1117];
    const double C147182 = g[1118];
    const double C147211 = g[1119];
    const double C147226 = g[1120];
    const double C147242 = g[1121];
    const double C147271 = g[1122];
    const double C147286 = g[1123];
    const double C147301 = g[1124];
    const double C147318 = g[1125];
    const double C147348 = g[1126];
    const double C147421 = g[1127];
    const double C147508 = g[1128];
    const double C147523 = g[1129];
    const double C147553 = g[1130];
    const double C147624 = g[1131];
    const double C147640 = g[1132];
    const double C147669 = g[1133];
    const double C147685 = g[1134];
    const double C147701 = g[1135];
    const double C147730 = g[1136];
    const double C147745 = g[1137];
    const double C147761 = g[1138];
    const double C147779 = g[1139];
    const double C147809 = g[1140];
    const double C147882 = g[1141];
    const double C147969 = g[1142];
    const double C147984 = g[1143];
    const double C148014 = g[1144];
    const double C148085 = g[1145];
    const double C148100 = g[1146];
    const double C148129 = g[1147];
    const double C148145 = g[1148];
    const double C148161 = g[1149];
    const double C148248 = g[1150];
    const double C148264 = g[1151];
    const double C148967 = g[1152];
    const double C148982 = g[1153];
    const double C149025 = g[1154];
    const double C149040 = g[1155];
    const double C149086 = g[1156];
    const double C149116 = g[1157];
    const double C149148 = g[1158];
    const double C149165 = g[1159];
    const double C149182 = g[1160];
    const double C149241 = g[1161];
    const double C149387 = g[1162];
    const double C149563 = g[1163];
    const double C149593 = g[1164];
    const double C149652 = g[1165];
    const double C149800 = g[1166];
    const double C149830 = g[1167];
    const double C149889 = g[1168];
    const double C149905 = g[1169];
    const double C149920 = g[1170];
    const double C149950 = g[1171];
    const double C149966 = g[1172];
    const double C150010 = g[1173];
    const double C150040 = g[1174];
    const double C150072 = g[1175];
    const double C150089 = g[1176];
    const double C150106 = g[1177];
    const double C150165 = g[1178];
    const double C150311 = g[1179];
    const double C150491 = g[1180];
    const double C150521 = g[1181];
    const double C150580 = g[1182];
    const double C150727 = g[1183];
    const double C150757 = g[1184];
    const double C150816 = g[1185];
    const double C150832 = g[1186];
    const double C150848 = g[1187];
    const double C150878 = g[1188];
    const double C150894 = g[1189];
    const double C150940 = g[1190];
    const double C150955 = g[1191];
    const double C150970 = g[1192];
    const double C150987 = g[1193];
    const double C151017 = g[1194];
    const double C151092 = g[1195];
    const double C151178 = g[1196];
    const double C151193 = g[1197];
    const double C151224 = g[1198];
    const double C151298 = g[1199];
    const double C151313 = g[1200];
    const double C151342 = g[1201];
    const double C151357 = g[1202];
    const double C151373 = g[1203];
    const double C151402 = g[1204];
    const double C151417 = g[1205];
    const double C151432 = g[1206];
    const double C151449 = g[1207];
    const double C151479 = g[1208];
    const double C151552 = g[1209];
    const double C151639 = g[1210];
    const double C151654 = g[1211];
    const double C151684 = g[1212];
    const double C151755 = g[1213];
    const double C151770 = g[1214];
    const double C151799 = g[1215];
    const double C151814 = g[1216];
    const double C151830 = g[1217];
    const double C151859 = g[1218];
    const double C151874 = g[1219];
    const double C151890 = g[1220];
    const double C151907 = g[1221];
    const double C151937 = g[1222];
    const double C152010 = g[1223];
    const double C152097 = g[1224];
    const double C152112 = g[1225];
    const double C152142 = g[1226];
    const double C152213 = g[1227];
    const double C152228 = g[1228];
    const double C152257 = g[1229];
    const double C152272 = g[1230];
    const double C152288 = g[1231];
    const double C152374 = g[1232];
    const double C152390 = g[1233];
    const double C153090 = g[1234];
    const double C153105 = g[1235];
    const double C153148 = g[1236];
    const double C153163 = g[1237];
    const double C153236 = g[1238];
    const double C153590 = g[1239];
    const double C153619 = g[1240];
    const double C153648 = g[1241];
    const double C153678 = g[1242];
    const double C153710 = g[1243];
    const double C153727 = g[1244];
    const double C153744 = g[1245];
    const double C153803 = g[1246];
    const double C153949 = g[1247];
    const double C154127 = g[1248];
    const double C154157 = g[1249];
    const double C154216 = g[1250];
    const double C154363 = g[1251];
    const double C154393 = g[1252];
    const double C154452 = g[1253];
    const double C154468 = g[1254];
    const double C154484 = g[1255];
    const double C154514 = g[1256];
    const double C154530 = g[1257];
    const double C154574 = g[1258];
    const double C154589 = g[1259];
    const double C154604 = g[1260];
    const double C154621 = g[1261];
    const double C154651 = g[1262];
    const double C154726 = g[1263];
    const double C154812 = g[1264];
    const double C154827 = g[1265];
    const double C154858 = g[1266];
    const double C154932 = g[1267];
    const double C154947 = g[1268];
    const double C154976 = g[1269];
    const double C154991 = g[1270];
    const double C155007 = g[1271];
    const double C155036 = g[1272];
    const double C155051 = g[1273];
    const double C155066 = g[1274];
    const double C155083 = g[1275];
    const double C155113 = g[1276];
    const double C155186 = g[1277];
    const double C155273 = g[1278];
    const double C155288 = g[1279];
    const double C155318 = g[1280];
    const double C155389 = g[1281];
    const double C155405 = g[1282];
    const double C155434 = g[1283];
    const double C155450 = g[1284];
    const double C155466 = g[1285];
    const double C155495 = g[1286];
    const double C155510 = g[1287];
    const double C155526 = g[1288];
    const double C155543 = g[1289];
    const double C155573 = g[1290];
    const double C155646 = g[1291];
    const double C155733 = g[1292];
    const double C155748 = g[1293];
    const double C155778 = g[1294];
    const double C155849 = g[1295];
    const double C155864 = g[1296];
    const double C155893 = g[1297];
    const double C155908 = g[1298];
    const double C155924 = g[1299];
    const double C155981 = g[1300];
    const double C156338 = g[1301];
    const double C156368 = g[1302];
    const double C156425 = g[1303];
    const double C156778 = g[1304];
    const double C156807 = g[1305];
    const double C156864 = g[1306];
    const double C157221 = g[1307];
    const double C157252 = g[1308];
    const double C157309 = g[1309];
    const double C157662 = g[1310];
    const double C157691 = g[1311];
    const double C157720 = g[1312];
    const double C157735 = g[1313];
    const double C157751 = g[1314];
    const double C157767 = g[1315];
    const double C157783 = g[1316];
    const double C157797 = g[1317];
    const double C157814 = g[1318];
    const double C157829 = g[1319];
    const double C157844 = g[1320];
    const double C157860 = g[1321];
    const double C157875 = g[1322];
    const double C157891 = g[1323];
    const double C157908 = g[1324];
    const double C157923 = g[1325];
    const double C157939 = g[1326];
    const double C157956 = g[1327];
    const double C157972 = g[1328];
    const double C158615 = g[1329];
    const double C158631 = g[1330];
    const double C158646 = g[1331];
    const double C158662 = g[1332];
    const double C158677 = g[1333];
    const double C158692 = g[1334];
    const double C158707 = g[1335];
    const double C158723 = g[1336];
    const double C158738 = g[1337];
    const double C158753 = g[1338];
    const double C158770 = g[1339];
    const double C158785 = g[1340];
    const double C158802 = g[1341];
    const double C158818 = g[1342];
    const double C159263 = g[1343];
    const double C159279 = g[1344];
    const double C159294 = g[1345];
    const double C159310 = g[1346];
    const double C159325 = g[1347];
    const double C159340 = g[1348];
    const double C159355 = g[1349];
    const double C159371 = g[1350];
    const double C159386 = g[1351];
    const double C159402 = g[1352];
    const double C159418 = g[1353];
    const double C159433 = g[1354];
    const double C159450 = g[1355];
    const double C159466 = g[1356];
    const double C159936 = g[1357];
    const double C159951 = g[1358];
    const double C159966 = g[1359];
    const double C159981 = g[1360];
    const double C159997 = g[1361];
    const double C160126 = g[1362];
    const double C160141 = g[1363];
    const double C160156 = g[1364];
    const double C160269 = g[1365];
    const double C160284 = g[1366];
    const double C160299 = g[1367];
    const double C160314 = g[1368];
    const double C160329 = g[1369];
    const double C160443 = g[1370];
    const double C160458 = g[1371];
    const double C160473 = g[1372];
    const double C160712 = g[1373];
    const double C160728 = g[1374];
    const double C160743 = g[1375];
    const double C160759 = g[1376];
    const double C160774 = g[1377];
    const double C160789 = g[1378];
    const double C160804 = g[1379];
    const double C160819 = g[1380];
    const double C160837 = g[1381];
    const double C160852 = g[1382];
    const double C160870 = g[1383];
    const double C160886 = g[1384];
    const double C161275 = g[1385];
    const double C161290 = g[1386];
    const double C161305 = g[1387];
    const double C161321 = g[1388];
    const double C161336 = g[1389];
    const double C161351 = g[1390];
    const double C161366 = g[1391];
    const double C161381 = g[1392];
    const double C161398 = g[1393];
    const double C161413 = g[1394];
    const double C161431 = g[1395];
    const double C161447 = g[1396];
    const double C161917 = g[1397];
    const double C161932 = g[1398];
    const double C161947 = g[1399];
    const double C161962 = g[1400];
    const double C161978 = g[1401];
    const double C162107 = g[1402];
    const double C162122 = g[1403];
    const double C162137 = g[1404];
    const double C162222 = g[1405];
    const double C162237 = g[1406];
    const double C162252 = g[1407];
    const double C162267 = g[1408];
    const double C162353 = g[1409];
    const double C162368 = g[1410];
    const double C162383 = g[1411];
    const double C162552 = g[1412];
    const double C162567 = g[1413];
    const double C162597 = g[1414];
    const double C162613 = g[1415];
    const double C162628 = g[1416];
    const double C162644 = g[1417];
    const double C162659 = g[1418];
    const double C162674 = g[1419];
    const double C162689 = g[1420];
    const double C162705 = g[1421];
    const double C162722 = g[1422];
    const double C162737 = g[1423];
    const double C162755 = g[1424];
    const double C162771 = g[1425];
    const double C163186 = g[1426];
    const double C163201 = g[1427];
    const double C163216 = g[1428];
    const double C163231 = g[1429];
    const double C163247 = g[1430];
    const double C163375 = g[1431];
    const double C163390 = g[1432];
    const double C163405 = g[1433];
    const double C163518 = g[1434];
    const double C163533 = g[1435];
    const double C163548 = g[1436];
    const double C163563 = g[1437];
    const double C163649 = g[1438];
    const double C163664 = g[1439];
    const double C163679 = g[1440];
    const double C163735 = g[1441];
    const double C163750 = g[1442];
    const double C163765 = g[1443];
    const double C163780 = g[1444];
    const double C163863 = g[1445];
    const double C163879 = g[1446];
    const double C163894 = g[1447];
    const double C163910 = g[1448];
    const double C163955 = g[1449];
    const double C164001 = g[1450];
    const double C164017 = g[1451];
    const double C164033 = g[1452];
    const double C164049 = g[1453];
    const double C164306 = g[1454];
    const double C164322 = g[1455];
    const double C164337 = g[1456];
    const double C164352 = g[1457];
    const double C164367 = g[1458];
    const double C164383 = g[1459];
    const double C164399 = g[1460];
    const double C164655 = g[1461];
    const double C164671 = g[1462];
    const double C164702 = g[1463];
    const double C164717 = g[1464];
    const double C164732 = g[1465];
    const double C164748 = g[1466];
    const double C164764 = g[1467];
    const double C165003 = g[1468];
    const double C165046 = g[1469];
    const double C165076 = g[1470];
    const double C165092 = g[1471];
    const double C165107 = g[1472];
    const double C165122 = g[1473];
    const double C165137 = g[1474];
    const double C165152 = g[1475];
    const double C165167 = g[1476];
    const double C165183 = g[1477];
    const double C165199 = g[1478];
    const double C165457 = g[1479];
    const double C165472 = g[1480];
    const double C165487 = g[1481];
    const double C165502 = g[1482];
    const double C165517 = g[1483];
    const double C165532 = g[1484];
    const double C165548 = g[1485];
    const double C165564 = g[1486];
    const double C165803 = g[1487];
    const double C165846 = g[1488];
    const double C165877 = g[1489];
    const double C165893 = g[1490];
    const double C165924 = g[1491];
    const double C165939 = g[1492];
    const double C165954 = g[1493];
    const double C165969 = g[1494];
    const double C165984 = g[1495];
    const double C166000 = g[1496];
    const double C166016 = g[1497];
    const double C166270 = g[1498];
    const double C166299 = g[1499];
    const double C166316 = g[1500];
    const double C166390 = g[1501];
    const double C166406 = g[1502];
    const double C166422 = g[1503];
    const double C166587 = g[1504];
    const double C166602 = g[1505];
    const double C166617 = g[1506];
    const double C166632 = g[1507];
    const double C166782 = g[1508];
    const double C166825 = g[1509];
    const double C166840 = g[1510];
    const double C166855 = g[1511];
    const double C167000 = g[1512];
    const double C167015 = g[1513];
    const double C167030 = g[1514];
    const double C167045 = g[1515];
    const double C167060 = g[1516];
    const double C167075 = g[1517];
    const double C167239 = g[1518];
    const double C167254 = g[1519];
    const double C167269 = g[1520];
    const double C167284 = g[1521];
    const double C167415 = g[1522];
    const double C167430 = g[1523];
    const double C167445 = g[1524];
    const double C167488 = g[1525];
    const double C167503 = g[1526];
    const double C167518 = g[1527];
    const double C167533 = g[1528];
    const double C167678 = g[1529];
    const double C167693 = g[1530];
    const double C168106 = g[1531];
    const double C169342 = g[1532];
    const double C170256 = g[1533];
    const double C171036 = g[1534];
    const double C171483 = g[1535];
    const double C171931 = g[1536];
    const double C173402 = g[1537];
    const double C174310 = g[1538];
    const double C175090 = g[1539];
    const double C175537 = g[1540];
    const double C175982 = g[1541];
    const double C177884 = g[1542];
    const double C178660 = g[1543];
    const double C179107 = g[1544];
    const double C179554 = g[1545];
    const double C181889 = g[1546];
    const double C181905 = g[1547];
    const double C182021 = g[1548];
    const double C182052 = g[1549];
    const double C182403 = g[1550];
    const double C182419 = g[1551];
    const double C182727 = g[1552];
    const double C182787 = g[1553];
    const double C182818 = g[1554];
    const double C183071 = g[1555];
    const double C183365 = g[1556];
    const double C183452 = g[1557];
    const double C183482 = g[1558];
    const double C183734 = g[1559];
    const double C183893 = g[1560];
    const double C183979 = g[1561];
    const double C184121 = g[1562];
    const double C184277 = g[1563];
    const double C184430 = g[1564];
    const double C184766 = g[1565];
    const double C184811 = g[1566];
    const double C184827 = g[1567];
    const double C184843 = g[1568];
    const double C184859 = g[1569];
    const double C184905 = g[1570];
    const double C185085 = g[1571];
    const double C185322 = g[1572];
    const double C185422 = g[1573];
    const double C185438 = g[1574];
    const double C185454 = g[1575];
    const double C185469 = g[1576];
    const double C185515 = g[1577];
    const double C185694 = g[1578];
    const double C185853 = g[1579];
    const double C185939 = g[1580];
    const double C186053 = g[1581];
    const double C186153 = g[1582];
    const double C186182 = g[1583];
    const double C186267 = g[1584];
    const double C186630 = g[1585];
    const double C186702 = g[1586];
    const double C186718 = g[1587];
    const double C186734 = g[1588];
    const double C186749 = g[1589];
    const double C186796 = g[1590];
    const double C186975 = g[1591];
    const double C187106 = g[1592];
    const double C187192 = g[1593];
    const double C187333 = g[1594];
    const double C187433 = g[1595];
    const double C187462 = g[1596];
    const double C187546 = g[1597];
    const double C187658 = g[1598];
    const double C187744 = g[1599];
    const double C187761 = g[1600];
    const double C187896 = g[1601];
    const double C187957 = g[1602];
    const double C187973 = g[1603];
    const double C187990 = g[1604];
    const double C188243 = g[1605];
    const double C188304 = g[1606];
    const double C188320 = g[1607];
    const double C188336 = g[1608];
    const double C188501 = g[1609];
    const double C188605 = g[1610];
    const double C188649 = g[1611];
    const double C188665 = g[1612];
    const double C188682 = g[1613];
    const double C189035 = g[1614];
    const double C189051 = g[1615];
    const double C189098 = g[1616];
    const double C189114 = g[1617];
    const double C189130 = g[1618];
    const double C189396 = g[1619];
    const double C189440 = g[1620];
    const double C189456 = g[1621];
    const double C189472 = g[1622];
    const double C189709 = g[1623];
    const double C189842 = g[1624];
    const double C189900 = g[1625];
    const double C189916 = g[1626];
    const double C189933 = g[1627];
    const double C190869 = g[1628];
    const double C190914 = g[1629];
    const double C190945 = g[1630];
    const double C191077 = g[1631];
    const double C191120 = g[1632];
    const double C191321 = g[1633];
    const double C191378 = g[1634];
    const double C208713 = g[1635];
    const double C208744 = g[1636];
    const double C209303 = g[1637];
    const double C209334 = g[1638];
    const double C210573 = g[1639];
    const double C210589 = g[1640];
    const double C210605 = g[1641];
    const double C211501 = g[1642];
    const double C211518 = g[1643];
    const double C211638 = g[1644];
    const double C211745 = g[1645];
    const double C211776 = g[1646];
    const double C211792 = g[1647];
    const double C211808 = g[1648];
    const double C211986 = g[1649];
    const double C212092 = g[1650];
    const double C212123 = g[1651];
    const double C212139 = g[1652];
    const double C212155 = g[1653];
    const double C212437 = g[1654];
    const double C212468 = g[1655];
    const double C212484 = g[1656];
    const double C212500 = g[1657];
    const double C212778 = g[1658];
    const double C212885 = g[1659];
    const double C212916 = g[1660];
    const double C212932 = g[1661];
    const double C212948 = g[1662];
    const double C213227 = g[1663];
    const double C213258 = g[1664];
    const double C213274 = g[1665];
    const double C213290 = g[1666];
    const double C213687 = g[1667];
    const double C213703 = g[1668];
    const double C213719 = g[1669];
    const double C213735 = g[1670];
    const double C213751 = g[1671];
    const double C215099 = g[1672];
    const double C215130 = g[1673];
    const double C215146 = g[1674];
    const double C143659 = vrx[0];
    const double C143676 = vrx[1];
    const double C143693 = vrx[2];
    const double C145014 = vrx[3];
    const double C145032 = vrx[4];
    const double C145944 = vrx[5];
    const double C145962 = vrx[6];
    const double C146843 = vrx[7];
    const double C147305 = vrx[8];
    const double C147766 = vrx[9];
    const double C148252 = vrx[10];
    const double C148268 = vrx[11];
    const double C149152 = vrx[12];
    const double C149169 = vrx[13];
    const double C150076 = vrx[14];
    const double C150093 = vrx[15];
    const double C150974 = vrx[16];
    const double C151436 = vrx[17];
    const double C151894 = vrx[18];
    const double C152378 = vrx[19];
    const double C152394 = vrx[20];
    const double C153240 = vrx[21];
    const double C153714 = vrx[22];
    const double C153731 = vrx[23];
    const double C154608 = vrx[24];
    const double C155070 = vrx[25];
    const double C155530 = vrx[26];
    const double C155986 = vrx[27];
    const double C156430 = vrx[28];
    const double C156869 = vrx[29];
    const double C157313 = vrx[30];
    const double C157755 = vrx[31];
    const double C157802 = vrx[32];
    const double C157833 = vrx[33];
    const double C157848 = vrx[34];
    const double C157895 = vrx[35];
    const double C157943 = vrx[36];
    const double C158049 = vrx[37];
    const double C158078 = vrx[38];
    const double C158297 = vrx[39];
    const double C158326 = vrx[40];
    const double C158487 = vrx[41];
    const double C158545 = vrx[42];
    const double C158574 = vrx[43];
    const double C158589 = vrx[44];
    const double C158711 = vrx[45];
    const double C158757 = vrx[46];
    const double C158789 = vrx[47];
    const double C158881 = vrx[48];
    const double C159030 = vrx[49];
    const double C159045 = vrx[50];
    const double C159164 = vrx[51];
    const double C159222 = vrx[52];
    const double C159251 = vrx[53];
    const double C159359 = vrx[54];
    const double C159437 = vrx[55];
    const double C159704 = vrx[56];
    const double C159823 = vrx[57];
    const double C159895 = vrx[58];
    const double C159924 = vrx[59];
    const double C160505 = vrx[60];
    const double C160601 = vrx[61];
    const double C160672 = vrx[62];
    const double C160823 = vrx[63];
    const double C160856 = vrx[64];
    const double C160949 = vrx[65];
    const double C161098 = vrx[66];
    const double C161113 = vrx[67];
    const double C161218 = vrx[68];
    const double C161248 = vrx[69];
    const double C161263 = vrx[70];
    const double C161417 = vrx[71];
    const double C161713 = vrx[72];
    const double C161818 = vrx[73];
    const double C161862 = vrx[74];
    const double C161891 = vrx[75];
    const double C162457 = vrx[76];
    const double C162540 = vrx[77];
    const double C162585 = vrx[78];
    const double C162741 = vrx[79];
    const double C163010 = vrx[80];
    const double C163115 = vrx[81];
    const double C163159 = vrx[82];
    const double C163174 = vrx[83];
    const double C163898 = vrx[84];
    const double C163959 = vrx[85];
    const double C164005 = vrx[86];
    const double C164068 = vrx[87];
    const double C164098 = vrx[88];
    const double C164128 = vrx[89];
    const double C164189 = vrx[90];
    const double C164204 = vrx[91];
    const double C164234 = vrx[92];
    const double C164294 = vrx[93];
    const double C164418 = vrx[94];
    const double C164448 = vrx[95];
    const double C164478 = vrx[96];
    const double C164538 = vrx[97];
    const double C164553 = vrx[98];
    const double C164583 = vrx[99];
    const double C164643 = vrx[100];
    const double C164886 = vrx[101];
    const double C164901 = vrx[102];
    const double C164931 = vrx[103];
    const double C164991 = vrx[104];
    const double C165219 = vrx[105];
    const double C165249 = vrx[106];
    const double C165280 = vrx[107];
    const double C165340 = vrx[108];
    const double C165355 = vrx[109];
    const double C165385 = vrx[110];
    const double C165445 = vrx[111];
    const double C165686 = vrx[112];
    const double C165701 = vrx[113];
    const double C165731 = vrx[114];
    const double C165791 = vrx[115];
    const double C166153 = vrx[116];
    const double C166168 = vrx[117];
    const double C166198 = vrx[118];
    const double C166258 = vrx[119];
    const double C166320 = vrx[120];
    const double C166349 = vrx[121];
    const double C166378 = vrx[122];
    const double C166394 = vrx[123];
    const double C166410 = vrx[124];
    const double C166426 = vrx[125];
    const double C166441 = vrx[126];
    const double C166456 = vrx[127];
    const double C166471 = vrx[128];
    const double C166500 = vrx[129];
    const double C166515 = vrx[130];
    const double C166530 = vrx[131];
    const double C166545 = vrx[132];
    const double C166560 = vrx[133];
    const double C166575 = vrx[134];
    const double C166650 = vrx[135];
    const double C166665 = vrx[136];
    const double C166680 = vrx[137];
    const double C166695 = vrx[138];
    const double C166710 = vrx[139];
    const double C166725 = vrx[140];
    const double C166740 = vrx[141];
    const double C166755 = vrx[142];
    const double C166770 = vrx[143];
    const double C166943 = vrx[144];
    const double C166958 = vrx[145];
    const double C166973 = vrx[146];
    const double C166988 = vrx[147];
    const double C167093 = vrx[148];
    const double C167122 = vrx[149];
    const double C167137 = vrx[150];
    const double C167152 = vrx[151];
    const double C167167 = vrx[152];
    const double C167182 = vrx[153];
    const double C167197 = vrx[154];
    const double C167212 = vrx[155];
    const double C167227 = vrx[156];
    const double C167358 = vrx[157];
    const double C167373 = vrx[158];
    const double C167388 = vrx[159];
    const double C167403 = vrx[160];
    const double C167621 = vrx[161];
    const double C167636 = vrx[162];
    const double C167651 = vrx[163];
    const double C167666 = vrx[164];
    const double C167803 = vry[0];
    const double C167819 = vry[1];
    const double C167835 = vry[2];
    const double C169139 = vry[3];
    const double C169156 = vry[4];
    const double C170053 = vry[5];
    const double C170070 = vry[6];
    const double C170936 = vry[7];
    const double C171385 = vry[8];
    const double C171833 = vry[9];
    const double C172308 = vry[10];
    const double C172323 = vry[11];
    const double C173200 = vry[12];
    const double C173216 = vry[13];
    const double C174108 = vry[14];
    const double C174124 = vry[15];
    const double C174990 = vry[16];
    const double C175439 = vry[17];
    const double C175884 = vry[18];
    const double C176357 = vry[19];
    const double C176372 = vry[20];
    const double C177213 = vry[21];
    const double C177682 = vry[22];
    const double C177698 = vry[23];
    const double C178560 = vry[24];
    const double C179009 = vry[25];
    const double C179456 = vry[26];
    const double C179901 = vry[27];
    const double C180342 = vry[28];
    const double C180778 = vry[29];
    const double C181219 = vry[30];
    const double C181656 = vry[31];
    const double C181700 = vry[32];
    const double C181729 = vry[33];
    const double C181743 = vry[34];
    const double C181787 = vry[35];
    const double C181832 = vry[36];
    const double C181938 = vry[37];
    const double C181967 = vry[38];
    const double C182188 = vry[39];
    const double C182217 = vry[40];
    const double C182378 = vry[41];
    const double C182438 = vry[42];
    const double C182467 = vry[43];
    const double C182482 = vry[44];
    const double C182597 = vry[45];
    const double C182640 = vry[46];
    const double C182670 = vry[47];
    const double C182761 = vry[48];
    const double C182912 = vry[49];
    const double C182927 = vry[50];
    const double C183046 = vry[51];
    const double C183105 = vry[52];
    const double C183134 = vry[53];
    const double C183235 = vry[54];
    const double C183308 = vry[55];
    const double C183576 = vry[56];
    const double C183695 = vry[57];
    const double C183768 = vry[58];
    const double C183797 = vry[59];
    const double C184366 = vry[60];
    const double C184463 = vry[61];
    const double C184534 = vry[62];
    const double C184677 = vry[63];
    const double C184708 = vry[64];
    const double C184800 = vry[65];
    const double C184954 = vry[66];
    const double C184969 = vry[67];
    const double C185074 = vry[68];
    const double C185105 = vry[69];
    const double C185120 = vry[70];
    const double C185264 = vry[71];
    const double C185564 = vry[72];
    const double C185669 = vry[73];
    const double C185714 = vry[74];
    const double C185743 = vry[75];
    const double C186300 = vry[76];
    const double C186383 = vry[77];
    const double C186426 = vry[78];
    const double C186572 = vry[79];
    const double C186845 = vry[80];
    const double C186950 = vry[81];
    const double C186995 = vry[82];
    const double C187010 = vry[83];
    const double C187719 = vry[84];
    const double C187780 = vry[85];
    const double C187825 = vry[86];
    const double C187885 = vry[87];
    const double C187916 = vry[88];
    const double C187946 = vry[89];
    const double C188010 = vry[90];
    const double C188025 = vry[91];
    const double C188055 = vry[92];
    const double C188115 = vry[93];
    const double C188232 = vry[94];
    const double C188263 = vry[95];
    const double C188293 = vry[96];
    const double C188356 = vry[97];
    const double C188371 = vry[98];
    const double C188401 = vry[99];
    const double C188461 = vry[100];
    const double C188702 = vry[101];
    const double C188717 = vry[102];
    const double C188747 = vry[103];
    const double C188807 = vry[104];
    const double C189024 = vry[105];
    const double C189056 = vry[106];
    const double C189087 = vry[107];
    const double C189150 = vry[108];
    const double C189165 = vry[109];
    const double C189195 = vry[110];
    const double C189255 = vry[111];
    const double C189492 = vry[112];
    const double C189507 = vry[113];
    const double C189537 = vry[114];
    const double C189597 = vry[115];
    const double C189953 = vry[116];
    const double C189968 = vry[117];
    const double C189998 = vry[118];
    const double C190058 = vry[119];
    const double C190117 = vry[120];
    const double C190146 = vry[121];
    const double C190175 = vry[122];
    const double C190190 = vry[123];
    const double C190205 = vry[124];
    const double C190220 = vry[125];
    const double C190235 = vry[126];
    const double C190250 = vry[127];
    const double C190265 = vry[128];
    const double C190294 = vry[129];
    const double C190309 = vry[130];
    const double C190324 = vry[131];
    const double C190339 = vry[132];
    const double C190354 = vry[133];
    const double C190369 = vry[134];
    const double C190440 = vry[135];
    const double C190455 = vry[136];
    const double C190470 = vry[137];
    const double C190485 = vry[138];
    const double C190500 = vry[139];
    const double C190515 = vry[140];
    const double C190530 = vry[141];
    const double C190545 = vry[142];
    const double C190560 = vry[143];
    const double C190729 = vry[144];
    const double C190744 = vry[145];
    const double C190759 = vry[146];
    const double C190774 = vry[147];
    const double C190874 = vry[148];
    const double C190903 = vry[149];
    const double C190919 = vry[150];
    const double C190934 = vry[151];
    const double C190950 = vry[152];
    const double C190965 = vry[153];
    const double C190980 = vry[154];
    const double C190995 = vry[155];
    const double C191010 = vry[156];
    const double C191139 = vry[157];
    const double C191154 = vry[158];
    const double C191169 = vry[159];
    const double C191184 = vry[160];
    const double C191397 = vry[161];
    const double C191412 = vry[162];
    const double C191427 = vry[163];
    const double C191442 = vry[164];
    const double C191577 = vrz[0];
    const double C191593 = vrz[1];
    const double C191609 = vrz[2];
    const double C192912 = vrz[3];
    const double C192929 = vrz[4];
    const double C193825 = vrz[5];
    const double C193842 = vrz[6];
    const double C194707 = vrz[7];
    const double C195155 = vrz[8];
    const double C195602 = vrz[9];
    const double C196076 = vrz[10];
    const double C196091 = vrz[11];
    const double C196968 = vrz[12];
    const double C196984 = vrz[13];
    const double C197875 = vrz[14];
    const double C197891 = vrz[15];
    const double C198756 = vrz[16];
    const double C199204 = vrz[17];
    const double C199648 = vrz[18];
    const double C200120 = vrz[19];
    const double C200135 = vrz[20];
    const double C200976 = vrz[21];
    const double C201445 = vrz[22];
    const double C201461 = vrz[23];
    const double C202322 = vrz[24];
    const double C202770 = vrz[25];
    const double C203216 = vrz[26];
    const double C203660 = vrz[27];
    const double C204101 = vrz[28];
    const double C204537 = vrz[29];
    const double C204978 = vrz[30];
    const double C205415 = vrz[31];
    const double C205459 = vrz[32];
    const double C205488 = vrz[33];
    const double C205502 = vrz[34];
    const double C205546 = vrz[35];
    const double C205591 = vrz[36];
    const double C205695 = vrz[37];
    const double C205724 = vrz[38];
    const double C205943 = vrz[39];
    const double C205972 = vrz[40];
    const double C206133 = vrz[41];
    const double C206191 = vrz[42];
    const double C206220 = vrz[43];
    const double C206235 = vrz[44];
    const double C206350 = vrz[45];
    const double C206393 = vrz[46];
    const double C206423 = vrz[47];
    const double C206513 = vrz[48];
    const double C206662 = vrz[49];
    const double C206677 = vrz[50];
    const double C206796 = vrz[51];
    const double C206854 = vrz[52];
    const double C206883 = vrz[53];
    const double C206984 = vrz[54];
    const double C207057 = vrz[55];
    const double C207322 = vrz[56];
    const double C207441 = vrz[57];
    const double C207513 = vrz[58];
    const double C207542 = vrz[59];
    const double C208107 = vrz[60];
    const double C208203 = vrz[61];
    const double C208274 = vrz[62];
    const double C208417 = vrz[63];
    const double C208448 = vrz[64];
    const double C208539 = vrz[65];
    const double C208688 = vrz[66];
    const double C208703 = vrz[67];
    const double C208810 = vrz[68];
    const double C208840 = vrz[69];
    const double C208855 = vrz[70];
    const double C208999 = vrz[71];
    const double C209293 = vrz[72];
    const double C209400 = vrz[73];
    const double C209444 = vrz[74];
    const double C209473 = vrz[75];
    const double C210024 = vrz[76];
    const double C210107 = vrz[77];
    const double C210150 = vrz[78];
    const double C210296 = vrz[79];
    const double C210563 = vrz[80];
    const double C210671 = vrz[81];
    const double C210715 = vrz[82];
    const double C210730 = vrz[83];
    const double C211432 = vrz[84];
    const double C211491 = vrz[85];
    const double C211538 = vrz[86];
    const double C211598 = vrz[87];
    const double C211628 = vrz[88];
    const double C211659 = vrz[89];
    const double C211720 = vrz[90];
    const double C211735 = vrz[91];
    const double C211766 = vrz[92];
    const double C211829 = vrz[93];
    const double C211946 = vrz[94];
    const double C211976 = vrz[95];
    const double C212007 = vrz[96];
    const double C212067 = vrz[97];
    const double C212082 = vrz[98];
    const double C212113 = vrz[99];
    const double C212176 = vrz[100];
    const double C212412 = vrz[101];
    const double C212427 = vrz[102];
    const double C212458 = vrz[103];
    const double C212521 = vrz[104];
    const double C212738 = vrz[105];
    const double C212768 = vrz[106];
    const double C212800 = vrz[107];
    const double C212860 = vrz[108];
    const double C212875 = vrz[109];
    const double C212906 = vrz[110];
    const double C212969 = vrz[111];
    const double C213202 = vrz[112];
    const double C213217 = vrz[113];
    const double C213248 = vrz[114];
    const double C213311 = vrz[115];
    const double C213662 = vrz[116];
    const double C213677 = vrz[117];
    const double C213709 = vrz[118];
    const double C213772 = vrz[119];
    const double C213831 = vrz[120];
    const double C213860 = vrz[121];
    const double C213889 = vrz[122];
    const double C213904 = vrz[123];
    const double C213919 = vrz[124];
    const double C213934 = vrz[125];
    const double C213949 = vrz[126];
    const double C213964 = vrz[127];
    const double C213979 = vrz[128];
    const double C214008 = vrz[129];
    const double C214023 = vrz[130];
    const double C214038 = vrz[131];
    const double C214053 = vrz[132];
    const double C214068 = vrz[133];
    const double C214083 = vrz[134];
    const double C214154 = vrz[135];
    const double C214169 = vrz[136];
    const double C214184 = vrz[137];
    const double C214199 = vrz[138];
    const double C214214 = vrz[139];
    const double C214229 = vrz[140];
    const double C214244 = vrz[141];
    const double C214259 = vrz[142];
    const double C214274 = vrz[143];
    const double C214443 = vrz[144];
    const double C214458 = vrz[145];
    const double C214473 = vrz[146];
    const double C214488 = vrz[147];
    const double C214587 = vrz[148];
    const double C214616 = vrz[149];
    const double C214631 = vrz[150];
    const double C214646 = vrz[151];
    const double C214661 = vrz[152];
    const double C214676 = vrz[153];
    const double C214691 = vrz[154];
    const double C214706 = vrz[155];
    const double C214721 = vrz[156];
    const double C214848 = vrz[157];
    const double C214863 = vrz[158];
    const double C214878 = vrz[159];
    const double C214893 = vrz[160];
    const double C215105 = vrz[161];
    const double C215120 = vrz[162];
    const double C215136 = vrz[163];
    const double C215152 = vrz[164];
    const double C143578 = 2 * q;
    const double C216040 = C163115 / q;
    const double C216039 = C167403 * p;
    const double C216038 = C167388 * p;
    const double C216037 = C167373 * p;
    const double C216036 = 2 * C161891;
    const double C216035 = C167227 * p;
    const double C216034 = C167212 * p;
    const double C216033 = C167197 * p;
    const double C216032 = C167182 * p;
    const double C216031 = C167122 * p;
    const double C216030 = C161248 / q;
    const double C216029 = C166988 * p;
    const double C216028 = C166973 * p;
    const double C216027 = C166958 * p;
    const double C216026 = 2 * C159895;
    const double C216025 = C166770 * p;
    const double C216024 = C166755 * p;
    const double C216023 = C166740 * p;
    const double C216022 = C166725 * p;
    const double C216021 = 3 * C159030;
    const double C216020 = C166710 * p;
    const double C216019 = C166695 * p;
    const double C216018 = C166680 * p;
    const double C216017 = C166665 * p;
    const double C216016 = 2 * C159164;
    const double C216015 = C166575 * p;
    const double C216014 = C166560 * p;
    const double C216013 = C166545 * p;
    const double C216012 = C166530 * p;
    const double C216011 = C166515 * p;
    const double C216010 = C158574 / q;
    const double C216009 = C166500 * p;
    const double C216008 = C166471 * p;
    const double C216007 = C166456 * p;
    const double C216006 = C166441 * p;
    const double C216005 = C166378 * p;
    const double C216004 = C166349 * p;
    const double C216003 = C162540 / q;
    const double C216002 = C166258 * p;
    const double C215998 = C165791 * p;
    const double C215997 = C160672 / q;
    const double C215996 = C165731 * p;
    const double C215994 = C165701 * p;
    const double C215993 = C165686 * p;
    const double C215992 = 3 * C160601;
    const double C215988 = C165445 * p;
    const double C215987 = C165385 * p;
    const double C215985 = C165355 * p;
    const double C215984 = C165340 * p;
    const double C215983 = C165280 * p;
    const double C215978 = C164991 * p;
    const double C215977 = C158589 / q;
    const double C215976 = C164931 * p;
    const double C215974 = C164901 * p;
    const double C215973 = C164886 * p;
    const double C215969 = 3 * C159045;
    const double C215968 = C164643 * p;
    const double C215967 = C164583 * p;
    const double C215965 = C164553 * p;
    const double C215964 = C164538 * p;
    const double C215963 = C164478 * p;
    const double C215962 = C164448 * p;
    const double C215960 = C164418 * p;
    const double C215956 = 3 * C158789;
    const double C215955 = C164294 * p;
    const double C215954 = C164234 * p;
    const double C215952 = C164204 * p;
    const double C215951 = C164189 * p;
    const double C215950 = C164128 * p;
    const double C215949 = C164098 * p;
    const double C215947 = C164068 * p;
    const double C215943 = C164005 * p;
    const double C215942 = C163959 * p;
    const double C215937 = C163174 * p;
    const double C215936 = C163159 * p;
    const double C215934 = C163115 * p;
    const double C215924 = C162585 * p;
    const double C215923 = C162540 * p;
    const double C215921 = C162457 * p;
    const double C215915 = C153240 * p;
    const double C215914 = C161891 * p;
    const double C215913 = C155530 * p;
    const double C215912 = C161862 * p;
    const double C215911 = C151436 / q;
    const double C215909 = C161818 * p;
    const double C215908 = C154608 / q;
    const double C215901 = C161713 * p;
    const double C215900 = C161417 * p;
    const double C215894 = C157313 / q;
    const double C215893 = 3 * C150076;
    const double C215886 = C161263 * p;
    const double C215885 = C161248 * p;
    const double C215884 = C161218 * p;
    const double C215879 = C161113 * p;
    const double C215878 = C161098 * p;
    const double C215877 = C160856 * p;
    const double C215868 = C151894 * p;
    const double C215867 = C157313 * p;
    const double C215866 = C160672 * p;
    const double C215863 = C150076 * p;
    const double C215862 = C150093 * p;
    const double C215861 = C160601 * p;
    const double C215860 = C160505 * p;
    const double C215858 = C156430 / q;
    const double C215854 = C159924 * p;
    const double C215853 = C147766 / q;
    const double C215852 = C152378 * p;
    const double C215851 = C159895 * p;
    const double C215850 = C155070 * p;
    const double C215848 = C159823 * p;
    const double C215847 = C154608 * p;
    const double C215840 = C159704 * p;
    const double C215839 = C159437 * p;
    const double C215827 = 3 * C145944;
    const double C215826 = C156869 / q;
    const double C215824 = C159251 * p;
    const double C215823 = C156430 * p;
    const double C215822 = C159222 * p;
    const double C215821 = C151436 * p;
    const double C215820 = C148252 * p;
    const double C215819 = C159164 * p;
    const double C215818 = C150974 * p;
    const double C215810 = C159045 * p;
    const double C215809 = C159030 * p;
    const double C215808 = C158789 * p;
    const double C215800 = C158881 * p;
    const double C215799 = C158757 * p;
    const double C215792 = 3 * C145014;
    const double C215791 = C155986 / q;
    const double C215789 = C147766 * p;
    const double C215788 = C158589 * p;
    const double C215787 = C158574 * p;
    const double C215786 = C156869 * p;
    const double C215785 = C158545 * p;
    const double C215784 = C155986 * p;
    const double C215783 = C158487 * p;
    const double C215773 = C145944 * p;
    const double C215772 = C145962 * p;
    const double C215771 = C158326 * p;
    const double C215770 = C147305 * p;
    const double C215769 = C158297 * p;
    const double C215768 = C157943 * p;
    const double C215759 = C145014 * p;
    const double C215758 = C145032 * p;
    const double C215757 = C158078 * p;
    const double C215756 = C146843 * p;
    const double C215755 = C158049 * p;
    const double C215754 = C157895 * p;
    const double C215202 = de * zCD;
    const double C215201 = be * zAB;
    const double C215194 = de * yCD;
    const double C215193 = be * yAB;
    const double C215184 = de * xCD;
    const double C215183 = be * xAB;
    const double C217257 = C186950 / q;
    const double C217256 = C191184 * p;
    const double C217255 = C191169 * p;
    const double C217254 = C191154 * p;
    const double C217253 = 2 * C185743;
    const double C217252 = C191010 * p;
    const double C217251 = C190995 * p;
    const double C217250 = C190980 * p;
    const double C217249 = C190965 * p;
    const double C217248 = C190903 * p;
    const double C217247 = C185105 / q;
    const double C217246 = C190774 * p;
    const double C217245 = C190759 * p;
    const double C217244 = C190744 * p;
    const double C217243 = 2 * C183768;
    const double C217242 = C190560 * p;
    const double C217241 = C190545 * p;
    const double C217240 = C190530 * p;
    const double C217239 = C190515 * p;
    const double C217238 = 3 * C182912;
    const double C217237 = C190500 * p;
    const double C217236 = C190485 * p;
    const double C217235 = C190470 * p;
    const double C217234 = C190455 * p;
    const double C217233 = 2 * C183046;
    const double C217232 = C190369 * p;
    const double C217231 = C190354 * p;
    const double C217230 = C190339 * p;
    const double C217229 = C190324 * p;
    const double C217228 = C190309 * p;
    const double C217227 = C182467 / q;
    const double C217226 = C190294 * p;
    const double C217225 = C190265 * p;
    const double C217224 = C190250 * p;
    const double C217223 = C190235 * p;
    const double C217222 = C190175 * p;
    const double C217221 = C190146 * p;
    const double C217220 = C186383 / q;
    const double C217219 = C190058 * p;
    const double C217215 = C189597 * p;
    const double C217214 = C184534 / q;
    const double C217213 = C189537 * p;
    const double C217211 = C189507 * p;
    const double C217210 = C189492 * p;
    const double C217209 = 3 * C184463;
    const double C217205 = C189255 * p;
    const double C217204 = C189195 * p;
    const double C217202 = C189165 * p;
    const double C217201 = C189150 * p;
    const double C217200 = C189087 * p;
    const double C217195 = C188807 * p;
    const double C217194 = C182482 / q;
    const double C217193 = C188747 * p;
    const double C217191 = C188717 * p;
    const double C217190 = C188702 * p;
    const double C217186 = 3 * C182927;
    const double C217185 = C188461 * p;
    const double C217184 = C188401 * p;
    const double C217182 = C188371 * p;
    const double C217181 = C188356 * p;
    const double C217180 = C188293 * p;
    const double C217179 = C188263 * p;
    const double C217177 = C188232 * p;
    const double C217173 = 3 * C182670;
    const double C217172 = C188115 * p;
    const double C217171 = C188055 * p;
    const double C217169 = C188025 * p;
    const double C217168 = C188010 * p;
    const double C217167 = C187946 * p;
    const double C217166 = C187916 * p;
    const double C217164 = C187885 * p;
    const double C217160 = C187825 * p;
    const double C217159 = C187780 * p;
    const double C217154 = C187010 * p;
    const double C217153 = C186995 * p;
    const double C217151 = C186950 * p;
    const double C217141 = C186426 * p;
    const double C217140 = C186383 * p;
    const double C217138 = C186300 * p;
    const double C217132 = C177213 * p;
    const double C217131 = C185743 * p;
    const double C217130 = C179456 * p;
    const double C217129 = C185714 * p;
    const double C217128 = C175439 / q;
    const double C217126 = C185669 * p;
    const double C217125 = C178560 / q;
    const double C217118 = C185564 * p;
    const double C217117 = C185264 * p;
    const double C217111 = C181219 / q;
    const double C217110 = 3 * C174108;
    const double C217103 = C185120 * p;
    const double C217102 = C185105 * p;
    const double C217101 = C185074 * p;
    const double C217096 = C184969 * p;
    const double C217095 = C184954 * p;
    const double C217094 = C184708 * p;
    const double C217085 = C175884 * p;
    const double C217084 = C181219 * p;
    const double C217083 = C184534 * p;
    const double C217080 = C174108 * p;
    const double C217079 = C174124 * p;
    const double C217078 = C184463 * p;
    const double C217077 = C184366 * p;
    const double C217075 = C180342 / q;
    const double C217071 = C183797 * p;
    const double C217070 = C171833 / q;
    const double C217069 = C176357 * p;
    const double C217068 = C183768 * p;
    const double C217067 = C179009 * p;
    const double C217065 = C183695 * p;
    const double C217064 = C178560 * p;
    const double C217057 = C183576 * p;
    const double C217056 = C183308 * p;
    const double C217044 = 3 * C170053;
    const double C217043 = C180778 / q;
    const double C217041 = C183134 * p;
    const double C217040 = C180342 * p;
    const double C217039 = C183105 * p;
    const double C217038 = C175439 * p;
    const double C217037 = C172308 * p;
    const double C217036 = C183046 * p;
    const double C217035 = C174990 * p;
    const double C217027 = C182927 * p;
    const double C217026 = C182912 * p;
    const double C217025 = C182670 * p;
    const double C217017 = C182761 * p;
    const double C217016 = C182640 * p;
    const double C217009 = 3 * C169139;
    const double C217008 = C179901 / q;
    const double C217006 = C171833 * p;
    const double C217005 = C182482 * p;
    const double C217004 = C182467 * p;
    const double C217003 = C180778 * p;
    const double C217002 = C182438 * p;
    const double C217001 = C179901 * p;
    const double C217000 = C182378 * p;
    const double C216990 = C170053 * p;
    const double C216989 = C170070 * p;
    const double C216988 = C182217 * p;
    const double C216987 = C171385 * p;
    const double C216986 = C182188 * p;
    const double C216985 = C181832 * p;
    const double C216976 = C169139 * p;
    const double C216975 = C169156 * p;
    const double C216974 = C181967 * p;
    const double C216973 = C170936 * p;
    const double C216972 = C181938 * p;
    const double C216971 = C181787 * p;
    const double C218471 = C210671 / q;
    const double C218470 = C214893 * p;
    const double C218469 = C214878 * p;
    const double C218468 = C214863 * p;
    const double C218467 = 2 * C209473;
    const double C218466 = C214721 * p;
    const double C218465 = C214706 * p;
    const double C218464 = C214691 * p;
    const double C218463 = C214676 * p;
    const double C218462 = C214616 * p;
    const double C218461 = C208840 / q;
    const double C218460 = C214488 * p;
    const double C218459 = C214473 * p;
    const double C218458 = C214458 * p;
    const double C218457 = 2 * C207513;
    const double C218456 = C214274 * p;
    const double C218455 = C214259 * p;
    const double C218454 = C214244 * p;
    const double C218453 = C214229 * p;
    const double C218452 = 3 * C206662;
    const double C218451 = C214214 * p;
    const double C218450 = C214199 * p;
    const double C218449 = C214184 * p;
    const double C218448 = C214169 * p;
    const double C218447 = 2 * C206796;
    const double C218446 = C214083 * p;
    const double C218445 = C214068 * p;
    const double C218444 = C214053 * p;
    const double C218443 = C214038 * p;
    const double C218442 = C214023 * p;
    const double C218441 = C206220 / q;
    const double C218440 = C214008 * p;
    const double C218439 = C213979 * p;
    const double C218438 = C213964 * p;
    const double C218437 = C213949 * p;
    const double C218436 = C213889 * p;
    const double C218435 = C213860 * p;
    const double C218434 = C210107 / q;
    const double C218433 = C213772 * p;
    const double C218429 = C213311 * p;
    const double C218428 = C208274 / q;
    const double C218427 = C213248 * p;
    const double C218425 = C213217 * p;
    const double C218424 = C213202 * p;
    const double C218423 = 3 * C208203;
    const double C218419 = C212969 * p;
    const double C218418 = C212906 * p;
    const double C218416 = C212875 * p;
    const double C218415 = C212860 * p;
    const double C218414 = C212800 * p;
    const double C218409 = C212521 * p;
    const double C218408 = C206235 / q;
    const double C218407 = C212458 * p;
    const double C218405 = C212427 * p;
    const double C218404 = C212412 * p;
    const double C218400 = 3 * C206677;
    const double C218399 = C212176 * p;
    const double C218398 = C212113 * p;
    const double C218396 = C212082 * p;
    const double C218395 = C212067 * p;
    const double C218394 = C212007 * p;
    const double C218393 = C211976 * p;
    const double C218391 = C211946 * p;
    const double C218387 = 3 * C206423;
    const double C218386 = C211829 * p;
    const double C218385 = C211766 * p;
    const double C218383 = C211735 * p;
    const double C218382 = C211720 * p;
    const double C218381 = C211659 * p;
    const double C218380 = C211628 * p;
    const double C218378 = C211598 * p;
    const double C218374 = C211538 * p;
    const double C218373 = C211491 * p;
    const double C218368 = C210730 * p;
    const double C218367 = C210715 * p;
    const double C218365 = C210671 * p;
    const double C218355 = C210150 * p;
    const double C218354 = C210107 * p;
    const double C218352 = C210024 * p;
    const double C218346 = C200976 * p;
    const double C218345 = C209473 * p;
    const double C218344 = C203216 * p;
    const double C218343 = C209444 * p;
    const double C218342 = C199204 / q;
    const double C218340 = C209400 * p;
    const double C218339 = C202322 / q;
    const double C218332 = C209293 * p;
    const double C218331 = C208999 * p;
    const double C218325 = C204978 / q;
    const double C218324 = 3 * C197875;
    const double C218317 = C208855 * p;
    const double C218316 = C208840 * p;
    const double C218315 = C208810 * p;
    const double C218310 = C208703 * p;
    const double C218309 = C208688 * p;
    const double C218308 = C208448 * p;
    const double C218299 = C199648 * p;
    const double C218298 = C204978 * p;
    const double C218297 = C208274 * p;
    const double C218294 = C197875 * p;
    const double C218293 = C197891 * p;
    const double C218292 = C208203 * p;
    const double C218291 = C208107 * p;
    const double C218289 = C204101 / q;
    const double C218285 = C207542 * p;
    const double C218284 = C195602 / q;
    const double C218283 = C200120 * p;
    const double C218282 = C207513 * p;
    const double C218281 = C202770 * p;
    const double C218279 = C207441 * p;
    const double C218278 = C202322 * p;
    const double C218271 = C207322 * p;
    const double C218270 = C207057 * p;
    const double C218258 = 3 * C193825;
    const double C218257 = C204537 / q;
    const double C218255 = C206883 * p;
    const double C218254 = C204101 * p;
    const double C218253 = C206854 * p;
    const double C218252 = C199204 * p;
    const double C218251 = C196076 * p;
    const double C218250 = C206796 * p;
    const double C218249 = C198756 * p;
    const double C218241 = C206677 * p;
    const double C218240 = C206662 * p;
    const double C218239 = C206423 * p;
    const double C218231 = C206513 * p;
    const double C218230 = C206393 * p;
    const double C218223 = 3 * C192912;
    const double C218222 = C203660 / q;
    const double C218220 = C195602 * p;
    const double C218219 = C206235 * p;
    const double C218218 = C206220 * p;
    const double C218217 = C204537 * p;
    const double C218216 = C206191 * p;
    const double C218215 = C203660 * p;
    const double C218214 = C206133 * p;
    const double C218204 = C193825 * p;
    const double C218203 = C193842 * p;
    const double C218202 = C205972 * p;
    const double C218201 = C195155 * p;
    const double C218200 = C205943 * p;
    const double C218199 = C205591 * p;
    const double C218190 = C192912 * p;
    const double C218189 = C192929 * p;
    const double C218188 = C205724 * p;
    const double C218187 = C194707 * p;
    const double C218186 = C205695 * p;
    const double C218185 = C205546 * p;
    const double C216001 = C163174 / C143578;
    const double C216000 = C163159 / C143578;
    const double C215999 = C163115 / C143578;
    const double C215995 = C161713 / C143578;
    const double C215991 = C161891 / C143578;
    const double C215990 = C161862 / C143578;
    const double C215989 = C161818 / C143578;
    const double C215986 = C161098 / C143578;
    const double C215982 = C160949 / C143578;
    const double C215981 = C161263 / C143578;
    const double C215980 = C161248 / C143578;
    const double C215979 = C161218 / C143578;
    const double C215975 = C159704 / C143578;
    const double C215972 = C159924 / C143578;
    const double C215971 = C159895 / C143578;
    const double C215970 = C159823 / C143578;
    const double C215966 = C159030 / C143578;
    const double C215961 = C158881 / C143578;
    const double C215959 = C159251 / C143578;
    const double C215958 = C159222 / C143578;
    const double C215957 = C159164 / C143578;
    const double C215953 = C158297 / C143578;
    const double C215948 = C158049 / C143578;
    const double C215946 = C158574 / C143578;
    const double C215945 = C158545 / C143578;
    const double C215944 = C158487 / C143578;
    const double C215941 = C157833 / C143578;
    const double C215938 = C162540 / C143578;
    const double C215929 = C162741 / C143578;
    const double C215928 = C162585 / C143578;
    const double C215926 = C162457 / C143578;
    const double C215916 = C160672 / C143578;
    const double C215890 = C161417 / C143578;
    const double C215889 = C161113 / C143578;
    const double C215888 = C160601 / C143578;
    const double C215873 = C160856 / C143578;
    const double C215872 = C160823 / C143578;
    const double C215871 = C160505 / C143578;
    const double C215855 = C158589 / C143578;
    const double C215831 = C159437 / C143578;
    const double C215830 = C159045 / C143578;
    const double C215828 = C159359 / C143578;
    const double C215825 = C158326 / C143578;
    const double C215795 = C158789 / C143578;
    const double C215794 = C158757 / C143578;
    const double C215793 = C158711 / C143578;
    const double C215790 = C158078 / C143578;
    const double C215752 = C157943 / C143578;
    const double C215750 = C157895 / C143578;
    const double C215748 = C157848 / C143578;
    const double C215747 = C157802 / C143578;
    const double C215746 = C157755 / C143578;
    const double C215744 = C157313 / C143578;
    const double C215734 = C156869 / C143578;
    const double C215726 = C156430 / C143578;
    const double C215704 = C155986 / C143578;
    const double C215698 = C155530 / C143578;
    const double C215688 = C155070 / C143578;
    const double C215672 = C154608 / C143578;
    const double C215653 = C153731 / C143578;
    const double C215652 = C153714 / C143578;
    const double C215638 = C153240 / C143578;
    const double C215594 = C152394 / C143578;
    const double C215593 = C152378 / C143578;
    const double C215583 = C151894 / C143578;
    const double C215576 = C151436 / C143578;
    const double C215562 = C150974 / C143578;
    const double C215509 = C150093 / C143578;
    const double C215508 = C150076 / C143578;
    const double C215478 = C149169 / C143578;
    const double C215477 = C149152 / C143578;
    const double C215431 = C148268 / C143578;
    const double C215430 = C148252 / C143578;
    const double C215409 = C147766 / C143578;
    const double C215399 = C147305 / C143578;
    const double C215382 = C146843 / C143578;
    const double C215334 = C145962 / C143578;
    const double C215332 = C145944 / C143578;
    const double C215261 = C145032 / C143578;
    const double C215259 = C145014 / C143578;
    const double C215189 = C143693 / C143578;
    const double C215187 = C143676 / C143578;
    const double C215186 = C143659 / C143578;
    const double C217218 = C187010 / C143578;
    const double C217217 = C186995 / C143578;
    const double C217216 = C186950 / C143578;
    const double C217212 = C185564 / C143578;
    const double C217208 = C185743 / C143578;
    const double C217207 = C185714 / C143578;
    const double C217206 = C185669 / C143578;
    const double C217203 = C184954 / C143578;
    const double C217199 = C184800 / C143578;
    const double C217198 = C185120 / C143578;
    const double C217197 = C185105 / C143578;
    const double C217196 = C185074 / C143578;
    const double C217192 = C183576 / C143578;
    const double C217189 = C183797 / C143578;
    const double C217188 = C183768 / C143578;
    const double C217187 = C183695 / C143578;
    const double C217183 = C182912 / C143578;
    const double C217178 = C182761 / C143578;
    const double C217176 = C183134 / C143578;
    const double C217175 = C183105 / C143578;
    const double C217174 = C183046 / C143578;
    const double C217170 = C182188 / C143578;
    const double C217165 = C181938 / C143578;
    const double C217163 = C182467 / C143578;
    const double C217162 = C182438 / C143578;
    const double C217161 = C182378 / C143578;
    const double C217158 = C181729 / C143578;
    const double C217155 = C186383 / C143578;
    const double C217146 = C186572 / C143578;
    const double C217145 = C186426 / C143578;
    const double C217143 = C186300 / C143578;
    const double C217133 = C184534 / C143578;
    const double C217107 = C185264 / C143578;
    const double C217106 = C184969 / C143578;
    const double C217105 = C184463 / C143578;
    const double C217090 = C184708 / C143578;
    const double C217089 = C184677 / C143578;
    const double C217088 = C184366 / C143578;
    const double C217072 = C182482 / C143578;
    const double C217048 = C183308 / C143578;
    const double C217047 = C182927 / C143578;
    const double C217045 = C183235 / C143578;
    const double C217042 = C182217 / C143578;
    const double C217012 = C182670 / C143578;
    const double C217011 = C182640 / C143578;
    const double C217010 = C182597 / C143578;
    const double C217007 = C181967 / C143578;
    const double C216969 = C181832 / C143578;
    const double C216967 = C181787 / C143578;
    const double C216965 = C181743 / C143578;
    const double C216964 = C181700 / C143578;
    const double C216963 = C181656 / C143578;
    const double C216961 = C181219 / C143578;
    const double C216951 = C180778 / C143578;
    const double C216943 = C180342 / C143578;
    const double C216921 = C179901 / C143578;
    const double C216915 = C179456 / C143578;
    const double C216905 = C179009 / C143578;
    const double C216889 = C178560 / C143578;
    const double C216870 = C177698 / C143578;
    const double C216869 = C177682 / C143578;
    const double C216855 = C177213 / C143578;
    const double C216811 = C176372 / C143578;
    const double C216810 = C176357 / C143578;
    const double C216800 = C175884 / C143578;
    const double C216793 = C175439 / C143578;
    const double C216779 = C174990 / C143578;
    const double C216726 = C174124 / C143578;
    const double C216725 = C174108 / C143578;
    const double C216695 = C173216 / C143578;
    const double C216694 = C173200 / C143578;
    const double C216648 = C172323 / C143578;
    const double C216647 = C172308 / C143578;
    const double C216626 = C171833 / C143578;
    const double C216616 = C171385 / C143578;
    const double C216599 = C170936 / C143578;
    const double C216551 = C170070 / C143578;
    const double C216549 = C170053 / C143578;
    const double C216478 = C169156 / C143578;
    const double C216476 = C169139 / C143578;
    const double C216410 = C167835 / C143578;
    const double C216408 = C167819 / C143578;
    const double C216407 = C167803 / C143578;
    const double C218432 = C210730 / C143578;
    const double C218431 = C210715 / C143578;
    const double C218430 = C210671 / C143578;
    const double C218426 = C209293 / C143578;
    const double C218422 = C209473 / C143578;
    const double C218421 = C209444 / C143578;
    const double C218420 = C209400 / C143578;
    const double C218417 = C208688 / C143578;
    const double C218413 = C208539 / C143578;
    const double C218412 = C208855 / C143578;
    const double C218411 = C208840 / C143578;
    const double C218410 = C208810 / C143578;
    const double C218406 = C207322 / C143578;
    const double C218403 = C207542 / C143578;
    const double C218402 = C207513 / C143578;
    const double C218401 = C207441 / C143578;
    const double C218397 = C206662 / C143578;
    const double C218392 = C206513 / C143578;
    const double C218390 = C206883 / C143578;
    const double C218389 = C206854 / C143578;
    const double C218388 = C206796 / C143578;
    const double C218384 = C205943 / C143578;
    const double C218379 = C205695 / C143578;
    const double C218377 = C206220 / C143578;
    const double C218376 = C206191 / C143578;
    const double C218375 = C206133 / C143578;
    const double C218372 = C205488 / C143578;
    const double C218369 = C210107 / C143578;
    const double C218360 = C210296 / C143578;
    const double C218359 = C210150 / C143578;
    const double C218357 = C210024 / C143578;
    const double C218347 = C208274 / C143578;
    const double C218321 = C208999 / C143578;
    const double C218320 = C208703 / C143578;
    const double C218319 = C208203 / C143578;
    const double C218304 = C208448 / C143578;
    const double C218303 = C208417 / C143578;
    const double C218302 = C208107 / C143578;
    const double C218286 = C206235 / C143578;
    const double C218262 = C207057 / C143578;
    const double C218261 = C206677 / C143578;
    const double C218259 = C206984 / C143578;
    const double C218256 = C205972 / C143578;
    const double C218226 = C206423 / C143578;
    const double C218225 = C206393 / C143578;
    const double C218224 = C206350 / C143578;
    const double C218221 = C205724 / C143578;
    const double C218183 = C205591 / C143578;
    const double C218181 = C205546 / C143578;
    const double C218179 = C205502 / C143578;
    const double C218178 = C205459 / C143578;
    const double C218177 = C205415 / C143578;
    const double C218175 = C204978 / C143578;
    const double C218165 = C204537 / C143578;
    const double C218157 = C204101 / C143578;
    const double C218135 = C203660 / C143578;
    const double C218129 = C203216 / C143578;
    const double C218119 = C202770 / C143578;
    const double C218103 = C202322 / C143578;
    const double C218084 = C201461 / C143578;
    const double C218083 = C201445 / C143578;
    const double C218069 = C200976 / C143578;
    const double C218025 = C200135 / C143578;
    const double C218024 = C200120 / C143578;
    const double C218014 = C199648 / C143578;
    const double C218007 = C199204 / C143578;
    const double C217993 = C198756 / C143578;
    const double C217940 = C197891 / C143578;
    const double C217939 = C197875 / C143578;
    const double C217909 = C196984 / C143578;
    const double C217908 = C196968 / C143578;
    const double C217862 = C196091 / C143578;
    const double C217861 = C196076 / C143578;
    const double C217840 = C195602 / C143578;
    const double C217830 = C195155 / C143578;
    const double C217813 = C194707 / C143578;
    const double C217765 = C193842 / C143578;
    const double C217763 = C193825 / C143578;
    const double C217692 = C192929 / C143578;
    const double C217690 = C192912 / C143578;
    const double C217624 = C191609 / C143578;
    const double C217622 = C191593 / C143578;
    const double C217621 = C191577 / C143578;
    const double C216401 = C216039 / q;
    const double C216400 = C216038 / q;
    const double C216399 = C216037 / q;
    const double C216398 = C216036 / q;
    const double C216397 = C216035 / q;
    const double C216396 = C216034 / q;
    const double C216395 = C216033 / q;
    const double C216394 = C216032 / q;
    const double C216393 = C216031 / q;
    const double C216392 = C216029 / q;
    const double C216391 = C216028 / q;
    const double C216390 = C216027 / q;
    const double C216389 = C216026 / q;
    const double C216388 = C216025 / q;
    const double C216387 = C216024 / q;
    const double C216386 = C216023 / q;
    const double C216385 = C216022 / q;
    const double C216384 = C216021 / C143578;
    const double C216383 = C216020 / q;
    const double C216382 = C216019 / q;
    const double C216381 = C216018 / q;
    const double C216380 = C216017 / q;
    const double C216379 = C216016 / q;
    const double C216378 = C216015 / q;
    const double C216377 = C216014 / q;
    const double C216376 = C216013 / q;
    const double C216375 = C216012 / q;
    const double C216374 = C216011 / q;
    const double C216373 = C216009 / q;
    const double C216372 = C216008 / q;
    const double C216371 = C216007 / q;
    const double C216370 = C216006 / q;
    const double C216369 = C216005 / q;
    const double C216368 = C216004 / q;
    const double C216367 = C215998 / q;
    const double C216366 = C215996 / q;
    const double C216365 = C215994 / q;
    const double C216364 = C215993 / q;
    const double C216363 = C215992 / C143578;
    const double C216362 = C215987 / q;
    const double C216361 = C215985 / q;
    const double C216360 = C215984 / q;
    const double C216358 = C215978 / q;
    const double C216357 = C215976 / q;
    const double C216356 = C215974 / q;
    const double C216355 = C215973 / q;
    const double C216354 = C215969 / C143578;
    const double C216359 = C215968 / q;
    const double C216353 = C215967 / q;
    const double C216352 = C215965 / q;
    const double C216351 = C215964 / q;
    const double C216350 = C215963 / q;
    const double C216349 = C215962 / q;
    const double C216348 = C215960 / q;
    const double C216347 = C215956 / C143578;
    const double C216346 = C215954 / q;
    const double C216345 = C215952 / q;
    const double C216344 = C215951 / q;
    const double C216343 = C215950 / q;
    const double C216342 = C215949 / q;
    const double C216341 = C215947 / q;
    const double C216337 = C215914 / q;
    const double C216336 = C215912 / q;
    const double C216334 = C215909 / q;
    const double C216329 = C215901 / q;
    const double C216328 = C215900 / q;
    const double C216324 = C215893 / C143578;
    const double C216318 = C215879 / q;
    const double C216317 = C215878 / q;
    const double C216315 = C215863 / q;
    const double C216314 = C215861 / q;
    const double C216307 = C215854 / q;
    const double C216306 = C215851 / q;
    const double C216309 = C215848 / q;
    const double C216302 = C215840 / q;
    const double C216301 = C215839 / q;
    const double C216292 = C215827 / C143578;
    const double C216313 = C215824 / q;
    const double C216311 = C215822 / q;
    const double C216291 = C215819 / q;
    const double C216284 = C215810 / q;
    const double C216283 = C215809 / q;
    const double C216296 = C215808 / q;
    const double C216277 = C215800 / q;
    const double C216276 = C215799 / q;
    const double C216275 = C215792 / C143578;
    const double C216271 = C215773 / q;
    const double C216270 = C215771 / q;
    const double C216269 = C215769 / q;
    const double C216264 = C215759 / q;
    const double C216263 = C215757 / q;
    const double C216262 = C215755 / q;
    const double C216044 = C215201 + C215202;
    const double C216043 = C215193 + C215194;
    const double C216041 = C215183 + C215184;
    const double C217615 = C217256 / q;
    const double C217614 = C217255 / q;
    const double C217613 = C217254 / q;
    const double C217612 = C217253 / q;
    const double C217611 = C217252 / q;
    const double C217610 = C217251 / q;
    const double C217609 = C217250 / q;
    const double C217608 = C217249 / q;
    const double C217607 = C217248 / q;
    const double C217606 = C217246 / q;
    const double C217605 = C217245 / q;
    const double C217604 = C217244 / q;
    const double C217603 = C217243 / q;
    const double C217602 = C217242 / q;
    const double C217601 = C217241 / q;
    const double C217600 = C217240 / q;
    const double C217599 = C217239 / q;
    const double C217598 = C217238 / C143578;
    const double C217597 = C217237 / q;
    const double C217596 = C217236 / q;
    const double C217595 = C217235 / q;
    const double C217594 = C217234 / q;
    const double C217593 = C217233 / q;
    const double C217592 = C217232 / q;
    const double C217591 = C217231 / q;
    const double C217590 = C217230 / q;
    const double C217589 = C217229 / q;
    const double C217588 = C217228 / q;
    const double C217587 = C217226 / q;
    const double C217586 = C217225 / q;
    const double C217585 = C217224 / q;
    const double C217584 = C217223 / q;
    const double C217583 = C217222 / q;
    const double C217582 = C217221 / q;
    const double C217581 = C217215 / q;
    const double C217580 = C217213 / q;
    const double C217579 = C217211 / q;
    const double C217578 = C217210 / q;
    const double C217577 = C217209 / C143578;
    const double C217576 = C217204 / q;
    const double C217575 = C217202 / q;
    const double C217574 = C217201 / q;
    const double C217572 = C217195 / q;
    const double C217571 = C217193 / q;
    const double C217570 = C217191 / q;
    const double C217569 = C217190 / q;
    const double C217568 = C217186 / C143578;
    const double C217573 = C217185 / q;
    const double C217567 = C217184 / q;
    const double C217566 = C217182 / q;
    const double C217565 = C217181 / q;
    const double C217564 = C217180 / q;
    const double C217563 = C217179 / q;
    const double C217562 = C217177 / q;
    const double C217561 = C217173 / C143578;
    const double C217560 = C217171 / q;
    const double C217559 = C217169 / q;
    const double C217558 = C217168 / q;
    const double C217557 = C217167 / q;
    const double C217556 = C217166 / q;
    const double C217555 = C217164 / q;
    const double C217551 = C217131 / q;
    const double C217550 = C217129 / q;
    const double C217548 = C217126 / q;
    const double C217543 = C217118 / q;
    const double C217542 = C217117 / q;
    const double C217538 = C217110 / C143578;
    const double C217532 = C217096 / q;
    const double C217531 = C217095 / q;
    const double C217529 = C217080 / q;
    const double C217528 = C217078 / q;
    const double C217521 = C217071 / q;
    const double C217520 = C217068 / q;
    const double C217523 = C217065 / q;
    const double C217516 = C217057 / q;
    const double C217515 = C217056 / q;
    const double C217506 = C217044 / C143578;
    const double C217527 = C217041 / q;
    const double C217525 = C217039 / q;
    const double C217505 = C217036 / q;
    const double C217498 = C217027 / q;
    const double C217497 = C217026 / q;
    const double C217510 = C217025 / q;
    const double C217491 = C217017 / q;
    const double C217490 = C217016 / q;
    const double C217489 = C217009 / C143578;
    const double C217485 = C216990 / q;
    const double C217484 = C216988 / q;
    const double C217483 = C216986 / q;
    const double C217478 = C216976 / q;
    const double C217477 = C216974 / q;
    const double C217476 = C216972 / q;
    const double C218829 = C218470 / q;
    const double C218828 = C218469 / q;
    const double C218827 = C218468 / q;
    const double C218826 = C218467 / q;
    const double C218825 = C218466 / q;
    const double C218824 = C218465 / q;
    const double C218823 = C218464 / q;
    const double C218822 = C218463 / q;
    const double C218821 = C218462 / q;
    const double C218820 = C218460 / q;
    const double C218819 = C218459 / q;
    const double C218818 = C218458 / q;
    const double C218817 = C218457 / q;
    const double C218816 = C218456 / q;
    const double C218815 = C218455 / q;
    const double C218814 = C218454 / q;
    const double C218813 = C218453 / q;
    const double C218812 = C218452 / C143578;
    const double C218811 = C218451 / q;
    const double C218810 = C218450 / q;
    const double C218809 = C218449 / q;
    const double C218808 = C218448 / q;
    const double C218807 = C218447 / q;
    const double C218806 = C218446 / q;
    const double C218805 = C218445 / q;
    const double C218804 = C218444 / q;
    const double C218803 = C218443 / q;
    const double C218802 = C218442 / q;
    const double C218801 = C218440 / q;
    const double C218800 = C218439 / q;
    const double C218799 = C218438 / q;
    const double C218798 = C218437 / q;
    const double C218797 = C218436 / q;
    const double C218796 = C218435 / q;
    const double C218795 = C218429 / q;
    const double C218794 = C218427 / q;
    const double C218793 = C218425 / q;
    const double C218792 = C218424 / q;
    const double C218791 = C218423 / C143578;
    const double C218790 = C218418 / q;
    const double C218789 = C218416 / q;
    const double C218788 = C218415 / q;
    const double C218786 = C218409 / q;
    const double C218785 = C218407 / q;
    const double C218784 = C218405 / q;
    const double C218783 = C218404 / q;
    const double C218782 = C218400 / C143578;
    const double C218787 = C218399 / q;
    const double C218781 = C218398 / q;
    const double C218780 = C218396 / q;
    const double C218779 = C218395 / q;
    const double C218778 = C218394 / q;
    const double C218777 = C218393 / q;
    const double C218776 = C218391 / q;
    const double C218775 = C218387 / C143578;
    const double C218774 = C218385 / q;
    const double C218773 = C218383 / q;
    const double C218772 = C218382 / q;
    const double C218771 = C218381 / q;
    const double C218770 = C218380 / q;
    const double C218769 = C218378 / q;
    const double C218765 = C218345 / q;
    const double C218764 = C218343 / q;
    const double C218762 = C218340 / q;
    const double C218757 = C218332 / q;
    const double C218756 = C218331 / q;
    const double C218752 = C218324 / C143578;
    const double C218746 = C218310 / q;
    const double C218745 = C218309 / q;
    const double C218743 = C218294 / q;
    const double C218742 = C218292 / q;
    const double C218735 = C218285 / q;
    const double C218734 = C218282 / q;
    const double C218737 = C218279 / q;
    const double C218730 = C218271 / q;
    const double C218729 = C218270 / q;
    const double C218720 = C218258 / C143578;
    const double C218741 = C218255 / q;
    const double C218739 = C218253 / q;
    const double C218719 = C218250 / q;
    const double C218712 = C218241 / q;
    const double C218711 = C218240 / q;
    const double C218724 = C218239 / q;
    const double C218705 = C218231 / q;
    const double C218704 = C218230 / q;
    const double C218703 = C218223 / C143578;
    const double C218699 = C218204 / q;
    const double C218698 = C218202 / q;
    const double C218697 = C218200 / q;
    const double C218692 = C218190 / q;
    const double C218691 = C218188 / q;
    const double C218690 = C218186 / q;
    const double C144456 = -(C143659 * C216044 + C215768) / q;
    const double C144457 = C215186 - (C157943 * C216044) / q - C216269;
    const double C144472 = -(C143676 * C216044 + C215770) / q;
    const double C144473 = C215187 - (C147305 * C216044) / q - C216270;
    const double C144488 = -(C143693 * C216044 + C215772) / q;
    const double C144489 = C215189 - (C145962 * C216044) / q - C216271;
    const double C144859 = -(C157755 * C216044 + C215785) / q;
    const double C144890 = -(C157802 * C216044 + C215786) / q;
    const double C144905 = -(C157895 * C216044 + C215787) / q;
    const double C144920 = -(C146843 * C216044 + C215788) / q;
    const double C144935 = -(C145032 * C216044 + C215789) / q;
    const double C145548 = -(C145014 * C216044 + C215808) / q;
    const double C145549 = C215259 - (C158789 * C216044) / q - C216283;
    const double C145564 = C215261 - (C147766 * C216044) / q - C216284;
    const double C145819 = -(C148252 * C216044 + C215821) / q;
    const double C145820 = -(C158078 * C216044 + C215822) / q;
    const double C145836 = -(C155986 * C216044 + C215823) / q;
    const double C145851 = -(C158757 * C216044 + C215824) / q;
    const double C146480 = C145962 / q - (C145944 * C216044) / q - C216301;
    const double C146481 = C216292 - (C159437 * C216044) / q - C216302;
    const double C146751 = C215826 - (C152378 * C216044) / q - C215850 / q;
    const double C146752 = C147305 / q - (C158326 * C216044) / q - C216306;
    const double C146768 = C215747 - (C156869 * C216044) / q - C215852 / q;
    const double C146783 = C215853 - (C159045 * C216044) / q - C216307;
    const double C147111 = C215382 - (C158589 * C216044) / q - C216309;
    const double C148165 = C215704 - (C156430 * C216044) / q - C215847 / q;
    const double C148769 = C215430 - (C151436 * C216044) / q - C216314;
    const double C148784 = -(C148268 * C216044 + C215862) / q;
    const double C148785 = C215431 - (C150093 * C216044) / q - C216315;
    const double C149058 = -(C150974 * C216044 + C215866) / q;
    const double C149073 = -(C158711 * C216044 + C215867) / q;
    const double C149074 = -(C149169 * C216044 + C215868) / q;
    const double C149685 = -(C149152 * C216044 + C215877) / q;
    const double C149686 = C215477 - (C160856 * C216044) / q - C216317;
    const double C149701 = C215478 - (C151894 * C216044) / q - C216318;
    const double C149954 = -(C160505 * C216044 + C215885) / q;
    const double C149984 = -(C160823 * C216044 + C215886) / q;
    const double C150613 = C150093 / q - (C150076 * C216044) / q - C216328;
    const double C150614 = C216324 - (C161417 * C216044) / q - C216329;
    const double C150882 = C215911 - (C160601 * C216044) / q - C216336;
    const double C150912 = C215894 - (C153240 * C216044) / q - C215913 / q;
    const double C150913 = C151894 / q - (C161113 * C216044) / q - C216337;
    const double C150928 = C215793 - (C157313 * C216044) / q - C215915 / q;
    const double C151242 = C215562 - (C160672 * C216044) / q - C216334;
    const double C152891 =
        (3 * C152378) / C143578 - (C155070 * C216044) / q - C215921 / q;
    const double C152906 =
        C215748 - (C159359 * C216044) / q - (C152394 * p) / q;
    const double C152907 =
        C159359 / q - (C152394 * C216044) / q - (C153731 * p) / q;
    const double C152908 =
        (3 * C152394) / C143578 - (C153731 * C216044) / q - (C153714 * p) / q;
    const double C153181 = C215858 - (C154608 * C216044) / q - C215923 / q;
    const double C153494 =
        (3 * C153240) / C143578 - (C155530 * C216044) / q - C215924 / q;
    const double C154249 =
        (2 * C153731) / q - (C153714 * C216044) / q - (C162741 * p) / q;
    const double C154250 =
        (5 * C153714) / C143578 - (C162741 * C216044) / q - (C163010 * p) / q;
    const double C154518 =
        (2 * C155070) / q - (C162457 * C216044) / q - C215936 / q;
    const double C154548 =
        (2 * C155530) / q - (C162585 * C216044) / q - C215937 / q;
    const double C154876 =
        (3 * C154608) / C143578 - (C162540 * C216044) / q - C215934 / q;
    const double C158254 = C215746 - (C158545 * C216044) / q - C216344;
    const double C158369 = C215750 - (C158574 * C216044) / q - C216345;
    const double C158399 = C157943 / q - (C158297 * C216044) / q - C216346;
    const double C158516 = -(C158487 * C216044 + C215955) / q;
    const double C159001 = C215790 - (C159222 * C216044) / q - C216351;
    const double C159060 = C215794 - (C159251 * C216044) / q - C216352;
    const double C159090 = C158789 / q - (C159030 * C216044) / q - C216353;
    const double C159193 = -(C159164 * C216044 + C215968) / q;
    const double C159675 =
        (3 * C158326) / C143578 - (C159895 * C216044) / q - C216355;
    const double C159719 = C216354 - (C159924 * C216044) / q - C216356;
    const double C159749 =
        (2 * C159437) / q - (C159704 * C216044) / q - C216357;
    const double C159866 = C215977 - (C159823 * C216044) / q - C216358;
    const double C160114 = -(C158049 * C216044 + C215950) / q;
    const double C161069 = C215871 - (C161248 * C216044) / q - C216360;
    const double C161128 = C215872 - (C161263 * C216044) / q - C216361;
    const double C161158 = C160856 / q - (C161098 * C216044) / q - C216362;
    const double C161233 = -(C161218 * C216044 + C215988) / q;
    const double C161684 = C216363 - (C161862 * C216044) / q - C216364;
    const double C161728 =
        (3 * C161113) / C143578 - (C161891 * C216044) / q - C216365;
    const double C161758 =
        (2 * C161417) / q - (C161713 * C216044) / q - C216366;
    const double C161847 = C215997 - (C161818 * C216044) / q - C216367;
    const double C162095 = -(C158881 * C216044 + C215963) / q;
    const double C162525 = -(C157848 * C216044 + C159359 * p) / q;
    const double C162981 =
        (5 * C162457) / C143578 - (C163159 * C216044) / q - (C166153 * p) / q;
    const double C163025 =
        (5 * C162585) / C143578 - (C163174 * C216044) / q - (C166168 * p) / q;
    const double C163055 =
        (3 * C162741) / q - (C163010 * C216044) / q - (C166198 * p) / q;
    const double C163144 =
        (2 * C162540) / q - (C163115 * C216044) / q - C216002 / q;
    const double C163974 = -(C157833 * C216044 + C215943) / q;
    const double C163975 = C215941 - (C164005 * C216044) / q - C216369;
    const double C164113 = C215948 - (C164128 * C216044) / q - C216371;
    const double C164219 =
        (3 * C158297) / C143578 - (C164234 * C216044) / q - C216375;
    const double C164249 = C215944 - (C164294 * C216044) / q - C216376;
    const double C164264 = C158545 / q - (C164189 * C216044) / q - C216377;
    const double C164279 = C216010 - (C164204 * C216044) / q - C216378;
    const double C164463 = C215961 - (C164478 * C216044) / q - C216380;
    const double C164568 = C216384 - (C164583 * C216044) / q - C216385;
    const double C164598 = C215957 - (C164643 * C216044) / q - C216386;
    const double C164613 = C159222 / q - (C164538 * C216044) / q - C216387;
    const double C164628 = C159251 / q - (C164553 * C216044) / q - C216388;
    const double C164916 =
        (5 * C159704) / C143578 - (C164931 * C216044) / q - (C166943 * p) / q;
    const double C164946 =
        (3 * C159823) / C143578 - (C164991 * C216044) / q - C216390;
    const double C164961 = C216389 - (C164886 * C216044) / q - C216391;
    const double C164976 =
        (2 * C159924) / q - (C164901 * C216044) / q - C216392;
    const double C165264 = -(C160949 * C216044 + C215983) / q;
    const double C165265 = C215982 - (C165280 * C216044) / q - C216393;
    const double C165370 =
        (3 * C161098) / C143578 - (C165385 * C216044) / q - C216394;
    const double C165400 = C215979 - (C165445 * C216044) / q - C216395;
    const double C165415 = C216030 - (C165340 * C216044) / q - C216396;
    const double C165430 = C161263 / q - (C165355 * C216044) / q - C216397;
    const double C165716 =
        (5 * C161713) / C143578 - (C165731 * C216044) / q - (C167358 * p) / q;
    const double C165746 =
        (3 * C161818) / C143578 - (C165791 * C216044) / q - C216399;
    const double C165761 =
        (2 * C161862) / q - (C165686 * C216044) / q - C216400;
    const double C165776 = C216398 - (C165701 * C216044) / q - C216401;
    const double C166183 =
        (7 * C163010) / C143578 - (C166198 * C216044) / q - (C167621 * p) / q;
    const double C166213 =
        (5 * C163115) / C143578 - (C166258 * C216044) / q - (C167636 * p) / q;
    const double C166228 =
        (3 * C163159) / q - (C166153 * C216044) / q - (C167651 * p) / q;
    const double C166243 =
        (3 * C163174) / q - (C166168 * C216044) / q - (C167666 * p) / q;
    const double C168593 = -(C167803 * C216044 + C216985) / q;
    const double C168609 = -(C167819 * C216044 + C216987) / q;
    const double C168625 = -(C167835 * C216044 + C216989) / q;
    const double C168989 = -(C181656 * C216044 + C217002) / q;
    const double C169018 = -(C181700 * C216044 + C217003) / q;
    const double C169033 = -(C181787 * C216044 + C217004) / q;
    const double C169048 = -(C170936 * C216044 + C217005) / q;
    const double C169063 = -(C169156 * C216044 + C217006) / q;
    const double C169667 = -(C169139 * C216044 + C217025) / q;
    const double C169932 = -(C172308 * C216044 + C217038) / q;
    const double C169933 = -(C181967 * C216044 + C217039) / q;
    const double C169948 = -(C179901 * C216044 + C217040) / q;
    const double C169963 = -(C182640 * C216044 + C217041) / q;
    const double C170848 = C217043 - (C176357 * C216044) / q - C217067 / q;
    const double C170864 = C216964 - (C180778 * C216044) / q - C217069 / q;
    const double C172222 = C216921 - (C180342 * C216044) / q - C217064 / q;
    const double C172839 = -(C172323 * C216044 + C217079) / q;
    const double C173109 = -(C174990 * C216044 + C217083) / q;
    const double C173124 = -(C182597 * C216044 + C217084) / q;
    const double C173125 = -(C173216 * C216044 + C217085) / q;
    const double C173727 = -(C173200 * C216044 + C217094) / q;
    const double C173990 = -(C184366 * C216044 + C217102) / q;
    const double C174019 = -(C184677 * C216044 + C217103) / q;
    const double C174931 = C217111 - (C177213 * C216044) / q - C217130 / q;
    const double C174947 = C217010 - (C181219 * C216044) / q - C217132 / q;
    const double C176869 =
        (3 * C176357) / C143578 - (C179009 * C216044) / q - C217138 / q;
    const double C176884 =
        C216965 - (C183235 * C216044) / q - (C176372 * p) / q;
    const double C176885 =
        C183235 / q - (C176372 * C216044) / q - (C177698 * p) / q;
    const double C176886 =
        (3 * C176372) / C143578 - (C177698 * C216044) / q - (C177682 * p) / q;
    const double C177155 = C217075 - (C178560 * C216044) / q - C217140 / q;
    const double C177467 =
        (3 * C177213) / C143578 - (C179456 * C216044) / q - C217141 / q;
    const double C178211 =
        (2 * C177698) / q - (C177682 * C216044) / q - (C186572 * p) / q;
    const double C178212 =
        (5 * C177682) / C143578 - (C186572 * C216044) / q - (C186845 * p) / q;
    const double C178474 =
        (2 * C179009) / q - (C186300 * C216044) / q - C217153 / q;
    const double C178503 =
        (2 * C179456) / q - (C186426 * C216044) / q - C217154 / q;
    const double C178823 =
        (3 * C178560) / C143578 - (C186383 * C216044) / q - C217151 / q;
    const double C182408 = -(C182378 * C216044 + C217172) / q;
    const double C183076 = -(C183046 * C216044 + C217185) / q;
    const double C183984 = -(C181938 * C216044 + C217167) / q;
    const double C185090 = -(C185074 * C216044 + C217205) / q;
    const double C185944 = -(C182761 * C216044 + C217180) / q;
    const double C186368 = -(C181743 * C216044 + C183235 * p) / q;
    const double C186816 =
        (5 * C186300) / C143578 - (C186995 * C216044) / q - (C189953 * p) / q;
    const double C186860 =
        (5 * C186426) / C143578 - (C187010 * C216044) / q - (C189968 * p) / q;
    const double C186890 =
        (3 * C186572) / q - (C186845 * C216044) / q - (C189998 * p) / q;
    const double C186980 =
        (2 * C186383) / q - (C186950 * C216044) / q - C217219 / q;
    const double C187795 = -(C181729 * C216044 + C217160) / q;
    const double C188732 =
        (5 * C183576) / C143578 - (C188747 * C216044) / q - (C190729 * p) / q;
    const double C189071 = -(C184800 * C216044 + C217200) / q;
    const double C189522 =
        (5 * C185564) / C143578 - (C189537 * C216044) / q - (C191139 * p) / q;
    const double C189983 =
        (7 * C186845) / C143578 - (C189998 * C216044) / q - (C191397 * p) / q;
    const double C190013 =
        (5 * C186950) / C143578 - (C190058 * C216044) / q - (C191412 * p) / q;
    const double C190028 =
        (3 * C186995) / q - (C189953 * C216044) / q - (C191427 * p) / q;
    const double C190043 =
        (3 * C187010) / q - (C189968 * C216044) / q - (C191442 * p) / q;
    const double C192366 = -(C157751 * be + C191577 * C216044 + C218199) / q;
    const double C192382 = -(C157783 * be + C191593 * C216044 + C218201) / q;
    const double C192398 = -(C157814 * be + C191609 * C216044 + C218203) / q;
    const double C192762 = -(C157829 * be + C205415 * C216044 + C218216) / q;
    const double C192791 = -(C157844 * be + C205459 * C216044 + C218217) / q;
    const double C192806 = -(C159936 * be + C205546 * C216044 + C218218) / q;
    const double C192821 = -(C158723 * be + C194707 * C216044 + C218219) / q;
    const double C192836 = -(C158662 * be + C192929 * C216044 + C218220) / q;
    const double C193439 = -(C158631 * be + C192912 * C216044 + C218239) / q;
    const double C193704 = -(C158677 * be + C196076 * C216044 + C218252) / q;
    const double C193705 = -(C158692 * be + C205724 * C216044 + C218253) / q;
    const double C193720 = -(C158707 * be + C203660 * C216044 + C218254) / q;
    const double C193735 = -(C161917 * be + C206393 * C216044 + C218255) / q;
    const double C194619 =
        C218257 - (C159325 * be + C200120 * C216044) / q - C218281 / q;
    const double C194635 =
        C218178 - (C159355 * be + C204537 * C216044) / q - C218283 / q;
    const double C195990 =
        C218135 - (C160284 * be + C204101 * C216044) / q - C218278 / q;
    const double C196607 = -(C160443 * be + C196091 * C216044 + C218293) / q;
    const double C196877 = -(C160789 * be + C198756 * C216044 + C218297) / q;
    const double C196892 = -(C163649 * be + C206350 * C216044 + C218298) / q;
    const double C196893 = -(C160759 * be + C196984 * C216044 + C218299) / q;
    const double C197494 = -(C160728 * be + C196968 * C216044 + C218308) / q;
    const double C197757 = -(C160774 * be + C208107 * C216044 + C218316) / q;
    const double C197786 = -(C165107 * be + C208417 * C216044 + C218317) / q;
    const double C198697 =
        C218325 - (C162552 * be + C200976 * C216044) / q - C218344 / q;
    const double C198713 =
        C218224 - (C163735 * be + C204978 * C216044) / q - C218346 / q;
    const double C200632 = (3 * C200120) / C143578 -
                           (C162674 * be + C202770 * C216044) / q - C218352 / q;
    const double C200647 =
        C218179 - (C163750 * be + C206984 * C216044) / q - (C200135 * p) / q;
    const double C200648 = C206984 / q -
                           (C162353 * be + C200135 * C216044) / q -
                           (C201461 * p) / q;
    const double C200649 = (3 * C200135) / C143578 -
                           (C162644 * be + C201461 * C216044) / q -
                           (C201445 * p) / q;
    const double C200918 =
        C218289 - (C162567 * be + C202322 * C216044) / q - C218354 / q;
    const double C201230 = (3 * C200976) / C143578 -
                           (C163518 * be + C203216 * C216044) / q - C218355 / q;
    const double C201973 = (2 * C201461) / q -
                           (C162613 * be + C201445 * C216044) / q -
                           (C210296 * p) / q;
    const double C201974 = (5 * C201445) / C143578 -
                           (C165954 * be + C210296 * C216044) / q -
                           (C210563 * p) / q;
    const double C202236 = (2 * C202770) / q -
                           (C162659 * be + C210024 * C216044) / q - C218367 / q;
    const double C202265 = (2 * C203216) / q -
                           (C165924 * be + C210150 * C216044) / q - C218368 / q;
    const double C202584 = (3 * C202322) / C143578 -
                           (C163533 * be + C210107 * C216044) / q - C218365 / q;
    const double C206162 = -(C163955 * be + C206133 * C216044 + C218386) / q;
    const double C206825 = -(C164337 * be + C206796 * C216044 + C218399) / q;
    const double C207727 = -(C164322 * be + C205695 * C216044 + C218381) / q;
    const double C208825 = -(C165122 * be + C208810 * C216044 + C218419) / q;
    const double C209672 = -(C165092 * be + C206513 * C216044 + C218394) / q;
    const double C210092 =
        -(C163910 * be + C205502 * C216044 + C206984 * p) / q;
    const double C210534 = (5 * C210024) / C143578 -
                           (C165969 * be + C210715 * C216044) / q -
                           (C213662 * p) / q;
    const double C210579 = (5 * C210150) / C143578 -
                           (C167518 * be + C210730 * C216044) / q -
                           (C213677 * p) / q;
    const double C210611 = (3 * C210296) / q -
                           (C213703 * be + C210563 * C216044) / q -
                           (C213709 * p) / q;
    const double C210700 = (2 * C210107) / q -
                           (C165939 * be + C210671 * C216044) / q - C218433 / q;
    const double C211507 = -(C163894 * be + C205488 * C216044 + C218374) / q;
    const double C212443 = (5 * C207322) / C143578 -
                           (C167503 * be + C212458 * C216044) / q -
                           (C214443 * p) / q;
    const double C212784 = -(C189051 * be + C208539 * C216044 + C218414) / q;
    const double C213233 = (5 * C209293) / C143578 -
                           (C191378 * be + C213248 * C216044) / q -
                           (C214848 * p) / q;
    const double C213693 = (7 * C210563) / C143578 -
                           (C215099 * be + C213709 * C216044) / q -
                           (C215105 * p) / q;
    const double C213725 = (5 * C210671) / C143578 -
                           (C167533 * be + C213772 * C216044) / q -
                           (C215120 * p) / q;
    const double C213741 = (3 * C210715) / q -
                           (C215130 * be + C213662 * C216044) / q -
                           (C215136 * p) / q;
    const double C213757 = (3 * C210730) / q -
                           (C215146 * be + C213677 * C216044) / q -
                           (C215152 * p) / q;
    const double C144058 = -(C143659 * C216043 + C215754) / q;
    const double C144059 = C215186 - (C157895 * C216043) / q - C216262;
    const double C144074 = -(C143676 * C216043 + C215756) / q;
    const double C144075 = C215187 - (C146843 * C216043) / q - C216263;
    const double C144090 = -(C143693 * C216043 + C215758) / q;
    const double C144091 = C215189 - (C145032 * C216043) / q - C216264;
    const double C144767 = -(C157755 * C216043 + C215783) / q;
    const double C144798 = -(C157802 * C216043 + C215784) / q;
    const double C145283 = C145032 / q - (C145014 * C216043) / q - C216276;
    const double C145284 = C216275 - (C158757 * C216043) / q - C216277;
    const double C145756 = C215791 - (C148252 * C216043) / q - C215818 / q;
    const double C145757 = C146843 / q - (C158078 * C216043) / q - C216291;
    const double C145773 = C215747 - (C155986 * C216043) / q - C215820 / q;
    const double C146213 = -(C145944 * C216043 + C215810) / q;
    const double C146214 = C215332 - (C159045 * C216043) / q - C216283;
    const double C146229 = -(C145962 * C216043 + C215789) / q;
    const double C146230 = C215334 - (C147766 * C216043) / q - C216296;
    const double C146687 = -(C152378 * C216043 + C215847) / q;
    const double C146688 = -(C158326 * C216043 + C215848) / q;
    const double C146704 = -(C156869 * C216043 + C215823) / q;
    const double C146705 = -(C147305 * C216043 + C215788) / q;
    const double C147439 = C215399 - (C158589 * C216043) / q - C216311;
    const double C147673 = -(C157943 * C216043 + C215787) / q;
    const double C147900 = C215853 - (C158789 * C216043) / q - C216313;
    const double C148133 = C215734 - (C156430 * C216043) / q - C215821 / q;
    const double C148510 =
        (3 * C148252) / C143578 - (C150974 * C216043) / q - C215860 / q;
    const double C148525 =
        C215748 - (C158711 * C216043) / q - (C148268 * p) / q;
    const double C148526 =
        C158711 / q - (C148268 * C216043) / q - (C149169 * p) / q;
    const double C148527 =
        (3 * C148268) / C143578 - (C149169 * C216043) / q - (C149152 * p) / q;
    const double C149420 =
        (2 * C149169) / q - (C149152 * C216043) / q - (C160823 * p) / q;
    const double C149421 =
        (5 * C149152) / C143578 - (C160823 * C216043) / q - (C160949 * p) / q;
    const double C149893 =
        (2 * C150974) / q - (C160505 * C216043) / q - C215884 / q;
    const double C150344 = C215594 - (C153240 * C216043) / q - C216315;
    const double C150345 = C153240 / q - (C150076 * C216043) / q - C216318;
    const double C150346 = C216324 - (C161113 * C216043) / q - C216317;
    const double C150361 = C215828 - (C157313 * C216043) / q - C215862 / q;
    const double C150362 = C215894 - (C150093 * C216043) / q - C215868 / q;
    const double C150363 =
        (3 * C150093) / C143578 - (C151894 * C216043) / q - C215877 / q;
    const double C150820 = C215908 - (C160601 * C216043) / q - C216334;
    const double C150836 = C215858 - (C151436 * C216043) / q - C215866 / q;
    const double C151570 =
        (3 * C151436) / C143578 - (C160672 * C216043) / q - C215885 / q;
    const double C152028 =
        (2 * C151894) / q - (C160856 * C216043) / q - C215886 / q;
    const double C152635 = C215593 - (C154608 * C216043) / q - C216314;
    const double C152650 = -(C152394 * C216043 + C215915) / q;
    const double C153982 = -(C153714 * C216043 + C215924) / q;
    const double C153983 = C215652 - (C162585 * C216043) / q - C216329;
    const double C153998 = -(C153731 * C216043 + C215913) / q;
    const double C153999 = C215653 - (C155530 * C216043) / q - C216328;
    const double C154456 = -(C162457 * C216043 + C215934) / q;
    const double C154472 = -(C155070 * C216043 + C215923) / q;
    const double C155204 = C215688 - (C162540 * C216043) / q - C216336;
    const double C155438 = -(C159437 * C216043 + C215854) / q;
    const double C155664 = C155530 / q - (C161417 * C216043) / q - C216337;
    const double C157225 = -(C159359 * C216043 + C215867) / q;
    const double C158006 = C215746 - (C158487 * C216043) / q - C216341;
    const double C158136 = C157895 / q - (C158049 * C216043) / q - C216342;
    const double C158166 = C215752 - (C158574 * C216043) / q - C216343;
    const double C158852 =
        (3 * C158078) / C143578 - (C159164 * C216043) / q - C216348;
    const double C158911 =
        (2 * C158757) / q - (C158881 * C216043) / q - C216349;
    const double C158941 = C216347 - (C159251 * C216043) / q - C216350;
    const double C159500 = C215825 - (C159823 * C216043) / q - C216351;
    const double C159586 = C159045 / q - (C159030 * C216043) / q - C216352;
    const double C159615 = C215831 - (C159924 * C216043) / q - C216353;
    const double C160029 = C215977 - (C159222 * C216043) / q - C216359;
    const double C160573 = -(C157848 * C216043 + C158711 * p) / q;
    const double C160920 =
        (5 * C160505) / C143578 - (C161218 * C216043) / q - (C165219 * p) / q;
    const double C160979 =
        (3 * C160823) / q - (C160949 * C216043) / q - (C165249 * p) / q;
    const double C161009 =
        (5 * C160856) / C143578 - (C161263 * C216043) / q - C215983 / q;
    const double C161481 = C216363 - (C161818 * C216043) / q - C216360;
    const double C161595 =
        (2 * C161113) / q - (C161098 * C216043) / q - C216361;
    const double C161624 =
        (3 * C161417) / C143578 - (C161891 * C216043) / q - C216362;
    const double C162010 =
        (2 * C160672) / q - (C161248 * C216043) / q - C215988 / q;
    const double C162805 = C215926 - (C163115 * C216043) / q - C216364;
    const double C162891 = C162585 / q - (C161713 * C216043) / q - C216365;
    const double C162920 = -(C162741 * C216043 + C215937) / q;
    const double C162921 = C215929 - (C163174 * C216043) / q - C216366;
    const double C163279 = C216003 - (C161862 * C216043) / q - C216367;
    const double C163928 = -(C157833 * C216043 + C215942) / q;
    const double C163929 = C215941 - (C163959 * C216043) / q - C216368;
    const double C164083 =
        (3 * C158049) / C143578 - (C164098 * C216043) / q - C216370;
    const double C164143 = C158487 / q - (C164068 * C216043) / q - C216372;
    const double C164158 = -(C158545 * C216043 + C215955) / q;
    const double C164159 = C215945 - (C164294 * C216043) / q - C216373;
    const double C164174 = C216010 - (C164128 * C216043) / q - C216374;
    const double C164433 =
        (5 * C158881) / C143578 - (C164448 * C216043) / q - (C166650 * p) / q;
    const double C164493 = C216379 - (C164418 * C216043) / q - C216381;
    const double C164508 =
        (3 * C159222) / C143578 - (C164643 * C216043) / q - C216382;
    const double C164523 =
        (2 * C159251) / q - (C164478 * C216043) / q - C216383;
    const double C164689 = -(C158297 * C216043 + C215952) / q;
    const double C164690 = C215953 - (C164204 * C216043) / q - C216371;
    const double C164797 = C216384 - (C164553 * C216043) / q - C216380;
    const double C164840 = C159823 / q - (C164538 * C216043) / q - C216386;
    const double C164855 = -(C159895 * C216043 + C215978) / q;
    const double C164856 = C215971 - (C164991 * C216043) / q - C216387;
    const double C164871 = C159924 / q - (C164583 * C216043) / q - C216388;
    const double C165234 =
        (7 * C160949) / C143578 - (C165249 * C216043) / q - (C167093 * p) / q;
    const double C165295 =
        (3 * C161218) / q - (C165219 * C216043) / q - (C167137 * p) / q;
    const double C165310 =
        (5 * C161248) / C143578 - (C165445 * C216043) / q - (C167152 * p) / q;
    const double C165325 =
        (3 * C161263) / q - (C165280 * C216043) / q - (C167167 * p) / q;
    const double C165598 =
        (5 * C161098) / C143578 - (C165355 * C216043) / q - C216393;
    const double C165641 =
        (2 * C161818) / q - (C165340 * C216043) / q - C216395;
    const double C165656 =
        (3 * C161862) / C143578 - (C165791 * C216043) / q - C216396;
    const double C165671 = C216398 - (C165385 * C216043) / q - C216397;
    const double C165911 = -(C159704 * C216043 + C215974) / q;
    const double C165912 = C215975 - (C164901 * C216043) / q - C216385;
    const double C166050 =
        (3 * C161713) / C143578 - (C165701 * C216043) / q - C216394;
    const double C166107 = C216040 - (C165686 * C216043) / q - C216399;
    const double C166122 = -(C163159 * C216043 + C216002) / q;
    const double C166123 = C216000 - (C166258 * C216043) / q - C216400;
    const double C166138 = C163174 / q - (C165731 * C216043) / q - C216401;
    const double C168198 = -(C157751 * be + C167803 * C216043 + C216971) / q;
    const double C168214 = -(C157783 * be + C167819 * C216043 + C216973) / q;
    const double C168230 = -(C157814 * be + C167835 * C216043 + C216975) / q;
    const double C168901 = -(C157829 * be + C181656 * C216043 + C217000) / q;
    const double C168930 = -(C157844 * be + C181700 * C216043 + C217001) / q;
    const double C169872 =
        C217008 - (C158677 * be + C172308 * C216043) / q - C217035 / q;
    const double C169888 =
        C216964 - (C158707 * be + C179901 * C216043) / q - C217037 / q;
    const double C170319 = -(C159279 * be + C170053 * C216043 + C217027) / q;
    const double C170335 = -(C159310 * be + C170070 * C216043 + C217006) / q;
    const double C170787 = -(C159325 * be + C176357 * C216043 + C217064) / q;
    const double C170788 = -(C159340 * be + C182217 * C216043 + C217065) / q;
    const double C170803 = -(C159355 * be + C180778 * C216043 + C217040) / q;
    const double C170804 = -(C159371 * be + C171385 * C216043 + C217005) / q;
    const double C171745 = -(C160126 * be + C181832 * C216043 + C217004) / q;
    const double C172192 =
        C216951 - (C160284 * be + C180342 * C216043) / q - C217038 / q;
    const double C172565 = (3 * C172308) / C143578 -
                           (C160789 * be + C174990 * C216043) / q - C217077 / q;
    const double C172580 =
        C216965 - (C163649 * be + C182597 * C216043) / q - (C172323 * p) / q;
    const double C172581 = C182597 / q -
                           (C160443 * be + C172323 * C216043) / q -
                           (C173216 * p) / q;
    const double C172582 = (3 * C172323) / C143578 -
                           (C160759 * be + C173216 * C216043) / q -
                           (C173200 * p) / q;
    const double C173465 = (2 * C173216) / q -
                           (C160728 * be + C173200 * C216043) / q -
                           (C184677 * p) / q;
    const double C173466 = (5 * C173200) / C143578 -
                           (C165107 * be + C184677 * C216043) / q -
                           (C184800 * p) / q;
    const double C173932 = (2 * C174990) / q -
                           (C160774 * be + C184366 * C216043) / q - C217101 / q;
    const double C174390 =
        C217045 - (C163735 * be + C181219 * C216043) / q - C217079 / q;
    const double C174391 =
        C217111 - (C161321 * be + C174124 * C216043) / q - C217085 / q;
    const double C174392 = (3 * C174124) / C143578 -
                           (C162222 * be + C175884 * C216043) / q - C217094 / q;
    const double C174858 =
        C217075 - (C161351 * be + C175439 * C216043) / q - C217083 / q;
    const double C175571 = (3 * C175439) / C143578 -
                           (C162237 * be + C184534 * C216043) / q - C217102 / q;
    const double C176016 = (2 * C175884) / q -
                           (C165137 * be + C184708 * C216043) / q - C217103 / q;
    const double C176628 = -(C162353 * be + C176372 * C216043 + C217132) / q;
    const double C177947 = -(C162613 * be + C177682 * C216043 + C217141) / q;
    const double C177963 = -(C162644 * be + C177698 * C216043 + C217130) / q;
    const double C178415 = -(C162659 * be + C186300 * C216043 + C217151) / q;
    const double C178430 = -(C162674 * be + C179009 * C216043 + C217140) / q;
    const double C179369 = -(C163375 * be + C183308 * C216043 + C217071) / q;
    const double C181133 = -(C163750 * be + C183235 * C216043 + C217084) / q;
    const double C184435 =
        -(C163910 * be + C181743 * C216043 + C182597 * p) / q;
    const double C184771 = (5 * C184366) / C143578 -
                           (C165122 * be + C185074 * C216043) / q -
                           (C189024 * p) / q;
    const double C184832 = (3 * C184677) / q -
                           (C189051 * be + C184800 * C216043) / q -
                           (C189056 * p) / q;
    const double C184864 = (5 * C184708) / C143578 -
                           (C167060 * be + C185120 * C216043) / q - C217200 / q;
    const double C185858 = (2 * C184534) / q -
                           (C165152 * be + C185105 * C216043) / q - C217205 / q;
    const double C186754 = -(C165954 * be + C186572 * C216043 + C217154) / q;
    const double C187749 = -(C163894 * be + C181729 * C216043 + C217159) / q;
    const double C187978 = -(C164001 * be + C182438 * C216043 + C217172) / q;
    const double C188248 = (5 * C182761) / C143578 -
                           (C167030 * be + C188263 * C216043) / q -
                           (C190440 * p) / q;
    const double C188506 = -(C164671 * be + C182188 * C216043 + C217169) / q;
    const double C188670 = -(C164717 * be + C183768 * C216043 + C217195) / q;
    const double C189040 = (7 * C184800) / C143578 -
                           (C190869 * be + C189056 * C216043) / q -
                           (C190874 * p) / q;
    const double C189103 = (3 * C185074) / q -
                           (C190914 * be + C189024 * C216043) / q -
                           (C190919 * p) / q;
    const double C189119 = (5 * C185105) / C143578 -
                           (C167075 * be + C189255 * C216043) / q -
                           (C190934 * p) / q;
    const double C189135 = (3 * C185120) / q -
                           (C190945 * be + C189087 * C216043) / q -
                           (C190950 * p) / q;
    const double C189714 = -(C165893 * be + C183576 * C216043 + C217191) / q;
    const double C189921 = -(C165969 * be + C186995 * C216043 + C217219) / q;
    const double C191971 = -(C191577 * C216043 + C218185) / q;
    const double C191987 = -(C191593 * C216043 + C218187) / q;
    const double C192003 = -(C191609 * C216043 + C218189) / q;
    const double C192674 = -(C205415 * C216043 + C218214) / q;
    const double C192703 = -(C205459 * C216043 + C218215) / q;
    const double C193644 = C218222 - (C196076 * C216043) / q - C218249 / q;
    const double C193660 = C218178 - (C203660 * C216043) / q - C218251 / q;
    const double C194090 = -(C193825 * C216043 + C218241) / q;
    const double C194106 = -(C193842 * C216043 + C218220) / q;
    const double C194558 = -(C200120 * C216043 + C218278) / q;
    const double C194559 = -(C205972 * C216043 + C218279) / q;
    const double C194574 = -(C204537 * C216043 + C218254) / q;
    const double C194575 = -(C195155 * C216043 + C218219) / q;
    const double C195514 = -(C205591 * C216043 + C218218) / q;
    const double C195960 = C218165 - (C204101 * C216043) / q - C218252 / q;
    const double C196333 =
        (3 * C196076) / C143578 - (C198756 * C216043) / q - C218291 / q;
    const double C196348 =
        C218179 - (C206350 * C216043) / q - (C196091 * p) / q;
    const double C196349 =
        C206350 / q - (C196091 * C216043) / q - (C196984 * p) / q;
    const double C196350 =
        (3 * C196091) / C143578 - (C196984 * C216043) / q - (C196968 * p) / q;
    const double C197232 =
        (2 * C196984) / q - (C196968 * C216043) / q - (C208417 * p) / q;
    const double C197233 =
        (5 * C196968) / C143578 - (C208417 * C216043) / q - (C208539 * p) / q;
    const double C197699 =
        (2 * C198756) / q - (C208107 * C216043) / q - C218315 / q;
    const double C198156 = C218259 - (C204978 * C216043) / q - C218293 / q;
    const double C198157 = C218325 - (C197891 * C216043) / q - C218299 / q;
    const double C198158 =
        (3 * C197891) / C143578 - (C199648 * C216043) / q - C218308 / q;
    const double C198624 = C218289 - (C199204 * C216043) / q - C218297 / q;
    const double C199335 =
        (3 * C199204) / C143578 - (C208274 * C216043) / q - C218316 / q;
    const double C199779 =
        (2 * C199648) / q - (C208448 * C216043) / q - C218317 / q;
    const double C200391 = -(C200135 * C216043 + C218346) / q;
    const double C201709 = -(C201445 * C216043 + C218355) / q;
    const double C201725 = -(C201461 * C216043 + C218344) / q;
    const double C202177 = -(C210024 * C216043 + C218365) / q;
    const double C202192 = -(C202770 * C216043 + C218354) / q;
    const double C203129 = -(C207057 * C216043 + C218285) / q;
    const double C204892 = -(C206984 * C216043 + C218298) / q;
    const double C208175 = -(C205502 * C216043 + C206350 * p) / q;
    const double C208510 =
        (5 * C208107) / C143578 - (C208810 * C216043) / q - (C212738 * p) / q;
    const double C208569 =
        (3 * C208417) / q - (C208539 * C216043) / q - (C212768 * p) / q;
    const double C208599 =
        (5 * C208448) / C143578 - (C208855 * C216043) / q - C218414 / q;
    const double C209587 =
        (2 * C208274) / q - (C208840 * C216043) / q - C218419 / q;
    const double C210473 = -(C210296 * C216043 + C218368) / q;
    const double C211461 = -(C205488 * C216043 + C218373) / q;
    const double C211689 = -(C206191 * C216043 + C218386) / q;
    const double C211961 =
        (5 * C206513) / C143578 - (C211976 * C216043) / q - (C214154 * p) / q;
    const double C212220 = -(C205943 * C216043 + C218383) / q;
    const double C212381 = -(C207513 * C216043 + C218409) / q;
    const double C212753 =
        (7 * C208539) / C143578 - (C212768 * C216043) / q - (C214587 * p) / q;
    const double C212815 =
        (3 * C208810) / q - (C212738 * C216043) / q - (C214631 * p) / q;
    const double C212830 =
        (5 * C208840) / C143578 - (C212969 * C216043) / q - (C214646 * p) / q;
    const double C212845 =
        (3 * C208855) / q - (C212800 * C216043) / q - (C214661 * p) / q;
    const double C213427 = -(C207322 * C216043 + C218405) / q;
    const double C213631 = -(C210715 * C216043 + C218433) / q;
    const double C143611 = (2 * C143676) / q -
                           (C157751 * be + C143659 * C216041) / q -
                           (C157755 * p) / q;
    const double C143627 = (3 * C143693) / C143578 -
                           (C157783 * be + C143676 * C216041) / q -
                           (C143659 * p) / q;
    const double C143643 = C157802 / q -
                           (C157814 * be + C143693 * C216041) / q -
                           (C143676 * p) / q;
    const double C143660 = (5 * C143659) / C143578 -
                           (C157829 * be + C157755 * C216041) / q -
                           (C157833 * p) / q;
    const double C143692 =
        C215748 - (C157844 * be + C157802 * C216041) / q - (C143693 * p) / q;
    const double C144981 =
        C148252 / q - (C158631 * be + C145014 * C216041) / q - C216263;
    const double C144997 =
        C215791 - (C158662 * be + C145032 * C216041) / q - C215756 / q;
    const double C145013 =
        C215431 - (C158677 * be + C148252 * C216041) / q - C216264;
    const double C145015 =
        C216275 - (C158692 * be + C158078 * C216041) / q - C216262;
    const double C145031 =
        C215793 - (C158707 * be + C155986 * C216041) / q - C215758 / q;
    const double C145033 = (3 * C145032) / C143578 -
                           (C158723 * be + C146843 * C216041) / q - C215754 / q;
    const double C145911 =
        C152378 / q - (C159279 * be + C145944 * C216041) / q - C216270;
    const double C145927 =
        C215826 - (C159310 * be + C145962 * C216041) / q - C215770 / q;
    const double C145943 =
        C215594 - (C159325 * be + C152378 * C216041) / q - C216271;
    const double C145945 =
        C216292 - (C159340 * be + C158326 * C216041) / q - C216269;
    const double C145961 =
        C215828 - (C159355 * be + C156869 * C216041) / q - C215772 / q;
    const double C145963 = (3 * C145962) / C143578 -
                           (C159371 * be + C147305 * C216041) / q - C215768 / q;
    const double C146844 = (2 * C146843) / q -
                           (C159936 * be + C157895 * C216041) / q - C215783 / q;
    const double C147306 = (2 * C147305) / q -
                           (C160126 * be + C157943 * C216041) / q - C215785 / q;
    const double C147749 =
        C215858 - (C160269 * be + C147766 * C216041) / q - C215788 / q;
    const double C147765 =
        C215744 - (C160284 * be + C156430 * C216041) / q - C215789 / q;
    const double C147767 = (3 * C147766) / C143578 -
                           (C160299 * be + C158589 * C216041) / q - C215787 / q;
    const double C148236 = -(C160443 * be + C148268 * C216041 + C215820) / q;
    const double C149120 = -(C160728 * be + C149152 * C216041 + C215860) / q;
    const double C149136 = -(C160759 * be + C149169 * C216041 + C215818) / q;
    const double C149153 =
        C215477 - (C160774 * be + C160505 * C216041) / q - C216277;
    const double C149170 =
        C215478 - (C160789 * be + C150974 * C216041) / q - C216276;
    const double C150044 = -(C161290 * be + C150076 * C216041 + C215861) / q;
    const double C150060 = -(C161321 * be + C150093 * C216041 + C215821) / q;
    const double C150077 =
        C215508 - (C161336 * be + C160601 * C216041) / q - C216283;
    const double C150094 =
        C215509 - (C161351 * be + C151436 * C216041) / q - C216296;
    const double C150975 =
        C150974 / q - (C161917 * be + C158757 * C216041) / q - C216291;
    const double C151437 =
        C215911 - (C162107 * be + C158789 * C216041) / q - C216311;
    const double C151878 = -(C162222 * be + C151894 * C216041 + C215866) / q;
    const double C151895 =
        C215583 - (C162237 * be + C160672 * C216041) / q - C216313;
    const double C152362 = -(C162353 * be + C152394 * C216041 + C215852) / q;
    const double C153224 = -(C162552 * be + C153240 * C216041 + C215847) / q;
    const double C153241 =
        C215638 - (C162567 * be + C154608 * C216041) / q - C216284;
    const double C153682 = -(C162613 * be + C153714 * C216041 + C215921) / q;
    const double C153698 = -(C162644 * be + C153731 * C216041 + C215850) / q;
    const double C153715 =
        C215652 - (C162659 * be + C162457 * C216041) / q - C216302;
    const double C153732 =
        C215653 - (C162674 * be + C155070 * C216041) / q - C216301;
    const double C154609 =
        C215908 - (C163186 * be + C159045 * C216041) / q - C216309;
    const double C155071 =
        C155070 / q - (C163375 * be + C159437 * C216041) / q - C216306;
    const double C155514 = -(C163518 * be + C155530 * C216041 + C215923) / q;
    const double C155531 =
        C215698 - (C163533 * be + C162540 * C216041) / q - C216307;
    const double C155985 = -(C163649 * be + C158711 * C216041 + C215784) / q;
    const double C156429 = -(C163735 * be + C157313 * C216041 + C215823) / q;
    const double C156868 = -(C163750 * be + C159359 * C216041 + C215786) / q;
    const double C157771 = (3 * C157755) / q -
                           (C163894 * be + C157833 * C216041) / q -
                           (C163898 * p) / q;
    const double C157801 =
        -(C163910 * be + C157848 * C216041 + C157802 * p) / q;
    const double C157896 = (5 * C157895) / C143578 -
                           (C163955 * be + C158487 * C216041) / q - C215942 / q;
    const double C157944 = (5 * C157943) / C143578 -
                           (C164001 * be + C158545 * C216041) / q - C215943 / q;
    const double C158650 =
        (2 * C158078) / q - (C164322 * be + C158049 * C216041) / q - C216341;
    const double C158758 = (3 * C158757) / C143578 -
                           (C164337 * be + C159164 * C216041) / q - C216342;
    const double C158790 =
        C216347 - (C164352 * be + C159222 * C216041) / q - C216343;
    const double C159298 =
        (2 * C158326) / q - (C164671 * be + C158297 * C216041) / q - C216344;
    const double C159406 =
        C216354 - (C164702 * be + C159823 * C216041) / q - C216345;
    const double C159438 = (3 * C159437) / C143578 -
                           (C164717 * be + C159895 * C216041) / q - C216346;
    const double C159985 = (2 * C158589) / q -
                           (C165003 * be + C158574 * C216041) / q - C215955 / q;
    const double C160747 =
        C160505 / q - (C165092 * be + C158881 * C216041) / q - C216348;
    const double C160824 = -(C165107 * be + C160823 * C216041 + C215884) / q;
    const double C160825 =
        C215872 - (C165122 * be + C161218 * C216041) / q - C216349;
    const double C160857 = -(C165137 * be + C160856 * C216041 + C215885) / q;
    const double C160858 =
        C215873 - (C165152 * be + C161248 * C216041) / q - C216350;
    const double C161309 =
        C160601 / q - (C165457 * be + C159030 * C216041) / q - C216351;
    const double C161385 = -(C165472 * be + C161113 * C216041 + C215909) / q;
    const double C161386 =
        C215889 - (C165487 * be + C161818 * C216041) / q - C216352;
    const double C161418 = -(C165502 * be + C161417 * C216041 + C215912) / q;
    const double C161419 =
        C215890 - (C165517 * be + C161862 * C216041) / q - C216353;
    const double C161966 =
        C215997 - (C165803 * be + C159251 * C216041) / q - C216359;
    const double C162632 =
        C162457 / q - (C165893 * be + C159704 * C216041) / q - C216355;
    const double C162709 = -(C165924 * be + C162585 * C216041 + C215934) / q;
    const double C162710 =
        C215928 - (C165939 * be + C163115 * C216041) / q - C216356;
    const double C162742 = -(C165954 * be + C162741 * C216041 + C215936) / q;
    const double C162743 =
        C215929 - (C165969 * be + C163159 * C216041) / q - C216357;
    const double C163235 =
        C216003 - (C166270 * be + C159924 * C216041) / q - C216358;
    const double C163867 = (7 * C157833) / C143578 -
                           (C166316 * be + C163898 * C216041) / q -
                           (C166320 * p) / q;
    const double C164021 = (3 * C158487) / q -
                           (C166390 * be + C163959 * C216041) / q -
                           (C166394 * p) / q;
    const double C164037 = (3 * C158545) / q -
                           (C166406 * be + C164005 * C216041) / q -
                           (C166410 * p) / q;
    const double C164053 = (5 * C158574) / C143578 -
                           (C166422 * be + C164294 * C216041) / q -
                           (C166426 * p) / q;
    const double C164310 = (5 * C158049) / C143578 -
                           (C166587 * be + C164068 * C216041) / q - C216368;
    const double C164371 =
        C216379 - (C166602 * be + C164098 * C216041) / q - C216372;
    const double C164387 =
        (2 * C159222) / q - (C166617 * be + C164128 * C216041) / q - C216373;
    const double C164403 = (3 * C159251) / C143578 -
                           (C166632 * be + C164643 * C216041) / q - C216374;
    const double C164659 = (5 * C158297) / C143578 -
                           (C166782 * be + C164189 * C216041) / q - C216369;
    const double C164736 =
        (2 * C159823) / q - (C166825 * be + C164204 * C216041) / q - C216376;
    const double C164752 =
        C216389 - (C166840 * be + C164234 * C216041) / q - C216377;
    const double C164768 = (3 * C159924) / C143578 -
                           (C166855 * be + C164991 * C216041) / q - C216378;
    const double C165050 =
        C216384 - (C167000 * be + C164538 * C216041) / q - C216371;
    const double C165080 = (3 * C158881) / C143578 -
                           (C167015 * be + C164418 * C216041) / q - C216370;
    const double C165171 =
        C161218 / q - (C167030 * be + C164448 * C216041) / q - C216381;
    const double C165187 =
        C216030 - (C167045 * be + C164478 * C216041) / q - C216382;
    const double C165203 = -(C167060 * be + C161263 * C216041 + C215988) / q;
    const double C165204 =
        C215981 - (C167075 * be + C165445 * C216041) / q - C216383;
    const double C165536 =
        C161818 / q - (C167239 * be + C164553 * C216041) / q - C216386;
    const double C165552 =
        C161862 / q - (C167254 * be + C164583 * C216041) / q - C216387;
    const double C165568 = -(C167269 * be + C161891 * C216041 + C215998) / q;
    const double C165569 =
        C215991 - (C167284 * be + C165791 * C216041) / q - C216388;
    const double C165850 = -(C167415 * be + C161098 * C216041 + C215984) / q;
    const double C165851 =
        C215986 - (C167430 * be + C165340 * C216041) / q - C216380;
    const double C165881 = (3 * C159704) / C143578 -
                           (C167445 * be + C164886 * C216041) / q - C216375;
    const double C165988 =
        C216040 - (C167488 * be + C164901 * C216041) / q - C216390;
    const double C166004 =
        C163159 / q - (C167503 * be + C164931 * C216041) / q - C216391;
    const double C166020 = -(C167518 * be + C163174 * C216041 + C216002) / q;
    const double C166021 =
        C216001 - (C167533 * be + C166258 * C216041) / q - C216392;
    const double C166303 = -(C167678 * be + C161713 * C216041 + C215993) / q;
    const double C166304 =
        C215995 - (C167693 * be + C165686 * C216041) / q - C216385;
    const double C167756 =
        (2 * C167819) / q - (C167803 * C216041) / q - (C181656 * p) / q;
    const double C167772 =
        (3 * C167835) / C143578 - (C167819 * C216041) / q - (C167803 * p) / q;
    const double C167788 =
        C181700 / q - (C167835 * C216041) / q - (C167819 * p) / q;
    const double C167804 =
        (5 * C167803) / C143578 - (C181656 * C216041) / q - (C181729 * p) / q;
    const double C167834 =
        C216965 - (C181700 * C216041) / q - (C167835 * p) / q;
    const double C169123 = C217008 - (C169156 * C216041) / q - C216973 / q;
    const double C169155 = C217010 - (C179901 * C216041) / q - C216975 / q;
    const double C169157 =
        (3 * C169156) / C143578 - (C170936 * C216041) / q - C216971 / q;
    const double C170037 = C217043 - (C170070 * C216041) / q - C216987 / q;
    const double C170069 = C217045 - (C180778 * C216041) / q - C216989 / q;
    const double C170071 =
        (3 * C170070) / C143578 - (C171385 * C216041) / q - C216985 / q;
    const double C170937 =
        (2 * C170936) / q - (C181787 * C216041) / q - C217000 / q;
    const double C171386 =
        (2 * C171385) / q - (C181832 * C216041) / q - C217002 / q;
    const double C171817 = C217075 - (C171833 * C216041) / q - C217005 / q;
    const double C171832 = C216961 - (C180342 * C216041) / q - C217006 / q;
    const double C171834 =
        (3 * C171833) / C143578 - (C182482 * C216041) / q - C217004 / q;
    const double C172293 = -(C172323 * C216041 + C217037) / q;
    const double C173169 = -(C173200 * C216041 + C217077) / q;
    const double C173185 = -(C173216 * C216041 + C217035) / q;
    const double C174077 = -(C174108 * C216041 + C217078) / q;
    const double C174093 = -(C174124 * C216041 + C217038) / q;
    const double C175869 = -(C175884 * C216041 + C217083) / q;
    const double C176342 = -(C176372 * C216041 + C217069) / q;
    const double C177198 = -(C177213 * C216041 + C217064) / q;
    const double C177651 = -(C177682 * C216041 + C217138) / q;
    const double C177667 = -(C177698 * C216041 + C217067) / q;
    const double C179441 = -(C179456 * C216041 + C217140) / q;
    const double C179900 = -(C182597 * C216041 + C217001) / q;
    const double C180341 = -(C181219 * C216041 + C217040) / q;
    const double C180777 = -(C183235 * C216041 + C217003) / q;
    const double C181671 =
        (3 * C181656) / q - (C181729 * C216041) / q - (C187719 * p) / q;
    const double C181699 = -(C181743 * C216041 + C181700 * p) / q;
    const double C181788 =
        (5 * C181787) / C143578 - (C182378 * C216041) / q - C217159 / q;
    const double C181833 =
        (5 * C181832) / C143578 - (C182438 * C216041) / q - C217160 / q;
    const double C183854 =
        (2 * C182482) / q - (C182467 * C216041) / q - C217172 / q;
    const double C184678 = -(C184677 * C216041 + C217101) / q;
    const double C184709 = -(C184708 * C216041 + C217102) / q;
    const double C185234 = -(C184969 * C216041 + C217126) / q;
    const double C185265 = -(C185264 * C216041 + C217129) / q;
    const double C186542 = -(C186426 * C216041 + C217151) / q;
    const double C186573 = -(C186572 * C216041 + C217153) / q;
    const double C187690 =
        (7 * C181729) / C143578 - (C187719 * C216041) / q - (C190117 * p) / q;
    const double C187840 =
        (3 * C182378) / q - (C187780 * C216041) / q - (C190190 * p) / q;
    const double C187855 =
        (3 * C182438) / q - (C187825 * C216041) / q - (C190205 * p) / q;
    const double C187870 =
        (5 * C182467) / C143578 - (C188115 * C216041) / q - (C190220 * p) / q;
    const double C189008 = -(C185120 * C216041 + C217205) / q;
    const double C189370 = -(C185743 * C216041 + C217215) / q;
    const double C189654 = -(C184954 * C216041 + C217201) / q;
    const double C189816 = -(C187010 * C216041 + C217219) / q;
    const double C190101 = -(C185564 * C216041 + C217210) / q;
    const double C191530 =
        (2 * C191593) / q - (C191577 * C216041) / q - (C205415 * p) / q;
    const double C191546 =
        (3 * C191609) / C143578 - (C191593 * C216041) / q - (C191577 * p) / q;
    const double C191562 =
        C205459 / q - (C191609 * C216041) / q - (C191593 * p) / q;
    const double C191578 =
        (5 * C191577) / C143578 - (C205415 * C216041) / q - (C205488 * p) / q;
    const double C191608 =
        C218179 - (C205459 * C216041) / q - (C191609 * p) / q;
    const double C192896 = C218222 - (C192929 * C216041) / q - C218187 / q;
    const double C192928 = C218224 - (C203660 * C216041) / q - C218189 / q;
    const double C192930 =
        (3 * C192929) / C143578 - (C194707 * C216041) / q - C218185 / q;
    const double C193809 = C218257 - (C193842 * C216041) / q - C218201 / q;
    const double C193841 = C218259 - (C204537 * C216041) / q - C218203 / q;
    const double C193843 =
        (3 * C193842) / C143578 - (C195155 * C216041) / q - C218199 / q;
    const double C194708 =
        (2 * C194707) / q - (C205546 * C216041) / q - C218214 / q;
    const double C195156 =
        (2 * C195155) / q - (C205591 * C216041) / q - C218216 / q;
    const double C195586 = C218289 - (C195602 * C216041) / q - C218219 / q;
    const double C195601 = C218175 - (C204101 * C216041) / q - C218220 / q;
    const double C195603 =
        (3 * C195602) / C143578 - (C206235 * C216041) / q - C218218 / q;
    const double C196061 = -(C196091 * C216041 + C218251) / q;
    const double C196937 = -(C196968 * C216041 + C218291) / q;
    const double C196953 = -(C196984 * C216041 + C218249) / q;
    const double C197844 = -(C197875 * C216041 + C218292) / q;
    const double C197860 = -(C197891 * C216041 + C218252) / q;
    const double C199633 = -(C199648 * C216041 + C218297) / q;
    const double C200105 = -(C200135 * C216041 + C218283) / q;
    const double C200961 = -(C200976 * C216041 + C218278) / q;
    const double C201414 = -(C201445 * C216041 + C218352) / q;
    const double C201430 = -(C201461 * C216041 + C218281) / q;
    const double C203201 = -(C203216 * C216041 + C218354) / q;
    const double C203659 = -(C206350 * C216041 + C218215) / q;
    const double C204100 = -(C204978 * C216041 + C218254) / q;
    const double C204536 = -(C206984 * C216041 + C218217) / q;
    const double C205430 =
        (3 * C205415) / q - (C205488 * C216041) / q - (C211432 * p) / q;
    const double C205458 = -(C205502 * C216041 + C205459 * p) / q;
    const double C205547 =
        (5 * C205546) / C143578 - (C206133 * C216041) / q - C218373 / q;
    const double C205592 =
        (5 * C205591) / C143578 - (C206191 * C216041) / q - C218374 / q;
    const double C207599 =
        (2 * C206235) / q - (C206220 * C216041) / q - C218386 / q;
    const double C208418 = -(C208417 * C216041 + C218315) / q;
    const double C208449 = -(C208448 * C216041 + C218316) / q;
    const double C208969 = -(C208703 * C216041 + C218340) / q;
    const double C209000 = -(C208999 * C216041 + C218343) / q;
    const double C210266 = -(C210150 * C216041 + C218365) / q;
    const double C210297 = -(C210296 * C216041 + C218367) / q;
    const double C211403 =
        (7 * C205488) / C143578 - (C211432 * C216041) / q - (C213831 * p) / q;
    const double C211553 =
        (3 * C206133) / q - (C211491 * C216041) / q - (C213904 * p) / q;
    const double C211568 =
        (3 * C206191) / q - (C211538 * C216041) / q - (C213919 * p) / q;
    const double C211583 =
        (5 * C206220) / C143578 - (C211829 * C216041) / q - (C213934 * p) / q;
    const double C212722 = -(C208855 * C216041 + C218419) / q;
    const double C213084 = -(C209473 * C216041 + C218429) / q;
    const double C213368 = -(C208688 * C216041 + C218415) / q;
    const double C213529 = -(C210730 * C216041 + C218433) / q;
    const double C213815 = -(C209293 * C216041 + C218424) / q;
    const double C189938 =
        C187010 / q - (C191378 * be + C189537 * C216043) / q - C217615;
    const double C189567 =
        (2 * C185714) / q - (C189492 * C216044) / q - C217614;
    const double C189922 =
        C217217 - (C167533 * be + C190058 * C216043) / q - C217614;
    const double C189552 =
        (3 * C185669) / C143578 - (C189597 * C216044) / q - C217613;
    const double C189905 =
        C217257 - (C167693 * be + C189492 * C216043) / q - C217613;
    const double C189582 = C217612 - (C189507 * C216044) / q - C217615;
    const double C189240 = C185120 / q - (C189165 * C216044) / q - C217611;
    const double C189477 =
        C217612 - (C191120 * be + C189195 * C216043) / q - C217611;
    const double C189225 = C217247 - (C189150 * C216044) / q - C217610;
    const double C189461 = (3 * C185714) / C143578 -
                           (C167284 * be + C189597 * C216043) / q - C217610;
    const double C189210 = C217196 - (C189255 * C216044) / q - C217609;
    const double C189445 =
        (2 * C185669) / q - (C167430 * be + C189150 * C216043) / q - C217609;
    const double C189180 =
        (3 * C184954) / C143578 - (C189195 * C216044) / q - C217608;
    const double C189847 = (3 * C185564) / C143578 -
                           (C191321 * be + C189507 * C216043) / q - C217608;
    const double C189072 = C217199 - (C189087 * C216044) / q - C217607;
    const double C189401 = (5 * C184954) / C143578 -
                           (C191077 * be + C189165 * C216043) / q - C217607;
    const double C188792 =
        (2 * C183797) / q - (C188717 * C216044) / q - C217606;
    const double C189817 = C217218 - (C190058 * C216041) / q - C217606;
    const double C189801 = C186995 / q - (C188747 * C216041) / q - C217605;
    const double C188762 =
        (3 * C183695) / C143578 - (C188807 * C216044) / q - C217604;
    const double C189786 = C217257 - (C188717 * C216041) / q - C217604;
    const double C188777 = C217603 - (C188702 * C216044) / q - C217605;
    const double C188446 = C183134 / q - (C188371 * C216044) / q - C217602;
    const double C188687 =
        C183797 / q - (C167254 * be + C188401 * C216043) / q - C217602;
    const double C189371 = C217208 - (C189597 * C216041) / q - C217602;
    const double C188431 = C183105 / q - (C188356 * C216044) / q - C217601;
    const double C188671 =
        C217188 - (C166855 * be + C188807 * C216043) / q - C217601;
    const double C189355 = C185714 / q - (C188401 * C216041) / q - C217601;
    const double C188416 = C217174 - (C188461 * C216044) / q - C217600;
    const double C188654 =
        C183695 / q - (C167000 * be + C188356 * C216043) / q - C217600;
    const double C189340 = C185669 / q - (C188371 * C216041) / q - C217600;
    const double C189715 =
        C217192 - (C167488 * be + C188717 * C216043) / q - C217599;
    const double C190102 = C217212 - (C189492 * C216041) / q - C217599;
    const double C188386 = C217598 - (C188401 * C216044) / q - C217599;
    const double C188341 =
        (2 * C183134) / q - (C167045 * be + C188293 * C216043) / q - C217597;
    const double C189009 = C217198 - (C189255 * C216041) / q - C217597;
    const double C188325 = (3 * C183105) / C143578 -
                           (C166632 * be + C188461 * C216043) / q - C217596;
    const double C188993 = C217247 - (C188293 * C216041) / q - C217596;
    const double C188978 = C185074 / q - (C188263 * C216041) / q - C217595;
    const double C188278 = C217178 - (C188293 * C216044) / q - C217594;
    const double C188610 =
        C217598 - (C167239 * be + C188371 * C216043) / q - C217594;
    const double C189655 = C217203 - (C189150 * C216041) / q - C217594;
    const double C188309 =
        C217593 - (C167015 * be + C188232 * C216043) / q - C217595;
    const double C188100 = C217227 - (C188025 * C216044) / q - C217592;
    const double C188580 =
        (3 * C183797) / C143578 - (C188807 * C216041) / q - C217592;
    const double C188085 = C182438 / q - (C188010 * C216044) / q - C217591;
    const double C188565 = C217603 - (C188055 * C216041) / q - C217591;
    const double C188070 = C217161 - (C188115 * C216044) / q - C217590;
    const double C188550 =
        (2 * C183695) / q - (C188025 * C216041) / q - C217590;
    const double C188040 =
        (3 * C182188) / C143578 - (C188055 * C216044) / q - C217589;
    const double C189684 =
        (3 * C183576) / C143578 - (C188702 * C216041) / q - C217589;
    const double C187995 =
        C217227 - (C166617 * be + C187946 * C216043) / q - C217588;
    const double C188217 =
        (3 * C183134) / C143578 - (C188461 * C216041) / q - C217588;
    const double C187979 =
        C217162 - (C166422 * be + C188115 * C216043) / q - C217587;
    const double C188202 =
        (2 * C183105) / q - (C187946 * C216041) / q - C217587;
    const double C187962 =
        C182378 / q - (C166587 * be + C187885 * C216043) / q - C217586;
    const double C188187 = C217593 - (C187916 * C216041) / q - C217586;
    const double C187931 = C217165 - (C187946 * C216044) / q - C217585;
    const double C188507 =
        C217170 - (C166825 * be + C188025 * C216043) / q - C217585;
    const double C188864 = C217598 - (C188356 * C216041) / q - C217585;
    const double C187901 = (3 * C181938) / C143578 -
                           (C166602 * be + C187916 * C216043) / q - C217584;
    const double C188893 =
        (3 * C182761) / C143578 - (C188232 * C216041) / q - C217584;
    const double C187796 = C217158 - (C187825 * C216044) / q - C217583;
    const double C188476 =
        (5 * C182188) / C143578 - (C188010 * C216041) / q - C217583;
    const double C187750 =
        C217158 - (C166390 * be + C187780 * C216043) / q - C217582;
    const double C188130 =
        (5 * C181938) / C143578 - (C187885 * C216041) / q - C217582;
    const double C185699 = C217214 - (C185669 * C216044) / q - C217581;
    const double C187111 =
        C217220 - (C165517 * be + C185714 * C216043) / q - C217581;
    const double C185609 =
        (2 * C185264) / q - (C185564 * C216044) / q - C217580;
    const double C186755 =
        C217146 - (C167518 * be + C187010 * C216043) / q - C217580;
    const double C185579 =
        (3 * C184969) / C143578 - (C185743 * C216044) / q - C217579;
    const double C186723 =
        C186426 / q - (C167678 * be + C185564 * C216043) / q - C217579;
    const double C186635 =
        C217143 - (C165939 * be + C186950 * C216043) / q - C217578;
    const double C185535 = C217577 - (C185714 * C216044) / q - C217578;
    const double C185014 = C184708 / q - (C184954 * C216044) / q - C217576;
    const double C185474 = (3 * C185264) / C143578 -
                           (C167269 * be + C185743 * C216043) / q - C217576;
    const double C184984 = C217089 - (C185120 * C216044) / q - C217575;
    const double C185443 =
        (2 * C184969) / q - (C167415 * be + C184954 * C216043) / q - C217575;
    const double C184925 = C217088 - (C185105 * C216044) / q - C217574;
    const double C185327 =
        C217577 - (C165487 * be + C185669 * C216043) / q - C217574;
    const double C183739 = C217194 - (C183695 * C216044) / q - C217572;
    const double C187067 = C217220 - (C183797 * C216041) / q - C217572;
    const double C183621 =
        (2 * C183308) / q - (C183576 * C216044) / q - C217571;
    const double C186574 = C217146 - (C186995 * C216041) / q - C217571;
    const double C186543 = C217145 - (C186950 * C216041) / q - C217570;
    const double C183547 =
        (3 * C182217) / C143578 - (C183768 * C216044) / q - C217569;
    const double C186470 = C186300 / q - (C183576 * C216041) / q - C217569;
    const double C183591 = C217568 - (C183797 * C216044) / q - C217570;
    const double C183898 =
        C217194 - (C164352 * be + C183105 * C216043) / q - C217573;
    const double C185814 = C217214 - (C183134 * C216041) / q - C217573;
    const double C182972 = C182670 / q - (C182912 * C216044) / q - C217567;
    const double C183487 =
        C217048 - (C166270 * be + C183797 * C216043) / q - C217567;
    const double C185266 = C217107 - (C185714 * C216041) / q - C217567;
    const double C182942 = C217011 - (C183134 * C216044) / q - C217566;
    const double C183457 =
        C182927 / q - (C165457 * be + C182912 * C216043) / q - C217566;
    const double C185235 = C217106 - (C185669 * C216041) / q - C217566;
    const double C182883 = C217007 - (C183105 * C216044) / q - C217565;
    const double C183370 =
        C217042 - (C164702 * be + C183695 * C216043) / q - C217565;
    const double C185163 = C184463 / q - (C182912 * C216041) / q - C217565;
    const double C184710 = C217090 - (C185105 * C216041) / q - C217564;
    const double C182792 =
        (2 * C182640) / q - (C165092 * be + C182761 * C216043) / q - C217563;
    const double C184679 = C217089 - (C185074 * C216041) / q - C217563;
    const double C182732 = (3 * C181967) / C143578 -
                           (C164337 * be + C183046 * C216043) / q - C217562;
    const double C184606 = C184366 / q - (C182761 * C216041) / q - C217562;
    const double C182823 =
        C217561 - (C165803 * be + C183134 * C216043) / q - C217564;
    const double C182290 = C181832 / q - (C182188 * C216044) / q - C217560;
    const double C183309 =
        (3 * C183308) / C143578 - (C183768 * C216041) / q - C217560;
    const double C182260 = C216967 - (C182467 * C216044) / q - C217559;
    const double C183279 = C217568 - (C183695 * C216041) / q - C217559;
    const double C182145 = C216963 - (C182438 * C216044) / q - C217558;
    const double C183178 =
        (2 * C182217) / q - (C182188 * C216041) / q - C217558;
    const double C182057 =
        C216969 - (C165003 * be + C182467 * C216043) / q - C217557;
    const double C182671 = C217561 - (C183105 * C216041) / q - C217557;
    const double C182026 =
        C181787 / q - (C164322 * be + C181938 * C216043) / q - C217556;
    const double C182641 =
        (3 * C182640) / C143578 - (C183046 * C216041) / q - C217556;
    const double C181894 =
        C216963 - (C163955 * be + C182378 * C216043) / q - C217555;
    const double C182540 =
        (2 * C181967) / q - (C181938 * C216041) / q - C217555;
    const double C174932 = C175884 / q - (C184969 * C216044) / q - C217551;
    const double C179588 =
        C179456 / q - (C165502 * be + C185264 * C216043) / q - C217551;
    const double C174902 = C217128 - (C184463 * C216044) / q - C217550;
    const double C179141 =
        C216905 - (C163533 * be + C186383 * C216043) / q - C217550;
    const double C174843 =
        C217125 - (C161336 * be + C184463 * C216043) / q - C217548;
    const double C175253 = C216779 - (C184534 * C216044) / q - C217548;
    const double C177948 =
        C216869 - (C165924 * be + C186426 * C216043) / q - C217543;
    const double C174639 = C174124 / q - (C174108 * C216044) / q - C217542;
    const double C177964 =
        C216870 - (C163518 * be + C179456 * C216043) / q - C217542;
    const double C174640 = C217538 - (C185264 * C216044) / q - C217543;
    const double C173743 = C216695 - (C175884 * C216044) / q - C217532;
    const double C174374 =
        C177213 / q - (C161290 * be + C174108 * C216043) / q - C217532;
    const double C173728 = C216694 - (C184708 * C216044) / q - C217531;
    const double C174375 =
        C217538 - (C165472 * be + C184969 * C216043) / q - C217531;
    const double C172840 = C216648 - (C174124 * C216044) / q - C217529;
    const double C174373 =
        C216811 - (C162552 * be + C177213 * C216043) / q - C217529;
    const double C172824 = C216647 - (C175439 * C216044) / q - C217528;
    const double C176613 =
        C216810 - (C162567 * be + C178560 * C216043) / q - C217528;
    const double C170879 = C217070 - (C182927 * C216044) / q - C217521;
    const double C179457 = C216915 - (C186383 * C216041) / q - C217521;
    const double C170849 = C171385 / q - (C182217 * C216044) / q - C217520;
    const double C179010 = C179009 / q - (C183308 * C216041) / q - C217520;
    const double C171199 = C216599 - (C182482 * C216044) / q - C217523;
    const double C178561 = C217125 - (C182927 * C216041) / q - C217523;
    const double C177683 = C216869 - (C186300 * C216041) / q - C217516;
    const double C170583 = C170070 / q - (C170053 * C216044) / q - C217515;
    const double C177699 = C216870 - (C179009 * C216041) / q - C217515;
    const double C170584 = C217506 - (C183308 * C216044) / q - C217516;
    const double C171965 =
        C217070 - (C162107 * be + C182670 * C216043) / q - C217527;
    const double C175885 = C216800 - (C184534 * C216041) / q - C217527;
    const double C171517 =
        C216616 - (C160299 * be + C182482 * C216043) / q - C217525;
    const double C175440 = C217128 - (C182670 * C216041) / q - C217525;
    const double C169873 =
        C170936 / q - (C158692 * be + C181967 * C216043) / q - C217505;
    const double C174991 = C174990 / q - (C182640 * C216041) / q - C217505;
    const double C169683 = C216478 - (C171833 * C216044) / q - C217498;
    const double C177214 = C216855 - (C178560 * C216041) / q - C217498;
    const double C169668 = C216476 - (C182670 * C216044) / q - C217497;
    const double C170320 =
        C216549 - (C163186 * be + C182927 * C216043) / q - C217497;
    const double C174109 = C216725 - (C184463 * C216041) / q - C217497;
    const double C170336 =
        C216551 - (C160269 * be + C171833 * C216043) / q - C217510;
    const double C174125 = C216726 - (C175439 * C216041) / q - C217510;
    const double C173201 = C216694 - (C184366 * C216041) / q - C217491;
    const double C169405 =
        C169156 / q - (C158631 * be + C169139 * C216043) / q - C217490;
    const double C173217 = C216695 - (C174990 * C216041) / q - C217490;
    const double C169406 =
        C217489 - (C161917 * be + C182640 * C216043) / q - C217491;
    const double C168626 = C216410 - (C170070 * C216044) / q - C217485;
    const double C170052 = C216811 - (C176357 * C216041) / q - C217485;
    const double C168610 = C216408 - (C171385 * C216044) / q - C217484;
    const double C170021 = C176357 / q - (C170053 * C216041) / q - C217484;
    const double C168594 = C216407 - (C181832 * C216044) / q - C217483;
    const double C170054 = C217506 - (C182217 * C216041) / q - C217483;
    const double C168231 =
        C216410 - (C158662 * be + C169156 * C216043) / q - C217478;
    const double C169138 = C216648 - (C172308 * C216041) / q - C217478;
    const double C168215 =
        C216408 - (C158723 * be + C170936 * C216043) / q - C217477;
    const double C169107 = C172308 / q - (C169139 * C216041) / q - C217477;
    const double C168199 =
        C216407 - (C159936 * be + C181787 * C216043) / q - C217476;
    const double C169140 = C217489 - (C181967 * C216041) / q - C217476;
    const double C213647 = C210730 / q - (C213248 * C216043) / q - C218829;
    const double C213280 =
        (2 * C209444) / q - (C167693 * be + C213202 * C216044) / q - C218828;
    const double C213632 = C218431 - (C213772 * C216043) / q - C218828;
    const double C213264 = (3 * C209400) / C143578 -
                           (C167284 * be + C213311 * C216044) / q - C218827;
    const double C213616 = C218471 - (C213202 * C216043) / q - C218827;
    const double C213296 =
        C218826 - (C191321 * be + C213217 * C216044) / q - C218829;
    const double C212954 =
        C208855 / q - (C191077 * be + C212875 * C216044) / q - C218825;
    const double C213187 = C218826 - (C212906 * C216043) / q - C218825;
    const double C212938 =
        C218461 - (C167430 * be + C212860 * C216044) / q - C218824;
    const double C213172 =
        (3 * C209444) / C143578 - (C213311 * C216043) / q - C218824;
    const double C212922 =
        C218410 - (C167075 * be + C212969 * C216044) / q - C218823;
    const double C213157 =
        (2 * C209400) / q - (C212860 * C216043) / q - C218823;
    const double C212891 = (3 * C208688) / C143578 -
                           (C191120 * be + C212906 * C216044) / q - C218822;
    const double C213559 =
        (3 * C209293) / C143578 - (C213217 * C216043) / q - C218822;
    const double C212785 =
        C218413 - (C190945 * be + C212800 * C216044) / q - C218821;
    const double C213114 =
        (5 * C208688) / C143578 - (C212875 * C216043) / q - C218821;
    const double C212506 =
        (2 * C207542) / q - (C167488 * be + C212427 * C216044) / q - C218820;
    const double C213530 = C218432 - (C213772 * C216041) / q - C218820;
    const double C213514 = C210715 / q - (C212458 * C216041) / q - C218819;
    const double C212474 = (3 * C207441) / C143578 -
                           (C166855 * be + C212521 * C216044) / q - C218818;
    const double C213499 = C218471 - (C212427 * C216041) / q - C218818;
    const double C212490 =
        C218817 - (C167445 * be + C212412 * C216044) / q - C218819;
    const double C212161 =
        C206883 / q - (C167239 * be + C212082 * C216044) / q - C218816;
    const double C212397 = C207542 / q - (C212113 * C216043) / q - C218816;
    const double C213085 = C218422 - (C213311 * C216041) / q - C218816;
    const double C212145 =
        C206854 / q - (C167000 * be + C212067 * C216044) / q - C218815;
    const double C212382 = C218402 - (C212521 * C216043) / q - C218815;
    const double C213069 = C209444 / q - (C212113 * C216041) / q - C218815;
    const double C212129 =
        C218388 - (C166632 * be + C212176 * C216044) / q - C218814;
    const double C212366 = C207441 / q - (C212067 * C216043) / q - C218814;
    const double C213054 = C209400 / q - (C212082 * C216041) / q - C218814;
    const double C213428 = C218406 - (C212427 * C216043) / q - C218813;
    const double C213816 = C218426 - (C213202 * C216041) / q - C218813;
    const double C212098 =
        C218812 - (C167254 * be + C212113 * C216044) / q - C218813;
    const double C212052 =
        (2 * C206883) / q - (C212007 * C216043) / q - C218811;
    const double C212723 = C218412 - (C212969 * C216041) / q - C218811;
    const double C212037 =
        (3 * C206854) / C143578 - (C212176 * C216043) / q - C218810;
    const double C212707 = C218461 - (C212007 * C216041) / q - C218810;
    const double C212692 = C208810 / q - (C211976 * C216041) / q - C218809;
    const double C211992 =
        C218392 - (C167045 * be + C212007 * C216044) / q - C218808;
    const double C212323 = C218812 - (C212082 * C216043) / q - C218808;
    const double C213369 = C218417 - (C212860 * C216041) / q - C218808;
    const double C212022 = C218807 - (C211946 * C216043) / q - C218809;
    const double C211814 =
        C218441 - (C166825 * be + C211735 * C216044) / q - C218806;
    const double C212294 =
        (3 * C207542) / C143578 - (C212521 * C216041) / q - C218806;
    const double C211798 =
        C206191 / q - (C166782 * be + C211720 * C216044) / q - C218805;
    const double C212279 = C218817 - (C211766 * C216041) / q - C218805;
    const double C211782 =
        C218375 - (C166422 * be + C211829 * C216044) / q - C218804;
    const double C212264 =
        (2 * C207441) / q - (C211735 * C216041) / q - C218804;
    const double C211751 = (3 * C205943) / C143578 -
                           (C166840 * be + C211766 * C216044) / q - C218803;
    const double C213398 =
        (3 * C207322) / C143578 - (C212412 * C216041) / q - C218803;
    const double C211705 = C218441 - (C211659 * C216043) / q - C218802;
    const double C211931 =
        (3 * C206883) / C143578 - (C212176 * C216041) / q - C218802;
    const double C211690 = C218376 - (C211829 * C216043) / q - C218801;
    const double C211916 =
        (2 * C206854) / q - (C211659 * C216041) / q - C218801;
    const double C211674 = C206133 / q - (C211598 * C216043) / q - C218800;
    const double C211901 = C218807 - (C211628 * C216041) / q - C218800;
    const double C211644 =
        C218379 - (C166617 * be + C211659 * C216044) / q - C218799;
    const double C212221 = C218384 - (C211735 * C216043) / q - C218799;
    const double C212578 = C218812 - (C212067 * C216041) / q - C218799;
    const double C211613 =
        (3 * C205695) / C143578 - (C211628 * C216043) / q - C218798;
    const double C212607 =
        (3 * C206513) / C143578 - (C211946 * C216041) / q - C218798;
    const double C211508 =
        C218372 - (C166406 * be + C211538 * C216044) / q - C218797;
    const double C212191 =
        (5 * C205943) / C143578 - (C211720 * C216041) / q - C218797;
    const double C211462 = C218372 - (C211491 * C216043) / q - C218796;
    const double C211844 =
        (5 * C205695) / C143578 - (C211598 * C216041) / q - C218796;
    const double C209429 =
        C218428 - (C165487 * be + C209400 * C216044) / q - C218795;
    const double C210830 = C218434 - (C209444 * C216043) / q - C218795;
    const double C209340 =
        (2 * C208999) / q - (C167678 * be + C209293 * C216044) / q - C218794;
    const double C210474 = C218360 - (C210730 * C216043) / q - C218794;
    const double C209309 = (3 * C208703) / C143578 -
                           (C167269 * be + C209473 * C216044) / q - C218793;
    const double C210444 = C210150 / q - (C209293 * C216043) / q - C218793;
    const double C210358 = C218357 - (C210671 * C216043) / q - C218792;
    const double C209264 =
        C218791 - (C165517 * be + C209444 * C216044) / q - C218792;
    const double C208750 =
        C208448 / q - (C167415 * be + C208688 * C216044) / q - C218790;
    const double C209204 =
        (3 * C208999) / C143578 - (C209473 * C216043) / q - C218790;
    const double C208719 =
        C218303 - (C167060 * be + C208855 * C216044) / q - C218789;
    const double C209175 =
        (2 * C208703) / q - (C208688 * C216043) / q - C218789;
    const double C208659 =
        C218302 - (C165152 * be + C208840 * C216044) / q - C218788;
    const double C209061 = C218791 - (C209400 * C216043) / q - C218788;
    const double C207484 =
        C218408 - (C164702 * be + C207441 * C216044) / q - C218786;
    const double C210787 = C218434 - (C207542 * C216041) / q - C218786;
    const double C207367 =
        (2 * C207057) / q - (C165893 * be + C207322 * C216044) / q - C218785;
    const double C210298 = C218360 - (C210715 * C216041) / q - C218785;
    const double C210267 = C218359 - (C210671 * C216041) / q - C218784;
    const double C207293 = (3 * C205972) / C143578 -
                           (C164717 * be + C207513 * C216044) / q - C218783;
    const double C210194 = C210024 / q - (C207322 * C216041) / q - C218783;
    const double C207337 =
        C218782 - (C166270 * be + C207542 * C216044) / q - C218784;
    const double C207642 = C218408 - (C206854 * C216043) / q - C218787;
    const double C209544 = C218428 - (C206883 * C216041) / q - C218787;
    const double C206722 =
        C206423 / q - (C165457 * be + C206662 * C216044) / q - C218781;
    const double C207233 = C218262 - (C207542 * C216043) / q - C218781;
    const double C209001 = C218321 - (C209444 * C216041) / q - C218781;
    const double C206692 =
        C218225 - (C165803 * be + C206883 * C216044) / q - C218780;
    const double C207204 = C206677 / q - (C206662 * C216043) / q - C218780;
    const double C208970 = C218320 - (C209400 * C216041) / q - C218780;
    const double C206633 =
        C218221 - (C164352 * be + C206854 * C216044) / q - C218779;
    const double C207118 = C218256 - (C207441 * C216043) / q - C218779;
    const double C208898 = C208203 / q - (C206662 * C216041) / q - C218779;
    const double C208450 = C218304 - (C208840 * C216041) / q - C218778;
    const double C206543 =
        (2 * C206393) / q - (C206513 * C216043) / q - C218777;
    const double C208419 = C218303 - (C208810 * C216041) / q - C218777;
    const double C206484 =
        (3 * C205724) / C143578 - (C206796 * C216043) / q - C218776;
    const double C208346 = C208107 / q - (C206513 * C216041) / q - C218776;
    const double C206573 = C218775 - (C206883 * C216043) / q - C218778;
    const double C206045 =
        C205591 / q - (C164671 * be + C205943 * C216044) / q - C218774;
    const double C207058 =
        (3 * C207057) / C143578 - (C207513 * C216041) / q - C218774;
    const double C206015 =
        C218181 - (C165003 * be + C206220 * C216044) / q - C218773;
    const double C207028 = C218782 - (C207441 * C216041) / q - C218773;
    const double C205900 =
        C218177 - (C164001 * be + C206191 * C216044) / q - C218772;
    const double C206927 =
        (2 * C205972) / q - (C205943 * C216041) / q - C218772;
    const double C205812 = C218183 - (C206220 * C216043) / q - C218771;
    const double C206424 = C218775 - (C206854 * C216041) / q - C218771;
    const double C205782 = C205546 / q - (C205695 * C216043) / q - C218770;
    const double C206394 =
        (3 * C206393) / C143578 - (C206796 * C216041) / q - C218770;
    const double C205652 = C218177 - (C206133 * C216043) / q - C218769;
    const double C206293 =
        (2 * C205724) / q - (C205695 * C216041) / q - C218769;
    const double C198698 =
        C199648 / q - (C165472 * be + C208703 * C216044) / q - C218765;
    const double C203347 = C203216 / q - (C208999 * C216043) / q - C218765;
    const double C198668 =
        C218342 - (C161336 * be + C208203 * C216044) / q - C218764;
    const double C202901 = C218119 - (C210107 * C216043) / q - C218764;
    const double C198609 = C218339 - (C208203 * C216043) / q - C218762;
    const double C199018 =
        C217993 - (C162237 * be + C208274 * C216044) / q - C218762;
    const double C201710 = C218083 - (C210150 * C216043) / q - C218757;
    const double C198405 =
        C197891 / q - (C161290 * be + C197875 * C216044) / q - C218756;
    const double C201726 = C218084 - (C203216 * C216043) / q - C218756;
    const double C198406 =
        C218752 - (C165502 * be + C208999 * C216044) / q - C218757;
    const double C197510 =
        C217909 - (C162222 * be + C199648 * C216044) / q - C218746;
    const double C198140 = C200976 / q - (C197875 * C216043) / q - C218746;
    const double C197495 =
        C217908 - (C165137 * be + C208448 * C216044) / q - C218745;
    const double C198141 = C218752 - (C208703 * C216043) / q - C218745;
    const double C196608 =
        C217862 - (C161321 * be + C197891 * C216044) / q - C218743;
    const double C198139 = C218025 - (C200976 * C216043) / q - C218743;
    const double C196592 =
        C217861 - (C161351 * be + C199204 * C216044) / q - C218742;
    const double C200376 = C218024 - (C202322 * C216043) / q - C218742;
    const double C194650 =
        C218284 - (C163186 * be + C206677 * C216044) / q - C218735;
    const double C203217 = C218129 - (C210107 * C216041) / q - C218735;
    const double C194620 =
        C195155 / q - (C159340 * be + C205972 * C216044) / q - C218734;
    const double C202771 = C202770 / q - (C207057 * C216041) / q - C218734;
    const double C194969 =
        C217813 - (C160299 * be + C206235 * C216044) / q - C218737;
    const double C202323 = C218339 - (C206677 * C216041) / q - C218737;
    const double C201446 = C218083 - (C210024 * C216041) / q - C218730;
    const double C194354 =
        C193842 / q - (C159279 * be + C193825 * C216044) / q - C218729;
    const double C201462 = C218084 - (C202770 * C216041) / q - C218729;
    const double C194355 =
        C218720 - (C163375 * be + C207057 * C216044) / q - C218730;
    const double C195733 = C218284 - (C206423 * C216043) / q - C218741;
    const double C199649 = C218014 - (C208274 * C216041) / q - C218741;
    const double C195286 = C217830 - (C206235 * C216043) / q - C218739;
    const double C199205 = C218342 - (C206423 * C216041) / q - C218739;
    const double C193645 = C194707 / q - (C205724 * C216043) / q - C218719;
    const double C198757 = C198756 / q - (C206393 * C216041) / q - C218719;
    const double C193455 =
        C217692 - (C160269 * be + C195602 * C216044) / q - C218712;
    const double C200977 = C218069 - (C202322 * C216041) / q - C218712;
    const double C193440 =
        C217690 - (C162107 * be + C206423 * C216044) / q - C218711;
    const double C194091 = C217763 - (C206677 * C216043) / q - C218711;
    const double C197876 = C217939 - (C208203 * C216041) / q - C218711;
    const double C194107 = C217765 - (C195602 * C216043) / q - C218724;
    const double C197892 = C217940 - (C199204 * C216041) / q - C218724;
    const double C196969 = C217908 - (C208107 * C216041) / q - C218705;
    const double C193177 = C192929 / q - (C192912 * C216043) / q - C218704;
    const double C196985 = C217909 - (C198756 * C216041) / q - C218704;
    const double C193178 = C218703 - (C206393 * C216043) / q - C218705;
    const double C192399 =
        C217624 - (C159310 * be + C193842 * C216044) / q - C218699;
    const double C193824 = C218025 - (C200120 * C216041) / q - C218699;
    const double C192383 =
        C217622 - (C159371 * be + C195155 * C216044) / q - C218698;
    const double C193793 = C200120 / q - (C193825 * C216041) / q - C218698;
    const double C192367 =
        C217621 - (C160126 * be + C205591 * C216044) / q - C218697;
    const double C193826 = C218720 - (C205972 * C216041) / q - C218697;
    const double C192004 = C217624 - (C192929 * C216043) / q - C218692;
    const double C192911 = C217862 - (C196076 * C216041) / q - C218692;
    const double C191988 = C217622 - (C194707 * C216043) / q - C218691;
    const double C192880 = C196076 / q - (C192912 * C216041) / q - C218691;
    const double C191972 = C217621 - (C205546 * C216043) / q - C218690;
    const double C192913 = C218703 - (C205724 * C216041) / q - C218690;
    const double C215777 = C144456 / C143578;
    const double C215775 = C144457 / q;
    const double C215232 = C144457 * p;
    const double C215398 = C144472 / C143578;
    const double C215404 = C144473 / q;
    const double C215233 = C144473 * p;
    const double C215323 = C144488 / C143578;
    const double C43123 = (3 * C144488) / C143578 -
                          (C144871 * be + C144472 * C216041) / q -
                          (C144456 * p) / q;
    const double C215363 = C144489 / q;
    const double C215234 = C144489 * p;
    const double C43122 = (2 * C144472) / q -
                          (C144855 * be + C144456 * C216041) / q -
                          (C144859 * p) / q;
    const double C215725 = C144890 / C143578;
    const double C215248 = C144890 / q;
    const double C215249 = C144905 * p;
    const double C215395 = C144920 / q;
    const double C215250 = C144920 * p;
    const double C215307 = C144935 / q;
    const double C215251 = C144935 * p;
    const double C215324 = C145548 * p;
    const double C215812 = C145549 / q;
    const double C215298 = C145549 * p;
    const double C215419 = C145564 / q;
    const double C215299 = C145564 * p;
    const double C215472 = C145819 * p;
    const double C215319 = C145819 / q;
    const double C215320 = C145820 * p;
    const double C215321 = C145836 / q;
    const double C144843 = -(C144890 * C216043 + C145836 * p) / q;
    const double C215322 = C145851 * p;
    const double C215365 = C146480 * p;
    const double C215364 = C146481 * p;
    const double C215634 = C146751 * p;
    const double C215378 = C146751 / q;
    const double C215379 = C146752 * p;
    const double C215380 = C146768 / q;
    const double C144441 =
        C215747 - (C144890 * C216044) / q - (C146768 * p) / q;
    const double C215381 = C146783 * p;
    const double C215857 = C147111 / q;
    const double C215393 = C147111 * p;
    const double C215718 = C148165 * p;
    const double C215423 = C148165 / q;
    const double C215582 = C148769 / q;
    const double C215457 = C148769 * p;
    const double C215471 = C148784 / C143578;
    const double C215537 = C148785 / q;
    const double C215458 = C148785 * p;
    const double C215473 = C149058 * p;
    const double C215724 = C149073 / C143578;
    const double C215474 = C149073 / q;
    const double C215574 = C149074 / C143578;
    const double C46277 =
        (3 * C148784) / C143578 - (C149074 * C216043) / q - (C149685 * p) / q;
    const double C215880 = C149686 / q;
    const double C215494 = C149686 * p;
    const double C215586 = C149701 / q;
    const double C215495 = C149701 * p;
    const double C215503 = C149954 * p;
    const double C46276 =
        (2 * C149074) / q - (C149685 * C216043) / q - (C149984 * p) / q;
    const double C215539 = C150613 * p;
    const double C215538 = C150614 * p;
    const double C215555 = C150882 * p;
    const double C215636 = C150912 * p;
    const double C215556 = C150912 / q;
    const double C215557 = C150913 * p;
    const double C215864 = C150928 * p;
    const double C215558 = C150928 / q;
    const double C215918 = C151242 / q;
    const double C215570 = C151242 * p;
    const double C215619 = C152891 * p;
    const double C215743 = C152906 / C143578;
    const double C215620 = C152906 / q;
    const double C215633 = C152907 / C143578;
    const double C215697 = C152908 / C143578;
    const double C215683 = C153181 / q;
    const double C215635 = C153181 * p;
    const double C215646 = C153494 * p;
    const double C49197 = (3 * C152907) / C143578 - (C152908 * C216044) / q +
                          C215653 - (C154249 * p) / q;
    const double C49196 = (2 * C152908) / q - (C154249 * C216044) / q +
                          C215652 - (C154250 * p) / q;
    const double C215668 = C154518 * p;
    const double C215669 = C154548 * p;
    const double C215680 = C154876 * p;
    const double C144412 =
        C215746 - (C144859 * C216044) / q - (C158254 * p) / q;
    const double C215774 = C158369 * p;
    const double C144814 = -(C144859 * C216043 + C158516 * p) / q;
    const double C215807 = C159001 * p;
    const double C215811 = C159060 * p;
    const double C215814 = C159090 * p;
    const double C215841 = C159719 * p;
    const double C146568 = (3 * C146480) / C143578 - (C146481 * C216044) / q +
                           C215831 - (C159749 * p) / q;
    const double C215849 = C159866 * p;
    const double C215876 = C161069 * p;
    const double C149716 =
        C215872 - (C149984 * C216044) / q - (C161128 * p) / q;
    const double C149774 = C149685 / C143578 - (C149686 * C216044) / q +
                           C215873 - (C161158 * p) / q;
    const double C149924 =
        (2 * C149058) / q - (C149954 * C216043) / q - (C161233 * p) / q;
    const double C215899 = C161684 * p;
    const double C150701 = (3 * C150613) / C143578 - (C150614 * C216044) / q +
                           C215890 - (C161758 * p) / q;
    const double C215910 = C161847 * p;
    const double C151361 =
        (3 * C145548) / C143578 - (C145851 * C216043) / q - (C162095 * p) / q;
    const double C215922 = C162525 / C143578;
    const double C157927 =
        C215748 - (C162525 * C216044) / q - (C152906 * p) / q;
    const double C154220 = (2 * C152891) / q - (C154518 * C216044) / q +
                           C215926 - (C162981 * p) / q;
    const double C154279 = (2 * C153494) / q - (C154548 * C216044) / q +
                           C215928 - (C163025 * p) / q;
    const double C154337 = (5 * C154249) / C143578 - (C154250 * C216044) / q +
                           C215929 - (C163055 * p) / q;
    const double C215935 = C163144 * p;
    const double C157912 =
        C215941 - (C163974 * C216044) / q - (C163975 * p) / q;
    const double C158151 =
        C215948 - (C160114 * C216044) / q - (C164113 * p) / q;
    const double C158414 =
        C215944 - (C158516 * C216044) / q - (C164249 * p) / q;
    const double C158443 = C144859 / C143578 - (C158254 * C216044) / q +
                           C215945 - (C164264 * p) / q;
    const double C158472 = C144905 / C143578 - (C158369 * C216044) / q +
                           C215946 - (C164279 * p) / q;
    const double C158926 =
        C215961 - (C162095 * C216044) / q - (C164463 * p) / q;
    const double C159105 =
        C215957 - (C159193 * C216044) / q - (C164598 * p) / q;
    const double C159120 = C145820 / C143578 - (C159001 * C216044) / q +
                           C215958 - (C164613 * p) / q;
    const double C159135 = C145851 / C143578 - (C159060 * C216044) / q +
                           C215959 - (C164628 * p) / q;
    const double C159734 = (2 * C146481) / q - (C159749 * C216044) / q +
                           C215975 - (C164916 * p) / q;
    const double C159779 = (3 * C146752) / C143578 - (C159675 * C216044) / q +
                           C215971 - (C164961 * p) / q;
    const double C159794 = (3 * C146783) / C143578 - (C159719 * C216044) / q +
                           C215972 - (C164976 * p) / q;
    const double C160994 =
        C215982 - (C165264 * C216044) / q - (C165265 * p) / q;
    const double C161173 =
        C215979 - (C161233 * C216044) / q - (C165400 * p) / q;
    const double C161188 = C149954 / C143578 - (C161069 * C216044) / q +
                           C215980 - (C165415 * p) / q;
    const double C161203 = C149984 / C143578 - (C161128 * C216044) / q +
                           C215981 - (C165430 * p) / q;
    const double C161743 = (2 * C150614) / q - (C161758 * C216044) / q +
                           C215995 - (C165716 * p) / q;
    const double C161788 = (3 * C150882) / C143578 - (C161684 * C216044) / q +
                           C215990 - (C165761 * p) / q;
    const double C161803 = (3 * C150913) / C143578 - (C161728 * C216044) / q +
                           C215991 - (C165776 * p) / q;
    const double C163040 = (3 * C154250) / q - (C163055 * C216044) / q +
                           C163010 / C143578 - (C166183 * p) / q;
    const double C163070 = (2 * C154876) / q - (C163144 * C216044) / q +
                           C215999 - (C166213 * p) / q;
    const double C163085 = (5 * C154518) / C143578 - (C162981 * C216044) / q +
                           C216000 - (C166228 * p) / q;
    const double C163100 = (5 * C154548) / C143578 - (C163025 * C216044) / q +
                           C216001 - (C166243 * p) / q;
    const double C216994 = C168593 / C143578;
    const double C216615 = C168609 / C143578;
    const double C216540 = C168625 / C143578;
    const double C87894 =
        (3 * C168625) / C143578 - (C168609 * C216041) / q - (C168593 * p) / q;
    const double C87893 =
        (2 * C168609) / q - (C168593 * C216041) / q - (C168989 * p) / q;
    const double C216942 = C169018 / C143578;
    const double C216465 = C169018 / q;
    const double C216466 = C169033 * p;
    const double C216612 = C169048 / q;
    const double C216467 = C169048 * p;
    const double C216524 = C169063 / q;
    const double C216468 = C169063 * p;
    const double C216541 = C169667 * p;
    const double C216689 = C169932 * p;
    const double C216536 = C169932 / q;
    const double C216537 = C169933 * p;
    const double C216538 = C169948 / q;
    const double C168974 =
        -(C182419 * be + C169018 * C216043 + C169948 * p) / q;
    const double C216539 = C169963 * p;
    const double C216851 = C170848 * p;
    const double C216595 = C170848 / q;
    const double C216597 = C170864 / q;
    const double C168578 =
        C216964 - (C169018 * C216044) / q - (C170864 * p) / q;
    const double C216935 = C172222 * p;
    const double C216640 = C172222 / q;
    const double C216688 = C172839 / C143578;
    const double C216690 = C173109 * p;
    const double C216941 = C173124 / C143578;
    const double C216691 = C173124 / q;
    const double C216791 = C173125 / C143578;
    const double C91014 = (3 * C172839) / C143578 -
                          (C149966 * be + C173125 * C216043) / q -
                          (C173727 * p) / q;
    const double C216720 = C173990 * p;
    const double C91013 = (2 * C173125) / q -
                          (C149950 * be + C173727 * C216043) / q -
                          (C174019 * p) / q;
    const double C216853 = C174931 * p;
    const double C216773 = C174931 / q;
    const double C217081 = C174947 * p;
    const double C216775 = C174947 / q;
    const double C216836 = C176869 * p;
    const double C216960 = C176884 / C143578;
    const double C216837 = C176884 / q;
    const double C216850 = C176885 / C143578;
    const double C216914 = C176886 / C143578;
    const double C216900 = C177155 / q;
    const double C216852 = C177155 * p;
    const double C216863 = C177467 * p;
    const double C93903 = (3 * C176885) / C143578 - (C176886 * C216044) / q +
                          C216870 - (C178211 * p) / q;
    const double C93902 = (2 * C176886) / q - (C178211 * C216044) / q +
                          C216869 - (C178212 * p) / q;
    const double C216885 = C178474 * p;
    const double C216886 = C178503 * p;
    const double C216897 = C178823 * p;
    const double C168945 =
        -(C182403 * be + C168989 * C216043 + C182408 * p) / q;
    const double C173961 = (2 * C173109) / q -
                           (C185085 * be + C173990 * C216043) / q -
                           (C185090 * p) / q;
    const double C175368 = (3 * C169667) / C143578 -
                           (C185939 * be + C169963 * C216043) / q -
                           (C185944 * p) / q;
    const double C217139 = C186368 / C143578;
    const double C181817 =
        C216965 - (C186368 * C216044) / q - (C176884 * p) / q;
    const double C178182 = (2 * C176869) / q - (C178474 * C216044) / q +
                           C217143 - (C186816 * p) / q;
    const double C178241 = (2 * C177467) / q - (C178503 * C216044) / q +
                           C217145 - (C186860 * p) / q;
    const double C178299 = (5 * C178211) / C143578 - (C178212 * C216044) / q +
                           C217146 - (C186890 * p) / q;
    const double C217152 = C186980 * p;
    const double C186875 = (3 * C178212) / q - (C186890 * C216044) / q +
                           C186845 / C143578 - (C189983 * p) / q;
    const double C186905 = (2 * C178823) / q - (C186980 * C216044) / q +
                           C217216 - (C190013 * p) / q;
    const double C186920 = (5 * C178474) / C143578 - (C186816 * C216044) / q +
                           C217217 - (C190028 * p) / q;
    const double C186935 = (5 * C178503) / C143578 - (C186860 * C216044) / q +
                           C217218 - (C190043 * p) / q;
    const double C218208 = C192366 / C143578;
    const double C217829 = C192382 / C143578;
    const double C217754 = C192398 / C143578;
    const double C132445 =
        (3 * C192398) / C143578 - (C192382 * C216041) / q - (C192366 * p) / q;
    const double C132444 =
        (2 * C192382) / q - (C192366 * C216041) / q - (C192762 * p) / q;
    const double C218156 = C192791 / C143578;
    const double C217679 = C192791 / q;
    const double C217680 = C192806 * p;
    const double C217826 = C192821 / q;
    const double C217681 = C192821 * p;
    const double C217738 = C192836 / q;
    const double C217682 = C192836 * p;
    const double C217755 = C193439 * p;
    const double C217903 = C193704 * p;
    const double C217750 = C193704 / q;
    const double C217751 = C193705 * p;
    const double C217752 = C193720 / q;
    const double C192747 = -(C192791 * C216043 + C193720 * p) / q;
    const double C217753 = C193735 * p;
    const double C218065 = C194619 * p;
    const double C217809 = C194619 / q;
    const double C217811 = C194635 / q;
    const double C192351 =
        C218178 - (C182419 * be + C192791 * C216044) / q - (C194635 * p) / q;
    const double C218149 = C195990 * p;
    const double C217854 = C195990 / q;
    const double C217902 = C196607 / C143578;
    const double C217904 = C196877 * p;
    const double C218155 = C196892 / C143578;
    const double C217905 = C196892 / q;
    const double C218005 = C196893 / C143578;
    const double C135534 =
        (3 * C196607) / C143578 - (C196893 * C216043) / q - (C197494 * p) / q;
    const double C217934 = C197757 * p;
    const double C135533 =
        (2 * C196893) / q - (C197494 * C216043) / q - (C197786 * p) / q;
    const double C218067 = C198697 * p;
    const double C217987 = C198697 / q;
    const double C218295 = C198713 * p;
    const double C217989 = C198713 / q;
    const double C218050 = C200632 * p;
    const double C218174 = C200647 / C143578;
    const double C218051 = C200647 / q;
    const double C218064 = C200648 / C143578;
    const double C218128 = C200649 / C143578;
    const double C218114 = C200918 / q;
    const double C218066 = C200918 * p;
    const double C218077 = C201230 * p;
    const double C138413 = (3 * C200648) / C143578 -
                           (C154530 * be + C200649 * C216044) / q + C218084 -
                           (C201973 * p) / q;
    const double C138412 = (2 * C200649) / q -
                           (C154514 * be + C201973 * C216044) / q + C218083 -
                           (C201974 * p) / q;
    const double C218099 = C202236 * p;
    const double C218100 = C202265 * p;
    const double C218111 = C202584 * p;
    const double C192718 = -(C192762 * C216043 + C206162 * p) / q;
    const double C197728 =
        (2 * C196877) / q - (C197757 * C216043) / q - (C208825 * p) / q;
    const double C199133 =
        (3 * C193439) / C143578 - (C193735 * C216043) / q - (C209672 * p) / q;
    const double C218353 = C210092 / C143578;
    const double C205576 =
        C218179 - (C211518 * be + C210092 * C216044) / q - (C200647 * p) / q;
    const double C201944 = (2 * C200632) / q -
                           (C186975 * be + C202236 * C216044) / q + C218357 -
                           (C210534 * p) / q;
    const double C202003 = (2 * C201230) / q -
                           (C210573 * be + C202265 * C216044) / q + C218359 -
                           (C210579 * p) / q;
    const double C202061 = (5 * C201973) / C143578 -
                           (C210605 * be + C201974 * C216044) / q + C218360 -
                           (C210611 * p) / q;
    const double C218366 = C210700 * p;
    const double C210595 = (3 * C201974) / q -
                           (C213687 * be + C210611 * C216044) / q +
                           C210563 / C143578 - (C213693 * p) / q;
    const double C210626 = (2 * C202584) / q -
                           (C213719 * be + C210700 * C216044) / q + C218430 -
                           (C213725 * p) / q;
    const double C210641 = (5 * C202236) / C143578 -
                           (C213735 * be + C210534 * C216044) / q + C218431 -
                           (C213741 * p) / q;
    const double C210656 = (5 * C202265) / C143578 -
                           (C213751 * be + C210579 * C216044) / q + C218432 -
                           (C213757 * p) / q;
    const double C215760 = C144059 / q;
    const double C215213 = C144059 * p;
    const double C215390 = C144075 / q;
    const double C215214 = C144075 * p;
    const double C43081 = (3 * C144090) / C143578 -
                          (C144779 * be + C144074 * C216041) / q -
                          (C144058 * p) / q;
    const double C215278 = C144091 / q;
    const double C215215 = C144091 * p;
    const double C43080 = (2 * C144074) / q -
                          (C144763 * be + C144058 * C216041) / q -
                          (C144767 * p) / q;
    const double C215247 = C144798 / q;
    const double C215280 = C145283 * p;
    const double C215279 = C145284 * p;
    const double C215470 = C145756 * p;
    const double C215316 = C145756 / q;
    const double C215317 = C145757 * p;
    const double C215318 = C145773 / q;
    const double C144043 =
        C215747 - (C144798 * C216043) / q - (C145773 * p) / q;
    const double C215834 = C146214 / q;
    const double C215347 = C146214 * p;
    const double C215414 = C146230 / q;
    const double C215348 = C146230 * p;
    const double C215376 = C146687 / q;
    const double C215377 = C146704 / q;
    const double C215856 = C147439 / q;
    const double C215402 = C147439 * p;
    const double C44801 = (3 * C146229) / C143578 -
                          (C147669 * be + C146705 * C216041) / q -
                          (C147673 * p) / q;
    const double C215412 = C147900 * p;
    const double C215736 = C148133 * p;
    const double C215422 = C148133 / q;
    const double C215443 = C148510 * p;
    const double C215444 = C148525 / q;
    const double C45935 = (3 * C148526) / C143578 - (C148527 * C216043) / q +
                          C215478 - (C149420 * p) / q;
    const double C45934 = (2 * C148527) / q - (C149420 * C216043) / q +
                          C215477 - (C149421 * p) / q;
    const double C215502 = C149893 * p;
    const double C215523 = C150344 / q;
    const double C215524 = C150361 / q;
    const double C215553 = C150820 * p;
    const double C215554 = C150836 * p;
    const double C215578 = C151570 * p;
    const double C47509 = (3 * C150362) / C143578 - (C150363 * C216043) / q +
                          C215583 - (C152028 * p) / q;
    const double C215677 = C152635 / q;
    const double C215606 = C152635 * p;
    const double C215632 = C152650 / C143578;
    const double C47920 = C215594 - (C152650 * C216043) / q - (C150344 * p) / q;
    const double C48240 = -(C153105 * be + C152650 * C216041 + C146687 * p) / q;
    const double C215931 = C153983 / q;
    const double C49034 = C215652 - (C153982 * C216043) / q - (C153983 * p) / q;
    const double C215696 = C153998 / C143578;
    const double C215701 = C153999 / q;
    const double C49035 = C215653 - (C153998 * C216043) / q - (C153999 * p) / q;
    const double C49322 = -(C154452 * be + C153982 * C216041 + C154456 * p) / q;
    const double C49323 = -(C154468 * be + C153998 * C216041 + C154472 * p) / q;
    const double C215940 = C155204 / q;
    const double C215691 = C155204 * p;
    const double C215742 = C157225 / C143578;
    const double C152763 =
        C215828 - (C157225 * C216043) / q - (C150361 * p) / q;
    const double C144014 =
        C215746 - (C144767 * C216043) / q - (C158006 * p) / q;
    const double C144149 = C144058 / C143578 - (C144059 * C216043) / q +
                           C215750 - (C158136 * p) / q;
    const double C144235 =
        C215752 - (C147673 * C216043) / q - (C158166 * p) / q;
    const double C145342 = (3 * C145283) / C143578 - (C145284 * C216043) / q +
                           C215794 - (C158911 * p) / q;
    const double C146184 =
        C215825 - (C146688 * C216043) / q - (C159500 * p) / q;
    const double C146274 = C146213 / C143578 - (C146214 * C216043) / q +
                           C215830 - (C159586 * p) / q;
    const double C146332 =
        C215831 - (C155438 * C216043) / q - (C159615 * p) / q;
    const double C147035 = C146705 / C143578 - (C147439 * C216043) / q +
                           C215855 - (C160029 * p) / q;
    const double C148585 = C160573 / C143578 - (C148525 * C216043) / q +
                           C215793 - (C148526 * p) / q;
    const double C157879 =
        C215748 - (C160573 * C216043) / q - (C148525 * p) / q;
    const double C149391 = (2 * C148510) / q - (C149893 * C216043) / q +
                           C215871 - (C160920 * p) / q;
    const double C149479 = (5 * C149420) / C143578 - (C149421 * C216043) / q +
                           C215872 - (C160979 * p) / q;
    const double C149537 = (2 * C150363) / q - (C152028 * C216043) / q +
                           C215873 - (C161009 * p) / q;
    const double C150407 = (3 * C150345) / C143578 - (C150346 * C216043) / q +
                           C215889 - (C161595 * p) / q;
    const double C151166 = (3 * C150836) / C143578 - (C151570 * C216043) / q +
                           C215916 - (C162010 * p) / q;
    const double C153953 =
        C215926 - (C154456 * C216043) / q - (C162805 * p) / q;
    const double C154043 = C153982 / C143578 - (C153983 * C216043) / q +
                           C215928 - (C162891 * p) / q;
    const double C154101 =
        C215929 - (C162920 * C216043) / q - (C162921 * p) / q;
    const double C154800 = C154472 / C143578 - (C155204 * C216043) / q +
                           C215938 - (C163279 * p) / q;
    const double C157864 =
        C215941 - (C163928 * C216043) / q - (C163929 * p) / q;
    const double C158181 = C144767 / C143578 - (C158006 * C216043) / q +
                           C215944 - (C164143 * p) / q;
    const double C158210 =
        C215945 - (C164158 * C216043) / q - (C164159 * p) / q;
    const double C158239 = C147673 / C143578 - (C158166 * C216043) / q +
                           C215946 - (C164174 * p) / q;
    const double C158896 = (2 * C145284) / q - (C158911 * C216043) / q +
                           C215961 - (C164433 * p) / q;
    const double C158956 = (3 * C145757) / C143578 - (C158852 * C216043) / q +
                           C215957 - (C164493 * p) / q;
    const double C158986 = (3 * C147900) / C143578 - (C158941 * C216043) / q +
                           C215959 - (C164523 * p) / q;
    const double C159390 =
        C215953 - (C164689 * C216043) / q - (C164690 * p) / q;
    const double C159630 = C146688 / C143578 - (C159500 * C216043) / q +
                           C215970 - (C164840 * p) / q;
    const double C159645 =
        C215971 - (C164855 * C216043) / q - (C164856 * p) / q;
    const double C159660 = C155438 / C143578 - (C159615 * C216043) / q +
                           C215972 - (C164871 * p) / q;
    const double C160964 = (3 * C149421) / q - (C160979 * C216043) / q +
                           C215982 - (C165234 * p) / q;
    const double C161024 = (5 * C149893) / C143578 - (C160920 * C216043) / q +
                           C215979 - (C165295 * p) / q;
    const double C161039 = (2 * C151570) / q - (C162010 * C216043) / q +
                           C215980 - (C165310 * p) / q;
    const double C161054 = (5 * C152028) / C143578 - (C161009 * C216043) / q +
                           C215981 - (C165325 * p) / q;
    const double C161580 = (2 * C150346) / q - (C161595 * C216043) / q +
                           C215986 - (C165598 * p) / q;
    const double C161639 = (3 * C150820) / C143578 - (C161481 * C216043) / q +
                           C215989 - (C165641 * p) / q;
    const double C161669 = (3 * C155664) / C143578 - (C161624 * C216043) / q +
                           C215991 - (C165671 * p) / q;
    const double C162693 =
        C215975 - (C165911 * C216043) / q - (C165912 * p) / q;
    const double C162936 = C154456 / C143578 - (C162805 * C216043) / q +
                           C215999 - (C166107 * p) / q;
    const double C162951 =
        C216000 - (C166122 * C216043) / q - (C166123 * p) / q;
    const double C162966 = C162920 / C143578 - (C162921 * C216043) / q +
                           C216001 - (C166138 * p) / q;
    const double C87856 =
        (3 * C168230) / C143578 - (C168214 * C216041) / q - (C168198 * p) / q;
    const double C87855 =
        (2 * C168214) / q - (C168198 * C216041) / q - (C168901 * p) / q;
    const double C216464 = C168930 / q;
    const double C216687 = C169872 * p;
    const double C216533 = C169872 / q;
    const double C216535 = C169888 / q;
    const double C168183 =
        C216964 - (C181905 * be + C168930 * C216043) / q - (C169888 * p) / q;
    const double C216593 = C170787 / q;
    const double C216594 = C170803 / q;
    const double C89569 =
        (3 * C170335) / C143578 - (C170804 * C216041) / q - (C171745 * p) / q;
    const double C216953 = C172192 * p;
    const double C216639 = C172192 / q;
    const double C216660 = C172565 * p;
    const double C216661 = C172580 / q;
    const double C90653 = (3 * C172581) / C143578 -
                          (C149905 * be + C172582 * C216043) / q + C216695 -
                          (C173465 * p) / q;
    const double C90652 = (2 * C172582) / q -
                          (C149889 * be + C173465 * C216043) / q + C216694 -
                          (C173466 * p) / q;
    const double C216719 = C173932 * p;
    const double C216741 = C174390 / q;
    const double C216771 = C174858 * p;
    const double C216795 = C175571 * p;
    const double C92246 = (3 * C174391) / C143578 -
                          (C152257 * be + C174392 * C216043) / q + C216800 -
                          (C176016 * p) / q;
    const double C216849 = C176628 / C143578;
    const double C92921 = -(C176628 * C216041 + C170787 * p) / q;
    const double C216913 = C177963 / C143578;
    const double C94028 = -(C177947 * C216041 + C178415 * p) / q;
    const double C94029 = -(C177963 * C216041 + C178430 * p) / q;
    const double C216959 = C181133 / C143578;
    const double C176741 =
        C217045 - (C186267 * be + C181133 * C216043) / q - (C174390 * p) / q;
    const double C172640 = C184435 / C143578 -
                           (C184430 * be + C172580 * C216043) / q + C217010 -
                           (C172581 * p) / q;
    const double C181772 =
        C216965 - (C187761 * be + C184435 * C216043) / q - (C172580 * p) / q;
    const double C173436 = (2 * C172565) / q -
                           (C184766 * be + C173932 * C216043) / q + C217088 -
                           (C184771 * p) / q;
    const double C173524 = (5 * C173465) / C143578 -
                           (C184827 * be + C173466 * C216043) / q + C217089 -
                           (C184832 * p) / q;
    const double C173582 = (2 * C174392) / q -
                           (C184859 * be + C176016 * C216043) / q + C217090 -
                           (C184864 * p) / q;
    const double C175180 = (3 * C174858) / C143578 -
                           (C185853 * be + C175571 * C216043) / q + C217133 -
                           (C185858 * p) / q;
    const double C184816 = (3 * C173466) / q -
                           (C189035 * be + C184832 * C216043) / q + C217199 -
                           (C189040 * p) / q;
    const double C184879 = (5 * C173932) / C143578 -
                           (C189098 * be + C184771 * C216043) / q + C217196 -
                           (C189103 * p) / q;
    const double C184894 = (2 * C175571) / q -
                           (C189114 * be + C185858 * C216043) / q + C217197 -
                           (C189119 * p) / q;
    const double C184910 = (5 * C176016) / C143578 -
                           (C189130 * be + C184864 * C216043) / q + C217198 -
                           (C189135 * p) / q;
    const double C132407 =
        (3 * C192003) / C143578 - (C191987 * C216041) / q - (C191971 * p) / q;
    const double C132406 =
        (2 * C191987) / q - (C191971 * C216041) / q - (C192674 * p) / q;
    const double C217678 = C192703 / q;
    const double C217901 = C193644 * p;
    const double C217747 = C193644 / q;
    const double C217749 = C193660 / q;
    const double C191956 =
        C218178 - (C192703 * C216043) / q - (C193660 * p) / q;
    const double C217807 = C194558 / q;
    const double C217808 = C194574 / q;
    const double C134120 =
        (3 * C194106) / C143578 - (C194575 * C216041) / q - (C195514 * p) / q;
    const double C218167 = C195960 * p;
    const double C217853 = C195960 / q;
    const double C217874 = C196333 * p;
    const double C217875 = C196348 / q;
    const double C135192 = (3 * C196349) / C143578 - (C196350 * C216043) / q +
                           C217909 - (C197232 * p) / q;
    const double C135191 = (2 * C196350) / q - (C197232 * C216043) / q +
                           C217908 - (C197233 * p) / q;
    const double C217933 = C197699 * p;
    const double C217955 = C198156 / q;
    const double C217985 = C198624 * p;
    const double C218009 = C199335 * p;
    const double C136766 = (3 * C198157) / C143578 - (C198158 * C216043) / q +
                           C218014 - (C199779 * p) / q;
    const double C218063 = C200391 / C143578;
    const double C137441 = -(C200391 * C216041 + C194558 * p) / q;
    const double C218127 = C201725 / C143578;
    const double C138545 = -(C201709 * C216041 + C202177 * p) / q;
    const double C138546 = -(C201725 * C216041 + C202192 * p) / q;
    const double C218173 = C204892 / C143578;
    const double C200504 =
        C218259 - (C204892 * C216043) / q - (C198156 * p) / q;
    const double C196408 = C208175 / C143578 - (C196348 * C216043) / q +
                           C218224 - (C196349 * p) / q;
    const double C205531 =
        C218179 - (C208175 * C216043) / q - (C196348 * p) / q;
    const double C197203 = (2 * C196333) / q - (C197699 * C216043) / q +
                           C218302 - (C208510 * p) / q;
    const double C197291 = (5 * C197232) / C143578 - (C197233 * C216043) / q +
                           C218303 - (C208569 * p) / q;
    const double C197349 = (2 * C198158) / q - (C199779 * C216043) / q +
                           C218304 - (C208599 * p) / q;
    const double C198945 = (3 * C198624) / C143578 - (C199335 * C216043) / q +
                           C218347 - (C209587 * p) / q;
    const double C208554 = (3 * C197233) / q - (C208569 * C216043) / q +
                           C218413 - (C212753 * p) / q;
    const double C208614 = (5 * C197699) / C143578 - (C208510 * C216043) / q +
                           C218410 - (C212815 * p) / q;
    const double C208629 = (2 * C199335) / q - (C209587 * C216043) / q +
                           C218411 - (C212830 * p) / q;
    const double C208644 = (5 * C199779) / C143578 - (C208599 * C216043) / q +
                           C218412 - (C212845 * p) / q;
    const double C42556 = (3 * C143643) / C143578 -
                          (C143672 * be + C143627 * C216041) / q + C215187 -
                          (C143611 * p) / q;
    const double C42555 = (2 * C143627) / q -
                          (C143655 * be + C143611 * C216041) / q + C215186 -
                          (C143660 * p) / q;
    const double C215188 = C143692 / q;
    const double C215258 = C145013 / q;
    const double C215260 = C145031 / q;
    const double C215331 = C145943 / q;
    const double C215333 = C145961 / q;
    const double C44297 = (3 * C144997) / C143578 -
                          (C146839 * be + C145033 * C216041) / q + C215382 -
                          (C146844 * p) / q;
    const double C44576 = (3 * C145927) / C143578 -
                          (C147301 * be + C145963 * C216041) / q + C215399 -
                          (C147306 * p) / q;
    const double C215408 = C147765 / q;
    const double C45157 = C148236 / C143578 -
                          (C148248 * be + C145013 * C216041) / q + C215430 -
                          (C144981 * p) / q;
    const double C45167 =
        C215431 - (C148264 * be + C148236 * C216041) / q - (C145013 * p) / q;
    const double C215870 = C149153 / q;
    const double C45772 =
        C215477 - (C149148 * be + C149120 * C216041) / q - (C149153 * p) / q;
    const double C215561 = C149170 / q;
    const double C45773 =
        C215478 - (C149165 * be + C149136 * C216041) / q - (C149170 * p) / q;
    const double C215887 = C150077 / q;
    const double C46330 =
        C215508 - (C150072 * be + C150044 * C216041) / q - (C150077 * p) / q;
    const double C215575 = C150094 / q;
    const double C46331 =
        C215509 - (C150089 * be + C150060 * C216041) / q - (C150094 * p) / q;
    const double C46870 = C149136 / C143578 -
                          (C150970 * be + C149170 * C216041) / q + C215562 -
                          (C150975 * p) / q;
    const double C47149 = C150060 / C143578 -
                          (C151432 * be + C150094 * C216041) / q + C215576 -
                          (C151437 * p) / q;
    const double C215917 = C151895 / q;
    const double C47428 =
        C215583 - (C151890 * be + C151878 * C216041) / q - (C151895 * p) / q;
    const double C47730 = C152362 / C143578 -
                          (C152374 * be + C145943 * C216041) / q + C215593 -
                          (C145911 * p) / q;
    const double C47740 =
        C215594 - (C152390 * be + C152362 * C216041) / q - (C145943 * p) / q;
    const double C215671 = C153241 / q;
    const double C48343 =
        C215638 - (C153236 * be + C153224 * C216041) / q - (C153241 * p) / q;
    const double C215925 = C153715 / q;
    const double C48872 =
        C215652 - (C153710 * be + C153682 * C216041) / q - (C153715 * p) / q;
    const double C215687 = C153732 / q;
    const double C48873 =
        C215653 - (C153727 * be + C153698 * C216041) / q - (C153732 * p) / q;
    const double C49412 = C153224 / C143578 -
                          (C154604 * be + C153241 * C216041) / q + C215672 -
                          (C154609 * p) / q;
    const double C49691 = C153698 / C143578 -
                          (C155066 * be + C153732 * C216041) / q + C215688 -
                          (C155071 * p) / q;
    const double C215939 = C155531 / q;
    const double C49970 =
        C215698 - (C155526 * be + C155514 * C216041) / q - (C155531 * p) / q;
    const double C50279 = C155985 / C143578 -
                          (C155981 * be + C145031 * C216041) / q + C215704 -
                          (C144997 * p) / q;
    const double C148325 =
        C215793 - (C160458 * be + C155985 * C216041) / q - (C145031 * p) / q;
    const double C51102 = C156429 / C143578 -
                          (C156425 * be + C147765 * C216041) / q + C215726 -
                          (C147749 * p) / q;
    const double C53224 =
        C215744 - (C157309 * be + C156429 * C216041) / q - (C147765 * p) / q;
    const double C51643 = C156868 / C143578 -
                          (C156864 * be + C145961 * C216041) / q + C215734 -
                          (C145927 * p) / q;
    const double C152507 =
        C215828 - (C162368 * be + C156868 * C216041) / q - (C145961 * p) / q;
    const double C143612 = (5 * C143611) / C143578 -
                           (C157767 * be + C143660 * C216041) / q + C215746 -
                           (C157771 * p) / q;
    const double C143642 = C157801 / C143578 -
                           (C157797 * be + C143692 * C216041) / q + C215747 -
                           (C143643 * p) / q;
    const double C157739 =
        C215748 - (C163879 * be + C157801 * C216041) / q - (C143692 * p) / q;
    const double C143753 = (2 * C145033) / q -
                           (C157891 * be + C146844 * C216041) / q + C215750 -
                           (C157896 * p) / q;
    const double C143841 = (2 * C145963) / q -
                           (C157939 * be + C147306 * C216041) / q + C215752 -
                           (C157944 * p) / q;
    const double C144982 = (3 * C144981) / C143578 -
                           (C158646 * be + C145015 * C216041) / q + C215790 -
                           (C158650 * p) / q;
    const double C145912 = (3 * C145911) / C143578 -
                           (C159294 * be + C145945 * C216041) / q + C215825 -
                           (C159298 * p) / q;
    const double C146905 = (3 * C147749) / C143578 -
                           (C159981 * be + C147767 * C216041) / q + C215855 -
                           (C159985 * p) / q;
    const double C149121 = C149120 / C143578 -
                           (C160743 * be + C149153 * C216041) / q + C215871 -
                           (C160747 * p) / q;
    const double C149215 =
        C215872 - (C160819 * be + C160824 * C216041) / q - (C160825 * p) / q;
    const double C149274 =
        C215873 - (C160852 * be + C160857 * C216041) / q - (C160858 * p) / q;
    const double C150045 = C150044 / C143578 -
                           (C161305 * be + C150077 * C216041) / q + C215888 -
                           (C161309 * p) / q;
    const double C150139 =
        C215889 - (C161381 * be + C161385 * C216041) / q - (C161386 * p) / q;
    const double C150198 =
        C215890 - (C161413 * be + C161418 * C216041) / q - (C161419 * p) / q;
    const double C151036 = C151878 / C143578 -
                           (C161962 * be + C151895 * C216041) / q + C215916 -
                           (C161966 * p) / q;
    const double C153683 = C153682 / C143578 -
                           (C162628 * be + C153715 * C216041) / q + C215926 -
                           (C162632 * p) / q;
    const double C153777 =
        C215928 - (C162705 * be + C162709 * C216041) / q - (C162710 * p) / q;
    const double C153836 =
        C215929 - (C162737 * be + C162742 * C216041) / q - (C162743 * p) / q;
    const double C154670 = C155514 / C143578 -
                           (C163231 * be + C155531 * C216041) / q + C215938 -
                           (C163235 * p) / q;
    const double C157724 = (3 * C143660) / q -
                           (C163863 * be + C157771 * C216041) / q + C215941 -
                           (C163867 * p) / q;
    const double C157960 = (5 * C146844) / C143578 -
                           (C164017 * be + C157896 * C216041) / q + C215944 -
                           (C164021 * p) / q;
    const double C157976 = (5 * C147306) / C143578 -
                           (C164033 * be + C157944 * C216041) / q + C215945 -
                           (C164037 * p) / q;
    const double C157991 = (2 * C147767) / q -
                           (C164049 * be + C159985 * C216041) / q + C215946 -
                           (C164053 * p) / q;
    const double C158619 = (2 * C145015) / q -
                           (C164306 * be + C158650 * C216041) / q + C215948 -
                           (C164310 * p) / q;
    const double C158806 = (3 * C150975) / C143578 -
                           (C164367 * be + C158758 * C216041) / q + C215957 -
                           (C164371 * p) / q;
    const double C158822 = (3 * C151437) / C143578 -
                           (C164383 * be + C158790 * C216041) / q + C215958 -
                           (C164387 * p) / q;
    const double C159267 = (2 * C145945) / q -
                           (C164655 * be + C159298 * C216041) / q + C215953 -
                           (C164659 * p) / q;
    const double C159454 = (3 * C154609) / C143578 -
                           (C164732 * be + C159406 * C216041) / q + C215970 -
                           (C164736 * p) / q;
    const double C159470 = (3 * C155071) / C143578 -
                           (C164748 * be + C159438 * C216041) / q + C215971 -
                           (C164752 * p) / q;
    const double C160874 = C160824 / C143578 -
                           (C165167 * be + C160825 * C216041) / q + C215979 -
                           (C165171 * p) / q;
    const double C160890 = C160857 / C143578 -
                           (C165183 * be + C160858 * C216041) / q + C215980 -
                           (C165187 * p) / q;
    const double C160905 =
        C215981 - (C165199 * be + C165203 * C216041) / q - (C165204 * p) / q;
    const double C161435 = C161385 / C143578 -
                           (C165532 * be + C161386 * C216041) / q + C215989 -
                           (C165536 * p) / q;
    const double C161451 = C161418 / C143578 -
                           (C165548 * be + C161419 * C216041) / q + C215990 -
                           (C165552 * p) / q;
    const double C161466 =
        C215991 - (C165564 * be + C165568 * C216041) / q - (C165569 * p) / q;
    const double C162285 =
        C215986 - (C165846 * be + C165850 * C216041) / q - (C165851 * p) / q;
    const double C162759 = C162709 / C143578 -
                           (C165984 * be + C162710 * C216041) / q + C215999 -
                           (C165988 * p) / q;
    const double C162775 = C162742 / C143578 -
                           (C166000 * be + C162743 * C216041) / q + C216000 -
                           (C166004 * p) / q;
    const double C162790 =
        C216001 - (C166016 * be + C166020 * C216041) / q - (C166021 * p) / q;
    const double C163581 =
        C215995 - (C166299 * be + C166303 * C216041) / q - (C166304 * p) / q;
    const double C87381 = (3 * C167788) / C143578 - (C167772 * C216041) / q +
                          C216408 - (C167756 * p) / q;
    const double C87380 = (2 * C167772) / q - (C167756 * C216041) / q +
                          C216407 - (C167804 * p) / q;
    const double C216409 = C167834 / q;
    const double C216477 = C169155 / q;
    const double C216550 = C170069 / q;
    const double C89065 = (3 * C169123) / C143578 - (C169157 * C216041) / q +
                          C216599 - (C170937 * p) / q;
    const double C89344 = (3 * C170037) / C143578 - (C170071 * C216041) / q +
                          C216616 - (C171386 * p) / q;
    const double C216625 = C171832 / q;
    const double C94979 = C179900 / C143578 - (C169155 * C216041) / q +
                          C216921 - (C169123 * p) / q;
    const double C172380 =
        C217010 - (C179900 * C216041) / q - (C169155 * p) / q;
    const double C95746 = C180341 / C143578 - (C171832 * C216041) / q +
                          C216943 - (C171817 * p) / q;
    const double C97800 = C216961 - (C180341 * C216041) / q - (C171832 * p) / q;
    const double C96281 = C180777 / C143578 - (C170069 * C216041) / q +
                          C216951 - (C170037 * p) / q;
    const double C176485 =
        C217045 - (C180777 * C216041) / q - (C170069 * p) / q;
    const double C167757 = (5 * C167756) / C143578 - (C167804 * C216041) / q +
                           C216963 - (C181671 * p) / q;
    const double C167787 = C181699 / C143578 - (C167834 * C216041) / q +
                           C216964 - (C167788 * p) / q;
    const double C181641 =
        C216965 - (C181699 * C216041) / q - (C167834 * p) / q;
    const double C167894 = (2 * C169157) / q - (C170937 * C216041) / q +
                           C216967 - (C181788 * p) / q;
    const double C167981 = (2 * C170071) / q - (C171386 * C216041) / q +
                           C216969 - (C181833 * p) / q;
    const double C170996 = (3 * C171817) / C143578 - (C171834 * C216041) / q +
                           C217072 - (C183854 * p) / q;
    const double C181627 = (3 * C167804) / q - (C181671 * C216041) / q +
                           C217158 - (C187690 * p) / q;
    const double C181848 = (5 * C170937) / C143578 - (C181788 * C216041) / q +
                           C217161 - (C187840 * p) / q;
    const double C181863 = (5 * C171386) / C143578 - (C181833 * C216041) / q +
                           C217162 - (C187855 * p) / q;
    const double C181878 = (2 * C171834) / q - (C183854 * C216041) / q +
                           C217163 - (C187870 * p) / q;
    const double C131932 = (3 * C191562) / C143578 - (C191546 * C216041) / q +
                           C217622 - (C191530 * p) / q;
    const double C131931 = (2 * C191546) / q - (C191530 * C216041) / q +
                           C217621 - (C191578 * p) / q;
    const double C217623 = C191608 / q;
    const double C217691 = C192928 / q;
    const double C217764 = C193841 / q;
    const double C133616 = (3 * C192896) / C143578 - (C192930 * C216041) / q +
                           C217813 - (C194708 * p) / q;
    const double C133895 = (3 * C193809) / C143578 - (C193843 * C216041) / q +
                           C217830 - (C195156 * p) / q;
    const double C217839 = C195601 / q;
    const double C139499 = C203659 / C143578 - (C192928 * C216041) / q +
                           C218135 - (C192896 * p) / q;
    const double C196148 =
        C218224 - (C203659 * C216041) / q - (C192928 * p) / q;
    const double C140266 = C204100 / C143578 - (C195601 * C216041) / q +
                           C218157 - (C195586 * p) / q;
    const double C142320 =
        C218175 - (C204100 * C216041) / q - (C195601 * p) / q;
    const double C140801 = C204536 / C143578 - (C193841 * C216041) / q +
                           C218165 - (C193809 * p) / q;
    const double C200248 =
        C218259 - (C204536 * C216041) / q - (C193841 * p) / q;
    const double C191531 = (5 * C191530) / C143578 - (C191578 * C216041) / q +
                           C218177 - (C205430 * p) / q;
    const double C191561 = C205458 / C143578 - (C191608 * C216041) / q +
                           C218178 - (C191562 * p) / q;
    const double C205400 =
        C218179 - (C205458 * C216041) / q - (C191608 * p) / q;
    const double C191668 = (2 * C192930) / q - (C194708 * C216041) / q +
                           C218181 - (C205547 * p) / q;
    const double C191755 = (2 * C193843) / q - (C195156 * C216041) / q +
                           C218183 - (C205592 * p) / q;
    const double C194767 = (3 * C195586) / C143578 - (C195603 * C216041) / q +
                           C218286 - (C207599 * p) / q;
    const double C205386 = (3 * C191578) / q - (C205430 * C216041) / q +
                           C218372 - (C211403 * p) / q;
    const double C205607 = (5 * C194708) / C143578 - (C205547 * C216041) / q +
                           C218375 - (C211553 * p) / q;
    const double C205622 = (5 * C195156) / C143578 - (C205592 * C216041) / q +
                           C218376 - (C211568 * p) / q;
    const double C205637 = (2 * C195603) / q - (C207599 * C216041) / q +
                           C218377 - (C211583 * p) / q;
    const double C186785 =
        C217217 - (C189916 * be + C189921 * C216043) / q - (C189922 * p) / q;
    const double C185029 =
        C217196 - (C185090 * C216044) / q - (C189210 * p) / q;
    const double C184848 =
        C217199 - (C189071 * C216044) / q - (C189072 * p) / q;
    const double C186619 =
        C217218 - (C189816 * C216041) / q - (C189817 * p) / q;
    const double C185311 =
        C217208 - (C189370 * C216041) / q - (C189371 * p) / q;
    const double C183517 =
        C217188 - (C188665 * be + C188670 * C216043) / q - (C188671 * p) / q;
    const double C182987 =
        C217174 - (C183076 * C216044) / q - (C188416 * p) / q;
    const double C186527 =
        C217192 - (C189709 * be + C189714 * C216043) / q - (C189715 * p) / q;
    const double C187408 =
        C217212 - (C190101 * C216041) / q - (C190102 * p) / q;
    const double C184755 =
        C217198 - (C189008 * C216041) / q - (C189009 * p) / q;
    const double C182807 =
        C217178 - (C185944 * C216044) / q - (C188278 * p) / q;
    const double C186128 =
        C217203 - (C189654 * C216041) / q - (C189655 * p) / q;
    const double C182305 =
        C217161 - (C182408 * C216044) / q - (C188070 * p) / q;
    const double C182101 =
        C217162 - (C187973 * be + C187978 * C216043) / q - (C187979 * p) / q;
    const double C182041 =
        C217165 - (C183984 * C216044) / q - (C187931 * p) / q;
    const double C183264 =
        C217170 - (C188501 * be + C188506 * C216043) / q - (C188507 * p) / q;
    const double C181803 =
        C217158 - (C187795 * C216044) / q - (C187796 * p) / q;
    const double C181758 =
        C217158 - (C187744 * be + C187749 * C216043) / q - (C187750 * p) / q;
    const double C217127 = C185699 * p;
    const double C178066 =
        C217146 - (C186749 * be + C186754 * C216043) / q - (C186755 * p) / q;
    const double C186801 = C186754 / C143578 -
                           (C189933 * be + C186755 * C216043) / q + C217218 -
                           (C189938 * p) / q;
    const double C177918 =
        C217143 - (C186630 * be + C178415 * C216043) / q - (C186635 * p) / q;
    const double C186770 = C178415 / C143578 -
                           (C189900 * be + C186635 * C216043) / q + C217216 -
                           (C189905 * p) / q;
    const double C217116 = C185535 * p;
    const double C173758 =
        C217089 - (C174019 * C216044) / q - (C184984 * p) / q;
    const double C185059 = C174019 / C143578 - (C184984 * C216044) / q +
                           C217198 - (C189240 * p) / q;
    const double C217093 = C184925 * p;
    const double C185044 = C173990 / C143578 - (C184925 * C216044) / q +
                           C217197 - (C189225 * p) / q;
    const double C217066 = C183739 * p;
    const double C177801 =
        C217146 - (C186573 * C216041) / q - (C186574 * p) / q;
    const double C186604 = C186573 / C143578 - (C186574 * C216041) / q +
                           C217217 - (C189801 * p) / q;
    const double C177743 =
        C217145 - (C186542 * C216041) / q - (C186543 * p) / q;
    const double C186589 = C186542 / C143578 - (C186543 * C216041) / q +
                           C217216 - (C189786 * p) / q;
    const double C217058 = C183591 * p;
    const double C217031 = C182972 * p;
    const double C170438 =
        C217048 - (C183482 * be + C179369 * C216043) / q - (C183487 * p) / q;
    const double C183532 = C179369 / C143578 -
                           (C188682 * be + C183487 * C216043) / q + C217189 -
                           (C188687 * p) / q;
    const double C174227 =
        C217107 - (C185265 * C216041) / q - (C185266 * p) / q;
    const double C185296 = C185265 / C143578 - (C185266 * C216041) / q +
                           C217207 - (C189355 * p) / q;
    const double C217028 = C182942 * p;
    const double C183017 = C169963 / C143578 - (C182942 * C216044) / q +
                           C217176 - (C188446 * p) / q;
    const double C174169 =
        C217106 - (C185234 * C216041) / q - (C185235 * p) / q;
    const double C185281 = C185234 / C143578 - (C185235 * C216041) / q +
                           C217206 - (C189340 * p) / q;
    const double C217024 = C182883 * p;
    const double C183002 = C169933 / C143578 - (C182883 * C216044) / q +
                           C217175 - (C188431 * p) / q;
    const double C170290 =
        C217042 - (C183365 * be + C170788 * C216043) / q - (C183370 * p) / q;
    const double C183502 = C170788 / C143578 -
                           (C188649 * be + C183370 * C216043) / q + C217187 -
                           (C188654 * p) / q;
    const double C173319 =
        C217090 - (C184709 * C216041) / q - (C184710 * p) / q;
    const double C184740 = C184709 / C143578 - (C184710 * C216041) / q +
                           C217197 - (C188993 * p) / q;
    const double C173261 =
        C217089 - (C184678 * C216041) / q - (C184679 * p) / q;
    const double C184725 = C184678 / C143578 - (C184679 * C216041) / q +
                           C217196 - (C188978 * p) / q;
    const double C216991 = C182260 * p;
    const double C182363 = C169033 / C143578 - (C182260 * C216044) / q +
                           C217163 - (C188100 * p) / q;
    const double C168549 =
        C216963 - (C168989 * C216044) / q - (C182145 * p) / q;
    const double C182334 = C168989 / C143578 - (C182145 * C216044) / q +
                           C217162 - (C188085 * p) / q;
    const double C168375 =
        C216969 - (C182052 * be + C171745 * C216043) / q - (C182057 * p) / q;
    const double C182130 = C171745 / C143578 -
                           (C187990 * be + C182057 * C216043) / q + C217163 -
                           (C187995 * p) / q;
    const double C168154 =
        C216963 - (C181889 * be + C168901 * C216043) / q - (C181894 * p) / q;
    const double C182072 = C168901 / C143578 -
                           (C187957 * be + C181894 * C216043) / q + C217161 -
                           (C187962 * p) / q;
    const double C216774 = C174932 * p;
    const double C185654 = (3 * C174932) / C143578 - (C185579 * C216044) / q +
                           C217208 - (C189582 * p) / q;
    const double C185520 = (3 * C179588) / C143578 -
                           (C189472 * be + C185474 * C216043) / q + C217208 -
                           (C189477 * p) / q;
    const double C216772 = C174902 * p;
    const double C185639 = (3 * C174902) / C143578 - (C185535 * C216044) / q +
                           C217207 - (C189567 * p) / q;
    const double C217157 = C179141 / q;
    const double C216908 = C179141 * p;
    const double C178750 = C178430 / C143578 -
                           (C187106 * be + C179141 * C216043) / q + C217155 -
                           (C187111 * p) / q;
    const double C216770 = C174843 * p;
    const double C185489 = (3 * C174843) / C143578 -
                           (C189440 * be + C185327 * C216043) / q + C217206 -
                           (C189445 * p) / q;
    const double C217135 = C175253 / q;
    const double C216787 = C175253 * p;
    const double C217148 = C177948 / q;
    const double C93740 =
        C216869 - (C154452 * be + C177947 * C216043) / q - (C177948 * p) / q;
    const double C178008 = C177947 / C143578 -
                           (C186718 * be + C177948 * C216043) / q + C217145 -
                           (C186723 * p) / q;
    const double C216756 = C174639 * p;
    const double C216918 = C177964 / q;
    const double C93741 =
        C216870 - (C154468 * be + C177963 * C216043) / q - (C177964 * p) / q;
    const double C216755 = C174640 * p;
    const double C174727 = (3 * C174639) / C143578 - (C174640 * C216044) / q +
                           C217107 - (C185609 * p) / q;
    const double C185594 = (2 * C174640) / q - (C185609 * C216044) / q +
                           C217212 - (C189522 * p) / q;
    const double C216803 = C173743 / q;
    const double C216712 = C173743 * p;
    const double C217097 = C173728 / q;
    const double C216711 = C173728 * p;
    const double C173816 = C173727 / C143578 - (C173728 * C216044) / q +
                           C217090 - (C185014 * p) / q;
    const double C174436 = (3 * C174374) / C143578 -
                           (C185438 * be + C174375 * C216043) / q + C217106 -
                           (C185443 * p) / q;
    const double C185427 = (2 * C174375) / q -
                           (C189396 * be + C185443 * C216043) / q + C217203 -
                           (C189401 * p) / q;
    const double C216754 = C172840 / q;
    const double C216675 = C172840 * p;
    const double C216740 = C174373 / q;
    const double C92633 =
        C216811 - (C153105 * be + C176628 * C216043) / q - (C174373 * p) / q;
    const double C216799 = C172824 / q;
    const double C216674 = C172824 * p;
    const double C216894 = C176613 / q;
    const double C216823 = C176613 * p;
    const double C216598 = C170879 * p;
    const double C183666 = (3 * C170879) / C143578 - (C183591 * C216044) / q +
                           C217189 - (C188792 * p) / q;
    const double C217156 = C179457 / q;
    const double C94676 = C216915 - (C179441 * C216041) / q - (C179457 * p) / q;
    const double C178620 = C179441 / C143578 - (C179457 * C216041) / q +
                           C217155 - (C187067 * p) / q;
    const double C216596 = C170849 * p;
    const double C183651 = (3 * C170849) / C143578 - (C183547 * C216044) / q +
                           C217188 - (C188777 * p) / q;
    const double C183339 = (3 * C179010) / C143578 - (C183309 * C216041) / q +
                           C217188 - (C188565 * p) / q;
    const double C217074 = C171199 / q;
    const double C216610 = C171199 * p;
    const double C183324 = (3 * C178561) / C143578 - (C183279 * C216041) / q +
                           C217187 - (C188550 * p) / q;
    const double C217142 = C177683 / q;
    const double C93578 = C216869 - (C177651 * C216041) / q - (C177683 * p) / q;
    const double C177652 = C177651 / C143578 - (C177683 * C216041) / q +
                           C217143 - (C186470 * p) / q;
    const double C216582 = C170583 * p;
    const double C216904 = C177699 / q;
    const double C93579 = C216870 - (C177667 * C216041) / q - (C177699 * p) / q;
    const double C94397 = C177667 / C143578 - (C177699 * C216041) / q +
                          C216905 - (C179010 * p) / q;
    const double C216581 = C170584 * p;
    const double C170671 = (3 * C170583) / C143578 - (C170584 * C216044) / q +
                           C217048 - (C183621 * p) / q;
    const double C183606 = (2 * C170584) / q - (C183621 * C216044) / q +
                           C217192 - (C188732 * p) / q;
    const double C216629 = C171965 * p;
    const double C182868 = (3 * C171965) / C143578 -
                           (C188336 * be + C182823 * C216043) / q + C217176 -
                           (C188341 * p) / q;
    const double C217134 = C175885 / q;
    const double C92165 = C216800 - (C175869 * C216041) / q - (C175885 * p) / q;
    const double C175050 = C175869 / C143578 - (C175885 * C216041) / q +
                           C217133 - (C185814 * p) / q;
    const double C217073 = C171517 / q;
    const double C216619 = C171517 * p;
    const double C171126 = C170804 / C143578 -
                           (C183893 * be + C171517 * C216043) / q + C217072 -
                           (C183898 * p) / q;
    const double C182701 = (3 * C175440) / C143578 - (C182671 * C216041) / q +
                           C217175 - (C188202 * p) / q;
    const double C216534 = C169873 * p;
    const double C182838 = (3 * C169873) / C143578 -
                           (C188304 * be + C182732 * C216043) / q + C217174 -
                           (C188309 * p) / q;
    const double C182686 = (3 * C174991) / C143578 - (C182641 * C216041) / q +
                           C217174 - (C188187 * p) / q;
    const double C216636 = C169683 / q;
    const double C216516 = C169683 * p;
    const double C216888 = C177214 / q;
    const double C93021 = C216855 - (C177198 * C216041) / q - (C177214 * p) / q;
    const double C94118 = C177198 / C143578 - (C177214 * C216041) / q +
                          C216889 - (C178561 * p) / q;
    const double C217029 = C169668 / q;
    const double C216515 = C169668 * p;
    const double C217051 = C170320 / q;
    const double C216564 = C170320 * p;
    const double C170380 = C170319 / C143578 -
                           (C183452 * be + C170320 * C216043) / q + C217047 -
                           (C183457 * p) / q;
    const double C217104 = C174109 / q;
    const double C91067 = C216725 - (C174077 * C216041) / q - (C174109 * p) / q;
    const double C174078 = C174077 / C143578 - (C174109 * C216041) / q +
                           C217105 - (C185163 * p) / q;
    const double C216631 = C170336 / q;
    const double C216565 = C170336 * p;
    const double C216792 = C174125 / q;
    const double C91068 = C216726 - (C174093 * C216041) / q - (C174125 * p) / q;
    const double C91886 = C174093 / C143578 - (C174125 * C216041) / q +
                          C216793 - (C175440 * p) / q;
    const double C217087 = C173201 / q;
    const double C90481 = C216694 - (C173169 * C216041) / q - (C173201 * p) / q;
    const double C173170 = C173169 / C143578 - (C173201 * C216041) / q +
                           C217088 - (C184606 * p) / q;
    const double C216497 = C169405 * p;
    const double C216778 = C173217 / q;
    const double C90482 = C216695 - (C173185 * C216041) / q - (C173217 * p) / q;
    const double C91607 = C173185 / C143578 - (C173217 * C216041) / q +
                          C216779 - (C174991 * p) / q;
    const double C216496 = C169406 * p;
    const double C169464 = (3 * C169405) / C143578 -
                           (C182787 * be + C169406 * C216043) / q + C217011 -
                           (C182792 * p) / q;
    const double C182776 = (2 * C169406) / q -
                           (C188243 * be + C182792 * C216043) / q + C217178 -
                           (C188248 * p) / q;
    const double C216580 = C168626 / q;
    const double C216451 = C168626 * p;
    const double C216548 = C170052 / q;
    const double C92471 = C216811 - (C176342 * C216041) / q - (C170052 * p) / q;
    const double C216621 = C168610 / q;
    const double C216450 = C168610 * p;
    const double C92462 = C176342 / C143578 - (C170052 * C216041) / q +
                          C216810 - (C170021 * p) / q;
    const double C216992 = C168594 / q;
    const double C216449 = C168594 * p;
    const double C170022 = (3 * C170021) / C143578 - (C170054 * C216041) / q +
                           C217042 - (C183178 * p) / q;
    const double C183149 = (2 * C170054) / q - (C183178 * C216041) / q +
                           C217170 - (C188476 * p) / q;
    const double C216495 = C168231 / q;
    const double C216432 = C168231 * p;
    const double C216475 = C169138 / q;
    const double C89929 = C216648 - (C172293 * C216041) / q - (C169138 * p) / q;
    const double C216607 = C168215 / q;
    const double C216431 = C168215 * p;
    const double C89920 = C172293 / C143578 - (C169138 * C216041) / q +
                          C216647 - (C169107 * p) / q;
    const double C216977 = C168199 / q;
    const double C216430 = C168199 * p;
    const double C168289 = C168198 / C143578 -
                           (C182021 * be + C168199 * C216043) / q + C216967 -
                           (C182026 * p) / q;
    const double C169108 = (3 * C169107) / C143578 - (C169140 * C216041) / q +
                           C217007 - (C182540 * p) / q;
    const double C182511 = (2 * C169140) / q - (C182540 * C216041) / q +
                           C217165 - (C188130 * p) / q;
    const double C210504 =
        C218431 - (C213631 * C216043) / q - (C213632 * p) / q;
    const double C208765 =
        C218410 - (C212916 * be + C208825 * C216044) / q - (C212922 * p) / q;
    const double C208584 =
        C218413 - (C212778 * be + C212784 * C216044) / q - (C212785 * p) / q;
    const double C210343 =
        C218432 - (C213529 * C216041) / q - (C213530 * p) / q;
    const double C209046 =
        C218422 - (C213084 * C216041) / q - (C213085 * p) / q;
    const double C207263 =
        C218402 - (C212381 * C216043) / q - (C212382 * p) / q;
    const double C206737 =
        C218388 - (C212123 * be + C206825 * C216044) / q - (C212129 * p) / q;
    const double C210251 =
        C218406 - (C213427 * C216043) / q - (C213428 * p) / q;
    const double C211125 =
        C218426 - (C213815 * C216041) / q - (C213816 * p) / q;
    const double C208495 =
        C218412 - (C212722 * C216041) / q - (C212723 * p) / q;
    const double C206558 =
        C218392 - (C211986 * be + C209672 * C216044) / q - (C211992 * p) / q;
    const double C209855 =
        C218417 - (C213368 * C216041) / q - (C213369 * p) / q;
    const double C206060 =
        C218375 - (C211776 * be + C206162 * C216044) / q - (C211782 * p) / q;
    const double C205856 =
        C218376 - (C211689 * C216043) / q - (C211690 * p) / q;
    const double C205797 =
        C218379 - (C211638 * be + C207727 * C216044) / q - (C211644 * p) / q;
    const double C207013 =
        C218384 - (C212220 * C216043) / q - (C212221 * p) / q;
    const double C205562 =
        C218372 - (C211501 * be + C211507 * C216044) / q - (C211508 * p) / q;
    const double C205517 =
        C218372 - (C211461 * C216043) / q - (C211462 * p) / q;
    const double C218341 = C209429 * p;
    const double C201828 =
        C218360 - (C210473 * C216043) / q - (C210474 * p) / q;
    const double C210519 = C210473 / C143578 - (C210474 * C216043) / q +
                           C218432 - (C213647 * p) / q;
    const double C201680 =
        C218357 - (C202177 * C216043) / q - (C210358 * p) / q;
    const double C210489 = C202177 / C143578 - (C210358 * C216043) / q +
                           C218430 - (C213616 * p) / q;
    const double C218330 = C209264 * p;
    const double C197525 =
        C218303 - (C208713 * be + C197786 * C216044) / q - (C208719 * p) / q;
    const double C208795 = C197786 / C143578 -
                           (C212948 * be + C208719 * C216044) / q + C218412 -
                           (C212954 * p) / q;
    const double C218307 = C208659 * p;
    const double C208780 = C197757 / C143578 -
                           (C212932 * be + C208659 * C216044) / q + C218411 -
                           (C212938 * p) / q;
    const double C218280 = C207484 * p;
    const double C201564 =
        C218360 - (C210297 * C216041) / q - (C210298 * p) / q;
    const double C210328 = C210297 / C143578 - (C210298 * C216041) / q +
                           C218431 - (C213514 * p) / q;
    const double C201506 =
        C218359 - (C210266 * C216041) / q - (C210267 * p) / q;
    const double C210313 = C210266 / C143578 - (C210267 * C216041) / q +
                           C218430 - (C213499 * p) / q;
    const double C218272 = C207337 * p;
    const double C218245 = C206722 * p;
    const double C194209 =
        C218262 - (C203129 * C216043) / q - (C207233 * p) / q;
    const double C207278 = C203129 / C143578 - (C207233 * C216043) / q +
                           C218403 - (C212397 * p) / q;
    const double C197994 =
        C218321 - (C209000 * C216041) / q - (C209001 * p) / q;
    const double C209031 = C209000 / C143578 - (C209001 * C216041) / q +
                           C218421 - (C213069 * p) / q;
    const double C218242 = C206692 * p;
    const double C206767 = C193735 / C143578 -
                           (C212155 * be + C206692 * C216044) / q + C218390 -
                           (C212161 * p) / q;
    const double C197936 =
        C218320 - (C208969 * C216041) / q - (C208970 * p) / q;
    const double C209016 = C208969 / C143578 - (C208970 * C216041) / q +
                           C218420 - (C213054 * p) / q;
    const double C218238 = C206633 * p;
    const double C206752 = C193705 / C143578 -
                           (C212139 * be + C206633 * C216044) / q + C218389 -
                           (C212145 * p) / q;
    const double C194061 =
        C218256 - (C194559 * C216043) / q - (C207118 * p) / q;
    const double C207248 = C194559 / C143578 - (C207118 * C216043) / q +
                           C218401 - (C212366 * p) / q;
    const double C197087 =
        C218304 - (C208449 * C216041) / q - (C208450 * p) / q;
    const double C208480 = C208449 / C143578 - (C208450 * C216041) / q +
                           C218411 - (C212707 * p) / q;
    const double C197029 =
        C218303 - (C208418 * C216041) / q - (C208419 * p) / q;
    const double C208465 = C208418 / C143578 - (C208419 * C216041) / q +
                           C218410 - (C212692 * p) / q;
    const double C218205 = C206015 * p;
    const double C206118 = C192806 / C143578 -
                           (C211808 * be + C206015 * C216044) / q + C218377 -
                           (C211814 * p) / q;
    const double C192322 =
        C218177 - (C182403 * be + C192762 * C216044) / q - (C205900 * p) / q;
    const double C206089 = C192762 / C143578 -
                           (C211792 * be + C205900 * C216044) / q + C218376 -
                           (C211798 * p) / q;
    const double C192148 =
        C218183 - (C195514 * C216043) / q - (C205812 * p) / q;
    const double C205885 = C195514 / C143578 - (C205812 * C216043) / q +
                           C218377 - (C211705 * p) / q;
    const double C191927 =
        C218177 - (C192674 * C216043) / q - (C205652 * p) / q;
    const double C205827 = C192674 / C143578 - (C205652 * C216043) / q +
                           C218375 - (C211674 * p) / q;
    const double C217988 = C198698 * p;
    const double C209385 = (3 * C198698) / C143578 -
                           (C213290 * be + C209309 * C216044) / q + C218422 -
                           (C213296 * p) / q;
    const double C209249 = (3 * C203347) / C143578 - (C209204 * C216043) / q +
                           C218422 - (C213187 * p) / q;
    const double C217986 = C198668 * p;
    const double C209370 = (3 * C198668) / C143578 -
                           (C213274 * be + C209264 * C216044) / q + C218421 -
                           (C213280 * p) / q;
    const double C218371 = C202901 / q;
    const double C218122 = C202901 * p;
    const double C202511 = C202192 / C143578 - (C202901 * C216043) / q +
                           C218369 - (C210830 * p) / q;
    const double C217984 = C198609 * p;
    const double C209219 = (3 * C198609) / C143578 - (C209061 * C216043) / q +
                           C218420 - (C213157 * p) / q;
    const double C218349 = C199018 / q;
    const double C218001 = C199018 * p;
    const double C218362 = C201710 / q;
    const double C138241 =
        C218083 - (C201709 * C216043) / q - (C201710 * p) / q;
    const double C201770 = C201709 / C143578 - (C201710 * C216043) / q +
                           C218359 - (C210444 * p) / q;
    const double C217970 = C198405 * p;
    const double C218132 = C201726 / q;
    const double C138242 =
        C218084 - (C201725 * C216043) / q - (C201726 * p) / q;
    const double C217969 = C198406 * p;
    const double C198493 = (3 * C198405) / C143578 -
                           (C209334 * be + C198406 * C216044) / q + C218321 -
                           (C209340 * p) / q;
    const double C209324 = (2 * C198406) / q -
                           (C213227 * be + C209340 * C216044) / q + C218426 -
                           (C213233 * p) / q;
    const double C218017 = C197510 / q;
    const double C217926 = C197510 * p;
    const double C218311 = C197495 / q;
    const double C217925 = C197495 * p;
    const double C197583 = C197494 / C143578 -
                           (C208744 * be + C197495 * C216044) / q + C218304 -
                           (C208750 * p) / q;
    const double C198202 = (3 * C198140) / C143578 - (C198141 * C216043) / q +
                           C218320 - (C209175 * p) / q;
    const double C209160 = (2 * C198141) / q - (C209175 * C216043) / q +
                           C218417 - (C213114 * p) / q;
    const double C217968 = C196608 / q;
    const double C217889 = C196608 * p;
    const double C217954 = C198139 / q;
    const double C137153 =
        C218025 - (C200391 * C216043) / q - (C198139 * p) / q;
    const double C218013 = C196592 / q;
    const double C217888 = C196592 * p;
    const double C218108 = C200376 / q;
    const double C218037 = C200376 * p;
    const double C217812 = C194650 * p;
    const double C207412 = (3 * C194650) / C143578 -
                           (C212500 * be + C207337 * C216044) / q + C218403 -
                           (C212506 * p) / q;
    const double C218370 = C203217 / q;
    const double C139196 =
        C218129 - (C203201 * C216041) / q - (C203217 * p) / q;
    const double C202382 = C203201 / C143578 - (C203217 * C216041) / q +
                           C218369 - (C210787 * p) / q;
    const double C217810 = C194620 * p;
    const double C207397 = (3 * C194620) / C143578 -
                           (C212484 * be + C207293 * C216044) / q + C218402 -
                           (C212490 * p) / q;
    const double C207088 = (3 * C202771) / C143578 - (C207058 * C216041) / q +
                           C218402 - (C212279 * p) / q;
    const double C218288 = C194969 / q;
    const double C217824 = C194969 * p;
    const double C207073 = (3 * C202323) / C143578 - (C207028 * C216041) / q +
                           C218401 - (C212264 * p) / q;
    const double C218356 = C201446 / q;
    const double C138070 =
        C218083 - (C201414 * C216041) / q - (C201446 * p) / q;
    const double C201415 = C201414 / C143578 - (C201446 * C216041) / q +
                           C218357 - (C210194 * p) / q;
    const double C217796 = C194354 * p;
    const double C218118 = C201462 / q;
    const double C138071 =
        C218084 - (C201430 * C216041) / q - (C201462 * p) / q;
    const double C138917 = C201430 / C143578 - (C201462 * C216041) / q +
                           C218119 - (C202771 * p) / q;
    const double C217795 = C194355 * p;
    const double C194442 = (3 * C194354) / C143578 -
                           (C187333 * be + C194355 * C216044) / q + C218262 -
                           (C207367 * p) / q;
    const double C207352 = (2 * C194355) / q -
                           (C212437 * be + C207367 * C216044) / q + C218406 -
                           (C212443 * p) / q;
    const double C217843 = C195733 * p;
    const double C206618 = (3 * C195733) / C143578 - (C206573 * C216043) / q +
                           C218390 - (C212052 * p) / q;
    const double C218348 = C199649 / q;
    const double C136685 =
        C218014 - (C199633 * C216041) / q - (C199649 * p) / q;
    const double C198816 = C199633 / C143578 - (C199649 * C216041) / q +
                           C218347 - (C209544 * p) / q;
    const double C218287 = C195286 / q;
    const double C217833 = C195286 * p;
    const double C194896 = C194575 / C143578 - (C195286 * C216043) / q +
                           C218286 - (C207642 * p) / q;
    const double C206454 = (3 * C199205) / C143578 - (C206424 * C216041) / q +
                           C218389 - (C211916 * p) / q;
    const double C217748 = C193645 * p;
    const double C206588 = (3 * C193645) / C143578 - (C206484 * C216043) / q +
                           C218388 - (C212022 * p) / q;
    const double C206439 = (3 * C198757) / C143578 - (C206394 * C216041) / q +
                           C218388 - (C211901 * p) / q;
    const double C217850 = C193455 / q;
    const double C217730 = C193455 * p;
    const double C218102 = C200977 / q;
    const double C137538 =
        C218069 - (C200961 * C216041) / q - (C200977 * p) / q;
    const double C138638 = C200961 / C143578 - (C200977 * C216041) / q +
                           C218103 - (C202323 * p) / q;
    const double C218243 = C193440 / q;
    const double C217729 = C193440 * p;
    const double C218265 = C194091 / q;
    const double C217778 = C194091 * p;
    const double C194151 = C194090 / C143578 - (C194091 * C216043) / q +
                           C218261 - (C207204 * p) / q;
    const double C218318 = C197876 / q;
    const double C135587 =
        C217939 - (C197844 * C216041) / q - (C197876 * p) / q;
    const double C197845 = C197844 / C143578 - (C197876 * C216041) / q +
                           C218319 - (C208898 * p) / q;
    const double C217845 = C194107 / q;
    const double C217779 = C194107 * p;
    const double C218006 = C197892 / q;
    const double C135588 =
        C217940 - (C197860 * C216041) / q - (C197892 * p) / q;
    const double C136406 = C197860 / C143578 - (C197892 * C216041) / q +
                           C218007 - (C199205 * p) / q;
    const double C218301 = C196969 / q;
    const double C135029 =
        C217908 - (C196937 * C216041) / q - (C196969 * p) / q;
    const double C196938 = C196937 / C143578 - (C196969 * C216041) / q +
                           C218302 - (C208346 * p) / q;
    const double C217711 = C193177 * p;
    const double C217992 = C196985 / q;
    const double C135030 =
        C217909 - (C196953 * C216041) / q - (C196985 * p) / q;
    const double C136127 = C196953 / C143578 - (C196985 * C216041) / q +
                           C217993 - (C198757 * p) / q;
    const double C217710 = C193178 * p;
    const double C193236 = (3 * C193177) / C143578 - (C193178 * C216043) / q +
                           C218225 - (C206543 * p) / q;
    const double C206528 = (2 * C193178) / q - (C206543 * C216043) / q +
                           C218392 - (C211961 * p) / q;
    const double C217794 = C192399 / q;
    const double C217665 = C192399 * p;
    const double C217762 = C193824 / q;
    const double C136991 =
        C218025 - (C200105 * C216041) / q - (C193824 * p) / q;
    const double C217835 = C192383 / q;
    const double C217664 = C192383 * p;
    const double C136982 = C200105 / C143578 - (C193824 * C216041) / q +
                           C218024 - (C193793 * p) / q;
    const double C218206 = C192367 / q;
    const double C217663 = C192367 * p;
    const double C193794 = (3 * C193793) / C143578 - (C193826 * C216041) / q +
                           C218256 - (C206927 * p) / q;
    const double C206898 = (2 * C193826) / q - (C206927 * C216041) / q +
                           C218384 - (C212191 * p) / q;
    const double C217709 = C192004 / q;
    const double C217646 = C192004 * p;
    const double C217689 = C192911 / q;
    const double C134480 =
        C217862 - (C196061 * C216041) / q - (C192911 * p) / q;
    const double C217821 = C191988 / q;
    const double C217645 = C191988 * p;
    const double C134471 = C196061 / C143578 - (C192911 * C216041) / q +
                           C217861 - (C192880 * p) / q;
    const double C218191 = C191972 / q;
    const double C217644 = C191972 * p;
    const double C192062 = C191971 / C143578 - (C191972 * C216043) / q +
                           C218181 - (C205782 * p) / q;
    const double C192881 = (3 * C192880) / C143578 - (C192913 * C216041) / q +
                           C218221 - (C206293 * p) / q;
    const double C206264 = (2 * C192913) / q - (C206293 * C216041) / q +
                           C218379 - (C211844 * p) / q;
    const double C144590 =
        C215777 - (C144457 * C216044) / q + C215752 - (C158399 * p) / q;
    const double C147230 =
        C215777 - (C144905 * C216043) / q - (C160114 * p) / q;
    const double C158384 =
        C215775 - (C158399 * C216044) / q + C215953 - (C164219 * p) / q;
    const double C216059 = C215232 / q;
    const double C146451 =
        C215404 - (C146752 * C216044) / q + C215825 - (C159675 * p) / q;
    const double C216060 = C215233 / q;
    const double C216061 = C215234 / q;
    const double C43133 =
        C215248 - (C144886 * be + C144488 * C216041) / q - (C144472 * p) / q;
    const double C43143 = -(C144456 * C216043 + C215249) / q;
    const double C44540 = (3 * C144935) / C143578 -
                          (C147242 * be + C144920 * C216041) / q - C215249 / q;
    const double C145789 =
        C215395 - (C145820 * C216043) / q - (C159193 * p) / q;
    const double C43144 = -(C144472 * C216043 + C215250) / q;
    const double C43154 = -(C144488 * C216043 + C215251) / q;
    const double C216106 = C215324 / q;
    const double C159075 =
        C215812 - (C159090 * C216044) / q + C215966 - (C164568 * p) / q;
    const double C216089 = C215298 / q;
    const double C216090 = C215299 / q;
    const double C44262 = -(C144489 * C216043 + C215299) / q;
    const double C45707 = -(C149040 * be + C148784 * C216041 + C215472) / q;
    const double C50811 = C215725 - (C145836 * C216043) / q - C215472 / q;
    const double C216104 = C215320 / q;
    const double C43686 =
        C215321 - (C145832 * be + C144935 * C216041) / q - C215250 / q;
    const double C216105 = C215322 / q;
    const double C216133 = C215365 / q;
    const double C216132 = C215364 / q;
    const double C48280 = -(C153163 * be + C152907 * C216041 + C215634) / q;
    const double C51985 =
        C215725 - (C146768 * C216044) / q + C215734 - C215634 / q;
    const double C216141 = C215379 / q;
    const double C215719 = C144441 / C143578;
    const double C216159 = C215381 / q;
    const double C44261 = -(C146480 * C216043 + C215381) / q;
    const double C159764 =
        C215857 - (C159866 * C216044) / q + C215970 - (C164946 * p) / q;
    const double C216142 = C215393 / q;
    const double C44828 = -(C144473 * C216043 + C215393) / q;
    const double C50621 = C215704 - (C145836 * C216044) / q - C215718 / q;
    const double C52175 = -(C146768 * C216043 + C215718) / q;
    const double C53737 = -(C157691 * be + C150928 * C216041 + C215718) / q;
    const double C216171 = C215457 / q;
    const double C46817 = -(C150894 * be + C148785 * C216041 + C215457) / q;
    const double C216172 = C215458 / q;
    const double C45717 = C215321 - (C145819 * C216043) / q - C215473 / q;
    const double C46259 = -(C149966 * be + C149074 * C216041 + C215473) / q;
    const double C50792 =
        C215724 - (C156368 * be + C145836 * C216041) / q - C215251 / q;
    const double C45727 = C215474 - (C148784 * C216043) / q - (C149074 * p) / q;
    const double C161143 =
        C215880 - (C161158 * C216044) / q + C215986 - (C165370 * p) / q;
    const double C216181 = C215494 / q;
    const double C150643 =
        C215586 - (C150913 * C216044) / q + C215889 - (C161728 * p) / q;
    const double C216182 = C215495 / q;
    const double C46258 = -(C149950 * be + C149685 * C216041 + C215503) / q;
    const double C47122 =
        (3 * C145819) / C143578 - (C149058 * C216043) / q - C215503 / q;
    const double C216208 = C215539 / q;
    const double C216207 = C215538 / q;
    const double C216226 = C215555 / q;
    const double C46816 = -(C150878 * be + C150613 * C216041 + C215555) / q;
    const double C48300 = -(C152907 * C216043 + C215636) / q;
    const double C53566 =
        C215724 - (C150928 * C216044) / q + C215744 - C215636 / q;
    const double C216217 = C215557 / q;
    const double C148814 = C215793 - (C149073 * C216044) / q - C215864 / q;
    const double C157240 = -(C152906 * C216043 + C215864) / q;
    const double C161773 =
        C215918 - (C161847 * C216044) / q + C215989 - (C165746 * p) / q;
    const double C216218 = C215570 / q;
    const double C47671 = -(C152288 * be + C149701 * C216041 + C215570) / q;
    const double C48090 =
        C215380 - (C146751 * C216044) / q + C215593 - C215619 / q;
    const double C49359 = -(C154530 * be + C152908 * C216041 + C215619) / q;
    const double C48100 =
        C215620 - (C152907 * C216044) / q + C215594 - (C152908 * p) / q;
    const double C48290 = -(C146751 * C216043 + C215635) / q;
    const double C48802 = -(C153619 * be + C150912 * C216041 + C215635) / q;
    const double C51408 =
        C145836 / C143578 - (C148165 * C216044) / q + C215726 - C215635 / q;
    const double C48649 =
        C215558 - (C150912 * C216044) / q + C215638 - C215646 / q;
    const double C49377 = -(C152908 * C216043 + C215646) / q;
    const double C215658 = C49197 / C143578;
    const double C215657 = C49196 / C143578;
    const double C49358 = -(C154514 * be + C154249 * C216041 + C215668) / q;
    const double C49853 = (3 * C146751) / C143578 - (C152891 * C216044) / q +
                          C215688 - C215668 / q;
    const double C49376 = -(C154249 * C216043 + C215669) / q;
    const double C50132 = (3 * C150912) / C143578 - (C153494 * C216044) / q +
                          C215698 - C215669 / q;
    const double C49574 =
        C215423 - (C153181 * C216044) / q + C215672 - C215680 / q;
    const double C49943 = -(C152891 * C216043 + C215680) / q;
    const double C50213 = -(C155924 * be + C153494 * C216041 + C215680) / q;
    const double C144504 = C215750 - (C144905 * C216044) / q - C215774 / q;
    const double C147689 = -(C144457 * C216043 + C215774) / q;
    const double C216282 = C215807 / q;
    const double C216285 = C215811 / q;
    const double C216287 = C215814 / q;
    const double C146510 =
        C215419 - (C146783 * C216044) / q + C215830 - C215841 / q;
    const double C155454 = -(C146481 * C216043 + C215841) / q;
    const double C215371 = C146568 * p;
    const double C146721 = -(C146752 * C216043 + C215849) / q;
    const double C147155 =
        C144920 / C143578 - (C147111 * C216044) / q + C215855 - C215849 / q;
    const double C216316 = C215876 / q;
    const double C215498 = C149774 * p;
    const double C46240 = -(C149920 * be + C46276 * C216041 + C149924 * p) / q;
    const double C216327 = C215899 / q;
    const double C215546 = C150701 * p;
    const double C216335 = C215910 / q;
    const double C152994 =
        C215922 - (C152906 * C216044) / q + C215828 - (C152907 * p) / q;
    const double C156356 =
        C215922 - (C149073 * C216043) / q - (C148784 * p) / q;
    const double C215751 = C157927 / C143578;
    const double C215664 = C154220 * p;
    const double C215665 = C154279 * p;
    const double C49250 = (2 * C49197) / q - (C49196 * C216044) / q +
                          C154249 / q - (C154337 * p) / q;
    const double C154488 = -(C154518 * C216043 + C215935) / q;
    const double C154920 = (3 * C153181) / C143578 - (C154876 * C216044) / q +
                           C215938 - C215935 / q;
    const double C215762 = C158151 * p;
    const double C215778 = C158414 * p;
    const double C215780 = C158443 * p;
    const double C215782 = C158472 * p;
    const double C215802 = C158926 * p;
    const double C215815 = C159105 * p;
    const double C215816 = C159120 * p;
    const double C215817 = C159135 * p;
    const double C215842 = C159734 * p;
    const double C215844 = C159779 * p;
    const double C215846 = C159794 * p;
    const double C215882 = C161188 * p;
    const double C215883 = C161203 * p;
    const double C215902 = C161743 * p;
    const double C215906 = C161788 * p;
    const double C215907 = C161803 * p;
    const double C154308 = (5 * C49196) / C143578 - (C154337 * C216044) / q +
                           C154250 / q - (C163040 * p) / q;
    const double C215933 = C163070 * p;
    const double C168727 =
        C216994 - (C168594 * C216044) / q + C216969 - (C182290 * p) / q;
    const double C171314 =
        C216994 - (C183979 * be + C169033 * C216043) / q - (C183984 * p) / q;
    const double C87903 = C216465 - (C168625 * C216041) / q - (C168609 * p) / q;
    const double C87912 = -(C144855 * be + C168593 * C216043 + C216466) / q;
    const double C89308 =
        (3 * C169063) / C143578 - (C169048 * C216041) / q - C216466 / q;
    const double C169903 =
        C216612 - (C183071 * be + C169933 * C216043) / q - (C183076 * p) / q;
    const double C87913 = -(C144871 * be + C168609 * C216043 + C216467) / q;
    const double C87922 = -(C144886 * be + C168625 * C216043 + C216468) / q;
    const double C217320 = C216541 / q;
    const double C90415 = -(C172839 * C216041 + C216689) / q;
    const double C95455 =
        C216942 - (C156368 * be + C169948 * C216043) / q - C216689 / q;
    const double C217318 = C216537 / q;
    const double C88454 = C216538 - (C169063 * C216041) / q - C216467 / q;
    const double C217319 = C216539 / q;
    const double C92957 = -(C176885 * C216041 + C216851) / q;
    const double C96587 =
        C216942 - (C170864 * C216044) / q + C216951 - C216851 / q;
    const double C216936 = C168578 / C143578;
    const double C95285 = C216921 - (C169948 * C216044) / q - C216935 / q;
    const double C96757 = -(C157252 * be + C170864 * C216043 + C216935) / q;
    const double C98259 = -(C174947 * C216041 + C216935) / q;
    const double C90424 =
        C216538 - (C149025 * be + C169932 * C216043) / q - C216690 / q;
    const double C90995 = -(C173125 * C216041 + C216690) / q;
    const double C95438 = C216941 - (C169948 * C216041) / q - C216468 / q;
    const double C90433 =
        C216691 - (C149040 * be + C172839 * C216043) / q - (C173125 * p) / q;
    const double C90994 = -(C173727 * C216041 + C216720) / q;
    const double C91859 = (3 * C169932) / C143578 -
                          (C151373 * be + C173109 * C216043) / q - C216720 / q;
    const double C92975 = -(C153163 * be + C176885 * C216043 + C216853) / q;
    const double C98106 =
        C216941 - (C174947 * C216044) / q + C216961 - C216853 / q;
    const double C172869 = C217010 - (C173124 * C216044) / q - C217081 / q;
    const double C181148 = -(C187658 * be + C176884 * C216043 + C217081) / q;
    const double C92786 =
        C216597 - (C170848 * C216044) / q + C216810 - C216836 / q;
    const double C94065 = -(C176886 * C216041 + C216836) / q;
    const double C92795 =
        C216837 - (C176885 * C216044) / q + C216811 - (C176886 * p) / q;
    const double C92966 = -(C153148 * be + C170848 * C216043 + C216852) / q;
    const double C93507 = -(C174931 * C216041 + C216852) / q;
    const double C96052 =
        C169948 / C143578 - (C172222 * C216044) / q + C216943 - C216852 / q;
    const double C93345 =
        C216775 - (C174931 * C216044) / q + C216855 - C216863 / q;
    const double C94083 = -(C154530 * be + C176886 * C216043 + C216863) / q;
    const double C216875 = C93903 / C143578;
    const double C216874 = C93902 / C143578;
    const double C94064 = -(C178211 * C216041 + C216885) / q;
    const double C94559 = (3 * C170848) / C143578 - (C176869 * C216044) / q +
                          C216905 - C216885 / q;
    const double C94082 = -(C154514 * be + C178211 * C216043 + C216886) / q;
    const double C94838 = (3 * C174931) / C143578 - (C177467 * C216044) / q +
                          C216915 - C216886 / q;
    const double C94280 =
        C216640 - (C177155 * C216044) / q + C216889 - C216897 / q;
    const double C94649 = -(C155466 * be + C176869 * C216043 + C216897) / q;
    const double C94919 = -(C177467 * C216041 + C216897) / q;
    const double C90975 = -(C91013 * C216041 + C173961 * p) / q;
    const double C176972 =
        C217139 - (C176884 * C216044) / q + C217045 - (C176885 * p) / q;
    const double C180270 =
        C217139 - (C187546 * be + C173124 * C216043) / q - (C172839 * p) / q;
    const double C216968 = C181817 / C143578;
    const double C216881 = C178182 * p;
    const double C216882 = C178241 * p;
    const double C93956 = (2 * C93903) / q - (C93902 * C216044) / q +
                          C178211 / q - (C178299 * p) / q;
    const double C178445 = -(C186975 * be + C178474 * C216043 + C217152) / q;
    const double C178867 = (3 * C177155) / C143578 - (C178823 * C216044) / q +
                           C217155 - C217152 / q;
    const double C178270 = (5 * C93902) / C143578 - (C178299 * C216044) / q +
                           C178212 / q - (C186875 * p) / q;
    const double C217150 = C186905 * p;
    const double C192500 = C218208 - (C184121 * be + C192367 * C216044) / q +
                           C218183 - (C206045 * p) / q;
    const double C195084 =
        C218208 - (C192806 * C216043) / q - (C207727 * p) / q;
    const double C132454 =
        C217679 - (C192398 * C216041) / q - (C192382 * p) / q;
    const double C132463 = -(C192366 * C216043 + C217680) / q;
    const double C133859 =
        (3 * C192836) / C143578 - (C192821 * C216041) / q - C217680 / q;
    const double C193675 =
        C217826 - (C193705 * C216043) / q - (C206825 * p) / q;
    const double C132464 = -(C192382 * C216043 + C217681) / q;
    const double C132473 = -(C192398 * C216043 + C217682) / q;
    const double C218534 = C217755 / q;
    const double C134966 = -(C196607 * C216041 + C217903) / q;
    const double C139975 = C218156 - (C193720 * C216043) / q - C217903 / q;
    const double C218532 = C217751 / q;
    const double C133005 = C217752 - (C192836 * C216041) / q - C217681 / q;
    const double C218533 = C217753 / q;
    const double C137477 = -(C200648 * C216041 + C218065) / q;
    const double C141107 = C218156 - (C157252 * be + C194635 * C216044) / q +
                           C218165 - C218065 / q;
    const double C218150 = C192351 / C143578;
    const double C139805 =
        C218135 - (C156368 * be + C193720 * C216044) / q - C218149 / q;
    const double C141277 = -(C194635 * C216043 + C218149) / q;
    const double C142779 = -(C198713 * C216041 + C218149) / q;
    const double C134975 = C217752 - (C193704 * C216043) / q - C217904 / q;
    const double C135516 = -(C196893 * C216041 + C217904) / q;
    const double C139958 = C218155 - (C193720 * C216041) / q - C217682 / q;
    const double C134984 =
        C217905 - (C196607 * C216043) / q - (C196893 * p) / q;
    const double C135515 = -(C197494 * C216041 + C217934) / q;
    const double C136379 =
        (3 * C193704) / C143578 - (C196877 * C216043) / q - C217934 / q;
    const double C137495 = -(C200648 * C216043 + C218067) / q;
    const double C142626 = C218155 - (C157691 * be + C198713 * C216044) / q +
                           C218175 - C218067 / q;
    const double C196637 =
        C218224 - (C187546 * be + C196892 * C216044) / q - C218295 / q;
    const double C204907 = -(C200647 * C216043 + C218295) / q;
    const double C137306 = C217811 - (C153148 * be + C194619 * C216044) / q +
                           C218024 - C218050 / q;
    const double C138584 = -(C200649 * C216041 + C218050) / q;
    const double C137315 = C218051 - (C153163 * be + C200648 * C216044) / q +
                           C218025 - (C200649 * p) / q;
    const double C137486 = -(C194619 * C216043 + C218066) / q;
    const double C137997 = -(C198697 * C216041 + C218066) / q;
    const double C140572 = C193720 / C143578 -
                           (C156807 * be + C195990 * C216044) / q + C218157 -
                           C218066 / q;
    const double C137844 = C217989 - (C153619 * be + C198697 * C216044) / q +
                           C218069 - C218077 / q;
    const double C138603 = -(C200649 * C216043 + C218077) / q;
    const double C218089 = C138413 / C143578;
    const double C218088 = C138412 / C143578;
    const double C138583 = -(C201973 * C216041 + C218099) / q;
    const double C139079 = (3 * C194619) / C143578 -
                           (C155466 * be + C200632 * C216044) / q + C218119 -
                           C218099 / q;
    const double C138602 = -(C201973 * C216043 + C218100) / q;
    const double C139358 = (3 * C198697) / C143578 -
                           (C155924 * be + C201230 * C216044) / q + C218129 -
                           C218100 / q;
    const double C138800 = C217854 - (C155007 * be + C200918 * C216044) / q +
                           C218103 - C218111 / q;
    const double C139169 = -(C200632 * C216043 + C218111) / q;
    const double C139439 = -(C201230 * C216041 + C218111) / q;
    const double C135497 = -(C135533 * C216041 + C197728 * p) / q;
    const double C200735 = C218353 - (C187658 * be + C200647 * C216044) / q +
                           C218259 - (C200648 * p) / q;
    const double C204029 =
        C218353 - (C196892 * C216043) / q - (C196607 * p) / q;
    const double C218182 = C205576 / C143578;
    const double C218095 = C201944 * p;
    const double C218096 = C202003 * p;
    const double C138469 = (2 * C138413) / q -
                           (C154216 * be + C138412 * C216044) / q +
                           C201973 / q - (C202061 * p) / q;
    const double C202207 = -(C202236 * C216043 + C218366) / q;
    const double C202628 = (3 * C200918) / C143578 -
                           (C187462 * be + C202584 * C216044) / q + C218369 -
                           C218366 / q;
    const double C202032 = (5 * C138412) / C143578 -
                           (C210589 * be + C202061 * C216044) / q +
                           C201974 / q - (C210595 * p) / q;
    const double C218364 = C210626 * p;
    const double C158121 =
        C215760 - (C158136 * C216043) / q + C215948 - (C164083 * p) / q;
    const double C216046 = C215213 / q;
    const double C145254 =
        C215390 - (C145757 * C216043) / q + C215790 - (C158852 * p) / q;
    const double C216047 = C215214 / q;
    const double C216048 = C215215 / q;
    const double C43091 =
        C215247 - (C144794 * be + C144090 * C216041) / q - (C144074 * p) / q;
    const double C216078 = C215280 / q;
    const double C216077 = C215279 / q;
    const double C45667 = -(C148982 * be + C148526 * C216041 + C215470) / q;
    const double C50450 =
        C144798 / C143578 - (C145773 * C216043) / q + C215704 - C215470 / q;
    const double C216103 = C215317 / q;
    const double C215713 = C144043 / C143578;
    const double C159571 =
        C215834 - (C159586 * C216043) / q + C215966 - (C164797 * p) / q;
    const double C216116 = C215347 / q;
    const double C145400 =
        C215414 - (C147900 * C216043) / q + C215795 - (C158941 * p) / q;
    const double C216117 = C215348 / q;
    const double C44207 =
        C215376 - (C146683 * be + C146213 * C216041) / q - (C146688 * p) / q;
    const double C44208 =
        C215377 - (C146700 * be + C146229 * C216041) / q - (C146705 * p) / q;
    const double C158971 =
        C215856 - (C160029 * C216043) / q + C215958 - (C164508 * p) / q;
    const double C216145 = C215402 / q;
    const double C216154 = C215412 / q;
    const double C51814 = C215734 - (C146704 * C216043) / q - C215736 / q;
    const double C53699 = -(C157662 * be + C150361 * C216041 + C215736) / q;
    const double C45337 =
        C215318 - (C145756 * C216043) / q + C215430 - C215443 / q;
    const double C46223 = -(C149905 * be + C148527 * C216041 + C215443) / q;
    const double C45347 =
        C215444 - (C148526 * C216043) / q + C215431 - (C148527 * p) / q;
    const double C215480 = C45935 / C143578;
    const double C215479 = C45934 / C143578;
    const double C46222 = -(C149889 * be + C149420 * C216041 + C215502) / q;
    const double C46951 = (3 * C145756) / C143578 - (C148510 * C216043) / q +
                          C215562 - C215502 / q;
    const double C46492 =
        C215523 - (C150345 * C216043) / q + C215508 - (C150346 * p) / q;
    const double C46493 =
        C215524 - (C150362 * C216043) / q + C215509 - (C150363 * p) / q;
    const double C46780 = -(C150816 * be + C150345 * C216041 + C215553) / q;
    const double C49493 =
        C146687 / C143578 - (C152635 * C216043) / q + C215672 - C215553 / q;
    const double C46781 = -(C150832 * be + C150362 * C216041 + C215554) / q;
    const double C51255 =
        C146704 / C143578 - (C148133 * C216043) / q + C215726 - C215554 / q;
    const double C47230 =
        C215422 - (C150836 * C216043) / q + C215576 - C215578 / q;
    const double C47653 = -(C152257 * be + C150363 * C216041 + C215578) / q;
    const double C215584 = C47509 / C143578;
    const double C215489 = C47509 * p;
    const double C150315 =
        C215677 - (C150820 * C216043) / q + C215888 - (C161481 * p) / q;
    const double C47910 = C215593 - (C146687 * C216043) / q - C215606 / q;
    const double C48768 = -(C153590 * be + C150344 * C216041 + C215606) / q;
    const double C48230 =
        C215632 - (C153090 * be + C146687 * C216041) / q - (C146213 * p) / q;
    const double C48496 =
        C215632 - (C150344 * C216043) / q + C215638 - (C150345 * p) / q;
    const double C215609 = 3 * C47920;
    const double C215596 = C47920 / C143578;
    const double C162876 =
        C215931 - (C162891 * C216043) / q + C215995 - (C166050 * p) / q;
    const double C215654 = C49034 / C143578;
    const double C49916 =
        C215696 - (C155434 * be + C154472 * C216041) / q - (C155438 * p) / q;
    const double C50051 =
        C215696 - (C153999 * C216043) / q + C215698 - (C155664 * p) / q;
    const double C150465 =
        C215701 - (C155664 * C216043) / q + C215890 - (C161624 * p) / q;
    const double C215655 = C49035 / C143578;
    const double C161654 =
        C215940 - (C163279 * C216043) / q + C215990 - (C165656 * p) / q;
    const double C49772 = C215688 - (C154472 * C216043) / q - C215691 / q;
    const double C50195 = -(C155893 * be + C153999 * C216041 + C215691) / q;
    const double C52118 =
        C215742 - (C157221 * be + C146704 * C216041) / q - (C146229 * p) / q;
    const double C53395 =
        C215742 - (C150361 * C216043) / q + C215744 - (C150362 * p) / q;
    const double C215735 = C152763 / C143578;
    const double C48000 =
        C152763 / q - (C47920 * C216044) / q - (C49035 * p) / q;
    const double C215219 = C144149 * p;
    const double C215225 = C144235 * p;
    const double C215286 = C145342 * p;
    const double C215345 = C146184 * p;
    const double C215352 = C146274 * p;
    const double C215355 = C146332 * p;
    const double C215391 = C147035 * p;
    const double C215711 = C148585 / C143578;
    const double C215749 = C157879 / C143578;
    const double C215487 = C149391 * p;
    const double C45970 = (2 * C45935) / q - (C45934 * C216043) / q +
                          C149420 / q - (C149479 * p) / q;
    const double C215488 = C149537 * p;
    const double C215529 = C150407 * p;
    const double C215567 = C151166 * p;
    const double C215660 = C153953 * p;
    const double C215662 = C154043 * p;
    const double C49106 =
        (2 * C49035) / q - (C49034 * C216044) / q - (C154101 * p) / q;
    const double C215678 = C154800 * p;
    const double C215763 = C158181 * p;
    const double C215765 = C158210 * p;
    const double C215767 = C158239 * p;
    const double C215801 = C158896 * p;
    const double C215803 = C158956 * p;
    const double C215806 = C158986 * p;
    const double C215829 = C159390 * p;
    const double C215836 = C159630 * p;
    const double C215837 = C159645 * p;
    const double C215838 = C159660 * p;
    const double C149450 = (5 * C45934) / C143578 - (C149479 * C216043) / q +
                           C149421 / q - (C160964 * p) / q;
    const double C215875 = C161039 * p;
    const double C149626 = (2 * C47509) / q - (C149537 * C216043) / q +
                           C152028 / q - (C161054 * p) / q;
    const double C215896 = C161639 * p;
    const double C215927 = C162693 * p;
    const double C215932 = C162936 * p;
    const double C154190 =
        C162920 / q - (C154101 * C216043) / q - (C162966 * p) / q;
    const double C87865 = C216464 - (C168230 * C216041) / q - (C168214 * p) / q;
    const double C90379 = -(C172581 * C216041 + C216687) / q;
    const double C95132 = C168930 / C143578 -
                          (C156338 * be + C169888 * C216043) / q + C216921 -
                          C216687 / q;
    const double C216930 = C168183 / C143578;
    const double C88975 = C216593 - (C170319 * C216041) / q - (C170788 * p) / q;
    const double C88976 = C216594 - (C170335 * C216041) / q - (C170804 * p) / q;
    const double C96434 =
        C216951 - (C157221 * be + C170803 * C216043) / q - C216953 / q;
    const double C98225 = -(C174390 * C216041 + C216953) / q;
    const double C90082 = C216535 - (C148967 * be + C169872 * C216043) / q +
                          C216647 - C216660 / q;
    const double C90957 = -(C172582 * C216041 + C216660) / q;
    const double C90091 = C216661 - (C148982 * be + C172581 * C216043) / q +
                          C216648 - (C172582 * p) / q;
    const double C216697 = C90653 / C143578;
    const double C216696 = C90652 / C143578;
    const double C90956 = -(C173465 * C216041 + C216719) / q;
    const double C91688 = (3 * C169872) / C143578 -
                          (C151342 * be + C172565 * C216043) / q + C216779 -
                          C216719 / q;
    const double C91230 = C216741 - (C150832 * be + C174391 * C216043) / q +
                          C216726 - (C174392 * p) / q;
    const double C91518 = -(C174391 * C216041 + C216771) / q;
    const double C95899 = C170803 / C143578 -
                          (C156778 * be + C172192 * C216043) / q + C216943 -
                          C216771 / q;
    const double C91967 = C216639 - (C151799 * be + C174858 * C216043) / q +
                          C216793 - C216795 / q;
    const double C92390 = -(C174392 * C216041 + C216795) / q;
    const double C216801 = C92246 / C143578;
    const double C216706 = C92246 * p;
    const double C92912 = C216849 - (C170787 * C216041) / q - (C170319 * p) / q;
    const double C93183 = C216849 - (C153590 * be + C174373 * C216043) / q +
                          C216855 - (C174374 * p) / q;
    const double C94622 = C216913 - (C178430 * C216041) / q - (C179369 * p) / q;
    const double C94757 = C216913 - (C155893 * be + C177964 * C216043) / q +
                          C216915 - (C179588 * p) / q;
    const double C96706 = C216959 - (C170803 * C216041) / q - (C170335 * p) / q;
    const double C97953 = C216959 - (C157662 * be + C174390 * C216043) / q +
                          C216961 - (C174391 * p) / q;
    const double C216952 = C176741 / C143578;
    const double C216928 = C172640 / C143578;
    const double C216966 = C181772 / C143578;
    const double C216704 = C173436 * p;
    const double C90690 = (2 * C90653) / q -
                          (C149387 * be + C90652 * C216043) / q + C173465 / q -
                          (C173524 * p) / q;
    const double C216705 = C173582 * p;
    const double C216784 = C175180 * p;
    const double C173495 = (5 * C90652) / C143578 -
                           (C184811 * be + C173524 * C216043) / q +
                           C173466 / q - (C184816 * p) / q;
    const double C217092 = C184894 * p;
    const double C173669 = (2 * C92246) / q -
                           (C184905 * be + C173582 * C216043) / q +
                           C176016 / q - (C184910 * p) / q;
    const double C132416 =
        C217678 - (C192003 * C216041) / q - (C191987 * p) / q;
    const double C134930 = -(C196349 * C216041 + C217901) / q;
    const double C139652 =
        C192703 / C143578 - (C193660 * C216043) / q + C218135 - C217901 / q;
    const double C218144 = C191956 / C143578;
    const double C133526 =
        C217807 - (C194090 * C216041) / q - (C194559 * p) / q;
    const double C133527 =
        C217808 - (C194106 * C216041) / q - (C194575 * p) / q;
    const double C140954 = C218165 - (C194574 * C216043) / q - C218167 / q;
    const double C142745 = -(C198156 * C216041 + C218167) / q;
    const double C134633 =
        C217749 - (C193644 * C216043) / q + C217861 - C217874 / q;
    const double C135480 = -(C196350 * C216041 + C217874) / q;
    const double C134642 =
        C217875 - (C196349 * C216043) / q + C217862 - (C196350 * p) / q;
    const double C217911 = C135192 / C143578;
    const double C217910 = C135191 / C143578;
    const double C135479 = -(C197232 * C216041 + C217933) / q;
    const double C136208 = (3 * C193644) / C143578 - (C196333 * C216043) / q +
                           C217993 - C217933 / q;
    const double C135750 =
        C217955 - (C198157 * C216043) / q + C217940 - (C198158 * p) / q;
    const double C136038 = -(C198157 * C216041 + C217985) / q;
    const double C140419 =
        C194574 / C143578 - (C195960 * C216043) / q + C218157 - C217985 / q;
    const double C136487 =
        C217853 - (C198624 * C216043) / q + C218007 - C218009 / q;
    const double C136910 = -(C198158 * C216041 + C218009) / q;
    const double C218015 = C136766 / C143578;
    const double C217920 = C136766 * p;
    const double C137432 =
        C218063 - (C194558 * C216041) / q - (C194090 * p) / q;
    const double C137691 =
        C218063 - (C198139 * C216043) / q + C218069 - (C198140 * p) / q;
    const double C139142 =
        C218127 - (C202192 * C216041) / q - (C203129 * p) / q;
    const double C139277 =
        C218127 - (C201726 * C216043) / q + C218129 - (C203347 * p) / q;
    const double C141226 =
        C218173 - (C194574 * C216041) / q - (C194106 * p) / q;
    const double C142473 =
        C218173 - (C198156 * C216043) / q + C218175 - (C198157 * p) / q;
    const double C218166 = C200504 / C143578;
    const double C218142 = C196408 / C143578;
    const double C218180 = C205531 / C143578;
    const double C217918 = C197203 * p;
    const double C135227 = (2 * C135192) / q - (C135191 * C216043) / q +
                           C197232 / q - (C197291 * p) / q;
    const double C217919 = C197349 * p;
    const double C217998 = C198945 * p;
    const double C197262 = (5 * C135191) / C143578 - (C197291 * C216043) / q +
                           C197233 / q - (C208554 * p) / q;
    const double C218306 = C208629 * p;
    const double C197436 = (2 * C136766) / q - (C197349 * C216043) / q +
                           C199779 / q - (C208644 * p) / q;
    const double C215384 = C42556 / C143578;
    const double C42566 = C215188 - (C143688 * be + C143643 * C216041) / q +
                          C215189 - (C143627 * p) / q;
    const double C43199 = C215258 - (C145009 * be + C144981 * C216041) / q +
                          C215259 - (C145015 * p) / q;
    const double C43200 = C215260 - (C145027 * be + C144997 * C216041) / q +
                          C215261 - (C145033 * p) / q;
    const double C43757 = C215331 - (C145939 * be + C145911 * C216041) / q +
                          C215332 - (C145945 * p) / q;
    const double C43758 = C215333 - (C145957 * be + C145927 * C216041) / q +
                          C215334 - (C145963 * p) / q;
    const double C215196 = C44297 * p;
    const double C215204 = C44576 * p;
    const double C44855 = C215408 - (C147761 * be + C147749 * C216041) / q +
                          C215409 - (C147767 * p) / q;
    const double C215429 = C45157 * p;
    const double C215425 = 3 * C45157;
    const double C215428 = C45167 / C143578;
    const double C215426 = 3 * C45167;
    const double C160716 = C215870 - (C165076 * be + C160747 * C216041) / q +
                           C215961 - (C165080 * p) / q;
    const double C215869 = C45772 / C143578;
    const double C145078 = C215561 - (C158753 * be + C150975 * C216041) / q +
                           C215794 - (C158758 * p) / q;
    const double C215560 = C45773 / C143578;
    const double C160347 = C215887 - (C165046 * be + C161309 * C216041) / q +
                           C215966 - (C165050 * p) / q;
    const double C215517 = C46330 * p;
    const double C215504 = 3 * C46330;
    const double C145137 = C215575 - (C158785 * be + C151437 * C216041) / q +
                           C215795 - (C158790 * p) / q;
    const double C215506 = 3 * C46331;
    const double C215438 = C46331 * p;
    const double C215434 = C46870 * p;
    const double C215796 = C47149 / q;
    const double C215437 = C47149 * p;
    const double C158837 = C215917 - (C164399 * be + C161966 * C216041) / q +
                           C215959 - (C164403 * p) / q;
    const double C215484 = C47428 * p;
    const double C215592 = C47730 * p;
    const double C215588 = 3 * C47730;
    const double C215591 = C47740 / C143578;
    const double C215589 = 3 * C47740;
    const double C146008 = C215671 - (C159402 * be + C154609 * C216041) / q +
                           C215830 - (C159406 * p) / q;
    const double C215637 = 3 * C48343;
    const double C215598 = C48343 * p;
    const double C162601 = C215925 - (C165877 * be + C162632 * C216041) / q +
                           C215975 - (C165881 * p) / q;
    const double C146067 = C215687 - (C159433 * be + C155071 * C216041) / q +
                           C215831 - (C159438 * p) / q;
    const double C215686 = C48873 / C143578;
    const double C215670 = 3 * C49412;
    const double C215597 = C49412 * p;
    const double C215601 = C49691 * p;
    const double C159485 = C215939 - (C164764 * be + C163235 * C216041) / q +
                           C215972 - (C164768 * p) / q;
    const double C215641 = C49970 * p;
    const double C215257 = C50279 / q;
    const double C215703 = C148325 / C143578;
    const double C45207 =
        C148325 / q - (C45167 * C216043) / q - (C45773 * p) / q;
    const double C148410 =
        C155985 / q - (C160473 * be + C148325 * C216041) / q - (C50279 * p) / q;
    const double C215708 = C51102 * p;
    const double C215407 = C51102 / q;
    const double C215513 = C53224 / q;
    const double C148467 = -(C148325 * C216044 + C53224 * p) / q;
    const double C215919 = C51643 * p;
    const double C215330 = C51643 / q;
    const double C215733 = C152507 / C143578;
    const double C47820 =
        C152507 / q - (C47740 * C216044) / q - (C48873 * p) / q;
    const double C42534 = (2 * C42556) / q -
                          (C143607 * be + C42555 * C216041) / q + C143611 / q -
                          (C143612 * p) / q;
    const double C215706 = C143642 / C143578;
    const double C215745 = C157739 / C143578;
    const double C215195 = C143753 * p;
    const double C215203 = C143841 * p;
    const double C215256 = C144982 * p;
    const double C215329 = C145912 * p;
    const double C215386 = C146905 * p;
    const double C215476 = C149121 * p;
    const double C45808 =
        (2 * C45773) / q - (C45772 * C216043) / q - (C149215 * p) / q;
    const double C215483 = C149274 * p;
    const double C215507 = C150045 * p;
    const double C215512 = C150139 * p;
    const double C215516 = C150198 * p;
    const double C215565 = C151036 * p;
    const double C215651 = C153683 * p;
    const double C215656 = C153777 * p;
    const double C48944 =
        (2 * C48873) / q - (C48872 * C216044) / q - (C153836 * p) / q;
    const double C215674 = C154670 * p;
    const double C143565 = (5 * C42555) / C143578 -
                           (C157720 * be + C143612 * C216041) / q +
                           C143660 / q - (C157724 * p) / q;
    const double C143884 = (2 * C44297) / q -
                           (C157956 * be + C143753 * C216041) / q +
                           C146844 / q - (C157960 * p) / q;
    const double C143927 = (2 * C44576) / q -
                           (C157972 * be + C143841 * C216041) / q +
                           C147306 / q - (C157976 * p) / q;
    const double C215753 = C157991 * p;
    const double C215797 = C158822 * p;
    const double C215832 = C159454 * p;
    const double C149303 = C160824 / q -
                           (C160870 * be + C149215 * C216041) / q -
                           (C160874 * p) / q;
    const double C215874 = C160890 * p;
    const double C149361 = -(C149215 * C216044 + C160905 * p) / q;
    const double C215891 = C161435 * p;
    const double C215892 = C161451 * p;
    const double C150285 =
        C47428 / q - (C150139 * C216044) / q - (C161466 * p) / q;
    const double C215930 = C162759 * p;
    const double C153894 = C162742 / q -
                           (C162771 * be + C153836 * C216041) / q -
                           (C162775 * p) / q;
    const double C153923 =
        (2 * C49970) / q - (C153777 * C216044) / q - (C162790 * p) / q;
    const double C216601 = C87381 / C143578;
    const double C87390 =
        C216409 - (C167788 * C216041) / q + C216410 - (C167772 * p) / q;
    const double C87968 =
        C216477 - (C169123 * C216041) / q + C216478 - (C169157 * p) / q;
    const double C88526 =
        C216550 - (C170037 * C216041) / q + C216551 - (C170071 * p) / q;
    const double C216415 = C89065 * p;
    const double C216421 = C89344 * p;
    const double C89623 =
        C216625 - (C171817 * C216041) / q + C216626 - (C171834 * p) / q;
    const double C216474 = C94979 / q;
    const double C216920 = C172380 / C143578;
    const double C172465 =
        C179900 / q - (C172380 * C216041) / q - (C94979 * p) / q;
    const double C216925 = C95746 * p;
    const double C216624 = C95746 / q;
    const double C216730 = C97800 / q;
    const double C172522 = -(C172380 * C216044 + C97800 * p) / q;
    const double C217136 = C96281 * p;
    const double C216547 = C96281 / q;
    const double C216950 = C176485 / C143578;
    const double C87361 = (2 * C87381) / q - (C87380 * C216041) / q +
                          C167756 / q - (C167757 * p) / q;
    const double C216923 = C167787 / C143578;
    const double C216962 = C181641 / C143578;
    const double C216414 = C167894 * p;
    const double C216420 = C167981 * p;
    const double C216603 = C170996 * p;
    const double C167712 = (5 * C87380) / C143578 - (C167757 * C216041) / q +
                           C167804 / q - (C181627 * p) / q;
    const double C168024 = (2 * C89065) / q - (C167894 * C216041) / q +
                           C170937 / q - (C181848 * p) / q;
    const double C168067 = (2 * C89344) / q - (C167981 * C216041) / q +
                           C171386 / q - (C181863 * p) / q;
    const double C216970 = C181878 * p;
    const double C217815 = C131932 / C143578;
    const double C131941 =
        C217623 - (C191562 * C216041) / q + C217624 - (C191546 * p) / q;
    const double C132519 =
        C217691 - (C192896 * C216041) / q + C217692 - (C192930 * p) / q;
    const double C133077 =
        C217764 - (C193809 * C216041) / q + C217765 - (C193843 * p) / q;
    const double C217629 = C133616 * p;
    const double C217635 = C133895 * p;
    const double C134174 =
        C217839 - (C195586 * C216041) / q + C217840 - (C195603 * p) / q;
    const double C217688 = C139499 / q;
    const double C218134 = C196148 / C143578;
    const double C196233 =
        C203659 / q - (C196148 * C216041) / q - (C139499 * p) / q;
    const double C218139 = C140266 * p;
    const double C217838 = C140266 / q;
    const double C217944 = C142320 / q;
    const double C196290 =
        -(C160473 * be + C196148 * C216044 + C142320 * p) / q;
    const double C218350 = C140801 * p;
    const double C217761 = C140801 / q;
    const double C218164 = C200248 / C143578;
    const double C131912 = (2 * C131932) / q - (C131931 * C216041) / q +
                           C191530 / q - (C191531 * p) / q;
    const double C218137 = C191561 / C143578;
    const double C218176 = C205400 / C143578;
    const double C217628 = C191668 * p;
    const double C217634 = C191755 * p;
    const double C217817 = C194767 * p;
    const double C191486 = (5 * C131931) / C143578 - (C191531 * C216041) / q +
                           C191578 / q - (C205386 * p) / q;
    const double C191798 = (2 * C133616) / q - (C191668 * C216041) / q +
                           C194708 / q - (C205607 * p) / q;
    const double C191841 = (2 * C133895) / q - (C191755 * C216041) / q +
                           C195156 / q - (C205622 * p) / q;
    const double C218184 = C205637 * p;
    const double C217054 = C183517 * p;
    const double C217032 = C182987 * p;
    const double C217144 = C186527 * p;
    const double C217019 = C182807 * p;
    const double C216995 = C182305 * p;
    const double C216982 = C182101 * p;
    const double C216979 = C182041 * p;
    const double C217046 = C183264 * p;
    const double C217549 = C217127 / q;
    const double C178153 = C186754 / q -
                           (C186796 * be + C178066 * C216043) / q -
                           (C186801 * p) / q;
    const double C216877 = C177918 * p;
    const double C217149 = C186770 * p;
    const double C217541 = C217116 / q;
    const double C217100 = C185059 * p;
    const double C217530 = C217093 / q;
    const double C217099 = C185044 * p;
    const double C170819 = -(C183734 * be + C170849 * C216043 + C217066) / q;
    const double C171243 =
        C169048 / C143578 - (C171199 * C216044) / q + C217072 - C217066 / q;
    const double C177859 =
        C186573 / q - (C177801 * C216041) / q - (C186604 * p) / q;
    const double C216873 = C177743 * p;
    const double C217147 = C186589 * p;
    const double C179384 = -(C187333 * be + C170584 * C216043 + C217058) / q;
    const double C217501 = C217031 / q;
    const double C216572 = C170438 * p;
    const double C217055 = C183532 * p;
    const double C216733 = C174227 * p;
    const double C217109 = C185296 * p;
    const double C217499 = C217028 / q;
    const double C217034 = C183017 * p;
    const double C216729 = C174169 * p;
    const double C217108 = C185281 * p;
    const double C217496 = C217024 / q;
    const double C217033 = C183002 * p;
    const double C216562 = C170290 * p;
    const double C217053 = C183502 * p;
    const double C216700 = C173319 * p;
    const double C217091 = C184740 * p;
    const double C173407 = -(C173261 * C216044 + C184755 * p) / q;
    const double C173348 =
        C184678 / q - (C173261 * C216041) / q - (C184725 * p) / q;
    const double C168641 = C216967 - (C169033 * C216044) / q - C216991 / q;
    const double C171760 = -(C184121 * be + C168594 * C216043 + C216991) / q;
    const double C216999 = C182363 * p;
    const double C216997 = C182334 * p;
    const double C216442 = C168375 * p;
    const double C216984 = C182130 * p;
    const double C216980 = C182072 * p;
    const double C217431 = C216774 / q;
    const double C217124 = C185654 * p;
    const double C217440 = C216772 / q;
    const double C91553 = -(C174639 * C216041 + C216772) / q;
    const double C217123 = C185639 * p;
    const double C185504 = C217157 - (C189456 * be + C187111 * C216043) / q +
                           C217207 - (C189461 * p) / q;
    const double C94478 =
        C216905 - (C155434 * be + C178430 * C216043) / q - C216908 / q;
    const double C94901 = -(C177964 * C216041 + C216908) / q;
    const double C216895 = C178750 * p;
    const double C91517 = -(C174374 * C216041 + C216770) / q;
    const double C94199 = C170787 / C143578 -
                          (C154976 * be + C176613 * C216043) / q + C216889 -
                          C216770 / q;
    const double C217113 = C185489 * p;
    const double C185624 =
        C217135 - (C185699 * C216044) / q + C217206 - (C189552 * p) / q;
    const double C217432 = C216787 / q;
    const double C92408 = -(C173743 * C216041 + C216787) / q;
    const double C186707 = C217148 - (C189842 * be + C186723 * C216043) / q +
                           C217212 - (C189847 * p) / q;
    const double C216871 = C93740 / C143578;
    const double C216879 = C178008 * p;
    const double C217422 = C216756 / q;
    const double C174494 = C216918 - (C185469 * be + C179588 * C216043) / q +
                           C217107 - (C185474 * p) / q;
    const double C216872 = C93741 / C143578;
    const double C93812 =
        (2 * C93741) / q - (C93740 * C216044) / q - (C178066 * p) / q;
    const double C217421 = C216755 / q;
    const double C216763 = C174727 * p;
    const double C217119 = C185594 * p;
    const double C174669 =
        C216803 - (C174932 * C216044) / q + C217106 - (C185579 * p) / q;
    const double C217396 = C216712 / q;
    const double C184999 =
        C217097 - (C185014 * C216044) / q + C217203 - (C189180 * p) / q;
    const double C217395 = C216711 / q;
    const double C216715 = C173816 * p;
    const double C216746 = C174436 * p;
    const double C217386 = C216675 / q;
    const double C91229 = C216740 - (C150816 * be + C174374 * C216043) / q +
                          C216725 - (C174375 * p) / q;
    const double C216826 = 3 * C92633;
    const double C216813 = C92633 / C143578;
    const double C92705 =
        C176741 / q - (C92633 * C216044) / q - (C93741 * p) / q;
    const double C217385 = C216674 / q;
    const double C91554 = -(C172840 * C216041 + C216674) / q;
    const double C174344 = C216894 - (C185322 * be + C174843 * C216043) / q +
                           C217105 - (C185327 * p) / q;
    const double C92624 =
        C216810 - (C153090 * be + C170787 * C216043) / q - C216823 / q;
    const double C93471 = -(C174373 * C216041 + C216823) / q;
    const double C217373 = C216598 / q;
    const double C89029 = -(C146747 * be + C170583 * C216043 + C216598) / q;
    const double C217063 = C183666 * p;
    const double C183354 =
        C217156 - (C187067 * C216041) / q + C217189 - (C188580 * p) / q;
    const double C216858 = C94676 * p;
    const double C177889 =
        (2 * C94676) / q - (C177743 * C216044) / q - (C186619 * p) / q;
    const double C216891 = C178620 * p;
    const double C217355 = C216596 / q;
    const double C217061 = C183651 * p;
    const double C183636 =
        C217074 - (C183739 * C216044) / q + C217187 - (C188762 * p) / q;
    const double C217356 = C216610 / q;
    const double C89596 = -(C147701 * be + C168610 * C216043 + C216610) / q;
    const double C217049 = C183324 * p;
    const double C186441 =
        C217142 - (C186470 * C216041) / q + C217192 - (C189684 * p) / q;
    const double C216868 = C177652 * p;
    const double C217347 = C216582 / q;
    const double C170173 =
        C216904 - (C179010 * C216041) / q + C217048 - (C183309 * p) / q;
    const double C216903 = C93579 / C143578;
    const double C93650 =
        (2 * C93579) / q - (C93578 * C216044) / q - (C177801 * p) / q;
    const double C216818 = C94397 * p;
    const double C217346 = C216581 / q;
    const double C216588 = C170671 * p;
    const double C217059 = C183606 * p;
    const double C217368 = C216629 / q;
    const double C217023 = C182868 * p;
    const double C182716 =
        C217134 - (C185814 * C216041) / q + C217176 - (C188217 * p) / q;
    const double C216701 = C92165 * p;
    const double C174315 =
        C92165 / q - (C174169 * C216044) / q - (C185311 * p) / q;
    const double C216782 = C175050 * p;
    const double C182853 = C217073 - (C188320 * be + C183898 * C216043) / q +
                           C217175 - (C188325 * p) / q;
    const double C217359 = C216619 / q;
    const double C216608 = C171126 * p;
    const double C217014 = C182701 * p;
    const double C217317 = C216534 / q;
    const double C217020 = C182838 * p;
    const double C170613 =
        C216636 - (C170879 * C216044) / q + C217047 - C217058 / q;
    const double C217304 = C216516 / q;
    const double C89030 = -(C146764 * be + C168626 * C216043 + C216516) / q;
    const double C170115 =
        C216888 - (C178561 * C216041) / q + C217047 - (C183279 * p) / q;
    const double C216854 = 3 * C93021;
    const double C216815 = C93021 * p;
    const double C216887 = 3 * C94118;
    const double C216814 = C94118 * p;
    const double C182957 =
        C217029 - (C182972 * C216044) / q + C217183 - (C188386 * p) / q;
    const double C217303 = C216515 / q;
    const double C183441 = C217051 - (C188605 * be + C183457 * C216043) / q +
                           C217183 - (C188610 * p) / q;
    const double C217330 = C216564 / q;
    const double C216569 = C170380 * p;
    const double C184210 =
        C217104 - (C185163 * C216041) / q + C217183 - (C188864 * p) / q;
    const double C216734 = C91067 * p;
    const double C216721 = 3 * C91067;
    const double C216724 = C174078 * p;
    const double C169522 = C216631 - (C182818 * be + C171965 * C216043) / q +
                           C217012 - (C182823 * p) / q;
    const double C217331 = C216565 / q;
    const double C169259 =
        C216792 - (C175440 * C216041) / q + C217012 - (C182671 * p) / q;
    const double C216723 = 3 * C91068;
    const double C216655 = C91068 * p;
    const double C217013 = C91886 / q;
    const double C216654 = C91886 * p;
    const double C184577 =
        C217087 - (C184606 * C216041) / q + C217178 - (C188893 * p) / q;
    const double C217086 = C90481 / C143578;
    const double C216693 = C173170 * p;
    const double C217292 = C216497 / q;
    const double C169201 =
        C216778 - (C174991 * C216041) / q + C217011 - (C182641 * p) / q;
    const double C216777 = C90482 / C143578;
    const double C90519 = (2 * C90482) / q -
                          (C149116 * be + C90481 * C216043) / q -
                          (C173261 * p) / q;
    const double C216651 = C91607 * p;
    const double C217291 = C216496 / q;
    const double C216503 = C169464 * p;
    const double C217018 = C182776 * p;
    const double C217275 = C216451 / q;
    const double C88525 =
        C216548 - (C170021 * C216041) / q + C216549 - (C170054 * p) / q;
    const double C216808 = C92471 / C143578;
    const double C216806 = 3 * C92471;
    const double C92543 =
        C176485 / q - (C92471 * C216044) / q - (C93579 * p) / q;
    const double C170554 =
        C216621 - (C170849 * C216044) / q + C217042 - (C183547 * p) / q;
    const double C217274 = C216450 / q;
    const double C216809 = C92462 * p;
    const double C216805 = 3 * C92462;
    const double C182275 =
        C216992 - (C182290 * C216044) / q + C217170 - (C188040 * p) / q;
    const double C217273 = C216449 / q;
    const double C216546 = C170022 * p;
    const double C217262 = C216432 / q;
    const double C87967 =
        C216475 - (C169107 * C216041) / q + C216476 - (C169140 * p) / q;
    const double C216645 = C89929 / C143578;
    const double C216643 = 3 * C89929;
    const double C89965 =
        C172380 / q - (C45164 * be + C89929 * C216043) / q - (C90482 * p) / q;
    const double C169376 = C216607 - (C182727 * be + C169873 * C216043) / q +
                           C217007 - (C182732 * p) / q;
    const double C217261 = C216431 / q;
    const double C216646 = C89920 * p;
    const double C216642 = 3 * C89920;
    const double C182010 = C216977 - (C187896 * be + C182026 * C216043) / q +
                           C217165 - (C187901 * p) / q;
    const double C217260 = C216430 / q;
    const double C216436 = C168289 * p;
    const double C216473 = C169108 * p;
    const double C218268 = C207263 * p;
    const double C218246 = C206737 * p;
    const double C218358 = C210251 * p;
    const double C218233 = C206558 * p;
    const double C218209 = C206060 * p;
    const double C218196 = C205856 * p;
    const double C218193 = C205797 * p;
    const double C218260 = C207013 * p;
    const double C218763 = C218341 / q;
    const double C201915 =
        C210473 / q - (C201828 * C216043) / q - (C210519 * p) / q;
    const double C218091 = C201680 * p;
    const double C218363 = C210489 * p;
    const double C218755 = C218330 / q;
    const double C218314 = C208795 * p;
    const double C218744 = C218307 / q;
    const double C218313 = C208780 * p;
    const double C194590 = -(C194620 * C216043 + C218280) / q;
    const double C195013 = C192821 / C143578 -
                           (C184277 * be + C194969 * C216044) / q + C218286 -
                           C218280 / q;
    const double C201622 =
        C210297 / q - (C201564 * C216041) / q - (C210328 * p) / q;
    const double C218087 = C201506 * p;
    const double C218361 = C210313 * p;
    const double C203144 = -(C194355 * C216043 + C218272) / q;
    const double C218715 = C218245 / q;
    const double C217786 = C194209 * p;
    const double C218269 = C207278 * p;
    const double C217947 = C197994 * p;
    const double C218323 = C209031 * p;
    const double C218713 = C218242 / q;
    const double C218248 = C206767 * p;
    const double C217943 = C197936 * p;
    const double C218322 = C209016 * p;
    const double C218710 = C218238 / q;
    const double C218247 = C206752 * p;
    const double C217776 = C194061 * p;
    const double C218267 = C207248 * p;
    const double C217914 = C197087 * p;
    const double C218305 = C208480 * p;
    const double C197174 =
        -(C160870 * be + C197029 * C216044 + C208495 * p) / q;
    const double C197116 =
        C208418 / q - (C197029 * C216041) / q - (C208465 * p) / q;
    const double C192414 =
        C218181 - (C183979 * be + C192806 * C216044) / q - C218205 / q;
    const double C195529 = -(C192367 * C216043 + C218205) / q;
    const double C218213 = C206118 * p;
    const double C218211 = C206089 * p;
    const double C217656 = C192148 * p;
    const double C218198 = C205885 * p;
    const double C218194 = C205827 * p;
    const double C218645 = C217988 / q;
    const double C218338 = C209385 * p;
    const double C218654 = C217986 / q;
    const double C136073 = -(C198405 * C216041 + C217986) / q;
    const double C218337 = C209370 * p;
    const double C209234 =
        C218371 - (C210830 * C216043) / q + C218421 - (C213172 * p) / q;
    const double C138998 = C218119 - (C202192 * C216043) / q - C218122 / q;
    const double C139421 = -(C201726 * C216041 + C218122) / q;
    const double C218109 = C202511 * p;
    const double C136037 = -(C198140 * C216041 + C217984) / q;
    const double C138719 =
        C194558 / C143578 - (C200376 * C216043) / q + C218103 - C217984 / q;
    const double C218327 = C209219 * p;
    const double C209355 = C218349 - (C213258 * be + C209429 * C216044) / q +
                           C218420 - (C213264 * p) / q;
    const double C218646 = C218001 / q;
    const double C136928 = -(C197510 * C216041 + C218001) / q;
    const double C210429 =
        C218362 - (C210444 * C216043) / q + C218426 - (C213559 * p) / q;
    const double C218085 = C138241 / C143578;
    const double C218093 = C201770 * p;
    const double C218636 = C217970 / q;
    const double C198260 =
        C218132 - (C203347 * C216043) / q + C218321 - (C209204 * p) / q;
    const double C218086 = C138242 / C143578;
    const double C138317 = (2 * C138242) / q -
                           (C153949 * be + C138241 * C216044) / q -
                           (C201828 * p) / q;
    const double C218635 = C217969 / q;
    const double C217977 = C198493 * p;
    const double C218333 = C209324 * p;
    const double C198435 = C218017 - (C209303 * be + C198698 * C216044) / q +
                           C218320 - (C209309 * p) / q;
    const double C218610 = C217926 / q;
    const double C208734 = C218311 - (C212885 * be + C208750 * C216044) / q +
                           C218417 - (C212891 * p) / q;
    const double C218609 = C217925 / q;
    const double C217929 = C197583 * p;
    const double C217960 = C198202 * p;
    const double C218600 = C217889 / q;
    const double C135749 =
        C217954 - (C198140 * C216043) / q + C217939 - (C198141 * p) / q;
    const double C218040 = 3 * C137153;
    const double C218027 = C137153 / C143578;
    const double C137225 =
        C200504 / q - (C47917 * be + C137153 * C216044) / q - (C138242 * p) / q;
    const double C218599 = C217888 / q;
    const double C136074 = -(C196608 * C216041 + C217888) / q;
    const double C198110 =
        C218108 - (C198609 * C216043) / q + C218319 - (C209061 * p) / q;
    const double C137144 = C218024 - (C194558 * C216043) / q - C218037 / q;
    const double C137963 = -(C198139 * C216041 + C218037) / q;
    const double C218587 = C217812 / q;
    const double C133580 = -(C194354 * C216043 + C217812) / q;
    const double C218277 = C207412 * p;
    const double C207103 =
        C218370 - (C210787 * C216041) / q + C218403 - (C212294 * p) / q;
    const double C218072 = C139196 * p;
    const double C201651 = (2 * C139196) / q -
                           (C162755 * be + C201506 * C216044) / q -
                           (C210343 * p) / q;
    const double C218105 = C202382 * p;
    const double C218569 = C217810 / q;
    const double C218275 = C207397 * p;
    const double C207382 = C218288 - (C212468 * be + C207484 * C216044) / q +
                           C218401 - (C212474 * p) / q;
    const double C218570 = C217824 / q;
    const double C134147 = -(C192383 * C216043 + C217824) / q;
    const double C218263 = C207073 * p;
    const double C210165 =
        C218356 - (C210194 * C216041) / q + C218406 - (C213398 * p) / q;
    const double C218082 = C201415 * p;
    const double C218561 = C217796 / q;
    const double C193945 =
        C218118 - (C202771 * C216041) / q + C218262 - (C207058 * p) / q;
    const double C218117 = C138071 / C143578;
    const double C138146 = (2 * C138071) / q -
                           (C153678 * be + C138070 * C216044) / q -
                           (C201564 * p) / q;
    const double C218032 = C138917 * p;
    const double C218560 = C217795 / q;
    const double C217802 = C194442 * p;
    const double C218273 = C207352 * p;
    const double C218582 = C217843 / q;
    const double C218237 = C206618 * p;
    const double C206469 =
        C218348 - (C209544 * C216041) / q + C218390 - (C211931 * p) / q;
    const double C217915 = C136685 * p;
    const double C198081 = C136685 / q -
                           (C161431 * be + C197936 * C216044) / q -
                           (C209046 * p) / q;
    const double C217996 = C198816 * p;
    const double C206603 =
        C218287 - (C207642 * C216043) / q + C218389 - (C212037 * p) / q;
    const double C218573 = C217833 / q;
    const double C217822 = C194896 * p;
    const double C218228 = C206454 * p;
    const double C218531 = C217748 / q;
    const double C218234 = C206588 * p;
    const double C194384 = C217850 - (C187192 * be + C194650 * C216044) / q +
                           C218261 - C218272 / q;
    const double C218518 = C217730 / q;
    const double C133581 = -(C192399 * C216043 + C217730) / q;
    const double C193887 =
        C218102 - (C202323 * C216041) / q + C218261 - (C207028 * p) / q;
    const double C218068 = 3 * C137538;
    const double C218029 = C137538 * p;
    const double C218101 = 3 * C138638;
    const double C218028 = C138638 * p;
    const double C206707 = C218243 - (C212092 * be + C206722 * C216044) / q +
                           C218397 - (C212098 * p) / q;
    const double C218517 = C217729 / q;
    const double C207189 =
        C218265 - (C207204 * C216043) / q + C218397 - (C212323 * p) / q;
    const double C218544 = C217778 / q;
    const double C217783 = C194151 * p;
    const double C207952 =
        C218318 - (C208898 * C216041) / q + C218397 - (C212578 * p) / q;
    const double C217948 = C135587 * p;
    const double C217935 = 3 * C135587;
    const double C217938 = C197845 * p;
    const double C193294 =
        C217845 - (C195733 * C216043) / q + C218226 - (C206573 * p) / q;
    const double C218545 = C217779 / q;
    const double C193032 =
        C218006 - (C199205 * C216041) / q + C218226 - (C206424 * p) / q;
    const double C217937 = 3 * C135588;
    const double C217869 = C135588 * p;
    const double C218227 = C136406 / q;
    const double C217868 = C136406 * p;
    const double C208317 =
        C218301 - (C208346 * C216041) / q + C218392 - (C212607 * p) / q;
    const double C218300 = C135029 / C143578;
    const double C217907 = C196938 * p;
    const double C218506 = C217711 / q;
    const double C192974 =
        C217992 - (C198757 * C216041) / q + C218225 - (C206394 * p) / q;
    const double C217991 = C135030 / C143578;
    const double C135065 =
        (2 * C135030) / q - (C135029 * C216043) / q - (C197029 * p) / q;
    const double C217865 = C136127 * p;
    const double C218505 = C217710 / q;
    const double C217717 = C193236 * p;
    const double C218232 = C206528 * p;
    const double C218489 = C217665 / q;
    const double C133076 =
        C217762 - (C193793 * C216041) / q + C217763 - (C193826 * p) / q;
    const double C218022 = C136991 / C143578;
    const double C218020 = 3 * C136991;
    const double C137063 =
        C200248 / q - (C47737 * be + C136991 * C216044) / q - (C138071 * p) / q;
    const double C194325 = C217835 - (C183734 * be + C194620 * C216044) / q +
                           C218256 - (C207293 * p) / q;
    const double C218488 = C217664 / q;
    const double C218023 = C136982 * p;
    const double C218019 = 3 * C136982;
    const double C206030 = C218206 - (C211745 * be + C206045 * C216044) / q +
                           C218384 - (C211751 * p) / q;
    const double C218487 = C217663 / q;
    const double C217760 = C193794 * p;
    const double C218476 = C217646 / q;
    const double C132518 =
        C217689 - (C192880 * C216041) / q + C217690 - (C192913 * p) / q;
    const double C217859 = C134480 / C143578;
    const double C217857 = 3 * C134480;
    const double C134516 =
        C196148 / q - (C134480 * C216043) / q - (C135030 * p) / q;
    const double C193148 =
        C217821 - (C193645 * C216043) / q + C218221 - (C206484 * p) / q;
    const double C218475 = C217645 / q;
    const double C217860 = C134471 * p;
    const double C217856 = 3 * C134471;
    const double C205767 =
        C218191 - (C205782 * C216043) / q + C218379 - (C211613 * p) / q;
    const double C218474 = C217644 / q;
    const double C217650 = C192062 * p;
    const double C217687 = C192881 * p;
    const double C215241 = C144590 * p;
    const double C215776 = C158384 * p;
    const double C42933 = C215186 - (C144456 * C216044) / q - C216059;
    const double C44819 = (3 * C144489) / C143578 -
                          (C147701 * be + C144473 * C216041) / q - C216059;
    const double C215361 = C146451 * p;
    const double C42934 = C215187 - (C144472 * C216044) / q - C216060;
    const double C44244 =
        C215380 - (C146764 * be + C144489 * C216041) / q - C216060;
    const double C42944 = C215189 - (C144488 * C216044) / q - C216061;
    const double C52156 =
        C215743 - (C157252 * be + C146768 * C216041) / q - C216061;
    const double C43101 = (2 * C43144) / q -
                          (C144810 * be + C43143 * C216041) / q -
                          (C144814 * p) / q;
    const double C43102 = (3 * C43154) / C143578 -
                          (C43140 * be + C43144 * C216041) / q -
                          (C43143 * p) / q;
    const double C43112 =
        C144843 / q - (C43151 * be + C43154 * C216041) / q - (C43144 * p) / q;
    const double C43704 = C215323 - (C144935 * C216043) / q - C216106;
    const double C45697 =
        C215471 - (C149025 * be + C145819 * C216041) / q - C216106;
    const double C215813 = C159075 * p;
    const double C43523 = C215259 - (C145548 * C216044) / q - C216089;
    const double C45107 = C144489 / C143578 - (C145564 * C216043) / q - C216089;
    const double C47392 =
        C148785 / C143578 - (C151830 * be + C148769 * C216041) / q - C216089;
    const double C43524 = C215261 - (C144935 * C216044) / q - C216090;
    const double C51561 =
        C150928 / C143578 - (C156807 * be + C148165 * C216041) / q - C216090;
    const double C43685 =
        C215319 - (C145815 * be + C145548 * C216041) / q - C216104;
    const double C44549 = C215398 - (C144920 * C216043) / q - C216104;
    const double C43703 = C215307 - (C145548 * C216043) / q - C216105;
    const double C47113 =
        C215574 - (C151373 * be + C149058 * C216041) / q - C216105;
    const double C44082 = C215323 - (C144489 * C216044) / q + C215334 - C216133;
    const double C48270 =
        C215633 - (C153148 * be + C146751 * C216041) / q - C216133;
    const double C44081 = C215363 - (C146480 * C216044) / q + C215332 - C216132;
    const double C49934 =
        C215697 - (C155466 * be + C152891 * C216041) / q - C216132;
    const double C215781 = C51985 * p;
    const double C215731 = C51985 / C143578;
    const double C215362 = C51985 / q;
    const double C44243 =
        C215378 - (C146747 * be + C146480 * C216041) / q - C216141;
    const double C44738 = C215398 - (C144473 * C216044) / q + C215399 - C216141;
    const double C45017 =
        C144935 / C143578 - (C145564 * C216044) / q + C215409 - C216159;
    const double C49655 =
        C150912 / C143578 - (C155007 * be + C153181 * C216041) / q - C216159;
    const double C215843 = C159764 * p;
    const double C44459 = C215382 - (C144920 * C216044) / q - C216142;
    const double C45098 =
        C215423 - (C148161 * be + C145564 * C216041) / q - C216142;
    const double C215779 = C50621 * p;
    const double C215707 = C50621 / C143578;
    const double C215297 = C50621 / q;
    const double C44226 =
        C52175 / q - (C52163 * be + C44262 * C216041) / q - (C44828 * p) / q;
    const double C45517 = C215430 - (C145819 * C216044) / q - C216171;
    const double C51578 = C146768 / C143578 - (C148165 * C216043) / q - C216171;
    const double C45527 = C215431 - (C148784 * C216044) / q - C216172;
    const double C53756 = C215743 - (C150928 * C216043) / q - C216172;
    const double C45687 = -(C45724 * be + C45727 * C216041 + C45717 * p) / q;
    const double C215881 = C161143 * p;
    const double C46096 = C215477 - (C149685 * C216044) / q - C216181;
    const double C47680 =
        (3 * C148785) / C143578 - (C149701 * C216043) / q - C216181;
    const double C215540 = C150643 * p;
    const double C46097 = C215478 - (C149074 * C216044) / q - C216182;
    const double C46835 = C215558 - (C148785 * C216043) / q - C216182;
    const double C46241 = -(C91010 * be + C46277 * C216041 + C47122 * p) / q;
    const double C47104 = C46277 / C143578 -
                          (C151357 * be + C47122 * C216041) / q -
                          (C151361 * p) / q;
    const double C46655 = C215471 - (C148785 * C216044) / q + C215509 - C216208;
    const double C48819 = C215633 - (C150912 * C216043) / q - C216208;
    const double C46654 = C215537 - (C150613 * C216044) / q + C215508 - C216207;
    const double C50222 = C215697 - (C153494 * C216043) / q - C216207;
    const double C47311 =
        C145819 / C143578 - (C148769 * C216044) / q + C215576 - C216226;
    const double C49664 = C146751 / C143578 - (C153181 * C216043) / q - C216226;
    const double C215865 = C53566 * p;
    const double C215730 = C53566 / C143578;
    const double C215541 = C53566 / q;
    const double C46834 = C215556 - (C150613 * C216043) / q - C216217;
    const double C47590 = C215574 - (C149701 * C216044) / q + C215583 - C216217;
    const double C215717 = C148814 / C143578;
    const double C52137 = C157240 / C143578 -
                          (C52172 * be + C52175 * C216041) / q -
                          (C44262 * p) / q;
    const double C215904 = C161773 * p;
    const double C47032 = C215562 - (C149058 * C216044) / q - C216218;
    const double C47401 = C215423 - (C148769 * C216043) / q - C216218;
    const double C215623 = 3 * C48090;
    const double C215618 = C48090 * p;
    const double C215599 = C48090 / C143578;
    const double C215625 = 3 * C48100;
    const double C215600 = C48100 / C143578;
    const double C48250 = C48300 / C143578 -
                          (C48287 * be + C48290 * C216041) / q -
                          (C44261 * p) / q;
    const double C48260 = -(C48297 * be + C48300 * C216041 + C48290 * p) / q;
    const double C215727 = C51408 / C143578;
    const double C215721 = C51408 * p;
    const double C215417 = C51408 / q;
    const double C215647 = 3 * C48649;
    const double C215640 = C48649 / C143578;
    const double C215622 = C48649 * p;
    const double C215690 = C49853 / C143578;
    const double C215626 = C49853 * p;
    const double C154397 = (2 * C49853) / q - (C154220 * C216044) / q +
                           C154518 / q - (C163085 * p) / q;
    const double C215700 = C50132 / C143578;
    const double C215649 = C50132 * p;
    const double C154426 = (2 * C50132) / q - (C154279 * C216044) / q +
                           C154548 / q - (C163100 * p) / q;
    const double C215903 = C49574 / q;
    const double C215681 = 3 * C49574;
    const double C215673 = C49574 / C143578;
    const double C215621 = C49574 * p;
    const double C49341 = -(C138599 * be + C49377 * C216041 + C49943 * p) / q;
    const double C215235 = C144504 * p;
    const double C44810 = (3 * C44262) / C143578 -
                          (C147685 * be + C44828 * C216041) / q -
                          (C147689 * p) / q;
    const double C145519 = C215790 - (C145820 * C216044) / q - C216282;
    const double C148149 =
        C144473 / C143578 - (C147111 * C216043) / q - C216282;
    const double C145579 = C215794 - (C145851 * C216044) / q - C216285;
    const double C151818 = C215419 - (C145549 * C216043) / q - C216285;
    const double C145637 =
        C145548 / C143578 - (C145549 * C216044) / q + C215795 - C216287;
    const double C154995 =
        C146480 / C143578 - (C146783 * C216043) / q - C216287;
    const double C215366 = C146510 * p;
    const double C49925 = C49377 / C143578 -
                          (C155450 * be + C49943 * C216041) / q -
                          (C155454 * p) / q;
    const double C216138 = C215371 / q;
    const double C44225 =
        C48290 / q - (C146717 * be + C44261 * C216041) / q - (C146721 * p) / q;
    const double C215396 = C147155 * p;
    const double C149656 = C215871 - (C149954 * C216044) / q - C216316;
    const double C152276 =
        (3 * C148769) / C143578 - (C151242 * C216043) / q - C216316;
    const double C216185 = C215498 / q;
    const double C150584 =
        C215582 - (C150882 * C216044) / q + C215888 - C216327;
    const double C155912 =
        C152891 / C143578 - (C154876 * C216043) / q - C216327;
    const double C216214 = C215546 / q;
    const double C150852 = C215683 - (C150882 * C216043) / q - C216335;
    const double C151286 =
        C149058 / C143578 - (C151242 * C216044) / q + C215916 - C216335;
    const double C215739 = C152994 / C143578;
    const double C48160 =
        C152994 / q - (C48100 * C216044) / q + C152907 / q - (C49197 * p) / q;
    const double C152965 =
        C215751 - (C152994 * C216044) / q + C215620 - (C48100 * p) / q;
    const double C49178 = -(C154216 * be + C49196 * C216041 + C215664) / q;
    const double C49214 = -(C49196 * C216043 + C215665) / q;
    const double C49340 = -(C154484 * be + C49376 * C216041 + C154488 * p) / q;
    const double C215684 = C154920 * p;
    const double C216266 = C215762 / q;
    const double C144634 = -(C144412 * C216043 + C215778) / q;
    const double C216273 = C215780 / q;
    const double C216274 = C215782 / q;
    const double C147628 = -(C144590 * C216043 + C215782) / q;
    const double C216279 = C215802 / q;
    const double C216288 = C215815 / q;
    const double C216289 = C215816 / q;
    const double C216290 = C215817 / q;
    const double C216303 = C215842 / q;
    const double C216304 = C215844 / q;
    const double C216305 = C215846 / q;
    const double C155393 = -(C146568 * C216043 + C215846) / q;
    const double C216320 = C215882 / q;
    const double C216321 = C215883 / q;
    const double C216330 = C215902 / q;
    const double C216332 = C215906 / q;
    const double C216333 = C215907 / q;
    const double C154367 = -(C154220 * C216043 + C215933) / q;
    const double C216458 = C168727 * p;
    const double C87874 =
        (2 * C87913) / q - (C87912 * C216041) / q - (C168945 * p) / q;
    const double C87875 =
        (3 * C87922) / C143578 - (C87913 * C216041) / q - (C87912 * p) / q;
    const double C87884 =
        C168974 / q - (C87922 * C216041) / q - (C87913 * p) / q;
    const double C88472 =
        C216540 - (C145832 * be + C169063 * C216043) / q - C217320;
    const double C90406 = C216688 - (C169932 * C216041) / q - C217320;
    const double C88453 = C216536 - (C169667 * C216041) / q - C217318;
    const double C89317 =
        C216615 - (C147242 * be + C169048 * C216043) / q - C217318;
    const double C88471 =
        C216524 - (C145815 * be + C169667 * C216043) / q - C217319;
    const double C91850 = C216791 - (C173109 * C216041) / q - C217319;
    const double C216998 = C96587 * p;
    const double C216948 = C96587 / C143578;
    const double C216579 = C96587 / q;
    const double C216996 = C95285 * p;
    const double C216924 = C95285 / C143578;
    const double C216514 = C95285 / q;
    const double C90397 = -(C90433 * C216041 + C90424 * p) / q;
    const double C90976 = -(C91014 * C216041 + C91859 * p) / q;
    const double C91841 =
        C91014 / C143578 - (C91859 * C216041) / q - (C175368 * p) / q;
    const double C217082 = C98106 * p;
    const double C216947 = C98106 / C143578;
    const double C216758 = C98106 / q;
    const double C216934 = C172869 / C143578;
    const double C216840 = 3 * C92786;
    const double C216835 = C92786 * p;
    const double C216816 = C92786 / C143578;
    const double C216842 = 3 * C92795;
    const double C216817 = C92795 / C143578;
    const double C92939 = -(C92975 * C216041 + C92966 * p) / q;
    const double C216944 = C96052 / C143578;
    const double C216938 = C96052 * p;
    const double C216634 = C96052 / q;
    const double C216864 = 3 * C93345;
    const double C216857 = C93345 / C143578;
    const double C216839 = C93345 * p;
    const double C216907 = C94559 / C143578;
    const double C216843 = C94559 * p;
    const double C178357 = (2 * C94559) / q - (C178182 * C216044) / q +
                           C178474 / q - (C186920 * p) / q;
    const double C216917 = C94838 / C143578;
    const double C216866 = C94838 * p;
    const double C178386 = (2 * C94838) / q - (C178241 * C216044) / q +
                           C178503 / q - (C186935 * p) / q;
    const double C217120 = C94280 / q;
    const double C216898 = 3 * C94280;
    const double C216890 = C94280 / C143578;
    const double C216838 = C94280 * p;
    const double C94047 = -(C94083 * C216041 + C94649 * p) / q;
    const double C216956 = C176972 / C143578;
    const double C92849 =
        C176972 / q - (C92795 * C216044) / q + C176885 / q - (C93903 * p) / q;
    const double C176943 =
        C216968 - (C176972 * C216044) / q + C216837 - (C92795 * p) / q;
    const double C93884 = -(C93902 * C216041 + C216881) / q;
    const double C93920 = -(C154216 * be + C93902 * C216043 + C216882) / q;
    const double C94046 = -(C94082 * C216041 + C178445 * p) / q;
    const double C216901 = C178867 * p;
    const double C178328 = -(C162722 * be + C178182 * C216043 + C217150) / q;
    const double C217672 = C192500 * p;
    const double C132425 =
        (2 * C132464) / q - (C132463 * C216041) / q - (C192718 * p) / q;
    const double C132426 =
        (3 * C132473) / C143578 - (C132464 * C216041) / q - (C132463 * p) / q;
    const double C132435 =
        C192747 / q - (C132473 * C216041) / q - (C132464 * p) / q;
    const double C133023 = C217754 - (C192836 * C216043) / q - C218534;
    const double C134957 = C217902 - (C193704 * C216041) / q - C218534;
    const double C133004 = C217750 - (C193439 * C216041) / q - C218532;
    const double C133868 = C217829 - (C192821 * C216043) / q - C218532;
    const double C133022 = C217738 - (C193439 * C216043) / q - C218533;
    const double C136370 = C218005 - (C196877 * C216041) / q - C218533;
    const double C218212 = C141107 * p;
    const double C218162 = C141107 / C143578;
    const double C217793 = C141107 / q;
    const double C218210 = C139805 * p;
    const double C218138 = C139805 / C143578;
    const double C217728 = C139805 / q;
    const double C134948 = -(C134984 * C216041 + C134975 * p) / q;
    const double C135498 = -(C135534 * C216041 + C136379 * p) / q;
    const double C136361 =
        C135534 / C143578 - (C136379 * C216041) / q - (C199133 * p) / q;
    const double C218296 = C142626 * p;
    const double C218161 = C142626 / C143578;
    const double C217972 = C142626 / q;
    const double C218148 = C196637 / C143578;
    const double C218054 = 3 * C137306;
    const double C218049 = C137306 * p;
    const double C218030 = C137306 / C143578;
    const double C218056 = 3 * C137315;
    const double C218031 = C137315 / C143578;
    const double C137459 = -(C137495 * C216041 + C137486 * p) / q;
    const double C218158 = C140572 / C143578;
    const double C218152 = C140572 * p;
    const double C217848 = C140572 / q;
    const double C218078 = 3 * C137844;
    const double C218071 = C137844 / C143578;
    const double C218053 = C137844 * p;
    const double C218121 = C139079 / C143578;
    const double C218057 = C139079 * p;
    const double C202119 = (2 * C139079) / q -
                           (C162722 * be + C201944 * C216044) / q +
                           C202236 / q - (C210641 * p) / q;
    const double C218131 = C139358 / C143578;
    const double C218080 = C139358 * p;
    const double C202148 = (2 * C139358) / q -
                           (C186734 * be + C202003 * C216044) / q +
                           C202265 / q - (C210656 * p) / q;
    const double C218334 = C138800 / q;
    const double C218112 = 3 * C138800;
    const double C218104 = C138800 / C143578;
    const double C218052 = C138800 * p;
    const double C138565 = -(C138603 * C216041 + C139169 * p) / q;
    const double C218170 = C200735 / C143578;
    const double C137369 = C200735 / q - (C48097 * be + C137315 * C216044) / q +
                           C200648 / q - (C138413 * p) / q;
    const double C200706 = C218182 - (C163780 * be + C200735 * C216044) / q +
                           C218051 - (C137315 * p) / q;
    const double C138393 = -(C138412 * C216041 + C218095) / q;
    const double C138431 = -(C138412 * C216043 + C218096) / q;
    const double C138564 = -(C138602 * C216041 + C202207 * p) / q;
    const double C218115 = C202628 * p;
    const double C202090 = -(C201944 * C216043 + C218364) / q;
    const double C215761 = C158121 * p;
    const double C42744 = C215186 - (C144058 * C216043) / q - C216046;
    const double C44522 = (3 * C144091) / C143578 -
                          (C147211 * be + C144075 * C216041) / q - C216046;
    const double C215276 = C145254 * p;
    const double C42745 = C215187 - (C144074 * C216043) / q - C216047;
    const double C43650 =
        C215318 - (C145769 * be + C144091 * C216041) / q - C216047;
    const double C42755 = C215189 - (C144090 * C216043) / q - C216048;
    const double C50754 =
        C148525 / C143578 - (C156338 * be + C145773 * C216041) / q - C216048;
    const double C43362 =
        C144090 / C143578 - (C144091 * C216043) / q + C215261 - C216078;
    const double C45657 =
        C148526 / C143578 - (C148967 * be + C145756 * C216041) / q - C216078;
    const double C43361 = C215278 - (C145283 * C216043) / q + C215259 - C216077;
    const double C47095 =
        C148527 / C143578 - (C151342 * be + C148510 * C216041) / q - C216077;
    const double C215764 = C50450 * p;
    const double C215705 = C50450 / C143578;
    const double C215277 = C50450 / q;
    const double C43649 =
        C215316 - (C145752 * be + C145283 * C216041) / q - C216103;
    const double C44378 =
        C144074 / C143578 - (C144075 * C216043) / q + C215382 - C216103;
    const double C215835 = C159571 * p;
    const double C43919 = C215332 - (C146213 * C216043) / q - C216116;
    const double C49637 =
        C150344 / C143578 - (C154976 * be + C152635 * C216041) / q - C216116;
    const double C215290 = C145400 * p;
    const double C43920 = C215334 - (C146229 * C216043) / q - C216117;
    const double C51527 =
        C150361 / C143578 - (C156778 * be + C148133 * C216041) / q - C216117;
    const double C215804 = C158971 * p;
    const double C44657 = C215399 - (C146705 * C216043) / q - C216145;
    const double C45080 =
        C215422 - (C148129 * be + C146230 * C216041) / q - C216145;
    const double C44936 =
        C146229 / C143578 - (C146230 * C216043) / q + C215409 - C216154;
    const double C47374 =
        C150362 / C143578 - (C151799 * be + C150836 * C216041) / q - C216154;
    const double C215766 = C51814 * p;
    const double C215729 = C51814 / C143578;
    const double C215346 = C51814 / q;
    const double C215445 = 3 * C45337;
    const double C215442 = C45337 * p;
    const double C215432 = C45337 / C143578;
    const double C215447 = 3 * C45347;
    const double C215433 = C45347 / C143578;
    const double C45387 =
        C148585 / q - (C45347 * C216043) / q + C148526 / q - (C45935 * p) / q;
    const double C215563 = C46951 / C143578;
    const double C215448 = C46951 * p;
    const double C149567 = (2 * C46951) / q - (C149391 * C216043) / q +
                           C149893 / q - (C161024 * p) / q;
    const double C215532 = C46492 * p;
    const double C215525 = 3 * C46492;
    const double C215510 = C46492 / C143578;
    const double C215528 = 3 * C46493;
    const double C215511 = C46493 / C143578;
    const double C215451 = C46493 * p;
    const double C215895 = C49493 / q;
    const double C215676 = 3 * C49493;
    const double C215611 = C49493 * p;
    const double C215714 = C51255 * p;
    const double C215411 = C51255 / q;
    const double C215897 = C47230 / q;
    const double C215579 = 3 * C47230;
    const double C215450 = C47230 * p;
    const double C46007 = -(C45935 * C216044 + C215489) / q;
    const double C215522 = C150315 * p;
    const double C215607 = 3 * C47910;
    const double C215605 = C47910 * p;
    const double C215595 = C47910 / C143578;
    const double C215643 = 3 * C48496;
    const double C215639 = C48496 / C143578;
    const double C215612 = C48496 * p;
    const double C216238 = C215609 / C143578;
    const double C154014 =
        C215654 - (C154043 * C216043) / q + C215931 - (C162876 * p) / q;
    const double C215699 = C50051 / C143578;
    const double C215644 = C50051 * p;
    const double C215531 = C150465 * p;
    const double C150554 =
        C50051 / q - (C150465 * C216043) / q + C155664 / q - (C161669 * p) / q;
    const double C215898 = C161654 * p;
    const double C215689 = C49772 / C143578;
    const double C215614 = C49772 * p;
    const double C154161 =
        (2 * C49772) / q - (C153953 * C216044) / q - (C162951 * p) / q;
    const double C215920 = C53395 * p;
    const double C215728 = C53395 / C143578;
    const double C215530 = C53395 / q;
    const double C216052 = C215219 / q;
    const double C216083 = C215286 / q;
    const double C216115 = C215345 / q;
    const double C216122 = C215352 / q;
    const double C216126 = C215355 / q;
    const double C216147 = C215391 / q;
    const double C148556 =
        C215749 - (C148585 * C216043) / q + C215444 - (C45347 * p) / q;
    const double C157082 = C215749 - (C152763 * C216044) / q - (C47920 * p) / q;
    const double C45916 = -(C149387 * be + C45934 * C216041 + C215487) / q;
    const double C46006 = -(C45934 * C216044 + C215488) / q;
    const double C216202 = C215529 / q;
    const double C46987 = -(C46951 * C216044 + C215567) / q;
    const double C47500 = -(C152010 * be + C47509 * C216041 + C215567) / q;
    const double C49016 = -(C153949 * be + C49034 * C216041 + C215660) / q;
    const double C216254 = C215662 / q;
    const double C216259 = C215678 / q;
    const double C50042 = -(C155646 * be + C50051 * C216041 + C215678) / q;
    const double C216267 = C215763 / q;
    const double C144324 = -(C144014 * C216044 + C215765) / q;
    const double C216268 = C215767 / q;
    const double C147066 = -(C144149 * C216044 + C215767) / q;
    const double C216278 = C215801 / q;
    const double C216280 = C215803 / q;
    const double C216281 = C215806 / q;
    const double C151197 = -(C145342 * C216044 + C215806) / q;
    const double C216293 = C215829 / q;
    const double C216298 = C215836 / q;
    const double C216299 = C215837 / q;
    const double C216300 = C215838 / q;
    const double C149597 = -(C149391 * C216044 + C215875) / q;
    const double C215491 = C149626 * p;
    const double C216325 = C215896 / q;
    const double C216338 = C215927 / q;
    const double C216340 = C215932 / q;
    const double C216981 = C95132 * p;
    const double C216922 = C95132 / C143578;
    const double C216494 = C95132 / q;
    const double C216983 = C96434 * p;
    const double C216946 = C96434 / C143578;
    const double C216563 = C96434 / q;
    const double C216662 = 3 * C90082;
    const double C216659 = C90082 * p;
    const double C216649 = C90082 / C143578;
    const double C216664 = 3 * C90091;
    const double C216650 = C90091 / C143578;
    const double C90127 = C172640 / q - (C45344 * be + C90091 * C216043) / q +
                          C172581 / q - (C90653 * p) / q;
    const double C216780 = C91688 / C143578;
    const double C216665 = C91688 * p;
    const double C173611 = (2 * C91688) / q -
                           (C160804 * be + C173436 * C216043) / q +
                           C173932 / q - (C184879 * p) / q;
    const double C216745 = 3 * C91230;
    const double C216728 = C91230 / C143578;
    const double C216668 = C91230 * p;
    const double C216931 = C95899 * p;
    const double C216628 = C95899 / q;
    const double C217114 = C91967 / q;
    const double C216796 = 3 * C91967;
    const double C216667 = C91967 * p;
    const double C90729 = -(C90653 * C216044 + C216706) / q;
    const double C216860 = 3 * C93183;
    const double C216856 = C93183 / C143578;
    const double C216829 = C93183 * p;
    const double C216916 = C94757 / C143578;
    const double C216861 = C94757 * p;
    const double C217137 = C97953 * p;
    const double C216945 = C97953 / C143578;
    const double C216747 = C97953 / q;
    const double C172611 = C216966 - (C163664 * be + C172640 * C216043) / q +
                           C216661 - (C90091 * p) / q;
    const double C180991 = C216966 - (C176741 * C216044) / q - (C92633 * p) / q;
    const double C90633 = -(C90652 * C216041 + C216704) / q;
    const double C90728 = -(C90652 * C216044 + C216705) / q;
    const double C91724 = -(C91688 * C216044 + C216784) / q;
    const double C92237 = -(C92246 * C216041 + C216784) / q;
    const double C173640 = -(C173436 * C216044 + C217092) / q;
    const double C216708 = C173669 * p;
    const double C218195 = C139652 * p;
    const double C218136 = C139652 / C143578;
    const double C217708 = C139652 / q;
    const double C218197 = C140954 * p;
    const double C218160 = C140954 / C143578;
    const double C217777 = C140954 / q;
    const double C217876 = 3 * C134633;
    const double C217873 = C134633 * p;
    const double C217863 = C134633 / C143578;
    const double C217878 = 3 * C134642;
    const double C217864 = C134642 / C143578;
    const double C134678 =
        C196408 / q - (C134642 * C216043) / q + C196349 / q - (C135192 * p) / q;
    const double C217994 = C136208 / C143578;
    const double C217879 = C136208 * p;
    const double C197378 = (2 * C136208) / q - (C197203 * C216043) / q +
                           C197699 / q - (C208614 * p) / q;
    const double C217959 = 3 * C135750;
    const double C217942 = C135750 / C143578;
    const double C217882 = C135750 * p;
    const double C218145 = C140419 * p;
    const double C217842 = C140419 / q;
    const double C218328 = C136487 / q;
    const double C218010 = 3 * C136487;
    const double C217881 = C136487 * p;
    const double C135264 = -(C90649 * be + C135192 * C216044 + C217920) / q;
    const double C218074 = 3 * C137691;
    const double C218070 = C137691 / C143578;
    const double C218043 = C137691 * p;
    const double C218130 = C139277 / C143578;
    const double C218075 = C139277 * p;
    const double C218351 = C142473 * p;
    const double C218159 = C142473 / C143578;
    const double C217961 = C142473 / q;
    const double C196379 =
        C218180 - (C196408 * C216043) / q + C217875 - (C134642 * p) / q;
    const double C204750 =
        C218180 - (C163765 * be + C200504 * C216044) / q - (C137153 * p) / q;
    const double C135173 = -(C135191 * C216041 + C217918) / q;
    const double C135263 = -(C149387 * be + C135191 * C216044 + C217919) / q;
    const double C136244 = -(C151092 * be + C136208 * C216044 + C217998) / q;
    const double C136757 = -(C136766 * C216041 + C217998) / q;
    const double C197407 = -(C160804 * be + C197203 * C216044 + C218306) / q;
    const double C217922 = C197436 * p;
    const double C215265 = C42566 / C143578;
    const double C215185 = 3 * C42566;
    const double C42545 = C143642 / q - (C42563 * be + C42566 * C216041) / q +
                          C143643 / q - (C42556 * p) / q;
    const double C215266 = C43199 * p;
    const double C215252 = 3 * C43199;
    const double C215255 = 3 * C43200;
    const double C215197 = C43200 * p;
    const double C215341 = C43757 * p;
    const double C215325 = 3 * C43757;
    const double C215328 = 3 * C43758;
    const double C215205 = C43758 * p;
    const double C42598 = -(C42556 * C216043 + C215196) / q;
    const double C42640 = -(C42556 * C216044 + C215204) / q;
    const double C215406 = 3 * C44855;
    const double C215270 = C44855 * p;
    const double C216166 = C215429 / q;
    const double C216163 = C215425 / C143578;
    const double C216164 = C215426 / C143578;
    const double C149090 = C215869 - (C160712 * be + C149121 * C216041) / q +
                           C215870 - (C160716 * p) / q;
    const double C151998 =
        C215869 - (C149274 * C216044) / q - (C162285 * p) / q;
    const double C215264 = C145078 * p;
    const double C145166 = C46870 / q - (C158802 * be + C145078 * C216041) / q +
                           C150975 / q - (C158806 * p) / q;
    const double C215859 = C160347 * p;
    const double C216195 = C215517 / q;
    const double C216187 = C215504 / C143578;
    const double C215269 = C145137 * p;
    const double C216189 = C215506 / C143578;
    const double C45247 = -(C45167 * C216044 + C215438) / q;
    const double C216167 = C215434 / q;
    const double C216192 = C215437 / q;
    const double C45237 = -(C45157 * C216044 + C215437) / q;
    const double C215798 = C158837 * p;
    const double C45845 = -(C45773 * C216044 + C215484) / q;
    const double C216233 = C215592 / q;
    const double C216230 = C215588 / C143578;
    const double C216231 = C215589 / C143578;
    const double C215337 = C146008 * p;
    const double C216244 = C215637 / C143578;
    const double C47780 = -(C47740 * C216043 + C215598) / q;
    const double C153652 = C48872 / C143578 -
                           (C162597 * be + C153683 * C216041) / q + C215925 -
                           (C162601 * p) / q;
    const double C215340 = C146067 * p;
    const double C146125 = C49691 / q - (C159466 * be + C146067 * C216041) / q +
                           C155071 / q - (C159470 * p) / q;
    const double C216255 = C215670 / C143578;
    const double C216246 = C215597 / q;
    const double C47770 = -(C47730 * C216043 + C215597) / q;
    const double C216234 = C215601 / q;
    const double C215833 = C159485 * p;
    const double C48909 = -(C48873 * C216043 + C215641) / q;
    const double C43182 = C215257 - (C50267 * be + C43200 * C216041) / q +
                          C144997 / q - C215196 / q;
    const double C53300 = C215703 - (C53224 * C216044) / q - C215598 / q;
    const double C215702 = C148410 / C143578;
    const double C50355 = -(C50279 * C216044 + C215708) / q;
    const double C51681 = -(C51643 * C216043 + C215708) / q;
    const double C53205 =
        C156429 / q - (C53221 * be + C53224 * C216041) / q - C215708 / q;
    const double C46367 = C215513 - (C46331 * C216043) / q - C215484 / q;
    const double C48411 = C215513 - (C48343 * C216044) / q - C215641 / q;
    const double C152564 =
        C156868 / q - (C162383 * be + C152507 * C216041) / q - C215919 / q;
    const double C156087 = -(C143642 * C216044 + C215919) / q;
    const double C43740 = C215330 - (C51631 * be + C43758 * C216041) / q +
                          C145927 / q - C215204 / q;
    const double C53262 = C215733 - (C53224 * C216043) / q - C215438 / q;
    const double C143595 = C215745 - (C157735 * be + C143642 * C216041) / q +
                           C215188 - (C42566 * p) / q;
    const double C157412 = C215745 - (C152507 * C216044) / q - (C47740 * p) / q;
    const double C42597 = -(C42555 * C216043 + C215195) / q;
    const double C42639 = -(C42555 * C216044 + C215203) / q;
    const double C216071 = C215256 / q;
    const double C216110 = C215329 / q;
    const double C44333 = -(C44297 * C216044 + C215386) / q;
    const double C44594 = -(C44576 * C216043 + C215386) / q;
    const double C44846 = C215407 - (C147745 * be + C44855 * C216041) / q +
                          C147749 / q - C215386 / q;
    const double C216180 = C215476 / q;
    const double C45844 = -(C45772 * C216044 + C215483) / q;
    const double C216191 = C215507 / q;
    const double C216193 = C215512 / q;
    const double C216194 = C215516 / q;
    const double C216221 = C215565 / q;
    const double C46906 = -(C46870 * C216044 + C215565) / q;
    const double C216252 = C215651 / q;
    const double C48908 = -(C48872 * C216043 + C215656) / q;
    const double C216256 = C215674 / q;
    const double C49709 = -(C49691 * C216043 + C215674) / q;
    const double C215206 = C143884 * p;
    const double C215209 = C143927 * p;
    const double C143970 = -(C143753 * C216044 + C215753) / q;
    const double C145195 = C215796 - (C158818 * be + C145137 * C216041) / q +
                           C151437 / q - C215797 / q;
    const double C146949 = -(C144982 * C216044 + C215797) / q;
    const double C216294 = C215832 / q;
    const double C149332 =
        C160857 / q - (C160886 * be + C149274 * C216041) / q - C215874 / q;
    const double C151080 = -(C149121 * C216044 + C215874) / q;
    const double C216322 = C215891 / q;
    const double C216323 = C215892 / q;
    const double C216339 = C215930 / q;
    const double C48998 = -(C48944 * C216043 + C153923 * p) / q;
    const double C216482 = C87390 / C143578;
    const double C216406 = 3 * C87390;
    const double C87371 =
        C167787 / q - (C87390 * C216041) / q + C167788 / q - (C87381 * p) / q;
    const double C216472 = 3 * C87968;
    const double C216416 = C87968 * p;
    const double C216545 = 3 * C88526;
    const double C216422 = C88526 * p;
    const double C87419 = -(C42552 * be + C87381 * C216043 + C216415) / q;
    const double C87457 = -(C87381 * C216044 + C216421) / q;
    const double C216623 = 3 * C89623;
    const double C216487 = C89623 * p;
    const double C87950 =
        C216474 - (C87968 * C216041) / q + C169123 / q - C216415 / q;
    const double C216919 = C172465 / C143578;
    const double C95047 = -(C94979 * C216044 + C216925) / q;
    const double C96315 = -(C51640 * be + C96281 * C216043 + C216925) / q;
    const double C97783 = C180341 / q - (C97800 * C216041) / q - C216925 / q;
    const double C176542 = C180777 / q - (C176485 * C216041) / q - C217136 / q;
    const double C180002 = -(C167787 * C216044 + C217136) / q;
    const double C88508 =
        C216547 - (C88526 * C216041) / q + C170037 / q - C216421 / q;
    const double C167741 =
        C216962 - (C167787 * C216041) / q + C216409 - (C87390 * p) / q;
    const double C181318 = C216962 - (C176485 * C216044) / q - (C92471 * p) / q;
    const double C87418 = -(C143607 * be + C87380 * C216043 + C216414) / q;
    const double C87456 = -(C87380 * C216044 + C216420) / q;
    const double C89101 = -(C89065 * C216044 + C216603) / q;
    const double C89362 = -(C147286 * be + C89344 * C216043 + C216603) / q;
    const double C89614 =
        C216624 - (C89623 * C216041) / q + C171817 / q - C216603 / q;
    const double C216423 = C168024 * p;
    const double C216426 = C168067 * p;
    const double C168111 = -(C167894 * C216044 + C216970) / q;
    const double C217696 = C131941 / C143578;
    const double C217620 = 3 * C131941;
    const double C131922 =
        C191561 / q - (C131941 * C216041) / q + C191562 / q - (C131932 * p) / q;
    const double C217686 = 3 * C132519;
    const double C217630 = C132519 * p;
    const double C217759 = 3 * C133077;
    const double C217636 = C133077 * p;
    const double C131970 = -(C131932 * C216043 + C217629) / q;
    const double C132008 = -(C42552 * be + C131932 * C216044 + C217635) / q;
    const double C217837 = 3 * C134174;
    const double C217701 = C134174 * p;
    const double C132501 =
        C217688 - (C132519 * C216041) / q + C192896 / q - C217629 / q;
    const double C218133 = C196233 / C143578;
    const double C139567 = -(C50276 * be + C139499 * C216044 + C218139) / q;
    const double C140835 = -(C140801 * C216043 + C218139) / q;
    const double C142303 = C204100 / q - (C142320 * C216041) / q - C218139 / q;
    const double C200305 = C204536 / q - (C200248 * C216041) / q - C218350 / q;
    const double C203761 = -(C157735 * be + C191561 * C216044 + C218350) / q;
    const double C133059 =
        C217761 - (C133077 * C216041) / q + C193809 / q - C217635 / q;
    const double C191515 =
        C218176 - (C191561 * C216041) / q + C217623 - (C131941 * p) / q;
    const double C205077 =
        C218176 - (C162383 * be + C200248 * C216044) / q - (C136991 * p) / q;
    const double C131969 = -(C131931 * C216043 + C217628) / q;
    const double C132007 = -(C143607 * be + C131931 * C216044 + C217634) / q;
    const double C133652 = -(C146824 * be + C133616 * C216044 + C217817) / q;
    const double C133913 = -(C133895 * C216043 + C217817) / q;
    const double C134165 =
        C217838 - (C134174 * C216041) / q + C195586 / q - C217817 / q;
    const double C217637 = C191798 * p;
    const double C217640 = C191841 * p;
    const double C191884 = -(C157956 * be + C191668 * C216044 + C218184) / q;
    const double C217513 = C217054 / q;
    const double C217502 = C217032 / q;
    const double C217552 = C217144 / q;
    const double C217493 = C217019 / q;
    const double C168770 = -(C157908 * be + C168549 * C216043 + C216995) / q;
    const double C168462 = -(C168154 * C216044 + C216982) / q;
    const double C217480 = C216979 / q;
    const double C217507 = C217046 / q;
    const double C174873 =
        C216900 - (C185694 * be + C174902 * C216043) / q - C217549;
    const double C175297 =
        C173109 / C143578 - (C175253 * C216044) / q + C217133 - C217549;
    const double C93722 = -(C93740 * C216041 + C216877) / q;
    const double C217554 = C217149 / q;
    const double C174610 =
        C216799 - (C174902 * C216044) / q + C217105 - C217541;
    const double C179829 =
        C176869 / C143578 - (C187462 * be + C178823 * C216043) / q - C217541;
    const double C217535 = C217100 / q;
    const double C173698 = C217088 - (C173990 * C216044) / q - C217530;
    const double C176257 = (3 * C172824) / C143578 -
                           (C186182 * be + C175253 * C216043) / q - C217530;
    const double C217534 = C217099 / q;
    const double C216613 = C171243 * p;
    const double C93614 = -(C153678 * be + C93578 * C216043 + C216873) / q;
    const double C217553 = C217147 / q;
    const double C94631 =
        C94083 / C143578 - (C94649 * C216041) / q - (C179384 * p) / q;
    const double C169756 =
        C169667 / C143578 - (C169668 * C216044) / q + C217012 - C217501;
    const double C178938 =
        C170583 / C143578 - (C187192 * be + C170879 * C216043) / q - C217501;
    const double C217340 = C216572 / q;
    const double C217514 = C217055 / q;
    const double C217408 = C216733 / q;
    const double C217537 = C217109 / q;
    const double C169698 = C217011 - (C169963 * C216044) / q - C217499;
    const double C175812 =
        C216636 - (C186053 * be + C169668 * C216043) / q - C217499;
    const double C217504 = C217034 / q;
    const double C217407 = C216729 / q;
    const double C217536 = C217108 / q;
    const double C169638 = C217007 - (C169933 * C216044) / q - C217496;
    const double C172207 =
        C168610 / C143578 - (C184277 * be + C171199 * C216043) / q - C217496;
    const double C217503 = C217033 / q;
    const double C217329 = C216562 / q;
    const double C217512 = C217053 / q;
    const double C90557 = -(C90481 * C216044 + C216700) / q;
    const double C173377 = C184709 / q - (C173319 * C216041) / q - C217091 / q;
    const double C175095 = -(C173170 * C216044 + C217091) / q;
    const double C216452 = C168641 * p;
    const double C217488 = C216999 / q;
    const double C171702 = -(C160156 * be + C168727 * C216043 + C216999) / q;
    const double C217487 = C216997 / q;
    const double C217482 = C216984 / q;
    const double C171155 = -(C168289 * C216044 + C216984) / q;
    const double C217481 = C216980 / q;
    const double C91571 =
        C216773 - (C150878 * be + C174639 * C216043) / q - C217431;
    const double C92327 = C216791 - (C173743 * C216044) / q + C216800 - C217431;
    const double C217547 = C217124 / q;
    const double C92048 =
        C169932 / C143578 - (C172824 * C216044) / q + C216793 - C217440;
    const double C94370 =
        C170848 / C143578 - (C155007 * be + C177155 * C216043) / q - C217440;
    const double C217546 = C217123 / q;
    const double C217115 = C185504 * p;
    const double C216906 = C94478 / C143578;
    const double C216831 = C94478 * p;
    const double C178124 =
        (2 * C94478) / q - (C177918 * C216044) / q - (C186785 * p) / q;
    const double C217473 = C216895 / q;
    const double C94748 = -(C94757 * C216041 + C216895) / q;
    const double C217112 = C94199 / q;
    const double C216893 = 3 * C94199;
    const double C216828 = C94199 * p;
    const double C217539 = C217113 / q;
    const double C217121 = C185624 * p;
    const double C91769 = C216779 - (C173109 * C216044) / q - C217432;
    const double C92138 =
        C216640 - (C151830 * be + C172824 * C216043) / q - C217432;
    const double C177979 = C216871 - (C186702 * be + C178008 * C216043) / q +
                           C217148 - (C186707 * p) / q;
    const double C217468 = C216879 / q;
    const double C91392 = C216688 - (C172840 * C216044) / q + C216726 - C217422;
    const double C93525 =
        C216850 - (C153619 * be + C174931 * C216043) / q - C217422;
    const double C216748 = C174494 * p;
    const double C174581 = C94757 / q - (C185515 * be + C174494 * C216043) / q +
                           C179588 / q - (C185520 * p) / q;
    const double C91391 = C216754 - (C174639 * C216044) / q + C216725 - C217421;
    const double C94928 =
        C216914 - (C155924 * be + C177467 * C216043) / q - C217421;
    const double C217428 = C216763 / q;
    const double C217544 = C217119 / q;
    const double C216757 = C174669 * p;
    const double C90824 = C216695 - (C173125 * C216044) / q - C217396;
    const double C91572 =
        C216775 - (C150894 * be + C172840 * C216043) / q - C217396;
    const double C217098 = C184999 * p;
    const double C90823 = C216694 - (C173727 * C216044) / q - C217395;
    const double C92417 = (3 * C172840) / C143578 -
                          (C152288 * be + C173743 * C216043) / q - C217395;
    const double C217399 = C216715 / q;
    const double C217416 = C216746 / q;
    const double C90253 = C216648 - (C172839 * C216044) / q - C217386;
    const double C98276 =
        C216960 - (C157691 * be + C174947 * C216043) / q - C217386;
    const double C216749 = C91229 * p;
    const double C216742 = 3 * C91229;
    const double C216727 = C91229 / C143578;
    const double C217452 = C216826 / C143578;
    const double C90244 = C216647 - (C169932 * C216044) / q - C217385;
    const double C96222 =
        C170864 / C143578 - (C156807 * be + C172222 * C216043) / q - C217385;
    const double C216739 = C174344 * p;
    const double C216824 = 3 * C92624;
    const double C216822 = C92624 * p;
    const double C216812 = C92624 / C143578;
    const double C89785 =
        C169063 / C143578 - (C169683 * C216044) / q + C216626 - C217373;
    const double C94361 = C174931 / C143578 - (C177155 * C216041) / q - C217373;
    const double C88993 =
        C92966 / q - (C89029 * C216041) / q - (C170819 * p) / q;
    const double C92930 =
        C92975 / C143578 - (C92966 * C216041) / q - (C89029 * p) / q;
    const double C217519 = C217063 / q;
    const double C179326 = -(C163405 * be + C170671 * C216043 + C217063) / q;
    const double C217050 = C183354 * p;
    const double C93093 = C216730 - (C93021 * C216044) / q - C216858 / q;
    const double C93615 = -(C138067 * be + C93579 * C216043 + C216858) / q;
    const double C217470 = C216891 / q;
    const double C94415 = -(C155051 * be + C94397 * C216043 + C216891) / q;
    const double C89011 = C216595 - (C170583 * C216041) / q - C217355;
    const double C89506 = C216615 - (C168610 * C216044) / q + C216616 - C217355;
    const double C217518 = C217061 / q;
    const double C217060 = C183636 * p;
    const double C89227 = C216599 - (C169048 * C216044) / q - C217356;
    const double C89866 = C216640 - (C169683 * C216041) / q - C217356;
    const double C217508 = C217049 / q;
    const double C177622 = C93578 / C143578 - (C177652 * C216041) / q +
                           C217142 - (C186441 * p) / q;
    const double C217466 = C216868 / q;
    const double C88850 = C216540 - (C168626 * C216044) / q + C216551 - C217347;
    const double C92948 = C216850 - (C170848 * C216041) / q - C217347;
    const double C216557 = C170173 * p;
    const double C170231 =
        C94397 / q - (C170173 * C216041) / q + C179010 / q - (C183339 * p) / q;
    const double C93704 = -(C177884 * be + C93650 * C216043 + C177889 * p) / q;
    const double C217448 = C216818 / q;
    const double C88849 = C216580 - (C170583 * C216044) / q + C216549 - C217346;
    const double C94640 = C216914 - (C176869 * C216041) / q - C217346;
    const double C217352 = C216588 / q;
    const double C217517 = C217059 / q;
    const double C89704 = C170335 / C143578 -
                          (C148129 * be + C170336 * C216043) / q + C216626 -
                          C217368;
    const double C92111 = C174391 / C143578 - (C174858 * C216041) / q - C217368;
    const double C217495 = C217023 / q;
    const double C175209 = -(C169464 * C216044 + C217023) / q;
    const double C217015 = C182716 * p;
    const double C90558 = -(C90482 * C216044 + C216701) / q;
    const double C91104 =
        C216730 - (C98317 * be + C91068 * C216043) / q - C216701 / q;
    const double C217435 = C216782 / q;
    const double C91643 = -(C91607 * C216044 + C216782) / q;
    const double C217021 = C182853 * p;
    const double C89425 =
        C216616 - (C147669 * be + C170804 * C216043) / q - C217359;
    const double C89848 = C216639 - (C170336 * C216041) / q - C217359;
    const double C217361 = C216608 / q;
    const double C171041 = -(C169108 * C216044 + C217014) / q;
    const double C88417 = C216533 - (C169405 * C216041) / q - C217317;
    const double C89146 = C168214 / C143578 -
                          (C147211 * be + C168215 * C216043) / q + C216599 -
                          C217317;
    const double C217494 = C217020 / q;
    const double C216583 = C170613 * p;
    const double C88292 = C216478 - (C169063 * C216044) / q - C217304;
    const double C96205 = C174947 / C143578 - (C172222 * C216041) / q - C217304;
    const double C88994 =
        C96757 / q - (C89030 * C216041) / q - (C89596 * p) / q;
    const double C89578 =
        (3 * C89030) / C143578 - (C89596 * C216041) / q - (C171760 * p) / q;
    const double C96723 =
        C181148 / C143578 - (C96757 * C216041) / q - (C89030 * p) / q;
    const double C216554 = C170115 * p;
    const double C217458 = C216854 / C143578;
    const double C92507 = -(C47737 * be + C92471 * C216043 + C216815) / q;
    const double C97868 = C216920 - (C97800 * C216044) / q - C216815 / q;
    const double C217469 = C216887 / C143578;
    const double C217460 = C216814 / q;
    const double C92498 = -(C47727 * be + C92462 * C216043 + C216814) / q;
    const double C217030 = C182957 * p;
    const double C88291 = C216476 - (C169667 * C216044) / q - C217303;
    const double C89875 =
        C168626 / C143578 - (C148161 * be + C169683 * C216043) / q - C217303;
    const double C92129 = C172840 / C143578 - (C172824 * C216041) / q - C217303;
    const double C217052 = C183441 * p;
    const double C88687 =
        C216549 - (C146683 * be + C170319 * C216043) / q - C217330;
    const double C94343 = C174373 / C143578 - (C176613 * C216041) / q - C217330;
    const double C217336 = C216569 / q;
    const double C217076 = C184210 * p;
    const double C217409 = C216734 / q;
    const double C217401 = C216721 / C143578;
    const double C217405 = C216724 / q;
    const double C216507 = C169522 * p;
    const double C88688 =
        C216551 - (C146700 * be + C170335 * C216043) / q - C217331;
    const double C96171 = C174390 / C143578 - (C172192 * C216041) / q - C217331;
    const double C216486 = C169259 * p;
    const double C217403 = C216723 / C143578;
    const double C90001 = -(C89929 * C216044 + C216655) / q;
    const double C97834 =
        C216950 - (C53221 * be + C97800 * C216043) / q - C216655 / q;
    const double C169317 =
        C217013 - (C169259 * C216041) / q + C175440 / q - C217014 / q;
    const double C217406 = C216654 / q;
    const double C89992 = -(C89920 * C216044 + C216654) / q;
    const double C173140 =
        C217086 - (C173170 * C216041) / q + C217087 - (C184577 * p) / q;
    const double C175987 =
        C217086 - (C173319 * C216044) / q - (C186128 * p) / q;
    const double C217394 = C216693 / q;
    const double C88130 = C168230 / C143578 -
                          (C145769 * be + C168231 * C216043) / q + C216478 -
                          C217292;
    const double C90370 = C172581 / C143578 - (C169872 * C216041) / q - C217292;
    const double C216481 = C169201 * p;
    const double C169288 =
        C91607 / q - (C169201 * C216041) / q + C174991 / q - (C182686 * p) / q;
    const double C217381 = C216651 / q;
    const double C88129 =
        C216495 - (C145752 * be + C169405 * C216043) / q + C216476 - C217291;
    const double C91832 = C172582 / C143578 - (C172565 * C216041) / q - C217291;
    const double C217297 = C216503 / q;
    const double C217492 = C217018 / q;
    const double C87732 = C216410 - (C168625 * C216044) / q - C217275;
    const double C96740 = C216960 - (C170864 * C216041) / q - C217275;
    const double C216558 = C88525 * p;
    const double C216542 = 3 * C88525;
    const double C217445 = C216806 / C143578;
    const double C216578 = C170554 * p;
    const double C87723 = C216408 - (C168609 * C216044) / q - C217274;
    const double C89012 = C216597 - (C168626 * C216041) / q - C217274;
    const double C217447 = C216809 / q;
    const double C217444 = C216805 / C143578;
    const double C216993 = C182275 * p;
    const double C87722 = C216407 - (C168593 * C216044) / q - C217273;
    const double C89587 =
        (3 * C168626) / C143578 - (C168610 * C216041) / q - C217273;
    const double C217324 = C216546 / q;
    const double C87561 =
        C216410 - (C144794 * be + C168230 * C216043) / q - C217262;
    const double C95404 = C172580 / C143578 - (C169888 * C216041) / q - C217262;
    const double C216483 = C87967 * p;
    const double C216469 = 3 * C87967;
    const double C217378 = C216643 / C143578;
    const double C216493 = C169376 * p;
    const double C87552 =
        C216408 - (C144779 * be + C168214 * C216043) / q - C217261;
    const double C88418 = C216535 - (C168231 * C216041) / q - C217261;
    const double C217380 = C216646 / q;
    const double C217377 = C216642 / C143578;
    const double C216978 = C182010 * p;
    const double C87551 =
        C216407 - (C144763 * be + C168198 * C216043) / q - C217260;
    const double C89290 =
        (3 * C168231) / C143578 - (C168215 * C216041) / q - C217260;
    const double C217266 = C216436 / q;
    const double C217285 = C216473 / q;
    const double C218727 = C218268 / q;
    const double C218716 = C218246 / q;
    const double C218766 = C218358 / q;
    const double C218707 = C218233 / q;
    const double C192543 = -(C192322 * C216043 + C218209) / q;
    const double C192235 = -(C157860 * be + C191927 * C216044 + C218196) / q;
    const double C218694 = C218193 / q;
    const double C218721 = C218260 / q;
    const double C198639 = C218114 - (C198668 * C216043) / q - C218763;
    const double C199062 = C196877 / C143578 -
                           (C186182 * be + C199018 * C216044) / q + C218347 -
                           C218763;
    const double C138222 = -(C138241 * C216041 + C218091) / q;
    const double C218768 = C218363 / q;
    const double C198376 =
        C218013 - (C185694 * be + C198668 * C216044) / q + C218319 - C218755;
    const double C203588 =
        C200632 / C143578 - (C202584 * C216043) / q - C218755;
    const double C218749 = C218314 / q;
    const double C197465 =
        C218302 - (C185085 * be + C197757 * C216044) / q - C218744;
    const double C200020 =
        (3 * C196592) / C143578 - (C199018 * C216043) / q - C218744;
    const double C218748 = C218313 / q;
    const double C217827 = C195013 * p;
    const double C138108 = -(C138070 * C216043 + C218087) / q;
    const double C218767 = C218361 / q;
    const double C139151 =
        C138603 / C143578 - (C139169 * C216041) / q - (C203144 * p) / q;
    const double C193528 = C193439 / C143578 -
                           (C186053 * be + C193440 * C216044) / q + C218226 -
                           C218715;
    const double C202699 =
        C194354 / C143578 - (C194650 * C216043) / q - C218715;
    const double C218554 = C217786 / q;
    const double C218728 = C218269 / q;
    const double C218622 = C217947 / q;
    const double C218751 = C218323 / q;
    const double C193470 =
        C218225 - (C185939 * be + C193735 * C216044) / q - C218713;
    const double C199576 = C217850 - (C193440 * C216043) / q - C218713;
    const double C218718 = C218248 / q;
    const double C218621 = C217943 / q;
    const double C218750 = C218322 / q;
    const double C193410 =
        C218221 - (C183071 * be + C193705 * C216044) / q - C218710;
    const double C195975 =
        C192383 / C143578 - (C194969 * C216043) / q - C218710;
    const double C218717 = C218247 / q;
    const double C218543 = C217776 / q;
    const double C218726 = C218267 / q;
    const double C135101 = -(C149116 * be + C135029 * C216044 + C217914) / q;
    const double C197145 = C208449 / q - (C197087 * C216041) / q - C218305 / q;
    const double C198860 = -(C160712 * be + C196938 * C216044 + C218305) / q;
    const double C217666 = C192414 * p;
    const double C218702 = C218213 / q;
    const double C195471 = -(C192500 * C216043 + C218213) / q;
    const double C218701 = C218211 / q;
    const double C218696 = C218198 / q;
    const double C194925 = -(C159951 * be + C192062 * C216044 + C218198) / q;
    const double C218695 = C218194 / q;
    const double C136091 = C217987 - (C198405 * C216043) / q - C218645;
    const double C136847 =
        C218005 - (C152288 * be + C197510 * C216044) / q + C218014 - C218645;
    const double C218761 = C218338 / q;
    const double C136568 = C193704 / C143578 -
                           (C151830 * be + C196592 * C216044) / q + C218007 -
                           C218654;
    const double C138890 =
        C194619 / C143578 - (C200918 * C216043) / q - C218654;
    const double C218760 = C218337 / q;
    const double C218329 = C209234 * p;
    const double C218120 = C138998 / C143578;
    const double C218045 = C138998 * p;
    const double C201886 = (2 * C138998) / q -
                           (C162689 * be + C201680 * C216044) / q -
                           (C210504 * p) / q;
    const double C218687 = C218109 / q;
    const double C139268 = -(C139277 * C216041 + C218109) / q;
    const double C218326 = C138719 / q;
    const double C218107 = 3 * C138719;
    const double C218042 = C138719 * p;
    const double C218753 = C218327 / q;
    const double C218335 = C209355 * p;
    const double C136289 =
        C217993 - (C151373 * be + C196877 * C216044) / q - C218646;
    const double C136658 = C217854 - (C196592 * C216043) / q - C218646;
    const double C201741 =
        C218085 - (C201770 * C216043) / q + C218362 - (C210429 * p) / q;
    const double C218682 = C218093 / q;
    const double C135912 =
        C217902 - (C150894 * be + C196608 * C216044) / q + C217940 - C218636;
    const double C138014 = C218064 - (C198697 * C216043) / q - C218636;
    const double C217962 = C198260 * p;
    const double C198347 =
        C139277 / q - (C198260 * C216043) / q + C203347 / q - (C209249 * p) / q;
    const double C135911 =
        C217968 - (C150878 * be + C198405 * C216044) / q + C217939 - C218635;
    const double C139448 = C218128 - (C201230 * C216043) / q - C218635;
    const double C218642 = C217977 / q;
    const double C218758 = C218333 / q;
    const double C217971 = C198435 * p;
    const double C135354 =
        C217909 - (C149966 * be + C196893 * C216044) / q - C218610;
    const double C136092 = C217989 - (C196608 * C216043) / q - C218610;
    const double C218312 = C208734 * p;
    const double C135353 =
        C217908 - (C149950 * be + C197494 * C216044) / q - C218609;
    const double C136937 =
        (3 * C196608) / C143578 - (C197510 * C216043) / q - C218609;
    const double C218613 = C217929 / q;
    const double C218630 = C217960 / q;
    const double C134804 =
        C217862 - (C149040 * be + C196607 * C216044) / q - C218600;
    const double C142796 = C218174 - (C198713 * C216043) / q - C218600;
    const double C217963 = C135749 * p;
    const double C217956 = 3 * C135749;
    const double C217941 = C135749 / C143578;
    const double C218666 = C218040 / C143578;
    const double C134795 =
        C217861 - (C149025 * be + C193704 * C216044) / q - C218599;
    const double C140742 =
        C194635 / C143578 - (C195990 * C216043) / q - C218599;
    const double C217953 = C198110 * p;
    const double C218038 = 3 * C137144;
    const double C218036 = C137144 * p;
    const double C218026 = C137144 / C143578;
    const double C134336 = C192836 / C143578 -
                           (C148161 * be + C193455 * C216044) / q + C217840 -
                           C218587;
    const double C138881 =
        C198697 / C143578 - (C200918 * C216041) / q - C218587;
    const double C133544 =
        C137486 / q - (C133580 * C216041) / q - (C194590 * p) / q;
    const double C137450 =
        C137495 / C143578 - (C137486 * C216041) / q - (C133580 * p) / q;
    const double C218733 = C218277 / q;
    const double C203086 = -(C194442 * C216043 + C218277) / q;
    const double C218264 = C207103 * p;
    const double C137606 =
        C217944 - (C93018 * be + C137538 * C216044) / q - C218072 / q;
    const double C138109 = -(C138071 * C216043 + C218072) / q;
    const double C218684 = C218105 / q;
    const double C138935 = -(C138917 * C216043 + C218105) / q;
    const double C133562 = C217809 - (C194354 * C216041) / q - C218569;
    const double C134057 =
        C217829 - (C147701 * be + C192383 * C216044) / q + C217830 - C218569;
    const double C218732 = C218275 / q;
    const double C218274 = C207382 * p;
    const double C133778 =
        C217813 - (C147242 * be + C192821 * C216044) / q - C218570;
    const double C134417 = C217854 - (C193455 * C216041) / q - C218570;
    const double C218722 = C218263 / q;
    const double C201385 = C138070 / C143578 - (C201415 * C216041) / q +
                           C218356 - (C210165 * p) / q;
    const double C218680 = C218082 / q;
    const double C133401 =
        C217754 - (C146764 * be + C192399 * C216044) / q + C217765 - C218561;
    const double C137468 = C218064 - (C194619 * C216041) / q - C218561;
    const double C217771 = C193945 * p;
    const double C194003 =
        C138917 / q - (C193945 * C216041) / q + C202771 / q - (C207088 * p) / q;
    const double C138203 = -(C138146 * C216043 + C201651 * p) / q;
    const double C218662 = C218032 / q;
    const double C133400 =
        C217794 - (C146747 * be + C194354 * C216044) / q + C217763 - C218560;
    const double C139160 = C218128 - (C200632 * C216041) / q - C218560;
    const double C218566 = C217802 / q;
    const double C218731 = C218273 / q;
    const double C134255 =
        C194106 / C143578 - (C194107 * C216043) / q + C217840 - C218582;
    const double C136631 =
        C198157 / C143578 - (C198624 * C216041) / q - C218582;
    const double C218709 = C218237 / q;
    const double C198974 = -(C161932 * be + C193236 * C216044 + C218237) / q;
    const double C218229 = C206469 * p;
    const double C135102 = -(C90478 * be + C135030 * C216044 + C217915) / q;
    const double C135624 = C217944 - (C135588 * C216043) / q - C217915 / q;
    const double C218649 = C217996 / q;
    const double C136163 = -(C150955 * be + C136127 * C216044 + C217996) / q;
    const double C218235 = C206603 * p;
    const double C133976 = C217830 - (C194575 * C216043) / q - C218573;
    const double C134399 = C217853 - (C194107 * C216041) / q - C218573;
    const double C218575 = C217822 / q;
    const double C194811 = -(C158615 * be + C192881 * C216044 + C218228) / q;
    const double C132968 = C217747 - (C193177 * C216041) / q - C218531;
    const double C133697 =
        C191987 / C143578 - (C191988 * C216043) / q + C217813 - C218531;
    const double C218708 = C218234 / q;
    const double C217797 = C194384 * p;
    const double C132843 =
        C217692 - (C145832 * be + C192836 * C216044) / q - C218518;
    const double C140725 =
        C198713 / C143578 - (C195990 * C216041) / q - C218518;
    const double C133545 =
        C141277 / q - (C133581 * C216041) / q - (C134147 * p) / q;
    const double C134129 =
        (3 * C133581) / C143578 - (C134147 * C216041) / q - (C195529 * p) / q;
    const double C141243 =
        C204907 / C143578 - (C141277 * C216041) / q - (C133581 * p) / q;
    const double C217768 = C193887 * p;
    const double C218672 = C218068 / C143578;
    const double C137027 = -(C136991 * C216043 + C218029) / q;
    const double C142388 =
        C218134 - (C53221 * be + C142320 * C216044) / q - C218029 / q;
    const double C218683 = C218101 / C143578;
    const double C218674 = C218028 / q;
    const double C137018 = -(C136982 * C216043 + C218028) / q;
    const double C218244 = C206707 * p;
    const double C132842 =
        C217690 - (C145815 * be + C193439 * C216044) / q - C218517;
    const double C134426 =
        C192399 / C143578 - (C193455 * C216043) / q - C218517;
    const double C136649 =
        C196608 / C143578 - (C196592 * C216041) / q - C218517;
    const double C218266 = C207189 * p;
    const double C133238 = C217763 - (C194090 * C216043) / q - C218544;
    const double C138863 =
        C198139 / C143578 - (C200376 * C216041) / q - C218544;
    const double C218550 = C217783 / q;
    const double C218290 = C207952 * p;
    const double C218623 = C217948 / q;
    const double C218615 = C217935 / C143578;
    const double C218619 = C217938 / q;
    const double C217721 = C193294 * p;
    const double C133239 = C217765 - (C194106 * C216043) / q - C218545;
    const double C140691 =
        C198156 / C143578 - (C195960 * C216041) / q - C218545;
    const double C217700 = C193032 * p;
    const double C218617 = C217937 / C143578;
    const double C134552 = -(C45164 * be + C134480 * C216044 + C217869) / q;
    const double C142354 = C218164 - (C142320 * C216043) / q - C217869 / q;
    const double C193090 =
        C218227 - (C193032 * C216041) / q + C199205 / q - C218228 / q;
    const double C218620 = C217868 / q;
    const double C134543 = -(C45154 * be + C134471 * C216044 + C217868) / q;
    const double C196908 =
        C218300 - (C196938 * C216041) / q + C218301 - (C208317 * p) / q;
    const double C199750 =
        C218300 - (C160886 * be + C197087 * C216044) / q - (C209855 * p) / q;
    const double C218608 = C217907 / q;
    const double C132681 =
        C192003 / C143578 - (C192004 * C216043) / q + C217692 - C218506;
    const double C134921 =
        C196349 / C143578 - (C193644 * C216041) / q - C218506;
    const double C217695 = C192974 * p;
    const double C193061 =
        C136127 / q - (C192974 * C216041) / q + C198757 / q - (C206439 * p) / q;
    const double C218595 = C217865 / q;
    const double C132680 =
        C217709 - (C193177 * C216043) / q + C217690 - C218505;
    const double C136352 =
        C196350 / C143578 - (C196333 * C216041) / q - C218505;
    const double C218511 = C217717 / q;
    const double C218706 = C218232 / q;
    const double C132283 =
        C217624 - (C144886 * be + C192398 * C216044) / q - C218489;
    const double C141260 = C218174 - (C194635 * C216041) / q - C218489;
    const double C217772 = C133076 * p;
    const double C217756 = 3 * C133076;
    const double C218659 = C218020 / C143578;
    const double C217792 = C194325 * p;
    const double C132274 =
        C217622 - (C144871 * be + C192382 * C216044) / q - C218488;
    const double C133563 = C217811 - (C192399 * C216041) / q - C218488;
    const double C218661 = C218023 / q;
    const double C218658 = C218019 / C143578;
    const double C218207 = C206030 * p;
    const double C132273 =
        C217621 - (C144855 * be + C192366 * C216044) / q - C218487;
    const double C134138 =
        (3 * C192399) / C143578 - (C192383 * C216041) / q - C218487;
    const double C218538 = C217760 / q;
    const double C132112 = C217624 - (C192003 * C216043) / q - C218476;
    const double C139924 =
        C196348 / C143578 - (C193660 * C216041) / q - C218476;
    const double C217697 = C132518 * p;
    const double C217683 = 3 * C132518;
    const double C218592 = C217857 / C143578;
    const double C217707 = C193148 * p;
    const double C132103 = C217622 - (C191987 * C216043) / q - C218475;
    const double C132969 = C217749 - (C192004 * C216041) / q - C218475;
    const double C218594 = C217860 / q;
    const double C218591 = C217856 / C143578;
    const double C218192 = C205767 * p;
    const double C132102 = C217621 - (C191971 * C216043) / q - C218474;
    const double C133841 =
        (3 * C192004) / C143578 - (C191988 * C216041) / q - C218474;
    const double C218480 = C217650 / q;
    const double C218499 = C217687 / q;
    const double C216065 = C215241 / q;
    const double C216272 = C215776 / q;
    const double C215198 = C42933 / C143578;
    const double C143797 = (5 * C42933) / C143578 -
                           (C157908 * be + C144412 * C216041) / q -
                           (C157912 * p) / q;
    const double C216131 = C215361 / q;
    const double C215199 = C42934 / C143578;
    const double C42912 = (2 * C42934) / q -
                          (C144408 * be + C42933 * C216041) / q -
                          (C144412 * p) / q;
    const double C215231 = 3 * C42944;
    const double C215200 = C42944 / C143578;
    const double C42923 =
        C144441 / q - (C42941 * be + C42944 * C216041) / q - (C42934 * p) / q;
    const double C143826 =
        C215751 - (C157923 * be + C144441 * C216041) / q - (C42944 * p) / q;
    const double C50773 = C156356 / C143578 -
                          (C50808 * be + C50811 * C216041) / q -
                          (C43704 * p) / q;
    const double C216286 = C215813 / q;
    const double C215302 = 3 * C43523;
    const double C215301 = C43523 * p;
    const double C215267 = C43523 / C143578;
    const double C215304 = 3 * C43524;
    const double C215268 = C43524 / C143578;
    const double C215237 = C43524 * p;
    const double C43668 =
        C50811 / q - (C50799 * be + C43704 * C216041) / q - (C44549 * p) / q;
    const double C44531 = (3 * C43704) / C143578 -
                          (C147226 * be + C44549 * C216041) / q -
                          (C147230 * p) / q;
    const double C43667 =
        C45717 / q - (C145785 * be + C43703 * C216041) / q - (C145789 * p) / q;
    const double C45677 = C45727 / C143578 -
                          (C45714 * be + C45717 * C216041) / q -
                          (C43703 * p) / q;
    const double C215369 = 3 * C44082;
    const double C215339 = C44082 / C143578;
    const double C215243 = C44082 * p;
    const double C215372 = C44081 * p;
    const double C215367 = 3 * C44081;
    const double C215338 = C44081 / C143578;
    const double C144708 = C215248 - (C144441 * C216044) / q - C215781 / q;
    const double C156913 = -(C163780 * be + C152994 * C216041 + C215781) / q;
    const double C215401 = C44738 / C143578;
    const double C215242 = C44738 * p;
    const double C215845 = C45017 / q;
    const double C215418 = 3 * C45017;
    const double C215410 = C45017 / C143578;
    const double C215308 = C45017 * p;
    const double C216310 = C215843 / q;
    const double C146598 = -(C146451 * C216043 + C215843) / q;
    const double C215385 = C44459 / C143578;
    const double C215236 = C44459 * p;
    const double C146890 =
        (2 * C44459) / q - (C159966 * be + C144504 * C216041) / q - C215778 / q;
    const double C144663 = -(C144441 * C216043 + C215779) / q;
    const double C156030 = -(C163679 * be + C148814 * C216041 + C215779) / q;
    const double C215460 = 3 * C45517;
    const double C215456 = C45517 * p;
    const double C215435 = C45517 / C143578;
    const double C215462 = 3 * C45527;
    const double C215436 = C45527 / C143578;
    const double C148614 = C215751 - (C148814 * C216043) / q - (C45527 * p) / q;
    const double C51544 = C53756 / C143578 -
                          (C53744 * be + C51578 * C216041) / q -
                          (C45107 * p) / q;
    const double C53718 = -(C53753 * be + C53756 * C216041 + C51578 * p) / q;
    const double C216319 = C215881 / q;
    const double C215481 = C46096 / C143578;
    const double C149508 =
        (5 * C46096) / C143578 - (C149716 * C216043) / q - (C160994 * p) / q;
    const double C216209 = C215540 / q;
    const double C215482 = C46097 / C143578;
    const double C45547 =
        C148814 / q - (C45527 * C216043) / q - (C46097 * p) / q;
    const double C46114 =
        (2 * C46097) / q - (C46096 * C216043) / q - (C149716 * p) / q;
    const double C215544 = 3 * C46655;
    const double C215515 = C46655 / C143578;
    const double C215465 = C46655 * p;
    const double C215547 = C46654 * p;
    const double C215542 = 3 * C46654;
    const double C215514 = C46654 / C143578;
    const double C215905 = C47311 / q;
    const double C215581 = 3 * C47311;
    const double C215577 = C47311 / C143578;
    const double C215464 = C47311 * p;
    const double C48785 = -(C93522 * be + C48819 * C216041 + C49664 * p) / q;
    const double C148955 = C215474 - (C148814 * C216044) / q - C215865 / q;
    const double C157181 = -(C152994 * C216043 + C215865) / q;
    const double C215585 = C47590 / C143578;
    const double C215499 = C47590 * p;
    const double C216331 = C215904 / q;
    const double C215564 = C47032 / C143578;
    const double C215459 = C47032 * p;
    const double C46799 = -(C98793 * be + C46835 * C216041 + C47401 * p) / q;
    const double C216242 = C215623 / C143578;
    const double C48080 = -(C48097 * be + C48100 * C216041 + C215618) / q;
    const double C52042 =
        C215719 - (C51985 * C216044) / q + C215380 - C215618 / q;
    const double C216243 = C215625 / C143578;
    const double C50678 = C215321 - (C50621 * C216044) / q - C215721 / q;
    const double C52004 = -(C51985 * C216043 + C215721) / q;
    const double C53547 = -(C53563 * be + C53566 * C216041 + C215721) / q;
    const double C216250 = C215647 / C143578;
    const double C48120 = -(C48100 * C216043 + C215622) / q;
    const double C53623 =
        C215717 - (C53566 * C216044) / q + C215558 - C215622 / q;
    const double C48150 =
        C215362 - (C48090 * C216044) / q + C215378 - C215626 / q;
    const double C49179 = -(C138409 * be + C49197 * C216041 + C215626) / q;
    const double C215666 = C154397 * p;
    const double C48700 =
        C215541 - (C48649 * C216044) / q + C215556 - C215649 / q;
    const double C49215 = -(C49197 * C216043 + C215649) / q;
    const double C215667 = C154426 * p;
    const double C216261 = C215681 / C143578;
    const double C48110 = -(C48090 * C216043 + C215621) / q;
    const double C48632 = -(C93342 * be + C48649 * C216041 + C215621) / q;
    const double C51459 =
        C215707 - (C51408 * C216044) / q + C215423 - C215621 / q;
    const double C42954 = -(C42933 * C216043 + C215235) / q;
    const double C215296 = C145519 * p;
    const double C45089 =
        C51578 / q - (C148145 * be + C45107 * C216041) / q - (C148149 * p) / q;
    const double C215300 = C145579 * p;
    const double C47383 = C46835 / C143578 -
                          (C151814 * be + C47401 * C216041) / q -
                          (C151818 * p) / q;
    const double C215306 = C145637 * p;
    const double C49646 = C48819 / C143578 -
                          (C154991 * be + C49664 * C216041) / q -
                          (C154995 * p) / q;
    const double C216162 = C215366 / q;
    const double C44099 = -(C44081 * C216043 + C215366) / q;
    const double C44135 =
        C44082 / q - (C44081 * C216044) / q + C146480 / q - C216138;
    const double C49844 =
        C215658 - (C155318 * be + C49853 * C216041) / q - C216138;
    const double C216144 = C215396 / q;
    const double C44747 = -(C44738 * C216043 + C215396) / q;
    const double C215493 = C149656 * p;
    const double C149804 =
        (2 * C47032) / q - (C149656 * C216043) / q - (C161173 * p) / q;
    const double C47662 = -(C152272 * be + C47680 * C216041 + C152276 * p) / q;
    const double C46150 = C149685 / q - (C46096 * C216044) / q - C216185;
    const double C215536 = C150584 * p;
    const double C50204 = -(C155908 * be + C50222 * C216041 + C155912 * p) / q;
    const double C46708 =
        C46655 / q - (C46654 * C216044) / q + C150613 / q - C216214;
    const double C50141 = C215658 - (C50132 * C216043) / q - C216214;
    const double C46798 = -(C150848 * be + C46834 * C216041 + C150852 * p) / q;
    const double C215572 = C151286 * p;
    const double C215628 = C48160 / C143578;
    const double C215741 = C152965 / C143578;
    const double C49601 =
        C215417 - (C49574 * C216044) / q + C215683 - C215684 / q;
    const double C49862 = -(C49853 * C216043 + C215684) / q;
    const double C50123 = -(C155778 * be + C50132 * C216041 + C215684) / q;
    const double C144679 = C144859 / q - (C144412 * C216044) / q - C216273;
    const double C147352 =
        (2 * C44738) / q - (C160156 * be + C144590 * C216041) / q - C216273;
    const double C144723 = C144905 / q - (C144504 * C216044) / q - C216274;
    const double C145667 = C44459 / q - (C145519 * C216043) / q - C216288;
    const double C151021 =
        C47032 / q - (C161947 * be + C145579 * C216041) / q - C216288;
    const double C145697 = C145820 / q - (C145519 * C216044) / q - C216289;
    const double C145726 = C145851 / q - (C145579 * C216044) / q - C216290;
    const double C153807 =
        C215657 - (C162722 * be + C154220 * C216041) / q - C216303;
    const double C146628 =
        C44738 / q - (C146451 * C216044) / q + C146752 / q - C216304;
    const double C155117 =
        C49853 / q - (C163405 * be + C146568 * C216041) / q - C216304;
    const double C155577 =
        C215700 - (C163563 * be + C154920 * C216041) / q - C216305;
    const double C149834 = C149954 / q - (C149656 * C216044) / q - C216320;
    const double C149863 = C149984 / q - (C149716 * C216044) / q - C216321;
    const double C152071 = (2 * C47590) / q - (C149774 * C216043) / q - C216321;
    const double C154072 = C215657 - (C154279 * C216043) / q - C216330;
    const double C155247 = C215690 - (C154920 * C216043) / q - C216332;
    const double C150790 =
        C47590 / q - (C150643 * C216044) / q + C150913 / q - C216333;
    const double C155707 = C50132 / q - (C150701 * C216043) / q - C216333;
    const double C49268 = -(C154363 * be + C49214 * C216041 + C154367 * p) / q;
    const double C217279 = C216458 / q;
    const double C95421 =
        C180270 / C143578 - (C95455 * C216041) / q - (C88472 * p) / q;
    const double C88436 =
        C95455 / q - (C88472 * C216041) / q - (C89317 * p) / q;
    const double C89299 =
        (3 * C88472) / C143578 - (C89317 * C216041) / q - (C171314 * p) / q;
    const double C88435 =
        C90424 / q - (C88471 * C216041) / q - (C169903 * p) / q;
    const double C90388 =
        C90433 / C143578 - (C90424 * C216041) / q - (C88471 * p) / q;
    const double C168843 = C216465 - (C168578 * C216044) / q - C216998 / q;
    const double C180822 = -(C176972 * C216041 + C216998) / q;
    const double C168799 = -(C157923 * be + C168578 * C216043 + C216996) / q;
    const double C179945 = -(C172869 * C216041 + C216996) / q;
    const double C173010 = C216691 - (C172869 * C216044) / q - C217082 / q;
    const double C181090 = -(C163780 * be + C176972 * C216043 + C217082) / q;
    const double C217456 = C216840 / C143578;
    const double C92777 = -(C92795 * C216041 + C216835) / q;
    const double C96638 =
        C216936 - (C96587 * C216044) / q + C216597 - C216835 / q;
    const double C217457 = C216842 / C143578;
    const double C95336 = C216538 - (C95285 * C216044) / q - C216938 / q;
    const double C96604 = -(C51982 * be + C96587 * C216043 + C216938) / q;
    const double C98089 = -(C98106 * C216041 + C216938) / q;
    const double C217464 = C216864 / C143578;
    const double C92813 = -(C48097 * be + C92795 * C216043 + C216839) / q;
    const double C98157 =
        C216934 - (C98106 * C216044) / q + C216775 - C216839 / q;
    const double C92840 =
        C216579 - (C92786 * C216044) / q + C216595 - C216843 / q;
    const double C93885 = -(C93903 * C216041 + C216843) / q;
    const double C216883 = C178357 * p;
    const double C93399 =
        C216758 - (C93345 * C216044) / q + C216773 - C216866 / q;
    const double C93921 = -(C138409 * be + C93903 * C216043 + C216866) / q;
    const double C216884 = C178386 * p;
    const double C217475 = C216898 / C143578;
    const double C92804 = -(C48087 * be + C92786 * C216043 + C216838) / q;
    const double C93327 = -(C93345 * C216041 + C216838) / q;
    const double C96103 =
        C216924 - (C96052 * C216044) / q + C216640 - C216838 / q;
    const double C216845 = C92849 / C143578;
    const double C216958 = C176943 / C143578;
    const double C94307 =
        C216634 - (C94280 * C216044) / q + C216900 - C216901 / q;
    const double C94568 = -(C155318 * be + C94559 * C216043 + C216901) / q;
    const double C94829 = -(C94838 * C216041 + C216901) / q;
    const double C93974 = -(C93920 * C216041 + C178328 * p) / q;
    const double C218493 = C217672 / q;
    const double C139941 =
        C204029 / C143578 - (C139975 * C216041) / q - (C133023 * p) / q;
    const double C132987 =
        C139975 / q - (C133023 * C216041) / q - (C133868 * p) / q;
    const double C133850 =
        (3 * C133023) / C143578 - (C133868 * C216041) / q - (C195084 * p) / q;
    const double C132986 =
        C134975 / q - (C133022 * C216041) / q - (C193675 * p) / q;
    const double C134939 =
        C134984 / C143578 - (C134975 * C216041) / q - (C133022 * p) / q;
    const double C192616 =
        C217679 - (C157923 * be + C192351 * C216044) / q - C218212 / q;
    const double C204581 = -(C200735 * C216041 + C218212) / q;
    const double C192572 = -(C192351 * C216043 + C218210) / q;
    const double C203704 = -(C196637 * C216041 + C218210) / q;
    const double C196778 =
        C217905 - (C163679 * be + C196637 * C216044) / q - C218296 / q;
    const double C204849 = -(C200735 * C216043 + C218296) / q;
    const double C218670 = C218054 / C143578;
    const double C137297 = -(C137315 * C216041 + C218049) / q;
    const double C141158 =
        C218150 - (C51982 * be + C141107 * C216044) / q + C217811 - C218049 / q;
    const double C218671 = C218056 / C143578;
    const double C139856 =
        C217752 - (C50618 * be + C139805 * C216044) / q - C218152 / q;
    const double C141124 = -(C141107 * C216043 + C218152) / q;
    const double C142609 = -(C142626 * C216041 + C218152) / q;
    const double C218678 = C218078 / C143578;
    const double C137333 = -(C137315 * C216043 + C218053) / q;
    const double C142677 =
        C218148 - (C53563 * be + C142626 * C216044) / q + C217989 - C218053 / q;
    const double C137360 =
        C217793 - (C48087 * be + C137306 * C216044) / q + C217809 - C218057 / q;
    const double C138394 = -(C138413 * C216041 + C218057) / q;
    const double C218097 = C202119 * p;
    const double C137895 =
        C217972 - (C93342 * be + C137844 * C216044) / q + C217987 - C218080 / q;
    const double C138432 = -(C138413 * C216043 + C218080) / q;
    const double C218098 = C202148 * p;
    const double C218689 = C218112 / C143578;
    const double C137324 = -(C137306 * C216043 + C218052) / q;
    const double C137827 = -(C137844 * C216041 + C218052) / q;
    const double C140623 =
        C218138 - (C53554 * be + C140572 * C216044) / q + C217854 - C218052 / q;
    const double C218059 = C137369 / C143578;
    const double C218172 = C200706 / C143578;
    const double C138827 = C217848 - (C154858 * be + C138800 * C216044) / q +
                           C218114 - C218115 / q;
    const double C139088 = -(C139079 * C216043 + C218115) / q;
    const double C139349 = -(C139358 * C216041 + C218115) / q;
    const double C138488 = -(C138431 * C216041 + C202090 * p) / q;
    const double C216265 = C215761 / q;
    const double C215190 = C42744 / C143578;
    const double C42828 = -(C42744 * C216044 + C215225) / q;
    const double C143709 = (5 * C42744) / C143578 -
                           (C157860 * be + C144014 * C216041) / q -
                           (C157864 * p) / q;
    const double C216076 = C215276 / q;
    const double C215191 = C42745 / C143578;
    const double C42723 = (2 * C42745) / q -
                          (C144010 * be + C42744 * C216041) / q -
                          (C144014 * p) / q;
    const double C215212 = 3 * C42755;
    const double C215192 = C42755 / C143578;
    const double C42734 =
        C144043 / q - (C42752 * be + C42755 * C216041) / q - (C42745 * p) / q;
    const double C143738 =
        C215749 - (C157875 * be + C144043 * C216041) / q - (C42755 * p) / q;
    const double C215284 = 3 * C43362;
    const double C215263 = C43362 / C143578;
    const double C215221 = C43362 * p;
    const double C215287 = C43361 * p;
    const double C215281 = 3 * C43361;
    const double C215262 = C43361 / C143578;
    const double C144308 = C215247 - (C144043 * C216043) / q - C215764 / q;
    const double C156001 = -(C163664 * be + C148585 * C216041 + C215764) / q;
    const double C215383 = C44378 / C143578;
    const double C215220 = C44378 * p;
    const double C44414 = -(C44378 * C216044 + C215391) / q;
    const double C216297 = C215835 / q;
    const double C215356 = C43919 * p;
    const double C215349 = 3 * C43919;
    const double C215335 = C43919 / C143578;
    const double C216157 = C215290 / q;
    const double C43433 = -(C43361 * C216044 + C215290) / q;
    const double C215351 = 3 * C43920;
    const double C215336 = C43920 / C143578;
    const double C215227 = C43920 * p;
    const double C216308 = C215804 / q;
    const double C145460 = -(C145254 * C216044 + C215804) / q;
    const double C215400 = C44657 / C143578;
    const double C215226 = C44657 * p;
    const double C147322 =
        (2 * C44657) / q - (C160141 * be + C144235 * C216041) / q - C215765 / q;
    const double C215805 = C44936 / q;
    const double C215413 = 3 * C44936;
    const double C215291 = C44936 * p;
    const double C144353 = -(C144043 * C216044 + C215766) / q;
    const double C156884 = -(C163765 * be + C152763 * C216041 + C215766) / q;
    const double C216169 = C215445 / C143578;
    const double C45327 = -(C45344 * be + C45347 * C216041 + C215442) / q;
    const double C50488 =
        C215713 - (C50450 * C216043) / q + C215318 - C215442 / q;
    const double C216170 = C215447 / C143578;
    const double C215452 = C45387 / C143578;
    const double C45377 =
        C215277 - (C45337 * C216043) / q + C215316 - C215448 / q;
    const double C45917 = -(C90649 * be + C45935 * C216041 + C215448) / q;
    const double C215490 = C149567 * p;
    const double C216204 = C215532 / q;
    const double C216199 = C215525 / C143578;
    const double C216201 = C215528 / C143578;
    const double C45427 = -(C45347 * C216044 + C215451) / q;
    const double C53433 =
        C215735 - (C53395 * C216043) / q + C215524 - C215451 / q;
    const double C216258 = C215676 / C143578;
    const double C216240 = C215611 / q;
    const double C48479 = -(C93180 * be + C48496 * C216041 + C215611) / q;
    const double C50526 = -(C50450 * C216044 + C215714) / q;
    const double C51852 = C215377 - (C51814 * C216043) / q - C215714 / q;
    const double C53376 = -(C53392 * be + C53395 * C216041 + C215714) / q;
    const double C47248 =
        C215411 - (C47230 * C216043) / q + C150836 / q - C215567 / q;
    const double C216223 = C215579 / C143578;
    const double C45417 = -(C45337 * C216044 + C215450) / q;
    const double C46475 = -(C98470 * be + C46493 * C216041 + C215450) / q;
    const double C51289 =
        C215729 - (C51255 * C216043) / q + C215422 - C215450 / q;
    const double C216224 = C215522 / q;
    const double C46474 = -(C150311 * be + C46492 * C216041 + C215522) / q;
    const double C216236 = C215607 / C143578;
    const double C47900 = -(C47917 * be + C47920 * C216041 + C215605) / q;
    const double C51890 = C215713 - (C51814 * C216044) / q - C215605 / q;
    const double C216247 = C215643 / C143578;
    const double C216241 = C215612 / q;
    const double C49107 = C216238 - (C49035 * C216044) / q - (C49034 * p) / q;
    const double C215661 = C154014 * p;
    const double C216248 = C215644 / q;
    const double C216203 = C215531 / q;
    const double C215534 = C150554 * p;
    const double C216326 = C215898 / q;
    const double C47990 = C215346 - (C47910 * C216044) / q - C215614 / q;
    const double C49017 = -(C138238 * be + C49035 * C216041 + C215614) / q;
    const double C49142 = -(C154157 * be + C49106 * C216041 + C154161 * p) / q;
    const double C152848 = C157225 / q - (C152763 * C216043) / q - C215920 / q;
    const double C156200 = -(C148585 * C216044 + C215920) / q;
    const double C46529 =
        C215530 - (C46493 * C216043) / q + C150362 / q - C215489 / q;
    const double C42786 = C144058 / q - (C42744 * C216043) / q - C216052;
    const double C43397 =
        C43362 / q - (C43361 * C216043) / q + C145283 / q - C216083;
    const double C46942 =
        C215480 - (C151092 * be + C46951 * C216041) / q - C216083;
    const double C43901 =
        C47910 / q - (C146180 * be + C43919 * C216041) / q - C216115;
    const double C43955 = C146213 / q - (C43919 * C216043) / q - C216122;
    const double C49484 =
        C215639 - (C154726 * be + C49493 * C216041) / q - C216122;
    const double C43991 = C43920 / q - (C43919 * C216044) / q - C216126;
    const double C49763 =
        C215655 - (C155186 * be + C49772 * C216041) / q - C216126;
    const double C44675 = C146705 / q - (C44657 * C216043) / q - C216147;
    const double C44927 =
        C215411 - (C147882 * be + C44936 * C216041) / q - C216147;
    const double C215715 = C148556 / C143578;
    const double C46528 =
        C48496 / q - (C46492 * C216043) / q + C150345 / q - C216202;
    const double C47545 = C215480 - (C47509 * C216044) / q - C216202;
    const double C46043 = -(C90725 * be + C46007 * C216041 + C46987 * p) / q;
    const double C49070 = C153982 / q - (C49034 * C216043) / q - C216254;
    const double C49529 = C215411 - (C49493 * C216044) / q - C216259;
    const double C49790 = C154472 / q - (C49772 * C216043) / q - C216259;
    const double C144279 = C144767 / q - (C144014 * C216043) / q - C216267;
    const double C146860 =
        (2 * C44378) / q - (C159951 * be + C144149 * C216041) / q - C216267;
    const double C144368 = C147673 / q - (C144235 * C216043) / q - C216268;
    const double C149186 =
        C215479 - (C160804 * be + C149391 * C216041) / q - C216278;
    const double C145430 =
        C44378 / q - (C145254 * C216043) / q + C145757 / q - C216280;
    const double C150991 =
        C46951 / q - (C161932 * be + C145342 * C216041) / q - C216280;
    const double C151911 =
        C215584 - (C162252 * be + C151166 * C216041) / q - C216281;
    const double C47005 = C46007 / C143578 -
                          (C151193 * be + C46987 * C216041) / q -
                          (C151197 * p) / q;
    const double C146362 = C146688 / q - (C146184 * C216043) / q - C216298;
    const double C154625 =
        C215895 - (C163201 * be + C146274 * C216041) / q - C216298;
    const double C146392 = C44657 / q - (C146184 * C216044) / q - C216299;
    const double C155087 =
        C49772 / q - (C163390 * be + C146332 * C216041) / q - C216299;
    const double C146421 = C155438 / q - (C146332 * C216043) / q - C216300;
    const double C155547 =
        C215699 - (C163548 * be + C154800 * C216041) / q - C216300;
    const double C46042 = -(C149593 * be + C46006 * C216041 + C149597 * p) / q;
    const double C46060 = -(C45970 * C216044 + C215491) / q;
    const double C150495 =
        C215895 - (C150315 * C216043) / q + C150820 / q - C216325;
    const double C152116 = C215563 - (C151166 * C216044) / q - C216325;
    const double C153748 =
        C215654 - (C162689 * be + C153953 * C216041) / q - C216338;
    const double C154131 = C154456 / q - (C153953 * C216043) / q - C216340;
    const double C168447 =
        C216464 - (C157875 * be + C168183 * C216043) / q - C216981 / q;
    const double C179916 = -(C172640 * C216041 + C216981) / q;
    const double C168491 = -(C168183 * C216044 + C216983) / q;
    const double C180793 = -(C176741 * C216041 + C216983) / q;
    const double C217383 = C216662 / C143578;
    const double C90073 = -(C90091 * C216041 + C216659) / q;
    const double C95166 =
        C216930 - (C50447 * be + C95132 * C216043) / q + C216535 - C216659 / q;
    const double C217384 = C216664 / C143578;
    const double C216669 = C90127 / C143578;
    const double C90118 =
        C216494 - (C45334 * be + C90082 * C216043) / q + C216533 - C216665 / q;
    const double C90634 = -(C90653 * C216041 + C216665) / q;
    const double C216707 = C173611 * p;
    const double C217415 = C216745 / C143578;
    const double C90163 = -(C90091 * C216044 + C216668) / q;
    const double C97987 =
        C216952 - (C53392 * be + C97953 * C216043) / q + C216741 - C216668 / q;
    const double C95200 = -(C95132 * C216044 + C216931) / q;
    const double C96468 =
        C216594 - (C51811 * be + C96434 * C216043) / q - C216931 / q;
    const double C97936 = -(C97953 * C216041 + C216931) / q;
    const double C91985 = C216628 - (C151552 * be + C91967 * C216043) / q +
                          C174858 / q - C216784 / q;
    const double C217437 = C216796 / C143578;
    const double C90154 = -(C90082 * C216044 + C216667) / q;
    const double C91212 = -(C91230 * C216041 + C216667) / q;
    const double C95933 =
        C216946 - (C53383 * be + C95899 * C216043) / q + C216639 - C216667 / q;
    const double C217461 = C216860 / C143578;
    const double C217455 = C216829 / q;
    const double C217462 = C216861 / q;
    const double C176826 =
        C181133 / q - (C163765 * be + C176741 * C216043) / q - C217137 / q;
    const double C180115 = -(C172640 * C216044 + C217137) / q;
    const double C91266 = C216747 - (C98470 * be + C91230 * C216043) / q +
                          C174391 / q - C216706 / q;
    const double C216932 = C172611 / C143578;
    const double C90767 = -(C90729 * C216041 + C91724 * p) / q;
    const double C90766 = -(C90728 * C216041 + C173640 * p) / q;
    const double C90785 = -(C90690 * C216044 + C216708) / q;
    const double C192220 = C217678 - (C191956 * C216043) / q - C218195 / q;
    const double C203675 = -(C196408 * C216041 + C218195) / q;
    const double C192264 = -(C157875 * be + C191956 * C216044 + C218197) / q;
    const double C204552 = -(C200504 * C216041 + C218197) / q;
    const double C218597 = C217876 / C143578;
    const double C134624 = -(C134642 * C216041 + C217873) / q;
    const double C139686 =
        C218144 - (C139652 * C216043) / q + C217749 - C217873 / q;
    const double C218598 = C217878 / C143578;
    const double C217883 = C134678 / C143578;
    const double C134669 =
        C217708 - (C134633 * C216043) / q + C217747 - C217879 / q;
    const double C135174 = -(C135192 * C216041 + C217879) / q;
    const double C217921 = C197378 * p;
    const double C218629 = C217959 / C143578;
    const double C134714 = -(C45344 * be + C134642 * C216044 + C217882) / q;
    const double C142507 =
        C218166 - (C142473 * C216043) / q + C217955 - C217882 / q;
    const double C139720 = -(C50447 * be + C139652 * C216044 + C218145) / q;
    const double C140988 = C217808 - (C140954 * C216043) / q - C218145 / q;
    const double C142456 = -(C142473 * C216041 + C218145) / q;
    const double C136505 =
        C217842 - (C136487 * C216043) / q + C198624 / q - C217998 / q;
    const double C218651 = C218010 / C143578;
    const double C134705 = -(C45334 * be + C134633 * C216044 + C217881) / q;
    const double C135732 = -(C135750 * C216041 + C217881) / q;
    const double C140453 =
        C218160 - (C140419 * C216043) / q + C217853 - C217881 / q;
    const double C218675 = C218074 / C143578;
    const double C218669 = C218043 / q;
    const double C218676 = C218075 / q;
    const double C200589 = C204892 / q - (C200504 * C216043) / q - C218351 / q;
    const double C203874 = -(C163664 * be + C196408 * C216044 + C218351) / q;
    const double C135786 =
        C217961 - (C135750 * C216043) / q + C198157 / q - C217920 / q;
    const double C218146 = C196379 / C143578;
    const double C135300 = -(C135264 * C216041 + C136244 * p) / q;
    const double C135299 = -(C135263 * C216041 + C197407 * p) / q;
    const double C135317 = -(C149563 * be + C135227 * C216044 + C217922) / q;
    const double C216042 = C215185 / C143578;
    const double C215272 = C42545 / C143578;
    const double C216073 = C215266 / q;
    const double C216068 = C215252 / C143578;
    const double C216070 = C215255 / C143578;
    const double C42608 = -(C42566 * C216043 + C215197) / q;
    const double C50260 =
        C215703 - (C50276 * be + C50279 * C216041) / q + C215260 - C215197 / q;
    const double C216112 = C215341 / q;
    const double C216107 = C215325 / C143578;
    const double C216109 = C215328 / C143578;
    const double C42650 = -(C42566 * C216044 + C215205) / q;
    const double C51624 =
        C215733 - (C51640 * be + C51643 * C216041) / q + C215333 - C215205 / q;
    const double C216149 = C215406 / C143578;
    const double C43272 = -(C43200 * C216044 + C215270) / q;
    const double C43794 = -(C43758 * C216043 + C215270) / q;
    const double C51085 = C53224 / C143578 -
                          (C53212 * be + C51102 * C216041) / q + C215408 -
                          C215270 / q;
    const double C45147 =
        C148236 / q - (C45164 * be + C45167 * C216041) / q - C216166;
    const double C50317 = C215706 - (C50279 * C216043) / q - C216166;
    const double C45809 = C216164 - (C45773 * C216043) / q - (C45772 * p) / q;
    const double C215475 = C149090 * p;
    const double C216072 = C215264 / q;
    const double C215271 = C145166 * p;
    const double C216312 = C215859 / q;
    const double C46403 = C215428 - (C46331 * C216044) / q - C216195;
    const double C48377 = C215591 - (C48343 * C216043) / q - C216195;
    const double C155634 =
        C216187 - (C150198 * C216044) / q - (C163581 * p) / q;
    const double C216150 = C215269 / q;
    const double C43271 = -(C43199 * C216044 + C215269) / q;
    const double C47446 = C216189 - (C47428 * C216043) / q - C215483 / q;
    const double C45197 = C215257 - (C45157 * C216043) / q - C216167;
    const double C45755 =
        C149136 / q - (C90478 * be + C45773 * C216041) / q - C216167;
    const double C46313 =
        C150060 / q - (C98317 * be + C46331 * C216041) / q - C216192;
    const double C51136 = C51643 / C143578 - (C51102 * C216043) / q - C216192;
    const double C145224 = -(C145078 * C216044 + C215798) / q;
    const double C151065 = C47428 / C143578 -
                           (C161978 * be + C151036 * C216041) / q + C215917 -
                           C215798 / q;
    const double C45307 =
        C148467 / q - (C45247 * C216043) / q - (C45845 * p) / q;
    const double C47720 =
        C152362 / q - (C47737 * be + C47740 * C216041) / q - C216233;
    const double C51719 = C215706 - (C51643 * C216044) / q - C216233;
    const double C48945 = C216231 - (C48873 * C216044) / q - (C48872 * p) / q;
    const double C216151 = C215337 / q;
    const double C43793 = -(C43757 * C216043 + C215337) / q;
    const double C50006 = C216244 - (C49970 * C216044) / q - C215656 / q;
    const double C215650 = C153652 * p;
    const double C216111 = C215340 / q;
    const double C215343 = C146125 * p;
    const double C48326 =
        C153224 / q - (C93018 * be + C48343 * C216041) / q - C216246;
    const double C51170 = C50279 / C143578 - (C51102 * C216044) / q - C216246;
    const double C47810 = C215330 - (C47730 * C216044) / q - C216234;
    const double C48855 =
        C153698 / q - (C138067 * be + C48873 * C216041) / q - C216234;
    const double C216295 = C215833 / q;
    const double C215208 = C43182 * p;
    const double C215519 = C53205 / q;
    const double C47880 = -(C47820 * C216043 + C48411 * p) / q;
    const double C215732 = C152564 / C143578;
    const double C50412 =
        C156087 / C143578 - (C50355 * C216043) / q - (C45237 * p) / q;
    const double C215211 = C43740 * p;
    const double C215709 = C143595 / C143578;
    const double C43181 = C45157 / q - (C144977 * be + C43199 * C216041) / q +
                          C144981 / q - C216071;
    const double C44315 = C215384 - (C44297 * C216043) / q - C216071;
    const double C43739 = C47730 / q - (C145907 * be + C43757 * C216041) / q +
                          C145911 / q - C216110;
    const double C44612 = C215384 - (C44576 * C216044) / q - C216110;
    const double C42703 = -(C42640 * C216043 + C44333 * p) / q;
    const double C215275 = C44846 * p;
    const double C45754 =
        C149120 / q - (C149116 * be + C45772 * C216041) / q - C216180;
    const double C46888 = C216163 - (C46870 * C216043) / q - C216180;
    const double C45898 =
        (2 * C45845) / q - (C45844 * C216043) / q - (C149361 * p) / q;
    const double C45899 =
        (3 * C45247) / C143578 - (C45845 * C216043) / q - (C45844 * p) / q;
    const double C46312 =
        C150044 / q - (C150040 * be + C46330 * C216041) / q - C216191;
    const double C47185 = C45157 / C143578 - (C47149 * C216044) / q - C216191;
    const double C49430 = C47730 / C143578 - (C49412 * C216043) / q - C216191;
    const double C46366 = C48343 / q - (C46330 * C216043) / q - C216193;
    const double C47464 = C215560 - (C47428 * C216044) / q - C216193;
    const double C46402 = C46331 / q - (C46330 * C216044) / q - C216194;
    const double C49988 = C215686 - (C49970 * C216043) / q - C216194;
    const double C47167 = C215407 - (C47149 * C216043) / q - C216221;
    const double C47419 =
        C151878 / q - (C151874 * be + C47428 * C216041) / q - C216221;
    const double C45297 =
        C50355 / q - (C45237 * C216043) / q - (C46906 * p) / q;
    const double C48854 =
        C153682 / q - (C153678 * be + C48872 * C216041) / q - C216252;
    const double C49727 = C216230 - (C49691 * C216044) / q - C216252;
    const double C49448 = C215407 - (C49412 * C216044) / q - C216256;
    const double C49961 =
        C155514 / q - (C155510 * be + C49970 * C216041) / q - C216256;
    const double C42660 = -(C42534 * C216043 + C215206) / q;
    const double C42681 = -(C42534 * C216044 + C215209) / q;
    const double C42702 = -(C42639 * C216043 + C143970 * p) / q;
    const double C215274 = C145195 * p;
    const double C44360 =
        C42640 / C143578 - (C44333 * C216043) / q - (C146949 * p) / q;
    const double C146096 = C49412 / q - (C159450 * be + C146008 * C216041) / q +
                           C154609 / q - C216294;
    const double C147409 = C44297 / C143578 - (C146905 * C216044) / q - C216294;
    const double C215485 = C149332 * p;
    const double C46933 =
        (3 * C45237) / C143578 - (C46906 * C216043) / q - (C151080 * p) / q;
    const double C150227 =
        C161385 / q - (C161431 * be + C150139 * C216041) / q - C216322;
    const double C151540 = C46870 / C143578 - (C151036 * C216044) / q - C216322;
    const double C150256 =
        C161418 / q - (C161447 * be + C150198 * C216041) / q - C216323;
    const double C154714 = C215796 - (C150045 * C216044) / q - C216323;
    const double C153865 =
        C162709 / q - (C162755 * be + C153777 * C216041) / q - C216339;
    const double C155174 = C216255 - (C154670 * C216044) / q - C216339;
    const double C217258 = C216406 / C143578;
    const double C216489 = C87371 / C143578;
    const double C217284 = C216472 / C143578;
    const double C87428 = -(C42563 * be + C87390 * C216043 + C216416) / q;
    const double C94962 =
        C216920 - (C94979 * C216041) / q + C216477 - C216416 / q;
    const double C217323 = C216545 / C143578;
    const double C87466 = -(C87390 * C216044 + C216422) / q;
    const double C96264 =
        C216950 - (C96281 * C216041) / q + C216550 - C216422 / q;
    const double C217363 = C216623 / C143578;
    const double C88040 = -(C87968 * C216044 + C216487) / q;
    const double C88562 = -(C51631 * be + C88526 * C216043 + C216487) / q;
    const double C95729 =
        C97800 / C143578 - (C95746 * C216041) / q + C216625 - C216487 / q;
    const double C216425 = C87950 * p;
    const double C216736 = C97783 / q;
    const double C216949 = C176542 / C143578;
    const double C216428 = C88508 * p;
    const double C216926 = C167741 / C143578;
    const double C87514 = -(C42636 * be + C87457 * C216043 + C89101 * p) / q;
    const double C216492 = C89614 * p;
    const double C87475 = -(C143561 * be + C87361 * C216043 + C216423) / q;
    const double C87494 = -(C87361 * C216044 + C216426) / q;
    const double C87513 = -(C168106 * be + C87456 * C216043 + C168111 * p) / q;
    const double C218472 = C217620 / C143578;
    const double C217703 = C131922 / C143578;
    const double C218498 = C217686 / C143578;
    const double C131979 = -(C131941 * C216043 + C217630) / q;
    const double C139482 =
        C218134 - (C139499 * C216041) / q + C217691 - C217630 / q;
    const double C218537 = C217759 / C143578;
    const double C132017 = -(C42563 * be + C131941 * C216044 + C217636) / q;
    const double C140784 =
        C218164 - (C140801 * C216041) / q + C217764 - C217636 / q;
    const double C218577 = C217837 / C143578;
    const double C132591 = -(C50267 * be + C132519 * C216044 + C217701) / q;
    const double C133113 = -(C133077 * C216043 + C217701) / q;
    const double C140249 =
        C142320 / C143578 - (C140266 * C216041) / q + C217839 - C217701 / q;
    const double C217639 = C132501 * p;
    const double C217950 = C142303 / q;
    const double C218163 = C200305 / C143578;
    const double C217642 = C133059 * p;
    const double C218140 = C191515 / C143578;
    const double C132065 = -(C132008 * C216043 + C133652 * p) / q;
    const double C217706 = C134165 * p;
    const double C132026 = -(C131912 * C216043 + C217637) / q;
    const double C132045 = -(C143561 * be + C131912 * C216044 + C217640) / q;
    const double C132064 = -(C132007 * C216043 + C191884 * p) / q;
    const double C179025 = C94478 / q - (C170438 * C216041) / q - C217513;
    const double C177714 = C216871 - (C177918 * C216041) / q - C217552;
    const double C216789 = C175297 * p;
    const double C178095 =
        C178415 / q - (C162689 * be + C177918 * C216043) / q - C217554;
    const double C216753 = C174610 * p;
    const double C173903 = C174019 / q - (C173758 * C216044) / q - C217535;
    const double C216710 = C173698 * p;
    const double C173874 = C173990 / q - (C173698 * C216044) / q - C217534;
    const double C217358 = C216613 / q;
    const double C177830 = C186542 / q - (C177743 * C216041) / q - C217553;
    const double C216523 = C169756 * p;
    const double C94469 = C216872 - (C94478 * C216041) / q - C217340;
    const double C170525 =
        C179369 / q - (C163390 * be + C170438 * C216043) / q - C217514;
    const double C179472 = C216916 - (C178750 * C216041) / q - C217514;
    const double C91139 = C91068 / q - (C91067 * C216044) / q - C217408;
    const double C94694 =
        C216903 - (C155510 * be + C94676 * C216043) / q - C217408;
    const double C174285 = C185265 / q - (C174227 * C216041) / q - C217537;
    const double C178665 = C217013 - (C174078 * C216044) / q - C217537;
    const double C216517 = C169698 * p;
    const double C169843 = C169963 / q - (C169698 * C216044) / q - C217504;
    const double C91103 =
        C93021 / q - (C150040 * be + C91067 * C216043) / q - C217407;
    const double C92201 = C216777 - (C92165 * C216044) / q - C217407;
    const double C174256 = C185234 / q - (C174169 * C216041) / q - C217536;
    const double C175542 = C91607 / C143578 - (C175050 * C216044) / q - C217536;
    const double C216513 = C169638 * p;
    const double C169814 = C169933 / q - (C169638 * C216044) / q - C217503;
    const double C170467 =
        C170788 / q - (C159386 * be + C170290 * C216043) / q - C217512;
    const double C216702 = C173377 * p;
    const double C168858 = C169033 / q - (C168641 * C216044) / q - C217488;
    const double C168814 = C168989 / q - (C168549 * C216044) / q - C217487;
    const double C168506 =
        C171745 / q - (C160141 * be + C168375 * C216043) / q - C217482;
    const double C168418 =
        C168901 / q - (C157860 * be + C168154 * C216043) / q - C217481;
    const double C91535 = -(C91571 * C216041 + C174873 * p) / q;
    const double C216802 = C92327 / C143578;
    const double C216716 = C92327 * p;
    const double C176059 =
        (2 * C92327) / q - (C186153 * be + C173816 * C216043) / q - C217535;
    const double C174814 =
        C92327 / q - (C174669 * C216044) / q + C174932 / q - C217547;
    const double C179631 =
        C94838 / q - (C187433 * be + C174727 * C216043) / q - C217547;
    const double C217122 = C92048 / q;
    const double C216798 = 3 * C92048;
    const double C216794 = C92048 / C143578;
    const double C216681 = C92048 * p;
    const double C179184 =
        C216907 - (C163563 * be + C178867 * C216043) / q - C217546;
    const double C217540 = C217115 / q;
    const double C92696 = C216563 - (C92624 * C216044) / q - C216831 / q;
    const double C93723 = -(C93741 * C216041 + C216831) / q;
    const double C93848 = -(C93812 * C216041 + C178124 * p) / q;
    const double C94235 = C216628 - (C94199 * C216044) / q - C217473;
    const double C94496 =
        C178430 / q - (C155186 * be + C94478 * C216043) / q - C217473;
    const double C178576 = C217112 - (C170380 * C216041) / q - C217512;
    const double C217472 = C216893 / C143578;
    const double C217454 = C216828 / q;
    const double C93165 = -(C93183 * C216041 + C216828) / q;
    const double C174523 = C217112 - (C161366 * be + C174344 * C216043) / q +
                           C174843 / q - C217539;
    const double C176102 = C216780 - (C175180 * C216044) / q - C217539;
    const double C217545 = C217121 / q;
    const double C216781 = C91769 / C143578;
    const double C216676 = C91769 * p;
    const double C173845 = (2 * C91769) / q -
                           (C160837 * be + C173698 * C216043) / q -
                           (C185029 * p) / q;
    const double C175035 = C91769 / q - (C169698 * C216041) / q - C217502;
    const double C216878 = C177979 * p;
    const double C93776 =
        C177947 / q - (C153949 * be + C93740 * C216043) / q - C217468;
    const double C216761 = 3 * C91392;
    const double C216732 = C91392 / C143578;
    const double C216682 = C91392 * p;
    const double C93489 = -(C93525 * C216041 + C94370 * p) / q;
    const double C94352 =
        C93525 / C143578 - (C94370 * C216041) / q - (C178938 * p) / q;
    const double C217417 = C216748 / q;
    const double C216751 = C174581 * p;
    const double C216764 = C91391 * p;
    const double C216759 = 3 * C91391;
    const double C216731 = C91391 / C143578;
    const double C94910 = -(C94928 * C216041 + C179829 * p) / q;
    const double C91445 =
        C91392 / q - (C91391 * C216044) / q + C174639 / q - C217428;
    const double C94847 =
        C216875 - (C155778 * be + C94838 * C216043) / q - C217428;
    const double C178037 =
        C216874 - (C186734 * be + C178241 * C216043) / q - C217544;
    const double C217423 = C216757 / q;
    const double C216699 = C90824 / C143578;
    const double C91536 = -(C91572 * C216041 + C92138 * p) / q;
    const double C92120 =
        C91572 / C143578 - (C92138 * C216041) / q - (C175812 * p) / q;
    const double C217533 = C217098 / q;
    const double C216698 = C90823 / C143578;
    const double C90842 = (2 * C90824) / q -
                          (C149652 * be + C90823 * C216043) / q -
                          (C173758 * p) / q;
    const double C173553 = (5 * C90823) / C143578 -
                           (C184843 * be + C173758 * C216043) / q -
                           (C184848 * p) / q;
    const double C92399 = -(C92417 * C216041 + C176257 * p) / q;
    const double C90880 = C173727 / q - (C90823 * C216044) / q - C217399;
    const double C91265 = C93183 / q - (C150311 * be + C91229 * C216043) / q +
                          C174374 / q - C217416;
    const double C92282 = C216697 - (C92246 * C216044) / q - C217416;
    const double C216679 = 3 * C90253;
    const double C216653 = C90253 / C143578;
    const double C90271 =
        C172869 / q - (C45524 * be + C90253 * C216043) / q - (C90824 * p) / q;
    const double C172669 =
        C216968 - (C163679 * be + C172869 * C216043) / q - (C90253 * p) / q;
    const double C217418 = C216749 / q;
    const double C217413 = C216742 / C143578;
    const double C93813 = C217452 - (C93741 * C216044) / q - (C93740 * p) / q;
    const double C216677 = 3 * C90244;
    const double C216673 = C90244 * p;
    const double C216652 = C90244 / C143578;
    const double C98242 = -(C98276 * C216041 + C96222 * p) / q;
    const double C217438 = C216739 / q;
    const double C91211 = -(C91229 * C216041 + C216739) / q;
    const double C217450 = C216824 / C143578;
    const double C92615 = -(C92633 * C216041 + C216822) / q;
    const double C96502 = C216930 - (C96434 * C216044) / q - C216822 / q;
    const double C217062 = C89785 / q;
    const double C216635 = 3 * C89785;
    const double C216627 = C89785 / C143578;
    const double C216525 = C89785 * p;
    const double C179501 = C216917 - (C178867 * C216041) / q - C217519;
    const double C217509 = C217050 / q;
    const double C92597 = -(C47817 * be + C92543 * C216043 + C93093 * p) / q;
    const double C94154 = C216624 - (C94118 * C216044) / q - C217470;
    const double C94667 = C179441 / q - (C94676 * C216041) / q - C217470;
    const double C216618 = C89506 / C143578;
    const double C216459 = C89506 * p;
    const double C89515 = -(C147553 * be + C89506 * C216043 + C216613) / q;
    const double C171430 = (2 * C89506) / q - (C168727 * C216041) / q - C217487;
    const double C170729 =
        C89506 / q - (C170554 * C216044) / q + C170849 / q - C217518;
    const double C179054 = C94559 / q - (C170671 * C216041) / q - C217518;
    const double C217524 = C217060 / q;
    const double C170700 = -(C159418 * be + C170554 * C216043 + C217060) / q;
    const double C216602 = C89227 / C143578;
    const double C216453 = C89227 * p;
    const double C169785 =
        C89227 / q - (C158770 * be + C169638 * C216043) / q - C217502;
    const double C170981 =
        (2 * C89227) / q - (C168641 * C216041) / q - C216995 / q;
    const double C170202 =
        C94118 / q - (C170115 * C216041) / q + C178561 / q - C217508;
    const double C171488 = C89065 / C143578 - (C170996 * C216044) / q - C217508;
    const double C216867 = C177622 * p;
    const double C93560 = C177651 / q - (C93578 * C216041) / q - C217466;
    const double C216586 = 3 * C88850;
    const double C216556 = C88850 / C143578;
    const double C216460 = C88850 * p;
    const double C217325 = C216557 / q;
    const double C216560 = C170231 * p;
    const double C92534 = C216547 - (C92462 * C216044) / q - C217448;
    const double C93561 = C177667 / q - (C93579 * C216041) / q - C217448;
    const double C216589 = C88849 * p;
    const double C216584 = 3 * C88849;
    const double C216555 = C88849 / C143578;
    const double C88903 =
        C88850 / q - (C88849 * C216044) / q + C170583 / q - C217352;
    const double C94550 = C216875 - (C94559 * C216041) / q - C217352;
    const double C177772 = C216874 - (C178182 * C216041) / q - C217517;
    const double C217022 = C89704 / q;
    const double C216630 = 3 * C89704;
    const double C216508 = C89704 * p;
    const double C175900 = C216801 - (C175180 * C216041) / q - C217495;
    const double C91742 =
        C90729 / C143578 - (C91724 * C216041) / q - (C175209 * p) / q;
    const double C169347 = -(C169201 * C216044 + C217015) / q;
    const double C175079 =
        C92165 / C143578 - (C175050 * C216041) / q + C217134 - C217015 / q;
    const double C90614 = (2 * C90558) / q -
                          (C173402 * be + C90557 * C216043) / q -
                          (C173407 * p) / q;
    const double C91904 =
        C216624 - (C151417 * be + C91886 * C216043) / q - C217435;
    const double C92156 = C175869 / q - (C92165 * C216041) / q - C217435;
    const double C217522 = C217021 / q;
    const double C169580 = -(C169376 * C216044 + C217021) / q;
    const double C216617 = C89425 / C143578;
    const double C216443 = C89425 * p;
    const double C170496 = C89425 / q - (C170290 * C216044) / q - C217513;
    const double C171401 =
        (2 * C89425) / q - (C168375 * C216041) / q - C216982 / q;
    const double C89443 =
        C170804 / q - (C147421 * be + C89425 * C216043) / q - C217361;
    const double C89695 = C216628 - (C89704 * C216041) / q - C217361;
    const double C89128 = C87457 / C143578 -
                          (C171036 * be + C89101 * C216043) / q -
                          (C171041 * p) / q;
    const double C216600 = C89146 / C143578;
    const double C216437 = C89146 * p;
    const double C89182 = -(C89146 * C216044 + C216608) / q;
    const double C170952 = (2 * C89146) / q - (C168289 * C216041) / q - C217481;
    const double C169551 = C89146 / q - (C158738 * be + C169376 * C216043) / q +
                           C169873 / q - C217494;
    const double C175006 = C91688 / q - (C169464 * C216041) / q - C217494;
    const double C217376 = C216583 / q;
    const double C88867 = -(C146447 * be + C88849 * C216043 + C216583) / q;
    const double C216521 = 3 * C88292;
    const double C216485 = C88292 / C143578;
    const double C216454 = C88292 * p;
    const double C217365 = C216554 / q;
    const double C88561 = -(C145907 * be + C88525 * C216043 + C216554) / q;
    const double C94712 = C217458 - (C94676 * C216044) / q - C216873 / q;
    const double C179112 = C217469 - (C178620 * C216044) / q - C217553;
    const double C93003 = C177198 / q - (C93021 * C216041) / q - C217460;
    const double C95814 = C94979 / C143578 - (C95746 * C216044) / q - C217460;
    const double C217500 = C217030 / q;
    const double C216519 = 3 * C88291;
    const double C216518 = C88291 * p;
    const double C216484 = C88291 / C143578;
    const double C89857 =
        C96222 / q - (C89875 * C216041) / q - (C172207 * p) / q;
    const double C96188 =
        C98276 / C143578 - (C96222 * C216041) / q - (C89875 * p) / q;
    const double C217511 = C217052 / q;
    const double C216573 = C88687 * p;
    const double C216566 = 3 * C88687;
    const double C216552 = C88687 / C143578;
    const double C88669 = C92624 / q - (C88687 * C216041) / q - C217329;
    const double C88723 =
        C170319 / q - (C146180 * be + C88687 * C216043) / q - C217336;
    const double C94190 = C216856 - (C94199 * C216041) / q - C217336;
    const double C217526 = C217076 / q;
    const double C91140 = C216645 - (C91068 * C216044) / q - C217409;
    const double C93057 =
        C216808 - (C93018 * be + C93021 * C216043) / q - C217409;
    const double C179559 =
        C217401 - (C174227 * C216044) / q - (C187408 * p) / q;
    const double C91049 = C174077 / q - (C91067 * C216041) / q - C217405;
    const double C91922 = C89920 / C143578 - (C91886 * C216044) / q - C217405;
    const double C94136 =
        C92462 / C143578 - (C154589 * be + C94118 * C216043) / q - C217405;
    const double C217371 = C216507 / q;
    const double C216568 = 3 * C88688;
    const double C216553 = C88688 / C143578;
    const double C216444 = C88688 * p;
    const double C88759 = C88688 / q - (C88687 * C216044) / q - C217340;
    const double C217364 = C216486 / q;
    const double C88039 = -(C87967 * C216044 + C216486) / q;
    const double C92183 =
        C217403 - (C151874 * be + C92165 * C216043) / q - C216700 / q;
    const double C90055 =
        C172522 / q - (C45244 * be + C90001 * C216043) / q - (C90558 * p) / q;
    const double C90615 = (3 * C90001) / C143578 -
                          (C90554 * be + C90558 * C216043) / q -
                          (C90557 * p) / q;
    const double C216491 = C169317 * p;
    const double C91050 = C174093 / q - (C91068 * C216041) / q - C217406;
    const double C95780 =
        C96281 / C143578 - (C53212 * be + C95746 * C216043) / q - C217406;
    const double C90046 =
        C95047 / q - (C45234 * be + C89992 * C216043) / q - (C91643 * p) / q;
    const double C91670 = (3 * C89992) / C143578 -
                          (C175090 * be + C91643 * C216043) / q -
                          (C175095 * p) / q;
    const double C95098 = C180002 / C143578 -
                          (C50352 * be + C95047 * C216043) / q -
                          (C89992 * p) / q;
    const double C216692 = C173140 * p;
    const double C90462 = C173169 / q - (C90481 * C216041) / q - C217394;
    const double C216501 = 3 * C88130;
    const double C216480 = C88130 / C143578;
    const double C216438 = C88130 * p;
    const double C217286 = C216481 / q;
    const double C216488 = C169288 * p;
    const double C89956 =
        C216474 - (C45154 * be + C89920 * C216043) / q - C217381;
    const double C90463 = C173185 / q - (C90482 * C216041) / q - C217381;
    const double C216504 = C88129 * p;
    const double C216498 = 3 * C88129;
    const double C216479 = C88129 / C143578;
    const double C88201 = -(C88129 * C216044 + C216507) / q;
    const double C88165 = C88130 / q - (C145250 * be + C88129 * C216043) / q +
                          C169405 / q - C217297;
    const double C91679 = C216697 - (C91688 * C216041) / q - C217297;
    const double C173232 = C216696 - (C173436 * C216041) / q - C217492;
    const double C216448 = 3 * C87732;
    const double C216419 = C87732 / C143578;
    const double C167966 = C216968 - (C168578 * C216041) / q - (C87732 * p) / q;
    const double C217326 = C216558 / q;
    const double C217321 = C216542 / C143578;
    const double C93651 = C217445 - (C93579 * C216044) / q - (C93578 * p) / q;
    const double C217345 = C216578 / q;
    const double C216418 = C87723 / C143578;
    const double C87713 =
        C168578 / q - (C87732 * C216041) / q - (C87723 * p) / q;
    const double C92453 = C176342 / q - (C92471 * C216041) / q - C217447;
    const double C96349 = C216923 - (C96281 * C216044) / q - C217447;
    const double C94433 = C217444 - (C94397 * C216044) / q - C217466;
    const double C217486 = C216993 / q;
    const double C216417 = C87722 / C143578;
    const double C87703 =
        (2 * C87723) / q - (C87722 * C216041) / q - (C168549 * p) / q;
    const double C87741 = -(C144408 * be + C87722 * C216043 + C216452) / q;
    const double C167937 =
        (5 * C87722) / C143578 - (C168549 * C216041) / q - (C181803 * p) / q;
    const double C88507 =
        C92462 / q - (C88525 * C216041) / q + C170021 / q - C217324;
    const double C89380 = C216601 - (C89344 * C216044) / q - C217324;
    const double C216429 = 3 * C87561;
    const double C216413 = C87561 / C143578;
    const double C167879 = C216966 - (C168183 * C216041) / q - (C87561 * p) / q;
    const double C217287 = C216483 / q;
    const double C217282 = C216469 / C143578;
    const double C90520 =
        C217378 - (C90478 * be + C90482 * C216043) / q - (C90481 * p) / q;
    const double C217290 = C216493 / q;
    const double C216412 = C87552 / C143578;
    const double C87542 =
        C168183 / q - (C87561 * C216041) / q - (C87552 * p) / q;
    const double C89911 = C172293 / q - (C89929 * C216041) / q - C217380;
    const double C95013 =
        C216923 - (C50276 * be + C94979 * C216043) / q - C217380;
    const double C91625 =
        C217377 - (C150955 * be + C91607 * C216043) / q - C217394;
    const double C217479 = C216978 / q;
    const double C216411 = C87551 / C143578;
    const double C87532 =
        (2 * C87552) / q - (C87551 * C216041) / q - (C168154 * p) / q;
    const double C87627 = -(C87551 * C216044 + C216442) / q;
    const double C167850 =
        (5 * C87551) / C143578 - (C168154 * C216041) / q - (C181758 * p) / q;
    const double C87589 =
        C168198 / q - (C144010 * be + C87551 * C216043) / q - C217266;
    const double C87949 =
        C89920 / q - (C87967 * C216041) / q + C169107 / q - C217285;
    const double C89083 =
        C216601 - (C146824 * be + C89065 * C216043) / q - C217285;
    const double C202786 = C138998 / q - (C194209 * C216041) / q - C218727;
    const double C201477 = C218085 - (C201680 * C216041) / q - C218766;
    const double C218003 = C199062 * p;
    const double C201857 = C202177 / q - (C201680 * C216043) / q - C218768;
    const double C217967 = C198376 * p;
    const double C197670 =
        C197786 / q - (C184843 * be + C197525 * C216044) / q - C218749;
    const double C217924 = C197465 * p;
    const double C197641 =
        C197757 / q - (C160837 * be + C197465 * C216044) / q - C218748;
    const double C218572 = C217827 / q;
    const double C201593 = C210266 / q - (C201506 * C216041) / q - C218767;
    const double C217737 = C193528 * p;
    const double C138989 = C218086 - (C138998 * C216041) / q - C218554;
    const double C194296 = C203129 / q - (C194209 * C216043) / q - C218728;
    const double C203232 = C218130 - (C202511 * C216041) / q - C218728;
    const double C135659 =
        C135588 / q - (C150040 * be + C135587 * C216044) / q - C218622;
    const double C139214 = C218117 - (C139196 * C216043) / q - C218622;
    const double C198052 = C209000 / q - (C197994 * C216041) / q - C218751;
    const double C202426 =
        C218227 - (C161275 * be + C197845 * C216044) / q - C218751;
    const double C217731 = C193470 * p;
    const double C193615 =
        C193735 / q - (C161947 * be + C193470 * C216044) / q - C218718;
    const double C135623 = C137538 / q - (C135587 * C216043) / q - C218621;
    const double C136721 =
        C217991 - (C151874 * be + C136685 * C216044) / q - C218621;
    const double C198023 = C208969 / q - (C197936 * C216041) / q - C218750;
    const double C199306 =
        C136127 / C143578 - (C161978 * be + C198816 * C216044) / q - C218750;
    const double C217727 = C193410 * p;
    const double C193586 =
        C193705 / q - (C158770 * be + C193410 * C216044) / q - C218717;
    const double C194238 = C194559 / q - (C194061 * C216043) / q - C218726;
    const double C217916 = C197145 * p;
    const double C192631 =
        C192806 / q - (C159966 * be + C192414 * C216044) / q - C218702;
    const double C192587 =
        C192762 / q - (C157908 * be + C192322 * C216044) / q - C218701;
    const double C192279 = C195514 / q - (C192148 * C216043) / q - C218696;
    const double C192191 = C192674 / q - (C191927 * C216043) / q - C218695;
    const double C136055 = -(C136091 * C216041 + C198639 * p) / q;
    const double C218016 = C136847 / C143578;
    const double C217930 = C136847 * p;
    const double C199822 =
        (2 * C136847) / q - (C197583 * C216043) / q - C218749;
    const double C198580 = C136847 / q -
                           (C185454 * be + C198435 * C216044) / q +
                           C198698 / q - C218761;
    const double C203390 = C139358 / q - (C198493 * C216043) / q - C218761;
    const double C218336 = C136568 / q;
    const double C218012 = 3 * C136568;
    const double C218008 = C136568 / C143578;
    const double C217895 = C136568 * p;
    const double C202944 = C218121 - (C202628 * C216043) / q - C218760;
    const double C218754 = C218329 / q;
    const double C137216 =
        C217777 - (C47907 * be + C137144 * C216044) / q - C218045 / q;
    const double C138223 = -(C138242 * C216041 + C218045) / q;
    const double C138355 = -(C138317 * C216041 + C201886 * p) / q;
    const double C138755 =
        C217842 - (C154726 * be + C138719 * C216044) / q - C218687;
    const double C139016 = C202192 / q - (C138998 * C216043) / q - C218687;
    const double C202338 = C218326 - (C194151 * C216041) / q - C218726;
    const double C218686 = C218107 / C143578;
    const double C218668 = C218042 / q;
    const double C137674 = -(C137691 * C216041 + C218042) / q;
    const double C198289 =
        C218326 - (C198110 * C216043) / q + C198609 / q - C218753;
    const double C199865 =
        C217994 - (C162252 * be + C198945 * C216044) / q - C218753;
    const double C218759 = C218335 / q;
    const double C217995 = C136289 / C143578;
    const double C217890 = C136289 * p;
    const double C197612 =
        (2 * C136289) / q - (C197465 * C216043) / q - (C208765 * p) / q;
    const double C198801 = C136289 / q - (C193470 * C216041) / q - C218716;
    const double C218092 = C201741 * p;
    const double C138279 = C201709 / q - (C138241 * C216043) / q - C218682;
    const double C217975 = 3 * C135912;
    const double C217946 = C135912 / C143578;
    const double C217896 = C135912 * p;
    const double C137980 = -(C138014 * C216041 + C138890 * p) / q;
    const double C138872 =
        C138014 / C143578 - (C138890 * C216041) / q - (C202699 * p) / q;
    const double C218631 = C217962 / q;
    const double C217965 = C198347 * p;
    const double C217978 = C135911 * p;
    const double C217973 = 3 * C135911;
    const double C217945 = C135911 / C143578;
    const double C139430 = -(C139448 * C216041 + C203588 * p) / q;
    const double C135965 = C135912 / q -
                           (C150580 * be + C135911 * C216044) / q +
                           C198405 / q - C218642;
    const double C139367 = C218089 - (C139358 * C216043) / q - C218642;
    const double C201799 = C218088 - (C202003 * C216043) / q - C218758;
    const double C218637 = C217971 / q;
    const double C217913 = C135354 / C143578;
    const double C136056 = -(C136092 * C216041 + C136658 * p) / q;
    const double C136640 =
        C136092 / C143578 - (C136658 * C216041) / q - (C199576 * p) / q;
    const double C218747 = C218312 / q;
    const double C217912 = C135353 / C143578;
    const double C135371 =
        (2 * C135354) / q - (C135353 * C216043) / q - (C197525 * p) / q;
    const double C197320 =
        (5 * C135353) / C143578 - (C197525 * C216043) / q - (C208584 * p) / q;
    const double C136919 = -(C136937 * C216041 + C200020 * p) / q;
    const double C135407 =
        C197494 / q - (C149652 * be + C135353 * C216044) / q - C218613;
    const double C135785 =
        C137691 / q - (C135749 * C216043) / q + C198140 / q - C218630;
    const double C136802 =
        C217911 - (C152010 * be + C136766 * C216044) / q - C218630;
    const double C217893 = 3 * C134804;
    const double C217867 = C134804 / C143578;
    const double C134822 =
        C196637 / q - (C134804 * C216043) / q - (C135354 * p) / q;
    const double C196437 =
        C218182 - (C196637 * C216043) / q - (C134804 * p) / q;
    const double C218632 = C217963 / q;
    const double C218627 = C217956 / C143578;
    const double C138318 =
        C218666 - (C138238 * be + C138242 * C216044) / q - (C138241 * p) / q;
    const double C217891 = 3 * C134795;
    const double C217887 = C134795 * p;
    const double C217866 = C134795 / C143578;
    const double C142762 = -(C142796 * C216041 + C140742 * p) / q;
    const double C218652 = C217953 / q;
    const double C135731 = -(C135749 * C216041 + C217953) / q;
    const double C218664 = C218038 / C143578;
    const double C137135 = -(C137153 * C216041 + C218036) / q;
    const double C141022 =
        C218144 - (C51811 * be + C140954 * C216044) / q - C218036 / q;
    const double C218276 = C134336 / q;
    const double C217849 = 3 * C134336;
    const double C217841 = C134336 / C143578;
    const double C217739 = C134336 * p;
    const double C203261 = C218131 - (C202628 * C216041) / q - C218733;
    const double C218723 = C218264 / q;
    const double C137117 = -(C137063 * C216043 + C137606 * p) / q;
    const double C138674 =
        C217838 - (C154589 * be + C138638 * C216044) / q - C218684;
    const double C139187 = C203201 / q - (C139196 * C216041) / q - C218684;
    const double C217832 = C134057 / C143578;
    const double C217673 = C134057 * p;
    const double C134066 = -(C134057 * C216043 + C217827) / q;
    const double C195200 =
        (2 * C134057) / q - (C192500 * C216041) / q - C218701;
    const double C194500 = C134057 / q -
                           (C159418 * be + C194325 * C216044) / q +
                           C194620 / q - C218732;
    const double C202815 = C139079 / q - (C194442 * C216041) / q - C218732;
    const double C218738 = C218274 / q;
    const double C194471 = -(C194325 * C216043 + C218274) / q;
    const double C217816 = C133778 / C143578;
    const double C217667 = C133778 * p;
    const double C193557 = C133778 / q - (C193410 * C216043) / q - C218716;
    const double C194752 =
        (2 * C133778) / q - (C192414 * C216041) / q - C218209 / q;
    const double C193974 =
        C138638 / q - (C193887 * C216041) / q + C202323 / q - C218722;
    const double C195257 =
        C133616 / C143578 - (C159997 * be + C194767 * C216044) / q - C218722;
    const double C218081 = C201385 * p;
    const double C138051 = C201414 / q - (C138070 * C216041) / q - C218680;
    const double C217800 = 3 * C133401;
    const double C217770 = C133401 / C143578;
    const double C217674 = C133401 * p;
    const double C218539 = C217771 / q;
    const double C217774 = C194003 * p;
    const double C137054 =
        C217761 - (C47727 * be + C136982 * C216044) / q - C218662;
    const double C138052 = C201430 / q - (C138071 * C216041) / q - C218662;
    const double C217803 = C133400 * p;
    const double C217798 = 3 * C133400;
    const double C217769 = C133400 / C143578;
    const double C133454 = C133401 / q -
                           (C146447 * be + C133400 * C216044) / q +
                           C194354 / q - C218566;
    const double C139070 = C218089 - (C139079 * C216041) / q - C218566;
    const double C201535 = C218088 - (C201944 * C216041) / q - C218731;
    const double C218236 = C134255 / q;
    const double C217844 = 3 * C134255;
    const double C217722 = C134255 * p;
    const double C199664 = C218015 - (C198945 * C216041) / q - C218709;
    const double C136262 =
        C135264 / C143578 - (C136244 * C216041) / q - (C198974 * p) / q;
    const double C193119 = -(C158802 * be + C192974 * C216044 + C218229) / q;
    const double C198845 =
        C136685 / C143578 - (C198816 * C216041) / q + C218348 - C218229 / q;
    const double C135155 =
        (2 * C135102) / q - (C135101 * C216043) / q - (C197174 * p) / q;
    const double C136424 = C217838 - (C136406 * C216043) / q - C218649;
    const double C136676 = C199633 / q - (C136685 * C216041) / q - C218649;
    const double C218736 = C218235 / q;
    const double C193352 = -(C158738 * be + C193148 * C216044 + C218235) / q;
    const double C217831 = C133976 / C143578;
    const double C217657 = C133976 * p;
    const double C194267 =
        C133976 / q - (C159386 * be + C194061 * C216044) / q - C218727;
    const double C195171 =
        (2 * C133976) / q - (C192148 * C216041) / q - C218196 / q;
    const double C133994 = C194575 / q - (C133976 * C216043) / q - C218575;
    const double C134246 = C217842 - (C134255 * C216041) / q - C218575;
    const double C133679 =
        C132008 / C143578 - (C133652 * C216043) / q - (C194811 * p) / q;
    const double C217814 = C133697 / C143578;
    const double C217651 = C133697 * p;
    const double C133733 = -(C146961 * be + C133697 * C216044 + C217822) / q;
    const double C194723 =
        (2 * C133697) / q - (C192062 * C216041) / q - C218695;
    const double C193323 =
        C133697 / q - (C193148 * C216043) / q + C193645 / q - C218708;
    const double C198772 = C136208 / q - (C193236 * C216041) / q - C218708;
    const double C218590 = C217797 / q;
    const double C133418 = -(C133400 * C216043 + C217797) / q;
    const double C217735 = 3 * C132843;
    const double C217699 = C132843 / C143578;
    const double C217668 = C132843 * p;
    const double C218579 = C217768 / q;
    const double C133112 = -(C133076 * C216043 + C217768) / q;
    const double C139232 =
        C218672 - (C155510 * be + C139196 * C216044) / q - C218087 / q;
    const double C202872 =
        C218683 - (C163247 * be + C202382 * C216044) / q - C218767;
    const double C137521 = C200961 / q - (C137538 * C216041) / q - C218674;
    const double C140334 =
        C139499 / C143578 - (C53212 * be + C140266 * C216044) / q - C218674;
    const double C218714 = C218244 / q;
    const double C217733 = 3 * C132842;
    const double C217732 = C132842 * p;
    const double C217698 = C132842 / C143578;
    const double C134408 =
        C140742 / q - (C134426 * C216041) / q - (C195975 * p) / q;
    const double C140708 =
        C142796 / C143578 - (C140742 * C216041) / q - (C134426 * p) / q;
    const double C218725 = C218266 / q;
    const double C217787 = C133238 * p;
    const double C217780 = 3 * C133238;
    const double C217766 = C133238 / C143578;
    const double C133220 = C137144 / q - (C133238 * C216041) / q - C218543;
    const double C133274 = C194090 / q - (C133238 * C216043) / q - C218550;
    const double C138710 = C218070 - (C138719 * C216041) / q - C218550;
    const double C218740 = C218290 / q;
    const double C135660 =
        C217859 - (C98317 * be + C135588 * C216044) / q - C218623;
    const double C137572 = C218022 - (C137538 * C216043) / q - C218623;
    const double C203318 =
        C218615 - (C161447 * be + C197994 * C216044) / q - (C211125 * p) / q;
    const double C135569 = C197844 / q - (C135587 * C216041) / q - C218619;
    const double C136442 =
        C134471 / C143578 - (C151417 * be + C136406 * C216044) / q - C218619;
    const double C138656 =
        C136982 / C143578 - (C138638 * C216043) / q - C218619;
    const double C218585 = C217721 / q;
    const double C217782 = 3 * C133239;
    const double C217767 = C133239 / C143578;
    const double C217658 = C133239 * p;
    const double C133310 =
        C133239 / q - (C146180 * be + C133238 * C216044) / q - C218554;
    const double C218578 = C217700 / q;
    const double C132590 = -(C144977 * be + C132518 * C216044 + C217700) / q;
    const double C136703 = C218617 - (C136685 * C216043) / q - C217914 / q;
    const double C134606 =
        C196290 / q - (C134552 * C216043) / q - (C135102 * p) / q;
    const double C135156 =
        (3 * C134552) / C143578 - (C135102 * C216043) / q - (C135101 * p) / q;
    const double C217705 = C193090 * p;
    const double C135570 = C197860 / q - (C135588 * C216041) / q - C218620;
    const double C140300 =
        C140801 / C143578 - (C140266 * C216043) / q - C218620;
    const double C134597 =
        C139567 / q - (C134543 * C216043) / q - (C136163 * p) / q;
    const double C136190 =
        (3 * C134543) / C143578 - (C136163 * C216043) / q - (C198860 * p) / q;
    const double C139618 =
        C203761 / C143578 - (C139567 * C216043) / q - (C134543 * p) / q;
    const double C217906 = C196908 * p;
    const double C135011 = C196937 / q - (C135029 * C216041) / q - C218608;
    const double C217715 = 3 * C132681;
    const double C217694 = C132681 / C143578;
    const double C217652 = C132681 * p;
    const double C218500 = C217695 / q;
    const double C217702 = C193061 * p;
    const double C134507 = C217688 - (C134471 * C216043) / q - C218595;
    const double C135012 = C196953 / q - (C135030 * C216041) / q - C218595;
    const double C217718 = C132680 * p;
    const double C217712 = 3 * C132680;
    const double C217693 = C132680 / C143578;
    const double C132752 = -(C145250 * be + C132680 * C216044 + C217721) / q;
    const double C132716 =
        C132681 / q - (C132680 * C216043) / q + C193177 / q - C218511;
    const double C136199 = C217911 - (C136208 * C216041) / q - C218511;
    const double C197000 = C217910 - (C197203 * C216041) / q - C218706;
    const double C217662 = 3 * C132283;
    const double C217633 = C132283 / C143578;
    const double C191740 =
        C218182 - (C192351 * C216041) / q - (C132283 * p) / q;
    const double C218540 = C217772 / q;
    const double C218535 = C217756 / C143578;
    const double C138147 =
        C218659 - (C138067 * be + C138071 * C216044) / q - (C138070 * p) / q;
    const double C218559 = C217792 / q;
    const double C217632 = C132274 / C143578;
    const double C132264 =
        C192351 / q - (C132283 * C216041) / q - (C132274 * p) / q;
    const double C136973 = C200105 / q - (C136991 * C216041) / q - C218661;
    const double C140869 =
        C218137 - (C51640 * be + C140801 * C216044) / q - C218661;
    const double C138953 =
        C218658 - (C155051 * be + C138917 * C216044) / q - C218680;
    const double C218700 = C218207 / q;
    const double C217631 = C132273 / C143578;
    const double C132254 =
        (2 * C132274) / q - (C132273 * C216041) / q - (C192322 * p) / q;
    const double C132292 = -(C132273 * C216043 + C217666) / q;
    const double C191711 =
        (5 * C132273) / C143578 - (C192322 * C216041) / q - (C205562 * p) / q;
    const double C133058 =
        C136982 / q - (C133076 * C216041) / q + C193793 / q - C218538;
    const double C133931 =
        C217815 - (C147286 * be + C133895 * C216044) / q - C218538;
    const double C217643 = 3 * C132112;
    const double C217627 = C132112 / C143578;
    const double C191653 =
        C218180 - (C191956 * C216041) / q - (C132112 * p) / q;
    const double C218501 = C217697 / q;
    const double C218496 = C217683 / C143578;
    const double C135066 =
        C218592 - (C135030 * C216043) / q - (C135029 * p) / q;
    const double C218504 = C217707 / q;
    const double C217626 = C132103 / C143578;
    const double C132093 =
        C191956 / q - (C132112 * C216041) / q - (C132103 * p) / q;
    const double C134462 = C196061 / q - (C134480 * C216041) / q - C218594;
    const double C139533 = C218137 - (C139499 * C216043) / q - C218594;
    const double C136145 = C218591 - (C136127 * C216043) / q - C218608;
    const double C218693 = C218192 / q;
    const double C217625 = C132102 / C143578;
    const double C132083 =
        (2 * C132103) / q - (C132102 * C216041) / q - (C191927 * p) / q;
    const double C132178 = -(C144010 * be + C132102 * C216044 + C217656) / q;
    const double C191624 =
        (5 * C132102) / C143578 - (C191927 * C216041) / q - (C205517 * p) / q;
    const double C132140 = C191971 / q - (C132102 * C216043) / q - C218480;
    const double C132500 =
        C134471 / q - (C132518 * C216041) / q + C192880 / q - C218499;
    const double C133634 = C217815 - (C133616 * C216043) / q - C218499;
    const double C42996 = C144456 / q - (C42933 * C216044) / q - C216065;
    const double C144192 = C215198 - (C144504 * C216043) / q - C216266;
    const double C144547 =
        C215198 - (C144590 * C216044) / q + C215775 - C216272;
    const double C44063 =
        C48090 / q - (C146447 * be + C44081 * C216041) / q - C216131;
    const double C44765 = C215199 - (C44738 * C216044) / q + C215404 - C216131;
    const double C216058 = C215231 / C143578;
    const double C216093 = C215302 / C143578;
    const double C216092 = C215301 / q;
    const double C145608 =
        C215267 - (C145637 * C216044) / q + C215812 - C216286;
    const double C216095 = C215304 / C143578;
    const double C42965 = -(C42944 * C216043 + C215237) / q;
    const double C50602 =
        C215717 - (C50618 * be + C50621 * C216041) / q - C215237 / q;
    const double C216136 = C215369 / C143578;
    const double C216067 = C215243 / q;
    const double C216139 = C215372 / q;
    const double C216134 = C215367 / C143578;
    const double C146303 = C215338 - (C146510 * C216043) / q - C216286;
    const double C215723 = C144708 / C143578;
    const double C147482 = C215401 - (C147155 * C216043) / q - C216289;
    const double C216066 = C215242 / q;
    const double C146657 =
        C215845 - (C146510 * C216044) / q + C146783 / q - C216305;
    const double C147943 = C215845 - (C145637 * C216043) / q - C216290;
    const double C216160 = C215418 / C143578;
    const double C216098 = C215308 / q;
    const double C44100 = -(C44082 * C216043 + C215308) / q;
    const double C154655 =
        C215903 - (C163216 * be + C146510 * C216041) / q - C216310;
    const double C147140 =
        C215385 - (C147155 * C216044) / q + C215857 - C216310;
    const double C42955 = -(C42934 * C216043 + C215236) / q;
    const double C43506 =
        C215297 - (C50609 * be + C43524 * C216041) / q - C215236 / q;
    const double C216173 = C215460 / C143578;
    const double C45507 = -(C45524 * be + C45527 * C216041 + C215456) / q;
    const double C50640 = C215719 - (C50621 * C216043) / q - C215456 / q;
    const double C216175 = C215462 / C143578;
    const double C149245 =
        C215481 - (C160837 * be + C149656 * C216041) / q - C216279;
    const double C149745 =
        C215481 - (C149774 * C216044) / q + C215880 - C216319;
    const double C46672 = C48649 / q - (C46654 * C216043) / q - C216209;
    const double C47617 = C215482 - (C47590 * C216044) / q + C215586 - C216209;
    const double C216212 = C215544 / C143578;
    const double C216178 = C215465 / q;
    const double C216215 = C215547 / q;
    const double C216210 = C215542 / C143578;
    const double C150169 =
        C215514 - (C161398 * be + C150584 * C216041) / q - C216286;
    const double C150761 =
        C215905 - (C150584 * C216044) / q + C150882 / q - C216332;
    const double C151483 =
        C215905 - (C162137 * be + C145637 * C216041) / q - C216289;
    const double C216227 = C215581 / C143578;
    const double C216177 = C215464 / q;
    const double C46637 = -(C98623 * be + C46655 * C216041 + C215464) / q;
    const double C215722 = C148955 / C143578;
    const double C215740 = C157181 / C143578;
    const double C151941 =
        C215585 - (C162267 * be + C151286 * C216041) / q - C216290;
    const double C216186 = C215499 / q;
    const double C150731 = C215903 - (C150584 * C216043) / q - C216331;
    const double C151271 =
        C215564 - (C151286 * C216044) / q + C215918 - C216331;
    const double C45537 = C215297 - (C45517 * C216043) / q - C215459 / q;
    const double C46079 = -(C90820 * be + C46097 * C216041 + C215459) / q;
    const double C49880 =
        C216242 - (C49853 * C216044) / q + C152891 / q - C215664 / q;
    const double C215374 = C52042 / q;
    const double C49251 =
        C216243 - (C49197 * C216044) / q + C152908 / q - (C49196 * p) / q;
    const double C215312 = C50678 / q;
    const double C50159 =
        C216250 - (C50132 * C216044) / q + C153494 / q - C215665 / q;
    const double C215627 = C48120 / C143578;
    const double C215552 = C53623 / q;
    const double C215629 = C48150 * p;
    const double C49286 = -(C154393 * be + C49250 * C216041 + C215666) / q;
    const double C215631 = C48700 * p;
    const double C215694 = C49215 / C143578;
    const double C49304 = -(C49250 * C216043 + C215667) / q;
    const double C154905 =
        C216261 - (C154920 * C216044) / q + C154876 / q - C215933 / q;
    const double C48180 = -(C48117 * be + C48120 * C216041 + C48110 * p) / q;
    const double C215720 = C51459 * p;
    const double C215421 = C51459 / q;
    const double C216088 = C215296 / q;
    const double C216091 = C215300 / q;
    const double C216097 = C215306 / q;
    const double C45044 = C215268 - (C45017 * C216044) / q + C215419 - C216162;
    const double C49565 =
        C215640 - (C154858 * be + C49574 * C216041) / q - C216162;
    const double C44153 =
        C48110 / q - (C146594 * be + C44099 * C216041) / q - (C146598 * p) / q;
    const double C215370 = C44135 * p;
    const double C48927 =
        C215658 - (C138390 * be + C49179 * C216041) / q - (C49844 * p) / q;
    const double C44486 = C215395 - (C44459 * C216044) / q - C216144;
    const double C45008 =
        C215417 - (C148014 * be + C45017 * C216041) / q - C216144;
    const double C46078 = -(C149652 * be + C46096 * C216041 + C215493) / q;
    const double C215500 = C149804 * p;
    const double C216229 = C215536 / q;
    const double C46636 = -(C150580 * be + C46654 * C216041 + C215536) / q;
    const double C215545 = C46708 * p;
    const double C49089 = C215658 - (C49215 * C216043) / q - (C50141 * p) / q;
    const double C216220 = C215572 / q;
    const double C47581 = -(C152142 * be + C47590 * C216041 + C215572) / q;
    const double C215630 = C49601 * p;
    const double C49269 = -(C138428 * be + C49215 * C216041 + C49862 * p) / q;
    const double C215244 = C144723 * p;
    const double C215309 = C145667 * p;
    const double C215311 = C145697 * p;
    const double C215313 = C145726 * p;
    const double C48926 =
        C215657 - (C153803 * be + C49178 * C216041) / q - (C153807 * p) / q;
    const double C215373 = C146628 * p;
    const double C49718 = C49179 / C143578 -
                          (C155113 * be + C49844 * C216041) / q + C215690 -
                          (C155117 * p) / q;
    const double C49997 =
        C215700 - (C155573 * be + C50123 * C216041) / q - (C155577 * p) / q;
    const double C215501 = C149834 * p;
    const double C49088 = C215657 - (C49214 * C216043) / q - (C154072 * p) / q;
    const double C215692 = C155247 * p;
    const double C215551 = C150790 * p;
    const double C87779 = C168593 / q - (C87722 * C216044) / q - C217279;
    const double C216940 = C168843 / C143578;
    const double C216939 = C173010 / C143578;
    const double C216957 = C181090 / C143578;
    const double C94586 =
        C217456 - (C94559 * C216044) / q + C176869 / q - C216881 / q;
    const double C216591 = C96638 / q;
    const double C93957 =
        C217457 - (C93903 * C216044) / q + C176886 / q - (C93902 * p) / q;
    const double C216529 = C95336 / q;
    const double C94865 =
        C217464 - (C94838 * C216044) / q + C177467 / q - C216882 / q;
    const double C216844 = C92813 / C143578;
    const double C216769 = C98157 / q;
    const double C216846 = C92840 * p;
    const double C93992 = -(C93956 * C216041 + C216883) / q;
    const double C216848 = C93399 * p;
    const double C216911 = C93921 / C143578;
    const double C94010 = -(C154393 * be + C93956 * C216043 + C216884) / q;
    const double C178852 =
        C217475 - (C178867 * C216044) / q + C178823 / q - C217150 / q;
    const double C92867 = -(C92813 * C216041 + C92804 * p) / q;
    const double C216937 = C96103 * p;
    const double C216638 = C96103 / q;
    const double C216847 = C94307 * p;
    const double C93975 = -(C93921 * C216041 + C94568 * p) / q;
    const double C132330 =
        C192366 / q - (C144408 * be + C132273 * C216044) / q - C218493;
    const double C218154 = C192616 / C143578;
    const double C218153 = C196778 / C143578;
    const double C218171 = C204849 / C143578;
    const double C139106 = C218670 - (C155318 * be + C139079 * C216044) / q +
                           C200632 / q - C218095 / q;
    const double C217805 = C141158 / q;
    const double C138470 = C218671 - (C138409 * be + C138413 * C216044) / q +
                           C200649 / q - (C138412 * p) / q;
    const double C217743 = C139856 / q;
    const double C139385 = C218678 - (C155778 * be + C139358 * C216044) / q +
                           C201230 / q - C218096 / q;
    const double C218058 = C137333 / C143578;
    const double C217983 = C142677 / q;
    const double C218060 = C137360 * p;
    const double C138507 = -(C138469 * C216041 + C218097) / q;
    const double C218062 = C137895 * p;
    const double C218125 = C138432 / C143578;
    const double C138526 = -(C138469 * C216043 + C218098) / q;
    const double C202613 = C218689 - (C163563 * be + C202628 * C216044) / q +
                           C202584 / q - C218364 / q;
    const double C137387 = -(C137333 * C216041 + C137324 * p) / q;
    const double C218151 = C140623 * p;
    const double C217852 = C140623 / q;
    const double C218061 = C138827 * p;
    const double C138489 = -(C138432 * C216041 + C139088 * p) / q;
    const double C144106 =
        C215190 - (C144149 * C216043) / q + C215760 - C216265;
    const double C147527 = C215190 - (C144235 * C216044) / q - C216293;
    const double C43343 =
        C45337 / q - (C145250 * be + C43361 * C216041) / q - C216076;
    const double C44396 = C215191 - (C44378 * C216043) / q + C215390 - C216076;
    const double C44693 = C215191 - (C44657 * C216044) / q - C216115;
    const double C216045 = C215212 / C143578;
    const double C216081 = C215284 / C143578;
    const double C44972 = C215263 - (C44936 * C216044) / q - C216122;
    const double C216054 = C215221 / q;
    const double C216084 = C215287 / q;
    const double C216079 = C215281 / C143578;
    const double C215712 = C144308 / C143578;
    const double C147988 = C215383 - (C147035 * C216044) / q - C216298;
    const double C216053 = C215220 / q;
    const double C150110 =
        C215510 - (C161366 * be + C150315 * C216041) / q - C216297;
    const double C151658 = C215262 - (C145400 * C216044) / q - C216297;
    const double C216127 = C215356 / q;
    const double C216118 = C215349 / C143578;
    const double C146245 =
        C215335 - (C146274 * C216043) / q + C215834 - C216297;
    const double C47221 =
        C215511 - (C151552 * be + C47230 * C216041) / q - C216157;
    const double C216120 = C215351 / C143578;
    const double C44954 = C215336 - (C44936 * C216043) / q + C215414 - C216157;
    const double C42839 = -(C42755 * C216044 + C215227) / q;
    const double C51795 =
        C215735 - (C51811 * be + C51814 * C216041) / q - C215227 / q;
    const double C151453 =
        C215897 - (C162122 * be + C145400 * C216041) / q - C216308;
    const double C147081 =
        C215400 - (C147035 * C216043) / q + C215856 - C216308;
    const double C42829 = -(C42745 * C216044 + C215226) / q;
    const double C43902 =
        C215346 - (C51802 * be + C43920 * C216041) / q - C215226 / q;
    const double C145489 =
        C215805 - (C145400 * C216043) / q + C147900 / q - C216281;
    const double C154831 = C215805 - (C146274 * C216044) / q - C216300;
    const double C216155 = C215413 / C143578;
    const double C216123 = C215291 / q;
    const double C43434 = -(C43362 * C216044 + C215291) / q;
    const double C46969 =
        C216169 - (C46951 * C216043) / q + C148510 / q - C215487 / q;
    const double C215293 = C50488 / q;
    const double C45971 =
        C216170 - (C45935 * C216043) / q + C148527 / q - (C45934 * p) / q;
    const double C215453 = C45377 * p;
    const double C46024 = -(C149563 * be + C45970 * C216041 + C215490) / q;
    const double C46565 = C215433 - (C46493 * C216044) / q - C216204;
    const double C48530 = C215596 - (C48496 * C216043) / q + C215523 - C216204;
    const double C150378 =
        C216199 - (C150407 * C216043) / q + C150346 / q - (C161580 * p) / q;
    const double C47527 =
        C216201 - (C47509 * C216043) / q + C150363 / q - C215488 / q;
    const double C215527 = C53433 / q;
    const double C155752 = C216258 - (C154800 * C216044) / q - C216340;
    const double C47950 = C215376 - (C47910 * C216043) / q - C216240;
    const double C51323 = C215705 - (C51255 * C216044) / q - C216240;
    const double C215358 = C51852 / q;
    const double C215454 = C47248 * p;
    const double C151212 =
        C216223 - (C151166 * C216043) / q + C151570 / q - C215875 / q;
    const double C43469 =
        C45417 / q - (C145456 * be + C43433 * C216041) / q - (C145460 * p) / q;
    const double C45457 = C45427 / C143578 -
                          (C45414 * be + C45417 * C216041) / q -
                          (C43433 * p) / q;
    const double C45467 = -(C45424 * be + C45427 * C216041 + C45417 * p) / q;
    const double C215716 = C51289 * p;
    const double C215416 = C51289 / q;
    const double C47266 = C215432 - (C47230 * C216044) / q - C216224;
    const double C49511 = C215595 - (C49493 * C216043) / q + C215677 - C216224;
    const double C49808 = C216236 - (C49772 * C216044) / q - C215660 / q;
    const double C50087 = C216247 - (C50051 * C216044) / q - C216254;
    const double C47960 = C152650 / q - (C47920 * C216043) / q - C216241;
    const double C53471 = C215711 - (C53395 * C216044) / q - C216241;
    const double C216253 = C215661 / q;
    const double C48564 = C215530 - (C48496 * C216044) / q - C216248;
    const double C49071 = C153998 / q - (C49035 * C216043) / q - C216248;
    const double C46564 = C46493 / q - (C46492 * C216044) / q - C216203;
    const double C50069 = C215655 - (C50051 * C216043) / q + C215701 - C216203;
    const double C216205 = C215534 / q;
    const double C150525 = C215897 - (C150315 * C216044) / q - C216326;
    const double C154846 =
        C215689 - (C154800 * C216043) / q + C215940 - C216326;
    const double C48040 = -(C47997 * be + C48000 * C216041 + C47990 * p) / q;
    const double C215738 = C152848 / C143578;
    const double C215455 = C46529 * p;
    const double C215285 = C43397 * p;
    const double C45791 =
        C215480 - (C90630 * be + C45917 * C216041) / q - (C46942 * p) / q;
    const double C215360 = C43955 * p;
    const double C48360 =
        C215639 - (C93162 * be + C48479 * C216041) / q - (C49484 * p) / q;
    const double C48030 = C48000 / C143578 -
                          (C47987 * be + C47990 * C216041) / q -
                          (C43991 * p) / q;
    const double C48891 =
        C215655 - (C138219 * be + C49017 * C216041) / q - (C49763 * p) / q;
    const double C215229 = C44675 * p;
    const double C215535 = C46528 * p;
    const double C215617 = C49790 * p;
    const double C215228 = C144368 * p;
    const double C45790 =
        C215479 - (C149182 * be + C45916 * C216041) / q - (C149186 * p) / q;
    const double C215292 = C145430 * p;
    const double C46879 = C45917 / C143578 -
                          (C150987 * be + C46942 * C216041) / q + C215563 -
                          (C150991 * p) / q;
    const double C47437 =
        C215584 - (C151907 * be + C47500 * C216041) / q - (C151911 * p) / q;
    const double C215357 = C146362 * p;
    const double C49421 = C48479 / C143578 -
                          (C154621 * be + C49484 * C216041) / q +
                          C49493 / C143578 - (C154625 * p) / q;
    const double C44027 =
        C47990 / q - (C146388 * be + C43991 * C216041) / q - (C146392 * p) / q;
    const double C49700 = C49017 / C143578 -
                          (C155083 * be + C49763 * C216041) / q + C215689 -
                          (C155087 * p) / q;
    const double C215359 = C146421 * p;
    const double C49979 =
        C215699 - (C155543 * be + C50042 * C216041) / q - (C155547 * p) / q;
    const double C215533 = C150495 * p;
    const double C47563 = -(C152112 * be + C47545 * C216041 + C152116 * p) / q;
    const double C48890 =
        C215654 - (C153744 * be + C49016 * C216041) / q - (C153748 * p) / q;
    const double C215663 = C154131 * p;
    const double C216929 = C168447 / C143578;
    const double C91706 = C217383 - (C151092 * be + C91688 * C216043) / q +
                          C172565 / q - C216704 / q;
    const double C216510 = C95166 / q;
    const double C90691 = C217384 - (C90649 * be + C90653 * C216043) / q +
                          C172582 / q - (C90652 * p) / q;
    const double C216670 = C90118 * p;
    const double C90747 = -(C90690 * C216041 + C216707) / q;
    const double C92264 = C217415 - (C152010 * be + C92246 * C216043) / q +
                          C174392 / q - C216705 / q;
    const double C216744 = C97987 / q;
    const double C216575 = C96468 / q;
    const double C216671 = C91985 * p;
    const double C175224 = C217437 - (C162252 * be + C175180 * C216043) / q +
                           C175571 / q - C217092 / q;
    const double C90199 = -(C90163 * C216041 + C90154 * p) / q;
    const double C216933 = C95933 * p;
    const double C216633 = C95933 / q;
    const double C94793 = C217461 - (C94757 * C216044) / q - C217468;
    const double C92669 =
        C176628 / q - (C47917 * be + C92633 * C216043) / q - C217455;
    const double C98021 = C216928 - (C97953 * C216044) / q - C217455;
    const double C93255 = C216747 - (C93183 * C216044) / q - C217462;
    const double C93777 =
        C177963 / q - (C138238 * be + C93741 * C216043) / q - C217462;
    const double C216955 = C176826 / C143578;
    const double C216672 = C91266 * p;
    const double C218143 = C192220 / C143578;
    const double C136226 =
        C218597 - (C136208 * C216043) / q + C196333 / q - C217918 / q;
    const double C217724 = C139686 / q;
    const double C135228 =
        C218598 - (C135192 * C216043) / q + C196350 / q - (C135191 * p) / q;
    const double C217884 = C134669 * p;
    const double C135281 = -(C135227 * C216041 + C217921) / q;
    const double C136784 =
        C218629 - (C136766 * C216043) / q + C198158 / q - C217919 / q;
    const double C217958 = C142507 / q;
    const double C217789 = C140988 / q;
    const double C217885 = C136505 * p;
    const double C198989 =
        C218651 - (C198945 * C216043) / q + C199335 / q - C218306 / q;
    const double C134750 = -(C134714 * C216041 + C134705 * p) / q;
    const double C218147 = C140453 * p;
    const double C217847 = C140453 / q;
    const double C139313 =
        C218675 - (C155646 * be + C139277 * C216044) / q - C218682;
    const double C137189 = C200391 / q - (C137153 * C216043) / q - C218669;
    const double C142541 =
        C218142 - (C53392 * be + C142473 * C216044) / q - C218669;
    const double C137759 =
        C217961 - (C93180 * be + C137691 * C216044) / q - C218676;
    const double C138280 = C201725 / q - (C138242 * C216043) / q - C218676;
    const double C218169 = C200589 / C143578;
    const double C217886 = C135786 * p;
    const double C42535 = C216042 - (C42552 * be + C42556 * C216041) / q +
                          C143627 / q - (C42555 * p) / q;
    const double C43236 = C215265 - (C43200 * C216043) / q - C216073;
    const double C45137 =
        C215428 - (C45154 * be + C45157 * C216041) / q + C215258 - C216073;
    const double C144951 = C216068 - (C158615 * be + C144982 * C216041) / q +
                           C145015 / q - (C158619 * p) / q;
    const double C44288 = C216070 - (C146824 * be + C44297 * C216041) / q +
                          C145033 / q - C215195 / q;
    const double C215254 = C50260 / q;
    const double C43830 = C215265 - (C43758 * C216044) / q - C216112;
    const double C47710 =
        C215591 - (C47727 * be + C47730 * C216041) / q + C215331 - C216112;
    const double C145881 = C216107 - (C159263 * be + C145912 * C216041) / q +
                           C145945 / q - (C159267 * p) / q;
    const double C44567 = C216109 - (C147286 * be + C44576 * C216041) / q +
                          C145963 / q - C215203 / q;
    const double C215327 = C51624 / q;
    const double C146934 = C216149 - (C159997 * be + C146905 * C216041) / q +
                           C147767 / q - C215753 / q;
    const double C42713 = -(C42650 * C216043 + C43272 * p) / q;
    const double C215710 = C51085 * p;
    const double C215405 = C51085 / q;
    const double C215424 = C45147 / C143578;
    const double C216179 = C215475 / q;
    const double C43235 = C43200 / q - (C43199 * C216043) / q - C216072;
    const double C46861 =
        C215560 - (C150955 * be + C46870 * C216041) / q + C215561 - C216072;
    const double C216074 = C215271 / q;
    const double C147870 = C43199 / C143578 - (C145137 * C216044) / q - C216312;
    const double C150014 = C46330 / C143578 -
                           (C161275 * be + C150045 * C216041) / q + C215887 -
                           C216312;
    const double C53357 =
        C157412 / C143578 - (C53300 * C216043) / q - (C46403 * p) / q;
    const double C44873 = C43758 / C143578 - (C44855 * C216043) / q - C216150;
    const double C47140 = C46331 / C143578 -
                          (C151417 * be + C47149 * C216041) / q + C215575 -
                          C216150;
    const double C43326 =
        C42650 / C143578 - (C43272 * C216043) / q - (C43271 * p) / q;
    const double C215559 = C45755 / C143578;
    const double C45267 =
        C148410 / q - (C45147 * C216043) / q - (C45755 * p) / q;
    const double C215441 = C46313 * p;
    const double C43325 =
        C43272 / q - (C43271 * C216043) / q - (C145224 * p) / q;
    const double C215566 = C151065 * p;
    const double C215587 = C47720 / C143578;
    const double C44891 = C43200 / C143578 - (C44855 * C216044) / q - C216151;
    const double C49403 = C48343 / C143578 -
                          (C154589 * be + C49412 * C216041) / q + C215671 -
                          C216151;
    const double C48999 = -(C48945 * C216043 + C50006 * p) / q;
    const double C50033 =
        C48945 / C143578 - (C50006 * C216043) / q - (C155634 * p) / q;
    const double C216251 = C215650 / q;
    const double C43829 = C43758 / q - (C43757 * C216044) / q - C216111;
    const double C49682 =
        C215686 - (C155051 * be + C49691 * C216041) / q + C215687 - C216111;
    const double C216113 = C215343 / q;
    const double C215603 = C48326 * p;
    const double C51776 = -(C51719 * C216043 + C51170 * p) / q;
    const double C215685 = C48855 / C143578;
    const double C47860 =
        C152564 / q - (C47720 * C216044) / q - (C48855 * p) / q;
    const double C146154 = C44855 / q - (C146008 * C216044) / q - C216295;
    const double C154699 = C49970 / C143578 -
                           (C163247 * be + C154670 * C216041) / q + C215939 -
                           C216295;
    const double C42671 = -(C42545 * C216043 + C215208) / q;
    const double C50241 = C215702 - (C50257 * be + C50260 * C216041) / q +
                          (3 * C50279) / C143578 - C215208 / q;
    const double C42692 = -(C42545 * C216044 + C215211) / q;
    const double C51605 = C215732 - (C51621 * be + C51624 * C216041) / q +
                          (3 * C51643) / C143578 - C215211 / q;
    const double C215273 = C43181 * p;
    const double C215344 = C43739 * p;
    const double C43308 = -(C43182 * C216044 + C215275) / q;
    const double C43848 = -(C43740 * C216043 + C215275) / q;
    const double C51068 = C53205 / C143578 -
                          (C53193 * be + C51085 * C216041) / q +
                          (3 * C51102) / C143578 - C215275 / q;
    const double C45862 =
        (2 * C45755) / q - (C45754 * C216043) / q - (C149303 * p) / q;
    const double C45863 =
        (3 * C45147) / C143578 - (C45755 * C216043) / q - (C45754 * p) / q;
    const double C215521 = C46312 * p;
    const double C51221 =
        C51719 / C143578 - (C51170 * C216043) / q - (C47185 * p) / q;
    const double C46457 =
        C53300 / q - (C46403 * C216043) / q - (C47464 * p) / q;
    const double C47491 =
        (3 * C46403) / C143578 - (C47464 * C216043) / q - (C151998 * p) / q;
    const double C46456 =
        C48411 / q - (C46402 * C216043) / q - (C150285 * p) / q;
    const double C48462 =
        C47820 / C143578 - (C48411 * C216043) / q - (C46402 * p) / q;
    const double C215486 = C47419 * p;
    const double C48980 =
        (2 * C48855) / q - (C48854 * C216044) / q - (C153894 * p) / q;
    const double C48981 =
        (3 * C47720) / C143578 - (C48855 * C216044) / q - (C48854 * p) / q;
    const double C47870 = -(C47810 * C216043 + C49448 * p) / q;
    const double C215642 = C49961 * p;
    const double C216152 = C215274 / q;
    const double C43307 = -(C43181 * C216044 + C215274) / q;
    const double C215342 = C146096 * p;
    const double C44639 = -(C44612 * C216043 + C147409 * p) / q;
    const double C45880 = -(C45754 * C216044 + C215485) / q;
    const double C47473 =
        (3 * C46313) / C143578 - (C47419 * C216043) / q - C215485 / q;
    const double C215518 = C150227 * p;
    const double C47212 =
        C51170 / q - (C47185 * C216043) / q - (C151540 * p) / q;
    const double C215520 = C150256 * p;
    const double C49475 =
        C47810 / C143578 - (C49448 * C216043) / q - (C154714 * p) / q;
    const double C215659 = C153865 * p;
    const double C49754 = -(C49727 * C216043 + C155174 * p) / q;
    const double C87362 =
        C217258 - (C87381 * C216041) / q + C167772 / q - (C87380 * p) / q;
    const double C89056 =
        C217284 - (C89065 * C216041) / q + C169157 / q - C216414 / q;
    const double C216471 = C94962 / q;
    const double C89335 =
        C217323 - (C89344 * C216041) / q + C170071 / q - C216420 / q;
    const double C216544 = C96264 / q;
    const double C171025 =
        C217363 - (C170996 * C216041) / q + C171834 / q - C216970 / q;
    const double C87523 = -(C42647 * be + C87466 * C216043 + C88040 * p) / q;
    const double C216927 = C95729 * p;
    const double C216622 = C95729 / q;
    const double C87485 = -(C42542 * be + C87371 * C216043 + C216425) / q;
    const double C94945 =
        C216919 - (C94962 * C216041) / q + (3 * C94979) / C143578 - C216425 / q;
    const double C87504 = -(C87371 * C216044 + C216428) / q;
    const double C96247 =
        C216949 - (C96264 * C216041) / q + (3 * C96281) / C143578 - C216428 / q;
    const double C88076 = -(C87950 * C216044 + C216492) / q;
    const double C88616 = -(C51612 * be + C88508 * C216043 + C216492) / q;
    const double C95712 = C97783 / C143578 - (C95729 * C216041) / q +
                          (3 * C95746) / C143578 - C216492 / q;
    const double C131913 =
        C218472 - (C131932 * C216041) / q + C191546 / q - (C131931 * p) / q;
    const double C133607 =
        C218498 - (C133616 * C216041) / q + C192930 / q - C217628 / q;
    const double C217685 = C139482 / q;
    const double C133886 =
        C218537 - (C133895 * C216041) / q + C193843 / q - C217634 / q;
    const double C217758 = C140784 / q;
    const double C194796 =
        C218577 - (C194767 * C216041) / q + C195603 / q - C218184 / q;
    const double C132074 = -(C132017 * C216043 + C132591 * p) / q;
    const double C218141 = C140249 * p;
    const double C217836 = C140249 / q;
    const double C132036 = -(C131922 * C216043 + C217639) / q;
    const double C139465 = C218133 - (C139482 * C216041) / q +
                           (3 * C139499) / C143578 - C217639 / q;
    const double C132055 = -(C42542 * be + C131922 * C216044 + C217642) / q;
    const double C140767 = C218163 - (C140784 * C216041) / q +
                           (3 * C140801) / C143578 - C217642 / q;
    const double C132627 = -(C50248 * be + C132501 * C216044 + C217706) / q;
    const double C133167 = -(C133059 * C216043 + C217706) / q;
    const double C140232 = C142303 / C143578 - (C140249 * C216041) / q +
                           (3 * C140266) / C143578 - C217706 / q;
    const double C93596 = C216871 - (C93722 * C216041) / q - (C177714 * p) / q;
    const double C217434 = C216789 / q;
    const double C92318 = -(C92327 * C216041 + C216789) / q;
    const double C216880 = C178095 * p;
    const double C217443 = C216753 / q;
    const double C91373 = -(C91391 * C216041 + C216753) / q;
    const double C90804 = -(C90823 * C216041 + C216710) / q;
    const double C216718 = C173874 * p;
    const double C89254 = C216612 - (C89227 * C216044) / q - C217358;
    const double C89776 = C216634 - (C89785 * C216041) / q - C217358;
    const double C216876 = C177830 * p;
    const double C217311 = C216523 / q;
    const double C216576 = C170525 * p;
    const double C94685 = C216916 - (C94748 * C216041) / q - (C179472 * p) / q;
    const double C91193 =
        C93093 / q - (C174310 * be + C91139 * C216043) / q - (C174315 * p) / q;
    const double C93147 = C92543 / C143578 -
                          (C93090 * be + C93093 * C216043) / q -
                          (C91139 * p) / q;
    const double C216737 = C174285 * p;
    const double C217305 = C216517 / q;
    const double C216530 = C169843 * p;
    const double C216735 = C174256 * p;
    const double C217302 = C216513 / q;
    const double C216528 = C169814 * p;
    const double C216574 = C170467 * p;
    const double C216461 = C168858 * p;
    const double C216445 = C168506 * p;
    const double C175929 = C216802 - (C175297 * C216041) / q - C217504;
    const double C217400 = C216716 / q;
    const double C216768 = C174814 * p;
    const double C174785 =
        C217122 - (C174610 * C216044) / q + C174902 / q - C217546;
    const double C175484 = C217122 - (C169756 * C216041) / q - C217503;
    const double C217441 = C216798 / C143578;
    const double C217391 = C216681 / q;
    const double C91374 = -(C91392 * C216041 + C216681) / q;
    const double C216909 = C179184 * p;
    const double C174552 = C217114 - (C174344 * C216044) / q - C217540;
    const double C178794 =
        C216906 - (C163548 * be + C178750 * C216043) / q + C217157 - C217540;
    const double C92741 = -(C92705 * C216041 + C92696 * p) / q;
    const double C93597 = C216872 - (C93723 * C216041) / q - (C94469 * p) / q;
    const double C94406 =
        C93723 / C143578 - (C94469 * C216041) / q + C216906 - (C179025 * p) / q;
    const double C216834 = C94496 * p;
    const double C179674 = C217472 - (C178750 * C216044) / q - C217554;
    const double C92660 =
        C216593 - (C47907 * be + C92624 * C216043) / q - C217454;
    const double C95967 = C216922 - (C95899 * C216044) / q - C217454;
    const double C216750 = C174523 * p;
    const double C174756 =
        C217120 - (C161398 * be + C174610 * C216043) / q - C217545;
    const double C175282 =
        C216781 - (C175297 * C216044) / q + C217135 - C217545;
    const double C90262 =
        C216514 - (C45514 * be + C90244 * C216043) / q - C216676 / q;
    const double C90805 = -(C90824 * C216041 + C216676) / q;
    const double C216717 = C173845 * p;
    const double C217467 = C216878 / q;
    const double C217426 = C216761 / C143578;
    const double C217392 = C216682 / q;
    const double C91301 = C91230 / q - (C91229 * C216044) / q - C217417;
    const double C94775 =
        C216872 - (C155646 * be + C94757 * C216043) / q + C216918 - C217417;
    const double C217419 = C216751 / q;
    const double C217429 = C216764 / q;
    const double C217424 = C216759 / C143578;
    const double C216762 = C91445 * p;
    const double C93795 =
        C216875 - (C138428 * be + C93921 * C216043) / q - (C94847 * p) / q;
    const double C93794 =
        C216874 - (C154363 * be + C93920 * C216043) / q - (C178037 * p) / q;
    const double C91409 =
        C93345 / q - (C150580 * be + C91391 * C216043) / q - C217423;
    const double C92354 = C216699 - (C92327 * C216044) / q + C216803 - C217423;
    const double C173290 = C216698 - (C173698 * C216041) / q - C217493;
    const double C173787 =
        C216698 - (C173816 * C216044) / q + C217097 - C217533;
    const double C216752 = C91265 * p;
    const double C92300 = -(C92282 * C216041 + C176102 * p) / q;
    const double C217389 = C216679 / C143578;
    const double C91302 = C216650 - (C91230 * C216044) / q - C217418;
    const double C93219 =
        C216813 - (C93180 * be + C93183 * C216043) / q + C216740 - C217418;
    const double C174407 = C217413 - (C185422 * be + C174436 * C216043) / q +
                           C174375 / q - (C185427 * p) / q;
    const double C217387 = C216677 / C143578;
    const double C90235 = -(C90253 * C216041 + C216673) / q;
    const double C95302 =
        C216936 - (C50618 * be + C95285 * C216043) / q - C216673 / q;
    const double C92003 = C216649 - (C91967 * C216044) / q - C217438;
    const double C94217 =
        C216812 - (C154726 * be + C94199 * C216043) / q + C216894 - C217438;
    const double C94514 = C217450 - (C94478 * C216044) / q - C216877 / q;
    const double C170758 =
        C217062 - (C170613 * C216044) / q + C170879 / q - C217519;
    const double C172008 =
        C217062 - (C162137 * be + C169756 * C216043) / q - C217504;
    const double C217374 = C216635 / C143578;
    const double C217312 = C216525 / q;
    const double C88868 = -(C51973 * be + C88850 * C216043 + C216525) / q;
    const double C94703 = C216917 - (C94829 * C216041) / q - (C179501 * p) / q;
    const double C170261 = C89623 / q - (C170115 * C216044) / q - C217509;
    const double C178649 =
        C94676 / C143578 - (C178620 * C216041) / q + C217156 - C217509;
    const double C216859 = C94667 * p;
    const double C171560 =
        C216618 - (C160329 * be + C171243 * C216043) / q - C217503;
    const double C217280 = C216459 / q;
    const double C216590 = C170729 * p;
    const double C178605 = C217120 - (C170613 * C216041) / q - C217524;
    const double C171228 =
        C216602 - (C171243 * C216044) / q + C217074 - C217524;
    const double C87742 = -(C42930 * be + C87723 * C216043 + C216453) / q;
    const double C88274 = C216514 - (C88292 * C216041) / q - C216453 / q;
    const double C216526 = C169785 * p;
    const double C216559 = C170202 * p;
    const double C217465 = C216867 / q;
    const double C217350 = C216586 / C143578;
    const double C217281 = C216460 / q;
    const double C88597 = C88526 / q - (C88525 * C216044) / q - C217325;
    const double C94388 = C216903 - (C94397 * C216041) / q + C216904 - C217325;
    const double C217327 = C216560 / q;
    const double C92588 = -(C47807 * be + C92534 * C216043 + C94154 * p) / q;
    const double C94181 = C92534 / C143578 -
                          (C178660 * be + C94154 * C216043) / q -
                          (C178665 * p) / q;
    const double C216902 = C93561 / C143578;
    const double C93686 =
        (2 * C93561) / q - (C93560 * C216044) / q - (C177859 * p) / q;
    const double C217353 = C216589 / q;
    const double C217348 = C216584 / C143578;
    const double C216587 = C88903 * p;
    const double C93633 = C216875 - (C93885 * C216041) / q - (C94550 * p) / q;
    const double C94424 =
        C93885 / C143578 - (C94550 * C216041) / q + C216907 - (C179054 * p) / q;
    const double C93632 = C216874 - (C93884 * C216041) / q - (C177772 * p) / q;
    const double C169609 = C217022 - (C162122 * be + C169522 * C216043) / q +
                           C171965 / q - C217495;
    const double C178779 = C217022 - (C170380 * C216044) / q - C217514;
    const double C217369 = C216630 / C143578;
    const double C217337 = C216508 / q;
    const double C88202 = -(C88130 * C216044 + C216508) / q;
    const double C92174 = C216801 - (C92237 * C216041) / q - (C175900 * p) / q;
    const double C216783 = C175079 * p;
    const double C216703 = C92156 * p;
    const double C175455 = C217114 - (C169522 * C216041) / q - C217522;
    const double C171170 =
        C216617 - (C160314 * be + C171126 * C216043) / q + C217073 - C217522;
    const double C87628 = -(C87552 * C216044 + C216443) / q;
    const double C88670 = C216563 - (C88688 * C216041) / q - C216443 / q;
    const double C216446 = C89443 * p;
    const double C172051 = C216600 - (C171126 * C216044) / q - C217512;
    const double C217267 = C216437 / q;
    const double C216509 = C169551 * p;
    const double C94271 = C216857 - (C94280 * C216041) / q - C217376;
    const double C88921 =
        C92804 / q - (C88867 * C216041) / q - (C170700 * p) / q;
    const double C217309 = C216521 / C143578;
    const double C89812 = C216485 - (C89785 * C216044) / q + C216636 - C217376;
    const double C87751 = -(C42941 * be + C87732 * C216043 + C216454) / q;
    const double C95268 = C216934 - (C95285 * C216041) / q - C216454 / q;
    const double C89659 = C87968 / C143578 - (C89623 * C216044) / q - C217365;
    const double C94109 =
        C93021 / C143578 - (C94118 * C216041) / q + C216888 - C217365;
    const double C216820 = C93003 * p;
    const double C170409 =
        C216555 - (C163216 * be + C170613 * C216043) / q - C217500;
    const double C174198 = C216731 - (C174610 * C216041) / q - C217500;
    const double C217307 = C216519 / C143578;
    const double C217306 = C216518 / q;
    const double C169727 =
        C216484 - (C169756 * C216044) / q + C217029 - C217500;
    const double C174140 = C216727 - (C174344 * C216041) / q - C217511;
    const double C217341 = C216573 / q;
    const double C217332 = C216566 / C143578;
    const double C170351 =
        C216552 - (C163201 * be + C170380 * C216043) / q + C217051 - C217511;
    const double C216577 = C88723 * p;
    const double C93039 = C216856 - (C93165 * C216041) / q - (C94190 * p) / q;
    const double C94127 = C93165 / C143578 - (C94190 * C216041) / q +
                          C94199 / C143578 - (C178576 * p) / q;
    const double C171936 = C87967 / C143578 - (C169259 * C216044) / q - C217526;
    const double C174048 =
        C91067 / C143578 - (C174078 * C216041) / q + C217104 - C217526;
    const double C91194 =
        C97868 / q - (C98385 * be + C91140 * C216043) / q - (C92201 * p) / q;
    const double C92228 = (3 * C91140) / C143578 -
                          (C175982 * be + C92201 * C216043) / q -
                          (C175987 * p) / q;
    const double C97919 = C181318 / C143578 -
                          (C53297 * be + C97868 * C216043) / q -
                          (C91140 * p) / q;
    const double C216738 = C91049 * p;
    const double C91949 =
        C95814 / q - (C175537 * be + C91922 * C216043) / q - (C175542 * p) / q;
    const double C91958 = C216728 - (C91967 * C216041) / q - C217371;
    const double C217334 = C216568 / C143578;
    const double C89722 =
        C216553 - (C147882 * be + C89704 * C216043) / q + C216631 - C217371;
    const double C87637 = -(C87561 * C216044 + C216444) / q;
    const double C96417 = C216952 - (C96434 * C216041) / q - C216444 / q;
    const double C88795 =
        C92696 / q - (C88759 * C216041) / q - (C170496 * p) / q;
    const double C92732 =
        C92705 / C143578 - (C92696 * C216041) / q - (C88759 * p) / q;
    const double C89641 =
        C88526 / C143578 - (C147745 * be + C89623 * C216043) / q - C217364;
    const double C91877 =
        C91068 / C143578 - (C91886 * C216041) / q + C216792 - C217364;
    const double C88093 =
        C88040 / q - (C169342 * be + C88039 * C216043) / q - (C169347 * p) / q;
    const double C88094 = C87466 / C143578 -
                          (C50343 * be + C88040 * C216043) / q -
                          (C88039 * p) / q;
    const double C217366 = C216491 / q;
    const double C216658 = C91050 * p;
    const double C92210 = (3 * C91050) / C143578 -
                          (C151859 * be + C92156 * C216043) / q - C216702 / q;
    const double C217393 = C216692 / q;
    const double C90595 = -(C90462 * C216044 + C216702) / q;
    const double C217295 = C216501 / C143578;
    const double C89740 = C216480 - (C89704 * C216044) / q - C217336;
    const double C217268 = C216438 / q;
    const double C88003 =
        C87968 / q - (C144977 * be + C87967 * C216043) / q - C217286;
    const double C91598 = C216777 - (C91607 * C216041) / q + C216778 - C217286;
    const double C217288 = C216488 / q;
    const double C216776 = C90463 / C143578;
    const double C90576 = (2 * C90463) / q -
                          (C149086 * be + C90462 * C216043) / q -
                          (C173348 * p) / q;
    const double C217298 = C216504 / q;
    const double C217293 = C216498 / C143578;
    const double C175657 = C216479 - (C169522 * C216044) / q - C217511;
    const double C88237 =
        C90154 / q - (C88201 * C216041) / q - (C169580 * p) / q;
    const double C90190 =
        C90163 / C143578 - (C90154 * C216041) / q - (C88201 * p) / q;
    const double C216502 = C88165 * p;
    const double C90501 = C216697 - (C90634 * C216041) / q - (C91679 * p) / q;
    const double C91616 =
        C90634 / C143578 - (C91679 * C216041) / q + C216780 - (C175006 * p) / q;
    const double C90500 = C216696 - (C90633 * C216041) / q - (C173232 * p) / q;
    const double C217272 = C216448 / C143578;
    const double C88598 = C216482 - (C88526 * C216044) / q - C217326;
    const double C92444 = C216808 - (C92462 * C216041) / q + C216548 - C217326;
    const double C169992 =
        C217321 - (C170022 * C216041) / q + C170054 / q - (C183149 * p) / q;
    const double C93705 = -(C138143 * be + C93651 * C216043 + C94712 * p) / q;
    const double C94739 = C93651 / C143578 -
                          (C179554 * be + C94712 * C216043) / q -
                          (C179559 * p) / q;
    const double C88831 = C92786 / q - (C88849 * C216041) / q - C217345;
    const double C89533 = C216418 - (C89506 * C216044) / q + C216621 - C217345;
    const double C216804 = C92453 / C143578;
    const double C92579 =
        C176542 / q - (C92453 * C216044) / q - (C93561 * p) / q;
    const double C93687 =
        (3 * C92453) / C143578 - (C93561 * C216044) / q - (C93560 * p) / q;
    const double C95865 = C96349 / C143578 -
                          (C53288 * be + C95814 * C216043) / q -
                          (C91922 * p) / q;
    const double C96400 = -(C51716 * be + C96349 * C216043 + C95814 * p) / q;
    const double C94460 = -(C179107 * be + C94433 * C216043 + C179112 * p) / q;
    const double C168332 =
        C216417 - (C159966 * be + C168641 * C216043) / q - C217480;
    const double C168684 =
        C216417 - (C168727 * C216044) / q + C216992 - C217486;
    const double C216561 = C88507 * p;
    const double C89407 = -(C171483 * be + C89380 * C216043 + C171488 * p) / q;
    const double C217259 = C216429 / C143578;
    const double C88004 =
        C216482 - (C50267 * be + C87968 * C216043) / q - C217287;
    const double C89902 = C216645 - (C89920 * C216041) / q + C216475 - C217287;
    const double C169078 =
        C217282 - (C169108 * C216041) / q + C169140 / q - (C182511 * p) / q;
    const double C88111 = C90082 / q - (C88129 * C216041) / q - C217290;
    const double C89164 =
        C216412 - (C146961 * be + C89146 * C216043) / q + C216607 - C217290;
    const double C89461 = C216412 - (C89425 * C216044) / q - C217329;
    const double C216641 = C89911 / C143578;
    const double C90019 =
        C172465 / q - (C45144 * be + C89911 * C216043) / q - (C90463 * p) / q;
    const double C90577 = (3 * C89911) / C143578 -
                          (C90459 * be + C90463 * C216043) / q -
                          (C90462 * p) / q;
    const double C168246 =
        C216411 - (C159951 * be + C168289 * C216043) / q + C216977 - C217479;
    const double C171603 = C216411 - (C168375 * C216044) / q - C217507;
    const double C216490 = C87949 * p;
    const double C88075 = -(C87949 * C216044 + C216491) / q;
    const double C138089 =
        C218085 - (C138222 * C216041) / q - (C201477 * p) / q;
    const double C218648 = C218003 / q;
    const double C136838 = -(C136847 * C216041 + C218003) / q;
    const double C218094 = C201857 * p;
    const double C218657 = C217967 / q;
    const double C135893 = -(C135911 * C216041 + C217967) / q;
    const double C135335 = -(C135353 * C216041 + C217924) / q;
    const double C217932 = C197641 * p;
    const double C133805 =
        C217826 - (C147093 * be + C133778 * C216044) / q - C218572;
    const double C134327 = C217848 - (C134336 * C216041) / q - C218572;
    const double C218090 = C201593 * p;
    const double C218525 = C217737 / q;
    const double C217790 = C194296 * p;
    const double C139205 =
        C218130 - (C139268 * C216041) / q - (C203232 * p) / q;
    const double C135713 =
        C137606 / q - (C135659 * C216043) / q - (C198081 * p) / q;
    const double C137657 =
        C137063 / C143578 - (C137606 * C216043) / q - (C135659 * p) / q;
    const double C217951 = C198052 * p;
    const double C218519 = C217731 / q;
    const double C217744 = C193615 * p;
    const double C217949 = C198023 * p;
    const double C218516 = C217727 / q;
    const double C217742 = C193586 * p;
    const double C217788 = C194238 * p;
    const double C217675 = C192631 * p;
    const double C217659 = C192279 * p;
    const double C199693 = C218016 - (C199062 * C216041) / q - C218718;
    const double C218614 = C217930 / q;
    const double C217982 = C198580 * p;
    const double C198551 = C218336 - (C161398 * be + C198376 * C216044) / q +
                           C198668 / q - C218760;
    const double C199249 = C218336 - (C193528 * C216041) / q - C218717;
    const double C218655 = C218012 / C143578;
    const double C218605 = C217895 / q;
    const double C135894 = -(C135912 * C216041 + C217895) / q;
    const double C218123 = C202944 * p;
    const double C198318 =
        C218328 - (C161366 * be + C198110 * C216044) / q - C218754;
    const double C202555 =
        C218120 - (C202511 * C216043) / q + C218371 - C218754;
    const double C137261 = -(C137225 * C216041 + C137216 * p) / q;
    const double C138090 =
        C218086 - (C138223 * C216041) / q - (C138989 * p) / q;
    const double C138926 = C138223 / C143578 - (C138989 * C216041) / q +
                           C218120 - (C202786 * p) / q;
    const double C218048 = C139016 * p;
    const double C203433 =
        C218686 - (C163548 * be + C202511 * C216044) / q - C218768;
    const double C137180 = C217807 - (C137144 * C216043) / q - C218668;
    const double C140487 =
        C218136 - (C53383 * be + C140419 * C216044) / q - C218668;
    const double C217964 = C198289 * p;
    const double C198522 = C218334 - (C198376 * C216043) / q - C218759;
    const double C199047 =
        C217995 - (C162267 * be + C199062 * C216044) / q + C218349 - C218759;
    const double C134813 = C217728 - (C134795 * C216043) / q - C217890 / q;
    const double C135336 = -(C135354 * C216041 + C217890) / q;
    const double C217931 = C197612 * p;
    const double C218681 = C218092 / q;
    const double C218640 = C217975 / C143578;
    const double C218606 = C217896 / q;
    const double C135821 =
        C135750 / q - (C150311 * be + C135749 * C216044) / q - C218631;
    const double C139295 =
        C218086 - (C139277 * C216043) / q + C218132 - C218631;
    const double C218633 = C217965 / q;
    const double C218643 = C217978 / q;
    const double C218638 = C217973 / C143578;
    const double C217976 = C135965 * p;
    const double C138299 =
        C218089 - (C138432 * C216043) / q - (C139367 * p) / q;
    const double C138298 =
        C218088 - (C138431 * C216043) / q - (C201799 * p) / q;
    const double C135929 = C137844 / q - (C135911 * C216043) / q - C218637;
    const double C136874 =
        C217913 - (C152142 * be + C136847 * C216044) / q + C218017 - C218637;
    const double C197058 = C217912 - (C197465 * C216041) / q - C218707;
    const double C197554 =
        C217912 - (C186153 * be + C197583 * C216044) / q + C218311 - C218747;
    const double C217966 = C135785 * p;
    const double C136820 = -(C136802 * C216041 + C199865 * p) / q;
    const double C218603 = C217893 / C143578;
    const double C135822 =
        C217864 - (C98470 * be + C135750 * C216044) / q - C218632;
    const double C137725 =
        C218027 - (C137691 * C216043) / q + C217954 - C218632;
    const double C198173 =
        C218627 - (C198202 * C216043) / q + C198141 / q - (C209160 * p) / q;
    const double C218601 = C217891 / C143578;
    const double C134786 = -(C134804 * C216041 + C217887) / q;
    const double C139822 = C218150 - (C139805 * C216043) / q - C217887 / q;
    const double C136523 =
        C217863 - (C151552 * be + C136487 * C216044) / q - C218652;
    const double C138737 =
        C218026 - (C138719 * C216043) / q + C218108 - C218652;
    const double C139034 =
        C218664 - (C155186 * be + C138998 * C216044) / q - C218091 / q;
    const double C194529 = C218276 - (C163216 * be + C194384 * C216044) / q +
                           C194650 / q - C218733;
    const double C195776 = C218276 - (C193528 * C216043) / q - C218718;
    const double C218588 = C217849 / C143578;
    const double C218526 = C217739 / q;
    const double C133419 = -(C133401 * C216043 + C217739) / q;
    const double C139223 =
        C218131 - (C139349 * C216041) / q - (C203261 * p) / q;
    const double C194032 =
        C134174 / q - (C159450 * be + C193887 * C216044) / q - C218723;
    const double C202411 =
        C139196 / C143578 - (C202382 * C216041) / q + C218370 - C218723;
    const double C218073 = C139187 * p;
    const double C195329 = C217832 - (C195013 * C216043) / q - C218717;
    const double C218494 = C217673 / q;
    const double C217804 = C194500 * p;
    const double C202367 = C218334 - (C194384 * C216041) / q - C218738;
    const double C194998 =
        C217816 - (C160329 * be + C195013 * C216044) / q + C218288 - C218738;
    const double C132293 = -(C132274 * C216043 + C217667) / q;
    const double C132825 = C217728 - (C132843 * C216041) / q - C217667 / q;
    const double C217740 = C193557 * p;
    const double C217773 = C193974 * p;
    const double C218679 = C218081 / q;
    const double C218564 = C217800 / C143578;
    const double C218495 = C217674 / q;
    const double C133148 =
        C133077 / q - (C145907 * be + C133076 * C216044) / q - C218539;
    const double C138908 =
        C218117 - (C138917 * C216041) / q + C218118 - C218539;
    const double C218541 = C217774 / q;
    const double C137108 = -(C137054 * C216043 + C138674 * p) / q;
    const double C138701 =
        C137054 / C143578 - (C138674 * C216043) / q - (C202426 * p) / q;
    const double C218116 = C138052 / C143578;
    const double C138184 = (2 * C138052) / q -
                           (C153648 * be + C138051 * C216044) / q -
                           (C201622 * p) / q;
    const double C218567 = C217803 / q;
    const double C218562 = C217798 / C143578;
    const double C217801 = C133454 * p;
    const double C138128 =
        C218089 - (C138394 * C216041) / q - (C139070 * p) / q;
    const double C138944 = C138394 / C143578 - (C139070 * C216041) / q +
                           C218121 - (C202815 * p) / q;
    const double C138127 =
        C218088 - (C138393 * C216041) / q - (C201535 * p) / q;
    const double C193381 =
        C218236 - (C193294 * C216043) / q + C195733 / q - C218709;
    const double C202540 =
        C218236 - (C163201 * be + C194151 * C216044) / q - C218728;
    const double C218583 = C217844 / C143578;
    const double C218551 = C217722 / q;
    const double C132753 = -(C50438 * be + C132681 * C216044 + C217722) / q;
    const double C136694 =
        C218015 - (C136757 * C216041) / q - (C199664 * p) / q;
    const double C217997 = C198845 * p;
    const double C217917 = C136676 * p;
    const double C199220 = C218328 - (C193294 * C216041) / q - C218736;
    const double C194940 =
        C217831 - (C194896 * C216043) / q + C218287 - C218736;
    const double C132179 = -(C42741 * be + C132103 * C216044 + C217657) / q;
    const double C133221 = C217777 - (C133239 * C216041) / q - C217657 / q;
    const double C217660 = C133994 * p;
    const double C195819 =
        C217814 - (C160314 * be + C194896 * C216044) / q - C218726;
    const double C218481 = C217651 / q;
    const double C217723 = C193323 * p;
    const double C138791 = C218071 - (C138800 * C216041) / q - C218590;
    const double C133472 =
        C137324 / q - (C133418 * C216041) / q - (C194471 * p) / q;
    const double C218523 = C217735 / C143578;
    const double C134363 =
        C217699 - (C148014 * be + C134336 * C216044) / q + C217850 - C218590;
    const double C132302 = -(C132283 * C216043 + C217668) / q;
    const double C139788 = C218148 - (C139805 * C216041) / q - C217668 / q;
    const double C134210 =
        C132519 / C143578 - (C147745 * be + C134174 * C216044) / q - C218579;
    const double C138629 =
        C137538 / C143578 - (C138638 * C216041) / q + C218102 - C218579;
    const double C218034 = C137521 * p;
    const double C194180 = C217769 - (C194384 * C216043) / q - C218714;
    const double C197965 = C217945 - (C198376 * C216041) / q - C218714;
    const double C218521 = C217733 / C143578;
    const double C218520 = C217732 / q;
    const double C193499 =
        C217698 - (C162137 * be + C193528 * C216044) / q + C218243 - C218714;
    const double C197907 = C217941 - (C198110 * C216041) / q - C218725;
    const double C218555 = C217787 / q;
    const double C218546 = C217780 / C143578;
    const double C194122 =
        C217766 - (C194151 * C216043) / q + C218265 - C218725;
    const double C217791 = C133274 * p;
    const double C137555 =
        C218070 - (C137674 * C216041) / q - (C138710 * p) / q;
    const double C138647 = C137674 / C143578 - (C138710 * C216041) / q +
                           C138719 / C143578 - (C202338 * p) / q;
    const double C195704 =
        C132518 / C143578 - (C158818 * be + C193032 * C216044) / q - C218740;
    const double C197815 =
        C135587 / C143578 - (C197845 * C216041) / q + C218318 - C218740;
    const double C135714 =
        C142388 / q - (C135660 * C216043) / q - (C136721 * p) / q;
    const double C136748 =
        (3 * C135660) / C143578 - (C136721 * C216043) / q - (C199750 * p) / q;
    const double C142439 =
        C205077 / C143578 - (C142388 * C216043) / q - (C135660 * p) / q;
    const double C217952 = C135569 * p;
    const double C136469 =
        C140334 / q - (C136442 * C216043) / q - (C199306 * p) / q;
    const double C136478 = C217942 - (C136487 * C216041) / q - C218585;
    const double C218548 = C217782 / C143578;
    const double C134273 =
        C217767 - (C134255 * C216043) / q + C217845 - C218585;
    const double C132188 = -(C42752 * be + C132112 * C216044 + C217658) / q;
    const double C140937 = C218166 - (C140954 * C216041) / q - C217658 / q;
    const double C133346 =
        C137216 / q - (C133310 * C216041) / q - (C194267 * p) / q;
    const double C137252 =
        C137225 / C143578 - (C137216 * C216041) / q - (C133310 * p) / q;
    const double C134192 =
        C133077 / C143578 - (C134174 * C216043) / q - C218578;
    const double C136397 =
        C135588 / C143578 - (C136406 * C216041) / q + C218006 - C218578;
    const double C132644 =
        C132591 / q - (C132590 * C216043) / q - (C193119 * p) / q;
    const double C132645 =
        C132017 / C143578 - (C132591 * C216043) / q - (C132590 * p) / q;
    const double C218580 = C217705 / q;
    const double C217872 = C135570 * p;
    const double C136730 =
        (3 * C135570) / C143578 - (C136676 * C216043) / q - C217916 / q;
    const double C218607 = C217906 / q;
    const double C135137 = -(C149086 * be + C135011 * C216044 + C217916) / q;
    const double C218509 = C217715 / C143578;
    const double C134291 =
        C217694 - (C147882 * be + C134255 * C216044) / q - C218550;
    const double C218482 = C217652 / q;
    const double C132554 = C132519 / q - (C132518 * C216043) / q - C218500;
    const double C136118 =
        C217991 - (C136127 * C216041) / q + C217992 - C218500;
    const double C218502 = C217702 / q;
    const double C217990 = C135012 / C143578;
    const double C135119 =
        (2 * C135012) / q - (C135011 * C216043) / q - (C197116 * p) / q;
    const double C218512 = C217718 / q;
    const double C218507 = C217712 / C143578;
    const double C199421 =
        C217693 - (C162122 * be + C193294 * C216044) / q - C218725;
    const double C132788 =
        C134705 / q - (C132752 * C216041) / q - (C193352 * p) / q;
    const double C134741 =
        C134714 / C143578 - (C134705 * C216041) / q - (C132752 * p) / q;
    const double C217716 = C132716 * p;
    const double C135048 =
        C217911 - (C135174 * C216041) / q - (C136199 * p) / q;
    const double C136136 = C135174 / C143578 - (C136199 * C216041) / q +
                           C217994 - (C198772 * p) / q;
    const double C135047 =
        C217910 - (C135173 * C216041) / q - (C197000 * p) / q;
    const double C218486 = C217662 / C143578;
    const double C133149 =
        C217696 - (C51631 * be + C133077 * C216044) / q - C218540;
    const double C136964 =
        C218022 - (C136982 * C216041) / q + C217762 - C218540;
    const double C193764 =
        C218535 - (C193794 * C216041) / q + C193826 / q - (C206898 * p) / q;
    const double C138204 = -(C138147 * C216043 + C139232 * p) / q;
    const double C139259 =
        C138147 / C143578 - (C139232 * C216043) / q - (C203318 * p) / q;
    const double C133382 = C137306 / q - (C133400 * C216041) / q - C218559;
    const double C134084 =
        C217632 - (C147553 * be + C134057 * C216044) / q + C217835 - C218559;
    const double C218018 = C136973 / C143578;
    const double C137099 =
        C200305 / q - (C47717 * be + C136973 * C216044) / q - (C138052 * p) / q;
    const double C138185 = (3 * C136973) / C143578 -
                           (C138048 * be + C138052 * C216044) / q -
                           (C138051 * p) / q;
    const double C140385 =
        C140869 / C143578 - (C140334 * C216043) / q - (C136442 * p) / q;
    const double C140920 = -(C140869 * C216043 + C140334 * p) / q;
    const double C138980 = -(C138953 * C216043 + C202872 * p) / q;
    const double C192105 = C217631 - (C192414 * C216043) / q - C218694;
    const double C192457 =
        C217631 - (C160156 * be + C192500 * C216044) / q + C218206 - C218700;
    const double C217775 = C133058 * p;
    const double C133958 = -(C133931 * C216043 + C195257 * p) / q;
    const double C218473 = C217643 / C143578;
    const double C132555 = C217696 - (C132519 * C216043) / q - C218501;
    const double C134453 =
        C217859 - (C134471 * C216041) / q + C217689 - C218501;
    const double C192851 =
        C218496 - (C192881 * C216041) / q + C192913 / q - (C206264 * p) / q;
    const double C132662 = C134633 / q - (C132680 * C216041) / q - C218504;
    const double C133715 =
        C217626 - (C133697 * C216043) / q + C217821 - C218504;
    const double C134012 =
        C217626 - (C147421 * be + C133976 * C216044) / q - C218543;
    const double C217855 = C134462 / C143578;
    const double C134570 =
        C196233 / q - (C134462 * C216043) / q - (C135012 * p) / q;
    const double C135120 =
        (3 * C134462) / C143578 - (C135012 * C216043) / q - (C135011 * p) / q;
    const double C192019 =
        C217625 - (C192062 * C216043) / q + C218191 - C218693;
    const double C195372 =
        C217625 - (C160141 * be + C192148 * C216044) / q - C218721;
    const double C217704 = C132500 * p;
    const double C132626 = -(C144947 * be + C132500 * C216044 + C217705) / q;
    const double C215222 = C144192 * p;
    const double C215238 = C144547 * p;
    const double C215239 = C44765 * p;
    const double C42913 =
        C216058 - (C42930 * be + C42934 * C216041) / q - (C42933 * p) / q;
    const double C145108 =
        C216093 - (C158770 * be + C145519 * C216041) / q - C216266;
    const double C145371 = C216093 - (C145579 * C216043) / q - C216279;
    const double C43542 = C215200 - (C43524 * C216043) / q - C216092;
    const double C45497 =
        C215436 - (C45514 * be + C45517 * C216041) / q - C216092;
    const double C215303 = C145608 * p;
    const double C44450 =
        C216095 - (C147093 * be + C44459 * C216041) / q - C215235 / q;
    const double C44729 =
        C216136 - (C147553 * be + C44738 * C216041) / q - C216065;
    const double C43007 = C144488 / q - (C42944 * C216044) / q - C216067;
    const double C51966 =
        C215739 - (C51982 * be + C51985 * C216041) / q - C216067;
    const double C44136 = C215200 - (C44082 * C216044) / q + C215363 - C216139;
    const double C48070 =
        C215600 - (C48087 * be + C48090 * C216041) / q - C216139;
    const double C146038 =
        C216134 - (C159418 * be + C146451 * C216041) / q - C216272;
    const double C146539 =
        C216134 - (C146568 * C216044) / q + C146481 / q - C216303;
    const double C215353 = C146303 * p;
    const double C215403 = C147482 * p;
    const double C42997 = C144472 / q - (C42934 * C216044) / q - C216066;
    const double C44064 =
        C215362 - (C51973 * be + C44082 * C216041) / q - C216066;
    const double C215375 = C146657 * p;
    const double C215415 = C147943 * p;
    const double C147813 =
        C216160 - (C160329 * be + C147155 * C216041) / q - C216274;
    const double C43578 = C215307 - (C43524 * C216044) / q - C216098;
    const double C51391 =
        C215730 - (C53554 * be + C51408 * C216041) / q - C216098;
    const double C44154 =
        C52004 / q - (C51992 * be + C44100 * C216041) / q - (C44747 * p) / q;
    const double C44774 = (3 * C44100) / C143578 -
                          (C147624 * be + C44747 * C216041) / q -
                          (C147628 * p) / q;
    const double C215394 = C147140 * p;
    const double C43017 = (2 * C42955) / q -
                          (C144630 * be + C42954 * C216041) / q -
                          (C144634 * p) / q;
    const double C43018 = (3 * C42965) / C143578 -
                          (C42951 * be + C42955 * C216041) / q -
                          (C42954 * p) / q;
    const double C43028 =
        C144663 / q - (C42962 * be + C42965 * C216041) / q - (C42955 * p) / q;
    const double C50336 = C156030 / C143578 -
                          (C50599 * be + C50602 * C216041) / q + C215707 -
                          (C43506 * p) / q;
    const double C47041 = C216173 - (C47032 * C216043) / q - C215493 / q;
    const double C215310 = C50640 / q;
    const double C46115 = C216175 - (C46097 * C216043) / q - (C46096 * p) / q;
    const double C215496 = C149745 * p;
    const double C215497 = C47617 * p;
    const double C47599 = C216212 - (C47590 * C216043) / q - C216185;
    const double C45587 = C148784 / q - (C45527 * C216044) / q - C216178;
    const double C53585 = C215739 - (C53566 * C216043) / q - C216178;
    const double C46709 = C215436 - (C46655 * C216044) / q + C215537 - C216215;
    const double C48666 = C215600 - (C48649 * C216043) / q - C216215;
    const double C150436 = C216210 - (C150643 * C216043) / q - C216319;
    const double C150672 =
        C216210 - (C150701 * C216044) / q + C150614 / q - C216330;
    const double C215550 = C150761 * p;
    const double C151613 = C216227 - (C151286 * C216043) / q - C216320;
    const double C45577 = C215319 - (C45517 * C216044) / q - C216177;
    const double C51425 = C215731 - (C51408 * C216043) / q - C216177;
    const double C52061 =
        C215740 - (C52001 * be + C52004 * C216041) / q - (C44100 * p) / q;
    const double C46151 = C149074 / q - (C46097 * C216044) / q - C216186;
    const double C46673 = C215541 - (C46655 * C216043) / q - C216186;
    const double C215548 = C150731 * p;
    const double C215571 = C151271 * p;
    const double C215466 = C45537 * p;
    const double C215624 = C49880 * p;
    const double C49871 = (3 * C48150) / C143578 - (C49880 * C216044) / q +
                          (3 * C49853) / C143578 - C215666 / q;
    const double C215695 = C49251 / C143578;
    const double C48140 =
        C152965 / q - (C48160 * C216044) / q + C216243 - (C49251 * p) / q;
    const double C49232 = (2 * C49251) / q - (C49250 * C216044) / q +
                          (3 * C49196) / C143578 - (C154308 * p) / q;
    const double C49233 = (3 * C48160) / C143578 - (C49251 * C216044) / q +
                          (3 * C49197) / C143578 - (C49250 * p) / q;
    const double C215648 = C50159 * p;
    const double C50150 = (3 * C48700) / C143578 - (C50159 * C216044) / q +
                          (3 * C50132) / C143578 - C215667 / q;
    const double C48170 =
        C215627 - (C48107 * be + C48110 * C216041) / q - (C44099 * p) / q;
    const double C48200 = -(C48157 * be + C48160 * C216041 + C215629) / q;
    const double C52023 =
        C215723 - (C52042 * C216044) / q + (3 * C51985) / C143578 - C215629 / q;
    const double C48220 = -(C48160 * C216043 + C215631) / q;
    const double C53604 =
        C215722 - (C53623 * C216044) / q + (3 * C53566) / C143578 - C215631 / q;
    const double C49889 =
        C215694 - (C155389 * be + C49862 * C216041) / q - (C155393 * p) / q;
    const double C50078 =
        C215694 - (C50141 * C216043) / q + C215700 - (C155707 * p) / q;
    const double C215682 = C154905 * p;
    const double C50659 =
        (3 * C50621) / C143578 - (C50678 * C216044) / q - C215720 / q;
    const double C52099 = -(C52042 * C216043 + C215720) / q;
    const double C53661 = -(C53620 * be + C53623 * C216041 + C215720) / q;
    const double C43505 =
        C45517 / q - (C145515 * be + C43523 * C216041) / q - C216088;
    const double C44468 = C215199 - (C44459 * C216043) / q - C216088;
    const double C43541 = C43524 / q - (C43523 * C216043) / q - C216091;
    const double C47023 =
        C215482 - (C151224 * be + C47032 * C216041) / q - C216091;
    const double C43577 = C145548 / q - (C43523 * C216044) / q - C216097;
    const double C45026 = C215339 - (C45017 * C216043) / q - C216097;
    const double C47302 =
        C215515 - (C151684 * be + C47311 * C216041) / q - C216097;
    const double C215305 = C45044 * p;
    const double C48394 =
        C215640 - (C93324 * be + C48632 * C216041) / q - (C49565 * p) / q;
    const double C49439 = C48632 / C143578 -
                          (C154651 * be + C49565 * C216041) / q + C215673 -
                          (C154655 * p) / q;
    const double C216137 = C215370 / q;
    const double C215245 = C44486 * p;
    const double C45826 =
        C215481 - (C149241 * be + C46078 * C216041) / q - (C149245 * p) / q;
    const double C46168 = -(C149800 * be + C46114 * C216041 + C215500) / q;
    const double C47338 = C215435 - (C47311 * C216044) / q + C215582 - C216229;
    const double C49583 = C215599 - (C49574 * C216043) / q - C216229;
    const double C46384 =
        C215514 - (C150165 * be + C46636 * C216041) / q - (C150169 * p) / q;
    const double C216213 = C215545 / q;
    const double C47059 = C149058 / q - (C47032 * C216044) / q - C216220;
    const double C47320 = C215417 - (C47311 * C216043) / q - C216220;
    const double C47455 =
        C215585 - (C151937 * be + C47581 * C216041) / q - (C151941 * p) / q;
    const double C48210 = -(C48150 * C216043 + C215630) / q;
    const double C48734 = -(C93396 * be + C48700 * C216041 + C215630) / q;
    const double C51442 = C50678 / C143578 - (C51459 * C216044) / q +
                          (3 * C51408) / C143578 - C215630 / q;
    const double C43059 = -(C42996 * C216043 + C215244) / q;
    const double C216099 = C215309 / q;
    const double C216100 = C215311 / q;
    const double C216101 = C215313 / q;
    const double C216140 = C215373 / q;
    const double C46186 = -(C149830 * be + C46150 * C216041 + C215501) / q;
    const double C49799 = C215690 - (C49862 * C216043) / q - C215692 / q;
    const double C50168 = -(C155849 * be + C50141 * C216041 + C215692) / q;
    const double C216216 = C215551 / q;
    const double C216841 = C94586 * p;
    const double C94577 = (3 * C92840) / C143578 - (C94586 * C216044) / q +
                          (3 * C94559) / C143578 - C216883 / q;
    const double C216912 = C93957 / C143578;
    const double C92831 =
        C176943 / q - (C92849 * C216044) / q + C217457 - (C93957 * p) / q;
    const double C93938 = (2 * C93957) / q - (C93956 * C216044) / q +
                          (3 * C93902) / C143578 - (C178270 * p) / q;
    const double C93939 = (3 * C92849) / C143578 - (C93957 * C216044) / q +
                          (3 * C93903) / C143578 - (C93956 * p) / q;
    const double C216865 = C94865 * p;
    const double C94856 = (3 * C93399) / C143578 - (C94865 * C216044) / q +
                          (3 * C94838) / C143578 - C216884 / q;
    const double C92858 = C216844 - (C92804 * C216041) / q - (C88867 * p) / q;
    const double C92885 = -(C92849 * C216041 + C216846) / q;
    const double C96621 =
        C216940 - (C96638 * C216044) / q + (3 * C96587) / C143578 - C216846 / q;
    const double C92903 = -(C48157 * be + C92849 * C216043 + C216848) / q;
    const double C98140 =
        C216939 - (C98157 * C216044) / q + (3 * C98106) / C143578 - C216848 / q;
    const double C94595 = C216911 - (C94568 * C216041) / q - (C179326 * p) / q;
    const double C94784 = C216911 - (C155849 * be + C94847 * C216043) / q +
                          C216917 - (C179631 * p) / q;
    const double C216899 = C178852 * p;
    const double C95319 =
        (3 * C95285) / C143578 - (C95336 * C216044) / q - C216937 / q;
    const double C96689 = -(C52039 * be + C96638 * C216043 + C216937) / q;
    const double C98191 = -(C98157 * C216041 + C216937) / q;
    const double C92894 = -(C48147 * be + C92840 * C216043 + C216847) / q;
    const double C93435 = -(C93399 * C216041 + C216847) / q;
    const double C96086 = C95336 / C143578 - (C96103 * C216044) / q +
                          (3 * C96052) / C143578 - C216847 / q;
    const double C218055 = C139106 * p;
    const double C139097 = (3 * C137360) / C143578 -
                           (C155405 * be + C139106 * C216044) / q +
                           (3 * C139079) / C143578 - C218097 / q;
    const double C218126 = C138470 / C143578;
    const double C137351 = C200706 / q - (C48157 * be + C137369 * C216044) / q +
                           C218671 - (C138470 * p) / q;
    const double C138450 = (2 * C138470) / q -
                           (C154393 * be + C138469 * C216044) / q +
                           (3 * C138412) / C143578 - (C202032 * p) / q;
    const double C138451 = (3 * C137369) / C143578 -
                           (C138466 * be + C138470 * C216044) / q +
                           (3 * C138413) / C143578 - (C138469 * p) / q;
    const double C218079 = C139385 * p;
    const double C139376 = (3 * C137895) / C143578 -
                           (C155864 * be + C139385 * C216044) / q +
                           (3 * C139358) / C143578 - C218098 / q;
    const double C137378 =
        C218058 - (C137324 * C216041) / q - (C133418 * p) / q;
    const double C137405 = -(C137369 * C216041 + C218060) / q;
    const double C141141 = C218154 - (C52039 * be + C141158 * C216044) / q +
                           (3 * C141107) / C143578 - C218060 / q;
    const double C137423 = -(C137369 * C216043 + C218062) / q;
    const double C142660 = C218153 - (C53620 * be + C142677 * C216044) / q +
                           (3 * C142626) / C143578 - C218062 / q;
    const double C139115 =
        C218125 - (C139088 * C216041) / q - (C203086 * p) / q;
    const double C139304 =
        C218125 - (C139367 * C216043) / q + C218131 - (C203390 * p) / q;
    const double C218113 = C202613 * p;
    const double C139839 = (3 * C139805) / C143578 -
                           (C50675 * be + C139856 * C216044) / q - C218151 / q;
    const double C141209 = -(C141158 * C216043 + C218151) / q;
    const double C142711 = -(C142677 * C216041 + C218151) / q;
    const double C137414 = -(C137360 * C216043 + C218061) / q;
    const double C137929 = -(C137895 * C216041 + C218061) / q;
    const double C140606 = C139856 / C143578 -
                           (C53611 * be + C140623 * C216044) / q +
                           (3 * C140572) / C143578 - C218061 / q;
    const double C215216 = C144106 * p;
    const double C215217 = C44396 * p;
    const double C42724 =
        C216045 - (C42741 * be + C42745 * C216041) / q - (C42744 * p) / q;
    const double C44369 =
        C216081 - (C146961 * be + C44378 * C216041) / q - C216052;
    const double C42797 = C144090 / q - (C42755 * C216043) / q - C216054;
    const double C50431 =
        C215711 - (C50447 * be + C50450 * C216041) / q - C216054;
    const double C43398 = C215192 - (C43362 * C216043) / q + C215278 - C216084;
    const double C45317 =
        C215433 - (C45334 * be + C45337 * C216041) / q - C216084;
    const double C145049 =
        C216079 - (C158738 * be + C145254 * C216041) / q - C216265;
    const double C145313 =
        C216079 - (C145342 * C216043) / q + C145284 / q - C216278;
    const double C42787 = C144074 / q - (C42745 * C216043) / q - C216053;
    const double C43344 =
        C215277 - (C50438 * be + C43362 * C216041) / q - C216053;
    const double C46348 =
        C215510 - (C150106 * be + C46474 * C216041) / q - (C150110 * p) / q;
    const double C43992 = C215192 - (C43920 * C216044) / q - C216127;
    const double C47890 =
        C215596 - (C47907 * be + C47910 * C216041) / q - C216127;
    const double C145979 =
        C216118 - (C159386 * be + C146184 * C216041) / q - C216293;
    const double C155292 = C216118 - (C146332 * C216044) / q - C216338;
    const double C215350 = C146245 * p;
    const double C46349 =
        C215511 - (C98453 * be + C46475 * C216041) / q - (C47221 * p) / q;
    const double C44648 =
        C216120 - (C147421 * be + C44657 * C216041) / q - C215225 / q;
    const double C215295 = C44954 * p;
    const double C47158 = C46475 / C143578 -
                          (C151449 * be + C47221 * C216041) / q +
                          C47230 / C143578 - (C151453 * p) / q;
    const double C215392 = C147081 * p;
    const double C42870 = (2 * C42829) / q -
                          (C144320 * be + C42828 * C216041) / q -
                          (C144324 * p) / q;
    const double C42871 = (3 * C42839) / C143578 -
                          (C42825 * be + C42829 * C216041) / q -
                          (C42828 * p) / q;
    const double C42881 =
        C144353 / q - (C42836 * be + C42839 * C216041) / q - (C42829 * p) / q;
    const double C51662 = C156884 / C143578 -
                          (C51792 * be + C51795 * C216041) / q + C215729 -
                          (C43902 * p) / q;
    const double C215294 = C145489 * p;
    const double C147783 =
        C216155 - (C160314 * be + C147035 * C216041) / q - C216268;
    const double C43956 = C146229 / q - (C43920 * C216043) / q - C216123;
    const double C51238 =
        C215728 - (C53383 * be + C51255 * C216041) / q - C216123;
    const double C43470 =
        C50526 / q - (C50514 * be + C43434 * C216041) / q - (C44414 * p) / q;
    const double C44432 = (3 * C43434) / C143578 -
                          (C147062 * be + C44414 * C216041) / q -
                          (C147066 * p) / q;
    const double C50564 = C156200 / C143578 -
                          (C50523 * be + C50526 * C216041) / q -
                          (C43434 * p) / q;
    const double C215446 = C46969 * p;
    const double C46960 = (3 * C45377) / C143578 - (C46969 * C216043) / q +
                          (3 * C46951) / C143578 - C215490 / q;
    const double C215568 = C45971 / C143578;
    const double C45367 =
        C148556 / q - (C45387 * C216043) / q + C216170 - (C45971 * p) / q;
    const double C45952 = (2 * C45971) / q - (C45970 * C216043) / q +
                          (3 * C45934) / C143578 - (C149450 * p) / q;
    const double C45953 = (3 * C45387) / C143578 - (C45971 * C216043) / q +
                          (3 * C45935) / C143578 - (C45970 * p) / q;
    const double C45447 = -(C45384 * be + C45387 * C216041 + C215453) / q;
    const double C50469 =
        C215712 - (C50488 * C216043) / q + (3 * C50450) / C143578 - C215453 / q;
    const double C215610 = C48530 * p;
    const double C215526 = C150378 * p;
    const double C215492 = C47527 * p;
    const double C47518 = (3 * C46529) / C143578 - (C47527 * C216043) / q +
                          (3 * C47509) / C143578 - C215491 / q;
    const double C215616 = C47950 * p;
    const double C44990 =
        C51323 / q - (C147984 * be + C44972 * C216041) / q - (C147988 * p) / q;
    const double C45477 = -(C45377 * C216044 + C215454) / q;
    const double C46583 = -(C98504 * be + C46529 * C216041 + C215454) / q;
    const double C51272 = C51852 / C143578 - (C51289 * C216043) / q +
                          (3 * C51255) / C143578 - C215454 / q;
    const double C215569 = C151212 * p;
    const double C50583 = -(C50488 * C216044 + C215716) / q;
    const double C51833 =
        (3 * C51814) / C143578 - (C51852 * C216043) / q - C215716 / q;
    const double C53490 = -(C53430 * be + C53433 * C216041 + C215716) / q;
    const double C46601 = -(C98538 * be + C46565 * C216041 + C47266 * p) / q;
    const double C47284 = C46565 / C143578 -
                          (C151654 * be + C47266 * C216041) / q -
                          (C151658 * p) / q;
    const double C215608 = C49511 * p;
    const double C49143 = -(C138314 * be + C49107 * C216041 + C49808 * p) / q;
    const double C50105 = -(C155748 * be + C50087 * C216041 + C155752 * p) / q;
    const double C215615 = C47960 / C143578;
    const double C51357 = C53471 / C143578 -
                          (C53459 * be + C51323 * C216041) / q -
                          (C44972 * p) / q;
    const double C53509 = -(C53468 * be + C53471 * C216041 + C51323 * p) / q;
    const double C49052 =
        (3 * C49034) / C143578 - (C49070 * C216043) / q - C216253;
    const double C48598 = -(C93252 * be + C48564 * C216041 + C49529 * p) / q;
    const double C49547 = C48564 / C143578 -
                          (C154827 * be + C49529 * C216041) / q -
                          (C154831 * p) / q;
    const double C215693 = C49071 / C143578;
    const double C48060 =
        C152848 / q - (C47960 * C216044) / q - (C49071 * p) / q;
    const double C49160 =
        (2 * C49071) / q - (C49070 * C216044) / q - (C154190 * p) / q;
    const double C49161 =
        (3 * C47960) / C143578 - (C49071 * C216044) / q - (C49070 * p) / q;
    const double C215645 = C50069 * p;
    const double C50114 =
        (3 * C48530) / C143578 - (C50069 * C216044) / q - C216253;
    const double C46618 = C46529 / q - (C46528 * C216044) / q - C216205;
    const double C46600 = -(C150521 * be + C46564 * C216041 + C150525 * p) / q;
    const double C215679 = C154846 * p;
    const double C45487 = -(C45387 * C216044 + C215455) / q;
    const double C53414 =
        C215738 - (C53433 * C216043) / q + (3 * C53395) / C143578 - C215455 / q;
    const double C216082 = C215285 / q;
    const double C216130 = C215360 / q;
    const double C216206 = C215535 / q;
    const double C48050 = C215358 - (C47950 * C216044) / q - C215617 / q;
    const double C49125 = -(C138276 * be + C49071 * C216041 + C215617) / q;
    const double C42891 = -(C42786 * C216044 + C215228) / q;
    const double C216087 = C215292 / q;
    const double C216128 = C215357 / q;
    const double C216129 = C215359 / q;
    const double C216225 = C215533 / q;
    const double C46582 = -(C150491 * be + C46528 * C216041 + C215533) / q;
    const double C49124 = -(C154127 * be + C49070 * C216041 + C215663) / q;
    const double C49835 =
        (3 * C47950) / C143578 - (C49790 * C216044) / q - C215663 / q;
    const double C216663 = C91706 * p;
    const double C91697 = (3 * C90118) / C143578 -
                          (C151178 * be + C91706 * C216043) / q +
                          (3 * C91688) / C143578 - C216707 / q;
    const double C216785 = C90691 / C143578;
    const double C90109 = C172611 / q - (C45384 * be + C90127 * C216043) / q +
                          C217384 - (C90691 * p) / q;
    const double C90671 = (2 * C90691) / q -
                          (C149563 * be + C90690 * C216043) / q +
                          (3 * C90652) / C143578 - (C173495 * p) / q;
    const double C90672 = (3 * C90127) / C143578 -
                          (C90687 * be + C90691 * C216043) / q +
                          (3 * C90653) / C143578 - (C90690 * p) / q;
    const double C90181 = -(C90127 * C216041 + C216670) / q;
    const double C95149 = C216929 - (C50485 * be + C95166 * C216043) / q +
                          (3 * C95132) / C143578 - C216670 / q;
    const double C216709 = C92264 * p;
    const double C92255 = (3 * C91266) / C143578 -
                          (C152097 * be + C92264 * C216043) / q +
                          (3 * C92246) / C143578 - C216708 / q;
    const double C90208 = -(C90118 * C216044 + C216671) / q;
    const double C91320 = -(C91266 * C216041 + C216671) / q;
    const double C95916 = C96468 / C143578 -
                          (C53421 * be + C95933 * C216043) / q +
                          (3 * C95899) / C143578 - C216671 / q;
    const double C216786 = C175224 * p;
    const double C95251 = -(C95166 * C216044 + C216933) / q;
    const double C96451 = (3 * C96434) / C143578 -
                          (C51849 * be + C96468 * C216043) / q - C216933 / q;
    const double C98038 = -(C97987 * C216041 + C216933) / q;
    const double C216832 = C92669 / C143578;
    const double C93291 = -(C93255 * C216041 + C94235 * p) / q;
    const double C216910 = C93777 / C143578;
    const double C92759 =
        C176826 / q - (C92669 * C216044) / q - (C93777 * p) / q;
    const double C93866 =
        (2 * C93777) / q - (C93776 * C216044) / q - (C178153 * p) / q;
    const double C93867 =
        (3 * C92669) / C143578 - (C93777 * C216044) / q - (C93776 * p) / q;
    const double C90217 = -(C90127 * C216044 + C216672) / q;
    const double C97970 = C216955 - (C53430 * be + C97987 * C216043) / q +
                          (3 * C97953) / C143578 - C216672 / q;
    const double C217877 = C136226 * p;
    const double C136217 = (3 * C134669) / C143578 - (C136226 * C216043) / q +
                           (3 * C136208) / C143578 - C217921 / q;
    const double C217999 = C135228 / C143578;
    const double C134660 =
        C196379 / q - (C134678 * C216043) / q + C218598 - (C135228 * p) / q;
    const double C135209 = (2 * C135228) / q - (C135227 * C216043) / q +
                           (3 * C135191) / C143578 - (C197262 * p) / q;
    const double C135210 = (3 * C134678) / C143578 - (C135228 * C216043) / q +
                           (3 * C135192) / C143578 - (C135227 * p) / q;
    const double C134732 = -(C134678 * C216041 + C217884) / q;
    const double C139669 = C218143 - (C139686 * C216043) / q +
                           (3 * C139652) / C143578 - C217884 / q;
    const double C217923 = C136784 * p;
    const double C136775 = (3 * C135786) / C143578 - (C136784 * C216043) / q +
                           (3 * C136766) / C143578 - C217922 / q;
    const double C134759 = -(C45374 * be + C134669 * C216044 + C217885) / q;
    const double C135840 = -(C135786 * C216041 + C217885) / q;
    const double C140436 = C140988 / C143578 - (C140453 * C216043) / q +
                           (3 * C140419) / C143578 - C217885 / q;
    const double C218000 = C198989 * p;
    const double C139771 = -(C50485 * be + C139686 * C216044 + C218147) / q;
    const double C140971 =
        (3 * C140954) / C143578 - (C140988 * C216043) / q - C218147 / q;
    const double C142558 = -(C142507 * C216041 + C218147) / q;
    const double C218046 = C137189 / C143578;
    const double C137793 = -(C137759 * C216041 + C138755 * p) / q;
    const double C218124 = C138280 / C143578;
    const double C137279 =
        C200589 / q - (C47957 * be + C137189 * C216044) / q - (C138280 * p) / q;
    const double C138374 = (2 * C138280) / q -
                           (C154127 * be + C138279 * C216044) / q -
                           (C201915 * p) / q;
    const double C138375 = (3 * C137189) / C143578 -
                           (C138276 * be + C138280 * C216044) / q -
                           (C138279 * p) / q;
    const double C134768 = -(C45384 * be + C134678 * C216044 + C217886) / q;
    const double C142490 = C218169 - (C142507 * C216043) / q +
                           (3 * C142473) / C143578 - C217886 / q;
    const double C215387 = C42535 / C143578;
    const double C42513 = (2 * C42535) / q -
                          (C143561 * be + C42534 * C216041) / q +
                          (3 * C42555) / C143578 - (C143565 * p) / q;
    const double C42514 = (3 * C42545) / C143578 -
                          (C42531 * be + C42535 * C216041) / q +
                          (3 * C42556) / C143578 - (C42534 * p) / q;
    const double C42524 = C143595 / q - (C42542 * be + C42545 * C216041) / q +
                          C216042 - (C42535 * p) / q;
    const double C215427 = C45137 * p;
    const double C215253 = C144951 * p;
    const double C215207 = C44288 * p;
    const double C44279 = (3 * C43182) / C143578 -
                          (C146809 * be + C44288 * C216041) / q +
                          (3 * C44297) / C143578 - C215206 / q;
    const double C215590 = C47710 * p;
    const double C215326 = C145881 * p;
    const double C215210 = C44567 * p;
    const double C44558 = (3 * C43740) / C143578 -
                          (C147271 * be + C44567 * C216041) / q +
                          (3 * C44576) / C143578 - C215209 / q;
    const double C215388 = C146934 * p;
    const double C50393 = -(C50260 * C216044 + C215710) / q;
    const double C51738 = -(C51624 * C216043 + C215710) / q;
    const double C53186 = (3 * C53224) / C143578 -
                          (C53202 * be + C53205 * C216041) / q - C215710 / q;
    const double C45736 = (3 * C45772) / C143578 -
                          (C149086 * be + C45754 * C216041) / q - C216179;
    const double C215439 = C46861 * p;
    const double C46915 =
        (3 * C45137) / C143578 - (C46861 * C216043) / q - C216179;
    const double C43289 = C43182 / q - (C43181 * C216043) / q - C216074;
    const double C215505 = C150014 * p;
    const double C215440 = C47140 * p;
    const double C46852 = C215559 - (C150940 * be + C46861 * C216041) / q +
                          (3 * C46870) / C143578 - C216074;
    const double C45287 = -(C45147 * C216044 + C215441) / q;
    const double C53319 = C215732 - (C53205 * C216043) / q - C215441 / q;
    const double C216222 = C215566 / q;
    const double C46924 = -(C46861 * C216044 + C215566) / q;
    const double C43884 = -(C43830 * C216043 + C44891 * p) / q;
    const double C44918 =
        C43830 / C143578 - (C44891 * C216043) / q - (C147870 * p) / q;
    const double C215602 = C49403 * p;
    const double C48836 = (3 * C48872) / C143578 -
                          (C153648 * be + C48854 * C216041) / q - C216251;
    const double C215604 = C49682 * p;
    const double C49745 =
        (3 * C47710) / C143578 - (C49682 * C216044) / q - C216251;
    const double C43865 = C43740 / q - (C43739 * C216044) / q - C216113;
    const double C47840 = -(C47720 * C216043 + C215603) / q;
    const double C53338 = C215702 - (C53205 * C216044) / q - C215603 / q;
    const double C49673 = C215685 - (C155036 * be + C49682 * C216041) / q +
                          (3 * C49691) / C143578 - C216113;
    const double C43883 = -(C43829 * C216043 + C146154 * p) / q;
    const double C215675 = C154699 * p;
    const double C216075 = C215273 / q;
    const double C216114 = C215344 / q;
    const double C216198 = C215521 / q;
    const double C45881 = -(C45755 * C216044 + C215486) / q;
    const double C46421 = C215519 - (C46313 * C216043) / q - C215486 / q;
    const double C48445 = C215519 - (C48326 * C216044) / q - C215642 / q;
    const double C48963 = -(C48855 * C216043 + C215642) / q;
    const double C44900 = C43740 / C143578 - (C44846 * C216043) / q - C216152;
    const double C47131 = C46313 / C143578 -
                          (C151402 * be + C47140 * C216041) / q +
                          (3 * C47149) / C143578 - C216152;
    const double C216153 = C215342 / q;
    const double C43847 = -(C43739 * C216043 + C215342) / q;
    const double C216196 = C215518 / q;
    const double C216197 = C215520 / q;
    const double C48962 = -(C48854 * C216043 + C215659) / q;
    const double C50024 =
        (3 * C48326) / C143578 - (C49961 * C216044) / q - C215659 / q;
    const double C216604 = C87362 / C143578;
    const double C87342 = (2 * C87362) / q - (C87361 * C216041) / q +
                          (3 * C87380) / C143578 - (C167712 * p) / q;
    const double C87343 = (3 * C87371) / C143578 - (C87362 * C216041) / q +
                          (3 * C87381) / C143578 - (C87361 * p) / q;
    const double C87352 =
        C167741 / q - (C87371 * C216041) / q + C217258 - (C87362 * p) / q;
    const double C216424 = C89056 * p;
    const double C89047 = (3 * C87950) / C143578 - (C89056 * C216041) / q +
                          (3 * C89065) / C143578 - C216423 / q;
    const double C216427 = C89335 * p;
    const double C89326 = (3 * C88508) / C143578 - (C89335 * C216041) / q +
                          (3 * C89344) / C143578 - C216426 / q;
    const double C216605 = C171025 * p;
    const double C95081 = -(C94962 * C216044 + C216927) / q;
    const double C96366 = -(C51621 * be + C96264 * C216043 + C216927) / q;
    const double C97766 =
        (3 * C97800) / C143578 - (C97783 * C216041) / q - C216927 / q;
    const double C217818 = C131913 / C143578;
    const double C131893 = (2 * C131913) / q - (C131912 * C216041) / q +
                           (3 * C131931) / C143578 - (C191486 * p) / q;
    const double C131894 = (3 * C131922) / C143578 - (C131913 * C216041) / q +
                           (3 * C131932) / C143578 - (C131912 * p) / q;
    const double C131903 =
        C191515 / q - (C131922 * C216041) / q + C218472 - (C131913 * p) / q;
    const double C217638 = C133607 * p;
    const double C133598 = (3 * C132501) / C143578 - (C133607 * C216041) / q +
                           (3 * C133616) / C143578 - C217637 / q;
    const double C217641 = C133886 * p;
    const double C133877 = (3 * C133059) / C143578 - (C133886 * C216041) / q +
                           (3 * C133895) / C143578 - C217640 / q;
    const double C217819 = C194796 * p;
    const double C139601 = -(C50257 * be + C139482 * C216044 + C218141) / q;
    const double C140886 = -(C140784 * C216043 + C218141) / q;
    const double C142286 =
        (3 * C142320) / C143578 - (C142303 * C216041) / q - C218141 / q;
    const double C91796 = C173109 / q - (C91769 * C216044) / q - C217434;
    const double C92057 =
        C216634 - (C151684 * be + C92048 * C216043) / q - C217434;
    const double C93830 = -(C93776 * C216041 + C216880) / q;
    const double C92075 = C216652 - (C92048 * C216044) / q + C216799 - C217443;
    const double C94289 =
        C216816 - (C154858 * be + C94280 * C216043) / q - C217443;
    const double C90918 = -(C90880 * C216041 + C216718) / q;
    const double C216462 = C89254 * p;
    const double C93668 = -(C153648 * be + C93560 * C216043 + C216876) / q;
    const double C94730 =
        (3 * C93003) / C143578 - (C94667 * C216044) / q - C216876 / q;
    const double C88345 = C169667 / q - (C88291 * C216044) / q - C217311;
    const double C89794 =
        C216556 - (C148014 * be + C89785 * C216043) / q - C217311;
    const double C92039 = C216732 - (C92048 * C216041) / q - C217311;
    const double C217343 = C216576 / q;
    const double C217411 = C216737 / q;
    const double C88309 =
        C88292 / q - (C145515 * be + C88291 * C216043) / q - C217305;
    const double C91760 = C216699 - (C91769 * C216041) / q - C217305;
    const double C217315 = C216530 / q;
    const double C217410 = C216735 / q;
    const double C88273 = C90244 / q - (C88291 * C216041) / q - C217302;
    const double C89236 =
        C216418 - (C147093 * be + C89227 * C216043) / q - C217302;
    const double C217314 = C216528 / q;
    const double C217342 = C216574 / q;
    const double C87836 = -(C144675 * be + C87779 * C216043 + C216461) / q;
    const double C87684 = -(C87589 * C216044 + C216445) / q;
    const double C92192 = C216802 - (C92318 * C216041) / q - (C175929 * p) / q;
    const double C90881 = C173125 / q - (C90824 * C216044) / q - C217400;
    const double C91410 =
        C216758 - (C98623 * be + C91392 * C216043) / q - C217400;
    const double C217430 = C216768 / q;
    const double C216767 = C174785 * p;
    const double C175614 =
        C217441 - (C162267 * be + C175297 * C216043) / q - C217534;
    const double C90298 = C216536 - (C90244 * C216044) / q - C217391;
    const double C96069 =
        C216948 - (C53554 * be + C96052 * C216043) / q - C217391;
    const double C94505 =
        C216907 - (C155389 * be + C94568 * C216043) / q - C216909 / q;
    const double C94874 = -(C94847 * C216041 + C216909) / q;
    const double C216896 = C178794 * p;
    const double C93831 = -(C93777 * C216041 + C216834) / q;
    const double C94811 = -(C94793 * C216041 + C179674 * p) / q;
    const double C216833 = C92660 * p;
    const double C92750 = C216575 - (C92660 * C216044) / q - C216834 / q;
    const double C94541 =
        (3 * C92660) / C143578 - (C94496 * C216044) / q - C216880 / q;
    const double C98055 = -(C98021 * C216041 + C95967 * p) / q;
    const double C217439 = C216750 / q;
    const double C91319 = -(C91265 * C216041 + C216750) / q;
    const double C216765 = C174756 * p;
    const double C216788 = C175282 * p;
    const double C216683 = C90262 * p;
    const double C90899 = -(C90842 * C216041 + C216717) / q;
    const double C93758 = (3 * C93740) / C143578 -
                          (C154127 * be + C93776 * C216043) / q - C217467;
    const double C92336 =
        C217426 - (C152142 * be + C92327 * C216043) / q - C217399;
    const double C90307 = C172839 / q - (C90253 * C216044) / q - C217392;
    const double C98123 =
        C216956 - (C53563 * be + C98106 * C216043) / q - C217392;
    const double C91337 = -(C91301 * C216041 + C174552 * p) / q;
    const double C216862 = C94775 * p;
    const double C91355 = C91266 / q - (C91265 * C216044) / q - C217419;
    const double C91446 = C216653 - (C91392 * C216044) / q + C216754 - C217429;
    const double C93363 =
        C216817 - (C93342 * be + C93345 * C216043) / q - C217429;
    const double C174465 =
        C217424 - (C185454 * be + C174669 * C216043) / q - C217533;
    const double C174698 =
        C217424 - (C174727 * C216044) / q + C174640 / q - C217544;
    const double C217427 = C216762 / q;
    const double C216714 = C92354 * p;
    const double C90538 = C216698 - (C90804 * C216041) / q - (C173290 * p) / q;
    const double C216713 = C173787 * p;
    const double C217420 = C216752 / q;
    const double C90843 =
        C217389 - (C90820 * be + C90824 * C216043) / q - (C90823 * p) / q;
    const double C216827 = C93219 * p;
    const double C94820 =
        (3 * C93219) / C143578 - (C94775 * C216044) / q - C217467;
    const double C216743 = C174407 * p;
    const double C91778 =
        C217387 - (C151224 * be + C91769 * C216043) / q - C216710 / q;
    const double C216527 = C95302 / q;
    const double C91338 = -(C91302 * C216041 + C92003 * p) / q;
    const double C216825 = C94217 * p;
    const double C93849 = -(C93813 * C216041 + C94514 * p) / q;
    const double C216592 = C170758 * p;
    const double C216632 = C172008 * p;
    const double C171878 = C217374 - (C171243 * C216041) / q - C217488;
    const double C88346 = C216524 - (C88292 * C216044) / q - C217312;
    const double C96035 = C216947 - (C96052 * C216041) / q - C217312;
    const double C88922 =
        C96604 / q - (C88868 * C216041) / q - (C89515 * p) / q;
    const double C89542 =
        (3 * C88868) / C143578 - (C89515 * C216041) / q - (C171702 * p) / q;
    const double C96655 = C216957 - (C96604 * C216041) / q - (C88868 * p) / q;
    const double C216892 = C178649 * p;
    const double C93129 = C216736 - (C93003 * C216044) / q - C216859 / q;
    const double C93669 = -(C138048 * be + C93561 * C216043 + C216859) / q;
    const double C216620 = C171560 * p;
    const double C87780 = C168609 / q - (C87723 * C216044) / q - C217280;
    const double C88832 = C216579 - (C88850 * C216041) / q - C217280;
    const double C217354 = C216590 / q;
    const double C216611 = C171228 * p;
    const double C87798 =
        (2 * C87742) / q - (C87741 * C216041) / q - (C168770 * p) / q;
    const double C217313 = C216526 / q;
    const double C217367 = C216559 / q;
    const double C88615 = -(C145877 * be + C88507 * C216043 + C216559) / q;
    const double C93542 =
        (3 * C93578) / C143578 - (C93560 * C216041) / q - C217465;
    const double C89497 = C217350 - (C89506 * C216041) / q - C217279;
    const double C87789 = C168625 / q - (C87732 * C216044) / q - C217281;
    const double C96570 = C216956 - (C96587 * C216041) / q - C217281;
    const double C88651 = -(C170256 * be + C88597 * C216043 + C170261 * p) / q;
    const double C216821 = C94388 * p;
    const double C88633 = C88508 / q - (C88507 * C216044) / q - C217327;
    const double C94379 =
        C216902 - (C94388 * C216041) / q + (3 * C94397) / C143578 - C217327;
    const double C88904 = C216419 - (C88850 * C216044) / q + C216580 - C217353;
    const double C92768 = C216817 - (C92786 * C216041) / q - C217353;
    const double C170144 = C217348 - (C170554 * C216041) / q - C217486;
    const double C170642 =
        C217348 - (C170671 * C216044) / q + C170584 / q - C217517;
    const double C217351 = C216587 / q;
    const double C216511 = C169609 * p;
    const double C94253 =
        C93255 / C143578 - (C94235 * C216041) / q - (C178779 * p) / q;
    const double C171849 = C217369 - (C171126 * C216041) / q - C217482;
    const double C88724 =
        C170335 / q - (C51802 * be + C88688 * C216043) / q - C217337;
    const double C95882 = C216945 - (C95899 * C216041) / q - C217337;
    const double C88238 =
        C95200 / q - (C88202 * C216041) / q - (C89182 * p) / q;
    const double C89200 =
        (3 * C88202) / C143578 - (C89182 * C216041) / q - (C171155 * p) / q;
    const double C95234 =
        C180115 / C143578 - (C95200 * C216041) / q - (C88202 * p) / q;
    const double C217436 = C216783 / q;
    const double C90596 = -(C90463 * C216044 + C216703) / q;
    const double C91158 =
        C216736 - (C98300 * be + C91050 * C216043) / q - C216703 / q;
    const double C216609 = C171170 * p;
    const double C87665 =
        (2 * C87628) / q - (C87627 * C216041) / q - (C168462 * p) / q;
    const double C87590 =
        C168214 / q - (C42741 * be + C87552 * C216043) / q - C217267;
    const double C88112 = C216494 - (C88130 * C216041) / q - C217267;
    const double C217301 = C216509 / q;
    const double C93075 = C216857 - (C93327 * C216041) / q - (C94271 * p) / q;
    const double C94145 =
        C93327 / C143578 - (C94271 * C216041) / q + C216890 - (C178605 * p) / q;
    const double C89218 = C217309 - (C89227 * C216041) / q - C216452 / q;
    const double C216522 = C89812 * p;
    const double C87799 =
        (3 * C87751) / C143578 - (C87742 * C216041) / q - (C87741 * p) / q;
    const double C87808 =
        C168799 / q - (C87751 * C216041) / q - (C87742 * p) / q;
    const double C95030 =
        C179945 / C143578 - (C95268 * C216041) / q + C216924 - (C88274 * p) / q;
    const double C216819 = C94109 * p;
    const double C92561 = -(C47717 * be + C92453 * C216043 + C216820) / q;
    const double C97902 = C216919 - (C97783 * C216044) / q - C216820 / q;
    const double C216570 = C170409 * p;
    const double C91121 = C216731 - (C91373 * C216041) / q - (C174198 * p) / q;
    const double C169230 = C217307 - (C169638 * C216041) / q - C217480;
    const double C169493 =
        C217307 - (C161947 * be + C169698 * C216043) / q - C217493;
    const double C88310 =
        C216419 - (C50609 * be + C88292 * C216043) / q - C217306;
    const double C90226 = C216653 - (C90244 * C216041) / q - C217306;
    const double C216520 = C169727 * p;
    const double C91085 = C216727 - (C91211 * C216041) / q - (C174140 * p) / q;
    const double C88760 = C216413 - (C88688 * C216044) / q - C217341;
    const double C92606 = C216813 - (C92624 * C216041) / q - C217341;
    const double C170086 = C217332 - (C170290 * C216041) / q - C217507;
    const double C179227 = C217332 - (C170438 * C216044) / q - C217552;
    const double C216567 = C170351 * p;
    const double C217344 = C216577 / q;
    const double C216722 = C174048 * p;
    const double C217412 = C216738 / q;
    const double C91086 = C216728 - (C91212 * C216041) / q - (C91958 * p) / q;
    const double C91895 = C91212 / C143578 - (C91958 * C216041) / q +
                          C91967 / C143578 - (C175455 * p) / q;
    const double C89416 = C217334 - (C89425 * C216041) / q - C216442 / q;
    const double C216512 = C89722 * p;
    const double C87666 =
        (3 * C87637) / C143578 - (C87628 * C216041) / q - (C87627 * p) / q;
    const double C87675 =
        C168491 / q - (C87637 * C216041) / q - (C87628 * p) / q;
    const double C96298 =
        C180793 / C143578 - (C96417 * C216041) / q + C216946 - (C88670 * p) / q;
    const double C216657 = C91877 * p;
    const double C89668 =
        C88508 / C143578 - (C147730 * be + C89614 * C216043) / q - C217366;
    const double C91868 = C91050 / C143578 - (C91877 * C216041) / q +
                          (3 * C91886) / C143578 - C217366;
    const double C90037 = -(C89911 * C216044 + C216658) / q;
    const double C97885 =
        C216949 - (C53202 * be + C97783 * C216043) / q - C216658 / q;
    const double C90443 =
        (3 * C90481) / C143578 - (C90462 * C216041) / q - C217393;
    const double C89137 = C217295 - (C89146 * C216041) / q - C217266;
    const double C89758 =
        C95967 / q - (C89740 * C216041) / q - (C172051 * p) / q;
    const double C96001 =
        C98021 / C143578 - (C95967 * C216041) / q - (C89740 * p) / q;
    const double C87599 =
        C168230 / q - (C42752 * be + C87561 * C216043) / q - C217268;
    const double C95115 = C216928 - (C95132 * C216041) / q - C217268;
    const double C216656 = C91598 * p;
    const double C91661 = -(C91598 * C216044 + C216783) / q;
    const double C88057 =
        C87950 / q - (C144947 * be + C87949 * C216043) / q - C217288;
    const double C91589 =
        C216776 - (C91598 * C216041) / q + (3 * C91607) / C143578 - C217288;
    const double C88166 =
        C216413 - (C50438 * be + C88130 * C216043) / q + C216495 - C217298;
    const double C90064 = C216650 - (C90082 * C216041) / q - C217298;
    const double C169172 = C217293 - (C169376 * C216041) / q - C217479;
    const double C169435 = C217293 - (C161932 * be + C169464 * C216043) / q +
                           C169406 / q - C217492;
    const double C92021 =
        C91302 / C143578 - (C92003 * C216041) / q - (C175657 * p) / q;
    const double C217296 = C216502 / q;
    const double C87704 = C217272 - (C87723 * C216041) / q - (C87722 * p) / q;
    const double C88652 = -(C51707 * be + C88598 * C216043 + C89659 * p) / q;
    const double C89686 = C88598 / C143578 -
                          (C171931 * be + C89659 * C216043) / q -
                          (C171936 * p) / q;
    const double C216807 = C92444 * p;
    const double C94451 =
        (3 * C92444) / C143578 - (C94388 * C216044) / q - C217465;
    const double C216543 = C169992 * p;
    const double C216456 = C89533 * p;
    const double C216439 = C168332 * p;
    const double C216455 = C168684 * p;
    const double C217328 = C216561 / q;
    const double C87533 = C217259 - (C87552 * C216041) / q - (C87551 * p) / q;
    const double C216644 = C89902 * p;
    const double C91652 = (3 * C89902) / C143578 -
                          (C150940 * be + C91598 * C216043) / q - C217393;
    const double C216470 = C169078 * p;
    const double C216434 = C89164 * p;
    const double C216433 = C168246 * p;
    const double C217289 = C216490 / q;
    const double C136316 =
        C196877 / q - (C151224 * be + C136289 * C216044) / q - C218648;
    const double C136577 = C217848 - (C136568 * C216043) / q - C218648;
    const double C138336 = -(C138279 * C216041 + C218094) / q;
    const double C136595 =
        C217866 - (C151684 * be + C136568 * C216044) / q + C218013 - C218657;
    const double C138809 = C218030 - (C138800 * C216043) / q - C218657;
    const double C135443 = -(C135407 * C216041 + C217932) / q;
    const double C217676 = C133805 * p;
    const double C138165 = -(C138051 * C216043 + C218090) / q;
    const double C139250 = (3 * C137521) / C143578 -
                           (C155495 * be + C139187 * C216044) / q - C218090 / q;
    const double C132896 =
        C193439 / q - (C145515 * be + C132842 * C216044) / q - C218525;
    const double C134345 = C217770 - (C134336 * C216043) / q - C218525;
    const double C136559 = C217946 - (C136568 * C216041) / q - C218525;
    const double C218557 = C217790 / q;
    const double C218625 = C217951 / q;
    const double C132860 = C132843 / q - (C132842 * C216043) / q - C218519;
    const double C136280 = C217913 - (C136289 * C216041) / q - C218519;
    const double C218529 = C217744 / q;
    const double C218624 = C217949 / q;
    const double C132824 = C134795 / q - (C132842 * C216041) / q - C218516;
    const double C133787 = C217632 - (C133778 * C216043) / q - C218516;
    const double C218528 = C217742 / q;
    const double C218556 = C217788 / q;
    const double C132387 = -(C132330 * C216043 + C217675) / q;
    const double C132235 = -(C144275 * be + C132140 * C216044 + C217659) / q;
    const double C136712 =
        C218016 - (C136838 * C216041) / q - (C199693 * p) / q;
    const double C135408 =
        C196893 / q - (C90820 * be + C135354 * C216044) / q - C218614;
    const double C135930 = C217972 - (C135912 * C216043) / q - C218614;
    const double C218644 = C217982 / q;
    const double C217981 = C198551 * p;
    const double C199378 = C218655 - (C199062 * C216043) / q - C218748;
    const double C134849 =
        C217750 - (C45514 * be + C134795 * C216044) / q - C218605;
    const double C140589 = C218162 - (C140572 * C216043) / q - C218605;
    const double C139025 = C218121 - (C139088 * C216043) / q - C218123 / q;
    const double C139394 = -(C139367 * C216041 + C218123) / q;
    const double C218110 = C202555 * p;
    const double C138337 = -(C138280 * C216041 + C218048) / q;
    const double C139331 = -(C139313 * C216041 + C203433 * p) / q;
    const double C218047 = C137180 * p;
    const double C137270 =
        C217789 - (C47947 * be + C137180 * C216044) / q - C218048 / q;
    const double C139061 = (3 * C137180) / C143578 -
                           (C155273 * be + C139016 * C216044) / q - C218094 / q;
    const double C142575 = -(C142541 * C216041 + C140487 * p) / q;
    const double C218653 = C217964 / q;
    const double C135839 = -(C135785 * C216041 + C217964) / q;
    const double C217979 = C198522 * p;
    const double C218002 = C199047 * p;
    const double C217897 = C134813 * p;
    const double C135425 = -(C135371 * C216041 + C217931) / q;
    const double C138260 =
        (3 * C138241) / C143578 - (C138279 * C216043) / q - C218681;
    const double C136856 = C218640 - (C136847 * C216043) / q - C218613;
    const double C134858 =
        C196607 / q - (C45524 * be + C134804 * C216044) / q - C218606;
    const double C142643 = C218170 - (C142626 * C216043) / q - C218606;
    const double C135857 = -(C135821 * C216041 + C198318 * p) / q;
    const double C218076 = C139295 * p;
    const double C135875 =
        C135786 / q - (C150491 * be + C135785 * C216044) / q - C218633;
    const double C135966 =
        C217867 - (C98623 * be + C135912 * C216044) / q + C217968 - C218643;
    const double C137861 = C218031 - (C137844 * C216043) / q - C218643;
    const double C198231 = C218638 - (C198435 * C216043) / q - C218747;
    const double C198464 = C218638 - (C187433 * be + C198493 * C216044) / q +
                           C198406 / q - C218758;
    const double C218641 = C217976 / q;
    const double C217928 = C136874 * p;
    const double C135083 =
        C217912 - (C135335 * C216041) / q - (C197058 * p) / q;
    const double C217927 = C197554 * p;
    const double C218634 = C217966 / q;
    const double C135372 =
        C218603 - (C135354 * C216043) / q - (C135353 * p) / q;
    const double C218041 = C137725 * p;
    const double C139340 = (3 * C137725) / C143578 -
                           (C155733 * be + C139295 * C216044) / q - C218681;
    const double C217957 = C198173 * p;
    const double C136298 = C218601 - (C136289 * C216043) / q - C217924 / q;
    const double C217741 = C139822 / q;
    const double C135858 = -(C135822 * C216041 + C136523 * p) / q;
    const double C218039 = C138737 * p;
    const double C138356 = -(C138318 * C216041 + C139034 * p) / q;
    const double C217806 = C194529 * p;
    const double C217846 = C195776 * p;
    const double C195647 = C218588 - (C195013 * C216041) / q - C218702;
    const double C132897 =
        C217738 - (C50609 * be + C132843 * C216044) / q - C218526;
    const double C140555 = C218161 - (C140572 * C216041) / q - C218526;
    const double C133473 =
        C141124 / q - (C133419 * C216041) / q - (C134066 * p) / q;
    const double C134093 =
        (3 * C133419) / C143578 - (C134066 * C216041) / q - (C195471 * p) / q;
    const double C141175 =
        C218171 - (C141124 * C216041) / q - (C133419 * p) / q;
    const double C218106 = C202411 * p;
    const double C137640 =
        C217950 - (C93000 * be + C137521 * C216044) / q - C218073 / q;
    const double C138166 = -(C138052 * C216043 + C218073) / q;
    const double C217834 = C195329 * p;
    const double C132331 =
        C192382 / q - (C42930 * be + C132274 * C216044) / q - C218494;
    const double C133383 = C217793 - (C133401 * C216041) / q - C218494;
    const double C218568 = C217804 / q;
    const double C217825 = C194998 * p;
    const double C132349 =
        (2 * C132293) / q - (C132292 * C216041) / q - (C192543 * p) / q;
    const double C218527 = C217740 / q;
    const double C218581 = C217773 / q;
    const double C133166 = -(C133058 * C216043 + C217773) / q;
    const double C138032 =
        (3 * C138070) / C143578 - (C138051 * C216041) / q - C218679;
    const double C134048 = C218564 - (C134057 * C216041) / q - C218493;
    const double C132340 =
        C192398 / q - (C42941 * be + C132283 * C216044) / q - C218495;
    const double C141090 = C218170 - (C141107 * C216041) / q - C218495;
    const double C133202 = -(C133148 * C216043 + C194032 * p) / q;
    const double C218035 = C138908 * p;
    const double C133184 =
        C133059 / q - (C145877 * be + C133058 * C216044) / q - C218541;
    const double C138899 =
        C218116 - (C138908 * C216041) / q + (3 * C138917) / C143578 - C218541;
    const double C133455 =
        C217633 - (C51973 * be + C133401 * C216044) / q + C217794 - C218567;
    const double C137288 = C218031 - (C137306 * C216041) / q - C218567;
    const double C193916 = C218562 - (C194325 * C216041) / q - C218700;
    const double C194413 = C218562 - (C163405 * be + C194442 * C216044) / q +
                           C194355 / q - C218731;
    const double C218565 = C217801 / q;
    const double C217725 = C193381 * p;
    const double C138773 =
        C137759 / C143578 - (C138755 * C216041) / q - (C202540 * p) / q;
    const double C195618 = C218583 - (C194896 * C216041) / q - C218696;
    const double C133275 = C194106 / q - (C133239 * C216043) / q - C218551;
    const double C140402 = C218159 - (C140419 * C216041) / q - C218551;
    const double C132789 =
        C139720 / q - (C132753 * C216041) / q - (C133733 * p) / q;
    const double C133751 =
        (3 * C132753) / C143578 - (C133733 * C216041) / q - (C194925 * p) / q;
    const double C139754 =
        C203874 / C143578 - (C139720 * C216041) / q - (C132753 * p) / q;
    const double C218650 = C217997 / q;
    const double C135138 = -(C90459 * be + C135012 * C216044 + C217917) / q;
    const double C135678 = C217950 - (C135570 * C216043) / q - C217917 / q;
    const double C217823 = C194940 * p;
    const double C132216 =
        (2 * C132179) / q - (C132178 * C216041) / q - (C192235 * p) / q;
    const double C132141 = C191987 / q - (C132103 * C216043) / q - C218481;
    const double C132663 = C217708 - (C132681 * C216041) / q - C218481;
    const double C218515 = C217723 / q;
    const double C137589 =
        C218071 - (C137827 * C216041) / q - (C138791 * p) / q;
    const double C138665 = C137827 / C143578 - (C138791 * C216041) / q +
                           C218104 - (C202367 * p) / q;
    const double C133769 = C218523 - (C133778 * C216041) / q - C217666 / q;
    const double C217736 = C134363 * p;
    const double C132350 =
        (3 * C132302) / C143578 - (C132293 * C216041) / q - (C132292 * p) / q;
    const double C132359 =
        C192572 / q - (C132302 * C216041) / q - (C132293 * p) / q;
    const double C139550 = C203704 / C143578 - (C139788 * C216041) / q +
                           C218138 - (C132825 * p) / q;
    const double C218033 = C138629 * p;
    const double C137081 = -(C136973 * C216043 + C218034) / q;
    const double C142422 =
        C218133 - (C53202 * be + C142303 * C216044) / q - C218034 / q;
    const double C217784 = C194180 * p;
    const double C135641 =
        C217945 - (C135893 * C216041) / q - (C197965 * p) / q;
    const double C193003 = C218521 - (C193410 * C216041) / q - C218694;
    const double C193265 = C218521 - (C193470 * C216043) / q - C218707;
    const double C132861 = C217633 - (C132843 * C216043) / q - C218520;
    const double C134777 = C217867 - (C134795 * C216041) / q - C218520;
    const double C217734 = C193499 * p;
    const double C135605 =
        C217941 - (C135731 * C216041) / q - (C197907 * p) / q;
    const double C133311 =
        C217627 - (C51802 * be + C133239 * C216044) / q - C218555;
    const double C137126 = C218027 - (C137144 * C216041) / q - C218555;
    const double C193858 = C218546 - (C194061 * C216041) / q - C218721;
    const double C202987 =
        C218546 - (C163390 * be + C194209 * C216044) / q - C218766;
    const double C217781 = C194122 * p;
    const double C218558 = C217791 / q;
    const double C217936 = C197815 * p;
    const double C218626 = C217952 / q;
    const double C135606 =
        C217942 - (C135732 * C216041) / q - (C136478 * p) / q;
    const double C136415 = C135732 / C143578 - (C136478 * C216041) / q +
                           C136487 / C143578 - (C199220 * p) / q;
    const double C133967 = C218548 - (C133976 * C216041) / q - C217656 / q;
    const double C217726 = C134273 * p;
    const double C132217 =
        (3 * C132188) / C143578 - (C132179 * C216041) / q - (C132178 * p) / q;
    const double C132226 =
        C192264 / q - (C132188 * C216041) / q - (C132179 * p) / q;
    const double C140818 = C204552 / C143578 - (C140937 * C216041) / q +
                           C218160 - (C133221 * p) / q;
    const double C217871 = C136397 * p;
    const double C134219 =
        C133059 / C143578 - (C134165 * C216043) / q - C218580;
    const double C136388 = C135570 / C143578 - (C136397 * C216041) / q +
                           (3 * C136406) / C143578 - C218580;
    const double C134588 = -(C45144 * be + C134462 * C216044 + C217872) / q;
    const double C142405 = C218163 - (C142303 * C216043) / q - C217872 / q;
    const double C134993 =
        (3 * C135029) / C143578 - (C135011 * C216041) / q - C218607;
    const double C133688 = C218509 - (C133697 * C216041) / q - C218480;
    const double C134309 =
        C140487 / q - (C134291 * C216041) / q - (C195819 * p) / q;
    const double C140521 =
        C142541 / C143578 - (C140487 * C216041) / q - (C134291 * p) / q;
    const double C132150 = C192003 / q - (C132112 * C216043) / q - C218482;
    const double C139635 = C218142 - (C139652 * C216041) / q - C218482;
    const double C217870 = C136118 * p;
    const double C136181 = -(C150940 * be + C136118 * C216044 + C217997) / q;
    const double C132608 = C132501 / q - (C132500 * C216043) / q - C218502;
    const double C136109 =
        C217990 - (C136118 * C216041) / q + (3 * C136127) / C143578 - C218502;
    const double C132717 =
        C217627 - (C132681 * C216043) / q + C217709 - C218512;
    const double C134615 = C217864 - (C134633 * C216041) / q - C218512;
    const double C192945 = C218507 - (C193148 * C216041) / q - C218693;
    const double C193207 =
        C218507 - (C193236 * C216043) / q + C193178 / q - C218706;
    const double C136541 =
        C135822 / C143578 - (C136523 * C216041) / q - (C199421 * p) / q;
    const double C218510 = C217716 / q;
    const double C132255 =
        C218486 - (C132274 * C216041) / q - (C132273 * p) / q;
    const double C133203 = -(C133149 * C216043 + C134210 * p) / q;
    const double C134237 =
        C133149 / C143578 - (C134210 * C216043) / q - (C195704 * p) / q;
    const double C218021 = C136964 * p;
    const double C138971 = (3 * C136964) / C143578 -
                           (C155036 * be + C138908 * C216044) / q - C218679;
    const double C217757 = C193764 * p;
    const double C217670 = C134084 * p;
    const double C217653 = C192105 * p;
    const double C217669 = C192457 * p;
    const double C218542 = C217775 / q;
    const double C132084 =
        C218473 - (C132103 * C216041) / q - (C132102 * p) / q;
    const double C217858 = C134453 * p;
    const double C136172 =
        (3 * C134453) / C143578 - (C136118 * C216043) / q - C218607;
    const double C217684 = C192851 * p;
    const double C217648 = C133715 * p;
    const double C217647 = C192019 * p;
    const double C218503 = C217704 / q;
    const double C216055 = C215222 / q;
    const double C216062 = C215238 / q;
    const double C216063 = C215239 / q;
    const double C42618 = (2 * C42913) / q -
                          (C143793 * be + C42912 * C216041) / q + C215198 -
                          (C143797 * p) / q;
    const double C42619 = (3 * C42923) / C143578 -
                          (C42909 * be + C42913 * C216041) / q + C215199 -
                          (C42912 * p) / q;
    const double C42629 = C143826 / q - (C42920 * be + C42923 * C216041) / q +
                          C215200 - (C42913 * p) / q;
    const double C215288 = C145371 * p;
    const double C215224 = C43542 * p;
    const double C45227 =
        C215436 - (C45504 * be + C45507 * C216041) / q - (C45497 * p) / q;
    const double C216094 = C215303 / q;
    const double C43254 = C50602 / q - (C50590 * be + C43506 * C216041) / q +
                          C215268 - (C44450 * p) / q;
    const double C44324 = (3 * C43506) / C143578 -
                          (C146886 * be + C44450 * C216041) / q + C215385 -
                          (C146890 * p) / q;
    const double C215314 = C43007 / C143578;
    const double C215240 = C44136 * p;
    const double C47790 = C48080 / C143578 -
                          (C48067 * be + C48070 * C216041) / q + C215599 -
                          (C44063 * p) / q;
    const double C47800 =
        C215600 - (C48077 * be + C48080 * C216041) / q - (C48070 * p) / q;
    const double C43811 = C48070 / q - (C146034 * be + C44063 * C216041) / q +
                          C215338 - (C146038 * p) / q;
    const double C215368 = C146539 * p;
    const double C216124 = C215353 / q;
    const double C216148 = C215403 / q;
    const double C215397 = C42997 / C143578;
    const double C43038 = (2 * C42997) / q -
                          (C144675 * be + C42996 * C216041) / q -
                          (C144679 * p) / q;
    const double C43039 = (3 * C43007) / C143578 -
                          (C42993 * be + C42997 * C216041) / q -
                          (C42996 * p) / q;
    const double C43049 =
        C144708 / q - (C43004 * be + C43007 * C216041) / q - (C42997 * p) / q;
    const double C43812 = C51966 / q - (C51954 * be + C44064 * C216041) / q +
                          C215339 - (C44729 * p) / q;
    const double C44603 = (3 * C44064) / C143578 -
                          (C147348 * be + C44729 * C216041) / q + C215401 -
                          (C147352 * p) / q;
    const double C51700 = C156913 / C143578 -
                          (C51963 * be + C51966 * C216041) / q + C215731 -
                          (C44064 * p) / q;
    const double C216161 = C215375 / q;
    const double C44189 = -(C44135 * C216043 + C215375) / q;
    const double C216158 = C215415 / q;
    const double C215246 = C43578 * p;
    const double C44504 = (3 * C43578) / C143578 -
                          (C147182 * be + C44486 * C216041) / q - C215244 / q;
    const double C44882 = C51391 / q - (C147809 * be + C45008 * C216041) / q +
                          C215410 - (C147813 * p) / q;
    const double C51153 = C53547 / C143578 -
                          (C53535 * be + C51391 * C216041) / q + C215727 -
                          (C45008 * p) / q;
    const double C53281 =
        C215730 - (C53544 * be + C53547 * C216041) / q - (C51391 * p) / q;
    const double C216143 = C215394 / q;
    const double C44792 = -(C44765 * C216043 + C215394) / q;
    const double C215449 = C47041 * p;
    const double C46978 =
        (3 * C45537) / C143578 - (C47041 * C216043) / q + C215564 - C215500 / q;
    const double C45407 =
        C148614 / q - (C45547 * C216043) / q + C215436 - (C46115 * p) / q;
    const double C45988 =
        (2 * C46115) / q - (C46114 * C216043) / q + C215481 - (C149508 * p) / q;
    const double C45989 = (3 * C45547) / C143578 - (C46115 * C216043) / q +
                          C215482 - (C46114 * p) / q;
    const double C216183 = C215496 / q;
    const double C216184 = C215497 / q;
    const double C215467 = C45587 / C143578;
    const double C215463 = C46709 * p;
    const double C47980 = C215600 - (C48120 * C216043) / q - (C48666 * p) / q;
    const double C48547 =
        C215627 - (C48666 * C216043) / q + C215640 - (C46672 * p) / q;
    const double C46546 =
        C48666 / q - (C46672 * C216043) / q + C215514 - (C150436 * p) / q;
    const double C215543 = C150672 * p;
    const double C216228 = C215550 / q;
    const double C46744 = -(C150757 * be + C46708 * C216041 + C215550) / q;
    const double C215580 = C151613 * p;
    const double C215468 = C45577 * p;
    const double C215737 = C51425 * p;
    const double C215420 = C51425 / q;
    const double C215573 = C46151 / C143578;
    const double C45647 =
        C148955 / q - (C45587 * C216043) / q - (C46151 * p) / q;
    const double C46204 =
        (2 * C46151) / q - (C46150 * C216043) / q - (C149863 * p) / q;
    const double C46205 =
        (3 * C45587) / C143578 - (C46151 * C216043) / q - (C46150 * p) / q;
    const double C46547 =
        C53585 / q - (C46673 * C216043) / q + C215515 - (C47599 * p) / q;
    const double C47536 = (3 * C46673) / C143578 - (C47599 * C216043) / q +
                          C215585 - (C152071 * p) / q;
    const double C53452 =
        C215740 - (C53585 * C216043) / q + C215730 - (C46673 * p) / q;
    const double C46726 = -(C150727 * be + C46672 * C216041 + C215548) / q;
    const double C216219 = C215571 / q;
    const double C47635 = -(C152228 * be + C47617 * C216041 + C215571) / q;
    const double C45607 = -(C45544 * be + C45547 * C216041 + C215466) / q;
    const double C50507 =
        C144663 / C143578 - (C50640 * C216043) / q + C215707 - C215466 / q;
    const double C48130 =
        C215374 - (C48150 * C216044) / q + C216242 - C215624 / q;
    const double C49287 = -(C138466 * be + C49251 * C216041 + C215624) / q;
    const double C48683 =
        C215552 - (C48700 * C216044) / q + C216250 - C215648 / q;
    const double C49305 = -(C49251 * C216043 + C215648) / q;
    const double C49592 =
        C215421 - (C49601 * C216044) / q + C216261 - C215682 / q;
    const double C49907 = -(C49880 * C216043 + C215682) / q;
    const double C50177 = -(C155864 * be + C50159 * C216041 + C215682) / q;
    const double C43253 = C45497 / q - (C145104 * be + C43505 * C216041) / q +
                          C215267 - (C145108 * p) / q;
    const double C45217 = C45507 / C143578 -
                          (C45494 * be + C45497 * C216041) / q + C215435 -
                          (C43505 * p) / q;
    const double C215223 = C44468 * p;
    const double C215289 = C43541 * p;
    const double C45827 =
        C215482 - (C90801 * be + C46079 * C216041) / q - (C47023 * p) / q;
    const double C46897 = C46079 / C143578 -
                          (C151017 * be + C47023 * C216041) / q + C215564 -
                          (C151021 * p) / q;
    const double C215315 = C43577 * p;
    const double C215354 = C45026 * p;
    const double C46385 =
        C215515 - (C98606 * be + C46637 * C216041) / q - (C47302 * p) / q;
    const double C47176 = C46637 / C143578 -
                          (C151479 * be + C47302 * C216041) / q + C215577 -
                          (C151483 * p) / q;
    const double C216096 = C215305 / q;
    const double C44190 = -(C44136 * C216043 + C215305) / q;
    const double C48190 =
        C215628 - (C48147 * be + C48150 * C216041) / q - C216137;
    const double C43060 = -(C42997 * C216043 + C215245) / q;
    const double C43614 =
        C215312 - (C50666 * be + C43578 * C216041) / q - C215245 / q;
    const double C215461 = C47338 * p;
    const double C215613 = C49583 * p;
    const double C49520 =
        C48110 / C143578 - (C49583 * C216043) / q + C215673 - C215548 / q;
    const double C48751 = C215628 - (C48700 * C216043) / q - C216213;
    const double C215469 = C47059 * p;
    const double C47086 =
        (3 * C45577) / C143578 - (C47059 * C216043) / q - C215501 / q;
    const double C215549 = C47320 * p;
    const double C43595 =
        C45537 / q - (C145663 * be + C43541 * C216041) / q - C216099;
    const double C44405 =
        C42955 / C143578 - (C44468 * C216043) / q + C215385 - C216099;
    const double C43613 =
        C45577 / q - (C145693 * be + C43577 * C216041) / q - C216100;
    const double C43631 = C43578 / q - (C43577 * C216043) / q - C216101;
    const double C44171 =
        C48150 / q - (C146624 * be + C44135 * C216041) / q - C216140;
    const double C46762 = C48700 / q - (C46708 * C216043) / q - C216216;
    const double C92822 =
        C216591 - (C92840 * C216044) / q + C217456 - C216841 / q;
    const double C93993 = -(C93957 * C216041 + C216841) / q;
    const double C93381 =
        C216769 - (C93399 * C216044) / q + C217464 - C216865 / q;
    const double C94011 = -(C138466 * be + C93957 * C216043 + C216865) / q;
    const double C94298 =
        C216638 - (C94307 * C216044) / q + C217475 - C216899 / q;
    const double C94613 = -(C155405 * be + C94586 * C216043 + C216899) / q;
    const double C94883 = -(C94865 * C216041 + C216899) / q;
    const double C137342 =
        C217805 - (C48147 * be + C137360 * C216044) / q + C218670 - C218055 / q;
    const double C138508 = -(C138470 * C216041 + C218055) / q;
    const double C137878 =
        C217983 - (C93396 * be + C137895 * C216044) / q + C218678 - C218079 / q;
    const double C138527 = -(C138470 * C216043 + C218079) / q;
    const double C138818 = C217852 - (C154947 * be + C138827 * C216044) / q +
                           C218689 - C218113 / q;
    const double C139133 = -(C139106 * C216043 + C218113) / q;
    const double C139403 = -(C139385 * C216041 + C218113) / q;
    const double C216049 = C215216 / q;
    const double C216050 = C215217 / q;
    const double C42576 = (2 * C42724) / q -
                          (C143705 * be + C42723 * C216041) / q + C215190 -
                          (C143709 * p) / q;
    const double C42577 = (3 * C42734) / C143578 -
                          (C42720 * be + C42724 * C216041) / q + C215191 -
                          (C42723 * p) / q;
    const double C42587 = C143738 / q - (C42731 * be + C42734 * C216041) / q +
                          C215192 - (C42724 * p) / q;
    const double C215283 = C42797 / C143578;
    const double C215218 = C43398 * p;
    const double C45177 = C45327 / C143578 -
                          (C45314 * be + C45317 * C216041) / q + C215432 -
                          (C43343 * p) / q;
    const double C45187 =
        C215433 - (C45324 * be + C45327 * C216041) / q - (C45317 * p) / q;
    const double C43217 = C45317 / q - (C145045 * be + C43343 * C216041) / q +
                          C215262 - (C145049 * p) / q;
    const double C215282 = C145313 * p;
    const double C215389 = C42787 / C143578;
    const double C42849 = (2 * C42787) / q -
                          (C144275 * be + C42786 * C216041) / q -
                          (C144279 * p) / q;
    const double C42850 = (3 * C42797) / C143578 -
                          (C42783 * be + C42787 * C216041) / q -
                          (C42786 * p) / q;
    const double C42860 =
        C144308 / q - (C42794 * be + C42797 * C216041) / q - (C42787 * p) / q;
    const double C42892 = -(C42787 * C216044 + C215229) / q;
    const double C43218 = C50431 / q - (C50419 * be + C43344 * C216041) / q +
                          C215263 - (C44369 * p) / q;
    const double C44306 = (3 * C43344) / C143578 -
                          (C146856 * be + C44369 * C216041) / q + C215383 -
                          (C146860 * p) / q;
    const double C50298 = C156001 / C143578 -
                          (C50428 * be + C50431 * C216041) / q + C215705 -
                          (C43344 * p) / q;
    const double C44028 =
        C51890 / q - (C51878 * be + C43992 * C216041) / q - (C44693 * p) / q;
    const double C44711 = (3 * C43992) / C143578 -
                          (C147523 * be + C44693 * C216041) / q -
                          (C147527 * p) / q;
    const double C51928 = C157082 / C143578 -
                          (C51887 * be + C51890 * C216041) / q -
                          (C43992 * p) / q;
    const double C47750 = C47900 / C143578 -
                          (C47887 * be + C47890 * C216041) / q + C215595 -
                          (C43901 * p) / q;
    const double C47760 =
        C215596 - (C47897 * be + C47900 * C216041) / q - (C47890 * p) / q;
    const double C43775 = C47890 / q - (C145975 * be + C43901 * C216041) / q +
                          C215335 - (C145979 * p) / q;
    const double C49826 = C49107 / C143578 -
                          (C155288 * be + C49808 * C216041) / q -
                          (C155292 * p) / q;
    const double C216119 = C215350 / q;
    const double C43776 = C51795 / q - (C51783 * be + C43902 * C216041) / q +
                          C215336 - (C44648 * p) / q;
    const double C44585 = (3 * C43902) / C143578 -
                          (C147318 * be + C44648 * C216041) / q + C215400 -
                          (C147322 * p) / q;
    const double C216121 = C215295 / q;
    const double C43488 = -(C43398 * C216044 + C215295) / q;
    const double C216146 = C215392 / q;
    const double C44441 = -(C44396 * C216044 + C215392) / q;
    const double C216156 = C215294 / q;
    const double C43487 = -(C43397 * C216044 + C215294) / q;
    const double C215230 = C43956 * p;
    const double C44010 =
        C215358 - (C51840 * be + C43956 * C216041) / q - C215229 / q;
    const double C44702 = (3 * C43956) / C143578 -
                          (C147508 * be + C44675 * C216041) / q - C215228 / q;
    const double C44864 = C51238 / q - (C147779 * be + C44927 * C216041) / q +
                          C44936 / C143578 - (C147783 * p) / q;
    const double C51119 = C53376 / C143578 -
                          (C53364 * be + C51238 * C216041) / q +
                          C51255 / C143578 - (C44927 * p) / q;
    const double C53243 =
        C215728 - (C53373 * be + C53376 * C216041) / q - (C51238 * p) / q;
    const double C45357 =
        C215293 - (C45377 * C216043) / q + C216169 - C215446 / q;
    const double C46025 = -(C90687 * be + C45971 * C216041 + C215446) / q;
    const double C216239 = C215610 / q;
    const double C216200 = C215526 / q;
    const double C46061 = -(C45971 * C216044 + C215492) / q;
    const double C46511 =
        C215527 - (C46529 * C216043) / q + C216201 - C215492 / q;
    const double C48020 = -(C47957 * be + C47960 * C216041 + C215616) / q;
    const double C51947 = C215712 - (C51852 * C216044) / q - C215616 / q;
    const double C47014 = -(C46969 * C216044 + C215569) / q;
    const double C47239 =
        C215416 - (C47248 * C216043) / q + C216223 - C215569 / q;
    const double C47554 = -(C152097 * be + C47527 * C216041 + C215569) / q;
    const double C216237 = C215608 / q;
    const double C48581 = -(C93216 * be + C48530 * C216041 + C215608) / q;
    const double C50060 =
        C215693 - (C50069 * C216043) / q + (3 * C50051) / C143578 - C216205;
    const double C216249 = C215645 / q;
    const double C216260 = C215679 / q;
    const double C50096 = -(C155733 * be + C50069 * C216041 + C215679) / q;
    const double C45437 =
        C215452 - (C45374 * be + C45377 * C216041) / q - C216082;
    const double C48010 =
        C215615 - (C47947 * be + C47950 * C216041) / q - C216130;
    const double C46619 = C215452 - (C46529 * C216044) / q - C216206;
    const double C48513 = C215615 - (C48530 * C216043) / q + C216247 - C216206;
    const double C43451 =
        C45377 / q - (C145426 * be + C43397 * C216041) / q - C216087;
    const double C44009 =
        C47950 / q - (C146358 * be + C43955 * C216041) / q - C216128;
    const double C44045 = C43956 / q - (C43955 * C216044) / q - C216129;
    const double C49817 =
        C215693 - (C155273 * be + C49790 * C216041) / q - C216129;
    const double C47293 = C45377 / C143578 - (C47248 * C216044) / q - C216225;
    const double C49502 =
        C47950 / C143578 - (C49511 * C216043) / q + C216258 - C216225;
    const double C90100 =
        C216510 - (C45374 * be + C90118 * C216043) / q + C217383 - C216663 / q;
    const double C90748 = -(C90691 * C216041 + C216663) / q;
    const double C90786 = -(C90691 * C216044 + C216709) / q;
    const double C91248 =
        C216744 - (C98504 * be + C91266 * C216043) / q + C217415 - C216709 / q;
    const double C91751 = -(C91706 * C216044 + C216786) / q;
    const double C91976 =
        C216633 - (C151639 * be + C91985 * C216043) / q + C217437 - C216786 / q;
    const double C92291 = -(C92264 * C216041 + C216786) / q;
    const double C94766 = C216910 - (C155733 * be + C94775 * C216043) / q +
                          (3 * C94757) / C143578 - C217419;
    const double C134651 =
        C217724 - (C134669 * C216043) / q + C218597 - C217877 / q;
    const double C135282 = -(C135228 * C216041 + C217877) / q;
    const double C135318 = -(C90687 * be + C135228 * C216044 + C217923) / q;
    const double C135768 =
        C217958 - (C135786 * C216043) / q + C218629 - C217923 / q;
    const double C136271 = -(C151178 * be + C136226 * C216044 + C218000) / q;
    const double C136496 =
        C217847 - (C136505 * C216043) / q + C218651 - C218000 / q;
    const double C136811 = -(C136784 * C216041 + C218000) / q;
    const double C139286 =
        C218124 - (C139295 * C216043) / q + (3 * C139277) / C143578 - C218633;
    const double C216165 = C215427 / q;
    const double C216069 = C215253 / q;
    const double C42661 = -(C42535 * C216043 + C215207) / q;
    const double C43164 =
        C215254 - (C50248 * be + C43182 * C216041) / q + C216070 - C215207 / q;
    const double C216232 = C215590 / q;
    const double C216108 = C215326 / q;
    const double C42682 = -(C42535 * C216044 + C215210) / q;
    const double C43722 =
        C215327 - (C51612 * be + C43740 * C216041) / q + C216109 - C215210 / q;
    const double C44351 = -(C44288 * C216044 + C215388) / q;
    const double C44621 = -(C44567 * C216043 + C215388) / q;
    const double C44837 =
        C215405 - (C147730 * be + C44846 * C216041) / q + C216149 - C215388 / q;
    const double C216168 = C215439 / q;
    const double C216188 = C215505 / q;
    const double C216190 = C215440 / q;
    const double C45277 = -(C45137 * C216044 + C215440) / q;
    const double C47194 = C215405 - (C47140 * C216043) / q - C216222;
    const double C47410 = (3 * C47428) / C143578 -
                          (C151859 * be + C47419 * C216041) / q - C216222;
    const double C216245 = C215602 / q;
    const double C47830 = -(C47710 * C216043 + C215602) / q;
    const double C216235 = C215604 / q;
    const double C216257 = C215675 / q;
    const double C49736 = -(C49682 * C216043 + C215675) / q;
    const double C43290 = C215272 - (C43182 * C216043) / q - C216075;
    const double C45117 =
        C215424 - (C45134 * be + C45137 * C216041) / q + C216163 - C216075;
    const double C43866 = C215272 - (C43740 * C216044) / q - C216114;
    const double C47690 =
        C215587 - (C47707 * be + C47710 * C216041) / q + C216230 - C216114;
    const double C46439 = C215424 - (C46313 * C216044) / q - C216198;
    const double C48428 = C215587 - (C48326 * C216043) / q - C216198;
    const double C44909 = C43182 / C143578 - (C44846 * C216044) / q - C216153;
    const double C49394 = C48326 / C143578 -
                          (C154574 * be + C49403 * C216041) / q + C216255 -
                          C216153;
    const double C46420 = C48326 / q - (C46312 * C216043) / q - C216196;
    const double C47482 = C215559 - (C47419 * C216044) / q - C216196;
    const double C46438 = C46313 / q - (C46312 * C216044) / q - C216197;
    const double C50015 = C215685 - (C49961 * C216043) / q - C216197;
    const double C87476 = -(C42531 * be + C87362 * C216043 + C216424) / q;
    const double C87932 =
        C216471 - (C87950 * C216041) / q + C217284 - C216424 / q;
    const double C87495 = -(C87362 * C216044 + C216427) / q;
    const double C88490 =
        C216544 - (C88508 * C216041) / q + C217323 - C216427 / q;
    const double C89119 = -(C89056 * C216044 + C216605) / q;
    const double C89389 = -(C147271 * be + C89335 * C216043 + C216605) / q;
    const double C89605 =
        C216622 - (C89614 * C216041) / q + C217363 - C216605 / q;
    const double C132027 = -(C131913 * C216043 + C217638) / q;
    const double C132483 =
        C217685 - (C132501 * C216041) / q + C218498 - C217638 / q;
    const double C132046 = -(C42531 * be + C131913 * C216044 + C217641) / q;
    const double C133041 =
        C217758 - (C133059 * C216041) / q + C218537 - C217641 / q;
    const double C133670 = -(C146809 * be + C133607 * C216044 + C217819) / q;
    const double C133940 = -(C133886 * C216043 + C217819) / q;
    const double C134156 =
        C217836 - (C134165 * C216041) / q + C218577 - C217819 / q;
    const double C216686 = C91796 * p;
    const double C216766 = C92057 * p;
    const double C216678 = C92075 * p;
    const double C216830 = C94289 * p;
    const double C216532 = C88345 * p;
    const double C216571 = C89794 * p;
    const double C91122 = C216732 - (C91374 * C216041) / q - (C92039 * p) / q;
    const double C91913 =
        C91374 / C143578 - (C92039 * C216041) / q + C216794 - (C175484 * p) / q;
    const double C94523 = C216910 - (C94496 * C216041) / q - C217343;
    const double C91175 = C91050 / q - (C91049 * C216044) / q - C217411;
    const double C94721 =
        C216902 - (C155495 * be + C94667 * C216043) / q - C217411;
    const double C216506 = C88309 * p;
    const double C90539 = C216699 - (C90805 * C216041) / q - (C91760 * p) / q;
    const double C91634 =
        C90805 / C143578 - (C91760 * C216041) / q + C216781 - (C175035 * p) / q;
    const double C91157 =
        C93003 / q - (C150010 * be + C91049 * C216043) / q - C217410;
    const double C92219 = C216776 - (C92156 * C216044) / q - C217410;
    const double C216440 = C89236 * p;
    const double C88777 = C92660 / q - (C88723 * C216041) / q - C217342;
    const double C216790 = C90881 / C143578;
    const double C90937 = (2 * C90881) / q -
                          (C149830 * be + C90880 * C216043) / q -
                          (C173903 * p) / q;
    const double C91499 =
        C93399 / q - (C150757 * be + C91445 * C216043) / q - C217430;
    const double C217442 = C216767 / q;
    const double C91481 = -(C91445 * C216041 + C216767) / q;
    const double C216797 = C175614 * p;
    const double C216685 = C90298 * p;
    const double C88381 = C90298 / q - (C88345 * C216041) / q - C217314;
    const double C91823 = (3 * C90298) / C143578 -
                          (C151313 * be + C91796 * C216043) / q - C216718 / q;
    const double C216954 = C96069 * p;
    const double C216637 = C96069 / q;
    const double C217474 = C216896 / q;
    const double C94802 = -(C94775 * C216041 + C216896) / q;
    const double C92723 = -(C92669 * C216041 + C216833) / q;
    const double C96553 = C216929 - (C96468 * C216044) / q - C216833 / q;
    const double C92030 = C90118 / C143578 - (C91985 * C216044) / q - C217439;
    const double C94208 = C92660 / C143578 -
                          (C154812 * be + C94217 * C216043) / q + C217472 -
                          C217439;
    const double C91463 = -(C91409 * C216041 + C216765) / q;
    const double C94226 = C92804 / C143578 -
                          (C154932 * be + C94289 * C216043) / q + C216890 -
                          C216765 / q;
    const double C217433 = C216788 / q;
    const double C92372 = -(C92354 * C216041 + C216788) / q;
    const double C90325 = -(C90271 * C216041 + C216683) / q;
    const double C95183 = C168799 / C143578 -
                          (C50637 * be + C95302 * C216043) / q + C216924 -
                          C216683 / q;
    const double C92273 = (3 * C91410) / C143578 -
                          (C152213 * be + C92336 * C216043) / q + C216802 -
                          (C176059 * p) / q;
    const double C216684 = C90307 / C143578;
    const double C90361 =
        C173010 / q - (C45584 * be + C90307 * C216043) / q - (C90881 * p) / q;
    const double C90938 = (3 * C90307) / C143578 -
                          (C90877 * be + C90881 * C216043) / q -
                          (C90880 * p) / q;
    const double C91284 = C98123 / q - (C98640 * be + C91410 * C216043) / q +
                          C216732 - (C92336 * p) / q;
    const double C98004 = C216957 - (C53582 * be + C98123 * C216043) / q +
                          C216947 - (C91410 * p) / q;
    const double C217463 = C216862 / q;
    const double C216680 = C91446 * p;
    const double C92687 =
        C216817 - (C48117 * be + C92813 * C216043) / q - (C93363 * p) / q;
    const double C93237 = C216844 - (C93360 * be + C93363 * C216043) / q +
                          C216857 - (C91409 * p) / q;
    const double C91283 = C93363 / q - (C150727 * be + C91409 * C216043) / q +
                          C216731 - (C174465 * p) / q;
    const double C216760 = C174698 * p;
    const double C93453 =
        C216845 - (C93396 * be + C93399 * C216043) / q - C217427;
    const double C217398 = C216714 / q;
    const double C217397 = C216713 / q;
    const double C91356 = C216669 - (C91266 * C216044) / q - C217420;
    const double C93201 =
        C216832 - (C93216 * be + C93219 * C216043) / q + C217461 - C217420;
    const double C90145 = C172669 / q - (C45544 * be + C90271 * C216043) / q +
                          C216653 - (C90843 * p) / q;
    const double C90709 = (2 * C90843) / q -
                          (C149800 * be + C90842 * C216043) / q + C216698 -
                          (C173553 * p) / q;
    const double C90710 = (3 * C90271) / C143578 -
                          (C90839 * be + C90843 * C216043) / q + C216699 -
                          (C90842 * p) / q;
    const double C217453 = C216827 / q;
    const double C217414 = C216743 / q;
    const double C216666 = C91778 * p;
    const double C91715 = (3 * C90262) / C143578 -
                          (C151298 * be + C91778 * C216043) / q + C216781 -
                          C216717 / q;
    const double C217451 = C216825 / q;
    const double C93273 = -(C93219 * C216041 + C216825) / q;
    const double C217375 = C216592 / q;
    const double C88957 = -(C146624 * be + C88903 * C216043 + C216592) / q;
    const double C217372 = C216632 / q;
    const double C216463 = C88346 * p;
    const double C88382 = C216529 - (C88346 * C216041) / q - C216462 / q;
    const double C88399 =
        C88346 / q - (C145693 * be + C88345 * C216043) / q - C217315;
    const double C89272 =
        (3 * C88346) / C143578 - (C89254 * C216041) / q - C216461 / q;
    const double C89650 =
        C96035 / q - (C89776 * C216041) / q + C216627 - (C171878 * p) / q;
    const double C95797 =
        C98089 / C143578 - (C96035 * C216041) / q + C216944 - (C89776 * p) / q;
    const double C97851 = C216947 - (C98089 * C216041) / q - (C96035 * p) / q;
    const double C217471 = C216892 / q;
    const double C94442 = -(C155036 * be + C94388 * C216043 + C216892) / q;
    const double C217362 = C216620 / q;
    const double C216614 = C87780 / C143578;
    const double C87817 =
        (2 * C87780) / q - (C87779 * C216041) / q - (C168814 * p) / q;
    const double C87837 = -(C42993 * be + C87780 * C216043 + C216462) / q;
    const double C88939 = C92840 / q - (C88903 * C216041) / q - C217354;
    const double C217357 = C216611 / q;
    const double C89560 = -(C147640 * be + C89533 * C216043 + C216611) / q;
    const double C88363 = C90262 / q - (C88309 * C216041) / q - C217313;
    const double C89173 = C87742 / C143578 -
                          (C147167 * be + C89236 * C216043) / q + C216602 -
                          C217313;
    const double C89677 = C87950 / C143578 - (C89614 * C216044) / q - C217367;
    const double C94100 =
        C93003 / C143578 - (C94109 * C216041) / q + C217469 - C217367;
    const double C89371 = (3 * C88832) / C143578 - (C89497 * C216041) / q +
                          C216618 - (C171430 * p) / q;
    const double C216531 = C87789 / C143578;
    const double C87818 =
        (3 * C87789) / C143578 - (C87780 * C216041) / q - (C87779 * p) / q;
    const double C87827 =
        C168843 / q - (C87789 * C216041) / q - (C87780 * p) / q;
    const double C88580 =
        C96570 / q - (C88832 * C216041) / q + C216556 - (C89497 * p) / q;
    const double C96332 =
        C180822 / C143578 - (C96570 * C216041) / q + C216948 - (C88832 * p) / q;
    const double C217449 = C216821 / q;
    const double C216457 = C88904 * p;
    const double C92516 =
        C92777 / C143578 - (C92768 * C216041) / q + C216816 - (C88831 * p) / q;
    const double C92525 = C216817 - (C92777 * C216041) / q - (C92768 * p) / q;
    const double C88579 =
        C92768 / q - (C88831 * C216041) / q + C216555 - (C170144 * p) / q;
    const double C216585 = C170642 * p;
    const double C92876 = C216845 - (C92840 * C216041) / q - C217351;
    const double C217370 = C216511 / q;
    const double C88255 = -(C88165 * C216044 + C216511) / q;
    const double C216447 = C88724 * p;
    const double C88778 = C216575 - (C88724 * C216041) / q - C216446 / q;
    const double C88813 = C88724 / q - (C88723 * C216044) / q - C217343;
    const double C89470 =
        (3 * C88724) / C143578 - (C89443 * C216041) / q - C216445 / q;
    const double C89632 = C95882 / q - (C89695 * C216041) / q +
                          C89704 / C143578 - (C171849 * p) / q;
    const double C95763 = C97936 / C143578 - (C95882 * C216041) / q +
                          C95899 / C143578 - (C89695 * p) / q;
    const double C97817 = C216945 - (C97936 * C216041) / q - (C95882 * p) / q;
    const double C91931 =
        C216622 - (C151402 * be + C91877 * C216043) / q - C217436;
    const double C92147 =
        (3 * C92165) / C143578 - (C92156 * C216041) / q - C217436;
    const double C217360 = C216609 / q;
    const double C89209 = -(C89164 * C216044 + C216609) / q;
    const double C216606 = C87590 / C143578;
    const double C87646 =
        (2 * C87590) / q - (C87589 * C216041) / q - (C168418 * p) / q;
    const double C87685 = -(C87590 * C216044 + C216446) / q;
    const double C88219 = C90118 / q - (C88165 * C216041) / q - C217301;
    const double C88022 =
        C95268 / q - (C88274 * C216041) / q + C216485 - (C89218 * p) / q;
    const double C89092 = (3 * C88274) / C143578 - (C89218 * C216041) / q +
                          C216602 - (C170981 * p) / q;
    const double C217310 = C216522 / q;
    const double C88958 = -(C52030 * be + C88904 * C216043 + C216522) / q;
    const double C217459 = C216819 / q;
    const double C92552 = -(C47707 * be + C92444 * C216043 + C216819) / q;
    const double C217338 = C216570 / q;
    const double C216505 = C169493 * p;
    const double C216441 = C88310 * p;
    const double C88021 =
        C90226 / q - (C88273 * C216041) / q + C216484 - (C169230 * p) / q;
    const double C89974 =
        C90235 / C143578 - (C90226 * C216041) / q + C216652 - (C88273 * p) / q;
    const double C89983 = C216653 - (C90235 * C216041) / q - (C90226 * p) / q;
    const double C217308 = C216520 / q;
    const double C88796 =
        C96502 / q - (C88760 * C216041) / q - (C89461 * p) / q;
    const double C89479 =
        (3 * C88760) / C143578 - (C89461 * C216041) / q - (C171603 * p) / q;
    const double C96536 =
        C180991 / C143578 - (C96502 * C216041) / q - (C88760 * p) / q;
    const double C92480 =
        C92615 / C143578 - (C92606 * C216041) / q + C216812 - (C88669 * p) / q;
    const double C92489 = C216813 - (C92615 * C216041) / q - (C92606 * p) / q;
    const double C88543 =
        C92606 / q - (C88669 * C216041) / q + C216552 - (C170086 * p) / q;
    const double C94532 =
        C93813 / C143578 - (C94514 * C216041) / q - (C179227 * p) / q;
    const double C217333 = C216567 / q;
    const double C92714 = C216832 - (C92660 * C216041) / q - C217344;
    const double C217402 = C216722 / q;
    const double C91176 = C216641 - (C91050 * C216044) / q - C217412;
    const double C93111 =
        C216804 - (C93000 * be + C93003 * C216043) / q - C217412;
    const double C88544 =
        C96417 / q - (C88670 * C216041) / q + C216553 - (C89416 * p) / q;
    const double C89353 = (3 * C88670) / C143578 - (C89416 * C216041) / q +
                          C216617 - (C171401 * p) / q;
    const double C217335 = C216512 / q;
    const double C217404 = C216657 / q;
    const double C90028 = -(C89902 * C216044 + C216657) / q;
    const double C89074 = (3 * C88112) / C143578 - (C89137 * C216041) / q +
                          C216600 - (C170952 * p) / q;
    const double C216500 = C87599 / C143578;
    const double C87647 =
        (3 * C87599) / C143578 - (C87590 * C216041) / q - (C87589 * p) / q;
    const double C87656 =
        C168447 / q - (C87599 * C216041) / q - (C87590 * p) / q;
    const double C87986 =
        C95115 / q - (C88112 * C216041) / q + C216480 - (C89137 * p) / q;
    const double C94996 =
        C179916 / C143578 - (C95115 * C216041) / q + C216922 - (C88112 * p) / q;
    const double C217382 = C216656 / q;
    const double C216435 = C88166 * p;
    const double C88256 = -(C88166 * C216044 + C216512) / q;
    const double C89938 =
        C90073 / C143578 - (C90064 * C216041) / q + C216649 - (C88111 * p) / q;
    const double C89947 = C216650 - (C90073 * C216041) / q - (C90064 * p) / q;
    const double C87985 =
        C90064 / q - (C88111 * C216041) / q + C216479 - (C169172 * p) / q;
    const double C216499 = C169435 * p;
    const double C90172 = C216669 - (C90118 * C216041) / q - C217296;
    const double C87437 =
        (2 * C87704) / q - (C87703 * C216041) / q + C216417 - (C167937 * p) / q;
    const double C87438 = (3 * C87713) / C143578 - (C87704 * C216041) / q +
                          C216418 - (C87703 * p) / q;
    const double C87447 =
        C167966 / q - (C87713 * C216041) / q + C216419 - (C87704 * p) / q;
    const double C217446 = C216807 / q;
    const double C217322 = C216543 / q;
    const double C217277 = C216456 / q;
    const double C217269 = C216439 / q;
    const double C217276 = C216455 / q;
    const double C88634 = C216489 - (C88508 * C216044) / q - C217328;
    const double C92426 = C216804 - (C92444 * C216041) / q + C217444 - C217328;
    const double C87399 =
        (2 * C87533) / q - (C87532 * C216041) / q + C216411 - (C167850 * p) / q;
    const double C87400 = (3 * C87542) / C143578 - (C87533 * C216041) / q +
                          C216412 - (C87532 * p) / q;
    const double C87409 =
        C167879 / q - (C87542 * C216041) / q + C216413 - (C87533 * p) / q;
    const double C217379 = C216644 / q;
    const double C217283 = C216470 / q;
    const double C217264 = C216434 / q;
    const double C217263 = C216433 / q;
    const double C88058 =
        C216489 - (C50248 * be + C87950 * C216043) / q - C217289;
    const double C89884 = C216641 - (C89902 * C216041) / q + C217377 - C217289;
    const double C217900 = C136316 * p;
    const double C217980 = C136577 * p;
    const double C217892 = C136595 * p;
    const double C218044 = C138809 * p;
    const double C217746 = C132896 * p;
    const double C217785 = C134345 * p;
    const double C135642 =
        C217946 - (C135894 * C216041) / q - (C136559 * p) / q;
    const double C136433 = C135894 / C143578 - (C136559 * C216041) / q +
                           C218008 - (C199249 * p) / q;
    const double C139043 = C218124 - (C139016 * C216041) / q - C218557;
    const double C135695 =
        C135570 / q - (C150010 * be + C135569 * C216044) / q - C218625;
    const double C139241 = C218116 - (C139187 * C216043) / q - C218625;
    const double C217720 = C132860 * p;
    const double C135084 =
        C217913 - (C135336 * C216041) / q - (C136280 * p) / q;
    const double C136154 = C135336 / C143578 - (C136280 * C216041) / q +
                           C217995 - (C198801 * p) / q;
    const double C135677 = C137521 / q - (C135569 * C216043) / q - C218624;
    const double C136739 =
        C217990 - (C151859 * be + C136676 * C216044) / q - C218624;
    const double C217654 = C133787 * p;
    const double C133328 = C137180 / q - (C133274 * C216041) / q - C218556;
    const double C218004 = C135408 / C143578;
    const double C135461 =
        (2 * C135408) / q - (C135407 * C216043) / q - (C197670 * p) / q;
    const double C136019 = C137895 / q - (C135965 * C216043) / q - C218644;
    const double C218656 = C217981 / q;
    const double C136001 = -(C135965 * C216041 + C217981) / q;
    const double C218011 = C199378 * p;
    const double C217899 = C134849 * p;
    const double C132932 = C134849 / q - (C132896 * C216041) / q - C218528;
    const double C136343 =
        (3 * C134849) / C143578 - (C136316 * C216043) / q - C217932 / q;
    const double C218168 = C140589 * p;
    const double C217851 = C140589 / q;
    const double C218688 = C218110 / q;
    const double C139322 = -(C139295 * C216041 + C218110) / q;
    const double C137243 = -(C137189 * C216041 + C218047) / q;
    const double C141073 =
        C218143 - (C51849 * be + C140988 * C216044) / q - C218047 / q;
    const double C136550 =
        C134669 / C143578 - (C151639 * be + C136505 * C216044) / q - C218653;
    const double C138728 =
        C137180 / C143578 - (C138737 * C216043) / q + C218686 - C218653;
    const double C135983 = -(C135929 * C216041 + C217979) / q;
    const double C138746 =
        C137324 / C143578 - (C138809 * C216043) / q + C218104 - C217979 / q;
    const double C218647 = C218002 / q;
    const double C136892 = -(C136874 * C216041 + C218002) / q;
    const double C134876 = -(C134822 * C216041 + C217897) / q;
    const double C139703 =
        C192572 / C143578 - (C139822 * C216043) / q + C218138 - C217897 / q;
    const double C136793 = (3 * C135930) / C143578 - (C136856 * C216043) / q +
                           C218016 - (C199822 * p) / q;
    const double C217898 = C134858 / C143578;
    const double C134912 =
        C196778 / q - (C134858 * C216043) / q - (C135408 * p) / q;
    const double C135462 =
        (3 * C134858) / C143578 - (C135408 * C216043) / q - (C135407 * p) / q;
    const double C135804 =
        C142643 / q - (C135930 * C216043) / q + C217946 - (C136856 * p) / q;
    const double C142524 =
        C218171 - (C142643 * C216043) / q + C218161 - (C135930 * p) / q;
    const double C218677 = C218076 / q;
    const double C217894 = C135966 * p;
    const double C137207 =
        C218031 - (C137333 * C216043) / q - (C137861 * p) / q;
    const double C137742 =
        C218058 - (C137861 * C216043) / q + C218071 - (C135929 * p) / q;
    const double C135803 =
        C137861 / q - (C135929 * C216043) / q + C217945 - (C198231 * p) / q;
    const double C217974 = C198464 * p;
    const double C137946 = C218059 - (C137895 * C216043) / q - C218641;
    const double C218612 = C217928 / q;
    const double C218611 = C217927 / q;
    const double C135876 =
        C217883 - (C98504 * be + C135786 * C216044) / q - C218634;
    const double C137708 =
        C218046 - (C137725 * C216043) / q + C218675 - C218634;
    const double C134696 =
        C196437 / q - (C134822 * C216043) / q + C217867 - (C135372 * p) / q;
    const double C135245 = (2 * C135372) / q - (C135371 * C216043) / q +
                           C217912 - (C197320 * p) / q;
    const double C135246 = (3 * C134822) / C143578 - (C135372 * C216043) / q +
                           C217913 - (C135371 * p) / q;
    const double C218667 = C218041 / q;
    const double C218628 = C217957 / q;
    const double C217880 = C136298 * p;
    const double C136235 = (3 * C134813) / C143578 - (C136298 * C216043) / q +
                           C217995 - C217931 / q;
    const double C218665 = C218039 / q;
    const double C137776 = -(C137725 * C216041 + C218039) / q;
    const double C218589 = C217806 / q;
    const double C133508 = -(C133454 * C216043 + C217806) / q;
    const double C218586 = C217846 / q;
    const double C217677 = C132897 * p;
    const double C132933 = C217743 - (C132897 * C216041) / q - C217676 / q;
    const double C132950 = C132897 / q - (C132896 * C216043) / q - C218529;
    const double C133823 =
        (3 * C132897) / C143578 - (C133805 * C216041) / q - C217675 / q;
    const double C134201 =
        C140555 / q - (C134327 * C216041) / q + C217841 - (C195647 * p) / q;
    const double C140317 = C142609 / C143578 - (C140555 * C216041) / q +
                           C218158 - (C134327 * p) / q;
    const double C142371 =
        C218161 - (C142609 * C216041) / q - (C140555 * p) / q;
    const double C218685 = C218106 / q;
    const double C138962 = -(C138908 * C216043 + C218106) / q;
    const double C218576 = C217834 / q;
    const double C217828 = C132331 / C143578;
    const double C132368 =
        (2 * C132331) / q - (C132330 * C216041) / q - (C192587 * p) / q;
    const double C132388 = -(C132331 * C216043 + C217676) / q;
    const double C133490 = C137360 / q - (C133454 * C216041) / q - C218568;
    const double C218571 = C217825 / q;
    const double C134111 = -(C134084 * C216043 + C217825) / q;
    const double C132914 = C134813 / q - (C132860 * C216041) / q - C218527;
    const double C133724 =
        C132293 / C143578 - (C133787 * C216043) / q + C217816 - C218527;
    const double C134228 =
        C132501 / C143578 - (C147730 * be + C134165 * C216044) / q - C218581;
    const double C138620 =
        C137521 / C143578 - (C138629 * C216041) / q + C218683 - C218581;
    const double C133922 = (3 * C133383) / C143578 - (C134048 * C216041) / q +
                           C217832 - (C195200 * p) / q;
    const double C217745 = C132340 / C143578;
    const double C132369 =
        (3 * C132340) / C143578 - (C132331 * C216041) / q - (C132330 * p) / q;
    const double C132378 =
        C192616 / q - (C132340 * C216041) / q - (C132331 * p) / q;
    const double C133131 =
        C141090 / q - (C133383 * C216041) / q + C217770 - (C134048 * p) / q;
    const double C140852 = C204581 / C143578 - (C141090 * C216041) / q +
                           C218162 - (C133383 * p) / q;
    const double C218663 = C218035 / q;
    const double C217671 = C133455 * p;
    const double C137036 = C137297 / C143578 - (C137288 * C216041) / q +
                           C218030 - (C133382 * p) / q;
    const double C137045 =
        C218031 - (C137297 * C216041) / q - (C137288 * p) / q;
    const double C133130 =
        C137288 / q - (C133382 * C216041) / q + C217769 - (C193916 * p) / q;
    const double C217799 = C194413 * p;
    const double C137396 = C218059 - (C137360 * C216041) / q - C218565;
    const double C218584 = C217725 / q;
    const double C132806 = -(C145426 * be + C132716 * C216044 + C217725) / q;
    const double C217661 = C133275 * p;
    const double C133329 = C217789 - (C133275 * C216041) / q - C217660 / q;
    const double C133364 =
        C133275 / q - (C146358 * be + C133274 * C216044) / q - C218557;
    const double C134021 =
        (3 * C133275) / C143578 - (C133994 * C216041) / q - C217659 / q;
    const double C134183 = C140402 / q - (C134246 * C216041) / q +
                           C134255 / C143578 - (C195618 * p) / q;
    const double C140283 = C142456 / C143578 - (C140402 * C216041) / q +
                           C140419 / C143578 - (C134246 * p) / q;
    const double C142337 =
        C218159 - (C142456 * C216041) / q - (C140402 * p) / q;
    const double C136451 = C217836 - (C136397 * C216043) / q - C218650;
    const double C136667 =
        (3 * C136685) / C143578 - (C136676 * C216041) / q - C218650;
    const double C218574 = C217823 / q;
    const double C133760 = -(C147047 * be + C133715 * C216044 + C217823) / q;
    const double C217820 = C132141 / C143578;
    const double C132197 =
        (2 * C132141) / q - (C132140 * C216041) / q - (C192191 * p) / q;
    const double C132236 = -(C42783 * be + C132141 * C216044 + C217660) / q;
    const double C132770 = C134669 / q - (C132716 * C216041) / q - C218515;
    const double C132573 =
        C139788 / q - (C132825 * C216041) / q + C217699 - (C133769 * p) / q;
    const double C133643 = (3 * C132825) / C143578 - (C133769 * C216041) / q +
                           C217816 - (C194752 * p) / q;
    const double C218524 = C217736 / q;
    const double C133509 = -(C133455 * C216043 + C217736) / q;
    const double C218673 = C218033 / q;
    const double C137072 = -(C136964 * C216043 + C218033) / q;
    const double C218552 = C217784 / q;
    const double C217719 = C193265 * p;
    const double C217655 = C132861 * p;
    const double C132572 =
        C134777 / q - (C132824 * C216041) / q + C217698 - (C193003 * p) / q;
    const double C134525 = C134786 / C143578 - (C134777 * C216041) / q +
                           C217866 - (C132824 * p) / q;
    const double C134534 =
        C217867 - (C134786 * C216041) / q - (C134777 * p) / q;
    const double C218522 = C217734 / q;
    const double C133347 =
        C141022 / q - (C133311 * C216041) / q - (C134012 * p) / q;
    const double C134030 =
        (3 * C133311) / C143578 - (C134012 * C216041) / q - (C195372 * p) / q;
    const double C141056 =
        C204750 / C143578 - (C141022 * C216041) / q - (C133311 * p) / q;
    const double C137000 = C137135 / C143578 - (C137126 * C216041) / q +
                           C218026 - (C133220 * p) / q;
    const double C137009 =
        C218027 - (C137135 * C216041) / q - (C137126 * p) / q;
    const double C133094 =
        C137126 / q - (C133220 * C216041) / q + C217766 - (C193858 * p) / q;
    const double C139052 =
        C138318 / C143578 - (C139034 * C216041) / q - (C202987 * p) / q;
    const double C218547 = C217781 / q;
    const double C137234 = C218046 - (C137180 * C216041) / q - C218558;
    const double C218616 = C217936 / q;
    const double C135696 =
        C217855 - (C98300 * be + C135570 * C216044) / q - C218626;
    const double C137623 = C218018 - (C137521 * C216043) / q - C218626;
    const double C133095 =
        C140937 / q - (C133221 * C216041) / q + C217767 - (C133967 * p) / q;
    const double C133904 = (3 * C133221) / C143578 - (C133967 * C216041) / q +
                           C217831 - (C195171 * p) / q;
    const double C218549 = C217726 / q;
    const double C218618 = C217871 / q;
    const double C134579 = -(C45134 * be + C134453 * C216044 + C217871) / q;
    const double C133625 = (3 * C132663) / C143578 - (C133688 * C216041) / q +
                           C217814 - (C194723 * p) / q;
    const double C217714 = C132150 / C143578;
    const double C132198 =
        (3 * C132150) / C143578 - (C132141 * C216041) / q - (C132140 * p) / q;
    const double C132207 =
        C192220 / q - (C132150 * C216041) / q - (C132141 * p) / q;
    const double C132537 =
        C139635 / q - (C132663 * C216041) / q + C217694 - (C133688 * p) / q;
    const double C139516 = C203675 / C143578 - (C139635 * C216041) / q +
                           C218136 - (C132663 * p) / q;
    const double C218596 = C217870 / q;
    const double C217649 = C132717 * p;
    const double C132807 = -(C50476 * be + C132717 * C216044 + C217726) / q;
    const double C134489 = C134624 / C143578 - (C134615 * C216041) / q +
                           C217863 - (C132662 * p) / q;
    const double C134498 =
        C217864 - (C134624 * C216041) / q - (C134615 * p) / q;
    const double C132536 =
        C134615 / q - (C132662 * C216041) / q + C217693 - (C192945 * p) / q;
    const double C217713 = C193207 * p;
    const double C134723 = C217883 - (C134669 * C216041) / q - C218510;
    const double C131988 = (2 * C132255) / q - (C132254 * C216041) / q +
                           C217631 - (C191711 * p) / q;
    const double C131989 = (3 * C132264) / C143578 - (C132255 * C216041) / q +
                           C217632 - (C132254 * p) / q;
    const double C131998 =
        C191740 / q - (C132264 * C216041) / q + C217633 - (C132255 * p) / q;
    const double C218660 = C218021 / q;
    const double C218536 = C217757 / q;
    const double C218491 = C217670 / q;
    const double C218483 = C217653 / q;
    const double C218490 = C217669 / q;
    const double C133185 =
        C217703 - (C51612 * be + C133059 * C216044) / q - C218542;
    const double C136946 =
        C218018 - (C136964 * C216041) / q + C218658 - C218542;
    const double C131950 = (2 * C132084) / q - (C132083 * C216041) / q +
                           C217625 - (C191624 * p) / q;
    const double C131951 = (3 * C132093) / C143578 - (C132084 * C216041) / q +
                           C217626 - (C132083 * p) / q;
    const double C131960 =
        C191653 / q - (C132093 * C216041) / q + C217627 - (C132084 * p) / q;
    const double C218593 = C217858 / q;
    const double C218497 = C217684 / q;
    const double C218478 = C217648 / q;
    const double C218477 = C217647 / q;
    const double C132609 = C217703 - (C132501 * C216043) / q - C218503;
    const double C134435 =
        C217855 - (C134453 * C216041) / q + C218591 - C218503;
    const double C42807 = C215198 - (C42954 * C216043) / q - C216055;
    const double C44495 = (3 * C43542) / C143578 -
                          (C147167 * be + C44468 * C216041) / q - C216055;
    const double C42975 =
        (3 * C42933) / C143578 - (C42996 * C216044) / q - C216062;
    const double C44783 = (3 * C44136) / C143578 -
                          (C147640 * be + C44765 * C216041) / q - C216062;
    const double C42976 =
        (3 * C42934) / C143578 - (C42997 * C216044) / q - C216063;
    const double C44172 =
        C215374 - (C52030 * be + C44136 * C216041) / q - C216063;
    const double C216085 = C215288 / q;
    const double C216057 = C215224 / q;
    const double C43559 = C216093 - (C43577 * C216044) / q - C216094;
    const double C45071 = C44136 / C143578 - (C45044 * C216043) / q - C216094;
    const double C47356 =
        C46709 / C143578 - (C151770 * be + C47338 * C216041) / q - C216094;
    const double C44118 = C215314 - (C44136 * C216044) / q + C216136 - C216137;
    const double C216064 = C215240 / q;
    const double C216135 = C215368 / q;
    const double C43973 = C215338 - (C44099 * C216043) / q - C216124;
    const double C49610 =
        C48666 / C143578 - (C154932 * be + C49583 * C216041) / q - C216124;
    const double C44684 = C215401 - (C44747 * C216043) / q - C216148;
    const double C44513 = C215397 - (C44486 * C216043) / q - C216100;
    const double C44756 =
        C215397 - (C44765 * C216044) / q + (3 * C44738) / C143578 - C216140;
    const double C45035 =
        C43578 / C143578 - (C45044 * C216044) / q + C216160 - C216161;
    const double C49619 =
        C48700 / C143578 - (C154947 * be + C49601 * C216041) / q - C216161;
    const double C44963 =
        C44100 / C143578 - (C45026 * C216043) / q + C215410 - C216158;
    const double C47347 =
        C46673 / C143578 - (C151755 * be + C47320 * C216041) / q - C216158;
    const double C43070 = -(C43007 * C216043 + C215246) / q;
    const double C50716 =
        C215722 - (C50675 * be + C50678 * C216041) / q - C215246 / q;
    const double C44477 =
        (3 * C44459) / C143578 - (C44486 * C216044) / q - C216143;
    const double C45062 =
        C215421 - (C148100 * be + C45044 * C216041) / q - C216143;
    const double C45397 =
        C215310 - (C45537 * C216043) / q + C215435 - C215449 / q;
    const double C46169 = -(C90839 * be + C46115 * C216041 + C215449) / q;
    const double C46132 =
        (3 * C46096) / C143578 - (C46150 * C216044) / q - C216183;
    const double C47644 =
        (3 * C46709) / C143578 - (C47617 * C216043) / q - C216183;
    const double C46133 =
        (3 * C46097) / C143578 - (C46151 * C216044) / q - C216184;
    const double C46763 = C215552 - (C46709 * C216043) / q - C216184;
    const double C46691 = C215467 - (C46709 * C216044) / q + C216212 - C216213;
    const double C216176 = C215463 / q;
    const double C216211 = C215543 / q;
    const double C47329 =
        C45577 / C143578 - (C47338 * C216044) / q + C216227 - C216228;
    const double C49628 = C48150 / C143578 - (C49601 * C216043) / q - C216228;
    const double C47626 = -(C152213 * be + C47599 * C216041 + C215580) / q;
    const double C45627 = -(C45584 * be + C45587 * C216041 + C215468) / q;
    const double C50735 = C215723 - (C50678 * C216043) / q - C215468 / q;
    const double C51871 = C215731 - (C52004 * C216043) / q - C215737 / q;
    const double C53642 = -(C53582 * be + C53585 * C216041 + C215737) / q;
    const double C45053 =
        C215420 - (C148085 * be + C45026 * C216041) / q - C216148;
    const double C47257 =
        C215420 - (C47320 * C216043) / q + C215577 - C215580 / q;
    const double C47077 =
        C215573 - (C151313 * be + C47059 * C216041) / q - C216101;
    const double C47608 =
        C215573 - (C47617 * C216044) / q + (3 * C47590) / C143578 - C216216;
    const double C47050 =
        (3 * C47032) / C143578 - (C47059 * C216044) / q - C216219;
    const double C47365 = C215421 - (C47338 * C216043) / q - C216219;
    const double C216056 = C215223 / q;
    const double C216086 = C215289 / q;
    const double C216102 = C215315 / q;
    const double C216125 = C215354 / q;
    const double C43560 = C216095 - (C43578 * C216044) / q - C216096;
    const double C51493 =
        C53623 / C143578 - (C53611 * be + C51459 * C216041) / q - C216096;
    const double C216174 = C215461 / q;
    const double C46745 = -(C98674 * be + C46709 * C216041 + C215461) / q;
    const double C47970 = C215599 - (C48110 * C216043) / q - C215613 / q;
    const double C48717 = -(C93360 * be + C48666 * C216041 + C215613) / q;
    const double C45637 = C215312 - (C45577 * C216043) / q - C215469 / q;
    const double C46187 = -(C90877 * be + C46151 * C216041 + C215469) / q;
    const double C46727 = -(C98640 * be + C46673 * C216041 + C215549) / q;
    const double C51306 =
        C52004 / C143578 - (C51425 * C216043) / q + C215727 - C215549 / q;
    const double C42765 =
        (3 * C42744) / C143578 - (C42786 * C216043) / q - C216049;
    const double C44423 = (3 * C43398) / C143578 -
                          (C147047 * be + C44396 * C216041) / q - C216049;
    const double C42766 =
        (3 * C42745) / C143578 - (C42787 * C216043) / q - C216050;
    const double C43452 =
        C215293 - (C50476 * be + C43398 * C216041) / q - C216050;
    const double C43380 = C215283 - (C43398 * C216043) / q + C216081 - C216082;
    const double C44046 = C215283 - (C43956 * C216044) / q - C216130;
    const double C216051 = C215218 / q;
    const double C216080 = C215282 / q;
    const double C44387 =
        C215389 - (C44396 * C216043) / q + (3 * C44378) / C143578 - C216087;
    const double C44720 = C215389 - (C44675 * C216044) / q - C216128;
    const double C43937 = C216118 - (C43955 * C216043) / q - C216119;
    const double C44999 = C43398 / C143578 - (C44954 * C216044) / q - C216119;
    const double C49538 =
        C48530 / C143578 - (C154812 * be + C49511 * C216041) / q - C216119;
    const double C43938 = C216120 - (C43956 * C216043) / q - C216121;
    const double C51340 =
        C53433 / C143578 - (C53421 * be + C51289 * C216041) / q - C216121;
    const double C44666 =
        (3 * C44657) / C143578 - (C44675 * C216043) / q - C216146;
    const double C44981 =
        C215416 - (C147969 * be + C44954 * C216041) / q - C216146;
    const double C44945 =
        C43956 / C143578 - (C44954 * C216043) / q + C216155 - C216156;
    const double C47275 =
        C46529 / C143578 - (C151639 * be + C47248 * C216041) / q - C216156;
    const double C42902 = -(C42797 * C216044 + C215230) / q;
    const double C51909 =
        C215738 - (C51849 * be + C51852 * C216041) / q - C215230 / q;
    const double C47940 = C216238 - (C47960 * C216043) / q - C216239;
    const double C53528 = C215715 - (C53433 * C216044) / q - C216239;
    const double C46510 =
        C48530 / q - (C46528 * C216043) / q + C216199 - C216200;
    const double C47572 = C215568 - (C47527 * C216044) / q - C216200;
    const double C47930 = C216236 - (C47950 * C216043) / q - C216237;
    const double C51374 = C50488 / C143578 - (C51289 * C216044) / q - C216237;
    const double C48615 = C215527 - (C48530 * C216044) / q - C216249;
    const double C49053 =
        (3 * C49035) / C143578 - (C49071 * C216043) / q - C216249;
    const double C49556 = C215416 - (C49511 * C216044) / q - C216260;
    const double C49781 =
        (3 * C49772) / C143578 - (C49790 * C216043) / q - C216260;
    const double C45127 =
        C216164 - (C45144 * be + C45147 * C216041) / q - C216165;
    const double C50374 = C215709 - (C50260 * C216043) / q - C216165;
    const double C43163 =
        C45137 / q - (C144947 * be + C43181 * C216041) / q + C216068 - C216069;
    const double C44342 = C215387 - (C44288 * C216043) / q - C216069;
    const double C47700 =
        C216231 - (C47717 * be + C47720 * C216041) / q - C216232;
    const double C51757 = C215709 - (C51624 * C216044) / q - C216232;
    const double C43721 =
        C47710 / q - (C145877 * be + C43739 * C216041) / q + C216107 - C216108;
    const double C44630 = C215387 - (C44567 * C216044) / q - C216108;
    const double C45257 = C215254 - (C45137 * C216043) / q - C216168;
    const double C45737 =
        (3 * C45773) / C143578 - (C90459 * be + C45755 * C216041) / q - C216168;
    const double C46294 =
        C216187 - (C150010 * be + C46312 * C216041) / q - C216188;
    const double C47203 = C45137 / C143578 - (C47140 * C216044) / q - C216188;
    const double C49457 = C47710 / C143578 - (C49403 * C216043) / q - C216188;
    const double C46295 =
        C216189 - (C98300 * be + C46313 * C216041) / q - C216190;
    const double C51187 = C51624 / C143578 - (C51085 * C216043) / q - C216190;
    const double C48309 =
        C216244 - (C93000 * be + C48326 * C216041) / q - C216245;
    const double C51204 = C50260 / C143578 - (C51085 * C216044) / q - C216245;
    const double C47850 = C215327 - (C47710 * C216044) / q - C216235;
    const double C48837 = (3 * C48873) / C143578 -
                          (C138048 * be + C48855 * C216041) / q - C216235;
    const double C49466 = C215405 - (C49403 * C216044) / q - C216257;
    const double C49952 = (3 * C49970) / C143578 -
                          (C155495 * be + C49961 * C216041) / q - C216257;
    const double C90352 =
        C216529 - (C45574 * be + C90298 * C216043) / q - C216686 / q;
    const double C90919 = -(C90881 * C216041 + C216686) / q;
    const double C91464 = -(C91410 * C216041 + C216766) / q;
    const double C95950 = C96604 / C143578 -
                          (C53573 * be + C96069 * C216043) / q + C216944 -
                          C216766 / q;
    const double C217388 = C216678 / q;
    const double C91482 = -(C91446 * C216041 + C216678) / q;
    const double C92678 =
        C216816 - (C48107 * be + C92804 * C216043) / q - C216830 / q;
    const double C93417 = -(C93363 * C216041 + C216830) / q;
    const double C217316 = C216532 / q;
    const double C217339 = C216571 / q;
    const double C217300 = C216506 / q;
    const double C217270 = C216440 / q;
    const double C91814 = C216790 - (C91796 * C216041) / q - C217315;
    const double C92345 =
        C216790 - (C92354 * C216044) / q + (3 * C92327) / C143578 - C217430;
    const double C92066 =
        C90298 / C143578 - (C92075 * C216044) / q + C217441 - C217442;
    const double C94334 =
        C92840 / C143578 - (C154947 * be + C94307 * C216043) / q - C217442;
    const double C92363 = -(C92336 * C216041 + C216797) / q;
    const double C90343 = -(C90307 * C216041 + C216685) / q;
    const double C95387 =
        C216940 - (C50675 * be + C95336 * C216043) / q - C216685 / q;
    const double C96485 =
        C216948 - (C52001 * be + C96604 * C216043) / q - C216954 / q;
    const double C98174 = -(C98123 * C216041 + C216954) / q;
    const double C91994 =
        C216637 - (C151755 * be + C92057 * C216043) / q + C216794 - C216797 / q;
    const double C94262 = C216633 - (C94217 * C216044) / q - C217474;
    const double C94487 = (3 * C94478) / C143578 -
                          (C155273 * be + C94496 * C216043) / q - C217474;
    const double C91787 =
        (3 * C91769) / C143578 - (C91796 * C216044) / q - C217433;
    const double C92102 =
        C216638 - (C151770 * be + C92075 * C216043) / q - C217433;
    const double C91428 = C216684 - (C91446 * C216044) / q + C217426 - C217427;
    const double C93309 = C216744 - (C93219 * C216044) / q - C217463;
    const double C93759 = (3 * C93741) / C143578 -
                          (C138276 * be + C93777 * C216043) / q - C217463;
    const double C217390 = C216680 / q;
    const double C217425 = C216760 / q;
    const double C90862 =
        (3 * C90824) / C143578 - (C90881 * C216044) / q - C217398;
    const double C91500 =
        C216769 - (C98674 * be + C91446 * C216043) / q - C217398;
    const double C90861 =
        (3 * C90823) / C143578 - (C90880 * C216044) / q - C217397;
    const double C92381 = (3 * C91446) / C143578 -
                          (C152228 * be + C92354 * C216043) / q - C217397;
    const double C92651 =
        C217452 - (C47957 * be + C92669 * C216043) / q - C217453;
    const double C98072 = C216932 - (C97987 * C216044) / q - C217453;
    const double C91247 =
        C93219 / q - (C150491 * be + C91265 * C216043) / q + C217413 - C217414;
    const double C92309 = C216785 - (C92264 * C216044) / q - C217414;
    const double C90136 =
        C216527 - (C45534 * be + C90262 * C216043) / q + C216652 - C216666 / q;
    const double C90900 = -(C90843 * C216041 + C216666) / q;
    const double C92642 =
        C217450 - (C47947 * be + C92660 * C216043) / q - C217451;
    const double C96018 = C95166 / C143578 - (C95933 * C216044) / q - C217451;
    const double C89803 =
        C88346 / C143578 - (C89812 * C216044) / q + C217374 - C217375;
    const double C94325 = C93399 / C143578 - (C94307 * C216041) / q - C217375;
    const double C89731 = C88868 / C143578 -
                          (C148085 * be + C89794 * C216043) / q + C216627 -
                          C217372;
    const double C92084 = C91410 / C143578 - (C92057 * C216041) / q - C217372;
    const double C87846 = -(C43004 * be + C87789 * C216043 + C216463) / q;
    const double C95370 = C216939 - (C95336 * C216041) / q - C216463 / q;
    const double C94172 = C216622 - (C94109 * C216044) / q - C217471;
    const double C94658 =
        (3 * C94676) / C143578 - (C94667 * C216041) / q - C217471;
    const double C89452 =
        C216618 - (C147624 * be + C89515 * C216043) / q - C217362;
    const double C89821 = C216637 - (C89794 * C216041) / q - C217362;
    const double C89281 =
        C216614 - (C147182 * be + C89254 * C216043) / q - C217314;
    const double C89524 =
        C216614 - (C89533 * C216044) / q + (3 * C89506) / C143578 - C217354;
    const double C89245 =
        (3 * C89227) / C143578 - (C89254 * C216044) / q - C217357;
    const double C89830 = C216638 - (C89812 * C216041) / q - C217357;
    const double C88886 = C216531 - (C88904 * C216044) / q + C217350 - C217351;
    const double C92570 = C216544 - (C92444 * C216044) / q - C217449;
    const double C93543 =
        (3 * C93579) / C143578 - (C93561 * C216041) / q - C217449;
    const double C217278 = C216457 / q;
    const double C217349 = C216585 / q;
    const double C89713 = C88724 / C143578 -
                          (C147969 * be + C89722 * C216043) / q + C217369 -
                          C217370;
    const double C92012 = C91266 / C143578 - (C91985 * C216041) / q - C217370;
    const double C87694 = -(C87599 * C216044 + C216447) / q;
    const double C96519 = C216955 - (C96468 * C216041) / q - C216447 / q;
    const double C89434 = (3 * C89425) / C143578 -
                          (C147508 * be + C89443 * C216043) / q - C217360;
    const double C89749 = C216633 - (C89722 * C216041) / q - C217360;
    const double C89155 = C216606 - (C147047 * be + C89164 * C216043) / q +
                          (3 * C89146) / C143578 - C217301;
    const double C89488 = C216606 - (C89443 * C216044) / q - C217342;
    const double C88328 = C217309 - (C88346 * C216044) / q - C217310;
    const double C96137 = C98157 / C143578 - (C96103 * C216041) / q - C217310;
    const double C92985 = C217458 - (C93003 * C216041) / q - C217459;
    const double C95848 = C94962 / C143578 - (C95729 * C216044) / q - C217459;
    const double C88741 =
        C216555 - (C146594 * be + C88867 * C216043) / q - C217338;
    const double C94316 = C93363 / C143578 - (C94289 * C216041) / q - C217338;
    const double C217299 = C216505 / q;
    const double C217271 = C216441 / q;
    const double C88327 = C217307 - (C88345 * C216044) / q - C217308;
    const double C89839 =
        C88904 / C143578 - (C148100 * be + C89812 * C216043) / q - C217308;
    const double C92093 = C91446 / C143578 - (C92075 * C216041) / q - C217308;
    const double C88705 =
        C217332 - (C146358 * be + C88723 * C216043) / q - C217333;
    const double C89767 = C88166 / C143578 - (C89722 * C216044) / q - C217333;
    const double C94244 = C93219 / C143578 - (C94217 * C216041) / q - C217333;
    const double C91031 = C217401 - (C91049 * C216041) / q - C217402;
    const double C91940 = C89902 / C143578 - (C91877 * C216044) / q - C217402;
    const double C94163 =
        C92444 / C143578 - (C154574 * be + C94109 * C216043) / q - C217402;
    const double C88706 =
        C217334 - (C51840 * be + C88724 * C216043) / q - C217335;
    const double C95984 = C97987 / C143578 - (C95933 * C216041) / q - C217335;
    const double C91032 = C217403 - (C91050 * C216041) / q - C217404;
    const double C95831 =
        C96264 / C143578 - (C53193 * be + C95729 * C216043) / q - C217404;
    const double C88148 =
        C216500 - (C50476 * be + C88166 * C216043) / q + C217295 - C217296;
    const double C88814 = C216500 - (C88724 * C216044) / q - C217344;
    const double C90010 =
        C216471 - (C45134 * be + C89902 * C216043) / q - C217382;
    const double C90444 =
        (3 * C90482) / C143578 - (C90463 * C216041) / q - C217382;
    const double C217265 = C216435 / q;
    const double C217294 = C216499 / q;
    const double C92435 = C217445 - (C92453 * C216041) / q - C217446;
    const double C96383 = C216926 - (C96264 * C216044) / q - C217446;
    const double C88489 =
        C92444 / q - (C88507 * C216041) / q + C217321 - C217322;
    const double C89398 = C216604 - (C89335 * C216044) / q - C217322;
    const double C87761 =
        (3 * C87723) / C143578 - (C87780 * C216044) / q - C217277;
    const double C88940 = C216591 - (C88904 * C216041) / q - C217277;
    const double C87608 =
        C216417 - (C144630 * be + C87741 * C216043) / q - C217269;
    const double C89263 =
        (3 * C88310) / C143578 - (C89236 * C216041) / q - C217269;
    const double C87760 =
        (3 * C87722) / C143578 - (C87779 * C216044) / q - C217276;
    const double C89551 =
        (3 * C88904) / C143578 - (C89533 * C216041) / q - C217276;
    const double C89893 = C217378 - (C89911 * C216041) / q - C217379;
    const double C95064 =
        C216926 - (C50257 * be + C94962 * C216043) / q - C217379;
    const double C87931 =
        C89902 / q - (C87949 * C216041) / q + C217282 - C217283;
    const double C89110 =
        C216604 - (C146809 * be + C89056 * C216043) / q - C217283;
    const double C87571 =
        (3 * C87552) / C143578 - (C42783 * be + C87590 * C216043) / q - C217264;
    const double C88220 = C216510 - (C88166 * C216041) / q - C217264;
    const double C87570 = (3 * C87551) / C143578 -
                          (C144275 * be + C87589 * C216043) / q - C217263;
    const double C89191 =
        (3 * C88166) / C143578 - (C89164 * C216041) / q - C217263;
    const double C134903 = C217743 - (C134849 * C216043) / q - C217900 / q;
    const double C135444 = -(C135408 * C216041 + C217900) / q;
    const double C135984 = -(C135930 * C216041 + C217980) / q;
    const double C140470 =
        C141124 / C143578 - (C140589 * C216043) / q + C218158 - C217980 / q;
    const double C218602 = C217892 / q;
    const double C136002 = -(C135966 * C216041 + C217892) / q;
    const double C137198 = C218030 - (C137324 * C216043) / q - C218044 / q;
    const double C137912 = -(C137861 * C216041 + C218044) / q;
    const double C218530 = C217746 / q;
    const double C218553 = C217785 / q;
    const double C218514 = C217720 / q;
    const double C218484 = C217654 / q;
    const double C136334 = C218004 - (C136316 * C216041) / q - C218529;
    const double C136865 = C218004 - (C152228 * be + C136874 * C216044) / q +
                           (3 * C136847) / C143578 - C218644;
    const double C136586 = C134849 / C143578 -
                           (C151770 * be + C136595 * C216044) / q + C218655 -
                           C218656;
    const double C138854 =
        C137360 / C143578 - (C138827 * C216043) / q - C218656;
    const double C136883 = -(C136856 * C216041 + C218011) / q;
    const double C134894 = -(C134858 * C216041 + C217899) / q;
    const double C139907 = C218154 - (C139856 * C216043) / q - C217899 / q;
    const double C141005 = C218162 - (C141124 * C216043) / q - C218168 / q;
    const double C142694 = -(C142643 * C216041 + C218168) / q;
    const double C136514 =
        C217851 - (C136577 * C216043) / q + C218008 - C218011 / q;
    const double C138782 =
        C217847 - (C154812 * be + C138737 * C216044) / q - C218688;
    const double C139007 =
        (3 * C138998) / C143578 - (C139016 * C216043) / q - C218688;
    const double C136307 = (3 * C136289) / C143578 -
                           (C151313 * be + C136316 * C216044) / q - C218647;
    const double C136622 = C217852 - (C136595 * C216043) / q - C218647;
    const double C135948 =
        C217898 - (C98674 * be + C135966 * C216044) / q + C218640 - C218641;
    const double C137810 =
        C217958 - (C93216 * be + C137725 * C216044) / q - C218677;
    const double C138261 =
        (3 * C138242) / C143578 - (C138280 * C216043) / q - C218677;
    const double C218604 = C217894 / q;
    const double C218639 = C217974 / q;
    const double C135390 = (3 * C135354) / C143578 -
                           (C90877 * be + C135408 * C216044) / q - C218612;
    const double C136020 = C217983 - (C135966 * C216043) / q - C218612;
    const double C135389 = (3 * C135353) / C143578 -
                           (C149830 * be + C135407 * C216044) / q - C218611;
    const double C136901 =
        (3 * C135966) / C143578 - (C136874 * C216043) / q - C218611;
    const double C137171 = C218666 - (C137189 * C216043) / q - C218667;
    const double C142592 =
        C218146 - (C53430 * be + C142507 * C216044) / q - C218667;
    const double C135767 =
        C137725 / q - (C135785 * C216043) / q + C218627 - C218628;
    const double C136829 =
        C217999 - (C152097 * be + C136784 * C216044) / q - C218628;
    const double C134687 =
        C217741 - (C134813 * C216043) / q + C217866 - C217880 / q;
    const double C135426 = -(C135372 * C216041 + C217880) / q;
    const double C137162 = C218664 - (C137180 * C216043) / q - C218665;
    const double C140538 =
        C139686 / C143578 - (C53421 * be + C140453 * C216044) / q - C218665;
    const double C134354 = C132897 / C143578 -
                           (C148100 * be + C134363 * C216044) / q + C218588 -
                           C218589;
    const double C138845 =
        C137895 / C143578 - (C138827 * C216041) / q - C218589;
    const double C134282 =
        C133419 / C143578 - (C134345 * C216043) / q + C217841 - C218586;
    const double C136604 =
        C135930 / C143578 - (C136577 * C216041) / q - C218586;
    const double C132397 = -(C132340 * C216043 + C217677) / q;
    const double C139890 = C218153 - (C139856 * C216041) / q - C217677 / q;
    const double C138692 =
        C217836 - (C154574 * be + C138629 * C216044) / q - C218685;
    const double C139178 =
        (3 * C139196) / C143578 - (C139187 * C216041) / q - C218685;
    const double C134003 = C217832 - (C134066 * C216043) / q - C218576;
    const double C134372 = C217851 - (C134345 * C216041) / q - C218576;
    const double C133832 = C217828 - (C133805 * C216043) / q - C218528;
    const double C134075 = C217828 - (C147640 * be + C134084 * C216044) / q +
                           (3 * C134057) / C143578 - C218568;
    const double C133796 = (3 * C133778) / C143578 -
                           (C147182 * be + C133805 * C216044) / q - C218571;
    const double C134381 = C217852 - (C134363 * C216041) / q - C218571;
    const double C133437 =
        C217745 - (C52030 * be + C133455 * C216044) / q + C218564 - C218565;
    const double C137090 =
        C217758 - (C47707 * be + C136964 * C216044) / q - C218663;
    const double C138033 =
        (3 * C138071) / C143578 - (C138052 * C216041) / q - C218663;
    const double C218492 = C217671 / q;
    const double C218563 = C217799 / q;
    const double C134264 =
        C133275 / C143578 - (C134273 * C216043) / q + C218583 - C218584;
    const double C136532 =
        C135786 / C143578 - (C136505 * C216041) / q - C218584;
    const double C132245 = -(C42794 * be + C132150 * C216044 + C217661) / q;
    const double C141039 = C218169 - (C140988 * C216041) / q - C217661 / q;
    const double C133985 =
        (3 * C133976) / C143578 - (C133994 * C216043) / q - C218574;
    const double C134300 = C217847 - (C134273 * C216041) / q - C218574;
    const double C133706 =
        C217820 - (C133715 * C216043) / q + (3 * C133697) / C143578 - C218515;
    const double C134039 =
        C217820 - (C147508 * be + C133994 * C216044) / q - C218556;
    const double C132879 =
        C218523 - (C50666 * be + C132897 * C216044) / q - C218524;
    const double C140657 =
        C142677 / C143578 - (C140623 * C216041) / q - C218524;
    const double C137504 = C218672 - (C137521 * C216041) / q - C218673;
    const double C140368 =
        C139482 / C143578 - (C53193 * be + C140249 * C216044) / q - C218673;
    const double C133292 = C217769 - (C133418 * C216043) / q - C218552;
    const double C138836 =
        C137861 / C143578 - (C138809 * C216041) / q - C218552;
    const double C218513 = C217719 / q;
    const double C218485 = C217655 / q;
    const double C132878 =
        C218521 - (C145693 * be + C132896 * C216044) / q - C218522;
    const double C134390 =
        C133455 / C143578 - (C134363 * C216043) / q - C218522;
    const double C136613 =
        C135966 / C143578 - (C136595 * C216041) / q - C218522;
    const double C133256 = C218546 - (C133274 * C216043) / q - C218547;
    const double C134318 =
        C132717 / C143578 - (C147969 * be + C134273 * C216044) / q - C218547;
    const double C138764 =
        C137725 / C143578 - (C138737 * C216041) / q - C218547;
    const double C135551 = C218615 - (C135569 * C216041) / q - C218616;
    const double C136460 =
        C134453 / C143578 - (C151402 * be + C136397 * C216044) / q - C218616;
    const double C138683 =
        C136964 / C143578 - (C138629 * C216043) / q - C218616;
    const double C133257 = C218548 - (C133275 * C216043) / q - C218549;
    const double C140504 =
        C142507 / C143578 - (C140453 * C216041) / q - C218549;
    const double C135552 = C218617 - (C135570 * C216041) / q - C218618;
    const double C140351 =
        C140784 / C143578 - (C140249 * C216043) / q - C218618;
    const double C132699 =
        C217714 - (C132717 * C216043) / q + C218509 - C218510;
    const double C133365 =
        C217714 - (C51840 * be + C133275 * C216044) / q - C218558;
    const double C134561 = C217685 - (C134453 * C216043) / q - C218596;
    const double C134994 =
        (3 * C135030) / C143578 - (C135012 * C216041) / q - C218596;
    const double C218479 = C217649 / q;
    const double C218508 = C217713 / q;
    const double C136955 = C218659 - (C136973 * C216041) / q - C218660;
    const double C140903 =
        C218140 - (C51621 * be + C140784 * C216044) / q - C218660;
    const double C133040 =
        C136964 / q - (C133058 * C216041) / q + C218535 - C218536;
    const double C133949 =
        C217818 - (C147271 * be + C133886 * C216044) / q - C218536;
    const double C132312 = (3 * C132274) / C143578 -
                           (C42993 * be + C132331 * C216044) / q - C218491;
    const double C133491 = C217805 - (C133455 * C216041) / q - C218491;
    const double C132159 = C217631 - (C132292 * C216043) / q - C218483;
    const double C133814 =
        (3 * C132861) / C143578 - (C133787 * C216041) / q - C218483;
    const double C132311 = (3 * C132273) / C143578 -
                           (C144675 * be + C132330 * C216044) / q - C218490;
    const double C134102 =
        (3 * C133455) / C143578 - (C134084 * C216041) / q - C218490;
    const double C134444 = C218592 - (C134462 * C216041) / q - C218593;
    const double C139584 = C218140 - (C139482 * C216043) / q - C218593;
    const double C132482 =
        C134453 / q - (C132500 * C216041) / q + C218496 - C218497;
    const double C133661 = C217818 - (C133607 * C216043) / q - C218497;
    const double C132122 =
        (3 * C132103) / C143578 - (C132141 * C216043) / q - C218478;
    const double C132771 = C217724 - (C132717 * C216041) / q - C218478;
    const double C132121 =
        (3 * C132102) / C143578 - (C132140 * C216043) / q - C218477;
    const double C133742 =
        (3 * C132717) / C143578 - (C133715 * C216041) / q - C218477;
    const double C43415 =
        C43542 / q - (C43541 * C216043) / q + C215267 - C216085;
    const double C47068 =
        C46115 / C143578 - (C151298 * be + C47041 * C216041) / q - C216085;
    const double C42818 = C215200 - (C42965 * C216043) / q - C216057;
    const double C50697 =
        C148614 / C143578 - (C50637 * be + C50640 * C216041) / q - C216057;
    const double C42986 = C216058 - (C43007 * C216044) / q - C216064;
    const double C52080 =
        C215741 - (C52039 * be + C52042 * C216041) / q - C216064;
    const double C44117 =
        C44136 / q - (C44135 * C216044) / q + C216134 - C216135;
    const double C49898 =
        C215695 - (C155405 * be + C49880 * C216041) / q - C216135;
    const double C45567 = C216175 - (C45587 * C216044) / q - C216176;
    const double C53680 = C215741 - (C53623 * C216043) / q - C216176;
    const double C46690 =
        C46709 / q - (C46708 * C216044) / q + C216210 - C216211;
    const double C50186 = C215695 - (C50159 * C216043) / q - C216211;
    const double C42808 = C215199 - (C42955 * C216043) / q - C216056;
    const double C43596 =
        C215310 - (C50628 * be + C43542 * C216041) / q - C216056;
    const double C43416 =
        C42965 / C143578 - (C43542 * C216043) / q + C215268 - C216086;
    const double C45597 =
        C45547 / C143578 - (C45534 * be + C45537 * C216041) / q - C216086;
    const double C43632 = C215314 - (C43578 * C216043) / q - C216102;
    const double C45617 =
        C215467 - (C45574 * be + C45577 * C216041) / q - C216102;
    const double C43974 = C215339 - (C44100 * C216043) / q - C216125;
    const double C51476 =
        C53585 / C143578 - (C53573 * be + C51425 * C216041) / q - C216125;
    const double C45557 = C216173 - (C45577 * C216044) / q - C216174;
    const double C51510 = C52042 / C143578 - (C51459 * C216043) / q - C216174;
    const double C42776 = C216045 - (C42797 * C216043) / q - C216051;
    const double C50545 =
        C215715 - (C50485 * be + C50488 * C216041) / q - C216051;
    const double C43379 =
        C43398 / q - (C43397 * C216043) / q + C216079 - C216080;
    const double C46996 =
        C215568 - (C151178 * be + C46969 * C216041) / q - C216080;
    const double C90280 = C217387 - (C90298 * C216044) / q - C217388;
    const double C96154 =
        C96638 / C143578 - (C53611 * be + C96103 * C216043) / q - C217388;
    const double C88400 =
        C216531 - (C50666 * be + C88346 * C216043) / q - C217316;
    const double C90334 = C216684 - (C90298 * C216041) / q - C217316;
    const double C88742 =
        C216556 - (C51992 * be + C88868 * C216043) / q - C217339;
    const double C96120 = C98123 / C143578 - (C96069 * C216041) / q - C217339;
    const double C88184 = C87751 / C143578 -
                          (C50628 * be + C88310 * C216043) / q + C216485 -
                          C217300;
    const double C90316 = C90271 / C143578 - (C90262 * C216041) / q - C217300;
    const double C87609 =
        C216418 - (C42951 * be + C87742 * C216043) / q - C217270;
    const double C88364 = C216527 - (C88310 * C216041) / q - C217270;
    const double C90289 = C217389 - (C90307 * C216044) / q - C217390;
    const double C98208 =
        C216958 - (C53620 * be + C98157 * C216043) / q - C217390;
    const double C91427 =
        C91446 / q - (C91445 * C216044) / q + C217424 - C217425;
    const double C94892 =
        C216912 - (C155864 * be + C94865 * C216043) / q - C217425;
    const double C87770 = C217272 - (C87789 * C216044) / q - C217278;
    const double C96672 = C216958 - (C96638 * C216041) / q - C217278;
    const double C88885 =
        C88904 / q - (C88903 * C216044) / q + C217348 - C217349;
    const double C94604 = C216912 - (C94586 * C216041) / q - C217349;
    const double C88183 =
        C88310 / q - (C145663 * be + C88309 * C216043) / q + C216484 - C217299;
    const double C91805 = C90843 / C143578 - (C91778 * C216041) / q - C217299;
    const double C87618 =
        C216419 - (C42962 * be + C87751 * C216043) / q - C217271;
    const double C95353 = C172669 / C143578 - (C95302 * C216041) / q - C217271;
    const double C87580 =
        C217259 - (C42794 * be + C87599 * C216043) / q - C217265;
    const double C95217 = C216932 - (C95166 * C216041) / q - C217265;
    const double C88147 =
        C88166 / q - (C145426 * be + C88165 * C216043) / q + C217293 - C217294;
    const double C91733 = C216785 - (C91706 * C216041) / q - C217294;
    const double C134831 =
        C218601 - (C45574 * be + C134849 * C216044) / q - C218602;
    const double C140674 =
        C141158 / C143578 - (C140623 * C216043) / q - C218602;
    const double C132951 = C217745 - (C132897 * C216043) / q - C218530;
    const double C134885 = C217898 - (C134849 * C216041) / q - C218530;
    const double C133293 = C217770 - (C133419 * C216043) / q - C218553;
    const double C140640 =
        C142643 / C143578 - (C140589 * C216041) / q - C218553;
    const double C132735 =
        C132302 / C143578 - (C132861 * C216043) / q + C217699 - C218514;
    const double C134867 =
        C134822 / C143578 - (C134813 * C216041) / q - C218514;
    const double C132160 = C217632 - (C132293 * C216043) / q - C218484;
    const double C132915 = C217741 - (C132861 * C216041) / q - C218484;
    const double C134840 =
        C218603 - (C45584 * be + C134858 * C216044) / q - C218604;
    const double C142728 = C218172 - (C142677 * C216043) / q - C218604;
    const double C135947 = C135966 / q -
                           (C150757 * be + C135965 * C216044) / q + C218638 -
                           C218639;
    const double C139412 = C218126 - (C139385 * C216043) / q - C218639;
    const double C132321 =
        C218486 - (C43004 * be + C132340 * C216044) / q - C218492;
    const double C141192 = C218172 - (C141158 * C216041) / q - C218492;
    const double C133436 = C133455 / q -
                           (C146624 * be + C133454 * C216044) / q + C218562 -
                           C218563;
    const double C139124 = C218126 - (C139106 * C216041) / q - C218563;
    const double C132734 =
        C132861 / q - (C132860 * C216043) / q + C217698 - C218513;
    const double C136325 =
        C135372 / C143578 - (C136298 * C216041) / q - C218513;
    const double C132169 = C217633 - (C132302 * C216043) / q - C218485;
    const double C139873 =
        C196437 / C143578 - (C139822 * C216041) / q - C218485;
    const double C132131 = C218473 - (C132150 * C216043) / q - C218479;
    const double C139737 = C218146 - (C139686 * C216041) / q - C218479;
    const double C132698 =
        C132717 / q - (C132716 * C216043) / q + C218507 - C218508;
    const double C136253 = C217999 - (C136226 * C216041) / q - C218508;
    etx[0] = C42513;
    etx[1] = C42514;
    etx[2] = C42524;
    etx[3] = C42534;
    etx[4] = C42535;
    etx[5] = C42545;
    etx[6] = C42555;
    etx[7] = C42556;
    etx[8] = C42566;
    etx[9] = C42576;
    etx[10] = C42577;
    etx[11] = C42587;
    etx[12] = C42597;
    etx[13] = C42598;
    etx[14] = C42608;
    etx[15] = C42618;
    etx[16] = C42619;
    etx[17] = C42629;
    etx[18] = C42639;
    etx[19] = C42640;
    etx[20] = C42650;
    etx[21] = C42660;
    etx[22] = C42661;
    etx[23] = C42671;
    etx[24] = C42681;
    etx[25] = C42682;
    etx[26] = C42692;
    etx[27] = C42702;
    etx[28] = C42703;
    etx[29] = C42713;
    etx[30] = C42723;
    etx[31] = C42724;
    etx[32] = C42734;
    etx[33] = C42744;
    etx[34] = C42745;
    etx[35] = C42755;
    etx[36] = C42765;
    etx[37] = C42766;
    etx[38] = C42776;
    etx[39] = C42786;
    etx[40] = C42787;
    etx[41] = C42797;
    etx[42] = C42807;
    etx[43] = C42808;
    etx[44] = C42818;
    etx[45] = C42828;
    etx[46] = C42829;
    etx[47] = C42839;
    etx[48] = C42849;
    etx[49] = C42850;
    etx[50] = C42860;
    etx[51] = C42870;
    etx[52] = C42871;
    etx[53] = C42881;
    etx[54] = C42891;
    etx[55] = C42892;
    etx[56] = C42902;
    etx[57] = C42912;
    etx[58] = C42913;
    etx[59] = C42923;
    etx[60] = C42933;
    etx[61] = C42934;
    etx[62] = C42944;
    etx[63] = C42954;
    etx[64] = C42955;
    etx[65] = C42965;
    etx[66] = C42975;
    etx[67] = C42976;
    etx[68] = C42986;
    etx[69] = C42996;
    etx[70] = C42997;
    etx[71] = C43007;
    etx[72] = C43017;
    etx[73] = C43018;
    etx[74] = C43028;
    etx[75] = C43038;
    etx[76] = C43039;
    etx[77] = C43049;
    etx[78] = C43059;
    etx[79] = C43060;
    etx[80] = C43070;
    etx[81] = C43080;
    etx[82] = C43081;
    etx[83] = C43091;
    etx[84] = C43101;
    etx[85] = C43102;
    etx[86] = C43112;
    etx[87] = C43122;
    etx[88] = C43123;
    etx[89] = C43133;
    etx[90] = C43143;
    etx[91] = C43144;
    etx[92] = C43154;
    etx[93] = C43163;
    etx[94] = C43164;
    etx[95] = C43181;
    etx[96] = C43182;
    etx[97] = C43199;
    etx[98] = C43200;
    etx[99] = C43217;
    etx[100] = C43218;
    etx[101] = C43235;
    etx[102] = C43236;
    etx[103] = C43253;
    etx[104] = C43254;
    etx[105] = C43271;
    etx[106] = C43272;
    etx[107] = C43289;
    etx[108] = C43290;
    etx[109] = C43307;
    etx[110] = C43308;
    etx[111] = C43325;
    etx[112] = C43326;
    etx[113] = C43343;
    etx[114] = C43344;
    etx[115] = C43361;
    etx[116] = C43362;
    etx[117] = C43379;
    etx[118] = C43380;
    etx[119] = C43397;
    etx[120] = C43398;
    etx[121] = C43415;
    etx[122] = C43416;
    etx[123] = C43433;
    etx[124] = C43434;
    etx[125] = C43451;
    etx[126] = C43452;
    etx[127] = C43469;
    etx[128] = C43470;
    etx[129] = C43487;
    etx[130] = C43488;
    etx[131] = C43505;
    etx[132] = C43506;
    etx[133] = C43523;
    etx[134] = C43524;
    etx[135] = C43541;
    etx[136] = C43542;
    etx[137] = C43559;
    etx[138] = C43560;
    etx[139] = C43577;
    etx[140] = C43578;
    etx[141] = C43595;
    etx[142] = C43596;
    etx[143] = C43613;
    etx[144] = C43614;
    etx[145] = C43631;
    etx[146] = C43632;
    etx[147] = C43649;
    etx[148] = C43650;
    etx[149] = C43667;
    etx[150] = C43668;
    etx[151] = C43685;
    etx[152] = C43686;
    etx[153] = C43703;
    etx[154] = C43704;
    etx[155] = C43721;
    etx[156] = C43722;
    etx[157] = C43739;
    etx[158] = C43740;
    etx[159] = C43757;
    etx[160] = C43758;
    etx[161] = C43775;
    etx[162] = C43776;
    etx[163] = C43793;
    etx[164] = C43794;
    etx[165] = C43811;
    etx[166] = C43812;
    etx[167] = C43829;
    etx[168] = C43830;
    etx[169] = C43847;
    etx[170] = C43848;
    etx[171] = C43865;
    etx[172] = C43866;
    etx[173] = C43883;
    etx[174] = C43884;
    etx[175] = C43901;
    etx[176] = C43902;
    etx[177] = C43919;
    etx[178] = C43920;
    etx[179] = C43937;
    etx[180] = C43938;
    etx[181] = C43955;
    etx[182] = C43956;
    etx[183] = C43973;
    etx[184] = C43974;
    etx[185] = C43991;
    etx[186] = C43992;
    etx[187] = C44009;
    etx[188] = C44010;
    etx[189] = C44027;
    etx[190] = C44028;
    etx[191] = C44045;
    etx[192] = C44046;
    etx[193] = C44063;
    etx[194] = C44064;
    etx[195] = C44081;
    etx[196] = C44082;
    etx[197] = C44099;
    etx[198] = C44100;
    etx[199] = C44117;
    etx[200] = C44118;
    etx[201] = C44135;
    etx[202] = C44136;
    etx[203] = C44153;
    etx[204] = C44154;
    etx[205] = C44171;
    etx[206] = C44172;
    etx[207] = C44189;
    etx[208] = C44190;
    etx[209] = C44207;
    etx[210] = C44208;
    etx[211] = C44225;
    etx[212] = C44226;
    etx[213] = C44243;
    etx[214] = C44244;
    etx[215] = C44261;
    etx[216] = C44262;
    etx[217] = C44279;
    etx[218] = C44288;
    etx[219] = C44297;
    etx[220] = C44306;
    etx[221] = C44315;
    etx[222] = C44324;
    etx[223] = C44333;
    etx[224] = C44342;
    etx[225] = C44351;
    etx[226] = C44360;
    etx[227] = C44369;
    etx[228] = C44378;
    etx[229] = C44387;
    etx[230] = C44396;
    etx[231] = C44405;
    etx[232] = C44414;
    etx[233] = C44423;
    etx[234] = C44432;
    etx[235] = C44441;
    etx[236] = C44450;
    etx[237] = C44459;
    etx[238] = C44468;
    etx[239] = C44477;
    etx[240] = C44486;
    etx[241] = C44495;
    etx[242] = C44504;
    etx[243] = C44513;
    etx[244] = C44522;
    etx[245] = C44531;
    etx[246] = C44540;
    etx[247] = C44549;
    etx[248] = C44558;
    etx[249] = C44567;
    etx[250] = C44576;
    etx[251] = C44585;
    etx[252] = C44594;
    etx[253] = C44603;
    etx[254] = C44612;
    etx[255] = C44621;
    etx[256] = C44630;
    etx[257] = C44639;
    etx[258] = C44648;
    etx[259] = C44657;
    etx[260] = C44666;
    etx[261] = C44675;
    etx[262] = C44684;
    etx[263] = C44693;
    etx[264] = C44702;
    etx[265] = C44711;
    etx[266] = C44720;
    etx[267] = C44729;
    etx[268] = C44738;
    etx[269] = C44747;
    etx[270] = C44756;
    etx[271] = C44765;
    etx[272] = C44774;
    etx[273] = C44783;
    etx[274] = C44792;
    etx[275] = C44801;
    etx[276] = C44810;
    etx[277] = C44819;
    etx[278] = C44828;
    etx[279] = C44837;
    etx[280] = C44846;
    etx[281] = C44855;
    etx[282] = C44864;
    etx[283] = C44873;
    etx[284] = C44882;
    etx[285] = C44891;
    etx[286] = C44900;
    etx[287] = C44909;
    etx[288] = C44918;
    etx[289] = C44927;
    etx[290] = C44936;
    etx[291] = C44945;
    etx[292] = C44954;
    etx[293] = C44963;
    etx[294] = C44972;
    etx[295] = C44981;
    etx[296] = C44990;
    etx[297] = C44999;
    etx[298] = C45008;
    etx[299] = C45017;
    etx[300] = C45026;
    etx[301] = C45035;
    etx[302] = C45044;
    etx[303] = C45053;
    etx[304] = C45062;
    etx[305] = C45071;
    etx[306] = C45080;
    etx[307] = C45089;
    etx[308] = C45098;
    etx[309] = C45107;
    etx[310] = C45117;
    etx[311] = C45127;
    etx[312] = C45137;
    etx[313] = C45147;
    etx[314] = C45157;
    etx[315] = C45167;
    etx[316] = C45177;
    etx[317] = C45187;
    etx[318] = C45197;
    etx[319] = C45207;
    etx[320] = C45217;
    etx[321] = C45227;
    etx[322] = C45237;
    etx[323] = C45247;
    etx[324] = C45257;
    etx[325] = C45267;
    etx[326] = C45277;
    etx[327] = C45287;
    etx[328] = C45297;
    etx[329] = C45307;
    etx[330] = C45317;
    etx[331] = C45327;
    etx[332] = C45337;
    etx[333] = C45347;
    etx[334] = C45357;
    etx[335] = C45367;
    etx[336] = C45377;
    etx[337] = C45387;
    etx[338] = C45397;
    etx[339] = C45407;
    etx[340] = C45417;
    etx[341] = C45427;
    etx[342] = C45437;
    etx[343] = C45447;
    etx[344] = C45457;
    etx[345] = C45467;
    etx[346] = C45477;
    etx[347] = C45487;
    etx[348] = C45497;
    etx[349] = C45507;
    etx[350] = C45517;
    etx[351] = C45527;
    etx[352] = C45537;
    etx[353] = C45547;
    etx[354] = C45557;
    etx[355] = C45567;
    etx[356] = C45577;
    etx[357] = C45587;
    etx[358] = C45597;
    etx[359] = C45607;
    etx[360] = C45617;
    etx[361] = C45627;
    etx[362] = C45637;
    etx[363] = C45647;
    etx[364] = C45657;
    etx[365] = C45667;
    etx[366] = C45677;
    etx[367] = C45687;
    etx[368] = C45697;
    etx[369] = C45707;
    etx[370] = C45717;
    etx[371] = C45727;
    etx[372] = C45736;
    etx[373] = C45737;
    etx[374] = C45754;
    etx[375] = C45755;
    etx[376] = C45772;
    etx[377] = C45773;
    etx[378] = C45790;
    etx[379] = C45791;
    etx[380] = C45808;
    etx[381] = C45809;
    etx[382] = C45826;
    etx[383] = C45827;
    etx[384] = C45844;
    etx[385] = C45845;
    etx[386] = C45862;
    etx[387] = C45863;
    etx[388] = C45880;
    etx[389] = C45881;
    etx[390] = C45898;
    etx[391] = C45899;
    etx[392] = C45916;
    etx[393] = C45917;
    etx[394] = C45934;
    etx[395] = C45935;
    etx[396] = C45952;
    etx[397] = C45953;
    etx[398] = C45970;
    etx[399] = C45971;
    etx[400] = C45988;
    etx[401] = C45989;
    etx[402] = C46006;
    etx[403] = C46007;
    etx[404] = C46024;
    etx[405] = C46025;
    etx[406] = C46042;
    etx[407] = C46043;
    etx[408] = C46060;
    etx[409] = C46061;
    etx[410] = C46078;
    etx[411] = C46079;
    etx[412] = C46096;
    etx[413] = C46097;
    etx[414] = C46114;
    etx[415] = C46115;
    etx[416] = C46132;
    etx[417] = C46133;
    etx[418] = C46150;
    etx[419] = C46151;
    etx[420] = C46168;
    etx[421] = C46169;
    etx[422] = C46186;
    etx[423] = C46187;
    etx[424] = C46204;
    etx[425] = C46205;
    etx[426] = C46222;
    etx[427] = C46223;
    etx[428] = C46240;
    etx[429] = C46241;
    etx[430] = C46258;
    etx[431] = C46259;
    etx[432] = C46276;
    etx[433] = C46277;
    etx[434] = C46294;
    etx[435] = C46295;
    etx[436] = C46312;
    etx[437] = C46313;
    etx[438] = C46330;
    etx[439] = C46331;
    etx[440] = C46348;
    etx[441] = C46349;
    etx[442] = C46366;
    etx[443] = C46367;
    etx[444] = C46384;
    etx[445] = C46385;
    etx[446] = C46402;
    etx[447] = C46403;
    etx[448] = C46420;
    etx[449] = C46421;
    etx[450] = C46438;
    etx[451] = C46439;
    etx[452] = C46456;
    etx[453] = C46457;
    etx[454] = C46474;
    etx[455] = C46475;
    etx[456] = C46492;
    etx[457] = C46493;
    etx[458] = C46510;
    etx[459] = C46511;
    etx[460] = C46528;
    etx[461] = C46529;
    etx[462] = C46546;
    etx[463] = C46547;
    etx[464] = C46564;
    etx[465] = C46565;
    etx[466] = C46582;
    etx[467] = C46583;
    etx[468] = C46600;
    etx[469] = C46601;
    etx[470] = C46618;
    etx[471] = C46619;
    etx[472] = C46636;
    etx[473] = C46637;
    etx[474] = C46654;
    etx[475] = C46655;
    etx[476] = C46672;
    etx[477] = C46673;
    etx[478] = C46690;
    etx[479] = C46691;
    etx[480] = C46708;
    etx[481] = C46709;
    etx[482] = C46726;
    etx[483] = C46727;
    etx[484] = C46744;
    etx[485] = C46745;
    etx[486] = C46762;
    etx[487] = C46763;
    etx[488] = C46780;
    etx[489] = C46781;
    etx[490] = C46798;
    etx[491] = C46799;
    etx[492] = C46816;
    etx[493] = C46817;
    etx[494] = C46834;
    etx[495] = C46835;
    etx[496] = C46852;
    etx[497] = C46861;
    etx[498] = C46870;
    etx[499] = C46879;
    etx[500] = C46888;
    etx[501] = C46897;
    etx[502] = C46906;
    etx[503] = C46915;
    etx[504] = C46924;
    etx[505] = C46933;
    etx[506] = C46942;
    etx[507] = C46951;
    etx[508] = C46960;
    etx[509] = C46969;
    etx[510] = C46978;
    etx[511] = C46987;
    etx[512] = C46996;
    etx[513] = C47005;
    etx[514] = C47014;
    etx[515] = C47023;
    etx[516] = C47032;
    etx[517] = C47041;
    etx[518] = C47050;
    etx[519] = C47059;
    etx[520] = C47068;
    etx[521] = C47077;
    etx[522] = C47086;
    etx[523] = C47095;
    etx[524] = C47104;
    etx[525] = C47113;
    etx[526] = C47122;
    etx[527] = C47131;
    etx[528] = C47140;
    etx[529] = C47149;
    etx[530] = C47158;
    etx[531] = C47167;
    etx[532] = C47176;
    etx[533] = C47185;
    etx[534] = C47194;
    etx[535] = C47203;
    etx[536] = C47212;
    etx[537] = C47221;
    etx[538] = C47230;
    etx[539] = C47239;
    etx[540] = C47248;
    etx[541] = C47257;
    etx[542] = C47266;
    etx[543] = C47275;
    etx[544] = C47284;
    etx[545] = C47293;
    etx[546] = C47302;
    etx[547] = C47311;
    etx[548] = C47320;
    etx[549] = C47329;
    etx[550] = C47338;
    etx[551] = C47347;
    etx[552] = C47356;
    etx[553] = C47365;
    etx[554] = C47374;
    etx[555] = C47383;
    etx[556] = C47392;
    etx[557] = C47401;
    etx[558] = C47410;
    etx[559] = C47419;
    etx[560] = C47428;
    etx[561] = C47437;
    etx[562] = C47446;
    etx[563] = C47455;
    etx[564] = C47464;
    etx[565] = C47473;
    etx[566] = C47482;
    etx[567] = C47491;
    etx[568] = C47500;
    etx[569] = C47509;
    etx[570] = C47518;
    etx[571] = C47527;
    etx[572] = C47536;
    etx[573] = C47545;
    etx[574] = C47554;
    etx[575] = C47563;
    etx[576] = C47572;
    etx[577] = C47581;
    etx[578] = C47590;
    etx[579] = C47599;
    etx[580] = C47608;
    etx[581] = C47617;
    etx[582] = C47626;
    etx[583] = C47635;
    etx[584] = C47644;
    etx[585] = C47653;
    etx[586] = C47662;
    etx[587] = C47671;
    etx[588] = C47680;
    etx[589] = C47690;
    etx[590] = C47700;
    etx[591] = C47710;
    etx[592] = C47720;
    etx[593] = C47730;
    etx[594] = C47740;
    etx[595] = C47750;
    etx[596] = C47760;
    etx[597] = C47770;
    etx[598] = C47780;
    etx[599] = C47790;
    etx[600] = C47800;
    etx[601] = C47810;
    etx[602] = C47820;
    etx[603] = C47830;
    etx[604] = C47840;
    etx[605] = C47850;
    etx[606] = C47860;
    etx[607] = C47870;
    etx[608] = C47880;
    etx[609] = C47890;
    etx[610] = C47900;
    etx[611] = C47910;
    etx[612] = C47920;
    etx[613] = C47930;
    etx[614] = C47940;
    etx[615] = C47950;
    etx[616] = C47960;
    etx[617] = C47970;
    etx[618] = C47980;
    etx[619] = C47990;
    etx[620] = C48000;
    etx[621] = C48010;
    etx[622] = C48020;
    etx[623] = C48030;
    etx[624] = C48040;
    etx[625] = C48050;
    etx[626] = C48060;
    etx[627] = C48070;
    etx[628] = C48080;
    etx[629] = C48090;
    etx[630] = C48100;
    etx[631] = C48110;
    etx[632] = C48120;
    etx[633] = C48130;
    etx[634] = C48140;
    etx[635] = C48150;
    etx[636] = C48160;
    etx[637] = C48170;
    etx[638] = C48180;
    etx[639] = C48190;
    etx[640] = C48200;
    etx[641] = C48210;
    etx[642] = C48220;
    etx[643] = C48230;
    etx[644] = C48240;
    etx[645] = C48250;
    etx[646] = C48260;
    etx[647] = C48270;
    etx[648] = C48280;
    etx[649] = C48290;
    etx[650] = C48300;
    etx[651] = C48309;
    etx[652] = C48326;
    etx[653] = C48343;
    etx[654] = C48360;
    etx[655] = C48377;
    etx[656] = C48394;
    etx[657] = C48411;
    etx[658] = C48428;
    etx[659] = C48445;
    etx[660] = C48462;
    etx[661] = C48479;
    etx[662] = C48496;
    etx[663] = C48513;
    etx[664] = C48530;
    etx[665] = C48547;
    etx[666] = C48564;
    etx[667] = C48581;
    etx[668] = C48598;
    etx[669] = C48615;
    etx[670] = C48632;
    etx[671] = C48649;
    etx[672] = C48666;
    etx[673] = C48683;
    etx[674] = C48700;
    etx[675] = C48717;
    etx[676] = C48734;
    etx[677] = C48751;
    etx[678] = C48768;
    etx[679] = C48785;
    etx[680] = C48802;
    etx[681] = C48819;
    etx[682] = C48836;
    etx[683] = C48837;
    etx[684] = C48854;
    etx[685] = C48855;
    etx[686] = C48872;
    etx[687] = C48873;
    etx[688] = C48890;
    etx[689] = C48891;
    etx[690] = C48908;
    etx[691] = C48909;
    etx[692] = C48926;
    etx[693] = C48927;
    etx[694] = C48944;
    etx[695] = C48945;
    etx[696] = C48962;
    etx[697] = C48963;
    etx[698] = C48980;
    etx[699] = C48981;
    etx[700] = C48998;
    etx[701] = C48999;
    etx[702] = C49016;
    etx[703] = C49017;
    etx[704] = C49034;
    etx[705] = C49035;
    etx[706] = C49052;
    etx[707] = C49053;
    etx[708] = C49070;
    etx[709] = C49071;
    etx[710] = C49088;
    etx[711] = C49089;
    etx[712] = C49106;
    etx[713] = C49107;
    etx[714] = C49124;
    etx[715] = C49125;
    etx[716] = C49142;
    etx[717] = C49143;
    etx[718] = C49160;
    etx[719] = C49161;
    etx[720] = C49178;
    etx[721] = C49179;
    etx[722] = C49196;
    etx[723] = C49197;
    etx[724] = C49214;
    etx[725] = C49215;
    etx[726] = C49232;
    etx[727] = C49233;
    etx[728] = C49250;
    etx[729] = C49251;
    etx[730] = C49268;
    etx[731] = C49269;
    etx[732] = C49286;
    etx[733] = C49287;
    etx[734] = C49304;
    etx[735] = C49305;
    etx[736] = C49322;
    etx[737] = C49323;
    etx[738] = C49340;
    etx[739] = C49341;
    etx[740] = C49358;
    etx[741] = C49359;
    etx[742] = C49376;
    etx[743] = C49377;
    etx[744] = C49394;
    etx[745] = C49403;
    etx[746] = C49412;
    etx[747] = C49421;
    etx[748] = C49430;
    etx[749] = C49439;
    etx[750] = C49448;
    etx[751] = C49457;
    etx[752] = C49466;
    etx[753] = C49475;
    etx[754] = C49484;
    etx[755] = C49493;
    etx[756] = C49502;
    etx[757] = C49511;
    etx[758] = C49520;
    etx[759] = C49529;
    etx[760] = C49538;
    etx[761] = C49547;
    etx[762] = C49556;
    etx[763] = C49565;
    etx[764] = C49574;
    etx[765] = C49583;
    etx[766] = C49592;
    etx[767] = C49601;
    etx[768] = C49610;
    etx[769] = C49619;
    etx[770] = C49628;
    etx[771] = C49637;
    etx[772] = C49646;
    etx[773] = C49655;
    etx[774] = C49664;
    etx[775] = C49673;
    etx[776] = C49682;
    etx[777] = C49691;
    etx[778] = C49700;
    etx[779] = C49709;
    etx[780] = C49718;
    etx[781] = C49727;
    etx[782] = C49736;
    etx[783] = C49745;
    etx[784] = C49754;
    etx[785] = C49763;
    etx[786] = C49772;
    etx[787] = C49781;
    etx[788] = C49790;
    etx[789] = C49799;
    etx[790] = C49808;
    etx[791] = C49817;
    etx[792] = C49826;
    etx[793] = C49835;
    etx[794] = C49844;
    etx[795] = C49853;
    etx[796] = C49862;
    etx[797] = C49871;
    etx[798] = C49880;
    etx[799] = C49889;
    etx[800] = C49898;
    etx[801] = C49907;
    etx[802] = C49916;
    etx[803] = C49925;
    etx[804] = C49934;
    etx[805] = C49943;
    etx[806] = C49952;
    etx[807] = C49961;
    etx[808] = C49970;
    etx[809] = C49979;
    etx[810] = C49988;
    etx[811] = C49997;
    etx[812] = C50006;
    etx[813] = C50015;
    etx[814] = C50024;
    etx[815] = C50033;
    etx[816] = C50042;
    etx[817] = C50051;
    etx[818] = C50060;
    etx[819] = C50069;
    etx[820] = C50078;
    etx[821] = C50087;
    etx[822] = C50096;
    etx[823] = C50105;
    etx[824] = C50114;
    etx[825] = C50123;
    etx[826] = C50132;
    etx[827] = C50141;
    etx[828] = C50150;
    etx[829] = C50159;
    etx[830] = C50168;
    etx[831] = C50177;
    etx[832] = C50186;
    etx[833] = C50195;
    etx[834] = C50204;
    etx[835] = C50213;
    etx[836] = C50222;
    etx[837] = C50241;
    etx[838] = C50260;
    etx[839] = C50279;
    etx[840] = C50298;
    etx[841] = C50317;
    etx[842] = C50336;
    etx[843] = C50355;
    etx[844] = C50374;
    etx[845] = C50393;
    etx[846] = C50412;
    etx[847] = C50431;
    etx[848] = C50450;
    etx[849] = C50469;
    etx[850] = C50488;
    etx[851] = C50507;
    etx[852] = C50526;
    etx[853] = C50545;
    etx[854] = C50564;
    etx[855] = C50583;
    etx[856] = C50602;
    etx[857] = C50621;
    etx[858] = C50640;
    etx[859] = C50659;
    etx[860] = C50678;
    etx[861] = C50697;
    etx[862] = C50716;
    etx[863] = C50735;
    etx[864] = C50754;
    etx[865] = C50773;
    etx[866] = C50792;
    etx[867] = C50811;
    etx[868] = C51068;
    etx[869] = C51085;
    etx[870] = C51102;
    etx[871] = C51119;
    etx[872] = C51136;
    etx[873] = C51153;
    etx[874] = C51170;
    etx[875] = C51187;
    etx[876] = C51204;
    etx[877] = C51221;
    etx[878] = C51238;
    etx[879] = C51255;
    etx[880] = C51272;
    etx[881] = C51289;
    etx[882] = C51306;
    etx[883] = C51323;
    etx[884] = C51340;
    etx[885] = C51357;
    etx[886] = C51374;
    etx[887] = C51391;
    etx[888] = C51408;
    etx[889] = C51425;
    etx[890] = C51442;
    etx[891] = C51459;
    etx[892] = C51476;
    etx[893] = C51493;
    etx[894] = C51510;
    etx[895] = C51527;
    etx[896] = C51544;
    etx[897] = C51561;
    etx[898] = C51578;
    etx[899] = C51605;
    etx[900] = C51624;
    etx[901] = C51643;
    etx[902] = C51662;
    etx[903] = C51681;
    etx[904] = C51700;
    etx[905] = C51719;
    etx[906] = C51738;
    etx[907] = C51757;
    etx[908] = C51776;
    etx[909] = C51795;
    etx[910] = C51814;
    etx[911] = C51833;
    etx[912] = C51852;
    etx[913] = C51871;
    etx[914] = C51890;
    etx[915] = C51909;
    etx[916] = C51928;
    etx[917] = C51947;
    etx[918] = C51966;
    etx[919] = C51985;
    etx[920] = C52004;
    etx[921] = C52023;
    etx[922] = C52042;
    etx[923] = C52061;
    etx[924] = C52080;
    etx[925] = C52099;
    etx[926] = C52118;
    etx[927] = C52137;
    etx[928] = C52156;
    etx[929] = C52175;
    etx[930] = C53186;
    etx[931] = C53205;
    etx[932] = C53224;
    etx[933] = C53243;
    etx[934] = C53262;
    etx[935] = C53281;
    etx[936] = C53300;
    etx[937] = C53319;
    etx[938] = C53338;
    etx[939] = C53357;
    etx[940] = C53376;
    etx[941] = C53395;
    etx[942] = C53414;
    etx[943] = C53433;
    etx[944] = C53452;
    etx[945] = C53471;
    etx[946] = C53490;
    etx[947] = C53509;
    etx[948] = C53528;
    etx[949] = C53547;
    etx[950] = C53566;
    etx[951] = C53585;
    etx[952] = C53604;
    etx[953] = C53623;
    etx[954] = C53642;
    etx[955] = C53661;
    etx[956] = C53680;
    etx[957] = C53699;
    etx[958] = C53718;
    etx[959] = C53737;
    etx[960] = C53756;
    ety[0] = C87342;
    ety[1] = C87343;
    ety[2] = C87352;
    ety[3] = C87361;
    ety[4] = C87362;
    ety[5] = C87371;
    ety[6] = C87380;
    ety[7] = C87381;
    ety[8] = C87390;
    ety[9] = C87399;
    ety[10] = C87400;
    ety[11] = C87409;
    ety[12] = C87418;
    ety[13] = C87419;
    ety[14] = C87428;
    ety[15] = C87437;
    ety[16] = C87438;
    ety[17] = C87447;
    ety[18] = C87456;
    ety[19] = C87457;
    ety[20] = C87466;
    ety[21] = C87475;
    ety[22] = C87476;
    ety[23] = C87485;
    ety[24] = C87494;
    ety[25] = C87495;
    ety[26] = C87504;
    ety[27] = C87513;
    ety[28] = C87514;
    ety[29] = C87523;
    ety[30] = C87532;
    ety[31] = C87533;
    ety[32] = C87542;
    ety[33] = C87551;
    ety[34] = C87552;
    ety[35] = C87561;
    ety[36] = C87570;
    ety[37] = C87571;
    ety[38] = C87580;
    ety[39] = C87589;
    ety[40] = C87590;
    ety[41] = C87599;
    ety[42] = C87608;
    ety[43] = C87609;
    ety[44] = C87618;
    ety[45] = C87627;
    ety[46] = C87628;
    ety[47] = C87637;
    ety[48] = C87646;
    ety[49] = C87647;
    ety[50] = C87656;
    ety[51] = C87665;
    ety[52] = C87666;
    ety[53] = C87675;
    ety[54] = C87684;
    ety[55] = C87685;
    ety[56] = C87694;
    ety[57] = C87703;
    ety[58] = C87704;
    ety[59] = C87713;
    ety[60] = C87722;
    ety[61] = C87723;
    ety[62] = C87732;
    ety[63] = C87741;
    ety[64] = C87742;
    ety[65] = C87751;
    ety[66] = C87760;
    ety[67] = C87761;
    ety[68] = C87770;
    ety[69] = C87779;
    ety[70] = C87780;
    ety[71] = C87789;
    ety[72] = C87798;
    ety[73] = C87799;
    ety[74] = C87808;
    ety[75] = C87817;
    ety[76] = C87818;
    ety[77] = C87827;
    ety[78] = C87836;
    ety[79] = C87837;
    ety[80] = C87846;
    ety[81] = C87855;
    ety[82] = C87856;
    ety[83] = C87865;
    ety[84] = C87874;
    ety[85] = C87875;
    ety[86] = C87884;
    ety[87] = C87893;
    ety[88] = C87894;
    ety[89] = C87903;
    ety[90] = C87912;
    ety[91] = C87913;
    ety[92] = C87922;
    ety[93] = C87931;
    ety[94] = C87932;
    ety[95] = C87949;
    ety[96] = C87950;
    ety[97] = C87967;
    ety[98] = C87968;
    ety[99] = C87985;
    ety[100] = C87986;
    ety[101] = C88003;
    ety[102] = C88004;
    ety[103] = C88021;
    ety[104] = C88022;
    ety[105] = C88039;
    ety[106] = C88040;
    ety[107] = C88057;
    ety[108] = C88058;
    ety[109] = C88075;
    ety[110] = C88076;
    ety[111] = C88093;
    ety[112] = C88094;
    ety[113] = C88111;
    ety[114] = C88112;
    ety[115] = C88129;
    ety[116] = C88130;
    ety[117] = C88147;
    ety[118] = C88148;
    ety[119] = C88165;
    ety[120] = C88166;
    ety[121] = C88183;
    ety[122] = C88184;
    ety[123] = C88201;
    ety[124] = C88202;
    ety[125] = C88219;
    ety[126] = C88220;
    ety[127] = C88237;
    ety[128] = C88238;
    ety[129] = C88255;
    ety[130] = C88256;
    ety[131] = C88273;
    ety[132] = C88274;
    ety[133] = C88291;
    ety[134] = C88292;
    ety[135] = C88309;
    ety[136] = C88310;
    ety[137] = C88327;
    ety[138] = C88328;
    ety[139] = C88345;
    ety[140] = C88346;
    ety[141] = C88363;
    ety[142] = C88364;
    ety[143] = C88381;
    ety[144] = C88382;
    ety[145] = C88399;
    ety[146] = C88400;
    ety[147] = C88417;
    ety[148] = C88418;
    ety[149] = C88435;
    ety[150] = C88436;
    ety[151] = C88453;
    ety[152] = C88454;
    ety[153] = C88471;
    ety[154] = C88472;
    ety[155] = C88489;
    ety[156] = C88490;
    ety[157] = C88507;
    ety[158] = C88508;
    ety[159] = C88525;
    ety[160] = C88526;
    ety[161] = C88543;
    ety[162] = C88544;
    ety[163] = C88561;
    ety[164] = C88562;
    ety[165] = C88579;
    ety[166] = C88580;
    ety[167] = C88597;
    ety[168] = C88598;
    ety[169] = C88615;
    ety[170] = C88616;
    ety[171] = C88633;
    ety[172] = C88634;
    ety[173] = C88651;
    ety[174] = C88652;
    ety[175] = C88669;
    ety[176] = C88670;
    ety[177] = C88687;
    ety[178] = C88688;
    ety[179] = C88705;
    ety[180] = C88706;
    ety[181] = C88723;
    ety[182] = C88724;
    ety[183] = C88741;
    ety[184] = C88742;
    ety[185] = C88759;
    ety[186] = C88760;
    ety[187] = C88777;
    ety[188] = C88778;
    ety[189] = C88795;
    ety[190] = C88796;
    ety[191] = C88813;
    ety[192] = C88814;
    ety[193] = C88831;
    ety[194] = C88832;
    ety[195] = C88849;
    ety[196] = C88850;
    ety[197] = C88867;
    ety[198] = C88868;
    ety[199] = C88885;
    ety[200] = C88886;
    ety[201] = C88903;
    ety[202] = C88904;
    ety[203] = C88921;
    ety[204] = C88922;
    ety[205] = C88939;
    ety[206] = C88940;
    ety[207] = C88957;
    ety[208] = C88958;
    ety[209] = C88975;
    ety[210] = C88976;
    ety[211] = C88993;
    ety[212] = C88994;
    ety[213] = C89011;
    ety[214] = C89012;
    ety[215] = C89029;
    ety[216] = C89030;
    ety[217] = C89047;
    ety[218] = C89056;
    ety[219] = C89065;
    ety[220] = C89074;
    ety[221] = C89083;
    ety[222] = C89092;
    ety[223] = C89101;
    ety[224] = C89110;
    ety[225] = C89119;
    ety[226] = C89128;
    ety[227] = C89137;
    ety[228] = C89146;
    ety[229] = C89155;
    ety[230] = C89164;
    ety[231] = C89173;
    ety[232] = C89182;
    ety[233] = C89191;
    ety[234] = C89200;
    ety[235] = C89209;
    ety[236] = C89218;
    ety[237] = C89227;
    ety[238] = C89236;
    ety[239] = C89245;
    ety[240] = C89254;
    ety[241] = C89263;
    ety[242] = C89272;
    ety[243] = C89281;
    ety[244] = C89290;
    ety[245] = C89299;
    ety[246] = C89308;
    ety[247] = C89317;
    ety[248] = C89326;
    ety[249] = C89335;
    ety[250] = C89344;
    ety[251] = C89353;
    ety[252] = C89362;
    ety[253] = C89371;
    ety[254] = C89380;
    ety[255] = C89389;
    ety[256] = C89398;
    ety[257] = C89407;
    ety[258] = C89416;
    ety[259] = C89425;
    ety[260] = C89434;
    ety[261] = C89443;
    ety[262] = C89452;
    ety[263] = C89461;
    ety[264] = C89470;
    ety[265] = C89479;
    ety[266] = C89488;
    ety[267] = C89497;
    ety[268] = C89506;
    ety[269] = C89515;
    ety[270] = C89524;
    ety[271] = C89533;
    ety[272] = C89542;
    ety[273] = C89551;
    ety[274] = C89560;
    ety[275] = C89569;
    ety[276] = C89578;
    ety[277] = C89587;
    ety[278] = C89596;
    ety[279] = C89605;
    ety[280] = C89614;
    ety[281] = C89623;
    ety[282] = C89632;
    ety[283] = C89641;
    ety[284] = C89650;
    ety[285] = C89659;
    ety[286] = C89668;
    ety[287] = C89677;
    ety[288] = C89686;
    ety[289] = C89695;
    ety[290] = C89704;
    ety[291] = C89713;
    ety[292] = C89722;
    ety[293] = C89731;
    ety[294] = C89740;
    ety[295] = C89749;
    ety[296] = C89758;
    ety[297] = C89767;
    ety[298] = C89776;
    ety[299] = C89785;
    ety[300] = C89794;
    ety[301] = C89803;
    ety[302] = C89812;
    ety[303] = C89821;
    ety[304] = C89830;
    ety[305] = C89839;
    ety[306] = C89848;
    ety[307] = C89857;
    ety[308] = C89866;
    ety[309] = C89875;
    ety[310] = C89884;
    ety[311] = C89893;
    ety[312] = C89902;
    ety[313] = C89911;
    ety[314] = C89920;
    ety[315] = C89929;
    ety[316] = C89938;
    ety[317] = C89947;
    ety[318] = C89956;
    ety[319] = C89965;
    ety[320] = C89974;
    ety[321] = C89983;
    ety[322] = C89992;
    ety[323] = C90001;
    ety[324] = C90010;
    ety[325] = C90019;
    ety[326] = C90028;
    ety[327] = C90037;
    ety[328] = C90046;
    ety[329] = C90055;
    ety[330] = C90064;
    ety[331] = C90073;
    ety[332] = C90082;
    ety[333] = C90091;
    ety[334] = C90100;
    ety[335] = C90109;
    ety[336] = C90118;
    ety[337] = C90127;
    ety[338] = C90136;
    ety[339] = C90145;
    ety[340] = C90154;
    ety[341] = C90163;
    ety[342] = C90172;
    ety[343] = C90181;
    ety[344] = C90190;
    ety[345] = C90199;
    ety[346] = C90208;
    ety[347] = C90217;
    ety[348] = C90226;
    ety[349] = C90235;
    ety[350] = C90244;
    ety[351] = C90253;
    ety[352] = C90262;
    ety[353] = C90271;
    ety[354] = C90280;
    ety[355] = C90289;
    ety[356] = C90298;
    ety[357] = C90307;
    ety[358] = C90316;
    ety[359] = C90325;
    ety[360] = C90334;
    ety[361] = C90343;
    ety[362] = C90352;
    ety[363] = C90361;
    ety[364] = C90370;
    ety[365] = C90379;
    ety[366] = C90388;
    ety[367] = C90397;
    ety[368] = C90406;
    ety[369] = C90415;
    ety[370] = C90424;
    ety[371] = C90433;
    ety[372] = C90443;
    ety[373] = C90444;
    ety[374] = C90462;
    ety[375] = C90463;
    ety[376] = C90481;
    ety[377] = C90482;
    ety[378] = C90500;
    ety[379] = C90501;
    ety[380] = C90519;
    ety[381] = C90520;
    ety[382] = C90538;
    ety[383] = C90539;
    ety[384] = C90557;
    ety[385] = C90558;
    ety[386] = C90576;
    ety[387] = C90577;
    ety[388] = C90595;
    ety[389] = C90596;
    ety[390] = C90614;
    ety[391] = C90615;
    ety[392] = C90633;
    ety[393] = C90634;
    ety[394] = C90652;
    ety[395] = C90653;
    ety[396] = C90671;
    ety[397] = C90672;
    ety[398] = C90690;
    ety[399] = C90691;
    ety[400] = C90709;
    ety[401] = C90710;
    ety[402] = C90728;
    ety[403] = C90729;
    ety[404] = C90747;
    ety[405] = C90748;
    ety[406] = C90766;
    ety[407] = C90767;
    ety[408] = C90785;
    ety[409] = C90786;
    ety[410] = C90804;
    ety[411] = C90805;
    ety[412] = C90823;
    ety[413] = C90824;
    ety[414] = C90842;
    ety[415] = C90843;
    ety[416] = C90861;
    ety[417] = C90862;
    ety[418] = C90880;
    ety[419] = C90881;
    ety[420] = C90899;
    ety[421] = C90900;
    ety[422] = C90918;
    ety[423] = C90919;
    ety[424] = C90937;
    ety[425] = C90938;
    ety[426] = C90956;
    ety[427] = C90957;
    ety[428] = C90975;
    ety[429] = C90976;
    ety[430] = C90994;
    ety[431] = C90995;
    ety[432] = C91013;
    ety[433] = C91014;
    ety[434] = C91031;
    ety[435] = C91032;
    ety[436] = C91049;
    ety[437] = C91050;
    ety[438] = C91067;
    ety[439] = C91068;
    ety[440] = C91085;
    ety[441] = C91086;
    ety[442] = C91103;
    ety[443] = C91104;
    ety[444] = C91121;
    ety[445] = C91122;
    ety[446] = C91139;
    ety[447] = C91140;
    ety[448] = C91157;
    ety[449] = C91158;
    ety[450] = C91175;
    ety[451] = C91176;
    ety[452] = C91193;
    ety[453] = C91194;
    ety[454] = C91211;
    ety[455] = C91212;
    ety[456] = C91229;
    ety[457] = C91230;
    ety[458] = C91247;
    ety[459] = C91248;
    ety[460] = C91265;
    ety[461] = C91266;
    ety[462] = C91283;
    ety[463] = C91284;
    ety[464] = C91301;
    ety[465] = C91302;
    ety[466] = C91319;
    ety[467] = C91320;
    ety[468] = C91337;
    ety[469] = C91338;
    ety[470] = C91355;
    ety[471] = C91356;
    ety[472] = C91373;
    ety[473] = C91374;
    ety[474] = C91391;
    ety[475] = C91392;
    ety[476] = C91409;
    ety[477] = C91410;
    ety[478] = C91427;
    ety[479] = C91428;
    ety[480] = C91445;
    ety[481] = C91446;
    ety[482] = C91463;
    ety[483] = C91464;
    ety[484] = C91481;
    ety[485] = C91482;
    ety[486] = C91499;
    ety[487] = C91500;
    ety[488] = C91517;
    ety[489] = C91518;
    ety[490] = C91535;
    ety[491] = C91536;
    ety[492] = C91553;
    ety[493] = C91554;
    ety[494] = C91571;
    ety[495] = C91572;
    ety[496] = C91589;
    ety[497] = C91598;
    ety[498] = C91607;
    ety[499] = C91616;
    ety[500] = C91625;
    ety[501] = C91634;
    ety[502] = C91643;
    ety[503] = C91652;
    ety[504] = C91661;
    ety[505] = C91670;
    ety[506] = C91679;
    ety[507] = C91688;
    ety[508] = C91697;
    ety[509] = C91706;
    ety[510] = C91715;
    ety[511] = C91724;
    ety[512] = C91733;
    ety[513] = C91742;
    ety[514] = C91751;
    ety[515] = C91760;
    ety[516] = C91769;
    ety[517] = C91778;
    ety[518] = C91787;
    ety[519] = C91796;
    ety[520] = C91805;
    ety[521] = C91814;
    ety[522] = C91823;
    ety[523] = C91832;
    ety[524] = C91841;
    ety[525] = C91850;
    ety[526] = C91859;
    ety[527] = C91868;
    ety[528] = C91877;
    ety[529] = C91886;
    ety[530] = C91895;
    ety[531] = C91904;
    ety[532] = C91913;
    ety[533] = C91922;
    ety[534] = C91931;
    ety[535] = C91940;
    ety[536] = C91949;
    ety[537] = C91958;
    ety[538] = C91967;
    ety[539] = C91976;
    ety[540] = C91985;
    ety[541] = C91994;
    ety[542] = C92003;
    ety[543] = C92012;
    ety[544] = C92021;
    ety[545] = C92030;
    ety[546] = C92039;
    ety[547] = C92048;
    ety[548] = C92057;
    ety[549] = C92066;
    ety[550] = C92075;
    ety[551] = C92084;
    ety[552] = C92093;
    ety[553] = C92102;
    ety[554] = C92111;
    ety[555] = C92120;
    ety[556] = C92129;
    ety[557] = C92138;
    ety[558] = C92147;
    ety[559] = C92156;
    ety[560] = C92165;
    ety[561] = C92174;
    ety[562] = C92183;
    ety[563] = C92192;
    ety[564] = C92201;
    ety[565] = C92210;
    ety[566] = C92219;
    ety[567] = C92228;
    ety[568] = C92237;
    ety[569] = C92246;
    ety[570] = C92255;
    ety[571] = C92264;
    ety[572] = C92273;
    ety[573] = C92282;
    ety[574] = C92291;
    ety[575] = C92300;
    ety[576] = C92309;
    ety[577] = C92318;
    ety[578] = C92327;
    ety[579] = C92336;
    ety[580] = C92345;
    ety[581] = C92354;
    ety[582] = C92363;
    ety[583] = C92372;
    ety[584] = C92381;
    ety[585] = C92390;
    ety[586] = C92399;
    ety[587] = C92408;
    ety[588] = C92417;
    ety[589] = C92426;
    ety[590] = C92435;
    ety[591] = C92444;
    ety[592] = C92453;
    ety[593] = C92462;
    ety[594] = C92471;
    ety[595] = C92480;
    ety[596] = C92489;
    ety[597] = C92498;
    ety[598] = C92507;
    ety[599] = C92516;
    ety[600] = C92525;
    ety[601] = C92534;
    ety[602] = C92543;
    ety[603] = C92552;
    ety[604] = C92561;
    ety[605] = C92570;
    ety[606] = C92579;
    ety[607] = C92588;
    ety[608] = C92597;
    ety[609] = C92606;
    ety[610] = C92615;
    ety[611] = C92624;
    ety[612] = C92633;
    ety[613] = C92642;
    ety[614] = C92651;
    ety[615] = C92660;
    ety[616] = C92669;
    ety[617] = C92678;
    ety[618] = C92687;
    ety[619] = C92696;
    ety[620] = C92705;
    ety[621] = C92714;
    ety[622] = C92723;
    ety[623] = C92732;
    ety[624] = C92741;
    ety[625] = C92750;
    ety[626] = C92759;
    ety[627] = C92768;
    ety[628] = C92777;
    ety[629] = C92786;
    ety[630] = C92795;
    ety[631] = C92804;
    ety[632] = C92813;
    ety[633] = C92822;
    ety[634] = C92831;
    ety[635] = C92840;
    ety[636] = C92849;
    ety[637] = C92858;
    ety[638] = C92867;
    ety[639] = C92876;
    ety[640] = C92885;
    ety[641] = C92894;
    ety[642] = C92903;
    ety[643] = C92912;
    ety[644] = C92921;
    ety[645] = C92930;
    ety[646] = C92939;
    ety[647] = C92948;
    ety[648] = C92957;
    ety[649] = C92966;
    ety[650] = C92975;
    ety[651] = C92985;
    ety[652] = C93003;
    ety[653] = C93021;
    ety[654] = C93039;
    ety[655] = C93057;
    ety[656] = C93075;
    ety[657] = C93093;
    ety[658] = C93111;
    ety[659] = C93129;
    ety[660] = C93147;
    ety[661] = C93165;
    ety[662] = C93183;
    ety[663] = C93201;
    ety[664] = C93219;
    ety[665] = C93237;
    ety[666] = C93255;
    ety[667] = C93273;
    ety[668] = C93291;
    ety[669] = C93309;
    ety[670] = C93327;
    ety[671] = C93345;
    ety[672] = C93363;
    ety[673] = C93381;
    ety[674] = C93399;
    ety[675] = C93417;
    ety[676] = C93435;
    ety[677] = C93453;
    ety[678] = C93471;
    ety[679] = C93489;
    ety[680] = C93507;
    ety[681] = C93525;
    ety[682] = C93542;
    ety[683] = C93543;
    ety[684] = C93560;
    ety[685] = C93561;
    ety[686] = C93578;
    ety[687] = C93579;
    ety[688] = C93596;
    ety[689] = C93597;
    ety[690] = C93614;
    ety[691] = C93615;
    ety[692] = C93632;
    ety[693] = C93633;
    ety[694] = C93650;
    ety[695] = C93651;
    ety[696] = C93668;
    ety[697] = C93669;
    ety[698] = C93686;
    ety[699] = C93687;
    ety[700] = C93704;
    ety[701] = C93705;
    ety[702] = C93722;
    ety[703] = C93723;
    ety[704] = C93740;
    ety[705] = C93741;
    ety[706] = C93758;
    ety[707] = C93759;
    ety[708] = C93776;
    ety[709] = C93777;
    ety[710] = C93794;
    ety[711] = C93795;
    ety[712] = C93812;
    ety[713] = C93813;
    ety[714] = C93830;
    ety[715] = C93831;
    ety[716] = C93848;
    ety[717] = C93849;
    ety[718] = C93866;
    ety[719] = C93867;
    ety[720] = C93884;
    ety[721] = C93885;
    ety[722] = C93902;
    ety[723] = C93903;
    ety[724] = C93920;
    ety[725] = C93921;
    ety[726] = C93938;
    ety[727] = C93939;
    ety[728] = C93956;
    ety[729] = C93957;
    ety[730] = C93974;
    ety[731] = C93975;
    ety[732] = C93992;
    ety[733] = C93993;
    ety[734] = C94010;
    ety[735] = C94011;
    ety[736] = C94028;
    ety[737] = C94029;
    ety[738] = C94046;
    ety[739] = C94047;
    ety[740] = C94064;
    ety[741] = C94065;
    ety[742] = C94082;
    ety[743] = C94083;
    ety[744] = C94100;
    ety[745] = C94109;
    ety[746] = C94118;
    ety[747] = C94127;
    ety[748] = C94136;
    ety[749] = C94145;
    ety[750] = C94154;
    ety[751] = C94163;
    ety[752] = C94172;
    ety[753] = C94181;
    ety[754] = C94190;
    ety[755] = C94199;
    ety[756] = C94208;
    ety[757] = C94217;
    ety[758] = C94226;
    ety[759] = C94235;
    ety[760] = C94244;
    ety[761] = C94253;
    ety[762] = C94262;
    ety[763] = C94271;
    ety[764] = C94280;
    ety[765] = C94289;
    ety[766] = C94298;
    ety[767] = C94307;
    ety[768] = C94316;
    ety[769] = C94325;
    ety[770] = C94334;
    ety[771] = C94343;
    ety[772] = C94352;
    ety[773] = C94361;
    ety[774] = C94370;
    ety[775] = C94379;
    ety[776] = C94388;
    ety[777] = C94397;
    ety[778] = C94406;
    ety[779] = C94415;
    ety[780] = C94424;
    ety[781] = C94433;
    ety[782] = C94442;
    ety[783] = C94451;
    ety[784] = C94460;
    ety[785] = C94469;
    ety[786] = C94478;
    ety[787] = C94487;
    ety[788] = C94496;
    ety[789] = C94505;
    ety[790] = C94514;
    ety[791] = C94523;
    ety[792] = C94532;
    ety[793] = C94541;
    ety[794] = C94550;
    ety[795] = C94559;
    ety[796] = C94568;
    ety[797] = C94577;
    ety[798] = C94586;
    ety[799] = C94595;
    ety[800] = C94604;
    ety[801] = C94613;
    ety[802] = C94622;
    ety[803] = C94631;
    ety[804] = C94640;
    ety[805] = C94649;
    ety[806] = C94658;
    ety[807] = C94667;
    ety[808] = C94676;
    ety[809] = C94685;
    ety[810] = C94694;
    ety[811] = C94703;
    ety[812] = C94712;
    ety[813] = C94721;
    ety[814] = C94730;
    ety[815] = C94739;
    ety[816] = C94748;
    ety[817] = C94757;
    ety[818] = C94766;
    ety[819] = C94775;
    ety[820] = C94784;
    ety[821] = C94793;
    ety[822] = C94802;
    ety[823] = C94811;
    ety[824] = C94820;
    ety[825] = C94829;
    ety[826] = C94838;
    ety[827] = C94847;
    ety[828] = C94856;
    ety[829] = C94865;
    ety[830] = C94874;
    ety[831] = C94883;
    ety[832] = C94892;
    ety[833] = C94901;
    ety[834] = C94910;
    ety[835] = C94919;
    ety[836] = C94928;
    ety[837] = C94945;
    ety[838] = C94962;
    ety[839] = C94979;
    ety[840] = C94996;
    ety[841] = C95013;
    ety[842] = C95030;
    ety[843] = C95047;
    ety[844] = C95064;
    ety[845] = C95081;
    ety[846] = C95098;
    ety[847] = C95115;
    ety[848] = C95132;
    ety[849] = C95149;
    ety[850] = C95166;
    ety[851] = C95183;
    ety[852] = C95200;
    ety[853] = C95217;
    ety[854] = C95234;
    ety[855] = C95251;
    ety[856] = C95268;
    ety[857] = C95285;
    ety[858] = C95302;
    ety[859] = C95319;
    ety[860] = C95336;
    ety[861] = C95353;
    ety[862] = C95370;
    ety[863] = C95387;
    ety[864] = C95404;
    ety[865] = C95421;
    ety[866] = C95438;
    ety[867] = C95455;
    ety[868] = C95712;
    ety[869] = C95729;
    ety[870] = C95746;
    ety[871] = C95763;
    ety[872] = C95780;
    ety[873] = C95797;
    ety[874] = C95814;
    ety[875] = C95831;
    ety[876] = C95848;
    ety[877] = C95865;
    ety[878] = C95882;
    ety[879] = C95899;
    ety[880] = C95916;
    ety[881] = C95933;
    ety[882] = C95950;
    ety[883] = C95967;
    ety[884] = C95984;
    ety[885] = C96001;
    ety[886] = C96018;
    ety[887] = C96035;
    ety[888] = C96052;
    ety[889] = C96069;
    ety[890] = C96086;
    ety[891] = C96103;
    ety[892] = C96120;
    ety[893] = C96137;
    ety[894] = C96154;
    ety[895] = C96171;
    ety[896] = C96188;
    ety[897] = C96205;
    ety[898] = C96222;
    ety[899] = C96247;
    ety[900] = C96264;
    ety[901] = C96281;
    ety[902] = C96298;
    ety[903] = C96315;
    ety[904] = C96332;
    ety[905] = C96349;
    ety[906] = C96366;
    ety[907] = C96383;
    ety[908] = C96400;
    ety[909] = C96417;
    ety[910] = C96434;
    ety[911] = C96451;
    ety[912] = C96468;
    ety[913] = C96485;
    ety[914] = C96502;
    ety[915] = C96519;
    ety[916] = C96536;
    ety[917] = C96553;
    ety[918] = C96570;
    ety[919] = C96587;
    ety[920] = C96604;
    ety[921] = C96621;
    ety[922] = C96638;
    ety[923] = C96655;
    ety[924] = C96672;
    ety[925] = C96689;
    ety[926] = C96706;
    ety[927] = C96723;
    ety[928] = C96740;
    ety[929] = C96757;
    ety[930] = C97766;
    ety[931] = C97783;
    ety[932] = C97800;
    ety[933] = C97817;
    ety[934] = C97834;
    ety[935] = C97851;
    ety[936] = C97868;
    ety[937] = C97885;
    ety[938] = C97902;
    ety[939] = C97919;
    ety[940] = C97936;
    ety[941] = C97953;
    ety[942] = C97970;
    ety[943] = C97987;
    ety[944] = C98004;
    ety[945] = C98021;
    ety[946] = C98038;
    ety[947] = C98055;
    ety[948] = C98072;
    ety[949] = C98089;
    ety[950] = C98106;
    ety[951] = C98123;
    ety[952] = C98140;
    ety[953] = C98157;
    ety[954] = C98174;
    ety[955] = C98191;
    ety[956] = C98208;
    ety[957] = C98225;
    ety[958] = C98242;
    ety[959] = C98259;
    ety[960] = C98276;
    etz[0] = C131893;
    etz[1] = C131894;
    etz[2] = C131903;
    etz[3] = C131912;
    etz[4] = C131913;
    etz[5] = C131922;
    etz[6] = C131931;
    etz[7] = C131932;
    etz[8] = C131941;
    etz[9] = C131950;
    etz[10] = C131951;
    etz[11] = C131960;
    etz[12] = C131969;
    etz[13] = C131970;
    etz[14] = C131979;
    etz[15] = C131988;
    etz[16] = C131989;
    etz[17] = C131998;
    etz[18] = C132007;
    etz[19] = C132008;
    etz[20] = C132017;
    etz[21] = C132026;
    etz[22] = C132027;
    etz[23] = C132036;
    etz[24] = C132045;
    etz[25] = C132046;
    etz[26] = C132055;
    etz[27] = C132064;
    etz[28] = C132065;
    etz[29] = C132074;
    etz[30] = C132083;
    etz[31] = C132084;
    etz[32] = C132093;
    etz[33] = C132102;
    etz[34] = C132103;
    etz[35] = C132112;
    etz[36] = C132121;
    etz[37] = C132122;
    etz[38] = C132131;
    etz[39] = C132140;
    etz[40] = C132141;
    etz[41] = C132150;
    etz[42] = C132159;
    etz[43] = C132160;
    etz[44] = C132169;
    etz[45] = C132178;
    etz[46] = C132179;
    etz[47] = C132188;
    etz[48] = C132197;
    etz[49] = C132198;
    etz[50] = C132207;
    etz[51] = C132216;
    etz[52] = C132217;
    etz[53] = C132226;
    etz[54] = C132235;
    etz[55] = C132236;
    etz[56] = C132245;
    etz[57] = C132254;
    etz[58] = C132255;
    etz[59] = C132264;
    etz[60] = C132273;
    etz[61] = C132274;
    etz[62] = C132283;
    etz[63] = C132292;
    etz[64] = C132293;
    etz[65] = C132302;
    etz[66] = C132311;
    etz[67] = C132312;
    etz[68] = C132321;
    etz[69] = C132330;
    etz[70] = C132331;
    etz[71] = C132340;
    etz[72] = C132349;
    etz[73] = C132350;
    etz[74] = C132359;
    etz[75] = C132368;
    etz[76] = C132369;
    etz[77] = C132378;
    etz[78] = C132387;
    etz[79] = C132388;
    etz[80] = C132397;
    etz[81] = C132406;
    etz[82] = C132407;
    etz[83] = C132416;
    etz[84] = C132425;
    etz[85] = C132426;
    etz[86] = C132435;
    etz[87] = C132444;
    etz[88] = C132445;
    etz[89] = C132454;
    etz[90] = C132463;
    etz[91] = C132464;
    etz[92] = C132473;
    etz[93] = C132482;
    etz[94] = C132483;
    etz[95] = C132500;
    etz[96] = C132501;
    etz[97] = C132518;
    etz[98] = C132519;
    etz[99] = C132536;
    etz[100] = C132537;
    etz[101] = C132554;
    etz[102] = C132555;
    etz[103] = C132572;
    etz[104] = C132573;
    etz[105] = C132590;
    etz[106] = C132591;
    etz[107] = C132608;
    etz[108] = C132609;
    etz[109] = C132626;
    etz[110] = C132627;
    etz[111] = C132644;
    etz[112] = C132645;
    etz[113] = C132662;
    etz[114] = C132663;
    etz[115] = C132680;
    etz[116] = C132681;
    etz[117] = C132698;
    etz[118] = C132699;
    etz[119] = C132716;
    etz[120] = C132717;
    etz[121] = C132734;
    etz[122] = C132735;
    etz[123] = C132752;
    etz[124] = C132753;
    etz[125] = C132770;
    etz[126] = C132771;
    etz[127] = C132788;
    etz[128] = C132789;
    etz[129] = C132806;
    etz[130] = C132807;
    etz[131] = C132824;
    etz[132] = C132825;
    etz[133] = C132842;
    etz[134] = C132843;
    etz[135] = C132860;
    etz[136] = C132861;
    etz[137] = C132878;
    etz[138] = C132879;
    etz[139] = C132896;
    etz[140] = C132897;
    etz[141] = C132914;
    etz[142] = C132915;
    etz[143] = C132932;
    etz[144] = C132933;
    etz[145] = C132950;
    etz[146] = C132951;
    etz[147] = C132968;
    etz[148] = C132969;
    etz[149] = C132986;
    etz[150] = C132987;
    etz[151] = C133004;
    etz[152] = C133005;
    etz[153] = C133022;
    etz[154] = C133023;
    etz[155] = C133040;
    etz[156] = C133041;
    etz[157] = C133058;
    etz[158] = C133059;
    etz[159] = C133076;
    etz[160] = C133077;
    etz[161] = C133094;
    etz[162] = C133095;
    etz[163] = C133112;
    etz[164] = C133113;
    etz[165] = C133130;
    etz[166] = C133131;
    etz[167] = C133148;
    etz[168] = C133149;
    etz[169] = C133166;
    etz[170] = C133167;
    etz[171] = C133184;
    etz[172] = C133185;
    etz[173] = C133202;
    etz[174] = C133203;
    etz[175] = C133220;
    etz[176] = C133221;
    etz[177] = C133238;
    etz[178] = C133239;
    etz[179] = C133256;
    etz[180] = C133257;
    etz[181] = C133274;
    etz[182] = C133275;
    etz[183] = C133292;
    etz[184] = C133293;
    etz[185] = C133310;
    etz[186] = C133311;
    etz[187] = C133328;
    etz[188] = C133329;
    etz[189] = C133346;
    etz[190] = C133347;
    etz[191] = C133364;
    etz[192] = C133365;
    etz[193] = C133382;
    etz[194] = C133383;
    etz[195] = C133400;
    etz[196] = C133401;
    etz[197] = C133418;
    etz[198] = C133419;
    etz[199] = C133436;
    etz[200] = C133437;
    etz[201] = C133454;
    etz[202] = C133455;
    etz[203] = C133472;
    etz[204] = C133473;
    etz[205] = C133490;
    etz[206] = C133491;
    etz[207] = C133508;
    etz[208] = C133509;
    etz[209] = C133526;
    etz[210] = C133527;
    etz[211] = C133544;
    etz[212] = C133545;
    etz[213] = C133562;
    etz[214] = C133563;
    etz[215] = C133580;
    etz[216] = C133581;
    etz[217] = C133598;
    etz[218] = C133607;
    etz[219] = C133616;
    etz[220] = C133625;
    etz[221] = C133634;
    etz[222] = C133643;
    etz[223] = C133652;
    etz[224] = C133661;
    etz[225] = C133670;
    etz[226] = C133679;
    etz[227] = C133688;
    etz[228] = C133697;
    etz[229] = C133706;
    etz[230] = C133715;
    etz[231] = C133724;
    etz[232] = C133733;
    etz[233] = C133742;
    etz[234] = C133751;
    etz[235] = C133760;
    etz[236] = C133769;
    etz[237] = C133778;
    etz[238] = C133787;
    etz[239] = C133796;
    etz[240] = C133805;
    etz[241] = C133814;
    etz[242] = C133823;
    etz[243] = C133832;
    etz[244] = C133841;
    etz[245] = C133850;
    etz[246] = C133859;
    etz[247] = C133868;
    etz[248] = C133877;
    etz[249] = C133886;
    etz[250] = C133895;
    etz[251] = C133904;
    etz[252] = C133913;
    etz[253] = C133922;
    etz[254] = C133931;
    etz[255] = C133940;
    etz[256] = C133949;
    etz[257] = C133958;
    etz[258] = C133967;
    etz[259] = C133976;
    etz[260] = C133985;
    etz[261] = C133994;
    etz[262] = C134003;
    etz[263] = C134012;
    etz[264] = C134021;
    etz[265] = C134030;
    etz[266] = C134039;
    etz[267] = C134048;
    etz[268] = C134057;
    etz[269] = C134066;
    etz[270] = C134075;
    etz[271] = C134084;
    etz[272] = C134093;
    etz[273] = C134102;
    etz[274] = C134111;
    etz[275] = C134120;
    etz[276] = C134129;
    etz[277] = C134138;
    etz[278] = C134147;
    etz[279] = C134156;
    etz[280] = C134165;
    etz[281] = C134174;
    etz[282] = C134183;
    etz[283] = C134192;
    etz[284] = C134201;
    etz[285] = C134210;
    etz[286] = C134219;
    etz[287] = C134228;
    etz[288] = C134237;
    etz[289] = C134246;
    etz[290] = C134255;
    etz[291] = C134264;
    etz[292] = C134273;
    etz[293] = C134282;
    etz[294] = C134291;
    etz[295] = C134300;
    etz[296] = C134309;
    etz[297] = C134318;
    etz[298] = C134327;
    etz[299] = C134336;
    etz[300] = C134345;
    etz[301] = C134354;
    etz[302] = C134363;
    etz[303] = C134372;
    etz[304] = C134381;
    etz[305] = C134390;
    etz[306] = C134399;
    etz[307] = C134408;
    etz[308] = C134417;
    etz[309] = C134426;
    etz[310] = C134435;
    etz[311] = C134444;
    etz[312] = C134453;
    etz[313] = C134462;
    etz[314] = C134471;
    etz[315] = C134480;
    etz[316] = C134489;
    etz[317] = C134498;
    etz[318] = C134507;
    etz[319] = C134516;
    etz[320] = C134525;
    etz[321] = C134534;
    etz[322] = C134543;
    etz[323] = C134552;
    etz[324] = C134561;
    etz[325] = C134570;
    etz[326] = C134579;
    etz[327] = C134588;
    etz[328] = C134597;
    etz[329] = C134606;
    etz[330] = C134615;
    etz[331] = C134624;
    etz[332] = C134633;
    etz[333] = C134642;
    etz[334] = C134651;
    etz[335] = C134660;
    etz[336] = C134669;
    etz[337] = C134678;
    etz[338] = C134687;
    etz[339] = C134696;
    etz[340] = C134705;
    etz[341] = C134714;
    etz[342] = C134723;
    etz[343] = C134732;
    etz[344] = C134741;
    etz[345] = C134750;
    etz[346] = C134759;
    etz[347] = C134768;
    etz[348] = C134777;
    etz[349] = C134786;
    etz[350] = C134795;
    etz[351] = C134804;
    etz[352] = C134813;
    etz[353] = C134822;
    etz[354] = C134831;
    etz[355] = C134840;
    etz[356] = C134849;
    etz[357] = C134858;
    etz[358] = C134867;
    etz[359] = C134876;
    etz[360] = C134885;
    etz[361] = C134894;
    etz[362] = C134903;
    etz[363] = C134912;
    etz[364] = C134921;
    etz[365] = C134930;
    etz[366] = C134939;
    etz[367] = C134948;
    etz[368] = C134957;
    etz[369] = C134966;
    etz[370] = C134975;
    etz[371] = C134984;
    etz[372] = C134993;
    etz[373] = C134994;
    etz[374] = C135011;
    etz[375] = C135012;
    etz[376] = C135029;
    etz[377] = C135030;
    etz[378] = C135047;
    etz[379] = C135048;
    etz[380] = C135065;
    etz[381] = C135066;
    etz[382] = C135083;
    etz[383] = C135084;
    etz[384] = C135101;
    etz[385] = C135102;
    etz[386] = C135119;
    etz[387] = C135120;
    etz[388] = C135137;
    etz[389] = C135138;
    etz[390] = C135155;
    etz[391] = C135156;
    etz[392] = C135173;
    etz[393] = C135174;
    etz[394] = C135191;
    etz[395] = C135192;
    etz[396] = C135209;
    etz[397] = C135210;
    etz[398] = C135227;
    etz[399] = C135228;
    etz[400] = C135245;
    etz[401] = C135246;
    etz[402] = C135263;
    etz[403] = C135264;
    etz[404] = C135281;
    etz[405] = C135282;
    etz[406] = C135299;
    etz[407] = C135300;
    etz[408] = C135317;
    etz[409] = C135318;
    etz[410] = C135335;
    etz[411] = C135336;
    etz[412] = C135353;
    etz[413] = C135354;
    etz[414] = C135371;
    etz[415] = C135372;
    etz[416] = C135389;
    etz[417] = C135390;
    etz[418] = C135407;
    etz[419] = C135408;
    etz[420] = C135425;
    etz[421] = C135426;
    etz[422] = C135443;
    etz[423] = C135444;
    etz[424] = C135461;
    etz[425] = C135462;
    etz[426] = C135479;
    etz[427] = C135480;
    etz[428] = C135497;
    etz[429] = C135498;
    etz[430] = C135515;
    etz[431] = C135516;
    etz[432] = C135533;
    etz[433] = C135534;
    etz[434] = C135551;
    etz[435] = C135552;
    etz[436] = C135569;
    etz[437] = C135570;
    etz[438] = C135587;
    etz[439] = C135588;
    etz[440] = C135605;
    etz[441] = C135606;
    etz[442] = C135623;
    etz[443] = C135624;
    etz[444] = C135641;
    etz[445] = C135642;
    etz[446] = C135659;
    etz[447] = C135660;
    etz[448] = C135677;
    etz[449] = C135678;
    etz[450] = C135695;
    etz[451] = C135696;
    etz[452] = C135713;
    etz[453] = C135714;
    etz[454] = C135731;
    etz[455] = C135732;
    etz[456] = C135749;
    etz[457] = C135750;
    etz[458] = C135767;
    etz[459] = C135768;
    etz[460] = C135785;
    etz[461] = C135786;
    etz[462] = C135803;
    etz[463] = C135804;
    etz[464] = C135821;
    etz[465] = C135822;
    etz[466] = C135839;
    etz[467] = C135840;
    etz[468] = C135857;
    etz[469] = C135858;
    etz[470] = C135875;
    etz[471] = C135876;
    etz[472] = C135893;
    etz[473] = C135894;
    etz[474] = C135911;
    etz[475] = C135912;
    etz[476] = C135929;
    etz[477] = C135930;
    etz[478] = C135947;
    etz[479] = C135948;
    etz[480] = C135965;
    etz[481] = C135966;
    etz[482] = C135983;
    etz[483] = C135984;
    etz[484] = C136001;
    etz[485] = C136002;
    etz[486] = C136019;
    etz[487] = C136020;
    etz[488] = C136037;
    etz[489] = C136038;
    etz[490] = C136055;
    etz[491] = C136056;
    etz[492] = C136073;
    etz[493] = C136074;
    etz[494] = C136091;
    etz[495] = C136092;
    etz[496] = C136109;
    etz[497] = C136118;
    etz[498] = C136127;
    etz[499] = C136136;
    etz[500] = C136145;
    etz[501] = C136154;
    etz[502] = C136163;
    etz[503] = C136172;
    etz[504] = C136181;
    etz[505] = C136190;
    etz[506] = C136199;
    etz[507] = C136208;
    etz[508] = C136217;
    etz[509] = C136226;
    etz[510] = C136235;
    etz[511] = C136244;
    etz[512] = C136253;
    etz[513] = C136262;
    etz[514] = C136271;
    etz[515] = C136280;
    etz[516] = C136289;
    etz[517] = C136298;
    etz[518] = C136307;
    etz[519] = C136316;
    etz[520] = C136325;
    etz[521] = C136334;
    etz[522] = C136343;
    etz[523] = C136352;
    etz[524] = C136361;
    etz[525] = C136370;
    etz[526] = C136379;
    etz[527] = C136388;
    etz[528] = C136397;
    etz[529] = C136406;
    etz[530] = C136415;
    etz[531] = C136424;
    etz[532] = C136433;
    etz[533] = C136442;
    etz[534] = C136451;
    etz[535] = C136460;
    etz[536] = C136469;
    etz[537] = C136478;
    etz[538] = C136487;
    etz[539] = C136496;
    etz[540] = C136505;
    etz[541] = C136514;
    etz[542] = C136523;
    etz[543] = C136532;
    etz[544] = C136541;
    etz[545] = C136550;
    etz[546] = C136559;
    etz[547] = C136568;
    etz[548] = C136577;
    etz[549] = C136586;
    etz[550] = C136595;
    etz[551] = C136604;
    etz[552] = C136613;
    etz[553] = C136622;
    etz[554] = C136631;
    etz[555] = C136640;
    etz[556] = C136649;
    etz[557] = C136658;
    etz[558] = C136667;
    etz[559] = C136676;
    etz[560] = C136685;
    etz[561] = C136694;
    etz[562] = C136703;
    etz[563] = C136712;
    etz[564] = C136721;
    etz[565] = C136730;
    etz[566] = C136739;
    etz[567] = C136748;
    etz[568] = C136757;
    etz[569] = C136766;
    etz[570] = C136775;
    etz[571] = C136784;
    etz[572] = C136793;
    etz[573] = C136802;
    etz[574] = C136811;
    etz[575] = C136820;
    etz[576] = C136829;
    etz[577] = C136838;
    etz[578] = C136847;
    etz[579] = C136856;
    etz[580] = C136865;
    etz[581] = C136874;
    etz[582] = C136883;
    etz[583] = C136892;
    etz[584] = C136901;
    etz[585] = C136910;
    etz[586] = C136919;
    etz[587] = C136928;
    etz[588] = C136937;
    etz[589] = C136946;
    etz[590] = C136955;
    etz[591] = C136964;
    etz[592] = C136973;
    etz[593] = C136982;
    etz[594] = C136991;
    etz[595] = C137000;
    etz[596] = C137009;
    etz[597] = C137018;
    etz[598] = C137027;
    etz[599] = C137036;
    etz[600] = C137045;
    etz[601] = C137054;
    etz[602] = C137063;
    etz[603] = C137072;
    etz[604] = C137081;
    etz[605] = C137090;
    etz[606] = C137099;
    etz[607] = C137108;
    etz[608] = C137117;
    etz[609] = C137126;
    etz[610] = C137135;
    etz[611] = C137144;
    etz[612] = C137153;
    etz[613] = C137162;
    etz[614] = C137171;
    etz[615] = C137180;
    etz[616] = C137189;
    etz[617] = C137198;
    etz[618] = C137207;
    etz[619] = C137216;
    etz[620] = C137225;
    etz[621] = C137234;
    etz[622] = C137243;
    etz[623] = C137252;
    etz[624] = C137261;
    etz[625] = C137270;
    etz[626] = C137279;
    etz[627] = C137288;
    etz[628] = C137297;
    etz[629] = C137306;
    etz[630] = C137315;
    etz[631] = C137324;
    etz[632] = C137333;
    etz[633] = C137342;
    etz[634] = C137351;
    etz[635] = C137360;
    etz[636] = C137369;
    etz[637] = C137378;
    etz[638] = C137387;
    etz[639] = C137396;
    etz[640] = C137405;
    etz[641] = C137414;
    etz[642] = C137423;
    etz[643] = C137432;
    etz[644] = C137441;
    etz[645] = C137450;
    etz[646] = C137459;
    etz[647] = C137468;
    etz[648] = C137477;
    etz[649] = C137486;
    etz[650] = C137495;
    etz[651] = C137504;
    etz[652] = C137521;
    etz[653] = C137538;
    etz[654] = C137555;
    etz[655] = C137572;
    etz[656] = C137589;
    etz[657] = C137606;
    etz[658] = C137623;
    etz[659] = C137640;
    etz[660] = C137657;
    etz[661] = C137674;
    etz[662] = C137691;
    etz[663] = C137708;
    etz[664] = C137725;
    etz[665] = C137742;
    etz[666] = C137759;
    etz[667] = C137776;
    etz[668] = C137793;
    etz[669] = C137810;
    etz[670] = C137827;
    etz[671] = C137844;
    etz[672] = C137861;
    etz[673] = C137878;
    etz[674] = C137895;
    etz[675] = C137912;
    etz[676] = C137929;
    etz[677] = C137946;
    etz[678] = C137963;
    etz[679] = C137980;
    etz[680] = C137997;
    etz[681] = C138014;
    etz[682] = C138032;
    etz[683] = C138033;
    etz[684] = C138051;
    etz[685] = C138052;
    etz[686] = C138070;
    etz[687] = C138071;
    etz[688] = C138089;
    etz[689] = C138090;
    etz[690] = C138108;
    etz[691] = C138109;
    etz[692] = C138127;
    etz[693] = C138128;
    etz[694] = C138146;
    etz[695] = C138147;
    etz[696] = C138165;
    etz[697] = C138166;
    etz[698] = C138184;
    etz[699] = C138185;
    etz[700] = C138203;
    etz[701] = C138204;
    etz[702] = C138222;
    etz[703] = C138223;
    etz[704] = C138241;
    etz[705] = C138242;
    etz[706] = C138260;
    etz[707] = C138261;
    etz[708] = C138279;
    etz[709] = C138280;
    etz[710] = C138298;
    etz[711] = C138299;
    etz[712] = C138317;
    etz[713] = C138318;
    etz[714] = C138336;
    etz[715] = C138337;
    etz[716] = C138355;
    etz[717] = C138356;
    etz[718] = C138374;
    etz[719] = C138375;
    etz[720] = C138393;
    etz[721] = C138394;
    etz[722] = C138412;
    etz[723] = C138413;
    etz[724] = C138431;
    etz[725] = C138432;
    etz[726] = C138450;
    etz[727] = C138451;
    etz[728] = C138469;
    etz[729] = C138470;
    etz[730] = C138488;
    etz[731] = C138489;
    etz[732] = C138507;
    etz[733] = C138508;
    etz[734] = C138526;
    etz[735] = C138527;
    etz[736] = C138545;
    etz[737] = C138546;
    etz[738] = C138564;
    etz[739] = C138565;
    etz[740] = C138583;
    etz[741] = C138584;
    etz[742] = C138602;
    etz[743] = C138603;
    etz[744] = C138620;
    etz[745] = C138629;
    etz[746] = C138638;
    etz[747] = C138647;
    etz[748] = C138656;
    etz[749] = C138665;
    etz[750] = C138674;
    etz[751] = C138683;
    etz[752] = C138692;
    etz[753] = C138701;
    etz[754] = C138710;
    etz[755] = C138719;
    etz[756] = C138728;
    etz[757] = C138737;
    etz[758] = C138746;
    etz[759] = C138755;
    etz[760] = C138764;
    etz[761] = C138773;
    etz[762] = C138782;
    etz[763] = C138791;
    etz[764] = C138800;
    etz[765] = C138809;
    etz[766] = C138818;
    etz[767] = C138827;
    etz[768] = C138836;
    etz[769] = C138845;
    etz[770] = C138854;
    etz[771] = C138863;
    etz[772] = C138872;
    etz[773] = C138881;
    etz[774] = C138890;
    etz[775] = C138899;
    etz[776] = C138908;
    etz[777] = C138917;
    etz[778] = C138926;
    etz[779] = C138935;
    etz[780] = C138944;
    etz[781] = C138953;
    etz[782] = C138962;
    etz[783] = C138971;
    etz[784] = C138980;
    etz[785] = C138989;
    etz[786] = C138998;
    etz[787] = C139007;
    etz[788] = C139016;
    etz[789] = C139025;
    etz[790] = C139034;
    etz[791] = C139043;
    etz[792] = C139052;
    etz[793] = C139061;
    etz[794] = C139070;
    etz[795] = C139079;
    etz[796] = C139088;
    etz[797] = C139097;
    etz[798] = C139106;
    etz[799] = C139115;
    etz[800] = C139124;
    etz[801] = C139133;
    etz[802] = C139142;
    etz[803] = C139151;
    etz[804] = C139160;
    etz[805] = C139169;
    etz[806] = C139178;
    etz[807] = C139187;
    etz[808] = C139196;
    etz[809] = C139205;
    etz[810] = C139214;
    etz[811] = C139223;
    etz[812] = C139232;
    etz[813] = C139241;
    etz[814] = C139250;
    etz[815] = C139259;
    etz[816] = C139268;
    etz[817] = C139277;
    etz[818] = C139286;
    etz[819] = C139295;
    etz[820] = C139304;
    etz[821] = C139313;
    etz[822] = C139322;
    etz[823] = C139331;
    etz[824] = C139340;
    etz[825] = C139349;
    etz[826] = C139358;
    etz[827] = C139367;
    etz[828] = C139376;
    etz[829] = C139385;
    etz[830] = C139394;
    etz[831] = C139403;
    etz[832] = C139412;
    etz[833] = C139421;
    etz[834] = C139430;
    etz[835] = C139439;
    etz[836] = C139448;
    etz[837] = C139465;
    etz[838] = C139482;
    etz[839] = C139499;
    etz[840] = C139516;
    etz[841] = C139533;
    etz[842] = C139550;
    etz[843] = C139567;
    etz[844] = C139584;
    etz[845] = C139601;
    etz[846] = C139618;
    etz[847] = C139635;
    etz[848] = C139652;
    etz[849] = C139669;
    etz[850] = C139686;
    etz[851] = C139703;
    etz[852] = C139720;
    etz[853] = C139737;
    etz[854] = C139754;
    etz[855] = C139771;
    etz[856] = C139788;
    etz[857] = C139805;
    etz[858] = C139822;
    etz[859] = C139839;
    etz[860] = C139856;
    etz[861] = C139873;
    etz[862] = C139890;
    etz[863] = C139907;
    etz[864] = C139924;
    etz[865] = C139941;
    etz[866] = C139958;
    etz[867] = C139975;
    etz[868] = C140232;
    etz[869] = C140249;
    etz[870] = C140266;
    etz[871] = C140283;
    etz[872] = C140300;
    etz[873] = C140317;
    etz[874] = C140334;
    etz[875] = C140351;
    etz[876] = C140368;
    etz[877] = C140385;
    etz[878] = C140402;
    etz[879] = C140419;
    etz[880] = C140436;
    etz[881] = C140453;
    etz[882] = C140470;
    etz[883] = C140487;
    etz[884] = C140504;
    etz[885] = C140521;
    etz[886] = C140538;
    etz[887] = C140555;
    etz[888] = C140572;
    etz[889] = C140589;
    etz[890] = C140606;
    etz[891] = C140623;
    etz[892] = C140640;
    etz[893] = C140657;
    etz[894] = C140674;
    etz[895] = C140691;
    etz[896] = C140708;
    etz[897] = C140725;
    etz[898] = C140742;
    etz[899] = C140767;
    etz[900] = C140784;
    etz[901] = C140801;
    etz[902] = C140818;
    etz[903] = C140835;
    etz[904] = C140852;
    etz[905] = C140869;
    etz[906] = C140886;
    etz[907] = C140903;
    etz[908] = C140920;
    etz[909] = C140937;
    etz[910] = C140954;
    etz[911] = C140971;
    etz[912] = C140988;
    etz[913] = C141005;
    etz[914] = C141022;
    etz[915] = C141039;
    etz[916] = C141056;
    etz[917] = C141073;
    etz[918] = C141090;
    etz[919] = C141107;
    etz[920] = C141124;
    etz[921] = C141141;
    etz[922] = C141158;
    etz[923] = C141175;
    etz[924] = C141192;
    etz[925] = C141209;
    etz[926] = C141226;
    etz[927] = C141243;
    etz[928] = C141260;
    etz[929] = C141277;
    etz[930] = C142286;
    etz[931] = C142303;
    etz[932] = C142320;
    etz[933] = C142337;
    etz[934] = C142354;
    etz[935] = C142371;
    etz[936] = C142388;
    etz[937] = C142405;
    etz[938] = C142422;
    etz[939] = C142439;
    etz[940] = C142456;
    etz[941] = C142473;
    etz[942] = C142490;
    etz[943] = C142507;
    etz[944] = C142524;
    etz[945] = C142541;
    etz[946] = C142558;
    etz[947] = C142575;
    etz[948] = C142592;
    etz[949] = C142609;
    etz[950] = C142626;
    etz[951] = C142643;
    etz[952] = C142660;
    etz[953] = C142677;
    etz[954] = C142694;
    etz[955] = C142711;
    etz[956] = C142728;
    etz[957] = C142745;
    etz[958] = C142762;
    etz[959] = C142779;
    etz[960] = C142796;
}
