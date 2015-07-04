// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "indexing_helpers.h"
#include "vec3ub.pypp.hpp"

namespace bp = boost::python;

void register_Vec3ub_class(){

    { //::osg::Vec3ub
        typedef bp::class_< osg::Vec3ub > Vec3ub_exposer_t;
        Vec3ub_exposer_t Vec3ub_exposer = Vec3ub_exposer_t( "Vec3ub", "\n General purpose float triple.\n Uses include representation of color coordinates.\n No support yet added for float * Vec3ub - is it necessary?\n Need to define a non-member non-friend operator*  etc.\n Vec3ub * float is okay\n", bp::init< >("\n Constructor that sets all components of the vector to zero\n") );
        bp::scope Vec3ub_scope( Vec3ub_exposer );
        bp::scope().attr("num_components") = (int)osg::Vec3ub::num_components;
        Vec3ub_exposer.def( bp::init< unsigned char, unsigned char, unsigned char >(( bp::arg("r"), bp::arg("g"), bp::arg("b") )) );
        Vec3ub_exposer.def( bp::self != bp::self );
        Vec3ub_exposer.def( bp::self * bp::other< float >() );
        Vec3ub_exposer.def( bp::self *= bp::other< float >() );
        Vec3ub_exposer.def( bp::self + bp::self );
        Vec3ub_exposer.def( bp::self += bp::self );
        Vec3ub_exposer.def( bp::self - bp::self );
        Vec3ub_exposer.def( bp::self -= bp::self );
        Vec3ub_exposer.def( bp::self / bp::other< float >() );
        Vec3ub_exposer.def( bp::self /= bp::other< float >() );
        Vec3ub_exposer.def( bp::self < bp::self );
        Vec3ub_exposer.def( bp::self == bp::self );
        { //::osg::Vec3ub::operator[]
        
            typedef unsigned char & ( ::osg::Vec3ub::*__getitem___function_type )( unsigned int ) ;
            
            Vec3ub_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::Vec3ub::operator[] )
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Vec3ub::operator[]
        
            typedef unsigned char ( ::osg::Vec3ub::*__getitem___function_type )( unsigned int ) const;
            
            Vec3ub_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::Vec3ub::operator[] )
                , ( bp::arg("i") ) );
        
        }
        { //::osg::Vec3ub::set
        
            typedef void ( ::osg::Vec3ub::*set_function_type )( unsigned char,unsigned char,unsigned char ) ;
            
            Vec3ub_exposer.def( 
                "set"
                , set_function_type( &::osg::Vec3ub::set )
                , ( bp::arg("r"), bp::arg("g"), bp::arg("b") ) );
        
        }
        { //::osg::Vec3ub::set
        
            typedef void ( ::osg::Vec3ub::*set_function_type )( ::osg::Vec3ub const & ) ;
            
            Vec3ub_exposer.def( 
                "set"
                , set_function_type( &::osg::Vec3ub::set )
                , ( bp::arg("rhs") ) );
        
        }
        { //property "x"[fget=::osg::Vec3ub::x]
        
            typedef unsigned char & ( ::osg::Vec3ub::*fget )(  ) ;
            
            Vec3ub_exposer.add_property( 
                "x"
                , bp::make_function( 
                      fget( &::osg::Vec3ub::x )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "x"[fget=::osg::Vec3ub::x]
        
            typedef unsigned char ( ::osg::Vec3ub::*fget )(  ) const;
            
            Vec3ub_exposer.add_property( 
                "x"
                , fget( &::osg::Vec3ub::x ) );
        
        }
        { //property "y"[fget=::osg::Vec3ub::y]
        
            typedef unsigned char & ( ::osg::Vec3ub::*fget )(  ) ;
            
            Vec3ub_exposer.add_property( 
                "y"
                , bp::make_function( 
                      fget( &::osg::Vec3ub::y )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "y"[fget=::osg::Vec3ub::y]
        
            typedef unsigned char ( ::osg::Vec3ub::*fget )(  ) const;
            
            Vec3ub_exposer.add_property( 
                "y"
                , fget( &::osg::Vec3ub::y ) );
        
        }
        { //property "z"[fget=::osg::Vec3ub::z]
        
            typedef unsigned char & ( ::osg::Vec3ub::*fget )(  ) ;
            
            Vec3ub_exposer.add_property( 
                "z"
                , bp::make_function( 
                      fget( &::osg::Vec3ub::z )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "z"[fget=::osg::Vec3ub::z]
        
            typedef unsigned char ( ::osg::Vec3ub::*fget )(  ) const;
            
            Vec3ub_exposer.add_property( 
                "z"
                , fget( &::osg::Vec3ub::z ) );
        
        }
        { //property "r"[fget=::osg::Vec3ub::r]
        
            typedef unsigned char & ( ::osg::Vec3ub::*fget )(  ) ;
            
            Vec3ub_exposer.add_property( 
                "r"
                , bp::make_function( 
                      fget( &::osg::Vec3ub::r )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "r"[fget=::osg::Vec3ub::r]
        
            typedef unsigned char ( ::osg::Vec3ub::*fget )(  ) const;
            
            Vec3ub_exposer.add_property( 
                "r"
                , fget( &::osg::Vec3ub::r ) );
        
        }
        { //property "g"[fget=::osg::Vec3ub::g]
        
            typedef unsigned char & ( ::osg::Vec3ub::*fget )(  ) ;
            
            Vec3ub_exposer.add_property( 
                "g"
                , bp::make_function( 
                      fget( &::osg::Vec3ub::g )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "g"[fget=::osg::Vec3ub::g]
        
            typedef unsigned char ( ::osg::Vec3ub::*fget )(  ) const;
            
            Vec3ub_exposer.add_property( 
                "g"
                , fget( &::osg::Vec3ub::g ) );
        
        }
        { //property "b"[fget=::osg::Vec3ub::b]
        
            typedef unsigned char & ( ::osg::Vec3ub::*fget )(  ) ;
            
            Vec3ub_exposer.add_property( 
                "b"
                , bp::make_function( 
                      fget( &::osg::Vec3ub::b )
                    , bp::return_value_policy< bp::copy_non_const_reference >() )  );
        
        }
        { //property "b"[fget=::osg::Vec3ub::b]
        
            typedef unsigned char ( ::osg::Vec3ub::*fget )(  ) const;
            
            Vec3ub_exposer.add_property( 
                "b"
                , fget( &::osg::Vec3ub::b ) );
        
        }
        Vec3ub_exposer.def(bp::indexing::container_suite<
                            osg::Vec3ub, 
                            bp::indexing::all_methods, 
                            OsgVec_algorithms<osg::Vec3ub, osg::Vec3ub::value_type, osg::Vec3ub::num_components> >());
    }

}
