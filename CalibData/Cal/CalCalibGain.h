// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/CalibData/Cal/CalCalibGain.h,v 1.3 2003/02/27 01:02:24 jrb Exp $
#ifndef CalibData_CalCalibGain_h
#define CalibData_CalCalibGain_h

#include "CalibData/Cal/CalCalibBase.h"
#include "CalibData/Cal/Gain.h"
#include "CalibData/CalibModel.h"

namespace CalibData {

  class CalCalibGain : public CalCalibBase {

  public:
    CalCalibGain(unsigned nTowerRow=4, unsigned nTowerCol=4, 
                 unsigned nLayer=8, 
                 unsigned nXtal=12, unsigned nFace=2, unsigned nRange=4);

    ~CalCalibGain();

    /// Override putRange implementation in order to add consistency
    /// check
    bool putRange(idents::CalXtalId id, unsigned range, 
                  unsigned face, RangeBase* data);

    bool putRange(unsigned towerRow, unsigned towerCol, 
                  unsigned layer, unsigned xtal, unsigned range,
                  unsigned face, RangeBase* data);

    virtual const CLID& clID() const {return classID(); }

    static const CLID& classID();


  };

}
#endif
