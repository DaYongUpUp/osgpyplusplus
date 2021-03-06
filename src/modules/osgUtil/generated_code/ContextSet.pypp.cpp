// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/set.hpp"
#include "wrap_osgutil.h"
#include "contextset.pypp.hpp"

namespace bp = boost::python;

void register_ContextSet_class(){

    bp::class_< std::set< osg::GraphicsContext* > >( "ContextSet" )    
        .def( bp::indexing::set_suite< std::set< osg::GraphicsContext* > >::with_policies(bp::return_internal_reference< >()) );

}
