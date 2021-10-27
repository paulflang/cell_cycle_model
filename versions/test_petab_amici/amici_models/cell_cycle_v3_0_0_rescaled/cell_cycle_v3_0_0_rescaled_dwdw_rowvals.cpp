#include "amici/sundials_matrix_wrapper.h"
#include "sundials/sundials_types.h"

#include <array>
#include <algorithm>

namespace amici {
namespace model_cell_cycle_v3_0_0_rescaled {

static constexpr std::array<sunindextype, 3> dwdw_rowvals_cell_cycle_v3_0_0_rescaled_ = {
    9, 10, 25
};

void dwdw_rowvals_cell_cycle_v3_0_0_rescaled(SUNMatrixWrapper &dwdw){
    dwdw.set_indexvals(gsl::make_span(dwdw_rowvals_cell_cycle_v3_0_0_rescaled_));
}
} // namespace amici
} // namespace model_cell_cycle_v3_0_0_rescaled