// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgutil.h"
#include "wrap_referenced.h"
#include "statsvisitor.pypp.hpp"

namespace bp = boost::python;

struct StatsVisitor_wrapper : osgUtil::StatsVisitor, bp::wrapper< osgUtil::StatsVisitor > {

    StatsVisitor_wrapper( )
    : osgUtil::StatsVisitor( )
      , bp::wrapper< osgUtil::StatsVisitor >(){
        // null constructor
    
    }

    virtual void apply( ::osg::Node & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgUtil::StatsVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Node & node ) {
        osgUtil::StatsVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Group & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgUtil::StatsVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Group & node ) {
        osgUtil::StatsVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Transform & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgUtil::StatsVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Transform & node ) {
        osgUtil::StatsVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::LOD & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgUtil::StatsVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::LOD & node ) {
        osgUtil::StatsVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Switch & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgUtil::StatsVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Switch & node ) {
        osgUtil::StatsVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Geode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osgUtil::StatsVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Geode & node ) {
        osgUtil::StatsVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Drawable & drawable ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(drawable) );
        else{
            this->osgUtil::StatsVisitor::apply( boost::ref(drawable) );
        }
    }
    
    void default_apply( ::osg::Drawable & drawable ) {
        osgUtil::StatsVisitor::apply( boost::ref(drawable) );
    }

    virtual void apply( ::osg::StateSet & ss ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(ss) );
        else{
            this->osgUtil::StatsVisitor::apply( boost::ref(ss) );
        }
    }
    
    void default_apply( ::osg::StateSet & ss ) {
        osgUtil::StatsVisitor::apply( boost::ref(ss) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgUtil::StatsVisitor::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgUtil::StatsVisitor::className( );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgUtil::StatsVisitor::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgUtil::StatsVisitor::libraryName( );
    }

    virtual void print( ::std::ostream & out ) {
        if( bp::override func_print = this->get_override( "print" ) )
            func_print( boost::ref(out) );
        else{
            this->osgUtil::StatsVisitor::print( boost::ref(out) );
        }
    }
    
    void default_print( ::std::ostream & out ) {
        osgUtil::StatsVisitor::print( boost::ref(out) );
    }

    virtual void reset(  ) {
        if( bp::override func_reset = this->get_override( "reset" ) )
            func_reset(  );
        else{
            this->osgUtil::StatsVisitor::reset(  );
        }
    }
    
    void default_reset(  ) {
        osgUtil::StatsVisitor::reset( );
    }

    virtual void totalUpStats(  ) {
        if( bp::override func_totalUpStats = this->get_override( "totalUpStats" ) )
            func_totalUpStats(  );
        else{
            this->osgUtil::StatsVisitor::totalUpStats(  );
        }
    }
    
    void default_totalUpStats(  ) {
        osgUtil::StatsVisitor::totalUpStats( );
    }

    virtual void apply( ::osg::Billboard & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Billboard & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::ProxyNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::ProxyNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Projection & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Projection & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::CoordinateSystemNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::CoordinateSystemNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::ClipNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::ClipNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::TexGenNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::TexGenNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::LightSource & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::LightSource & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Camera & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Camera & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::CameraView & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::CameraView & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::MatrixTransform & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::MatrixTransform & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::PositionAttitudeTransform & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::PositionAttitudeTransform & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::Sequence & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::Sequence & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::PagedLOD & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::PagedLOD & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::ClearNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::ClearNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::OccluderNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::OccluderNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual void apply( ::osg::OcclusionQueryNode & node ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(node) );
        else{
            this->osg::NodeVisitor::apply( boost::ref(node) );
        }
    }
    
    void default_apply( ::osg::OcclusionQueryNode & node ) {
        osg::NodeVisitor::apply( boost::ref(node) );
    }

    virtual float getDistanceFromEyePoint( ::osg::Vec3 const & arg0, bool arg1 ) const  {
        if( bp::override func_getDistanceFromEyePoint = this->get_override( "getDistanceFromEyePoint" ) )
            return func_getDistanceFromEyePoint( boost::ref(arg0), arg1 );
        else{
            return this->osg::NodeVisitor::getDistanceFromEyePoint( boost::ref(arg0), arg1 );
        }
    }
    
    float default_getDistanceFromEyePoint( ::osg::Vec3 const & arg0, bool arg1 ) const  {
        return osg::NodeVisitor::getDistanceFromEyePoint( boost::ref(arg0), arg1 );
    }

    virtual float getDistanceToEyePoint( ::osg::Vec3 const & arg0, bool arg1 ) const  {
        if( bp::override func_getDistanceToEyePoint = this->get_override( "getDistanceToEyePoint" ) )
            return func_getDistanceToEyePoint( boost::ref(arg0), arg1 );
        else{
            return this->osg::NodeVisitor::getDistanceToEyePoint( boost::ref(arg0), arg1 );
        }
    }
    
    float default_getDistanceToEyePoint( ::osg::Vec3 const & arg0, bool arg1 ) const  {
        return osg::NodeVisitor::getDistanceToEyePoint( boost::ref(arg0), arg1 );
    }

    virtual float getDistanceToViewPoint( ::osg::Vec3 const & arg0, bool arg1 ) const  {
        if( bp::override func_getDistanceToViewPoint = this->get_override( "getDistanceToViewPoint" ) )
            return func_getDistanceToViewPoint( boost::ref(arg0), arg1 );
        else{
            return this->osg::NodeVisitor::getDistanceToViewPoint( boost::ref(arg0), arg1 );
        }
    }
    
    float default_getDistanceToViewPoint( ::osg::Vec3 const & arg0, bool arg1 ) const  {
        return osg::NodeVisitor::getDistanceToViewPoint( boost::ref(arg0), arg1 );
    }

    virtual ::osg::Vec3 getEyePoint(  ) const  {
        if( bp::override func_getEyePoint = this->get_override( "getEyePoint" ) )
            return func_getEyePoint(  );
        else{
            return this->osg::NodeVisitor::getEyePoint(  );
        }
    }
    
    ::osg::Vec3 default_getEyePoint(  ) const  {
        return osg::NodeVisitor::getEyePoint( );
    }

    virtual ::osg::Vec3 getViewPoint(  ) const  {
        if( bp::override func_getViewPoint = this->get_override( "getViewPoint" ) )
            return func_getViewPoint(  );
        else{
            return this->osg::NodeVisitor::getViewPoint(  );
        }
    }
    
    ::osg::Vec3 default_getViewPoint(  ) const  {
        return osg::NodeVisitor::getViewPoint( );
    }

    virtual void setThreadSafeRefUnref( bool threadSafe ) {
        if( bp::override func_setThreadSafeRefUnref = this->get_override( "setThreadSafeRefUnref" ) )
            func_setThreadSafeRefUnref( threadSafe );
        else{
            this->osg::Referenced::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Referenced::setThreadSafeRefUnref( threadSafe );
    }

};

void register_StatsVisitor_class(){

    bp::class_< StatsVisitor_wrapper, bp::bases< ::osg::NodeVisitor >, osg::ref_ptr< ::osgUtil::StatsVisitor >, boost::noncopyable >( "StatsVisitor", bp::init< >() )    
        .def( 
            "apply"
            , (void ( ::osgUtil::StatsVisitor::* )( ::osg::Node & ) )(&::osgUtil::StatsVisitor::apply)
            , (void ( StatsVisitor_wrapper::* )( ::osg::Node & ) )(&StatsVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osgUtil::StatsVisitor::* )( ::osg::Group & ) )(&::osgUtil::StatsVisitor::apply)
            , (void ( StatsVisitor_wrapper::* )( ::osg::Group & ) )(&StatsVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osgUtil::StatsVisitor::* )( ::osg::Transform & ) )(&::osgUtil::StatsVisitor::apply)
            , (void ( StatsVisitor_wrapper::* )( ::osg::Transform & ) )(&StatsVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osgUtil::StatsVisitor::* )( ::osg::LOD & ) )(&::osgUtil::StatsVisitor::apply)
            , (void ( StatsVisitor_wrapper::* )( ::osg::LOD & ) )(&StatsVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osgUtil::StatsVisitor::* )( ::osg::Switch & ) )(&::osgUtil::StatsVisitor::apply)
            , (void ( StatsVisitor_wrapper::* )( ::osg::Switch & ) )(&StatsVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osgUtil::StatsVisitor::* )( ::osg::Geode & ) )(&::osgUtil::StatsVisitor::apply)
            , (void ( StatsVisitor_wrapper::* )( ::osg::Geode & ) )(&StatsVisitor_wrapper::default_apply)
            , ( bp::arg("node") ) )    
        .def( 
            "apply"
            , (void ( ::osgUtil::StatsVisitor::* )( ::osg::Drawable & ) )(&::osgUtil::StatsVisitor::apply)
            , (void ( StatsVisitor_wrapper::* )( ::osg::Drawable & ) )(&StatsVisitor_wrapper::default_apply)
            , ( bp::arg("drawable") ) )    
        .def( 
            "apply"
            , (void ( ::osgUtil::StatsVisitor::* )( ::osg::StateSet & ) )(&::osgUtil::StatsVisitor::apply)
            , (void ( StatsVisitor_wrapper::* )( ::osg::StateSet & ) )(&StatsVisitor_wrapper::default_apply)
            , ( bp::arg("ss") ) )    
        .def( 
            "className"
            , (char const * ( ::osgUtil::StatsVisitor::* )(  ) const)(&::osgUtil::StatsVisitor::className)
            , (char const * ( StatsVisitor_wrapper::* )(  ) const)(&StatsVisitor_wrapper::default_className) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgUtil::StatsVisitor::* )(  ) const)(&::osgUtil::StatsVisitor::libraryName)
            , (char const * ( StatsVisitor_wrapper::* )(  ) const)(&StatsVisitor_wrapper::default_libraryName) )    
        .def( 
            "print"
            , (void ( ::osgUtil::StatsVisitor::* )( ::std::ostream & ) )(&::osgUtil::StatsVisitor::print)
            , (void ( StatsVisitor_wrapper::* )( ::std::ostream & ) )(&StatsVisitor_wrapper::default_print)
            , ( bp::arg("out") ) )    
        .def( 
            "reset"
            , (void ( ::osgUtil::StatsVisitor::* )(  ) )(&::osgUtil::StatsVisitor::reset)
            , (void ( StatsVisitor_wrapper::* )(  ) )(&StatsVisitor_wrapper::default_reset) )    
        .def( 
            "totalUpStats"
            , (void ( ::osgUtil::StatsVisitor::* )(  ) )(&::osgUtil::StatsVisitor::totalUpStats)
            , (void ( StatsVisitor_wrapper::* )(  ) )(&StatsVisitor_wrapper::default_totalUpStats) )    
        .def_readwrite( "_drawableSet", &osgUtil::StatsVisitor::_drawableSet )    
        .def_readwrite( "_fastGeometrySet", &osgUtil::StatsVisitor::_fastGeometrySet )    
        .def_readwrite( "_geodeSet", &osgUtil::StatsVisitor::_geodeSet )    
        .def_readwrite( "_geometrySet", &osgUtil::StatsVisitor::_geometrySet )    
        .def_readwrite( "_groupSet", &osgUtil::StatsVisitor::_groupSet )    
        .def_readwrite( "_instancedStats", &osgUtil::StatsVisitor::_instancedStats )    
        .def_readwrite( "_lodSet", &osgUtil::StatsVisitor::_lodSet )    
        .def_readwrite( "_numInstancedDrawable", &osgUtil::StatsVisitor::_numInstancedDrawable )    
        .def_readwrite( "_numInstancedFastGeometry", &osgUtil::StatsVisitor::_numInstancedFastGeometry )    
        .def_readwrite( "_numInstancedGeode", &osgUtil::StatsVisitor::_numInstancedGeode )    
        .def_readwrite( "_numInstancedGeometry", &osgUtil::StatsVisitor::_numInstancedGeometry )    
        .def_readwrite( "_numInstancedGroup", &osgUtil::StatsVisitor::_numInstancedGroup )    
        .def_readwrite( "_numInstancedLOD", &osgUtil::StatsVisitor::_numInstancedLOD )    
        .def_readwrite( "_numInstancedStateSet", &osgUtil::StatsVisitor::_numInstancedStateSet )    
        .def_readwrite( "_numInstancedSwitch", &osgUtil::StatsVisitor::_numInstancedSwitch )    
        .def_readwrite( "_numInstancedTransform", &osgUtil::StatsVisitor::_numInstancedTransform )    
        .def_readwrite( "_statesetSet", &osgUtil::StatsVisitor::_statesetSet )    
        .def_readwrite( "_switchSet", &osgUtil::StatsVisitor::_switchSet )    
        .def_readwrite( "_transformSet", &osgUtil::StatsVisitor::_transformSet )    
        .def_readwrite( "_uniqueStats", &osgUtil::StatsVisitor::_uniqueStats );

}
