// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/CalibData/Cal/Gain.h,v 1.4 2004/06/11 20:30:16 jrb Exp $
#ifndef CalibData_Gain_h
#define CalibData_Gain_h

#include "CalibData/RangeBase.h"

namespace CalibData {

  class Gain : public RangeBase {
  public:
    Gain(float gain = 0.0, float sig = 0.0) : m_gain(gain), m_sig(sig) {}
    ~Gain() {}

    float getGain() const {return m_gain;}
    float getSig() const {return m_sig;}

    virtual void update(RangeBase* other);

  private:
    float m_gain;
    float m_sig;

  };
}

#endif
