// $Header: /nfs/slac/g/glast/ground/cvs/CalibData/src/DacCol.cxx,v 1.1 2004/05/26 22:36:05 jrb Exp $

#include "CalibData/DacCol.h"

namespace CalibData {

  DacCol::DacCol(std::vector<unsigned>* vals) {
    if (vals) {
      m_dacs.clear();
      for (unsigned int iDac = 0; iDac < vals->size(); iDac++) {
        m_dacs.push_back((*vals)[iDac]);
      }
    }
  }
  DacCol::DacCol(std::vector<int>* vals) {
    if (vals) {
      m_dacs.clear();
      for (unsigned int iDac = 0; iDac < vals->size(); iDac++) {
        unsigned val = (*vals)[iDac];
        m_dacs.push_back(val);
      }
    }
  }
  
  void DacCol::update(const DacCol* other) {
    m_dacs.clear();
    for (unsigned int iDac = 0; iDac < other->m_dacs.size(); iDac++) {
      m_dacs.push_back((other->m_dacs)[iDac]);
    }
  }

}
