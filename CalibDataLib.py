# $Header: /nfs/slac/g/glast/ground/cvs/GlastRelease-scons/CalibData/CalibDataLib.py,v 1.1 2008/07/09 21:13:40 glastrm Exp $
def generate(env, **kw):
    if not kw.get('depsOnly', 0):
        env.Tool('addLibrary', library = ['CalibData'])
    env.Tool('identsLib')
    env.Tool('facilitiesLib')

def exists(env):
    return 1;
