// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osganimation.h"
#include "wrap_referenced.h"
#include "rigtransformsoftware.pypp.hpp"

namespace bp = boost::python;

struct RigTransformSoftware_wrapper : osgAnimation::RigTransformSoftware, bp::wrapper< osgAnimation::RigTransformSoftware > {

    RigTransformSoftware_wrapper( )
    : osgAnimation::RigTransformSoftware( )
      , bp::wrapper< osgAnimation::RigTransformSoftware >(){
        // null constructor
    
    }

    virtual void operator()( ::osgAnimation::RigGeometry & arg0 ) {
        if( bp::override func___call__ = this->get_override( "__call__" ) )
            func___call__( boost::ref(arg0) );
        else{
            this->osgAnimation::RigTransformSoftware::operator()( boost::ref(arg0) );
        }
    }
    
    void default___call__( ::osgAnimation::RigGeometry & arg0 ) {
        osgAnimation::RigTransformSoftware::operator()( boost::ref(arg0) );
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

void register_RigTransformSoftware_class(){

    { //::osgAnimation::RigTransformSoftware
        typedef bp::class_< RigTransformSoftware_wrapper, bp::bases< osgAnimation::RigTransform >, osg::ref_ptr< RigTransformSoftware_wrapper >, boost::noncopyable > RigTransformSoftware_exposer_t;
        RigTransformSoftware_exposer_t RigTransformSoftware_exposer = RigTransformSoftware_exposer_t( "RigTransformSoftware", "\n This class manage format for hardware skinning\n", bp::init< >("\n This class manage format for hardware skinning\n") );
        bp::scope RigTransformSoftware_scope( RigTransformSoftware_exposer );
        bp::class_< osgAnimation::RigTransformSoftware::BoneWeight >( "RTSBoneWeight", bp::init< osgAnimation::Bone *, float >(( bp::arg("bone"), bp::arg("weight") )) )    
            .def( 
                "getBone"
                , (::osgAnimation::Bone const * ( ::osgAnimation::RigTransformSoftware::BoneWeight::* )(  )const)( &::osgAnimation::RigTransformSoftware::BoneWeight::getBone )
                , bp::return_internal_reference< >() )    
            .def( 
                "getWeight"
                , (float ( ::osgAnimation::RigTransformSoftware::BoneWeight::* )(  )const)( &::osgAnimation::RigTransformSoftware::BoneWeight::getWeight ) )    
            .def( 
                "setWeight"
                , (void ( ::osgAnimation::RigTransformSoftware::BoneWeight::* )( float ))( &::osgAnimation::RigTransformSoftware::BoneWeight::setWeight )
                , ( bp::arg("w") ) );
        bp::class_< osgAnimation::RigTransformSoftware::UniqBoneSetVertexSet >( "UniqBoneSetVertexSet" )    
            .def( 
                "accummulateMatrix"
                , (void ( ::osgAnimation::RigTransformSoftware::UniqBoneSetVertexSet::* )( ::osg::Matrix const &,::osg::Matrix const &,double ))( &::osgAnimation::RigTransformSoftware::UniqBoneSetVertexSet::accummulateMatrix )
                , ( bp::arg("invBindMatrix"), bp::arg("matrix"), bp::arg("weight") ) )    
            .def( 
                "computeMatrixForVertexSet"
                , (void ( ::osgAnimation::RigTransformSoftware::UniqBoneSetVertexSet::* )(  ))( &::osgAnimation::RigTransformSoftware::UniqBoneSetVertexSet::computeMatrixForVertexSet ) )    
            .def( 
                "getBones"
                , (::std::vector< osgAnimation::RigTransformSoftware::BoneWeight > & ( ::osgAnimation::RigTransformSoftware::UniqBoneSetVertexSet::* )(  ))( &::osgAnimation::RigTransformSoftware::UniqBoneSetVertexSet::getBones )
                , bp::return_internal_reference< >() )    
            .def( 
                "getMatrix"
                , (::osg::Matrix const & ( ::osgAnimation::RigTransformSoftware::UniqBoneSetVertexSet::* )(  )const)( &::osgAnimation::RigTransformSoftware::UniqBoneSetVertexSet::getMatrix )
                , bp::return_internal_reference< >() )    
            .def( 
                "getVertexes"
                , (::std::vector< int > & ( ::osgAnimation::RigTransformSoftware::UniqBoneSetVertexSet::* )(  ))( &::osgAnimation::RigTransformSoftware::UniqBoneSetVertexSet::getVertexes )
                , bp::return_internal_reference< >() )    
            .def( 
                "resetMatrix"
                , (void ( ::osgAnimation::RigTransformSoftware::UniqBoneSetVertexSet::* )(  ))( &::osgAnimation::RigTransformSoftware::UniqBoneSetVertexSet::resetMatrix ) );
        { //::osgAnimation::RigTransformSoftware::operator()
        
            typedef void ( ::osgAnimation::RigTransformSoftware::*__call___function_type)( ::osgAnimation::RigGeometry & ) ;
            typedef void ( RigTransformSoftware_wrapper::*default___call___function_type)( ::osgAnimation::RigGeometry & ) ;
            
            RigTransformSoftware_exposer.def( 
                "__call__"
                , __call___function_type(&::osgAnimation::RigTransformSoftware::operator())
                , default___call___function_type(&RigTransformSoftware_wrapper::default___call__)
                , ( bp::arg("arg0") ) );
        
        }
    }

}
