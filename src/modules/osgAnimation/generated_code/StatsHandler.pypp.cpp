// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "wrap_osganimation.h"
#include "wrap_referenced.h"
#include "statshandler.pypp.hpp"

namespace bp = boost::python;

struct StatsHandler_wrapper : osgAnimation::StatsHandler, bp::wrapper< osgAnimation::StatsHandler > {

    StatsHandler_wrapper( )
    : osgAnimation::StatsHandler( )
      , bp::wrapper< osgAnimation::StatsHandler >(){
        // null constructor
    
    }

    virtual void getUsage( ::osg::ApplicationUsage & usage ) const  {
        if( bp::override func_getUsage = this->get_override( "getUsage" ) )
            func_getUsage( boost::ref(usage) );
        else{
            this->osgAnimation::StatsHandler::getUsage( boost::ref(usage) );
        }
    }
    
    void default_getUsage( ::osg::ApplicationUsage & usage ) const  {
        osgAnimation::StatsHandler::getUsage( boost::ref(usage) );
    }

    virtual bool handle( ::osgGA::GUIEventAdapter const & ea, ::osgGA::GUIActionAdapter & aa ) {
        namespace bpl = boost::python;
        if( bpl::override func_handle = this->get_override( "handle" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_handle.ptr(), ea, aa );
            return bpl::extract< bool >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return osgAnimation::StatsHandler::handle( boost::ref(ea), boost::ref(aa) );
        }
    }
    
    static boost::python::object default_handle( ::osgAnimation::StatsHandler & inst, ::osgGA::GUIEventAdapter & ea, ::osgGA::GUIActionAdapter & aa ){
        bool result;
        if( dynamic_cast< StatsHandler_wrapper * >( boost::addressof( inst ) ) ){
            result = inst.::osgAnimation::StatsHandler::handle(ea, aa);
        }
        else{
            result = inst.handle(ea, aa);
        }
        return bp::object( result );
    }

    virtual void computeDataVariance(  ) {
        if( bp::override func_computeDataVariance = this->get_override( "computeDataVariance" ) )
            func_computeDataVariance(  );
        else{
            this->osg::Object::computeDataVariance(  );
        }
    }
    
    void default_computeDataVariance(  ) {
        osg::Object::computeDataVariance( );
    }

    virtual ::osg::Referenced * getUserData(  ) {
        if( bp::override func_getUserData = this->get_override( "getUserData" ) )
            return func_getUserData(  );
        else{
            return this->osg::Object::getUserData(  );
        }
    }
    
    ::osg::Referenced * default_getUserData(  ) {
        return osg::Object::getUserData( );
    }

    virtual ::osg::Referenced const * getUserData(  ) const  {
        if( bp::override func_getUserData = this->get_override( "getUserData" ) )
            return func_getUserData(  );
        else{
            return this->osg::Object::getUserData(  );
        }
    }
    
    ::osg::Referenced const * default_getUserData(  ) const  {
        return osg::Object::getUserData( );
    }

    virtual void resizeGLObjectBuffers( unsigned int arg0 ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( arg0 );
        else{
            this->osg::Object::resizeGLObjectBuffers( arg0 );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int arg0 ) {
        osg::Object::resizeGLObjectBuffers( arg0 );
    }

    virtual void setName( ::std::string const & name ) {
        if( bp::override func_setName = this->get_override( "setName" ) )
            func_setName( name );
        else{
            this->osg::Object::setName( name );
        }
    }
    
    void default_setName( ::std::string const & name ) {
        osg::Object::setName( name );
    }

    virtual void setThreadSafeRefUnref( bool threadSafe ) {
        if( bp::override func_setThreadSafeRefUnref = this->get_override( "setThreadSafeRefUnref" ) )
            func_setThreadSafeRefUnref( threadSafe );
        else{
            this->osg::Object::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Object::setThreadSafeRefUnref( threadSafe );
    }

    virtual void setUserData( ::osg::Referenced * obj ) {
        if( bp::override func_setUserData = this->get_override( "setUserData" ) )
            func_setUserData( boost::python::ptr(obj) );
        else{
            this->osg::Object::setUserData( boost::python::ptr(obj) );
        }
    }
    
    void default_setUserData( ::osg::Referenced * obj ) {
        osg::Object::setUserData( boost::python::ptr(obj) );
    }

};

void register_StatsHandler_class(){

    { //::osgAnimation::StatsHandler
        typedef bp::class_< StatsHandler_wrapper, osg::ref_ptr< StatsHandler_wrapper >, boost::noncopyable > StatsHandler_exposer_t;
        StatsHandler_exposer_t StatsHandler_exposer = StatsHandler_exposer_t( "StatsHandler", "\n Event handler for adding on screen stats reporting to Viewers.\n", bp::init< >("\n Event handler for adding on screen stats reporting to Viewers.\n") );
        bp::scope StatsHandler_scope( StatsHandler_exposer );
        bp::enum_< osgAnimation::StatsHandler::StatsType>("StatsType")
            .value("NO_STATS", osgAnimation::StatsHandler::NO_STATS)
            .value("FRAME_RATE", osgAnimation::StatsHandler::FRAME_RATE)
            .value("LAST", osgAnimation::StatsHandler::LAST)
            .export_values()
            ;
        { //::osgAnimation::StatsHandler::getBlockMultiplier
        
            typedef double ( ::osgAnimation::StatsHandler::*getBlockMultiplier_function_type)(  ) const;
            
            StatsHandler_exposer.def( 
                "getBlockMultiplier"
                , getBlockMultiplier_function_type( &::osgAnimation::StatsHandler::getBlockMultiplier ) );
        
        }
        { //::osgAnimation::StatsHandler::getCamera
        
            typedef ::osg::Camera * ( ::osgAnimation::StatsHandler::*getCamera_function_type)(  ) ;
            
            StatsHandler_exposer.def( 
                "getCamera"
                , getCamera_function_type( &::osgAnimation::StatsHandler::getCamera )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgAnimation::StatsHandler::getCamera
        
            typedef ::osg::Camera const * ( ::osgAnimation::StatsHandler::*getCamera_function_type)(  ) const;
            
            StatsHandler_exposer.def( 
                "getCamera"
                , getCamera_function_type( &::osgAnimation::StatsHandler::getCamera )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgAnimation::StatsHandler::getKeyEventPrintsOutStats
        
            typedef int ( ::osgAnimation::StatsHandler::*getKeyEventPrintsOutStats_function_type)(  ) const;
            
            StatsHandler_exposer.def( 
                "getKeyEventPrintsOutStats"
                , getKeyEventPrintsOutStats_function_type( &::osgAnimation::StatsHandler::getKeyEventPrintsOutStats ) );
        
        }
        { //::osgAnimation::StatsHandler::getKeyEventTogglesOnScreenStats
        
            typedef int ( ::osgAnimation::StatsHandler::*getKeyEventTogglesOnScreenStats_function_type)(  ) const;
            
            StatsHandler_exposer.def( 
                "getKeyEventTogglesOnScreenStats"
                , getKeyEventTogglesOnScreenStats_function_type( &::osgAnimation::StatsHandler::getKeyEventTogglesOnScreenStats ) );
        
        }
        { //::osgAnimation::StatsHandler::getUsage
        
            typedef void ( ::osgAnimation::StatsHandler::*getUsage_function_type)( ::osg::ApplicationUsage & ) const;
            typedef void ( StatsHandler_wrapper::*default_getUsage_function_type)( ::osg::ApplicationUsage & ) const;
            
            StatsHandler_exposer.def( 
                "getUsage"
                , getUsage_function_type(&::osgAnimation::StatsHandler::getUsage)
                , default_getUsage_function_type(&StatsHandler_wrapper::default_getUsage)
                , ( bp::arg("usage") ) );
        
        }
        { //::osgAnimation::StatsHandler::handle
        
            typedef boost::python::object ( *default_handle_function_type )( ::osgAnimation::StatsHandler &,::osgGA::GUIEventAdapter &,::osgGA::GUIActionAdapter & );
            
            StatsHandler_exposer.def( 
                "handle"
                , default_handle_function_type( &StatsHandler_wrapper::default_handle )
                , ( bp::arg("inst"), bp::arg("ea"), bp::arg("aa") ) );
        
        }
        { //::osgAnimation::StatsHandler::reset
        
            typedef void ( ::osgAnimation::StatsHandler::*reset_function_type)(  ) ;
            
            StatsHandler_exposer.def( 
                "reset"
                , reset_function_type( &::osgAnimation::StatsHandler::reset ) );
        
        }
        { //::osgAnimation::StatsHandler::setKeyEventPrintsOutStats
        
            typedef void ( ::osgAnimation::StatsHandler::*setKeyEventPrintsOutStats_function_type)( int ) ;
            
            StatsHandler_exposer.def( 
                "setKeyEventPrintsOutStats"
                , setKeyEventPrintsOutStats_function_type( &::osgAnimation::StatsHandler::setKeyEventPrintsOutStats )
                , ( bp::arg("key") ) );
        
        }
        { //::osgAnimation::StatsHandler::setKeyEventTogglesOnScreenStats
        
            typedef void ( ::osgAnimation::StatsHandler::*setKeyEventTogglesOnScreenStats_function_type)( int ) ;
            
            StatsHandler_exposer.def( 
                "setKeyEventTogglesOnScreenStats"
                , setKeyEventTogglesOnScreenStats_function_type( &::osgAnimation::StatsHandler::setKeyEventTogglesOnScreenStats )
                , ( bp::arg("key") ) );
        
        }
    }

}