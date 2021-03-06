#!/bin/env python

# Automatically translated python version of 
# OpenSceneGraph example program "osgthirdpersonview"
# !!! This program will need manual tuning before it will work. !!!

import sys

from osgpypp import osg
from osgpypp import osgDB
from osgpypp import osgGA
from osgpypp import osgViewer


# Translated from file 'osgthirdpersonview.cpp'

# OpenSceneGraph example, osgthirdpersonview.
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
# This code is originally Copyright (c) 2008 Skew Matrix  Software LLC,
# but you may use the code under the terms of the OSGPL as described above.

# This example demonstrates how CompositeViewer can be used to
# provide a third person view of another view, including eyepoint and
# view frustum.
#
# The code creates a CompositeViewer with two Views. Each of the two
# Views has its own window. One View is the typical scene view,
# showing the loaded model(s).
#
# The second View is a third person view showing not just the loaded
# model(s), but also a wireframe representation of the first View's
# frustum. Interactions with the first View are reflect5ed in the
# second View's displayed frustum.
#
# Command line arguments are taken to be models for display. If you
# specify no command line arguments, the code attempts to load cow.osgt.


#include <osg/Geometry>
#include <osg/DisplaySettings>
#include <osg/MatrixTransform>
#include <osg/LineWidth>
#include <osgDB/ReadFile>
#include <osgViewer/CompositeViewer>
#include <osgGA/TrackballManipulator>


# Given a Camera, create a wireframe representation of its
# view frustum. Create a default representation if camera==NULL.
def makeFrustumFromCamera(camera):
    
    # Projection and ModelView matrices
    proj = osg.Matrixd()
    mv = osg.Matrixd()
    if camera :
        proj = camera.getProjectionMatrix()
        mv = camera.getViewMatrix()
    else:
        # Create some kind of reasonable default Projection matrix.
        proj.makePerspective( 30., 1., 1., 10. )
        # leave mv as identity

    # Get near and far from the Projection matrix.
    near = proj(3,2) / (proj(2,2)-1.0)
    far = proj(3,2) / (1.0+proj(2,2))

    # Get the sides of the near plane.
    nLeft = near * (proj(2,0)-1.0) / proj(0,0)
    nRight = near * (1.0+proj(2,0)) / proj(0,0)
    nTop = near * (1.0+proj(2,1)) / proj(1,1)
    nBottom = near * (proj(2,1)-1.0) / proj(1,1)

    # Get the sides of the far plane.
    fLeft = far * (proj(2,0)-1.0) / proj(0,0)
    fRight = far * (1.0+proj(2,0)) / proj(0,0)
    fTop = far * (1.0+proj(2,1)) / proj(1,1)
    fBottom = far * (proj(2,1)-1.0) / proj(1,1)

    # Our vertex array needs only 9 vertices: The origin, and the
    # eight corners of the near and far planes.
    v = osg.Vec3Array()
    v.resize( 9 )
    (*v)[0].set( 0., 0., 0. )
    (*v)[1].set( nLeft, nBottom, -near )
    (*v)[2].set( nRight, nBottom, -near )
    (*v)[3].set( nRight, nTop, -near )
    (*v)[4].set( nLeft, nTop, -near )
    (*v)[5].set( fLeft, fBottom, -far )
    (*v)[6].set( fRight, fBottom, -far )
    (*v)[7].set( fRight, fTop, -far )
    (*v)[8].set( fLeft, fTop, -far )

    geom = osg.Geometry()
    geom.setUseDisplayList( False )
    geom.setVertexArray( v )

    c = osg.Vec4Array()
    c.push_back( osg.Vec4( 1., 1., 1., 1. ) )
    geom.setColorArray( c, osg.Array.BIND_OVERALL )

    GLushort idxLines[8] = 
        0, 5, 0, 6, 0, 7, 0, 8 
    GLushort idxLoops0[4] = 
        1, 2, 3, 4 
    GLushort idxLoops1[4] = 
        5, 6, 7, 8 
    geom.addPrimitiveSet( osg.DrawElementsUShort( osg.PrimitiveSet.LINES, 8, idxLines ) )
    geom.addPrimitiveSet( osg.DrawElementsUShort( osg.PrimitiveSet.LINE_LOOP, 4, idxLoops0 ) )
    geom.addPrimitiveSet( osg.DrawElementsUShort( osg.PrimitiveSet.LINE_LOOP, 4, idxLoops1 ) )

    geode = osg.Geode()
    geode.addDrawable( geom )

    geode.getOrCreateStateSet().setMode( GL_LIGHTING, osg.StateAttribute.OFF | osg.StateAttribute.PROTECTED )


    # Create parent MatrixTransform to transform the view volume by
    # the inverse ModelView matrix.
    mt = osg.MatrixTransform()
    mt.setMatrix( osg.Matrixd.inverse( mv ) )
    mt.addChild( geode )

    return mt


def main(argv):


    
    arguments = osg.ArgumentParser( argc, argv )

     root = osg.Group()

    # Child 0: We'll replace this every frame with an updated representation
    #   of the view frustum.
    root.addChild( makeFrustumFromCamera( NULL ) )

     scene = osg.Node()
    scene = osgDB.readNodeFiles( arguments )
    if  not scene :
        # User didn't specify anything, or file(s) didn't exist.
        # Try to load the cow...
        osg.notify( osg.WARN ), arguments.getApplicationName(), ": Could not find specified files. Trying \"cow.osgt\" instead."
        if   not (scene = osgDB.readNodeFile( str( "cow.osgt" ) ) )  :
            osg.notify( osg.FATAL ), arguments.getApplicationName(), ": No data loaded."
            return 1
    root.addChild( scene )


    viewer = osgViewer.CompositeViewer( arguments )
    # Turn on FSAA, makes the lines look better.
    osg.DisplaySettings.instance().setNumMultiSamples( 4 )

    # Create View 0 -- Just the loaded model.
        view = osgViewer.View()
        viewer.addView( view )

        view.setUpViewInWindow( 10, 10, 640, 480 )
        view.setSceneData( scene )
        view.setCameraManipulator( osgGA.TrackballManipulator )()

    # Create view 1 -- Contains the loaded moel, as well as a wireframe frustum derived from View 0's Camera.
        view = osgViewer.View()
        viewer.addView( view )

        view.setUpViewInWindow( 10, 510, 640, 480 )
        view.setSceneData( root )
        view.setCameraManipulator( osgGA.TrackballManipulator )()

    while  not viewer.done() :
        # Update the wireframe frustum
        root.removeChild( 0, 1 )
        root.insertChild( 0, makeFrustumFromCamera(
                viewer.getView( 0 ).getCamera() ) )

        viewer.frame()
    return 0



if __name__ == "__main__":
    main(sys.argv)
