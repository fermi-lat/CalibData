// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/src/Cal/CalCalibGain.cxx,v 1.1 2003/02/25 06:22:01 jrb Exp $

#include "CalibData/Cal/CalCalibGain.h"
#include "CalibData/CalibModel.h"

namespace CalibData {

  const CLID& CalCalibGain::classID()   {return CLID_Calib_CAL_ElecGain;}

  bool CalCalibGain::putRange(idents::CalXtalId id, unsigned range, 
                             unsigned face, RangeBase* data) {
    if (!dynamic_cast<Gain* >(data)) return false;

    // Otherwise go ahead and let base class handle it
    return CalCalibBase::putRange(id, range, face, data);
  }
  bool CalCalibGain::putRange(unsigned towerRow, unsigned towerCol, 
                              unsigned layer, unsigned xtal, unsigned range,
                              unsigned face, RangeBase* data) {
    if (!dynamic_cast<Gain* >(data)) return false;

    // Otherwise go ahead and let base class handle it
    return CalCalibBase::putRange(towerRow, towerCol, layer, xtal,
                                  range, face, data);
  }

}
