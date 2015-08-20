// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgparticle.h"
#include "wrap_referenced.h"
#include "randomratecounter.pypp.hpp"

namespace bp = boost::python;

struct RandomRateCounter_wrapper : osgParticle::RandomRateCounter, bp::wrapper< osgParticle::RandomRateCounter > {

    RandomRateCounter_wrapper( )
    : osgParticle::RandomRateCounter( )
      , bp::wrapper< osgParticle::RandomRateCounter >(){
        // null constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgParticle::RandomRateCounter::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgParticle::RandomRateCounter::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgParticle::RandomRateCounter::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgParticle::RandomRateCounter::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgParticle::RandomRateCounter::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgParticle::RandomRateCounter::cloneType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgParticle::RandomRateCounter::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgParticle::RandomRateCounter::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgParticle::RandomRateCounter::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgParticle::RandomRateCounter::libraryName( );
    }

    virtual int numParticlesToCreate( double dt ) const  {
        if( bp::override func_numParticlesToCreate = this->get_override( "numParticlesToCreate" ) )
            return func_numParticlesToCreate( dt );
        else{
            return this->osgParticle::RandomRateCounter::numParticlesToCreate( dt );
        }
    }
    
    int default_numParticlesToCreate( double dt ) const  {
        return osgParticle::RandomRateCounter::numParticlesToCreate( dt );
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

void register_RandomRateCounter_class(){

    bp::class_< RandomRateCounter_wrapper, bp::bases< osgParticle::VariableRateCounter >, osg::ref_ptr< RandomRateCounter_wrapper >, boost::noncopyable >( "RandomRateCounter", bp::no_init )    
        .def( bp::init< >() )    
        .def( 
            "className"
            , (char const * ( ::osgParticle::RandomRateCounter::* )(  )const)(&::osgParticle::RandomRateCounter::className)
            , (char const * ( RandomRateCounter_wrapper::* )(  )const)(&RandomRateCounter_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osgParticle::RandomRateCounter::* )( ::osg::CopyOp const & )const)(&::osgParticle::RandomRateCounter::clone)
            , (::osg::Object * ( RandomRateCounter_wrapper::* )( ::osg::CopyOp const & )const)(&RandomRateCounter_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osgParticle::RandomRateCounter::* )(  )const)(&::osgParticle::RandomRateCounter::cloneType)
            , (::osg::Object * ( RandomRateCounter_wrapper::* )(  )const)(&RandomRateCounter_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osgParticle::RandomRateCounter::* )( ::osg::Object const * )const)(&::osgParticle::RandomRateCounter::isSameKindAs)
            , (bool ( RandomRateCounter_wrapper::* )( ::osg::Object const * )const)(&RandomRateCounter_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgParticle::RandomRateCounter::* )(  )const)(&::osgParticle::RandomRateCounter::libraryName)
            , (char const * ( RandomRateCounter_wrapper::* )(  )const)(&RandomRateCounter_wrapper::default_libraryName) )    
        .def( 
            "numParticlesToCreate"
            , (int ( ::osgParticle::RandomRateCounter::* )( double )const)(&::osgParticle::RandomRateCounter::numParticlesToCreate)
            , (int ( RandomRateCounter_wrapper::* )( double )const)(&RandomRateCounter_wrapper::default_numParticlesToCreate)
            , ( bp::arg("dt") ) );

}