// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgdb.h"
#include "wrap_referenced.h"
#include "authenticationdetails.pypp.hpp"

namespace bp = boost::python;

struct AuthenticationDetails_wrapper : osgDB::AuthenticationDetails, bp::wrapper< osgDB::AuthenticationDetails > {

    AuthenticationDetails_wrapper(::std::string const & u, ::std::string const & p, ::osgDB::AuthenticationDetails::HttpAuthentication auth=::osgDB::AuthenticationDetails::BASIC )
    : osgDB::AuthenticationDetails( u, p, auth )
      , bp::wrapper< osgDB::AuthenticationDetails >(){
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

void register_AuthenticationDetails_class(){

    { //::osgDB::AuthenticationDetails
        typedef bp::class_< AuthenticationDetails_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< ::osgDB::AuthenticationDetails >, boost::noncopyable > AuthenticationDetails_exposer_t;
        AuthenticationDetails_exposer_t AuthenticationDetails_exposer = AuthenticationDetails_exposer_t( "AuthenticationDetails", bp::no_init );
        bp::scope AuthenticationDetails_scope( AuthenticationDetails_exposer );
        bp::enum_< osgDB::AuthenticationDetails::HttpAuthentication>("HttpAuthentication")
            .value("BASIC", osgDB::AuthenticationDetails::BASIC)
            .value("DIGEST", osgDB::AuthenticationDetails::DIGEST)
            .value("NTLM", osgDB::AuthenticationDetails::NTLM)
            .value("GSSNegotiate", osgDB::AuthenticationDetails::GSSNegotiate)
            .value("ANY", osgDB::AuthenticationDetails::ANY)
            .value("ANYSAFE", osgDB::AuthenticationDetails::ANYSAFE)
            .export_values()
            ;
        AuthenticationDetails_exposer.def( bp::init< std::string const &, std::string const &, bp::optional< osgDB::AuthenticationDetails::HttpAuthentication > >(( bp::arg("u"), bp::arg("p"), bp::arg("auth")=(long)(::osgDB::AuthenticationDetails::BASIC) )) );
        AuthenticationDetails_exposer.def_readwrite( "httpAuthentication", &osgDB::AuthenticationDetails::httpAuthentication );
        AuthenticationDetails_exposer.def_readwrite( "password", &osgDB::AuthenticationDetails::password );
        AuthenticationDetails_exposer.def_readwrite( "username", &osgDB::AuthenticationDetails::username );
    }

}
