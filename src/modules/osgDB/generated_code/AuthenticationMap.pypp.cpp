// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgdb.h"
#include "wrap_referenced.h"
#include "authenticationmap.pypp.hpp"

namespace bp = boost::python;

struct AuthenticationMap_wrapper : osgDB::AuthenticationMap, bp::wrapper< osgDB::AuthenticationMap > {

    AuthenticationMap_wrapper( )
    : osgDB::AuthenticationMap( )
      , bp::wrapper< osgDB::AuthenticationMap >(){
        // null constructor
    
    }

    virtual void addAuthenticationDetails( ::std::string const & path, ::osgDB::AuthenticationDetails * details ) {
        if( bp::override func_addAuthenticationDetails = this->get_override( "addAuthenticationDetails" ) )
            func_addAuthenticationDetails( path, boost::python::ptr(details) );
        else{
            this->osgDB::AuthenticationMap::addAuthenticationDetails( path, boost::python::ptr(details) );
        }
    }
    
    void default_addAuthenticationDetails( ::std::string const & path, ::osgDB::AuthenticationDetails * details ) {
        osgDB::AuthenticationMap::addAuthenticationDetails( path, boost::python::ptr(details) );
    }

    virtual ::osgDB::AuthenticationDetails const * getAuthenticationDetails( ::std::string const & path ) const  {
        if( bp::override func_getAuthenticationDetails = this->get_override( "getAuthenticationDetails" ) )
            return func_getAuthenticationDetails( path );
        else{
            return this->osgDB::AuthenticationMap::getAuthenticationDetails( path );
        }
    }
    
    ::osgDB::AuthenticationDetails const * default_getAuthenticationDetails( ::std::string const & path ) const  {
        return osgDB::AuthenticationMap::getAuthenticationDetails( path );
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

void register_AuthenticationMap_class(){

    bp::class_< AuthenticationMap_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< AuthenticationMap_wrapper >, boost::noncopyable >( "AuthenticationMap", bp::no_init )    
        .def( bp::init< >() )    
        .def( 
            "addAuthenticationDetails"
            , (void ( ::osgDB::AuthenticationMap::* )( ::std::string const &,::osgDB::AuthenticationDetails * ))(&::osgDB::AuthenticationMap::addAuthenticationDetails)
            , (void ( AuthenticationMap_wrapper::* )( ::std::string const &,::osgDB::AuthenticationDetails * ))(&AuthenticationMap_wrapper::default_addAuthenticationDetails)
            , ( bp::arg("path"), bp::arg("details") ) )    
        .def( 
            "getAuthenticationDetails"
            , (::osgDB::AuthenticationDetails const * ( ::osgDB::AuthenticationMap::* )( ::std::string const & )const)(&::osgDB::AuthenticationMap::getAuthenticationDetails)
            , (::osgDB::AuthenticationDetails const * ( AuthenticationMap_wrapper::* )( ::std::string const & )const)(&AuthenticationMap_wrapper::default_getAuthenticationDetails)
            , ( bp::arg("path") )
            , bp::return_internal_reference< >() );

}
