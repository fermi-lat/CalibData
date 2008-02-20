// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/src/Acd/AcdCalibImpl.cxx,v 1.2 2007/12/17 23:26:35 jrb Exp $


#include "CalibData/Acd/AcdPed.h"
#include "CalibData/Acd/AcdGain.h"
#include "CalibData/Acd/AcdVeto.h"
#include "CalibData/Acd/AcdCno.h"
#include "CalibData/Acd/AcdRange.h"
#include "CalibData/Acd/AcdHighRange.h"
#include "CalibData/Acd/AcdCoherentNoise.h"
#include "CalibData/Acd/AcdRibbon.h"

namespace CalibData {

  int buildAcdCalibDescriptions() {
    // careful, order matters within a calibration type

    // pedestals
    //    const AcdPedestalFitDesc& ped = AcdPedestalFitDesc::instance();
    AcdPedestalFitDesc::instance();
    // gains (aka mip peaks)
    //    const AcdGainFitDesc& gain = AcdGainFitDesc::instance();
    AcdGainFitDesc::instance();
    // veto set points 
    //    const AcdVetoFitDesc& veto = AcdVetoFitDesc::instance();
    AcdVetoFitDesc::instance();
    // cno set points
    //    const AcdCnoFitDesc& cno = AcdCnoFitDesc::instance();
    AcdCnoFitDesc::instance();
    // range crossover
    //    const AcdRangeFitDesc& range = AcdRangeFitDesc::instance();
    AcdRangeFitDesc::instance();
    // high range calibration
    //  const AcdHighRangeFitDesc& highRange = AcdHighRangeFitDesc::instance();
    AcdHighRangeFitDesc::instance();
    // coherent noise 
    //    const AcdCoherentNoiseFitDesc& coherentNois = 
    //            AcdCoherentNoiseFitDesc::instance();    
    AcdCoherentNoiseFitDesc::instance();    
    // ribbons
    AcdRibbonFitDesc::instance();    
    return 0;
  }
    
}

int dummy = CalibData::buildAcdCalibDescriptions();
