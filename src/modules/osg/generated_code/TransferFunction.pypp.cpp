// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "transferfunction.pypp.hpp"

namespace bp = boost::python;

struct TransferFunction_wrapper : osg::TransferFunction, bp::wrapper< osg::TransferFunction > {

    TransferFunction_wrapper( )
    : osg::TransferFunction( )
      , bp::wrapper< osg::TransferFunction >(){
        // null constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::TransferFunction::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::TransferFunction::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::TransferFunction::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::TransferFunction::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::TransferFunction::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::TransferFunction::cloneType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::TransferFunction::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::TransferFunction::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::TransferFunction::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::TransferFunction::libraryName( );
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

void register_TransferFunction_class(){

    bp::class_< TransferFunction_wrapper, bp::bases< osg::Object >, osg::ref_ptr< ::osg::TransferFunction >, boost::noncopyable >( "TransferFunction", "\n TransferFunction is a class that provide a 1D,2D or 3D colour look up table\n that can be used on the GPU as a 1D, 2D or 3D texture.\n Typically uses include mapping heights to colours when contouring terrain,\n or mapping intensities to colours when volume rendering.\n", bp::no_init )    
        .def( bp::init< >("\n TransferFunction is a class that provide a 1D,2D or 3D colour look up table\n that can be used on the GPU as a 1D, 2D or 3D texture.\n Typically uses include mapping heights to colours when contouring terrain,\n or mapping intensities to colours when volume rendering.\n") )    
        .def( 
            "className"
            , (char const * ( ::osg::TransferFunction::* )(  )const)(&::osg::TransferFunction::className)
            , (char const * ( TransferFunction_wrapper::* )(  )const)(&TransferFunction_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osg::TransferFunction::* )( ::osg::CopyOp const & )const)(&::osg::TransferFunction::clone)
            , (::osg::Object * ( TransferFunction_wrapper::* )( ::osg::CopyOp const & )const)(&TransferFunction_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osg::TransferFunction::* )(  )const)(&::osg::TransferFunction::cloneType)
            , (::osg::Object * ( TransferFunction_wrapper::* )(  )const)(&TransferFunction_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "getImage"
            , (::osg::Image * ( ::osg::TransferFunction::* )(  ))( &::osg::TransferFunction::getImage )
            , bp::return_internal_reference< >()
            , " Get the image that is used for passing the transfer function data to the GPU." )    
        .def( 
            "getImage"
            , (::osg::Image const * ( ::osg::TransferFunction::* )(  )const)( &::osg::TransferFunction::getImage )
            , bp::return_internal_reference< >()
            , " Get the const image that is used for passing the transfer function data to the GPU." )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osg::TransferFunction::* )( ::osg::Object const * )const)(&::osg::TransferFunction::isSameKindAs)
            , (bool ( TransferFunction_wrapper::* )( ::osg::Object const * )const)(&TransferFunction_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osg::TransferFunction::* )(  )const)(&::osg::TransferFunction::libraryName)
            , (char const * ( TransferFunction_wrapper::* )(  )const)(&TransferFunction_wrapper::default_libraryName) )    
        .def( 
            "computeDataVariance"
            , (void ( ::osg::Object::* )(  ))(&::osg::Object::computeDataVariance)
            , (void ( TransferFunction_wrapper::* )(  ))(&TransferFunction_wrapper::default_computeDataVariance) )    
        .def( 
            "getUserData"
            , (::osg::Referenced * ( ::osg::Object::* )(  ))(&::osg::Object::getUserData)
            , (::osg::Referenced * ( TransferFunction_wrapper::* )(  ))(&TransferFunction_wrapper::default_getUserData)
            , bp::return_internal_reference< >() )    
        .def( 
            "getUserData"
            , (::osg::Referenced const * ( ::osg::Object::* )(  )const)(&::osg::Object::getUserData)
            , (::osg::Referenced const * ( TransferFunction_wrapper::* )(  )const)(&TransferFunction_wrapper::default_getUserData)
            , bp::return_internal_reference< >() )    
        .def( 
            "resizeGLObjectBuffers"
            , (void ( ::osg::Object::* )( unsigned int ))(&::osg::Object::resizeGLObjectBuffers)
            , (void ( TransferFunction_wrapper::* )( unsigned int ))(&TransferFunction_wrapper::default_resizeGLObjectBuffers)
            , ( bp::arg("arg0") ) )    
        .def( 
            "setName"
            , (void ( ::osg::Object::* )( ::std::string const & ))(&::osg::Object::setName)
            , (void ( TransferFunction_wrapper::* )( ::std::string const & ))(&TransferFunction_wrapper::default_setName)
            , ( bp::arg("name") ) )    
        .def( 
            "setName"
            , (void ( ::osg::Object::* )( char const * ))( &::osg::Object::setName )
            , ( bp::arg("name") )
            , " Set the name of object using a C style string." )    
        .def( 
            "setThreadSafeRefUnref"
            , (void ( ::osg::Object::* )( bool ))(&::osg::Object::setThreadSafeRefUnref)
            , (void ( TransferFunction_wrapper::* )( bool ))(&TransferFunction_wrapper::default_setThreadSafeRefUnref)
            , ( bp::arg("threadSafe") ) )    
        .def( 
            "setUserData"
            , (void ( ::osg::Object::* )( ::osg::Referenced * ))(&::osg::Object::setUserData)
            , (void ( TransferFunction_wrapper::* )( ::osg::Referenced * ))(&TransferFunction_wrapper::default_setUserData)
            , ( bp::arg("obj") ) );

}