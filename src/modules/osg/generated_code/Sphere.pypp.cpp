// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "sphere.pypp.hpp"

namespace bp = boost::python;

struct Sphere_wrapper : osg::Sphere, bp::wrapper< osg::Sphere > {

    Sphere_wrapper( )
    : osg::Sphere( )
      , bp::wrapper< osg::Sphere >(){
        // null constructor
    
    }

    Sphere_wrapper(::osg::Vec3 const & center, float radius )
    : osg::Sphere( boost::ref(center), radius )
      , bp::wrapper< osg::Sphere >(){
        // constructor
    
    }

    virtual void accept( ::osg::ShapeVisitor & sv ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(sv) );
        else{
            this->osg::Sphere::accept( boost::ref(sv) );
        }
    }
    
    void default_accept( ::osg::ShapeVisitor & sv ) {
        osg::Sphere::accept( boost::ref(sv) );
    }

    virtual void accept( ::osg::ConstShapeVisitor & csv ) const  {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(csv) );
        else{
            this->osg::Sphere::accept( boost::ref(csv) );
        }
    }
    
    void default_accept( ::osg::ConstShapeVisitor & csv ) const  {
        osg::Sphere::accept( boost::ref(csv) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::Sphere::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::Sphere::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::Sphere::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::Sphere::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::Sphere::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::Sphere::cloneType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::Sphere::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::Sphere::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::Sphere::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::Sphere::libraryName( );
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

void register_Sphere_class(){

    bp::class_< Sphere_wrapper, bp::bases< osg::Shape >, osg::ref_ptr< ::osg::Sphere >, boost::noncopyable >( "Sphere", bp::no_init )    
        .def( bp::init< >() )    
        .def( bp::init< osg::Vec3 const &, float >(( bp::arg("center"), bp::arg("radius") )) )    
        .def( 
            "accept"
            , (void ( ::osg::Sphere::* )( ::osg::ShapeVisitor & ))(&::osg::Sphere::accept)
            , (void ( Sphere_wrapper::* )( ::osg::ShapeVisitor & ))(&Sphere_wrapper::default_accept)
            , ( bp::arg("sv") ) )    
        .def( 
            "accept"
            , (void ( ::osg::Sphere::* )( ::osg::ConstShapeVisitor & )const)(&::osg::Sphere::accept)
            , (void ( Sphere_wrapper::* )( ::osg::ConstShapeVisitor & )const)(&Sphere_wrapper::default_accept)
            , ( bp::arg("csv") ) )    
        .def( 
            "className"
            , (char const * ( ::osg::Sphere::* )(  )const)(&::osg::Sphere::className)
            , (char const * ( Sphere_wrapper::* )(  )const)(&Sphere_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osg::Sphere::* )( ::osg::CopyOp const & )const)(&::osg::Sphere::clone)
            , (::osg::Object * ( Sphere_wrapper::* )( ::osg::CopyOp const & )const)(&Sphere_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osg::Sphere::* )(  )const)(&::osg::Sphere::cloneType)
            , (::osg::Object * ( Sphere_wrapper::* )(  )const)(&Sphere_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "getCenter"
            , (::osg::Vec3 const & ( ::osg::Sphere::* )(  )const)( &::osg::Sphere::getCenter )
            , bp::return_internal_reference< >() )    
        .def( 
            "getRadius"
            , (float ( ::osg::Sphere::* )(  )const)( &::osg::Sphere::getRadius ) )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osg::Sphere::* )( ::osg::Object const * )const)(&::osg::Sphere::isSameKindAs)
            , (bool ( Sphere_wrapper::* )( ::osg::Object const * )const)(&Sphere_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osg::Sphere::* )(  )const)(&::osg::Sphere::libraryName)
            , (char const * ( Sphere_wrapper::* )(  )const)(&Sphere_wrapper::default_libraryName) )    
        .def( 
            "set"
            , (void ( ::osg::Sphere::* )( ::osg::Vec3 const &,float ))( &::osg::Sphere::set )
            , ( bp::arg("center"), bp::arg("radius") ) )    
        .def( 
            "setCenter"
            , (void ( ::osg::Sphere::* )( ::osg::Vec3 const & ))( &::osg::Sphere::setCenter )
            , ( bp::arg("center") ) )    
        .def( 
            "setRadius"
            , (void ( ::osg::Sphere::* )( float ))( &::osg::Sphere::setRadius )
            , ( bp::arg("radius") ) )    
        .def( 
            "valid"
            , (bool ( ::osg::Sphere::* )(  )const)( &::osg::Sphere::valid ) )    
        .def( 
            "computeDataVariance"
            , (void ( ::osg::Object::* )(  ))(&::osg::Object::computeDataVariance)
            , (void ( Sphere_wrapper::* )(  ))(&Sphere_wrapper::default_computeDataVariance) )    
        .def( 
            "getUserData"
            , (::osg::Referenced * ( ::osg::Object::* )(  ))(&::osg::Object::getUserData)
            , (::osg::Referenced * ( Sphere_wrapper::* )(  ))(&Sphere_wrapper::default_getUserData)
            , bp::return_internal_reference< >() )    
        .def( 
            "getUserData"
            , (::osg::Referenced const * ( ::osg::Object::* )(  )const)(&::osg::Object::getUserData)
            , (::osg::Referenced const * ( Sphere_wrapper::* )(  )const)(&Sphere_wrapper::default_getUserData)
            , bp::return_internal_reference< >() )    
        .def( 
            "resizeGLObjectBuffers"
            , (void ( ::osg::Object::* )( unsigned int ))(&::osg::Object::resizeGLObjectBuffers)
            , (void ( Sphere_wrapper::* )( unsigned int ))(&Sphere_wrapper::default_resizeGLObjectBuffers)
            , ( bp::arg("arg0") ) )    
        .def( 
            "setName"
            , (void ( ::osg::Object::* )( ::std::string const & ))(&::osg::Object::setName)
            , (void ( Sphere_wrapper::* )( ::std::string const & ))(&Sphere_wrapper::default_setName)
            , ( bp::arg("name") ) )    
        .def( 
            "setName"
            , (void ( ::osg::Object::* )( char const * ))( &::osg::Object::setName )
            , ( bp::arg("name") ) )    
        .def( 
            "setThreadSafeRefUnref"
            , (void ( ::osg::Object::* )( bool ))(&::osg::Object::setThreadSafeRefUnref)
            , (void ( Sphere_wrapper::* )( bool ))(&Sphere_wrapper::default_setThreadSafeRefUnref)
            , ( bp::arg("threadSafe") ) )    
        .def( 
            "setUserData"
            , (void ( ::osg::Object::* )( ::osg::Referenced * ))(&::osg::Object::setUserData)
            , (void ( Sphere_wrapper::* )( ::osg::Referenced * ))(&Sphere_wrapper::default_setUserData)
            , ( bp::arg("obj") ) );

}
