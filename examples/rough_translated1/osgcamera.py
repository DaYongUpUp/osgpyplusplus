#!/bin/env python

# Automatically translated python version of 
# OpenSceneGraph example program "osgcamera"
# !!! This program will need manual tuning before it will work. !!!

import sys

from osgpypp import osgDB
from osgpypp import osgGA
from osgpypp import osgViewer


# Translated from file 'osgcamera.cpp'

# OpenSceneGraph example, osgcamera.
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
#include <osgDB/WriteFile>
#include <osgViewer/Viewer>
#include <osgViewer/ViewerEventHandlers>
#include <osgGA/TrackballManipulator>
#include <osgGA/FlightManipulator>
#include <osgGA/AnimationPathManipulator>
#include <iostream>

class ModelHandler (osgGA.GUIEventHandler) : 

    ModelHandler():
        _position(0) 
    
    typedef std.vector<str> Filenames
    _filenames = Filenames()
    _position = unsigned int()
    
    def add(filename):
    
         _filenames.push_back(filename) 
        
    def handle(ea, aa):
        
        
        viewer = dynamic_cast<osgViewer.Viewer*>(aa)
        if  not viewer : return False
    
        if _filenames.empty() : return False
    
        switch(ea.getEventType())
            case(osgGA.GUIEventAdapter.KEYUP):
                if ea.getKey()==ord("l") :
                    model = osgDB.readNodeFile( _filenames[_position] )
                    ++_position
                    if _position>=_filenames.size() : _position = 0
                    
                    if model.valid() :
                        viewer.setSceneData(model)
                    
                    return True
            default: break
        
        return False
    
    _done = bool()



def singleWindowMultipleCameras(viewer):


    
    wsi = osg.GraphicsContext.getWindowingSystemInterface()
    if  not wsi : 
        osg.notify(osg.NOTICE), "Error, no WindowSystemInterface available, cannot create windows."
        return
    
    unsigned int width, height
    wsi.getScreenResolution(osg.GraphicsContext.ScreenIdentifier(0), width, height)

    traits = osg.GraphicsContext.Traits()
    traits.x = 0
    traits.y = 0
    traits.width = width
    traits.height = height
    traits.windowDecoration = True
    traits.doubleBuffer = True
    traits.sharedContext = 0

    gc = osg.GraphicsContext.createGraphicsContext(traits)
    if gc.valid() :
        osg.notify(osg.INFO), "  GraphicsWindow has been created successfully."

        # need to ensure that the window is cleared make sure that the complete window is set the correct colour
        # rather than just the parts of the window that are under the camera's viewports
        gc.setClearColor(osg.Vec4f(0.2,0.2,0.6,1.0))
        gc.setClearMask(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT)
    else:
        osg.notify(osg.NOTICE), "  GraphicsWindow has not been created successfully."

    numCameras = 2
    aspectRatioScale = 1.0#/(double)numCameras
    for(unsigned int i=0 i<numCameras++i)
        camera = osg.Camera()
        camera.setGraphicsContext(gc)
        camera.setViewport(osg.Viewport((i*width)/numCameras,(i*height)/numCameras, width/numCameras, height/numCameras))
        buffer =  GL_BACK if (traits.doubleBuffer) else  GL_FRONT
        camera.setDrawBuffer(buffer)
        camera.setReadBuffer(buffer)

        viewer.addSlave(camera, osg.Matrixd(), osg.Matrixd.scale(aspectRatioScale,1.0,1.0))

def multipleWindowMultipleCameras(viewer, multipleScreens):

    
    wsi = osg.GraphicsContext.getWindowingSystemInterface()
    if  not wsi : 
        osg.notify(osg.NOTICE), "Error, no WindowSystemInterface available, cannot create windows."
        return
    
    unsigned int width, height
    wsi.getScreenResolution(osg.GraphicsContext.ScreenIdentifier(0), width, height)


    numCameras = 6
    aspectRatioScale = (double)numCameras
    translate_x = double(numCameras)-1
    for(unsigned int i=0 i<numCameras++i, translate_x -= 2.0)
        traits = osg.GraphicsContext.Traits()
        traits.screenNum =  i / 3 if (multipleScreens) else  0
        traits.x = (i*width)/numCameras
        traits.y = 0
        traits.width = width/numCameras-1
        traits.height = height
        traits.windowDecoration = True
        traits.doubleBuffer = True
        traits.sharedContext = 0

        gc = osg.GraphicsContext.createGraphicsContext(traits)
        if gc.valid() :
            osg.notify(osg.INFO), "  GraphicsWindow has been created successfully."
        else:
            osg.notify(osg.NOTICE), "  GraphicsWindow has not been created successfully."

        camera = osg.Camera()
        camera.setGraphicsContext(gc)
        camera.setViewport(osg.Viewport(0,0, width/numCameras, height))
        buffer =  GL_BACK if (traits.doubleBuffer) else  GL_FRONT
        camera.setDrawBuffer(buffer)
        camera.setReadBuffer(buffer)

        viewer.addSlave(camera, osg.Matrix.scale(aspectRatioScale, 1.0, 1.0)*osg.Matrix.translate(translate_x, 0.0, 0.0), osg.Matrix() )

class EnableVBOVisitor (osg.NodeVisitor) :
    EnableVBOVisitor():
        osg.NodeVisitor(osg.NodeVisitor.TRAVERSE_ALL_CHILDREN) 

    def apply(geode):

        
        for(unsigned int i=0 i<geode.getNumDrawables()++i)
            geom = geode.getDrawable(i).asGeometry()
            if geom :
                osg.notify(osg.NOTICE), "Enabling VBO"
                geom.setUseVertexBufferObjects(True)


def main(argv):

    
    # use an ArgumentParser object to manage the program arguments.
    arguments = osg.ArgumentParser(argv)

    if argc<2 : 
        print argv[0], ": requires filename argument."
        return 1

    numRepeats = 2
    if arguments.read("--repeat",numRepeats)  or  arguments.read("-r",numRepeats)  or  arguments.read("--repeat")  or  arguments.read("-r") :

        sharedModel = arguments.read("--shared")
        enableVBO = arguments.read("--vbo")

        model = osg.Node()
        if sharedModel :
            model = osgDB.readNodeFiles(arguments)
            if  not model : return 0

            if enableVBO :
                enableVBOs = EnableVBOVisitor()
                model.accept(enableVBOs)

        threadingModel = osgViewer.Viewer.AutomaticSelection
        while arguments.read("-s") :  threadingModel = osgViewer.Viewer.SingleThreaded 
        while arguments.read("-g") :  threadingModel = osgViewer.Viewer.CullDrawThreadPerContext 
        while arguments.read("-d") :  threadingModel = osgViewer.Viewer.DrawThreadPerContext 
        while arguments.read("-c") :  threadingModel = osgViewer.Viewer.CullThreadPerCameraDrawThreadPerContext 

        for(unsigned int i=0 i<numRepeats ++i)
            osg.notify(osg.NOTICE), "+++++++++++++ New viewer ++++++++++++"

                viewer = osgViewer.Viewer()

                viewer.setThreadingModel(threadingModel)

                if sharedModel : viewer.setSceneData(model)
                else:
                    node = osgDB.readNodeFiles(arguments)
                    if  not node : return 0

                    if enableVBO :
                        enableVBOs = EnableVBOVisitor()
                        node.accept(enableVBOs)

                    viewer.setSceneData(node)

                viewer.run()

            osg.notify(osg.NOTICE), "------------ Viewer ended ----------"
        return 0


    pathfile = str()
    apm = 0
    while arguments.read("-p",pathfile) :
        apm = osgGA.AnimationPathManipulator(pathfile)
        if  not apm.valid()  or   not (apm.valid())  : 
            apm = 0

    viewer = osgViewer.Viewer(arguments)
    
    while arguments.read("-s") :  viewer.setThreadingModel(osgViewer.Viewer.SingleThreaded) 
    while arguments.read("-g") :  viewer.setThreadingModel(osgViewer.Viewer.CullDrawThreadPerContext) 
    while arguments.read("-d") :  viewer.setThreadingModel(osgViewer.Viewer.DrawThreadPerContext) 
    while arguments.read("-c") :  viewer.setThreadingModel(osgViewer.Viewer.CullThreadPerCameraDrawThreadPerContext) 
    
    limitNumberOfFrames = False
    maxFrames = 10
    while arguments.read("--run-till-frame-number",maxFrames) :  limitNumberOfFrames = True 

    # alternative viewer window setups.
    while arguments.read("-1") :  singleWindowMultipleCameras(viewer) 
    while arguments.read("-2") :  multipleWindowMultipleCameras(viewer, False) 
    while arguments.read("-3") :  multipleWindowMultipleCameras(viewer, True) 

    if apm.valid() : viewer.setCameraManipulator(apm)
    else viewer.setCameraManipulator( osgGA.TrackballManipulator() )
    
    viewer.addEventHandler(osgViewer.StatsHandler)()
    viewer.addEventHandler(osgViewer.ThreadingHandler)()

    configfile = str()
    while arguments.read("--config", configfile) :
        osg.notify(osg.NOTICE), "Trying to read config file ", configfile
        object = osgDB.readObjectFile(configfile)
        view = dynamic_cast<osgViewer.View*>(object)
        if view :
            osg.notify(osg.NOTICE), "Read config file succesfully"
        else:
            osg.notify(osg.NOTICE), "Failed to read config file : ", configfile
            return 1

    while arguments.read("--write-config", configfile) :  osgDB.writeObjectFile(viewer, configfile) 


    if arguments.read("-m") :
        modelHandler = ModelHandler()
        for(int i=1 i<arguments.argc()++i)
            modelHandler.add(arguments[i])

        viewer.addEventHandler(modelHandler)
    else:
        # load the scene.
        loadedModel = osgDB.readNodeFiles(arguments)

        if  not loadedModel : loadedModel = osgDB.readNodeFile("cow.osgt")

        if  not loadedModel : 
            print argv[0], ": No data loaded."
            return 1

        viewer.setSceneData(loadedModel)
    
    viewer.realize()

    numFrames = 0
    while  not viewer.done()  and   not (limitNumberOfFrames  and  numFrames>=maxFrames) :
        viewer.frame()
        ++numFrames

    return 0


if __name__ == "__main__":
    main(sys.argv)
