#ifndef _gs_heat_operator_hpp
#define _gs_heat_operator_hpp

#include <gs/pde_operator.hpp>

namespace gs {

  class heat_operator : public pde_operator {
  public:
    heat_operator();
    virtual ~heat_operator();

    virtual void init(double dt, double dx) override;
    virtual double apply(size_type x, const points_type& points) const override;
  private:
    double m_alpha;
    double m_coeff;
  };
  
} // namespace gs

#endif
