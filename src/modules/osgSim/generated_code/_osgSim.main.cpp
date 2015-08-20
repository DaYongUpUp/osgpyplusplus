// This file has been generated by Py++.

#include "boost/python.hpp"

#include "indexing_suite/value_traits.hpp"

#include "indexing_suite/container_suite.hpp"

#include "indexing_suite/vector.hpp"

#include "wrap_osgsim.h"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/azimelevationsector.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/azimrange.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/azimsector.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/blinksequence.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/colorrange.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/conesector.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/databasecachereadcallback.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/directionalsector.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/doftransform.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/elevationrange.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/elevationsector.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/elevationslice.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/heightaboveterrain.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/impostor.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/impostorsprite.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/impostorspritemanager.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/insertimpostorsvisitor.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/lightpoint.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/lightpointlist.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/lightpointnode.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/lightpointsystem.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/lineofsight.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/multiswitch.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/objectrecorddata.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/overlaynode.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/scalarbar.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/scalarstocolors.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/sector.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/sequencegroup.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/shapeattribute.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/shapeattributelist.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/spheresegment.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/vector_less__osg_scope_ref_ptr_less_osgsim_scope_impostorsprite_greater___greater_.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/vertexlist.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgsim/generated_code/visibilitygroup.pypp.hpp"

namespace bp = boost::python;

BOOST_PYTHON_MODULE(_osgSim){
    register_LightPointList_class();

    register_vector_less__osg_scope_ref_ptr_less_osgSim_scope_ImpostorSprite_greater___greater__class();

    register_VertexList_class();

    register_AzimRange_class();

    register_ElevationRange_class();

    register_Sector_class();

    register_AzimElevationSector_class();

    register_AzimSector_class();

    register_BlinkSequence_class();

    register_ScalarsToColors_class();

    register_ColorRange_class();

    register_ConeSector_class();

    register_DOFTransform_class();

    register_DatabaseCacheReadCallback_class();

    register_DirectionalSector_class();

    register_ElevationSector_class();

    register_ElevationSlice_class();

    register_HeightAboveTerrain_class();

    register_Impostor_class();

    register_ImpostorSprite_class();

    register_ImpostorSpriteManager_class();

    register_InsertImpostorsVisitor_class();

    register_LightPoint_class();

    register_LightPointNode_class();

    register_LightPointSystem_class();

    register_LineOfSight_class();

    register_MultiSwitch_class();

    register_ObjectRecordData_class();

    register_OverlayNode_class();

    register_ScalarBar_class();

    register_SequenceGroup_class();

    register_ShapeAttribute_class();

    register_ShapeAttributeList_class();

    register_SphereSegment_class();

    register_VisibilityGroup_class();
}
