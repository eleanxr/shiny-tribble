
#include <gs/heat.hpp>
#include <gs/heat_operator.hpp>

int main(int argc, char * argv[]) {
    gs::heat_operator op;
    op.init(0.001, 0.05);
    gs::solve_heat(50, 0.001, 10, 0.05, op);
    return 0;
}
