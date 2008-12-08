# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/GlastRelease-scons/CalibData/SConscript,v 1.6 2008/09/05 20:30:29 glastrm Exp $
# Authors: Joanne Bogart <jrb@slac.stanford.edu>
# Version: CalibData-00-26-01
Import('baseEnv')
Import('listFiles')
Import('packages')
libEnv = baseEnv.Clone()

libEnv.Tool('CalibDataLib', depsOnly = 1)
CalibDataLib  = libEnv.SharedLibrary('CalibData', listFiles(['src/*.cxx', 'src/Cal/*.cxx', 'src/Tkr/*.cxx',
                                                             'src/Acd/*.cxx', 'src/Moot/*.cxx', 'src/Anc/*.cxx',
                                                             'src/Nas/*.cxx']))

baseEnv.Tool('registerObjects', package = 'CalibData', libraries = [CalibDataLib], includes = listFiles(['CalibData/*'], recursive = True))



