// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/src/Cal/Gain.cxx,v 1.1 2003/02/25 06:22:01 jrb Exp $
#include "CalibData/Cal/MuSlope.h"

namespace CalibData {

  void MuSlope::update(RangeBase* other)  {
    MuSlope* otherMuSlope = dynamic_cast<MuSlope* > (other);
    
    // check that otherMuSlope isn't 0 (dynamic cast worked)
    m_muSlope = otherMuSlope->m_muSlope;
  }
}
