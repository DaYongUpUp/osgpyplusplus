// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgmanipulator.h"
#include "wrap_referenced.h"
#include "planeprojector.pypp.hpp"

namespace bp = boost::python;

struct PlaneProjector_wrapper : osgManipulator::PlaneProjector, bp::wrapper< osgManipulator::PlaneProjector > {

    PlaneProjector_wrapper( )
    : osgManipulator::PlaneProjector( )
      , bp::wrapper< osgManipulator::PlaneProjector >(){
        // null constructor
    
    }

    PlaneProjector_wrapper(::osg::Plane const & plane )
    : osgManipulator::PlaneProjector( boost::ref(plane) )
      , bp::wrapper< osgManipulator::PlaneProjector >(){
        // constructor
    
    }

    virtual bool project( ::osgManipulator::PointerInfo const & pi, ::osg::Vec3d & projectedPoint ) const  {
        if( bp::override func_project = this->get_override( "project" ) )
            return func_project( boost::ref(pi), boost::ref(projectedPoint) );
        else{
            return this->osgManipulator::PlaneProjector::project( boost::ref(pi), boost::ref(projectedPoint) );
        }
    }
    
    bool default_project( ::osgManipulator::PointerInfo const & pi, ::osg::Vec3d & projectedPoint ) const  {
        return osgManipulator::PlaneProjector::project( boost::ref(pi), boost::ref(projectedPoint) );
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

void register_PlaneProjector_class(){

    { //::osgManipulator::PlaneProjector
        typedef bp::class_< PlaneProjector_wrapper, bp::bases< osgManipulator::Projector >, osg::ref_ptr< PlaneProjector_wrapper >, boost::noncopyable > PlaneProjector_exposer_t;
        PlaneProjector_exposer_t PlaneProjector_exposer = PlaneProjector_exposer_t( "PlaneProjector", "\n PlaneProjector projects points onto the given line.\n", bp::no_init );
        bp::scope PlaneProjector_scope( PlaneProjector_exposer );
        PlaneProjector_exposer.def( bp::init< >("\n PlaneProjector projects points onto the given line.\n") );
        PlaneProjector_exposer.def( bp::init< osg::Plane const & >(( bp::arg("plane") )) );
        bp::implicitly_convertible< osg::Plane const &, osgManipulator::PlaneProjector >();
        { //::osgManipulator::PlaneProjector::getPlane
        
            typedef ::osg::Plane const & ( ::osgManipulator::PlaneProjector::*getPlane_function_type)(  ) const;
            
            PlaneProjector_exposer.def( 
                "getPlane"
                , getPlane_function_type( &::osgManipulator::PlaneProjector::getPlane )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgManipulator::PlaneProjector::project
        
            typedef bool ( ::osgManipulator::PlaneProjector::*project_function_type)( ::osgManipulator::PointerInfo const &,::osg::Vec3d & ) const;
            typedef bool ( PlaneProjector_wrapper::*default_project_function_type)( ::osgManipulator::PointerInfo const &,::osg::Vec3d & ) const;
            
            PlaneProjector_exposer.def( 
                "project"
                , project_function_type(&::osgManipulator::PlaneProjector::project)
                , default_project_function_type(&PlaneProjector_wrapper::default_project)
                , ( bp::arg("pi"), bp::arg("projectedPoint") ) );
        
        }
        { //::osgManipulator::PlaneProjector::setPlane
        
            typedef void ( ::osgManipulator::PlaneProjector::*setPlane_function_type)( ::osg::Plane const & ) ;
            
            PlaneProjector_exposer.def( 
                "setPlane"
                , setPlane_function_type( &::osgManipulator::PlaneProjector::setPlane )
                , ( bp::arg("plane") ) );
        
        }
    }

}
