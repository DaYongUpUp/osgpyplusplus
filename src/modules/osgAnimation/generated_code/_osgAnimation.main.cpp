// This file has been generated by Py++.

#include "boost/python.hpp"

#include "__call_policies.pypp.hpp"

#include "__convenience.pypp.hpp"

#include "indexing_suite/value_traits.hpp"

#include "indexing_suite/container_suite.hpp"

#include "indexing_suite/vector.hpp"

#include "indexing_suite/map.hpp"

#include "wrap_osganimation.h"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/action.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/actionanimation.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/actionblendin.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/actionblendout.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/actionlayers.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/actionstripanimation.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/actionvisitor.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/animation.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/animationmanagerbase.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/animationupdatecallback_less__osg_scope_nodecallback__greater_.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/animationupdatecallback_less__osg_scope_stateattributecallback__greater_.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/animationupdatecallbackbase.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/basicanimationmanager.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/bone.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/bonemap.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/bonemapvisitor.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/boneweightlist.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/channel.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/clearactionvisitor.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/compositemotion.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/inbackfunction.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/inbouncefunction.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/incircfunction.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/incubicfunction.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/inelasticfunction.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/inexpofunction.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/inoutbackfunction.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/inoutbouncefunction.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/inoutcircfunction.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/inoutcubicfunction.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/inoutelasticfunction.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/inoutexpofunction.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/inoutquadfunction.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/inoutquartfunction.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/inoutsinefunction.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/inquadfunction.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/inquartfunction.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/insinefunction.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/keyframe.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/keyframecontainer.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/linearfunction.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/linkvisitor.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/motion.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/outbackfunction.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/outbouncefunction.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/outcircfunction.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/outcubicfunction.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/outelasticfunction.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/outexpofunction.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/outquadfunction.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/outquartfunction.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/outsinefunction.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/riggeometry.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/rigtransform.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/rigtransformhardware.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/rigtransformsoftware.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/runaction.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/sampler.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/skeleton.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/stackedmatrixelement.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/stackedquaternionelement.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/stackedrotateaxiselement.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/stackedscaleelement.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/stackedtransform.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/stackedtransformelement.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/stackedtranslateelement.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/statsactionvisitor.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/statshandler.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/target.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/templatetarget_less__float__greater_.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/templatetarget_less__osg_scope_matrixf__greater_.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/templatetarget_less__osg_scope_quat__greater_.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/timeline.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/timelineanimationmanager.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/uniqvertexsettobonesetlist.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/updateactionvisitor.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/updatebone.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/updatematerial.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/updatematrixtransform.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/vec3arraypacked.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/vec3packed.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/vec3packedkeyframecontainer.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/vector_less__int__greater_.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/vector_less__osg_scope_ref_ptr_less_osganimation_scope_animation_greater___greater_.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/vector_less__osg_scope_ref_ptr_less_osganimation_scope_channel_greater___greater_.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/vector_less__osg_scope_ref_ptr_less_osganimation_scope_motion_greater___greater_.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/vector_less__osganimation_scope_vec3packed__greater_.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/vector_less__osganimation_scope_vertexinfluenceset_scope_boneweight__greater_.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/vector_less__std_scope_pair_less_unsigned_int_comma__osg_scope_ref_ptr_less_osganimation_scope_action_greater___greater___greater_.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/vertexindextoboneweightmap.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/vertexinfluence.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/vertexinfluencemap.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osganimation/generated_code/vertexinfluenceset.pypp.hpp"

namespace bp = boost::python;

BOOST_PYTHON_MODULE(_osgAnimation){
    register_vector_less__std_scope_pair_less_unsigned_int_comma__osg_scope_ref_ptr_less_osgAnimation_scope_Action_greater___greater___greater__class();

    register_UniqVertexSetToBoneSetList_class();

    register_vector_less__osgAnimation_scope_VertexInfluenceSet_scope_BoneWeight__greater__class();

    register_vector_less__osgAnimation_scope_Vec3Packed__greater__class();

    register_BoneWeightList_class();

    register_vector_less__osg_scope_ref_ptr_less_osgAnimation_scope_Motion_greater___greater__class();

    register_vector_less__osg_scope_ref_ptr_less_osgAnimation_scope_Channel_greater___greater__class();

    register_vector_less__osg_scope_ref_ptr_less_osgAnimation_scope_Animation_greater___greater__class();

    register_vector_less__int__greater__class();

    register_BoneMap_class();

    register_ActionLayers_class();

    register_VertexIndexToBoneWeightMap_class();

    register_Action_class();

    register_ActionAnimation_class();

    register_ActionBlendIn_class();

    register_ActionBlendOut_class();

    register_ActionStripAnimation_class();

    register_ActionVisitor_class();

    register_Animation_class();

    register_AnimationManagerBase_class();

    register_AnimationUpdateCallbackBase_class();

    register_AnimationUpdateCallback_less__osg_scope_NodeCallback__greater__class();

    register_AnimationUpdateCallback_less__osg_scope_StateAttributeCallback__greater__class();

    register_BasicAnimationManager_class();

    register_Bone_class();

    register_BoneMapVisitor_class();

    register_Channel_class();

    register_ClearActionVisitor_class();

    register_Motion_class();

    register_CompositeMotion_class();

    register_InBackFunction_class();

    register_InBounceFunction_class();

    register_InCircFunction_class();

    register_InCubicFunction_class();

    register_InElasticFunction_class();

    register_InExpoFunction_class();

    register_InOutBackFunction_class();

    register_InOutBounceFunction_class();

    register_InOutCircFunction_class();

    register_InOutCubicFunction_class();

    register_InOutElasticFunction_class();

    register_InOutExpoFunction_class();

    register_InOutQuadFunction_class();

    register_InOutQuartFunction_class();

    register_InOutSineFunction_class();

    register_InQuadFunction_class();

    register_InQuartFunction_class();

    register_InSineFunction_class();

    register_Keyframe_class();

    register_KeyframeContainer_class();

    register_LinearFunction_class();

    register_LinkVisitor_class();

    register_OutBackFunction_class();

    register_OutBounceFunction_class();

    register_OutCircFunction_class();

    register_OutCubicFunction_class();

    register_OutElasticFunction_class();

    register_OutExpoFunction_class();

    register_OutQuadFunction_class();

    register_OutQuartFunction_class();

    register_OutSineFunction_class();

    register_RigGeometry_class();

    register_RigTransform_class();

    register_RigTransformHardware_class();

    register_RigTransformSoftware_class();

    register_RunAction_class();

    register_Sampler_class();

    register_Skeleton_class();

    register_StackedTransformElement_class();

    register_StackedMatrixElement_class();

    register_StackedQuaternionElement_class();

    register_StackedRotateAxisElement_class();

    register_StackedScaleElement_class();

    register_StackedTransform_class();

    register_StackedTranslateElement_class();

    register_UpdateActionVisitor_class();

    register_StatsActionVisitor_class();

    register_StatsHandler_class();

    register_Target_class();

    register_Vec3PackedKeyframeContainer_class();

    register_TemplateTarget_less__float__greater__class();

    register_TemplateTarget_less__osg_scope_Matrixf__greater__class();

    register_TemplateTarget_less__osg_scope_Quat__greater__class();

    register_Timeline_class();

    register_TimelineAnimationManager_class();

    register_UpdateMatrixTransform_class();

    register_UpdateBone_class();

    register_UpdateMaterial_class();

    register_Vec3ArrayPacked_class();

    register_Vec3Packed_class();

    register_VertexInfluence_class();

    register_VertexInfluenceMap_class();

    register_VertexInfluenceSet_class();
}
