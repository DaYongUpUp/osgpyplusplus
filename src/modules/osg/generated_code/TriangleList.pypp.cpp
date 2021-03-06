// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/vector.hpp"
#include "wrap_osg.h"
#include "_Triangle__value_traits.pypp.hpp"
#include "trianglelist.pypp.hpp"

namespace bp = boost::python;

void register_TriangleList_class(){

    { //::std::vector< osg::KdTree::Triangle >
        typedef bp::class_< std::vector< osg::KdTree::Triangle > > TriangleList_exposer_t;
        TriangleList_exposer_t TriangleList_exposer = TriangleList_exposer_t( "TriangleList" );
        bp::scope TriangleList_scope( TriangleList_exposer );
        TriangleList_exposer.def( bp::indexing::vector_suite< std::vector< osg::KdTree::Triangle > >() );
    }

}
