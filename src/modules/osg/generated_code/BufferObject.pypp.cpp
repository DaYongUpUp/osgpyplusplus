// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "bufferobject.pypp.hpp"

namespace bp = boost::python;

struct BufferObject_wrapper : osg::BufferObject, bp::wrapper< osg::BufferObject > {

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::BufferObject::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::BufferObject::className( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::BufferObject::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::BufferObject::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::BufferObject::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::BufferObject::libraryName( );
    }

    virtual void resizeGLObjectBuffers( unsigned int maxSize ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( maxSize );
        else{
            this->osg::BufferObject::resizeGLObjectBuffers( maxSize );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int maxSize ) {
        osg::BufferObject::resizeGLObjectBuffers( maxSize );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & arg0 ) const {
        bp::override func_clone = this->get_override( "clone" );
        return func_clone( boost::ref(arg0) );
    }

    virtual ::osg::Object * cloneType(  ) const {
        bp::override func_cloneType = this->get_override( "cloneType" );
        return func_cloneType(  );
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

void register_BufferObject_class(){

    bp::class_< BufferObject_wrapper, bp::bases< osg::Object >, osg::ref_ptr< ::osg::BufferObject >, boost::noncopyable >( "BufferObject", bp::no_init )    
        .def( 
            "addBufferData"
            , (unsigned int ( ::osg::BufferObject::* )( ::osg::BufferData * ))( &::osg::BufferObject::addBufferData )
            , ( bp::arg("bd") ) )    
        .def( 
            "className"
            , (char const * ( ::osg::BufferObject::* )(  )const)(&::osg::BufferObject::className)
            , (char const * ( BufferObject_wrapper::* )(  )const)(&BufferObject_wrapper::default_className) )    
        .def( 
            "computeRequiredBufferSize"
            , (unsigned int ( ::osg::BufferObject::* )(  )const)( &::osg::BufferObject::computeRequiredBufferSize ) )    
        .def( 
            "deleteBufferObject"
            , (void (*)( unsigned int,::GLuint ))( &::osg::BufferObject::deleteBufferObject )
            , ( bp::arg("contextID"), bp::arg("globj") )
            , " deprecated, provided for backwards compatibility." )    
        .def( 
            "dirty"
            , (void ( ::osg::BufferObject::* )(  ))( &::osg::BufferObject::dirty ) )    
        .def( 
            "getBufferData"
            , (::osg::BufferData * ( ::osg::BufferObject::* )( unsigned int ))( &::osg::BufferObject::getBufferData )
            , ( bp::arg("index") )
            , bp::return_internal_reference< >() )    
        .def( 
            "getBufferData"
            , (::osg::BufferData const * ( ::osg::BufferObject::* )( unsigned int )const)( &::osg::BufferObject::getBufferData )
            , ( bp::arg("index") )
            , bp::return_internal_reference< >() )    
        .def( 
            "getCopyDataAndReleaseGLBufferObject"
            , (bool ( ::osg::BufferObject::* )(  )const)( &::osg::BufferObject::getCopyDataAndReleaseGLBufferObject )
            , " Get whether the BufferObject should use a GLBufferObject just for copying the BufferData and release it immmediately." )    
        .def( 
            "getGLBufferObject"
            , (::osg::GLBufferObject * ( ::osg::BufferObject::* )( unsigned int )const)( &::osg::BufferObject::getGLBufferObject )
            , ( bp::arg("contextID") )
            , bp::return_internal_reference< >() )    
        .def( 
            "getNumBufferData"
            , (unsigned int ( ::osg::BufferObject::* )(  )const)( &::osg::BufferObject::getNumBufferData ) )    
        .def( 
            "getOrCreateGLBufferObject"
            , (::osg::GLBufferObject * ( ::osg::BufferObject::* )( unsigned int )const)( &::osg::BufferObject::getOrCreateGLBufferObject )
            , ( bp::arg("contextID") )
            , bp::return_internal_reference< >() )    
        .def( 
            "getProfile"
            , (::osg::BufferObjectProfile & ( ::osg::BufferObject::* )(  ))( &::osg::BufferObject::getProfile )
            , bp::return_internal_reference< >() )    
        .def( 
            "getProfile"
            , (::osg::BufferObjectProfile const & ( ::osg::BufferObject::* )(  )const)( &::osg::BufferObject::getProfile )
            , bp::return_internal_reference< >() )    
        .def( 
            "getTarget"
            , (::GLenum ( ::osg::BufferObject::* )(  )const)( &::osg::BufferObject::getTarget ) )    
        .def( 
            "getUsage"
            , (::GLenum ( ::osg::BufferObject::* )(  )const)( &::osg::BufferObject::getUsage )
            , " Get the type of usage the buffer object has been set up for." )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osg::BufferObject::* )( ::osg::Object const * )const)(&::osg::BufferObject::isSameKindAs)
            , (bool ( BufferObject_wrapper::* )( ::osg::Object const * )const)(&BufferObject_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osg::BufferObject::* )(  )const)(&::osg::BufferObject::libraryName)
            , (char const * ( BufferObject_wrapper::* )(  )const)(&BufferObject_wrapper::default_libraryName) )    
        .def( 
            "removeBufferData"
            , (void ( ::osg::BufferObject::* )( unsigned int ))( &::osg::BufferObject::removeBufferData )
            , ( bp::arg("index") ) )    
        .def( 
            "removeBufferData"
            , (void ( ::osg::BufferObject::* )( ::osg::BufferData * ))( &::osg::BufferObject::removeBufferData )
            , ( bp::arg("bd") ) )    
        .def( 
            "resizeGLObjectBuffers"
            , (void ( ::osg::BufferObject::* )( unsigned int ))(&::osg::BufferObject::resizeGLObjectBuffers)
            , (void ( BufferObject_wrapper::* )( unsigned int ))(&BufferObject_wrapper::default_resizeGLObjectBuffers)
            , ( bp::arg("maxSize") ) )    
        .def( 
            "setBufferData"
            , (void ( ::osg::BufferObject::* )( unsigned int,::osg::BufferData * ))( &::osg::BufferObject::setBufferData )
            , ( bp::arg("index"), bp::arg("bd") ) )    
        .def( 
            "setCopyDataAndReleaseGLBufferObject"
            , (void ( ::osg::BufferObject::* )( bool ))( &::osg::BufferObject::setCopyDataAndReleaseGLBufferObject )
            , ( bp::arg("copyAndRelease") )
            , " Set whether the BufferObject should use a GLBufferObject just for copying the BufferData and release it immmediately so that it may be reused." )    
        .def( 
            "setGLBufferObject"
            , (void ( ::osg::BufferObject::* )( unsigned int,::osg::GLBufferObject * ))( &::osg::BufferObject::setGLBufferObject )
            , ( bp::arg("contextID"), bp::arg("glbo") ) )    
        .def( 
            "setTarget"
            , (void ( ::osg::BufferObject::* )( ::GLenum ))( &::osg::BufferObject::setTarget )
            , ( bp::arg("target") ) )    
        .def( 
            "setUsage"
            , (void ( ::osg::BufferObject::* )( ::GLenum ))( &::osg::BufferObject::setUsage )
            , ( bp::arg("usage") )
            , " Set what type of usage the buffer object will have. Options are:\n          GL_STREAM_DRAW, GL_STREAM_READ, GL_STREAM_COPY,\n          GL_STATIC_DRAW, GL_STATIC_READ, GL_STATIC_COPY,\n          GL_DYNAMIC_DRAW, GL_DYNAMIC_READ, or GL_DYNAMIC_COPY." )    
        .def( 
            "clone"
            , bp::pure_virtual( (::osg::Object * ( ::osg::Object::* )( ::osg::CopyOp const & )const)(&::osg::Object::clone) )
            , ( bp::arg("arg0") )
            , bp::return_value_policy< bp::reference_existing_object >()
            , "\n Clone an object, with Object* return type.\n            Must be defined by derived classes.\n" )    
        .def( 
            "cloneType"
            , bp::pure_virtual( (::osg::Object * ( ::osg::Object::* )(  )const)(&::osg::Object::cloneType) )
            , bp::return_value_policy< bp::reference_existing_object >()
            , "\n Clone the type of an object, with Object* return type.\n            Must be defined by derived classes.\n" )    
        .def( 
            "computeDataVariance"
            , (void ( ::osg::Object::* )(  ))(&::osg::Object::computeDataVariance)
            , (void ( BufferObject_wrapper::* )(  ))(&BufferObject_wrapper::default_computeDataVariance) )    
        .def( 
            "getUserData"
            , (::osg::Referenced * ( ::osg::Object::* )(  ))(&::osg::Object::getUserData)
            , (::osg::Referenced * ( BufferObject_wrapper::* )(  ))(&BufferObject_wrapper::default_getUserData)
            , bp::return_internal_reference< >() )    
        .def( 
            "getUserData"
            , (::osg::Referenced const * ( ::osg::Object::* )(  )const)(&::osg::Object::getUserData)
            , (::osg::Referenced const * ( BufferObject_wrapper::* )(  )const)(&BufferObject_wrapper::default_getUserData)
            , bp::return_internal_reference< >() )    
        .def( 
            "setName"
            , (void ( ::osg::Object::* )( ::std::string const & ))(&::osg::Object::setName)
            , (void ( BufferObject_wrapper::* )( ::std::string const & ))(&BufferObject_wrapper::default_setName)
            , ( bp::arg("name") ) )    
        .def( 
            "setName"
            , (void ( ::osg::Object::* )( char const * ))( &::osg::Object::setName )
            , ( bp::arg("name") )
            , " Set the name of object using a C style string." )    
        .def( 
            "setThreadSafeRefUnref"
            , (void ( ::osg::Object::* )( bool ))(&::osg::Object::setThreadSafeRefUnref)
            , (void ( BufferObject_wrapper::* )( bool ))(&BufferObject_wrapper::default_setThreadSafeRefUnref)
            , ( bp::arg("threadSafe") ) )    
        .def( 
            "setUserData"
            , (void ( ::osg::Object::* )( ::osg::Referenced * ))(&::osg::Object::setUserData)
            , (void ( BufferObject_wrapper::* )( ::osg::Referenced * ))(&BufferObject_wrapper::default_setUserData)
            , ( bp::arg("obj") ) )    
        .staticmethod( "deleteBufferObject" );

}
