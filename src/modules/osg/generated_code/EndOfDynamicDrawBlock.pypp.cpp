// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "endofdynamicdrawblock.pypp.hpp"

namespace bp = boost::python;

struct EndOfDynamicDrawBlock_wrapper : osg::EndOfDynamicDrawBlock, bp::wrapper< osg::EndOfDynamicDrawBlock > {

    EndOfDynamicDrawBlock_wrapper(unsigned int arg0 )
    : osg::EndOfDynamicDrawBlock( arg0 )
      , bp::wrapper< osg::EndOfDynamicDrawBlock >(){
        // constructor
    
    }

    virtual void completed( ::osg::State * state ) {
        if( bp::override func_completed = this->get_override( "completed" ) )
            func_completed( boost::python::ptr(state) );
        else{
            this->osg::EndOfDynamicDrawBlock::completed( boost::python::ptr(state) );
        }
    }
    
    void default_completed( ::osg::State * state ) {
        osg::EndOfDynamicDrawBlock::completed( boost::python::ptr(state) );
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

void register_EndOfDynamicDrawBlock_class(){

    { //::osg::EndOfDynamicDrawBlock
        typedef bp::class_< EndOfDynamicDrawBlock_wrapper, bp::bases< OpenThreads::BlockCount, osg::State::DynamicObjectRenderingCompletedCallback >, osg::ref_ptr< ::osg::EndOfDynamicDrawBlock >, boost::noncopyable > EndOfDynamicDrawBlock_exposer_t;
        EndOfDynamicDrawBlock_exposer_t EndOfDynamicDrawBlock_exposer = EndOfDynamicDrawBlock_exposer_t( "EndOfDynamicDrawBlock", bp::no_init );
        bp::scope EndOfDynamicDrawBlock_scope( EndOfDynamicDrawBlock_exposer );
        EndOfDynamicDrawBlock_exposer.def( bp::init< unsigned int >(( bp::arg("arg0") )) );
        bp::implicitly_convertible< unsigned int, osg::EndOfDynamicDrawBlock >();
        { //::osg::EndOfDynamicDrawBlock::completed
        
            typedef void ( ::osg::EndOfDynamicDrawBlock::*completed_function_type)( ::osg::State * ) ;
            typedef void ( EndOfDynamicDrawBlock_wrapper::*default_completed_function_type)( ::osg::State * ) ;
            
            EndOfDynamicDrawBlock_exposer.def( 
                "completed"
                , completed_function_type(&::osg::EndOfDynamicDrawBlock::completed)
                , default_completed_function_type(&EndOfDynamicDrawBlock_wrapper::default_completed)
                , ( bp::arg("state") ) );
        
        }
        { //::osg::Referenced::setThreadSafeRefUnref
        
            typedef void ( ::osg::Referenced::*setThreadSafeRefUnref_function_type)( bool ) ;
            typedef void ( EndOfDynamicDrawBlock_wrapper::*default_setThreadSafeRefUnref_function_type)( bool ) ;
            
            EndOfDynamicDrawBlock_exposer.def( 
                "setThreadSafeRefUnref"
                , setThreadSafeRefUnref_function_type(&::osg::Referenced::setThreadSafeRefUnref)
                , default_setThreadSafeRefUnref_function_type(&EndOfDynamicDrawBlock_wrapper::default_setThreadSafeRefUnref)
                , ( bp::arg("threadSafe") ) );
        
        }
    }

}
