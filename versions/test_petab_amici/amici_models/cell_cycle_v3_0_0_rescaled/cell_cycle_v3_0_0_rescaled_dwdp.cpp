#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include <array>

#include "tcl.h"
#include "p.h"
#include "k.h"
#include "w.h"
#include "x.h"
#include "dtcldp.h"
#include "dwdp.h"

namespace amici {
namespace model_cell_cycle_v3_0_0_rescaled {

void dwdp_cell_cycle_v3_0_0_rescaled(realtype *dwdp, const realtype t, const realtype *x, const realtype *p, const realtype *k, const realtype *h, const realtype *w, const realtype *tcl, const realtype *dtcldp){
    dflux_r8_dkPhRbD = _cell__CCND*_cell__E2F_DBD_RB1_1_Ser332u__RB1_E2F_1_Ser807_Ser811u_;  // dwdp[0]
    dflux_r9_dkPhRbD = _cell__CCND*_cell__E2F_DBD_RB1_1_Ser332p__RB1_E2F_1_Ser807_Ser811u_;  // dwdp[1]
    dflux_r24_dkPhRbD = _cell__CCND*_cell__RB1_E2F_Ser807_Ser811u_;  // dwdp[2]
    dflux_r10_dkPhRbE = _cell__CCNE*_cell__E2F_DBD_RB1_1_Ser332u__RB1_E2F_1_Ser807_Ser811u_;  // dwdp[3]
    dflux_r11_dkPhRbE = _cell__CCNE*_cell__E2F_DBD_RB1_1_Ser332p__RB1_E2F_1_Ser807_Ser811u_;  // dwdp[4]
    dflux_r25_dkPhRbE = _cell__CCNE*_cell__RB1_E2F_Ser807_Ser811u_;  // dwdp[5]
    dflux_r32_dkDpRb = _cell__RB1_E2F_Ser807_Ser811p_;  // dwdp[6]
    dflux_r12_dkPhRb = _cell__CCNA*_cell__E2F_DBD_RB1_1_Ser332u__RB1_E2F_1_Ser807_Ser811u_;  // dwdp[7]
    dflux_r13_dkPhRb = _cell__CCNA*_cell__E2F_DBD_RB1_1_Ser332p__RB1_E2F_1_Ser807_Ser811u_;  // dwdp[8]
    dflux_r14_dkPhRb = _cell__CCNB_CDK1_Thr14_Tyr15u_*_cell__E2F_DBD_RB1_1_Ser332u__RB1_E2F_1_Ser807_Ser811u_;  // dwdp[9]
    dflux_r15_dkPhRb = _cell__CCNB_CDK1_Thr14_Tyr15u_*_cell__E2F_DBD_RB1_1_Ser332p__RB1_E2F_1_Ser807_Ser811u_;  // dwdp[10]
    dflux_r26_dkPhRb = _cell__CCNA*_cell__RB1_E2F_Ser807_Ser811u_;  // dwdp[11]
    dflux_r27_dkPhRb = _cell__CCNB_CDK1_Thr14_Tyr15u_*_cell__RB1_E2F_Ser807_Ser811u_;  // dwdp[12]
    dflux_r28_dkSyCe1 = 1;  // dwdp[13]
    dflux_r125_dkSyCe2 = _cell__CCNE_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_;  // dwdp[14]
    dflux_r30_dkDeCe = _cell__CCNE;  // dwdp[15]
    dflux_r130_dkDiE2fRb = _cell__E2F_DBD_RB1_1_Ser332u__RB1_E2F_1_Ser807_Ser811u_;  // dwdp[16]
    dflux_r131_dkDiE2fRb = _cell__E2F_DBD_RB1_1_Ser332p__RB1_E2F_1_Ser807_Ser811u_;  // dwdp[17]
    dflux_r128_dkAsE2fRb = _cell__E2F_DBD_RB1_Ser332u_*_cell__RB1_E2F_Ser807_Ser811u_;  // dwdp[18]
    dflux_r129_dkAsE2fRb = _cell__E2F_DBD_RB1_Ser332p_*_cell__RB1_E2F_Ser807_Ser811u_;  // dwdp[19]
    dflux_r0_dkSyE2f1 = 1;  // dwdp[20]
    dflux_r3_dkSyE2f2 = _cell__E2F_DBD_1_RB1_Ser332u__E2F_promoter_E2F_1_;  // dwdp[21]
    dflux_r4_dkDeE2f1 = _cell__E2F_DBD_RB1_Ser332u_;  // dwdp[22]
    dflux_r5_dkDeE2f1 = _cell__E2F_DBD_RB1_Ser332p_;  // dwdp[23]
    dflux_r6_dkDeE2f1 = _cell__E2F_DBD_RB1_1_Ser332u__RB1_E2F_1_Ser807_Ser811u_;  // dwdp[24]
    dflux_r7_dkDeE2f1 = _cell__E2F_DBD_RB1_1_Ser332p__RB1_E2F_1_Ser807_Ser811u_;  // dwdp[25]
    dflux_r22_dkDeE2f2 = _cell__E2F_DBD_RB1_Ser332p_;  // dwdp[26]
    dflux_r23_dkDeE2f2 = _cell__E2F_DBD_RB1_1_Ser332p__RB1_E2F_1_Ser807_Ser811u_;  // dwdp[27]
    dflux_r16_dkPhE2f = _cell__CCNA*_cell__E2F_DBD_RB1_Ser332u_;  // dwdp[28]
    dflux_r17_dkPhE2f = _cell__CCNA*_cell__E2F_DBD_RB1_1_Ser332u__RB1_E2F_1_Ser807_Ser811u_;  // dwdp[29]
    dflux_r18_dkPhE2f = _cell__CCNB_CDK1_Thr14_Tyr15u_*_cell__E2F_DBD_RB1_Ser332u_;  // dwdp[30]
    dflux_r19_dkPhE2f = _cell__CCNB_CDK1_Thr14_Tyr15u_*_cell__E2F_DBD_RB1_1_Ser332u__RB1_E2F_1_Ser807_Ser811u_;  // dwdp[31]
    dflux_r20_dkDpE2f2 = _cell__E2F_DBD_RB1_Ser332p_*_cell__PPP2R2B_ENSA_ARPP19_;  // dwdp[32]
    dflux_r21_dkDpE2f2 = _cell__E2F_DBD_RB1_1_Ser332p__RB1_E2F_1_Ser807_Ser811u_*_cell__PPP2R2B_ENSA_ARPP19_;  // dwdp[33]
    dflux_r124_dkSyEmi1 = 1;  // dwdp[34]
    dflux_r68_dkSyEmi2 = _cell__E2F_DBD_1_RB1_Ser332u__FBXO5_promoter_E2F_1_;  // dwdp[35]
    dflux_r53_dkDeEmi1 = _cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355u__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_;  // dwdp[36]
    dflux_r54_dkDeEmi1 = _cell__FBXO5_APC_FZR1_Ser182u_;  // dwdp[37]
    dflux_r55_dkDeEmi1 = _cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355p__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_;  // dwdp[38]
    dflux_r56_dkDeEmi1 = _cell__FBXO5_APC_FZR1_Ser182p_;  // dwdp[39]
    dflux_r57_dkDeEmi2 = _cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355u__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_;  // dwdp[40]
    dflux_r58_dkDeEmi2 = _cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355p__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_;  // dwdp[41]
    dflux_r66_dkDeEmi3 = _cell__FBXO5_APC_FZR1_Ser182p_;  // dwdp[42]
    dflux_r59_dkPhEmiA = _cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355u__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_*_cell__CCNA;  // dwdp[43]
    dflux_r60_dkPhEmiA = _cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355p__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_*_cell__CCNA;  // dwdp[44]
    dflux_r63_dkPhEmiA = _cell__CCNA*_cell__FBXO5_APC_FZR1_Ser182u_;  // dwdp[45]
    dflux_r61_dkPhEmiB = _cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355u__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_*_cell__CCNB_CDK1_Thr14_Tyr15u_;  // dwdp[46]
    dflux_r62_dkPhEmiB = _cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355p__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_*_cell__CCNB_CDK1_Thr14_Tyr15u_;  // dwdp[47]
    dflux_r64_dkPhEmiB = _cell__CCNB_CDK1_Thr14_Tyr15u_*_cell__FBXO5_APC_FZR1_Ser182u_;  // dwdp[48]
    dflux_r65_dkDpEmi = _cell__FBXO5_APC_FZR1_Ser182p_;  // dwdp[49]
    dflux_r73_dkSyCa1 = 1;  // dwdp[50]
    dflux_r29_dkSyCa2 = _cell__CCNA_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_;  // dwdp[51]
    dflux_r74_dkDeCa1 = _cell__CCNA;  // dwdp[52]
    dflux_r76_dkDeCa2 = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_*_cell__CCNA;  // dwdp[53]
    dflux_r77_dkDeCa2 = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__FZR1_APC_1_FBXO5_nTermu_*_cell__CCNA;  // dwdp[54]
    dflux_r78_dkDeCa3 = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__CDC20_APC_1_*_cell__CCNA;  // dwdp[55]
    dflux_r72_dkDpCdh = _cell__FZR1_APC_FBXO5_nTermp_;  // dwdp[56]
    dflux_r43_dkPhCdhA = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_*_cell__CCNA;  // dwdp[57]
    dflux_r44_dkPhCdhA = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__FZR1_APC_1_FBXO5_nTermu_*_cell__CCNA;  // dwdp[58]
    dflux_r70_dkPhCdhA = _cell__CCNA*_cell__FZR1_APC_FBXO5_nTermu_;  // dwdp[59]
    dflux_r51_dkPhCdhE = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_*_cell__CCNE;  // dwdp[60]
    dflux_r52_dkPhCdhE = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__FZR1_APC_1_FBXO5_nTermu_*_cell__CCNE;  // dwdp[61]
    dflux_r69_dkPhCdhE = _cell__CCNE*_cell__FZR1_APC_FBXO5_nTermu_;  // dwdp[62]
    dflux_r71_dkPhCdhB = _cell__CCNB_CDK1_Thr14_Tyr15u_*_cell__FZR1_APC_FBXO5_nTermu_;  // dwdp[63]
    dflux_r126_dkPhCdhB = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_*_cell__CCNB_CDK1_Thr14_Tyr15u_;  // dwdp[64]
    dflux_r127_dkPhCdhB = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__FZR1_APC_1_FBXO5_nTermu_*_cell__CCNB_CDK1_Thr14_Tyr15u_;  // dwdp[65]
    dflux_r138_dkDiACE = _cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355u__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_;  // dwdp[66]
    dflux_r139_dkDiACE = _cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355p__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_;  // dwdp[67]
    dflux_r136_dkAsACE = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_*_cell__FBXO5_APC_FZR1_Ser182u_;  // dwdp[68]
    dflux_r137_dkAsACE = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__FZR1_APC_1_FBXO5_nTermu_*_cell__FBXO5_APC_FZR1_Ser182u_;  // dwdp[69]
    dflux_r134_dkDiACdh = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_;  // dwdp[70]
    dflux_r135_dkDiACdh = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__FZR1_APC_1_FBXO5_nTermu_;  // dwdp[71]
    dflux_r132_dkAsACdh = _cell__APC_FBXO5_FZR1_CDC20_Ser355u_*_cell__FZR1_APC_FBXO5_nTermu_;  // dwdp[72]
    dflux_r133_dkAsACdh = _cell__APC_FBXO5_FZR1_CDC20_Ser355p_*_cell__FZR1_APC_FBXO5_nTermu_;  // dwdp[73]
    dflux_r75_dkPhCeA = _cell__CCNA*_cell__CCNE;  // dwdp[74]
    dflux_r31_dkPhCeE = std::pow(_cell__CCNE, 2);  // dwdp[75]
    dflux_r86_dkPhFoxE = _cell__CCNE*_cell__FOXM1_DBD_Thr600u_;  // dwdp[76]
    dflux_r87_dkPhFoxA = _cell__CCNA*_cell__FOXM1_DBD_Thr600u_;  // dwdp[77]
    dflux_r88_dkPhFoxB = _cell__CCNB_CDK1_Thr14_Tyr15u_*_cell__FOXM1_DBD_Thr600u_;  // dwdp[78]
    dflux_r89_dkDpFox = _cell__FOXM1_DBD_Thr600p_;  // dwdp[79]
    dflux_r90_dkSyCb1 = 1;  // dwdp[80]
    dflux_r91_dkSyCb2 = _cell__CCNB_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_;  // dwdp[81]
    dflux_r92_dkDeCb1 = _cell__CCNB_CDK1_Thr14_Tyr15u_;  // dwdp[82]
    dflux_r93_dkDeCb1 = _cell__CCNB_CDK1_Thr14_Tyr15p_;  // dwdp[83]
    dflux_r94_dkDeCb2 = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_*_cell__CCNB_CDK1_Thr14_Tyr15u_;  // dwdp[84]
    dflux_r95_dkDeCb2 = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__FZR1_APC_1_FBXO5_nTermu_*_cell__CCNB_CDK1_Thr14_Tyr15u_;  // dwdp[85]
    dflux_r96_dkDeCb2 = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_*_cell__CCNB_CDK1_Thr14_Tyr15p_;  // dwdp[86]
    dflux_r97_dkDeCb2 = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__FZR1_APC_1_FBXO5_nTermu_*_cell__CCNB_CDK1_Thr14_Tyr15p_;  // dwdp[87]
    dflux_r98_dkDeCb3 = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__CDC20_APC_1_*_cell__CCNB_CDK1_Thr14_Tyr15u_;  // dwdp[88]
    dflux_r99_dkDeCb3 = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__CDC20_APC_1_*_cell__CCNB_CDK1_Thr14_Tyr15p_;  // dwdp[89]
    dflux_r122_dkPhEnsa = _cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67u_*_cell__MASTL_Thr198p_;  // dwdp[90]
    dflux_r123_dkDpEnsa = _cell__ENSA_ARPP19_PPP2R2B_1_Ser62_Ser67p__PPP2R2B_ENSA_ARPP19_1_;  // dwdp[91]
    dflux_r119_dkPhGw = _cell__CCNB_CDK1_Thr14_Tyr15u_*_cell__MASTL_Thr198u_;  // dwdp[92]
    dflux_r120_dkDpGw1 = _cell__MASTL_Thr198p_;  // dwdp[93]
    dflux_r121_dkDpGw2 = _cell__MASTL_Thr198p_*_cell__PPP2R2B_ENSA_ARPP19_;  // dwdp[94]
    dflux_r111_dkWee1 = _cell__CCNB_CDK1_Thr14_Tyr15u_*_cell__WEE1_Ser123p_;  // dwdp[95]
    dflux_r110_dkWee2 = _cell__CCNB_CDK1_Thr14_Tyr15u_*_cell__WEE1_Ser123u_;  // dwdp[96]
    dflux_r117_dkPhWeeA = _cell__CCNA*_cell__WEE1_Ser123u_;  // dwdp[97]
    dflux_r118_dkPhWeeB = _cell__CCNB_CDK1_Thr14_Tyr15u_*_cell__WEE1_Ser123u_;  // dwdp[98]
    dflux_r116_dkDpWee = _cell__PPP2R2B_ENSA_ARPP19_*_cell__WEE1_Ser123p_;  // dwdp[99]
    dflux_r113_dkCdc25_1 = _cell__CCNB_CDK1_Thr14_Tyr15p_*_cell__CDC25_pSitesu_;  // dwdp[100]
    dflux_r112_dkCdc25_2 = _cell__CCNB_CDK1_Thr14_Tyr15p_*_cell__CDC25_pSitesp_;  // dwdp[101]
    dflux_r115_dkDpCdc25 = _cell__CDC25_pSitesp_*_cell__PPP2R2B_ENSA_ARPP19_;  // dwdp[102]
    dflux_r143_dkDipEB55 = _cell__ENSA_ARPP19_PPP2R2B_1_Ser62_Ser67p__PPP2R2B_ENSA_ARPP19_1_;  // dwdp[103]
    dflux_r142_dkAspEB55 = _cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67p_*_cell__PPP2R2B_ENSA_ARPP19_;  // dwdp[104]
    dflux_r106_dkSyCdc_1 = 1;  // dwdp[105]
    dflux_r107_dkSyCdc_2 = _cell__CDC20_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_;  // dwdp[106]
    dflux_r100_dkDeCdc_1 = _cell__CDC20_APC_;  // dwdp[107]
    dflux_r101_dkDeCdc_1 = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__CDC20_APC_1_;  // dwdp[108]
    dflux_r102_dkDeCdc_2 = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_*_cell__CDC20_APC_;  // dwdp[109]
    dflux_r103_dkDeCdc_2 = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__FZR1_APC_1_FBXO5_nTermu_*_cell__CDC20_APC_;  // dwdp[110]
    dflux_r104_dkDeCdc_2 = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__CDC20_APC_1_*_cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_;  // dwdp[111]
    dflux_r105_dkDeCdc_2 = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__CDC20_APC_1_*_cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__FZR1_APC_1_FBXO5_nTermu_;  // dwdp[112]
    dflux_r141_dkDipACdc = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__CDC20_APC_1_;  // dwdp[113]
    dflux_r140_dkAspACdc = _cell__APC_FBXO5_FZR1_CDC20_Ser355p_*_cell__CDC20_APC_;  // dwdp[114]
    dflux_r34_dkPhApcA = _cell__APC_FBXO5_FZR1_CDC20_Ser355u_*_cell__CCNA;  // dwdp[115]
    dflux_r35_dkPhApcA = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_*_cell__CCNA;  // dwdp[116]
    dflux_r36_dkPhApcA = _cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355u__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_*_cell__CCNA;  // dwdp[117]
    dflux_r37_dkPhApcA = _cell__APC_FBXO5_FZR1_CDC20_Ser355u_*_cell__CCNB_CDK1_Thr14_Tyr15u_;  // dwdp[118]
    dflux_r38_dkPhApcA = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_*_cell__CCNB_CDK1_Thr14_Tyr15u_;  // dwdp[119]
    dflux_r39_dkPhApcA = _cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355u__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_*_cell__CCNB_CDK1_Thr14_Tyr15u_;  // dwdp[120]
    dflux_r33_dkDpApc = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__CDC20_APC_1_*_cell__PPP2R2B_ENSA_ARPP19_;  // dwdp[121]
    dflux_r40_dkDpApc = _cell__APC_FBXO5_FZR1_CDC20_Ser355p_*_cell__PPP2R2B_ENSA_ARPP19_;  // dwdp[122]
    dflux_r41_dkDpApc = _cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355p__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_*_cell__PPP2R2B_ENSA_ARPP19_;  // dwdp[123]
    dflux_r42_dkDpApc = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__FZR1_APC_1_FBXO5_nTermu_*_cell__PPP2R2B_ENSA_ARPP19_;  // dwdp[124]
    dflux_r67_dkSyFox1 = 1;  // dwdp[125]
    dflux_r79_dkSyFox2 = _cell__E2F_DBD_1_RB1_Ser332u__FOXM1_promoter_E2F_1_;  // dwdp[126]
    dflux_r80_dkDeFox1 = _cell__FOXM1_DBD_Thr600u_;  // dwdp[127]
    dflux_r81_dkDeFox1 = _cell__FOXM1_DBD_Thr600p_;  // dwdp[128]
    dflux_r82_dkDeFox2 = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_*_cell__FOXM1_DBD_Thr600u_;  // dwdp[129]
    dflux_r83_dkDeFox2 = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__FZR1_APC_1_FBXO5_nTermu_*_cell__FOXM1_DBD_Thr600u_;  // dwdp[130]
    dflux_r84_dkDeFox2 = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_*_cell__FOXM1_DBD_Thr600p_;  // dwdp[131]
    dflux_r85_dkDeFox2 = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__FZR1_APC_1_FBXO5_nTermu_*_cell__FOXM1_DBD_Thr600p_;  // dwdp[132]
    dflux_r144_dkAsEPx = _cell__CCNE_promoter_E2F_*_cell__E2F_DBD_RB1_Ser332u_;  // dwdp[133]
    dflux_r146_dkAsEPx = _cell__CCNA_promoter_E2F_*_cell__E2F_DBD_RB1_Ser332u_;  // dwdp[134]
    dflux_r148_dkAsEPx = _cell__E2F_DBD_RB1_Ser332u_*_cell__E2F_promoter_E2F_;  // dwdp[135]
    dflux_r150_dkAsEPx = _cell__E2F_DBD_RB1_Ser332u_*_cell__FBXO5_promoter_E2F_;  // dwdp[136]
    dflux_r152_dkAsEPx = _cell__E2F_DBD_RB1_Ser332u_*_cell__FOXM1_promoter_E2F_;  // dwdp[137]
    dflux_r145_dkDiEPx = _cell__CCNE_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_;  // dwdp[138]
    dflux_r147_dkDiEPx = _cell__CCNA_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_;  // dwdp[139]
    dflux_r149_dkDiEPx = _cell__E2F_DBD_1_RB1_Ser332u__E2F_promoter_E2F_1_;  // dwdp[140]
    dflux_r151_dkDiEPx = _cell__E2F_DBD_1_RB1_Ser332u__FBXO5_promoter_E2F_1_;  // dwdp[141]
    dflux_r153_dkDiEPx = _cell__E2F_DBD_1_RB1_Ser332u__FOXM1_promoter_E2F_1_;  // dwdp[142]
    dflux_r1_dkAsFPcb = _cell__CCNB_promoter_FOXM1_*_cell__FOXM1_DBD_Thr600p_;  // dwdp[143]
    dflux_r2_dkDiFPcb = _cell__CCNB_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_;  // dwdp[144]
    dflux_r108_dkAsFPcdc = _cell__CDC20_promoter_FOXM1_*_cell__FOXM1_DBD_Thr600p_;  // dwdp[145]
    dflux_r109_dkDiFPcdc = _cell__CDC20_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_;  // dwdp[146]
    dflux_r114_dkPhC25B = _cell__CCNB_CDK1_Thr14_Tyr15u_*_cell__CDC25_pSitesu_;  // dwdp[147]
    dflux_r45_dkPhCAEE = _cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355u__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_*_cell__CCNE;  // dwdp[148]
    dflux_r46_dkPhCAEE = _cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355p__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_*_cell__CCNE;  // dwdp[149]
    dflux_r47_dkPhCAEA = _cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355u__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_*_cell__CCNA;  // dwdp[150]
    dflux_r48_dkPhCAEA = _cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355p__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_*_cell__CCNA;  // dwdp[151]
    dflux_r49_dkPhCAEB = _cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355u__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_*_cell__CCNB_CDK1_Thr14_Tyr15u_;  // dwdp[152]
    dflux_r50_dkPhCAEB = _cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355p__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_*_cell__CCNB_CDK1_Thr14_Tyr15u_;  // dwdp[153]
}

} // namespace amici
} // namespace model_cell_cycle_v3_0_0_rescaled