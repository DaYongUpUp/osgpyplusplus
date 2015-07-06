// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "attributedispatch.pypp.hpp"

namespace bp = boost::python;

struct AttributeDispatch_wrapper : osg::AttributeDispatch, bp::wrapper< osg::AttributeDispatch > {

    AttributeDispatch_wrapper()
    : osg::AttributeDispatch()
      , bp::wrapper< osg::AttributeDispatch >(){
        // null constructor
        
    }

    virtual void assign( ::GLvoid const * arg0 ) {
        if( bp::override func_assign = this->get_override( "assign" ) )
            func_assign( arg0 );
        else{
            this->osg::AttributeDispatch::assign( arg0 );
        }
    }
    
    void default_assign( ::GLvoid const * arg0 ) {
        osg::AttributeDispatch::assign( arg0 );
    }

    virtual void operator()( unsigned int arg0 ) {
        if( bp::override func___call__ = this->get_override( "__call__" ) )
            func___call__( arg0 );
        else{
            this->osg::AttributeDispatch::operator()( arg0 );
        }
    }
    
    void default___call__( unsigned int arg0 ) {
        osg::AttributeDispatch::operator()( arg0 );
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

void register_AttributeDispatch_class(){

    bp::class_< AttributeDispatch_wrapper, bp::bases< osg::Referenced >, osg::ref_ptr< ::osg::AttributeDispatch >, boost::noncopyable >( "AttributeDispatch" )    
        .def( 
            "assign"
            , (void ( ::osg::AttributeDispatch::* )( ::GLvoid const * ))(&::osg::AttributeDispatch::assign)
            , (void ( AttributeDispatch_wrapper::* )( ::GLvoid const * ))(&AttributeDispatch_wrapper::default_assign)
            , ( bp::arg("arg0") ) )    
        .def( 
            "__call__"
            , (void ( ::osg::AttributeDispatch::* )( unsigned int ))(&::osg::AttributeDispatch::operator())
            , (void ( AttributeDispatch_wrapper::* )( unsigned int ))(&AttributeDispatch_wrapper::default___call__)
            , ( bp::arg("arg0") ) )    
        .def( 
            "setThreadSafeRefUnref"
            , (void ( ::osg::Referenced::* )( bool ))(&::osg::Referenced::setThreadSafeRefUnref)
            , (void ( AttributeDispatch_wrapper::* )( bool ))(&AttributeDispatch_wrapper::default_setThreadSafeRefUnref)
            , ( bp::arg("threadSafe") ) );

}
