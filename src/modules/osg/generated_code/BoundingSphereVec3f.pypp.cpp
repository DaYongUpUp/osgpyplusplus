// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "boundingspherevec3f.pypp.hpp"

namespace bp = boost::python;

void register_BoundingSphereVec3f_class(){

    { //::osg::BoundingSphereImpl< osg::Vec3f >
        typedef bp::class_< osg::BoundingSphereImpl< osg::Vec3f > > BoundingSphereVec3f_exposer_t;
        BoundingSphereVec3f_exposer_t BoundingSphereVec3f_exposer = BoundingSphereVec3f_exposer_t( "BoundingSphereVec3f", "\n General purpose bounding sphere class for enclosing nodes/objects/vertices.\n Bounds internal osg::Nodes in the scene, assists in view frustum culling,\n etc. Similar in function to BoundingBox, its quicker for evaluating\n culling but generally will not cull as aggressively because it encloses a\n greater volume.\n", bp::init< >("\n Construct a default bounding sphere with radius to -1.0f, representing an invalid/unset bounding sphere.\n") );
        bp::scope BoundingSphereVec3f_scope( BoundingSphereVec3f_exposer );
        BoundingSphereVec3f_exposer.def( bp::init< osg::Vec3f const &, float >(( bp::arg("center"), bp::arg("radius") ), "\n Creates a bounding sphere initialized to the given extents.\n") );
        BoundingSphereVec3f_exposer.def( bp::init< osg::BoundingSphereImpl< osg::Vec3f > const & >(( bp::arg("bs") ), "\n Creates a bounding sphere initialized to the given extents.\n") );
        BoundingSphereVec3f_exposer.def( bp::init< osg::BoundingBoxImpl< osg::Vec3f > const & >(( bp::arg("bb") ), "\n Creates a bounding sphere initialized to the given extents.\n") );
        bp::implicitly_convertible< osg::BoundingBoxImpl< osg::Vec3f > const &, osg::BoundingSphereImpl< osg::Vec3f > >();
        { //::osg::BoundingSphereImpl< osg::Vec3f >::center
        
            typedef osg::BoundingSphereImpl< osg::Vec3f > exported_class_t;
            typedef ::osg::Vec3f & ( exported_class_t::*center_function_type )(  ) ;
            
            BoundingSphereVec3f_exposer.def( 
                "center"
                , center_function_type( &::osg::BoundingSphereImpl< osg::Vec3f >::center )
                , bp::return_internal_reference< >()
                , "\n Returns the center of the bounding sphere.\n" );
        
        }
        { //::osg::BoundingSphereImpl< osg::Vec3f >::center
        
            typedef osg::BoundingSphereImpl< osg::Vec3f > exported_class_t;
            typedef ::osg::Vec3f const & ( exported_class_t::*center_function_type )(  ) const;
            
            BoundingSphereVec3f_exposer.def( 
                "center"
                , center_function_type( &::osg::BoundingSphereImpl< osg::Vec3f >::center )
                , bp::return_internal_reference< >()
                , "\n Returns the const center of the bounding sphere.\n" );
        
        }
        { //::osg::BoundingSphereImpl< osg::Vec3f >::contains
        
            typedef osg::BoundingSphereImpl< osg::Vec3f > exported_class_t;
            typedef bool ( exported_class_t::*contains_function_type )( ::osg::Vec3f const & ) const;
            
            BoundingSphereVec3f_exposer.def( 
                "contains"
                , contains_function_type( &::osg::BoundingSphereImpl< osg::Vec3f >::contains )
                , ( bp::arg("v") )
                , "\n Returns true if v is within the sphere.\n" );
        
        }
        { //::osg::BoundingSphereImpl< osg::Vec3f >::expandBy
        
            typedef osg::BoundingSphereImpl< osg::Vec3f > exported_class_t;
            typedef void ( exported_class_t::*expandBy_function_type )( ::osg::BoundingSphereImpl< osg::Vec3f > const & ) ;
            
            BoundingSphereVec3f_exposer.def( 
                "expandBy"
                , expandBy_function_type( &::osg::BoundingSphereImpl< osg::Vec3f >::expandBy )
                , ( bp::arg("sh") ) );
        
        }
        { //::osg::BoundingSphereImpl< osg::Vec3f >::expandRadiusBy
        
            typedef osg::BoundingSphereImpl< osg::Vec3f > exported_class_t;
            typedef void ( exported_class_t::*expandRadiusBy_function_type )( ::osg::BoundingSphereImpl< osg::Vec3f > const & ) ;
            
            BoundingSphereVec3f_exposer.def( 
                "expandRadiusBy"
                , expandRadiusBy_function_type( &::osg::BoundingSphereImpl< osg::Vec3f >::expandRadiusBy )
                , ( bp::arg("sh") ) );
        
        }
        { //::osg::BoundingSphereImpl< osg::Vec3f >::init
        
            typedef osg::BoundingSphereImpl< osg::Vec3f > exported_class_t;
            typedef void ( exported_class_t::*init_function_type )(  ) ;
            
            BoundingSphereVec3f_exposer.def( 
                "init"
                , init_function_type( &::osg::BoundingSphereImpl< osg::Vec3f >::init )
                , "\n Clear the bounding sphere. Reset to default values.\n" );
        
        }
        { //::osg::BoundingSphereImpl< osg::Vec3f >::intersects
        
            typedef osg::BoundingSphereImpl< osg::Vec3f > exported_class_t;
            typedef bool ( exported_class_t::*intersects_function_type )( ::osg::BoundingSphereImpl< osg::Vec3f > const & ) const;
            
            BoundingSphereVec3f_exposer.def( 
                "intersects"
                , intersects_function_type( &::osg::BoundingSphereImpl< osg::Vec3f >::intersects )
                , ( bp::arg("bs") )
                , "\n Returns true if there is a non-empty intersection with the given\n bounding sphere.\n" );
        
        }
        BoundingSphereVec3f_exposer.def( bp::self != bp::self );
        BoundingSphereVec3f_exposer.def( bp::self == bp::self );
        { //::osg::BoundingSphereImpl< osg::Vec3f >::radius
        
            typedef osg::BoundingSphereImpl< osg::Vec3f > exported_class_t;
            typedef float & ( exported_class_t::*radius_function_type )(  ) ;
            
            BoundingSphereVec3f_exposer.def( 
                "radius"
                , radius_function_type( &::osg::BoundingSphereImpl< osg::Vec3f >::radius )
                , bp::return_value_policy< bp::copy_non_const_reference >()
                , "\n Returns the radius of the bounding sphere.\n" );
        
        }
        { //::osg::BoundingSphereImpl< osg::Vec3f >::radius
        
            typedef osg::BoundingSphereImpl< osg::Vec3f > exported_class_t;
            typedef float ( exported_class_t::*radius_function_type )(  ) const;
            
            BoundingSphereVec3f_exposer.def( 
                "radius"
                , radius_function_type( &::osg::BoundingSphereImpl< osg::Vec3f >::radius )
                , "\n Returns the const radius of the bounding sphere.\n" );
        
        }
        { //::osg::BoundingSphereImpl< osg::Vec3f >::radius2
        
            typedef osg::BoundingSphereImpl< osg::Vec3f > exported_class_t;
            typedef float ( exported_class_t::*radius2_function_type )(  ) const;
            
            BoundingSphereVec3f_exposer.def( 
                "radius2"
                , radius2_function_type( &::osg::BoundingSphereImpl< osg::Vec3f >::radius2 )
                , "\n Returns the squared length of the radius. Note, For performance\n reasons, the calling method is responsible for checking to make\n sure the sphere is valid.\n" );
        
        }
        { //::osg::BoundingSphereImpl< osg::Vec3f >::set
        
            typedef osg::BoundingSphereImpl< osg::Vec3f > exported_class_t;
            typedef void ( exported_class_t::*set_function_type )( ::osg::Vec3f const &,float ) ;
            
            BoundingSphereVec3f_exposer.def( 
                "set"
                , set_function_type( &::osg::BoundingSphereImpl< osg::Vec3f >::set )
                , ( bp::arg("center"), bp::arg("radius") )
                , "\n Set the bounding sphere to the given center/radius using floats.\n" );
        
        }
        { //::osg::BoundingSphereImpl< osg::Vec3f >::valid
        
            typedef osg::BoundingSphereImpl< osg::Vec3f > exported_class_t;
            typedef bool ( exported_class_t::*valid_function_type )(  ) const;
            
            BoundingSphereVec3f_exposer.def( 
                "valid"
                , valid_function_type( &::osg::BoundingSphereImpl< osg::Vec3f >::valid )
                , "\n Returns true of the bounding sphere extents are valid, false\n otherwise.\n" );
        
        }
        BoundingSphereVec3f_exposer.def_readwrite( "_center", &osg::BoundingSphereImpl< osg::Vec3f >::_center );
        BoundingSphereVec3f_exposer.def_readwrite( "_radius", &osg::BoundingSphereImpl< osg::Vec3f >::_radius );
    }

}
