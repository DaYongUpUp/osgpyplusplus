// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgsim.h"
#include "wrap_referenced.h"
#include "impostorspritemanager.pypp.hpp"

namespace bp = boost::python;

struct ImpostorSpriteManager_wrapper : osgSim::ImpostorSpriteManager, bp::wrapper< osgSim::ImpostorSpriteManager > {

    ImpostorSpriteManager_wrapper( )
    : osgSim::ImpostorSpriteManager( )
      , bp::wrapper< osgSim::ImpostorSpriteManager >(){
        // null constructor
    
    }

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

void register_ImpostorSpriteManager_class(){

    bp::class_< ImpostorSpriteManager_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< ::osgSim::ImpostorSpriteManager >, boost::noncopyable >( "ImpostorSpriteManager", "\n Helper class for managing the reuse of ImpostorSprite resources.\n", bp::no_init )    
        .def( bp::init< >("\n Helper class for managing the reuse of ImpostorSprite resources.\n") )    
        .def( 
            "createOrReuseImpostorSprite"
            , (::osgSim::ImpostorSprite * ( ::osgSim::ImpostorSpriteManager::* )( int,int,unsigned int ))( &::osgSim::ImpostorSpriteManager::createOrReuseImpostorSprite )
            , ( bp::arg("s"), bp::arg("t"), bp::arg("frameNumber") )
            , bp::return_internal_reference< >() )    
        .def( 
            "createOrReuseStateSet"
            , (::osg::StateSet * ( ::osgSim::ImpostorSpriteManager::* )(  ))( &::osgSim::ImpostorSpriteManager::createOrReuseStateSet )
            , bp::return_internal_reference< >() )    
        .def( 
            "empty"
            , (bool ( ::osgSim::ImpostorSpriteManager::* )(  )const)( &::osgSim::ImpostorSpriteManager::empty ) )    
        .def( 
            "first"
            , (::osgSim::ImpostorSprite * ( ::osgSim::ImpostorSpriteManager::* )(  ))( &::osgSim::ImpostorSpriteManager::first )
            , bp::return_internal_reference< >() )    
        .def( 
            "last"
            , (::osgSim::ImpostorSprite * ( ::osgSim::ImpostorSpriteManager::* )(  ))( &::osgSim::ImpostorSpriteManager::last )
            , bp::return_internal_reference< >() )    
        .def( 
            "push_back"
            , (void ( ::osgSim::ImpostorSpriteManager::* )( ::osgSim::ImpostorSprite * ))( &::osgSim::ImpostorSpriteManager::push_back )
            , ( bp::arg("is") ) )    
        .def( 
            "remove"
            , (void ( ::osgSim::ImpostorSpriteManager::* )( ::osgSim::ImpostorSprite * ))( &::osgSim::ImpostorSpriteManager::remove )
            , ( bp::arg("is") ) )    
        .def( 
            "reset"
            , (void ( ::osgSim::ImpostorSpriteManager::* )(  ))( &::osgSim::ImpostorSpriteManager::reset ) );

}
