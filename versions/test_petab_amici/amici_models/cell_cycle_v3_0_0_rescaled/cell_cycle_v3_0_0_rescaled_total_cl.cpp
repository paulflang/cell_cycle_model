#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include <array>

#include "x_rdata.h"

namespace amici {
namespace model_cell_cycle_v3_0_0_rescaled {

void total_cl_cell_cycle_v3_0_0_rescaled(realtype *total_cl, const realtype *x_rdata){
    total_cl[0] = _cell__CCND;
}

} // namespace amici
} // namespace model_cell_cycle_v3_0_0_rescaled