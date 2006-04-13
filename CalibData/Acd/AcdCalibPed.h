// $Header: $
#ifndef CalibData_AcdCalibPed_h
#define CalibData_AcdCalibPed_h

#include "CalibData/Acd/AcdCalibBase.h"
#include "CalibData/Acd/AcdPed.h"
#include "CalibData/CalibModel.h"

namespace CalibData {

  class AcdCalibPed : public AcdCalibBase {

  public:
    AcdCalibPed(unsigned nFace=7, unsigned nRow=5, unsigned nCol=5, 
                unsigned nNA=11, unsigned nPmt=2);

    ~AcdCalibPed();

    /// Override putRange implementation in order to add consistency
    /// check
    bool putPmt(idents::AcdId id, unsigned pmt, RangeBase* data);

    bool putPmt(unsigned face, unsigned row, unsigned col, 
                unsigned pmt, RangeBase* data);

    virtual const CLID& clID() const {return classID(); }

    static const CLID& classID();

  };
}
#endif
