// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgutil.h"
#include "wrap_referenced.h"
#include "cubemapgenerator.pypp.hpp"

namespace bp = boost::python;

struct CubeMapGenerator_wrapper : osgUtil::CubeMapGenerator, bp::wrapper< osgUtil::CubeMapGenerator > {

    virtual void setThreadSafeRefUnref( bool threadSafe ) {
        if( bp::override func_setThreadSafeRefUnref = this->get_override( "setThreadSafeRefUnref" ) )
            func_setThreadSafeRefUnref( threadSafe );
        else{
            this->osg::Referenced::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Referenced::setThreadSafeRefUnref( threadSafe );
    }

};

void register_CubeMapGenerator_class(){

    bp::class_< CubeMapGenerator_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< ::osgUtil::CubeMapGenerator >, boost::noncopyable >( "CubeMapGenerator", bp::no_init )    
        .def( 
            "generateMap"
            , (void ( ::osgUtil::CubeMapGenerator::* )( bool ))( &::osgUtil::CubeMapGenerator::generateMap )
            , ( bp::arg("use_osg_system")=(bool)(true) ) )    
        .def( 
            "getImage"
            , (::osg::Image * ( ::osgUtil::CubeMapGenerator::* )( ::osg::TextureCubeMap::Face ))( &::osgUtil::CubeMapGenerator::getImage )
            , ( bp::arg("face") )
            , bp::return_internal_reference< >() )    
        .def( 
            "getImage"
            , (::osg::Image const * ( ::osgUtil::CubeMapGenerator::* )( ::osg::TextureCubeMap::Face )const)( &::osgUtil::CubeMapGenerator::getImage )
            , ( bp::arg("face") )
            , bp::return_internal_reference< >() );

}
