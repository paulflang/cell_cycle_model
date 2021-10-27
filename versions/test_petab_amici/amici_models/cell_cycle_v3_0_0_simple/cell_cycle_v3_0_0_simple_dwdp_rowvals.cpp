#include "amici/sundials_matrix_wrapper.h"
#include "sundials/sundials_types.h"

#include <array>
#include <algorithm>

namespace amici {
namespace model_cell_cycle_v3_0_0_simple {

static constexpr std::array<sunindextype, 154> dwdp_rowvals_cell_cycle_v3_0_0_simple_ = {
    9, 10, 25, 11, 12, 26, 33, 13, 14, 15, 16, 27, 28, 29, 126, 31, 131, 132, 129, 130, 1, 4, 5, 6, 7, 8, 23, 24, 17, 18, 19, 20, 21, 22, 125, 69, 54, 55, 56, 57, 58, 59, 67, 60, 61, 64, 62, 63, 65, 66, 74, 30, 75, 77, 78, 79, 73, 44, 45, 71, 52, 53, 70, 72, 127, 128, 139, 140, 137, 138, 135, 136, 133, 134, 76, 32, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 123, 124, 120, 121, 122, 112, 111, 118, 119, 117, 114, 113, 116, 144, 143, 107, 108, 101, 102, 103, 104, 105, 106, 142, 141, 35, 36, 37, 38, 39, 40, 34, 41, 42, 43, 68, 80, 81, 82, 83, 84, 85, 86, 145, 147, 149, 151, 153, 146, 148, 150, 152, 154, 2, 3, 109, 110, 115, 46, 47, 48, 49, 50, 51
};

void dwdp_rowvals_cell_cycle_v3_0_0_simple(SUNMatrixWrapper &dwdp){
    dwdp.set_indexvals(gsl::make_span(dwdp_rowvals_cell_cycle_v3_0_0_simple_));
}
} // namespace amici
} // namespace model_cell_cycle_v3_0_0_simple