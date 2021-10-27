#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include <array>

#include "x_rdata.h"

namespace amici {
namespace model_cell_cycle_v3_0_0_rescaled {

void x_solver_cell_cycle_v3_0_0_rescaled(realtype *x_solver, const realtype *x_rdata){
    x_solver[0] = _cell__CCNE;
    x_solver[1] = _cell__E2F_DBD_RB1_Ser332u_;
    x_solver[2] = _cell__E2F_DBD_RB1_Ser332p_;
    x_solver[3] = _cell__CCNA;
    x_solver[4] = _cell__CCNB_CDK1_Thr14_Tyr15u_;
    x_solver[5] = _cell__E2F_DBD_RB1_1_Ser332u__RB1_E2F_1_Ser807_Ser811u_;
    x_solver[6] = _cell__E2F_DBD_RB1_1_Ser332p__RB1_E2F_1_Ser807_Ser811u_;
    x_solver[7] = _cell__RB1_E2F_Ser807_Ser811u_;
    x_solver[8] = _cell__RB1_E2F_Ser807_Ser811p_;
    x_solver[9] = _cell__PPP2R2B_ENSA_ARPP19_;
    x_solver[10] = _cell__APC_FBXO5_FZR1_CDC20_Ser355u_;
    x_solver[11] = _cell__CDC20_APC_;
    x_solver[12] = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__CDC20_APC_1_;
    x_solver[13] = _cell__APC_FBXO5_FZR1_CDC20_Ser355p_;
    x_solver[14] = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_;
    x_solver[15] = _cell__FZR1_APC_FBXO5_nTermu_;
    x_solver[16] = _cell__FZR1_APC_FBXO5_nTermp_;
    x_solver[17] = _cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355u__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_;
    x_solver[18] = _cell__FBXO5_APC_FZR1_Ser182u_;
    x_solver[19] = _cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355p__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_;
    x_solver[20] = _cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__FZR1_APC_1_FBXO5_nTermu_;
    x_solver[21] = _cell__FBXO5_APC_FZR1_Ser182p_;
    x_solver[22] = _cell__FOXM1_DBD_Thr600u_;
    x_solver[23] = _cell__FOXM1_DBD_Thr600p_;
    x_solver[24] = _cell__CCNB_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_;
    x_solver[25] = _cell__CCNB_promoter_FOXM1_;
    x_solver[26] = _cell__CDC20_promoter_FOXM1_;
    x_solver[27] = _cell__CDC20_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_;
    x_solver[28] = _cell__WEE1_Ser123u_;
    x_solver[29] = _cell__CCNB_CDK1_Thr14_Tyr15p_;
    x_solver[30] = _cell__WEE1_Ser123p_;
    x_solver[31] = _cell__CDC25_pSitesp_;
    x_solver[32] = _cell__CDC25_pSitesu_;
    x_solver[33] = _cell__MASTL_Thr198u_;
    x_solver[34] = _cell__MASTL_Thr198p_;
    x_solver[35] = _cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67u_;
    x_solver[36] = _cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67p_;
    x_solver[37] = _cell__ENSA_ARPP19_PPP2R2B_1_Ser62_Ser67p__PPP2R2B_ENSA_ARPP19_1_;
    x_solver[38] = _cell__CCNE_promoter_E2F_;
    x_solver[39] = _cell__CCNA_promoter_E2F_;
    x_solver[40] = _cell__E2F_promoter_E2F_;
    x_solver[41] = _cell__FBXO5_promoter_E2F_;
    x_solver[42] = _cell__FOXM1_promoter_E2F_;
    x_solver[43] = _cell__CCNE_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_;
    x_solver[44] = _cell__CCNA_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_;
    x_solver[45] = _cell__E2F_DBD_1_RB1_Ser332u__E2F_promoter_E2F_1_;
    x_solver[46] = _cell__E2F_DBD_1_RB1_Ser332u__FBXO5_promoter_E2F_1_;
    x_solver[47] = _cell__E2F_DBD_1_RB1_Ser332u__FOXM1_promoter_E2F_1_;
}

} // namespace amici
} // namespace model_cell_cycle_v3_0_0_rescaled