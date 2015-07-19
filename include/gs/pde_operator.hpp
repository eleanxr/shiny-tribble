#ifndef _gs_pde_operator_hpp
#define _gs_pde_operator_hpp

#include <vector>

namespace gs {

  class pde_operator {
  public:
    typedef std::vector<double> points_type;
    typedef points_type::size_type size_type;
    
    virtual ~pde_operator();

    virtual void init(double dt, double dx) = 0;

    virtual double apply(size_type x, const points_type& points) const = 0;

  protected:
    pde_operator();
  };
  
}

#endif
