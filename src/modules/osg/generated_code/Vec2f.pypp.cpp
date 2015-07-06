// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "indexing_helpers.h"
#include "vec2f.pypp.hpp"

namespace bp = boost::python;

void register_Vec2f_class(){

    { //::osg::Vec2f
        typedef bp::class_< osg::Vec2f > Vec2f_exposer_t;
        Vec2f_exposer_t Vec2f_exposer = Vec2f_exposer_t( "Vec2f", "\n General purpose float pair. Uses include representation of\n texture coordinates.\n No support yet added for float * Vec2f - is it necessary?\n Need to define a non-member non-friend operator* etc.\n BTW: Vec2f * float is okay\n", bp::init< >("\n Constructor that sets all components of the vector to zero\n") );
        bp::scope Vec2f_scope( Vec2f_exposer );
        bp::scope().attr("num_components") = (int)osg::Vec2f::num_components;
        Vec2f_exposer.def( bp::init< float, float >(( bp::arg("x"), bp::arg("y") )) );
        { //::osg::Vec2f::isNaN
        
            typedef bool ( ::osg::Vec2f::*isNaN_function_type)(  ) const;
            
            Vec2f_exposer.def( 
                "isNaN"
                , isNaN_function_type( &::osg::Vec2f::isNaN )
                , "\n Returns true if at least one component has value NaN.\n" );
        
        }
        { //::osg::Vec2f::length
        
            typedef float ( ::osg::Vec2f::*length_function_type)(  ) const;
            
            Vec2f_exposer.def( 
                "length"
                , length_function_type( &::osg::Vec2f::length )
                , "\n Length of the vector = sqrt( vec . vec )\n" );
        
        }
        { //::osg::Vec2f::length2
        
            typedef float ( ::osg::Vec2f::*length2_function_type)(  ) const;
            
            Vec2f_exposer.def( 
                "length2"
                , length2_function_type( &::osg::Vec2f::length2 )
                , "\n Length squared of the vector = vec . vec\n" );
        
        }
        { //::osg::Vec2f::normalize
        
            typedef float ( ::osg::Vec2f::*normalize_function_type)(  ) ;
            
            Vec2f_exposer.def( 
                "normalize"
                , normalize_function_type( &::osg::Vec2f::normalize )
                , "\n Normalize the vector so that it has length unity.\n Returns the previous length of the vector.\n" );
        
        }
        Vec2f_exposer.def( bp::self != bp::self );
        Vec2f_exposer.def( bp::self * bp::self );
        Vec2f_exposer.def( bp::self * bp::other< float >() );
        Vec2f_exposer.def( bp::self *= bp::other< float >() );
        Vec2f_exposer.def( bp::self + bp::self );
        Vec2f_exposer.def( bp::self += bp::self );
        Vec2f_exposer.def( bp::self - bp::self );
        Vec2f_exposer.def( -bp::self );
        Vec2f_exposer.def( bp::self -= bp::self );
        Vec2f_exposer.def( bp::self / bp::other< float >() );
        Vec2f_exposer.def( bp::self /= bp::other< float >() );
        Vec2f_exposer.def( bp::self < bp::self );
        Vec2f_exposer.def( bp::self == bp::self );
        { //::osg::Vec2f::operator[]
        
            typedef float & ( ::osg::Vec2f::*__getitem___function_type)( int ) ;
            
            Vec2f_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::Vec2f::operator[] )
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec2f::operator[]
        
            typedef float ( ::osg::Vec2f::*__getitem___function_type)( int ) const;
            
            Vec2f_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::Vec2f::operator[] )
                , ( bp::arg("i") ) );
        
        }
        { //::osg::Vec2f::set
        
            typedef void ( ::osg::Vec2f::*set_function_type)( float,float ) ;
            
            Vec2f_exposer.def( 
                "set"
                , set_function_type( &::osg::Vec2f::set )
                , ( bp::arg("x"), bp::arg("y") ) );
        
        }
        { //::osg::Vec2f::valid
        
            typedef bool ( ::osg::Vec2f::*valid_function_type)(  ) const;
            
            Vec2f_exposer.def( 
                "valid"
                , valid_function_type( &::osg::Vec2f::valid )
                , "\n Returns true if all components have values that are not NaN.\n" );
        
        }
        { //property "x"[fget=::osg::Vec2f::x]
        
            typedef float & ( ::osg::Vec2f::*fget)(  ) ;
            
            Vec2f_exposer.add_property( 
                "x"
                , bp::make_function( 
                      fget( &::osg::Vec2f::x )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "x"[fget=::osg::Vec2f::x]
        
            typedef float ( ::osg::Vec2f::*fget)(  ) const;
            
            Vec2f_exposer.add_property( 
                "x"
                , fget( &::osg::Vec2f::x ) );
        
        }
        { //property "y"[fget=::osg::Vec2f::y]
        
            typedef float & ( ::osg::Vec2f::*fget)(  ) ;
            
            Vec2f_exposer.add_property( 
                "y"
                , bp::make_function( 
                      fget( &::osg::Vec2f::y )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "y"[fget=::osg::Vec2f::y]
        
            typedef float ( ::osg::Vec2f::*fget)(  ) const;
            
            Vec2f_exposer.add_property( 
                "y"
                , fget( &::osg::Vec2f::y ) );
        
        }
        Vec2f_exposer.def( bp::self_ns::str( bp::self ) );
        Vec2f_exposer.def( bp::self_ns::str(bp::self) );
        Vec2f_exposer.def(bp::indexing::container_suite<
                            osg::Vec2f, 
                            bp::indexing::all_methods, 
                            OsgVec_algorithms<osg::Vec2f, osg::Vec2f::value_type, osg::Vec2f::num_components> >());
    }

}
