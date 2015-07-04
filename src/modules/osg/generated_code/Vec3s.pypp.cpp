// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "indexing_helpers.h"
#include "vec3s.pypp.hpp"

namespace bp = boost::python;

void register_Vec3s_class(){

    { //::osg::Vec3s
        typedef bp::class_< osg::Vec3s > Vec3s_exposer_t;
        Vec3s_exposer_t Vec3s_exposer = Vec3s_exposer_t( "Vec3s", bp::init< >("\n Constructor that sets all components of the vector to zero\n") );
        bp::scope Vec3s_scope( Vec3s_exposer );
        bp::scope().attr("num_components") = (int)osg::Vec3s::num_components;
        Vec3s_exposer.def( bp::init< short int, short int, short int >(( bp::arg("r"), bp::arg("g"), bp::arg("b") )) );
        Vec3s_exposer.def( bp::self != bp::self );
        Vec3s_exposer.def( bp::self * bp::other< short int >() );
        Vec3s_exposer.def( bp::self * bp::self );
        Vec3s_exposer.def( bp::self *= bp::other< short int >() );
        Vec3s_exposer.def( bp::self + bp::self );
        Vec3s_exposer.def( bp::self += bp::self );
        Vec3s_exposer.def( bp::self - bp::self );
        Vec3s_exposer.def( -bp::self );
        Vec3s_exposer.def( bp::self -= bp::self );
        Vec3s_exposer.def( bp::self / bp::other< short int >() );
        Vec3s_exposer.def( bp::self /= bp::other< short int >() );
        Vec3s_exposer.def( bp::self < bp::self );
        Vec3s_exposer.def( bp::self == bp::self );
        { //::osg::Vec3s::operator[]
        
            typedef short int & ( ::osg::Vec3s::*__getitem___function_type )( unsigned int ) ;
            
            Vec3s_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::Vec3s::operator[] )
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec3s::operator[]
        
            typedef short int ( ::osg::Vec3s::*__getitem___function_type )( unsigned int ) const;
            
            Vec3s_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::Vec3s::operator[] )
                , ( bp::arg("i") ) );
        
        }
        { //::osg::Vec3s::set
        
            typedef void ( ::osg::Vec3s::*set_function_type )( short int,short int,short int ) ;
            
            Vec3s_exposer.def( 
                "set"
                , set_function_type( &::osg::Vec3s::set )
                , ( bp::arg("r"), bp::arg("g"), bp::arg("b") ) );
        
        }
        { //::osg::Vec3s::set
        
            typedef void ( ::osg::Vec3s::*set_function_type )( ::osg::Vec3s const & ) ;
            
            Vec3s_exposer.def( 
                "set"
                , set_function_type( &::osg::Vec3s::set )
                , ( bp::arg("rhs") ) );
        
        }
        { //property "x"[fget=::osg::Vec3s::x]
        
            typedef short int & ( ::osg::Vec3s::*fget )(  ) ;
            
            Vec3s_exposer.add_property( 
                "x"
                , bp::make_function( 
                      fget( &::osg::Vec3s::x )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "x"[fget=::osg::Vec3s::x]
        
            typedef short int ( ::osg::Vec3s::*fget )(  ) const;
            
            Vec3s_exposer.add_property( 
                "x"
                , fget( &::osg::Vec3s::x ) );
        
        }
        { //property "y"[fget=::osg::Vec3s::y]
        
            typedef short int & ( ::osg::Vec3s::*fget )(  ) ;
            
            Vec3s_exposer.add_property( 
                "y"
                , bp::make_function( 
                      fget( &::osg::Vec3s::y )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "y"[fget=::osg::Vec3s::y]
        
            typedef short int ( ::osg::Vec3s::*fget )(  ) const;
            
            Vec3s_exposer.add_property( 
                "y"
                , fget( &::osg::Vec3s::y ) );
        
        }
        { //property "z"[fget=::osg::Vec3s::z]
        
            typedef short int & ( ::osg::Vec3s::*fget )(  ) ;
            
            Vec3s_exposer.add_property( 
                "z"
                , bp::make_function( 
                      fget( &::osg::Vec3s::z )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "z"[fget=::osg::Vec3s::z]
        
            typedef short int ( ::osg::Vec3s::*fget )(  ) const;
            
            Vec3s_exposer.add_property( 
                "z"
                , fget( &::osg::Vec3s::z ) );
        
        }
        { //property "r"[fget=::osg::Vec3s::r]
        
            typedef short int & ( ::osg::Vec3s::*fget )(  ) ;
            
            Vec3s_exposer.add_property( 
                "r"
                , bp::make_function( 
                      fget( &::osg::Vec3s::r )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "r"[fget=::osg::Vec3s::r]
        
            typedef short int ( ::osg::Vec3s::*fget )(  ) const;
            
            Vec3s_exposer.add_property( 
                "r"
                , fget( &::osg::Vec3s::r ) );
        
        }
        { //property "g"[fget=::osg::Vec3s::g]
        
            typedef short int & ( ::osg::Vec3s::*fget )(  ) ;
            
            Vec3s_exposer.add_property( 
                "g"
                , bp::make_function( 
                      fget( &::osg::Vec3s::g )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "g"[fget=::osg::Vec3s::g]
        
            typedef short int ( ::osg::Vec3s::*fget )(  ) const;
            
            Vec3s_exposer.add_property( 
                "g"
                , fget( &::osg::Vec3s::g ) );
        
        }
        { //property "b"[fget=::osg::Vec3s::b]
        
            typedef short int & ( ::osg::Vec3s::*fget )(  ) ;
            
            Vec3s_exposer.add_property( 
                "b"
                , bp::make_function( 
                      fget( &::osg::Vec3s::b )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "b"[fget=::osg::Vec3s::b]
        
            typedef short int ( ::osg::Vec3s::*fget )(  ) const;
            
            Vec3s_exposer.add_property( 
                "b"
                , fget( &::osg::Vec3s::b ) );
        
        }
        Vec3s_exposer.def( bp::self_ns::str( bp::self ) );
        Vec3s_exposer.def( bp::self_ns::str(bp::self) );
        Vec3s_exposer.def(bp::indexing::container_suite<
                            osg::Vec3s, 
                            bp::indexing::all_methods, 
                            OsgVec_algorithms<osg::Vec3s, osg::Vec3s::value_type, osg::Vec3s::num_components> >());
    }

}
