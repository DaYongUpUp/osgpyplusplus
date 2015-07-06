// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgga.h"
#include "wrap_referenced.h"
#include "eventqueue.pypp.hpp"

namespace bp = boost::python;

struct EventQueue_wrapper : osgGA::EventQueue, bp::wrapper< osgGA::EventQueue > {

    EventQueue_wrapper(::osgGA::GUIEventAdapter::MouseYOrientation mouseYOrientation=::osgGA::GUIEventAdapter::Y_INCREASING_DOWNWARDS )
    : osgGA::EventQueue( mouseYOrientation )
      , bp::wrapper< osgGA::EventQueue >(){
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

void register_EventQueue_class(){

    { //::osgGA::EventQueue
        typedef bp::class_< EventQueue_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< ::osgGA::EventQueue >, boost::noncopyable > EventQueue_exposer_t;
        EventQueue_exposer_t EventQueue_exposer = EventQueue_exposer_t( "EventQueue", "\n EventQueue implementation for collecting and adapting windowing events\n", bp::no_init );
        bp::scope EventQueue_scope( EventQueue_exposer );
        EventQueue_exposer.def( bp::init< bp::optional< osgGA::GUIEventAdapter::MouseYOrientation > >(( bp::arg("mouseYOrientation")=::osgGA::GUIEventAdapter::Y_INCREASING_DOWNWARDS ), "\n EventQueue implementation for collecting and adapting windowing events\n") );
        bp::implicitly_convertible< osgGA::GUIEventAdapter::MouseYOrientation, osgGA::EventQueue >();
        { //::osgGA::EventQueue::addEvent
        
            typedef void ( ::osgGA::EventQueue::*addEvent_function_type)( ::osgGA::GUIEventAdapter * ) ;
            
            EventQueue_exposer.def( 
                "addEvent"
                , addEvent_function_type( &::osgGA::EventQueue::addEvent )
                , ( bp::arg("event") )
                , " Add an event to the end of the event queue." );
        
        }
        { //::osgGA::EventQueue::appendEvents
        
            typedef void ( ::osgGA::EventQueue::*appendEvents_function_type)( ::std::list< osg::ref_ptr<osgGA::GUIEventAdapter> > & ) ;
            
            EventQueue_exposer.def( 
                "appendEvents"
                , appendEvents_function_type( &::osgGA::EventQueue::appendEvents )
                , ( bp::arg("events") )
                , " Add events to end of event queue." );
        
        }
        { //::osgGA::EventQueue::clear
        
            typedef void ( ::osgGA::EventQueue::*clear_function_type)(  ) ;
            
            EventQueue_exposer.def( 
                "clear"
                , clear_function_type( &::osgGA::EventQueue::clear )
                , " clear all events from queue." );
        
        }
        { //::osgGA::EventQueue::closeWindow
        
            typedef void ( ::osgGA::EventQueue::*closeWindow_function_type)(  ) ;
            
            EventQueue_exposer.def( 
                "closeWindow"
                , closeWindow_function_type( &::osgGA::EventQueue::closeWindow )
                , " Method for adapting close window events." );
        
        }
        { //::osgGA::EventQueue::closeWindow
        
            typedef void ( ::osgGA::EventQueue::*closeWindow_function_type)( double ) ;
            
            EventQueue_exposer.def( 
                "closeWindow"
                , closeWindow_function_type( &::osgGA::EventQueue::closeWindow )
                , ( bp::arg("time") )
                , " Method for adapting close window event with specified event time." );
        
        }
        { //::osgGA::EventQueue::copyEvents
        
            typedef bool ( ::osgGA::EventQueue::*copyEvents_function_type)( ::std::list< osg::ref_ptr<osgGA::GUIEventAdapter> > & ) const;
            
            EventQueue_exposer.def( 
                "copyEvents"
                , copyEvents_function_type( &::osgGA::EventQueue::copyEvents )
                , ( bp::arg("events") )
                , " Take a copy the entire event queue leaving the EventQueue event queue intact." );
        
        }
        { //::osgGA::EventQueue::createEvent
        
            typedef ::osgGA::GUIEventAdapter * ( ::osgGA::EventQueue::*createEvent_function_type)(  ) ;
            
            EventQueue_exposer.def( 
                "createEvent"
                , createEvent_function_type( &::osgGA::EventQueue::createEvent )
                , bp::return_internal_reference< >()
                , " convenience method for create an event ready to fill in.  Clones the getCurrentEventState() to produce a up to date event state." );
        
        }
        { //::osgGA::EventQueue::empty
        
            typedef bool ( ::osgGA::EventQueue::*empty_function_type)(  ) const;
            
            EventQueue_exposer.def( 
                "empty"
                , empty_function_type( &::osgGA::EventQueue::empty ) );
        
        }
        { //::osgGA::EventQueue::frame
        
            typedef void ( ::osgGA::EventQueue::*frame_function_type)( double ) ;
            
            EventQueue_exposer.def( 
                "frame"
                , frame_function_type( &::osgGA::EventQueue::frame )
                , ( bp::arg("time") )
                , " Method for adapting frame events." );
        
        }
        { //::osgGA::EventQueue::getCurrentEventState
        
            typedef ::osgGA::GUIEventAdapter * ( ::osgGA::EventQueue::*getCurrentEventState_function_type)(  ) ;
            
            EventQueue_exposer.def( 
                "getCurrentEventState"
                , getCurrentEventState_function_type( &::osgGA::EventQueue::getCurrentEventState )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgGA::EventQueue::getCurrentEventState
        
            typedef ::osgGA::GUIEventAdapter const * ( ::osgGA::EventQueue::*getCurrentEventState_function_type)(  ) const;
            
            EventQueue_exposer.def( 
                "getCurrentEventState"
                , getCurrentEventState_function_type( &::osgGA::EventQueue::getCurrentEventState )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgGA::EventQueue::getFirstTouchEmulatesMouse
        
            typedef bool ( ::osgGA::EventQueue::*getFirstTouchEmulatesMouse_function_type)(  ) const;
            
            EventQueue_exposer.def( 
                "getFirstTouchEmulatesMouse"
                , getFirstTouchEmulatesMouse_function_type( &::osgGA::EventQueue::getFirstTouchEmulatesMouse ) );
        
        }
        { //::osgGA::EventQueue::getGraphicsContext
        
            typedef ::osg::GraphicsContext * ( ::osgGA::EventQueue::*getGraphicsContext_function_type)(  ) ;
            
            EventQueue_exposer.def( 
                "getGraphicsContext"
                , getGraphicsContext_function_type( &::osgGA::EventQueue::getGraphicsContext )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgGA::EventQueue::getGraphicsContext
        
            typedef ::osg::GraphicsContext const * ( ::osgGA::EventQueue::*getGraphicsContext_function_type)(  ) const;
            
            EventQueue_exposer.def( 
                "getGraphicsContext"
                , getGraphicsContext_function_type( &::osgGA::EventQueue::getGraphicsContext )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgGA::EventQueue::getStartTick
        
            typedef ::osg::Timer_t ( ::osgGA::EventQueue::*getStartTick_function_type)(  ) const;
            
            EventQueue_exposer.def( 
                "getStartTick"
                , getStartTick_function_type( &::osgGA::EventQueue::getStartTick ) );
        
        }
        { //::osgGA::EventQueue::getTime
        
            typedef double ( ::osgGA::EventQueue::*getTime_function_type)(  ) const;
            
            EventQueue_exposer.def( 
                "getTime"
                , getTime_function_type( &::osgGA::EventQueue::getTime ) );
        
        }
        { //::osgGA::EventQueue::getUseFixedMouseInputRange
        
            typedef bool ( ::osgGA::EventQueue::*getUseFixedMouseInputRange_function_type)(  ) ;
            
            EventQueue_exposer.def( 
                "getUseFixedMouseInputRange"
                , getUseFixedMouseInputRange_function_type( &::osgGA::EventQueue::getUseFixedMouseInputRange )
                , " Get whether the mouse coordinates should be transformed into a pre defined input range." );
        
        }
        { //::osgGA::EventQueue::keyPress
        
            typedef void ( ::osgGA::EventQueue::*keyPress_function_type)( int,int ) ;
            
            EventQueue_exposer.def( 
                "keyPress"
                , keyPress_function_type( &::osgGA::EventQueue::keyPress )
                , ( bp::arg("key"), bp::arg("unmodifiedKey")=(int)(0) )
                , " Method for adapting keyboard press events. Note, special keys such as Ctrl/Function keys should be adapted to GUIEventAdapter::KeySymbol mappings." );
        
        }
        { //::osgGA::EventQueue::keyPress
        
            typedef void ( ::osgGA::EventQueue::*keyPress_function_type)( int,double,int ) ;
            
            EventQueue_exposer.def( 
                "keyPress"
                , keyPress_function_type( &::osgGA::EventQueue::keyPress )
                , ( bp::arg("key"), bp::arg("time"), bp::arg("unmodifiedKey")=(int)(0) )
                , " Method for adapting keyboard press events. Note, special keys such as Ctrl/Function keys should be adapted to GUIEventAdapter::KeySymbol mappings, with specified time." );
        
        }
        { //::osgGA::EventQueue::keyRelease
        
            typedef void ( ::osgGA::EventQueue::*keyRelease_function_type)( int,int ) ;
            
            EventQueue_exposer.def( 
                "keyRelease"
                , keyRelease_function_type( &::osgGA::EventQueue::keyRelease )
                , ( bp::arg("key"), bp::arg("unmodifiedKey")=(int)(0) )
                , " Method for adapting keyboard press events. Note, special keys such as Ctrl/Function keys should be adapted to GUIEventAdapter::KeySymbol mappings." );
        
        }
        { //::osgGA::EventQueue::keyRelease
        
            typedef void ( ::osgGA::EventQueue::*keyRelease_function_type)( int,double,int ) ;
            
            EventQueue_exposer.def( 
                "keyRelease"
                , keyRelease_function_type( &::osgGA::EventQueue::keyRelease )
                , ( bp::arg("key"), bp::arg("time"), bp::arg("unmodifiedKey")=(int)(0) )
                , " Method for adapting keyboard press events. Note, special keys such as Ctrl/Function keys should be adapted to GUIEventAdapter::KeySymbol mappings, with specified time." );
        
        }
        { //::osgGA::EventQueue::mouseButtonPress
        
            typedef void ( ::osgGA::EventQueue::*mouseButtonPress_function_type)( float,float,unsigned int ) ;
            
            EventQueue_exposer.def( 
                "mouseButtonPress"
                , mouseButtonPress_function_type( &::osgGA::EventQueue::mouseButtonPress )
                , ( bp::arg("x"), bp::arg("y"), bp::arg("button") )
                , " Method for adapting mouse button pressed events, placing this event on the back of the event queue.\n Button numbering is 1 for left mouse button, 2 for middle, 3 for right." );
        
        }
        { //::osgGA::EventQueue::mouseButtonPress
        
            typedef void ( ::osgGA::EventQueue::*mouseButtonPress_function_type)( float,float,unsigned int,double ) ;
            
            EventQueue_exposer.def( 
                "mouseButtonPress"
                , mouseButtonPress_function_type( &::osgGA::EventQueue::mouseButtonPress )
                , ( bp::arg("x"), bp::arg("y"), bp::arg("button"), bp::arg("time") )
                , " Method for adapting mouse button pressed events, placing this event on the back of the event queue, with specified time.\n Button numbering is 1 for left mouse button, 2 for middle, 3 for right." );
        
        }
        { //::osgGA::EventQueue::mouseButtonRelease
        
            typedef void ( ::osgGA::EventQueue::*mouseButtonRelease_function_type)( float,float,unsigned int ) ;
            
            EventQueue_exposer.def( 
                "mouseButtonRelease"
                , mouseButtonRelease_function_type( &::osgGA::EventQueue::mouseButtonRelease )
                , ( bp::arg("x"), bp::arg("y"), bp::arg("button") )
                , " Method for adapting mouse button release events, placing this event on the back of the event queue.\n Button numbering is 1 for left mouse button, 2 for middle, 3 for right." );
        
        }
        { //::osgGA::EventQueue::mouseButtonRelease
        
            typedef void ( ::osgGA::EventQueue::*mouseButtonRelease_function_type)( float,float,unsigned int,double ) ;
            
            EventQueue_exposer.def( 
                "mouseButtonRelease"
                , mouseButtonRelease_function_type( &::osgGA::EventQueue::mouseButtonRelease )
                , ( bp::arg("x"), bp::arg("y"), bp::arg("button"), bp::arg("time") )
                , " Method for adapting mouse button release events, placing this event on the back of the event queue, with specified time.\n Button numbering is 1 for left mouse button, 2 for middle, 3 for right." );
        
        }
        { //::osgGA::EventQueue::mouseDoubleButtonPress
        
            typedef void ( ::osgGA::EventQueue::*mouseDoubleButtonPress_function_type)( float,float,unsigned int ) ;
            
            EventQueue_exposer.def( 
                "mouseDoubleButtonPress"
                , mouseDoubleButtonPress_function_type( &::osgGA::EventQueue::mouseDoubleButtonPress )
                , ( bp::arg("x"), bp::arg("y"), bp::arg("button") )
                , " Method for adapting mouse button pressed events, placing this event on the back of the event queue.\n Button numbering is 1 for left mouse button, 2 for middle, 3 for right." );
        
        }
        { //::osgGA::EventQueue::mouseDoubleButtonPress
        
            typedef void ( ::osgGA::EventQueue::*mouseDoubleButtonPress_function_type)( float,float,unsigned int,double ) ;
            
            EventQueue_exposer.def( 
                "mouseDoubleButtonPress"
                , mouseDoubleButtonPress_function_type( &::osgGA::EventQueue::mouseDoubleButtonPress )
                , ( bp::arg("x"), bp::arg("y"), bp::arg("button"), bp::arg("time") )
                , " Method for adapting mouse button pressed events, placing this event on the back of the event queue, with specified time.\n Button numbering is 1 for left mouse button, 2 for middle, 3 for right." );
        
        }
        { //::osgGA::EventQueue::mouseMotion
        
            typedef void ( ::osgGA::EventQueue::*mouseMotion_function_type)( float,float ) ;
            
            EventQueue_exposer.def( 
                "mouseMotion"
                , mouseMotion_function_type( &::osgGA::EventQueue::mouseMotion )
                , ( bp::arg("x"), bp::arg("y") )
                , " Method for adapting mouse motion events, placing this event on the back of the event queue." );
        
        }
        { //::osgGA::EventQueue::mouseMotion
        
            typedef void ( ::osgGA::EventQueue::*mouseMotion_function_type)( float,float,double ) ;
            
            EventQueue_exposer.def( 
                "mouseMotion"
                , mouseMotion_function_type( &::osgGA::EventQueue::mouseMotion )
                , ( bp::arg("x"), bp::arg("y"), bp::arg("time") )
                , " Method for adapting mouse motion events, placing this event on the back of the event queue, with specified time." );
        
        }
        { //::osgGA::EventQueue::mouseScroll
        
            typedef void ( ::osgGA::EventQueue::*mouseScroll_function_type)( ::osgGA::GUIEventAdapter::ScrollingMotion ) ;
            
            EventQueue_exposer.def( 
                "mouseScroll"
                , mouseScroll_function_type( &::osgGA::EventQueue::mouseScroll )
                , ( bp::arg("sm") )
                , " Method for adapting mouse scroll wheel events, placing this event on the back of the event queue." );
        
        }
        { //::osgGA::EventQueue::mouseScroll
        
            typedef void ( ::osgGA::EventQueue::*mouseScroll_function_type)( ::osgGA::GUIEventAdapter::ScrollingMotion,double ) ;
            
            EventQueue_exposer.def( 
                "mouseScroll"
                , mouseScroll_function_type( &::osgGA::EventQueue::mouseScroll )
                , ( bp::arg("sm"), bp::arg("time") )
                , " Method for adapting mouse scroll wheel events, placing this event on the back of the event queue, with specified time." );
        
        }
        { //::osgGA::EventQueue::mouseScroll2D
        
            typedef void ( ::osgGA::EventQueue::*mouseScroll2D_function_type)( float,float ) ;
            
            EventQueue_exposer.def( 
                "mouseScroll2D"
                , mouseScroll2D_function_type( &::osgGA::EventQueue::mouseScroll2D )
                , ( bp::arg("x"), bp::arg("y") )
                , " Method for adapting mouse scroll wheel events, placing this event on the back of the event queue." );
        
        }
        { //::osgGA::EventQueue::mouseScroll2D
        
            typedef void ( ::osgGA::EventQueue::*mouseScroll2D_function_type)( float,float,double ) ;
            
            EventQueue_exposer.def( 
                "mouseScroll2D"
                , mouseScroll2D_function_type( &::osgGA::EventQueue::mouseScroll2D )
                , ( bp::arg("x"), bp::arg("y"), bp::arg("time") )
                , " Method for adapting mouse scroll wheel events, placing this event on the back of the event queue." );
        
        }
        { //::osgGA::EventQueue::mouseWarped
        
            typedef void ( ::osgGA::EventQueue::*mouseWarped_function_type)( float,float ) ;
            
            EventQueue_exposer.def( 
                "mouseWarped"
                , mouseWarped_function_type( &::osgGA::EventQueue::mouseWarped )
                , ( bp::arg("x"), bp::arg("y") )
                , " Method for updating in response to a mouse warp. Note, just moves the mouse position without creating a new event for it." );
        
        }
        { //::osgGA::EventQueue::penOrientation
        
            typedef void ( ::osgGA::EventQueue::*penOrientation_function_type)( float,float,float ) ;
            
            EventQueue_exposer.def( 
                "penOrientation"
                , penOrientation_function_type( &::osgGA::EventQueue::penOrientation )
                , ( bp::arg("tiltX"), bp::arg("tiltY"), bp::arg("rotation") )
                , " Method for adapting pen orientation events, placing this event on the back of the event queue." );
        
        }
        { //::osgGA::EventQueue::penOrientation
        
            typedef void ( ::osgGA::EventQueue::*penOrientation_function_type)( float,float,float,double ) ;
            
            EventQueue_exposer.def( 
                "penOrientation"
                , penOrientation_function_type( &::osgGA::EventQueue::penOrientation )
                , ( bp::arg("tiltX"), bp::arg("tiltY"), bp::arg("rotation"), bp::arg("time") )
                , " Method for adapting pen orientation events, placing this event on the back of the event queue, with specified time." );
        
        }
        { //::osgGA::EventQueue::penPressure
        
            typedef void ( ::osgGA::EventQueue::*penPressure_function_type)( float ) ;
            
            EventQueue_exposer.def( 
                "penPressure"
                , penPressure_function_type( &::osgGA::EventQueue::penPressure )
                , ( bp::arg("pressure") )
                , " Method for adapting pen pressure events, placing this event on the back of the event queue." );
        
        }
        { //::osgGA::EventQueue::penPressure
        
            typedef void ( ::osgGA::EventQueue::*penPressure_function_type)( float,double ) ;
            
            EventQueue_exposer.def( 
                "penPressure"
                , penPressure_function_type( &::osgGA::EventQueue::penPressure )
                , ( bp::arg("pressure"), bp::arg("time") )
                , " Method for adapting pen pressure events, placing this event on the back of the event queue, with specified time." );
        
        }
        { //::osgGA::EventQueue::penProximity
        
            typedef void ( ::osgGA::EventQueue::*penProximity_function_type)( ::osgGA::GUIEventAdapter::TabletPointerType,bool ) ;
            
            EventQueue_exposer.def( 
                "penProximity"
                , penProximity_function_type( &::osgGA::EventQueue::penProximity )
                , ( bp::arg("pt"), bp::arg("isEntering") )
                , " Method for adapting pen proximity events, placing this event on the back of the event queue." );
        
        }
        { //::osgGA::EventQueue::penProximity
        
            typedef void ( ::osgGA::EventQueue::*penProximity_function_type)( ::osgGA::GUIEventAdapter::TabletPointerType,bool,double ) ;
            
            EventQueue_exposer.def( 
                "penProximity"
                , penProximity_function_type( &::osgGA::EventQueue::penProximity )
                , ( bp::arg("pt"), bp::arg("isEntering"), bp::arg("time") )
                , " Method for adapting pen proximity events, placing this event on the back of the event queue, with specified time." );
        
        }
        { //::osgGA::EventQueue::quitApplication
        
            typedef void ( ::osgGA::EventQueue::*quitApplication_function_type)(  ) ;
            
            EventQueue_exposer.def( 
                "quitApplication"
                , quitApplication_function_type( &::osgGA::EventQueue::quitApplication )
                , " Method for adapting application quit events." );
        
        }
        { //::osgGA::EventQueue::quitApplication
        
            typedef void ( ::osgGA::EventQueue::*quitApplication_function_type)( double ) ;
            
            EventQueue_exposer.def( 
                "quitApplication"
                , quitApplication_function_type( &::osgGA::EventQueue::quitApplication )
                , ( bp::arg("time") )
                , " Method for adapting application quit events with specified event time." );
        
        }
        { //::osgGA::EventQueue::setCurrentEventState
        
            typedef void ( ::osgGA::EventQueue::*setCurrentEventState_function_type)( ::osgGA::GUIEventAdapter * ) ;
            
            EventQueue_exposer.def( 
                "setCurrentEventState"
                , setCurrentEventState_function_type( &::osgGA::EventQueue::setCurrentEventState )
                , ( bp::arg("ea") ) );
        
        }
        { //::osgGA::EventQueue::setEvents
        
            typedef void ( ::osgGA::EventQueue::*setEvents_function_type)( ::std::list< osg::ref_ptr<osgGA::GUIEventAdapter> > & ) ;
            
            EventQueue_exposer.def( 
                "setEvents"
                , setEvents_function_type( &::osgGA::EventQueue::setEvents )
                , ( bp::arg("events") )
                , " Set events." );
        
        }
        { //::osgGA::EventQueue::setFirstTouchEmulatesMouse
        
            typedef void ( ::osgGA::EventQueue::*setFirstTouchEmulatesMouse_function_type)( bool ) ;
            
            EventQueue_exposer.def( 
                "setFirstTouchEmulatesMouse"
                , setFirstTouchEmulatesMouse_function_type( &::osgGA::EventQueue::setFirstTouchEmulatesMouse )
                , ( bp::arg("b") ) );
        
        }
        { //::osgGA::EventQueue::setGraphicsContext
        
            typedef void ( ::osgGA::EventQueue::*setGraphicsContext_function_type)( ::osg::GraphicsContext * ) ;
            
            EventQueue_exposer.def( 
                "setGraphicsContext"
                , setGraphicsContext_function_type( &::osgGA::EventQueue::setGraphicsContext )
                , ( bp::arg("context") )
                , " Set the graphics context associated with this event queue." );
        
        }
        { //::osgGA::EventQueue::setMouseInputRange
        
            typedef void ( ::osgGA::EventQueue::*setMouseInputRange_function_type)( float,float,float,float ) ;
            
            EventQueue_exposer.def( 
                "setMouseInputRange"
                , setMouseInputRange_function_type( &::osgGA::EventQueue::setMouseInputRange )
                , ( bp::arg("xMin"), bp::arg("yMin"), bp::arg("xMax"), bp::arg("yMax") )
                , " Set the mouse input range." );
        
        }
        { //::osgGA::EventQueue::setStartTick
        
            typedef void ( ::osgGA::EventQueue::*setStartTick_function_type)( ::osg::Timer_t ) ;
            
            EventQueue_exposer.def( 
                "setStartTick"
                , setStartTick_function_type( &::osgGA::EventQueue::setStartTick )
                , ( bp::arg("tick") ) );
        
        }
        { //::osgGA::EventQueue::setUseFixedMouseInputRange
        
            typedef void ( ::osgGA::EventQueue::*setUseFixedMouseInputRange_function_type)( bool ) ;
            
            EventQueue_exposer.def( 
                "setUseFixedMouseInputRange"
                , setUseFixedMouseInputRange_function_type( &::osgGA::EventQueue::setUseFixedMouseInputRange )
                , ( bp::arg("useFixedMouseInputRange") )
                , " Specify if mouse coordinates should be transformed into a pre defined input range, or whether they\n should be simply based on as local coordinates to the window that generated the mouse events." );
        
        }
        { //::osgGA::EventQueue::syncWindowRectangleWithGraphcisContext
        
            typedef void ( ::osgGA::EventQueue::*syncWindowRectangleWithGraphcisContext_function_type)(  ) ;
            
            EventQueue_exposer.def( 
                "syncWindowRectangleWithGraphcisContext"
                , syncWindowRectangleWithGraphcisContext_function_type( &::osgGA::EventQueue::syncWindowRectangleWithGraphcisContext )
                , " Read the window record dimensions from the graphics context." );
        
        }
        { //::osgGA::EventQueue::takeEvents
        
            typedef bool ( ::osgGA::EventQueue::*takeEvents_function_type)( ::std::list< osg::ref_ptr<osgGA::GUIEventAdapter> > & ) ;
            
            EventQueue_exposer.def( 
                "takeEvents"
                , takeEvents_function_type( &::osgGA::EventQueue::takeEvents )
                , ( bp::arg("events") )
                , " Take the entire event queue leaving the EventQueue event queue empty." );
        
        }
        { //::osgGA::EventQueue::takeEvents
        
            typedef bool ( ::osgGA::EventQueue::*takeEvents_function_type)( ::std::list< osg::ref_ptr<osgGA::GUIEventAdapter> > &,double ) ;
            
            EventQueue_exposer.def( 
                "takeEvents"
                , takeEvents_function_type( &::osgGA::EventQueue::takeEvents )
                , ( bp::arg("events"), bp::arg("cutOffTime") )
                , " Take the events that were recorded before with specified time queue." );
        
        }
        { //::osgGA::EventQueue::touchBegan
        
            typedef ::osgGA::GUIEventAdapter * ( ::osgGA::EventQueue::*touchBegan_function_type)( unsigned int,::osgGA::GUIEventAdapter::TouchPhase,float,float,double ) ;
            
            EventQueue_exposer.def( 
                "touchBegan"
                , touchBegan_function_type( &::osgGA::EventQueue::touchBegan )
                , ( bp::arg("id"), bp::arg("phase"), bp::arg("x"), bp::arg("y"), bp::arg("time") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgGA::EventQueue::touchBegan
        
            typedef ::osgGA::GUIEventAdapter * ( ::osgGA::EventQueue::*touchBegan_function_type)( unsigned int,::osgGA::GUIEventAdapter::TouchPhase,float,float ) ;
            
            EventQueue_exposer.def( 
                "touchBegan"
                , touchBegan_function_type( &::osgGA::EventQueue::touchBegan )
                , ( bp::arg("id"), bp::arg("phase"), bp::arg("x"), bp::arg("y") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgGA::EventQueue::touchEnded
        
            typedef ::osgGA::GUIEventAdapter * ( ::osgGA::EventQueue::*touchEnded_function_type)( unsigned int,::osgGA::GUIEventAdapter::TouchPhase,float,float,unsigned int,double ) ;
            
            EventQueue_exposer.def( 
                "touchEnded"
                , touchEnded_function_type( &::osgGA::EventQueue::touchEnded )
                , ( bp::arg("id"), bp::arg("phase"), bp::arg("x"), bp::arg("y"), bp::arg("tap_count"), bp::arg("time") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgGA::EventQueue::touchEnded
        
            typedef ::osgGA::GUIEventAdapter * ( ::osgGA::EventQueue::*touchEnded_function_type)( unsigned int,::osgGA::GUIEventAdapter::TouchPhase,float,float,unsigned int ) ;
            
            EventQueue_exposer.def( 
                "touchEnded"
                , touchEnded_function_type( &::osgGA::EventQueue::touchEnded )
                , ( bp::arg("id"), bp::arg("phase"), bp::arg("x"), bp::arg("y"), bp::arg("tap_count") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgGA::EventQueue::touchMoved
        
            typedef ::osgGA::GUIEventAdapter * ( ::osgGA::EventQueue::*touchMoved_function_type)( unsigned int,::osgGA::GUIEventAdapter::TouchPhase,float,float,double ) ;
            
            EventQueue_exposer.def( 
                "touchMoved"
                , touchMoved_function_type( &::osgGA::EventQueue::touchMoved )
                , ( bp::arg("id"), bp::arg("phase"), bp::arg("x"), bp::arg("y"), bp::arg("time") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgGA::EventQueue::touchMoved
        
            typedef ::osgGA::GUIEventAdapter * ( ::osgGA::EventQueue::*touchMoved_function_type)( unsigned int,::osgGA::GUIEventAdapter::TouchPhase,float,float ) ;
            
            EventQueue_exposer.def( 
                "touchMoved"
                , touchMoved_function_type( &::osgGA::EventQueue::touchMoved )
                , ( bp::arg("id"), bp::arg("phase"), bp::arg("x"), bp::arg("y") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osgGA::EventQueue::userEvent
        
            typedef void ( ::osgGA::EventQueue::*userEvent_function_type)( ::osg::Referenced * ) ;
            
            EventQueue_exposer.def( 
                "userEvent"
                , userEvent_function_type( &::osgGA::EventQueue::userEvent )
                , ( bp::arg("userEventData") )
                , " Method for adapting user defined events" );
        
        }
        { //::osgGA::EventQueue::userEvent
        
            typedef void ( ::osgGA::EventQueue::*userEvent_function_type)( ::osg::Referenced *,double ) ;
            
            EventQueue_exposer.def( 
                "userEvent"
                , userEvent_function_type( &::osgGA::EventQueue::userEvent )
                , ( bp::arg("userEventData"), bp::arg("time") )
                , " Method for adapting user defined events with specified event time" );
        
        }
        { //::osgGA::EventQueue::windowResize
        
            typedef void ( ::osgGA::EventQueue::*windowResize_function_type)( int,int,int,int ) ;
            
            EventQueue_exposer.def( 
                "windowResize"
                , windowResize_function_type( &::osgGA::EventQueue::windowResize )
                , ( bp::arg("x"), bp::arg("y"), bp::arg("width"), bp::arg("height") )
                , " Method for adapting window resize event, placing this event on the back of the event queue." );
        
        }
        { //::osgGA::EventQueue::windowResize
        
            typedef void ( ::osgGA::EventQueue::*windowResize_function_type)( int,int,int,int,double ) ;
            
            EventQueue_exposer.def( 
                "windowResize"
                , windowResize_function_type( &::osgGA::EventQueue::windowResize )
                , ( bp::arg("x"), bp::arg("y"), bp::arg("width"), bp::arg("height"), bp::arg("time") )
                , " Method for adapting window resize event, placing this event on the back of the event queue, with specified time." );
        
        }
    }

}
