#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include <array>

#include "y.h"
#include "my.h"
#include "p.h"
#include "k.h"
#include "sigmay.h"
#include "dJydy.h"

namespace amici {
namespace model_cell_cycle_v3_0_0_rescaled {

void dJydy_cell_cycle_v3_0_0_rescaled(realtype *dJydy, const int iy, const realtype *p, const realtype *k, const realtype *y, const realtype *sigmay, const realtype *my){
    switch(iy) {
        case 0:
            dJydy[0] = (-1.0*mobs__cell__CCNE + 1.0*obs__cell__CCNE)/std::pow(sigma_obs__cell__CCNE, 2);
            break;
        case 1:
            dJydy[0] = (-1.0*mobs__cell__E2F_DBD_RB1_Ser332u_ + 1.0*obs__cell__E2F_DBD_RB1_Ser332u_)/std::pow(sigma_obs__cell__E2F_DBD_RB1_Ser332u_, 2);
            break;
        case 2:
            dJydy[0] = (-1.0*mobs__cell__E2F_DBD_RB1_Ser332p_ + 1.0*obs__cell__E2F_DBD_RB1_Ser332p_)/std::pow(sigma_obs__cell__E2F_DBD_RB1_Ser332p_, 2);
            break;
        case 3:
            dJydy[0] = (-1.0*mobs__cell__CCNA + 1.0*obs__cell__CCNA)/std::pow(sigma_obs__cell__CCNA, 2);
            break;
        case 4:
            dJydy[0] = (-1.0*mobs__cell__CCNB_CDK1_Thr14_Tyr15u_ + 1.0*obs__cell__CCNB_CDK1_Thr14_Tyr15u_)/std::pow(sigma_obs__cell__CCNB_CDK1_Thr14_Tyr15u_, 2);
            break;
        case 5:
            dJydy[0] = (-1.0*mobs__cell__E2F_DBD_RB1_1_Ser332u__RB1_E2F_1_Ser807_Ser811u_ + 1.0*obs__cell__E2F_DBD_RB1_1_Ser332u__RB1_E2F_1_Ser807_Ser811u_)/std::pow(sigma_obs__cell__E2F_DBD_RB1_1_Ser332u__RB1_E2F_1_Ser807_Ser811u_, 2);
            break;
        case 6:
            dJydy[0] = (-1.0*mobs__cell__E2F_DBD_RB1_1_Ser332p__RB1_E2F_1_Ser807_Ser811u_ + 1.0*obs__cell__E2F_DBD_RB1_1_Ser332p__RB1_E2F_1_Ser807_Ser811u_)/std::pow(sigma_obs__cell__E2F_DBD_RB1_1_Ser332p__RB1_E2F_1_Ser807_Ser811u_, 2);
            break;
        case 7:
            dJydy[0] = (-1.0*mobs__cell__RB1_E2F_Ser807_Ser811u_ + 1.0*obs__cell__RB1_E2F_Ser807_Ser811u_)/std::pow(sigma_obs__cell__RB1_E2F_Ser807_Ser811u_, 2);
            break;
        case 8:
            dJydy[0] = (-1.0*mobs__cell__RB1_E2F_Ser807_Ser811p_ + 1.0*obs__cell__RB1_E2F_Ser807_Ser811p_)/std::pow(sigma_obs__cell__RB1_E2F_Ser807_Ser811p_, 2);
            break;
        case 9:
            dJydy[0] = (-1.0*mobs__cell__PPP2R2B_ENSA_ARPP19_ + 1.0*obs__cell__PPP2R2B_ENSA_ARPP19_)/std::pow(sigma_obs__cell__PPP2R2B_ENSA_ARPP19_, 2);
            break;
        case 10:
            dJydy[0] = (-1.0*mobs__cell__APC_FBXO5_FZR1_CDC20_Ser355u_ + 1.0*obs__cell__APC_FBXO5_FZR1_CDC20_Ser355u_)/std::pow(sigma_obs__cell__APC_FBXO5_FZR1_CDC20_Ser355u_, 2);
            break;
        case 11:
            dJydy[0] = (-1.0*mobs__cell__CDC20_APC_ + 1.0*obs__cell__CDC20_APC_)/std::pow(sigma_obs__cell__CDC20_APC_, 2);
            break;
        case 12:
            dJydy[0] = (-1.0*mobs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__CDC20_APC_1_ + 1.0*obs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__CDC20_APC_1_)/std::pow(sigma_obs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__CDC20_APC_1_, 2);
            break;
        case 13:
            dJydy[0] = (-1.0*mobs__cell__APC_FBXO5_FZR1_CDC20_Ser355p_ + 1.0*obs__cell__APC_FBXO5_FZR1_CDC20_Ser355p_)/std::pow(sigma_obs__cell__APC_FBXO5_FZR1_CDC20_Ser355p_, 2);
            break;
        case 14:
            dJydy[0] = (-1.0*mobs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_ + 1.0*obs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_)/std::pow(sigma_obs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_, 2);
            break;
        case 15:
            dJydy[0] = (-1.0*mobs__cell__FZR1_APC_FBXO5_nTermu_ + 1.0*obs__cell__FZR1_APC_FBXO5_nTermu_)/std::pow(sigma_obs__cell__FZR1_APC_FBXO5_nTermu_, 2);
            break;
        case 16:
            dJydy[0] = (-1.0*mobs__cell__FZR1_APC_FBXO5_nTermp_ + 1.0*obs__cell__FZR1_APC_FBXO5_nTermp_)/std::pow(sigma_obs__cell__FZR1_APC_FBXO5_nTermp_, 2);
            break;
        case 17:
            dJydy[0] = (-1.0*mobs__cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355u__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_ + 1.0*obs__cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355u__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_)/std::pow(sigma_obs__cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355u__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_, 2);
            break;
        case 18:
            dJydy[0] = (-1.0*mobs__cell__FBXO5_APC_FZR1_Ser182u_ + 1.0*obs__cell__FBXO5_APC_FZR1_Ser182u_)/std::pow(sigma_obs__cell__FBXO5_APC_FZR1_Ser182u_, 2);
            break;
        case 19:
            dJydy[0] = (-1.0*mobs__cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355p__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_ + 1.0*obs__cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355p__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_)/std::pow(sigma_obs__cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355p__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_, 2);
            break;
        case 20:
            dJydy[0] = (-1.0*mobs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__FZR1_APC_1_FBXO5_nTermu_ + 1.0*obs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__FZR1_APC_1_FBXO5_nTermu_)/std::pow(sigma_obs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__FZR1_APC_1_FBXO5_nTermu_, 2);
            break;
        case 21:
            dJydy[0] = (-1.0*mobs__cell__FBXO5_APC_FZR1_Ser182p_ + 1.0*obs__cell__FBXO5_APC_FZR1_Ser182p_)/std::pow(sigma_obs__cell__FBXO5_APC_FZR1_Ser182p_, 2);
            break;
        case 22:
            dJydy[0] = (-1.0*mobs__cell__FOXM1_DBD_Thr600u_ + 1.0*obs__cell__FOXM1_DBD_Thr600u_)/std::pow(sigma_obs__cell__FOXM1_DBD_Thr600u_, 2);
            break;
        case 23:
            dJydy[0] = (-1.0*mobs__cell__FOXM1_DBD_Thr600p_ + 1.0*obs__cell__FOXM1_DBD_Thr600p_)/std::pow(sigma_obs__cell__FOXM1_DBD_Thr600p_, 2);
            break;
        case 24:
            dJydy[0] = (-1.0*mobs__cell__CCNB_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_ + 1.0*obs__cell__CCNB_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_)/std::pow(sigma_obs__cell__CCNB_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_, 2);
            break;
        case 25:
            dJydy[0] = (-1.0*mobs__cell__CCNB_promoter_FOXM1_ + 1.0*obs__cell__CCNB_promoter_FOXM1_)/std::pow(sigma_obs__cell__CCNB_promoter_FOXM1_, 2);
            break;
        case 26:
            dJydy[0] = (-1.0*mobs__cell__CDC20_promoter_FOXM1_ + 1.0*obs__cell__CDC20_promoter_FOXM1_)/std::pow(sigma_obs__cell__CDC20_promoter_FOXM1_, 2);
            break;
        case 27:
            dJydy[0] = (-1.0*mobs__cell__CDC20_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_ + 1.0*obs__cell__CDC20_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_)/std::pow(sigma_obs__cell__CDC20_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_, 2);
            break;
        case 28:
            dJydy[0] = (-1.0*mobs__cell__WEE1_Ser123u_ + 1.0*obs__cell__WEE1_Ser123u_)/std::pow(sigma_obs__cell__WEE1_Ser123u_, 2);
            break;
        case 29:
            dJydy[0] = (-1.0*mobs__cell__CCNB_CDK1_Thr14_Tyr15p_ + 1.0*obs__cell__CCNB_CDK1_Thr14_Tyr15p_)/std::pow(sigma_obs__cell__CCNB_CDK1_Thr14_Tyr15p_, 2);
            break;
        case 30:
            dJydy[0] = (-1.0*mobs__cell__WEE1_Ser123p_ + 1.0*obs__cell__WEE1_Ser123p_)/std::pow(sigma_obs__cell__WEE1_Ser123p_, 2);
            break;
        case 31:
            dJydy[0] = (-1.0*mobs__cell__CDC25_pSitesp_ + 1.0*obs__cell__CDC25_pSitesp_)/std::pow(sigma_obs__cell__CDC25_pSitesp_, 2);
            break;
        case 32:
            dJydy[0] = (-1.0*mobs__cell__CDC25_pSitesu_ + 1.0*obs__cell__CDC25_pSitesu_)/std::pow(sigma_obs__cell__CDC25_pSitesu_, 2);
            break;
        case 33:
            dJydy[0] = (-1.0*mobs__cell__MASTL_Thr198u_ + 1.0*obs__cell__MASTL_Thr198u_)/std::pow(sigma_obs__cell__MASTL_Thr198u_, 2);
            break;
        case 34:
            dJydy[0] = (-1.0*mobs__cell__MASTL_Thr198p_ + 1.0*obs__cell__MASTL_Thr198p_)/std::pow(sigma_obs__cell__MASTL_Thr198p_, 2);
            break;
        case 35:
            dJydy[0] = (-1.0*mobs__cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67u_ + 1.0*obs__cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67u_)/std::pow(sigma_obs__cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67u_, 2);
            break;
        case 36:
            dJydy[0] = (-1.0*mobs__cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67p_ + 1.0*obs__cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67p_)/std::pow(sigma_obs__cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67p_, 2);
            break;
        case 37:
            dJydy[0] = (-1.0*mobs__cell__ENSA_ARPP19_PPP2R2B_1_Ser62_Ser67p__PPP2R2B_ENSA_ARPP19_1_ + 1.0*obs__cell__ENSA_ARPP19_PPP2R2B_1_Ser62_Ser67p__PPP2R2B_ENSA_ARPP19_1_)/std::pow(sigma_obs__cell__ENSA_ARPP19_PPP2R2B_1_Ser62_Ser67p__PPP2R2B_ENSA_ARPP19_1_, 2);
            break;
        case 38:
            dJydy[0] = (-1.0*mobs__cell__CCNE_promoter_E2F_ + 1.0*obs__cell__CCNE_promoter_E2F_)/std::pow(sigma_obs__cell__CCNE_promoter_E2F_, 2);
            break;
        case 39:
            dJydy[0] = (-1.0*mobs__cell__CCNA_promoter_E2F_ + 1.0*obs__cell__CCNA_promoter_E2F_)/std::pow(sigma_obs__cell__CCNA_promoter_E2F_, 2);
            break;
        case 40:
            dJydy[0] = (-1.0*mobs__cell__E2F_promoter_E2F_ + 1.0*obs__cell__E2F_promoter_E2F_)/std::pow(sigma_obs__cell__E2F_promoter_E2F_, 2);
            break;
        case 41:
            dJydy[0] = (-1.0*mobs__cell__FBXO5_promoter_E2F_ + 1.0*obs__cell__FBXO5_promoter_E2F_)/std::pow(sigma_obs__cell__FBXO5_promoter_E2F_, 2);
            break;
        case 42:
            dJydy[0] = (-1.0*mobs__cell__FOXM1_promoter_E2F_ + 1.0*obs__cell__FOXM1_promoter_E2F_)/std::pow(sigma_obs__cell__FOXM1_promoter_E2F_, 2);
            break;
        case 43:
            dJydy[0] = (-1.0*mobs__cell__CCNE_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_ + 1.0*obs__cell__CCNE_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_)/std::pow(sigma_obs__cell__CCNE_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_, 2);
            break;
        case 44:
            dJydy[0] = (-1.0*mobs__cell__CCNA_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_ + 1.0*obs__cell__CCNA_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_)/std::pow(sigma_obs__cell__CCNA_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_, 2);
            break;
        case 45:
            dJydy[0] = (-1.0*mobs__cell__E2F_DBD_1_RB1_Ser332u__E2F_promoter_E2F_1_ + 1.0*obs__cell__E2F_DBD_1_RB1_Ser332u__E2F_promoter_E2F_1_)/std::pow(sigma_obs__cell__E2F_DBD_1_RB1_Ser332u__E2F_promoter_E2F_1_, 2);
            break;
        case 46:
            dJydy[0] = (-1.0*mobs__cell__E2F_DBD_1_RB1_Ser332u__FBXO5_promoter_E2F_1_ + 1.0*obs__cell__E2F_DBD_1_RB1_Ser332u__FBXO5_promoter_E2F_1_)/std::pow(sigma_obs__cell__E2F_DBD_1_RB1_Ser332u__FBXO5_promoter_E2F_1_, 2);
            break;
        case 47:
            dJydy[0] = (-1.0*mobs__cell__E2F_DBD_1_RB1_Ser332u__FOXM1_promoter_E2F_1_ + 1.0*obs__cell__E2F_DBD_1_RB1_Ser332u__FOXM1_promoter_E2F_1_)/std::pow(sigma_obs__cell__E2F_DBD_1_RB1_Ser332u__FOXM1_promoter_E2F_1_, 2);
            break;
    }
}

} // namespace amici
} // namespace model_cell_cycle_v3_0_0_rescaled