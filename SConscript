# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/GlastRelease-scons/CalibData/SConscript,v 1.13.2.2 2010/10/18 02:47:53 heather Exp $
# Authors: Joanne Bogart <jrb@slac.stanford.edu>
# Version: CalibData-00-27-00

Import('baseEnv')
Import('listFiles')
Import('packages')
libEnv = baseEnv.Clone()

libEnv.Tool('addLinkDeps', package='CalibData', toBuild='shared')
CalibDataLib = libEnv.SharedLibrary('CalibData',
                                    listFiles(['src/*.cxx', 'src/Cal/*.cxx',
                                               'src/Tkr/*.cxx','src/Acd/*.cxx',
                                               'src/Moot/*.cxx',
                                               'src/Anc/*.cxx',
                                               'src/Nas/*.cxx']))

libEnv.Tool('registerTargets', package = 'CalibData',
            libraryCxts = [[CalibDataLib, libEnv]],
            includes = listFiles(['CalibData/*'], recursive = True))




