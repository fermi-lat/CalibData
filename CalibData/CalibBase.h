//$Header: /nfs/slac/g/glast/ground/cvs/CalibData/CalibData/CalibBase.h,v 1.1 2002/11/19 19:31:00 jrb Exp $
#ifndef CalibData_CalibBase_h
#define CalibData_CalibBase_h

/** @class CalibBase

   Used as a base for all objects in the calibration data store.
   Implement IValidity.

   Permits implementation of deep copy by means of virtual update
   method.  [Used in CalibMySQLCnvSvc::updateCalib]

   @author J. Bogart

*/

#include "GaudiKernel/DataObject.h"
#include "GaudiKernel/IValidity.h"
#include "GaudiKernel/ITime.h"


extern const CLID& CLID_Calib_CalibBase;

namespace CalibData {
  class CalibBase : public DataObject,
                    virtual public IValidity {
  public:
    CalibBase();
    CalibBase(const ITime& since, const ITime& till);
    
    CalibBase(CalibBase& obj);
    
    /// Following is intended for deep copy
    virtual void update(CalibBase& obj);
    
    virtual ~CalibBase();
    
    // Re-implemented from DataObject
    /// Class ID of this instance
    inline virtual const CLID& clID() const { return classID(); } 
    
    /// Class ID of this class
    inline static  const CLID& classID() { return CLID_Calib_CalibBase; };
    
  public:
    
    // Implementation of IValidity
    
    /// Check if the data object has a well defined validity range
    virtual bool isValid();
    
    /// Check if the data object is valid at the specified time
    virtual bool isValid(const ITime& t);
    
    /// Get start of validity
    virtual const ITime& validSince();
    
    /// Get end of validity
    virtual const ITime& validTill();
    
    /// Set validity range
    virtual void setValidity(const ITime& since, const ITime& till);  
    
    /// Set start of validity
    virtual void setValiditySince(const ITime& since);  
    
    /// Set end of validity
    virtual void setValidityTill(const ITime& till);   
    
    /// Update the validity range (foreseen for tree-like structures)
    virtual StatusCode updateValidity();
    
  private:
    
    // IValidity data
    
    /// Start of validity
    ITime* m_validSince;
    
    /// End of validity
    ITime* m_validTill;
    
  };

}
#endif
