// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgdb.h"
#include "wrap_referenced.h"
#include "outputexception.pypp.hpp"

namespace bp = boost::python;

struct OutputException_wrapper : osgDB::OutputException, bp::wrapper< osgDB::OutputException > {

    OutputException_wrapper(::std::vector< std::string > const & fields, ::std::string const & err )
    : osgDB::OutputException( boost::ref(fields), err )
      , bp::wrapper< osgDB::OutputException >(){
        // constructor
    
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

void register_OutputException_class(){

    bp::class_< OutputException_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< OutputException_wrapper >, boost::noncopyable >( "OutputException", bp::init< std::vector< std::string > const &, std::string const & >(( bp::arg("fields"), bp::arg("err") )) )    
        .def( 
            "getError"
            , (::std::string const & ( ::osgDB::OutputException::* )(  )const)( &::osgDB::OutputException::getError )
            , bp::return_value_policy< bp::copy_const_reference >() )    
        .def( 
            "getField"
            , (::std::string const & ( ::osgDB::OutputException::* )(  )const)( &::osgDB::OutputException::getField )
            , bp::return_value_policy< bp::copy_const_reference >() );

}
