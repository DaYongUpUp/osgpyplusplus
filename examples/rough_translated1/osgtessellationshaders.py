#!/bin/env python

# Automatically translated python version of 
# OpenSceneGraph example program "osgtessellationshaders"
# !!! This program will need manual tuning before it will work. !!!

import sys

from osgpypp import osg
from osgpypp import osgGA
from osgpypp import osgViewer


# Translated from file 'osgtessellationshaders.cpp'

# A demonstration of Tessellation Shaders in OpenScenegraph.
# * Original code by Philip Rideout
# * Adapted to OpenScenegraph by John Kaniarz
# 

#include <osg/Program>
#include <osg/PatchParameter>
#include <osg/ShapeDrawable>
#include <osgViewer/Viewer>
#include <osgViewer/ViewerEventHandlers>
#include <osgGA/TrackballManipulator>

static  char* vertSource = 
"#version 400\n"
"in vec4 osg_Vertex\n"
"out vec3 vPosition\n"
"void main()\n"
"    vPosition = osg_Vertex.xyz\n"
"\n"

static  char* tessControlSource = 
"#version 400\n"
"layout(vertices = 3) out\n"
"in vec3 vPosition[]\n"
"out vec3 tcPosition[]\n"
"uniform float TessLevelInner\n"
"uniform float TessLevelOuter\n"
"#define ID gl_InvocationID\n"
"void main()\n"
"    tcPosition[ID] = vPosition[ID]\n"
"    if ID == 0 : \n"
"        gl_TessLevelInner[0] = TessLevelInner\n"
"        gl_TessLevelOuter[0] = TessLevelOuter\n"
"        gl_TessLevelOuter[1] = TessLevelOuter\n"
"        gl_TessLevelOuter[2] = TessLevelOuter\n"
"    \n"
"\n"

static  char* tessEvalSource = 
"#version 400\n"
"layout(triangles, equal_spacing, cw) in\n"
"in vec3 tcPosition[]\n"
"out vec3 tePosition\n"
"out vec3 tePatchDistance\n"
"uniform mat4 osg_ProjectionMatrix\n"
"uniform mat4 osg_ModelViewMatrix\n"
"void main()\n"
"    vec3 p0 = gl_TessCoord.x * tcPosition[0]\n"
"    vec3 p1 = gl_TessCoord.y * tcPosition[1]\n"
"    vec3 p2 = gl_TessCoord.z * tcPosition[2]\n"
"    tePatchDistance = gl_TessCoord\n"
"    tePosition = normalize(p0 + p1 + p2)\n"
"    gl_Position = osg_ProjectionMatrix * osg_ModelViewMatrix * vec4(tePosition, 1)\n"
"\n"

static  char* geomSource = 
"#version 400\n"
"uniform mat4 osg_ModelViewMatrix\n"
"uniform mat3 osg_NormalMatrix\n"
"layout(triangles) in\n"
"layout(triangle_strip, max_vertices = 3) out\n"
"in vec3 tePosition[3]\n"
"in vec3 tePatchDistance[3]\n"
"out vec3 gFacetNormal\n"
"out vec3 gPatchDistance\n"
"out vec3 gTriDistance\n"
"out vec4 gColor\n"
"void main()\n"
"    vec3 A = tePosition[2] - tePosition[0]\n"
"    vec3 B = tePosition[1] - tePosition[0]\n"
"    gFacetNormal = osg_NormalMatrix * normalize(cross(A, B))\n"
"    gPatchDistance = tePatchDistance[0]\n"
"    gTriDistance = vec3(1, 0, 0)\n"
"    gColor = osg_ModelViewMatrix[0]\n"
"    gl_Position = gl_in[0].gl_Position EmitVertex()\n"
"    gPatchDistance = tePatchDistance[1]\n"
"    gTriDistance = vec3(0, 1, 0)\n"
"    gColor = osg_ModelViewMatrix[1]\n"
"    gl_Position = gl_in[1].gl_Position EmitVertex()\n"
"    gPatchDistance = tePatchDistance[2]\n"
"    gTriDistance = vec3(0, 0, 1)\n"
"    gColor = osg_ModelViewMatrix[2]\n"
"    gl_Position = gl_in[2].gl_Position EmitVertex()\n"
"    EndPrimitive()\n"
"\n"

static  char* fragSource = 
"#version 400\n"
"out vec4 FragColor\n"
"in vec3 gFacetNormal\n"
"in vec3 gTriDistance\n"
"in vec3 gPatchDistance\n"
"in vec4 gColor\n"
"in float gPrimitive\n"
"uniform vec3 LightPosition\n"
"uniform vec3 DiffuseMaterial\n"
"uniform vec3 AmbientMaterial\n"
"float amplify(float d, float scale, float offset)\n"
"    d = scale * d + offset\n"
"    d = clamp(d, 0, 1)\n"
"    d = 1 - exp2(-2*d*d)\n"
"    return d\n"
"\n"
"void main()\n"
"    vec3 N = normalize(gFacetNormal)\n"
"    vec3 L = LightPosition\n"
"    float df = abs(dot(N, L))\n"
"    vec3 color = AmbientMaterial + df * DiffuseMaterial\n"
"    float d1 = min(min(gTriDistance.x, gTriDistance.y), gTriDistance.z)\n"
"    float d2 = min(min(gPatchDistance.x, gPatchDistance.y), gPatchDistance.z)\n"
"    color = amplify(d1, 40, -0.5) * amplify(d2, 60, -0.5) * color\n"
"    FragColor = vec4(color, 1.0)\n"
"\n"


def CreateIcosahedron(program):

    
    geode = osg.Geode()
    geometry = osg.Geometry()
     unsigned int Faces[] = 
        2, 1, 0,
        3, 2, 0,
        4, 3, 0,
        5, 4, 0,
        1, 5, 0,

        11, 6,  7,
        11, 7,  8,
        11, 8,  9,
        11, 9,  10,
        11, 10, 6,

        1, 2, 6,
        2, 3, 7,
        3, 4, 8,
        4, 5, 9,
        5, 1, 10,

        2,  7, 6,
        3,  8, 7,
        4,  9, 8,
        5, 10, 9,
        1, 6, 10 
    IndexCount = sizeof(Faces) / sizeof(Faces[0])
     float Verts[] = 
         0.000,  0.000,  1.000,
         0.894,  0.000,  0.447,
         0.276,  0.851,  0.447,
        -0.724,  0.526,  0.447,
        -0.724, -0.526,  0.447,
         0.276, -0.851,  0.447,
         0.724,  0.526, -0.447,
        -0.276,  0.851, -0.447,
        -0.894,  0.000, -0.447,
        -0.276, -0.851, -0.447,
         0.724, -0.526, -0.447,
         0.000,  0.000, -1.000 

    VertexCount = sizeof(Verts)/sizeof(float)
    vertices = osg.Vec3Array()
    for(int i=0i<VertexCounti+=3)
        vertices.push_back(osg.Vec3(Verts[i],Verts[i+1],Verts[i+2]))
    geometry.setVertexArray(vertices)
    geometry.addPrimitiveSet(osg.DrawElementsUInt(osg.PrimitiveSet.PATCHES,IndexCount,Faces))

    geode.addDrawable(geometry)
    return geode
def createProgram():
    
    program = osg.Program()
    program.addShader(osg.Shader(osg.Shader.VERTEX,vertSource))
    program.addShader(osg.Shader(osg.Shader.TESSCONTROL,tessControlSource))
    program.addShader(osg.Shader(osg.Shader.TESSEVALUATION,tessEvalSource))
    program.addShader(osg.Shader(osg.Shader.GEOMETRY,geomSource))
    program.addShader(osg.Shader(osg.Shader.FRAGMENT,fragSource))
    program.setParameter(GL_GEOMETRY_VERTICES_OUT_EXT, 3)
    program.setParameter(GL_GEOMETRY_INPUT_TYPE_EXT, GL_TRIANGLES)
    program.setParameter(GL_GEOMETRY_OUTPUT_TYPE_EXT, GL_TRIANGLE_STRIP)
    return program

tessInner = 1.0
tessOuter = 1.0
tessInnerU = osg.Uniform("TessLevelInner",tessInner)
tessOuterU = osg.Uniform("TessLevelOuter",tessOuter)

class KeyboardEventHandler (osgGA.GUIEventHandler) :
    KeyboardEventHandler():osgGA.GUIEventHandler()
    def handle(ea, gaa):
        
        if ea.getEventType()==osgGA.GUIEventAdapter.KEYDOWN :
            switch (ea.getKey())
                case osgGA.GUIEventAdapter.KEY_Up:
                    tessOuter++
                    tessOuterU.set(tessOuter)
                    return True
                case osgGA.GUIEventAdapter.KEY_Down:
                    tessOuter--
                    tessOuter=std.max(1.0,tessOuter)
                    tessOuterU.set(tessOuter)
                    return True
                case osgGA.GUIEventAdapter.KEY_Left:
                    tessInner--
                    tessInner=std.max(1.0,tessInner)
                    tessInnerU.set(tessInner)
                    return True
                case osgGA.GUIEventAdapter.KEY_Right:
                    tessInner++
                    tessInnerU.set(tessInner)
                    return True
        return osgGA.GUIEventHandler.handle(ea,gaa)


int main(int argc, char* argv[])
    viewer = osgViewer.Viewer()
    viewer.setUpViewInWindow(100,100,800,600)
    program = createProgram()
    geode = CreateIcosahedron(program)
    *state = osg.StateSet()
    state = geode.getOrCreateStateSet()
    state.addUniform(osg.Uniform("AmbientMaterial",osg.Vec3(0.04, 0.04, 0.04)))
    state.addUniform(osg.Uniform("DiffuseMaterial",osg.Vec3(0.0, 0.75, 0.75)))
    state.addUniform(osg.Uniform("LightPosition",osg.Vec3(0.25, 0.25, 1.0)))
    state.addUniform(tessInnerU)
    state.addUniform(tessOuterU)
    state.setAttribute(osg.PatchParameter(3))
    state.setAttribute(program)
    
    # switch on the uniforms that track the modelview and projection matrices
    windows = osgViewer.Viewer.Windows()
    viewer.getWindows(windows)
    for(osgViewer.Viewer.Windows.iterator itr = windows.begin()
        not = windows.end()
        ++itr)
        s = (*itr).getState()
        s.setUseModelViewAndProjectionUniforms(True)
        s.setUseVertexAttributeAliasing(True)
    
    viewer.addEventHandler(KeyboardEventHandler())
    viewer.setSceneData(geode)
    return viewer.run()



if __name__ == "__main__":
    main(sys.argv)
