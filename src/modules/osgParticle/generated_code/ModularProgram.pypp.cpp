// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgparticle.h"
#include "wrap_referenced.h"
#include "modularprogram.pypp.hpp"

namespace bp = boost::python;

struct ModularProgram_wrapper : osgParticle::ModularProgram, bp::wrapper< osgParticle::ModularProgram > {

    ModularProgram_wrapper( )
    : osgParticle::ModularProgram( )
      , bp::wrapper< osgParticle::ModularProgram >(){
        // null constructor
    
    }

    virtual void accept( ::osg::NodeVisitor & nv ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(nv) );
        else{
            this->osgParticle::ModularProgram::accept( boost::ref(nv) );
        }
    }
    
    void default_accept( ::osg::NodeVisitor & nv ) {
        osgParticle::ModularProgram::accept( boost::ref(nv) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgParticle::ModularProgram::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgParticle::ModularProgram::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgParticle::ModularProgram::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgParticle::ModularProgram::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgParticle::ModularProgram::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgParticle::ModularProgram::cloneType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgParticle::ModularProgram::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgParticle::ModularProgram::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgParticle::ModularProgram::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgParticle::ModularProgram::libraryName( );
    }

    virtual ::osg::Camera * asCamera(  ) {
        if( bp::override func_asCamera = this->get_override( "asCamera" ) )
            return func_asCamera(  );
        else{
            return this->osg::Node::asCamera(  );
        }
    }
    
    ::osg::Camera * default_asCamera(  ) {
        return osg::Node::asCamera( );
    }

    virtual ::osg::Camera const * asCamera(  ) const  {
        if( bp::override func_asCamera = this->get_override( "asCamera" ) )
            return func_asCamera(  );
        else{
            return this->osg::Node::asCamera(  );
        }
    }
    
    ::osg::Camera const * default_asCamera(  ) const  {
        return osg::Node::asCamera( );
    }

    virtual ::osg::Geode * asGeode(  ) {
        if( bp::override func_asGeode = this->get_override( "asGeode" ) )
            return func_asGeode(  );
        else{
            return this->osg::Node::asGeode(  );
        }
    }
    
    ::osg::Geode * default_asGeode(  ) {
        return osg::Node::asGeode( );
    }

    virtual ::osg::Geode const * asGeode(  ) const  {
        if( bp::override func_asGeode = this->get_override( "asGeode" ) )
            return func_asGeode(  );
        else{
            return this->osg::Node::asGeode(  );
        }
    }
    
    ::osg::Geode const * default_asGeode(  ) const  {
        return osg::Node::asGeode( );
    }

    virtual ::osg::Group * asGroup(  ) {
        if( bp::override func_asGroup = this->get_override( "asGroup" ) )
            return func_asGroup(  );
        else{
            return this->osg::Node::asGroup(  );
        }
    }
    
    ::osg::Group * default_asGroup(  ) {
        return osg::Node::asGroup( );
    }

    virtual ::osg::Group const * asGroup(  ) const  {
        if( bp::override func_asGroup = this->get_override( "asGroup" ) )
            return func_asGroup(  );
        else{
            return this->osg::Node::asGroup(  );
        }
    }
    
    ::osg::Group const * default_asGroup(  ) const  {
        return osg::Node::asGroup( );
    }

    virtual ::osg::Switch * asSwitch(  ) {
        if( bp::override func_asSwitch = this->get_override( "asSwitch" ) )
            return func_asSwitch(  );
        else{
            return this->osg::Node::asSwitch(  );
        }
    }
    
    ::osg::Switch * default_asSwitch(  ) {
        return osg::Node::asSwitch( );
    }

    virtual ::osg::Switch const * asSwitch(  ) const  {
        if( bp::override func_asSwitch = this->get_override( "asSwitch" ) )
            return func_asSwitch(  );
        else{
            return this->osg::Node::asSwitch(  );
        }
    }
    
    ::osg::Switch const * default_asSwitch(  ) const  {
        return osg::Node::asSwitch( );
    }

    virtual ::osg::Transform * asTransform(  ) {
        if( bp::override func_asTransform = this->get_override( "asTransform" ) )
            return func_asTransform(  );
        else{
            return this->osg::Node::asTransform(  );
        }
    }
    
    ::osg::Transform * default_asTransform(  ) {
        return osg::Node::asTransform( );
    }

    virtual ::osg::Transform const * asTransform(  ) const  {
        if( bp::override func_asTransform = this->get_override( "asTransform" ) )
            return func_asTransform(  );
        else{
            return this->osg::Node::asTransform(  );
        }
    }
    
    ::osg::Transform const * default_asTransform(  ) const  {
        return osg::Node::asTransform( );
    }

    virtual void ascend( ::osg::NodeVisitor & nv ) {
        if( bp::override func_ascend = this->get_override( "ascend" ) )
            func_ascend( boost::ref(nv) );
        else{
            this->osg::Node::ascend( boost::ref(nv) );
        }
    }
    
    void default_ascend( ::osg::NodeVisitor & nv ) {
        osg::Node::ascend( boost::ref(nv) );
    }

    virtual ::osg::BoundingSphere computeBound(  ) const  {
        if( bp::override func_computeBound = this->get_override( "computeBound" ) )
            return func_computeBound(  );
        else{
            return this->osgParticle::ParticleProcessor::computeBound(  );
        }
    }
    
    ::osg::BoundingSphere default_computeBound(  ) const  {
        return osgParticle::ParticleProcessor::computeBound( );
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
            this->osg::Node::resizeGLObjectBuffers( arg0 );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int arg0 ) {
        osg::Node::resizeGLObjectBuffers( arg0 );
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
            this->osg::Node::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Node::setThreadSafeRefUnref( threadSafe );
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

    virtual void traverse( ::osg::NodeVisitor & nv ) {
        if( bp::override func_traverse = this->get_override( "traverse" ) )
            func_traverse( boost::ref(nv) );
        else{
            this->osgParticle::ParticleProcessor::traverse( boost::ref(nv) );
        }
    }
    
    void default_traverse( ::osg::NodeVisitor & nv ) {
        osgParticle::ParticleProcessor::traverse( boost::ref(nv) );
    }

};

void register_ModularProgram_class(){

    bp::class_< ModularProgram_wrapper, bp::bases< osgParticle::Program >, osg::ref_ptr< ModularProgram_wrapper >, boost::noncopyable >( "ModularProgram", "\n    A program class for performing operations on particles using a sequence of <I>operators</I>.\n        To use a <CODE>ModularProgram</CODE> you have to create some <CODE>Operator</CODE> objects and\n        add them to the program.\n        All operators will be applied to each particle in the same order theyve been added to the program.\n", bp::no_init )    
        .def( bp::init< >("\n    A program class for performing operations on particles using a sequence of <I>operators</I>.\n        To use a <CODE>ModularProgram</CODE> you have to create some <CODE>Operator</CODE> objects and\n        add them to the program.\n        All operators will be applied to each particle in the same order theyve been added to the program.\n") )    
        .def( 
            "accept"
            , (void ( ::osgParticle::ModularProgram::* )( ::osg::NodeVisitor & ))(&::osgParticle::ModularProgram::accept)
            , (void ( ModularProgram_wrapper::* )( ::osg::NodeVisitor & ))(&ModularProgram_wrapper::default_accept)
            , ( bp::arg("nv") ) )    
        .def( 
            "addOperator"
            , (void ( ::osgParticle::ModularProgram::* )( ::osgParticle::Operator * ))( &::osgParticle::ModularProgram::addOperator )
            , ( bp::arg("o") ) )    
        .def( 
            "className"
            , (char const * ( ::osgParticle::ModularProgram::* )(  )const)(&::osgParticle::ModularProgram::className)
            , (char const * ( ModularProgram_wrapper::* )(  )const)(&ModularProgram_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osgParticle::ModularProgram::* )( ::osg::CopyOp const & )const)(&::osgParticle::ModularProgram::clone)
            , (::osg::Object * ( ModularProgram_wrapper::* )( ::osg::CopyOp const & )const)(&ModularProgram_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osgParticle::ModularProgram::* )(  )const)(&::osgParticle::ModularProgram::cloneType)
            , (::osg::Object * ( ModularProgram_wrapper::* )(  )const)(&ModularProgram_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "getOperator"
            , (::osgParticle::Operator * ( ::osgParticle::ModularProgram::* )( int ))( &::osgParticle::ModularProgram::getOperator )
            , ( bp::arg("i") )
            , bp::return_internal_reference< >() )    
        .def( 
            "getOperator"
            , (::osgParticle::Operator const * ( ::osgParticle::ModularProgram::* )( int )const)( &::osgParticle::ModularProgram::getOperator )
            , ( bp::arg("i") )
            , bp::return_internal_reference< >() )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osgParticle::ModularProgram::* )( ::osg::Object const * )const)(&::osgParticle::ModularProgram::isSameKindAs)
            , (bool ( ModularProgram_wrapper::* )( ::osg::Object const * )const)(&ModularProgram_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgParticle::ModularProgram::* )(  )const)(&::osgParticle::ModularProgram::libraryName)
            , (char const * ( ModularProgram_wrapper::* )(  )const)(&ModularProgram_wrapper::default_libraryName) )    
        .def( 
            "numOperators"
            , (int ( ::osgParticle::ModularProgram::* )(  )const)( &::osgParticle::ModularProgram::numOperators ) )    
        .def( 
            "removeOperator"
            , (void ( ::osgParticle::ModularProgram::* )( int ))( &::osgParticle::ModularProgram::removeOperator )
            , ( bp::arg("i") ) )    
        .def( 
            "computeBound"
            , (::osg::BoundingSphere ( ::osgParticle::ParticleProcessor::* )(  )const)(&::osgParticle::ParticleProcessor::computeBound)
            , (::osg::BoundingSphere ( ModularProgram_wrapper::* )(  )const)(&ModularProgram_wrapper::default_computeBound) )    
        .def( 
            "traverse"
            , (void ( ::osgParticle::ParticleProcessor::* )( ::osg::NodeVisitor & ))(&::osgParticle::ParticleProcessor::traverse)
            , (void ( ModularProgram_wrapper::* )( ::osg::NodeVisitor & ))(&ModularProgram_wrapper::default_traverse)
            , ( bp::arg("nv") ) );

}
