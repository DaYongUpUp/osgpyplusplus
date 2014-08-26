// This file has been generated by Py++.

#include "boost/python.hpp"

#include "boost/python/suite/indexing/vector_indexing_suite.hpp"

#include "boost/python/suite/indexing/map_indexing_suite.hpp"

#include "wrap_osgutil.h"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgutil/generated_code/baseoptimizervisitor.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgutil/generated_code/cullvisitor.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgutil/generated_code/globjectsoperation.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgutil/generated_code/globjectsvisitor.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgutil/generated_code/incrementalcompileoperation.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgutil/generated_code/lessdepthsortfunctor.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgutil/generated_code/optimizer.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgutil/generated_code/osgutil_free_functions.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgutil/generated_code/positionalstatecontainer.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgutil/generated_code/renderbin.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgutil/generated_code/renderbinlist.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgutil/generated_code/renderleaf.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgutil/generated_code/renderleaflist.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgutil/generated_code/renderstage.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgutil/generated_code/sceneview.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgutil/generated_code/stategraph.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgutil/generated_code/statetocompile.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgutil/generated_code/std_vector_pair_stateattribute_refmatrixd.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgutil/generated_code/texunitattrmatrixlistmap.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgutil/generated_code/updatevisitor.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgutil/generated_code/vector_less__osg_scope_ref_ptr_less_osgutil_scope_renderleaf_greater___greater_.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgutil/generated_code/vector_less__osgutil_scope_stategraph_ptr___greater_.pypp.hpp"

namespace bp = boost::python;

BOOST_PYTHON_MODULE(osgUtil){
    register_std_vector_pair_StateAttribute_RefMatrixd_class();

    register_vector_less__osgUtil_scope_StateGraph_ptr___greater__class();

    register_RenderLeafList_class();

    register_vector_less__osg_scope_ref_ptr_less_osgUtil_scope_RenderLeaf_greater___greater__class();

    register_TexUnitAttrMatrixListMap_class();

    register_RenderBinList_class();

    register_BaseOptimizerVisitor_class();

    register_CullVisitor_class();

    register_GLObjectsOperation_class();

    register_GLObjectsVisitor_class();

    register_IncrementalCompileOperation_class();

    register_LessDepthSortFunctor_class();

    register_Optimizer_class();

    register_PositionalStateContainer_class();

    register_RenderBin_class();

    register_RenderLeaf_class();

    register_RenderStage_class();

    register_SceneView_class();

    register_StateGraph_class();

    register_StateToCompile_class();

    register_UpdateVisitor_class();

    register_free_functions();
}

