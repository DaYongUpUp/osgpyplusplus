// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgmanipulator.h"
#include "wrap_referenced.h"
#include "constraint.pypp.hpp"

namespace bp = boost::python;

struct Constraint_wrapper : osgManipulator::Constraint, bp::wrapper< osgManipulator::Constraint > {

    virtual bool constrain( ::osgManipulator::MotionCommand & arg0 ) const  {
        if( bp::override func_constrain = this->get_override( "constrain" ) )
            return func_constrain( boost::ref(arg0) );
        else{
            return this->osgManipulator::Constraint::constrain( boost::ref(arg0) );
        }
    }
    
    bool default_constrain( ::osgManipulator::MotionCommand & arg0 ) const  {
        return osgManipulator::Constraint::constrain( boost::ref(arg0) );
    }

    virtual bool constrain( ::osgManipulator::TranslateInLineCommand & command ) const  {
        if( bp::override func_constrain = this->get_override( "constrain" ) )
            return func_constrain( boost::ref(command) );
        else{
            return this->osgManipulator::Constraint::constrain( boost::ref(command) );
        }
    }
    
    bool default_constrain( ::osgManipulator::TranslateInLineCommand & command ) const  {
        return osgManipulator::Constraint::constrain( boost::ref(command) );
    }

    virtual bool constrain( ::osgManipulator::TranslateInPlaneCommand & command ) const  {
        if( bp::override func_constrain = this->get_override( "constrain" ) )
            return func_constrain( boost::ref(command) );
        else{
            return this->osgManipulator::Constraint::constrain( boost::ref(command) );
        }
    }
    
    bool default_constrain( ::osgManipulator::TranslateInPlaneCommand & command ) const  {
        return osgManipulator::Constraint::constrain( boost::ref(command) );
    }

    virtual bool constrain( ::osgManipulator::Scale1DCommand & command ) const  {
        if( bp::override func_constrain = this->get_override( "constrain" ) )
            return func_constrain( boost::ref(command) );
        else{
            return this->osgManipulator::Constraint::constrain( boost::ref(command) );
        }
    }
    
    bool default_constrain( ::osgManipulator::Scale1DCommand & command ) const  {
        return osgManipulator::Constraint::constrain( boost::ref(command) );
    }

    virtual bool constrain( ::osgManipulator::Scale2DCommand & command ) const  {
        if( bp::override func_constrain = this->get_override( "constrain" ) )
            return func_constrain( boost::ref(command) );
        else{
            return this->osgManipulator::Constraint::constrain( boost::ref(command) );
        }
    }
    
    bool default_constrain( ::osgManipulator::Scale2DCommand & command ) const  {
        return osgManipulator::Constraint::constrain( boost::ref(command) );
    }

    virtual bool constrain( ::osgManipulator::ScaleUniformCommand & command ) const  {
        if( bp::override func_constrain = this->get_override( "constrain" ) )
            return func_constrain( boost::ref(command) );
        else{
            return this->osgManipulator::Constraint::constrain( boost::ref(command) );
        }
    }
    
    bool default_constrain( ::osgManipulator::ScaleUniformCommand & command ) const  {
        return osgManipulator::Constraint::constrain( boost::ref(command) );
    }

    virtual bool constrain( ::osgManipulator::Rotate3DCommand & command ) const  {
        if( bp::override func_constrain = this->get_override( "constrain" ) )
            return func_constrain( boost::ref(command) );
        else{
            return this->osgManipulator::Constraint::constrain( boost::ref(command) );
        }
    }
    
    bool default_constrain( ::osgManipulator::Rotate3DCommand & command ) const  {
        return osgManipulator::Constraint::constrain( boost::ref(command) );
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

void register_Constraint_class(){

    bp::class_< Constraint_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< Constraint_wrapper >, boost::noncopyable >( "Constraint", bp::no_init )    
        .def( 
            "constrain"
            , (bool ( ::osgManipulator::Constraint::* )( ::osgManipulator::MotionCommand & )const)(&::osgManipulator::Constraint::constrain)
            , (bool ( Constraint_wrapper::* )( ::osgManipulator::MotionCommand & )const)(&Constraint_wrapper::default_constrain)
            , ( bp::arg("arg0") ) )    
        .def( 
            "constrain"
            , (bool ( ::osgManipulator::Constraint::* )( ::osgManipulator::TranslateInLineCommand & )const)(&::osgManipulator::Constraint::constrain)
            , (bool ( Constraint_wrapper::* )( ::osgManipulator::TranslateInLineCommand & )const)(&Constraint_wrapper::default_constrain)
            , ( bp::arg("command") ) )    
        .def( 
            "constrain"
            , (bool ( ::osgManipulator::Constraint::* )( ::osgManipulator::TranslateInPlaneCommand & )const)(&::osgManipulator::Constraint::constrain)
            , (bool ( Constraint_wrapper::* )( ::osgManipulator::TranslateInPlaneCommand & )const)(&Constraint_wrapper::default_constrain)
            , ( bp::arg("command") ) )    
        .def( 
            "constrain"
            , (bool ( ::osgManipulator::Constraint::* )( ::osgManipulator::Scale1DCommand & )const)(&::osgManipulator::Constraint::constrain)
            , (bool ( Constraint_wrapper::* )( ::osgManipulator::Scale1DCommand & )const)(&Constraint_wrapper::default_constrain)
            , ( bp::arg("command") ) )    
        .def( 
            "constrain"
            , (bool ( ::osgManipulator::Constraint::* )( ::osgManipulator::Scale2DCommand & )const)(&::osgManipulator::Constraint::constrain)
            , (bool ( Constraint_wrapper::* )( ::osgManipulator::Scale2DCommand & )const)(&Constraint_wrapper::default_constrain)
            , ( bp::arg("command") ) )    
        .def( 
            "constrain"
            , (bool ( ::osgManipulator::Constraint::* )( ::osgManipulator::ScaleUniformCommand & )const)(&::osgManipulator::Constraint::constrain)
            , (bool ( Constraint_wrapper::* )( ::osgManipulator::ScaleUniformCommand & )const)(&Constraint_wrapper::default_constrain)
            , ( bp::arg("command") ) )    
        .def( 
            "constrain"
            , (bool ( ::osgManipulator::Constraint::* )( ::osgManipulator::Rotate3DCommand & )const)(&::osgManipulator::Constraint::constrain)
            , (bool ( Constraint_wrapper::* )( ::osgManipulator::Rotate3DCommand & )const)(&Constraint_wrapper::default_constrain)
            , ( bp::arg("command") ) );

}
