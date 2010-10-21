// $Header: /nfs/slac/g/glast/ground/cvs/GlastRelease-scons/CalibData/src/CalibTime.cxx,v 1.4.658.2 2010/10/18 02:47:55 heather Exp $
#include "CalibData/CalibTime.h"

namespace {
  static longlong billion = 1000000000;
}
namespace CalibData {
  using facilities::Timestamp;

  CalibTime::CalibTime() : Timestamp() {
    m_gtime = Gaudi::Time(this->getClibTime(), this->getNano());
  }

  CalibTime::CalibTime(const Timestamp& stamp) :
    facilities::Timestamp(stamp) {
    m_gtime = Gaudi::Time(this->getClibTime(), this->getNano());
  }

  CalibTime::CalibTime(double julianDate) : facilities::Timestamp(julianDate)
  {}

  // Note Gaudi::Time months have range [0, 11]; 
  // facilities::Timestamp uses [1,12]
  CalibTime::CalibTime(const Gaudi::Time &time) : m_gtime(time),
  facilities::Timestamp(time.year(false),time.month(false) + 1,
                        time.day(false),time.hour(false),time.minute(false),
                        time.second(false),time.nsecond()) 
  {}

  const Gaudi::Time& CalibTime::getGaudiTime() const {
    return m_gtime;
  }

  std::ostream& CalibTime::printOut(std::ostream& o) const {
    return o << getString();
  }
}

