// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgga.h"
#include "wrap_referenced.h"
#include "guieventhandler.pypp.hpp"

namespace bp = boost::python;

struct GUIEventHandler_wrapper : osgGA::GUIEventHandler, bp::wrapper< osgGA::GUIEventHandler > {

    GUIEventHandler_wrapper( )
    : osgGA::GUIEventHandler( )
      , bp::wrapper< osgGA::GUIEventHandler >(){
        // null constructor
    
    }

    GUIEventHandler_wrapper(::osgGA::GUIEventHandler const & eh, ::osg::CopyOp const & copyop )
    : osgGA::GUIEventHandler( boost::ref(eh), boost::ref(copyop) )
      , bp::wrapper< osgGA::GUIEventHandler >(){
        // constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgGA::GUIEventHandler::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgGA::GUIEventHandler::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgGA::GUIEventHandler::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgGA::GUIEventHandler::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgGA::GUIEventHandler::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgGA::GUIEventHandler::cloneType( );
    }

    virtual void event( ::osg::NodeVisitor * nv, ::osg::Drawable * drawable ) {
        if( bp::override func_event = this->get_override( "event" ) )
            func_event( boost::python::ptr(nv), boost::python::ptr(drawable) );
        else{
            this->osgGA::GUIEventHandler::event( boost::python::ptr(nv), boost::python::ptr(drawable) );
        }
    }
    
    void default_event( ::osg::NodeVisitor * nv, ::osg::Drawable * drawable ) {
        osgGA::GUIEventHandler::event( boost::python::ptr(nv), boost::python::ptr(drawable) );
    }

    virtual void getUsage( ::osg::ApplicationUsage & arg0 ) const  {
        if( bp::override func_getUsage = this->get_override( "getUsage" ) )
            func_getUsage( boost::ref(arg0) );
        else{
            this->osgGA::GUIEventHandler::getUsage( boost::ref(arg0) );
        }
    }
    
    void default_getUsage( ::osg::ApplicationUsage & arg0 ) const  {
        osgGA::GUIEventHandler::getUsage( boost::ref(arg0) );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgGA::GUIEventHandler::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgGA::GUIEventHandler::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgGA::GUIEventHandler::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgGA::GUIEventHandler::libraryName( );
    }

    virtual void operator()( ::osg::Node * node, ::osg::NodeVisitor * nv ) {
        if( bp::override func___call__ = this->get_override( "__call__" ) )
            func___call__( boost::python::ptr(node), boost::python::ptr(nv) );
        else{
            this->osgGA::GUIEventHandler::operator()( boost::python::ptr(node), boost::python::ptr(nv) );
        }
    }
    
    void default___call__( ::osg::Node * node, ::osg::NodeVisitor * nv ) {
        osgGA::GUIEventHandler::operator()( boost::python::ptr(node), boost::python::ptr(nv) );
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

void register_GUIEventHandler_class(){

    bp::class_< GUIEventHandler_wrapper, bp::bases< ::osg::Drawable::EventCallback >, osg::ref_ptr< ::osgGA::GUIEventHandler >, boost::noncopyable >( "GUIEventHandler", bp::init< >() )    
        .def( bp::init< osgGA::GUIEventHandler const &, osg::CopyOp const & >(( bp::arg("eh"), bp::arg("copyop") )) )    
        .def( 
            "className"
            , (char const * ( ::osgGA::GUIEventHandler::* )(  )const)(&::osgGA::GUIEventHandler::className)
            , (char const * ( GUIEventHandler_wrapper::* )(  )const)(&GUIEventHandler_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osgGA::GUIEventHandler::* )( ::osg::CopyOp const & )const)(&::osgGA::GUIEventHandler::clone)
            , (::osg::Object * ( GUIEventHandler_wrapper::* )( ::osg::CopyOp const & )const)(&GUIEventHandler_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osgGA::GUIEventHandler::* )(  )const)(&::osgGA::GUIEventHandler::cloneType)
            , (::osg::Object * ( GUIEventHandler_wrapper::* )(  )const)(&GUIEventHandler_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "event"
            , (void ( ::osgGA::GUIEventHandler::* )( ::osg::NodeVisitor *,::osg::Drawable * ))(&::osgGA::GUIEventHandler::event)
            , (void ( GUIEventHandler_wrapper::* )( ::osg::NodeVisitor *,::osg::Drawable * ))(&GUIEventHandler_wrapper::default_event)
            , ( bp::arg("nv"), bp::arg("drawable") ) )    
        .def( 
            "getIgnoreHandledEventsMask"
            , (unsigned int ( ::osgGA::GUIEventHandler::* )(  )const)( &::osgGA::GUIEventHandler::getIgnoreHandledEventsMask ) )    
        .def( 
            "getUsage"
            , (void ( ::osgGA::GUIEventHandler::* )( ::osg::ApplicationUsage & )const)(&::osgGA::GUIEventHandler::getUsage)
            , (void ( GUIEventHandler_wrapper::* )( ::osg::ApplicationUsage & )const)(&GUIEventHandler_wrapper::default_getUsage)
            , ( bp::arg("arg0") ) )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osgGA::GUIEventHandler::* )( ::osg::Object const * )const)(&::osgGA::GUIEventHandler::isSameKindAs)
            , (bool ( GUIEventHandler_wrapper::* )( ::osg::Object const * )const)(&GUIEventHandler_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgGA::GUIEventHandler::* )(  )const)(&::osgGA::GUIEventHandler::libraryName)
            , (char const * ( GUIEventHandler_wrapper::* )(  )const)(&GUIEventHandler_wrapper::default_libraryName) )    
        .def( 
            "__call__"
            , (void ( ::osgGA::GUIEventHandler::* )( ::osg::Node *,::osg::NodeVisitor * ))(&::osgGA::GUIEventHandler::operator())
            , (void ( GUIEventHandler_wrapper::* )( ::osg::Node *,::osg::NodeVisitor * ))(&GUIEventHandler_wrapper::default___call__)
            , ( bp::arg("node"), bp::arg("nv") ) )    
        .def( 
            "setIgnoreHandledEventsMask"
            , (void ( ::osgGA::GUIEventHandler::* )( unsigned int ))( &::osgGA::GUIEventHandler::setIgnoreHandledEventsMask )
            , ( bp::arg("mask") ) );

}
