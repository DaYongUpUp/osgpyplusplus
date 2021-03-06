// This file has been generated by Py++.

#ifndef _VISBoneWeight__value_traits_pypp_hpp_hpp__pyplusplus_wrapper
#define _VISBoneWeight__value_traits_pypp_hpp_hpp__pyplusplus_wrapper

namespace boost { namespace python { namespace indexing {

template<>
struct value_traits< osgAnimation::VertexInfluenceSet::BoneWeight >{

    static bool const equality_comparable = true;
    typedef std::equal_to< osgAnimation::VertexInfluenceSet::BoneWeight > equal_to;

    static bool const less_than_comparable = false;
    

    template<typename PythonClass, typename Policy>
    static void visit_container_class(PythonClass &, Policy const &){
        
    }

};

}/*indexing*/ } /*python*/ } /*boost*/

#endif//_VISBoneWeight__value_traits_pypp_hpp_hpp__pyplusplus_wrapper
