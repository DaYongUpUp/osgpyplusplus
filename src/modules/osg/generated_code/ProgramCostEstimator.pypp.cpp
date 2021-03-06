// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "programcostestimator.pypp.hpp"

namespace bp = boost::python;

struct ProgramCostEstimator_wrapper : osg::ProgramCostEstimator, bp::wrapper< osg::ProgramCostEstimator > {

    ProgramCostEstimator_wrapper( )
    : osg::ProgramCostEstimator( )
      , bp::wrapper< osg::ProgramCostEstimator >(){
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

void register_ProgramCostEstimator_class(){

    bp::class_< ProgramCostEstimator_wrapper, bp::bases< osg::Referenced >, osg::ref_ptr< ::osg::ProgramCostEstimator >, boost::noncopyable >( "ProgramCostEstimator", bp::init< >() )    
        .def( 
            "calibrate"
            , (void ( ::osg::ProgramCostEstimator::* )( ::osg::RenderInfo & ))( &::osg::ProgramCostEstimator::calibrate )
            , ( bp::arg("renderInfo") ) )    
        .def( 
            "estimateCompileCost"
            , (::osg::CostPair ( ::osg::ProgramCostEstimator::* )( ::osg::Program const * )const)( &::osg::ProgramCostEstimator::estimateCompileCost )
            , ( bp::arg("program") ) )    
        .def( 
            "estimateDrawCost"
            , (::osg::CostPair ( ::osg::ProgramCostEstimator::* )( ::osg::Program const * )const)( &::osg::ProgramCostEstimator::estimateDrawCost )
            , ( bp::arg("program") ) )    
        .def( 
            "setDefaults"
            , (void ( ::osg::ProgramCostEstimator::* )(  ))( &::osg::ProgramCostEstimator::setDefaults ) )    
        .def( 
            "setThreadSafeRefUnref"
            , (void ( ::osg::Referenced::* )( bool ))(&::osg::Referenced::setThreadSafeRefUnref)
            , (void ( ProgramCostEstimator_wrapper::* )( bool ))(&ProgramCostEstimator_wrapper::default_setThreadSafeRefUnref)
            , ( bp::arg("threadSafe") ) );

}
