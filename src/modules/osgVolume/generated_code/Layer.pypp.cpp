// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgvolume.h"
#include "wrap_referenced.h"
#include "layer.pypp.hpp"

namespace bp = boost::python;

struct Layer_wrapper : osgVolume::Layer, bp::wrapper< osgVolume::Layer > {

    Layer_wrapper( )
    : osgVolume::Layer( )
      , bp::wrapper< osgVolume::Layer >(){
        // null constructor
    
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgVolume::Layer::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgVolume::Layer::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgVolume::Layer::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgVolume::Layer::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgVolume::Layer::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgVolume::Layer::cloneType( );
    }

    virtual ::osg::BoundingSphere computeBound(  ) const  {
        if( bp::override func_computeBound = this->get_override( "computeBound" ) )
            return func_computeBound(  );
        else{
            return this->osgVolume::Layer::computeBound(  );
        }
    }
    
    ::osg::BoundingSphere default_computeBound(  ) const  {
        return osgVolume::Layer::computeBound( );
    }

    virtual void dirty(  ) {
        if( bp::override func_dirty = this->get_override( "dirty" ) )
            func_dirty(  );
        else{
            this->osgVolume::Layer::dirty(  );
        }
    }
    
    void default_dirty(  ) {
        osgVolume::Layer::dirty( );
    }

    virtual ::osg::Image * getImage(  ) {
        if( bp::override func_getImage = this->get_override( "getImage" ) )
            return func_getImage(  );
        else{
            return this->osgVolume::Layer::getImage(  );
        }
    }
    
    ::osg::Image * default_getImage(  ) {
        return osgVolume::Layer::getImage( );
    }

    virtual ::osg::Image const * getImage(  ) const  {
        if( bp::override func_getImage = this->get_override( "getImage" ) )
            return func_getImage(  );
        else{
            return this->osgVolume::Layer::getImage(  );
        }
    }
    
    ::osg::Image const * default_getImage(  ) const  {
        return osgVolume::Layer::getImage( );
    }

    virtual unsigned int getModifiedCount(  ) const  {
        if( bp::override func_getModifiedCount = this->get_override( "getModifiedCount" ) )
            return func_getModifiedCount(  );
        else{
            return this->osgVolume::Layer::getModifiedCount(  );
        }
    }
    
    unsigned int default_getModifiedCount(  ) const  {
        return osgVolume::Layer::getModifiedCount( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgVolume::Layer::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgVolume::Layer::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgVolume::Layer::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgVolume::Layer::libraryName( );
    }

    virtual bool requiresUpdateTraversal(  ) const  {
        if( bp::override func_requiresUpdateTraversal = this->get_override( "requiresUpdateTraversal" ) )
            return func_requiresUpdateTraversal(  );
        else{
            return this->osgVolume::Layer::requiresUpdateTraversal(  );
        }
    }
    
    bool default_requiresUpdateTraversal(  ) const  {
        return osgVolume::Layer::requiresUpdateTraversal( );
    }

    virtual void setFileName( ::std::string const & filename ) {
        if( bp::override func_setFileName = this->get_override( "setFileName" ) )
            func_setFileName( filename );
        else{
            this->osgVolume::Layer::setFileName( filename );
        }
    }
    
    void default_setFileName( ::std::string const & filename ) {
        osgVolume::Layer::setFileName( filename );
    }

    virtual void setModifiedCount( unsigned int arg0 ) {
        if( bp::override func_setModifiedCount = this->get_override( "setModifiedCount" ) )
            func_setModifiedCount( arg0 );
        else{
            this->osgVolume::Layer::setModifiedCount( arg0 );
        }
    }
    
    void default_setModifiedCount( unsigned int arg0 ) {
        osgVolume::Layer::setModifiedCount( arg0 );
    }

    virtual void update( ::osg::NodeVisitor & arg0 ) {
        if( bp::override func_update = this->get_override( "update" ) )
            func_update( boost::ref(arg0) );
        else{
            this->osgVolume::Layer::update( boost::ref(arg0) );
        }
    }
    
    void default_update( ::osg::NodeVisitor & arg0 ) {
        osgVolume::Layer::update( boost::ref(arg0) );
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

    virtual void resizeGLObjectBuffers( unsigned int arg0 ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( arg0 );
        else{
            this->osg::Object::resizeGLObjectBuffers( arg0 );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int arg0 ) {
        osg::Object::resizeGLObjectBuffers( arg0 );
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
            this->osg::Object::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Object::setThreadSafeRefUnref( threadSafe );
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

void register_Layer_class(){

    bp::class_< Layer_wrapper, bp::bases< ::osg::Object >, osg::ref_ptr< Layer_wrapper >, boost::noncopyable >( "Layer", "\n Base class for representing a single layer of volume data.\n", bp::no_init )    
        .def( bp::init< >("\n Base class for representing a single layer of volume data.\n") )    
        .def( 
            "addProperty"
            , (void ( ::osgVolume::Layer::* )( ::osgVolume::Property * ))( &::osgVolume::Layer::addProperty )
            , ( bp::arg("property") )
            , " Add a property, automatically creating a CompositePorperty if one isnt already assigned." )    
        .def( 
            "className"
            , (char const * ( ::osgVolume::Layer::* )(  )const)(&::osgVolume::Layer::className)
            , (char const * ( Layer_wrapper::* )(  )const)(&Layer_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osgVolume::Layer::* )( ::osg::CopyOp const & )const)(&::osgVolume::Layer::clone)
            , (::osg::Object * ( Layer_wrapper::* )( ::osg::CopyOp const & )const)(&Layer_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osgVolume::Layer::* )(  )const)(&::osgVolume::Layer::cloneType)
            , (::osg::Object * ( Layer_wrapper::* )(  )const)(&Layer_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "computeBound"
            , (::osg::BoundingSphere ( ::osgVolume::Layer::* )(  )const)(&::osgVolume::Layer::computeBound)
            , (::osg::BoundingSphere ( Layer_wrapper::* )(  )const)(&Layer_wrapper::default_computeBound) )    
        .def( 
            "dirty"
            , (void ( ::osgVolume::Layer::* )(  ))(&::osgVolume::Layer::dirty)
            , (void ( Layer_wrapper::* )(  ))(&Layer_wrapper::default_dirty) )    
        .def( 
            "getDefaultValue"
            , (::osg::Vec4 const & ( ::osgVolume::Layer::* )(  )const)( &::osgVolume::Layer::getDefaultValue )
            , bp::return_internal_reference< >() )    
        .def( 
            "getFileName"
            , (::std::string const & ( ::osgVolume::Layer::* )(  )const)(&::osgVolume::Layer::getFileName)
            , bp::return_value_policy< bp::copy_const_reference >() )    
        .def( 
            "getImage"
            , (::osg::Image * ( ::osgVolume::Layer::* )(  ))(&::osgVolume::Layer::getImage)
            , (::osg::Image * ( Layer_wrapper::* )(  ))(&Layer_wrapper::default_getImage)
            , bp::return_internal_reference< >() )    
        .def( 
            "getImage"
            , (::osg::Image const * ( ::osgVolume::Layer::* )(  )const)(&::osgVolume::Layer::getImage)
            , (::osg::Image const * ( Layer_wrapper::* )(  )const)(&Layer_wrapper::default_getImage)
            , bp::return_internal_reference< >() )    
        .def( 
            "getLocator"
            , (::osgVolume::Locator * ( ::osgVolume::Layer::* )(  ))( &::osgVolume::Layer::getLocator )
            , bp::return_internal_reference< >() )    
        .def( 
            "getLocator"
            , (::osgVolume::Locator const * ( ::osgVolume::Layer::* )(  )const)( &::osgVolume::Layer::getLocator )
            , bp::return_internal_reference< >() )    
        .def( 
            "getMagFilter"
            , (::osg::Texture::FilterMode ( ::osgVolume::Layer::* )(  )const)( &::osgVolume::Layer::getMagFilter )
            , " Get the magnification texture filter to use when do texture associated with this layer." )    
        .def( 
            "getMinFilter"
            , (::osg::Texture::FilterMode ( ::osgVolume::Layer::* )(  )const)( &::osgVolume::Layer::getMinFilter )
            , " Get the minification texture filter to use when do texture associated with this layer." )    
        .def( 
            "getModifiedCount"
            , (unsigned int ( ::osgVolume::Layer::* )(  )const)(&::osgVolume::Layer::getModifiedCount)
            , (unsigned int ( Layer_wrapper::* )(  )const)(&Layer_wrapper::default_getModifiedCount) )    
        .def( 
            "getProperty"
            , (::osgVolume::Property * ( ::osgVolume::Layer::* )(  ))( &::osgVolume::Layer::getProperty )
            , bp::return_internal_reference< >()
            , " Get the Property that informs the VolumeTechnique how this layer should be rendered." )    
        .def( 
            "getProperty"
            , (::osgVolume::Property const * ( ::osgVolume::Layer::* )(  )const)( &::osgVolume::Layer::getProperty )
            , bp::return_internal_reference< >()
            , " Get the const Property that informs the VolumeTechnique how this layer should be rendered." )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osgVolume::Layer::* )( ::osg::Object const * )const)(&::osgVolume::Layer::isSameKindAs)
            , (bool ( Layer_wrapper::* )( ::osg::Object const * )const)(&Layer_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgVolume::Layer::* )(  )const)(&::osgVolume::Layer::libraryName)
            , (char const * ( Layer_wrapper::* )(  )const)(&Layer_wrapper::default_libraryName) )    
        .def( 
            "requiresUpdateTraversal"
            , (bool ( ::osgVolume::Layer::* )(  )const)(&::osgVolume::Layer::requiresUpdateTraversal)
            , (bool ( Layer_wrapper::* )(  )const)(&Layer_wrapper::default_requiresUpdateTraversal) )    
        .def( 
            "setDefaultValue"
            , (void ( ::osgVolume::Layer::* )( ::osg::Vec4 const & ))( &::osgVolume::Layer::setDefaultValue )
            , ( bp::arg("value") ) )    
        .def( 
            "setFileName"
            , (void ( ::osgVolume::Layer::* )( ::std::string const & ))(&::osgVolume::Layer::setFileName)
            , (void ( Layer_wrapper::* )( ::std::string const & ))(&Layer_wrapper::default_setFileName)
            , ( bp::arg("filename") ) )    
        .def( 
            "setLocator"
            , (void ( ::osgVolume::Layer::* )( ::osgVolume::Locator * ))( &::osgVolume::Layer::setLocator )
            , ( bp::arg("locator") ) )    
        .def( 
            "setMagFilter"
            , (void ( ::osgVolume::Layer::* )( ::osg::Texture::FilterMode ))( &::osgVolume::Layer::setMagFilter )
            , ( bp::arg("filter") )
            , " Set the magniification texture filter to use when do texture associated with this layer." )    
        .def( 
            "setMinFilter"
            , (void ( ::osgVolume::Layer::* )( ::osg::Texture::FilterMode ))( &::osgVolume::Layer::setMinFilter )
            , ( bp::arg("filter") )
            , " Set the minification texture filter to use when do texture associated with this layer." )    
        .def( 
            "setModifiedCount"
            , (void ( ::osgVolume::Layer::* )( unsigned int ))(&::osgVolume::Layer::setModifiedCount)
            , (void ( Layer_wrapper::* )( unsigned int ))(&Layer_wrapper::default_setModifiedCount)
            , ( bp::arg("arg0") ) )    
        .def( 
            "setProperty"
            , (void ( ::osgVolume::Layer::* )( ::osgVolume::Property * ))( &::osgVolume::Layer::setProperty )
            , ( bp::arg("property") )
            , " Set the Property (or Properties via the CompositeProperty) that informs the VolumeTechnique how this layer should be rendered." )    
        .def( 
            "update"
            , (void ( ::osgVolume::Layer::* )( ::osg::NodeVisitor & ))(&::osgVolume::Layer::update)
            , (void ( Layer_wrapper::* )( ::osg::NodeVisitor & ))(&Layer_wrapper::default_update)
            , ( bp::arg("arg0") ) );

}