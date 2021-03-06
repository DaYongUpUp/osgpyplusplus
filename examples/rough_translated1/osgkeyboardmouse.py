#!/bin/env python

# Automatically translated python version of 
# OpenSceneGraph example program "osgkeyboardmouse"
# !!! This program will need manual tuning before it will work. !!!

import sys

from osgpypp import osg
from osgpypp import osgDB
from osgpypp import osgFX
from osgpypp import osgGA
from osgpypp import osgUtil
from osgpypp import osgViewer


# Translated from file 'osgkeyboardmouse.cpp'

# OpenSceneGraph example, osgkeyboardmouse.
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

# Simple example of use of osgViewer.GraphicsWindow + Viewer
# example that provides the user with control over view position with basic picking.

#include <osg/Timer>
#include <osg/io_utils>
#include <osg/observer_ptr>

#include <osgUtil/IntersectionVisitor>
#include <osgUtil/PolytopeIntersector>
#include <osgUtil/LineSegmentIntersector>

#include <osgDB/ReadFile>
#include <osgDB/WriteFile>

#include <osgGA/TrackballManipulator>
#include <osgGA/StateSetManipulator>

#include <osgViewer/Viewer>

#include <osgFX/Scribe>

#include <iostream>

class CreateModelToSaveVisitor (osg.NodeVisitor) :

    CreateModelToSaveVisitor():
        osg.NodeVisitor(osg.NodeVisitor.TRAVERSE_ALL_CHILDREN)        
        _group = osg.Group()
        _addToModel = False
    
    def apply(node):
    
        
        scribe = dynamic_cast<osgFX.Scribe*>(node)
        if scribe :
            for(unsigned int i=0 i<scribe.getNumChildren() ++i)
                _group.addChild(scribe.getChild(i))
        else:
            traverse(node)
    
    _group = osg.Group()
    _addToModel = bool()


class DeleteSelectedNodesVisitor (osg.NodeVisitor) :

    DeleteSelectedNodesVisitor():
        osg.NodeVisitor(osg.NodeVisitor.TRAVERSE_ALL_CHILDREN)        
    
    def apply(node):
    
        
        scribe = dynamic_cast<osgFX.Scribe*>(node)
        if scribe :
            _selectedNodes.push_back(scribe)
        else:
            traverse(node)
    
    def pruneSelectedNodes():
    
        
        for(SelectedNodes.iterator itr = _selectedNodes.begin()
            not = _selectedNodes.end()
            ++itr)
            node = itr
            parents = node.getParents()
            for(osg.Node.ParentList.iterator pitr = parents.begin()
                not = parents.end()
                ++pitr)
                parent = *pitr
                parent.removeChild(node)
    
    typedef std.vector< osgFX.Scribe > SelectedNodes
    _selectedNodes = SelectedNodes()
    


# class to handle events with a pick
class PickHandler (osgGA.GUIEventHandler) : 

    PickHandler():
        _mx(0.0),_my(0.0),
        _usePolytopeIntersector(False),
        _useWindowCoordinates(False) 

    ~PickHandler() 

    def handle(ea, aa):

        
        viewer = dynamic_cast<osgViewer.Viewer*>(aa)
        if  not viewer : return False

        switch(ea.getEventType())
            case(osgGA.GUIEventAdapter.KEYUP):
                if ea.getKey()==ord("s") :
                    saveSelectedModel(viewer.getSceneData())
                elif ea.getKey()==ord("o") :
                    osg.notify(osg.NOTICE), "Saved model to file 'saved_model.osgt'"
                    osgDB.writeNodeFile(*(viewer.getSceneData()), "saved_model.osgt")
                elif ea.getKey()==ord("p") :
                    _usePolytopeIntersector =  not _usePolytopeIntersector
                    if _usePolytopeIntersector :
                        osg.notify(osg.NOTICE), "Using PolytopeIntersector"
                     else:
                        osg.notify(osg.NOTICE), "Using LineSegmentIntersector"
                elif ea.getKey()==ord("c") :
                    _useWindowCoordinates =  not _useWindowCoordinates
                    if _useWindowCoordinates :
                        osg.notify(osg.NOTICE), "Using window coordinates for picking"
                     else:
                        osg.notify(osg.NOTICE), "Using projection coordiates for picking"
                elif ea.getKey()==osgGA.GUIEventAdapter.KEY_Delete  or  ea.getKey()==osgGA.GUIEventAdapter.KEY_BackSpace :
                    osg.notify(osg.NOTICE), "Delete"
                    dsnv = DeleteSelectedNodesVisitor()
                    viewer.getSceneData().accept(dsnv)
                    dsnv.pruneSelectedNodes()
                return False
            case(osgGA.GUIEventAdapter.PUSH):
            case(osgGA.GUIEventAdapter.MOVE):
                _mx = ea.getX()
                _my = ea.getY()
                return False
            case(osgGA.GUIEventAdapter.RELEASE):
                if _mx == ea.getX()  and  _my == ea.getY() :
                    # only do a pick if the mouse hasn't moved
                    pick(ea,viewer)
                return True

            default:
                return False

    def pick(ea, viewer):

        
        scene = viewer.getSceneData()
        if  not scene : return

        osg.notify(osg.NOTICE)

        node = 0
        parent = 0

        if _usePolytopeIntersector :
            picker = osgUtil.PolytopeIntersector*()
            if _useWindowCoordinates :
                # use window coordinates
                # remap the mouse x,y into viewport coordinates.
                viewport = viewer.getCamera().getViewport()
                mx = viewport.x() + (int)((double )viewport.width()*(ea.getXnormalized()*0.5+0.5))
                my = viewport.y() + (int)((double )viewport.height()*(ea.getYnormalized()*0.5+0.5))

                # half width, height.
                w = 5.0
                h = 5.0
                picker = osgUtil.PolytopeIntersector( osgUtil.Intersector.WINDOW, mx-w, my-h, mx+w, my+h )
             else:
                mx = ea.getXnormalized()
                my = ea.getYnormalized()
                w = 0.05
                h = 0.05
                picker = osgUtil.PolytopeIntersector( osgUtil.Intersector.PROJECTION, mx-w, my-h, mx+w, my+h )
            iv = osgUtil.IntersectionVisitor(picker)

            viewer.getCamera().accept(iv)

            if picker.containsIntersections() :
                intersection = picker.getFirstIntersection()

                osg.notify(osg.NOTICE), "Picked ", intersection.localIntersectionPoint, "  Distance to ref. plane ", intersection.distance, ", max. dist ", intersection.maxDistance, ", primitive index ", intersection.primitiveIndex, ", numIntersectionPoints ", intersection.numIntersectionPoints

                nodePath = intersection.nodePath
                node =  nodePath[nodePath.size()-1] if ((nodePath.size()>=1)) else 0
                parent =  dynamic_cast<osg.Group*>(nodePath[nodePath.size()-2]) if ((nodePath.size()>=2)) else 0

                if node : print "  Hits ", node.className(), " nodePath size ", nodePath.size()    
                toggleScribe(parent, node)

        else:
            picker = osgUtil.LineSegmentIntersector*()
            if  not _useWindowCoordinates :
                # use non dimensional coordinates - in projection/clip space
                picker = osgUtil.LineSegmentIntersector( osgUtil.Intersector.PROJECTION, ea.getXnormalized(),ea.getYnormalized() )
             else:
                # use window coordinates
                # remap the mouse x,y into viewport coordinates.
                viewport = viewer.getCamera().getViewport()
                mx = viewport.x() + (int)((float)viewport.width()*(ea.getXnormalized()*0.5+0.5))
                my = viewport.y() + (int)((float)viewport.height()*(ea.getYnormalized()*0.5+0.5))
                picker = osgUtil.LineSegmentIntersector( osgUtil.Intersector.WINDOW, mx, my )
            iv = osgUtil.IntersectionVisitor(picker)

            viewer.getCamera().accept(iv)

            if picker.containsIntersections() :
                intersection = picker.getFirstIntersection()
                osg.notify(osg.NOTICE), "Picked ", intersection.localIntersectionPoint

                nodePath = intersection.nodePath
                node =  nodePath[nodePath.size()-1] if ((nodePath.size()>=1)) else 0
                parent =  dynamic_cast<osg.Group*>(nodePath[nodePath.size()-2]) if ((nodePath.size()>=2)) else 0

                if node : print "  Hits ", node.className(), " nodePath size", nodePath.size()
                toggleScribe(parent, node)

        # now we try to decorate the hit node by the osgFX.Scribe to show that its been "picked"

    def toggleScribe(parent, node):

        
        if  not parent  or   not node : return

        print "  parent ", parent.className()

        parentAsScribe = dynamic_cast<osgFX.Scribe*>(parent)
        if  not parentAsScribe :
            # node not already picked, so highlight it with an osgFX.Scribe
            scribe = osgFX.Scribe()
            scribe.addChild(node)
            parent.replaceChild(node,scribe)
        else:
            # node already picked so we want to remove scribe to unpick it.
            parentList = parentAsScribe.getParents()
            for(osg.Node.ParentList.iterator itr=parentList.begin()
                not = parentList.end()
                ++itr)
                (*itr).replaceChild(parentAsScribe,node)


    def saveSelectedModel(scene):

        
        if  not scene : return
    
        cmtsv = CreateModelToSaveVisitor()
        scene.accept(cmtsv)
        
        if cmtsv._group.getNumChildren()>0 :
            print "Writing selected compoents to 'selected_model.osgt'"
            osgDB.writeNodeFile(*cmtsv._group, "selected_model.osgt")

    float _mx,_my
    _usePolytopeIntersector = bool()
    _useWindowCoordinates = bool()


def main(argv):

    
    loadedModel = osg.Node()
    
    # load the scene.
    if argc>1 : loadedModel = osgDB.readNodeFile(argv[1])
    
    # if not loaded assume no arguments passed in, try use default mode instead.
    if  not loadedModel : loadedModel = osgDB.readNodeFile("dumptruck.osgt")
    
    if  not loadedModel : 
        print argv[0], ": No data loaded."
        return 1
    
    # create the window to draw to.
    traits = osg.GraphicsContext.Traits()
    traits.x = 200
    traits.y = 200
    traits.width = 800
    traits.height = 600
    traits.windowDecoration = True
    traits.doubleBuffer = True
    traits.sharedContext = 0

    gc = osg.GraphicsContext.createGraphicsContext(traits)
    gw = dynamic_cast<osgViewer.GraphicsWindow*>(gc)
    if  not gw :
        osg.notify(osg.NOTICE), "Error: unable to create graphics window."
        return 1

    # create the view of the scene.
    viewer = osgViewer.Viewer()
    viewer.getCamera().setGraphicsContext(gc)
    viewer.getCamera().setViewport(0,0,800,600)
    viewer.setSceneData(loadedModel)
    
    # create a tracball manipulator to move the camera around in response to keyboard/mouse events
    viewer.setCameraManipulator( osgGA.TrackballManipulator )()

    statesetManipulator = osgGA.StateSetManipulator(viewer.getCamera().getStateSet())
    viewer.addEventHandler(statesetManipulator)

    # add the pick handler
    viewer.addEventHandler(PickHandler())

    viewer.realize()

    # main loop (note, window toolkits which take control over the main loop will require a window redraw callback containing the code below.)
    while  not viewer.done() :
        viewer.frame()

    return 0



if __name__ == "__main__":
    main(sys.argv)
