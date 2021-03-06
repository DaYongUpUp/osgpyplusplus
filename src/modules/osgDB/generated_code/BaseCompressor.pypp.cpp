// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgdb.h"
#include "wrap_referenced.h"
#include "basecompressor.pypp.hpp"

namespace bp = boost::python;

struct BaseCompressor_wrapper : osgDB::BaseCompressor, bp::wrapper< osgDB::BaseCompressor > {

    virtual bool compress( ::std::ostream & arg0, ::std::string const & arg1 ){
        bp::override func_compress = this->get_override( "compress" );
        return func_compress( boost::ref(arg0), arg1 );
    }

    virtual bool decompress( ::std::istream & arg0, ::std::string & arg1 ){
        bp::override func_decompress = this->get_override( "decompress" );
        return func_decompress( boost::ref(arg0), arg1 );
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

void register_BaseCompressor_class(){

    bp::class_< BaseCompressor_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< BaseCompressor_wrapper >, boost::noncopyable >( "BaseCompressor", bp::no_init )    
        .def( 
            "compress"
            , bp::pure_virtual( (bool ( ::osgDB::BaseCompressor::* )( ::std::ostream &,::std::string const & ))(&::osgDB::BaseCompressor::compress) )
            , ( bp::arg("arg0"), bp::arg("arg1") ) )    
        .def( 
            "decompress"
            , bp::pure_virtual( (bool ( ::osgDB::BaseCompressor::* )( ::std::istream &,::std::string & ))(&::osgDB::BaseCompressor::decompress) )
            , ( bp::arg("arg0"), bp::arg("arg1") ) )    
        .def( 
            "getName"
            , (::std::string const & ( ::osgDB::BaseCompressor::* )(  )const)( &::osgDB::BaseCompressor::getName )
            , bp::return_value_policy< bp::copy_const_reference >() )    
        .def( 
            "setName"
            , (void ( ::osgDB::BaseCompressor::* )( ::std::string const & ))( &::osgDB::BaseCompressor::setName )
            , ( bp::arg("name") ) );

}
