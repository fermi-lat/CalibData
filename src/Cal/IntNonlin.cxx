// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/src/Cal/IntNonlin.cxx,v 1.1 2004/05/20 23:54:54 jrb Exp $
#include "CalibData/Cal/IntNonlin.h"

namespace CalibData {

  IntNonlin::IntNonlin(const std::vector<float>* values, float err) :
      m_values(0), m_error(err) {
    if (values != 0) {
      m_values = new std::vector<float>(*values);
    }
  }

  void IntNonlin::update(RangeBase* other)  {
    IntNonlin* otherIntNonlin = dynamic_cast<IntNonlin* > (other);
    
    // check that otherIntNonlin isn't 0 (dynamic cast worked)
    m_values = new std::vector<float>(*otherIntNonlin->m_values);
    m_error = otherIntNonlin->m_error;
  }
}
