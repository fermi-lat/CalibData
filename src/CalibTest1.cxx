// $Header: /nfs/slac/g/glast/ground/cvs/GlastRelease-scons/CalibData/src/CalibTest1.cxx,v 1.6.22.1 2010/10/08 16:18:52 heather Exp $

/** @class CalibTest1
 *    Implementation of near-simplest-possible calibration TCDS class
 */

#include "CalibData/CalibTest1.h"
#include "GaudiKernel/MsgStream.h"

namespace CalibData {
  CalibTest1::CalibTest1(const std::string& name, int value, 
                         const Gaudi::Time& since, const Gaudi::Time& till, 
                         int serNo) :
    CalibBase(since, till, serNo), m_name(name), m_value(value)
  {
    //    m_me = this;
  }


  StatusCode CalibTest1::update(CalibBase& other, MsgStream* log) {
    // The following dynamic_cast has got to work
    CalibTest1& other1 = dynamic_cast<CalibTest1& >(other);

    CalibBase::update(other1, log);
    m_name = other1.m_name;
    m_value = other1.m_value;

    return StatusCode::SUCCESS;
  }

  std::string CalibTest1::getValueName() const {
    return m_name;
  }
  
}
