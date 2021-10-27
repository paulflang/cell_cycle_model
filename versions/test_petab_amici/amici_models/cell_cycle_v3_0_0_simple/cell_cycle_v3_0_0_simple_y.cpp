#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include <array>

#include "p.h"
#include "k.h"
#include "w.h"
#include "x.h"

namespace amici {
namespace model_cell_cycle_v3_0_0_simple {

void y_cell_cycle_v3_0_0_simple(realtype *y, const realtype t, const realtype *x, const realtype *p, const realtype *k, const realtype *h, const realtype *w){
    y[0] = _cell__CCNE;
    y[1] = _cell__E2F_DBD_RB1_Ser332u_;
    y[2] = _cell__E2F_DBD_RB1_Ser332p_;
    y[3] = _cell__CCNA;
    y[4] = _cell__CCNB_CDK1_Thr14_Tyr15u_;
    y[5] = _cell__E2F_DBD_RB1_1_Ser332u__RB1_E2F_1_Ser807_Ser811u_;
    y[6] = _cell__E2F_DBD_RB1_1_Ser332p__RB1_E2F_1_Ser807_Ser811u_;
    y[7] = _cell__RB1_E2F_Ser807_Ser811u_;
    y[8] = _cell__RB1_E2F_Ser807_Ser811p_;
    y[9] = _cell__PPP2R2B_ENSA_ARPP19_;
    y[10] = _cell__APC_FBXO5_FZR1_CDC20_Ser355u_;
    y[11] = _cell__CDC20_APC_;
    y[12] = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__CDC20_APC_1_;
    y[13] = _cell__APC_FBXO5_FZR1_CDC20_Ser355p_;
    y[14] = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_;
    y[15] = _cell__FZR1_APC_FBXO5_nTermu_;
    y[16] = _cell__FZR1_APC_FBXO5_nTermp_;
    y[17] = _cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355u__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_;
    y[18] = _cell__FBXO5_APC_FZR1_Ser182u_;
    y[19] = _cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355p__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_;
    y[20] = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__FZR1_APC_1_FBXO5_nTermu_;
    y[21] = _cell__FBXO5_APC_FZR1_Ser182p_;
    y[22] = _cell__FOXM1_DBD_Thr600u_;
    y[23] = _cell__FOXM1_DBD_Thr600p_;
    y[24] = _cell__CCNB_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_;
    y[25] = _cell__CCNB_promoter_FOXM1_;
    y[26] = _cell__CDC20_promoter_FOXM1_;
    y[27] = _cell__CDC20_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_;
    y[28] = _cell__WEE1_Ser123u_;
    y[29] = _cell__CCNB_CDK1_Thr14_Tyr15p_;
    y[30] = _cell__WEE1_Ser123p_;
    y[31] = _cell__CDC25_pSitesp_;
    y[32] = _cell__CDC25_pSitesu_;
    y[33] = _cell__MASTL_Thr198u_;
    y[34] = _cell__MASTL_Thr198p_;
    y[35] = _cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67u_;
    y[36] = _cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67p_;
    y[37] = _cell__ENSA_ARPP19_PPP2R2B_1_Ser62_Ser67p__PPP2R2B_ENSA_ARPP19_1_;
    y[38] = _cell__CCNE_promoter_E2F_;
    y[39] = _cell__CCNA_promoter_E2F_;
    y[40] = _cell__E2F_promoter_E2F_;
    y[41] = _cell__FBXO5_promoter_E2F_;
    y[42] = _cell__FOXM1_promoter_E2F_;
    y[43] = _cell__CCNE_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_;
    y[44] = _cell__CCNA_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_;
    y[45] = _cell__E2F_DBD_1_RB1_Ser332u__E2F_promoter_E2F_1_;
    y[46] = _cell__E2F_DBD_1_RB1_Ser332u__FBXO5_promoter_E2F_1_;
    y[47] = _cell__E2F_DBD_1_RB1_Ser332u__FOXM1_promoter_E2F_1_;
}

} // namespace amici
} // namespace model_cell_cycle_v3_0_0_simple