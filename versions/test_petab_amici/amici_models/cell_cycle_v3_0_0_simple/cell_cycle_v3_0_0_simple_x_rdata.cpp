#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include <array>

#include "tcl.h"
#include "x.h"

namespace amici {
namespace model_cell_cycle_v3_0_0_simple {

void x_rdata_cell_cycle_v3_0_0_simple(realtype *x_rdata, const realtype *x, const realtype *tcl){
    x_rdata[0] = tcl__cell__CCND;
    x_rdata[1] = _cell__CCNE;
    x_rdata[2] = _cell__E2F_DBD_RB1_Ser332u_;
    x_rdata[3] = _cell__E2F_DBD_RB1_Ser332p_;
    x_rdata[4] = _cell__CCNA;
    x_rdata[5] = _cell__CCNB_CDK1_Thr14_Tyr15u_;
    x_rdata[6] = _cell__E2F_DBD_RB1_1_Ser332u__RB1_E2F_1_Ser807_Ser811u_;
    x_rdata[7] = _cell__E2F_DBD_RB1_1_Ser332p__RB1_E2F_1_Ser807_Ser811u_;
    x_rdata[8] = _cell__RB1_E2F_Ser807_Ser811u_;
    x_rdata[9] = _cell__RB1_E2F_Ser807_Ser811p_;
    x_rdata[10] = _cell__PPP2R2B_ENSA_ARPP19_;
    x_rdata[11] = _cell__APC_FBXO5_FZR1_CDC20_Ser355u_;
    x_rdata[12] = _cell__CDC20_APC_;
    x_rdata[13] = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__CDC20_APC_1_;
    x_rdata[14] = _cell__APC_FBXO5_FZR1_CDC20_Ser355p_;
    x_rdata[15] = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_;
    x_rdata[16] = _cell__FZR1_APC_FBXO5_nTermu_;
    x_rdata[17] = _cell__FZR1_APC_FBXO5_nTermp_;
    x_rdata[18] = _cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355u__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_;
    x_rdata[19] = _cell__FBXO5_APC_FZR1_Ser182u_;
    x_rdata[20] = _cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355p__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_;
    x_rdata[21] = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__FZR1_APC_1_FBXO5_nTermu_;
    x_rdata[22] = _cell__FBXO5_APC_FZR1_Ser182p_;
    x_rdata[23] = _cell__FOXM1_DBD_Thr600u_;
    x_rdata[24] = _cell__FOXM1_DBD_Thr600p_;
    x_rdata[25] = _cell__CCNB_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_;
    x_rdata[26] = _cell__CCNB_promoter_FOXM1_;
    x_rdata[27] = _cell__CDC20_promoter_FOXM1_;
    x_rdata[28] = _cell__CDC20_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_;
    x_rdata[29] = _cell__WEE1_Ser123u_;
    x_rdata[30] = _cell__CCNB_CDK1_Thr14_Tyr15p_;
    x_rdata[31] = _cell__WEE1_Ser123p_;
    x_rdata[32] = _cell__CDC25_pSitesp_;
    x_rdata[33] = _cell__CDC25_pSitesu_;
    x_rdata[34] = _cell__MASTL_Thr198u_;
    x_rdata[35] = _cell__MASTL_Thr198p_;
    x_rdata[36] = _cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67u_;
    x_rdata[37] = _cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67p_;
    x_rdata[38] = _cell__ENSA_ARPP19_PPP2R2B_1_Ser62_Ser67p__PPP2R2B_ENSA_ARPP19_1_;
    x_rdata[39] = _cell__CCNE_promoter_E2F_;
    x_rdata[40] = _cell__CCNA_promoter_E2F_;
    x_rdata[41] = _cell__E2F_promoter_E2F_;
    x_rdata[42] = _cell__FBXO5_promoter_E2F_;
    x_rdata[43] = _cell__FOXM1_promoter_E2F_;
    x_rdata[44] = _cell__CCNE_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_;
    x_rdata[45] = _cell__CCNA_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_;
    x_rdata[46] = _cell__E2F_DBD_1_RB1_Ser332u__E2F_promoter_E2F_1_;
    x_rdata[47] = _cell__E2F_DBD_1_RB1_Ser332u__FBXO5_promoter_E2F_1_;
    x_rdata[48] = _cell__E2F_DBD_1_RB1_Ser332u__FOXM1_promoter_E2F_1_;
}

} // namespace amici
} // namespace model_cell_cycle_v3_0_0_simple