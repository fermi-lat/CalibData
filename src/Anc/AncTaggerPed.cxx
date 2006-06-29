// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/src/Acd/AcdPed.cxx,v 1.2 2006/04/08 21:40:01 jrb Exp $
#include "CalibData/Anc/AncTaggerPed.h"

namespace CalibData {

  void AncTaggerPed::update(RangeBase* other)  {
    AncTaggerPed* otherPed = dynamic_cast<AncTaggerPed* > (other);
    
    // check that otherPed isn't 0 (dynamic cast worked)
    m_val = otherPed->m_val;
    m_rNoise = otherPed->m_rNoise;
    m_sNoise = otherPed->m_sNoise;
    m_isBad = otherPed->m_isBad;
  }
}
