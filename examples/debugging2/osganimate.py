#!/bin/env python

"""
# Automatically translated python version of 
# OpenSceneGraph example program "osganimate"

# Translated from file 'osganimate.cpp'

# OpenSceneGraph example, osganimate.
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
"""


import sys
import math

from osgpypp import osg
from osgpypp import osgDB
from osgpypp import osgGA
from osgpypp import osgSim
from osgpypp import osgUtil
from osgpypp import osgViewer


def createAnimationPath(center, radius, looptime):
    # set up the animation path
    animationPath = osg.AnimationPath()
    animationPath.setLoopMode(osg.AnimationPath.LOOP)
    numSamples = 40
    yaw = 0.0
    yaw_delta = 2.0*osg.PI/(numSamples-1.0)
    roll = osg.inDegrees(30.0)
    time = 0.0
    time_delta = looptime/float(numSamples)
    for i in range(numSamples):
        position = center+osg.Vec3(math.sin(yaw)*radius,math.cos(yaw)*radius,0.0)
        rotation = osg.Quat(roll,osg.Vec3(0.0,1.0,0.0))*osg.Quat(-(yaw+osg.inDegrees(90.0)),osg.Vec3(0.0,0.0,1.0))
        animationPath.insert(time,osg.AnimationPath.ControlPoint(position,rotation))
        yaw += yaw_delta
        time += time_delta
    return animationPath


def createBase(center, radius):
    numTilesX = 10
    numTilesY = 10
    width = 2*radius
    height = 2*radius
    v000 = center - osg.Vec3(width*0.5,height*0.5,0.0)
    dx = osg.Vec3(width/(float(numTilesX)),0.0,0.0)
    dy = osg.Vec3(0.0,height/(float(numTilesY)),0.0)
    # fill in vertices for grid, note numTilesX+1 * numTilesY+1...
    coords = osg.Vec3Array()
    for iy in range(numTilesY):
        for ix in range(numTilesX):
            coords.append(v000+dx*float(ix)+dy*float(iy))
    #Just two colours - black and white.
    colors = osg.Vec4Array()
    colors.append(osg.Vec4(1.0,1.0,1.0,1.0)) # white
    colors.append(osg.Vec4(0.0,0.0,0.0,1.0)) # black
    whitePrimitives = osg.DrawElementsUShort(osg.GL_QUADS)
    blackPrimitives = osg.DrawElementsUShort(osg.GL_QUADS)
    numIndicesPerRow = numTilesX+1
    for iy in range(numTilesY):
        for ix in range(numTilesX):
            primitives =  whitePrimitives if (((iy+ix)%2==0)) else  blackPrimitives
            primitives.append(ix    +(iy+1)*numIndicesPerRow)
            primitives.append(ix    +iy*numIndicesPerRow)
            primitives.append((ix+1)+iy*numIndicesPerRow)
            primitives.append((ix+1)+(iy+1)*numIndicesPerRow)
    # set up a single normal
    normals = osg.Vec3Array()
    normals.append(osg.Vec3(0.0,0.0,1.0))
    geom = osg.Geometry()
    geom.setVertexArray(coords)
    geom.setColorArray(colors, osg.Array.BIND_PER_PRIMITIVE_SET)
    geom.setNormalArray(normals, osg.Array.BIND_OVERALL)
    geom.addPrimitiveSet(whitePrimitives)
    geom.addPrimitiveSet(blackPrimitives)
    geode = osg.Geode()
    geode.addDrawable(geom)
    return geode


def createMovingModel(center, radius):
    animationLength = 10.0
    animationPath = createAnimationPath(center,radius,animationLength)
    model = osg.Group()
    glider = osgDB.readNodeFile("glider.osgt")
    if glider :
        bs = glider.getBound()
        size = radius/bs.radius()*0.3
        positioned = osg.MatrixTransform()
        positioned.setDataVariance(osg.Object.STATIC)
        positioned.setMatrix(osg.Matrix.translate(-bs.center())*
                                     osg.Matrix.scale(size,size,size)*
                                     osg.Matrix.rotate(osg.inDegrees(-90.0),0.0,0.0,1.0))
        positioned.addChild(glider)
        xform = osg.PositionAttitudeTransform()
        xform.setUpdateCallback(osg.AnimationPathCallback(animationPath,0.0,1.0))
        xform.addChild(positioned)
        model.addChild(xform)
    cessna = osgDB.readNodeFile("cessna.osgt")
    if cessna :
        bs = cessna.getBound()
        size = radius/bs.radius()*0.3
        positioned = osg.MatrixTransform()
        positioned.setDataVariance(osg.Object.STATIC)
        positioned.setMatrix(osg.Matrix.translate(-bs.center())*
                                     osg.Matrix.scale(size,size,size)*
                                     osg.Matrix.rotate(osg.inDegrees(180.0),0.0,0.0,1.0))
        positioned.addChild(cessna)
        xform = osg.MatrixTransform()
        xform.setUpdateCallback(osg.AnimationPathCallback(animationPath,0.0,2.0))
        xform.addChild(positioned)
        model.addChild(xform)
    return model


def createModel(overlay, technique):
    center = osg.Vec3(0.0,0.0,0.0)
    radius = 100.0
    root = osg.Group()
    baseHeight = center.z - radius*0.5
    baseModel = createBase(osg.Vec3(center.x, center.y, baseHeight),radius)
    movingModel = createMovingModel(center,radius*0.8)
    if overlay :
        overlayNode = osgSim.OverlayNode(technique)
        overlayNode.setContinuousUpdate(True)
        overlayNode.setOverlaySubgraph(movingModel)
        overlayNode.setOverlayBaseHeight(baseHeight-0.01)
        overlayNode.addChild(baseModel)
        root.addChild(overlayNode)
    else:
        root.addChild(baseModel)
    root.addChild(movingModel)
    return root


def main(argv):
    overlay = False
    arguments = osg.ArgumentParser(argv)
    while arguments.read("--overlay") : 
        overlay = True
    technique = osgSim.OverlayNode.OBJECT_DEPENDENT_WITH_ORTHOGRAPHIC_OVERLAY
    while arguments.read("--object") :  
        technique = osgSim.OverlayNode.OBJECT_DEPENDENT_WITH_ORTHOGRAPHIC_OVERLAY 
        overlay=True 
    while arguments.read("--ortho")  or  arguments.read("--orthographic") :  
        technique = osgSim.OverlayNode.VIEW_DEPENDENT_WITH_ORTHOGRAPHIC_OVERLAY 
        overlay=True 
    while arguments.read("--persp")  or  arguments.read("--perspective") :  
        technique = osgSim.OverlayNode.VIEW_DEPENDENT_WITH_PERSPECTIVE_OVERLAY 
        overlay=True 
    # initialize the viewer.
    viewer = osgViewer.Viewer()
    # load the nodes from the commandline arguments.
    model = createModel(overlay, technique)
    if not model:
        return 1
    # tilt the scene so the default eye position is looking down on the model.
    rootnode = osg.MatrixTransform()
    rootnode.setMatrix(osg.Matrix.rotate(osg.inDegrees(30.0),1.0,0.0,0.0))
    rootnode.addChild(model)
    # run optimization over the scene graph
    optimzer = osgUtil.Optimizer()
    optimzer.optimize(rootnode)
    # set the scene to render
    viewer.setSceneData(rootnode)
    viewer.setCameraManipulator(osgGA.TrackballManipulator())
    # viewer.setUpViewOnSingleScreen(1)
    # normal viewer usage.
    return viewer.run()


if __name__ == "__main__":
    retval = main(sys.argv)
