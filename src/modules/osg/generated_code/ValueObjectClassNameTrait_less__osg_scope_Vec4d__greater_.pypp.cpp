// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "valueobjectclassnametrait_less__osg_scope_vec4d__greater_.pypp.hpp"

namespace bp = boost::python;

void register_ValueObjectClassNameTrait_less__osg_scope_Vec4d__greater__class(){

    bp::class_< osg::ValueObjectClassNameTrait< osg::Vec4d > >( "ValueObjectClassNameTrait_less__osg_scope_Vec4d__greater_" )    
        .def( 
            "className"
            , (char const * (*)(  ))( &::osg::ValueObjectClassNameTrait< osg::Vec4d >::className ) )    
        .staticmethod( "className" );

}
