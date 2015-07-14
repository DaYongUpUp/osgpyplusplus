#!/bin/env python

# Automatically translated python version of 
# OpenSceneGraph example program "osgviewerQt"
# !!! This program will need manual tuning before it will work. !!!

import sys

from osgpypp import osgDB
from osgpypp import osgGA
from osgpypp import osgQt
from osgpypp import osgViewer


# Translated from file 'osgviewerQt.cpp'

#include <QTimer>
#include <QApplication>
#include <QGridLayout>

#include <osgViewer/CompositeViewer>
#include <osgViewer/ViewerEventHandlers>

#include <osgGA/TrackballManipulator>

#include <osgDB/ReadFile>

#include <osgQt/GraphicsWindowQt>

#include <iostream>

class ViewerWidget : public QWidget, public osgViewer.CompositeViewer
    ViewerWidget(osgViewer.ViewerBase.ThreadingModel threadingModel=osgViewer.CompositeViewer.SingleThreaded) : QWidget()
        setThreadingModel(threadingModel)

        # disable the default setting of viewer.done() by pressing Escape.
        setKeyEventSetsDone(0)

        widget1 = addViewWidget( createGraphicsWindow(0,0,100,100), osgDB.readNodeFile("cow.osgt") )
        widget2 = addViewWidget( createGraphicsWindow(0,0,100,100), osgDB.readNodeFile("glider.osgt") )
        widget3 = addViewWidget( createGraphicsWindow(0,0,100,100), osgDB.readNodeFile("axes.osgt") )
        widget4 = addViewWidget( createGraphicsWindow(0,0,100,100), osgDB.readNodeFile("fountain.osgt") )
        popupWidget = addViewWidget( createGraphicsWindow(900,100,320,240,"Popup window",True), osgDB.readNodeFile("dumptruck.osgt") )
        popupWidget.show()

        grid = QGridLayout()
        grid.addWidget( widget1, 0, 0 )
        grid.addWidget( widget2, 0, 1 )
        grid.addWidget( widget3, 1, 0 )
        grid.addWidget( widget4, 1, 1 )
        setLayout( grid )

        connect( _timer, SIGNAL(timeout()), this, SLOT(update()) )
        _timer.start( 10 )

    def addViewWidget(gw, scene):

        
        view = osgViewer.View()
        addView( view )

        camera = view.getCamera()
        camera.setGraphicsContext( gw )

        traits = gw.getTraits()

        camera.setClearColor( osg.Vec4(0.2, 0.2, 0.6, 1.0) )
        camera.setViewport( osg.Viewport(0, 0, traits.width, traits.height) )
        camera.setProjectionMatrixAsPerspective(30.0, static_cast<double>(traits.width)/static_cast<double>(traits.height), 1.0, 10000.0 )

        view.setSceneData( scene )
        view.addEventHandler( osgViewer.StatsHandler )()
        view.setCameraManipulator( osgGA.TrackballManipulator )()

        return gw.getGLWidget()

    def createGraphicsWindow(x, y, w, h, name, windowDecoration):

        
        ds = osg.DisplaySettings.instance()
        traits = osg.GraphicsContext.Traits()
        traits.windowName = name
        traits.windowDecoration = windowDecoration
        traits.x = x
        traits.y = y
        traits.width = w
        traits.height = h
        traits.doubleBuffer = True
        traits.alpha = ds.getMinimumNumAlphaBits()
        traits.stencil = ds.getMinimumNumStencilBits()
        traits.sampleBuffers = ds.getMultiSamples()
        traits.samples = ds.getNumMultiSamples()

        return osgQt.GraphicsWindowQt(traits)

    def paintEvent(event):

         frame() 

    _timer = QTimer()


def main(argv):

    
    arguments = osg.ArgumentParser(argv)

#if QT_VERSION >= 0x050000
    # Qt5 is currently crashing and reporting "Cannot make QOpenGLContext current in a different thread" when the viewer is run multi-threaded, this is regression from Qt4
    threadingModel = osgViewer.ViewerBase.SingleThreaded
#else:
    threadingModel = osgViewer.ViewerBase.CullDrawThreadPerContext
#endif

    while arguments.read("--SingleThreaded") : threadingModel = osgViewer.ViewerBase.SingleThreaded
    while arguments.read("--CullDrawThreadPerContext") : threadingModel = osgViewer.ViewerBase.CullDrawThreadPerContext
    while arguments.read("--DrawThreadPerContext") : threadingModel = osgViewer.ViewerBase.DrawThreadPerContext
    while arguments.read("--CullThreadPerCameraDrawThreadPerContext") : threadingModel = osgViewer.ViewerBase.CullThreadPerCameraDrawThreadPerContext

    app = QApplication(argc, argv)
    viewWidget = ViewerWidget(threadingModel)
    viewWidget.setGeometry( 100, 100, 800, 600 )
    viewWidget.show()
    return app.exec()


if __name__ == "__main__":
    main(sys.argv)
