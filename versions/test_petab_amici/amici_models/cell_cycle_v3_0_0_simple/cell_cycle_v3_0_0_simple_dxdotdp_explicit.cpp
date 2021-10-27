#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include <array>

#include "p.h"
#include "k.h"
#include "w.h"
#include "x.h"
#include "dxdotdp_explicit.h"

namespace amici {
namespace model_cell_cycle_v3_0_0_simple {

void dxdotdp_explicit_cell_cycle_v3_0_0_simple(realtype *dxdotdp_explicit, const realtype t, const realtype *x, const realtype *p, const realtype *k, const realtype *h, const realtype *w){
}

} // namespace amici
} // namespace model_cell_cycle_v3_0_0_simple