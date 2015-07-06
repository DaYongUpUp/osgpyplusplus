// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgtext.h"
#include "wrap_referenced.h"
#include "bevel.pypp.hpp"

namespace bp = boost::python;

struct Bevel_wrapper : osgText::Bevel, bp::wrapper< osgText::Bevel > {

    Bevel_wrapper( )
    : osgText::Bevel( )
      , bp::wrapper< osgText::Bevel >(){
        // null constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgText::Bevel::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgText::Bevel::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgText::Bevel::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgText::Bevel::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgText::Bevel::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgText::Bevel::cloneType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgText::Bevel::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgText::Bevel::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgText::Bevel::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgText::Bevel::libraryName( );
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

void register_Bevel_class(){

    bp::class_< Bevel_wrapper, bp::bases< ::osg::Object >, osg::ref_ptr< ::osgText::Bevel >, boost::noncopyable >( "Bevel", bp::init< >() )    
        .def( 
            "className"
            , (char const * ( ::osgText::Bevel::* )(  )const)(&::osgText::Bevel::className)
            , (char const * ( Bevel_wrapper::* )(  )const)(&Bevel_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osgText::Bevel::* )( ::osg::CopyOp const & )const)(&::osgText::Bevel::clone)
            , (::osg::Object * ( Bevel_wrapper::* )( ::osg::CopyOp const & )const)(&Bevel_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osgText::Bevel::* )(  )const)(&::osgText::Bevel::cloneType)
            , (::osg::Object * ( Bevel_wrapper::* )(  )const)(&Bevel_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "flatBevel"
            , (void ( ::osgText::Bevel::* )( float ))( &::osgText::Bevel::flatBevel )
            , ( bp::arg("width")=2.5e-1f ) )    
        .def( 
            "getBevelThickness"
            , (float ( ::osgText::Bevel::* )(  )const)( &::osgText::Bevel::getBevelThickness ) )    
        .def( 
            "getVertices"
            , (::std::vector< osg::Vec2f > & ( ::osgText::Bevel::* )(  ))( &::osgText::Bevel::getVertices )
            , bp::return_internal_reference< >() )    
        .def( 
            "getVertices"
            , (::std::vector< osg::Vec2f > const & ( ::osgText::Bevel::* )(  )const)( &::osgText::Bevel::getVertices )
            , bp::return_internal_reference< >() )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osgText::Bevel::* )( ::osg::Object const * )const)(&::osgText::Bevel::isSameKindAs)
            , (bool ( Bevel_wrapper::* )( ::osg::Object const * )const)(&Bevel_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgText::Bevel::* )(  )const)(&::osgText::Bevel::libraryName)
            , (char const * ( Bevel_wrapper::* )(  )const)(&Bevel_wrapper::default_libraryName) )    
        .def( bp::self == bp::self )    
        .def( 
            "print"
            , (void ( ::osgText::Bevel::* )( ::std::ostream & ))( &::osgText::Bevel::print )
            , ( bp::arg("fout") ) )    
        .def( 
            "roundedBevel"
            , (void ( ::osgText::Bevel::* )( float,unsigned int ))( &::osgText::Bevel::roundedBevel )
            , ( bp::arg("width")=5.0e-1f, bp::arg("numSteps")=(unsigned int)(10) ) )    
        .def( 
            "roundedBevel2"
            , (void ( ::osgText::Bevel::* )( float,unsigned int ))( &::osgText::Bevel::roundedBevel2 )
            , ( bp::arg("width")=5.0e-1f, bp::arg("numSteps")=(unsigned int)(10) ) )    
        .def( 
            "setBevelThickness"
            , (void ( ::osgText::Bevel::* )( float ))( &::osgText::Bevel::setBevelThickness )
            , ( bp::arg("thickness") ) )    
        .def( 
            "setVertices"
            , (void ( ::osgText::Bevel::* )( ::std::vector< osg::Vec2f > const & ))( &::osgText::Bevel::setVertices )
            , ( bp::arg("vertices") ) );

}
