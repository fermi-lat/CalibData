//$Header: /nfs/slac/g/glast/ground/cvs/CalibData/CalibData/Cal/CalFinder.h,v 1.9 2004/10/07 19:46:11 jrb Exp $
#ifndef CalibData_CalFinder_h
#define CalibData_CalFinder_h

/** @class CalFinder

   Utility class which knows how to find the index of the
   correct set of CAL calibration constants given id, range
   and (optional) face.  Note convention for tower numbering follows
   (Ritz, Nordby) LAT-SS-00035-03-D1.  For the standard 4x4 array,
   this yields

                     12   13   14   15  | r3
                                        |
                      8    9   10   11  | r2
                                        |           ^
                      4    5    6    7  | r1        |
                                        |           |
                      0    1    2    3  | r0        
                                        |           Y
                     -------------------+
                     c0   c1   c2   c3              X -->

                            

   @author J. Bogart

*/
#include "idents/CalXtalId.h"

namespace CalibData {
  class CalFinder {
  public: 
    CalFinder(unsigned nTowerRow, unsigned nTowerCol, unsigned nLayer, 
              unsigned nXtal, unsigned nFace=2, unsigned nRange=4,
              unsigned nDacCol=0, unsigned nXpos=0);


    ~CalFinder() {}

    unsigned findIx(unsigned towerRow, unsigned towerCol, 
                    unsigned layer, unsigned xtal, 
                    unsigned range, unsigned face=0) const {
      unsigned iTower = m_towerCol*towerRow + towerCol;
      return face + m_c0*range + m_c1*xtal + m_c2*layer + m_c3*iTower;
    }

    /**
       Find index for channel within the calibration corresponding to 
       specified arguments.
       If range, face fields are valid in the id, ignore separate range and
       face arguments
     */
    unsigned findIx(idents::CalXtalId id, unsigned range, unsigned face=0) 
      const;

    bool checkIx(unsigned towerRow, unsigned towerCol, unsigned layer,
                 unsigned xtal, unsigned range, unsigned face=0) const {
      return ((towerRow <m_towerRow) && (towerCol <= m_towerCol) &&
              (layer <= m_layer) && (xtal < m_xtal) &&
              (range < m_range) && (face < m_face)); }

    /**
       See if arguments translate to usable index for this calibration.
       If range, face fields are valid in the id, ignore separate range and
       face arguments
     */
    bool checkIx(idents::CalXtalId id, unsigned range, unsigned face=0);

    unsigned getSize() const {return m_c3*m_tower;}

    unsigned getNTowerRow() const {return m_towerRow;}
    unsigned getNTowerCol() const {return m_towerCol;}

    unsigned getNLayer() const {return m_layer;}
    unsigned getNXtal() const {return m_xtal;}
    unsigned getNFace() const {return m_face;}
    unsigned getNRange() const {return m_range;}
    unsigned getNDacCol() const {return m_dacCol;}
    unsigned getNXpos() const {return m_xpos;}

    bool equals(const CalFinder& other) const;

  private:
    unsigned m_towerRow;
    unsigned m_towerCol;
    unsigned m_tower;
    unsigned m_layer;
    unsigned m_xtal;
    unsigned m_face;
    unsigned m_range;
    unsigned m_dacCol;
    unsigned m_xpos;

    unsigned m_c0;
    unsigned m_c1;
    unsigned m_c2;
    unsigned m_c3;

  };
}    



#endif
