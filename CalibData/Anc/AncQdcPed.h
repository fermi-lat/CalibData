// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/CalibData/Anc/AncQdcPed.h,v 1.1 2006/06/28 23:50:10 jrb Exp $
#ifndef CalibData_AncQdcPed_h
#define CalibData_AncQdcPed_h

#include "CalibData/RangeBase.h"

namespace CalibData {

  class AncQdcPed : public RangeBase {
  public:
    AncQdcPed(float val = 0.0, float rms=0.0, unsigned isBad=0) : 
      m_val(val), m_rms(rms), m_isBad(isBad) {}
    ~AncQdcPed() {}

    float getVal() const {return m_val;}
    float getRms() const {return m_rms;}
    int getIsBad() const {return m_isBad;}
    virtual void update(RangeBase* other);

  private:
    float m_val;
    float m_rms;
    unsigned m_isBad;
  };
}

#endif
