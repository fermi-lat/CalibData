// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/src/Cal/MuSlope.cxx,v 1.1 2003/03/21 00:03:49 jrb Exp $
#include "CalibData/Cal/MuSlope.h"

namespace CalibData {

  void MuSlope::update(RangeBase* other)  {
    MuSlope* otherMuSlope = dynamic_cast<MuSlope* > (other);
    
    // check that otherMuSlope isn't 0 (dynamic cast worked)
    m_muSlope = otherMuSlope->m_muSlope;
    m_error = otherMuSlope->m_error;
  }
}
