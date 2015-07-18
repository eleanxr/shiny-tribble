
#include <gs/heat.hpp>

int main(int argc, char * argv[]) {
  gs::solve_heat(10, 0.001, 10, 0.05);
  return 0;
}
