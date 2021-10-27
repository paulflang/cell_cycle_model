#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include <array>

#include "p.h"
#include "k.h"
#include "sigmay.h"

namespace amici {
namespace model_cell_cycle_v3_0_0_rescaled {

void sigmay_cell_cycle_v3_0_0_rescaled(realtype *sigmay, const realtype t, const realtype *p, const realtype *k){
    sigma_obs__cell__CCNE = 1.0;  // sigmay[0]
    sigma_obs__cell__E2F_DBD_RB1_Ser332u_ = 1.0;  // sigmay[1]
    sigma_obs__cell__E2F_DBD_RB1_Ser332p_ = 1.0;  // sigmay[2]
    sigma_obs__cell__CCNA = 1.0;  // sigmay[3]
    sigma_obs__cell__CCNB_CDK1_Thr14_Tyr15u_ = 1.0;  // sigmay[4]
    sigma_obs__cell__E2F_DBD_RB1_1_Ser332u__RB1_E2F_1_Ser807_Ser811u_ = 1.0;  // sigmay[5]
    sigma_obs__cell__E2F_DBD_RB1_1_Ser332p__RB1_E2F_1_Ser807_Ser811u_ = 1.0;  // sigmay[6]
    sigma_obs__cell__RB1_E2F_Ser807_Ser811u_ = 1.0;  // sigmay[7]
    sigma_obs__cell__RB1_E2F_Ser807_Ser811p_ = 1.0;  // sigmay[8]
    sigma_obs__cell__PPP2R2B_ENSA_ARPP19_ = 1.0;  // sigmay[9]
    sigma_obs__cell__APC_FBXO5_FZR1_CDC20_Ser355u_ = 1.0;  // sigmay[10]
    sigma_obs__cell__CDC20_APC_ = 1.0;  // sigmay[11]
    sigma_obs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__CDC20_APC_1_ = 1.0;  // sigmay[12]
    sigma_obs__cell__APC_FBXO5_FZR1_CDC20_Ser355p_ = 1.0;  // sigmay[13]
    sigma_obs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_ = 1.0;  // sigmay[14]
    sigma_obs__cell__FZR1_APC_FBXO5_nTermu_ = 1.0;  // sigmay[15]
    sigma_obs__cell__FZR1_APC_FBXO5_nTermp_ = 1.0;  // sigmay[16]
    sigma_obs__cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355u__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_ = 1.0;  // sigmay[17]
    sigma_obs__cell__FBXO5_APC_FZR1_Ser182u_ = 1.0;  // sigmay[18]
    sigma_obs__cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355p__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_ = 1.0;  // sigmay[19]
    sigma_obs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__FZR1_APC_1_FBXO5_nTermu_ = 1.0;  // sigmay[20]
    sigma_obs__cell__FBXO5_APC_FZR1_Ser182p_ = 1.0;  // sigmay[21]
    sigma_obs__cell__FOXM1_DBD_Thr600u_ = 1.0;  // sigmay[22]
    sigma_obs__cell__FOXM1_DBD_Thr600p_ = 1.0;  // sigmay[23]
    sigma_obs__cell__CCNB_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_ = 1.0;  // sigmay[24]
    sigma_obs__cell__CCNB_promoter_FOXM1_ = 1.0;  // sigmay[25]
    sigma_obs__cell__CDC20_promoter_FOXM1_ = 1.0;  // sigmay[26]
    sigma_obs__cell__CDC20_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_ = 1.0;  // sigmay[27]
    sigma_obs__cell__WEE1_Ser123u_ = 1.0;  // sigmay[28]
    sigma_obs__cell__CCNB_CDK1_Thr14_Tyr15p_ = 1.0;  // sigmay[29]
    sigma_obs__cell__WEE1_Ser123p_ = 1.0;  // sigmay[30]
    sigma_obs__cell__CDC25_pSitesp_ = 1.0;  // sigmay[31]
    sigma_obs__cell__CDC25_pSitesu_ = 1.0;  // sigmay[32]
    sigma_obs__cell__MASTL_Thr198u_ = 1.0;  // sigmay[33]
    sigma_obs__cell__MASTL_Thr198p_ = 1.0;  // sigmay[34]
    sigma_obs__cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67u_ = 1.0;  // sigmay[35]
    sigma_obs__cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67p_ = 1.0;  // sigmay[36]
    sigma_obs__cell__ENSA_ARPP19_PPP2R2B_1_Ser62_Ser67p__PPP2R2B_ENSA_ARPP19_1_ = 1.0;  // sigmay[37]
    sigma_obs__cell__CCNE_promoter_E2F_ = 1.0;  // sigmay[38]
    sigma_obs__cell__CCNA_promoter_E2F_ = 1.0;  // sigmay[39]
    sigma_obs__cell__E2F_promoter_E2F_ = 1.0;  // sigmay[40]
    sigma_obs__cell__FBXO5_promoter_E2F_ = 1.0;  // sigmay[41]
    sigma_obs__cell__FOXM1_promoter_E2F_ = 1.0;  // sigmay[42]
    sigma_obs__cell__CCNE_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_ = 1.0;  // sigmay[43]
    sigma_obs__cell__CCNA_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_ = 1.0;  // sigmay[44]
    sigma_obs__cell__E2F_DBD_1_RB1_Ser332u__E2F_promoter_E2F_1_ = 1.0;  // sigmay[45]
    sigma_obs__cell__E2F_DBD_1_RB1_Ser332u__FBXO5_promoter_E2F_1_ = 1.0;  // sigmay[46]
    sigma_obs__cell__E2F_DBD_1_RB1_Ser332u__FOXM1_promoter_E2F_1_ = 1.0;  // sigmay[47]
}

} // namespace amici
} // namespace model_cell_cycle_v3_0_0_rescaled