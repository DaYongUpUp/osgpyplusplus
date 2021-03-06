// This file has been generated by Py++.

#include "boost/python.hpp"

#include "indexing_suite/value_traits.hpp"

#include "indexing_suite/container_suite.hpp"

#include "indexing_suite/map.hpp"

#include "wrap_osgfx.h"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgfx/generated_code/_osgfx_free_functions.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgfx/generated_code/anisotropiclighting.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgfx/generated_code/bumpmapping.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgfx/generated_code/cartoon.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgfx/generated_code/effect.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgfx/generated_code/effectmap.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgfx/generated_code/multitexturecontrol.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgfx/generated_code/outline.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgfx/generated_code/registry.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgfx/generated_code/scribe.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgfx/generated_code/specularhighlights.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgfx/generated_code/technique.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgfx/generated_code/validator.pypp.hpp"

namespace bp = boost::python;

BOOST_PYTHON_MODULE(_osgFX){
    register_EffectMap_class();

    register_Effect_class();

    register_AnisotropicLighting_class();

    register_BumpMapping_class();

    register_Cartoon_class();

    register_MultiTextureControl_class();

    register_Outline_class();

    register_Registry_class();

    register_Scribe_class();

    register_SpecularHighlights_class();

    register_Technique_class();

    register_Validator_class();

    register_free_functions();
}

