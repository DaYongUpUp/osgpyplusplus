// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/vector.hpp"
#include "wrap_osg.h"
#include "std_vector_osgnodeptr.pypp.hpp"

namespace bp = boost::python;

void register_std_vector_osgNodePtr_class(){

    { //::std::vector< osg::Node* >
        typedef bp::class_< std::vector< osg::Node* > > std_vector_osgNodePtr_exposer_t;
        std_vector_osgNodePtr_exposer_t std_vector_osgNodePtr_exposer = std_vector_osgNodePtr_exposer_t( "std_vector_osgNodePtr" );
        bp::scope std_vector_osgNodePtr_scope( std_vector_osgNodePtr_exposer );
        std_vector_osgNodePtr_exposer.def( bp::indexing::vector_suite< std::vector< osg::Node* > >::with_policies(bp::return_internal_reference< >()) );
    }

}
