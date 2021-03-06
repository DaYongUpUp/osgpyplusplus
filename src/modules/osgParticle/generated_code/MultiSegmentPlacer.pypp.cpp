// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgparticle.h"
#include "wrap_referenced.h"
#include "multisegmentplacer.pypp.hpp"

namespace bp = boost::python;

struct MultiSegmentPlacer_wrapper : osgParticle::MultiSegmentPlacer, bp::wrapper< osgParticle::MultiSegmentPlacer > {

    MultiSegmentPlacer_wrapper( )
    : osgParticle::MultiSegmentPlacer( )
      , bp::wrapper< osgParticle::MultiSegmentPlacer >(){
        // null constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgParticle::MultiSegmentPlacer::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgParticle::MultiSegmentPlacer::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgParticle::MultiSegmentPlacer::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgParticle::MultiSegmentPlacer::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgParticle::MultiSegmentPlacer::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgParticle::MultiSegmentPlacer::cloneType( );
    }

    virtual ::osg::Vec3 getControlPosition(  ) const  {
        if( bp::override func_getControlPosition = this->get_override( "getControlPosition" ) )
            return func_getControlPosition(  );
        else{
            return this->osgParticle::MultiSegmentPlacer::getControlPosition(  );
        }
    }
    
    ::osg::Vec3 default_getControlPosition(  ) const  {
        return osgParticle::MultiSegmentPlacer::getControlPosition( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgParticle::MultiSegmentPlacer::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgParticle::MultiSegmentPlacer::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgParticle::MultiSegmentPlacer::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgParticle::MultiSegmentPlacer::libraryName( );
    }

    virtual void place( ::osgParticle::Particle * P ) const  {
        if( bp::override func_place = this->get_override( "place" ) )
            func_place( boost::python::ptr(P) );
        else{
            this->osgParticle::MultiSegmentPlacer::place( boost::python::ptr(P) );
        }
    }
    
    void default_place( ::osgParticle::Particle * P ) const  {
        osgParticle::MultiSegmentPlacer::place( boost::python::ptr(P) );
    }

    virtual float volume(  ) const  {
        if( bp::override func_volume = this->get_override( "volume" ) )
            return func_volume(  );
        else{
            return this->osgParticle::MultiSegmentPlacer::volume(  );
        }
    }
    
    float default_volume(  ) const  {
        return osgParticle::MultiSegmentPlacer::volume( );
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

void register_MultiSegmentPlacer_class(){

    bp::class_< MultiSegmentPlacer_wrapper, bp::bases< osgParticle::Placer >, osg::ref_ptr< MultiSegmentPlacer_wrapper >, boost::noncopyable >( "MultiSegmentPlacer", "\n A polyline-shaped particle placer.\n        This placer class sets the position of incoming particles by choosing a random point on the\n        specified sequence of connected segments.\n", bp::no_init )    
        .def( bp::init< >("\n A polyline-shaped particle placer.\n        This placer class sets the position of incoming particles by choosing a random point on the\n        specified sequence of connected segments.\n") )    
        .def( 
            "addVertex"
            , (void ( ::osgParticle::MultiSegmentPlacer::* )( ::osg::Vec3 const & ))( &::osgParticle::MultiSegmentPlacer::addVertex )
            , ( bp::arg("v") ) )    
        .def( 
            "addVertex"
            , (void ( ::osgParticle::MultiSegmentPlacer::* )( float,float,float ))( &::osgParticle::MultiSegmentPlacer::addVertex )
            , ( bp::arg("x"), bp::arg("y"), bp::arg("z") ) )    
        .def( 
            "className"
            , (char const * ( ::osgParticle::MultiSegmentPlacer::* )(  )const)(&::osgParticle::MultiSegmentPlacer::className)
            , (char const * ( MultiSegmentPlacer_wrapper::* )(  )const)(&MultiSegmentPlacer_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osgParticle::MultiSegmentPlacer::* )( ::osg::CopyOp const & )const)(&::osgParticle::MultiSegmentPlacer::clone)
            , (::osg::Object * ( MultiSegmentPlacer_wrapper::* )( ::osg::CopyOp const & )const)(&MultiSegmentPlacer_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osgParticle::MultiSegmentPlacer::* )(  )const)(&::osgParticle::MultiSegmentPlacer::cloneType)
            , (::osg::Object * ( MultiSegmentPlacer_wrapper::* )(  )const)(&MultiSegmentPlacer_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "getControlPosition"
            , (::osg::Vec3 ( ::osgParticle::MultiSegmentPlacer::* )(  )const)(&::osgParticle::MultiSegmentPlacer::getControlPosition)
            , (::osg::Vec3 ( MultiSegmentPlacer_wrapper::* )(  )const)(&MultiSegmentPlacer_wrapper::default_getControlPosition) )    
        .def( 
            "getVertex"
            , (::osg::Vec3 const & ( ::osgParticle::MultiSegmentPlacer::* )( int )const)( &::osgParticle::MultiSegmentPlacer::getVertex )
            , ( bp::arg("i") )
            , bp::return_internal_reference< >() )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osgParticle::MultiSegmentPlacer::* )( ::osg::Object const * )const)(&::osgParticle::MultiSegmentPlacer::isSameKindAs)
            , (bool ( MultiSegmentPlacer_wrapper::* )( ::osg::Object const * )const)(&MultiSegmentPlacer_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgParticle::MultiSegmentPlacer::* )(  )const)(&::osgParticle::MultiSegmentPlacer::libraryName)
            , (char const * ( MultiSegmentPlacer_wrapper::* )(  )const)(&MultiSegmentPlacer_wrapper::default_libraryName) )    
        .def( 
            "numVertices"
            , (int ( ::osgParticle::MultiSegmentPlacer::* )(  )const)( &::osgParticle::MultiSegmentPlacer::numVertices ) )    
        .def( 
            "place"
            , (void ( ::osgParticle::MultiSegmentPlacer::* )( ::osgParticle::Particle * )const)(&::osgParticle::MultiSegmentPlacer::place)
            , (void ( MultiSegmentPlacer_wrapper::* )( ::osgParticle::Particle * )const)(&MultiSegmentPlacer_wrapper::default_place)
            , ( bp::arg("P") ) )    
        .def( 
            "removeVertex"
            , (void ( ::osgParticle::MultiSegmentPlacer::* )( int ))( &::osgParticle::MultiSegmentPlacer::removeVertex )
            , ( bp::arg("i") ) )    
        .def( 
            "setVertex"
            , (void ( ::osgParticle::MultiSegmentPlacer::* )( int,::osg::Vec3 const & ))( &::osgParticle::MultiSegmentPlacer::setVertex )
            , ( bp::arg("i"), bp::arg("v") ) )    
        .def( 
            "setVertex"
            , (void ( ::osgParticle::MultiSegmentPlacer::* )( int,float,float,float ))( &::osgParticle::MultiSegmentPlacer::setVertex )
            , ( bp::arg("i"), bp::arg("x"), bp::arg("y"), bp::arg("z") ) )    
        .def( 
            "volume"
            , (float ( ::osgParticle::MultiSegmentPlacer::* )(  )const)(&::osgParticle::MultiSegmentPlacer::volume)
            , (float ( MultiSegmentPlacer_wrapper::* )(  )const)(&MultiSegmentPlacer_wrapper::default_volume) );

}
