// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/list.hpp"
#include "wrap_osgutil.h"
#include "list_less__osg_scope_ref_ptr_less_osgutil_scope_edgecollector_scope_edgeloop_greater___greater_.pypp.hpp"

namespace bp = boost::python;

void register_list_less__osg_scope_ref_ptr_less_osgUtil_scope_EdgeCollector_scope_Edgeloop_greater___greater__class(){

    bp::class_< std::list< osg::ref_ptr<osgUtil::EdgeCollector::Edgeloop> > >("list_less__osg_scope_ref_ptr_less_osgUtil_scope_EdgeCollector_scope_Edgeloop_greater___greater_")    
        .def( bp::indexing::list_suite< std::list< osg::ref_ptr<osgUtil::EdgeCollector::Edgeloop> > >() );

}
