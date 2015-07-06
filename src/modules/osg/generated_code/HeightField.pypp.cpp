// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "heightfield.pypp.hpp"

namespace bp = boost::python;

struct HeightField_wrapper : osg::HeightField, bp::wrapper< osg::HeightField > {

    HeightField_wrapper( )
    : osg::HeightField( )
      , bp::wrapper< osg::HeightField >(){
        // null constructor
    
    }

    virtual void accept( ::osg::ShapeVisitor & sv ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(sv) );
        else{
            this->osg::HeightField::accept( boost::ref(sv) );
        }
    }
    
    void default_accept( ::osg::ShapeVisitor & sv ) {
        osg::HeightField::accept( boost::ref(sv) );
    }

    virtual void accept( ::osg::ConstShapeVisitor & csv ) const  {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(csv) );
        else{
            this->osg::HeightField::accept( boost::ref(csv) );
        }
    }
    
    void default_accept( ::osg::ConstShapeVisitor & csv ) const  {
        osg::HeightField::accept( boost::ref(csv) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::HeightField::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::HeightField::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::HeightField::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::HeightField::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::HeightField::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::HeightField::cloneType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::HeightField::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::HeightField::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::HeightField::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::HeightField::libraryName( );
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

void register_HeightField_class(){

    bp::class_< HeightField_wrapper, bp::bases< osg::Shape >, osg::ref_ptr< ::osg::HeightField >, boost::noncopyable >( "HeightField", bp::no_init )    
        .def( bp::init< >() )    
        .def( 
            "accept"
            , (void ( ::osg::HeightField::* )( ::osg::ShapeVisitor & ))(&::osg::HeightField::accept)
            , (void ( HeightField_wrapper::* )( ::osg::ShapeVisitor & ))(&HeightField_wrapper::default_accept)
            , ( bp::arg("sv") ) )    
        .def( 
            "accept"
            , (void ( ::osg::HeightField::* )( ::osg::ConstShapeVisitor & )const)(&::osg::HeightField::accept)
            , (void ( HeightField_wrapper::* )( ::osg::ConstShapeVisitor & )const)(&HeightField_wrapper::default_accept)
            , ( bp::arg("csv") ) )    
        .def( 
            "allocate"
            , (void ( ::osg::HeightField::* )( unsigned int,unsigned int ))( &::osg::HeightField::allocate )
            , ( bp::arg("numColumns"), bp::arg("numRows") ) )    
        .def( 
            "className"
            , (char const * ( ::osg::HeightField::* )(  )const)(&::osg::HeightField::className)
            , (char const * ( HeightField_wrapper::* )(  )const)(&HeightField_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osg::HeightField::* )( ::osg::CopyOp const & )const)(&::osg::HeightField::clone)
            , (::osg::Object * ( HeightField_wrapper::* )( ::osg::CopyOp const & )const)(&HeightField_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osg::HeightField::* )(  )const)(&::osg::HeightField::cloneType)
            , (::osg::Object * ( HeightField_wrapper::* )(  )const)(&HeightField_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "computeRotationMatrix"
            , (::osg::Matrix ( ::osg::HeightField::* )(  )const)( &::osg::HeightField::computeRotationMatrix ) )    
        .def( 
            "getBorderWidth"
            , (unsigned int ( ::osg::HeightField::* )(  )const)( &::osg::HeightField::getBorderWidth )
            , " Get the width in number of cells in from the edge that the height field should be rendered from." )    
        .def( 
            "getFloatArray"
            , (::osg::FloatArray * ( ::osg::HeightField::* )(  ))( &::osg::HeightField::getFloatArray )
            , bp::return_internal_reference< >()
            , " Get the FloatArray height data." )    
        .def( 
            "getFloatArray"
            , (::osg::FloatArray const * ( ::osg::HeightField::* )(  )const)( &::osg::HeightField::getFloatArray )
            , bp::return_internal_reference< >()
            , " Get the const FloatArray height data." )    
        .def( 
            "getHeight"
            , (float & ( ::osg::HeightField::* )( unsigned int,unsigned int ))( &::osg::HeightField::getHeight )
            , ( bp::arg("c"), bp::arg("r") )
            , bp::return_value_policy< bp::copy_non_const_reference >() )    
        .def( 
            "getHeight"
            , (float ( ::osg::HeightField::* )( unsigned int,unsigned int )const)( &::osg::HeightField::getHeight )
            , ( bp::arg("c"), bp::arg("r") ) )    
        .def( 
            "getHeightDelta"
            , (::osg::Vec2 ( ::osg::HeightField::* )( unsigned int,unsigned int )const)( &::osg::HeightField::getHeightDelta )
            , ( bp::arg("c"), bp::arg("r") ) )    
        .def( 
            "getHeightList"
            , (::std::vector< float > & ( ::osg::HeightField::* )(  ))( &::osg::HeightField::getHeightList )
            , bp::return_internal_reference< >() )    
        .def( 
            "getHeightList"
            , (::std::vector< float > const & ( ::osg::HeightField::* )(  )const)( &::osg::HeightField::getHeightList )
            , bp::return_internal_reference< >() )    
        .def( 
            "getNormal"
            , (::osg::Vec3 ( ::osg::HeightField::* )( unsigned int,unsigned int )const)( &::osg::HeightField::getNormal )
            , ( bp::arg("c"), bp::arg("r") ) )    
        .def( 
            "getNumColumns"
            , (unsigned int ( ::osg::HeightField::* )(  )const)( &::osg::HeightField::getNumColumns ) )    
        .def( 
            "getNumRows"
            , (unsigned int ( ::osg::HeightField::* )(  )const)( &::osg::HeightField::getNumRows ) )    
        .def( 
            "getOrigin"
            , (::osg::Vec3 const & ( ::osg::HeightField::* )(  )const)( &::osg::HeightField::getOrigin )
            , bp::return_internal_reference< >() )    
        .def( 
            "getRotation"
            , (::osg::Quat const & ( ::osg::HeightField::* )(  )const)( &::osg::HeightField::getRotation )
            , bp::return_internal_reference< >() )    
        .def( 
            "getSkirtHeight"
            , (float ( ::osg::HeightField::* )(  )const)( &::osg::HeightField::getSkirtHeight )
            , " Get the height of the skirt to render around the edge of HeightField." )    
        .def( 
            "getVertex"
            , (::osg::Vec3 ( ::osg::HeightField::* )( unsigned int,unsigned int )const)( &::osg::HeightField::getVertex )
            , ( bp::arg("c"), bp::arg("r") ) )    
        .def( 
            "getXInterval"
            , (float ( ::osg::HeightField::* )(  )const)( &::osg::HeightField::getXInterval ) )    
        .def( 
            "getYInterval"
            , (float ( ::osg::HeightField::* )(  )const)( &::osg::HeightField::getYInterval ) )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osg::HeightField::* )( ::osg::Object const * )const)(&::osg::HeightField::isSameKindAs)
            , (bool ( HeightField_wrapper::* )( ::osg::Object const * )const)(&HeightField_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osg::HeightField::* )(  )const)(&::osg::HeightField::libraryName)
            , (char const * ( HeightField_wrapper::* )(  )const)(&HeightField_wrapper::default_libraryName) )    
        .def( 
            "setBorderWidth"
            , (void ( ::osg::HeightField::* )( unsigned int ))( &::osg::HeightField::setBorderWidth )
            , ( bp::arg("borderWidth") )
            , " Set the width in number of cells in from the edge that the height field should be rendered from.\n This exists to allow gradient and curvature continutity to be maintained between adjacent HeightField, where\n the border cells will overlap adjacent HeightField." )    
        .def( 
            "setHeight"
            , (void ( ::osg::HeightField::* )( unsigned int,unsigned int,float ))( &::osg::HeightField::setHeight )
            , ( bp::arg("c"), bp::arg("r"), bp::arg("value") ) )    
        .def( 
            "setOrigin"
            , (void ( ::osg::HeightField::* )( ::osg::Vec3 const & ))( &::osg::HeightField::setOrigin )
            , ( bp::arg("origin") ) )    
        .def( 
            "setRotation"
            , (void ( ::osg::HeightField::* )( ::osg::Quat const & ))( &::osg::HeightField::setRotation )
            , ( bp::arg("quat") ) )    
        .def( 
            "setSkirtHeight"
            , (void ( ::osg::HeightField::* )( float ))( &::osg::HeightField::setSkirtHeight )
            , ( bp::arg("skirtHeight") )
            , " Set the height of the skirt to render around the edge of HeightField.\n The skirt is used as a means of disguising edge boundaries between adjacent HeightField,\n particularly of ones with different resolutions." )    
        .def( 
            "setXInterval"
            , (void ( ::osg::HeightField::* )( float ))( &::osg::HeightField::setXInterval )
            , ( bp::arg("dx") ) )    
        .def( 
            "setYInterval"
            , (void ( ::osg::HeightField::* )( float ))( &::osg::HeightField::setYInterval )
            , ( bp::arg("dy") ) )    
        .def( 
            "zeroRotation"
            , (bool ( ::osg::HeightField::* )(  )const)( &::osg::HeightField::zeroRotation ) )    
        .def( 
            "computeDataVariance"
            , (void ( ::osg::Object::* )(  ))(&::osg::Object::computeDataVariance)
            , (void ( HeightField_wrapper::* )(  ))(&HeightField_wrapper::default_computeDataVariance) )    
        .def( 
            "getUserData"
            , (::osg::Referenced * ( ::osg::Object::* )(  ))(&::osg::Object::getUserData)
            , (::osg::Referenced * ( HeightField_wrapper::* )(  ))(&HeightField_wrapper::default_getUserData)
            , bp::return_internal_reference< >() )    
        .def( 
            "getUserData"
            , (::osg::Referenced const * ( ::osg::Object::* )(  )const)(&::osg::Object::getUserData)
            , (::osg::Referenced const * ( HeightField_wrapper::* )(  )const)(&HeightField_wrapper::default_getUserData)
            , bp::return_internal_reference< >() )    
        .def( 
            "resizeGLObjectBuffers"
            , (void ( ::osg::Object::* )( unsigned int ))(&::osg::Object::resizeGLObjectBuffers)
            , (void ( HeightField_wrapper::* )( unsigned int ))(&HeightField_wrapper::default_resizeGLObjectBuffers)
            , ( bp::arg("arg0") ) )    
        .def( 
            "setName"
            , (void ( ::osg::Object::* )( ::std::string const & ))(&::osg::Object::setName)
            , (void ( HeightField_wrapper::* )( ::std::string const & ))(&HeightField_wrapper::default_setName)
            , ( bp::arg("name") ) )    
        .def( 
            "setName"
            , (void ( ::osg::Object::* )( char const * ))( &::osg::Object::setName )
            , ( bp::arg("name") )
            , " Set the name of object using a C style string." )    
        .def( 
            "setThreadSafeRefUnref"
            , (void ( ::osg::Object::* )( bool ))(&::osg::Object::setThreadSafeRefUnref)
            , (void ( HeightField_wrapper::* )( bool ))(&HeightField_wrapper::default_setThreadSafeRefUnref)
            , ( bp::arg("threadSafe") ) )    
        .def( 
            "setUserData"
            , (void ( ::osg::Object::* )( ::osg::Referenced * ))(&::osg::Object::setUserData)
            , (void ( HeightField_wrapper::* )( ::osg::Referenced * ))(&HeightField_wrapper::default_setUserData)
            , ( bp::arg("obj") ) );

}
