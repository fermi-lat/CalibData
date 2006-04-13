// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/src/Acd/AcdPed.cxx,v 1.2 2006/04/08 21:40:01 jrb Exp $
#include "CalibData/Acd/AcdPed.h"

namespace CalibData {

  void AcdPed::update(RangeBase* other)  {
    AcdPed* otherPed = dynamic_cast<AcdPed* > (other);
    
    // check that otherPed isn't 0 (dynamic cast worked)
    m_mean = otherPed->m_mean;
    m_width = otherPed->m_width;
    m_status = otherPed->m_status;
  }
}
