// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/vector.hpp"
#include "wrap_osg.h"
#include "ratiolist.pypp.hpp"

namespace bp = boost::python;

void register_RatioList_class(){

    { //::std::vector< double >
        typedef bp::class_< std::vector< double > > RatioList_exposer_t;
        RatioList_exposer_t RatioList_exposer = RatioList_exposer_t( "RatioList" );
        bp::scope RatioList_scope( RatioList_exposer );
        RatioList_exposer.def( bp::indexing::vector_suite< std::vector< double > >() );
    }

}
