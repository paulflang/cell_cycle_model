#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include <array>

#include "tcl.h"
#include "p.h"
#include "k.h"
#include "w.h"
#include "x.h"
#include "dwdw.h"

namespace amici {
namespace model_cell_cycle_v3_0_0_simple {

void dwdw_cell_cycle_v3_0_0_simple(realtype *dwdw, const realtype t, const realtype *x, const realtype *p, const realtype *k, const realtype *h, const realtype *w, const realtype *tcl){
    dflux_r8_d_cell__CCND = _cell__E2F_DBD_RB1_1_Ser332u__RB1_E2F_1_Ser807_Ser811u_*kPhRbD;  // dwdw[0]
    dflux_r9_d_cell__CCND = _cell__E2F_DBD_RB1_1_Ser332p__RB1_E2F_1_Ser807_Ser811u_*kPhRbD;  // dwdw[1]
    dflux_r24_d_cell__CCND = _cell__RB1_E2F_Ser807_Ser811u_*kPhRbD;  // dwdw[2]
}

} // namespace amici
} // namespace model_cell_cycle_v3_0_0_simple