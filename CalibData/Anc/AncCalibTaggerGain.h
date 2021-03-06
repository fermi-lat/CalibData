// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/CalibData/Acd/AcdCalibPed.h,v 1.2 2006/04/08 21:40:01 jrb Exp $
#ifndef CalibData_AncCalibTaggerGain_h
#define CalibData_AncCalibTaggerGain_h

#include "CalibData/Anc/AncCalibBase.h"
#include "CalibData/Anc/AncTaggerGain.h"
#include "CalibData/CalibModel.h"

namespace CalibData {

  class AncCalibTaggerGain : public AncCalibBase {

  public:
    AncCalibTaggerGain(unsigned nMod=4, unsigned nLay=2, unsigned nChan=384);

    ~AncCalibTaggerGain();

    /// Override putRange implementation in order to add consistency
    /// check
    bool putChan(unsigned iMod, unsigned iLay, unsigned iChan, 
                 RangeBase* data);

    virtual const CLID& clID() const {return classID(); }

    static const CLID& classID();

  };
}
#endif
