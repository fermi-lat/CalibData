// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/CalibData/CalibTime.h,v 1.5 2004/07/12 18:16:01 jrb Exp $

#ifndef CalibData_CalibTime_h
#define CalibData_CalibTime_h
/** @class CalibTime.h
    Implements ITime interface and has facilities::Timestamp as base
    class.  Just need to implement a few more methods to satisfy
    ITime.

    Note facilities::Timestamp, hence CalibTime, has get methods for 
    several different time formats, including julian date, ascii string, 
    and (seconds, nanoseconds) since Jan. 1 1970.
*/
#include "facilities/Timestamp.h"
#include "GaudiKernel/Time.h" 

namespace CalibData {
  class CalibTime : //public ITime,
                    public facilities::Timestamp
{

  public:
    CalibTime();
    CalibTime(const facilities::Timestamp& stamp);
    CalibTime(double julianDate);

    // Need this one so that calibration objects can use CalibTime
    // objects internally to satisfy IValidity
    CalibTime(const Gaudi::Time& time);

    const Gaudi::Time getGaudiTime() const;
    
    /// absoluteTime, seconds, etc. are needed to satisfy ITime interface
    //ITime::AbsoluteTime absoluteTime() const;
    //ITime::DimensionedTime seconds() const;
    //ITime::DimensionedTime minutes() const {return seconds()/60.0;}
    //ITime::DimensionedTime hours() const {return seconds()/3600.0;}
    //ITime::DimensionedTime days() const {return seconds()/86400.0;}
    longlong seconds() const { return getGaudiTime().second(true); }
    int minutes() const { return getGaudiTime().minute(true); }
    int hours() const { return getGaudiTime().hour(true); }
    int days() const { return getGaudiTime().day(true); }

    /// Reimplement operations for ITime interface using 
    /// facilities::Timestamp implementation
    //bool              operator==(const ITime& other) const;

   // bool              operator!=( const ITime& other) const;

    //bool              operator<=( const ITime& other) const;

    //bool              operator>=( const ITime& other) const;

    //bool              operator< ( const ITime& other) const;

    //bool              operator> ( const ITime& other) const;
  
    // adding   -- doesn't make sense for timestamps
    //ITime&            operator+=(const ITime& other);
  
    // substraction  -- doesn't make sense for timestamps
    //ITime&            operator-=(const ITime& other);
      
    std::ostream& printOut(std::ostream&) const;
  };
}
#endif
