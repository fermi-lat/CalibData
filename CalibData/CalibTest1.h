// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/CalibData/CalibTest1.h,v 1.4 2003/01/16 20:14:24 jrb Exp $
#ifndef CalibData_CalibTest1_h
#define CalibData_CalibTest1_h

/** @class CalibTest1  

  Very simple calibration data-like class to be used for testing 
  calibration infrastructure

  @author J. Bogart
*/

#include "CalibData/CalibBase.h"
#include "CalibData/CalibModel.h"
// extern const CLID& CLID_Calib_CalibTest1;


namespace CalibData {
  class CalibTest1 : public CalibBase {
  public:
    CalibTest1(const std::string& name, int value, 
               const ITime& since, const ITime& till, int serNo = -1);

    CalibTest1(const CalibTest1& other);

    virtual ~CalibTest1() {}

    // Re-implemented from DataObject
    inline virtual const CLID& clID() const { return classID(); } 
    
    inline static  const CLID& classID() { return CLID_Calib_CalibTest1; };


    // Re-implemented from CalibBase
    virtual void    update(CalibBase& other);

    std::string getValueName() const;
    int         getValue() const {return m_value;}

  protected:

  private:
    std::string m_name;
    int         m_value;
  };
}


#endif
