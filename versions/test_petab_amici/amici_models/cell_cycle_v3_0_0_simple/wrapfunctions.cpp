#include "amici/model.h"
#include "wrapfunctions.h"
#include "cell_cycle_v3_0_0_simple.h"

namespace amici {
namespace generic_model {

std::unique_ptr<amici::Model> getModel() {
    return std::unique_ptr<amici::Model>(
        new amici::model_cell_cycle_v3_0_0_simple::Model_cell_cycle_v3_0_0_simple());
}


} // namespace generic_model

} // namespace amici
