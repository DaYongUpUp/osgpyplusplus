// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/map.hpp"
#include "wrap_osganimation.h"
#include "_vector_less__std_scope_pair_less_unsigned_int_comma__osg_scope_ref_ptr_less_osgAnimation_scope_Action_greater___greater___greater___value_traits.pypp.hpp"
#include "actionlayers.pypp.hpp"

namespace bp = boost::python;

void register_ActionLayers_class(){

    bp::class_< std::map< int, std::vector< std::pair<unsigned int, osg::ref_ptr<osgAnimation::Action> > > > >( "ActionLayers" )    
        .def( bp::indexing::map_suite< std::map< int, std::vector< std::pair<unsigned int, osg::ref_ptr<osgAnimation::Action> > > > >() );

}
