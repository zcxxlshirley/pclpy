
#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>
#include <pcl/point_types.h>

namespace py = pybind11;
using namespace pybind11::literals;

PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
#include "../make_opaque_vectors.hpp"

#include "pcl_base.hpp"
#include "point_types_conversion.hpp"


void defineBaseClasses6(py::module &m) {
    definePclBaseClasses(m);
    definePointTypesConversionClasses(m);
}