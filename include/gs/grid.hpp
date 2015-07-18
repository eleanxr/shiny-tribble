#include <vector>

namespace gs {

  typedef std::vector<double> numeric_array;

  class grid {
  public:
    grid(const numeric_array& xs);
    ~grid();

    const numeric_array& xs() const;
    
  private:
    const numeric_array m_xs;
  };
  
}
