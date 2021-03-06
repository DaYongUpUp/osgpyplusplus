// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "wrap_osgga.h"
#include "wrap_referenced.h"
#include "drivemanipulator.pypp.hpp"

namespace bp = boost::python;

struct DriveManipulator_wrapper : osgGA::DriveManipulator, bp::wrapper< osgGA::DriveManipulator > {

    DriveManipulator_wrapper( )
    : osgGA::DriveManipulator( )
      , bp::wrapper< osgGA::DriveManipulator >(){
        // null constructor
    
    }

    bool calcMovement(  ){
        return osgGA::DriveManipulator::calcMovement(  );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgGA::DriveManipulator::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgGA::DriveManipulator::className( );
    }

    virtual void computeHomePosition(  ) {
        if( bp::override func_computeHomePosition = this->get_override( "computeHomePosition" ) )
            func_computeHomePosition(  );
        else{
            this->osgGA::DriveManipulator::computeHomePosition(  );
        }
    }
    
    void default_computeHomePosition(  ) {
        osgGA::DriveManipulator::computeHomePosition( );
    }

    void computePosition( ::osg::Vec3d const & eye, ::osg::Vec3d const & lv, ::osg::Vec3d const & up ){
        osgGA::DriveManipulator::computePosition( boost::ref(eye), boost::ref(lv), boost::ref(up) );
    }

    void flushMouseEventStack(  ){
        osgGA::DriveManipulator::flushMouseEventStack(  );
    }

    virtual ::osg::Matrixd getInverseMatrix(  ) const  {
        if( bp::override func_getInverseMatrix = this->get_override( "getInverseMatrix" ) )
            return func_getInverseMatrix(  );
        else{
            return this->osgGA::DriveManipulator::getInverseMatrix(  );
        }
    }
    
    ::osg::Matrixd default_getInverseMatrix(  ) const  {
        return osgGA::DriveManipulator::getInverseMatrix( );
    }

    virtual ::osg::Matrixd getMatrix(  ) const  {
        if( bp::override func_getMatrix = this->get_override( "getMatrix" ) )
            return func_getMatrix(  );
        else{
            return this->osgGA::DriveManipulator::getMatrix(  );
        }
    }
    
    ::osg::Matrixd default_getMatrix(  ) const  {
        return osgGA::DriveManipulator::getMatrix( );
    }

    virtual ::osg::Node const * getNode(  ) const  {
        if( bp::override func_getNode = this->get_override( "getNode" ) )
            return func_getNode(  );
        else{
            return this->osgGA::DriveManipulator::getNode(  );
        }
    }
    
    ::osg::Node const * default_getNode(  ) const  {
        return osgGA::DriveManipulator::getNode( );
    }

    virtual ::osg::Node * getNode(  ) {
        if( bp::override func_getNode = this->get_override( "getNode" ) )
            return func_getNode(  );
        else{
            return this->osgGA::DriveManipulator::getNode(  );
        }
    }
    
    ::osg::Node * default_getNode(  ) {
        return osgGA::DriveManipulator::getNode( );
    }

    virtual void getUsage( ::osg::ApplicationUsage & usage ) const  {
        if( bp::override func_getUsage = this->get_override( "getUsage" ) )
            func_getUsage( boost::ref(usage) );
        else{
            this->osgGA::DriveManipulator::getUsage( boost::ref(usage) );
        }
    }
    
    void default_getUsage( ::osg::ApplicationUsage & usage ) const  {
        osgGA::DriveManipulator::getUsage( boost::ref(usage) );
    }

    virtual bool handle( ::osgGA::GUIEventAdapter const & ea, ::osgGA::GUIActionAdapter & us ) {
        namespace bpl = boost::python;
        if( bpl::override func_handle = this->get_override( "handle" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_handle.ptr(), ea, us );
            return bpl::extract< bool >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return osgGA::DriveManipulator::handle( boost::ref(ea), boost::ref(us) );
        }
    }
    
    static boost::python::object default_handle( ::osgGA::DriveManipulator & inst, ::osgGA::GUIEventAdapter & ea, ::osgGA::GUIActionAdapter & us ){
        bool result;
        if( dynamic_cast< DriveManipulator_wrapper * >( boost::addressof( inst ) ) ){
            result = inst.::osgGA::DriveManipulator::handle(ea, us);
        }
        else{
            result = inst.handle(ea, us);
        }
        return bp::object( result );
    }

    virtual void home( ::osgGA::GUIEventAdapter const & ea, ::osgGA::GUIActionAdapter & us ) {
        namespace bpl = boost::python;
        if( bpl::override func_home = this->get_override( "home" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_home.ptr(), ea, us );
        }
        else{
            osgGA::DriveManipulator::home( boost::ref(ea), boost::ref(us) );
        }
    }
    
    static void default_home( ::osgGA::DriveManipulator & inst, ::osgGA::GUIEventAdapter & ea, ::osgGA::GUIActionAdapter & us ){
        if( dynamic_cast< DriveManipulator_wrapper * >( boost::addressof( inst ) ) ){
            inst.::osgGA::DriveManipulator::home(ea, us);
        }
        else{
            inst.home(ea, us);
        }
    }

    virtual void init( ::osgGA::GUIEventAdapter const & ea, ::osgGA::GUIActionAdapter & us ) {
        namespace bpl = boost::python;
        if( bpl::override func_init = this->get_override( "init" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_init.ptr(), ea, us );
        }
        else{
            osgGA::DriveManipulator::init( boost::ref(ea), boost::ref(us) );
        }
    }
    
    static void default_init( ::osgGA::DriveManipulator & inst, ::osgGA::GUIEventAdapter & ea, ::osgGA::GUIActionAdapter & us ){
        if( dynamic_cast< DriveManipulator_wrapper * >( boost::addressof( inst ) ) ){
            inst.::osgGA::DriveManipulator::init(ea, us);
        }
        else{
            inst.init(ea, us);
        }
    }

    bool intersect( ::osg::Vec3d const & start, ::osg::Vec3d const & end, ::osg::Vec3d & intersection, ::osg::Vec3d & normal ) const {
        return osgGA::DriveManipulator::intersect( boost::ref(start), boost::ref(end), boost::ref(intersection), boost::ref(normal) );
    }

    virtual void setByInverseMatrix( ::osg::Matrixd const & matrix ) {
        if( bp::override func_setByInverseMatrix = this->get_override( "setByInverseMatrix" ) )
            func_setByInverseMatrix( boost::ref(matrix) );
        else{
            this->osgGA::DriveManipulator::setByInverseMatrix( boost::ref(matrix) );
        }
    }
    
    void default_setByInverseMatrix( ::osg::Matrixd const & matrix ) {
        osgGA::DriveManipulator::setByInverseMatrix( boost::ref(matrix) );
    }

    virtual void setByMatrix( ::osg::Matrixd const & matrix ) {
        if( bp::override func_setByMatrix = this->get_override( "setByMatrix" ) )
            func_setByMatrix( boost::ref(matrix) );
        else{
            this->osgGA::DriveManipulator::setByMatrix( boost::ref(matrix) );
        }
    }
    
    void default_setByMatrix( ::osg::Matrixd const & matrix ) {
        osgGA::DriveManipulator::setByMatrix( boost::ref(matrix) );
    }

    virtual void setNode( ::osg::Node * arg0 ) {
        if( bp::override func_setNode = this->get_override( "setNode" ) )
            func_setNode( boost::python::ptr(arg0) );
        else{
            this->osgGA::DriveManipulator::setNode( boost::python::ptr(arg0) );
        }
    }
    
    void default_setNode( ::osg::Node * arg0 ) {
        osgGA::DriveManipulator::setNode( boost::python::ptr(arg0) );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgGA::GUIEventHandler::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgGA::GUIEventHandler::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgGA::GUIEventHandler::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgGA::GUIEventHandler::cloneType( );
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

    virtual void computeHomePosition( ::osg::Camera const * camera=0, bool useBoundingBox=false ) {
        if( bp::override func_computeHomePosition = this->get_override( "computeHomePosition" ) )
            func_computeHomePosition( boost::python::ptr(camera), useBoundingBox );
        else{
            this->osgGA::CameraManipulator::computeHomePosition( boost::python::ptr(camera), useBoundingBox );
        }
    }
    
    void default_computeHomePosition( ::osg::Camera const * camera=0, bool useBoundingBox=false ) {
        osgGA::CameraManipulator::computeHomePosition( boost::python::ptr(camera), useBoundingBox );
    }

    virtual void event( ::osg::NodeVisitor * nv, ::osg::Drawable * drawable ) {
        if( bp::override func_event = this->get_override( "event" ) )
            func_event( boost::python::ptr(nv), boost::python::ptr(drawable) );
        else{
            this->osgGA::GUIEventHandler::event( boost::python::ptr(nv), boost::python::ptr(drawable) );
        }
    }
    
    void default_event( ::osg::NodeVisitor * nv, ::osg::Drawable * drawable ) {
        osgGA::GUIEventHandler::event( boost::python::ptr(nv), boost::python::ptr(drawable) );
    }

    virtual ::osgUtil::SceneView::FusionDistanceMode getFusionDistanceMode(  ) const  {
        if( bp::override func_getFusionDistanceMode = this->get_override( "getFusionDistanceMode" ) )
            return func_getFusionDistanceMode(  );
        else{
            return this->osgGA::CameraManipulator::getFusionDistanceMode(  );
        }
    }
    
    ::osgUtil::SceneView::FusionDistanceMode default_getFusionDistanceMode(  ) const  {
        return osgGA::CameraManipulator::getFusionDistanceMode( );
    }

    virtual float getFusionDistanceValue(  ) const  {
        if( bp::override func_getFusionDistanceValue = this->get_override( "getFusionDistanceValue" ) )
            return func_getFusionDistanceValue(  );
        else{
            return this->osgGA::CameraManipulator::getFusionDistanceValue(  );
        }
    }
    
    float default_getFusionDistanceValue(  ) const  {
        return osgGA::CameraManipulator::getFusionDistanceValue( );
    }

    virtual void getHomePosition( ::osg::Vec3d & eye, ::osg::Vec3d & center, ::osg::Vec3d & up ) const  {
        if( bp::override func_getHomePosition = this->get_override( "getHomePosition" ) )
            func_getHomePosition( boost::ref(eye), boost::ref(center), boost::ref(up) );
        else{
            this->osgGA::CameraManipulator::getHomePosition( boost::ref(eye), boost::ref(center), boost::ref(up) );
        }
    }
    
    void default_getHomePosition( ::osg::Vec3d & eye, ::osg::Vec3d & center, ::osg::Vec3d & up ) const  {
        osgGA::CameraManipulator::getHomePosition( boost::ref(eye), boost::ref(center), boost::ref(up) );
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

    virtual bool handle( ::osgGA::GUIEventAdapter const & ea, ::osgGA::GUIActionAdapter & aa, ::osg::Object * arg2, ::osg::NodeVisitor * arg3 ) {
        namespace bpl = boost::python;
        if( bpl::override func_handle = this->get_override( "handle" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_handle.ptr(), ea, aa, arg2, arg3 );
            return bpl::extract< bool >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return osgGA::GUIEventHandler::handle( boost::ref(ea), boost::ref(aa), boost::python::ptr(arg2), boost::python::ptr(arg3) );
        }
    }
    
    static boost::python::object default_handle_d0ba65b51c8a2afc5afff00aad1b91b3( ::osgGA::GUIEventHandler & inst, ::osgGA::GUIEventAdapter & ea, ::osgGA::GUIActionAdapter & aa, ::osg::Object * arg2, ::osg::NodeVisitor * arg3 ){
        bool result;
        if( dynamic_cast< DriveManipulator_wrapper * >( boost::addressof( inst ) ) ){
            result = inst.::osgGA::GUIEventHandler::handle(ea, aa, arg2, arg3);
        }
        else{
            result = inst.handle(ea, aa, arg2, arg3);
        }
        return bp::object( result );
    }

    virtual void home( double arg0 ) {
        namespace bpl = boost::python;
        if( bpl::override func_home = this->get_override( "home" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_home.ptr(), arg0 );
        }
        else{
            osgGA::CameraManipulator::home( arg0 );
        }
    }
    
    static void default_home_60d9f789ca14c44af8e13acc6b7f8b5f( ::osgGA::CameraManipulator & inst, double arg0 ){
        if( dynamic_cast< DriveManipulator_wrapper * >( boost::addressof( inst ) ) ){
            inst.::osgGA::CameraManipulator::home(arg0);
        }
        else{
            inst.home(arg0);
        }
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgGA::GUIEventHandler::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgGA::GUIEventHandler::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgGA::GUIEventHandler::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgGA::GUIEventHandler::libraryName( );
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

    virtual void setAutoComputeHomePosition( bool flag ) {
        if( bp::override func_setAutoComputeHomePosition = this->get_override( "setAutoComputeHomePosition" ) )
            func_setAutoComputeHomePosition( flag );
        else{
            this->osgGA::CameraManipulator::setAutoComputeHomePosition( flag );
        }
    }
    
    void default_setAutoComputeHomePosition( bool flag ) {
        osgGA::CameraManipulator::setAutoComputeHomePosition( flag );
    }

    virtual void setCoordinateFrameCallback( ::osgGA::CameraManipulator::CoordinateFrameCallback * cb ) {
        if( bp::override func_setCoordinateFrameCallback = this->get_override( "setCoordinateFrameCallback" ) )
            func_setCoordinateFrameCallback( boost::python::ptr(cb) );
        else{
            this->osgGA::CameraManipulator::setCoordinateFrameCallback( boost::python::ptr(cb) );
        }
    }
    
    void default_setCoordinateFrameCallback( ::osgGA::CameraManipulator::CoordinateFrameCallback * cb ) {
        osgGA::CameraManipulator::setCoordinateFrameCallback( boost::python::ptr(cb) );
    }

    virtual void setHomePosition( ::osg::Vec3d const & eye, ::osg::Vec3d const & center, ::osg::Vec3d const & up, bool autoComputeHomePosition=false ) {
        if( bp::override func_setHomePosition = this->get_override( "setHomePosition" ) )
            func_setHomePosition( boost::ref(eye), boost::ref(center), boost::ref(up), autoComputeHomePosition );
        else{
            this->osgGA::CameraManipulator::setHomePosition( boost::ref(eye), boost::ref(center), boost::ref(up), autoComputeHomePosition );
        }
    }
    
    void default_setHomePosition( ::osg::Vec3d const & eye, ::osg::Vec3d const & center, ::osg::Vec3d const & up, bool autoComputeHomePosition=false ) {
        osgGA::CameraManipulator::setHomePosition( boost::ref(eye), boost::ref(center), boost::ref(up), autoComputeHomePosition );
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

    virtual void updateCamera( ::osg::Camera & camera ) {
        if( bp::override func_updateCamera = this->get_override( "updateCamera" ) )
            func_updateCamera( boost::ref(camera) );
        else{
            this->osgGA::CameraManipulator::updateCamera( boost::ref(camera) );
        }
    }
    
    void default_updateCamera( ::osg::Camera & camera ) {
        osgGA::CameraManipulator::updateCamera( boost::ref(camera) );
    }

};

void register_DriveManipulator_class(){

    bp::class_< DriveManipulator_wrapper, bp::bases< osgGA::CameraManipulator >, osg::ref_ptr< DriveManipulator_wrapper >, boost::noncopyable >( "DriveManipulator", "\nDriveManipulator is a camera manipulator which provides drive-like\nfunctionality. By default, the left mouse button accelerates, the right\nmouse button decelerates, and the middle mouse button (or left and\nright simultaneously) stops dead.\n", bp::no_init )    
        .def( bp::init< >("\nDriveManipulator is a camera manipulator which provides drive-like\nfunctionality. By default, the left mouse button accelerates, the right\nmouse button decelerates, and the middle mouse button (or left and\nright simultaneously) stops dead.\n") )    
        .def( 
            "calcMovement"
            , (bool ( DriveManipulator_wrapper::* )(  ))(&DriveManipulator_wrapper::calcMovement)
            , "\n For the given mouse movement calculate the movement of the camera.\n Return true if camera has moved and a redraw is required.\n" )    
        .def( 
            "className"
            , (char const * ( ::osgGA::DriveManipulator::* )(  )const)(&::osgGA::DriveManipulator::className)
            , (char const * ( DriveManipulator_wrapper::* )(  )const)(&DriveManipulator_wrapper::default_className) )    
        .def( 
            "computeHomePosition"
            , (void ( ::osgGA::DriveManipulator::* )(  ))(&::osgGA::DriveManipulator::computeHomePosition)
            , (void ( DriveManipulator_wrapper::* )(  ))(&DriveManipulator_wrapper::default_computeHomePosition) )    
        .def( 
            "computePosition"
            , (void ( DriveManipulator_wrapper::* )( ::osg::Vec3d const &,::osg::Vec3d const &,::osg::Vec3d const & ))(&DriveManipulator_wrapper::computePosition)
            , ( bp::arg("eye"), bp::arg("lv"), bp::arg("up") ) )    
        .def( 
            "flushMouseEventStack"
            , (void ( DriveManipulator_wrapper::* )(  ))(&DriveManipulator_wrapper::flushMouseEventStack)
            , "\n Reset the internal GUIEvent stack.\n" )    
        .def( 
            "getHeight"
            , (double ( ::osgGA::DriveManipulator::* )(  )const)( &::osgGA::DriveManipulator::getHeight ) )    
        .def( 
            "getInverseMatrix"
            , (::osg::Matrixd ( ::osgGA::DriveManipulator::* )(  )const)(&::osgGA::DriveManipulator::getInverseMatrix)
            , (::osg::Matrixd ( DriveManipulator_wrapper::* )(  )const)(&DriveManipulator_wrapper::default_getInverseMatrix) )    
        .def( 
            "getMatrix"
            , (::osg::Matrixd ( ::osgGA::DriveManipulator::* )(  )const)(&::osgGA::DriveManipulator::getMatrix)
            , (::osg::Matrixd ( DriveManipulator_wrapper::* )(  )const)(&DriveManipulator_wrapper::default_getMatrix) )    
        .def( 
            "getModelScale"
            , (double ( ::osgGA::DriveManipulator::* )(  )const)( &::osgGA::DriveManipulator::getModelScale ) )    
        .def( 
            "getNode"
            , (::osg::Node const * ( ::osgGA::DriveManipulator::* )(  )const)(&::osgGA::DriveManipulator::getNode)
            , (::osg::Node const * ( DriveManipulator_wrapper::* )(  )const)(&DriveManipulator_wrapper::default_getNode)
            , bp::return_internal_reference< >() )    
        .def( 
            "getNode"
            , (::osg::Node * ( ::osgGA::DriveManipulator::* )(  ))(&::osgGA::DriveManipulator::getNode)
            , (::osg::Node * ( DriveManipulator_wrapper::* )(  ))(&DriveManipulator_wrapper::default_getNode)
            , bp::return_internal_reference< >() )    
        .def( 
            "getUsage"
            , (void ( ::osgGA::DriveManipulator::* )( ::osg::ApplicationUsage & )const)(&::osgGA::DriveManipulator::getUsage)
            , (void ( DriveManipulator_wrapper::* )( ::osg::ApplicationUsage & )const)(&DriveManipulator_wrapper::default_getUsage)
            , ( bp::arg("usage") ) )    
        .def( 
            "getVelocity"
            , (double ( ::osgGA::DriveManipulator::* )(  )const)( &::osgGA::DriveManipulator::getVelocity ) )    
        .def( 
            "handle"
            , (boost::python::object (*)( ::osgGA::DriveManipulator &,::osgGA::GUIEventAdapter &,::osgGA::GUIActionAdapter & ))( &DriveManipulator_wrapper::default_handle )
            , ( bp::arg("inst"), bp::arg("ea"), bp::arg("us") ) )    
        .def( 
            "home"
            , (void (*)( ::osgGA::DriveManipulator &,::osgGA::GUIEventAdapter &,::osgGA::GUIActionAdapter & ))( &DriveManipulator_wrapper::default_home )
            , ( bp::arg("inst"), bp::arg("ea"), bp::arg("us") ) )    
        .def( 
            "init"
            , (void (*)( ::osgGA::DriveManipulator &,::osgGA::GUIEventAdapter &,::osgGA::GUIActionAdapter & ))( &DriveManipulator_wrapper::default_init )
            , ( bp::arg("inst"), bp::arg("ea"), bp::arg("us") ) )    
        .def( 
            "intersect"
            , (bool ( DriveManipulator_wrapper::* )( ::osg::Vec3d const &,::osg::Vec3d const &,::osg::Vec3d &,::osg::Vec3d & )const)(&DriveManipulator_wrapper::intersect)
            , ( bp::arg("start"), bp::arg("end"), bp::arg("intersection"), bp::arg("normal") ) )    
        .def( 
            "setByInverseMatrix"
            , (void ( ::osgGA::DriveManipulator::* )( ::osg::Matrixd const & ))(&::osgGA::DriveManipulator::setByInverseMatrix)
            , (void ( DriveManipulator_wrapper::* )( ::osg::Matrixd const & ))(&DriveManipulator_wrapper::default_setByInverseMatrix)
            , ( bp::arg("matrix") ) )    
        .def( 
            "setByMatrix"
            , (void ( ::osgGA::DriveManipulator::* )( ::osg::Matrixd const & ))(&::osgGA::DriveManipulator::setByMatrix)
            , (void ( DriveManipulator_wrapper::* )( ::osg::Matrixd const & ))(&DriveManipulator_wrapper::default_setByMatrix)
            , ( bp::arg("matrix") ) )    
        .def( 
            "setHeight"
            , (void ( ::osgGA::DriveManipulator::* )( double ))( &::osgGA::DriveManipulator::setHeight )
            , ( bp::arg("in_h") ) )    
        .def( 
            "setModelScale"
            , (void ( ::osgGA::DriveManipulator::* )( double ))( &::osgGA::DriveManipulator::setModelScale )
            , ( bp::arg("in_ms") ) )    
        .def( 
            "setNode"
            , (void ( ::osgGA::DriveManipulator::* )( ::osg::Node * ))(&::osgGA::DriveManipulator::setNode)
            , (void ( DriveManipulator_wrapper::* )( ::osg::Node * ))(&DriveManipulator_wrapper::default_setNode)
            , ( bp::arg("arg0") ) )    
        .def( 
            "setVelocity"
            , (void ( ::osgGA::DriveManipulator::* )( double ))( &::osgGA::DriveManipulator::setVelocity )
            , ( bp::arg("in_vel") ) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osgGA::GUIEventHandler::* )( ::osg::CopyOp const & )const)(&::osgGA::GUIEventHandler::clone)
            , (::osg::Object * ( DriveManipulator_wrapper::* )( ::osg::CopyOp const & )const)(&DriveManipulator_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osgGA::GUIEventHandler::* )(  )const)(&::osgGA::GUIEventHandler::cloneType)
            , (::osg::Object * ( DriveManipulator_wrapper::* )(  )const)(&DriveManipulator_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "computeHomePosition"
            , (void ( ::osgGA::CameraManipulator::* )( ::osg::Camera const *,bool ))(&::osgGA::CameraManipulator::computeHomePosition)
            , (void ( DriveManipulator_wrapper::* )( ::osg::Camera const *,bool ))(&DriveManipulator_wrapper::default_computeHomePosition)
            , ( bp::arg("camera")=bp::object(), bp::arg("useBoundingBox")=(bool)(false) ) )    
        .def( 
            "event"
            , (void ( ::osgGA::GUIEventHandler::* )( ::osg::NodeVisitor *,::osg::Drawable * ))(&::osgGA::GUIEventHandler::event)
            , (void ( DriveManipulator_wrapper::* )( ::osg::NodeVisitor *,::osg::Drawable * ))(&DriveManipulator_wrapper::default_event)
            , ( bp::arg("nv"), bp::arg("drawable") ) )    
        .def( 
            "getFusionDistanceMode"
            , (::osgUtil::SceneView::FusionDistanceMode ( ::osgGA::CameraManipulator::* )(  )const)(&::osgGA::CameraManipulator::getFusionDistanceMode)
            , (::osgUtil::SceneView::FusionDistanceMode ( DriveManipulator_wrapper::* )(  )const)(&DriveManipulator_wrapper::default_getFusionDistanceMode) )    
        .def( 
            "getFusionDistanceValue"
            , (float ( ::osgGA::CameraManipulator::* )(  )const)(&::osgGA::CameraManipulator::getFusionDistanceValue)
            , (float ( DriveManipulator_wrapper::* )(  )const)(&DriveManipulator_wrapper::default_getFusionDistanceValue) )    
        .def( 
            "getHomePosition"
            , (void ( ::osgGA::CameraManipulator::* )( ::osg::Vec3d &,::osg::Vec3d &,::osg::Vec3d & )const)(&::osgGA::CameraManipulator::getHomePosition)
            , (void ( DriveManipulator_wrapper::* )( ::osg::Vec3d &,::osg::Vec3d &,::osg::Vec3d & )const)(&DriveManipulator_wrapper::default_getHomePosition)
            , ( bp::arg("eye"), bp::arg("center"), bp::arg("up") ) )    
        .def( 
            "handle"
            , (boost::python::object (*)( ::osgGA::GUIEventHandler &,::osgGA::GUIEventAdapter &,::osgGA::GUIActionAdapter &,::osg::Object *,::osg::NodeVisitor * ))( &DriveManipulator_wrapper::default_handle_d0ba65b51c8a2afc5afff00aad1b91b3 )
            , ( bp::arg("inst"), bp::arg("ea"), bp::arg("aa"), bp::arg("arg2"), bp::arg("arg3") )
            , "\n Handle events, return true if handled, false otherwise.\n" )    
        .def( 
            "home"
            , (void (*)( ::osgGA::CameraManipulator &,double ))( &DriveManipulator_wrapper::default_home_60d9f789ca14c44af8e13acc6b7f8b5f )
            , ( bp::arg("inst"), bp::arg("arg0") )
            , "        Move the camera to the default position.\n        This version does not require GUIEventAdapter and GUIActionAdapter so may be\n        called from somewhere other than a handle() method in GUIEventHandler.  Application\n        must be aware of implications." )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osgGA::GUIEventHandler::* )( ::osg::Object const * )const)(&::osgGA::GUIEventHandler::isSameKindAs)
            , (bool ( DriveManipulator_wrapper::* )( ::osg::Object const * )const)(&DriveManipulator_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgGA::GUIEventHandler::* )(  )const)(&::osgGA::GUIEventHandler::libraryName)
            , (char const * ( DriveManipulator_wrapper::* )(  )const)(&DriveManipulator_wrapper::default_libraryName) )    
        .def( 
            "setAutoComputeHomePosition"
            , (void ( ::osgGA::CameraManipulator::* )( bool ))(&::osgGA::CameraManipulator::setAutoComputeHomePosition)
            , (void ( DriveManipulator_wrapper::* )( bool ))(&DriveManipulator_wrapper::default_setAutoComputeHomePosition)
            , ( bp::arg("flag") ) )    
        .def( 
            "setCoordinateFrameCallback"
            , (void ( ::osgGA::CameraManipulator::* )( ::osgGA::CameraManipulator::CoordinateFrameCallback * ))(&::osgGA::CameraManipulator::setCoordinateFrameCallback)
            , (void ( DriveManipulator_wrapper::* )( ::osgGA::CameraManipulator::CoordinateFrameCallback * ))(&DriveManipulator_wrapper::default_setCoordinateFrameCallback)
            , ( bp::arg("cb") ) )    
        .def( 
            "setHomePosition"
            , (void ( ::osgGA::CameraManipulator::* )( ::osg::Vec3d const &,::osg::Vec3d const &,::osg::Vec3d const &,bool ))(&::osgGA::CameraManipulator::setHomePosition)
            , (void ( DriveManipulator_wrapper::* )( ::osg::Vec3d const &,::osg::Vec3d const &,::osg::Vec3d const &,bool ))(&DriveManipulator_wrapper::default_setHomePosition)
            , ( bp::arg("eye"), bp::arg("center"), bp::arg("up"), bp::arg("autoComputeHomePosition")=(bool)(false) ) )    
        .def( 
            "updateCamera"
            , (void ( ::osgGA::CameraManipulator::* )( ::osg::Camera & ))(&::osgGA::CameraManipulator::updateCamera)
            , (void ( DriveManipulator_wrapper::* )( ::osg::Camera & ))(&DriveManipulator_wrapper::default_updateCamera)
            , ( bp::arg("camera") ) );

}
