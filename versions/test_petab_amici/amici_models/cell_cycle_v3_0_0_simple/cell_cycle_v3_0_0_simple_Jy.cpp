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
namespace model_cell_cycle_v3_0_0_simple {

void Jy_cell_cycle_v3_0_0_simple(realtype *Jy, const int iy, const realtype *p, const realtype *k, const realtype *y, const realtype *sigmay, const realtype *my){
    switch(iy) {
        case 0:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__CCNE, 2)) + 0.5*std::pow(-mobs__cell__CCNE + obs__cell__CCNE, 2)/std::pow(sigma_obs__cell__CCNE, 2);
            break;
        case 1:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__E2F_DBD_RB1_Ser332u_, 2)) + 0.5*std::pow(-mobs__cell__E2F_DBD_RB1_Ser332u_ + obs__cell__E2F_DBD_RB1_Ser332u_, 2)/std::pow(sigma_obs__cell__E2F_DBD_RB1_Ser332u_, 2);
            break;
        case 2:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__E2F_DBD_RB1_Ser332p_, 2)) + 0.5*std::pow(-mobs__cell__E2F_DBD_RB1_Ser332p_ + obs__cell__E2F_DBD_RB1_Ser332p_, 2)/std::pow(sigma_obs__cell__E2F_DBD_RB1_Ser332p_, 2);
            break;
        case 3:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__CCNA, 2)) + 0.5*std::pow(-mobs__cell__CCNA + obs__cell__CCNA, 2)/std::pow(sigma_obs__cell__CCNA, 2);
            break;
        case 4:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__CCNB_CDK1_Thr14_Tyr15u_, 2)) + 0.5*std::pow(-mobs__cell__CCNB_CDK1_Thr14_Tyr15u_ + obs__cell__CCNB_CDK1_Thr14_Tyr15u_, 2)/std::pow(sigma_obs__cell__CCNB_CDK1_Thr14_Tyr15u_, 2);
            break;
        case 5:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__E2F_DBD_RB1_1_Ser332u__RB1_E2F_1_Ser807_Ser811u_, 2)) + 0.5*std::pow(-mobs__cell__E2F_DBD_RB1_1_Ser332u__RB1_E2F_1_Ser807_Ser811u_ + obs__cell__E2F_DBD_RB1_1_Ser332u__RB1_E2F_1_Ser807_Ser811u_, 2)/std::pow(sigma_obs__cell__E2F_DBD_RB1_1_Ser332u__RB1_E2F_1_Ser807_Ser811u_, 2);
            break;
        case 6:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__E2F_DBD_RB1_1_Ser332p__RB1_E2F_1_Ser807_Ser811u_, 2)) + 0.5*std::pow(-mobs__cell__E2F_DBD_RB1_1_Ser332p__RB1_E2F_1_Ser807_Ser811u_ + obs__cell__E2F_DBD_RB1_1_Ser332p__RB1_E2F_1_Ser807_Ser811u_, 2)/std::pow(sigma_obs__cell__E2F_DBD_RB1_1_Ser332p__RB1_E2F_1_Ser807_Ser811u_, 2);
            break;
        case 7:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__RB1_E2F_Ser807_Ser811u_, 2)) + 0.5*std::pow(-mobs__cell__RB1_E2F_Ser807_Ser811u_ + obs__cell__RB1_E2F_Ser807_Ser811u_, 2)/std::pow(sigma_obs__cell__RB1_E2F_Ser807_Ser811u_, 2);
            break;
        case 8:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__RB1_E2F_Ser807_Ser811p_, 2)) + 0.5*std::pow(-mobs__cell__RB1_E2F_Ser807_Ser811p_ + obs__cell__RB1_E2F_Ser807_Ser811p_, 2)/std::pow(sigma_obs__cell__RB1_E2F_Ser807_Ser811p_, 2);
            break;
        case 9:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__PPP2R2B_ENSA_ARPP19_, 2)) + 0.5*std::pow(-mobs__cell__PPP2R2B_ENSA_ARPP19_ + obs__cell__PPP2R2B_ENSA_ARPP19_, 2)/std::pow(sigma_obs__cell__PPP2R2B_ENSA_ARPP19_, 2);
            break;
        case 10:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__APC_FBXO5_FZR1_CDC20_Ser355u_, 2)) + 0.5*std::pow(-mobs__cell__APC_FBXO5_FZR1_CDC20_Ser355u_ + obs__cell__APC_FBXO5_FZR1_CDC20_Ser355u_, 2)/std::pow(sigma_obs__cell__APC_FBXO5_FZR1_CDC20_Ser355u_, 2);
            break;
        case 11:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__CDC20_APC_, 2)) + 0.5*std::pow(-mobs__cell__CDC20_APC_ + obs__cell__CDC20_APC_, 2)/std::pow(sigma_obs__cell__CDC20_APC_, 2);
            break;
        case 12:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__CDC20_APC_1_, 2)) + 0.5*std::pow(-mobs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__CDC20_APC_1_ + obs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__CDC20_APC_1_, 2)/std::pow(sigma_obs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__CDC20_APC_1_, 2);
            break;
        case 13:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__APC_FBXO5_FZR1_CDC20_Ser355p_, 2)) + 0.5*std::pow(-mobs__cell__APC_FBXO5_FZR1_CDC20_Ser355p_ + obs__cell__APC_FBXO5_FZR1_CDC20_Ser355p_, 2)/std::pow(sigma_obs__cell__APC_FBXO5_FZR1_CDC20_Ser355p_, 2);
            break;
        case 14:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_, 2)) + 0.5*std::pow(-mobs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_ + obs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_, 2)/std::pow(sigma_obs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_, 2);
            break;
        case 15:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__FZR1_APC_FBXO5_nTermu_, 2)) + 0.5*std::pow(-mobs__cell__FZR1_APC_FBXO5_nTermu_ + obs__cell__FZR1_APC_FBXO5_nTermu_, 2)/std::pow(sigma_obs__cell__FZR1_APC_FBXO5_nTermu_, 2);
            break;
        case 16:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__FZR1_APC_FBXO5_nTermp_, 2)) + 0.5*std::pow(-mobs__cell__FZR1_APC_FBXO5_nTermp_ + obs__cell__FZR1_APC_FBXO5_nTermp_, 2)/std::pow(sigma_obs__cell__FZR1_APC_FBXO5_nTermp_, 2);
            break;
        case 17:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355u__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_, 2)) + 0.5*std::pow(-mobs__cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355u__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_ + obs__cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355u__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_, 2)/std::pow(sigma_obs__cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355u__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_, 2);
            break;
        case 18:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__FBXO5_APC_FZR1_Ser182u_, 2)) + 0.5*std::pow(-mobs__cell__FBXO5_APC_FZR1_Ser182u_ + obs__cell__FBXO5_APC_FZR1_Ser182u_, 2)/std::pow(sigma_obs__cell__FBXO5_APC_FZR1_Ser182u_, 2);
            break;
        case 19:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355p__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_, 2)) + 0.5*std::pow(-mobs__cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355p__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_ + obs__cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355p__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_, 2)/std::pow(sigma_obs__cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355p__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_, 2);
            break;
        case 20:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__FZR1_APC_1_FBXO5_nTermu_, 2)) + 0.5*std::pow(-mobs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__FZR1_APC_1_FBXO5_nTermu_ + obs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__FZR1_APC_1_FBXO5_nTermu_, 2)/std::pow(sigma_obs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__FZR1_APC_1_FBXO5_nTermu_, 2);
            break;
        case 21:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__FBXO5_APC_FZR1_Ser182p_, 2)) + 0.5*std::pow(-mobs__cell__FBXO5_APC_FZR1_Ser182p_ + obs__cell__FBXO5_APC_FZR1_Ser182p_, 2)/std::pow(sigma_obs__cell__FBXO5_APC_FZR1_Ser182p_, 2);
            break;
        case 22:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__FOXM1_DBD_Thr600u_, 2)) + 0.5*std::pow(-mobs__cell__FOXM1_DBD_Thr600u_ + obs__cell__FOXM1_DBD_Thr600u_, 2)/std::pow(sigma_obs__cell__FOXM1_DBD_Thr600u_, 2);
            break;
        case 23:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__FOXM1_DBD_Thr600p_, 2)) + 0.5*std::pow(-mobs__cell__FOXM1_DBD_Thr600p_ + obs__cell__FOXM1_DBD_Thr600p_, 2)/std::pow(sigma_obs__cell__FOXM1_DBD_Thr600p_, 2);
            break;
        case 24:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__CCNB_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_, 2)) + 0.5*std::pow(-mobs__cell__CCNB_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_ + obs__cell__CCNB_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_, 2)/std::pow(sigma_obs__cell__CCNB_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_, 2);
            break;
        case 25:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__CCNB_promoter_FOXM1_, 2)) + 0.5*std::pow(-mobs__cell__CCNB_promoter_FOXM1_ + obs__cell__CCNB_promoter_FOXM1_, 2)/std::pow(sigma_obs__cell__CCNB_promoter_FOXM1_, 2);
            break;
        case 26:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__CDC20_promoter_FOXM1_, 2)) + 0.5*std::pow(-mobs__cell__CDC20_promoter_FOXM1_ + obs__cell__CDC20_promoter_FOXM1_, 2)/std::pow(sigma_obs__cell__CDC20_promoter_FOXM1_, 2);
            break;
        case 27:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__CDC20_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_, 2)) + 0.5*std::pow(-mobs__cell__CDC20_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_ + obs__cell__CDC20_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_, 2)/std::pow(sigma_obs__cell__CDC20_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_, 2);
            break;
        case 28:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__WEE1_Ser123u_, 2)) + 0.5*std::pow(-mobs__cell__WEE1_Ser123u_ + obs__cell__WEE1_Ser123u_, 2)/std::pow(sigma_obs__cell__WEE1_Ser123u_, 2);
            break;
        case 29:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__CCNB_CDK1_Thr14_Tyr15p_, 2)) + 0.5*std::pow(-mobs__cell__CCNB_CDK1_Thr14_Tyr15p_ + obs__cell__CCNB_CDK1_Thr14_Tyr15p_, 2)/std::pow(sigma_obs__cell__CCNB_CDK1_Thr14_Tyr15p_, 2);
            break;
        case 30:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__WEE1_Ser123p_, 2)) + 0.5*std::pow(-mobs__cell__WEE1_Ser123p_ + obs__cell__WEE1_Ser123p_, 2)/std::pow(sigma_obs__cell__WEE1_Ser123p_, 2);
            break;
        case 31:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__CDC25_pSitesp_, 2)) + 0.5*std::pow(-mobs__cell__CDC25_pSitesp_ + obs__cell__CDC25_pSitesp_, 2)/std::pow(sigma_obs__cell__CDC25_pSitesp_, 2);
            break;
        case 32:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__CDC25_pSitesu_, 2)) + 0.5*std::pow(-mobs__cell__CDC25_pSitesu_ + obs__cell__CDC25_pSitesu_, 2)/std::pow(sigma_obs__cell__CDC25_pSitesu_, 2);
            break;
        case 33:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__MASTL_Thr198u_, 2)) + 0.5*std::pow(-mobs__cell__MASTL_Thr198u_ + obs__cell__MASTL_Thr198u_, 2)/std::pow(sigma_obs__cell__MASTL_Thr198u_, 2);
            break;
        case 34:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__MASTL_Thr198p_, 2)) + 0.5*std::pow(-mobs__cell__MASTL_Thr198p_ + obs__cell__MASTL_Thr198p_, 2)/std::pow(sigma_obs__cell__MASTL_Thr198p_, 2);
            break;
        case 35:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67u_, 2)) + 0.5*std::pow(-mobs__cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67u_ + obs__cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67u_, 2)/std::pow(sigma_obs__cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67u_, 2);
            break;
        case 36:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67p_, 2)) + 0.5*std::pow(-mobs__cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67p_ + obs__cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67p_, 2)/std::pow(sigma_obs__cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67p_, 2);
            break;
        case 37:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__ENSA_ARPP19_PPP2R2B_1_Ser62_Ser67p__PPP2R2B_ENSA_ARPP19_1_, 2)) + 0.5*std::pow(-mobs__cell__ENSA_ARPP19_PPP2R2B_1_Ser62_Ser67p__PPP2R2B_ENSA_ARPP19_1_ + obs__cell__ENSA_ARPP19_PPP2R2B_1_Ser62_Ser67p__PPP2R2B_ENSA_ARPP19_1_, 2)/std::pow(sigma_obs__cell__ENSA_ARPP19_PPP2R2B_1_Ser62_Ser67p__PPP2R2B_ENSA_ARPP19_1_, 2);
            break;
        case 38:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__CCNE_promoter_E2F_, 2)) + 0.5*std::pow(-mobs__cell__CCNE_promoter_E2F_ + obs__cell__CCNE_promoter_E2F_, 2)/std::pow(sigma_obs__cell__CCNE_promoter_E2F_, 2);
            break;
        case 39:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__CCNA_promoter_E2F_, 2)) + 0.5*std::pow(-mobs__cell__CCNA_promoter_E2F_ + obs__cell__CCNA_promoter_E2F_, 2)/std::pow(sigma_obs__cell__CCNA_promoter_E2F_, 2);
            break;
        case 40:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__E2F_promoter_E2F_, 2)) + 0.5*std::pow(-mobs__cell__E2F_promoter_E2F_ + obs__cell__E2F_promoter_E2F_, 2)/std::pow(sigma_obs__cell__E2F_promoter_E2F_, 2);
            break;
        case 41:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__FBXO5_promoter_E2F_, 2)) + 0.5*std::pow(-mobs__cell__FBXO5_promoter_E2F_ + obs__cell__FBXO5_promoter_E2F_, 2)/std::pow(sigma_obs__cell__FBXO5_promoter_E2F_, 2);
            break;
        case 42:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__FOXM1_promoter_E2F_, 2)) + 0.5*std::pow(-mobs__cell__FOXM1_promoter_E2F_ + obs__cell__FOXM1_promoter_E2F_, 2)/std::pow(sigma_obs__cell__FOXM1_promoter_E2F_, 2);
            break;
        case 43:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__CCNE_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_, 2)) + 0.5*std::pow(-mobs__cell__CCNE_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_ + obs__cell__CCNE_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_, 2)/std::pow(sigma_obs__cell__CCNE_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_, 2);
            break;
        case 44:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__CCNA_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_, 2)) + 0.5*std::pow(-mobs__cell__CCNA_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_ + obs__cell__CCNA_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_, 2)/std::pow(sigma_obs__cell__CCNA_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_, 2);
            break;
        case 45:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__E2F_DBD_1_RB1_Ser332u__E2F_promoter_E2F_1_, 2)) + 0.5*std::pow(-mobs__cell__E2F_DBD_1_RB1_Ser332u__E2F_promoter_E2F_1_ + obs__cell__E2F_DBD_1_RB1_Ser332u__E2F_promoter_E2F_1_, 2)/std::pow(sigma_obs__cell__E2F_DBD_1_RB1_Ser332u__E2F_promoter_E2F_1_, 2);
            break;
        case 46:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__E2F_DBD_1_RB1_Ser332u__FBXO5_promoter_E2F_1_, 2)) + 0.5*std::pow(-mobs__cell__E2F_DBD_1_RB1_Ser332u__FBXO5_promoter_E2F_1_ + obs__cell__E2F_DBD_1_RB1_Ser332u__FBXO5_promoter_E2F_1_, 2)/std::pow(sigma_obs__cell__E2F_DBD_1_RB1_Ser332u__FBXO5_promoter_E2F_1_, 2);
            break;
        case 47:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_obs__cell__E2F_DBD_1_RB1_Ser332u__FOXM1_promoter_E2F_1_, 2)) + 0.5*std::pow(-mobs__cell__E2F_DBD_1_RB1_Ser332u__FOXM1_promoter_E2F_1_ + obs__cell__E2F_DBD_1_RB1_Ser332u__FOXM1_promoter_E2F_1_, 2)/std::pow(sigma_obs__cell__E2F_DBD_1_RB1_Ser332u__FOXM1_promoter_E2F_1_, 2);
            break;
    }
}

} // namespace amici
} // namespace model_cell_cycle_v3_0_0_simple