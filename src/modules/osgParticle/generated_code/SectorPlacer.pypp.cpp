// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgparticle.h"
#include "wrap_referenced.h"
#include "sectorplacer.pypp.hpp"

namespace bp = boost::python;

struct SectorPlacer_wrapper : osgParticle::SectorPlacer, bp::wrapper< osgParticle::SectorPlacer > {

    SectorPlacer_wrapper( )
    : osgParticle::SectorPlacer( )
      , bp::wrapper< osgParticle::SectorPlacer >(){
        // null constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgParticle::SectorPlacer::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgParticle::SectorPlacer::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgParticle::SectorPlacer::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgParticle::SectorPlacer::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgParticle::SectorPlacer::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgParticle::SectorPlacer::cloneType( );
    }

    virtual ::osg::Vec3 getControlPosition(  ) const  {
        if( bp::override func_getControlPosition = this->get_override( "getControlPosition" ) )
            return func_getControlPosition(  );
        else{
            return this->osgParticle::SectorPlacer::getControlPosition(  );
        }
    }
    
    ::osg::Vec3 default_getControlPosition(  ) const  {
        return osgParticle::SectorPlacer::getControlPosition( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgParticle::SectorPlacer::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgParticle::SectorPlacer::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgParticle::SectorPlacer::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgParticle::SectorPlacer::libraryName( );
    }

    virtual void place( ::osgParticle::Particle * P ) const  {
        if( bp::override func_place = this->get_override( "place" ) )
            func_place( boost::python::ptr(P) );
        else{
            this->osgParticle::SectorPlacer::place( boost::python::ptr(P) );
        }
    }
    
    void default_place( ::osgParticle::Particle * P ) const  {
        osgParticle::SectorPlacer::place( boost::python::ptr(P) );
    }

    virtual float volume(  ) const  {
        if( bp::override func_volume = this->get_override( "volume" ) )
            return func_volume(  );
        else{
            return this->osgParticle::SectorPlacer::volume(  );
        }
    }
    
    float default_volume(  ) const  {
        return osgParticle::SectorPlacer::volume( );
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

void register_SectorPlacer_class(){

    bp::class_< SectorPlacer_wrapper, bp::bases< osgParticle::CenteredPlacer >, osg::ref_ptr< SectorPlacer_wrapper >, boost::noncopyable >( "SectorPlacer", "\n     A sector-shaped particle placer.\n        This placer sets the initial position of incoming particle by choosing a random position\n        within a circular sector; this sector is defined by three parameters: a <I>center point</I>,\n        which is inherited directly from <CODE>osgParticle::CenteredPlacer</CODE>, a range of values\n        for <I>radius</I>, and a range of values for the <I>central angle</I> (sometimes called    <B>phi</B>).\n", bp::no_init )    
        .def( bp::init< >() )    
        .def( 
            "className"
            , (char const * ( ::osgParticle::SectorPlacer::* )(  )const)(&::osgParticle::SectorPlacer::className)
            , (char const * ( SectorPlacer_wrapper::* )(  )const)(&SectorPlacer_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osgParticle::SectorPlacer::* )( ::osg::CopyOp const & )const)(&::osgParticle::SectorPlacer::clone)
            , (::osg::Object * ( SectorPlacer_wrapper::* )( ::osg::CopyOp const & )const)(&SectorPlacer_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osgParticle::SectorPlacer::* )(  )const)(&::osgParticle::SectorPlacer::cloneType)
            , (::osg::Object * ( SectorPlacer_wrapper::* )(  )const)(&SectorPlacer_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "getControlPosition"
            , (::osg::Vec3 ( ::osgParticle::SectorPlacer::* )(  )const)(&::osgParticle::SectorPlacer::getControlPosition)
            , (::osg::Vec3 ( SectorPlacer_wrapper::* )(  )const)(&SectorPlacer_wrapper::default_getControlPosition) )    
        .def( 
            "getPhiRange"
            , (::osgParticle::rangef const & ( ::osgParticle::SectorPlacer::* )(  )const)( &::osgParticle::SectorPlacer::getPhiRange )
            , bp::return_internal_reference< >() )    
        .def( 
            "getRadiusRange"
            , (::osgParticle::rangef const & ( ::osgParticle::SectorPlacer::* )(  )const)( &::osgParticle::SectorPlacer::getRadiusRange )
            , bp::return_internal_reference< >() )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osgParticle::SectorPlacer::* )( ::osg::Object const * )const)(&::osgParticle::SectorPlacer::isSameKindAs)
            , (bool ( SectorPlacer_wrapper::* )( ::osg::Object const * )const)(&SectorPlacer_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgParticle::SectorPlacer::* )(  )const)(&::osgParticle::SectorPlacer::libraryName)
            , (char const * ( SectorPlacer_wrapper::* )(  )const)(&SectorPlacer_wrapper::default_libraryName) )    
        .def( 
            "place"
            , (void ( ::osgParticle::SectorPlacer::* )( ::osgParticle::Particle * )const)(&::osgParticle::SectorPlacer::place)
            , (void ( SectorPlacer_wrapper::* )( ::osgParticle::Particle * )const)(&SectorPlacer_wrapper::default_place)
            , ( bp::arg("P") ) )    
        .def( 
            "setPhiRange"
            , (void ( ::osgParticle::SectorPlacer::* )( ::osgParticle::rangef const & ))( &::osgParticle::SectorPlacer::setPhiRange )
            , ( bp::arg("r") ) )    
        .def( 
            "setPhiRange"
            , (void ( ::osgParticle::SectorPlacer::* )( float,float ))( &::osgParticle::SectorPlacer::setPhiRange )
            , ( bp::arg("r1"), bp::arg("r2") ) )    
        .def( 
            "setRadiusRange"
            , (void ( ::osgParticle::SectorPlacer::* )( ::osgParticle::rangef const & ))( &::osgParticle::SectorPlacer::setRadiusRange )
            , ( bp::arg("r") ) )    
        .def( 
            "setRadiusRange"
            , (void ( ::osgParticle::SectorPlacer::* )( float,float ))( &::osgParticle::SectorPlacer::setRadiusRange )
            , ( bp::arg("r1"), bp::arg("r2") ) )    
        .def( 
            "volume"
            , (float ( ::osgParticle::SectorPlacer::* )(  )const)(&::osgParticle::SectorPlacer::volume)
            , (float ( SectorPlacer_wrapper::* )(  )const)(&SectorPlacer_wrapper::default_volume) );

}
