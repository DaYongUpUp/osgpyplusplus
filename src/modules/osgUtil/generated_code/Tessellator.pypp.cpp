// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgutil.h"
#include "wrap_referenced.h"
#include "tessellator.pypp.hpp"

namespace bp = boost::python;

struct Tessellator_wrapper : osgUtil::Tessellator, bp::wrapper< osgUtil::Tessellator > {

    struct Prim_wrapper : osgUtil::Tessellator::Prim, bp::wrapper< osgUtil::Tessellator::Prim > {
    
        Prim_wrapper(::GLenum mode )
        : osgUtil::Tessellator::Prim( mode )
          , bp::wrapper< osgUtil::Tessellator::Prim >(){
            // constructor
        
        }
    
        virtual void setThreadSafeRefUnref( bool threadSafe ) {
            if( bp::override func_setThreadSafeRefUnref = this->get_override( "setThreadSafeRefUnref" ) )
                func_setThreadSafeRefUnref( threadSafe );
            else{
                this->osg::Referenced::setThreadSafeRefUnref( threadSafe );
            }
        }
        
        void default_setThreadSafeRefUnref( bool threadSafe ) {
            osg::Referenced::setThreadSafeRefUnref( threadSafe );
        }
    
    };

    Tessellator_wrapper( )
    : osgUtil::Tessellator( )
      , bp::wrapper< osgUtil::Tessellator >(){
        // null constructor
    
    }

    virtual void beginTessellation(  ) {
        if( bp::override func_beginTessellation = this->get_override( "beginTessellation" ) )
            func_beginTessellation(  );
        else{
            this->osgUtil::Tessellator::beginTessellation(  );
        }
    }
    
    void default_beginTessellation(  ) {
        osgUtil::Tessellator::beginTessellation( );
    }

    virtual void setThreadSafeRefUnref( bool threadSafe ) {
        if( bp::override func_setThreadSafeRefUnref = this->get_override( "setThreadSafeRefUnref" ) )
            func_setThreadSafeRefUnref( threadSafe );
        else{
            this->osg::Referenced::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Referenced::setThreadSafeRefUnref( threadSafe );
    }

};

void register_Tessellator_class(){

    { //::osgUtil::Tessellator
        typedef bp::class_< Tessellator_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< ::osgUtil::Tessellator >, boost::noncopyable > Tessellator_exposer_t;
        Tessellator_exposer_t Tessellator_exposer = Tessellator_exposer_t( "Tessellator", bp::init< >() );
        bp::scope Tessellator_scope( Tessellator_exposer );
        bp::enum_< osgUtil::Tessellator::TessellationType>("TessellationType")
            .value("TESS_TYPE_GEOMETRY", osgUtil::Tessellator::TESS_TYPE_GEOMETRY)
            .value("TESS_TYPE_DRAWABLE", osgUtil::Tessellator::TESS_TYPE_DRAWABLE)
            .value("TESS_TYPE_POLYGONS", osgUtil::Tessellator::TESS_TYPE_POLYGONS)
            .export_values()
            ;
        bp::enum_< osgUtil::Tessellator::WindingType>("WindingType")
            .value("TESS_WINDING_ODD", osgUtil::Tessellator::TESS_WINDING_ODD)
            .value("TESS_WINDING_NONZERO", osgUtil::Tessellator::TESS_WINDING_NONZERO)
            .value("TESS_WINDING_POSITIVE", osgUtil::Tessellator::TESS_WINDING_POSITIVE)
            .value("TESS_WINDING_NEGATIVE", osgUtil::Tessellator::TESS_WINDING_NEGATIVE)
            .value("TESS_WINDING_ABS_GEQ_TWO", osgUtil::Tessellator::TESS_WINDING_ABS_GEQ_TWO)
            .export_values()
            ;
        { //::osgUtil::Tessellator::Prim
            typedef bp::class_< Tessellator_wrapper::Prim_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< ::osgUtil::Tessellator::Prim >, boost::noncopyable > Prim_exposer_t;
            Prim_exposer_t Prim_exposer = Prim_exposer_t( "Prim", bp::init< GLenum >(( bp::arg("mode") )) );
            bp::scope Prim_scope( Prim_exposer );
            bp::implicitly_convertible< GLenum, osgUtil::Tessellator::Prim >();
            Prim_exposer.def_readwrite( "_mode", &osgUtil::Tessellator::Prim::_mode );
            Prim_exposer.def_readwrite( "_vertices", &osgUtil::Tessellator::Prim::_vertices );
        }
        { //::osgUtil::Tessellator::addVertex
        
            typedef void ( ::osgUtil::Tessellator::*addVertex_function_type )( ::osg::Vec3 * ) ;
            
            Tessellator_exposer.def( 
                "addVertex"
                , addVertex_function_type( &::osgUtil::Tessellator::addVertex )
                , ( bp::arg("vertex") ) );
        
        }
        { //::osgUtil::Tessellator::beginContour
        
            typedef void ( ::osgUtil::Tessellator::*beginContour_function_type )(  ) ;
            
            Tessellator_exposer.def( 
                "beginContour"
                , beginContour_function_type( &::osgUtil::Tessellator::beginContour ) );
        
        }
        { //::osgUtil::Tessellator::beginTessellation
        
            typedef void ( ::osgUtil::Tessellator::*beginTessellation_function_type )(  ) ;
            typedef void ( Tessellator_wrapper::*default_beginTessellation_function_type )(  ) ;
            
            Tessellator_exposer.def( 
                "beginTessellation"
                , beginTessellation_function_type(&::osgUtil::Tessellator::beginTessellation)
                , default_beginTessellation_function_type(&Tessellator_wrapper::default_beginTessellation) );
        
        }
        { //::osgUtil::Tessellator::endContour
        
            typedef void ( ::osgUtil::Tessellator::*endContour_function_type )(  ) ;
            
            Tessellator_exposer.def( 
                "endContour"
                , endContour_function_type( &::osgUtil::Tessellator::endContour ) );
        
        }
        { //::osgUtil::Tessellator::endTessellation
        
            typedef void ( ::osgUtil::Tessellator::*endTessellation_function_type )(  ) ;
            
            Tessellator_exposer.def( 
                "endTessellation"
                , endTessellation_function_type( &::osgUtil::Tessellator::endTessellation ) );
        
        }
        { //::osgUtil::Tessellator::getBoundaryOnly
        
            typedef bool ( ::osgUtil::Tessellator::*getBoundaryOnly_function_type )(  ) ;
            
            Tessellator_exposer.def( 
                "getBoundaryOnly"
                , getBoundaryOnly_function_type( &::osgUtil::Tessellator::getBoundaryOnly ) );
        
        }
        { //::osgUtil::Tessellator::getContours
        
            typedef ::std::vector< osg::ref_ptr<osg::PrimitiveSet> > ( ::osgUtil::Tessellator::*getContours_function_type )(  ) ;
            
            Tessellator_exposer.def( 
                "getContours"
                , getContours_function_type( &::osgUtil::Tessellator::getContours ) );
        
        }
        { //::osgUtil::Tessellator::getPrimList
        
            typedef ::std::vector< osg::ref_ptr<osgUtil::Tessellator::Prim> > & ( ::osgUtil::Tessellator::*getPrimList_function_type )(  ) ;
            
            Tessellator_exposer.def( 
                "getPrimList"
                , getPrimList_function_type( &::osgUtil::Tessellator::getPrimList )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgUtil::Tessellator::getTessellationType
        
            typedef ::osgUtil::Tessellator::TessellationType ( ::osgUtil::Tessellator::*getTessellationType_function_type )(  ) ;
            
            Tessellator_exposer.def( 
                "getTessellationType"
                , getTessellationType_function_type( &::osgUtil::Tessellator::getTessellationType ) );
        
        }
        { //::osgUtil::Tessellator::getWindingType
        
            typedef ::osgUtil::Tessellator::WindingType ( ::osgUtil::Tessellator::*getWindingType_function_type )(  ) ;
            
            Tessellator_exposer.def( 
                "getWindingType"
                , getWindingType_function_type( &::osgUtil::Tessellator::getWindingType ) );
        
        }
        { //::osgUtil::Tessellator::reset
        
            typedef void ( ::osgUtil::Tessellator::*reset_function_type )(  ) ;
            
            Tessellator_exposer.def( 
                "reset"
                , reset_function_type( &::osgUtil::Tessellator::reset ) );
        
        }
        { //::osgUtil::Tessellator::retessellatePolygons
        
            typedef void ( ::osgUtil::Tessellator::*retessellatePolygons_function_type )( ::osg::Geometry & ) ;
            
            Tessellator_exposer.def( 
                "retessellatePolygons"
                , retessellatePolygons_function_type( &::osgUtil::Tessellator::retessellatePolygons )
                , ( bp::arg("cxgeom") ) );
        
        }
        { //::osgUtil::Tessellator::setBoundaryOnly
        
            typedef void ( ::osgUtil::Tessellator::*setBoundaryOnly_function_type )( bool const ) ;
            
            Tessellator_exposer.def( 
                "setBoundaryOnly"
                , setBoundaryOnly_function_type( &::osgUtil::Tessellator::setBoundaryOnly )
                , ( bp::arg("tt") ) );
        
        }
        { //::osgUtil::Tessellator::setTessellationNormal
        
            typedef void ( ::osgUtil::Tessellator::*setTessellationNormal_function_type )( ::osg::Vec3 const ) ;
            
            Tessellator_exposer.def( 
                "setTessellationNormal"
                , setTessellationNormal_function_type( &::osgUtil::Tessellator::setTessellationNormal )
                , ( bp::arg("norm") ) );
        
        }
        { //::osgUtil::Tessellator::setTessellationType
        
            typedef void ( ::osgUtil::Tessellator::*setTessellationType_function_type )( ::osgUtil::Tessellator::TessellationType const ) ;
            
            Tessellator_exposer.def( 
                "setTessellationType"
                , setTessellationType_function_type( &::osgUtil::Tessellator::setTessellationType )
                , ( bp::arg("tt") ) );
        
        }
        { //::osgUtil::Tessellator::setWindingType
        
            typedef void ( ::osgUtil::Tessellator::*setWindingType_function_type )( ::osgUtil::Tessellator::WindingType const ) ;
            
            Tessellator_exposer.def( 
                "setWindingType"
                , setWindingType_function_type( &::osgUtil::Tessellator::setWindingType )
                , ( bp::arg("wt") ) );
        
        }
    }

}
