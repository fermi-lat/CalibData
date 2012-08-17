# $Header: /nfs/slac/g/glast/ground/cvs/GlastRelease-scons/CalibData/CalibDataLib.py,v 1.3 2009/11/10 23:11:24 jrb Exp $
def generate(env, **kw):
    if not kw.get('depsOnly', 0):
        env.Tool('addLibrary', library = ['CalibData'])
        if env['PLATFORM']=='win32' and env.get('CONTAINERNAME','')=='GlastRelease':
	    env.Tool('findPkgPath', package = 'CalibData') 
    env.Tool('addLibrary', library = env['gaudiLibs'])
    env.Tool('addLibrary', library = env['clhepLibs'])
    env.Tool('identsLib')
    env.Tool('facilitiesLib')
def exists(env):
    return 1;
