// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "releasecontext_block_makecurrentoperation.pypp.hpp"

namespace bp = boost::python;

struct ReleaseContext_Block_MakeCurrentOperation_wrapper : osg::ReleaseContext_Block_MakeCurrentOperation, bp::wrapper< osg::ReleaseContext_Block_MakeCurrentOperation > {

    ReleaseContext_Block_MakeCurrentOperation_wrapper( )
    : osg::ReleaseContext_Block_MakeCurrentOperation( )
      , bp::wrapper< osg::ReleaseContext_Block_MakeCurrentOperation >(){
        // null constructor
    
    }

    virtual void operator()( ::osg::GraphicsContext * context ) {
        if( bp::override func___call__ = this->get_override( "__call__" ) )
            func___call__( boost::python::ptr(context) );
        else{
            this->osg::ReleaseContext_Block_MakeCurrentOperation::operator()( boost::python::ptr(context) );
        }
    }
    
    void default___call__( ::osg::GraphicsContext * context ) {
        osg::ReleaseContext_Block_MakeCurrentOperation::operator()( boost::python::ptr(context) );
    }

    virtual void release(  ) {
        if( bp::override func_release = this->get_override( "release" ) )
            func_release(  );
        else{
            this->osg::ReleaseContext_Block_MakeCurrentOperation::release(  );
        }
    }
    
    void default_release(  ) {
        osg::ReleaseContext_Block_MakeCurrentOperation::release( );
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

void register_ReleaseContext_Block_MakeCurrentOperation_class(){

    bp::class_< ReleaseContext_Block_MakeCurrentOperation_wrapper, bp::bases< osg::GraphicsOperation, osg::RefBlock >, osg::ref_ptr< ::osg::ReleaseContext_Block_MakeCurrentOperation >, boost::noncopyable >( "ReleaseContext_Block_MakeCurrentOperation", bp::init< >() )    
        .def( 
            "__call__"
            , (void ( ::osg::ReleaseContext_Block_MakeCurrentOperation::* )( ::osg::GraphicsContext * ))(&::osg::ReleaseContext_Block_MakeCurrentOperation::operator())
            , (void ( ReleaseContext_Block_MakeCurrentOperation_wrapper::* )( ::osg::GraphicsContext * ))(&ReleaseContext_Block_MakeCurrentOperation_wrapper::default___call__)
            , ( bp::arg("context") ) )    
        .def( 
            "release"
            , (void ( ::osg::ReleaseContext_Block_MakeCurrentOperation::* )(  ))(&::osg::ReleaseContext_Block_MakeCurrentOperation::release)
            , (void ( ReleaseContext_Block_MakeCurrentOperation_wrapper::* )(  ))(&ReleaseContext_Block_MakeCurrentOperation_wrapper::default_release) )    
        .def( 
            "setThreadSafeRefUnref"
            , (void ( ::osg::Referenced::* )( bool ))(&::osg::Referenced::setThreadSafeRefUnref)
            , (void ( ReleaseContext_Block_MakeCurrentOperation_wrapper::* )( bool ))(&ReleaseContext_Block_MakeCurrentOperation_wrapper::default_setThreadSafeRefUnref)
            , ( bp::arg("threadSafe") ) );

}
