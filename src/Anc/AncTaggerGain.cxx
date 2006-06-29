// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/src/Acd/AcdPed.cxx,v 1.2 2006/04/08 21:40:01 jrb Exp $
#include "CalibData/Anc/AncTaggerGain.h"

namespace CalibData {

  void AncTaggerGain::update(RangeBase* other)  {
    AncTaggerGain* otherGain = dynamic_cast<AncTaggerGain* > (other);
    
    // check that otherGain isn't 0 (dynamic cast worked)
    m_val = otherGain->m_val;
    m_isBad = otherGain->m_isBad;
  }
}
