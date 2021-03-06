// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "operationqueue.pypp.hpp"

namespace bp = boost::python;

struct OperationQueue_wrapper : osg::OperationQueue, bp::wrapper< osg::OperationQueue > {

    OperationQueue_wrapper( )
    : osg::OperationQueue( )
      , bp::wrapper< osg::OperationQueue >(){
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

void register_OperationQueue_class(){

    bp::class_< OperationQueue_wrapper, bp::bases< osg::Referenced >, osg::ref_ptr< ::osg::OperationQueue >, boost::noncopyable >( "OperationQueue", bp::no_init )    
        .def( bp::init< >() )    
        .def( 
            "add"
            , (void ( ::osg::OperationQueue::* )( ::osg::Operation * ))( &::osg::OperationQueue::add )
            , ( bp::arg("operation") )
            , " Add operation to end of OperationQueue, this will be\n executed by the operation thread once this operation gets to the head of the queue." )    
        .def( 
            "empty"
            , (bool ( ::osg::OperationQueue::* )(  ))( &::osg::OperationQueue::empty )
            , " Return true if the operation queue is empty." )    
        .def( 
            "getNextOperation"
            , (::osg::ref_ptr< osg::Operation > ( ::osg::OperationQueue::* )( bool ))( &::osg::OperationQueue::getNextOperation )
            , ( bp::arg("blockIfEmpty")=(bool)(false) )
            , " Get the next operation from the operation queue.\n Return null ref_ptr<> if no operations are left in queue." )    
        .def( 
            "getNumOperationsInQueue"
            , (unsigned int ( ::osg::OperationQueue::* )(  ))( &::osg::OperationQueue::getNumOperationsInQueue )
            , " Return the num of pending operations that are sitting in the OperationQueue." )    
        .def( 
            "getOperationThreads"
            , (::std::set< osg::OperationThread* > const & ( ::osg::OperationQueue::* )(  )const)( &::osg::OperationQueue::getOperationThreads )
            , bp::return_internal_reference< >()
            , " Get the set of OperationThreads that are sharing this OperationQueue." )    
        .def( 
            "releaseAllOperations"
            , (void ( ::osg::OperationQueue::* )(  ))( &::osg::OperationQueue::releaseAllOperations )
            , " Call release on all operations." )    
        .def( 
            "releaseOperationsBlock"
            , (void ( ::osg::OperationQueue::* )(  ))( &::osg::OperationQueue::releaseOperationsBlock )
            , " Release operations block that is used to block threads that are waiting on an empty operations queue." )    
        .def( 
            "remove"
            , (void ( ::osg::OperationQueue::* )( ::osg::Operation * ))( &::osg::OperationQueue::remove )
            , ( bp::arg("operation") )
            , " Remove operation from OperationQueue." )    
        .def( 
            "remove"
            , (void ( ::osg::OperationQueue::* )( ::std::string const & ))( &::osg::OperationQueue::remove )
            , ( bp::arg("name") )
            , " Remove named operation from OperationQueue." )    
        .def( 
            "removeAllOperations"
            , (void ( ::osg::OperationQueue::* )(  ))( &::osg::OperationQueue::removeAllOperations )
            , " Remove all operations from OperationQueue." )    
        .def( 
            "runOperations"
            , (void ( ::osg::OperationQueue::* )( ::osg::Object * ))( &::osg::OperationQueue::runOperations )
            , ( bp::arg("callingObject")=bp::object() )
            , " Run the operations." )    
        .def( 
            "setThreadSafeRefUnref"
            , (void ( ::osg::Referenced::* )( bool ))(&::osg::Referenced::setThreadSafeRefUnref)
            , (void ( OperationQueue_wrapper::* )( bool ))(&OperationQueue_wrapper::default_setThreadSafeRefUnref)
            , ( bp::arg("threadSafe") ) );

}
