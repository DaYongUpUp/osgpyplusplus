// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osganimation.h"
#include "outquadfunction.pypp.hpp"

namespace bp = boost::python;

void register_OutQuadFunction_class(){

    bp::class_< osgAnimation::OutQuadFunction >( "OutQuadFunction", "\n Quad function\n" )    
        .def( 
            "getValueAt"
            , (void (*)( float,float & ))( &::osgAnimation::OutQuadFunction::getValueAt )
            , ( bp::arg("t"), bp::arg("result") )
            , "\n Quad function\n" )    
        .staticmethod( "getValueAt" );

}
