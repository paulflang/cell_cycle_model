#include "cell_cycle_v3_0_0_rescaled.h"
#include <array>

namespace amici {

namespace model_cell_cycle_v3_0_0_rescaled {

std::array<const char*, 85> parameterNames = {
    "kPhRbD",
"kPhRbE",
"kDpRb",
"kPhRb",
"kSyCe1",
"kSyCe2",
"kDeCe",
"kDiE2fRb",
"kAsE2fRb",
"kSyE2f1",
"kSyE2f2",
"kDeE2f1",
"kDeE2f2",
"kPhE2f",
"kDpE2f2",
"kSyEmi1",
"kSyEmi2",
"kDeEmi1",
"kDeEmi2",
"kDeEmi3",
"kPhEmiA",
"kPhEmiB",
"kDpEmi",
"kSyCa1",
"kSyCa2",
"kDeCa1",
"kDeCa2",
"kDeCa3",
"kDpCdh",
"kPhCdhA",
"kPhCdhE",
"kPhCdhB",
"kDiACE",
"kAsACE",
"kDiACdh",
"kAsACdh",
"kPhCeA",
"kPhCeE",
"kPhFoxE",
"kPhFoxA",
"kPhFoxB",
"kDpFox",
"kSyCb1",
"kSyCb2",
"kDeCb1",
"kDeCb2",
"kDeCb3",
"kPhEnsa",
"kDpEnsa",
"kPhGw",
"kDpGw1",
"kDpGw2",
"kWee1",
"kWee2",
"kPhWeeA",
"kPhWeeB",
"kDpWee",
"kCdc25_1",
"kCdc25_2",
"kDpCdc25",
"kDipEB55",
"kAspEB55",
"kSyCdc_1",
"kSyCdc_2",
"kDeCdc_1",
"kDeCdc_2",
"kDipACdc",
"kAspACdc",
"kPhApcA",
"kPhApcB",
"kDpApc",
"kSyFox1",
"kSyFox2",
"kDeFox1",
"kDeFox2",
"kAsEPx",
"kDiEPx",
"kAsFPcb",
"kDiFPcb",
"kAsFPcdc",
"kDiFPcdc",
"kPhC25B",
"kPhCAEE",
"kPhCAEA",
"kPhCAEB",
};

std::array<const char*, 0> fixedParameterNames = {
    
};

std::array<const char*, 49> stateNames = {
    "_cell__CCND",
"_cell__CCNE",
"_cell__E2F_DBD_RB1_Ser332u_",
"_cell__E2F_DBD_RB1_Ser332p_",
"_cell__CCNA",
"_cell__CCNB_CDK1_Thr14_Tyr15u_",
"_cell__E2F_DBD_RB1_1_Ser332u__RB1_E2F_1_Ser807_Ser811u_",
"_cell__E2F_DBD_RB1_1_Ser332p__RB1_E2F_1_Ser807_Ser811u_",
"_cell__RB1_E2F_Ser807_Ser811u_",
"_cell__RB1_E2F_Ser807_Ser811p_",
"_cell__PPP2R2B_ENSA_ARPP19_",
"_cell__APC_FBXO5_FZR1_CDC20_Ser355u_",
"_cell__CDC20_APC_",
"_cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__CDC20_APC_1_",
"_cell__APC_FBXO5_FZR1_CDC20_Ser355p_",
"_cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_",
"_cell__FZR1_APC_FBXO5_nTermu_",
"_cell__FZR1_APC_FBXO5_nTermp_",
"_cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355u__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_",
"_cell__FBXO5_APC_FZR1_Ser182u_",
"_cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355p__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_",
"_cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__FZR1_APC_1_FBXO5_nTermu_",
"_cell__FBXO5_APC_FZR1_Ser182p_",
"_cell__FOXM1_DBD_Thr600u_",
"_cell__FOXM1_DBD_Thr600p_",
"_cell__CCNB_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_",
"_cell__CCNB_promoter_FOXM1_",
"_cell__CDC20_promoter_FOXM1_",
"_cell__CDC20_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_",
"_cell__WEE1_Ser123u_",
"_cell__CCNB_CDK1_Thr14_Tyr15p_",
"_cell__WEE1_Ser123p_",
"_cell__CDC25_pSitesp_",
"_cell__CDC25_pSitesu_",
"_cell__MASTL_Thr198u_",
"_cell__MASTL_Thr198p_",
"_cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67u_",
"_cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67p_",
"_cell__ENSA_ARPP19_PPP2R2B_1_Ser62_Ser67p__PPP2R2B_ENSA_ARPP19_1_",
"_cell__CCNE_promoter_E2F_",
"_cell__CCNA_promoter_E2F_",
"_cell__E2F_promoter_E2F_",
"_cell__FBXO5_promoter_E2F_",
"_cell__FOXM1_promoter_E2F_",
"_cell__CCNE_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_",
"_cell__CCNA_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_",
"_cell__E2F_DBD_1_RB1_Ser332u__E2F_promoter_E2F_1_",
"_cell__E2F_DBD_1_RB1_Ser332u__FBXO5_promoter_E2F_1_",
"_cell__E2F_DBD_1_RB1_Ser332u__FOXM1_promoter_E2F_1_",
};

std::array<const char*, 48> observableNames = {
    "",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
};

std::array<const char*, 85> parameterIds = {
    "kPhRbD",
"kPhRbE",
"kDpRb",
"kPhRb",
"kSyCe1",
"kSyCe2",
"kDeCe",
"kDiE2fRb",
"kAsE2fRb",
"kSyE2f1",
"kSyE2f2",
"kDeE2f1",
"kDeE2f2",
"kPhE2f",
"kDpE2f2",
"kSyEmi1",
"kSyEmi2",
"kDeEmi1",
"kDeEmi2",
"kDeEmi3",
"kPhEmiA",
"kPhEmiB",
"kDpEmi",
"kSyCa1",
"kSyCa2",
"kDeCa1",
"kDeCa2",
"kDeCa3",
"kDpCdh",
"kPhCdhA",
"kPhCdhE",
"kPhCdhB",
"kDiACE",
"kAsACE",
"kDiACdh",
"kAsACdh",
"kPhCeA",
"kPhCeE",
"kPhFoxE",
"kPhFoxA",
"kPhFoxB",
"kDpFox",
"kSyCb1",
"kSyCb2",
"kDeCb1",
"kDeCb2",
"kDeCb3",
"kPhEnsa",
"kDpEnsa",
"kPhGw",
"kDpGw1",
"kDpGw2",
"kWee1",
"kWee2",
"kPhWeeA",
"kPhWeeB",
"kDpWee",
"kCdc25_1",
"kCdc25_2",
"kDpCdc25",
"kDipEB55",
"kAspEB55",
"kSyCdc_1",
"kSyCdc_2",
"kDeCdc_1",
"kDeCdc_2",
"kDipACdc",
"kAspACdc",
"kPhApcA",
"kPhApcB",
"kDpApc",
"kSyFox1",
"kSyFox2",
"kDeFox1",
"kDeFox2",
"kAsEPx",
"kDiEPx",
"kAsFPcb",
"kDiFPcb",
"kAsFPcdc",
"kDiFPcdc",
"kPhC25B",
"kPhCAEE",
"kPhCAEA",
"kPhCAEB",
};

std::array<const char*, 0> fixedParameterIds = {
    
};

std::array<const char*, 49> stateIds = {
    "_cell__CCND",
"_cell__CCNE",
"_cell__E2F_DBD_RB1_Ser332u_",
"_cell__E2F_DBD_RB1_Ser332p_",
"_cell__CCNA",
"_cell__CCNB_CDK1_Thr14_Tyr15u_",
"_cell__E2F_DBD_RB1_1_Ser332u__RB1_E2F_1_Ser807_Ser811u_",
"_cell__E2F_DBD_RB1_1_Ser332p__RB1_E2F_1_Ser807_Ser811u_",
"_cell__RB1_E2F_Ser807_Ser811u_",
"_cell__RB1_E2F_Ser807_Ser811p_",
"_cell__PPP2R2B_ENSA_ARPP19_",
"_cell__APC_FBXO5_FZR1_CDC20_Ser355u_",
"_cell__CDC20_APC_",
"_cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__CDC20_APC_1_",
"_cell__APC_FBXO5_FZR1_CDC20_Ser355p_",
"_cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_",
"_cell__FZR1_APC_FBXO5_nTermu_",
"_cell__FZR1_APC_FBXO5_nTermp_",
"_cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355u__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_",
"_cell__FBXO5_APC_FZR1_Ser182u_",
"_cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355p__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_",
"_cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__FZR1_APC_1_FBXO5_nTermu_",
"_cell__FBXO5_APC_FZR1_Ser182p_",
"_cell__FOXM1_DBD_Thr600u_",
"_cell__FOXM1_DBD_Thr600p_",
"_cell__CCNB_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_",
"_cell__CCNB_promoter_FOXM1_",
"_cell__CDC20_promoter_FOXM1_",
"_cell__CDC20_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_",
"_cell__WEE1_Ser123u_",
"_cell__CCNB_CDK1_Thr14_Tyr15p_",
"_cell__WEE1_Ser123p_",
"_cell__CDC25_pSitesp_",
"_cell__CDC25_pSitesu_",
"_cell__MASTL_Thr198u_",
"_cell__MASTL_Thr198p_",
"_cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67u_",
"_cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67p_",
"_cell__ENSA_ARPP19_PPP2R2B_1_Ser62_Ser67p__PPP2R2B_ENSA_ARPP19_1_",
"_cell__CCNE_promoter_E2F_",
"_cell__CCNA_promoter_E2F_",
"_cell__E2F_promoter_E2F_",
"_cell__FBXO5_promoter_E2F_",
"_cell__FOXM1_promoter_E2F_",
"_cell__CCNE_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_",
"_cell__CCNA_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_",
"_cell__E2F_DBD_1_RB1_Ser332u__E2F_promoter_E2F_1_",
"_cell__E2F_DBD_1_RB1_Ser332u__FBXO5_promoter_E2F_1_",
"_cell__E2F_DBD_1_RB1_Ser332u__FOXM1_promoter_E2F_1_",
};

std::array<const char*, 48> observableIds = {
    "obs__cell__CCNE",
"obs__cell__E2F_DBD_RB1_Ser332u_",
"obs__cell__E2F_DBD_RB1_Ser332p_",
"obs__cell__CCNA",
"obs__cell__CCNB_CDK1_Thr14_Tyr15u_",
"obs__cell__E2F_DBD_RB1_1_Ser332u__RB1_E2F_1_Ser807_Ser811u_",
"obs__cell__E2F_DBD_RB1_1_Ser332p__RB1_E2F_1_Ser807_Ser811u_",
"obs__cell__RB1_E2F_Ser807_Ser811u_",
"obs__cell__RB1_E2F_Ser807_Ser811p_",
"obs__cell__PPP2R2B_ENSA_ARPP19_",
"obs__cell__APC_FBXO5_FZR1_CDC20_Ser355u_",
"obs__cell__CDC20_APC_",
"obs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__CDC20_APC_1_",
"obs__cell__APC_FBXO5_FZR1_CDC20_Ser355p_",
"obs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355u__FZR1_APC_1_FBXO5_nTermu_",
"obs__cell__FZR1_APC_FBXO5_nTermu_",
"obs__cell__FZR1_APC_FBXO5_nTermp_",
"obs__cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355u__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_",
"obs__cell__FBXO5_APC_FZR1_Ser182u_",
"obs__cell__APC_FBXO5_1_FZR1_CDC20_2_Ser355p__FBXO5_APC_1_FZR1_3_Ser182u__FZR1_APC_2_FBXO5_3_nTermu_",
"obs__cell__APC_FBXO5_FZR1_CDC20_1_Ser355p__FZR1_APC_1_FBXO5_nTermu_",
"obs__cell__FBXO5_APC_FZR1_Ser182p_",
"obs__cell__FOXM1_DBD_Thr600u_",
"obs__cell__FOXM1_DBD_Thr600p_",
"obs__cell__CCNB_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_",
"obs__cell__CCNB_promoter_FOXM1_",
"obs__cell__CDC20_promoter_FOXM1_",
"obs__cell__CDC20_promoter_FOXM1_1__FOXM1_DBD_1_Thr600p_",
"obs__cell__WEE1_Ser123u_",
"obs__cell__CCNB_CDK1_Thr14_Tyr15p_",
"obs__cell__WEE1_Ser123p_",
"obs__cell__CDC25_pSitesp_",
"obs__cell__CDC25_pSitesu_",
"obs__cell__MASTL_Thr198u_",
"obs__cell__MASTL_Thr198p_",
"obs__cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67u_",
"obs__cell__ENSA_ARPP19_PPP2R2B_Ser62_Ser67p_",
"obs__cell__ENSA_ARPP19_PPP2R2B_1_Ser62_Ser67p__PPP2R2B_ENSA_ARPP19_1_",
"obs__cell__CCNE_promoter_E2F_",
"obs__cell__CCNA_promoter_E2F_",
"obs__cell__E2F_promoter_E2F_",
"obs__cell__FBXO5_promoter_E2F_",
"obs__cell__FOXM1_promoter_E2F_",
"obs__cell__CCNE_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_",
"obs__cell__CCNA_promoter_E2F_1__E2F_DBD_1_RB1_Ser332u_",
"obs__cell__E2F_DBD_1_RB1_Ser332u__E2F_promoter_E2F_1_",
"obs__cell__E2F_DBD_1_RB1_Ser332u__FBXO5_promoter_E2F_1_",
"obs__cell__E2F_DBD_1_RB1_Ser332u__FOXM1_promoter_E2F_1_",
};


} // namespace model_cell_cycle_v3_0_0_rescaled

} // namespace amici
