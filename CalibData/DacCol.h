// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/CalibData/Cal/RangeBase.h,v 1.2 2003/03/25 21:00:01 jrb Exp $
#ifndef CalibData_DacCol_h
#define CalibData_DacCol_h
#include <vector>
namespace CalibData {

  /**   @class DacCol
      Keeps track of a collection of dac settings, typically used
      for collecting calibration data for a single range
   */
  class DacCol {

  public:
    DacCol(std::vector<unsigned>* vals=0);
    DacCol(std::vector<int>* vals); 
    ~DacCol() {}

    const std::vector<unsigned>* getDacs() const {return &m_dacs;}
    /// Deep copy.
    void update(const DacCol* other);

  private:
    std::vector<unsigned> m_dacs;
    
  };

}
#endif
