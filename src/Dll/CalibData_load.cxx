/** 
* @file CalibData_load.cpp
* @brief This is needed for forcing the linker to load all components
* of the library.
*
*  $Header: /nfs/slac/g/glast/ground/cvs/AcdRecon/src/Dll/AcdRecon_load.cxx,v 1.1.1.1 2002/06/07 21:56:40 heather Exp $
*/

#include "GaudiKernel/DeclareFactoryEntries.h"

DECLARE_FACTORY_ENTRIES(CalibData) {
  //    DECLARE_ALGORITHM( AcdReconAlg );
  //  DECLARE_ALGORITHM( AcdDisplay );
} 
