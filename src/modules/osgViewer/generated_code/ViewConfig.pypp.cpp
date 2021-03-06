// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgviewer.h"
#include "wrap_referenced.h"
#include "viewconfig.pypp.hpp"

namespace bp = boost::python;

struct ViewConfig_wrapper : osgViewer::ViewConfig, bp::wrapper< osgViewer::ViewConfig > {

    ViewConfig_wrapper( )
    : osgViewer::ViewConfig( )
      , bp::wrapper< osgViewer::ViewConfig >(){
        // null constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgViewer::ViewConfig::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgViewer::ViewConfig::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgViewer::ViewConfig::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgViewer::ViewConfig::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgViewer::ViewConfig::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgViewer::ViewConfig::cloneType( );
    }

    virtual void configure( ::osgViewer::View & arg0 ) const  {
        if( bp::override func_configure = this->get_override( "configure" ) )
            func_configure( boost::ref(arg0) );
        else{
            this->osgViewer::ViewConfig::configure( boost::ref(arg0) );
        }
    }
    
    void default_configure( ::osgViewer::View & arg0 ) const  {
        osgViewer::ViewConfig::configure( boost::ref(arg0) );
    }

    virtual ::osg::DisplaySettings * getActiveDisplaySetting( ::osgViewer::View & view ) const  {
        if( bp::override func_getActiveDisplaySetting = this->get_override( "getActiveDisplaySetting" ) )
            return func_getActiveDisplaySetting( boost::ref(view) );
        else{
            return this->osgViewer::ViewConfig::getActiveDisplaySetting( boost::ref(view) );
        }
    }
    
    ::osg::DisplaySettings * default_getActiveDisplaySetting( ::osgViewer::View & view ) const  {
        return osgViewer::ViewConfig::getActiveDisplaySetting( boost::ref(view) );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgViewer::ViewConfig::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgViewer::ViewConfig::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgViewer::ViewConfig::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgViewer::ViewConfig::libraryName( );
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

void register_ViewConfig_class(){

    bp::class_< ViewConfig_wrapper, bp::bases< ::osg::Object >, osg::ref_ptr< ViewConfig_wrapper >, boost::noncopyable >( "ViewConfig", bp::init< >() )    
        .def( 
            "className"
            , (char const * ( ::osgViewer::ViewConfig::* )(  )const)(&::osgViewer::ViewConfig::className)
            , (char const * ( ViewConfig_wrapper::* )(  )const)(&ViewConfig_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osgViewer::ViewConfig::* )( ::osg::CopyOp const & )const)(&::osgViewer::ViewConfig::clone)
            , (::osg::Object * ( ViewConfig_wrapper::* )( ::osg::CopyOp const & )const)(&ViewConfig_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osgViewer::ViewConfig::* )(  )const)(&::osgViewer::ViewConfig::cloneType)
            , (::osg::Object * ( ViewConfig_wrapper::* )(  )const)(&ViewConfig_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "configure"
            , (void ( ::osgViewer::ViewConfig::* )( ::osgViewer::View & )const)(&::osgViewer::ViewConfig::configure)
            , (void ( ViewConfig_wrapper::* )( ::osgViewer::View & )const)(&ViewConfig_wrapper::default_configure)
            , ( bp::arg("arg0") ) )    
        .def( 
            "getActiveDisplaySetting"
            , (::osg::DisplaySettings * ( ::osgViewer::ViewConfig::* )( ::osgViewer::View & )const)(&::osgViewer::ViewConfig::getActiveDisplaySetting)
            , (::osg::DisplaySettings * ( ViewConfig_wrapper::* )( ::osgViewer::View & )const)(&ViewConfig_wrapper::default_getActiveDisplaySetting)
            , ( bp::arg("view") )
            , bp::return_internal_reference< >() )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osgViewer::ViewConfig::* )( ::osg::Object const * )const)(&::osgViewer::ViewConfig::isSameKindAs)
            , (bool ( ViewConfig_wrapper::* )( ::osg::Object const * )const)(&ViewConfig_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgViewer::ViewConfig::* )(  )const)(&::osgViewer::ViewConfig::libraryName)
            , (char const * ( ViewConfig_wrapper::* )(  )const)(&ViewConfig_wrapper::default_libraryName) );

}
