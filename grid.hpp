#include <vector>

namespace gs {

  typedef std::vector<double> numeric_array;

  class grid {
  public:
    grid(const numeric_array& xs, const numeric_array& ys);
    ~grid();

    const numeric_array& xs() const;
    const numeric_array& ys() const;

    
  private:
    const numeric_array m_xs;
    const numeric_array m_ys;
  };
  
}
