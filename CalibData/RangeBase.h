// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/CalibData/Cal/RangeBase.h,v 1.2 2003/03/25 21:00:01 jrb Exp $
#ifndef CalibData_RangeBase_h
#define CalibData_RangeBase_h
namespace CalibData {

  /** 
        Base class for per crystal-face-range Calorimeter calibration data
        or for per tile-pmt-range ACD calibration data
   */
  class RangeBase {

  public:
    RangeBase() {}
    virtual ~RangeBase() {}

    /// Derived classes will do a dynamic cast of argument, which 
    /// must be of same type, and then a deep copy.
    virtual void update(RangeBase* ) {}
    
  };

}
#endif
