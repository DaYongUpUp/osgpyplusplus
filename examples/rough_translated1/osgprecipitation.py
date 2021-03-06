#!/bin/env python

# Automatically translated python version of 
# OpenSceneGraph example program "osgprecipitation"
# !!! This program will need manual tuning before it will work. !!!

import sys

from osgpypp import osg
from osgpypp import osgDB
from osgpypp import osgGA
from osgpypp import osgParticle
from osgpypp import osgUtil
from osgpypp import osgViewer


# Translated from file 'osgprecipitation.cpp'

# OpenSceneGraph example, osgprecipitation.
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
#include <osgDB/FileUtils>
#include <osgUtil/Optimizer>
#include <osgUtil/CullVisitor>
#include <osg/ClipNode>


#include <osgGA/TrackballManipulator>
#include <osgGA/FlightManipulator>
#include <osgGA/DriveManipulator>
#include <osgGA/KeySwitchMatrixManipulator>
#include <osgGA/StateSetManipulator>
#include <osgGA/AnimationPathManipulator>
#include <osgGA/TerrainManipulator>

#include <osgViewer/Viewer>

#include <osg/MatrixTransform>
#include <osgUtil/TransformCallback>
#include <osgParticle/PrecipitationEffect>

#include <iostream>

class MyGustCallback (osg.NodeCallback) :

        MyGustCallback() 

        virtual void operator()(osg.Node* node, osg.NodeVisitor* nv)
            pe = dynamic_cast<osgParticle.PrecipitationEffect*>(node)
            
            value = sin(nv.getFrameStamp().getSimulationTime())
            if value<-0.5 :
                pe.snow(1.0)
            else:
                pe.rain(0.5)
        
            traverse(node, nv)



def main(argv):


    

    # use an ArgumentParser object to manage the program arguments.
    arguments = osg.ArgumentParser(argv)
    
    # set up the usage document, in case we need to print out how to use this program.
    arguments.getApplicationUsage().setApplicationName(arguments.getApplicationName())
    arguments.getApplicationUsage().setDescription(arguments.getApplicationName()+" example provides an interactive viewer for visualising point clouds..")
    arguments.getApplicationUsage().setCommandLineUsage(arguments.getApplicationName()+" [options] filename ...")
    arguments.getApplicationUsage().addCommandLineOption("-h or --help","Display this information")
    arguments.getApplicationUsage().addCommandLineOption("--snow <density>","Set the snow with a density between 0 and 1.0")
    arguments.getApplicationUsage().addCommandLineOption("--rain <density>","")
    arguments.getApplicationUsage().addCommandLineOption("--particleSize <size>","")
    arguments.getApplicationUsage().addCommandLineOption("--particleColour <red> <green> <blue> <alpha>","")
    arguments.getApplicationUsage().addCommandLineOption("--wind <x> <y> <z>","Set the wind speed in model coordinates")
    arguments.getApplicationUsage().addCommandLineOption("--particleSpeed <float>","Set the particle speed")
    arguments.getApplicationUsage().addCommandLineOption("--nearTransition <distance>","Set the near transistion distance")
    arguments.getApplicationUsage().addCommandLineOption("--farTransition  <distance>","Set the far transistion distance")
    arguments.getApplicationUsage().addCommandLineOption("--particleDensity <density>","Set the particle density")
    arguments.getApplicationUsage().addCommandLineOption("--cellSize <x> <y> <z>","Set the cell size in model coordinates")
    arguments.getApplicationUsage().addCommandLineOption("--fogDensity <density>","Set the fog density")
    arguments.getApplicationUsage().addCommandLineOption("--fogColour <red> <green> <blue> <alpha>","Set fog colour.")
    arguments.getApplicationUsage().addCommandLineOption("-useFarLineSegments","Switch on the use of line segments")
    

    # construct the viewer.
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

    precipitationEffect = osgParticle.PrecipitationEffect()

    intensity = float()
    while arguments.read("--snow", intensity) : precipitationEffect.snow(intensity)
    while arguments.read("--rain", intensity) : precipitationEffect.rain(intensity)

    value = float()
    while arguments.read("--particleSize", value) : precipitationEffect.setParticleSize(value)

    color = osg.Vec4()
    while arguments.read("--particleColor", color.r(), color.g(), color.b(), color.a()) : precipitationEffect.setParticleColor(color)
    while arguments.read("--particleColour", color.r(), color.g(), color.b(), color.a()) : precipitationEffect.setParticleColor(color)

    wind = osg.Vec3()
    while arguments.read("--wind", wind.x(), wind.y(), wind.z()) : precipitationEffect.setWind(wind)
    
    while arguments.read("--particleSpeed", value) : precipitationEffect.setParticleSpeed(value)

    while arguments.read("--nearTransition", value ) : precipitationEffect.setNearTransition(value)
    while arguments.read("--farTransition", value ) : precipitationEffect.setFarTransition(value)

    while arguments.read("--particleDensity", value ) : precipitationEffect.setMaximumParticleDensity(value)

    cellSize = osg.Vec3()
    while arguments.read("--cellSize", cellSize.x(), cellSize.y(), cellSize.z()) : precipitationEffect.setCellSize(cellSize) 

    clipDistance = 0.0
    while arguments.read("--clip",clipDistance) : 

    bb = osg.BoundingBox()
    while arguments.read("--boundingBox", bb.xMin(),
                                           bb.yMin(),
                                           bb.zMin(),
                                           bb.xMax(),
                                           bb.yMax(),
                                           bb.zMax()) : 

    while arguments.read("--fogDensity", value ) : precipitationEffect.getFog().setDensity(value)
    while arguments.read("--fogColor", color.r(), color.g(), color.b(), color.a() ) :  precipitationEffect.getFog().setColor(color)
    while arguments.read("--fogColour", color.r(), color.g(), color.b(), color.a() ) :  precipitationEffect.getFog().setColor(color)
 
    while arguments.read("--useFarLineSegments") :  precipitationEffect.setUseFarLineSegments(True) 

    
    viewer.getCamera().setClearColor( precipitationEffect.getFog().getColor() )


    # if user request help write it out to cout.
    if arguments.read("-h")  or  arguments.read("--help") :
        arguments.getApplicationUsage().write(std.cout)
        return 1
    
    # read the scene from the list of file specified commandline args.
    loadedModel = osgDB.readNodeFiles(arguments)
    if  not loadedModel : 
        print arguments.getApplicationName(), ": No data loaded"
        return 1
    
    # precipitationEffect.setUpdateCallback(MyGustCallback)()
    
    group = osg.Group()
    
    if clipDistance not =0.0 :
        clipNode = osg.ClipNode()
        clipNode.addClipPlane( osg.ClipPlane( 0 ) )
        clipNode.getClipPlane(0).setClipPlane( 0.0, 0.0, -1.0, -clipDistance )
        clipNode.setReferenceFrame(osg.ClipNode.ABSOLUTE_RF)
        clipNode.addChild(precipitationEffect)

        group.addChild(clipNode)
    else:
        group.addChild(precipitationEffect)
    
    group.addChild(loadedModel)

    loadedModel.getOrCreateStateSet().setAttributeAndModes(precipitationEffect.getFog())
    
    # create the light    
    lightSource = osg.LightSource()
    group.addChild(lightSource)

    light = lightSource.getLight()
    light.setLightNum(0)
    light.setPosition(osg.Vec4(0.0,0.0,1.0,0.0)) # directional light from above
    light.setAmbient(osg.Vec4(0.8,0.8,0.8,1.0))
    light.setDiffuse(osg.Vec4(0.2,0.2,0.2,1.0))
    light.setSpecular(osg.Vec4(0.2,0.2,0.2,1.0))


    # set the scene to render
    viewer.setSceneData(group)

    return viewer.run()



if __name__ == "__main__":
    main(sys.argv)
