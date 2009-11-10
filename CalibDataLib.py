# $Header: /nfs/slac/g/glast/ground/cvs/GlastRelease-scons/CalibData/CalibDataLib.py,v 1.2 2009/08/07 01:30:27 jrb Exp $
def generate(env, **kw):
    if not kw.get('depsOnly', 0):
        env.Tool('addLibrary', library = ['CalibData'])
    env.Tool('addLibrary', library = env['gaudiLibs'])
    env.Tool('addLibrary', library = env['clhepLibs'])
    env.Tool('identsLib')
    env.Tool('facilitiesLib')
def exists(env):
    return 1;
