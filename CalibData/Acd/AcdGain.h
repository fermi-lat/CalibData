// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/CalibData/Cal/Gain.h,v 1.3 2003/03/22 01:38:22 jrb Exp $
#ifndef CalibData_AcdGain_h
#define CalibData_AcdGain_h

#include "CalibData/RangeBase.h"

namespace CalibData {

  class AcdGain : public RangeBase {
  public:
    AcdGain(float gain = 0.0, float sig = 0.0) : m_gain(gain), m_sig(sig) {}
    ~AcdGain() {}

    float getGain() {return m_gain;}
    float getSig() {return m_sig;}

    virtual void update(RangeBase* other);

  private:
    float m_gain;
    float m_sig;

  };
}

#endif