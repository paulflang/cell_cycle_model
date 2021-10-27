#include "amici/sundials_matrix_wrapper.h"
#include "sundials/sundials_types.h"

#include <array>
#include <algorithm>

namespace amici {
namespace model_cell_cycle_v3_0_0_simple {

static constexpr std::array<sunindextype, 3> dwdw_rowvals_cell_cycle_v3_0_0_simple_ = {
    9, 10, 25
};

void dwdw_rowvals_cell_cycle_v3_0_0_simple(SUNMatrixWrapper &dwdw){
    dwdw.set_indexvals(gsl::make_span(dwdw_rowvals_cell_cycle_v3_0_0_simple_));
}
} // namespace amici
} // namespace model_cell_cycle_v3_0_0_simple