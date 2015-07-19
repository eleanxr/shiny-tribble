#include <gs/heat.hpp>

#include <algorithm>
#include <iostream>
#include <vector>
#include <iterator>
#include <fstream>

namespace gs {

void solve_heat(double t, double dt, double x, double dx, const pde_operator& op) {
  const std::size_t x_length = std::size_t(x / dx);
  
  std::vector<double> u_old(x_length);
  std::vector<double> u(x_length);

  // Boundary conditions
  u_old[0] = 1.0;
  u_old[u_old.size() - 1] = 1.0;
  u[0] = 1.0;
  u[u.size() - 1] = 1.0;
  
  // Initial conditions.
  std::fill(u_old.begin() + 1, u_old.end() - 1, 0.0);

  // Simple text output for now
  std::ofstream out("out.dat");
  
  // Time
  for (double current_time = 0.0; current_time < t; current_time += dt) {
    std::cout << "t = " << current_time << std::endl;

    // Space
    for (std::size_t x = 1; x < u.size() - 1; x++) {
        u[x] = op.apply(x, u_old);
    }

    // Save current step
    std::ostream_iterator<double> out_it(out, " ");
    std::copy(u.begin(), u.end(), out_it);
    out << std::endl;
    
    // Swap old for new (eliminate copy later with ring buffer)
    std::copy(u.begin(), u.end(), u_old.begin());
  }
}

} // namespace gs
