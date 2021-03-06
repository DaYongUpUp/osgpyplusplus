// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgutil.h"
#include "_osgutil_free_functions.pypp.hpp"

namespace bp = boost::python;

void register_free_functions(){

    { //::osgUtil::create3DNoiseImage
    
        typedef ::osg::Image * ( *create3DNoiseImage_function_type )( int );
        
        bp::def( 
            "create3DNoiseImage"
            , create3DNoiseImage_function_type( &::osgUtil::create3DNoiseImage )
            , ( bp::arg("texSize") )
            , bp::return_value_policy< bp::reference_existing_object >() );
    
    }

    { //::osgUtil::create3DNoiseTexture
    
        typedef ::osg::Texture3D * ( *create3DNoiseTexture_function_type )( int );
        
        bp::def( 
            "create3DNoiseTexture"
            , create3DNoiseTexture_function_type( &::osgUtil::create3DNoiseTexture )
            , ( bp::arg("texSize") )
            , bp::return_value_policy< bp::reference_existing_object >() );
    
    }

    { //::osgUtilGetLibraryName
    
        typedef char const * ( *osgUtilGetLibraryName_function_type )(  );
        
        bp::def( 
            "osgUtilGetLibraryName"
            , osgUtilGetLibraryName_function_type( &::osgUtilGetLibraryName ) );
    
    }

    { //::osgUtilGetVersion
    
        typedef char const * ( *osgUtilGetVersion_function_type )(  );
        
        bp::def( 
            "osgUtilGetVersion"
            , osgUtilGetVersion_function_type( &::osgUtilGetVersion ) );
    
    }

}
