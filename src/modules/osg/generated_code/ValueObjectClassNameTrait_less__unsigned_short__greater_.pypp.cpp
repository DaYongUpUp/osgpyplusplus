// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "valueobjectclassnametrait_less__unsigned_short__greater_.pypp.hpp"

namespace bp = boost::python;

void register_ValueObjectClassNameTrait_less__unsigned_short__greater__class(){

    bp::class_< osg::ValueObjectClassNameTrait< unsigned short > >( "ValueObjectClassNameTrait_less__unsigned_short__greater_" )    
        .def( 
            "className"
            , (char const * (*)(  ))( &::osg::ValueObjectClassNameTrait< unsigned short >::className ) )    
        .staticmethod( "className" );

}
