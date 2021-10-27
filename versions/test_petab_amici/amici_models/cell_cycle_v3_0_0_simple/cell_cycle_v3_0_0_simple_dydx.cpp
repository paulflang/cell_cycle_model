#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include <array>

#include "p.h"
#include "k.h"
#include "w.h"
#include "x.h"
#include "dwdx.h"

namespace amici {
namespace model_cell_cycle_v3_0_0_simple {

void dydx_cell_cycle_v3_0_0_simple(realtype *dydx, const realtype t, const realtype *x, const realtype *p, const realtype *k, const realtype *h, const realtype *w, const realtype *dwdx){
    dydx[0] = 1;
    dydx[49] = 1;
    dydx[98] = 1;
    dydx[147] = 1;
    dydx[196] = 1;
    dydx[245] = 1;
    dydx[294] = 1;
    dydx[343] = 1;
    dydx[392] = 1;
    dydx[441] = 1;
    dydx[490] = 1;
    dydx[539] = 1;
    dydx[588] = 1;
    dydx[637] = 1;
    dydx[686] = 1;
    dydx[735] = 1;
    dydx[784] = 1;
    dydx[833] = 1;
    dydx[882] = 1;
    dydx[931] = 1;
    dydx[980] = 1;
    dydx[1029] = 1;
    dydx[1078] = 1;
    dydx[1127] = 1;
    dydx[1176] = 1;
    dydx[1225] = 1;
    dydx[1274] = 1;
    dydx[1323] = 1;
    dydx[1372] = 1;
    dydx[1421] = 1;
    dydx[1470] = 1;
    dydx[1519] = 1;
    dydx[1568] = 1;
    dydx[1617] = 1;
    dydx[1666] = 1;
    dydx[1715] = 1;
    dydx[1764] = 1;
    dydx[1813] = 1;
    dydx[1862] = 1;
    dydx[1911] = 1;
    dydx[1960] = 1;
    dydx[2009] = 1;
    dydx[2058] = 1;
    dydx[2107] = 1;
    dydx[2156] = 1;
    dydx[2205] = 1;
    dydx[2254] = 1;
    dydx[2303] = 1;
}

} // namespace amici
} // namespace model_cell_cycle_v3_0_0_simple