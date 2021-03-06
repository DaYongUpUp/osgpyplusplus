// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgutil.h"
#include "wrap_referenced.h"
#include "tangentspacegenerator.pypp.hpp"

namespace bp = boost::python;

struct TangentSpaceGenerator_wrapper : osgUtil::TangentSpaceGenerator, bp::wrapper< osgUtil::TangentSpaceGenerator > {

    TangentSpaceGenerator_wrapper( )
    : osgUtil::TangentSpaceGenerator( )
      , bp::wrapper< osgUtil::TangentSpaceGenerator >(){
        // null constructor
    
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

void register_TangentSpaceGenerator_class(){

    bp::class_< TangentSpaceGenerator_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< TangentSpaceGenerator_wrapper >, boost::noncopyable >( "TangentSpaceGenerator", bp::no_init )    
        .def( bp::init< >() )    
        .def( 
            "generate"
            , (void ( ::osgUtil::TangentSpaceGenerator::* )( ::osg::Geometry *,int ))( &::osgUtil::TangentSpaceGenerator::generate )
            , ( bp::arg("geo"), bp::arg("normal_map_tex_unit")=(int)(0) ) )    
        .def( 
            "getBinormalArray"
            , (::osg::Vec4Array * ( ::osgUtil::TangentSpaceGenerator::* )(  ))( &::osgUtil::TangentSpaceGenerator::getBinormalArray )
            , bp::return_internal_reference< >() )    
        .def( 
            "getBinormalArray"
            , (::osg::Vec4Array const * ( ::osgUtil::TangentSpaceGenerator::* )(  )const)( &::osgUtil::TangentSpaceGenerator::getBinormalArray )
            , bp::return_internal_reference< >() )    
        .def( 
            "getIndices"
            , (::osg::IndexArray * ( ::osgUtil::TangentSpaceGenerator::* )(  ))( &::osgUtil::TangentSpaceGenerator::getIndices )
            , bp::return_internal_reference< >() )    
        .def( 
            "getNormalArray"
            , (::osg::Vec4Array * ( ::osgUtil::TangentSpaceGenerator::* )(  ))( &::osgUtil::TangentSpaceGenerator::getNormalArray )
            , bp::return_internal_reference< >() )    
        .def( 
            "getNormalArray"
            , (::osg::Vec4Array const * ( ::osgUtil::TangentSpaceGenerator::* )(  )const)( &::osgUtil::TangentSpaceGenerator::getNormalArray )
            , bp::return_internal_reference< >() )    
        .def( 
            "getTangentArray"
            , (::osg::Vec4Array * ( ::osgUtil::TangentSpaceGenerator::* )(  ))( &::osgUtil::TangentSpaceGenerator::getTangentArray )
            , bp::return_internal_reference< >() )    
        .def( 
            "getTangentArray"
            , (::osg::Vec4Array const * ( ::osgUtil::TangentSpaceGenerator::* )(  )const)( &::osgUtil::TangentSpaceGenerator::getTangentArray )
            , bp::return_internal_reference< >() )    
        .def( 
            "setBinormalArray"
            , (void ( ::osgUtil::TangentSpaceGenerator::* )( ::osg::Vec4Array * ))( &::osgUtil::TangentSpaceGenerator::setBinormalArray )
            , ( bp::arg("array") ) )    
        .def( 
            "setNormalArray"
            , (void ( ::osgUtil::TangentSpaceGenerator::* )( ::osg::Vec4Array * ))( &::osgUtil::TangentSpaceGenerator::setNormalArray )
            , ( bp::arg("array") ) )    
        .def( 
            "setTangentArray"
            , (void ( ::osgUtil::TangentSpaceGenerator::* )( ::osg::Vec4Array * ))( &::osgUtil::TangentSpaceGenerator::setTangentArray )
            , ( bp::arg("array") ) );

}
