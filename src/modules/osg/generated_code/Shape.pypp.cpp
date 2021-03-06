// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "shape.pypp.hpp"

namespace bp = boost::python;

struct Shape_wrapper : osg::Shape, bp::wrapper< osg::Shape > {

    virtual void accept( ::osg::ShapeVisitor & arg0 ){
        bp::override func_accept = this->get_override( "accept" );
        func_accept( boost::ref(arg0) );
    }

    virtual void accept( ::osg::ConstShapeVisitor & arg0 ) const {
        bp::override func_accept = this->get_override( "accept" );
        func_accept( boost::ref(arg0) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::Shape::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::Shape::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & arg0 ) const {
        bp::override func_clone = this->get_override( "clone" );
        return func_clone( boost::ref(arg0) );
    }

    virtual ::osg::Object * cloneType(  ) const {
        bp::override func_cloneType = this->get_override( "cloneType" );
        return func_cloneType(  );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::Shape::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::Shape::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::Shape::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::Shape::libraryName( );
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

void register_Shape_class(){

    bp::class_< Shape_wrapper, bp::bases< osg::Object >, osg::ref_ptr< ::osg::Shape >, boost::noncopyable >( "Shape", "\n Base class for all shape types.\n Shapes are used to either for culling and collision detection or\n to define the geometric shape of procedurally generate Geometry.\n", bp::no_init )    
        .def( 
            "accept"
            , bp::pure_virtual( (void ( ::osg::Shape::* )( ::osg::ShapeVisitor & ))(&::osg::Shape::accept) )
            , ( bp::arg("arg0") )
            , "\n accept a non const shape visitor which can be used on non const shape objects.\n            Must be defined by derived classes.\n" )    
        .def( 
            "accept"
            , bp::pure_virtual( (void ( ::osg::Shape::* )( ::osg::ConstShapeVisitor & )const)(&::osg::Shape::accept) )
            , ( bp::arg("arg0") )
            , "\n accept a const shape visitor which can be used on const shape objects.\n            Must be defined by derived classes.\n" )    
        .def( 
            "className"
            , (char const * ( ::osg::Shape::* )(  )const)(&::osg::Shape::className)
            , (char const * ( Shape_wrapper::* )(  )const)(&Shape_wrapper::default_className) )    
        .def( 
            "clone"
            , bp::pure_virtual( (::osg::Object * ( ::osg::Shape::* )( ::osg::CopyOp const & )const)(&::osg::Shape::clone) )
            , ( bp::arg("arg0") )
            , bp::return_value_policy< bp::reference_existing_object >()
            , "\n Clone an attribute, with Object* return type.\n            Must be defined by derived classes.\n" )    
        .def( 
            "cloneType"
            , bp::pure_virtual( (::osg::Object * ( ::osg::Shape::* )(  )const)(&::osg::Shape::cloneType) )
            , bp::return_value_policy< bp::reference_existing_object >()
            , "\n Clone the type of an attribute, with Object* return type.\n            Must be defined by derived classes.\n" )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osg::Shape::* )( ::osg::Object const * )const)(&::osg::Shape::isSameKindAs)
            , (bool ( Shape_wrapper::* )( ::osg::Object const * )const)(&Shape_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osg::Shape::* )(  )const)(&::osg::Shape::libraryName)
            , (char const * ( Shape_wrapper::* )(  )const)(&Shape_wrapper::default_libraryName) )    
        .def( 
            "computeDataVariance"
            , (void ( ::osg::Object::* )(  ))(&::osg::Object::computeDataVariance)
            , (void ( Shape_wrapper::* )(  ))(&Shape_wrapper::default_computeDataVariance) )    
        .def( 
            "getUserData"
            , (::osg::Referenced * ( ::osg::Object::* )(  ))(&::osg::Object::getUserData)
            , (::osg::Referenced * ( Shape_wrapper::* )(  ))(&Shape_wrapper::default_getUserData)
            , bp::return_internal_reference< >() )    
        .def( 
            "getUserData"
            , (::osg::Referenced const * ( ::osg::Object::* )(  )const)(&::osg::Object::getUserData)
            , (::osg::Referenced const * ( Shape_wrapper::* )(  )const)(&Shape_wrapper::default_getUserData)
            , bp::return_internal_reference< >() )    
        .def( 
            "resizeGLObjectBuffers"
            , (void ( ::osg::Object::* )( unsigned int ))(&::osg::Object::resizeGLObjectBuffers)
            , (void ( Shape_wrapper::* )( unsigned int ))(&Shape_wrapper::default_resizeGLObjectBuffers)
            , ( bp::arg("arg0") ) )    
        .def( 
            "setName"
            , (void ( ::osg::Object::* )( ::std::string const & ))(&::osg::Object::setName)
            , (void ( Shape_wrapper::* )( ::std::string const & ))(&Shape_wrapper::default_setName)
            , ( bp::arg("name") ) )    
        .def( 
            "setName"
            , (void ( ::osg::Object::* )( char const * ))( &::osg::Object::setName )
            , ( bp::arg("name") )
            , " Set the name of object using a C style string." )    
        .def( 
            "setThreadSafeRefUnref"
            , (void ( ::osg::Object::* )( bool ))(&::osg::Object::setThreadSafeRefUnref)
            , (void ( Shape_wrapper::* )( bool ))(&Shape_wrapper::default_setThreadSafeRefUnref)
            , ( bp::arg("threadSafe") ) )    
        .def( 
            "setUserData"
            , (void ( ::osg::Object::* )( ::osg::Referenced * ))(&::osg::Object::setUserData)
            , (void ( Shape_wrapper::* )( ::osg::Referenced * ))(&Shape_wrapper::default_setUserData)
            , ( bp::arg("obj") ) );

}
