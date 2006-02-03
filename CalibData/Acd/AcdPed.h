// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/CalibData/Acd/AcdPed.h,v 1.1 2004/06/11 20:28:46 jrb Exp $
#ifndef CalibData_AcdPed_h
#define CalibData_AcdPed_h

#include "CalibData/RangeBase.h"

namespace CalibData {

  class AcdPed : public RangeBase {
  public:
    AcdPed(float ped = 0.0, float sig = 0.0) : m_ped(ped), m_sig(sig) {}
    ~AcdPed() {}

    float getPed() const {return m_ped;}
    float getSig() const {return m_sig;}

    virtual void update(RangeBase* other);

  private:
    float m_ped;
    float m_sig;

  };
}

#endif
