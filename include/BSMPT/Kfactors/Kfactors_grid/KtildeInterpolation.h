/*
 * KtildeInterpolation.h
 *
 *  Copyright (C) 2020  Philipp Basler, Margarete Mühlleitner and Jonas Müller

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

#ifndef SRC_BARYO_CALCULATION_KFACTORS_GRID_KtildeInterpolation_H_
#define SRC_BARYO_CALCULATION_KFACTORS_GRID_KtildeInterpolation_H_

/**
 * @file
 * Data points for the interpolation of the normalisation of Ktile
 */

#include <vector>

namespace BSMPT
{
namespace Kfactors
{
namespace Data
{

/**
 * @brief KtildeInterpolationSize number of Data points in the Interpolation of
 * the tilde{K} normalisation
 */
const std::size_t KtildeInterpolationSize = 401;
/**
 * @brief msquaredTsquared Data points for m^2/T^2 used to calculate the
 * tilde{K} normalisations
 */
const std::vector<double> msquaredTsquared{
    0,   1,   2,   3,   4,   5,   6,   7,   8,   9,   10,  11,  12,  13,  14,
    15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,
    30,  31,  32,  33,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43,  44,
    45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,
    60,  61,  62,  63,  64,  65,  66,  67,  68,  69,  70,  71,  72,  73,  74,
    75,  76,  77,  78,  79,  80,  81,  82,  83,  84,  85,  86,  87,  88,  89,
    90,  91,  92,  93,  94,  95,  96,  97,  98,  99,  100, 101, 102, 103, 104,
    105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119,
    120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134,
    135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149,
    150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164,
    165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179,
    180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194,
    195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209,
    210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224,
    225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
    240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254,
    255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269,
    270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284,
    285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299,
    300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314,
    315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329,
    330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344,
    345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359,
    360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374,
    375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389,
    390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400};
/**
 * @brief KtildeNormBoson_grid Data points for the interpolation of the tilde{K}
 * normalisations for the bosons
 */
const std::vector<double> KtildeNormBoson_grid{
    30.211,      22.3434,     18.2769,     15.4094,     13.2236,
    11.4873,     10.071,      8.89376,     7.90116,     7.05479,
    6.32644,     5.69483,     5.14351,     4.65952,     4.23254,
    3.85418,     3.51757,     3.21704,     2.94785,     2.70602,
    2.48817,     2.29144,     2.11336,     1.95182,     1.80498,
    1.67124,     1.54924,     1.43773,     1.33568,     1.24212,
    1.15623,     1.07728,     1.00461,     0.937646,    0.875858,
    0.818786,    0.766013,    0.717165,    0.671906,    0.629932,
    0.590969,    0.554769,    0.521107,    0.48978,     0.460604,
    0.433408,    0.408041,    0.384363,    0.362245,    0.34157,
    0.322233,    0.304135,    0.287187,    0.271305,    0.256414,
    0.242444,    0.229331,    0.217017,    0.205445,    0.194567,
    0.184334,    0.174705,    0.16564,     0.1571,      0.149053,
    0.141467,    0.134312,    0.12756,     0.121187,    0.115169,
    0.109483,    0.10411,     0.09903,     0.0942253,   0.0896794,
    0.0853769,   0.0813033,   0.0774451,   0.0737896,   0.0703252,
    0.0670407,   0.0639258,   0.0609709,   0.0581667,   0.055505,
    0.0529776,   0.0505772,   0.0482966,   0.0461292,   0.044069,
    0.04211,     0.0402468,   0.0384742,   0.0367875,   0.0351819,
    0.0336533,   0.0321976,   0.0308109,   0.0294897,   0.0282306,
    0.0270304,   0.0258861,   0.0247948,   0.0237539,   0.0227607,
    0.0218129,   0.0209083,   0.0200447,   0.01922,     0.0184323,
    0.0176799,   0.016961,    0.0162739,   0.0156172,   0.0149894,
    0.0143891,   0.0138149,   0.0132657,   0.0127402,   0.0122374,
    0.0117562,   0.0112955,   0.0108545,   0.0104322,   0.0100277,
    0.00964021,  0.00926901,  0.00891331,  0.00857243,  0.00824568,
    0.00793243,  0.00763209,  0.00734406,  0.00706781,  0.00680281,
    0.00654858,  0.00630462,  0.0060705,   0.00584578,  0.00563006,
    0.00542295,  0.00522408,  0.00503308,  0.00484963,  0.00467341,
    0.00450409,  0.0043414,   0.00418506,  0.00403479,  0.00389034,
    0.00375146,  0.00361794,  0.00348953,  0.00336604,  0.00324726,
    0.00313299,  0.00302306,  0.00291728,  0.00281548,  0.00271751,
    0.00262321,  0.00253242,  0.00244502,  0.00236086,  0.00227982,
    0.00220177,  0.00212659,  0.00205416,  0.00198439,  0.00191717,
    0.00185239,  0.00178996,  0.00172978,  0.00167178,  0.00161587,
    0.00156196,  0.00150999,  0.00145986,  0.00141153,  0.0013649,
    0.00131993,  0.00127655,  0.00123469,  0.00119431,  0.00115534,
    0.00111773,  0.00108143,  0.0010464,   0.00101258,  0.000979927,
    0.000948403, 0.000917965, 0.000888571, 0.000860184, 0.000832767,
    0.000806284, 0.000780701, 0.000755987, 0.000732108, 0.000709035,
    0.000686739, 0.000665192, 0.000644367, 0.000624239, 0.000604781,
    0.000585972, 0.000567786, 0.000550203, 0.000533201, 0.00051676,
    0.000500859, 0.00048548,  0.000470605, 0.000456216, 0.000442296,
    0.000428829, 0.000415798, 0.00040319,  0.000390989, 0.000379182,
    0.000367754, 0.000356693, 0.000345987, 0.000335622, 0.000325589,
    0.000315874, 0.000306468, 0.000297361, 0.000288541, 0.00028,
    0.000271727, 0.000263715, 0.000255954, 0.000248435, 0.000241152,
    0.000234096, 0.000227259, 0.000220634, 0.000214215, 0.000207994,
    0.000201965, 0.000196122, 0.000190458, 0.000184969, 0.000179647,
    0.000174487, 0.000169486, 0.000164636, 0.000159934, 0.000155374,
    0.000150952, 0.000146664, 0.000142505, 0.000138471, 0.000134558,
    0.000130763, 0.000127081, 0.000123509, 0.000120044, 0.000116681,
    0.000113419, 0.000110253, 0.000107181, 0.000104199, 0.000101306,
    9.84975e-05, 9.57716e-05, 9.31256e-05, 9.05571e-05, 8.80636e-05,
    8.56428e-05, 8.32925e-05, 8.10105e-05, 7.87947e-05, 7.66431e-05,
    7.45536e-05, 7.25245e-05, 7.05538e-05, 6.86398e-05, 6.67807e-05,
    6.49749e-05, 6.32207e-05, 6.15167e-05, 5.98612e-05, 5.82529e-05,
    5.66902e-05, 5.51719e-05, 5.36966e-05, 5.2263e-05,  5.08699e-05,
    4.9516e-05,  4.82002e-05, 4.69214e-05, 4.56784e-05, 4.44702e-05,
    4.32958e-05, 4.21541e-05, 4.10443e-05, 3.99653e-05, 3.89162e-05,
    3.78963e-05, 3.69046e-05, 3.59403e-05, 3.50026e-05, 3.40907e-05,
    3.32039e-05, 3.23415e-05, 3.15027e-05, 3.06868e-05, 2.98933e-05,
    2.91214e-05, 2.83706e-05, 2.76401e-05, 2.69296e-05, 2.62382e-05,
    2.55657e-05, 2.49112e-05, 2.42745e-05, 2.36549e-05, 2.3052e-05,
    2.24653e-05, 2.18944e-05, 2.13387e-05, 2.07979e-05, 2.02716e-05,
    1.97593e-05, 1.92606e-05, 1.87752e-05, 1.83027e-05, 1.78427e-05,
    1.73949e-05, 1.6959e-05,  1.65345e-05, 1.61213e-05, 1.57189e-05,
    1.53271e-05, 1.49456e-05, 1.45741e-05, 1.42123e-05, 1.38599e-05,
    1.35168e-05, 1.31826e-05, 1.28571e-05, 1.25401e-05, 1.22313e-05,
    1.19305e-05, 1.16374e-05, 1.1352e-05,  1.10739e-05, 1.0803e-05,
    1.05391e-05, 1.02819e-05, 1.00314e-05, 9.78723e-06, 9.54934e-06,
    9.31754e-06, 9.09166e-06, 8.87153e-06, 8.65701e-06, 8.44794e-06,
    8.24419e-06, 8.04559e-06, 7.85203e-06, 7.66336e-06, 7.47946e-06,
    7.3002e-06,  7.12545e-06, 6.9551e-06,  6.78902e-06, 6.62712e-06,
    6.46927e-06, 6.31537e-06, 6.16532e-06, 6.01901e-06, 5.87635e-06,
    5.73724e-06, 5.60159e-06, 5.46931e-06, 5.34031e-06, 5.2145e-06,
    5.09181e-06, 4.97214e-06, 4.85543e-06, 4.7416e-06,  4.63057e-06,
    4.52227e-06, 4.41662e-06, 4.31357e-06, 4.21304e-06, 4.11497e-06,
    4.01929e-06, 3.92595e-06, 3.83488e-06, 3.74603e-06, 3.65934e-06,
    3.57476e-06, 3.49222e-06, 3.41169e-06, 3.3331e-06,  3.25641e-06,
    3.18157e-06};
/**
 * @brief KtildeNormFermion_grid Data points for the interpolation of the
 * tilde{K} normalisations for the fermions
 */
const std::vector<double> KtildeNormFermion_grid{
    22.6582,     19.0375,     16.3016,     14.1235,     12.3442,
    10.8653,     9.61978,     8.55984,     7.65001,     6.86329,
    6.1787,      5.57968,     5.05294,     4.58773,     4.17521,
    3.80809,     3.48031,     3.18674,     2.92309,     2.68569,
    2.47141,     2.27757,     2.10183,     1.9422,      1.79693,
    1.66449,     1.54355,     1.43293,     1.33161,     1.23866,
    1.15329,     1.07478,     1.00247,     0.93581,     0.874282,
    0.81743,     0.764845,    0.716157,    0.671034,    0.629176,
    0.590313,    0.554199,    0.520611,    0.489348,    0.460226,
    0.433078,    0.407752,    0.384109,    0.362022,    0.341375,
    0.322062,    0.303984,    0.287053,    0.271187,    0.25631,
    0.242352,    0.22925,     0.216945,    0.205381,    0.19451,
    0.184284,    0.17466,     0.1656,      0.157065,    0.149022,
    0.141439,    0.134287,    0.127538,    0.121167,    0.115151,
    0.109467,    0.104096,    0.0990169,   0.0942136,   0.0896689,
    0.0853674,   0.0812947,   0.0774374,   0.0737827,   0.070319,
    0.0670351,   0.0639207,   0.0609663,   0.0581626,   0.0555013,
    0.0529742,   0.0505741,   0.0482938,   0.0461267,   0.0440667,
    0.0421079,   0.0402449,   0.0384725,   0.0367859,   0.0351805,
    0.033652,    0.0321964,   0.0308099,   0.0294888,   0.0282298,
    0.0270296,   0.0258854,   0.0247941,   0.0237532,   0.0227601,
    0.0218124,   0.0209078,   0.0200442,   0.0192196,   0.018432,
    0.0176796,   0.0169607,   0.0162737,   0.015617,    0.0149892,
    0.0143888,   0.0138147,   0.0132655,   0.0127401,   0.0122373,
    0.011756,    0.0112954,   0.0108544,   0.010432,    0.0100276,
    0.00964012,  0.00926893,  0.00891324,  0.00857236,  0.00824561,
    0.00793237,  0.00763203,  0.00734401,  0.00706777,  0.00680277,
    0.00654854,  0.00630458,  0.00607047,  0.00584575,  0.00563004,
    0.00542293,  0.00522405,  0.00503306,  0.00484961,  0.00467339,
    0.00450408,  0.00434139,  0.00418504,  0.00403477,  0.00389032,
    0.00375145,  0.00361793,  0.00348952,  0.00336603,  0.00324725,
    0.00313299,  0.00302305,  0.00291727,  0.00281548,  0.0027175,
    0.0026232,   0.00253242,  0.00244502,  0.00236086,  0.00227982,
    0.00220176,  0.00212658,  0.00205416,  0.00198439,  0.00191716,
    0.00185238,  0.00178995,  0.00172978,  0.00167178,  0.00161587,
    0.00156196,  0.00150999,  0.00145986,  0.00141152,  0.0013649,
    0.00131993,  0.00127655,  0.00123469,  0.00119431,  0.00115534,
    0.00111773,  0.00108143,  0.0010464,   0.00101258,  0.000979926,
    0.000948403, 0.000917964, 0.00088857,  0.000860183, 0.000832766,
    0.000806283, 0.000780701, 0.000755986, 0.000732107, 0.000709035,
    0.000686739, 0.000665192, 0.000644367, 0.000624238, 0.000604781,
    0.000585971, 0.000567786, 0.000550203, 0.000533201, 0.000516759,
    0.000500859, 0.00048548,  0.000470605, 0.000456216, 0.000442296,
    0.000428828, 0.000415798, 0.00040319,  0.000390989, 0.000379182,
    0.000367754, 0.000356693, 0.000345987, 0.000335622, 0.000325589,
    0.000315874, 0.000306468, 0.000297361, 0.000288541, 0.000279999,
    0.000271727, 0.000263715, 0.000255954, 0.000248435, 0.000241152,
    0.000234096, 0.000227259, 0.000220634, 0.000214215, 0.000207994,
    0.000201965, 0.000196122, 0.000190458, 0.000184968, 0.000179647,
    0.000174487, 0.000169486, 0.000164636, 0.000159934, 0.000155374,
    0.000150952, 0.000146664, 0.000142505, 0.000138471, 0.000134558,
    0.000130763, 0.000127081, 0.000123509, 0.000120044, 0.000116681,
    0.000113419, 0.000110253, 0.000107181, 0.000104199, 0.000101306,
    9.84975e-05, 9.57716e-05, 9.31256e-05, 9.05571e-05, 8.80636e-05,
    8.56428e-05, 8.32925e-05, 8.10105e-05, 7.87947e-05, 7.66431e-05,
    7.45536e-05, 7.25245e-05, 7.05538e-05, 6.86398e-05, 6.67807e-05,
    6.49749e-05, 6.32207e-05, 6.15167e-05, 5.98612e-05, 5.82529e-05,
    5.66902e-05, 5.51719e-05, 5.36966e-05, 5.2263e-05,  5.08699e-05,
    4.9516e-05,  4.82002e-05, 4.69214e-05, 4.56784e-05, 4.44702e-05,
    4.32958e-05, 4.21541e-05, 4.10443e-05, 3.99653e-05, 3.89162e-05,
    3.78963e-05, 3.69046e-05, 3.59403e-05, 3.50026e-05, 3.40907e-05,
    3.32039e-05, 3.23415e-05, 3.15027e-05, 3.06868e-05, 2.98933e-05,
    2.91214e-05, 2.83706e-05, 2.76401e-05, 2.69296e-05, 2.62382e-05,
    2.55657e-05, 2.49112e-05, 2.42745e-05, 2.36549e-05, 2.3052e-05,
    2.24653e-05, 2.18944e-05, 2.13387e-05, 2.07979e-05, 2.02716e-05,
    1.97593e-05, 1.92606e-05, 1.87752e-05, 1.83027e-05, 1.78427e-05,
    1.73949e-05, 1.6959e-05,  1.65345e-05, 1.61213e-05, 1.57189e-05,
    1.53271e-05, 1.49456e-05, 1.45741e-05, 1.42123e-05, 1.38599e-05,
    1.35168e-05, 1.31826e-05, 1.28571e-05, 1.25401e-05, 1.22313e-05,
    1.19305e-05, 1.16374e-05, 1.1352e-05,  1.10739e-05, 1.0803e-05,
    1.05391e-05, 1.02819e-05, 1.00314e-05, 9.78723e-06, 9.54934e-06,
    9.31754e-06, 9.09166e-06, 8.87153e-06, 8.65701e-06, 8.44794e-06,
    8.24419e-06, 8.04559e-06, 7.85203e-06, 7.66336e-06, 7.47946e-06,
    7.3002e-06,  7.12545e-06, 6.9551e-06,  6.78902e-06, 6.62712e-06,
    6.46927e-06, 6.31537e-06, 6.16532e-06, 6.01901e-06, 5.87635e-06,
    5.73724e-06, 5.60159e-06, 5.46931e-06, 5.34031e-06, 5.2145e-06,
    5.09181e-06, 4.97214e-06, 4.85543e-06, 4.7416e-06,  4.63057e-06,
    4.52227e-06, 4.41662e-06, 4.31357e-06, 4.21304e-06, 4.11497e-06,
    4.01929e-06, 3.92595e-06, 3.83488e-06, 3.74603e-06, 3.65934e-06,
    3.57476e-06, 3.49222e-06, 3.41169e-06, 3.3331e-06,  3.25641e-06,
    3.18157e-06};

} // namespace Data
} // namespace Kfactors
} // namespace BSMPT
#endif /* SRC_BARYO_CALCULATION_KFACTORS_GRID_KtildeInterpolation_H_ */
