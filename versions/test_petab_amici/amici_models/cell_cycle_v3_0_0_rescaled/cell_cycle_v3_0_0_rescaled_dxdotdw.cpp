#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include <array>

#include "p.h"
#include "k.h"
#include "w.h"
#include "x.h"
#include "dxdotdw.h"

namespace amici {
namespace model_cell_cycle_v3_0_0_rescaled {

void dxdotdw_cell_cycle_v3_0_0_rescaled(realtype *dxdotdw, const realtype t, const realtype *x, const realtype *p, const realtype *k, const realtype *h, const realtype *w){
    dxdot1_dflux_r0 = 1.0;  // dxdotdw[0]
    dxdot23_dflux_r1 = -1.0;  // dxdotdw[1]
    dxdot24_dflux_r1 = 1.0;  // dxdotdw[2]
    dxdot25_dflux_r1 = -1.0;  // dxdotdw[3]
    dxdot23_dflux_r2 = 1.0;  // dxdotdw[4]
    dxdot24_dflux_r2 = -1.0;  // dxdotdw[5]
    dxdot25_dflux_r2 = 1.0;  // dxdotdw[6]
    dxdot1_dflux_r3 = 1.0;  // dxdotdw[7]
    dxdot1_dflux_r4 = -1.0;  // dxdotdw[8]
    dxdot2_dflux_r5 = -1.0;  // dxdotdw[9]
    dxdot5_dflux_r6 = -1.0;  // dxdotdw[10]
    dxdot7_dflux_r6 = 1.0;  // dxdotdw[11]
    dxdot6_dflux_r7 = -1.0;  // dxdotdw[12]
    dxdot7_dflux_r7 = 1.0;  // dxdotdw[13]
    dxdot1_dflux_r8 = 1.0;  // dxdotdw[14]
    dxdot5_dflux_r8 = -1.0;  // dxdotdw[15]
    dxdot8_dflux_r8 = 1.0;  // dxdotdw[16]
    dxdot2_dflux_r9 = 1.0;  // dxdotdw[17]
    dxdot6_dflux_r9 = -1.0;  // dxdotdw[18]
    dxdot8_dflux_r9 = 1.0;  // dxdotdw[19]
    dxdot1_dflux_r10 = 1.0;  // dxdotdw[20]
    dxdot5_dflux_r10 = -1.0;  // dxdotdw[21]
    dxdot8_dflux_r10 = 1.0;  // dxdotdw[22]
    dxdot2_dflux_r11 = 1.0;  // dxdotdw[23]
    dxdot6_dflux_r11 = -1.0;  // dxdotdw[24]
    dxdot8_dflux_r11 = 1.0;  // dxdotdw[25]
    dxdot1_dflux_r12 = 1.0;  // dxdotdw[26]
    dxdot5_dflux_r12 = -1.0;  // dxdotdw[27]
    dxdot8_dflux_r12 = 1.0;  // dxdotdw[28]
    dxdot2_dflux_r13 = 1.0;  // dxdotdw[29]
    dxdot6_dflux_r13 = -1.0;  // dxdotdw[30]
    dxdot8_dflux_r13 = 1.0;  // dxdotdw[31]
    dxdot1_dflux_r14 = 1.0;  // dxdotdw[32]
    dxdot5_dflux_r14 = -1.0;  // dxdotdw[33]
    dxdot8_dflux_r14 = 1.0;  // dxdotdw[34]
    dxdot2_dflux_r15 = 1.0;  // dxdotdw[35]
    dxdot6_dflux_r15 = -1.0;  // dxdotdw[36]
    dxdot8_dflux_r15 = 1.0;  // dxdotdw[37]
    dxdot1_dflux_r16 = -1.0;  // dxdotdw[38]
    dxdot2_dflux_r16 = 1.0;  // dxdotdw[39]
    dxdot5_dflux_r17 = -1.0;  // dxdotdw[40]
    dxdot6_dflux_r17 = 1.0;  // dxdotdw[41]
    dxdot1_dflux_r18 = -1.0;  // dxdotdw[42]
    dxdot2_dflux_r18 = 1.0;  // dxdotdw[43]
    dxdot5_dflux_r19 = -1.0;  // dxdotdw[44]
    dxdot6_dflux_r19 = 1.0;  // dxdotdw[45]
    dxdot1_dflux_r20 = 1.0;  // dxdotdw[46]
    dxdot2_dflux_r20 = -1.0;  // dxdotdw[47]
    dxdot5_dflux_r21 = 1.0;  // dxdotdw[48]
    dxdot6_dflux_r21 = -1.0;  // dxdotdw[49]
    dxdot2_dflux_r22 = -1.0;  // dxdotdw[50]
    dxdot6_dflux_r23 = -1.0;  // dxdotdw[51]
    dxdot7_dflux_r23 = 1.0;  // dxdotdw[52]
    dxdot7_dflux_r24 = -1.0;  // dxdotdw[53]
    dxdot8_dflux_r24 = 1.0;  // dxdotdw[54]
    dxdot7_dflux_r25 = -1.0;  // dxdotdw[55]
    dxdot8_dflux_r25 = 1.0;  // dxdotdw[56]
    dxdot7_dflux_r26 = -1.0;  // dxdotdw[57]
    dxdot8_dflux_r26 = 1.0;  // dxdotdw[58]
    dxdot7_dflux_r27 = -1.0;  // dxdotdw[59]
    dxdot8_dflux_r27 = 1.0;  // dxdotdw[60]
    dxdot0_dflux_r28 = 1.0;  // dxdotdw[61]
    dxdot3_dflux_r29 = 1.0;  // dxdotdw[62]
    dxdot0_dflux_r30 = -1.0;  // dxdotdw[63]
    dxdot0_dflux_r31 = -1.0;  // dxdotdw[64]
    dxdot7_dflux_r32 = 1.0;  // dxdotdw[65]
    dxdot8_dflux_r32 = -1.0;  // dxdotdw[66]
    dxdot10_dflux_r33 = 1.0;  // dxdotdw[67]
    dxdot11_dflux_r33 = 1.0;  // dxdotdw[68]
    dxdot12_dflux_r33 = -1.0;  // dxdotdw[69]
    dxdot10_dflux_r34 = -1.0;  // dxdotdw[70]
    dxdot13_dflux_r34 = 1.0;  // dxdotdw[71]
    dxdot14_dflux_r35 = -1.0;  // dxdotdw[72]
    dxdot20_dflux_r35 = 1.0;  // dxdotdw[73]
    dxdot17_dflux_r36 = -1.0;  // dxdotdw[74]
    dxdot19_dflux_r36 = 1.0;  // dxdotdw[75]
    dxdot10_dflux_r37 = -1.0;  // dxdotdw[76]
    dxdot13_dflux_r37 = 1.0;  // dxdotdw[77]
    dxdot14_dflux_r38 = -1.0;  // dxdotdw[78]
    dxdot20_dflux_r38 = 1.0;  // dxdotdw[79]
    dxdot17_dflux_r39 = -1.0;  // dxdotdw[80]
    dxdot19_dflux_r39 = 1.0;  // dxdotdw[81]
    dxdot10_dflux_r40 = 1.0;  // dxdotdw[82]
    dxdot13_dflux_r40 = -1.0;  // dxdotdw[83]
    dxdot17_dflux_r41 = 1.0;  // dxdotdw[84]
    dxdot19_dflux_r41 = -1.0;  // dxdotdw[85]
    dxdot14_dflux_r42 = 1.0;  // dxdotdw[86]
    dxdot20_dflux_r42 = -1.0;  // dxdotdw[87]
    dxdot10_dflux_r43 = 1.0;  // dxdotdw[88]
    dxdot14_dflux_r43 = -1.0;  // dxdotdw[89]
    dxdot16_dflux_r43 = 1.0;  // dxdotdw[90]
    dxdot13_dflux_r44 = 1.0;  // dxdotdw[91]
    dxdot16_dflux_r44 = 1.0;  // dxdotdw[92]
    dxdot20_dflux_r44 = -1.0;  // dxdotdw[93]
    dxdot10_dflux_r45 = 1.0;  // dxdotdw[94]
    dxdot16_dflux_r45 = 1.0;  // dxdotdw[95]
    dxdot17_dflux_r45 = -1.0;  // dxdotdw[96]
    dxdot18_dflux_r45 = 1.0;  // dxdotdw[97]
    dxdot13_dflux_r46 = 1.0;  // dxdotdw[98]
    dxdot16_dflux_r46 = 1.0;  // dxdotdw[99]
    dxdot18_dflux_r46 = 1.0;  // dxdotdw[100]
    dxdot19_dflux_r46 = -1.0;  // dxdotdw[101]
    dxdot10_dflux_r47 = 1.0;  // dxdotdw[102]
    dxdot16_dflux_r47 = 1.0;  // dxdotdw[103]
    dxdot17_dflux_r47 = -1.0;  // dxdotdw[104]
    dxdot18_dflux_r47 = 1.0;  // dxdotdw[105]
    dxdot13_dflux_r48 = 1.0;  // dxdotdw[106]
    dxdot16_dflux_r48 = 1.0;  // dxdotdw[107]
    dxdot18_dflux_r48 = 1.0;  // dxdotdw[108]
    dxdot19_dflux_r48 = -1.0;  // dxdotdw[109]
    dxdot10_dflux_r49 = 1.0;  // dxdotdw[110]
    dxdot16_dflux_r49 = 1.0;  // dxdotdw[111]
    dxdot17_dflux_r49 = -1.0;  // dxdotdw[112]
    dxdot18_dflux_r49 = 1.0;  // dxdotdw[113]
    dxdot13_dflux_r50 = 1.0;  // dxdotdw[114]
    dxdot16_dflux_r50 = 1.0;  // dxdotdw[115]
    dxdot18_dflux_r50 = 1.0;  // dxdotdw[116]
    dxdot19_dflux_r50 = -1.0;  // dxdotdw[117]
    dxdot10_dflux_r51 = 1.0;  // dxdotdw[118]
    dxdot14_dflux_r51 = -1.0;  // dxdotdw[119]
    dxdot16_dflux_r51 = 1.0;  // dxdotdw[120]
    dxdot13_dflux_r52 = 1.0;  // dxdotdw[121]
    dxdot16_dflux_r52 = 1.0;  // dxdotdw[122]
    dxdot20_dflux_r52 = -1.0;  // dxdotdw[123]
    dxdot14_dflux_r53 = 1.0;  // dxdotdw[124]
    dxdot17_dflux_r53 = -1.0;  // dxdotdw[125]
    dxdot18_dflux_r54 = -1.0;  // dxdotdw[126]
    dxdot19_dflux_r55 = -1.0;  // dxdotdw[127]
    dxdot20_dflux_r55 = 1.0;  // dxdotdw[128]
    dxdot21_dflux_r56 = -1.0;  // dxdotdw[129]
    dxdot14_dflux_r57 = 1.0;  // dxdotdw[130]
    dxdot17_dflux_r57 = -1.0;  // dxdotdw[131]
    dxdot19_dflux_r58 = -1.0;  // dxdotdw[132]
    dxdot20_dflux_r58 = 1.0;  // dxdotdw[133]
    dxdot14_dflux_r59 = 1.0;  // dxdotdw[134]
    dxdot17_dflux_r59 = -1.0;  // dxdotdw[135]
    dxdot21_dflux_r59 = 1.0;  // dxdotdw[136]
    dxdot19_dflux_r60 = -1.0;  // dxdotdw[137]
    dxdot20_dflux_r60 = 1.0;  // dxdotdw[138]
    dxdot21_dflux_r60 = 1.0;  // dxdotdw[139]
    dxdot14_dflux_r61 = 1.0;  // dxdotdw[140]
    dxdot17_dflux_r61 = -1.0;  // dxdotdw[141]
    dxdot21_dflux_r61 = 1.0;  // dxdotdw[142]
    dxdot19_dflux_r62 = -1.0;  // dxdotdw[143]
    dxdot20_dflux_r62 = 1.0;  // dxdotdw[144]
    dxdot21_dflux_r62 = 1.0;  // dxdotdw[145]
    dxdot18_dflux_r63 = -1.0;  // dxdotdw[146]
    dxdot21_dflux_r63 = 1.0;  // dxdotdw[147]
    dxdot18_dflux_r64 = -1.0;  // dxdotdw[148]
    dxdot21_dflux_r64 = 1.0;  // dxdotdw[149]
    dxdot18_dflux_r65 = 1.0;  // dxdotdw[150]
    dxdot21_dflux_r65 = -1.0;  // dxdotdw[151]
    dxdot21_dflux_r66 = -1.0;  // dxdotdw[152]
    dxdot22_dflux_r67 = 1.0;  // dxdotdw[153]
    dxdot18_dflux_r68 = 1.0;  // dxdotdw[154]
    dxdot15_dflux_r69 = -1.0;  // dxdotdw[155]
    dxdot16_dflux_r69 = 1.0;  // dxdotdw[156]
    dxdot15_dflux_r70 = -1.0;  // dxdotdw[157]
    dxdot16_dflux_r70 = 1.0;  // dxdotdw[158]
    dxdot15_dflux_r71 = -1.0;  // dxdotdw[159]
    dxdot16_dflux_r71 = 1.0;  // dxdotdw[160]
    dxdot15_dflux_r72 = 1.0;  // dxdotdw[161]
    dxdot16_dflux_r72 = -1.0;  // dxdotdw[162]
    dxdot3_dflux_r73 = 1.0;  // dxdotdw[163]
    dxdot3_dflux_r74 = -1.0;  // dxdotdw[164]
    dxdot0_dflux_r75 = -1.0;  // dxdotdw[165]
    dxdot3_dflux_r76 = -1.0;  // dxdotdw[166]
    dxdot3_dflux_r77 = -1.0;  // dxdotdw[167]
    dxdot3_dflux_r78 = -1.0;  // dxdotdw[168]
    dxdot22_dflux_r79 = 1.0;  // dxdotdw[169]
    dxdot22_dflux_r80 = -1.0;  // dxdotdw[170]
    dxdot23_dflux_r81 = -1.0;  // dxdotdw[171]
    dxdot22_dflux_r82 = -1.0;  // dxdotdw[172]
    dxdot22_dflux_r83 = -1.0;  // dxdotdw[173]
    dxdot23_dflux_r84 = -1.0;  // dxdotdw[174]
    dxdot23_dflux_r85 = -1.0;  // dxdotdw[175]
    dxdot22_dflux_r86 = -1.0;  // dxdotdw[176]
    dxdot23_dflux_r86 = 1.0;  // dxdotdw[177]
    dxdot22_dflux_r87 = -1.0;  // dxdotdw[178]
    dxdot23_dflux_r87 = 1.0;  // dxdotdw[179]
    dxdot22_dflux_r88 = -1.0;  // dxdotdw[180]
    dxdot23_dflux_r88 = 1.0;  // dxdotdw[181]
    dxdot22_dflux_r89 = 1.0;  // dxdotdw[182]
    dxdot23_dflux_r89 = -1.0;  // dxdotdw[183]
    dxdot4_dflux_r90 = 1.0;  // dxdotdw[184]
    dxdot4_dflux_r91 = 1.0;  // dxdotdw[185]
    dxdot4_dflux_r92 = -1.0;  // dxdotdw[186]
    dxdot29_dflux_r93 = -1.0;  // dxdotdw[187]
    dxdot4_dflux_r94 = -1.0;  // dxdotdw[188]
    dxdot4_dflux_r95 = -1.0;  // dxdotdw[189]
    dxdot29_dflux_r96 = -1.0;  // dxdotdw[190]
    dxdot29_dflux_r97 = -1.0;  // dxdotdw[191]
    dxdot4_dflux_r98 = -1.0;  // dxdotdw[192]
    dxdot29_dflux_r99 = -1.0;  // dxdotdw[193]
    dxdot11_dflux_r100 = -1.0;  // dxdotdw[194]
    dxdot12_dflux_r101 = -1.0;  // dxdotdw[195]
    dxdot13_dflux_r101 = 1.0;  // dxdotdw[196]
    dxdot11_dflux_r102 = -1.0;  // dxdotdw[197]
    dxdot11_dflux_r103 = -1.0;  // dxdotdw[198]
    dxdot12_dflux_r104 = -1.0;  // dxdotdw[199]
    dxdot13_dflux_r104 = 1.0;  // dxdotdw[200]
    dxdot12_dflux_r105 = -1.0;  // dxdotdw[201]
    dxdot13_dflux_r105 = 1.0;  // dxdotdw[202]
    dxdot11_dflux_r106 = 1.0;  // dxdotdw[203]
    dxdot11_dflux_r107 = 1.0;  // dxdotdw[204]
    dxdot23_dflux_r108 = -1.0;  // dxdotdw[205]
    dxdot26_dflux_r108 = -1.0;  // dxdotdw[206]
    dxdot27_dflux_r108 = 1.0;  // dxdotdw[207]
    dxdot23_dflux_r109 = 1.0;  // dxdotdw[208]
    dxdot26_dflux_r109 = 1.0;  // dxdotdw[209]
    dxdot27_dflux_r109 = -1.0;  // dxdotdw[210]
    dxdot4_dflux_r110 = -1.0;  // dxdotdw[211]
    dxdot29_dflux_r110 = 1.0;  // dxdotdw[212]
    dxdot4_dflux_r111 = -1.0;  // dxdotdw[213]
    dxdot29_dflux_r111 = 1.0;  // dxdotdw[214]
    dxdot4_dflux_r112 = 1.0;  // dxdotdw[215]
    dxdot29_dflux_r112 = -1.0;  // dxdotdw[216]
    dxdot4_dflux_r113 = 1.0;  // dxdotdw[217]
    dxdot29_dflux_r113 = -1.0;  // dxdotdw[218]
    dxdot31_dflux_r114 = 1.0;  // dxdotdw[219]
    dxdot32_dflux_r114 = -1.0;  // dxdotdw[220]
    dxdot31_dflux_r115 = -1.0;  // dxdotdw[221]
    dxdot32_dflux_r115 = 1.0;  // dxdotdw[222]
    dxdot28_dflux_r116 = 1.0;  // dxdotdw[223]
    dxdot30_dflux_r116 = -1.0;  // dxdotdw[224]
    dxdot28_dflux_r117 = -1.0;  // dxdotdw[225]
    dxdot30_dflux_r117 = 1.0;  // dxdotdw[226]
    dxdot28_dflux_r118 = -1.0;  // dxdotdw[227]
    dxdot30_dflux_r118 = 1.0;  // dxdotdw[228]
    dxdot33_dflux_r119 = -1.0;  // dxdotdw[229]
    dxdot34_dflux_r119 = 1.0;  // dxdotdw[230]
    dxdot33_dflux_r120 = 1.0;  // dxdotdw[231]
    dxdot34_dflux_r120 = -1.0;  // dxdotdw[232]
    dxdot33_dflux_r121 = 1.0;  // dxdotdw[233]
    dxdot34_dflux_r121 = -1.0;  // dxdotdw[234]
    dxdot35_dflux_r122 = -1.0;  // dxdotdw[235]
    dxdot36_dflux_r122 = 1.0;  // dxdotdw[236]
    dxdot9_dflux_r123 = 1.0;  // dxdotdw[237]
    dxdot35_dflux_r123 = 1.0;  // dxdotdw[238]
    dxdot37_dflux_r123 = -1.0;  // dxdotdw[239]
    dxdot18_dflux_r124 = 1.0;  // dxdotdw[240]
    dxdot0_dflux_r125 = 1.0;  // dxdotdw[241]
    dxdot10_dflux_r126 = 1.0;  // dxdotdw[242]
    dxdot14_dflux_r126 = -1.0;  // dxdotdw[243]
    dxdot16_dflux_r126 = 1.0;  // dxdotdw[244]
    dxdot13_dflux_r127 = 1.0;  // dxdotdw[245]
    dxdot16_dflux_r127 = 1.0;  // dxdotdw[246]
    dxdot20_dflux_r127 = -1.0;  // dxdotdw[247]
    dxdot1_dflux_r128 = -1.0;  // dxdotdw[248]
    dxdot5_dflux_r128 = 1.0;  // dxdotdw[249]
    dxdot7_dflux_r128 = -1.0;  // dxdotdw[250]
    dxdot2_dflux_r129 = -1.0;  // dxdotdw[251]
    dxdot6_dflux_r129 = 1.0;  // dxdotdw[252]
    dxdot7_dflux_r129 = -1.0;  // dxdotdw[253]
    dxdot1_dflux_r130 = 1.0;  // dxdotdw[254]
    dxdot5_dflux_r130 = -1.0;  // dxdotdw[255]
    dxdot7_dflux_r130 = 1.0;  // dxdotdw[256]
    dxdot2_dflux_r131 = 1.0;  // dxdotdw[257]
    dxdot6_dflux_r131 = -1.0;  // dxdotdw[258]
    dxdot7_dflux_r131 = 1.0;  // dxdotdw[259]
    dxdot10_dflux_r132 = -1.0;  // dxdotdw[260]
    dxdot14_dflux_r132 = 1.0;  // dxdotdw[261]
    dxdot15_dflux_r132 = -1.0;  // dxdotdw[262]
    dxdot13_dflux_r133 = -1.0;  // dxdotdw[263]
    dxdot15_dflux_r133 = -1.0;  // dxdotdw[264]
    dxdot20_dflux_r133 = 1.0;  // dxdotdw[265]
    dxdot10_dflux_r134 = 1.0;  // dxdotdw[266]
    dxdot14_dflux_r134 = -1.0;  // dxdotdw[267]
    dxdot15_dflux_r134 = 1.0;  // dxdotdw[268]
    dxdot13_dflux_r135 = 1.0;  // dxdotdw[269]
    dxdot15_dflux_r135 = 1.0;  // dxdotdw[270]
    dxdot20_dflux_r135 = -1.0;  // dxdotdw[271]
    dxdot14_dflux_r136 = -1.0;  // dxdotdw[272]
    dxdot17_dflux_r136 = 1.0;  // dxdotdw[273]
    dxdot18_dflux_r136 = -1.0;  // dxdotdw[274]
    dxdot18_dflux_r137 = -1.0;  // dxdotdw[275]
    dxdot19_dflux_r137 = 1.0;  // dxdotdw[276]
    dxdot20_dflux_r137 = -1.0;  // dxdotdw[277]
    dxdot14_dflux_r138 = 1.0;  // dxdotdw[278]
    dxdot17_dflux_r138 = -1.0;  // dxdotdw[279]
    dxdot18_dflux_r138 = 1.0;  // dxdotdw[280]
    dxdot18_dflux_r139 = 1.0;  // dxdotdw[281]
    dxdot19_dflux_r139 = -1.0;  // dxdotdw[282]
    dxdot20_dflux_r139 = 1.0;  // dxdotdw[283]
    dxdot11_dflux_r140 = -1.0;  // dxdotdw[284]
    dxdot12_dflux_r140 = 1.0;  // dxdotdw[285]
    dxdot13_dflux_r140 = -1.0;  // dxdotdw[286]
    dxdot11_dflux_r141 = 1.0;  // dxdotdw[287]
    dxdot12_dflux_r141 = -1.0;  // dxdotdw[288]
    dxdot13_dflux_r141 = 1.0;  // dxdotdw[289]
    dxdot9_dflux_r142 = -1.0;  // dxdotdw[290]
    dxdot36_dflux_r142 = -1.0;  // dxdotdw[291]
    dxdot37_dflux_r142 = 1.0;  // dxdotdw[292]
    dxdot9_dflux_r143 = 1.0;  // dxdotdw[293]
    dxdot36_dflux_r143 = 1.0;  // dxdotdw[294]
    dxdot37_dflux_r143 = -1.0;  // dxdotdw[295]
    dxdot1_dflux_r144 = -1.0;  // dxdotdw[296]
    dxdot38_dflux_r144 = -1.0;  // dxdotdw[297]
    dxdot43_dflux_r144 = 1.0;  // dxdotdw[298]
    dxdot1_dflux_r145 = 1.0;  // dxdotdw[299]
    dxdot38_dflux_r145 = 1.0;  // dxdotdw[300]
    dxdot43_dflux_r145 = -1.0;  // dxdotdw[301]
    dxdot1_dflux_r146 = -1.0;  // dxdotdw[302]
    dxdot39_dflux_r146 = -1.0;  // dxdotdw[303]
    dxdot44_dflux_r146 = 1.0;  // dxdotdw[304]
    dxdot1_dflux_r147 = 1.0;  // dxdotdw[305]
    dxdot39_dflux_r147 = 1.0;  // dxdotdw[306]
    dxdot44_dflux_r147 = -1.0;  // dxdotdw[307]
    dxdot1_dflux_r148 = -1.0;  // dxdotdw[308]
    dxdot40_dflux_r148 = -1.0;  // dxdotdw[309]
    dxdot45_dflux_r148 = 1.0;  // dxdotdw[310]
    dxdot1_dflux_r149 = 1.0;  // dxdotdw[311]
    dxdot40_dflux_r149 = 1.0;  // dxdotdw[312]
    dxdot45_dflux_r149 = -1.0;  // dxdotdw[313]
    dxdot1_dflux_r150 = -1.0;  // dxdotdw[314]
    dxdot41_dflux_r150 = -1.0;  // dxdotdw[315]
    dxdot46_dflux_r150 = 1.0;  // dxdotdw[316]
    dxdot1_dflux_r151 = 1.0;  // dxdotdw[317]
    dxdot41_dflux_r151 = 1.0;  // dxdotdw[318]
    dxdot46_dflux_r151 = -1.0;  // dxdotdw[319]
    dxdot1_dflux_r152 = -1.0;  // dxdotdw[320]
    dxdot42_dflux_r152 = -1.0;  // dxdotdw[321]
    dxdot47_dflux_r152 = 1.0;  // dxdotdw[322]
    dxdot1_dflux_r153 = 1.0;  // dxdotdw[323]
    dxdot42_dflux_r153 = 1.0;  // dxdotdw[324]
    dxdot47_dflux_r153 = -1.0;  // dxdotdw[325]
}

} // namespace amici
} // namespace model_cell_cycle_v3_0_0_rescaled