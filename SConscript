# -*- python -*-
# $Header: /nfs/slac/g/glast/ground/cvs/CalibData/SConscript,v 1.15 2011/12/12 20:39:17 heather Exp $
# Authors: Joanne Bogart <jrb@slac.stanford.edu>
# Version: CalibData-00-27-01

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




