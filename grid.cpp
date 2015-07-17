#include <grid.hpp>

#include <vector>

namespace gs {

  grid::grid(const numeric_array& xs)
    : m_xs(xs) {
  }

  grid::~grid() {
  }

  const numeric_array& grid::xs() const {
    return m_xs;
  }
  
}
