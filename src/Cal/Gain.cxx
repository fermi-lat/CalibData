// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/src/Cal/Gain.cxx,v 1.1 2003/02/25 06:22:01 jrb Exp $
#include "CalibData/Cal/Gain.h"

namespace CalibData {

  void Gain::update(RangeBase* other)  {
    Gain* otherGain = dynamic_cast<Gain* > (other);
    
    // check that otherGain isn't 0 (dynamic cast worked)
    m_gain = otherGain->m_gain;
    m_sig = otherGain->m_sig;
  }
}
