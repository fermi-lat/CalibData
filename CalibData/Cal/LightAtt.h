// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/CalibData/Cal/LightAtt.h,v 1.2 2004/06/11 20:30:16 jrb Exp $
#ifndef CalibData_LightAtt_h
#define CalibData_LightAtt_h

#include "CalibData/RangeBase.h"

namespace CalibData {

  class LightAtt : public RangeBase {
  public:
    LightAtt(float att = 0.0, float norm = 0.0) : m_lightAtt(att), m_lightNorm(norm) {}
    ~LightAtt() {}
    float getAtt() const { return m_lightAtt; }
    float getNorm() const { return m_lightNorm; }

    virtual void update(RangeBase* other);

  private:
    float m_lightAtt; 	//light attenuation factor
    float m_lightNorm;	//at Xtal middle point
  };
}
#endif
