#include <pybind11/eigen.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "integrator.hpp"

namespace py = pybind11;

PYBIND11_MODULE(_core, m) {
  /// ... Fill me in!
  m.def("HarmonicOscillator", &HarmonicOscillator, R"pbdoc(
    A harmonico oscillator class
    )pbdoc");
}
