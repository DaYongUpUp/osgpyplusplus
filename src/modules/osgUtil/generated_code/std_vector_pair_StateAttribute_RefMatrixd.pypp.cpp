// This file has been generated by Py++.

#include "boost/python.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "wrap_osgutil.h"
#include "std_vector_pair_stateattribute_refmatrixd.pypp.hpp"

namespace bp = boost::python;

void register_std_vector_pair_StateAttribute_RefMatrixd_class(){

    { //::std::vector< std::pair<osg::ref_ptr<osg::StateAttribute const>, osg::ref_ptr<osg::RefMatrixd> > >
        typedef bp::class_< std::vector< std::pair<osg::ref_ptr<osg::StateAttribute const>, osg::ref_ptr<osg::RefMatrixd> > > > std_vector_pair_StateAttribute_RefMatrixd_exposer_t;
        std_vector_pair_StateAttribute_RefMatrixd_exposer_t std_vector_pair_StateAttribute_RefMatrixd_exposer = std_vector_pair_StateAttribute_RefMatrixd_exposer_t( "std_vector_pair_StateAttribute_RefMatrixd" );
        bp::scope std_vector_pair_StateAttribute_RefMatrixd_scope( std_vector_pair_StateAttribute_RefMatrixd_exposer );
        //WARNING: the next line of code will not compile, because "::std::pair<osg::ref_ptr<osg::StateAttribute const>, osg::ref_ptr<osg::RefMatrixd> >" does not have operator== !
        std_vector_pair_StateAttribute_RefMatrixd_exposer.def( bp::vector_indexing_suite< ::std::vector< std::pair<osg::ref_ptr<osg::StateAttribute const>, osg::ref_ptr<osg::RefMatrixd> > > >() );
    }

}
