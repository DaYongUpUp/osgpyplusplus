// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/vector.hpp"
#include "wrap_osgutil.h"
#include "_ref_ptr_less__osgUtil_scope_Intersector__greater___value_traits.pypp.hpp"
#include "intersectors.pypp.hpp"

namespace bp = boost::python;

void register_Intersectors_class(){

    { //::std::vector< osg::ref_ptr<osgUtil::Intersector> >
        typedef bp::class_< std::vector< osg::ref_ptr<osgUtil::Intersector> > > Intersectors_exposer_t;
        Intersectors_exposer_t Intersectors_exposer = Intersectors_exposer_t( "Intersectors" );
        bp::scope Intersectors_scope( Intersectors_exposer );
        Intersectors_exposer.def( bp::indexing::vector_suite< std::vector< osg::ref_ptr<osgUtil::Intersector> > >() );
    }

}