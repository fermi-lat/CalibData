// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/src/Cal/CalCalibBase.cxx,v 1.1 2003/02/25 06:22:01 jrb Exp $

#include "CalibData/Cal/CalFinder.h"
#include "CalibData/Cal/RangeBase.h" 
#include "CalibData/Cal/CalCalibBase.h"
#include "GaudiKernel/MsgStream.h"

namespace CalibData {

  const CLID CalCalibBase::noCLID = 0;
  const CLID& CalCalibBase::classID() {return noCLID;}
  CalCalibBase::CalCalibBase(unsigned nTowerRow, unsigned nTowerCol, 
                             unsigned nLayer, unsigned nXtal, unsigned nFace, 
                             unsigned nRange) : m_finder(0), m_pR(0){
    m_finder = new CalFinder(nTowerRow, nTowerCol, nLayer, nXtal, nFace, 
                             nRange);
    unsigned n = m_finder->getSize();

    m_pR = new vector<RangeBase*>(n, 0);
  }

  CalCalibBase::~CalCalibBase() {
    delete m_finder;
    delete m_pR;
   
  }

  RangeBase*  CalCalibBase::getRange(idents::CalXtalId id, unsigned range, 
                                     unsigned face) {
    unsigned ix = m_finder->findIx(id, range, face);
    if (ix < m_finder->getSize() ) { 
      return (*m_pR)[ix];
    }
    else return 0;
  }

  bool CalCalibBase::putRange(unsigned towerRow, unsigned towerCol, 
                              unsigned layer, unsigned xtal, unsigned range,
                              unsigned face, RangeBase* data) {
    unsigned ix = m_finder->findIx(towerRow, towerCol, layer, xtal, 
                                   range, face);
    if (ix >= m_finder->getSize() ) return false;

    RangeBase* pDest = (*m_pR)[ix];

    pDest->update(data);
    return true;
  }

  bool CalCalibBase::putRange(idents::CalXtalId id, unsigned range, 
                              unsigned face, RangeBase* data) {
    unsigned ix = m_finder->findIx(id, range, face);
    if (ix >= m_finder->getSize() ) return false;

    RangeBase* pDest = (*m_pR)[ix];

    pDest->update(data);
    return true;
  }

  StatusCode CalCalibBase::update(CalibBase& other, MsgStream* log) {
    CalCalibBase& other1 = dynamic_cast<CalCalibBase& >(other);

    unsigned n = m_finder->getSize();

    // Make a simple but insufficient check that the new data is
    // structured like the old
    if (n != other1.m_finder->getSize() ) {  // tilt!  
      (*log) << MSG::ERROR 
             << "CalCalibBase::update failure: sizes unequal" << endreq;
      return StatusCode::FAILURE;
    }
      
    unsigned i;
    for (i = 0; i < n; i++) {
      RangeBase* dest = (*m_pR)[i];
      dest->update((*other1.m_pR)[i]);
    }
    return StatusCode::SUCCESS;
  }

}