// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/CalibData/Cal/RangeBase.h,v 1.1 2003/02/25 06:19:50 jrb Exp $
#ifndef CalibData_RangeBase_h
#define CalibData_RangeBase_h
namespace CalibData {

  /** Base class for per crystal-face-range Calorimeter calibration data.
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
