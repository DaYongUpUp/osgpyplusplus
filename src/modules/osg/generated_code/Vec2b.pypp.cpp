// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "indexing_helpers.h"
#include "vec2b.pypp.hpp"

namespace bp = boost::python;

void register_Vec2b_class(){

    { //::osg::Vec2b
        typedef bp::class_< osg::Vec2b > Vec2b_exposer_t;
        Vec2b_exposer_t Vec2b_exposer = Vec2b_exposer_t( "Vec2b", "\n General purpose float triple.\n Uses include representation of color coordinates.\n No support yet added for float * Vec2b - is it necessary?\n Need to define a non-member non-friend operator*  etc.\n Vec2b * float is okay\n", bp::init< >("\n Constructor that sets all components of the vector to zero\n") );
        bp::scope Vec2b_scope( Vec2b_exposer );
        bp::scope().attr("num_components") = (int)osg::Vec2b::num_components;
        Vec2b_exposer.def( bp::init< signed char, signed char >(( bp::arg("r"), bp::arg("g") )) );
        Vec2b_exposer.def( bp::self != bp::self );
        Vec2b_exposer.def( bp::self * bp::other< float >() );
        Vec2b_exposer.def( bp::self *= bp::other< float >() );
        Vec2b_exposer.def( bp::self + bp::self );
        Vec2b_exposer.def( bp::self += bp::self );
        Vec2b_exposer.def( bp::self - bp::self );
        Vec2b_exposer.def( bp::self -= bp::self );
        Vec2b_exposer.def( bp::self / bp::other< float >() );
        Vec2b_exposer.def( bp::self /= bp::other< float >() );
        Vec2b_exposer.def( bp::self < bp::self );
        Vec2b_exposer.def( bp::self == bp::self );
        { //::osg::Vec2b::operator[]
        
            typedef signed char & ( ::osg::Vec2b::*__getitem___function_type )( int ) ;
            
            Vec2b_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::Vec2b::operator[] )
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec2b::operator[]
        
            typedef signed char ( ::osg::Vec2b::*__getitem___function_type )( int ) const;
            
            Vec2b_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::Vec2b::operator[] )
                , ( bp::arg("i") ) );
        
        }
        { //::osg::Vec2b::set
        
            typedef void ( ::osg::Vec2b::*set_function_type )( signed char,signed char ) ;
            
            Vec2b_exposer.def( 
                "set"
                , set_function_type( &::osg::Vec2b::set )
                , ( bp::arg("x"), bp::arg("y") ) );
        
        }
        { //::osg::Vec2b::set
        
            typedef void ( ::osg::Vec2b::*set_function_type )( ::osg::Vec2b const & ) ;
            
            Vec2b_exposer.def( 
                "set"
                , set_function_type( &::osg::Vec2b::set )
                , ( bp::arg("rhs") ) );
        
        }
        { //property "x"[fget=::osg::Vec2b::x]
        
            typedef signed char & ( ::osg::Vec2b::*fget )(  ) ;
            
            Vec2b_exposer.add_property( 
                "x"
                , bp::make_function( 
                      fget( &::osg::Vec2b::x )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "x"[fget=::osg::Vec2b::x]
        
            typedef signed char ( ::osg::Vec2b::*fget )(  ) const;
            
            Vec2b_exposer.add_property( 
                "x"
                , fget( &::osg::Vec2b::x ) );
        
        }
        { //property "y"[fget=::osg::Vec2b::y]
        
            typedef signed char & ( ::osg::Vec2b::*fget )(  ) ;
            
            Vec2b_exposer.add_property( 
                "y"
                , bp::make_function( 
                      fget( &::osg::Vec2b::y )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "y"[fget=::osg::Vec2b::y]
        
            typedef signed char ( ::osg::Vec2b::*fget )(  ) const;
            
            Vec2b_exposer.add_property( 
                "y"
                , fget( &::osg::Vec2b::y ) );
        
        }
        { //property "r"[fget=::osg::Vec2b::r]
        
            typedef signed char & ( ::osg::Vec2b::*fget )(  ) ;
            
            Vec2b_exposer.add_property( 
                "r"
                , bp::make_function( 
                      fget( &::osg::Vec2b::r )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "r"[fget=::osg::Vec2b::r]
        
            typedef signed char ( ::osg::Vec2b::*fget )(  ) const;
            
            Vec2b_exposer.add_property( 
                "r"
                , fget( &::osg::Vec2b::r ) );
        
        }
        { //property "g"[fget=::osg::Vec2b::g]
        
            typedef signed char & ( ::osg::Vec2b::*fget )(  ) ;
            
            Vec2b_exposer.add_property( 
                "g"
                , bp::make_function( 
                      fget( &::osg::Vec2b::g )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "g"[fget=::osg::Vec2b::g]
        
            typedef signed char ( ::osg::Vec2b::*fget )(  ) const;
            
            Vec2b_exposer.add_property( 
                "g"
                , fget( &::osg::Vec2b::g ) );
        
        }
        Vec2b_exposer.def( bp::self_ns::str( bp::self ) );
        Vec2b_exposer.def( bp::self_ns::str(bp::self) );
        Vec2b_exposer.def(bp::indexing::container_suite<
                            osg::Vec2b, 
                            bp::indexing::all_methods, 
                            OsgVec_algorithms<osg::Vec2b, osg::Vec2b::value_type, osg::Vec2b::num_components> >());
    }

}
