// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/CalibData/Cal/MuSlope.h,v 1.2 2003/03/22 01:38:22 jrb Exp $
#ifndef CalibData_MuSlope_h
#define CalibData_MuSlope_h

#include "CalibData/RangeBase.h"

namespace CalibData {

  class MuSlope : public RangeBase {
  public:
    MuSlope(float slope = 0.0, float error = 0.0) : m_muSlope(slope),
    m_error(error) {}
    ~MuSlope() {}

    float getSlope() {return m_muSlope;}
    float getError() {return m_error;}

    virtual void update(RangeBase* other);

  private:
    float m_muSlope;
    float m_error;

  };
}

#endif
