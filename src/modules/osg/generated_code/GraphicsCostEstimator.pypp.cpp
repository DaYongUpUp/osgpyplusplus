// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "graphicscostestimator.pypp.hpp"

namespace bp = boost::python;

struct GraphicsCostEstimator_wrapper : osg::GraphicsCostEstimator, bp::wrapper< osg::GraphicsCostEstimator > {

    GraphicsCostEstimator_wrapper( )
    : osg::GraphicsCostEstimator( )
      , bp::wrapper< osg::GraphicsCostEstimator >(){
        // null constructor
    
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

void register_GraphicsCostEstimator_class(){

    bp::class_< GraphicsCostEstimator_wrapper, bp::bases< osg::Referenced >, osg::ref_ptr< ::osg::GraphicsCostEstimator >, boost::noncopyable >( "GraphicsCostEstimator", bp::no_init )    
        .def( bp::init< >() )    
        .def( 
            "calibrate"
            , (void ( ::osg::GraphicsCostEstimator::* )( ::osg::RenderInfo & ))( &::osg::GraphicsCostEstimator::calibrate )
            , ( bp::arg("renderInfo") )
            , " calibrate the costs of various compile and draw operations" )    
        .def( 
            "estimateCompileCost"
            , (::osg::CostPair ( ::osg::GraphicsCostEstimator::* )( ::osg::Geometry const * )const)( &::osg::GraphicsCostEstimator::estimateCompileCost )
            , ( bp::arg("geometry") ) )    
        .def( 
            "estimateCompileCost"
            , (::osg::CostPair ( ::osg::GraphicsCostEstimator::* )( ::osg::Texture const * )const)( &::osg::GraphicsCostEstimator::estimateCompileCost )
            , ( bp::arg("texture") ) )    
        .def( 
            "estimateCompileCost"
            , (::osg::CostPair ( ::osg::GraphicsCostEstimator::* )( ::osg::Program const * )const)( &::osg::GraphicsCostEstimator::estimateCompileCost )
            , ( bp::arg("program") ) )    
        .def( 
            "estimateCompileCost"
            , (::osg::CostPair ( ::osg::GraphicsCostEstimator::* )( ::osg::Node const * )const)( &::osg::GraphicsCostEstimator::estimateCompileCost )
            , ( bp::arg("node") ) )    
        .def( 
            "estimateDrawCost"
            , (::osg::CostPair ( ::osg::GraphicsCostEstimator::* )( ::osg::Geometry const * )const)( &::osg::GraphicsCostEstimator::estimateDrawCost )
            , ( bp::arg("geometry") ) )    
        .def( 
            "estimateDrawCost"
            , (::osg::CostPair ( ::osg::GraphicsCostEstimator::* )( ::osg::Texture const * )const)( &::osg::GraphicsCostEstimator::estimateDrawCost )
            , ( bp::arg("texture") ) )    
        .def( 
            "estimateDrawCost"
            , (::osg::CostPair ( ::osg::GraphicsCostEstimator::* )( ::osg::Program const * )const)( &::osg::GraphicsCostEstimator::estimateDrawCost )
            , ( bp::arg("program") ) )    
        .def( 
            "estimateDrawCost"
            , (::osg::CostPair ( ::osg::GraphicsCostEstimator::* )( ::osg::Node const * )const)( &::osg::GraphicsCostEstimator::estimateDrawCost )
            , ( bp::arg("node") ) )    
        .def( 
            "setDefaults"
            , (void ( ::osg::GraphicsCostEstimator::* )(  ))( &::osg::GraphicsCostEstimator::setDefaults )
            , " set defaults for computing the costs." )    
        .def( 
            "setThreadSafeRefUnref"
            , (void ( ::osg::Referenced::* )( bool ))(&::osg::Referenced::setThreadSafeRefUnref)
            , (void ( GraphicsCostEstimator_wrapper::* )( bool ))(&GraphicsCostEstimator_wrapper::default_setThreadSafeRefUnref)
            , ( bp::arg("threadSafe") ) );

}
