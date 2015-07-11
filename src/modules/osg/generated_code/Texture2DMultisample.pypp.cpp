// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "texture2dmultisample.pypp.hpp"

namespace bp = boost::python;

struct Texture2DMultisample_wrapper : osg::Texture2DMultisample, bp::wrapper< osg::Texture2DMultisample > {

    Texture2DMultisample_wrapper( )
    : osg::Texture2DMultisample( )
      , bp::wrapper< osg::Texture2DMultisample >(){
        // null constructor
    
    }

    Texture2DMultisample_wrapper(::GLsizei numSamples, ::GLboolean fixedsamplelocations )
    : osg::Texture2DMultisample( numSamples, fixedsamplelocations )
      , bp::wrapper< osg::Texture2DMultisample >(){
        // constructor
    
    }

    virtual void allocateMipmap( ::osg::State & arg0 ) const  {
        if( bp::override func_allocateMipmap = this->get_override( "allocateMipmap" ) )
            func_allocateMipmap( boost::ref(arg0) );
        else{
            this->osg::Texture2DMultisample::allocateMipmap( boost::ref(arg0) );
        }
    }
    
    void default_allocateMipmap( ::osg::State & arg0 ) const  {
        osg::Texture2DMultisample::allocateMipmap( boost::ref(arg0) );
    }

    virtual void apply( ::osg::State & state ) const  {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(state) );
        else{
            this->osg::Texture2DMultisample::apply( boost::ref(state) );
        }
    }
    
    void default_apply( ::osg::State & state ) const  {
        osg::Texture2DMultisample::apply( boost::ref(state) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::Texture2DMultisample::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::Texture2DMultisample::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::Texture2DMultisample::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::Texture2DMultisample::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::Texture2DMultisample::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::Texture2DMultisample::cloneType( );
    }

    virtual ::osg::Image * getImage( unsigned int arg0 ) {
        if( bp::override func_getImage = this->get_override( "getImage" ) )
            return func_getImage( arg0 );
        else{
            return this->osg::Texture2DMultisample::getImage( arg0 );
        }
    }
    
    ::osg::Image * default_getImage( unsigned int arg0 ) {
        return osg::Texture2DMultisample::getImage( arg0 );
    }

    virtual ::osg::Image const * getImage( unsigned int arg0 ) const  {
        if( bp::override func_getImage = this->get_override( "getImage" ) )
            return func_getImage( arg0 );
        else{
            return this->osg::Texture2DMultisample::getImage( arg0 );
        }
    }
    
    ::osg::Image const * default_getImage( unsigned int arg0 ) const  {
        return osg::Texture2DMultisample::getImage( arg0 );
    }

    virtual unsigned int getNumImages(  ) const  {
        if( bp::override func_getNumImages = this->get_override( "getNumImages" ) )
            return func_getNumImages(  );
        else{
            return this->osg::Texture2DMultisample::getNumImages(  );
        }
    }
    
    unsigned int default_getNumImages(  ) const  {
        return osg::Texture2DMultisample::getNumImages( );
    }

    virtual int getTextureDepth(  ) const  {
        if( bp::override func_getTextureDepth = this->get_override( "getTextureDepth" ) )
            return func_getTextureDepth(  );
        else{
            return this->osg::Texture2DMultisample::getTextureDepth(  );
        }
    }
    
    int default_getTextureDepth(  ) const  {
        return osg::Texture2DMultisample::getTextureDepth( );
    }

    virtual int getTextureHeight(  ) const  {
        if( bp::override func_getTextureHeight = this->get_override( "getTextureHeight" ) )
            return func_getTextureHeight(  );
        else{
            return this->osg::Texture2DMultisample::getTextureHeight(  );
        }
    }
    
    int default_getTextureHeight(  ) const  {
        return osg::Texture2DMultisample::getTextureHeight( );
    }

    virtual ::GLenum getTextureTarget(  ) const  {
        if( bp::override func_getTextureTarget = this->get_override( "getTextureTarget" ) )
            return func_getTextureTarget(  );
        else{
            return this->osg::Texture2DMultisample::getTextureTarget(  );
        }
    }
    
    ::GLenum default_getTextureTarget(  ) const  {
        return osg::Texture2DMultisample::getTextureTarget( );
    }

    virtual int getTextureWidth(  ) const  {
        if( bp::override func_getTextureWidth = this->get_override( "getTextureWidth" ) )
            return func_getTextureWidth(  );
        else{
            return this->osg::Texture2DMultisample::getTextureWidth(  );
        }
    }
    
    int default_getTextureWidth(  ) const  {
        return osg::Texture2DMultisample::getTextureWidth( );
    }

    virtual ::osg::StateAttribute::Type getType(  ) const  {
        if( bp::override func_getType = this->get_override( "getType" ) )
            return func_getType(  );
        else{
            return this->osg::Texture2DMultisample::getType(  );
        }
    }
    
    ::osg::StateAttribute::Type default_getType(  ) const  {
        return osg::Texture2DMultisample::getType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::Texture2DMultisample::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::Texture2DMultisample::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::Texture2DMultisample::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::Texture2DMultisample::libraryName( );
    }

    virtual void setImage( unsigned int arg0, ::osg::Image * arg1 ) {
        if( bp::override func_setImage = this->get_override( "setImage" ) )
            func_setImage( arg0, boost::python::ptr(arg1) );
        else{
            this->osg::Texture2DMultisample::setImage( arg0, boost::python::ptr(arg1) );
        }
    }
    
    void default_setImage( unsigned int arg0, ::osg::Image * arg1 ) {
        osg::Texture2DMultisample::setImage( arg0, boost::python::ptr(arg1) );
    }

    virtual ::osg::Texture * asTexture(  ) {
        if( bp::override func_asTexture = this->get_override( "asTexture" ) )
            return func_asTexture(  );
        else{
            return this->osg::Texture::asTexture(  );
        }
    }
    
    ::osg::Texture * default_asTexture(  ) {
        return osg::Texture::asTexture( );
    }

    virtual ::osg::Texture const * asTexture(  ) const  {
        if( bp::override func_asTexture = this->get_override( "asTexture" ) )
            return func_asTexture(  );
        else{
            return this->osg::Texture::asTexture(  );
        }
    }
    
    ::osg::Texture const * default_asTexture(  ) const  {
        return osg::Texture::asTexture( );
    }

    virtual bool checkValidityOfAssociatedModes( ::osg::State & arg0 ) const  {
        if( bp::override func_checkValidityOfAssociatedModes = this->get_override( "checkValidityOfAssociatedModes" ) )
            return func_checkValidityOfAssociatedModes( boost::ref(arg0) );
        else{
            return this->osg::StateAttribute::checkValidityOfAssociatedModes( boost::ref(arg0) );
        }
    }
    
    bool default_checkValidityOfAssociatedModes( ::osg::State & arg0 ) const  {
        return osg::StateAttribute::checkValidityOfAssociatedModes( boost::ref(arg0) );
    }

    virtual void compileGLObjects( ::osg::State & state ) const  {
        if( bp::override func_compileGLObjects = this->get_override( "compileGLObjects" ) )
            func_compileGLObjects( boost::ref(state) );
        else{
            this->osg::Texture::compileGLObjects( boost::ref(state) );
        }
    }
    
    void default_compileGLObjects( ::osg::State & state ) const  {
        osg::Texture::compileGLObjects( boost::ref(state) );
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

    virtual unsigned int getMember(  ) const  {
        if( bp::override func_getMember = this->get_override( "getMember" ) )
            return func_getMember(  );
        else{
            return this->osg::StateAttribute::getMember(  );
        }
    }
    
    unsigned int default_getMember(  ) const  {
        return osg::StateAttribute::getMember( );
    }

    virtual bool getModeUsage( ::osg::StateAttribute::ModeUsage & usage ) const  {
        if( bp::override func_getModeUsage = this->get_override( "getModeUsage" ) )
            return func_getModeUsage( boost::ref(usage) );
        else{
            return this->osg::Texture::getModeUsage( boost::ref(usage) );
        }
    }
    
    bool default_getModeUsage( ::osg::StateAttribute::ModeUsage & usage ) const  {
        return osg::Texture::getModeUsage( boost::ref(usage) );
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

    virtual bool isTextureAttribute(  ) const  {
        if( bp::override func_isTextureAttribute = this->get_override( "isTextureAttribute" ) )
            return func_isTextureAttribute(  );
        else{
            return this->osg::Texture::isTextureAttribute(  );
        }
    }
    
    bool default_isTextureAttribute(  ) const  {
        return osg::Texture::isTextureAttribute( );
    }

    virtual void resizeGLObjectBuffers( unsigned int maxSize ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( maxSize );
        else{
            this->osg::Texture::resizeGLObjectBuffers( maxSize );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int maxSize ) {
        osg::Texture::resizeGLObjectBuffers( maxSize );
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

void register_Texture2DMultisample_class(){

    bp::class_< Texture2DMultisample_wrapper, bp::bases< osg::Texture >, osg::ref_ptr< ::osg::Texture2DMultisample >, boost::noncopyable >( "Texture2DMultisample", "\n Texture2DMultisample state class which encapsulates OpenGL 2D multisampled texture functionality.\n Multisampled texture were introduced with OpenGL 3.1 and extension GL_ARB_texture_multisample.\n See http://www.opengl.org/registry/specs/ARB/texture_multisample.txt for more info.\n", bp::no_init )    
        .def( bp::init< >("\n Texture2DMultisample state class which encapsulates OpenGL 2D multisampled texture functionality.\n Multisampled texture were introduced with OpenGL 3.1 and extension GL_ARB_texture_multisample.\n See http://www.opengl.org/registry/specs/ARB/texture_multisample.txt for more info.\n") )    
        .def( bp::init< GLsizei, GLboolean >(( bp::arg("numSamples"), bp::arg("fixedsamplelocations") )) )    
        .def( 
            "allocateMipmap"
            , (void ( ::osg::Texture2DMultisample::* )( ::osg::State & ) const)(&::osg::Texture2DMultisample::allocateMipmap)
            , (void ( Texture2DMultisample_wrapper::* )( ::osg::State & ) const)(&Texture2DMultisample_wrapper::default_allocateMipmap)
            , ( bp::arg("arg0") ) )    
        .def( 
            "apply"
            , (void ( ::osg::Texture2DMultisample::* )( ::osg::State & ) const)(&::osg::Texture2DMultisample::apply)
            , (void ( Texture2DMultisample_wrapper::* )( ::osg::State & ) const)(&Texture2DMultisample_wrapper::default_apply)
            , ( bp::arg("state") ) )    
        .def( 
            "className"
            , (char const * ( ::osg::Texture2DMultisample::* )(  ) const)(&::osg::Texture2DMultisample::className)
            , (char const * ( Texture2DMultisample_wrapper::* )(  ) const)(&Texture2DMultisample_wrapper::default_className) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osg::Texture2DMultisample::* )( ::osg::CopyOp const & ) const)(&::osg::Texture2DMultisample::clone)
            , (::osg::Object * ( Texture2DMultisample_wrapper::* )( ::osg::CopyOp const & ) const)(&Texture2DMultisample_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osg::Texture2DMultisample::* )(  ) const)(&::osg::Texture2DMultisample::cloneType)
            , (::osg::Object * ( Texture2DMultisample_wrapper::* )(  ) const)(&Texture2DMultisample_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "getImage"
            , (::osg::Image * ( ::osg::Texture2DMultisample::* )( unsigned int ) )(&::osg::Texture2DMultisample::getImage)
            , (::osg::Image * ( Texture2DMultisample_wrapper::* )( unsigned int ) )(&Texture2DMultisample_wrapper::default_getImage)
            , ( bp::arg("arg0") )
            , bp::return_internal_reference< >() )    
        .def( 
            "getImage"
            , (::osg::Image const * ( ::osg::Texture2DMultisample::* )( unsigned int ) const)(&::osg::Texture2DMultisample::getImage)
            , (::osg::Image const * ( Texture2DMultisample_wrapper::* )( unsigned int ) const)(&Texture2DMultisample_wrapper::default_getImage)
            , ( bp::arg("arg0") )
            , bp::return_internal_reference< >() )    
        .def( 
            "getNumImages"
            , (unsigned int ( ::osg::Texture2DMultisample::* )(  ) const)(&::osg::Texture2DMultisample::getNumImages)
            , (unsigned int ( Texture2DMultisample_wrapper::* )(  ) const)(&Texture2DMultisample_wrapper::default_getNumImages) )    
        .def( 
            "getTextureDepth"
            , (int ( ::osg::Texture2DMultisample::* )(  ) const)(&::osg::Texture2DMultisample::getTextureDepth)
            , (int ( Texture2DMultisample_wrapper::* )(  ) const)(&Texture2DMultisample_wrapper::default_getTextureDepth) )    
        .def( 
            "getTextureHeight"
            , (int ( ::osg::Texture2DMultisample::* )(  ) const)(&::osg::Texture2DMultisample::getTextureHeight)
            , (int ( Texture2DMultisample_wrapper::* )(  ) const)(&Texture2DMultisample_wrapper::default_getTextureHeight) )    
        .def( 
            "getTextureTarget"
            , (::GLenum ( ::osg::Texture2DMultisample::* )(  ) const)(&::osg::Texture2DMultisample::getTextureTarget)
            , (::GLenum ( Texture2DMultisample_wrapper::* )(  ) const)(&Texture2DMultisample_wrapper::default_getTextureTarget) )    
        .def( 
            "getTextureWidth"
            , (int ( ::osg::Texture2DMultisample::* )(  ) const)(&::osg::Texture2DMultisample::getTextureWidth)
            , (int ( Texture2DMultisample_wrapper::* )(  ) const)(&Texture2DMultisample_wrapper::default_getTextureWidth) )    
        .def( 
            "getType"
            , (::osg::StateAttribute::Type ( ::osg::Texture2DMultisample::* )(  ) const)(&::osg::Texture2DMultisample::getType)
            , (::osg::StateAttribute::Type ( Texture2DMultisample_wrapper::* )(  ) const)(&Texture2DMultisample_wrapper::default_getType) )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osg::Texture2DMultisample::* )( ::osg::Object const * ) const)(&::osg::Texture2DMultisample::isSameKindAs)
            , (bool ( Texture2DMultisample_wrapper::* )( ::osg::Object const * ) const)(&Texture2DMultisample_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osg::Texture2DMultisample::* )(  ) const)(&::osg::Texture2DMultisample::libraryName)
            , (char const * ( Texture2DMultisample_wrapper::* )(  ) const)(&Texture2DMultisample_wrapper::default_libraryName) )    
        .def( 
            "setImage"
            , (void ( ::osg::Texture2DMultisample::* )( unsigned int,::osg::Image * ) )(&::osg::Texture2DMultisample::setImage)
            , (void ( Texture2DMultisample_wrapper::* )( unsigned int,::osg::Image * ) )(&Texture2DMultisample_wrapper::default_setImage)
            , ( bp::arg("arg0"), bp::arg("arg1") ) )    
        .def( 
            "setNumSamples"
            , (void ( ::osg::Texture2DMultisample::* )( int ) )( &::osg::Texture2DMultisample::setNumSamples )
            , ( bp::arg("samples") ) )    
        .def( 
            "setTextureHeight"
            , (void ( ::osg::Texture2DMultisample::* )( int ) )( &::osg::Texture2DMultisample::setTextureHeight )
            , ( bp::arg("height") ) )    
        .def( 
            "setTextureSize"
            , (void ( ::osg::Texture2DMultisample::* )( int,int ) const)( &::osg::Texture2DMultisample::setTextureSize )
            , ( bp::arg("width"), bp::arg("height") )
            , " Sets the texture width and height. If width or height are zero,\n calculate the respective value from the source image size." )    
        .def( 
            "setTextureWidth"
            , (void ( ::osg::Texture2DMultisample::* )( int ) )( &::osg::Texture2DMultisample::setTextureWidth )
            , ( bp::arg("width") ) )    
        .def( 
            "asTexture"
            , (::osg::Texture * ( ::osg::Texture::* )(  ) )(&::osg::Texture::asTexture)
            , (::osg::Texture * ( Texture2DMultisample_wrapper::* )(  ) )(&Texture2DMultisample_wrapper::default_asTexture)
            , bp::return_internal_reference< >() )    
        .def( 
            "asTexture"
            , (::osg::Texture const * ( ::osg::Texture::* )(  ) const)(&::osg::Texture::asTexture)
            , (::osg::Texture const * ( Texture2DMultisample_wrapper::* )(  ) const)(&Texture2DMultisample_wrapper::default_asTexture)
            , bp::return_internal_reference< >() )    
        .def( 
            "checkValidityOfAssociatedModes"
            , (bool ( ::osg::StateAttribute::* )( ::osg::State & ) const)(&::osg::StateAttribute::checkValidityOfAssociatedModes)
            , (bool ( Texture2DMultisample_wrapper::* )( ::osg::State & ) const)(&Texture2DMultisample_wrapper::default_checkValidityOfAssociatedModes)
            , ( bp::arg("arg0") ) )    
        .def( 
            "compileGLObjects"
            , (void ( ::osg::Texture::* )( ::osg::State & ) const)(&::osg::Texture::compileGLObjects)
            , (void ( Texture2DMultisample_wrapper::* )( ::osg::State & ) const)(&Texture2DMultisample_wrapper::default_compileGLObjects)
            , ( bp::arg("state") ) )    
        .def( 
            "computeDataVariance"
            , (void ( ::osg::Object::* )(  ) )(&::osg::Object::computeDataVariance)
            , (void ( Texture2DMultisample_wrapper::* )(  ) )(&Texture2DMultisample_wrapper::default_computeDataVariance) )    
        .def( 
            "getMember"
            , (unsigned int ( ::osg::StateAttribute::* )(  ) const)(&::osg::StateAttribute::getMember)
            , (unsigned int ( Texture2DMultisample_wrapper::* )(  ) const)(&Texture2DMultisample_wrapper::default_getMember) )    
        .def( 
            "getModeUsage"
            , (bool ( ::osg::Texture::* )( ::osg::StateAttribute::ModeUsage & ) const)(&::osg::Texture::getModeUsage)
            , (bool ( Texture2DMultisample_wrapper::* )( ::osg::StateAttribute::ModeUsage & ) const)(&Texture2DMultisample_wrapper::default_getModeUsage)
            , ( bp::arg("usage") ) )    
        .def( 
            "getUserData"
            , (::osg::Referenced * ( ::osg::Object::* )(  ) )(&::osg::Object::getUserData)
            , (::osg::Referenced * ( Texture2DMultisample_wrapper::* )(  ) )(&Texture2DMultisample_wrapper::default_getUserData)
            , bp::return_internal_reference< >() )    
        .def( 
            "getUserData"
            , (::osg::Referenced const * ( ::osg::Object::* )(  ) const)(&::osg::Object::getUserData)
            , (::osg::Referenced const * ( Texture2DMultisample_wrapper::* )(  ) const)(&Texture2DMultisample_wrapper::default_getUserData)
            , bp::return_internal_reference< >() )    
        .def( 
            "isTextureAttribute"
            , (bool ( ::osg::Texture::* )(  ) const)(&::osg::Texture::isTextureAttribute)
            , (bool ( Texture2DMultisample_wrapper::* )(  ) const)(&Texture2DMultisample_wrapper::default_isTextureAttribute) )    
        .def( 
            "resizeGLObjectBuffers"
            , (void ( ::osg::Texture::* )( unsigned int ) )(&::osg::Texture::resizeGLObjectBuffers)
            , (void ( Texture2DMultisample_wrapper::* )( unsigned int ) )(&Texture2DMultisample_wrapper::default_resizeGLObjectBuffers)
            , ( bp::arg("maxSize") ) )    
        .def( 
            "setName"
            , (void ( ::osg::Object::* )( ::std::string const & ) )(&::osg::Object::setName)
            , (void ( Texture2DMultisample_wrapper::* )( ::std::string const & ) )(&Texture2DMultisample_wrapper::default_setName)
            , ( bp::arg("name") ) )    
        .def( 
            "setName"
            , (void ( ::osg::Object::* )( char const * ) )( &::osg::Object::setName )
            , ( bp::arg("name") )
            , " Set the name of object using a C style string." )    
        .def( 
            "setThreadSafeRefUnref"
            , (void ( ::osg::Object::* )( bool ) )(&::osg::Object::setThreadSafeRefUnref)
            , (void ( Texture2DMultisample_wrapper::* )( bool ) )(&Texture2DMultisample_wrapper::default_setThreadSafeRefUnref)
            , ( bp::arg("threadSafe") ) )    
        .def( 
            "setUserData"
            , (void ( ::osg::Object::* )( ::osg::Referenced * ) )(&::osg::Object::setUserData)
            , (void ( Texture2DMultisample_wrapper::* )( ::osg::Referenced * ) )(&Texture2DMultisample_wrapper::default_setUserData)
            , ( bp::arg("obj") ) );

}
