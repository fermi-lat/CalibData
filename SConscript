# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/GlastRelease-scons/CalibData/SConscript,v 1.10 2009/09/14 22:21:07 jrb Exp $
# Authors: Joanne Bogart <jrb@slac.stanford.edu>
# Version: CalibData-00-26-03
Import('baseEnv')
Import('listFiles')
Import('packages')
libEnv = baseEnv.Clone()

libEnv.Tool('CalibDataLib', depsOnly = 1)
CalibDataLib = libEnv.SharedLibrary('CalibData',
                                    listFiles(['src/*.cxx', 'src/Cal/*.cxx',
                                               'src/Tkr/*.cxx','src/Acd/*.cxx',
                                               'src/Moot/*.cxx',
                                               'src/Anc/*.cxx',
                                               'src/Nas/*.cxx']))

libEnv.Tool('registerTargets', package = 'CalibData',
            libraryCxts = [[CalibDataLib, libEnv]],
            includes = listFiles(['CalibData/*'], recursive = True))




