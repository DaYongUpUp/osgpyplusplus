// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "refblock.pypp.hpp"

namespace bp = boost::python;

struct RefBlock_wrapper : osg::RefBlock, bp::wrapper< osg::RefBlock > {

    RefBlock_wrapper( )
    : osg::RefBlock( )
      , bp::wrapper< osg::RefBlock >(){
        // null constructor
    
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

void register_RefBlock_class(){

    bp::class_< RefBlock_wrapper, bp::bases< osg::Referenced, OpenThreads::Block >, osg::ref_ptr< ::osg::RefBlock >, boost::noncopyable >( "RefBlock", bp::init< >() )    
        .def( 
            "setThreadSafeRefUnref"
            , (void ( ::osg::Referenced::* )( bool ) )(&::osg::Referenced::setThreadSafeRefUnref)
            , (void ( RefBlock_wrapper::* )( bool ) )(&RefBlock_wrapper::default_setThreadSafeRefUnref)
            , ( bp::arg("threadSafe") ) );

}
