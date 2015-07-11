// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "texgennode.pypp.hpp"

namespace bp = boost::python;

struct TexGenNode_wrapper : osg::TexGenNode, bp::wrapper< osg::TexGenNode > {

    TexGenNode_wrapper( )
    : osg::TexGenNode( )
      , bp::wrapper< osg::TexGenNode >(){
        // null constructor
    
    }

    TexGenNode_wrapper(::osg::TexGen * texgen )
    : osg::TexGenNode( boost::python::ptr(texgen) )
      , bp::wrapper< osg::TexGenNode >(){
        // constructor
    
    }

    virtual void accept( ::osg::NodeVisitor & nv ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(nv) );
        else{
            this->osg::TexGenNode::accept( boost::ref(nv) );
        }
    }
    
    void default_accept( ::osg::NodeVisitor & nv ) {
        osg::TexGenNode::accept( boost::ref(nv) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::TexGenNode::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::TexGenNode::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::TexGenNode::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::TexGenNode::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::TexGenNode::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::TexGenNode::cloneType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::TexGenNode::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::TexGenNode::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::TexGenNode::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::TexGenNode::libraryName( );
    }

    virtual void setThreadSafeRefUnref( bool threadSafe ) {
        if( bp::override func_setThreadSafeRefUnref = this->get_override( "setThreadSafeRefUnref" ) )
            func_setThreadSafeRefUnref( threadSafe );
        else{
            this->osg::TexGenNode::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::TexGenNode::setThreadSafeRefUnref( threadSafe );
    }

    virtual bool addChild( ::osg::Node * child ) {
        if( bp::override func_addChild = this->get_override( "addChild" ) )
            return func_addChild( boost::python::ptr(child) );
        else{
            return this->osg::Group::addChild( boost::python::ptr(child) );
        }
    }
    
    bool default_addChild( ::osg::Node * child ) {
        return osg::Group::addChild( boost::python::ptr(child) );
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
            return this->osg::Group::asGroup(  );
        }
    }
    
    ::osg::Group * default_asGroup(  ) {
        return osg::Group::asGroup( );
    }

    virtual ::osg::Group const * asGroup(  ) const  {
        if( bp::override func_asGroup = this->get_override( "asGroup" ) )
            return func_asGroup(  );
        else{
            return this->osg::Group::asGroup(  );
        }
    }
    
    ::osg::Group const * default_asGroup(  ) const  {
        return osg::Group::asGroup( );
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
            return this->osg::Group::computeBound(  );
        }
    }
    
    ::osg::BoundingSphere default_computeBound(  ) const  {
        return osg::Group::computeBound( );
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

    virtual bool insertChild( unsigned int index, ::osg::Node * child ) {
        if( bp::override func_insertChild = this->get_override( "insertChild" ) )
            return func_insertChild( index, boost::python::ptr(child) );
        else{
            return this->osg::Group::insertChild( index, boost::python::ptr(child) );
        }
    }
    
    bool default_insertChild( unsigned int index, ::osg::Node * child ) {
        return osg::Group::insertChild( index, boost::python::ptr(child) );
    }

    virtual bool removeChildren( unsigned int pos, unsigned int numChildrenToRemove ) {
        if( bp::override func_removeChildren = this->get_override( "removeChildren" ) )
            return func_removeChildren( pos, numChildrenToRemove );
        else{
            return this->osg::Group::removeChildren( pos, numChildrenToRemove );
        }
    }
    
    bool default_removeChildren( unsigned int pos, unsigned int numChildrenToRemove ) {
        return osg::Group::removeChildren( pos, numChildrenToRemove );
    }

    virtual bool replaceChild( ::osg::Node * origChild, ::osg::Node * newChild ) {
        if( bp::override func_replaceChild = this->get_override( "replaceChild" ) )
            return func_replaceChild( boost::python::ptr(origChild), boost::python::ptr(newChild) );
        else{
            return this->osg::Group::replaceChild( boost::python::ptr(origChild), boost::python::ptr(newChild) );
        }
    }
    
    bool default_replaceChild( ::osg::Node * origChild, ::osg::Node * newChild ) {
        return osg::Group::replaceChild( boost::python::ptr(origChild), boost::python::ptr(newChild) );
    }

    virtual void resizeGLObjectBuffers( unsigned int maxSize ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( maxSize );
        else{
            this->osg::Group::resizeGLObjectBuffers( maxSize );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int maxSize ) {
        osg::Group::resizeGLObjectBuffers( maxSize );
    }

    virtual bool setChild( unsigned int i, ::osg::Node * node ) {
        if( bp::override func_setChild = this->get_override( "setChild" ) )
            return func_setChild( i, boost::python::ptr(node) );
        else{
            return this->osg::Group::setChild( i, boost::python::ptr(node) );
        }
    }
    
    bool default_setChild( unsigned int i, ::osg::Node * node ) {
        return osg::Group::setChild( i, boost::python::ptr(node) );
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
            this->osg::Group::traverse( boost::ref(nv) );
        }
    }
    
    void default_traverse( ::osg::NodeVisitor & nv ) {
        osg::Group::traverse( boost::ref(nv) );
    }

};

void register_TexGenNode_class(){

    { //::osg::TexGenNode
        typedef bp::class_< TexGenNode_wrapper, bp::bases< osg::Group >, osg::ref_ptr< ::osg::TexGenNode >, boost::noncopyable > TexGenNode_exposer_t;
        TexGenNode_exposer_t TexGenNode_exposer = TexGenNode_exposer_t( "TexGenNode", "\n Node for defining the position of TexGen in the scene.\n", bp::no_init );
        bp::scope TexGenNode_scope( TexGenNode_exposer );
        bp::enum_< osg::TexGenNode::ReferenceFrame>("ReferenceFrame")
            .value("RELATIVE_RF", osg::TexGenNode::RELATIVE_RF)
            .value("ABSOLUTE_RF", osg::TexGenNode::ABSOLUTE_RF)
            .export_values()
            ;
        TexGenNode_exposer.def( bp::init< >("\n Node for defining the position of TexGen in the scene.\n") );
        TexGenNode_exposer.def( bp::init< osg::TexGen * >(( bp::arg("texgen") )) );
        bp::implicitly_convertible< osg::TexGen *, osg::TexGenNode >();
        { //::osg::TexGenNode::accept
        
            typedef void ( ::osg::TexGenNode::*accept_function_type )( ::osg::NodeVisitor & ) ;
            typedef void ( TexGenNode_wrapper::*default_accept_function_type )( ::osg::NodeVisitor & ) ;
            
            TexGenNode_exposer.def( 
                "accept"
                , accept_function_type(&::osg::TexGenNode::accept)
                , default_accept_function_type(&TexGenNode_wrapper::default_accept)
                , ( bp::arg("nv") ) );
        
        }
        { //::osg::TexGenNode::className
        
            typedef char const * ( ::osg::TexGenNode::*className_function_type )(  ) const;
            typedef char const * ( TexGenNode_wrapper::*default_className_function_type )(  ) const;
            
            TexGenNode_exposer.def( 
                "className"
                , className_function_type(&::osg::TexGenNode::className)
                , default_className_function_type(&TexGenNode_wrapper::default_className) );
        
        }
        { //::osg::TexGenNode::clone
        
            typedef ::osg::Object * ( ::osg::TexGenNode::*clone_function_type )( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( TexGenNode_wrapper::*default_clone_function_type )( ::osg::CopyOp const & ) const;
            
            TexGenNode_exposer.def( 
                "clone"
                , clone_function_type(&::osg::TexGenNode::clone)
                , default_clone_function_type(&TexGenNode_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::TexGenNode::cloneType
        
            typedef ::osg::Object * ( ::osg::TexGenNode::*cloneType_function_type )(  ) const;
            typedef ::osg::Object * ( TexGenNode_wrapper::*default_cloneType_function_type )(  ) const;
            
            TexGenNode_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::TexGenNode::cloneType)
                , default_cloneType_function_type(&TexGenNode_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::TexGenNode::getReferenceFrame
        
            typedef ::osg::TexGenNode::ReferenceFrame ( ::osg::TexGenNode::*getReferenceFrame_function_type )(  ) const;
            
            TexGenNode_exposer.def( 
                "getReferenceFrame"
                , getReferenceFrame_function_type( &::osg::TexGenNode::getReferenceFrame )
                , " Get the TexGenNodes ReferenceFrame." );
        
        }
        { //::osg::TexGenNode::getTexGen
        
            typedef ::osg::TexGen * ( ::osg::TexGenNode::*getTexGen_function_type )(  ) ;
            
            TexGenNode_exposer.def( 
                "getTexGen"
                , getTexGen_function_type( &::osg::TexGenNode::getTexGen )
                , bp::return_internal_reference< >()
                , " Get the TexGen." );
        
        }
        { //::osg::TexGenNode::getTexGen
        
            typedef ::osg::TexGen const * ( ::osg::TexGenNode::*getTexGen_function_type )(  ) const;
            
            TexGenNode_exposer.def( 
                "getTexGen"
                , getTexGen_function_type( &::osg::TexGenNode::getTexGen )
                , bp::return_internal_reference< >()
                , " Get the const TexGen." );
        
        }
        { //::osg::TexGenNode::getTextureUnit
        
            typedef unsigned int ( ::osg::TexGenNode::*getTextureUnit_function_type )(  ) const;
            
            TexGenNode_exposer.def( 
                "getTextureUnit"
                , getTextureUnit_function_type( &::osg::TexGenNode::getTextureUnit ) );
        
        }
        { //::osg::TexGenNode::isSameKindAs
        
            typedef bool ( ::osg::TexGenNode::*isSameKindAs_function_type )( ::osg::Object const * ) const;
            typedef bool ( TexGenNode_wrapper::*default_isSameKindAs_function_type )( ::osg::Object const * ) const;
            
            TexGenNode_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::TexGenNode::isSameKindAs)
                , default_isSameKindAs_function_type(&TexGenNode_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::TexGenNode::libraryName
        
            typedef char const * ( ::osg::TexGenNode::*libraryName_function_type )(  ) const;
            typedef char const * ( TexGenNode_wrapper::*default_libraryName_function_type )(  ) const;
            
            TexGenNode_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::TexGenNode::libraryName)
                , default_libraryName_function_type(&TexGenNode_wrapper::default_libraryName) );
        
        }
        { //::osg::TexGenNode::setReferenceFrame
        
            typedef void ( ::osg::TexGenNode::*setReferenceFrame_function_type )( ::osg::TexGenNode::ReferenceFrame ) ;
            
            TexGenNode_exposer.def( 
                "setReferenceFrame"
                , setReferenceFrame_function_type( &::osg::TexGenNode::setReferenceFrame )
                , ( bp::arg("rf") )
                , " Set the TexGenNodes ReferenceFrame, either to be relative to its\n parent reference frame." );
        
        }
        { //::osg::TexGenNode::setTexGen
        
            typedef void ( ::osg::TexGenNode::*setTexGen_function_type )( ::osg::TexGen * ) ;
            
            TexGenNode_exposer.def( 
                "setTexGen"
                , setTexGen_function_type( &::osg::TexGenNode::setTexGen )
                , ( bp::arg("texgen") )
                , " Set the TexGen." );
        
        }
        { //::osg::TexGenNode::setTextureUnit
        
            typedef void ( ::osg::TexGenNode::*setTextureUnit_function_type )( unsigned int ) ;
            
            TexGenNode_exposer.def( 
                "setTextureUnit"
                , setTextureUnit_function_type( &::osg::TexGenNode::setTextureUnit )
                , ( bp::arg("textureUnit") )
                , " Set the texture unit that this TexGenNode is associated with." );
        
        }
        { //::osg::TexGenNode::setThreadSafeRefUnref
        
            typedef void ( ::osg::TexGenNode::*setThreadSafeRefUnref_function_type )( bool ) ;
            typedef void ( TexGenNode_wrapper::*default_setThreadSafeRefUnref_function_type )( bool ) ;
            
            TexGenNode_exposer.def( 
                "setThreadSafeRefUnref"
                , setThreadSafeRefUnref_function_type(&::osg::TexGenNode::setThreadSafeRefUnref)
                , default_setThreadSafeRefUnref_function_type(&TexGenNode_wrapper::default_setThreadSafeRefUnref)
                , ( bp::arg("threadSafe") ) );
        
        }
        { //::osg::Group::addChild
        
            typedef bool ( ::osg::Group::*addChild_function_type )( ::osg::Node * ) ;
            typedef bool ( TexGenNode_wrapper::*default_addChild_function_type )( ::osg::Node * ) ;
            
            TexGenNode_exposer.def( 
                "addChild"
                , addChild_function_type(&::osg::Group::addChild)
                , default_addChild_function_type(&TexGenNode_wrapper::default_addChild)
                , ( bp::arg("child") ) );
        
        }
        { //::osg::Node::asCamera
        
            typedef ::osg::Camera * ( ::osg::Node::*asCamera_function_type )(  ) ;
            typedef ::osg::Camera * ( TexGenNode_wrapper::*default_asCamera_function_type )(  ) ;
            
            TexGenNode_exposer.def( 
                "asCamera"
                , asCamera_function_type(&::osg::Node::asCamera)
                , default_asCamera_function_type(&TexGenNode_wrapper::default_asCamera)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::asCamera
        
            typedef ::osg::Camera const * ( ::osg::Node::*asCamera_function_type )(  ) const;
            typedef ::osg::Camera const * ( TexGenNode_wrapper::*default_asCamera_function_type )(  ) const;
            
            TexGenNode_exposer.def( 
                "asCamera"
                , asCamera_function_type(&::osg::Node::asCamera)
                , default_asCamera_function_type(&TexGenNode_wrapper::default_asCamera)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::asGeode
        
            typedef ::osg::Geode * ( ::osg::Node::*asGeode_function_type )(  ) ;
            typedef ::osg::Geode * ( TexGenNode_wrapper::*default_asGeode_function_type )(  ) ;
            
            TexGenNode_exposer.def( 
                "asGeode"
                , asGeode_function_type(&::osg::Node::asGeode)
                , default_asGeode_function_type(&TexGenNode_wrapper::default_asGeode)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::asGeode
        
            typedef ::osg::Geode const * ( ::osg::Node::*asGeode_function_type )(  ) const;
            typedef ::osg::Geode const * ( TexGenNode_wrapper::*default_asGeode_function_type )(  ) const;
            
            TexGenNode_exposer.def( 
                "asGeode"
                , asGeode_function_type(&::osg::Node::asGeode)
                , default_asGeode_function_type(&TexGenNode_wrapper::default_asGeode)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Group::asGroup
        
            typedef ::osg::Group * ( ::osg::Group::*asGroup_function_type )(  ) ;
            typedef ::osg::Group * ( TexGenNode_wrapper::*default_asGroup_function_type )(  ) ;
            
            TexGenNode_exposer.def( 
                "asGroup"
                , asGroup_function_type(&::osg::Group::asGroup)
                , default_asGroup_function_type(&TexGenNode_wrapper::default_asGroup)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Group::asGroup
        
            typedef ::osg::Group const * ( ::osg::Group::*asGroup_function_type )(  ) const;
            typedef ::osg::Group const * ( TexGenNode_wrapper::*default_asGroup_function_type )(  ) const;
            
            TexGenNode_exposer.def( 
                "asGroup"
                , asGroup_function_type(&::osg::Group::asGroup)
                , default_asGroup_function_type(&TexGenNode_wrapper::default_asGroup)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::asSwitch
        
            typedef ::osg::Switch * ( ::osg::Node::*asSwitch_function_type )(  ) ;
            typedef ::osg::Switch * ( TexGenNode_wrapper::*default_asSwitch_function_type )(  ) ;
            
            TexGenNode_exposer.def( 
                "asSwitch"
                , asSwitch_function_type(&::osg::Node::asSwitch)
                , default_asSwitch_function_type(&TexGenNode_wrapper::default_asSwitch)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::asSwitch
        
            typedef ::osg::Switch const * ( ::osg::Node::*asSwitch_function_type )(  ) const;
            typedef ::osg::Switch const * ( TexGenNode_wrapper::*default_asSwitch_function_type )(  ) const;
            
            TexGenNode_exposer.def( 
                "asSwitch"
                , asSwitch_function_type(&::osg::Node::asSwitch)
                , default_asSwitch_function_type(&TexGenNode_wrapper::default_asSwitch)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::asTransform
        
            typedef ::osg::Transform * ( ::osg::Node::*asTransform_function_type )(  ) ;
            typedef ::osg::Transform * ( TexGenNode_wrapper::*default_asTransform_function_type )(  ) ;
            
            TexGenNode_exposer.def( 
                "asTransform"
                , asTransform_function_type(&::osg::Node::asTransform)
                , default_asTransform_function_type(&TexGenNode_wrapper::default_asTransform)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::asTransform
        
            typedef ::osg::Transform const * ( ::osg::Node::*asTransform_function_type )(  ) const;
            typedef ::osg::Transform const * ( TexGenNode_wrapper::*default_asTransform_function_type )(  ) const;
            
            TexGenNode_exposer.def( 
                "asTransform"
                , asTransform_function_type(&::osg::Node::asTransform)
                , default_asTransform_function_type(&TexGenNode_wrapper::default_asTransform)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Node::ascend
        
            typedef void ( ::osg::Node::*ascend_function_type )( ::osg::NodeVisitor & ) ;
            typedef void ( TexGenNode_wrapper::*default_ascend_function_type )( ::osg::NodeVisitor & ) ;
            
            TexGenNode_exposer.def( 
                "ascend"
                , ascend_function_type(&::osg::Node::ascend)
                , default_ascend_function_type(&TexGenNode_wrapper::default_ascend)
                , ( bp::arg("nv") ) );
        
        }
        { //::osg::Group::computeBound
        
            typedef ::osg::BoundingSphere ( ::osg::Group::*computeBound_function_type )(  ) const;
            typedef ::osg::BoundingSphere ( TexGenNode_wrapper::*default_computeBound_function_type )(  ) const;
            
            TexGenNode_exposer.def( 
                "computeBound"
                , computeBound_function_type(&::osg::Group::computeBound)
                , default_computeBound_function_type(&TexGenNode_wrapper::default_computeBound) );
        
        }
        { //::osg::Object::computeDataVariance
        
            typedef void ( ::osg::Object::*computeDataVariance_function_type )(  ) ;
            typedef void ( TexGenNode_wrapper::*default_computeDataVariance_function_type )(  ) ;
            
            TexGenNode_exposer.def( 
                "computeDataVariance"
                , computeDataVariance_function_type(&::osg::Object::computeDataVariance)
                , default_computeDataVariance_function_type(&TexGenNode_wrapper::default_computeDataVariance) );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced * ( ::osg::Object::*getUserData_function_type )(  ) ;
            typedef ::osg::Referenced * ( TexGenNode_wrapper::*default_getUserData_function_type )(  ) ;
            
            TexGenNode_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&TexGenNode_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced const * ( ::osg::Object::*getUserData_function_type )(  ) const;
            typedef ::osg::Referenced const * ( TexGenNode_wrapper::*default_getUserData_function_type )(  ) const;
            
            TexGenNode_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&TexGenNode_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Group::insertChild
        
            typedef bool ( ::osg::Group::*insertChild_function_type )( unsigned int,::osg::Node * ) ;
            typedef bool ( TexGenNode_wrapper::*default_insertChild_function_type )( unsigned int,::osg::Node * ) ;
            
            TexGenNode_exposer.def( 
                "insertChild"
                , insertChild_function_type(&::osg::Group::insertChild)
                , default_insertChild_function_type(&TexGenNode_wrapper::default_insertChild)
                , ( bp::arg("index"), bp::arg("child") ) );
        
        }
        { //::osg::Group::removeChildren
        
            typedef bool ( ::osg::Group::*removeChildren_function_type )( unsigned int,unsigned int ) ;
            typedef bool ( TexGenNode_wrapper::*default_removeChildren_function_type )( unsigned int,unsigned int ) ;
            
            TexGenNode_exposer.def( 
                "removeChildren"
                , removeChildren_function_type(&::osg::Group::removeChildren)
                , default_removeChildren_function_type(&TexGenNode_wrapper::default_removeChildren)
                , ( bp::arg("pos"), bp::arg("numChildrenToRemove") ) );
        
        }
        { //::osg::Group::replaceChild
        
            typedef bool ( ::osg::Group::*replaceChild_function_type )( ::osg::Node *,::osg::Node * ) ;
            typedef bool ( TexGenNode_wrapper::*default_replaceChild_function_type )( ::osg::Node *,::osg::Node * ) ;
            
            TexGenNode_exposer.def( 
                "replaceChild"
                , replaceChild_function_type(&::osg::Group::replaceChild)
                , default_replaceChild_function_type(&TexGenNode_wrapper::default_replaceChild)
                , ( bp::arg("origChild"), bp::arg("newChild") ) );
        
        }
        { //::osg::Group::resizeGLObjectBuffers
        
            typedef void ( ::osg::Group::*resizeGLObjectBuffers_function_type )( unsigned int ) ;
            typedef void ( TexGenNode_wrapper::*default_resizeGLObjectBuffers_function_type )( unsigned int ) ;
            
            TexGenNode_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::Group::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&TexGenNode_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("maxSize") ) );
        
        }
        { //::osg::Group::setChild
        
            typedef bool ( ::osg::Group::*setChild_function_type )( unsigned int,::osg::Node * ) ;
            typedef bool ( TexGenNode_wrapper::*default_setChild_function_type )( unsigned int,::osg::Node * ) ;
            
            TexGenNode_exposer.def( 
                "setChild"
                , setChild_function_type(&::osg::Group::setChild)
                , default_setChild_function_type(&TexGenNode_wrapper::default_setChild)
                , ( bp::arg("i"), bp::arg("node") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type )( ::std::string const & ) ;
            typedef void ( TexGenNode_wrapper::*default_setName_function_type )( ::std::string const & ) ;
            
            TexGenNode_exposer.def( 
                "setName"
                , setName_function_type(&::osg::Object::setName)
                , default_setName_function_type(&TexGenNode_wrapper::default_setName)
                , ( bp::arg("name") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type )( char const * ) ;
            
            TexGenNode_exposer.def( 
                "setName"
                , setName_function_type( &::osg::Object::setName )
                , ( bp::arg("name") )
                , " Set the name of object using a C style string." );
        
        }
        { //::osg::Object::setUserData
        
            typedef void ( ::osg::Object::*setUserData_function_type )( ::osg::Referenced * ) ;
            typedef void ( TexGenNode_wrapper::*default_setUserData_function_type )( ::osg::Referenced * ) ;
            
            TexGenNode_exposer.def( 
                "setUserData"
                , setUserData_function_type(&::osg::Object::setUserData)
                , default_setUserData_function_type(&TexGenNode_wrapper::default_setUserData)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::Group::traverse
        
            typedef void ( ::osg::Group::*traverse_function_type )( ::osg::NodeVisitor & ) ;
            typedef void ( TexGenNode_wrapper::*default_traverse_function_type )( ::osg::NodeVisitor & ) ;
            
            TexGenNode_exposer.def( 
                "traverse"
                , traverse_function_type(&::osg::Group::traverse)
                , default_traverse_function_type(&TexGenNode_wrapper::default_traverse)
                , ( bp::arg("nv") ) );
        
        }
    }

}
