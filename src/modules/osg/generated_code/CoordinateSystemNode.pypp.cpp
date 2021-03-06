// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "coordinatesystemnode.pypp.hpp"

namespace bp = boost::python;

struct CoordinateSystemNode_wrapper : osg::CoordinateSystemNode, bp::wrapper< osg::CoordinateSystemNode > {

    CoordinateSystemNode_wrapper( )
    : osg::CoordinateSystemNode( )
      , bp::wrapper< osg::CoordinateSystemNode >(){
        // null constructor
    
    }

    CoordinateSystemNode_wrapper(::std::string const & format, ::std::string const & cs )
    : osg::CoordinateSystemNode( format, cs )
      , bp::wrapper< osg::CoordinateSystemNode >(){
        // constructor
    
    }

    virtual void accept( ::osg::NodeVisitor & nv ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(nv) );
        else{
            this->osg::CoordinateSystemNode::accept( boost::ref(nv) );
        }
    }
    
    void default_accept( ::osg::NodeVisitor & nv ) {
        osg::CoordinateSystemNode::accept( boost::ref(nv) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::CoordinateSystemNode::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::CoordinateSystemNode::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::CoordinateSystemNode::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::CoordinateSystemNode::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::CoordinateSystemNode::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::CoordinateSystemNode::cloneType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::CoordinateSystemNode::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::CoordinateSystemNode::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::CoordinateSystemNode::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::CoordinateSystemNode::libraryName( );
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

void register_CoordinateSystemNode_class(){

    bp::class_< CoordinateSystemNode_wrapper, bp::bases< osg::Group >, osg::ref_ptr< ::osg::CoordinateSystemNode >, boost::noncopyable >( "CoordinateSystemNode", "\n CoordinateSystem encapsulate the coordinate system that is associated with objects in a scene.\n    For an overview of common earth bases coordinate systems see http://www.colorado.edu/geography/gcraft/notes/coordsys/coordsys_f.html\n", bp::no_init )    
        .def( bp::init< >("\n CoordinateSystem encapsulate the coordinate system that is associated with objects in a scene.\n    For an overview of common earth bases coordinate systems see http://www.colorado.edu/geography/gcraft/notes/coordsys/coordsys_f.html\n") )    
        .def( bp::init< std::string const &, std::string const & >(( bp::arg("format"), bp::arg("cs") )) )    
        .def( 
            "accept"
            , (void ( ::osg::CoordinateSystemNode::* )( ::osg::NodeVisitor & ))(&::osg::CoordinateSystemNode::accept)
            , (void ( CoordinateSystemNode_wrapper::* )( ::osg::NodeVisitor & ))(&CoordinateSystemNode_wrapper::default_accept)
            , ( bp::arg("nv") ) )    
        .def( 
            "className"
            , (char const * ( ::osg::CoordinateSystemNode::* )(  )const)(&::osg::CoordinateSystemNode::className)
            , (char const * ( CoordinateSystemNode_wrapper::* )(  )const)(&CoordinateSystemNode_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osg::CoordinateSystemNode::* )( ::osg::CopyOp const & )const)(&::osg::CoordinateSystemNode::clone)
            , (::osg::Object * ( CoordinateSystemNode_wrapper::* )( ::osg::CopyOp const & )const)(&CoordinateSystemNode_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osg::CoordinateSystemNode::* )(  )const)(&::osg::CoordinateSystemNode::cloneType)
            , (::osg::Object * ( CoordinateSystemNode_wrapper::* )(  )const)(&CoordinateSystemNode_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "computeLocalCoordinateFrame"
            , (::osg::CoordinateFrame ( ::osg::CoordinateSystemNode::* )( ::osg::Vec3d const & )const)( &::osg::CoordinateSystemNode::computeLocalCoordinateFrame )
            , ( bp::arg("position") )
            , " Compute the local coordinate frame for specified point." )    
        .def( 
            "computeLocalUpVector"
            , (::osg::Vec3d ( ::osg::CoordinateSystemNode::* )( ::osg::Vec3d const & )const)( &::osg::CoordinateSystemNode::computeLocalUpVector )
            , ( bp::arg("position") )
            , " Compute the local up-vector for specified point." )    
        .def( 
            "getCoordinateSystem"
            , (::std::string const & ( ::osg::CoordinateSystemNode::* )(  )const)( &::osg::CoordinateSystemNode::getCoordinateSystem )
            , bp::return_value_policy< bp::copy_const_reference >()
            , " Get the CoordinateSystem reference string." )    
        .def( 
            "getEllipsoidModel"
            , (::osg::EllipsoidModel * ( ::osg::CoordinateSystemNode::* )(  ))( &::osg::CoordinateSystemNode::getEllipsoidModel )
            , bp::return_internal_reference< >()
            , " Get the EllipsoidModel." )    
        .def( 
            "getEllipsoidModel"
            , (::osg::EllipsoidModel const * ( ::osg::CoordinateSystemNode::* )(  )const)( &::osg::CoordinateSystemNode::getEllipsoidModel )
            , bp::return_internal_reference< >()
            , " Get the const EllipsoidModel." )    
        .def( 
            "getFormat"
            , (::std::string const & ( ::osg::CoordinateSystemNode::* )(  )const)( &::osg::CoordinateSystemNode::getFormat )
            , bp::return_value_policy< bp::copy_const_reference >()
            , " Get the coordinate system format string." )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osg::CoordinateSystemNode::* )( ::osg::Object const * )const)(&::osg::CoordinateSystemNode::isSameKindAs)
            , (bool ( CoordinateSystemNode_wrapper::* )( ::osg::Object const * )const)(&CoordinateSystemNode_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osg::CoordinateSystemNode::* )(  )const)(&::osg::CoordinateSystemNode::libraryName)
            , (char const * ( CoordinateSystemNode_wrapper::* )(  )const)(&CoordinateSystemNode_wrapper::default_libraryName) )    
        .def( 
            "setCoordinateSystem"
            , (void ( ::osg::CoordinateSystemNode::* )( ::std::string const & ))( &::osg::CoordinateSystemNode::setCoordinateSystem )
            , ( bp::arg("cs") )
            , " Set the CoordinateSystem reference string, should be stored in a form consistent with the Format." )    
        .def( 
            "setEllipsoidModel"
            , (void ( ::osg::CoordinateSystemNode::* )( ::osg::EllipsoidModel * ))( &::osg::CoordinateSystemNode::setEllipsoidModel )
            , ( bp::arg("ellipsode") )
            , " Set EllipsoidModel to describe the model used to map lat, long and height into geocentric XYZ and back." )    
        .def( 
            "setFormat"
            , (void ( ::osg::CoordinateSystemNode::* )( ::std::string const & ))( &::osg::CoordinateSystemNode::setFormat )
            , ( bp::arg("format") )
            , " Set the coordinate system format string. Typical values would be WKT, PROJ4, USGS etc." )    
        .def( 
            "addChild"
            , (bool ( ::osg::Group::* )( ::osg::Node * ))(&::osg::Group::addChild)
            , (bool ( CoordinateSystemNode_wrapper::* )( ::osg::Node * ))(&CoordinateSystemNode_wrapper::default_addChild)
            , ( bp::arg("child") ) )    
        .def( 
            "asCamera"
            , (::osg::Camera * ( ::osg::Node::* )(  ))(&::osg::Node::asCamera)
            , (::osg::Camera * ( CoordinateSystemNode_wrapper::* )(  ))(&CoordinateSystemNode_wrapper::default_asCamera)
            , bp::return_internal_reference< >() )    
        .def( 
            "asCamera"
            , (::osg::Camera const * ( ::osg::Node::* )(  )const)(&::osg::Node::asCamera)
            , (::osg::Camera const * ( CoordinateSystemNode_wrapper::* )(  )const)(&CoordinateSystemNode_wrapper::default_asCamera)
            , bp::return_internal_reference< >() )    
        .def( 
            "asGeode"
            , (::osg::Geode * ( ::osg::Node::* )(  ))(&::osg::Node::asGeode)
            , (::osg::Geode * ( CoordinateSystemNode_wrapper::* )(  ))(&CoordinateSystemNode_wrapper::default_asGeode)
            , bp::return_internal_reference< >() )    
        .def( 
            "asGeode"
            , (::osg::Geode const * ( ::osg::Node::* )(  )const)(&::osg::Node::asGeode)
            , (::osg::Geode const * ( CoordinateSystemNode_wrapper::* )(  )const)(&CoordinateSystemNode_wrapper::default_asGeode)
            , bp::return_internal_reference< >() )    
        .def( 
            "asGroup"
            , (::osg::Group * ( ::osg::Group::* )(  ))(&::osg::Group::asGroup)
            , (::osg::Group * ( CoordinateSystemNode_wrapper::* )(  ))(&CoordinateSystemNode_wrapper::default_asGroup)
            , bp::return_internal_reference< >() )    
        .def( 
            "asGroup"
            , (::osg::Group const * ( ::osg::Group::* )(  )const)(&::osg::Group::asGroup)
            , (::osg::Group const * ( CoordinateSystemNode_wrapper::* )(  )const)(&CoordinateSystemNode_wrapper::default_asGroup)
            , bp::return_internal_reference< >() )    
        .def( 
            "asSwitch"
            , (::osg::Switch * ( ::osg::Node::* )(  ))(&::osg::Node::asSwitch)
            , (::osg::Switch * ( CoordinateSystemNode_wrapper::* )(  ))(&CoordinateSystemNode_wrapper::default_asSwitch)
            , bp::return_internal_reference< >() )    
        .def( 
            "asSwitch"
            , (::osg::Switch const * ( ::osg::Node::* )(  )const)(&::osg::Node::asSwitch)
            , (::osg::Switch const * ( CoordinateSystemNode_wrapper::* )(  )const)(&CoordinateSystemNode_wrapper::default_asSwitch)
            , bp::return_internal_reference< >() )    
        .def( 
            "asTransform"
            , (::osg::Transform * ( ::osg::Node::* )(  ))(&::osg::Node::asTransform)
            , (::osg::Transform * ( CoordinateSystemNode_wrapper::* )(  ))(&CoordinateSystemNode_wrapper::default_asTransform)
            , bp::return_internal_reference< >() )    
        .def( 
            "asTransform"
            , (::osg::Transform const * ( ::osg::Node::* )(  )const)(&::osg::Node::asTransform)
            , (::osg::Transform const * ( CoordinateSystemNode_wrapper::* )(  )const)(&CoordinateSystemNode_wrapper::default_asTransform)
            , bp::return_internal_reference< >() )    
        .def( 
            "ascend"
            , (void ( ::osg::Node::* )( ::osg::NodeVisitor & ))(&::osg::Node::ascend)
            , (void ( CoordinateSystemNode_wrapper::* )( ::osg::NodeVisitor & ))(&CoordinateSystemNode_wrapper::default_ascend)
            , ( bp::arg("nv") ) )    
        .def( 
            "computeBound"
            , (::osg::BoundingSphere ( ::osg::Group::* )(  )const)(&::osg::Group::computeBound)
            , (::osg::BoundingSphere ( CoordinateSystemNode_wrapper::* )(  )const)(&CoordinateSystemNode_wrapper::default_computeBound) )    
        .def( 
            "computeDataVariance"
            , (void ( ::osg::Object::* )(  ))(&::osg::Object::computeDataVariance)
            , (void ( CoordinateSystemNode_wrapper::* )(  ))(&CoordinateSystemNode_wrapper::default_computeDataVariance) )    
        .def( 
            "getUserData"
            , (::osg::Referenced * ( ::osg::Object::* )(  ))(&::osg::Object::getUserData)
            , (::osg::Referenced * ( CoordinateSystemNode_wrapper::* )(  ))(&CoordinateSystemNode_wrapper::default_getUserData)
            , bp::return_internal_reference< >() )    
        .def( 
            "getUserData"
            , (::osg::Referenced const * ( ::osg::Object::* )(  )const)(&::osg::Object::getUserData)
            , (::osg::Referenced const * ( CoordinateSystemNode_wrapper::* )(  )const)(&CoordinateSystemNode_wrapper::default_getUserData)
            , bp::return_internal_reference< >() )    
        .def( 
            "insertChild"
            , (bool ( ::osg::Group::* )( unsigned int,::osg::Node * ))(&::osg::Group::insertChild)
            , (bool ( CoordinateSystemNode_wrapper::* )( unsigned int,::osg::Node * ))(&CoordinateSystemNode_wrapper::default_insertChild)
            , ( bp::arg("index"), bp::arg("child") ) )    
        .def( 
            "removeChildren"
            , (bool ( ::osg::Group::* )( unsigned int,unsigned int ))(&::osg::Group::removeChildren)
            , (bool ( CoordinateSystemNode_wrapper::* )( unsigned int,unsigned int ))(&CoordinateSystemNode_wrapper::default_removeChildren)
            , ( bp::arg("pos"), bp::arg("numChildrenToRemove") ) )    
        .def( 
            "replaceChild"
            , (bool ( ::osg::Group::* )( ::osg::Node *,::osg::Node * ))(&::osg::Group::replaceChild)
            , (bool ( CoordinateSystemNode_wrapper::* )( ::osg::Node *,::osg::Node * ))(&CoordinateSystemNode_wrapper::default_replaceChild)
            , ( bp::arg("origChild"), bp::arg("newChild") ) )    
        .def( 
            "resizeGLObjectBuffers"
            , (void ( ::osg::Group::* )( unsigned int ))(&::osg::Group::resizeGLObjectBuffers)
            , (void ( CoordinateSystemNode_wrapper::* )( unsigned int ))(&CoordinateSystemNode_wrapper::default_resizeGLObjectBuffers)
            , ( bp::arg("maxSize") ) )    
        .def( 
            "setChild"
            , (bool ( ::osg::Group::* )( unsigned int,::osg::Node * ))(&::osg::Group::setChild)
            , (bool ( CoordinateSystemNode_wrapper::* )( unsigned int,::osg::Node * ))(&CoordinateSystemNode_wrapper::default_setChild)
            , ( bp::arg("i"), bp::arg("node") ) )    
        .def( 
            "setName"
            , (void ( ::osg::Object::* )( ::std::string const & ))(&::osg::Object::setName)
            , (void ( CoordinateSystemNode_wrapper::* )( ::std::string const & ))(&CoordinateSystemNode_wrapper::default_setName)
            , ( bp::arg("name") ) )    
        .def( 
            "setName"
            , (void ( ::osg::Object::* )( char const * ))( &::osg::Object::setName )
            , ( bp::arg("name") )
            , " Set the name of object using a C style string." )    
        .def( 
            "setThreadSafeRefUnref"
            , (void ( ::osg::Group::* )( bool ))(&::osg::Group::setThreadSafeRefUnref)
            , (void ( CoordinateSystemNode_wrapper::* )( bool ))(&CoordinateSystemNode_wrapper::default_setThreadSafeRefUnref)
            , ( bp::arg("threadSafe") ) )    
        .def( 
            "setUserData"
            , (void ( ::osg::Object::* )( ::osg::Referenced * ))(&::osg::Object::setUserData)
            , (void ( CoordinateSystemNode_wrapper::* )( ::osg::Referenced * ))(&CoordinateSystemNode_wrapper::default_setUserData)
            , ( bp::arg("obj") ) )    
        .def( 
            "traverse"
            , (void ( ::osg::Group::* )( ::osg::NodeVisitor & ))(&::osg::Group::traverse)
            , (void ( CoordinateSystemNode_wrapper::* )( ::osg::NodeVisitor & ))(&CoordinateSystemNode_wrapper::default_traverse)
            , ( bp::arg("nv") ) );

}
