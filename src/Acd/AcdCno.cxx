// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/src/Acd/AcdGain.cxx,v 1.1 2004/06/11 20:31:43 jrb Exp $
#include "CalibData/Acd/AcdCno.h"

namespace CalibData {

  void AcdCno::update(RangeBase* other)  {
    AcdCno* otherCno = dynamic_cast<AcdCno* > (other);
    
    // check that otherCno isn't 0 (dynamic cast worked)
    m_cno = otherCno->m_cno;
    m_width = otherCno->m_width;
    m_status = otherCno->m_status;
  }
}
