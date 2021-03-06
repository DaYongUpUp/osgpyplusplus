// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/map.hpp"
#include "wrap_osgtext.h"
#include "_GlyphQuads__value_traits.pypp.hpp"
#include "textureglyphquadmap.pypp.hpp"

namespace bp = boost::python;

void register_TextureGlyphQuadMap_class(){

    bp::class_< std::map< osg::ref_ptr<osgText::GlyphTexture>, osgText::Text::GlyphQuads > >( "TextureGlyphQuadMap" )    
        .def( bp::indexing::map_suite< std::map< osg::ref_ptr<osgText::GlyphTexture>, osgText::Text::GlyphQuads > >() );

}
