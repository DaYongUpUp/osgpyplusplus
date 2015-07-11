// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "camerarenderordersortop.pypp.hpp"

namespace bp = boost::python;

void register_CameraRenderOrderSortOp_class(){

    bp::class_< osg::CameraRenderOrderSortOp >( "CameraRenderOrderSortOp", " Functor to assist with ordering camers in the order they should be rendered in." )    
        .def( 
            "__call__"
            , (bool ( ::osg::CameraRenderOrderSortOp::* )( ::osg::Camera const *,::osg::Camera const * ) const)( &::osg::CameraRenderOrderSortOp::operator() )
            , ( bp::arg("lhs"), bp::arg("rhs") )
            , " Functor to assist with ordering camers in the order they should be rendered in." );

}
