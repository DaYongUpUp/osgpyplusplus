// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "shapevisitor.pypp.hpp"

namespace bp = boost::python;

struct ShapeVisitor_wrapper : osg::ShapeVisitor, bp::wrapper< osg::ShapeVisitor > {

    ShapeVisitor_wrapper(osg::ShapeVisitor const & arg )
    : osg::ShapeVisitor( arg )
      , bp::wrapper< osg::ShapeVisitor >(){
        // copy constructor
        
    }

    ShapeVisitor_wrapper( )
    : osg::ShapeVisitor( )
      , bp::wrapper< osg::ShapeVisitor >(){
        // null constructor
    
    }

    virtual void apply( ::osg::Shape & arg0 ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(arg0) );
        else{
            this->osg::ShapeVisitor::apply( boost::ref(arg0) );
        }
    }
    
    void default_apply( ::osg::Shape & arg0 ) {
        osg::ShapeVisitor::apply( boost::ref(arg0) );
    }

    virtual void apply( ::osg::Sphere & arg0 ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(arg0) );
        else{
            this->osg::ShapeVisitor::apply( boost::ref(arg0) );
        }
    }
    
    void default_apply( ::osg::Sphere & arg0 ) {
        osg::ShapeVisitor::apply( boost::ref(arg0) );
    }

    virtual void apply( ::osg::Box & arg0 ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(arg0) );
        else{
            this->osg::ShapeVisitor::apply( boost::ref(arg0) );
        }
    }
    
    void default_apply( ::osg::Box & arg0 ) {
        osg::ShapeVisitor::apply( boost::ref(arg0) );
    }

    virtual void apply( ::osg::Cone & arg0 ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(arg0) );
        else{
            this->osg::ShapeVisitor::apply( boost::ref(arg0) );
        }
    }
    
    void default_apply( ::osg::Cone & arg0 ) {
        osg::ShapeVisitor::apply( boost::ref(arg0) );
    }

    virtual void apply( ::osg::Cylinder & arg0 ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(arg0) );
        else{
            this->osg::ShapeVisitor::apply( boost::ref(arg0) );
        }
    }
    
    void default_apply( ::osg::Cylinder & arg0 ) {
        osg::ShapeVisitor::apply( boost::ref(arg0) );
    }

    virtual void apply( ::osg::Capsule & arg0 ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(arg0) );
        else{
            this->osg::ShapeVisitor::apply( boost::ref(arg0) );
        }
    }
    
    void default_apply( ::osg::Capsule & arg0 ) {
        osg::ShapeVisitor::apply( boost::ref(arg0) );
    }

    virtual void apply( ::osg::InfinitePlane & arg0 ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(arg0) );
        else{
            this->osg::ShapeVisitor::apply( boost::ref(arg0) );
        }
    }
    
    void default_apply( ::osg::InfinitePlane & arg0 ) {
        osg::ShapeVisitor::apply( boost::ref(arg0) );
    }

    virtual void apply( ::osg::TriangleMesh & arg0 ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(arg0) );
        else{
            this->osg::ShapeVisitor::apply( boost::ref(arg0) );
        }
    }
    
    void default_apply( ::osg::TriangleMesh & arg0 ) {
        osg::ShapeVisitor::apply( boost::ref(arg0) );
    }

    virtual void apply( ::osg::ConvexHull & arg0 ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(arg0) );
        else{
            this->osg::ShapeVisitor::apply( boost::ref(arg0) );
        }
    }
    
    void default_apply( ::osg::ConvexHull & arg0 ) {
        osg::ShapeVisitor::apply( boost::ref(arg0) );
    }

    virtual void apply( ::osg::HeightField & arg0 ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(arg0) );
        else{
            this->osg::ShapeVisitor::apply( boost::ref(arg0) );
        }
    }
    
    void default_apply( ::osg::HeightField & arg0 ) {
        osg::ShapeVisitor::apply( boost::ref(arg0) );
    }

    virtual void apply( ::osg::CompositeShape & arg0 ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(arg0) );
        else{
            this->osg::ShapeVisitor::apply( boost::ref(arg0) );
        }
    }
    
    void default_apply( ::osg::CompositeShape & arg0 ) {
        osg::ShapeVisitor::apply( boost::ref(arg0) );
    }

};

void register_ShapeVisitor_class(){

    bp::class_< ShapeVisitor_wrapper >( "ShapeVisitor", bp::init< >() )    
        .def( 
            "apply"
            , (void ( ::osg::ShapeVisitor::* )( ::osg::Shape & ))(&::osg::ShapeVisitor::apply)
            , (void ( ShapeVisitor_wrapper::* )( ::osg::Shape & ))(&ShapeVisitor_wrapper::default_apply)
            , ( bp::arg("arg0") ) )    
        .def( 
            "apply"
            , (void ( ::osg::ShapeVisitor::* )( ::osg::Sphere & ))(&::osg::ShapeVisitor::apply)
            , (void ( ShapeVisitor_wrapper::* )( ::osg::Sphere & ))(&ShapeVisitor_wrapper::default_apply)
            , ( bp::arg("arg0") ) )    
        .def( 
            "apply"
            , (void ( ::osg::ShapeVisitor::* )( ::osg::Box & ))(&::osg::ShapeVisitor::apply)
            , (void ( ShapeVisitor_wrapper::* )( ::osg::Box & ))(&ShapeVisitor_wrapper::default_apply)
            , ( bp::arg("arg0") ) )    
        .def( 
            "apply"
            , (void ( ::osg::ShapeVisitor::* )( ::osg::Cone & ))(&::osg::ShapeVisitor::apply)
            , (void ( ShapeVisitor_wrapper::* )( ::osg::Cone & ))(&ShapeVisitor_wrapper::default_apply)
            , ( bp::arg("arg0") ) )    
        .def( 
            "apply"
            , (void ( ::osg::ShapeVisitor::* )( ::osg::Cylinder & ))(&::osg::ShapeVisitor::apply)
            , (void ( ShapeVisitor_wrapper::* )( ::osg::Cylinder & ))(&ShapeVisitor_wrapper::default_apply)
            , ( bp::arg("arg0") ) )    
        .def( 
            "apply"
            , (void ( ::osg::ShapeVisitor::* )( ::osg::Capsule & ))(&::osg::ShapeVisitor::apply)
            , (void ( ShapeVisitor_wrapper::* )( ::osg::Capsule & ))(&ShapeVisitor_wrapper::default_apply)
            , ( bp::arg("arg0") ) )    
        .def( 
            "apply"
            , (void ( ::osg::ShapeVisitor::* )( ::osg::InfinitePlane & ))(&::osg::ShapeVisitor::apply)
            , (void ( ShapeVisitor_wrapper::* )( ::osg::InfinitePlane & ))(&ShapeVisitor_wrapper::default_apply)
            , ( bp::arg("arg0") ) )    
        .def( 
            "apply"
            , (void ( ::osg::ShapeVisitor::* )( ::osg::TriangleMesh & ))(&::osg::ShapeVisitor::apply)
            , (void ( ShapeVisitor_wrapper::* )( ::osg::TriangleMesh & ))(&ShapeVisitor_wrapper::default_apply)
            , ( bp::arg("arg0") ) )    
        .def( 
            "apply"
            , (void ( ::osg::ShapeVisitor::* )( ::osg::ConvexHull & ))(&::osg::ShapeVisitor::apply)
            , (void ( ShapeVisitor_wrapper::* )( ::osg::ConvexHull & ))(&ShapeVisitor_wrapper::default_apply)
            , ( bp::arg("arg0") ) )    
        .def( 
            "apply"
            , (void ( ::osg::ShapeVisitor::* )( ::osg::HeightField & ))(&::osg::ShapeVisitor::apply)
            , (void ( ShapeVisitor_wrapper::* )( ::osg::HeightField & ))(&ShapeVisitor_wrapper::default_apply)
            , ( bp::arg("arg0") ) )    
        .def( 
            "apply"
            , (void ( ::osg::ShapeVisitor::* )( ::osg::CompositeShape & ))(&::osg::ShapeVisitor::apply)
            , (void ( ShapeVisitor_wrapper::* )( ::osg::CompositeShape & ))(&ShapeVisitor_wrapper::default_apply)
            , ( bp::arg("arg0") ) );

}
