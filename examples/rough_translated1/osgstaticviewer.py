#!/bin/env python

# Automatically translated python version of 
# OpenSceneGraph example program "osgstaticviewer"
# !!! This program will need manual tuning before it will work. !!!

import sys

from osgpypp import osg
from osgpypp import osgDB
from osgpypp import osgGA
from osgpypp import osgText
from osgpypp import osgUtil
from osgpypp import osgViewer


# Translated from file 'osgstaticviewer.cpp'

# OpenSceneGraph example, osgstaticviewer.
#*
#*  Permission is hereby granted, free of charge, to any person obtaining a copy
#*  of this software and associated documentation files (the "Software"), to deal
#*  in the Software without restriction, including without limitation the rights
#*  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
#*  copies of the Software, and to permit persons to whom the Software is
#*  furnished to do so, subject to the following conditions:
#*
#*  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
#*  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
#*  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
#*  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
#*  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
#*  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
#*  THE SOFTWARE.
#

#include <osgDB/ReadFile>
#include <osgUtil/Optimizer>
#include <osg/CoordinateSystemNode>

#include <osg/Switch>
#include <osgText/Text>

#include <osgViewer/Viewer>
#include <osgViewer/ViewerEventHandlers>

#include <osgGA/TrackballManipulator>
#include <osgGA/FlightManipulator>
#include <osgGA/DriveManipulator>
#include <osgGA/KeySwitchMatrixManipulator>
#include <osgGA/StateSetManipulator>
#include <osgGA/AnimationPathManipulator>
#include <osgGA/TerrainManipulator>

#include <iostream>

# include the plugins we need
USE_OSGPLUGIN(ive)
USE_OSGPLUGIN(osg)
USE_OSGPLUGIN(osg2)
USE_OSGPLUGIN(rgb)
USE_OSGPLUGIN(OpenFlight)

#ifdef USE_FREETYPE
    USE_OSGPLUGIN(freetype)
#endif

USE_DOTOSGWRAPPER_LIBRARY(osg)
USE_DOTOSGWRAPPER_LIBRARY(osgFX)
USE_DOTOSGWRAPPER_LIBRARY(osgParticle)
USE_DOTOSGWRAPPER_LIBRARY(osgShadow)
USE_DOTOSGWRAPPER_LIBRARY(osgSim)
USE_DOTOSGWRAPPER_LIBRARY(osgTerrain)
USE_DOTOSGWRAPPER_LIBRARY(osgText)
USE_DOTOSGWRAPPER_LIBRARY(osgViewer)
USE_DOTOSGWRAPPER_LIBRARY(osgVolume)
USE_DOTOSGWRAPPER_LIBRARY(osgWidget)

USE_SERIALIZER_WRAPPER_LIBRARY(osg)
USE_SERIALIZER_WRAPPER_LIBRARY(osgAnimation)
USE_SERIALIZER_WRAPPER_LIBRARY(osgFX)
USE_SERIALIZER_WRAPPER_LIBRARY(osgManipulator)
USE_SERIALIZER_WRAPPER_LIBRARY(osgParticle)
USE_SERIALIZER_WRAPPER_LIBRARY(osgShadow)
USE_SERIALIZER_WRAPPER_LIBRARY(osgSim)
USE_SERIALIZER_WRAPPER_LIBRARY(osgTerrain)
USE_SERIALIZER_WRAPPER_LIBRARY(osgText)
USE_SERIALIZER_WRAPPER_LIBRARY(osgVolume)

# include the platform specific GraphicsWindow implementation.
USE_GRAPHICSWINDOW()

def main(argv):

    
    # use an ArgumentParser object to manage the program arguments.
    arguments = osg.ArgumentParser(argv)

    arguments.getApplicationUsage().setApplicationName(arguments.getApplicationName())
    arguments.getApplicationUsage().setDescription(arguments.getApplicationName()+" is the standard OpenSceneGraph example which loads and visualises 3d models.")
    arguments.getApplicationUsage().setCommandLineUsage(arguments.getApplicationName()+" [options] filename ...")
    arguments.getApplicationUsage().addCommandLineOption("--image <filename>","Load an image and render it on a quad")
    arguments.getApplicationUsage().addCommandLineOption("--dem <filename>","Load an image/DEM and render it on a HeightField")
    arguments.getApplicationUsage().addCommandLineOption("-h or --help","Display command line parameters")
    arguments.getApplicationUsage().addCommandLineOption("--help-env","Display environmental variables available")
    arguments.getApplicationUsage().addCommandLineOption("--help-keys","Display keyboard  mouse bindings available")
    arguments.getApplicationUsage().addCommandLineOption("--help-all","Display all command line, env vars and keyboard  mouse bindings.")
    arguments.getApplicationUsage().addCommandLineOption("--SingleThreaded","Select SingleThreaded threading model for viewer.")
    arguments.getApplicationUsage().addCommandLineOption("--CullDrawThreadPerContext","Select CullDrawThreadPerContext threading model for viewer.")
    arguments.getApplicationUsage().addCommandLineOption("--DrawThreadPerContext","Select DrawThreadPerContext threading model for viewer.")
    arguments.getApplicationUsage().addCommandLineOption("--CullThreadPerCameraDrawThreadPerContext","Select CullThreadPerCameraDrawThreadPerContext threading model for viewer.")

    # if user request help write it out to cout.
    helpAll = arguments.read("--help-all")
    helpType = ( osg.ApplicationUsage.COMMAND_LINE_OPTION if ((helpAll  or  arguments.read("-h")  or  arguments.read("--help"))) else  0 ) |
                            ( osg.ApplicationUsage.ENVIRONMENTAL_VARIABLE if ((helpAll  or   arguments.read("--help-env"))) else  0 ) |
                            ( osg.ApplicationUsage.KEYBOARD_MOUSE_BINDING if ((helpAll  or   arguments.read("--help-keys"))) else  0 )
    if helpType :
        arguments.getApplicationUsage().write(std.cout, helpType)
        return 1

    # report any errors if they have occurred when parsing the program arguments.
    if arguments.errors() :
        arguments.writeErrorMessages(std.cout)
        return 1
    
    if arguments.argc()<=1 :
        arguments.getApplicationUsage().write(std.cout,osg.ApplicationUsage.COMMAND_LINE_OPTION)
        return 1

    viewer = osgViewer.Viewer()
    
    # set up the camera manipulators.
        keyswitchManipulator = osgGA.KeySwitchMatrixManipulator()

        keyswitchManipulator.addMatrixManipulator( ord("1"), "Trackball", osgGA.TrackballManipulator() )
        keyswitchManipulator.addMatrixManipulator( ord("2"), "Flight", osgGA.FlightManipulator() )
        keyswitchManipulator.addMatrixManipulator( ord("3"), "Drive", osgGA.DriveManipulator() )
        keyswitchManipulator.addMatrixManipulator( ord("4"), "Terrain", osgGA.TerrainManipulator() )

        pathfile = str()
        keyForAnimationPath = ord("5")
        while arguments.read("-p",pathfile) :
            apm = osgGA.AnimationPathManipulator(pathfile)
            if apm  or   not apm.valid() : 
                num = keyswitchManipulator.getNumMatrixManipulators()
                keyswitchManipulator.addMatrixManipulator( keyForAnimationPath, "Path", apm )
                keyswitchManipulator.selectMatrixManipulator(num)
                ++keyForAnimationPath

        viewer.setCameraManipulator( keyswitchManipulator )

    # add the state manipulator
    viewer.addEventHandler( osgGA.StateSetManipulator(viewer.getCamera().getOrCreateStateSet()) )
    
    # add the thread model handler
    viewer.addEventHandler(osgViewer.ThreadingHandler)()

    # add the window size toggle handler
    viewer.addEventHandler(osgViewer.WindowSizeHandler)()
        
    # add the stats handler
    viewer.addEventHandler(osgViewer.StatsHandler)()

    # add the help handler
    viewer.addEventHandler(osgViewer.HelpHandler(arguments.getApplicationUsage()))

    while arguments.read("--SingleThreaded") : viewer.setThreadingModel(osgViewer.Viewer.SingleThreaded)
    while arguments.read("--CullDrawThreadPerContext") : viewer.setThreadingModel(osgViewer.Viewer.CullDrawThreadPerContext)
    while arguments.read("--DrawThreadPerContext") : viewer.setThreadingModel(osgViewer.Viewer.DrawThreadPerContext)
    while arguments.read("--CullThreadPerCameraDrawThreadPerContext") : viewer.setThreadingModel(osgViewer.Viewer.CullThreadPerCameraDrawThreadPerContext)

    screenNum = unsigned int()
    while arguments.read("--screen",screenNum) :
        viewer.setUpViewOnSingleScreen(screenNum)

    # load the data
    loadedModel = osgDB.readNodeFiles(arguments)
    if  not loadedModel : 
        print arguments.getApplicationName(), ": No data loaded"
        return 1

    # any option left unread are converted into errors to write out later.
    arguments.reportRemainingOptionsAsUnrecognized()

    # report any errors if they have occurred when parsing the program arguments.
    if arguments.errors() :
        arguments.writeErrorMessages(std.cout)
        return 1


    # optimize the scene graph, remove redundant nodes and state etc.
    optimizer = osgUtil.Optimizer()
    optimizer.optimize(loadedModel)

    viewer.setSceneData( loadedModel )

    return viewer.run()


if __name__ == "__main__":
    main(sys.argv)
