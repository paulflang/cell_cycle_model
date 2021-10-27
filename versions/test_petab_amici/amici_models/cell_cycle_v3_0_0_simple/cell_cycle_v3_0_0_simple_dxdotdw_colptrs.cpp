#include "amici/sundials_matrix_wrapper.h"
#include "sundials/sundials_types.h"

#include <array>
#include <algorithm>

namespace amici {
namespace model_cell_cycle_v3_0_0_simple {

static constexpr std::array<sunindextype, 156> dxdotdw_colptrs_cell_cycle_v3_0_0_simple_ = {
    0, 0, 1, 4, 7, 8, 9, 10, 12, 14, 17, 20, 23, 26, 29, 32, 35, 38, 40, 42, 44, 46, 48, 50, 51, 53, 55, 57, 59, 61, 62, 63, 64, 65, 67, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 91, 94, 98, 102, 106, 110, 114, 118, 121, 124, 126, 127, 129, 130, 132, 134, 137, 140, 143, 146, 148, 150, 152, 153, 154, 155, 157, 159, 161, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 178, 180, 182, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 197, 198, 199, 201, 203, 204, 205, 208, 211, 213, 215, 217, 219, 221, 223, 225, 227, 229, 231, 233, 235, 237, 240, 241, 242, 245, 248, 251, 254, 257, 260, 263, 266, 269, 272, 275, 278, 281, 284, 287, 290, 293, 296, 299, 302, 305, 308, 311, 314, 317, 320, 323, 326
};

void dxdotdw_colptrs_cell_cycle_v3_0_0_simple(SUNMatrixWrapper &dxdotdw){
    dxdotdw.set_indexptrs(gsl::make_span(dxdotdw_colptrs_cell_cycle_v3_0_0_simple_));
}
} // namespace amici
} // namespace model_cell_cycle_v3_0_0_simple