// This file has been generated by Py++.

#ifndef _LineSegmentIntersection__value_traits_pypp_hpp_hpp__pyplusplus_wrapper
#define _LineSegmentIntersection__value_traits_pypp_hpp_hpp__pyplusplus_wrapper

namespace boost { namespace python { namespace indexing {

template<>
struct value_traits< osg::KdTree::LineSegmentIntersection >{

    static bool const equality_comparable = false;
    

    static bool const less_than_comparable = true;
    typedef std::less< osg::KdTree::LineSegmentIntersection > less;

    template<typename PythonClass, typename Policy>
    static void visit_container_class(PythonClass &, Policy const &){
        
    }

};

}/*indexing*/ } /*python*/ } /*boost*/

#endif//_LineSegmentIntersection__value_traits_pypp_hpp_hpp__pyplusplus_wrapper