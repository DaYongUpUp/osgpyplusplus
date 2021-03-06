// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgsim.h"
#include "wrap_referenced.h"
#include "azimelevationsector.pypp.hpp"

namespace bp = boost::python;

struct AzimElevationSector_wrapper : osgSim::AzimElevationSector, bp::wrapper< osgSim::AzimElevationSector > {

    AzimElevationSector_wrapper( )
    : osgSim::AzimElevationSector( )
      , bp::wrapper< osgSim::AzimElevationSector >(){
        // null constructor
    
    }

    AzimElevationSector_wrapper(float minAzimuth, float maxAzimuth, float minElevation, float maxElevation, float fadeAngle=0.0f )
    : osgSim::AzimElevationSector( minAzimuth, maxAzimuth, minElevation, maxElevation, fadeAngle )
      , bp::wrapper< osgSim::AzimElevationSector >(){
        // constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgSim::AzimElevationSector::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgSim::AzimElevationSector::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgSim::AzimElevationSector::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgSim::AzimElevationSector::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgSim::AzimElevationSector::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgSim::AzimElevationSector::cloneType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgSim::AzimElevationSector::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgSim::AzimElevationSector::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgSim::AzimElevationSector::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgSim::AzimElevationSector::libraryName( );
    }

    virtual float operator()( ::osg::Vec3 const & eyeLocal ) const  {
        if( bp::override func___call__ = this->get_override( "__call__" ) )
            return func___call__( boost::ref(eyeLocal) );
        else{
            return this->osgSim::AzimElevationSector::operator()( boost::ref(eyeLocal) );
        }
    }
    
    float default___call__( ::osg::Vec3 const & eyeLocal ) const  {
        return osgSim::AzimElevationSector::operator()( boost::ref(eyeLocal) );
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

void register_AzimElevationSector_class(){

    bp::class_< AzimElevationSector_wrapper, bp::bases< osgSim::Sector, osgSim::AzimRange, osgSim::ElevationRange >, osg::ref_ptr< AzimElevationSector_wrapper >, boost::noncopyable >( "AzimElevationSector", bp::no_init )    
        .def( bp::init< >() )    
        .def( bp::init< float, float, float, float, bp::optional< float > >(( bp::arg("minAzimuth"), bp::arg("maxAzimuth"), bp::arg("minElevation"), bp::arg("maxElevation"), bp::arg("fadeAngle")=0.0f )) )    
        .def( 
            "className"
            , (char const * ( ::osgSim::AzimElevationSector::* )(  )const)(&::osgSim::AzimElevationSector::className)
            , (char const * ( AzimElevationSector_wrapper::* )(  )const)(&AzimElevationSector_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osgSim::AzimElevationSector::* )( ::osg::CopyOp const & )const)(&::osgSim::AzimElevationSector::clone)
            , (::osg::Object * ( AzimElevationSector_wrapper::* )( ::osg::CopyOp const & )const)(&AzimElevationSector_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osgSim::AzimElevationSector::* )(  )const)(&::osgSim::AzimElevationSector::cloneType)
            , (::osg::Object * ( AzimElevationSector_wrapper::* )(  )const)(&AzimElevationSector_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osgSim::AzimElevationSector::* )( ::osg::Object const * )const)(&::osgSim::AzimElevationSector::isSameKindAs)
            , (bool ( AzimElevationSector_wrapper::* )( ::osg::Object const * )const)(&AzimElevationSector_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgSim::AzimElevationSector::* )(  )const)(&::osgSim::AzimElevationSector::libraryName)
            , (char const * ( AzimElevationSector_wrapper::* )(  )const)(&AzimElevationSector_wrapper::default_libraryName) )    
        .def( 
            "__call__"
            , (float ( ::osgSim::AzimElevationSector::* )( ::osg::Vec3 const & )const)(&::osgSim::AzimElevationSector::operator())
            , (float ( AzimElevationSector_wrapper::* )( ::osg::Vec3 const & )const)(&AzimElevationSector_wrapper::default___call__)
            , ( bp::arg("eyeLocal") ) );

}
