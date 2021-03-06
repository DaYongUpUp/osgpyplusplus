#!/bin/env python

# Automatically translated python version of 
# OpenSceneGraph example program "osgmultitouch"
# !!! This program will need manual tuning before it will work. !!!

import sys

from osgpypp import osg
from osgpypp import osgDB
from osgpypp import osgGA
from osgpypp import osgText
from osgpypp import osgUtil
from osgpypp import osgViewer


# Translated from file 'osgmultitouch.cpp'

# OpenSceneGraph example, osghud.
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

#include <osgUtil/Optimizer>
#include <osgDB/ReadFile>

#include <osgViewer/Viewer>
#include <osgViewer/CompositeViewer>

#include <osgGA/TrackballManipulator>

#include <osg/Material>
#include <osg/Geode>
#include <osg/BlendFunc>
#include <osg/Depth>
#include <osg/PolygonOffset>
#include <osg/MatrixTransform>
#include <osg/Camera>
#include <osg/RenderInfo>

#include <osgDB/WriteFile>

#include <osgText/Text>
#include <osgGA/MultiTouchTrackballManipulator>
#include <osg/ShapeDrawable>

#ifdef __APPLE__
#include <osgViewer/api/Cocoa/GraphicsWindowCocoa>
#endif


def createHUD(w, h):


    
    # create a camera to set up the projection and model view matrices, and the subgraph to draw in the HUD
    camera = osg.Camera()

    # set the projection matrix
    camera.setProjectionMatrix(osg.Matrix.ortho2D(0,w,0,h))

    # set the view matrix    
    camera.setReferenceFrame(osg.Transform.ABSOLUTE_RF)
    camera.setViewMatrix(osg.Matrix.identity())

    # only clear the depth buffer
    camera.setClearMask(GL_DEPTH_BUFFER_BIT)

    # draw subgraph after main camera view.
    camera.setRenderOrder(osg.Camera.POST_RENDER)

    # we don't want the camera to grab event focus from the viewers main camera(s).
    camera.setAllowEventFocus(False)
    


    # add to this camera a subgraph to render

        geode = osg.Geode()

        timesFont = str("fonts/arial.ttf")

        # turn lighting off for the text and disable depth test to ensure it's always ontop.
        stateset = geode.getOrCreateStateSet()
        stateset.setMode(GL_LIGHTING,osg.StateAttribute.OFF)

        position = osg.Vec3(50.0,h-50,0.0)

            text = osgText.Text()
            geode.addDrawable( text )

            text.setFont(timesFont)
            text.setPosition(position)
            text.setText("A simple multi-touch-example\n1 touch = rotate, \n2 touches = drag + scale, \n3 touches = home")

        camera.addChild(geode)

    return camera


class TestMultiTouchEventHandler (osgGA.GUIEventHandler) :
    TestMultiTouchEventHandler(osg.Group* parent_group)
    :   osgGA.GUIEventHandler(),
        _cleanupOnNextFrame(False)
        createTouchRepresentations(parent_group, 10)
    def createTouchRepresentations(parent_group, num_objects):
        
        # create some geometry which is shown for every touch-point
        for(unsigned int i = 0 i  not = num_objects ++i) 
            ss = std.ostringstream()
            
            geode = osg.Geode()
            
            drawable = osg.ShapeDrawable(osg.Box(osg.Vec3(0,0,0), 100))
            drawable.setColor(osg.Vec4(0.5, 0.5, 0.5,1))
            geode.addDrawable(drawable)
            
            ss, "Touch ", i
            
            text = osgText.Text()
            geode.addDrawable( text )
            drawable.setDataVariance(osg.Object.DYNAMIC)
            _drawables.push_back(drawable)
            
            
            text.setFont("fonts/arial.ttf")
            text.setPosition(osg.Vec3(110,0,0))
            text.setText(ss.str())
            _texts.push_back(text)
            text.setDataVariance(osg.Object.DYNAMIC)
            
            
            
            mat = osg.MatrixTransform()
            mat.addChild(geode)
            mat.setNodeMask(0x0)
            
            _mats.push_back(mat)
            
            parent_group.addChild(mat)
        
        parent_group.getOrCreateStateSet().setMode(GL_LIGHTING, osg.StateAttribute.OFF)
    
    virtual bool handle ( osgGA.GUIEventAdapter ea, osgGA.GUIActionAdapter aa, osg.Object *, osg.NodeVisitor *)
        switch(ea.getEventType())
            case osgGA.GUIEventAdapter.FRAME:
                if _cleanupOnNextFrame : 
                    cleanup(0)
                    _cleanupOnNextFrame = False
                break
            
            case osgGA.GUIEventAdapter.PUSH:
            case osgGA.GUIEventAdapter.DRAG:
            case osgGA.GUIEventAdapter.RELEASE:
                    # is this a multi-touch  if  not ea.isMultiTouchEvent() if (event) else 
                        return False
                    
                    j = unsigned int(0)
                    
                    # iterate over all touch-points and update the geometry
                    num_touch_ended = unsigned(0)
                    
                    for(osgGA.GUIEventAdapter.TouchData.iterator i = ea.getTouchData().begin() i  not = ea.getTouchData().end() ++i, ++j)
                        tp = (*i)
                        _mats[j].setMatrix(osg.Matrix.translate(tp.x, ea.getWindowHeight() - tp.y, 0))
                        _mats[j].setNodeMask(0xffff)
                        
                        ss = std.ostringstream()
                        ss, "Touch ", tp.id
                        _texts[j].setText(ss.str())
                        
                        switch (tp.phase) 
                            case osgGA.GUIEventAdapter.TOUCH_BEGAN:
                                    _drawables[j].setColor(osg.Vec4(0,1,0,1))
                                    break
                                    
                            case osgGA.GUIEventAdapter.TOUCH_MOVED:
                                    _drawables[j].setColor(osg.Vec4(1,1,1,1))
                                    break
                                    
                            case osgGA.GUIEventAdapter.TOUCH_ENDED:
                                    _drawables[j].setColor(osg.Vec4(1,0,0,1))
                                    ++num_touch_ended
                                    break
                                    
                            case osgGA.GUIEventAdapter.TOUCH_STATIONERY:
                                    _drawables[j].setColor(osg.Vec4(0.8,0.8,0.8,1))
                                    break
                                    
                            default:
                                break

                    
                    # hide unused geometry
                    cleanup(j)
                    
                    #check if all touches ended
                    if ea.getTouchData().getNumTouchPoints() > 0 :  and  (ea.getTouchData().getNumTouchPoints() == num_touch_ended) :
                        _cleanupOnNextFrame = True
                    
                    # reposition mouse-pointer
                    aa.requestWarpPointer((ea.getWindowX() + ea.getWindowWidth()) / 2.0, (ea.getWindowY() + ea.getWindowHeight()) / 2.0)
                break
                
            default:
                break
        
        return False
    
    def cleanup(j):
    
        
        for(unsigned k = j k < _mats.size() ++k) 
            _mats[k].setNodeMask(0x0)

    _drawables = std.vector<osg.ShapeDrawable*>()
    _mats = std.vector<osg.MatrixTransform*>()
    _texts = std.vector<osgText.Text*>()
    _cleanupOnNextFrame = bool()




def main(argv):


    
    # use an ArgumentParser object to manage the program arguments.
    arguments = osg.ArgumentParser(argv)


    # read the scene from the list of file specified commandline args.
    scene = osgDB.readNodeFiles(arguments)
    
    # if not loaded assume no arguments passed in, try use default model instead.
    if  not scene : scene = osgDB.readNodeFile("dumptruck.osgt")
    
    if  not scene : 
            geode = osg.Geode()
            drawable = osg.ShapeDrawable(osg.Box(osg.Vec3(0,0,0), 100))
            drawable.setColor(osg.Vec4(0.5, 0.5, 0.5,1))
            geode.addDrawable(drawable)
            scene = geode


    # construct the viewer.
    viewer = osgViewer.Viewer()
    
    
    group = osg.Group()

    # add the HUD subgraph.    
    if scene.valid() : group.addChild(scene)
    
    viewer.setCameraManipulator(osgGA.MultiTouchTrackballManipulator())
    viewer.realize()
    
    gc = viewer.getCamera().getGraphicsContext()
    
    #ifdef __APPLE__
        # as multitouch is disabled by default, enable it now
        win = dynamic_cast<osgViewer.GraphicsWindowCocoa*>(gc)
        if win : win.setMultiTouchEnabled(True)
    #endif
    
    print "creating hud with ", gc.getTraits().width, "x", gc.getTraits().height
    hud_camera = createHUD(gc.getTraits().width, gc.getTraits().height)
    
    
    viewer.addEventHandler(TestMultiTouchEventHandler(hud_camera))
    
    
    group.addChild(hud_camera)

    # set the scene to render
    viewer.setSceneData(group)

    return viewer.run()

    


if __name__ == "__main__":
    main(sys.argv)
