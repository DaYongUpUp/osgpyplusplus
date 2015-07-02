// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "blendequation.pypp.hpp"

namespace bp = boost::python;

struct BlendEquation_wrapper : osg::BlendEquation, bp::wrapper< osg::BlendEquation > {

    struct Extensions_wrapper : osg::BlendEquation::Extensions, bp::wrapper< osg::BlendEquation::Extensions > {
    
        Extensions_wrapper(unsigned int contextID )
        : osg::BlendEquation::Extensions( contextID )
          , bp::wrapper< osg::BlendEquation::Extensions >(){
            // constructor
        
        }
    
        Extensions_wrapper(::osg::BlendEquation::Extensions const & rhs )
        : osg::BlendEquation::Extensions( boost::ref(rhs) )
          , bp::wrapper< osg::BlendEquation::Extensions >(){
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

    BlendEquation_wrapper( )
    : osg::BlendEquation( )
      , bp::wrapper< osg::BlendEquation >(){
        // null constructor
    
    }

    BlendEquation_wrapper(::osg::BlendEquation::Equation equation )
    : osg::BlendEquation( equation )
      , bp::wrapper< osg::BlendEquation >(){
        // constructor
    
    }

    BlendEquation_wrapper(::osg::BlendEquation::Equation equationRGB, ::osg::BlendEquation::Equation equationAlpha )
    : osg::BlendEquation( equationRGB, equationAlpha )
      , bp::wrapper< osg::BlendEquation >(){
        // constructor
    
    }

    virtual void apply( ::osg::State & state ) const  {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(state) );
        else{
            this->osg::BlendEquation::apply( boost::ref(state) );
        }
    }
    
    void default_apply( ::osg::State & state ) const  {
        osg::BlendEquation::apply( boost::ref(state) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::BlendEquation::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::BlendEquation::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::BlendEquation::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::BlendEquation::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::BlendEquation::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::BlendEquation::cloneType( );
    }

    virtual int compare( ::osg::StateAttribute const & sa ) const  {
        if( bp::override func_compare = this->get_override( "compare" ) )
            return func_compare( boost::ref(sa) );
        else{
            return this->osg::BlendEquation::compare( boost::ref(sa) );
        }
    }
    
    int default_compare( ::osg::StateAttribute const & sa ) const  {
        return osg::BlendEquation::compare( boost::ref(sa) );
    }

    virtual bool getModeUsage( ::osg::StateAttribute::ModeUsage & usage ) const  {
        if( bp::override func_getModeUsage = this->get_override( "getModeUsage" ) )
            return func_getModeUsage( boost::ref(usage) );
        else{
            return this->osg::BlendEquation::getModeUsage( boost::ref(usage) );
        }
    }
    
    bool default_getModeUsage( ::osg::StateAttribute::ModeUsage & usage ) const  {
        return osg::BlendEquation::getModeUsage( boost::ref(usage) );
    }

    virtual ::osg::StateAttribute::Type getType(  ) const  {
        if( bp::override func_getType = this->get_override( "getType" ) )
            return func_getType(  );
        else{
            return this->osg::BlendEquation::getType(  );
        }
    }
    
    ::osg::StateAttribute::Type default_getType(  ) const  {
        return osg::BlendEquation::getType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::BlendEquation::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::BlendEquation::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::BlendEquation::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::BlendEquation::libraryName( );
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

void register_BlendEquation_class(){

    { //::osg::BlendEquation
        typedef bp::class_< BlendEquation_wrapper, bp::bases< osg::StateAttribute >, osg::ref_ptr< ::osg::BlendEquation >, boost::noncopyable > BlendEquation_exposer_t;
        BlendEquation_exposer_t BlendEquation_exposer = BlendEquation_exposer_t( "BlendEquation", "\n Encapsulates OpenGL BlendEquation state.\n", bp::no_init );
        bp::scope BlendEquation_scope( BlendEquation_exposer );
        bp::enum_< osg::BlendEquation::Equation>("Equation")
            .value("RGBA_MIN", osg::BlendEquation::RGBA_MIN)
            .value("RGBA_MAX", osg::BlendEquation::RGBA_MAX)
            .value("ALPHA_MIN", osg::BlendEquation::ALPHA_MIN)
            .value("ALPHA_MAX", osg::BlendEquation::ALPHA_MAX)
            .value("LOGIC_OP", osg::BlendEquation::LOGIC_OP)
            .value("FUNC_ADD", osg::BlendEquation::FUNC_ADD)
            .value("FUNC_SUBTRACT", osg::BlendEquation::FUNC_SUBTRACT)
            .value("FUNC_REVERSE_SUBTRACT", osg::BlendEquation::FUNC_REVERSE_SUBTRACT)
            .export_values()
            ;
        { //::osg::BlendEquation::Extensions
            typedef bp::class_< BlendEquation_wrapper::Extensions_wrapper, bp::bases< osg::Referenced >, osg::ref_ptr< ::osg::BlendEquation::Extensions > > Extensions_exposer_t;
            Extensions_exposer_t Extensions_exposer = Extensions_exposer_t( "Extensions", "\n Encapsulates queries of extension availability, obtains extension\n function pointers, and provides convenience wrappers for\n calling extension functions.\n", bp::no_init );
            bp::scope Extensions_scope( Extensions_exposer );
            Extensions_exposer.def( bp::init< unsigned int >(( bp::arg("contextID") ), "\n Encapsulates queries of extension availability, obtains extension\n function pointers, and provides convenience wrappers for\n calling extension functions.\n") );
            bp::implicitly_convertible< unsigned int, osg::BlendEquation::Extensions >();
            Extensions_exposer.def( bp::init< osg::BlendEquation::Extensions const & >(( bp::arg("rhs") )) );
            { //::osg::BlendEquation::Extensions::glBlendEquation
            
                typedef void ( ::osg::BlendEquation::Extensions::*glBlendEquation_function_type)( ::GLenum ) const;
                
                Extensions_exposer.def( 
                    "glBlendEquation"
                    , glBlendEquation_function_type( &::osg::BlendEquation::Extensions::glBlendEquation )
                    , ( bp::arg("mode") ) );
            
            }
            { //::osg::BlendEquation::Extensions::glBlendEquationSeparate
            
                typedef void ( ::osg::BlendEquation::Extensions::*glBlendEquationSeparate_function_type)( ::GLenum,::GLenum ) const;
                
                Extensions_exposer.def( 
                    "glBlendEquationSeparate"
                    , glBlendEquationSeparate_function_type( &::osg::BlendEquation::Extensions::glBlendEquationSeparate )
                    , ( bp::arg("modeRGB"), bp::arg("modeAlpha") ) );
            
            }
            { //::osg::BlendEquation::Extensions::isBlendEquationSeparateSupported
            
                typedef bool ( ::osg::BlendEquation::Extensions::*isBlendEquationSeparateSupported_function_type)(  ) const;
                
                Extensions_exposer.def( 
                    "isBlendEquationSeparateSupported"
                    , isBlendEquationSeparateSupported_function_type( &::osg::BlendEquation::Extensions::isBlendEquationSeparateSupported ) );
            
            }
            { //::osg::BlendEquation::Extensions::isBlendEquationSupported
            
                typedef bool ( ::osg::BlendEquation::Extensions::*isBlendEquationSupported_function_type)(  ) const;
                
                Extensions_exposer.def( 
                    "isBlendEquationSupported"
                    , isBlendEquationSupported_function_type( &::osg::BlendEquation::Extensions::isBlendEquationSupported ) );
            
            }
            { //::osg::BlendEquation::Extensions::isLogicOpSupported
            
                typedef bool ( ::osg::BlendEquation::Extensions::*isLogicOpSupported_function_type)(  ) const;
                
                Extensions_exposer.def( 
                    "isLogicOpSupported"
                    , isLogicOpSupported_function_type( &::osg::BlendEquation::Extensions::isLogicOpSupported ) );
            
            }
            { //::osg::BlendEquation::Extensions::isSGIXMinMaxSupported
            
                typedef bool ( ::osg::BlendEquation::Extensions::*isSGIXMinMaxSupported_function_type)(  ) const;
                
                Extensions_exposer.def( 
                    "isSGIXMinMaxSupported"
                    , isSGIXMinMaxSupported_function_type( &::osg::BlendEquation::Extensions::isSGIXMinMaxSupported ) );
            
            }
            { //::osg::BlendEquation::Extensions::lowestCommonDenominator
            
                typedef void ( ::osg::BlendEquation::Extensions::*lowestCommonDenominator_function_type)( ::osg::BlendEquation::Extensions const & ) ;
                
                Extensions_exposer.def( 
                    "lowestCommonDenominator"
                    , lowestCommonDenominator_function_type( &::osg::BlendEquation::Extensions::lowestCommonDenominator )
                    , ( bp::arg("rhs") ) );
            
            }
            { //::osg::BlendEquation::Extensions::setupGLExtensions
            
                typedef void ( ::osg::BlendEquation::Extensions::*setupGLExtensions_function_type)( unsigned int ) ;
                
                Extensions_exposer.def( 
                    "setupGLExtensions"
                    , setupGLExtensions_function_type( &::osg::BlendEquation::Extensions::setupGLExtensions )
                    , ( bp::arg("contextID") ) );
            
            }
            { //::osg::Referenced::setThreadSafeRefUnref
            
                typedef void ( ::osg::Referenced::*setThreadSafeRefUnref_function_type)( bool ) ;
                typedef void ( BlendEquation_wrapper::Extensions_wrapper::*default_setThreadSafeRefUnref_function_type)( bool ) ;
                
                Extensions_exposer.def( 
                    "setThreadSafeRefUnref"
                    , setThreadSafeRefUnref_function_type(&::osg::Referenced::setThreadSafeRefUnref)
                    , default_setThreadSafeRefUnref_function_type(&BlendEquation_wrapper::Extensions_wrapper::default_setThreadSafeRefUnref)
                    , ( bp::arg("threadSafe") ) );
            
            }
        }
        BlendEquation_exposer.def( bp::init< >() );
        BlendEquation_exposer.def( bp::init< osg::BlendEquation::Equation >(( bp::arg("equation") )) );
        bp::implicitly_convertible< osg::BlendEquation::Equation, osg::BlendEquation >();
        BlendEquation_exposer.def( bp::init< osg::BlendEquation::Equation, osg::BlendEquation::Equation >(( bp::arg("equationRGB"), bp::arg("equationAlpha") )) );
        { //::osg::BlendEquation::apply
        
            typedef void ( ::osg::BlendEquation::*apply_function_type)( ::osg::State & ) const;
            typedef void ( BlendEquation_wrapper::*default_apply_function_type)( ::osg::State & ) const;
            
            BlendEquation_exposer.def( 
                "apply"
                , apply_function_type(&::osg::BlendEquation::apply)
                , default_apply_function_type(&BlendEquation_wrapper::default_apply)
                , ( bp::arg("state") ) );
        
        }
        { //::osg::BlendEquation::className
        
            typedef char const * ( ::osg::BlendEquation::*className_function_type)(  ) const;
            typedef char const * ( BlendEquation_wrapper::*default_className_function_type)(  ) const;
            
            BlendEquation_exposer.def( 
                "className"
                , className_function_type(&::osg::BlendEquation::className)
                , default_className_function_type(&BlendEquation_wrapper::default_className) );
        
        }
        { //::osg::BlendEquation::clone
        
            typedef ::osg::Object * ( ::osg::BlendEquation::*clone_function_type)( ::osg::CopyOp const & ) const;
            typedef ::osg::Object * ( BlendEquation_wrapper::*default_clone_function_type)( ::osg::CopyOp const & ) const;
            
            BlendEquation_exposer.def( 
                "clone"
                , clone_function_type(&::osg::BlendEquation::clone)
                , default_clone_function_type(&BlendEquation_wrapper::default_clone)
                , ( bp::arg("copyop") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::BlendEquation::cloneType
        
            typedef ::osg::Object * ( ::osg::BlendEquation::*cloneType_function_type)(  ) const;
            typedef ::osg::Object * ( BlendEquation_wrapper::*default_cloneType_function_type)(  ) const;
            
            BlendEquation_exposer.def( 
                "cloneType"
                , cloneType_function_type(&::osg::BlendEquation::cloneType)
                , default_cloneType_function_type(&BlendEquation_wrapper::default_cloneType)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::osg::BlendEquation::compare
        
            typedef int ( ::osg::BlendEquation::*compare_function_type)( ::osg::StateAttribute const & ) const;
            typedef int ( BlendEquation_wrapper::*default_compare_function_type)( ::osg::StateAttribute const & ) const;
            
            BlendEquation_exposer.def( 
                "compare"
                , compare_function_type(&::osg::BlendEquation::compare)
                , default_compare_function_type(&BlendEquation_wrapper::default_compare)
                , ( bp::arg("sa") ) );
        
        }
        { //::osg::BlendEquation::getEquation
        
            typedef ::osg::BlendEquation::Equation ( ::osg::BlendEquation::*getEquation_function_type)(  ) const;
            
            BlendEquation_exposer.def( 
                "getEquation"
                , getEquation_function_type( &::osg::BlendEquation::getEquation ) );
        
        }
        { //::osg::BlendEquation::getEquationAlpha
        
            typedef ::osg::BlendEquation::Equation ( ::osg::BlendEquation::*getEquationAlpha_function_type)(  ) const;
            
            BlendEquation_exposer.def( 
                "getEquationAlpha"
                , getEquationAlpha_function_type( &::osg::BlendEquation::getEquationAlpha ) );
        
        }
        { //::osg::BlendEquation::getEquationRGB
        
            typedef ::osg::BlendEquation::Equation ( ::osg::BlendEquation::*getEquationRGB_function_type)(  ) const;
            
            BlendEquation_exposer.def( 
                "getEquationRGB"
                , getEquationRGB_function_type( &::osg::BlendEquation::getEquationRGB ) );
        
        }
        { //::osg::BlendEquation::getExtensions
        
            typedef ::osg::BlendEquation::Extensions * ( *getExtensions_function_type )( unsigned int,bool );
            
            BlendEquation_exposer.def( 
                "getExtensions"
                , getExtensions_function_type( &::osg::BlendEquation::getExtensions )
                , ( bp::arg("contextID"), bp::arg("createIfNotInitalized") )
                , bp::return_internal_reference< >()
                , " Returns the Extensions object for the given context.\n If createIfNotInitalized is true and the Extensions object doesnt\n exist, getExtensions() creates it on the given context.\n Returns NULL if createIfNotInitalized is false and the Extensions\n object doesnt exist." );
        
        }
        { //::osg::BlendEquation::getModeUsage
        
            typedef bool ( ::osg::BlendEquation::*getModeUsage_function_type)( ::osg::StateAttribute::ModeUsage & ) const;
            typedef bool ( BlendEquation_wrapper::*default_getModeUsage_function_type)( ::osg::StateAttribute::ModeUsage & ) const;
            
            BlendEquation_exposer.def( 
                "getModeUsage"
                , getModeUsage_function_type(&::osg::BlendEquation::getModeUsage)
                , default_getModeUsage_function_type(&BlendEquation_wrapper::default_getModeUsage)
                , ( bp::arg("usage") ) );
        
        }
        { //::osg::BlendEquation::getType
        
            typedef ::osg::StateAttribute::Type ( ::osg::BlendEquation::*getType_function_type)(  ) const;
            typedef ::osg::StateAttribute::Type ( BlendEquation_wrapper::*default_getType_function_type)(  ) const;
            
            BlendEquation_exposer.def( 
                "getType"
                , getType_function_type(&::osg::BlendEquation::getType)
                , default_getType_function_type(&BlendEquation_wrapper::default_getType) );
        
        }
        { //::osg::BlendEquation::isSameKindAs
        
            typedef bool ( ::osg::BlendEquation::*isSameKindAs_function_type)( ::osg::Object const * ) const;
            typedef bool ( BlendEquation_wrapper::*default_isSameKindAs_function_type)( ::osg::Object const * ) const;
            
            BlendEquation_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::BlendEquation::isSameKindAs)
                , default_isSameKindAs_function_type(&BlendEquation_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::BlendEquation::libraryName
        
            typedef char const * ( ::osg::BlendEquation::*libraryName_function_type)(  ) const;
            typedef char const * ( BlendEquation_wrapper::*default_libraryName_function_type)(  ) const;
            
            BlendEquation_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::BlendEquation::libraryName)
                , default_libraryName_function_type(&BlendEquation_wrapper::default_libraryName) );
        
        }
        { //::osg::BlendEquation::setEquation
        
            typedef void ( ::osg::BlendEquation::*setEquation_function_type)( ::osg::BlendEquation::Equation ) ;
            
            BlendEquation_exposer.def( 
                "setEquation"
                , setEquation_function_type( &::osg::BlendEquation::setEquation )
                , ( bp::arg("equation") ) );
        
        }
        { //::osg::BlendEquation::setEquationAlpha
        
            typedef void ( ::osg::BlendEquation::*setEquationAlpha_function_type)( ::osg::BlendEquation::Equation ) ;
            
            BlendEquation_exposer.def( 
                "setEquationAlpha"
                , setEquationAlpha_function_type( &::osg::BlendEquation::setEquationAlpha )
                , ( bp::arg("equation") ) );
        
        }
        { //::osg::BlendEquation::setEquationRGB
        
            typedef void ( ::osg::BlendEquation::*setEquationRGB_function_type)( ::osg::BlendEquation::Equation ) ;
            
            BlendEquation_exposer.def( 
                "setEquationRGB"
                , setEquationRGB_function_type( &::osg::BlendEquation::setEquationRGB )
                , ( bp::arg("equation") ) );
        
        }
        { //::osg::BlendEquation::setExtensions
        
            typedef void ( *setExtensions_function_type )( unsigned int,::osg::BlendEquation::Extensions * );
            
            BlendEquation_exposer.def( 
                "setExtensions"
                , setExtensions_function_type( &::osg::BlendEquation::setExtensions )
                , ( bp::arg("contextID"), bp::arg("extensions") )
                , " setExtensions() allows users to override the extensions across graphics contexts.\n Typically used when you have different extensions supported across graphics pipes,\n but need to ensure that they all use the same low common denominator extensions." );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture * ( ::osg::StateAttribute::*asTexture_function_type)(  ) ;
            typedef ::osg::Texture * ( BlendEquation_wrapper::*default_asTexture_function_type)(  ) ;
            
            BlendEquation_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&BlendEquation_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture const * ( ::osg::StateAttribute::*asTexture_function_type)(  ) const;
            typedef ::osg::Texture const * ( BlendEquation_wrapper::*default_asTexture_function_type)(  ) const;
            
            BlendEquation_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&BlendEquation_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::checkValidityOfAssociatedModes
        
            typedef bool ( ::osg::StateAttribute::*checkValidityOfAssociatedModes_function_type)( ::osg::State & ) const;
            typedef bool ( BlendEquation_wrapper::*default_checkValidityOfAssociatedModes_function_type)( ::osg::State & ) const;
            
            BlendEquation_exposer.def( 
                "checkValidityOfAssociatedModes"
                , checkValidityOfAssociatedModes_function_type(&::osg::StateAttribute::checkValidityOfAssociatedModes)
                , default_checkValidityOfAssociatedModes_function_type(&BlendEquation_wrapper::default_checkValidityOfAssociatedModes)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::compileGLObjects
        
            typedef void ( ::osg::StateAttribute::*compileGLObjects_function_type)( ::osg::State & ) const;
            typedef void ( BlendEquation_wrapper::*default_compileGLObjects_function_type)( ::osg::State & ) const;
            
            BlendEquation_exposer.def( 
                "compileGLObjects"
                , compileGLObjects_function_type(&::osg::StateAttribute::compileGLObjects)
                , default_compileGLObjects_function_type(&BlendEquation_wrapper::default_compileGLObjects)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Object::computeDataVariance
        
            typedef void ( ::osg::Object::*computeDataVariance_function_type)(  ) ;
            typedef void ( BlendEquation_wrapper::*default_computeDataVariance_function_type)(  ) ;
            
            BlendEquation_exposer.def( 
                "computeDataVariance"
                , computeDataVariance_function_type(&::osg::Object::computeDataVariance)
                , default_computeDataVariance_function_type(&BlendEquation_wrapper::default_computeDataVariance) );
        
        }
        { //::osg::StateAttribute::getMember
        
            typedef unsigned int ( ::osg::StateAttribute::*getMember_function_type)(  ) const;
            typedef unsigned int ( BlendEquation_wrapper::*default_getMember_function_type)(  ) const;
            
            BlendEquation_exposer.def( 
                "getMember"
                , getMember_function_type(&::osg::StateAttribute::getMember)
                , default_getMember_function_type(&BlendEquation_wrapper::default_getMember) );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced * ( ::osg::Object::*getUserData_function_type)(  ) ;
            typedef ::osg::Referenced * ( BlendEquation_wrapper::*default_getUserData_function_type)(  ) ;
            
            BlendEquation_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&BlendEquation_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced const * ( ::osg::Object::*getUserData_function_type)(  ) const;
            typedef ::osg::Referenced const * ( BlendEquation_wrapper::*default_getUserData_function_type)(  ) const;
            
            BlendEquation_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&BlendEquation_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::isTextureAttribute
        
            typedef bool ( ::osg::StateAttribute::*isTextureAttribute_function_type)(  ) const;
            typedef bool ( BlendEquation_wrapper::*default_isTextureAttribute_function_type)(  ) const;
            
            BlendEquation_exposer.def( 
                "isTextureAttribute"
                , isTextureAttribute_function_type(&::osg::StateAttribute::isTextureAttribute)
                , default_isTextureAttribute_function_type(&BlendEquation_wrapper::default_isTextureAttribute) );
        
        }
        { //::osg::StateAttribute::resizeGLObjectBuffers
        
            typedef void ( ::osg::StateAttribute::*resizeGLObjectBuffers_function_type)( unsigned int ) ;
            typedef void ( BlendEquation_wrapper::*default_resizeGLObjectBuffers_function_type)( unsigned int ) ;
            
            BlendEquation_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::StateAttribute::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&BlendEquation_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( ::std::string const & ) ;
            typedef void ( BlendEquation_wrapper::*default_setName_function_type)( ::std::string const & ) ;
            
            BlendEquation_exposer.def( 
                "setName"
                , setName_function_type(&::osg::Object::setName)
                , default_setName_function_type(&BlendEquation_wrapper::default_setName)
                , ( bp::arg("name") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( char const * ) ;
            
            BlendEquation_exposer.def( 
                "setName"
                , setName_function_type( &::osg::Object::setName )
                , ( bp::arg("name") )
                , " Set the name of object using a C style string." );
        
        }
        { //::osg::Object::setThreadSafeRefUnref
        
            typedef void ( ::osg::Object::*setThreadSafeRefUnref_function_type)( bool ) ;
            typedef void ( BlendEquation_wrapper::*default_setThreadSafeRefUnref_function_type)( bool ) ;
            
            BlendEquation_exposer.def( 
                "setThreadSafeRefUnref"
                , setThreadSafeRefUnref_function_type(&::osg::Object::setThreadSafeRefUnref)
                , default_setThreadSafeRefUnref_function_type(&BlendEquation_wrapper::default_setThreadSafeRefUnref)
                , ( bp::arg("threadSafe") ) );
        
        }
        { //::osg::Object::setUserData
        
            typedef void ( ::osg::Object::*setUserData_function_type)( ::osg::Referenced * ) ;
            typedef void ( BlendEquation_wrapper::*default_setUserData_function_type)( ::osg::Referenced * ) ;
            
            BlendEquation_exposer.def( 
                "setUserData"
                , setUserData_function_type(&::osg::Object::setUserData)
                , default_setUserData_function_type(&BlendEquation_wrapper::default_setUserData)
                , ( bp::arg("obj") ) );
        
        }
        BlendEquation_exposer.staticmethod( "getExtensions" );
        BlendEquation_exposer.staticmethod( "setExtensions" );
    }

}