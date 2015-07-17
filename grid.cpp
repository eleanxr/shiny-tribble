#include <grid.hpp>

#include <vector>

namespace gs {

  grid::grid(const numeric_array& xs, const numeric_array& ys)
    : m_xs(xs),
      m_ys(ys){
  }

  grid::~grid() {
  }

  const numeric_array& grid::xs() const {
    return m_xs;
  }

  const numeric_array& grid::ys() const {
    return m_ys;
  }
  
}
