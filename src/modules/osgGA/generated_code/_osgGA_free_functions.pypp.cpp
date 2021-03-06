// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgga.h"
#include "_osgga_free_functions.pypp.hpp"

namespace bp = boost::python;

void register_free_functions(){

    { //::osgGAGetLibraryName
    
        typedef char const * ( *osgGAGetLibraryName_function_type )(  );
        
        bp::def( 
            "osgGAGetLibraryName"
            , osgGAGetLibraryName_function_type( &::osgGAGetLibraryName )
            , " getLibraryName_osgGA() returns the library name in human friendly form." );
    
    }

    { //::osgGAGetVersion
    
        typedef char const * ( *osgGAGetVersion_function_type )(  );
        
        bp::def( 
            "osgGAGetVersion"
            , osgGAGetVersion_function_type( &::osgGAGetVersion )
            , " osgGAGetVersion() returns the library version number.\n Numbering convention : OpenSceneGraph-1.0 will return 1.0 from osgGAGetVersion.\n\n This C function can be also used to check for the existence of the OpenSceneGraph\n library using autoconf and its m4 macro AC_CHECK_LIB.\n\n Here is the code to add to your configure.in:\n Verbatim:\n #\n # Check for the OpenSceneGraph (OSG) GA library\n #\n AC_CHECK_LIB(osg, osgGAGetVersion, ,\n    [AC_MSG_ERROR(OpenSceneGraph GA library not found. See http://www.openscenegraph.org)],)\n E:ndverbatim" );
    
    }

}
