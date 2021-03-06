// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/set.hpp"
#include "wrap_osg.h"
#include "operationthreads.pypp.hpp"

namespace bp = boost::python;

void register_OperationThreads_class(){

    bp::class_< std::set< osg::OperationThread* > >( "OperationThreads" )    
        .def( bp::indexing::set_suite< std::set< osg::OperationThread* > >::with_policies(bp::return_internal_reference< >()) );

}
