// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/src/CalibModelSvc.cxx,v 1.1 2002/11/26 18:20:50 jrb Exp $

#include "CalibData/CalibModelSvc.h"
#include "CalibData/CalibModel.h"

// extern const CLID& CLID_Calib_CalibCLIDNode;

namespace CalibData {
  const std::vector<CalibModelSvc::CalibPair>& CalibModelSvc::getPairs() 
    const {
    return pairs;
  }

  CLID CalibModelSvc::getCLIDNodeCLID() const {
    return CLID_Calib_CalibCLIDNode;
  }
}
