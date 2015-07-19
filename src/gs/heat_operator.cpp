#include <gs/heat_operator.hpp>

namespace gs {

  heat_operator::heat_operator()
    : pde_operator()
  {
  }

  heat_operator::~heat_operator()
  {
  }

  void heat_operator::init(double dt, double dx)
  {
    // Fixed values
    m_coeff = dt / (dx * dx);
    m_alpha = 1.0;

  }

  double heat_operator::apply(size_type x, const points_type& points) const
  {
    return points[x] + m_alpha * m_coeff *
	    (points[x + 1] - 2 * points[x] + points[x - 1]);
  }
  
} // namespace gs
