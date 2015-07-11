// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "wrap_osgmanipulator.h"
#include "wrap_referenced.h"
#include "rotatespheredragger.pypp.hpp"

namespace bp = boost::python;

struct RotateSphereDragger_wrapper : osgManipulator::RotateSphereDragger, bp::wrapper< osgManipulator::RotateSphereDragger > {

    RotateSphereDragger_wrapper( )
    : osgManipulator::RotateSphereDragger( )
      , bp::wrapper< osgManipulator::RotateSphereDragger >(){
        // null constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgManipulator::RotateSphereDragger::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgManipulator::RotateSphereDragger::className( );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgManipulator::RotateSphereDragger::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgManipulator::RotateSphereDragger::cloneType( );
    }

    virtual bool handle( ::osgManipulator::PointerInfo const & arg0, ::osgGA::GUIEventAdapter const & ea, ::osgGA::GUIActionAdapter & us ) {
        namespace bpl = boost::python;
        if( bpl::override func_handle = this->get_override( "handle" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_handle.ptr(), arg0, ea, us );
            return bpl::extract< bool >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return osgManipulator::RotateSphereDragger::handle( boost::ref(arg0), boost::ref(ea), boost::ref(us) );
        }
    }
    
    static boost::python::object default_handle( ::osgManipulator::RotateSphereDragger & inst, ::osgManipulator::PointerInfo const & arg0, ::osgGA::GUIEventAdapter & ea, ::osgGA::GUIActionAdapter & us ){
        bool result;
        if( dynamic_cast< RotateSphereDragger_wrapper * >( boost::addressof( inst ) ) ){
            result = inst.::osgManipulator::RotateSphereDragger::handle(arg0, ea, us);
        }
        else{
            result = inst.handle(arg0, ea, us);
        }
        return bp::object( result );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgManipulator::RotateSphereDragger::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgManipulator::RotateSphereDragger::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgManipulator::RotateSphereDragger::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgManipulator::RotateSphereDragger::libraryName( );
    }

    virtual void setupDefaultGeometry(  ) {
        if( bp::override func_setupDefaultGeometry = this->get_override( "setupDefaultGeometry" ) )
            func_setupDefaultGeometry(  );
        else{
            this->osgManipulator::RotateSphereDragger::setupDefaultGeometry(  );
        }
    }
    
    void default_setupDefaultGeometry(  ) {
        osgManipulator::RotateSphereDragger::setupDefaultGeometry( );
    }

    virtual void accept( ::osg::NodeVisitor & nv ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(nv) );
        else{
            this->osgManipulator::Dragger::accept( boost::ref(nv) );
        }
    }
    
    void default_accept( ::osg::NodeVisitor & nv ) {
        osgManipulator::Dragger::accept( boost::ref(nv) );
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

    virtual ::osg::MatrixTransform * asMatrixTransform(  ) {
        if( bp::override func_asMatrixTransform = this->get_override( "asMatrixTransform" ) )
            return func_asMatrixTransform(  );
        else{
            return this->osg::MatrixTransform::asMatrixTransform(  );
        }
    }
    
    ::osg::MatrixTransform * default_asMatrixTransform(  ) {
        return osg::MatrixTransform::asMatrixTransform( );
    }

    virtual ::osg::MatrixTransform const * asMatrixTransform(  ) const  {
        if( bp::override func_asMatrixTransform = this->get_override( "asMatrixTransform" ) )
            return func_asMatrixTransform(  );
        else{
            return this->osg::MatrixTransform::asMatrixTransform(  );
        }
    }
    
    ::osg::MatrixTransform const * default_asMatrixTransform(  ) const  {
        return osg::MatrixTransform::asMatrixTransform( );
    }

    virtual ::osg::PositionAttitudeTransform * asPositionAttitudeTransform(  ) {
        if( bp::override func_asPositionAttitudeTransform = this->get_override( "asPositionAttitudeTransform" ) )
            return func_asPositionAttitudeTransform(  );
        else{
            return this->osg::Transform::asPositionAttitudeTransform(  );
        }
    }
    
    ::osg::PositionAttitudeTransform * default_asPositionAttitudeTransform(  ) {
        return osg::Transform::asPositionAttitudeTransform( );
    }

    virtual ::osg::PositionAttitudeTransform const * asPositionAttitudeTransform(  ) const  {
        if( bp::override func_asPositionAttitudeTransform = this->get_override( "asPositionAttitudeTransform" ) )
            return func_asPositionAttitudeTransform(  );
        else{
            return this->osg::Transform::asPositionAttitudeTransform(  );
        }
    }
    
    ::osg::PositionAttitudeTransform const * default_asPositionAttitudeTransform(  ) const  {
        return osg::Transform::asPositionAttitudeTransform( );
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
            return this->osg::Transform::asTransform(  );
        }
    }
    
    ::osg::Transform * default_asTransform(  ) {
        return osg::Transform::asTransform( );
    }

    virtual ::osg::Transform const * asTransform(  ) const  {
        if( bp::override func_asTransform = this->get_override( "asTransform" ) )
            return func_asTransform(  );
        else{
            return this->osg::Transform::asTransform(  );
        }
    }
    
    ::osg::Transform const * default_asTransform(  ) const  {
        return osg::Transform::asTransform( );
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

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgManipulator::Dragger::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgManipulator::Dragger::clone( boost::ref(copyop) );
    }

    virtual ::osg::BoundingSphere computeBound(  ) const  {
        if( bp::override func_computeBound = this->get_override( "computeBound" ) )
            return func_computeBound(  );
        else{
            return this->osg::Transform::computeBound(  );
        }
    }
    
    ::osg::BoundingSphere default_computeBound(  ) const  {
        return osg::Transform::computeBound( );
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

    virtual bool computeLocalToWorldMatrix( ::osg::Matrix & matrix, ::osg::NodeVisitor * arg1 ) const  {
        if( bp::override func_computeLocalToWorldMatrix = this->get_override( "computeLocalToWorldMatrix" ) )
            return func_computeLocalToWorldMatrix( boost::ref(matrix), boost::python::ptr(arg1) );
        else{
            return this->osg::MatrixTransform::computeLocalToWorldMatrix( boost::ref(matrix), boost::python::ptr(arg1) );
        }
    }
    
    bool default_computeLocalToWorldMatrix( ::osg::Matrix & matrix, ::osg::NodeVisitor * arg1 ) const  {
        return osg::MatrixTransform::computeLocalToWorldMatrix( boost::ref(matrix), boost::python::ptr(arg1) );
    }

    virtual bool computeWorldToLocalMatrix( ::osg::Matrix & matrix, ::osg::NodeVisitor * arg1 ) const  {
        if( bp::override func_computeWorldToLocalMatrix = this->get_override( "computeWorldToLocalMatrix" ) )
            return func_computeWorldToLocalMatrix( boost::ref(matrix), boost::python::ptr(arg1) );
        else{
            return this->osg::MatrixTransform::computeWorldToLocalMatrix( boost::ref(matrix), boost::python::ptr(arg1) );
        }
    }
    
    bool default_computeWorldToLocalMatrix( ::osg::Matrix & matrix, ::osg::NodeVisitor * arg1 ) const  {
        return osg::MatrixTransform::computeWorldToLocalMatrix( boost::ref(matrix), boost::python::ptr(arg1) );
    }

    virtual void dispatch( ::osgManipulator::MotionCommand & command ) {
        namespace bpl = boost::python;
        if( bpl::override func_dispatch = this->get_override( "dispatch" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_dispatch.ptr(), command );
        }
        else{
            osgManipulator::Dragger::dispatch( boost::ref(command) );
        }
    }
    
    static void default_dispatch( ::osgManipulator::Dragger & inst, ::osgManipulator::MotionCommand & command ){
        if( dynamic_cast< RotateSphereDragger_wrapper * >( boost::addressof( inst ) ) ){
            inst.::osgManipulator::Dragger::dispatch(command);
        }
        else{
            inst.dispatch(command);
        }
    }

    virtual ::osgManipulator::CompositeDragger const * getComposite(  ) const  {
        if( bp::override func_getComposite = this->get_override( "getComposite" ) )
            return func_getComposite(  );
        else{
            return this->osgManipulator::Dragger::getComposite(  );
        }
    }
    
    ::osgManipulator::CompositeDragger const * default_getComposite(  ) const  {
        return osgManipulator::Dragger::getComposite( );
    }

    virtual ::osgManipulator::CompositeDragger * getComposite(  ) {
        if( bp::override func_getComposite = this->get_override( "getComposite" ) )
            return func_getComposite(  );
        else{
            return this->osgManipulator::Dragger::getComposite(  );
        }
    }
    
    ::osgManipulator::CompositeDragger * default_getComposite(  ) {
        return osgManipulator::Dragger::getComposite( );
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

    virtual bool handle( ::osgGA::GUIEventAdapter const & ea, ::osgGA::GUIActionAdapter & aa ) {
        namespace bpl = boost::python;
        if( bpl::override func_handle = this->get_override( "handle" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_handle.ptr(), ea, aa );
            return bpl::extract< bool >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return osgManipulator::Dragger::handle( boost::ref(ea), boost::ref(aa) );
        }
    }
    
    static boost::python::object default_handle_bfc7c2b1255fcef353f72f723625fd47( ::osgManipulator::Dragger & inst, ::osgGA::GUIEventAdapter & ea, ::osgGA::GUIActionAdapter & aa ){
        bool result;
        if( dynamic_cast< RotateSphereDragger_wrapper * >( boost::addressof( inst ) ) ){
            result = inst.::osgManipulator::Dragger::handle(ea, aa);
        }
        else{
            result = inst.handle(ea, aa);
        }
        return bp::object( result );
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

    virtual bool receive( ::osgManipulator::MotionCommand const & command ) {
        namespace bpl = boost::python;
        if( bpl::override func_receive = this->get_override( "receive" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_receive.ptr(), command );
            return bpl::extract< bool >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return osgManipulator::Dragger::receive( boost::ref(command) );
        }
    }
    
    static boost::python::object default_receive( ::osgManipulator::Dragger & inst, ::osgManipulator::MotionCommand & command ){
        bool result;
        if( dynamic_cast< RotateSphereDragger_wrapper * >( boost::addressof( inst ) ) ){
            result = inst.::osgManipulator::Dragger::receive(command);
        }
        else{
            result = inst.receive(command);
        }
        return bp::object( result );
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

    virtual void setIntersectionMask( unsigned int intersectionMask ) {
        if( bp::override func_setIntersectionMask = this->get_override( "setIntersectionMask" ) )
            func_setIntersectionMask( intersectionMask );
        else{
            this->osgManipulator::Dragger::setIntersectionMask( intersectionMask );
        }
    }
    
    void default_setIntersectionMask( unsigned int intersectionMask ) {
        osgManipulator::Dragger::setIntersectionMask( intersectionMask );
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

    virtual void setParentDragger( ::osgManipulator::Dragger * parent ) {
        if( bp::override func_setParentDragger = this->get_override( "setParentDragger" ) )
            func_setParentDragger( boost::python::ptr(parent) );
        else{
            this->osgManipulator::Dragger::setParentDragger( boost::python::ptr(parent) );
        }
    }
    
    void default_setParentDragger( ::osgManipulator::Dragger * parent ) {
        osgManipulator::Dragger::setParentDragger( boost::python::ptr(parent) );
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
            this->osgManipulator::Dragger::traverse( boost::ref(nv) );
        }
    }
    
    void default_traverse( ::osg::NodeVisitor & nv ) {
        osgManipulator::Dragger::traverse( boost::ref(nv) );
    }

};

void register_RotateSphereDragger_class(){

    bp::class_< RotateSphereDragger_wrapper, bp::bases< osgManipulator::Dragger >, osg::ref_ptr< ::osgManipulator::RotateSphereDragger >, boost::noncopyable >( "RotateSphereDragger", "\n Dragger for performing 3D rotation on a sphere.\n", bp::no_init )    
        .def( bp::init< >("\n Dragger for performing 3D rotation on a sphere.\n") )    
        .def( 
            "className"
            , (char const * ( ::osgManipulator::RotateSphereDragger::* )(  ) const)(&::osgManipulator::RotateSphereDragger::className)
            , (char const * ( RotateSphereDragger_wrapper::* )(  ) const)(&RotateSphereDragger_wrapper::default_className) )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osgManipulator::RotateSphereDragger::* )(  ) const)(&::osgManipulator::RotateSphereDragger::cloneType)
            , (::osg::Object * ( RotateSphereDragger_wrapper::* )(  ) const)(&RotateSphereDragger_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "getColor"
            , (::osg::Vec4 const & ( ::osgManipulator::RotateSphereDragger::* )(  ) const)( &::osgManipulator::RotateSphereDragger::getColor )
            , bp::return_internal_reference< >() )    
        .def( 
            "getPickColor"
            , (::osg::Vec4 const & ( ::osgManipulator::RotateSphereDragger::* )(  ) const)( &::osgManipulator::RotateSphereDragger::getPickColor )
            , bp::return_internal_reference< >() )    
        .def( 
            "handle"
            , (boost::python::object (*)( ::osgManipulator::RotateSphereDragger &,::osgManipulator::PointerInfo const &,::osgGA::GUIEventAdapter &,::osgGA::GUIActionAdapter & ))( &RotateSphereDragger_wrapper::default_handle )
            , ( bp::arg("inst"), bp::arg("arg0"), bp::arg("ea"), bp::arg("us") )
            , "\n Handle pick events on dragger and generate TranslateInLine commands.\n" )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osgManipulator::RotateSphereDragger::* )( ::osg::Object const * ) const)(&::osgManipulator::RotateSphereDragger::isSameKindAs)
            , (bool ( RotateSphereDragger_wrapper::* )( ::osg::Object const * ) const)(&RotateSphereDragger_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgManipulator::RotateSphereDragger::* )(  ) const)(&::osgManipulator::RotateSphereDragger::libraryName)
            , (char const * ( RotateSphereDragger_wrapper::* )(  ) const)(&RotateSphereDragger_wrapper::default_libraryName) )    
        .def( 
            "setColor"
            , (void ( ::osgManipulator::RotateSphereDragger::* )( ::osg::Vec4 const & ) )( &::osgManipulator::RotateSphereDragger::setColor )
            , ( bp::arg("color") )
            , " Set/Get color for dragger." )    
        .def( 
            "setPickColor"
            , (void ( ::osgManipulator::RotateSphereDragger::* )( ::osg::Vec4 const & ) )( &::osgManipulator::RotateSphereDragger::setPickColor )
            , ( bp::arg("color") )
            , " Set/Get pick color for dragger. Pick color is color of the dragger\n when picked. It gives a visual feedback to show that the dragger has\n been picked." )    
        .def( 
            "setupDefaultGeometry"
            , (void ( ::osgManipulator::RotateSphereDragger::* )(  ) )(&::osgManipulator::RotateSphereDragger::setupDefaultGeometry)
            , (void ( RotateSphereDragger_wrapper::* )(  ) )(&RotateSphereDragger_wrapper::default_setupDefaultGeometry) )    
        .def( 
            "accept"
            , (void ( ::osgManipulator::Dragger::* )( ::osg::NodeVisitor & ) )(&::osgManipulator::Dragger::accept)
            , (void ( RotateSphereDragger_wrapper::* )( ::osg::NodeVisitor & ) )(&RotateSphereDragger_wrapper::default_accept)
            , ( bp::arg("nv") ) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osgManipulator::Dragger::* )( ::osg::CopyOp const & ) const)(&::osgManipulator::Dragger::clone)
            , (::osg::Object * ( RotateSphereDragger_wrapper::* )( ::osg::CopyOp const & ) const)(&RotateSphereDragger_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "dispatch"
            , (void (*)( ::osgManipulator::Dragger &,::osgManipulator::MotionCommand & ))( &RotateSphereDragger_wrapper::default_dispatch )
            , ( bp::arg("inst"), bp::arg("command") ) )    
        .def( 
            "getComposite"
            , (::osgManipulator::CompositeDragger const * ( ::osgManipulator::Dragger::* )(  ) const)(&::osgManipulator::Dragger::getComposite)
            , (::osgManipulator::CompositeDragger const * ( RotateSphereDragger_wrapper::* )(  ) const)(&RotateSphereDragger_wrapper::default_getComposite)
            , bp::return_internal_reference< >() )    
        .def( 
            "getComposite"
            , (::osgManipulator::CompositeDragger * ( ::osgManipulator::Dragger::* )(  ) )(&::osgManipulator::Dragger::getComposite)
            , (::osgManipulator::CompositeDragger * ( RotateSphereDragger_wrapper::* )(  ) )(&RotateSphereDragger_wrapper::default_getComposite)
            , bp::return_internal_reference< >() )    
        .def( 
            "handle_bfc7c2b1255fcef353f72f723625fd47"
            , (boost::python::object (*)( ::osgManipulator::Dragger &,::osgGA::GUIEventAdapter &,::osgGA::GUIActionAdapter & ))( &RotateSphereDragger_wrapper::default_handle_bfc7c2b1255fcef353f72f723625fd47 )
            , ( bp::arg("inst"), bp::arg("ea"), bp::arg("aa") ) )    
        .def( 
            "receive"
            , (boost::python::object (*)( ::osgManipulator::Dragger &,::osgManipulator::MotionCommand & ))( &RotateSphereDragger_wrapper::default_receive )
            , ( bp::arg("inst"), bp::arg("command") )
            , "\n Setup default geometry for dragger.\n" )    
        .def( 
            "setIntersectionMask"
            , (void ( ::osgManipulator::Dragger::* )( unsigned int ) )(&::osgManipulator::Dragger::setIntersectionMask)
            , (void ( RotateSphereDragger_wrapper::* )( unsigned int ) )(&RotateSphereDragger_wrapper::default_setIntersectionMask)
            , ( bp::arg("intersectionMask") ) )    
        .def( 
            "setParentDragger"
            , (void ( ::osgManipulator::Dragger::* )( ::osgManipulator::Dragger * ) )(&::osgManipulator::Dragger::setParentDragger)
            , (void ( RotateSphereDragger_wrapper::* )( ::osgManipulator::Dragger * ) )(&RotateSphereDragger_wrapper::default_setParentDragger)
            , ( bp::arg("parent") ) )    
        .def( 
            "traverse"
            , (void ( ::osgManipulator::Dragger::* )( ::osg::NodeVisitor & ) )(&::osgManipulator::Dragger::traverse)
            , (void ( RotateSphereDragger_wrapper::* )( ::osg::NodeVisitor & ) )(&RotateSphereDragger_wrapper::default_traverse)
            , ( bp::arg("nv") ) );

}
