// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/CalibData/Cal/MuSlope.h,v 1.3 2004/06/11 20:30:16 jrb Exp $
#ifndef CalibData_MuSlope_h
#define CalibData_MuSlope_h

#include "CalibData/RangeBase.h"

namespace CalibData {

  class MuSlope : public RangeBase {
  public:
    MuSlope(float slope = 0.0, float error = 0.0) : m_muSlope(slope),
    m_error(error) {}
    ~MuSlope() {}

    float getSlope() const {return m_muSlope;}
    float getError() const {return m_error;}

    virtual void update(RangeBase* other);

  private:
    float m_muSlope;
    float m_error;

  };
}

#endif
