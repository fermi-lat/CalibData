// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/src/Cal/CalCalibGain.cxx,v 1.2 2003/02/25 07:12:05 jrb Exp $

#include "CalibData/Cal/CalCalibGain.h"
#include "CalibData/Cal/CalFinder.h"
#include "CalibData/CalibModel.h"

namespace CalibData {

  CalCalibGain::CalCalibGain(unsigned nTowerRow, unsigned nTowerCol, 
                             unsigned nLayer, unsigned nXtal, 
                             unsigned nFace, unsigned nRange) :
    CalCalibBase(nTowerRow, nTowerCol, nLayer, nXtal, nFace, nRange) {
    unsigned ix = 0;
    unsigned size = m_finder->getSize();

    for (ix = 0; ix < size; ix++) {
      (*m_pR)[ix] = new Gain(0.0);
    }
  }

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
