#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include <array>

#include "y.h"
#include "my.h"
#include "p.h"
#include "k.h"
#include "sigmay.h"

namespace amici {
namespace model_cell_cycle_v3_0_0_rescaled {

void dJydsigmay_cell_cycle_v3_0_0_rescaled(realtype *dJydsigmay, const int iy, const realtype *p, const realtype *k, const realtype *y, const realtype *sigmay, const realtype *my){
    switch(iy) {
        case 0:
            dJydsigmay[0] = 1.0/sigma_obs__cell__CCNE - 1.0*std::pow(-mobs__cell__CCNE + obs__cell__CCNE, 2)/std::pow(sigma_obs__cell__CCNE, 3);
            break;
        case 1:
            dJydsigmay[1] = 1.0/sigma_obs__cell__E2F_DBD_RB1_Ser332u_ - 1.0*std::pow(-mobs__cell__E2F_DBD_RB1_Ser332u_ + obs__cell__E2F_DBD_RB1_Ser332u_, 2)/std::pow(sigma_obs__cell__E2F_DBD_RB1_Ser332u_, 3);
            break;
        case 2:
            dJydsigmay[2] = 1.0/sigma_obs__cell__E2F_DBD_RB1_Ser332p_ - 1.0*std::pow(-mobs__cell__E2F_DBD_RB1_Ser332p_ + obs__cell__E2F_DBD_RB1_Ser332p_, 2)/std::pow(sigma_obs__cell__E2F_DBD_RB1_Ser332p_, 3);
            break;
        case 3:
            dJydsigmay[3] = 1.0/sigma_obs__cell__CCNA - 1.0*std::pow(-mobs__cell__CCNA + obs__cell__CCNA, 2)/std::pow(sigma_obs__cell__CCNA, 3);
            break;
        case 4:
            dJydsigmay[4] = 1.0/sigma_obs__cell__CCNB_CDK1_Thr14_Tyr15u_ - 1.0*std::pow(-mobs__cell__CCNB_CDK1_Thr14_Tyr15u_ + obs__cell__CCNB_CDK1_Thr14_Tyr15u_, 2)/std::pow(sigma_obs__cell__CCNB_CDK1_Thr14_Tyr15u_, 3);
            break;
        case 5:
            dJydsigmay[5] = 1.0/sigma_obs__cell__E2F_DBD_RB1_1_Ser332u__RB1_E2F_1_Ser807_Ser811u_ - 1.0*std::pow(-mobs__cell__E2F_DBD_RB1_1_Ser332u__RB1_E2F_1_Ser807_Ser811u_ + obs__cell__E2F_DBD_RB1_1_Ser332u__RB1_E2F_1_Ser807_Ser811u_, 2)/std::pow(sigma_obs__cell__E2F_DBD_RB1_1_Ser332u__RB1_E2F_1_Ser807_Ser811u_, 3);
            break;
        case 6:
            dJydsigmay[6] = 1.0/sigma_obs__cell__E2F_DBD_RB1_1_Ser332p__RB1_E2F_1_Ser807_Ser811u_ - 1.0*std::pow(-mobs__cell__E2F_DBD_RB1_1_Ser332p__RB1_E2F_1_Ser807_Ser811u_ + obs__cell__E2F_DBD_RB1_1_Ser332p__RB1_E2F_1_Ser807_Ser811u_, 2)/std::pow(sigma_obs__cell__E2F_DBD_RB1_1_Ser332p__RB1_E2F_1_Ser807_Ser811u_, 3);
            break;
        case 7:
            dJydsigmay[7] = 1.0/sigma_obs__cell__RB1_E2F_Ser807_Ser811u_ - 1.0*std::pow(-mobs__cell__RB1_E2F_Ser807_Ser811u_ + obs__cell__RB1_E2F_Ser807_Ser811u_, 2)/std::pow(sigma_obs__cell__RB1_E2F_Ser807_Ser811u_, 3);
            break;
        case 8:
            dJydsigmay[8] = 1.0/sigma_obs__cell__RB1_E2F_Ser807_Ser811p_ - 1.0*std::pow(-mobs__cell__RB1_E2F_Ser807_Ser811p_ + obs__cell__RB1_E2F_Ser807_Ser811p_, 2)/std::pow(sigma_obs__cell__RB1_E2F_Ser807_Ser811p_, 3);
            break;
        case 9:
            dJydsigmay[9] = 1.0/sigma_obs__cell__PPP2R2B_ENSA_ARPP19_ - 1.0*std::pow(-mobs__cell__PPP2R2B_ENSA_ARPP19_ + obs__cell__PPP2R2B_ENSA_ARPP19_, 2)/std::pow(sigma_obs__cell__PPP2R2B_ENSA_ARPP19_, 3);
            break;
        case 10:
            dJydsigmay[10] = 1.0/sigma_obs__cell__APC_FBXO5_FZR1_CDC20_Ser355u_ - 1.0*std::pow(-mobs__cell__APC_FBXO5_FZR1_CDC20_Ser355u_ + obs__cell__APC_FBXO5_FZR1_CDC20_Ser355u_, 2)/std::pow(sigma_obs__cell__APC_FBXO5_FZR1_CDC20_Ser355u_, 3);
            break;
        case 11:
            dJydsigmay[11] = 1.0/sigma_obs__cell__CDC20_APC_ - 1.0*std::pow(-mobs__cell__CDC20_APC_ + obs__cell__CDC20_APC_, 2)/std::pow(sigma_obs__cell__CDC20_APC_, 3);
            break;
        case 12:
            dJydsigmay[12] = 1.0/sigma_obs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__CDC20_APC_1_ - 1.0*std::pow(-mobs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__CDC20_APC_1_ + obs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__CDC20_APC_1_, 2)/std::pow(sigma_obs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__CDC20_APC_1_, 3);
            break;
        case 13:
            dJydsigmay[13] = 1.0/sigma_obs__cell__APC_FBXO5_FZR1_CDC20_Ser355p_ - 1.0*std::pow(-mobs__cell__APC_FBXO5_FZR1_CDC20_Ser355p_ + obs__cell__APC_FBXO5_FZR1_CDC20_Ser355p_, 2)/std::pow(sigma_obs__cell__APC_FBXO5_FZR1_CDC20_Ser355p_, 3);
            break;
        case 14:
            dJydsigmay[14] = 1.0/sigma_obs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_ - 1.0*std::pow(-mobs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_ + obs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_, 2)/std::pow(sigma_obs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_, 3);
            break;
        case 15:
            dJydsigmay[15] = 1.0/sigma_obs__cell__FZR1_APC_FBXO5_nTermu_ - 1.0*std::pow(-mobs__cell__FZR1_APC_FBXO5_nTermu_ + obs__cell__FZR1_APC_FBXO5_nTermu_, 2)/std::pow(sigma_obs__cell__FZR1_APC_FBXO5_nTermu_, 3);
            break;
        case 16:
            dJydsigmay[16] = 1.0/sigma_obs__cell__FZR1_APC_FBXO5_nTermp_ - 1.0*std::pow(-mobs__cell__FZR1_APC_FBXO5_nTermp_ + obs__cell__FZR1_APC_FBXO5_nTermp_, 2)/std::pow(sigma_obs__cell__FZR1_APC_FBXO5_nTermp_, 3);
            break;
        case 17:
            dJydsigmay[17] = 1.0/sigma_obs__cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355u__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_ - 1.0*std::pow(-mobs__cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355u__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_ + obs__cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355u__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_, 2)/std::pow(sigma_obs__cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355u__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_, 3);
            break;
        case 18:
            dJydsigmay[18] = 1.0/sigma_obs__cell__FBXO5_APC_FZR1_Ser182u_ - 1.0*std::pow(-mobs__cell__FBXO5_APC_FZR1_Ser182u_ + obs__cell__FBXO5_APC_FZR1_Ser182u_, 2)/std::pow(sigma_obs__cell__FBXO5_APC_FZR1_Ser182u_, 3);
            break;
        case 19:
            dJydsigmay[19] = 1.0/sigma_obs__cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355p__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_ - 1.0*std::pow(-mobs__cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355p__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_ + obs__cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355p__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_, 2)/std::pow(sigma_obs__cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355p__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_, 3);
            break;
        case 20:
            dJydsigmay[20] = 1.0/sigma_obs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__FZR1_APC_1_FBXO5_nTermu_ - 1.0*std::pow(-mobs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__FZR1_APC_1_FBXO5_nTermu_ + obs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__FZR1_APC_1_FBXO5_nTermu_, 2)/std::pow(sigma_obs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__FZR1_APC_1_FBXO5_nTermu_, 3);
            break;
        case 21:
            dJydsigmay[21] = 1.0/sigma_obs__cell__FBXO5_APC_FZR1_Ser182p_ - 1.0*std::pow(-mobs__cell__FBXO5_APC_FZR1_Ser182p_ + obs__cell__FBXO5_APC_FZR1_Ser182p_, 2)/std::pow(sigma_obs__cell__FBXO5_APC_FZR1_Ser182p_, 3);
            break;
        case 22:
            dJydsigmay[22] = 1.0/sigma_obs__cell__FOXM1_DBD_Thr600u_ - 1.0*std::pow(-mobs__cell__FOXM1_DBD_Thr600u_ + obs__cell__FOXM1_DBD_Thr600u_, 2)/std::pow(sigma_obs__cell__FOXM1_DBD_Thr600u_, 3);
            break;
        case 23:
            dJydsigmay[23] = 1.0/sigma_obs__cell__FOXM1_DBD_Thr600p_ - 1.0*std::pow(-mobs__cell__FOXM1_DBD_Thr600p_ + obs__cell__FOXM1_DBD_Thr600p_, 2)/std::pow(sigma_obs__cell__FOXM1_DBD_Thr600p_, 3);
            break;
        case 24:
            dJydsigmay[24] = 1.0/sigma_obs__cell__CCNB_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_ - 1.0*std::pow(-mobs__cell__CCNB_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_ + obs__cell__CCNB_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_, 2)/std::pow(sigma_obs__cell__CCNB_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_, 3);
            break;
        case 25:
            dJydsigmay[25] = 1.0/sigma_obs__cell__CCNB_promoter_FOXM1_ - 1.0*std::pow(-mobs__cell__CCNB_promoter_FOXM1_ + obs__cell__CCNB_promoter_FOXM1_, 2)/std::pow(sigma_obs__cell__CCNB_promoter_FOXM1_, 3);
            break;
        case 26:
            dJydsigmay[26] = 1.0/sigma_obs__cell__CDC20_promoter_FOXM1_ - 1.0*std::pow(-mobs__cell__CDC20_promoter_FOXM1_ + obs__cell__CDC20_promoter_FOXM1_, 2)/std::pow(sigma_obs__cell__CDC20_promoter_FOXM1_, 3);
            break;
        case 27:
            dJydsigmay[27] = 1.0/sigma_obs__cell__CDC20_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_ - 1.0*std::pow(-mobs__cell__CDC20_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_ + obs__cell__CDC20_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_, 2)/std::pow(sigma_obs__cell__CDC20_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_, 3);
            break;
        case 28:
            dJydsigmay[28] = 1.0/sigma_obs__cell__WEE1_Ser123u_ - 1.0*std::pow(-mobs__cell__WEE1_Ser123u_ + obs__cell__WEE1_Ser123u_, 2)/std::pow(sigma_obs__cell__WEE1_Ser123u_, 3);
            break;
        case 29:
            dJydsigmay[29] = 1.0/sigma_obs__cell__CCNB_CDK1_Thr14_Tyr15p_ - 1.0*std::pow(-mobs__cell__CCNB_CDK1_Thr14_Tyr15p_ + obs__cell__CCNB_CDK1_Thr14_Tyr15p_, 2)/std::pow(sigma_obs__cell__CCNB_CDK1_Thr14_Tyr15p_, 3);
            break;
        case 30:
            dJydsigmay[30] = 1.0/sigma_obs__cell__WEE1_Ser123p_ - 1.0*std::pow(-mobs__cell__WEE1_Ser123p_ + obs__cell__WEE1_Ser123p_, 2)/std::pow(sigma_obs__cell__WEE1_Ser123p_, 3);
            break;
        case 31:
            dJydsigmay[31] = 1.0/sigma_obs__cell__CDC25_pSitesp_ - 1.0*std::pow(-mobs__cell__CDC25_pSitesp_ + obs__cell__CDC25_pSitesp_, 2)/std::pow(sigma_obs__cell__CDC25_pSitesp_, 3);
            break;
        case 32:
            dJydsigmay[32] = 1.0/sigma_obs__cell__CDC25_pSitesu_ - 1.0*std::pow(-mobs__cell__CDC25_pSitesu_ + obs__cell__CDC25_pSitesu_, 2)/std::pow(sigma_obs__cell__CDC25_pSitesu_, 3);
            break;
        case 33:
            dJydsigmay[33] = 1.0/sigma_obs__cell__MASTL_Thr198u_ - 1.0*std::pow(-mobs__cell__MASTL_Thr198u_ + obs__cell__MASTL_Thr198u_, 2)/std::pow(sigma_obs__cell__MASTL_Thr198u_, 3);
            break;
        case 34:
            dJydsigmay[34] = 1.0/sigma_obs__cell__MASTL_Thr198p_ - 1.0*std::pow(-mobs__cell__MASTL_Thr198p_ + obs__cell__MASTL_Thr198p_, 2)/std::pow(sigma_obs__cell__MASTL_Thr198p_, 3);
            break;
        case 35:
            dJydsigmay[35] = 1.0/sigma_obs__cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67u_ - 1.0*std::pow(-mobs__cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67u_ + obs__cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67u_, 2)/std::pow(sigma_obs__cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67u_, 3);
            break;
        case 36:
            dJydsigmay[36] = 1.0/sigma_obs__cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67p_ - 1.0*std::pow(-mobs__cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67p_ + obs__cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67p_, 2)/std::pow(sigma_obs__cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67p_, 3);
            break;
        case 37:
            dJydsigmay[37] = 1.0/sigma_obs__cell__ENSA_ARPP19_PPP2R2B_1_Ser62_Ser67p__PPP2R2B_ENSA_ARPP19_1_ - 1.0*std::pow(-mobs__cell__ENSA_ARPP19_PPP2R2B_1_Ser62_Ser67p__PPP2R2B_ENSA_ARPP19_1_ + obs__cell__ENSA_ARPP19_PPP2R2B_1_Ser62_Ser67p__PPP2R2B_ENSA_ARPP19_1_, 2)/std::pow(sigma_obs__cell__ENSA_ARPP19_PPP2R2B_1_Ser62_Ser67p__PPP2R2B_ENSA_ARPP19_1_, 3);
            break;
        case 38:
            dJydsigmay[38] = 1.0/sigma_obs__cell__CCNE_promoter_E2F_ - 1.0*std::pow(-mobs__cell__CCNE_promoter_E2F_ + obs__cell__CCNE_promoter_E2F_, 2)/std::pow(sigma_obs__cell__CCNE_promoter_E2F_, 3);
            break;
        case 39:
            dJydsigmay[39] = 1.0/sigma_obs__cell__CCNA_promoter_E2F_ - 1.0*std::pow(-mobs__cell__CCNA_promoter_E2F_ + obs__cell__CCNA_promoter_E2F_, 2)/std::pow(sigma_obs__cell__CCNA_promoter_E2F_, 3);
            break;
        case 40:
            dJydsigmay[40] = 1.0/sigma_obs__cell__E2F_promoter_E2F_ - 1.0*std::pow(-mobs__cell__E2F_promoter_E2F_ + obs__cell__E2F_promoter_E2F_, 2)/std::pow(sigma_obs__cell__E2F_promoter_E2F_, 3);
            break;
        case 41:
            dJydsigmay[41] = 1.0/sigma_obs__cell__FBXO5_promoter_E2F_ - 1.0*std::pow(-mobs__cell__FBXO5_promoter_E2F_ + obs__cell__FBXO5_promoter_E2F_, 2)/std::pow(sigma_obs__cell__FBXO5_promoter_E2F_, 3);
            break;
        case 42:
            dJydsigmay[42] = 1.0/sigma_obs__cell__FOXM1_promoter_E2F_ - 1.0*std::pow(-mobs__cell__FOXM1_promoter_E2F_ + obs__cell__FOXM1_promoter_E2F_, 2)/std::pow(sigma_obs__cell__FOXM1_promoter_E2F_, 3);
            break;
        case 43:
            dJydsigmay[43] = 1.0/sigma_obs__cell__CCNE_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_ - 1.0*std::pow(-mobs__cell__CCNE_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_ + obs__cell__CCNE_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_, 2)/std::pow(sigma_obs__cell__CCNE_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_, 3);
            break;
        case 44:
            dJydsigmay[44] = 1.0/sigma_obs__cell__CCNA_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_ - 1.0*std::pow(-mobs__cell__CCNA_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_ + obs__cell__CCNA_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_, 2)/std::pow(sigma_obs__cell__CCNA_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_, 3);
            break;
        case 45:
            dJydsigmay[45] = 1.0/sigma_obs__cell__E2F_DBD_1_RB1_Ser332u__E2F_promoter_E2F_1_ - 1.0*std::pow(-mobs__cell__E2F_DBD_1_RB1_Ser332u__E2F_promoter_E2F_1_ + obs__cell__E2F_DBD_1_RB1_Ser332u__E2F_promoter_E2F_1_, 2)/std::pow(sigma_obs__cell__E2F_DBD_1_RB1_Ser332u__E2F_promoter_E2F_1_, 3);
            break;
        case 46:
            dJydsigmay[46] = 1.0/sigma_obs__cell__E2F_DBD_1_RB1_Ser332u__FBXO5_promoter_E2F_1_ - 1.0*std::pow(-mobs__cell__E2F_DBD_1_RB1_Ser332u__FBXO5_promoter_E2F_1_ + obs__cell__E2F_DBD_1_RB1_Ser332u__FBXO5_promoter_E2F_1_, 2)/std::pow(sigma_obs__cell__E2F_DBD_1_RB1_Ser332u__FBXO5_promoter_E2F_1_, 3);
            break;
        case 47:
            dJydsigmay[47] = 1.0/sigma_obs__cell__E2F_DBD_1_RB1_Ser332u__FOXM1_promoter_E2F_1_ - 1.0*std::pow(-mobs__cell__E2F_DBD_1_RB1_Ser332u__FOXM1_promoter_E2F_1_ + obs__cell__E2F_DBD_1_RB1_Ser332u__FOXM1_promoter_E2F_1_, 2)/std::pow(sigma_obs__cell__E2F_DBD_1_RB1_Ser332u__FOXM1_promoter_E2F_1_, 3);
            break;
    }
}

} // namespace amici
} // namespace model_cell_cycle_v3_0_0_rescaled