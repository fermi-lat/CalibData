// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/src/Cal/LightAtt.cxx,v 1.1 2003/02/25 06:22:01 jrb Exp $
#include "CalibData/Cal/LightAtt.h"

namespace CalibData {

  void LightAtt::update(RangeBase* other)  {
    LightAtt* otherLightAtt = dynamic_cast<LightAtt* > (other);
    
    // check that otherLightAtt isn't 0 (dynamic cast worked)
    m_lightAtt = otherLightAtt->m_lightAtt;
    m_lightNorm = otherLightAtt->m_lightNorm;
  }
}
