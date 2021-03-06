// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgwidget.h"
#include "wrap_referenced.h"
#include "browsermanager.pypp.hpp"

namespace bp = boost::python;

struct BrowserManager_wrapper : osgWidget::BrowserManager, bp::wrapper< osgWidget::BrowserManager > {

    virtual ::osgWidget::BrowserImage * createBrowserImage( ::std::string const & url, int width, int height ) {
        if( bp::override func_createBrowserImage = this->get_override( "createBrowserImage" ) )
            return func_createBrowserImage( url, width, height );
        else{
            return this->osgWidget::BrowserManager::createBrowserImage( url, width, height );
        }
    }
    
    ::osgWidget::BrowserImage * default_createBrowserImage( ::std::string const & url, int width, int height ) {
        return osgWidget::BrowserManager::createBrowserImage( url, width, height );
    }

    virtual void init( ::std::string const & application ) {
        if( bp::override func_init = this->get_override( "init" ) )
            func_init( application );
        else{
            this->osgWidget::BrowserManager::init( application );
        }
    }
    
    void default_init( ::std::string const & application ) {
        osgWidget::BrowserManager::init( application );
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

void register_BrowserManager_class(){

    bp::class_< BrowserManager_wrapper, bp::bases< ::osg::Object >, osg::ref_ptr< BrowserManager_wrapper >, boost::noncopyable >( "BrowserManager", bp::no_init )    
        .def( 
            "createBrowserImage"
            , (::osgWidget::BrowserImage * ( ::osgWidget::BrowserManager::* )( ::std::string const &,int,int ))(&::osgWidget::BrowserManager::createBrowserImage)
            , (::osgWidget::BrowserImage * ( BrowserManager_wrapper::* )( ::std::string const &,int,int ))(&BrowserManager_wrapper::default_createBrowserImage)
            , ( bp::arg("url"), bp::arg("width"), bp::arg("height") )
            , bp::return_internal_reference< >() )    
        .def( 
            "getApplication"
            , (::std::string const & ( ::osgWidget::BrowserManager::* )(  )const)( &::osgWidget::BrowserManager::getApplication )
            , bp::return_value_policy< bp::copy_const_reference >() )    
        .def( 
            "init"
            , (void ( ::osgWidget::BrowserManager::* )( ::std::string const & ))(&::osgWidget::BrowserManager::init)
            , (void ( BrowserManager_wrapper::* )( ::std::string const & ))(&BrowserManager_wrapper::default_init)
            , ( bp::arg("application") ) )    
        .def( 
            "instance"
            , (::osg::ref_ptr< osgWidget::BrowserManager > & (*)(  ))( &::osgWidget::BrowserManager::instance )
            , bp::return_internal_reference< >() )    
        .def( 
            "setApplication"
            , (void ( ::osgWidget::BrowserManager::* )( ::std::string const & ))( &::osgWidget::BrowserManager::setApplication )
            , ( bp::arg("application") ) )    
        .staticmethod( "instance" );

}
