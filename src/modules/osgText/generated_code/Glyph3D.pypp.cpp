// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgtext.h"
#include "wrap_referenced.h"
#include "glyph3d.pypp.hpp"

namespace bp = boost::python;

struct Glyph3D_wrapper : osgText::Glyph3D, bp::wrapper< osgText::Glyph3D > {

    Glyph3D_wrapper(::osgText::Font * font, unsigned int glyphCode )
    : osgText::Glyph3D( boost::python::ptr(font), glyphCode )
      , bp::wrapper< osgText::Glyph3D >(){
        // constructor
    
    }

    virtual void setThreadSafeRefUnref( bool threadSafe ) {
        if( bp::override func_setThreadSafeRefUnref = this->get_override( "setThreadSafeRefUnref" ) )
            func_setThreadSafeRefUnref( threadSafe );
        else{
            this->osgText::Glyph3D::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osgText::Glyph3D::setThreadSafeRefUnref( threadSafe );
    }

};

void register_Glyph3D_class(){

    bp::class_< Glyph3D_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< ::osgText::Glyph3D >, boost::noncopyable >( "Glyph3D", bp::no_init )    
        .def( bp::init< osgText::Font *, unsigned int >(( bp::arg("font"), bp::arg("glyphCode") )) )    
        .def( 
            "getBoundingBox"
            , (::osg::BoundingBox const & ( ::osgText::Glyph3D::* )(  )const)( &::osgText::Glyph3D::getBoundingBox )
            , bp::return_internal_reference< >() )    
        .def( 
            "getFont"
            , (::osgText::Font * ( ::osgText::Glyph3D::* )(  ))( &::osgText::Glyph3D::getFont )
            , bp::return_internal_reference< >() )    
        .def( 
            "getFont"
            , (::osgText::Font const * ( ::osgText::Glyph3D::* )(  )const)( &::osgText::Glyph3D::getFont )
            , bp::return_internal_reference< >() )    
        .def( 
            "getGlyphCode"
            , (unsigned int ( ::osgText::Glyph3D::* )(  )const)( &::osgText::Glyph3D::getGlyphCode ) )    
        .def( 
            "getGlyphGeometry"
            , (::osgText::GlyphGeometry * ( ::osgText::Glyph3D::* )( ::osgText::Style const * ))( &::osgText::Glyph3D::getGlyphGeometry )
            , ( bp::arg("style") )
            , bp::return_internal_reference< >() )    
        .def( 
            "getHeight"
            , (float ( ::osgText::Glyph3D::* )(  )const)( &::osgText::Glyph3D::getHeight ) )    
        .def( 
            "getHorizontalAdvance"
            , (float ( ::osgText::Glyph3D::* )(  )const)( &::osgText::Glyph3D::getHorizontalAdvance ) )    
        .def( 
            "getHorizontalBearing"
            , (::osg::Vec2 const & ( ::osgText::Glyph3D::* )(  )const)( &::osgText::Glyph3D::getHorizontalBearing )
            , bp::return_internal_reference< >() )    
        .def( 
            "getRawFacePrimitiveSetList"
            , (::std::vector< osg::ref_ptr<osg::PrimitiveSet> > & ( ::osgText::Glyph3D::* )(  ))( &::osgText::Glyph3D::getRawFacePrimitiveSetList )
            , bp::return_internal_reference< >()
            , " Get the PrimitiveSetList for the raw face which hasnt been tessellated." )    
        .def( 
            "getRawFacePrimitiveSetList"
            , (::std::vector< osg::ref_ptr<osg::PrimitiveSet> > const & ( ::osgText::Glyph3D::* )(  )const)( &::osgText::Glyph3D::getRawFacePrimitiveSetList )
            , bp::return_internal_reference< >() )    
        .def( 
            "getRawVertexArray"
            , (::osg::Vec3Array * ( ::osgText::Glyph3D::* )(  ))( &::osgText::Glyph3D::getRawVertexArray )
            , bp::return_internal_reference< >() )    
        .def( 
            "getRawVertexArray"
            , (::osg::Vec3Array const * ( ::osgText::Glyph3D::* )(  )const)( &::osgText::Glyph3D::getRawVertexArray )
            , bp::return_internal_reference< >() )    
        .def( 
            "getVerticalAdvance"
            , (float ( ::osgText::Glyph3D::* )(  )const)( &::osgText::Glyph3D::getVerticalAdvance ) )    
        .def( 
            "getVerticalBearing"
            , (::osg::Vec2 const & ( ::osgText::Glyph3D::* )(  )const)( &::osgText::Glyph3D::getVerticalBearing )
            , bp::return_internal_reference< >() )    
        .def( 
            "getWidth"
            , (float ( ::osgText::Glyph3D::* )(  )const)( &::osgText::Glyph3D::getWidth ) )    
        .def( 
            "setBoundingBox"
            , (void ( ::osgText::Glyph3D::* )( ::osg::BoundingBox & ))( &::osgText::Glyph3D::setBoundingBox )
            , ( bp::arg("bb") ) )    
        .def( 
            "setHeight"
            , (void ( ::osgText::Glyph3D::* )( float ))( &::osgText::Glyph3D::setHeight )
            , ( bp::arg("height") ) )    
        .def( 
            "setHorizontalAdvance"
            , (void ( ::osgText::Glyph3D::* )( float ))( &::osgText::Glyph3D::setHorizontalAdvance )
            , ( bp::arg("advance") ) )    
        .def( 
            "setHorizontalBearing"
            , (void ( ::osgText::Glyph3D::* )( ::osg::Vec2 const & ))( &::osgText::Glyph3D::setHorizontalBearing )
            , ( bp::arg("bearing") ) )    
        .def( 
            "setRawVertexArray"
            , (void ( ::osgText::Glyph3D::* )( ::osg::Vec3Array * ))( &::osgText::Glyph3D::setRawVertexArray )
            , ( bp::arg("vertices") ) )    
        .def( 
            "setThreadSafeRefUnref"
            , (void ( ::osgText::Glyph3D::* )( bool ))(&::osgText::Glyph3D::setThreadSafeRefUnref)
            , (void ( Glyph3D_wrapper::* )( bool ))(&Glyph3D_wrapper::default_setThreadSafeRefUnref)
            , ( bp::arg("threadSafe") ) )    
        .def( 
            "setVerticalAdvance"
            , (void ( ::osgText::Glyph3D::* )( float ))( &::osgText::Glyph3D::setVerticalAdvance )
            , ( bp::arg("advance") ) )    
        .def( 
            "setVerticalBearing"
            , (void ( ::osgText::Glyph3D::* )( ::osg::Vec2 const & ))( &::osgText::Glyph3D::setVerticalBearing )
            , ( bp::arg("bearing") ) )    
        .def( 
            "setWidth"
            , (void ( ::osgText::Glyph3D::* )( float ))( &::osgText::Glyph3D::setWidth )
            , ( bp::arg("width") ) );

}