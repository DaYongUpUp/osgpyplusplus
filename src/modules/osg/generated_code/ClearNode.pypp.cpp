// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "clearnode.pypp.hpp"

namespace bp = boost::python;

struct ClearNode_wrapper : osg::ClearNode, bp::wrapper< osg::ClearNode > {

    ClearNode_wrapper( )
    : osg::ClearNode( )
      , bp::wrapper< osg::ClearNode >(){
        // null constructor
    
    }

    virtual void accept( ::osg::NodeVisitor & nv ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(nv) );
        else{
            this->osg::ClearNode::accept( boost::ref(nv) );
        }
    }
    
    void default_accept( ::osg::NodeVisitor & nv ) {
        osg::ClearNode::accept( boost::ref(nv) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::ClearNode::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::ClearNode::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::ClearNode::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::ClearNode::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::ClearNode::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::ClearNode::cloneType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::ClearNode::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::ClearNode::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::ClearNode::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::ClearNode::libraryName( );
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

    virtual void setThreadSafeRefUnref( bool threadSafe ) {
        if( bp::override func_setThreadSafeRefUnref = this->get_override( "setThreadSafeRefUnref" ) )
            func_setThreadSafeRefUnref( threadSafe );
        else{
            this->osg::Group::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Group::setThreadSafeRefUnref( threadSafe );
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

void register_ClearNode_class(){

    bp::class_< ClearNode_wrapper, bp::bases< osg::Group >, osg::ref_ptr< ::osg::ClearNode >, boost::noncopyable >( "ClearNode", "\n A Group node for clearing the color and depth buffers. Use setClearColor\n to change the clear color, and setRequiresClear to disable/enable the call\n clearing. You might want to disable clearing if you perform your clear by\n drawing fullscreen geometry. If you do this, add child nodes to perform\n such drawing. The default StateSet associated with this node places\n children in render bin -1 to ensure that children are rendered prior to\n the rest of the scene graph.\n", bp::no_init )    
        .def( bp::init< >("\n A Group node for clearing the color and depth buffers. Use setClearColor\n to change the clear color, and setRequiresClear to disable/enable the call\n clearing. You might want to disable clearing if you perform your clear by\n drawing fullscreen geometry. If you do this, add child nodes to perform\n such drawing. The default StateSet associated with this node places\n children in render bin -1 to ensure that children are rendered prior to\n the rest of the scene graph.\n") )    
        .def( 
            "accept"
            , (void ( ::osg::ClearNode::* )( ::osg::NodeVisitor & ))(&::osg::ClearNode::accept)
            , (void ( ClearNode_wrapper::* )( ::osg::NodeVisitor & ))(&ClearNode_wrapper::default_accept)
            , ( bp::arg("nv") ) )    
        .def( 
            "className"
            , (char const * ( ::osg::ClearNode::* )(  )const)(&::osg::ClearNode::className)
            , (char const * ( ClearNode_wrapper::* )(  )const)(&ClearNode_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osg::ClearNode::* )( ::osg::CopyOp const & )const)(&::osg::ClearNode::clone)
            , (::osg::Object * ( ClearNode_wrapper::* )( ::osg::CopyOp const & )const)(&ClearNode_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osg::ClearNode::* )(  )const)(&::osg::ClearNode::cloneType)
            , (::osg::Object * ( ClearNode_wrapper::* )(  )const)(&ClearNode_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "getClearColor"
            , (::osg::Vec4 const & ( ::osg::ClearNode::* )(  )const)( &::osg::ClearNode::getClearColor )
            , bp::return_internal_reference< >()
            , " Returns the clear color." )    
        .def( 
            "getClearMask"
            , (::GLbitfield ( ::osg::ClearNode::* )(  )const)( &::osg::ClearNode::getClearMask )
            , " Get the clear mask." )    
        .def( 
            "getRequiresClear"
            , (bool ( ::osg::ClearNode::* )(  )const)( &::osg::ClearNode::getRequiresClear )
            , " Gets whether clearing is enabled or disabled." )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osg::ClearNode::* )( ::osg::Object const * )const)(&::osg::ClearNode::isSameKindAs)
            , (bool ( ClearNode_wrapper::* )( ::osg::Object const * )const)(&ClearNode_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osg::ClearNode::* )(  )const)(&::osg::ClearNode::libraryName)
            , (char const * ( ClearNode_wrapper::* )(  )const)(&ClearNode_wrapper::default_libraryName) )    
        .def( 
            "setClearColor"
            , (void ( ::osg::ClearNode::* )( ::osg::Vec4 const & ))( &::osg::ClearNode::setClearColor )
            , ( bp::arg("color") )
            , " Sets the clear color." )    
        .def( 
            "setClearMask"
            , (void ( ::osg::ClearNode::* )( ::GLbitfield ))( &::osg::ClearNode::setClearMask )
            , ( bp::arg("mask") )
            , " Set the clear mask used in glClear(..).\n Defaults to GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT." )    
        .def( 
            "setRequiresClear"
            , (void ( ::osg::ClearNode::* )( bool ))( &::osg::ClearNode::setRequiresClear )
            , ( bp::arg("requiresClear") )
            , " Enable/disable clearing via glClear." )    
        .def( 
            "addChild"
            , (bool ( ::osg::Group::* )( ::osg::Node * ))(&::osg::Group::addChild)
            , (bool ( ClearNode_wrapper::* )( ::osg::Node * ))(&ClearNode_wrapper::default_addChild)
            , ( bp::arg("child") ) )    
        .def( 
            "asCamera"
            , (::osg::Camera * ( ::osg::Node::* )(  ))(&::osg::Node::asCamera)
            , (::osg::Camera * ( ClearNode_wrapper::* )(  ))(&ClearNode_wrapper::default_asCamera)
            , bp::return_internal_reference< >() )    
        .def( 
            "asCamera"
            , (::osg::Camera const * ( ::osg::Node::* )(  )const)(&::osg::Node::asCamera)
            , (::osg::Camera const * ( ClearNode_wrapper::* )(  )const)(&ClearNode_wrapper::default_asCamera)
            , bp::return_internal_reference< >() )    
        .def( 
            "asGeode"
            , (::osg::Geode * ( ::osg::Node::* )(  ))(&::osg::Node::asGeode)
            , (::osg::Geode * ( ClearNode_wrapper::* )(  ))(&ClearNode_wrapper::default_asGeode)
            , bp::return_internal_reference< >() )    
        .def( 
            "asGeode"
            , (::osg::Geode const * ( ::osg::Node::* )(  )const)(&::osg::Node::asGeode)
            , (::osg::Geode const * ( ClearNode_wrapper::* )(  )const)(&ClearNode_wrapper::default_asGeode)
            , bp::return_internal_reference< >() )    
        .def( 
            "asGroup"
            , (::osg::Group * ( ::osg::Group::* )(  ))(&::osg::Group::asGroup)
            , (::osg::Group * ( ClearNode_wrapper::* )(  ))(&ClearNode_wrapper::default_asGroup)
            , bp::return_internal_reference< >() )    
        .def( 
            "asGroup"
            , (::osg::Group const * ( ::osg::Group::* )(  )const)(&::osg::Group::asGroup)
            , (::osg::Group const * ( ClearNode_wrapper::* )(  )const)(&ClearNode_wrapper::default_asGroup)
            , bp::return_internal_reference< >() )    
        .def( 
            "asSwitch"
            , (::osg::Switch * ( ::osg::Node::* )(  ))(&::osg::Node::asSwitch)
            , (::osg::Switch * ( ClearNode_wrapper::* )(  ))(&ClearNode_wrapper::default_asSwitch)
            , bp::return_internal_reference< >() )    
        .def( 
            "asSwitch"
            , (::osg::Switch const * ( ::osg::Node::* )(  )const)(&::osg::Node::asSwitch)
            , (::osg::Switch const * ( ClearNode_wrapper::* )(  )const)(&ClearNode_wrapper::default_asSwitch)
            , bp::return_internal_reference< >() )    
        .def( 
            "asTransform"
            , (::osg::Transform * ( ::osg::Node::* )(  ))(&::osg::Node::asTransform)
            , (::osg::Transform * ( ClearNode_wrapper::* )(  ))(&ClearNode_wrapper::default_asTransform)
            , bp::return_internal_reference< >() )    
        .def( 
            "asTransform"
            , (::osg::Transform const * ( ::osg::Node::* )(  )const)(&::osg::Node::asTransform)
            , (::osg::Transform const * ( ClearNode_wrapper::* )(  )const)(&ClearNode_wrapper::default_asTransform)
            , bp::return_internal_reference< >() )    
        .def( 
            "ascend"
            , (void ( ::osg::Node::* )( ::osg::NodeVisitor & ))(&::osg::Node::ascend)
            , (void ( ClearNode_wrapper::* )( ::osg::NodeVisitor & ))(&ClearNode_wrapper::default_ascend)
            , ( bp::arg("nv") ) )    
        .def( 
            "computeBound"
            , (::osg::BoundingSphere ( ::osg::Group::* )(  )const)(&::osg::Group::computeBound)
            , (::osg::BoundingSphere ( ClearNode_wrapper::* )(  )const)(&ClearNode_wrapper::default_computeBound) )    
        .def( 
            "computeDataVariance"
            , (void ( ::osg::Object::* )(  ))(&::osg::Object::computeDataVariance)
            , (void ( ClearNode_wrapper::* )(  ))(&ClearNode_wrapper::default_computeDataVariance) )    
        .def( 
            "getUserData"
            , (::osg::Referenced * ( ::osg::Object::* )(  ))(&::osg::Object::getUserData)
            , (::osg::Referenced * ( ClearNode_wrapper::* )(  ))(&ClearNode_wrapper::default_getUserData)
            , bp::return_internal_reference< >() )    
        .def( 
            "getUserData"
            , (::osg::Referenced const * ( ::osg::Object::* )(  )const)(&::osg::Object::getUserData)
            , (::osg::Referenced const * ( ClearNode_wrapper::* )(  )const)(&ClearNode_wrapper::default_getUserData)
            , bp::return_internal_reference< >() )    
        .def( 
            "insertChild"
            , (bool ( ::osg::Group::* )( unsigned int,::osg::Node * ))(&::osg::Group::insertChild)
            , (bool ( ClearNode_wrapper::* )( unsigned int,::osg::Node * ))(&ClearNode_wrapper::default_insertChild)
            , ( bp::arg("index"), bp::arg("child") ) )    
        .def( 
            "removeChildren"
            , (bool ( ::osg::Group::* )( unsigned int,unsigned int ))(&::osg::Group::removeChildren)
            , (bool ( ClearNode_wrapper::* )( unsigned int,unsigned int ))(&ClearNode_wrapper::default_removeChildren)
            , ( bp::arg("pos"), bp::arg("numChildrenToRemove") ) )    
        .def( 
            "replaceChild"
            , (bool ( ::osg::Group::* )( ::osg::Node *,::osg::Node * ))(&::osg::Group::replaceChild)
            , (bool ( ClearNode_wrapper::* )( ::osg::Node *,::osg::Node * ))(&ClearNode_wrapper::default_replaceChild)
            , ( bp::arg("origChild"), bp::arg("newChild") ) )    
        .def( 
            "resizeGLObjectBuffers"
            , (void ( ::osg::Group::* )( unsigned int ))(&::osg::Group::resizeGLObjectBuffers)
            , (void ( ClearNode_wrapper::* )( unsigned int ))(&ClearNode_wrapper::default_resizeGLObjectBuffers)
            , ( bp::arg("maxSize") ) )    
        .def( 
            "setChild"
            , (bool ( ::osg::Group::* )( unsigned int,::osg::Node * ))(&::osg::Group::setChild)
            , (bool ( ClearNode_wrapper::* )( unsigned int,::osg::Node * ))(&ClearNode_wrapper::default_setChild)
            , ( bp::arg("i"), bp::arg("node") ) )    
        .def( 
            "setName"
            , (void ( ::osg::Object::* )( ::std::string const & ))(&::osg::Object::setName)
            , (void ( ClearNode_wrapper::* )( ::std::string const & ))(&ClearNode_wrapper::default_setName)
            , ( bp::arg("name") ) )    
        .def( 
            "setName"
            , (void ( ::osg::Object::* )( char const * ))( &::osg::Object::setName )
            , ( bp::arg("name") )
            , " Set the name of object using a C style string." )    
        .def( 
            "setThreadSafeRefUnref"
            , (void ( ::osg::Group::* )( bool ))(&::osg::Group::setThreadSafeRefUnref)
            , (void ( ClearNode_wrapper::* )( bool ))(&ClearNode_wrapper::default_setThreadSafeRefUnref)
            , ( bp::arg("threadSafe") ) )    
        .def( 
            "setUserData"
            , (void ( ::osg::Object::* )( ::osg::Referenced * ))(&::osg::Object::setUserData)
            , (void ( ClearNode_wrapper::* )( ::osg::Referenced * ))(&ClearNode_wrapper::default_setUserData)
            , ( bp::arg("obj") ) )    
        .def( 
            "traverse"
            , (void ( ::osg::Group::* )( ::osg::NodeVisitor & ))(&::osg::Group::traverse)
            , (void ( ClearNode_wrapper::* )( ::osg::NodeVisitor & ))(&ClearNode_wrapper::default_traverse)
            , ( bp::arg("nv") ) );

}
