# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/CalibData/SConscript,v 1.3 2008/07/15 19:30:14 glastrm Exp $
# Authors: Joanne Bogart <jrb@slac.stanford.edu>
# Version: CalibData-00-25-00

Import('baseEnv')
Import('listFiles')
Import('packages')
libEnv = baseEnv.Clone()

libEnv.Tool('CalibDataLib', depsOnly = 1)
CalibDataLib  = libEnv.SharedLibrary('CalibData', listFiles(['src/*.cxx', 'src/Cal/*.cxx', 'src/Tkr/*.cxx',
                                                             'src/Acd/*.cxx', 'src/Moot/*.cxx', 'src/Anc/*.cxx',
                                                             'src/Nas/*.cxx']))

baseEnv.Tool('registerObjects', package = 'CalibData', libraries = [CalibDataLib], includes = listFiles(['CalibData/*'], recursive = True))
