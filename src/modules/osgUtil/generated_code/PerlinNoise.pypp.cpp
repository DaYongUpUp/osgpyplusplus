// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgutil.h"
#include "perlinnoise.pypp.hpp"

namespace bp = boost::python;

void register_PerlinNoise_class(){

    bp::class_< osgUtil::PerlinNoise >( "PerlinNoise", bp::init< >() )    
        .def( 
            "PerlinNoise1D"
            , (double ( ::osgUtil::PerlinNoise::* )( double,double,double,int ))( &::osgUtil::PerlinNoise::PerlinNoise1D )
            , ( bp::arg("x"), bp::arg("alpha"), bp::arg("beta"), bp::arg("n") ) )    
        .def( 
            "PerlinNoise2D"
            , (double ( ::osgUtil::PerlinNoise::* )( double,double,double,double,int ))( &::osgUtil::PerlinNoise::PerlinNoise2D )
            , ( bp::arg("x"), bp::arg("y"), bp::arg("alpha"), bp::arg("beta"), bp::arg("n") ) )    
        .def( 
            "PerlinNoise3D"
            , (double ( ::osgUtil::PerlinNoise::* )( double,double,double,double,double,int ))( &::osgUtil::PerlinNoise::PerlinNoise3D )
            , ( bp::arg("x"), bp::arg("y"), bp::arg("z"), bp::arg("alpha"), bp::arg("beta"), bp::arg("n") ) )    
        .def( 
            "SetNoiseFrequency"
            , (void ( ::osgUtil::PerlinNoise::* )( int ))( &::osgUtil::PerlinNoise::SetNoiseFrequency )
            , ( bp::arg("frequency") ) )    
        .def( 
            "create3DNoiseImage"
            , (::osg::Image * ( ::osgUtil::PerlinNoise::* )( int ))( &::osgUtil::PerlinNoise::create3DNoiseImage )
            , ( bp::arg("texSize") )
            , bp::return_internal_reference< >() )    
        .def( 
            "create3DNoiseTexture"
            , (::osg::Texture3D * ( ::osgUtil::PerlinNoise::* )( int ))( &::osgUtil::PerlinNoise::create3DNoiseTexture )
            , ( bp::arg("texSize") )
            , bp::return_internal_reference< >() )    
        .def( 
            "noise1"
            , (double ( ::osgUtil::PerlinNoise::* )( double ))( &::osgUtil::PerlinNoise::noise1 )
            , ( bp::arg("arg") ) )    
        .def( 
            "noise2"
            , (double ( ::osgUtil::PerlinNoise::* )( double * ))( &::osgUtil::PerlinNoise::noise2 )
            , ( bp::arg("vec") ) )    
        .def( 
            "noise3"
            , (double ( ::osgUtil::PerlinNoise::* )( double * ))( &::osgUtil::PerlinNoise::noise3 )
            , ( bp::arg("vec") ) )    
        .def( 
            "normalize2"
            , (void ( ::osgUtil::PerlinNoise::* )( double * ))( &::osgUtil::PerlinNoise::normalize2 )
            , ( bp::arg("vec") ) )    
        .def( 
            "normalize3"
            , (void ( ::osgUtil::PerlinNoise::* )( double * ))( &::osgUtil::PerlinNoise::normalize3 )
            , ( bp::arg("vec") ) );

}
