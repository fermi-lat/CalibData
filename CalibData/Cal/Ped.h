// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/CalibData/Cal/Ped.h,v 1.3 2004/02/17 17:57:16 jrb Exp $
#ifndef CalibData_Ped_h
#define CalibData_Ped_h

#include "CalibData/RangeBase.h"

namespace CalibData {

  class Ped : public RangeBase {
  public:
    Ped(float av = 0.0, float sig = 0.0, float cosAngle=0.0) 
      : m_pedAvr(av), m_pedSig(sig), m_pedCosAngle(cosAngle) {}
    ~Ped() {}
    float getAvr() {return m_pedAvr;}
    float getSig() {return m_pedSig;}
    float getCosAngle() {return m_pedCosAngle;}

    virtual void update(RangeBase* other);

  private:
    float m_pedAvr;
    float m_pedSig;
    float m_pedCosAngle;
  };
}
#endif
