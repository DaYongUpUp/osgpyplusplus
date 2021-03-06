// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/set.hpp"
#include "wrap_osgutil.h"
#include "_PolytopeIntersection__value_traits.pypp.hpp"
#include "polytopeintersections.pypp.hpp"

namespace bp = boost::python;

void register_PolytopeIntersections_class(){

    bp::class_< std::set< osgUtil::PolytopeIntersector::Intersection > >( "PolytopeIntersections" )    
        .def( bp::indexing::set_suite< std::set< osgUtil::PolytopeIntersector::Intersection > >() );

}
