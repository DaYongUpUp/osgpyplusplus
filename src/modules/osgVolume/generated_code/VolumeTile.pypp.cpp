// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgvolume.h"
#include "wrap_referenced.h"
#include "volumetile.pypp.hpp"

namespace bp = boost::python;

struct VolumeTile_wrapper : osgVolume::VolumeTile, bp::wrapper< osgVolume::VolumeTile > {

    VolumeTile_wrapper( )
    : osgVolume::VolumeTile( )
      , bp::wrapper< osgVolume::VolumeTile >(){
        // null constructor
    
    }

    virtual void accept( ::osg::NodeVisitor & nv ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(nv) );
        else{
            this->osgVolume::VolumeTile::accept( boost::ref(nv) );
        }
    }
    
    void default_accept( ::osg::NodeVisitor & nv ) {
        osgVolume::VolumeTile::accept( boost::ref(nv) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgVolume::VolumeTile::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgVolume::VolumeTile::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgVolume::VolumeTile::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgVolume::VolumeTile::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgVolume::VolumeTile::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgVolume::VolumeTile::cloneType( );
    }

    virtual ::osg::BoundingSphere computeBound(  ) const  {
        if( bp::override func_computeBound = this->get_override( "computeBound" ) )
            return func_computeBound(  );
        else{
            return this->osgVolume::VolumeTile::computeBound(  );
        }
    }
    
    ::osg::BoundingSphere default_computeBound(  ) const  {
        return osgVolume::VolumeTile::computeBound( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgVolume::VolumeTile::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgVolume::VolumeTile::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgVolume::VolumeTile::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgVolume::VolumeTile::libraryName( );
    }

    virtual void traverse( ::osg::NodeVisitor & nv ) {
        if( bp::override func_traverse = this->get_override( "traverse" ) )
            func_traverse( boost::ref(nv) );
        else{
            this->osgVolume::VolumeTile::traverse( boost::ref(nv) );
        }
    }
    
    void default_traverse( ::osg::NodeVisitor & nv ) {
        osgVolume::VolumeTile::traverse( boost::ref(nv) );
    }

    virtual bool addChild( ::osg::Node * child ) {
        if( bp::override func_addChild = this->get_override( "addChild" ) )
            return func_addChild( boost::python::ptr(child) );
        else{
            return this->osg::Group::addChild( boost::python::ptr(child) );
        }
    }
    
    bool default_addChild( ::osg::Node * child ) {
        return osg::Group::addChild( boost::python::ptr(child) );
    }

    virtual ::osg::Camera * asCamera(  ) {
        if( bp::override func_asCamera = this->get_override( "asCamera" ) )
            return func_asCamera(  );
        else{
            return this->osg::Node::asCamera(  );
        }
    }
    
    ::osg::Camera * default_asCamera(  ) {
        return osg::Node::asCamera( );
    }

    virtual ::osg::Camera const * asCamera(  ) const  {
        if( bp::override func_asCamera = this->get_override( "asCamera" ) )
            return func_asCamera(  );
        else{
            return this->osg::Node::asCamera(  );
        }
    }
    
    ::osg::Camera const * default_asCamera(  ) const  {
        return osg::Node::asCamera( );
    }

    virtual ::osg::Geode * asGeode(  ) {
        if( bp::override func_asGeode = this->get_override( "asGeode" ) )
            return func_asGeode(  );
        else{
            return this->osg::Node::asGeode(  );
        }
    }
    
    ::osg::Geode * default_asGeode(  ) {
        return osg::Node::asGeode( );
    }

    virtual ::osg::Geode const * asGeode(  ) const  {
        if( bp::override func_asGeode = this->get_override( "asGeode" ) )
            return func_asGeode(  );
        else{
            return this->osg::Node::asGeode(  );
        }
    }
    
    ::osg::Geode const * default_asGeode(  ) const  {
        return osg::Node::asGeode( );
    }

    virtual ::osg::Group * asGroup(  ) {
        if( bp::override func_asGroup = this->get_override( "asGroup" ) )
            return func_asGroup(  );
        else{
            return this->osg::Group::asGroup(  );
        }
    }
    
    ::osg::Group * default_asGroup(  ) {
        return osg::Group::asGroup( );
    }

    virtual ::osg::Group const * asGroup(  ) const  {
        if( bp::override func_asGroup = this->get_override( "asGroup" ) )
            return func_asGroup(  );
        else{
            return this->osg::Group::asGroup(  );
        }
    }
    
    ::osg::Group const * default_asGroup(  ) const  {
        return osg::Group::asGroup( );
    }

    virtual ::osg::Switch * asSwitch(  ) {
        if( bp::override func_asSwitch = this->get_override( "asSwitch" ) )
            return func_asSwitch(  );
        else{
            return this->osg::Node::asSwitch(  );
        }
    }
    
    ::osg::Switch * default_asSwitch(  ) {
        return osg::Node::asSwitch( );
    }

    virtual ::osg::Switch const * asSwitch(  ) const  {
        if( bp::override func_asSwitch = this->get_override( "asSwitch" ) )
            return func_asSwitch(  );
        else{
            return this->osg::Node::asSwitch(  );
        }
    }
    
    ::osg::Switch const * default_asSwitch(  ) const  {
        return osg::Node::asSwitch( );
    }

    virtual ::osg::Transform * asTransform(  ) {
        if( bp::override func_asTransform = this->get_override( "asTransform" ) )
            return func_asTransform(  );
        else{
            return this->osg::Node::asTransform(  );
        }
    }
    
    ::osg::Transform * default_asTransform(  ) {
        return osg::Node::asTransform( );
    }

    virtual ::osg::Transform const * asTransform(  ) const  {
        if( bp::override func_asTransform = this->get_override( "asTransform" ) )
            return func_asTransform(  );
        else{
            return this->osg::Node::asTransform(  );
        }
    }
    
    ::osg::Transform const * default_asTransform(  ) const  {
        return osg::Node::asTransform( );
    }

    virtual void ascend( ::osg::NodeVisitor & nv ) {
        if( bp::override func_ascend = this->get_override( "ascend" ) )
            func_ascend( boost::ref(nv) );
        else{
            this->osg::Node::ascend( boost::ref(nv) );
        }
    }
    
    void default_ascend( ::osg::NodeVisitor & nv ) {
        osg::Node::ascend( boost::ref(nv) );
    }

    virtual void computeDataVariance(  ) {
        if( bp::override func_computeDataVariance = this->get_override( "computeDataVariance" ) )
            func_computeDataVariance(  );
        else{
            this->osg::Object::computeDataVariance(  );
        }
    }
    
    void default_computeDataVariance(  ) {
        osg::Object::computeDataVariance( );
    }

    virtual ::osg::Referenced * getUserData(  ) {
        if( bp::override func_getUserData = this->get_override( "getUserData" ) )
            return func_getUserData(  );
        else{
            return this->osg::Object::getUserData(  );
        }
    }
    
    ::osg::Referenced * default_getUserData(  ) {
        return osg::Object::getUserData( );
    }

    virtual ::osg::Referenced const * getUserData(  ) const  {
        if( bp::override func_getUserData = this->get_override( "getUserData" ) )
            return func_getUserData(  );
        else{
            return this->osg::Object::getUserData(  );
        }
    }
    
    ::osg::Referenced const * default_getUserData(  ) const  {
        return osg::Object::getUserData( );
    }

    virtual bool insertChild( unsigned int index, ::osg::Node * child ) {
        if( bp::override func_insertChild = this->get_override( "insertChild" ) )
            return func_insertChild( index, boost::python::ptr(child) );
        else{
            return this->osg::Group::insertChild( index, boost::python::ptr(child) );
        }
    }
    
    bool default_insertChild( unsigned int index, ::osg::Node * child ) {
        return osg::Group::insertChild( index, boost::python::ptr(child) );
    }

    virtual bool removeChildren( unsigned int pos, unsigned int numChildrenToRemove ) {
        if( bp::override func_removeChildren = this->get_override( "removeChildren" ) )
            return func_removeChildren( pos, numChildrenToRemove );
        else{
            return this->osg::Group::removeChildren( pos, numChildrenToRemove );
        }
    }
    
    bool default_removeChildren( unsigned int pos, unsigned int numChildrenToRemove ) {
        return osg::Group::removeChildren( pos, numChildrenToRemove );
    }

    virtual bool replaceChild( ::osg::Node * origChild, ::osg::Node * newChild ) {
        if( bp::override func_replaceChild = this->get_override( "replaceChild" ) )
            return func_replaceChild( boost::python::ptr(origChild), boost::python::ptr(newChild) );
        else{
            return this->osg::Group::replaceChild( boost::python::ptr(origChild), boost::python::ptr(newChild) );
        }
    }
    
    bool default_replaceChild( ::osg::Node * origChild, ::osg::Node * newChild ) {
        return osg::Group::replaceChild( boost::python::ptr(origChild), boost::python::ptr(newChild) );
    }

    virtual void resizeGLObjectBuffers( unsigned int maxSize ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( maxSize );
        else{
            this->osg::Group::resizeGLObjectBuffers( maxSize );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int maxSize ) {
        osg::Group::resizeGLObjectBuffers( maxSize );
    }

    virtual bool setChild( unsigned int i, ::osg::Node * node ) {
        if( bp::override func_setChild = this->get_override( "setChild" ) )
            return func_setChild( i, boost::python::ptr(node) );
        else{
            return this->osg::Group::setChild( i, boost::python::ptr(node) );
        }
    }
    
    bool default_setChild( unsigned int i, ::osg::Node * node ) {
        return osg::Group::setChild( i, boost::python::ptr(node) );
    }

    virtual void setName( ::std::string const & name ) {
        if( bp::override func_setName = this->get_override( "setName" ) )
            func_setName( name );
        else{
            this->osg::Object::setName( name );
        }
    }
    
    void default_setName( ::std::string const & name ) {
        osg::Object::setName( name );
    }

    virtual void setThreadSafeRefUnref( bool threadSafe ) {
        if( bp::override func_setThreadSafeRefUnref = this->get_override( "setThreadSafeRefUnref" ) )
            func_setThreadSafeRefUnref( threadSafe );
        else{
            this->osg::Group::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Group::setThreadSafeRefUnref( threadSafe );
    }

    virtual void setUserData( ::osg::Referenced * obj ) {
        if( bp::override func_setUserData = this->get_override( "setUserData" ) )
            func_setUserData( boost::python::ptr(obj) );
        else{
            this->osg::Object::setUserData( boost::python::ptr(obj) );
        }
    }
    
    void default_setUserData( ::osg::Referenced * obj ) {
        osg::Object::setUserData( boost::python::ptr(obj) );
    }

};

void register_VolumeTile_class(){

    bp::class_< VolumeTile_wrapper, bp::bases< ::osg::Group >, osg::ref_ptr< VolumeTile_wrapper >, boost::noncopyable >( "VolumeTile", "\n VolumeTile provides a framework for loosely coupling 3d image data with rendering algorithms.\n This allows TerrainTechniques to be plugged in at runtime.\n", bp::no_init )    
        .def( bp::init< >("\n VolumeTile provides a framework for loosely coupling 3d image data with rendering algorithms.\n This allows TerrainTechniques to be plugged in at runtime.\n") )    
        .def( 
            "accept"
            , (void ( ::osgVolume::VolumeTile::* )( ::osg::NodeVisitor & ))(&::osgVolume::VolumeTile::accept)
            , (void ( VolumeTile_wrapper::* )( ::osg::NodeVisitor & ))(&VolumeTile_wrapper::default_accept)
            , ( bp::arg("nv") ) )    
        .def( 
            "className"
            , (char const * ( ::osgVolume::VolumeTile::* )(  )const)(&::osgVolume::VolumeTile::className)
            , (char const * ( VolumeTile_wrapper::* )(  )const)(&VolumeTile_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osgVolume::VolumeTile::* )( ::osg::CopyOp const & )const)(&::osgVolume::VolumeTile::clone)
            , (::osg::Object * ( VolumeTile_wrapper::* )( ::osg::CopyOp const & )const)(&VolumeTile_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osgVolume::VolumeTile::* )(  )const)(&::osgVolume::VolumeTile::cloneType)
            , (::osg::Object * ( VolumeTile_wrapper::* )(  )const)(&VolumeTile_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "computeBound"
            , (::osg::BoundingSphere ( ::osgVolume::VolumeTile::* )(  )const)(&::osgVolume::VolumeTile::computeBound)
            , (::osg::BoundingSphere ( VolumeTile_wrapper::* )(  )const)(&VolumeTile_wrapper::default_computeBound) )    
        .def( 
            "getDirty"
            , (bool ( ::osgVolume::VolumeTile::* )(  )const)( &::osgVolume::VolumeTile::getDirty )
            , " return true if the tile is dirty and needs to be updated," )    
        .def( 
            "getLayer"
            , (::osgVolume::Layer * ( ::osgVolume::VolumeTile::* )(  ))( &::osgVolume::VolumeTile::getLayer )
            , bp::return_internal_reference< >() )    
        .def( 
            "getLayer"
            , (::osgVolume::Layer const * ( ::osgVolume::VolumeTile::* )(  )const)( &::osgVolume::VolumeTile::getLayer )
            , bp::return_internal_reference< >() )    
        .def( 
            "getLocator"
            , (::osgVolume::Locator * ( ::osgVolume::VolumeTile::* )(  ))( &::osgVolume::VolumeTile::getLocator )
            , bp::return_internal_reference< >() )    
        .def( 
            "getLocator"
            , (::osgVolume::Locator const * ( ::osgVolume::VolumeTile::* )(  )const)( &::osgVolume::VolumeTile::getLocator )
            , bp::return_internal_reference< >() )    
        .def( 
            "getTileID"
            , (::osgVolume::TileID const & ( ::osgVolume::VolumeTile::* )(  )const)( &::osgVolume::VolumeTile::getTileID )
            , bp::return_internal_reference< >()
            , " Get the TileID (layer, x,y,z) of the VolumeTile." )    
        .def( 
            "getVolume"
            , (::osgVolume::Volume * ( ::osgVolume::VolumeTile::* )(  ))( &::osgVolume::VolumeTile::getVolume )
            , bp::return_internal_reference< >()
            , " Get the Volume that this Volume tile is a member of." )    
        .def( 
            "getVolume"
            , (::osgVolume::Volume const * ( ::osgVolume::VolumeTile::* )(  )const)( &::osgVolume::VolumeTile::getVolume )
            , bp::return_internal_reference< >()
            , " Get the const Volume that this Volume tile is a member of." )    
        .def( 
            "getVolumeTechnique"
            , (::osgVolume::VolumeTechnique * ( ::osgVolume::VolumeTile::* )(  ))( &::osgVolume::VolumeTile::getVolumeTechnique )
            , bp::return_internal_reference< >()
            , " Get the VolumeTechnique that will be used to render this tile." )    
        .def( 
            "getVolumeTechnique"
            , (::osgVolume::VolumeTechnique const * ( ::osgVolume::VolumeTile::* )(  )const)( &::osgVolume::VolumeTile::getVolumeTechnique )
            , bp::return_internal_reference< >()
            , " Get the const VolumeTechnique that will be used to render this tile." )    
        .def( 
            "init"
            , (void ( ::osgVolume::VolumeTile::* )(  ))( &::osgVolume::VolumeTile::init )
            , " Call init on any attached TerrainTechnique." )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osgVolume::VolumeTile::* )( ::osg::Object const * )const)(&::osgVolume::VolumeTile::isSameKindAs)
            , (bool ( VolumeTile_wrapper::* )( ::osg::Object const * )const)(&VolumeTile_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgVolume::VolumeTile::* )(  )const)(&::osgVolume::VolumeTile::libraryName)
            , (char const * ( VolumeTile_wrapper::* )(  )const)(&VolumeTile_wrapper::default_libraryName) )    
        .def( 
            "setDirty"
            , (void ( ::osgVolume::VolumeTile::* )( bool ))( &::osgVolume::VolumeTile::setDirty )
            , ( bp::arg("dirty") )
            , " Set the dirty flag on/off." )    
        .def( 
            "setLayer"
            , (void ( ::osgVolume::VolumeTile::* )( ::osgVolume::Layer * ))( &::osgVolume::VolumeTile::setLayer )
            , ( bp::arg("layer") ) )    
        .def( 
            "setLocator"
            , (void ( ::osgVolume::VolumeTile::* )( ::osgVolume::Locator * ))( &::osgVolume::VolumeTile::setLocator )
            , ( bp::arg("locator") ) )    
        .def( 
            "setTileID"
            , (void ( ::osgVolume::VolumeTile::* )( ::osgVolume::TileID const & ))( &::osgVolume::VolumeTile::setTileID )
            , ( bp::arg("tileID") )
            , " Set the TileID (layer, x,y,z) of the VolumeTile.\n The TileID is used so it can be located by its neighbours\n via the enclosing Volume node that manages a map of TileID to VolumeTiles." )    
        .def( 
            "setVolume"
            , (void ( ::osgVolume::VolumeTile::* )( ::osgVolume::Volume * ))( &::osgVolume::VolumeTile::setVolume )
            , ( bp::arg("ts") )
            , " Set the Volume that this Volume tile is a member of." )    
        .def( 
            "setVolumeTechnique"
            , (void ( ::osgVolume::VolumeTile::* )( ::osgVolume::VolumeTechnique * ))( &::osgVolume::VolumeTile::setVolumeTechnique )
            , ( bp::arg("VolumeTechnique") )
            , " Set the VolumeTechnique that will be used to render this tile." )    
        .def( 
            "traverse"
            , (void ( ::osgVolume::VolumeTile::* )( ::osg::NodeVisitor & ))(&::osgVolume::VolumeTile::traverse)
            , (void ( VolumeTile_wrapper::* )( ::osg::NodeVisitor & ))(&VolumeTile_wrapper::default_traverse)
            , ( bp::arg("nv") ) );

}
