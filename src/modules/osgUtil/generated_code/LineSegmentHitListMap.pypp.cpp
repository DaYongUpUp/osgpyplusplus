// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/map.hpp"
#include "wrap_osgutil.h"
#include "_vector_less__osgUtil_scope_Hit__greater___value_traits.pypp.hpp"
#include "linesegmenthitlistmap.pypp.hpp"

namespace bp = boost::python;

void register_LineSegmentHitListMap_class(){

    bp::class_< std::map< osg::LineSegment const*, std::vector< osgUtil::Hit > > >( "LineSegmentHitListMap" )    
        .def( bp::indexing::map_suite< std::map< osg::LineSegment const*, std::vector< osgUtil::Hit > > >() );

}