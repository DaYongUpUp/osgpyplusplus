// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "indexing_helpers.h"
#include "vec3d.pypp.hpp"

namespace bp = boost::python;

void register_Vec3d_class(){

    { //::osg::Vec3d
        typedef bp::class_< osg::Vec3d > Vec3d_exposer_t;
        Vec3d_exposer_t Vec3d_exposer = Vec3d_exposer_t( "Vec3d", "\n General purpose double triple for use as vertices, vectors and normals.\n Provides general math operations from addition through to cross products.\n No support yet added for double * Vec3d - is it necessary?\n Need to define a non-member non-friend operator*  etc.\n    Vec3d * double is okay\n", bp::init< >("\n Constructor that sets all components of the vector to zero\n") );
        bp::scope Vec3d_scope( Vec3d_exposer );
        bp::scope().attr("num_components") = (int)osg::Vec3d::num_components;
        Vec3d_exposer.def( bp::init< osg::Vec3f const & >(( bp::arg("vec") )) );
        bp::implicitly_convertible< osg::Vec3f const &, osg::Vec3d >();
        Vec3d_exposer.def( bp::init< double, double, double >(( bp::arg("x"), bp::arg("y"), bp::arg("z") )) );
        Vec3d_exposer.def( bp::init< osg::Vec2d const &, double >(( bp::arg("v2"), bp::arg("zz") )) );
        { //::osg::Vec3d::isNaN
        
            typedef bool ( ::osg::Vec3d::*isNaN_function_type )(  ) const;
            
            Vec3d_exposer.def( 
                "isNaN"
                , isNaN_function_type( &::osg::Vec3d::isNaN )
                , "\n Returns true if at least one component has value NaN.\n" );
        
        }
        { //::osg::Vec3d::length
        
            typedef double ( ::osg::Vec3d::*length_function_type )(  ) const;
            
            Vec3d_exposer.def( 
                "length"
                , length_function_type( &::osg::Vec3d::length )
                , "\n Length of the vector = sqrt( vec . vec )\n" );
        
        }
        { //::osg::Vec3d::length2
        
            typedef double ( ::osg::Vec3d::*length2_function_type )(  ) const;
            
            Vec3d_exposer.def( 
                "length2"
                , length2_function_type( &::osg::Vec3d::length2 )
                , "\n Length squared of the vector = vec . vec\n" );
        
        }
        { //::osg::Vec3d::normalize
        
            typedef double ( ::osg::Vec3d::*normalize_function_type )(  ) ;
            
            Vec3d_exposer.def( 
                "normalize"
                , normalize_function_type( &::osg::Vec3d::normalize )
                , "\n Normalize the vector so that it has length unity.\n Returns the previous length of the vector.\n If the vector is zero length, it is left unchanged and zero is returned.\n" );
        
        }
        Vec3d_exposer.def( "as__scope_osg_scope_Vec3f", &osg::Vec3d::operator ::osg::Vec3f  );
        Vec3d_exposer.def( bp::self != bp::self );
        Vec3d_exposer.def( bp::self * bp::self );
        Vec3d_exposer.def( bp::self * bp::other< double >() );
        Vec3d_exposer.def( bp::self *= bp::other< double >() );
        Vec3d_exposer.def( bp::self + bp::self );
        Vec3d_exposer.def( bp::self += bp::self );
        Vec3d_exposer.def( bp::self - bp::self );
        Vec3d_exposer.def( -bp::self );
        Vec3d_exposer.def( bp::self -= bp::self );
        Vec3d_exposer.def( bp::self / bp::other< double >() );
        Vec3d_exposer.def( bp::self /= bp::other< double >() );
        Vec3d_exposer.def( bp::self < bp::self );
        Vec3d_exposer.def( bp::self == bp::self );
        { //::osg::Vec3d::operator[]
        
            typedef double & ( ::osg::Vec3d::*__getitem___function_type )( int ) ;
            
            Vec3d_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::Vec3d::operator[] )
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec3d::operator[]
        
            typedef double ( ::osg::Vec3d::*__getitem___function_type )( int ) const;
            
            Vec3d_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::Vec3d::operator[] )
                , ( bp::arg("i") ) );
        
        }
        Vec3d_exposer.def( bp::self ^ bp::self );
        { //::osg::Vec3d::set
        
            typedef void ( ::osg::Vec3d::*set_function_type )( double,double,double ) ;
            
            Vec3d_exposer.def( 
                "set"
                , set_function_type( &::osg::Vec3d::set )
                , ( bp::arg("x"), bp::arg("y"), bp::arg("z") ) );
        
        }
        { //::osg::Vec3d::set
        
            typedef void ( ::osg::Vec3d::*set_function_type )( ::osg::Vec3d const & ) ;
            
            Vec3d_exposer.def( 
                "set"
                , set_function_type( &::osg::Vec3d::set )
                , ( bp::arg("rhs") ) );
        
        }
        { //::osg::Vec3d::valid
        
            typedef bool ( ::osg::Vec3d::*valid_function_type )(  ) const;
            
            Vec3d_exposer.def( 
                "valid"
                , valid_function_type( &::osg::Vec3d::valid )
                , "\n Returns true if all components have values that are not NaN.\n" );
        
        }
        { //property "x"[fget=::osg::Vec3d::x]
        
            typedef double & ( ::osg::Vec3d::*fget )(  ) ;
            
            Vec3d_exposer.add_property( 
                "x"
                , bp::make_function( 
                      fget( &::osg::Vec3d::x )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "x"[fget=::osg::Vec3d::x]
        
            typedef double ( ::osg::Vec3d::*fget )(  ) const;
            
            Vec3d_exposer.add_property( 
                "x"
                , fget( &::osg::Vec3d::x ) );
        
        }
        { //property "y"[fget=::osg::Vec3d::y]
        
            typedef double & ( ::osg::Vec3d::*fget )(  ) ;
            
            Vec3d_exposer.add_property( 
                "y"
                , bp::make_function( 
                      fget( &::osg::Vec3d::y )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "y"[fget=::osg::Vec3d::y]
        
            typedef double ( ::osg::Vec3d::*fget )(  ) const;
            
            Vec3d_exposer.add_property( 
                "y"
                , fget( &::osg::Vec3d::y ) );
        
        }
        { //property "z"[fget=::osg::Vec3d::z]
        
            typedef double & ( ::osg::Vec3d::*fget )(  ) ;
            
            Vec3d_exposer.add_property( 
                "z"
                , bp::make_function( 
                      fget( &::osg::Vec3d::z )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "z"[fget=::osg::Vec3d::z]
        
            typedef double ( ::osg::Vec3d::*fget )(  ) const;
            
            Vec3d_exposer.add_property( 
                "z"
                , fget( &::osg::Vec3d::z ) );
        
        }
        Vec3d_exposer.def( bp::self * bp::other< osg::Matrixf >() );
        Vec3d_exposer.def( bp::self * bp::other< osg::Matrixd >() );
        Vec3d_exposer.def( bp::self * bp::other< osg::Vec4f >() );
        Vec3d_exposer.def( bp::self * bp::other< osg::Vec4d >() );
        Vec3d_exposer.def( bp::self_ns::str( bp::self ) );
        Vec3d_exposer.def( bp::self_ns::str(bp::self) );
        Vec3d_exposer.def(bp::indexing::container_suite<
                            osg::Vec3d, 
                            bp::indexing::all_methods, 
                            OsgVec_algorithms<osg::Vec3d, osg::Vec3d::value_type, osg::Vec3d::num_components> >());
    }

}
