// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/src/Cal/Ped.cxx,v 1.1 2003/02/25 06:22:01 jrb Exp $
#include "CalibData/Cal/Ped.h"

namespace CalibData {

  void Ped::update(RangeBase* other)  {
    Ped* otherPed = dynamic_cast<Ped* > (other);
    
    // check that otherPed isn't 0 (dynamic cast worked)
    m_pedAvr = otherPed->m_pedAvr;
    m_pedSig = otherPed->m_pedSig;
    m_pedSig = otherPed->m_pedSig;
    m_pedCosAngle = otherPed->m_pedCosAngle;
  }
}
