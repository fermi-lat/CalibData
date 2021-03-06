// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/src/Acd/AcdCalibImpl.cxx,v 1.5 2008/08/06 19:57:40 echarles Exp $

#include "CalibData/Acd/AcdCalibObj.h"
#include "CalibData/Acd/AcdPed.h"
#include "CalibData/Acd/AcdGain.h"
#include "CalibData/Acd/AcdVeto.h"
#include "CalibData/Acd/AcdCno.h"
#include "CalibData/Acd/AcdRange.h"
#include "CalibData/Acd/AcdHighRange.h"
#include "CalibData/Acd/AcdCoherentNoise.h"
#include "CalibData/Acd/AcdRibbon.h"
#include "CalibData/Acd/AcdHighPed.h"
#include "CalibData/Acd/AcdCarbon.h"
#include "CalibData/Acd/AcdVetoFit.h"
#include "CalibData/Acd/AcdCnoFit.h"
#include "CalibData/Acd/AcdCheck.h"
#include "CalibData/Acd/AcdPE.h"

namespace CalibData {

  int buildAcdCalibDescriptions() {

    static bool built = false;
    if ( built ) return 0;
    built = true;

    // careful, order matters within a calibration type

    // pedestals
    AcdPedestalFitDesc::instance();
    // gains (aka mip peaks)
    AcdGainFitDesc::instance();
    // veto set points 
    AcdVetoFitDesc::instance();
    // cno set points
    AcdCnoFitDesc::instance();
    // range crossover
    AcdRangeFitDesc::instance();
    // high range calibration
    AcdHighRangeFitDesc::instance();
    // coherent noise 
    AcdCoherentNoiseFitDesc::instance();    
    // ribbons
    AcdRibbonFitDesc::instance();    
    // high range pedestals
    AcdHighPedestalFitDesc::instance();   
    // Carbon peak calibrations
    AcdCarbonFitDesc::instance();
    // Veto Fit parameters
    AcdVetoFitFitDesc::instance();
    // CNO Fit parameters
    AcdCnoFitFitDesc::instance();
    // Calibration checking
    AcdCheckDesc::instance();
    // Photon electrons/mip
    AcdPEFitDesc::instance();

    return 0;
  }
    
}

int dummy = CalibData::buildAcdCalibDescriptions();
