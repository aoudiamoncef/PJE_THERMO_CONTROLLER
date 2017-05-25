/*  
	authors : Jamal BOUDJAJ
		 Rida Darmal
	modified by : Mohamed ADANSAR
		Aoudia Moncef

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.


*/


#include <NCP18WF104F03RC.h>
#include <connectors.h>
#include <base_shield_v20.h>

const int16_t tableau[4096]={

	 -27314,
	 -8445,
	 -7849,
	 -7483,
	 -7215,
	 -7001,
	 -6823,
	 -6671,
	 -6536,
	 -6417,
	 -6308,
	 -6209,
	 -6118,
	 -6033,
	 -5954,
	 -5880,
	 -5810,
	 -5744,
	 -5681,
	 -5622,
	 -5565,
	 -5510,
	 -5458,
	 -5408,
	 -5360,
	 -5314,
	 -5269,
	 -5225,
	 -5184,
	 -5143,
	 -5104,
	 -5066,
	 -5028,
	 -4992,
	 -4957,
	 -4923,
	 -4890,
	 -4857,
	 -4825,
	 -4794,
	 -4764,
	 -4734,
	 -4705,
	 -4677,
	 -4649,
	 -4621,
	 -4594,
	 -4568,
	 -4542,
	 -4517,
	 -4492,
	 -4468,
	 -4444,
	 -4420,
	 -4397,
	 -4374,
	 -4351,
	 -4329,
	 -4307,
	 -4286,
	 -4265,
	 -4244,
	 -4223,
	 -4203,
	 -4183,
	 -4163,
	 -4144,
	 -4125,
	 -4106,
	 -4087,
	 -4068,
	 -4050,
	 -4032,
	 -4014,
	 -3997,
	 -3979,
	 -3962,
	 -3945,
	 -3928,
	 -3912,
	 -3895,
	 -3879,
	 -3863,
	 -3847,
	 -3831,
	 -3816,
	 -3800,
	 -3785,
	 -3770,
	 -3755,
	 -3740,
	 -3725,
	 -3711,
	 -3696,
	 -3682,
	 -3668,
	 -3654,
	 -3640,
	 -3626,
	 -3612,
	 -3599,
	 -3585,
	 -3572,
	 -3559,
	 -3546,
	 -3533,
	 -3520,
	 -3507,
	 -3494,
	 -3482,
	 -3469,
	 -3457,
	 -3445,
	 -3433,
	 -3420,
	 -3408,
	 -3397,
	 -3385,
	 -3373,
	 -3361,
	 -3350,
	 -3338,
	 -3327,
	 -3316,
	 -3304,
	 -3293,
	 -3282,
	 -3271,
	 -3260,
	 -3249,
	 -3238,
	 -3228,
	 -3217,
	 -3206,
	 -3196,
	 -3185,
	 -3175,
	 -3165,
	 -3154,
	 -3144,
	 -3134,
	 -3124,
	 -3114,
	 -3104,
	 -3094,
	 -3084,
	 -3074,
	 -3065,
	 -3055,
	 -3045,
	 -3036,
	 -3026,
	 -3017,
	 -3007,
	 -2998,
	 -2989,
	 -2979,
	 -2970,
	 -2961,
	 -2952,
	 -2943,
	 -2934,
	 -2925,
	 -2916,
	 -2907,
	 -2898,
	 -2890,
	 -2881,
	 -2872,
	 -2863,
	 -2855,
	 -2846,
	 -2838,
	 -2829,
	 -2821,
	 -2812,
	 -2804,
	 -2796,
	 -2787,
	 -2779,
	 -2771,
	 -2763,
	 -2755,
	 -2747,
	 -2739,
	 -2730,
	 -2723,
	 -2715,
	 -2707,
	 -2699,
	 -2691,
	 -2683,
	 -2675,
	 -2668,
	 -2660,
	 -2652,
	 -2645,
	 -2637,
	 -2629,
	 -2622,
	 -2614,
	 -2607,
	 -2599,
	 -2592,
	 -2585,
	 -2577,
	 -2570,
	 -2563,
	 -2555,
	 -2548,
	 -2541,
	 -2534,
	 -2526,
	 -2519,
	 -2512,
	 -2505,
	 -2498,
	 -2491,
	 -2484,
	 -2477,
	 -2470,
	 -2463,
	 -2456,
	 -2449,
	 -2443,
	 -2436,
	 -2429,
	 -2422,
	 -2415,
	 -2409,
	 -2402,
	 -2395,
	 -2389,
	 -2382,
	 -2375,
	 -2369,
	 -2362,
	 -2356,
	 -2349,
	 -2343,
	 -2336,
	 -2330,
	 -2323,
	 -2317,
	 -2311,
	 -2304,
	 -2298,
	 -2292,
	 -2285,
	 -2279,
	 -2273,
	 -2267,
	 -2260,
	 -2254,
	 -2248,
	 -2242,
	 -2236,
	 -2229,
	 -2223,
	 -2217,
	 -2211,
	 -2205,
	 -2199,
	 -2193,
	 -2187,
	 -2181,
	 -2175,
	 -2169,
	 -2163,
	 -2158,
	 -2152,
	 -2146,
	 -2140,
	 -2134,
	 -2128,
	 -2122,
	 -2117,
	 -2111,
	 -2105,
	 -2099,
	 -2094,
	 -2088,
	 -2082,
	 -2077,
	 -2071,
	 -2065,
	 -2060,
	 -2054,
	 -2049,
	 -2043,
	 -2038,
	 -2032,
	 -2026,
	 -2021,
	 -2015,
	 -2010,
	 -2004,
	 -1999,
	 -1994,
	 -1988,
	 -1983,
	 -1977,
	 -1972,
	 -1967,
	 -1961,
	 -1956,
	 -1951,
	 -1945,
	 -1940,
	 -1935,
	 -1929,
	 -1924,
	 -1919,
	 -1914,
	 -1909,
	 -1903,
	 -1898,
	 -1893,
	 -1888,
	 -1883,
	 -1878,
	 -1872,
	 -1867,
	 -1862,
	 -1857,
	 -1852,
	 -1847,
	 -1842,
	 -1837,
	 -1832,
	 -1827,
	 -1822,
	 -1817,
	 -1812,
	 -1807,
	 -1802,
	 -1797,
	 -1792,
	 -1787,
	 -1782,
	 -1777,
	 -1772,
	 -1768,
	 -1763,
	 -1758,
	 -1753,
	 -1748,
	 -1743,
	 -1739,
	 -1734,
	 -1729,
	 -1724,
	 -1719,
	 -1715,
	 -1710,
	 -1705,
	 -1700,
	 -1696,
	 -1691,
	 -1686,
	 -1682,
	 -1677,
	 -1672,
	 -1668,
	 -1663,
	 -1658,
	 -1654,
	 -1649,
	 -1645,
	 -1640,
	 -1635,
	 -1631,
	 -1626,
	 -1622,
	 -1617,
	 -1613,
	 -1608,
	 -1603,
	 -1599,
	 -1594,
	 -1590,
	 -1585,
	 -1581,
	 -1577,
	 -1572,
	 -1568,
	 -1563,
	 -1559,
	 -1554,
	 -1550,
	 -1546,
	 -1541,
	 -1537,
	 -1532,
	 -1528,
	 -1524,
	 -1519,
	 -1515,
	 -1511,
	 -1506,
	 -1502,
	 -1498,
	 -1493,
	 -1489,
	 -1485,
	 -1480,
	 -1476,
	 -1472,
	 -1468,
	 -1463,
	 -1459,
	 -1455,
	 -1451,
	 -1446,
	 -1442,
	 -1438,
	 -1434,
	 -1430,
	 -1425,
	 -1421,
	 -1417,
	 -1413,
	 -1409,
	 -1405,
	 -1401,
	 -1396,
	 -1392,
	 -1388,
	 -1384,
	 -1380,
	 -1376,
	 -1372,
	 -1368,
	 -1364,
	 -1360,
	 -1356,
	 -1351,
	 -1347,
	 -1343,
	 -1339,
	 -1335,
	 -1331,
	 -1327,
	 -1323,
	 -1319,
	 -1315,
	 -1311,
	 -1307,
	 -1303,
	 -1299,
	 -1295,
	 -1292,
	 -1288,
	 -1284,
	 -1280,
	 -1276,
	 -1272,
	 -1268,
	 -1264,
	 -1260,
	 -1256,
	 -1252,
	 -1248,
	 -1245,
	 -1241,
	 -1237,
	 -1233,
	 -1229,
	 -1225,
	 -1221,
	 -1218,
	 -1214,
	 -1210,
	 -1206,
	 -1202,
	 -1199,
	 -1195,
	 -1191,
	 -1187,
	 -1183,
	 -1180,
	 -1176,
	 -1172,
	 -1168,
	 -1165,
	 -1161,
	 -1157,
	 -1153,
	 -1150,
	 -1146,
	 -1142,
	 -1139,
	 -1135,
	 -1131,
	 -1127,
	 -1124,
	 -1120,
	 -1116,
	 -1113,
	 -1109,
	 -1105,
	 -1102,
	 -1098,
	 -1094,
	 -1091,
	 -1087,
	 -1084,
	 -1080,
	 -1076,
	 -1073,
	 -1069,
	 -1065,
	 -1062,
	 -1058,
	 -1055,
	 -1051,
	 -1047,
	 -1044,
	 -1040,
	 -1037,
	 -1033,
	 -1030,
	 -1026,
	 -1023,
	 -1019,
	 -1015,
	 -1012,
	 -1008,
	 -1005,
	 -1001,
	 -998,
	 -994,
	 -991,
	 -987,
	 -984,
	 -980,
	 -977,
	 -973,
	 -970,
	 -966,
	 -963,
	 -959,
	 -956,
	 -953,
	 -949,
	 -946,
	 -942,
	 -939,
	 -935,
	 -932,
	 -929,
	 -925,
	 -922,
	 -918,
	 -915,
	 -911,
	 -908,
	 -905,
	 -901,
	 -898,
	 -895,
	 -891,
	 -888,
	 -884,
	 -881,
	 -878,
	 -874,
	 -871,
	 -868,
	 -864,
	 -861,
	 -858,
	 -854,
	 -851,
	 -848,
	 -844,
	 -841,
	 -838,
	 -834,
	 -831,
	 -828,
	 -825,
	 -821,
	 -818,
	 -815,
	 -811,
	 -808,
	 -805,
	 -802,
	 -798,
	 -795,
	 -792,
	 -789,
	 -785,
	 -782,
	 -779,
	 -776,
	 -772,
	 -769,
	 -766,
	 -763,
	 -759,
	 -756,
	 -753,
	 -750,
	 -747,
	 -743,
	 -740,
	 -737,
	 -734,
	 -731,
	 -727,
	 -724,
	 -721,
	 -718,
	 -715,
	 -712,
	 -708,
	 -705,
	 -702,
	 -699,
	 -696,
	 -693,
	 -690,
	 -686,
	 -683,
	 -680,
	 -677,
	 -674,
	 -671,
	 -668,
	 -665,
	 -661,
	 -658,
	 -655,
	 -652,
	 -649,
	 -646,
	 -643,
	 -640,
	 -637,
	 -634,
	 -630,
	 -627,
	 -624,
	 -621,
	 -618,
	 -615,
	 -612,
	 -609,
	 -606,
	 -603,
	 -600,
	 -597,
	 -594,
	 -591,
	 -588,
	 -585,
	 -582,
	 -579,
	 -576,
	 -573,
	 -570,
	 -567,
	 -564,
	 -561,
	 -558,
	 -555,
	 -552,
	 -549,
	 -546,
	 -543,
	 -540,
	 -537,
	 -534,
	 -531,
	 -528,
	 -525,
	 -522,
	 -519,
	 -516,
	 -513,
	 -510,
	 -507,
	 -504,
	 -501,
	 -498,
	 -495,
	 -492,
	 -489,
	 -486,
	 -483,
	 -480,
	 -478,
	 -475,
	 -472,
	 -469,
	 -466,
	 -463,
	 -460,
	 -457,
	 -454,
	 -451,
	 -448,
	 -445,
	 -443,
	 -440,
	 -437,
	 -434,
	 -431,
	 -428,
	 -425,
	 -422,
	 -420,
	 -417,
	 -414,
	 -411,
	 -408,
	 -405,
	 -402,
	 -399,
	 -397,
	 -394,
	 -391,
	 -388,
	 -385,
	 -382,
	 -380,
	 -377,
	 -374,
	 -371,
	 -368,
	 -365,
	 -363,
	 -360,
	 -357,
	 -354,
	 -351,
	 -348,
	 -346,
	 -343,
	 -340,
	 -337,
	 -334,
	 -332,
	 -329,
	 -326,
	 -323,
	 -320,
	 -318,
	 -315,
	 -312,
	 -309,
	 -307,
	 -304,
	 -301,
	 -298,
	 -295,
	 -293,
	 -290,
	 -287,
	 -284,
	 -282,
	 -279,
	 -276,
	 -273,
	 -271,
	 -268,
	 -265,
	 -262,
	 -260,
	 -257,
	 -254,
	 -251,
	 -249,
	 -246,
	 -243,
	 -241,
	 -238,
	 -235,
	 -232,
	 -230,
	 -227,
	 -224,
	 -222,
	 -219,
	 -216,
	 -213,
	 -211,
	 -208,
	 -205,
	 -203,
	 -200,
	 -197,
	 -195,
	 -192,
	 -189,
	 -187,
	 -184,
	 -181,
	 -178,
	 -176,
	 -173,
	 -170,
	 -168,
	 -165,
	 -162,
	 -160,
	 -157,
	 -154,
	 -152,
	 -149,
	 -147,
	 -144,
	 -141,
	 -139,
	 -136,
	 -133,
	 -131,
	 -128,
	 -125,
	 -123,
	 -120,
	 -117,
	 -115,
	 -112,
	 -110,
	 -107,
	 -104,
	 -102,
	 -99,
	 -96,
	 -94,
	 -91,
	 -89,
	 -86,
	 -83,
	 -81,
	 -78,
	 -76,
	 -73,
	 -70,
	 -68,
	 -65,
	 -63,
	 -60,
	 -57,
	 -55,
	 -52,
	 -50,
	 -47,
	 -45,
	 -42,
	 -39,
	 -37,
	 -34,
	 -32,
	 -29,
	 -26,
	 -24,
	 -21,
	 -19,
	 -16,
	 -14,
	 -11,
	 -9,
	 -6,
	 -3,
	 -1,
	 1,
	 3,
	 6,
	 8,
	 11,
	 13,
	 16,
	 18,
	 21,
	 24,
	 26,
	 29,
	 31,
	 34,
	 36,
	 39,
	 41,
	 44,
	 46,
	 49,
	 51,
	 54,
	 56,
	 59,
	 61,
	 64,
	 66,
	 69,
	 71,
	 74,
	 76,
	 79,
	 81,
	 84,
	 86,
	 89,
	 91,
	 94,
	 96,
	 99,
	 101,
	 104,
	 106,
	 109,
	 111,
	 114,
	 116,
	 119,
	 121,
	 124,
	 126,
	 129,
	 131,
	 134,
	 136,
	 138,
	 141,
	 143,
	 146,
	 148,
	 151,
	 153,
	 156,
	 158,
	 161,
	 163,
	 166,
	 168,
	 170,
	 173,
	 175,
	 178,
	 180,
	 183,
	 185,
	 187,
	 190,
	 192,
	 195,
	 197,
	 200,
	 202,
	 204,
	 207,
	 209,
	 212,
	 214,
	 217,
	 219,
	 221,
	 224,
	 226,
	 229,
	 231,
	 234,
	 236,
	 238,
	 241,
	 243,
	 246,
	 248,
	 250,
	 253,
	 255,
	 258,
	 260,
	 262,
	 265,
	 267,
	 270,
	 272,
	 274,
	 277,
	 279,
	 281,
	 284,
	 286,
	 289,
	 291,
	 293,
	 296,
	 298,
	 301,
	 303,
	 305,
	 308,
	 310,
	 312,
	 315,
	 317,
	 319,
	 322,
	 324,
	 327,
	 329,
	 331,
	 334,
	 336,
	 338,
	 341,
	 343,
	 345,
	 348,
	 350,
	 352,
	 355,
	 357,
	 360,
	 362,
	 364,
	 367,
	 369,
	 371,
	 374,
	 376,
	 378,
	 381,
	 383,
	 385,
	 388,
	 390,
	 392,
	 395,
	 397,
	 399,
	 402,
	 404,
	 406,
	 409,
	 411,
	 413,
	 415,
	 418,
	 420,
	 422,
	 425,
	 427,
	 429,
	 432,
	 434,
	 436,
	 439,
	 441,
	 443,
	 446,
	 448,
	 450,
	 452,
	 455,
	 457,
	 459,
	 462,
	 464,
	 466,
	 469,
	 471,
	 473,
	 475,
	 478,
	 480,
	 482,
	 485,
	 487,
	 489,
	 491,
	 494,
	 496,
	 498,
	 501,
	 503,
	 505,
	 507,
	 510,
	 512,
	 514,
	 516,
	 519,
	 521,
	 523,
	 526,
	 528,
	 530,
	 532,
	 535,
	 537,
	 539,
	 541,
	 544,
	 546,
	 548,
	 550,
	 553,
	 555,
	 557,
	 559,
	 562,
	 564,
	 566,
	 569,
	 571,
	 573,
	 575,
	 578,
	 580,
	 582,
	 584,
	 586,
	 589,
	 591,
	 593,
	 595,
	 598,
	 600,
	 602,
	 604,
	 607,
	 609,
	 611,
	 613,
	 616,
	 618,
	 620,
	 622,
	 625,
	 627,
	 629,
	 631,
	 633,
	 636,
	 638,
	 640,
	 642,
	 645,
	 647,
	 649,
	 651,
	 653,
	 656,
	 658,
	 660,
	 662,
	 665,
	 667,
	 669,
	 671,
	 673,
	 676,
	 678,
	 680,
	 682,
	 684,
	 687,
	 689,
	 691,
	 693,
	 695,
	 698,
	 700,
	 702,
	 704,
	 706,
	 709,
	 711,
	 713,
	 715,
	 717,
	 720,
	 722,
	 724,
	 726,
	 728,
	 731,
	 733,
	 735,
	 737,
	 739,
	 742,
	 744,
	 746,
	 748,
	 750,
	 752,
	 755,
	 757,
	 759,
	 761,
	 763,
	 766,
	 768,
	 770,
	 772,
	 774,
	 776,
	 779,
	 781,
	 783,
	 785,
	 787,
	 789,
	 792,
	 794,
	 796,
	 798,
	 800,
	 802,
	 805,
	 807,
	 809,
	 811,
	 813,
	 815,
	 818,
	 820,
	 822,
	 824,
	 826,
	 828,
	 831,
	 833,
	 835,
	 837,
	 839,
	 841,
	 843,
	 846,
	 848,
	 850,
	 852,
	 854,
	 856,
	 859,
	 861,
	 863,
	 865,
	 867,
	 869,
	 871,
	 874,
	 876,
	 878,
	 880,
	 882,
	 884,
	 886,
	 889,
	 891,
	 893,
	 895,
	 897,
	 899,
	 901,
	 904,
	 906,
	 908,
	 910,
	 912,
	 914,
	 916,
	 918,
	 921,
	 923,
	 925,
	 927,
	 929,
	 931,
	 933,
	 935,
	 938,
	 940,
	 942,
	 944,
	 946,
	 948,
	 950,
	 952,
	 955,
	 957,
	 959,
	 961,
	 963,
	 965,
	 967,
	 969,
	 972,
	 974,
	 976,
	 978,
	 980,
	 982,
	 984,
	 986,
	 988,
	 991,
	 993,
	 995,
	 997,
	 999,
	 1001,
	 1003,
	 1005,
	 1007,
	 1010,
	 1012,
	 1014,
	 1016,
	 1018,
	 1020,
	 1022,
	 1024,
	 1026,
	 1028,
	 1031,
	 1033,
	 1035,
	 1037,
	 1039,
	 1041,
	 1043,
	 1045,
	 1047,
	 1049,
	 1052,
	 1054,
	 1056,
	 1058,
	 1060,
	 1062,
	 1064,
	 1066,
	 1068,
	 1070,
	 1073,
	 1075,
	 1077,
	 1079,
	 1081,
	 1083,
	 1085,
	 1087,
	 1089,
	 1091,
	 1093,
	 1095,
	 1098,
	 1100,
	 1102,
	 1104,
	 1106,
	 1108,
	 1110,
	 1112,
	 1114,
	 1116,
	 1118,
	 1120,
	 1123,
	 1125,
	 1127,
	 1129,
	 1131,
	 1133,
	 1135,
	 1137,
	 1139,
	 1141,
	 1143,
	 1145,
	 1147,
	 1150,
	 1152,
	 1154,
	 1156,
	 1158,
	 1160,
	 1162,
	 1164,
	 1166,
	 1168,
	 1170,
	 1172,
	 1174,
	 1176,
	 1179,
	 1181,
	 1183,
	 1185,
	 1187,
	 1189,
	 1191,
	 1193,
	 1195,
	 1197,
	 1199,
	 1201,
	 1203,
	 1205,
	 1207,
	 1210,
	 1212,
	 1214,
	 1216,
	 1218,
	 1220,
	 1222,
	 1224,
	 1226,
	 1228,
	 1230,
	 1232,
	 1234,
	 1236,
	 1238,
	 1240,
	 1242,
	 1245,
	 1247,
	 1249,
	 1251,
	 1253,
	 1255,
	 1257,
	 1259,
	 1261,
	 1263,
	 1265,
	 1267,
	 1269,
	 1271,
	 1273,
	 1275,
	 1277,
	 1279,
	 1281,
	 1283,
	 1286,
	 1288,
	 1290,
	 1292,
	 1294,
	 1296,
	 1298,
	 1300,
	 1302,
	 1304,
	 1306,
	 1308,
	 1310,
	 1312,
	 1314,
	 1316,
	 1318,
	 1320,
	 1322,
	 1324,
	 1326,
	 1328,
	 1331,
	 1333,
	 1335,
	 1337,
	 1339,
	 1341,
	 1343,
	 1345,
	 1347,
	 1349,
	 1351,
	 1353,
	 1355,
	 1357,
	 1359,
	 1361,
	 1363,
	 1365,
	 1367,
	 1369,
	 1371,
	 1373,
	 1375,
	 1377,
	 1379,
	 1381,
	 1383,
	 1385,
	 1388,
	 1390,
	 1392,
	 1394,
	 1396,
	 1398,
	 1400,
	 1402,
	 1404,
	 1406,
	 1408,
	 1410,
	 1412,
	 1414,
	 1416,
	 1418,
	 1420,
	 1422,
	 1424,
	 1426,
	 1428,
	 1430,
	 1432,
	 1434,
	 1436,
	 1438,
	 1440,
	 1442,
	 1444,
	 1446,
	 1448,
	 1450,
	 1452,
	 1454,
	 1456,
	 1458,
	 1460,
	 1462,
	 1464,
	 1467,
	 1469,
	 1471,
	 1473,
	 1475,
	 1477,
	 1479,
	 1481,
	 1483,
	 1485,
	 1487,
	 1489,
	 1491,
	 1493,
	 1495,
	 1497,
	 1499,
	 1501,
	 1503,
	 1505,
	 1507,
	 1509,
	 1511,
	 1513,
	 1515,
	 1517,
	 1519,
	 1521,
	 1523,
	 1525,
	 1527,
	 1529,
	 1531,
	 1533,
	 1535,
	 1537,
	 1539,
	 1541,
	 1543,
	 1545,
	 1547,
	 1549,
	 1551,
	 1553,
	 1555,
	 1557,
	 1559,
	 1561,
	 1563,
	 1565,
	 1567,
	 1569,
	 1571,
	 1573,
	 1575,
	 1577,
	 1579,
	 1581,
	 1583,
	 1585,
	 1587,
	 1589,
	 1591,
	 1593,
	 1595,
	 1597,
	 1599,
	 1601,
	 1603,
	 1605,
	 1607,
	 1609,
	 1611,
	 1613,
	 1615,
	 1617,
	 1619,
	 1621,
	 1623,
	 1625,
	 1627,
	 1630,
	 1632,
	 1634,
	 1636,
	 1638,
	 1640,
	 1642,
	 1644,
	 1646,
	 1648,
	 1650,
	 1652,
	 1654,
	 1656,
	 1658,
	 1660,
	 1662,
	 1664,
	 1666,
	 1668,
	 1670,
	 1672,
	 1674,
	 1676,
	 1678,
	 1680,
	 1682,
	 1684,
	 1686,
	 1688,
	 1690,
	 1692,
	 1694,
	 1696,
	 1698,
	 1700,
	 1702,
	 1704,
	 1706,
	 1708,
	 1710,
	 1712,
	 1714,
	 1716,
	 1718,
	 1720,
	 1722,
	 1724,
	 1726,
	 1728,
	 1730,
	 1732,
	 1734,
	 1736,
	 1738,
	 1740,
	 1742,
	 1744,
	 1746,
	 1748,
	 1750,
	 1752,
	 1754,
	 1756,
	 1758,
	 1760,
	 1762,
	 1764,
	 1766,
	 1768,
	 1769,
	 1771,
	 1773,
	 1775,
	 1777,
	 1779,
	 1781,
	 1783,
	 1785,
	 1787,
	 1789,
	 1791,
	 1793,
	 1795,
	 1797,
	 1799,
	 1801,
	 1803,
	 1805,
	 1807,
	 1809,
	 1811,
	 1813,
	 1815,
	 1817,
	 1819,
	 1821,
	 1823,
	 1825,
	 1827,
	 1829,
	 1831,
	 1833,
	 1835,
	 1837,
	 1839,
	 1841,
	 1843,
	 1845,
	 1847,
	 1849,
	 1851,
	 1853,
	 1855,
	 1857,
	 1859,
	 1861,
	 1863,
	 1865,
	 1867,
	 1869,
	 1871,
	 1873,
	 1875,
	 1877,
	 1879,
	 1881,
	 1883,
	 1885,
	 1887,
	 1889,
	 1891,
	 1893,
	 1895,
	 1897,
	 1899,
	 1901,
	 1903,
	 1905,
	 1907,
	 1909,
	 1911,
	 1913,
	 1915,
	 1917,
	 1919,
	 1921,
	 1923,
	 1925,
	 1927,
	 1929,
	 1931,
	 1933,
	 1935,
	 1937,
	 1939,
	 1941,
	 1943,
	 1945,
	 1947,
	 1949,
	 1951,
	 1953,
	 1955,
	 1957,
	 1959,
	 1961,
	 1963,
	 1965,
	 1967,
	 1969,
	 1971,
	 1973,
	 1975,
	 1977,
	 1979,
	 1981,
	 1983,
	 1985,
	 1987,
	 1989,
	 1991,
	 1993,
	 1995,
	 1997,
	 1999,
	 2001,
	 2003,
	 2005,
	 2007,
	 2009,
	 2011,
	 2013,
	 2015,
	 2017,
	 2019,
	 2021,
	 2023,
	 2025,
	 2027,
	 2029,
	 2031,
	 2033,
	 2035,
	 2037,
	 2039,
	 2041,
	 2043,
	 2045,
	 2047,
	 2049,
	 2051,
	 2053,
	 2055,
	 2057,
	 2059,
	 2061,
	 2063,
	 2065,
	 2067,
	 2069,
	 2071,
	 2073,
	 2075,
	 2077,
	 2079,
	 2081,
	 2083,
	 2084,
	 2086,
	 2088,
	 2090,
	 2092,
	 2094,
	 2096,
	 2098,
	 2100,
	 2102,
	 2104,
	 2106,
	 2108,
	 2110,
	 2112,
	 2114,
	 2116,
	 2118,
	 2120,
	 2122,
	 2124,
	 2126,
	 2128,
	 2130,
	 2132,
	 2134,
	 2136,
	 2138,
	 2140,
	 2142,
	 2144,
	 2146,
	 2148,
	 2150,
	 2152,
	 2154,
	 2156,
	 2158,
	 2160,
	 2162,
	 2164,
	 2166,
	 2168,
	 2170,
	 2172,
	 2174,
	 2176,
	 2178,
	 2180,
	 2182,
	 2184,
	 2186,
	 2188,
	 2190,
	 2192,
	 2194,
	 2196,
	 2198,
	 2200,
	 2202,
	 2204,
	 2206,
	 2208,
	 2210,
	 2212,
	 2214,
	 2216,
	 2218,
	 2220,
	 2222,
	 2224,
	 2226,
	 2228,
	 2230,
	 2232,
	 2234,
	 2236,
	 2238,
	 2240,
	 2242,
	 2244,
	 2246,
	 2248,
	 2250,
	 2252,
	 2254,
	 2256,
	 2258,
	 2260,
	 2262,
	 2264,
	 2266,
	 2268,
	 2271,
	 2273,
	 2275,
	 2277,
	 2279,
	 2281,
	 2283,
	 2285,
	 2287,
	 2289,
	 2291,
	 2293,
	 2295,
	 2297,
	 2299,
	 2301,
	 2303,
	 2305,
	 2307,
	 2309,
	 2311,
	 2313,
	 2315,
	 2317,
	 2319,
	 2321,
	 2323,
	 2325,
	 2327,
	 2329,
	 2331,
	 2333,
	 2335,
	 2337,
	 2339,
	 2341,
	 2343,
	 2345,
	 2347,
	 2349,
	 2351,
	 2353,
	 2355,
	 2357,
	 2359,
	 2361,
	 2363,
	 2365,
	 2367,
	 2369,
	 2371,
	 2373,
	 2375,
	 2377,
	 2379,
	 2381,
	 2383,
	 2385,
	 2387,
	 2389,
	 2391,
	 2393,
	 2395,
	 2397,
	 2399,
	 2401,
	 2403,
	 2405,
	 2407,
	 2409,
	 2411,
	 2413,
	 2415,
	 2417,
	 2419,
	 2421,
	 2424,
	 2426,
	 2428,
	 2430,
	 2432,
	 2434,
	 2436,
	 2438,
	 2440,
	 2442,
	 2444,
	 2446,
	 2448,
	 2450,
	 2452,
	 2454,
	 2456,
	 2458,
	 2460,
	 2462,
	 2464,
	 2466,
	 2468,
	 2470,
	 2472,
	 2474,
	 2476,
	 2478,
	 2480,
	 2482,
	 2484,
	 2486,
	 2488,
	 2490,
	 2492,
	 2494,
	 2496,
	 2498,
	 2501,
	 2503,
	 2505,
	 2507,
	 2509,
	 2511,
	 2513,
	 2515,
	 2517,
	 2519,
	 2521,
	 2523,
	 2525,
	 2527,
	 2529,
	 2531,
	 2533,
	 2535,
	 2537,
	 2539,
	 2541,
	 2543,
	 2545,
	 2547,
	 2549,
	 2551,
	 2553,
	 2555,
	 2558,
	 2560,
	 2562,
	 2564,
	 2566,
	 2568,
	 2570,
	 2572,
	 2574,
	 2576,
	 2578,
	 2580,
	 2582,
	 2584,
	 2586,
	 2588,
	 2590,
	 2592,
	 2594,
	 2596,
	 2598,
	 2600,
	 2602,
	 2604,
	 2607,
	 2609,
	 2611,
	 2613,
	 2615,
	 2617,
	 2619,
	 2621,
	 2623,
	 2625,
	 2627,
	 2629,
	 2631,
	 2633,
	 2635,
	 2637,
	 2639,
	 2641,
	 2643,
	 2645,
	 2648,
	 2650,
	 2652,
	 2654,
	 2656,
	 2658,
	 2660,
	 2662,
	 2664,
	 2666,
	 2668,
	 2670,
	 2672,
	 2674,
	 2676,
	 2678,
	 2680,
	 2683,
	 2685,
	 2687,
	 2689,
	 2691,
	 2693,
	 2695,
	 2697,
	 2699,
	 2701,
	 2703,
	 2705,
	 2707,
	 2709,
	 2711,
	 2713,
	 2716,
	 2718,
	 2720,
	 2722,
	 2724,
	 2726,
	 2728,
	 2730,
	 2732,
	 2734,
	 2736,
	 2738,
	 2740,
	 2742,
	 2744,
	 2747,
	 2749,
	 2751,
	 2753,
	 2755,
	 2757,
	 2759,
	 2761,
	 2763,
	 2765,
	 2767,
	 2769,
	 2771,
	 2774,
	 2776,
	 2778,
	 2780,
	 2782,
	 2784,
	 2786,
	 2788,
	 2790,
	 2792,
	 2794,
	 2796,
	 2798,
	 2801,
	 2803,
	 2805,
	 2807,
	 2809,
	 2811,
	 2813,
	 2815,
	 2817,
	 2819,
	 2821,
	 2824,
	 2826,
	 2828,
	 2830,
	 2832,
	 2834,
	 2836,
	 2838,
	 2840,
	 2842,
	 2844,
	 2847,
	 2849,
	 2851,
	 2853,
	 2855,
	 2857,
	 2859,
	 2861,
	 2863,
	 2865,
	 2867,
	 2870,
	 2872,
	 2874,
	 2876,
	 2878,
	 2880,
	 2882,
	 2884,
	 2886,
	 2888,
	 2891,
	 2893,
	 2895,
	 2897,
	 2899,
	 2901,
	 2903,
	 2905,
	 2907,
	 2910,
	 2912,
	 2914,
	 2916,
	 2918,
	 2920,
	 2922,
	 2924,
	 2926,
	 2928,
	 2931,
	 2933,
	 2935,
	 2937,
	 2939,
	 2941,
	 2943,
	 2945,
	 2948,
	 2950,
	 2952,
	 2954,
	 2956,
	 2958,
	 2960,
	 2962,
	 2964,
	 2967,
	 2969,
	 2971,
	 2973,
	 2975,
	 2977,
	 2979,
	 2981,
	 2984,
	 2986,
	 2988,
	 2990,
	 2992,
	 2994,
	 2996,
	 2998,
	 3001,
	 3003,
	 3005,
	 3007,
	 3009,
	 3011,
	 3013,
	 3016,
	 3018,
	 3020,
	 3022,
	 3024,
	 3026,
	 3028,
	 3030,
	 3033,
	 3035,
	 3037,
	 3039,
	 3041,
	 3043,
	 3045,
	 3048,
	 3050,
	 3052,
	 3054,
	 3056,
	 3058,
	 3060,
	 3063,
	 3065,
	 3067,
	 3069,
	 3071,
	 3073,
	 3075,
	 3078,
	 3080,
	 3082,
	 3084,
	 3086,
	 3088,
	 3091,
	 3093,
	 3095,
	 3097,
	 3099,
	 3101,
	 3103,
	 3106,
	 3108,
	 3110,
	 3112,
	 3114,
	 3116,
	 3119,
	 3121,
	 3123,
	 3125,
	 3127,
	 3129,
	 3132,
	 3134,
	 3136,
	 3138,
	 3140,
	 3142,
	 3145,
	 3147,
	 3149,
	 3151,
	 3153,
	 3155,
	 3158,
	 3160,
	 3162,
	 3164,
	 3166,
	 3168,
	 3171,
	 3173,
	 3175,
	 3177,
	 3179,
	 3182,
	 3184,
	 3186,
	 3188,
	 3190,
	 3192,
	 3195,
	 3197,
	 3199,
	 3201,
	 3203,
	 3206,
	 3208,
	 3210,
	 3212,
	 3214,
	 3217,
	 3219,
	 3221,
	 3223,
	 3225,
	 3227,
	 3230,
	 3232,
	 3234,
	 3236,
	 3238,
	 3241,
	 3243,
	 3245,
	 3247,
	 3249,
	 3252,
	 3254,
	 3256,
	 3258,
	 3260,
	 3263,
	 3265,
	 3267,
	 3269,
	 3272,
	 3274,
	 3276,
	 3278,
	 3280,
	 3283,
	 3285,
	 3287,
	 3289,
	 3291,
	 3294,
	 3296,
	 3298,
	 3300,
	 3302,
	 3305,
	 3307,
	 3309,
	 3311,
	 3314,
	 3316,
	 3318,
	 3320,
	 3322,
	 3325,
	 3327,
	 3329,
	 3331,
	 3334,
	 3336,
	 3338,
	 3340,
	 3343,
	 3345,
	 3347,
	 3349,
	 3351,
	 3354,
	 3356,
	 3358,
	 3360,
	 3363,
	 3365,
	 3367,
	 3369,
	 3372,
	 3374,
	 3376,
	 3378,
	 3381,
	 3383,
	 3385,
	 3387,
	 3390,
	 3392,
	 3394,
	 3396,
	 3399,
	 3401,
	 3403,
	 3405,
	 3408,
	 3410,
	 3412,
	 3414,
	 3417,
	 3419,
	 3421,
	 3423,
	 3426,
	 3428,
	 3430,
	 3432,
	 3435,
	 3437,
	 3439,
	 3442,
	 3444,
	 3446,
	 3448,
	 3451,
	 3453,
	 3455,
	 3457,
	 3460,
	 3462,
	 3464,
	 3467,
	 3469,
	 3471,
	 3473,
	 3476,
	 3478,
	 3480,
	 3482,
	 3485,
	 3487,
	 3489,
	 3492,
	 3494,
	 3496,
	 3498,
	 3501,
	 3503,
	 3505,
	 3508,
	 3510,
	 3512,
	 3515,
	 3517,
	 3519,
	 3521,
	 3524,
	 3526,
	 3528,
	 3531,
	 3533,
	 3535,
	 3538,
	 3540,
	 3542,
	 3544,
	 3547,
	 3549,
	 3551,
	 3554,
	 3556,
	 3558,
	 3561,
	 3563,
	 3565,
	 3568,
	 3570,
	 3572,
	 3575,
	 3577,
	 3579,
	 3581,
	 3584,
	 3586,
	 3588,
	 3591,
	 3593,
	 3595,
	 3598,
	 3600,
	 3602,
	 3605,
	 3607,
	 3609,
	 3612,
	 3614,
	 3616,
	 3619,
	 3621,
	 3623,
	 3626,
	 3628,
	 3630,
	 3633,
	 3635,
	 3637,
	 3640,
	 3642,
	 3644,
	 3647,
	 3649,
	 3652,
	 3654,
	 3656,
	 3659,
	 3661,
	 3663,
	 3666,
	 3668,
	 3670,
	 3673,
	 3675,
	 3677,
	 3680,
	 3682,
	 3685,
	 3687,
	 3689,
	 3692,
	 3694,
	 3696,
	 3699,
	 3701,
	 3704,
	 3706,
	 3708,
	 3711,
	 3713,
	 3715,
	 3718,
	 3720,
	 3723,
	 3725,
	 3727,
	 3730,
	 3732,
	 3734,
	 3737,
	 3739,
	 3742,
	 3744,
	 3746,
	 3749,
	 3751,
	 3754,
	 3756,
	 3758,
	 3761,
	 3763,
	 3766,
	 3768,
	 3770,
	 3773,
	 3775,
	 3778,
	 3780,
	 3782,
	 3785,
	 3787,
	 3790,
	 3792,
	 3794,
	 3797,
	 3799,
	 3802,
	 3804,
	 3807,
	 3809,
	 3811,
	 3814,
	 3816,
	 3819,
	 3821,
	 3824,
	 3826,
	 3828,
	 3831,
	 3833,
	 3836,
	 3838,
	 3841,
	 3843,
	 3845,
	 3848,
	 3850,
	 3853,
	 3855,
	 3858,
	 3860,
	 3863,
	 3865,
	 3867,
	 3870,
	 3872,
	 3875,
	 3877,
	 3880,
	 3882,
	 3885,
	 3887,
	 3889,
	 3892,
	 3894,
	 3897,
	 3899,
	 3902,
	 3904,
	 3907,
	 3909,
	 3912,
	 3914,
	 3917,
	 3919,
	 3922,
	 3924,
	 3927,
	 3929,
	 3931,
	 3934,
	 3936,
	 3939,
	 3941,
	 3944,
	 3946,
	 3949,
	 3951,
	 3954,
	 3956,
	 3959,
	 3961,
	 3964,
	 3966,
	 3969,
	 3971,
	 3974,
	 3976,
	 3979,
	 3981,
	 3984,
	 3986,
	 3989,
	 3991,
	 3994,
	 3996,
	 3999,
	 4001,
	 4004,
	 4006,
	 4009,
	 4012,
	 4014,
	 4017,
	 4019,
	 4022,
	 4024,
	 4027,
	 4029,
	 4032,
	 4034,
	 4037,
	 4039,
	 4042,
	 4044,
	 4047,
	 4049,
	 4052,
	 4055,
	 4057,
	 4060,
	 4062,
	 4065,
	 4067,
	 4070,
	 4072,
	 4075,
	 4078,
	 4080,
	 4083,
	 4085,
	 4088,
	 4090,
	 4093,
	 4095,
	 4098,
	 4101,
	 4103,
	 4106,
	 4108,
	 4111,
	 4113,
	 4116,
	 4119,
	 4121,
	 4124,
	 4126,
	 4129,
	 4132,
	 4134,
	 4137,
	 4139,
	 4142,
	 4144,
	 4147,
	 4150,
	 4152,
	 4155,
	 4157,
	 4160,
	 4163,
	 4165,
	 4168,
	 4171,
	 4173,
	 4176,
	 4178,
	 4181,
	 4184,
	 4186,
	 4189,
	 4191,
	 4194,
	 4197,
	 4199,
	 4202,
	 4205,
	 4207,
	 4210,
	 4212,
	 4215,
	 4218,
	 4220,
	 4223,
	 4226,
	 4228,
	 4231,
	 4234,
	 4236,
	 4239,
	 4242,
	 4244,
	 4247,
	 4249,
	 4252,
	 4255,
	 4257,
	 4260,
	 4263,
	 4265,
	 4268,
	 4271,
	 4273,
	 4276,
	 4279,
	 4281,
	 4284,
	 4287,
	 4289,
	 4292,
	 4295,
	 4298,
	 4300,
	 4303,
	 4306,
	 4308,
	 4311,
	 4314,
	 4316,
	 4319,
	 4322,
	 4324,
	 4327,
	 4330,
	 4333,
	 4335,
	 4338,
	 4341,
	 4343,
	 4346,
	 4349,
	 4352,
	 4354,
	 4357,
	 4360,
	 4362,
	 4365,
	 4368,
	 4371,
	 4373,
	 4376,
	 4379,
	 4382,
	 4384,
	 4387,
	 4390,
	 4393,
	 4395,
	 4398,
	 4401,
	 4404,
	 4406,
	 4409,
	 4412,
	 4415,
	 4417,
	 4420,
	 4423,
	 4426,
	 4428,
	 4431,
	 4434,
	 4437,
	 4439,
	 4442,
	 4445,
	 4448,
	 4451,
	 4453,
	 4456,
	 4459,
	 4462,
	 4465,
	 4467,
	 4470,
	 4473,
	 4476,
	 4478,
	 4481,
	 4484,
	 4487,
	 4490,
	 4493,
	 4495,
	 4498,
	 4501,
	 4504,
	 4507,
	 4509,
	 4512,
	 4515,
	 4518,
	 4521,
	 4524,
	 4526,
	 4529,
	 4532,
	 4535,
	 4538,
	 4541,
	 4543,
	 4546,
	 4549,
	 4552,
	 4555,
	 4558,
	 4561,
	 4563,
	 4566,
	 4569,
	 4572,
	 4575,
	 4578,
	 4581,
	 4583,
	 4586,
	 4589,
	 4592,
	 4595,
	 4598,
	 4601,
	 4604,
	 4606,
	 4609,
	 4612,
	 4615,
	 4618,
	 4621,
	 4624,
	 4627,
	 4630,
	 4633,
	 4635,
	 4638,
	 4641,
	 4644,
	 4647,
	 4650,
	 4653,
	 4656,
	 4659,
	 4662,
	 4665,
	 4668,
	 4671,
	 4674,
	 4676,
	 4679,
	 4682,
	 4685,
	 4688,
	 4691,
	 4694,
	 4697,
	 4700,
	 4703,
	 4706,
	 4709,
	 4712,
	 4715,
	 4718,
	 4721,
	 4724,
	 4727,
	 4730,
	 4733,
	 4736,
	 4739,
	 4742,
	 4745,
	 4748,
	 4751,
	 4754,
	 4757,
	 4760,
	 4763,
	 4766,
	 4769,
	 4772,
	 4775,
	 4778,
	 4781,
	 4784,
	 4787,
	 4790,
	 4793,
	 4796,
	 4799,
	 4802,
	 4805,
	 4808,
	 4811,
	 4814,
	 4817,
	 4820,
	 4823,
	 4826,
	 4829,
	 4832,
	 4835,
	 4839,
	 4842,
	 4845,
	 4848,
	 4851,
	 4854,
	 4857,
	 4860,
	 4863,
	 4866,
	 4869,
	 4872,
	 4876,
	 4879,
	 4882,
	 4885,
	 4888,
	 4891,
	 4894,
	 4897,
	 4900,
	 4903,
	 4907,
	 4910,
	 4913,
	 4916,
	 4919,
	 4922,
	 4925,
	 4928,
	 4932,
	 4935,
	 4938,
	 4941,
	 4944,
	 4947,
	 4951,
	 4954,
	 4957,
	 4960,
	 4963,
	 4966,
	 4970,
	 4973,
	 4976,
	 4979,
	 4982,
	 4985,
	 4989,
	 4992,
	 4995,
	 4998,
	 5001,
	 5005,
	 5008,
	 5011,
	 5014,
	 5017,
	 5021,
	 5024,
	 5027,
	 5030,
	 5034,
	 5037,
	 5040,
	 5043,
	 5046,
	 5050,
	 5053,
	 5056,
	 5059,
	 5063,
	 5066,
	 5069,
	 5072,
	 5076,
	 5079,
	 5082,
	 5086,
	 5089,
	 5092,
	 5095,
	 5099,
	 5102,
	 5105,
	 5109,
	 5112,
	 5115,
	 5118,
	 5122,
	 5125,
	 5128,
	 5132,
	 5135,
	 5138,
	 5142,
	 5145,
	 5148,
	 5152,
	 5155,
	 5158,
	 5162,
	 5165,
	 5168,
	 5172,
	 5175,
	 5178,
	 5182,
	 5185,
	 5188,
	 5192,
	 5195,
	 5199,
	 5202,
	 5205,
	 5209,
	 5212,
	 5215,
	 5219,
	 5222,
	 5226,
	 5229,
	 5233,
	 5236,
	 5239,
	 5243,
	 5246,
	 5250,
	 5253,
	 5256,
	 5260,
	 5263,
	 5267,
	 5270,
	 5274,
	 5277,
	 5281,
	 5284,
	 5287,
	 5291,
	 5294,
	 5298,
	 5301,
	 5305,
	 5308,
	 5312,
	 5315,
	 5319,
	 5322,
	 5326,
	 5329,
	 5333,
	 5336,
	 5340,
	 5343,
	 5347,
	 5350,
	 5354,
	 5357,
	 5361,
	 5364,
	 5368,
	 5372,
	 5375,
	 5379,
	 5382,
	 5386,
	 5389,
	 5393,
	 5396,
	 5400,
	 5404,
	 5407,
	 5411,
	 5414,
	 5418,
	 5422,
	 5425,
	 5429,
	 5432,
	 5436,
	 5440,
	 5443,
	 5447,
	 5450,
	 5454,
	 5458,
	 5461,
	 5465,
	 5469,
	 5472,
	 5476,
	 5480,
	 5483,
	 5487,
	 5491,
	 5494,
	 5498,
	 5502,
	 5505,
	 5509,
	 5513,
	 5516,
	 5520,
	 5524,
	 5527,
	 5531,
	 5535,
	 5539,
	 5542,
	 5546,
	 5550,
	 5553,
	 5557,
	 5561,
	 5565,
	 5568,
	 5572,
	 5576,
	 5580,
	 5583,
	 5587,
	 5591,
	 5595,
	 5599,
	 5602,
	 5606,
	 5610,
	 5614,
	 5618,
	 5621,
	 5625,
	 5629,
	 5633,
	 5637,
	 5640,
	 5644,
	 5648,
	 5652,
	 5656,
	 5660,
	 5664,
	 5667,
	 5671,
	 5675,
	 5679,
	 5683,
	 5687,
	 5691,
	 5695,
	 5698,
	 5702,
	 5706,
	 5710,
	 5714,
	 5718,
	 5722,
	 5726,
	 5730,
	 5734,
	 5738,
	 5742,
	 5746,
	 5750,
	 5753,
	 5757,
	 5761,
	 5765,
	 5769,
	 5773,
	 5777,
	 5781,
	 5785,
	 5789,
	 5793,
	 5797,
	 5801,
	 5805,
	 5809,
	 5813,
	 5817,
	 5822,
	 5826,
	 5830,
	 5834,
	 5838,
	 5842,
	 5846,
	 5850,
	 5854,
	 5858,
	 5862,
	 5866,
	 5870,
	 5875,
	 5879,
	 5883,
	 5887,
	 5891,
	 5895,
	 5899,
	 5903,
	 5908,
	 5912,
	 5916,
	 5920,
	 5924,
	 5928,
	 5933,
	 5937,
	 5941,
	 5945,
	 5949,
	 5954,
	 5958,
	 5962,
	 5966,
	 5970,
	 5975,
	 5979,
	 5983,
	 5987,
	 5992,
	 5996,
	 6000,
	 6004,
	 6009,
	 6013,
	 6017,
	 6022,
	 6026,
	 6030,
	 6034,
	 6039,
	 6043,
	 6047,
	 6052,
	 6056,
	 6060,
	 6065,
	 6069,
	 6074,
	 6078,
	 6082,
	 6087,
	 6091,
	 6095,
	 6100,
	 6104,
	 6109,
	 6113,
	 6118,
	 6122,
	 6126,
	 6131,
	 6135,
	 6140,
	 6144,
	 6149,
	 6153,
	 6158,
	 6162,
	 6167,
	 6171,
	 6176,
	 6180,
	 6185,
	 6189,
	 6194,
	 6198,
	 6203,
	 6207,
	 6212,
	 6216,
	 6221,
	 6226,
	 6230,
	 6235,
	 6239,
	 6244,
	 6248,
	 6253,
	 6258,
	 6262,
	 6267,
	 6272,
	 6276,
	 6281,
	 6286,
	 6290,
	 6295,
	 6300,
	 6304,
	 6309,
	 6314,
	 6318,
	 6323,
	 6328,
	 6333,
	 6337,
	 6342,
	 6347,
	 6352,
	 6356,
	 6361,
	 6366,
	 6371,
	 6375,
	 6380,
	 6385,
	 6390,
	 6395,
	 6399,
	 6404,
	 6409,
	 6414,
	 6419,
	 6424,
	 6429,
	 6433,
	 6438,
	 6443,
	 6448,
	 6453,
	 6458,
	 6463,
	 6468,
	 6473,
	 6478,
	 6483,
	 6488,
	 6493,
	 6498,
	 6503,
	 6508,
	 6513,
	 6518,
	 6523,
	 6528,
	 6533,
	 6538,
	 6543,
	 6548,
	 6553,
	 6558,
	 6563,
	 6568,
	 6573,
	 6578,
	 6584,
	 6589,
	 6594,
	 6599,
	 6604,
	 6609,
	 6614,
	 6620,
	 6625,
	 6630,
	 6635,
	 6640,
	 6646,
	 6651,
	 6656,
	 6661,
	 6667,
	 6672,
	 6677,
	 6682,
	 6688,
	 6693,
	 6698,
	 6704,
	 6709,
	 6714,
	 6720,
	 6725,
	 6730,
	 6736,
	 6741,
	 6746,
	 6752,
	 6757,
	 6763,
	 6768,
	 6774,
	 6779,
	 6785,
	 6790,
	 6795,
	 6801,
	 6806,
	 6812,
	 6817,
	 6823,
	 6829,
	 6834,
	 6840,
	 6845,
	 6851,
	 6856,
	 6862,
	 6868,
	 6873,
	 6879,
	 6884,
	 6890,
	 6896,
	 6901,
	 6907,
	 6913,
	 6918,
	 6924,
	 6930,
	 6936,
	 6941,
	 6947,
	 6953,
	 6959,
	 6964,
	 6970,
	 6976,
	 6982,
	 6988,
	 6994,
	 6999,
	 7005,
	 7011,
	 7017,
	 7023,
	 7029,
	 7035,
	 7041,
	 7047,
	 7053,
	 7059,
	 7065,
	 7071,
	 7077,
	 7083,
	 7089,
	 7095,
	 7101,
	 7107,
	 7113,
	 7119,
	 7125,
	 7131,
	 7137,
	 7143,
	 7149,
	 7156,
	 7162,
	 7168,
	 7174,
	 7180,
	 7187,
	 7193,
	 7199,
	 7205,
	 7212,
	 7218,
	 7224,
	 7230,
	 7237,
	 7243,
	 7249,
	 7256,
	 7262,
	 7269,
	 7275,
	 7281,
	 7288,
	 7294,
	 7301,
	 7307,
	 7314,
	 7320,
	 7327,
	 7333,
	 7340,
	 7346,
	 7353,
	 7360,
	 7366,
	 7373,
	 7379,
	 7386,
	 7393,
	 7399,
	 7406,
	 7413,
	 7419,
	 7426,
	 7433,
	 7440,
	 7446,
	 7453,
	 7460,
	 7467,
	 7474,
	 7481,
	 7487,
	 7494,
	 7501,
	 7508,
	 7515,
	 7522,
	 7529,
	 7536,
	 7543,
	 7550,
	 7557,
	 7564,
	 7571,
	 7578,
	 7585,
	 7592,
	 7599,
	 7607,
	 7614,
	 7621,
	 7628,
	 7635,
	 7643,
	 7650,
	 7657,
	 7664,
	 7672,
	 7679,
	 7686,
	 7694,
	 7701,
	 7708,
	 7716,
	 7723,
	 7731,
	 7738,
	 7746,
	 7753,
	 7761,
	 7768,
	 7776,
	 7783,
	 7791,
	 7798,
	 7806,
	 7814,
	 7821,
	 7829,
	 7837,
	 7844,
	 7852,
	 7860,
	 7868,
	 7876,
	 7883,
	 7891,
	 7899,
	 7907,
	 7915,
	 7923,
	 7931,
	 7939,
	 7947,
	 7955,
	 7963,
	 7971,
	 7979,
	 7987,
	 7995,
	 8003,
	 8012,
	 8020,
	 8028,
	 8036,
	 8044,
	 8053,
	 8061,
	 8069,
	 8078,
	 8086,
	 8094,
	 8103,
	 8111,
	 8120,
	 8128,
	 8137,
	 8145,
	 8154,
	 8162,
	 8171,
	 8180,
	 8188,
	 8197,
	 8206,
	 8215,
	 8223,
	 8232,
	 8241,
	 8250,
	 8259,
	 8268,
	 8276,
	 8285,
	 8294,
	 8303,
	 8312,
	 8321,
	 8331,
	 8340,
	 8349,
	 8358,
	 8367,
	 8376,
	 8386,
	 8395,
	 8404,
	 8414,
	 8423,
	 8432,
	 8442,
	 8451,
	 8461,
	 8470,
	 8480,
	 8489,
	 8499,
	 8509,
	 8518,
	 8528,
	 8538,
	 8547,
	 8557,
	 8567,
	 8577,
	 8587,
	 8597,
	 8607,
	 8617,
	 8627,
	 8637,
	 8647,
	 8657,
	 8667,
	 8677,
	 8688,
	 8698,
	 8708,
	 8719,
	 8729,
	 8739,
	 8750,
	 8760,
	 8771,
	 8781,
	 8792,
	 8803,
	 8813,
	 8824,
	 8835,
	 8845,
	 8856,
	 8867,
	 8878,
	 8889,
	 8900,
	 8911,
	 8922,
	 8933,
	 8944,
	 8955,
	 8967,
	 8978,
	 8989,
	 9001,
	 9012,
	 9023,
	 9035,
	 9046,
	 9058,
	 9070,
	 9081,
	 9093,
	 9105,
	 9117,
	 9128,
	 9140,
	 9152,
	 9164,
	 9176,
	 9188,
	 9201,
	 9213,
	 9225,
	 9237,
	 9250,
	 9262,
	 9274,
	 9287,
	 9299,
	 9312,
	 9325,
	 9337,
	 9350,
	 9363,
	 9376,
	 9389,
	 9402,
	 9415,
	 9428,
	 9441,
	 9454,
	 9467,
	 9481,
	 9494,
	 9507,
	 9521,
	 9535,
	 9548,
	 9562,
	 9576,
	 9589,
	 9603,
	 9617,
	 9631,
	 9645,
	 9659,
	 9673,
	 9688,
	 9702,
	 9716,
	 9731,
	 9745,
	 9760,
	 9775,
	 9789,
	 9804,
	 9819,
	 9834,
	 9849,
	 9864,
	 9879,
	 9895,
	 9910,
	 9925,
	 9941,
	 9956,
	 9972,
	 9988,
	 10004,
	 10020,
	 10036,
	 10052,
	 10068,
	 10084,
	 10100,
	 10117,
	 10133,
	 10150,
	 10166,
	 10183,
	 10200,
	 10217,
	 10234,
	 10251,
	 10268,
	 10286,
	 10303,
	 10321,
	 10338,
	 10356,
	 10374,
	 10392,
	 10410,
	 10428,
	 10446,
	 10465,
	 10483,
	 10502,
	 10521,
	 10539,
	 10558,
	 10577,
	 10597,
	 10616,
	 10635,
	 10655,
	 10674,
	 10694,
	 10714,
	 10734,
	 10754,
	 10775,
	 10795,
	 10816,
	 10836,
	 10857,
	 10878,
	 10899,
	 10921,
	 10942,
	 10964,
	 10985,
	 11007,
	 11029,
	 11051,
	 11074,
	 11096,
	 11119,
	 11142,
	 11165,
	 11188,
	 11211,
	 11235,
	 11258,
	 11282,
	 11306,
	 11331,
	 11355,
	 11380,
	 11404,
	 11429,
	 11455,
	 11480,
	 11506,
	 11532,
	 11558,
	 11584,
	 11610,
	 11637,
	 11664,
	 11691,
	 11718,
	 11746,
	 11774,
	 11802,
	 11830,
	 11859,
	 11888,
	 11917,
	 11946,
	 11976,
	 12006,
	 12036,
	 12067,
	 12097,
	 12129,
	 12160,
	 12192,
	 12224,
	 12256,
	 12289,
	 12322,
	 12355,
	 12389,
	 12423,
	 12457,
	 12492,
	 12527,
	 12562,
	 12598,
	 12635,
	 12671,
	 12708,
	 12746,
	 12784,
	 12822,
	 12861,
	 12901,
	 12940,
	 12981,
	 13021,
	 13063,
	 13104,
	 13147,
	 13190,
	 13233,
	 13277,
	 13322,
	 13367,
	 13412,
	 13459,
	 13506,
	 13554,
	 13602,
	 13651,
	 13701,
	 13751,
	 13803,
	 13855,
	 13908,
	 13961,
	 14016,
	 14071,
	 14128,
	 14185,
	 14243,
	 14302,
	 14363,
	 14424,
	 14486,
	 14550,
	 14615,
	 14681,
	 14748,
	 14816,
	 14886,
	 14957,
	 15030,
	 15104,
	 15179,
	 15257,
	 15336,
	 15416,
	 15499,
	 15584,
	 15670,
	 15759,
	 15849,
	 15942,
	 16038,
	 16136,
	 16236,
	 16340,
	 16446,
	 16555,
	 16668,
	 16784,
	 16903,
	 17027,
	 17154,
	 17286,
	 17423,
	 17564,
	 17711,
	 17863,
	 18021,
	 18186,
	 18358,
	 18537,
	 18725,
	 18921,
	 19128,
	 19344,
	 19573,
	 19815,
	 20071,
	 20343,
	 20634,
	 20944,
	 21278,
	 21639,
	 22030,
	 22457,
	 22927,
	 23448,
	 24030,
	 24690,
	 25447,
	 26333,
	 27393,
	 28702,
	 30391,
	 32725,
	 36352,
	 43684,
	 -27314
};

/*Procédure d'initialisation du pin pour utilisation de l'ADC*/
/*Cette procédure remplace la procédure rflpc normalement utilisé 'rfpc_adc_init()' car buggué.*/

void NCP18WF104F03RC_init_pin(rflpc_pin_t analog_pin){
	rflpc_adc_init(analog_pin, RFLPC_CCLK_8);
	rflpc_pin_set(analog_pin, 0x01, RFLPC_PIN_MODE_RESISTOR_PULL_UP, 0);
}


/*Fonction qui retourne la valeur lu par le pin analogique*/

uint16_t NCP18WF104F03RC_read_temp(rflpc_pin_t analog_pin){

	 rflpc_adc_sample(analog_pin);

	return tableau[rflpc_adc_read(analog_pin)]/100;
}



