#include "amici/sundials_matrix_wrapper.h"
#include "sundials/sundials_types.h"

#include <array>
#include <algorithm>

namespace amici {
namespace model_cell_cycle_v3_0_0_simple {

static constexpr std::array<sunindextype, 86> dwdp_colptrs_cell_cycle_v3_0_0_simple_ = {
    0, 3, 6, 7, 13, 14, 15, 16, 18, 20, 21, 22, 26, 28, 32, 34, 35, 36, 40, 42, 43, 46, 49, 50, 51, 52, 53, 55, 56, 57, 60, 63, 66, 68, 70, 72, 74, 75, 76, 77, 78, 79, 80, 81, 82, 84, 88, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 109, 113, 114, 115, 121, 121, 125, 126, 127, 129, 133, 138, 143, 144, 145, 146, 147, 148, 150, 152, 154
};

void dwdp_colptrs_cell_cycle_v3_0_0_simple(SUNMatrixWrapper &dwdp){
    dwdp.set_indexptrs(gsl::make_span(dwdp_colptrs_cell_cycle_v3_0_0_simple_));
}
} // namespace amici
} // namespace model_cell_cycle_v3_0_0_simple