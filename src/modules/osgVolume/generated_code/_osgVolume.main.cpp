// This file has been generated by Py++.

#include "boost/python.hpp"

#include "__call_policies.pypp.hpp"

#include "__convenience.pypp.hpp"

#include "indexing_suite/container_suite.hpp"

#include "indexing_suite/vector.hpp"

#include "wrap_osgvolume.h"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgvolume/generated_code/_osgvolume_free_functions.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgvolume/generated_code/alphafuncproperty.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgvolume/generated_code/collectpropertiesvisitor.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgvolume/generated_code/compositelayer.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgvolume/generated_code/compositeproperty.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgvolume/generated_code/fixedfunctiontechnique.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgvolume/generated_code/imagedetails.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgvolume/generated_code/imagelayer.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgvolume/generated_code/isosurfaceproperty.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgvolume/generated_code/layer.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgvolume/generated_code/lightingproperty.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgvolume/generated_code/locator.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgvolume/generated_code/locatorcallbacks.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgvolume/generated_code/maximumintensityprojectionproperty.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgvolume/generated_code/property.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgvolume/generated_code/propertyadjustmentcallback.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgvolume/generated_code/propertyvisitor.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgvolume/generated_code/raytracedtechnique.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgvolume/generated_code/sampledensityproperty.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgvolume/generated_code/sampledensitywhenmovingproperty.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgvolume/generated_code/scalarproperty.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgvolume/generated_code/switchproperty.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgvolume/generated_code/tileid.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgvolume/generated_code/transferfunctionproperty.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgvolume/generated_code/transparencyproperty.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgvolume/generated_code/volume.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgvolume/generated_code/volumetechnique.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgvolume/generated_code/volumetile.pypp.hpp"

namespace bp = boost::python;

BOOST_PYTHON_MODULE(_osgVolume){
    register_LocatorCallbacks_class();

    register_Property_class();

    register_ScalarProperty_class();

    register_AlphaFuncProperty_class();

    register_PropertyVisitor_class();

    register_CollectPropertiesVisitor_class();

    register_Layer_class();

    register_CompositeLayer_class();

    register_CompositeProperty_class();

    register_VolumeTechnique_class();

    register_FixedFunctionTechnique_class();

    register_ImageDetails_class();

    register_ImageLayer_class();

    register_IsoSurfaceProperty_class();

    register_LightingProperty_class();

    register_Locator_class();

    register_MaximumIntensityProjectionProperty_class();

    register_PropertyAdjustmentCallback_class();

    register_RayTracedTechnique_class();

    register_SampleDensityProperty_class();

    register_SampleDensityWhenMovingProperty_class();

    register_SwitchProperty_class();

    register_TileID_class();

    register_TransferFunctionProperty_class();

    register_TransparencyProperty_class();

    register_Volume_class();

    register_VolumeTile_class();

    register_free_functions();
}

