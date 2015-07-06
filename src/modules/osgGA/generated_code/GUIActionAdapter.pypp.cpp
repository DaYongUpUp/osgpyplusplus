// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgga.h"
#include "guiactionadapter.pypp.hpp"

namespace bp = boost::python;

struct GUIActionAdapter_wrapper : osgGA::GUIActionAdapter, bp::wrapper< osgGA::GUIActionAdapter > {

    GUIActionAdapter_wrapper()
    : osgGA::GUIActionAdapter()
      , bp::wrapper< osgGA::GUIActionAdapter >(){
        // null constructor
        
    }

    virtual ::osg::View * asView(  ) {
        if( bp::override func_asView = this->get_override( "asView" ) )
            return func_asView(  );
        else{
            return this->osgGA::GUIActionAdapter::asView(  );
        }
    }
    
    ::osg::View * default_asView(  ) {
        return osgGA::GUIActionAdapter::asView( );
    }

    virtual void requestContinuousUpdate( bool needed=true ){
        bp::override func_requestContinuousUpdate = this->get_override( "requestContinuousUpdate" );
        func_requestContinuousUpdate( needed );
    }

    virtual void requestRedraw(  ){
        bp::override func_requestRedraw = this->get_override( "requestRedraw" );
        func_requestRedraw(  );
    }

    virtual void requestWarpPointer( float x, float y ){
        bp::override func_requestWarpPointer = this->get_override( "requestWarpPointer" );
        func_requestWarpPointer( x, y );
    }

};

void register_GUIActionAdapter_class(){

    bp::class_< GUIActionAdapter_wrapper, boost::noncopyable >( "GUIActionAdapter", "\nAbstract base class defining the interface by which GUIEventHandlers may request\nactions of the GUI system in use. These requests for actions should then be honored\nby the GUI toolkit of the users application.\n\nTo provide more detail, when a GUIEventHandler (e.g. a TrackballManipulator)\nhandles an incoming event, such as a mouse event, it may wish to make\na request of the GUI. E.g. if a model is thrown, the trackball manipulator\nmay wish to start a timer, and be repeatedly called, to continuously refresh the\ncameras position and orientation. However, it has no way of doing this, as it\nknows nothing of the window system in which its operating. Instead, the\nGUIEventHandler issues its request via a GUIActionAdapter, and the viewer\nin use should honour the request, using the GUI system in play.\n\nThere is more than one way of using the GUIActionAdapter. E.g. it may be inherited\ninto a Viewer class, as is done with osgGLUT::Viewer. Alternatively, a simple\nsubclass of GUIActionAdapter (e.g. osgQt::QtActionAdapter) may be passed to\nthe GUIEventHandler::handle() function; once the function has returned, the viewer\nwill then unpack the results and work out what to do to respond to the\nrequests.\n\nAlso there are several ways to run your app and handle the updating of\nthe window.  osgGLUT::Viewer always has a idle callback registered which does a\nredraw all the time.  osgGLUT::Viewer can safely ignore both requestRedraw() and\nrequestContinousUpdate() as these are happening all the time anyway.\n\nOther apps will probably want to respond to the requestRedraw() and\nrequestContinousUpdate(bool) and again there is more than one way to handle it.\nYou can override requestRedraw() and implement to call your own window\nredraw straight away. Or you can implement so that a flag is set and\nthen you then respond the flag being set in your own leisure.\n" )    
        .def( 
            "asView"
            , (::osg::View * ( ::osgGA::GUIActionAdapter::* )(  ))(&::osgGA::GUIActionAdapter::asView)
            , (::osg::View * ( GUIActionAdapter_wrapper::* )(  ))(&GUIActionAdapter_wrapper::default_asView)
            , bp::return_internal_reference< >() )    
        .def( 
            "requestContinuousUpdate"
            , bp::pure_virtual( (void ( ::osgGA::GUIActionAdapter::* )( bool ))(&::osgGA::GUIActionAdapter::requestContinuousUpdate) )
            , ( bp::arg("needed")=(bool)(true) )
            , "\n        requestContinuousUpdate(bool) is for en/disabling a throw or idle\n        callback to be requested by a GUIEventHandler (typically a CameraManipulator,\n        though other GUIEventHandlers may also provide functionality).\n        GUI toolkits can respond  to this immediately by registering an idle/timed\n        callback, or can delay setting the callback and update at their own leisure.\n" )    
        .def( 
            "requestRedraw"
            , bp::pure_virtual( (void ( ::osgGA::GUIActionAdapter::* )(  ))(&::osgGA::GUIActionAdapter::requestRedraw) )
            , "\n        requestRedraw() requests a single redraw.\n" )    
        .def( 
            "requestWarpPointer"
            , bp::pure_virtual( (void ( ::osgGA::GUIActionAdapter::* )( float,float ))(&::osgGA::GUIActionAdapter::requestWarpPointer) )
            , ( bp::arg("x"), bp::arg("y") )
            , "\n        requestWarpPointer(int,int) is requesting a repositioning of the mouse pointer\n        to a specified x,y location on the window.  This is used by some camera manipulators\n        to initialise the mouse pointer when mouse position relative to a controls\n        neutral mouse position is required, i.e when mimicking a aircrafts joystick.\n" );

}
