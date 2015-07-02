// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "samplemaski.pypp.hpp"

namespace bp = boost::python;

struct SampleMaski_wrapper : osg::SampleMaski, bp::wrapper< osg::SampleMaski > {

    struct Extensions_wrapper : osg::SampleMaski::Extensions, bp::wrapper< osg::SampleMaski::Extensions > {
    
        Extensions_wrapper(unsigned int contextID )
        : osg::SampleMaski::Extensions( contextID )
          , bp::wrapper< osg::SampleMaski::Extensions >(){
            // constructor
        
        }
    
        Extensions_wrapper(::osg::SampleMaski::Extensions const & rhs )
        : osg::SampleMaski::Extensions( boost::ref(rhs) )
          , bp::wrapper< osg::SampleMaski::Extensions >(){
            // copy constructor
        
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

    SampleMaski_wrapper( )
    : osg::SampleMaski( )
      , bp::wrapper< osg::SampleMaski >(){
        // null constructor
    
    }

    virtual void apply( ::osg::State & state ) const  {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(state) );
        else{
            this->osg::SampleMaski::apply( boost::ref(state) );
        }
    }
    
    void default_apply( ::osg::State & state ) const  {
        osg::SampleMaski::apply( boost::ref(state) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::SampleMaski::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::SampleMaski::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::SampleMaski::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::SampleMaski::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::SampleMaski::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::SampleMaski::cloneType( );
    }

    virtual int compare( ::osg::StateAttribute const & sa ) const  {
        if( bp::override func_compare = this->get_override( "compare" ) )
            return func_compare( boost::ref(sa) );
        else{
            return this->osg::SampleMaski::compare( boost::ref(sa) );
        }
    }
    
    int default_compare( ::osg::StateAttribute const & sa ) const  {
        return osg::SampleMaski::compare( boost::ref(sa) );
    }

    virtual ::osg::StateAttribute::Type getType(  ) const  {
        if( bp::override func_getType = this->get_override( "getType" ) )
            return func_getType(  );
        else{
            return this->osg::SampleMaski::getType(  );
        }
    }
    
    ::osg::StateAttribute::Type default_getType(  ) const  {
        return osg::SampleMaski::getType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::SampleMaski::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::SampleMaski::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::SampleMaski::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::SampleMaski::libraryName( );
    }

    virtual ::osg::Texture * asTexture(  ) {
        if( bp::override func_asTexture = this->get_override( "asTexture" ) )
            return func_asTexture(  );
        else{
            return this->osg::StateAttribute::asTexture(  );
        }
    }
    
    ::osg::Texture * default_asTexture(  ) {
        return osg::StateAttribute::asTexture( );
    }

    virtual ::osg::Texture const * asTexture(  ) const  {
        if( bp::override func_asTexture = this->get_override( "asTexture" ) )
            return func_asTexture(  );
        else{
            return this->osg::StateAttribute::asTexture(  );
        }
    }
    
    ::osg::Texture const * default_asTexture(  ) const  {
        return osg::StateAttribute::asTexture( );
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

    virtual void compileGLObjects( ::osg::State & arg0 ) const  {
        if( bp::override func_compileGLObjects = this->get_override( "compileGLObjects" ) )
            func_compileGLObjects( boost::ref(arg0) );
        else{
            this->osg::StateAttribute::compileGLObjects( boost::ref(arg0) );
        }
    }
    
    void default_compileGLObjects( ::osg::State & arg0 ) const  {
        osg::StateAttribute::compileGLObjects( boost::ref(arg0) );
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

    virtual bool getModeUsage( ::osg::StateAttribute::ModeUsage & arg0 ) const  {
        if( bp::override func_getModeUsage = this->get_override( "getModeUsage" ) )
            return func_getModeUsage( boost::ref(arg0) );
        else{
            return this->osg::StateAttribute::getModeUsage( boost::ref(arg0) );
        }
    }
    
    bool default_getModeUsage( ::osg::StateAttribute::ModeUsage & arg0 ) const  {
        return osg::StateAttribute::getModeUsage( boost::ref(arg0) );
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
            return this->osg::StateAttribute::isTextureAttribute(  );
        }
    }
    
    bool default_isTextureAttribute(  ) const  {
        return osg::StateAttribute::isTextureAttribute( );
    }

    virtual void resizeGLObjectBuffers( unsigned int arg0 ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( arg0 );
        else{
            this->osg::StateAttribute::resizeGLObjectBuffers( arg0 );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int arg0 ) {
        osg::StateAttribute::resizeGLObjectBuffers( arg0 );
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

void register_SampleMaski_class(){

    { //::osg::SampleMaski
        typedef bp::class_< SampleMaski_wrapper, bp::bases< osg::StateAttribute >, osg::ref_ptr< ::osg::SampleMaski >, boost::noncopyable > SampleMaski_exposer_t;
        SampleMaski_exposer_t SampleMaski_exposer = SampleMaski_exposer_t( "SampleMaski", "\n  osg::SampleMaski does nothing if OpenGL 3.2 or ARB_texture_multisample are not available.\n", bp::no_init );
        bp::scope SampleMaski_scope( SampleMaski_exposer );
        { //::osg::SampleMaski::Extensions
            typedef bp::class_< SampleMaski_wrapper::Extensions_wrapper, bp::bases< osg::Referenced >, osg::ref_ptr< ::osg::SampleMaski::Extensions > > Extensions_exposer_t;
            Extensions_exposer_t Extensions_exposer = Extensions_exposer_t( "Extensions", "\n Extensions class which encapsulates the querying of extensions and\n associated function pointers, and provide convenience wrappers to\n check for the extensions or use the associated functions.\n", bp::no_init );
            bp::scope Extensions_scope( Extensions_exposer );
            Extensions_exposer.def( bp::init< unsigned int >(( bp::arg("contextID") ), "\n Extensions class which encapsulates the querying of extensions and\n associated function pointers, and provide convenience wrappers to\n check for the extensions or use the associated functions.\n") );
            bp::implicitly_convertible< unsigned int, osg::SampleMaski::Extensions >();
            Extensions_exposer.def( bp::init< osg::SampleMaski::Extensions const & >(( bp::arg("rhs") )) );
            { //::osg::SampleMaski::Extensions::glSampleMaski
            
                typedef void ( ::osg::SampleMaski::Extensions::*glSampleMaski_function_type)( ::GLuint,::GLbitfield ) const;
                
                Extensions_exposer.def( 
                    "glSampleMaski"
                    , glSampleMaski_function_type( &::osg::SampleMaski::Extensions::glSampleMaski )
                    , ( bp::arg("maskNumber"), bp::arg("mask") ) );
            
            }
            { //::osg::SampleMaski::Extensions::isOpenGL32upported
            
                typedef bool ( ::osg::SampleMaski::Extensions::*isOpenGL32upported_function_type)(  ) const;
                
                Extensions_exposer.def( 
                    "isOpenGL32upported"
                    , isOpenGL32upported_function_type( &::osg::SampleMaski::Extensions::isOpenGL32upported ) );
            
            }
            { //::osg::SampleMaski::Extensions::isSampleMaskiSupported
            
                typedef bool ( ::osg::SampleMaski::Extensions::*isSampleMaskiSupported_function_type)(  ) const;
                
                Extensions_exposer.def( 
                    "isSampleMaskiSupported"
                    , isSampleMaskiSupported_function_type( &::osg::SampleMaski::Extensions::isSampleMaskiSupported ) );
            
            }
            { //::osg::SampleMaski::Extensions::isTextureMultisampleSupported
            
                typedef bool ( ::osg::SampleMaski::Extensions::*isTextureMultisampleSupported_function_type)(  ) const;
                
                Extensions_exposer.def( 
                    "isTextureMultisampleSupported"
                    , isTextureMultisampleSupported_function_type( &::osg::SampleMaski::Extensions::isTextureMultisampleSupported ) );
            
            }
            { //::osg::SampleMaski::Extensions::lowestCommonDenominator
            
                typedef void ( ::osg::SampleMaski::Extensions::*lowestCommonDenominator_function_type)( ::osg::SampleMaski::Extensions const & ) ;
                
                Extensions_exposer.def( 
                    "lowestCommonDenominator"
                    , lowestCommonDenominator_function_type( &::osg::SampleMaski::Extensions::lowestCommonDenominator )
                    , ( bp::arg("rhs") ) );
            
            }
            { //::osg::SampleMaski::Extensions::setupGLExtensions
            
                typedef void ( ::osg::SampleMaski::Extensions::*setupGLExtensions_function_type)( unsigned int ) ;
                
                Extensions_exposer.def( 
                    "setupGLExtensions"
                    , setupGLExtensions_function_type( &::osg::SampleMaski::Extensions::setupGLExtensions )
                    , ( bp::arg("contextID") ) );
            
            }
            { //::osg::Referenced::setThreadSafeRefUnref
            
                typedef void ( ::osg::Referenced::*setThreadSafeRefUnref_function_type)( bool ) ;
                typedef void ( SampleMaski_wrapper::Extensions_wrapper::*default_setThreadSafeRefUnref_function_type)( bool ) ;
                
                Extensions_exposer.def( 
                    "setThreadSafeRefUnref"
                    , setThreadSafeRefUnref_function_type(&::osg::Referenced::setThreadSafeRefUnref)
                    , default_setThreadSafeRefUnref_function_type(&SampleMaski_wrapper::Extensions_wrapper::default_setThreadSafeRefUnref)
                    , ( bp::arg("threadSafe") ) );
            
            }
        }
        SampleMaski_exposer.def( bp::init< >("\n  osg::SampleMaski does nothing if OpenGL 3.2 or ARB_texture_multisample are not available.\n") );
        { //::osg::SampleMaski::apply
        
            typedef void ( ::osg::SampleMaski::*apply_function_type)( ::osg::State & ) const;
            typedef void ( SampleMaski_wrapper::*default_apply_function_type)( ::osg::State & ) const;
            
            SampleMaski_exposer.def( 
                "apply"
                , apply_function_type(&::osg::SampleMaski::apply)
                , default_apply_function_type(&SampleMaski_wrapper::default_apply)
                , ( bp::arg("state") ) );
        
        }
        { //::osg::SampleMaski::className
        
            typedef char const * ( ::osg::SampleMaski::*className_function_type)(  ) const;
            typedef char const * ( SampleMaski_wrapper::*default_className_function_type)(  ) const;
            
            SampleMaski_exposer.def( 
                "className"
                , className_function_type(&::osg::SampleMaski::className)
                , default_className_function_type(&SampleMaski_wrapper::default_className) );
        
        }
        { //::osg::SampleMaski::clone
        
            typedef ::osg::Object * ( ::osg::SampleMaski::*clone_function_type)( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( SampleMaski_wrapper::*default_clone_function_type)( ::osg::CopyOp const & ) const;
            
            SampleMaski_exposer.def( 
                "clone"
                , clone_function_type(&::osg::SampleMaski::clone)
                , default_clone_function_type(&SampleMaski_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::SampleMaski::cloneType
        
            typedef ::osg::Object * ( ::osg::SampleMaski::*cloneType_function_type)(  ) const;
            typedef ::osg::Object * ( SampleMaski_wrapper::*default_cloneType_function_type)(  ) const;
            
            SampleMaski_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::SampleMaski::cloneType)
                , default_cloneType_function_type(&SampleMaski_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::SampleMaski::compare
        
            typedef int ( ::osg::SampleMaski::*compare_function_type)( ::osg::StateAttribute const & ) const;
            typedef int ( SampleMaski_wrapper::*default_compare_function_type)( ::osg::StateAttribute const & ) const;
            
            SampleMaski_exposer.def( 
                "compare"
                , compare_function_type(&::osg::SampleMaski::compare)
                , default_compare_function_type(&SampleMaski_wrapper::default_compare)
                , ( bp::arg("sa") ) );
        
        }
        { //::osg::SampleMaski::getExtensions
        
            typedef ::osg::SampleMaski::Extensions * ( *getExtensions_function_type )( unsigned int,bool );
            
            SampleMaski_exposer.def( 
                "getExtensions"
                , getExtensions_function_type( &::osg::SampleMaski::getExtensions )
                , ( bp::arg("contextID"), bp::arg("createIfNotInitalized") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::SampleMaski::getMask
        
            typedef unsigned int ( ::osg::SampleMaski::*getMask_function_type)( unsigned int ) const;
            
            SampleMaski_exposer.def( 
                "getMask"
                , getMask_function_type( &::osg::SampleMaski::getMask )
                , ( bp::arg("maskNumber")=(unsigned int)(0u) ) );
        
        }
        { //::osg::SampleMaski::getType
        
            typedef ::osg::StateAttribute::Type ( ::osg::SampleMaski::*getType_function_type)(  ) const;
            typedef ::osg::StateAttribute::Type ( SampleMaski_wrapper::*default_getType_function_type)(  ) const;
            
            SampleMaski_exposer.def( 
                "getType"
                , getType_function_type(&::osg::SampleMaski::getType)
                , default_getType_function_type(&SampleMaski_wrapper::default_getType) );
        
        }
        { //::osg::SampleMaski::isSameKindAs
        
            typedef bool ( ::osg::SampleMaski::*isSameKindAs_function_type)( ::osg::Object const * ) const;
            typedef bool ( SampleMaski_wrapper::*default_isSameKindAs_function_type)( ::osg::Object const * ) const;
            
            SampleMaski_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::SampleMaski::isSameKindAs)
                , default_isSameKindAs_function_type(&SampleMaski_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::SampleMaski::libraryName
        
            typedef char const * ( ::osg::SampleMaski::*libraryName_function_type)(  ) const;
            typedef char const * ( SampleMaski_wrapper::*default_libraryName_function_type)(  ) const;
            
            SampleMaski_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::SampleMaski::libraryName)
                , default_libraryName_function_type(&SampleMaski_wrapper::default_libraryName) );
        
        }
        { //::osg::SampleMaski::setExtensions
        
            typedef void ( *setExtensions_function_type )( unsigned int,::osg::SampleMaski::Extensions * );
            
            SampleMaski_exposer.def( 
                "setExtensions"
                , setExtensions_function_type( &::osg::SampleMaski::setExtensions )
                , ( bp::arg("contextID"), bp::arg("extensions") ) );
        
        }
        { //::osg::SampleMaski::setMask
        
            typedef void ( ::osg::SampleMaski::*setMask_function_type)( unsigned int,unsigned int ) ;
            
            SampleMaski_exposer.def( 
                "setMask"
                , setMask_function_type( &::osg::SampleMaski::setMask )
                , ( bp::arg("mask"), bp::arg("maskNumber")=(unsigned int)(0u) ) );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture * ( ::osg::StateAttribute::*asTexture_function_type)(  ) ;
            typedef ::osg::Texture * ( SampleMaski_wrapper::*default_asTexture_function_type)(  ) ;
            
            SampleMaski_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&SampleMaski_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture const * ( ::osg::StateAttribute::*asTexture_function_type)(  ) const;
            typedef ::osg::Texture const * ( SampleMaski_wrapper::*default_asTexture_function_type)(  ) const;
            
            SampleMaski_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&SampleMaski_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::checkValidityOfAssociatedModes
        
            typedef bool ( ::osg::StateAttribute::*checkValidityOfAssociatedModes_function_type)( ::osg::State & ) const;
            typedef bool ( SampleMaski_wrapper::*default_checkValidityOfAssociatedModes_function_type)( ::osg::State & ) const;
            
            SampleMaski_exposer.def( 
                "checkValidityOfAssociatedModes"
                , checkValidityOfAssociatedModes_function_type(&::osg::StateAttribute::checkValidityOfAssociatedModes)
                , default_checkValidityOfAssociatedModes_function_type(&SampleMaski_wrapper::default_checkValidityOfAssociatedModes)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::compileGLObjects
        
            typedef void ( ::osg::StateAttribute::*compileGLObjects_function_type)( ::osg::State & ) const;
            typedef void ( SampleMaski_wrapper::*default_compileGLObjects_function_type)( ::osg::State & ) const;
            
            SampleMaski_exposer.def( 
                "compileGLObjects"
                , compileGLObjects_function_type(&::osg::StateAttribute::compileGLObjects)
                , default_compileGLObjects_function_type(&SampleMaski_wrapper::default_compileGLObjects)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Object::computeDataVariance
        
            typedef void ( ::osg::Object::*computeDataVariance_function_type)(  ) ;
            typedef void ( SampleMaski_wrapper::*default_computeDataVariance_function_type)(  ) ;
            
            SampleMaski_exposer.def( 
                "computeDataVariance"
                , computeDataVariance_function_type(&::osg::Object::computeDataVariance)
                , default_computeDataVariance_function_type(&SampleMaski_wrapper::default_computeDataVariance) );
        
        }
        { //::osg::StateAttribute::getMember
        
            typedef unsigned int ( ::osg::StateAttribute::*getMember_function_type)(  ) const;
            typedef unsigned int ( SampleMaski_wrapper::*default_getMember_function_type)(  ) const;
            
            SampleMaski_exposer.def( 
                "getMember"
                , getMember_function_type(&::osg::StateAttribute::getMember)
                , default_getMember_function_type(&SampleMaski_wrapper::default_getMember) );
        
        }
        { //::osg::StateAttribute::getModeUsage
        
            typedef bool ( ::osg::StateAttribute::*getModeUsage_function_type)( ::osg::StateAttribute::ModeUsage & ) const;
            typedef bool ( SampleMaski_wrapper::*default_getModeUsage_function_type)( ::osg::StateAttribute::ModeUsage & ) const;
            
            SampleMaski_exposer.def( 
                "getModeUsage"
                , getModeUsage_function_type(&::osg::StateAttribute::getModeUsage)
                , default_getModeUsage_function_type(&SampleMaski_wrapper::default_getModeUsage)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced * ( ::osg::Object::*getUserData_function_type)(  ) ;
            typedef ::osg::Referenced * ( SampleMaski_wrapper::*default_getUserData_function_type)(  ) ;
            
            SampleMaski_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&SampleMaski_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced const * ( ::osg::Object::*getUserData_function_type)(  ) const;
            typedef ::osg::Referenced const * ( SampleMaski_wrapper::*default_getUserData_function_type)(  ) const;
            
            SampleMaski_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&SampleMaski_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::isTextureAttribute
        
            typedef bool ( ::osg::StateAttribute::*isTextureAttribute_function_type)(  ) const;
            typedef bool ( SampleMaski_wrapper::*default_isTextureAttribute_function_type)(  ) const;
            
            SampleMaski_exposer.def( 
                "isTextureAttribute"
                , isTextureAttribute_function_type(&::osg::StateAttribute::isTextureAttribute)
                , default_isTextureAttribute_function_type(&SampleMaski_wrapper::default_isTextureAttribute) );
        
        }
        { //::osg::StateAttribute::resizeGLObjectBuffers
        
            typedef void ( ::osg::StateAttribute::*resizeGLObjectBuffers_function_type)( unsigned int ) ;
            typedef void ( SampleMaski_wrapper::*default_resizeGLObjectBuffers_function_type)( unsigned int ) ;
            
            SampleMaski_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::StateAttribute::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&SampleMaski_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( ::std::string const & ) ;
            typedef void ( SampleMaski_wrapper::*default_setName_function_type)( ::std::string const & ) ;
            
            SampleMaski_exposer.def( 
                "setName"
                , setName_function_type(&::osg::Object::setName)
                , default_setName_function_type(&SampleMaski_wrapper::default_setName)
                , ( bp::arg("name") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( char const * ) ;
            
            SampleMaski_exposer.def( 
                "setName"
                , setName_function_type( &::osg::Object::setName )
                , ( bp::arg("name") )
                , " Set the name of object using a C style string." );
        
        }
        { //::osg::Object::setThreadSafeRefUnref
        
            typedef void ( ::osg::Object::*setThreadSafeRefUnref_function_type)( bool ) ;
            typedef void ( SampleMaski_wrapper::*default_setThreadSafeRefUnref_function_type)( bool ) ;
            
            SampleMaski_exposer.def( 
                "setThreadSafeRefUnref"
                , setThreadSafeRefUnref_function_type(&::osg::Object::setThreadSafeRefUnref)
                , default_setThreadSafeRefUnref_function_type(&SampleMaski_wrapper::default_setThreadSafeRefUnref)
                , ( bp::arg("threadSafe") ) );
        
        }
        { //::osg::Object::setUserData
        
            typedef void ( ::osg::Object::*setUserData_function_type)( ::osg::Referenced * ) ;
            typedef void ( SampleMaski_wrapper::*default_setUserData_function_type)( ::osg::Referenced * ) ;
            
            SampleMaski_exposer.def( 
                "setUserData"
                , setUserData_function_type(&::osg::Object::setUserData)
                , default_setUserData_function_type(&SampleMaski_wrapper::default_setUserData)
                , ( bp::arg("obj") ) );
        
        }
        SampleMaski_exposer.staticmethod( "getExtensions" );
        SampleMaski_exposer.staticmethod( "setExtensions" );
    }

}