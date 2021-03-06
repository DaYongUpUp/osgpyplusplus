#!/bin/env python

# Automatically translated python version of 
# OpenSceneGraph example program "osgmultitexturecontrol"
# !!! This program will need manual tuning before it will work. !!!

import sys

from osgpypp import osg
from osgpypp import osgDB
from osgpypp import osgFX
from osgpypp import osgGA
from osgpypp import osgTerrain
from osgpypp import osgViewer


# Translated from file 'osgmultitexturecontrol.cpp'

# OpenSceneGraph example, osgmultitexture.
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


#include <osg/Notify>

#include <osg/Texture2D>
#include <osg/io_utils>

#include <osgDB/Registry>
#include <osgDB/ReadFile>

#include <osgFX/MultiTextureControl>

#include <osgGA/TerrainManipulator>
#include <osgGA/StateSetManipulator>
#include <osgGA/AnimationPathManipulator>
#include <osgGA/TrackballManipulator>
#include <osgGA/FlightManipulator>
#include <osgGA/DriveManipulator>
#include <osgGA/KeySwitchMatrixManipulator>
#include <osgGA/StateSetManipulator>
#include <osgGA/AnimationPathManipulator>
#include <osgGA/TerrainManipulator>

#include <osgTerrain/Terrain>
#include <osgTerrain/TerrainTile>

#include <osgViewer/ViewerEventHandlers>
#include <osgViewer/Viewer>


#include <iostream>

template<class T>
class FindTopMostNodeOfTypeVisitor (osg.NodeVisitor) :
    FindTopMostNodeOfTypeVisitor():
        osg.NodeVisitor(osg.NodeVisitor.TRAVERSE_ALL_CHILDREN),
        _foundNode(0)
    
    
    def apply(node):
    
        
        result = dynamic_cast<T*>(node)
        if result :
            _foundNode = result
        else:
            traverse(node)
    
    _foundNode = T*()


template<class T>
def findTopMostNodeOfType(node):
    
    if  not node : return 0

    fnotv = FindTopMostNodeOfTypeVisitor<T>()
    node.accept(fnotv)
    
    return fnotv._foundNode

#* Callback used to track the elevation of the camera and update the texture weights in an MultiTextureControl node.
class ElevationLayerBlendingCallback (osg.NodeCallback) :
    
        typedef std.vector<double> Elevations

        ElevationLayerBlendingCallback(osgFX.MultiTextureControl* mtc,  Elevations elevations, float animationTime=4.0):
            _previousFrame(0),
            _previousTime(0.0),
            _animationTime(animationTime),
            _currentElevation(0.0),
            _mtc(mtc),
            _elevations(elevations) 
    
        #* Callback method called by the NodeVisitor when visiting a node.
        virtual void operator()(osg.Node* node, osg.NodeVisitor* nv)
            if nv.getVisitorType()==osg.NodeVisitor.UPDATE_VISITOR :

                deltaTime = 0.01
                if _previousFrame not =0 :
                    deltaTime = float(nv.getFrameStamp().getReferenceTime() - _previousTime)

                _previousTime = nv.getFrameStamp().getReferenceTime()
                _previousFrame = nv.getFrameStamp().getFrameNumber()

                if _mtc.valid()  and   not _elevations.empty() :
                    index = _mtc.getNumTextureWeights()-1
                    for(unsigned int i=0 i<_elevations.size() ++i)
                        if _currentElevation>_elevations[i] : 
                            index = i
                            break

                    delta = std.min(deltaTime/_animationTime, 1.0)

                    for(unsigned int i=0 i<_mtc.getNumTextureWeights() ++i)
                        currentValue = _mtc.getTextureWeight(i)
                        desiredValue =  1.0 if ((i==index)) else  0.0
                        if desiredValue  not = currentValue :
                            if currentValue<desiredValue :
                                desiredValue = std.min(currentValue + delta, desiredValue)
                            else:
                                desiredValue = std.max(currentValue - delta, desiredValue)

                            _mtc.setTextureWeight(i, desiredValue)

            elif nv.getVisitorType()==osg.NodeVisitor.CULL_VISITOR :
                _currentElevation = nv.getViewPoint().z()

                csn = dynamic_cast<osg.CoordinateSystemNode*>(node)
                if csn : 
                    em = csn.getEllipsoidModel()
                    if em :
                        X = nv.getViewPoint().x()
                        Y = nv.getViewPoint().y()
                        Z = nv.getViewPoint().z()
                        double latitude, longitude
                        em.convertXYZToLatLongHeight(X,Y,Z,latitude, longitude, _currentElevation)


            traverse(node,nv)

        _previousFrame = unsigned int()
        _previousTime = double()
        _animationTime = float()
        _currentElevation = double()
        
        _mtc = osg.observer_ptr<osgFX.MultiTextureControl>()
        _elevations = Elevations()



# class to handle events with a pick
class TerrainHandler (osgGA.GUIEventHandler) : 

    TerrainHandler(osgTerrain.Terrain* terrain):
        _terrain(terrain) 
    
    def handle(ea, aa):
    
        
        switch(ea.getEventType())
            case(osgGA.GUIEventAdapter.KEYDOWN):
                if ea.getKey()==ord("r") :
                    _terrain.setSampleRatio(_terrain.getSampleRatio()*0.5)
                    osg.notify(osg.NOTICE), "Sample ratio ", _terrain.getSampleRatio()
                    return True
                elif ea.getKey()==ord("R") :
                    _terrain.setSampleRatio(_terrain.getSampleRatio()/0.5)
                    osg.notify(osg.NOTICE), "Sample ratio ", _terrain.getSampleRatio()
                    return True
                elif ea.getKey()==ord("v") :
                    _terrain.setVerticalScale(_terrain.getVerticalScale()*1.25)
                    osg.notify(osg.NOTICE), "Vertical scale ", _terrain.getVerticalScale()
                    return True
                elif ea.getKey()==ord("V") :
                    _terrain.setVerticalScale(_terrain.getVerticalScale()/1.25)
                    osg.notify(osg.NOTICE), "Vertical scale ", _terrain.getVerticalScale()
                    return True

                return False
            default:
                return False

    ~TerrainHandler() 

    _terrain = osgTerrain.Terrain()


def main(argv):

    
    # use an ArgumentParser object to manage the program arguments.
    arguments = osg.ArgumentParser(argv)
    arguments.getApplicationUsage().addCommandLineOption("-v","Set the terrain vertical scale.")
    arguments.getApplicationUsage().addCommandLineOption("-r","Set the terrain sample ratio.")
    arguments.getApplicationUsage().addCommandLineOption("--login <url> <username> <password>","Provide authentication information for http file access.")
   
    # construct the viewer.
    viewer = osgViewer.Viewer(arguments)


    # set the tile loaded callback to load the optional imagery
    whiteList = osgTerrain.WhiteListTileLoadedCallback()
    setname = str()
    while arguments.read("--allow",setname) :
        whiteList.allow(setname)
    while arguments.read("--allow-all") :
        whiteList.setAllowAll(True)
    osgTerrain.TerrainTile.setTileLoadedCallback(whiteList)


    # obtain the vertical scale
    verticalScale = 1.0
    while arguments.read("-v",verticalScale) : 
    
    # obtain the sample ratio
    sampleRatio = 1.0
    while arguments.read("-r",sampleRatio) : 


    # set up any authentication.
    str url, username, password
    while arguments.read("--login",url, username, password) :
        if  not osgDB.Registry.instance().getAuthenticationMap() :
            osgDB.Registry.instance().setAuthenticationMap(osgDB.AuthenticationMap)()
            osgDB.Registry.instance().getAuthenticationMap().addAuthenticationDetails(
                url,
                osgDB.AuthenticationDetails(username, password)
            )

    # add all the event handlers to the viewer
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

        # add the record camera path handler
        viewer.addEventHandler(osgViewer.RecordCameraPathHandler)()

        # add the LOD Scale handler
        viewer.addEventHandler(osgViewer.LODScaleHandler)()

    # add all the camera manipulators
        keyswitchManipulator = osgGA.KeySwitchMatrixManipulator()

        keyswitchManipulator.addMatrixManipulator( ord("1"), "Trackball", osgGA.TrackballManipulator() )
        keyswitchManipulator.addMatrixManipulator( ord("2"), "Flight", osgGA.FlightManipulator() )
        keyswitchManipulator.addMatrixManipulator( ord("3"), "Drive", osgGA.DriveManipulator() )

        num = keyswitchManipulator.getNumMatrixManipulators()
        keyswitchManipulator.addMatrixManipulator( ord("4"), "Terrain", osgGA.TerrainManipulator() )

        pathfile = str()
        keyForAnimationPath = ord("5")
        while arguments.read("-p",pathfile) :
            apm = osgGA.AnimationPathManipulator(pathfile)
            if apm  or   not apm.valid() : 
                num = keyswitchManipulator.getNumMatrixManipulators()
                keyswitchManipulator.addMatrixManipulator( keyForAnimationPath, "Path", apm )
                ++keyForAnimationPath

        keyswitchManipulator.selectMatrixManipulator(num)

        viewer.setCameraManipulator( keyswitchManipulator )

    # set up the scene graph
        # load the nodes from the commandline arguments.
        rootnode = osgDB.readNodeFiles(arguments)

        if  not rootnode :
            osg.notify(osg.NOTICE), "Warning: no valid data loaded, please specify a database on the command line."
            return 1

        terrain = findTopMostNodeOfType<osgTerrain.Terrain>(rootnode)
        if  not terrain :
            terrain = osgTerrain.Terrain()

            csn = findTopMostNodeOfType<osg.CoordinateSystemNode>(rootnode)
            if csn :
                terrain.set(*csn)

            terrain.addChild(rootnode)

            rootnode = terrain
            csn = terrain

        terrain.setSampleRatio(sampleRatio)
        terrain.setVerticalScale(verticalScale)

        # register our custom handler for adjust Terrain settings
        viewer.addEventHandler(TerrainHandler(terrain))


        numLayers = 1
        mtc = findTopMostNodeOfType<osgFX.MultiTextureControl>(rootnode)
        if mtc :

            numLayers = mtc.getNumTextureWeights()

            # switch on just the first texture layer.
            mtc.setTextureWeight(0,1.0)
            for(unsigned int i=1 i<numLayers ++i)
                mtc.setTextureWeight(i,0.0)

        if numLayers<2 :
            osg.notify(osg.NOTICE), "Warning: scene must have MultiTextureControl node with at least 2 texture units defined."
            return 1

        maxElevationTransition = 1e6
        elevations = ElevationLayerBlendingCallback.Elevations()
        for(unsigned int i=0 i<numLayers ++i)
            elevations.push_back(maxElevationTransition)
            maxElevationTransition /= 2.0


        # we must assign callback as both an update and cull callback, as update callback to do the update of
        # the the osgFX.MultiTextureControl node a thread safe way, and as a cull callback to gather the camera
        # position information.
        elbc = ElevationLayerBlendingCallback(mtc, elevations)
        terrain.setUpdateCallback(elbc)
        terrain.setCullCallback(elbc)

        # add a viewport to the viewer and attach the scene graph.
        viewer.setSceneData( rootnode )
    


    # create the windows and run the threads.
    viewer.realize()

    return viewer.run()


if __name__ == "__main__":
    main(sys.argv)
