// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "texture1d.pypp.hpp"

namespace bp = boost::python;

struct Texture1D_wrapper : osg::Texture1D, bp::wrapper< osg::Texture1D > {

    struct SubloadCallback_wrapper : osg::Texture1D::SubloadCallback, bp::wrapper< osg::Texture1D::SubloadCallback > {
    
        SubloadCallback_wrapper()
        : osg::Texture1D::SubloadCallback()
          , bp::wrapper< osg::Texture1D::SubloadCallback >(){
            // null constructor
            
        }
    
        virtual void setThreadSafeRefUnref( bool threadSafe ) {
            if( bp::override func_setThreadSafeRefUnref = this->get_override( "setThreadSafeRefUnref" ) )
                func_setThreadSafeRefUnref( threadSafe );
            else{
                this->osg::Referenced::setThreadSafeRefUnref( threadSafe );
            }
        }
        
        void default_setThreadSafeRefUnref( bool threadSafe ) {
            osg::Referenced::setThreadSafeRefUnref( threadSafe );
        }
    
    };

    Texture1D_wrapper( )
    : osg::Texture1D( )
      , bp::wrapper< osg::Texture1D >(){
        // null constructor
    
    }

    Texture1D_wrapper(::osg::Image * image )
    : osg::Texture1D( boost::python::ptr(image) )
      , bp::wrapper< osg::Texture1D >(){
        // constructor
    
    }

    virtual void apply( ::osg::State & state ) const  {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(state) );
        else{
            this->osg::Texture1D::apply( boost::ref(state) );
        }
    }
    
    void default_apply( ::osg::State & state ) const  {
        osg::Texture1D::apply( boost::ref(state) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::Texture1D::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::Texture1D::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::Texture1D::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::Texture1D::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::Texture1D::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::Texture1D::cloneType( );
    }

    virtual ::osg::Image * getImage( unsigned int arg0 ) {
        if( bp::override func_getImage = this->get_override( "getImage" ) )
            return func_getImage( arg0 );
        else{
            return this->osg::Texture1D::getImage( arg0 );
        }
    }
    
    ::osg::Image * default_getImage( unsigned int arg0 ) {
        return osg::Texture1D::getImage( arg0 );
    }

    virtual ::osg::Image const * getImage( unsigned int arg0 ) const  {
        if( bp::override func_getImage = this->get_override( "getImage" ) )
            return func_getImage( arg0 );
        else{
            return this->osg::Texture1D::getImage( arg0 );
        }
    }
    
    ::osg::Image const * default_getImage( unsigned int arg0 ) const  {
        return osg::Texture1D::getImage( arg0 );
    }

    virtual unsigned int getNumImages(  ) const  {
        if( bp::override func_getNumImages = this->get_override( "getNumImages" ) )
            return func_getNumImages(  );
        else{
            return this->osg::Texture1D::getNumImages(  );
        }
    }
    
    unsigned int default_getNumImages(  ) const  {
        return osg::Texture1D::getNumImages( );
    }

    virtual int getTextureDepth(  ) const  {
        if( bp::override func_getTextureDepth = this->get_override( "getTextureDepth" ) )
            return func_getTextureDepth(  );
        else{
            return this->osg::Texture1D::getTextureDepth(  );
        }
    }
    
    int default_getTextureDepth(  ) const  {
        return osg::Texture1D::getTextureDepth( );
    }

    virtual int getTextureHeight(  ) const  {
        if( bp::override func_getTextureHeight = this->get_override( "getTextureHeight" ) )
            return func_getTextureHeight(  );
        else{
            return this->osg::Texture1D::getTextureHeight(  );
        }
    }
    
    int default_getTextureHeight(  ) const  {
        return osg::Texture1D::getTextureHeight( );
    }

    virtual ::GLenum getTextureTarget(  ) const  {
        if( bp::override func_getTextureTarget = this->get_override( "getTextureTarget" ) )
            return func_getTextureTarget(  );
        else{
            return this->osg::Texture1D::getTextureTarget(  );
        }
    }
    
    ::GLenum default_getTextureTarget(  ) const  {
        return osg::Texture1D::getTextureTarget( );
    }

    virtual int getTextureWidth(  ) const  {
        if( bp::override func_getTextureWidth = this->get_override( "getTextureWidth" ) )
            return func_getTextureWidth(  );
        else{
            return this->osg::Texture1D::getTextureWidth(  );
        }
    }
    
    int default_getTextureWidth(  ) const  {
        return osg::Texture1D::getTextureWidth( );
    }

    virtual ::osg::StateAttribute::Type getType(  ) const  {
        if( bp::override func_getType = this->get_override( "getType" ) )
            return func_getType(  );
        else{
            return this->osg::Texture1D::getType(  );
        }
    }
    
    ::osg::StateAttribute::Type default_getType(  ) const  {
        return osg::Texture1D::getType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::Texture1D::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::Texture1D::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::Texture1D::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::Texture1D::libraryName( );
    }

    virtual void setImage( unsigned int arg0, ::osg::Image * image ) {
        if( bp::override func_setImage = this->get_override( "setImage" ) )
            func_setImage( arg0, boost::python::ptr(image) );
        else{
            this->osg::Texture1D::setImage( arg0, boost::python::ptr(image) );
        }
    }
    
    void default_setImage( unsigned int arg0, ::osg::Image * image ) {
        osg::Texture1D::setImage( arg0, boost::python::ptr(image) );
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

void register_Texture1D_class(){

    { //::osg::Texture1D
        typedef bp::class_< Texture1D_wrapper, bp::bases< osg::Texture >, osg::ref_ptr< ::osg::Texture1D >, boost::noncopyable > Texture1D_exposer_t;
        Texture1D_exposer_t Texture1D_exposer = Texture1D_exposer_t( "Texture1D", "\n Encapsulates OpenGL 1D texture functionality. Doesnt support cube maps,\n so ignore C{face} parameters.\n", bp::no_init );
        bp::scope Texture1D_scope( Texture1D_exposer );
        bp::class_< Texture1D_wrapper::SubloadCallback_wrapper, bp::bases< osg::Referenced >, osg::ref_ptr< ::osg::Texture1D::SubloadCallback >, boost::noncopyable >( "SubloadCallback", bp::no_init )    
            .def( 
                "setThreadSafeRefUnref"
                , (void ( ::osg::Referenced::* )( bool ) )(&::osg::Referenced::setThreadSafeRefUnref)
                , (void ( Texture1D_wrapper::SubloadCallback_wrapper::* )( bool ) )(&Texture1D_wrapper::SubloadCallback_wrapper::default_setThreadSafeRefUnref)
                , ( bp::arg("threadSafe") ) );
        Texture1D_exposer.def( bp::init< >("\n Encapsulates OpenGL 1D texture functionality. Doesnt support cube maps,\n so ignore C{face} parameters.\n") );
        Texture1D_exposer.def( bp::init< osg::Image * >(( bp::arg("image") )) );
        bp::implicitly_convertible< osg::Image *, osg::Texture1D >();
        { //::osg::Texture1D::apply
        
            typedef void ( ::osg::Texture1D::*apply_function_type )( ::osg::State & ) const;
            typedef void ( Texture1D_wrapper::*default_apply_function_type )( ::osg::State & ) const;
            
            Texture1D_exposer.def( 
                "apply"
                , apply_function_type(&::osg::Texture1D::apply)
                , default_apply_function_type(&Texture1D_wrapper::default_apply)
                , ( bp::arg("state") ) );
        
        }
        { //::osg::Texture1D::className
        
            typedef char const * ( ::osg::Texture1D::*className_function_type )(  ) const;
            typedef char const * ( Texture1D_wrapper::*default_className_function_type )(  ) const;
            
            Texture1D_exposer.def( 
                "className"
                , className_function_type(&::osg::Texture1D::className)
                , default_className_function_type(&Texture1D_wrapper::default_className) );
        
        }
        { //::osg::Texture1D::clone
        
            typedef ::osg::Object * ( ::osg::Texture1D::*clone_function_type )( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( Texture1D_wrapper::*default_clone_function_type )( ::osg::CopyOp const & ) const;
            
            Texture1D_exposer.def( 
                "clone"
                , clone_function_type(&::osg::Texture1D::clone)
                , default_clone_function_type(&Texture1D_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::Texture1D::cloneType
        
            typedef ::osg::Object * ( ::osg::Texture1D::*cloneType_function_type )(  ) const;
            typedef ::osg::Object * ( Texture1D_wrapper::*default_cloneType_function_type )(  ) const;
            
            Texture1D_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::Texture1D::cloneType)
                , default_cloneType_function_type(&Texture1D_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::Texture1D::copyTexImage1D
        
            typedef void ( ::osg::Texture1D::*copyTexImage1D_function_type )( ::osg::State &,int,int,int ) ;
            
            Texture1D_exposer.def( 
                "copyTexImage1D"
                , copyTexImage1D_function_type( &::osg::Texture1D::copyTexImage1D )
                , ( bp::arg("state"), bp::arg("x"), bp::arg("y"), bp::arg("width") )
                , " Copies pixels into a 1D texture image, as per glCopyTexImage1D.\n Creates an OpenGL texture object from the current OpenGL background\n framebuffer contents at position C{x,} C{y} with width C{width.}\n C{width} must be a power of two." );
        
        }
        { //::osg::Texture1D::copyTexSubImage1D
        
            typedef void ( ::osg::Texture1D::*copyTexSubImage1D_function_type )( ::osg::State &,int,int,int,int ) ;
            
            Texture1D_exposer.def( 
                "copyTexSubImage1D"
                , copyTexSubImage1D_function_type( &::osg::Texture1D::copyTexSubImage1D )
                , ( bp::arg("state"), bp::arg("xoffset"), bp::arg("x"), bp::arg("y"), bp::arg("width") )
                , " Copies a one-dimensional texture subimage, as per\n glCopyTexSubImage1D. Updates a portion of an existing OpenGL\n texture object from the current OpenGL background framebuffer\n contents at position C{x,} C{y} with width C{width.}" );
        
        }
        { //::osg::Texture1D::getImage
        
            typedef ::osg::Image * ( ::osg::Texture1D::*getImage_function_type )(  ) ;
            
            Texture1D_exposer.def( 
                "getImage"
                , getImage_function_type( &::osg::Texture1D::getImage )
                , bp::return_internal_reference< >()
                , " Gets the texture image." );
        
        }
        { //::osg::Texture1D::getImage
        
            typedef ::osg::Image const * ( ::osg::Texture1D::*getImage_function_type )(  ) const;
            
            Texture1D_exposer.def( 
                "getImage"
                , getImage_function_type( &::osg::Texture1D::getImage )
                , bp::return_internal_reference< >()
                , " Gets the const texture image." );
        
        }
        { //::osg::Texture1D::getImage
        
            typedef ::osg::Image * ( ::osg::Texture1D::*getImage_function_type )( unsigned int ) ;
            typedef ::osg::Image * ( Texture1D_wrapper::*default_getImage_function_type )( unsigned int ) ;
            
            Texture1D_exposer.def( 
                "getImage"
                , getImage_function_type(&::osg::Texture1D::getImage)
                , default_getImage_function_type(&Texture1D_wrapper::default_getImage)
                , ( bp::arg("arg0") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Texture1D::getImage
        
            typedef ::osg::Image const * ( ::osg::Texture1D::*getImage_function_type )( unsigned int ) const;
            typedef ::osg::Image const * ( Texture1D_wrapper::*default_getImage_function_type )( unsigned int ) const;
            
            Texture1D_exposer.def( 
                "getImage"
                , getImage_function_type(&::osg::Texture1D::getImage)
                , default_getImage_function_type(&Texture1D_wrapper::default_getImage)
                , ( bp::arg("arg0") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Texture1D::getModifiedCount
        
            typedef unsigned int & ( ::osg::Texture1D::*getModifiedCount_function_type )( unsigned int ) const;
            
            Texture1D_exposer.def( 
                "getModifiedCount"
                , getModifiedCount_function_type( &::osg::Texture1D::getModifiedCount )
                , ( bp::arg("contextID") )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::osg::Texture1D::getNumImages
        
            typedef unsigned int ( ::osg::Texture1D::*getNumImages_function_type )(  ) const;
            typedef unsigned int ( Texture1D_wrapper::*default_getNumImages_function_type )(  ) const;
            
            Texture1D_exposer.def( 
                "getNumImages"
                , getNumImages_function_type(&::osg::Texture1D::getNumImages)
                , default_getNumImages_function_type(&Texture1D_wrapper::default_getNumImages) );
        
        }
        { //::osg::Texture1D::getNumMipmapLevels
        
            typedef unsigned int ( ::osg::Texture1D::*getNumMipmapLevels_function_type )(  ) const;
            
            Texture1D_exposer.def( 
                "getNumMipmapLevels"
                , getNumMipmapLevels_function_type( &::osg::Texture1D::getNumMipmapLevels )
                , " Gets the number of mipmap levels created." );
        
        }
        { //::osg::Texture1D::getSubloadCallback
        
            typedef ::osg::Texture1D::SubloadCallback * ( ::osg::Texture1D::*getSubloadCallback_function_type )(  ) ;
            
            Texture1D_exposer.def( 
                "getSubloadCallback"
                , getSubloadCallback_function_type( &::osg::Texture1D::getSubloadCallback )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Texture1D::getSubloadCallback
        
            typedef ::osg::Texture1D::SubloadCallback const * ( ::osg::Texture1D::*getSubloadCallback_function_type )(  ) const;
            
            Texture1D_exposer.def( 
                "getSubloadCallback"
                , getSubloadCallback_function_type( &::osg::Texture1D::getSubloadCallback )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Texture1D::getTextureDepth
        
            typedef int ( ::osg::Texture1D::*getTextureDepth_function_type )(  ) const;
            typedef int ( Texture1D_wrapper::*default_getTextureDepth_function_type )(  ) const;
            
            Texture1D_exposer.def( 
                "getTextureDepth"
                , getTextureDepth_function_type(&::osg::Texture1D::getTextureDepth)
                , default_getTextureDepth_function_type(&Texture1D_wrapper::default_getTextureDepth) );
        
        }
        { //::osg::Texture1D::getTextureHeight
        
            typedef int ( ::osg::Texture1D::*getTextureHeight_function_type )(  ) const;
            typedef int ( Texture1D_wrapper::*default_getTextureHeight_function_type )(  ) const;
            
            Texture1D_exposer.def( 
                "getTextureHeight"
                , getTextureHeight_function_type(&::osg::Texture1D::getTextureHeight)
                , default_getTextureHeight_function_type(&Texture1D_wrapper::default_getTextureHeight) );
        
        }
        { //::osg::Texture1D::getTextureTarget
        
            typedef ::GLenum ( ::osg::Texture1D::*getTextureTarget_function_type )(  ) const;
            typedef ::GLenum ( Texture1D_wrapper::*default_getTextureTarget_function_type )(  ) const;
            
            Texture1D_exposer.def( 
                "getTextureTarget"
                , getTextureTarget_function_type(&::osg::Texture1D::getTextureTarget)
                , default_getTextureTarget_function_type(&Texture1D_wrapper::default_getTextureTarget) );
        
        }
        { //::osg::Texture1D::getTextureWidth
        
            typedef int ( ::osg::Texture1D::*getTextureWidth_function_type )(  ) const;
            typedef int ( Texture1D_wrapper::*default_getTextureWidth_function_type )(  ) const;
            
            Texture1D_exposer.def( 
                "getTextureWidth"
                , getTextureWidth_function_type(&::osg::Texture1D::getTextureWidth)
                , default_getTextureWidth_function_type(&Texture1D_wrapper::default_getTextureWidth) );
        
        }
        { //::osg::Texture1D::getType
        
            typedef ::osg::StateAttribute::Type ( ::osg::Texture1D::*getType_function_type )(  ) const;
            typedef ::osg::StateAttribute::Type ( Texture1D_wrapper::*default_getType_function_type )(  ) const;
            
            Texture1D_exposer.def( 
                "getType"
                , getType_function_type(&::osg::Texture1D::getType)
                , default_getType_function_type(&Texture1D_wrapper::default_getType) );
        
        }
        { //::osg::Texture1D::isSameKindAs
        
            typedef bool ( ::osg::Texture1D::*isSameKindAs_function_type )( ::osg::Object const * ) const;
            typedef bool ( Texture1D_wrapper::*default_isSameKindAs_function_type )( ::osg::Object const * ) const;
            
            Texture1D_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::Texture1D::isSameKindAs)
                , default_isSameKindAs_function_type(&Texture1D_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::Texture1D::libraryName
        
            typedef char const * ( ::osg::Texture1D::*libraryName_function_type )(  ) const;
            typedef char const * ( Texture1D_wrapper::*default_libraryName_function_type )(  ) const;
            
            Texture1D_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::Texture1D::libraryName)
                , default_libraryName_function_type(&Texture1D_wrapper::default_libraryName) );
        
        }
        { //::osg::Texture1D::setImage
        
            typedef void ( ::osg::Texture1D::*setImage_function_type )( ::osg::Image * ) ;
            
            Texture1D_exposer.def( 
                "setImage"
                , setImage_function_type( &::osg::Texture1D::setImage )
                , ( bp::arg("image") )
                , " Sets the texture image." );
        
        }
        { //::osg::Texture1D::setImage
        
            typedef void ( ::osg::Texture1D::*setImage_function_type )( unsigned int,::osg::Image * ) ;
            typedef void ( Texture1D_wrapper::*default_setImage_function_type )( unsigned int,::osg::Image * ) ;
            
            Texture1D_exposer.def( 
                "setImage"
                , setImage_function_type(&::osg::Texture1D::setImage)
                , default_setImage_function_type(&Texture1D_wrapper::default_setImage)
                , ( bp::arg("arg0"), bp::arg("image") ) );
        
        }
        { //::osg::Texture1D::setNumMipmapLevels
        
            typedef void ( ::osg::Texture1D::*setNumMipmapLevels_function_type )( unsigned int ) const;
            
            Texture1D_exposer.def( 
                "setNumMipmapLevels"
                , setNumMipmapLevels_function_type( &::osg::Texture1D::setNumMipmapLevels )
                , ( bp::arg("num") )
                , " Helper function. Sets the number of mipmap levels created for this\n texture. Should only be called within an osg::Texture::apply(), or\n during a custom OpenGL texture load." );
        
        }
        { //::osg::Texture1D::setSubloadCallback
        
            typedef void ( ::osg::Texture1D::*setSubloadCallback_function_type )( ::osg::Texture1D::SubloadCallback * ) ;
            
            Texture1D_exposer.def( 
                "setSubloadCallback"
                , setSubloadCallback_function_type( &::osg::Texture1D::setSubloadCallback )
                , ( bp::arg("cb") ) );
        
        }
        { //::osg::Texture1D::setTextureWidth
        
            typedef void ( ::osg::Texture1D::*setTextureWidth_function_type )( int ) ;
            
            Texture1D_exposer.def( 
                "setTextureWidth"
                , setTextureWidth_function_type( &::osg::Texture1D::setTextureWidth )
                , ( bp::arg("width") )
                , " Sets the texture width. If width is zero, calculate the value\n from the source image width." );
        
        }
        { //::osg::Texture::asTexture
        
            typedef ::osg::Texture * ( ::osg::Texture::*asTexture_function_type )(  ) ;
            typedef ::osg::Texture * ( Texture1D_wrapper::*default_asTexture_function_type )(  ) ;
            
            Texture1D_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::Texture::asTexture)
                , default_asTexture_function_type(&Texture1D_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Texture::asTexture
        
            typedef ::osg::Texture const * ( ::osg::Texture::*asTexture_function_type )(  ) const;
            typedef ::osg::Texture const * ( Texture1D_wrapper::*default_asTexture_function_type )(  ) const;
            
            Texture1D_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::Texture::asTexture)
                , default_asTexture_function_type(&Texture1D_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::checkValidityOfAssociatedModes
        
            typedef bool ( ::osg::StateAttribute::*checkValidityOfAssociatedModes_function_type )( ::osg::State & ) const;
            typedef bool ( Texture1D_wrapper::*default_checkValidityOfAssociatedModes_function_type )( ::osg::State & ) const;
            
            Texture1D_exposer.def( 
                "checkValidityOfAssociatedModes"
                , checkValidityOfAssociatedModes_function_type(&::osg::StateAttribute::checkValidityOfAssociatedModes)
                , default_checkValidityOfAssociatedModes_function_type(&Texture1D_wrapper::default_checkValidityOfAssociatedModes)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Texture::compileGLObjects
        
            typedef void ( ::osg::Texture::*compileGLObjects_function_type )( ::osg::State & ) const;
            typedef void ( Texture1D_wrapper::*default_compileGLObjects_function_type )( ::osg::State & ) const;
            
            Texture1D_exposer.def( 
                "compileGLObjects"
                , compileGLObjects_function_type(&::osg::Texture::compileGLObjects)
                , default_compileGLObjects_function_type(&Texture1D_wrapper::default_compileGLObjects)
                , ( bp::arg("state") ) );
        
        }
        { //::osg::Object::computeDataVariance
        
            typedef void ( ::osg::Object::*computeDataVariance_function_type )(  ) ;
            typedef void ( Texture1D_wrapper::*default_computeDataVariance_function_type )(  ) ;
            
            Texture1D_exposer.def( 
                "computeDataVariance"
                , computeDataVariance_function_type(&::osg::Object::computeDataVariance)
                , default_computeDataVariance_function_type(&Texture1D_wrapper::default_computeDataVariance) );
        
        }
        { //::osg::StateAttribute::getMember
        
            typedef unsigned int ( ::osg::StateAttribute::*getMember_function_type )(  ) const;
            typedef unsigned int ( Texture1D_wrapper::*default_getMember_function_type )(  ) const;
            
            Texture1D_exposer.def( 
                "getMember"
                , getMember_function_type(&::osg::StateAttribute::getMember)
                , default_getMember_function_type(&Texture1D_wrapper::default_getMember) );
        
        }
        { //::osg::Texture::getModeUsage
        
            typedef bool ( ::osg::Texture::*getModeUsage_function_type )( ::osg::StateAttribute::ModeUsage & ) const;
            typedef bool ( Texture1D_wrapper::*default_getModeUsage_function_type )( ::osg::StateAttribute::ModeUsage & ) const;
            
            Texture1D_exposer.def( 
                "getModeUsage"
                , getModeUsage_function_type(&::osg::Texture::getModeUsage)
                , default_getModeUsage_function_type(&Texture1D_wrapper::default_getModeUsage)
                , ( bp::arg("usage") ) );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced * ( ::osg::Object::*getUserData_function_type )(  ) ;
            typedef ::osg::Referenced * ( Texture1D_wrapper::*default_getUserData_function_type )(  ) ;
            
            Texture1D_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&Texture1D_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced const * ( ::osg::Object::*getUserData_function_type )(  ) const;
            typedef ::osg::Referenced const * ( Texture1D_wrapper::*default_getUserData_function_type )(  ) const;
            
            Texture1D_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&Texture1D_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Texture::isTextureAttribute
        
            typedef bool ( ::osg::Texture::*isTextureAttribute_function_type )(  ) const;
            typedef bool ( Texture1D_wrapper::*default_isTextureAttribute_function_type )(  ) const;
            
            Texture1D_exposer.def( 
                "isTextureAttribute"
                , isTextureAttribute_function_type(&::osg::Texture::isTextureAttribute)
                , default_isTextureAttribute_function_type(&Texture1D_wrapper::default_isTextureAttribute) );
        
        }
        { //::osg::Texture::resizeGLObjectBuffers
        
            typedef void ( ::osg::Texture::*resizeGLObjectBuffers_function_type )( unsigned int ) ;
            typedef void ( Texture1D_wrapper::*default_resizeGLObjectBuffers_function_type )( unsigned int ) ;
            
            Texture1D_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::Texture::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&Texture1D_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("maxSize") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type )( ::std::string const & ) ;
            typedef void ( Texture1D_wrapper::*default_setName_function_type )( ::std::string const & ) ;
            
            Texture1D_exposer.def( 
                "setName"
                , setName_function_type(&::osg::Object::setName)
                , default_setName_function_type(&Texture1D_wrapper::default_setName)
                , ( bp::arg("name") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type )( char const * ) ;
            
            Texture1D_exposer.def( 
                "setName"
                , setName_function_type( &::osg::Object::setName )
                , ( bp::arg("name") )
                , " Set the name of object using a C style string." );
        
        }
        { //::osg::Object::setThreadSafeRefUnref
        
            typedef void ( ::osg::Object::*setThreadSafeRefUnref_function_type )( bool ) ;
            typedef void ( Texture1D_wrapper::*default_setThreadSafeRefUnref_function_type )( bool ) ;
            
            Texture1D_exposer.def( 
                "setThreadSafeRefUnref"
                , setThreadSafeRefUnref_function_type(&::osg::Object::setThreadSafeRefUnref)
                , default_setThreadSafeRefUnref_function_type(&Texture1D_wrapper::default_setThreadSafeRefUnref)
                , ( bp::arg("threadSafe") ) );
        
        }
        { //::osg::Object::setUserData
        
            typedef void ( ::osg::Object::*setUserData_function_type )( ::osg::Referenced * ) ;
            typedef void ( Texture1D_wrapper::*default_setUserData_function_type )( ::osg::Referenced * ) ;
            
            Texture1D_exposer.def( 
                "setUserData"
                , setUserData_function_type(&::osg::Object::setUserData)
                , default_setUserData_function_type(&Texture1D_wrapper::default_setUserData)
                , ( bp::arg("obj") ) );
        
        }
    }

}
