#include "../default.h"

// TODO wrap more classes
#include <osg/Geometry>
#include <osg/Uniform>
#include <osg/Geode>
#include <osg/View>

#include <osg/Quat> // OK
#include <osg/Vec2f> // OK
#include <osg/Object> // OK
#include <osg/CopyOp> // OK
#include <osg/UserDataContainer> // OK
#include <osg/Node> // OK
#include <osg/StateSet> // OK
#include <osg/Notify> // OK
#include <osg/Stats> // OK excluded getAttribute methods
#include <osg/Referenced> // OK excluded copy methods
#include <osg/Observer> // OK
#include <osg/DeleteHandler> // OK
#include <osg/Export> // OK
#include <osg/Version> // OK

// Disambiguate aliases for file names
template class std::vector<osg::Group*>;
template class std::vector<osg::Object*>;
template class std::vector<osg::Node*>;
template class std::vector<osg::StateSet*>;
// template class std::map<std::pair<osg::StateAttribute::Type, unsigned int>, std::pair<osg::ref_ptr<osg::StateAttribute>, unsigned int>, std::less<std::pair<osg::StateAttribute::Type, unsigned int> >, std::allocator<std::pair<std::pair<osg::StateAttribute::Type, unsigned int> const, std::pair<osg::ref_ptr<osg::StateAttribute>, unsigned int> > > >;
namespace pyplusplus { namespace aliases {
    typedef std::vector<osg::Group*> std_vector_osgGroupPtr;
    typedef std::vector<osg::Node*> std_vector_osgNodePtr;
    typedef std::vector<osg::Object*> std_vector_osgObjectPtr;
    typedef std::vector<osg::StateSet*> std_vector_osgStateSetPtr;
    typedef std::map<std::pair<osg::StateAttribute::Type, unsigned int>, std::pair<osg::ref_ptr<osg::StateAttribute>, unsigned int>, std::less<std::pair<osg::StateAttribute::Type, unsigned int> >, std::allocator<std::pair<std::pair<osg::StateAttribute::Type, unsigned int> const, std::pair<osg::ref_ptr<osg::StateAttribute>, unsigned int> > > > longClassName1;
}}

// #include <osg/Matrixf>
