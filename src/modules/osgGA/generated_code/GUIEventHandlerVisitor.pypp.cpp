// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgga.h"
#include "guieventhandlervisitor.pypp.hpp"

namespace bp = boost::python;

void register_GUIEventHandlerVisitor_class(){

    bp::class_< osgGA::GUIEventHandlerVisitor >( "GUIEventHandlerVisitor" )    
        .def( 
            "visit"
            , (void ( ::osgGA::GUIEventHandlerVisitor::* )( ::osgGA::GUIEventHandler & ) )( &::osgGA::GUIEventHandlerVisitor::visit )
            , ( bp::arg("arg0") ) );

}
