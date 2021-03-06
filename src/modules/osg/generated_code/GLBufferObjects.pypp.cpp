// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "glbufferobjects.pypp.hpp"

namespace bp = boost::python;

void register_GLBufferObjects_class(){

    { //::osg::buffered_object< osg::ref_ptr< osg::GLBufferObject > >
        typedef bp::class_< osg::buffered_object< osg::ref_ptr< osg::GLBufferObject > > > GLBufferObjects_exposer_t;
        GLBufferObjects_exposer_t GLBufferObjects_exposer = GLBufferObjects_exposer_t( "GLBufferObjects", bp::init< >() );
        bp::scope GLBufferObjects_scope( GLBufferObjects_exposer );
        GLBufferObjects_exposer.def( bp::init< unsigned int >(( bp::arg("size") )) );
        bp::implicitly_convertible< unsigned int, osg::buffered_object< osg::ref_ptr< osg::GLBufferObject > > >();
        { //::osg::buffered_object< osg::ref_ptr< osg::GLBufferObject > >::clear
        
            typedef osg::buffered_object< osg::ref_ptr< osg::GLBufferObject > > exported_class_t;
            typedef void ( exported_class_t::*clear_function_type)(  ) ;
            
            GLBufferObjects_exposer.def( 
                "clear"
                , clear_function_type( &::osg::buffered_object< osg::ref_ptr< osg::GLBufferObject > >::clear ) );
        
        }
        { //::osg::buffered_object< osg::ref_ptr< osg::GLBufferObject > >::empty
        
            typedef osg::buffered_object< osg::ref_ptr< osg::GLBufferObject > > exported_class_t;
            typedef bool ( exported_class_t::*empty_function_type)(  ) const;
            
            GLBufferObjects_exposer.def( 
                "empty"
                , empty_function_type( &::osg::buffered_object< osg::ref_ptr< osg::GLBufferObject > >::empty ) );
        
        }
        { //::osg::buffered_object< osg::ref_ptr< osg::GLBufferObject > >::operator=
        
            typedef osg::buffered_object< osg::ref_ptr< osg::GLBufferObject > > exported_class_t;
            typedef ::osg::buffered_object< osg::ref_ptr< osg::GLBufferObject > > & ( exported_class_t::*assign_function_type)( ::osg::buffered_object< osg::ref_ptr< osg::GLBufferObject > > const & ) ;
            
            GLBufferObjects_exposer.def( 
                "assign"
                , assign_function_type( &::osg::buffered_object< osg::ref_ptr< osg::GLBufferObject > >::operator= )
                , ( bp::arg("rhs") )
                , bp::return_self< >() );
        
        }
        { //::osg::buffered_object< osg::ref_ptr< osg::GLBufferObject > >::operator[]
        
            typedef osg::buffered_object< osg::ref_ptr< osg::GLBufferObject > > exported_class_t;
            typedef ::osg::ref_ptr< osg::GLBufferObject > & ( exported_class_t::*__getitem___function_type)( unsigned int ) ;
            
            GLBufferObjects_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::buffered_object< osg::ref_ptr< osg::GLBufferObject > >::operator[] )
                , ( bp::arg("pos") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::buffered_object< osg::ref_ptr< osg::GLBufferObject > >::operator[]
        
            typedef osg::buffered_object< osg::ref_ptr< osg::GLBufferObject > > exported_class_t;
            typedef ::osg::ref_ptr< osg::GLBufferObject > const & ( exported_class_t::*__getitem___function_type)( unsigned int ) const;
            
            GLBufferObjects_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::osg::buffered_object< osg::ref_ptr< osg::GLBufferObject > >::operator[] )
                , ( bp::arg("pos") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::buffered_object< osg::ref_ptr< osg::GLBufferObject > >::resize
        
            typedef osg::buffered_object< osg::ref_ptr< osg::GLBufferObject > > exported_class_t;
            typedef void ( exported_class_t::*resize_function_type)( unsigned int ) ;
            
            GLBufferObjects_exposer.def( 
                "resize"
                , resize_function_type( &::osg::buffered_object< osg::ref_ptr< osg::GLBufferObject > >::resize )
                , ( bp::arg("newSize") ) );
        
        }
        { //::osg::buffered_object< osg::ref_ptr< osg::GLBufferObject > >::setAllElementsTo
        
            typedef osg::buffered_object< osg::ref_ptr< osg::GLBufferObject > > exported_class_t;
            typedef void ( exported_class_t::*setAllElementsTo_function_type)( ::osg::ref_ptr< osg::GLBufferObject > const & ) ;
            
            GLBufferObjects_exposer.def( 
                "setAllElementsTo"
                , setAllElementsTo_function_type( &::osg::buffered_object< osg::ref_ptr< osg::GLBufferObject > >::setAllElementsTo )
                , ( bp::arg("t") ) );
        
        }
        { //::osg::buffered_object< osg::ref_ptr< osg::GLBufferObject > >::size
        
            typedef osg::buffered_object< osg::ref_ptr< osg::GLBufferObject > > exported_class_t;
            typedef unsigned int ( exported_class_t::*size_function_type)(  ) const;
            
            GLBufferObjects_exposer.def( 
                "size"
                , size_function_type( &::osg::buffered_object< osg::ref_ptr< osg::GLBufferObject > >::size ) );
        
        }
    }

}
