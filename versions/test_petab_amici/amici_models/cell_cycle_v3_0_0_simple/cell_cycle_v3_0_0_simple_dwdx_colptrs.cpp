#include "amici/sundials_matrix_wrapper.h"
#include "sundials/sundials_types.h"

#include <array>
#include <algorithm>

namespace amici {
namespace model_cell_cycle_v3_0_0_simple {

static constexpr std::array<sunindextype, 49> dwdx_colptrs_cell_cycle_v3_0_0_simple_ = {
    0, 12, 21, 25, 48, 74, 82, 90, 96, 97, 107, 110, 114, 122, 125, 139, 144, 145, 155, 160, 169, 182, 185, 191, 197, 199, 200, 201, 203, 206, 212, 214, 216, 218, 219, 222, 223, 224, 226, 227, 228, 229, 230, 231, 233, 235, 237, 239, 241
};

void dwdx_colptrs_cell_cycle_v3_0_0_simple(SUNMatrixWrapper &dwdx){
    dwdx.set_indexptrs(gsl::make_span(dwdx_colptrs_cell_cycle_v3_0_0_simple_));
}
} // namespace amici
} // namespace model_cell_cycle_v3_0_0_simple