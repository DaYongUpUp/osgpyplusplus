// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/vector.hpp"
#include "wrap_osg.h"
#include "vector_less__bool__greater_.pypp.hpp"

namespace bp = boost::python;

void register_vector_less__bool__greater__class(){

    bp::class_< std::vector< bool > >( "vector_less__bool__greater_" )    
        .def( bp::indexing::vector_suite< std::vector< bool > >() );

}
