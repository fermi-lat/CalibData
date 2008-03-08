// $Header: /nfs/slac/g/glast/ground/cvs/CalibSvc/src/MootTds/MootTds.cxx,v 1.1 2007/10/05 18:47:56 jrb Exp $

/** @file MootData.cxx
    @author J. Bogart

    Non-inline implementation for moot-related objects in the tds.
*/

#include "CalibData/Moot/MootData.h"

namespace CalibData {
  // copy constructors
  MootBase::MootBase(const MootBase& other)  {
    m_type = other.m_type;
    m_subtype = other.m_subtype;
  }
  
  MootParmCol::MootParmCol(MOOTSUBTYPE sub, unsigned key, unsigned sz)  :
    MootBase(MOOTTYPE_parm, sub), m_key(key) {
    
    if (sz) {
      m_v.reserve(sz);
      
    }
    
  }
  MootParmCol::MootParmCol(const MootParmCol& other) : MootBase(other), 
                                                       m_key(other.m_key)
  {
    m_v = other.m_v;
  }
  
  MootParmCol::~MootParmCol() {
    m_v.clear();
  }
}

