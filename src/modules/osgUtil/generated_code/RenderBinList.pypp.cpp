// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/map.hpp"
#include "wrap_osgutil.h"
#include "renderbinlist.pypp.hpp"

namespace bp = boost::python;

void register_RenderBinList_class(){

    bp::class_< std::map< int, osg::ref_ptr<osgUtil::RenderBin> > >( "RenderBinList" )    
        .def( bp::indexing::map_suite< std::map< int, osg::ref_ptr<osgUtil::RenderBin> > >() );

}
