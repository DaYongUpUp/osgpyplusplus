// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "stateattribute.pypp.hpp"

namespace bp = boost::python;

struct StateAttribute_wrapper : osg::StateAttribute, bp::wrapper< osg::StateAttribute > {

    struct ModeUsage_wrapper : osg::StateAttribute::ModeUsage, bp::wrapper< osg::StateAttribute::ModeUsage > {
    
        ModeUsage_wrapper()
        : osg::StateAttribute::ModeUsage()
          , bp::wrapper< osg::StateAttribute::ModeUsage >(){
            // null constructor
            
        }
    
        virtual void usesMode( ::GLenum mode ){
            bp::override func_usesMode = this->get_override( "usesMode" );
            func_usesMode( mode );
        }
    
        virtual void usesTextureMode( ::GLenum mode ){
            bp::override func_usesTextureMode = this->get_override( "usesTextureMode" );
            func_usesTextureMode( mode );
        }
    
    };

    virtual void apply( ::osg::State & arg0 ) const  {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(arg0) );
        else{
            this->osg::StateAttribute::apply( boost::ref(arg0) );
        }
    }
    
    void default_apply( ::osg::State & arg0 ) const  {
        osg::StateAttribute::apply( boost::ref(arg0) );
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

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::StateAttribute::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::StateAttribute::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & arg0 ) const {
        bp::override func_clone = this->get_override( "clone" );
        return func_clone( boost::ref(arg0) );
    }

    virtual ::osg::Object * cloneType(  ) const {
        bp::override func_cloneType = this->get_override( "cloneType" );
        return func_cloneType(  );
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

    virtual ::osg::StateAttribute::Type getType(  ) const {
        bp::override func_getType = this->get_override( "getType" );
        return func_getType(  );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::StateAttribute::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::StateAttribute::isSameKindAs( boost::python::ptr(obj) );
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

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::StateAttribute::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::StateAttribute::libraryName( );
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

void register_StateAttribute_class(){

    { //::osg::StateAttribute
        typedef bp::class_< StateAttribute_wrapper, bp::bases< osg::Object >, osg::ref_ptr< ::osg::StateAttribute >, boost::noncopyable > StateAttribute_exposer_t;
        StateAttribute_exposer_t StateAttribute_exposer = StateAttribute_exposer_t( "StateAttribute", "\n Base class for state attributes.\n", bp::no_init );
        bp::scope StateAttribute_scope( StateAttribute_exposer );
        bp::enum_< osg::StateAttribute::Type>("Type")
            .value("TEXTURE", osg::StateAttribute::TEXTURE)
            .value("POLYGONMODE", osg::StateAttribute::POLYGONMODE)
            .value("POLYGONOFFSET", osg::StateAttribute::POLYGONOFFSET)
            .value("MATERIAL", osg::StateAttribute::MATERIAL)
            .value("ALPHAFUNC", osg::StateAttribute::ALPHAFUNC)
            .value("ANTIALIAS", osg::StateAttribute::ANTIALIAS)
            .value("COLORTABLE", osg::StateAttribute::COLORTABLE)
            .value("CULLFACE", osg::StateAttribute::CULLFACE)
            .value("FOG", osg::StateAttribute::FOG)
            .value("FRONTFACE", osg::StateAttribute::FRONTFACE)
            .value("LIGHT", osg::StateAttribute::LIGHT)
            .value("POINT", osg::StateAttribute::POINT)
            .value("LINEWIDTH", osg::StateAttribute::LINEWIDTH)
            .value("LINESTIPPLE", osg::StateAttribute::LINESTIPPLE)
            .value("POLYGONSTIPPLE", osg::StateAttribute::POLYGONSTIPPLE)
            .value("SHADEMODEL", osg::StateAttribute::SHADEMODEL)
            .value("TEXENV", osg::StateAttribute::TEXENV)
            .value("TEXENVFILTER", osg::StateAttribute::TEXENVFILTER)
            .value("TEXGEN", osg::StateAttribute::TEXGEN)
            .value("TEXMAT", osg::StateAttribute::TEXMAT)
            .value("LIGHTMODEL", osg::StateAttribute::LIGHTMODEL)
            .value("BLENDFUNC", osg::StateAttribute::BLENDFUNC)
            .value("BLENDEQUATION", osg::StateAttribute::BLENDEQUATION)
            .value("LOGICOP", osg::StateAttribute::LOGICOP)
            .value("STENCIL", osg::StateAttribute::STENCIL)
            .value("COLORMASK", osg::StateAttribute::COLORMASK)
            .value("DEPTH", osg::StateAttribute::DEPTH)
            .value("VIEWPORT", osg::StateAttribute::VIEWPORT)
            .value("SCISSOR", osg::StateAttribute::SCISSOR)
            .value("BLENDCOLOR", osg::StateAttribute::BLENDCOLOR)
            .value("MULTISAMPLE", osg::StateAttribute::MULTISAMPLE)
            .value("CLIPPLANE", osg::StateAttribute::CLIPPLANE)
            .value("COLORMATRIX", osg::StateAttribute::COLORMATRIX)
            .value("VERTEXPROGRAM", osg::StateAttribute::VERTEXPROGRAM)
            .value("FRAGMENTPROGRAM", osg::StateAttribute::FRAGMENTPROGRAM)
            .value("POINTSPRITE", osg::StateAttribute::POINTSPRITE)
            .value("PROGRAM", osg::StateAttribute::PROGRAM)
            .value("CLAMPCOLOR", osg::StateAttribute::CLAMPCOLOR)
            .value("HINT", osg::StateAttribute::HINT)
            .value("SAMPLEMASKI", osg::StateAttribute::SAMPLEMASKI)
            .value("PRIMITIVERESTARTINDEX", osg::StateAttribute::PRIMITIVERESTARTINDEX)
            .value("VALIDATOR", osg::StateAttribute::VALIDATOR)
            .value("VIEWMATRIXEXTRACTOR", osg::StateAttribute::VIEWMATRIXEXTRACTOR)
            .value("OSGNV_PARAMETER_BLOCK", osg::StateAttribute::OSGNV_PARAMETER_BLOCK)
            .value("OSGNVEXT_TEXTURE_SHADER", osg::StateAttribute::OSGNVEXT_TEXTURE_SHADER)
            .value("OSGNVEXT_VERTEX_PROGRAM", osg::StateAttribute::OSGNVEXT_VERTEX_PROGRAM)
            .value("OSGNVEXT_REGISTER_COMBINERS", osg::StateAttribute::OSGNVEXT_REGISTER_COMBINERS)
            .value("OSGNVCG_PROGRAM", osg::StateAttribute::OSGNVCG_PROGRAM)
            .value("OSGNVSLANG_PROGRAM", osg::StateAttribute::OSGNVSLANG_PROGRAM)
            .value("OSGNVPARSE_PROGRAM_PARSER", osg::StateAttribute::OSGNVPARSE_PROGRAM_PARSER)
            .value("UNIFORMBUFFERBINDING", osg::StateAttribute::UNIFORMBUFFERBINDING)
            .value("TRANSFORMFEEDBACKBUFFERBINDING", osg::StateAttribute::TRANSFORMFEEDBACKBUFFERBINDING)
            .value("ATOMICCOUNTERBUFFERBINDING", osg::StateAttribute::ATOMICCOUNTERBUFFERBINDING)
            .value("PATCH_PARAMETER", osg::StateAttribute::PATCH_PARAMETER)
            .value("FRAME_BUFFER_OBJECT", osg::StateAttribute::FRAME_BUFFER_OBJECT)
            .export_values()
            ;
        bp::enum_< osg::StateAttribute::Values>("Values")
            .value("OFF", osg::StateAttribute::OFF)
            .value("ON", osg::StateAttribute::ON)
            .value("OVERRIDE", osg::StateAttribute::OVERRIDE)
            .value("PROTECTED", osg::StateAttribute::PROTECTED)
            .value("INHERIT", osg::StateAttribute::INHERIT)
            .export_values()
            ;
        bp::class_< StateAttribute_wrapper::ModeUsage_wrapper, boost::noncopyable >( "ModeUsage" )    
            .def( 
                "usesMode"
                , bp::pure_virtual( (void ( ::osg::StateAttribute::ModeUsage::* )( ::GLenum ))(&::osg::StateAttribute::ModeUsage::usesMode) )
                , ( bp::arg("mode") ) )    
            .def( 
                "usesTextureMode"
                , bp::pure_virtual( (void ( ::osg::StateAttribute::ModeUsage::* )( ::GLenum ))(&::osg::StateAttribute::ModeUsage::usesTextureMode) )
                , ( bp::arg("mode") ) );
        { //::osg::StateAttribute::apply
        
            typedef void ( ::osg::StateAttribute::*apply_function_type)( ::osg::State & ) const;
            typedef void ( StateAttribute_wrapper::*default_apply_function_type)( ::osg::State & ) const;
            
            StateAttribute_exposer.def( 
                "apply"
                , apply_function_type(&::osg::StateAttribute::apply)
                , default_apply_function_type(&StateAttribute_wrapper::default_apply)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture * ( ::osg::StateAttribute::*asTexture_function_type)(  ) ;
            typedef ::osg::Texture * ( StateAttribute_wrapper::*default_asTexture_function_type)(  ) ;
            
            StateAttribute_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&StateAttribute_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::asTexture
        
            typedef ::osg::Texture const * ( ::osg::StateAttribute::*asTexture_function_type)(  ) const;
            typedef ::osg::Texture const * ( StateAttribute_wrapper::*default_asTexture_function_type)(  ) const;
            
            StateAttribute_exposer.def( 
                "asTexture"
                , asTexture_function_type(&::osg::StateAttribute::asTexture)
                , default_asTexture_function_type(&StateAttribute_wrapper::default_asTexture)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::checkValidityOfAssociatedModes
        
            typedef bool ( ::osg::StateAttribute::*checkValidityOfAssociatedModes_function_type)( ::osg::State & ) const;
            typedef bool ( StateAttribute_wrapper::*default_checkValidityOfAssociatedModes_function_type)( ::osg::State & ) const;
            
            StateAttribute_exposer.def( 
                "checkValidityOfAssociatedModes"
                , checkValidityOfAssociatedModes_function_type(&::osg::StateAttribute::checkValidityOfAssociatedModes)
                , default_checkValidityOfAssociatedModes_function_type(&StateAttribute_wrapper::default_checkValidityOfAssociatedModes)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::className
        
            typedef char const * ( ::osg::StateAttribute::*className_function_type)(  ) const;
            typedef char const * ( StateAttribute_wrapper::*default_className_function_type)(  ) const;
            
            StateAttribute_exposer.def( 
                "className"
                , className_function_type(&::osg::StateAttribute::className)
                , default_className_function_type(&StateAttribute_wrapper::default_className) );
        
        }
        { //::osg::StateAttribute::clone
        
            typedef ::osg::Object * ( ::osg::StateAttribute::*clone_function_type)( ::osg::CopyOp const & ) const;
            
            StateAttribute_exposer.def( 
                "clone"
                , bp::pure_virtual( clone_function_type(&::osg::StateAttribute::clone) )
                , ( bp::arg("arg0") )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "\n Clone an attribute, with Object* return type.\n            Must be defined by derived classes.\n" );
        
        }
        { //::osg::StateAttribute::cloneType
        
            typedef ::osg::Object * ( ::osg::StateAttribute::*cloneType_function_type)(  ) const;
            
            StateAttribute_exposer.def( 
                "cloneType"
                , bp::pure_virtual( cloneType_function_type(&::osg::StateAttribute::cloneType) )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "\n Clone the type of an attribute, with Object* return type.\n            Must be defined by derived classes.\n" );
        
        }
        { //::osg::StateAttribute::compileGLObjects
        
            typedef void ( ::osg::StateAttribute::*compileGLObjects_function_type)( ::osg::State & ) const;
            typedef void ( StateAttribute_wrapper::*default_compileGLObjects_function_type)( ::osg::State & ) const;
            
            StateAttribute_exposer.def( 
                "compileGLObjects"
                , compileGLObjects_function_type(&::osg::StateAttribute::compileGLObjects)
                , default_compileGLObjects_function_type(&StateAttribute_wrapper::default_compileGLObjects)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::getEventCallback
        
            typedef ::osg::StateAttributeCallback * ( ::osg::StateAttribute::*getEventCallback_function_type)(  ) ;
            
            StateAttribute_exposer.def( 
                "getEventCallback"
                , getEventCallback_function_type( &::osg::StateAttribute::getEventCallback )
                , bp::return_internal_reference< >()
                , " Get the non const EventCallback." );
        
        }
        { //::osg::StateAttribute::getEventCallback
        
            typedef ::osg::StateAttributeCallback const * ( ::osg::StateAttribute::*getEventCallback_function_type)(  ) const;
            
            StateAttribute_exposer.def( 
                "getEventCallback"
                , getEventCallback_function_type( &::osg::StateAttribute::getEventCallback )
                , bp::return_internal_reference< >()
                , " Get the const EventCallback." );
        
        }
        { //::osg::StateAttribute::getMember
        
            typedef unsigned int ( ::osg::StateAttribute::*getMember_function_type)(  ) const;
            typedef unsigned int ( StateAttribute_wrapper::*default_getMember_function_type)(  ) const;
            
            StateAttribute_exposer.def( 
                "getMember"
                , getMember_function_type(&::osg::StateAttribute::getMember)
                , default_getMember_function_type(&StateAttribute_wrapper::default_getMember) );
        
        }
        { //::osg::StateAttribute::getModeUsage
        
            typedef bool ( ::osg::StateAttribute::*getModeUsage_function_type)( ::osg::StateAttribute::ModeUsage & ) const;
            typedef bool ( StateAttribute_wrapper::*default_getModeUsage_function_type)( ::osg::StateAttribute::ModeUsage & ) const;
            
            StateAttribute_exposer.def( 
                "getModeUsage"
                , getModeUsage_function_type(&::osg::StateAttribute::getModeUsage)
                , default_getModeUsage_function_type(&StateAttribute_wrapper::default_getModeUsage)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::getNumParents
        
            typedef unsigned int ( ::osg::StateAttribute::*getNumParents_function_type)(  ) const;
            
            StateAttribute_exposer.def( 
                "getNumParents"
                , getNumParents_function_type( &::osg::StateAttribute::getNumParents )
                , " Get the number of parents of this StateAttribute.\n Return: the number of parents of this StateAttribute." );
        
        }
        { //::osg::StateAttribute::getParent
        
            typedef ::osg::StateSet * ( ::osg::StateAttribute::*getParent_function_type)( unsigned int ) ;
            
            StateAttribute_exposer.def( 
                "getParent"
                , getParent_function_type( &::osg::StateAttribute::getParent )
                , ( bp::arg("i") )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::getParent
        
            typedef ::osg::StateSet const * ( ::osg::StateAttribute::*getParent_function_type)( unsigned int ) const;
            
            StateAttribute_exposer.def( 
                "getParent"
                , getParent_function_type( &::osg::StateAttribute::getParent )
                , ( bp::arg("i") )
                , bp::return_internal_reference< >()
                , " Get a single const parent of this StateAttribute.\n @param i: index of the parent to get.\n Return: the parent i." );
        
        }
        { //::osg::StateAttribute::getParents
        
            typedef ::std::vector< osg::StateSet* > const & ( ::osg::StateAttribute::*getParents_function_type)(  ) const;
            
            StateAttribute_exposer.def( 
                "getParents"
                , getParents_function_type( &::osg::StateAttribute::getParents )
                , bp::return_internal_reference< >()
                , " Get the parent list of this StateAttribute." );
        
        }
        { //::osg::StateAttribute::getShaderComponent
        
            typedef ::osg::ShaderComponent * ( ::osg::StateAttribute::*getShaderComponent_function_type)(  ) ;
            
            StateAttribute_exposer.def( 
                "getShaderComponent"
                , getShaderComponent_function_type( &::osg::StateAttribute::getShaderComponent )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::getShaderComponent
        
            typedef ::osg::ShaderComponent const * ( ::osg::StateAttribute::*getShaderComponent_function_type)(  ) const;
            
            StateAttribute_exposer.def( 
                "getShaderComponent"
                , getShaderComponent_function_type( &::osg::StateAttribute::getShaderComponent )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::StateAttribute::getType
        
            typedef ::osg::StateAttribute::Type ( ::osg::StateAttribute::*getType_function_type)(  ) const;
            
            StateAttribute_exposer.def( 
                "getType"
                , bp::pure_virtual( getType_function_type(&::osg::StateAttribute::getType) )
                , "\n Return the Type identifier of the attributes class type.\n" );
        
        }
        { //::osg::StateAttribute::getTypeMemberPair
        
            typedef ::std::pair< osg::StateAttribute::Type, unsigned int > ( ::osg::StateAttribute::*getTypeMemberPair_function_type)(  ) const;
            
            StateAttribute_exposer.def( 
                "getTypeMemberPair"
                , getTypeMemberPair_function_type( &::osg::StateAttribute::getTypeMemberPair )
                , " Return the TypeMemberPair that uniquely identifies this type member." );
        
        }
        { //::osg::StateAttribute::getUpdateCallback
        
            typedef ::osg::StateAttributeCallback * ( ::osg::StateAttribute::*getUpdateCallback_function_type)(  ) ;
            
            StateAttribute_exposer.def( 
                "getUpdateCallback"
                , getUpdateCallback_function_type( &::osg::StateAttribute::getUpdateCallback )
                , bp::return_internal_reference< >()
                , " Get the non const UpdateCallback." );
        
        }
        { //::osg::StateAttribute::getUpdateCallback
        
            typedef ::osg::StateAttributeCallback const * ( ::osg::StateAttribute::*getUpdateCallback_function_type)(  ) const;
            
            StateAttribute_exposer.def( 
                "getUpdateCallback"
                , getUpdateCallback_function_type( &::osg::StateAttribute::getUpdateCallback )
                , bp::return_internal_reference< >()
                , " Get the const UpdateCallback." );
        
        }
        { //::osg::StateAttribute::isSameKindAs
        
            typedef bool ( ::osg::StateAttribute::*isSameKindAs_function_type)( ::osg::Object const * ) const;
            typedef bool ( StateAttribute_wrapper::*default_isSameKindAs_function_type)( ::osg::Object const * ) const;
            
            StateAttribute_exposer.def( 
                "isSameKindAs"
                , isSameKindAs_function_type(&::osg::StateAttribute::isSameKindAs)
                , default_isSameKindAs_function_type(&StateAttribute_wrapper::default_isSameKindAs)
                , ( bp::arg("obj") ) );
        
        }
        { //::osg::StateAttribute::isTextureAttribute
        
            typedef bool ( ::osg::StateAttribute::*isTextureAttribute_function_type)(  ) const;
            typedef bool ( StateAttribute_wrapper::*default_isTextureAttribute_function_type)(  ) const;
            
            StateAttribute_exposer.def( 
                "isTextureAttribute"
                , isTextureAttribute_function_type(&::osg::StateAttribute::isTextureAttribute)
                , default_isTextureAttribute_function_type(&StateAttribute_wrapper::default_isTextureAttribute) );
        
        }
        { //::osg::StateAttribute::libraryName
        
            typedef char const * ( ::osg::StateAttribute::*libraryName_function_type)(  ) const;
            typedef char const * ( StateAttribute_wrapper::*default_libraryName_function_type)(  ) const;
            
            StateAttribute_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osg::StateAttribute::libraryName)
                , default_libraryName_function_type(&StateAttribute_wrapper::default_libraryName) );
        
        }
        { //::osg::StateAttribute::resizeGLObjectBuffers
        
            typedef void ( ::osg::StateAttribute::*resizeGLObjectBuffers_function_type)( unsigned int ) ;
            typedef void ( StateAttribute_wrapper::*default_resizeGLObjectBuffers_function_type)( unsigned int ) ;
            
            StateAttribute_exposer.def( 
                "resizeGLObjectBuffers"
                , resizeGLObjectBuffers_function_type(&::osg::StateAttribute::resizeGLObjectBuffers)
                , default_resizeGLObjectBuffers_function_type(&StateAttribute_wrapper::default_resizeGLObjectBuffers)
                , ( bp::arg("arg0") ) );
        
        }
        { //::osg::StateAttribute::setEventCallback
        
            typedef void ( ::osg::StateAttribute::*setEventCallback_function_type)( ::osg::StateAttributeCallback * ) ;
            
            StateAttribute_exposer.def( 
                "setEventCallback"
                , setEventCallback_function_type( &::osg::StateAttribute::setEventCallback )
                , ( bp::arg("ec") )
                , " Set the EventCallback which allows users to attach customize the updating of an object during the Event traversal." );
        
        }
        { //::osg::StateAttribute::setShaderComponent
        
            typedef void ( ::osg::StateAttribute::*setShaderComponent_function_type)( ::osg::ShaderComponent * ) ;
            
            StateAttribute_exposer.def( 
                "setShaderComponent"
                , setShaderComponent_function_type( &::osg::StateAttribute::setShaderComponent )
                , ( bp::arg("sc") ) );
        
        }
        { //::osg::StateAttribute::setUpdateCallback
        
            typedef void ( ::osg::StateAttribute::*setUpdateCallback_function_type)( ::osg::StateAttributeCallback * ) ;
            
            StateAttribute_exposer.def( 
                "setUpdateCallback"
                , setUpdateCallback_function_type( &::osg::StateAttribute::setUpdateCallback )
                , ( bp::arg("uc") )
                , " Set the UpdateCallback which allows users to attach customize the updating of an object during the update traversal." );
        
        }
        { //::osg::Object::computeDataVariance
        
            typedef void ( ::osg::Object::*computeDataVariance_function_type)(  ) ;
            typedef void ( StateAttribute_wrapper::*default_computeDataVariance_function_type)(  ) ;
            
            StateAttribute_exposer.def( 
                "computeDataVariance"
                , computeDataVariance_function_type(&::osg::Object::computeDataVariance)
                , default_computeDataVariance_function_type(&StateAttribute_wrapper::default_computeDataVariance) );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced * ( ::osg::Object::*getUserData_function_type)(  ) ;
            typedef ::osg::Referenced * ( StateAttribute_wrapper::*default_getUserData_function_type)(  ) ;
            
            StateAttribute_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&StateAttribute_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::getUserData
        
            typedef ::osg::Referenced const * ( ::osg::Object::*getUserData_function_type)(  ) const;
            typedef ::osg::Referenced const * ( StateAttribute_wrapper::*default_getUserData_function_type)(  ) const;
            
            StateAttribute_exposer.def( 
                "getUserData"
                , getUserData_function_type(&::osg::Object::getUserData)
                , default_getUserData_function_type(&StateAttribute_wrapper::default_getUserData)
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( ::std::string const & ) ;
            typedef void ( StateAttribute_wrapper::*default_setName_function_type)( ::std::string const & ) ;
            
            StateAttribute_exposer.def( 
                "setName"
                , setName_function_type(&::osg::Object::setName)
                , default_setName_function_type(&StateAttribute_wrapper::default_setName)
                , ( bp::arg("name") ) );
        
        }
        { //::osg::Object::setName
        
            typedef void ( ::osg::Object::*setName_function_type)( char const * ) ;
            
            StateAttribute_exposer.def( 
                "setName"
                , setName_function_type( &::osg::Object::setName )
                , ( bp::arg("name") )
                , " Set the name of object using a C style string." );
        
        }
        { //::osg::Object::setThreadSafeRefUnref
        
            typedef void ( ::osg::Object::*setThreadSafeRefUnref_function_type)( bool ) ;
            typedef void ( StateAttribute_wrapper::*default_setThreadSafeRefUnref_function_type)( bool ) ;
            
            StateAttribute_exposer.def( 
                "setThreadSafeRefUnref"
                , setThreadSafeRefUnref_function_type(&::osg::Object::setThreadSafeRefUnref)
                , default_setThreadSafeRefUnref_function_type(&StateAttribute_wrapper::default_setThreadSafeRefUnref)
                , ( bp::arg("threadSafe") ) );
        
        }
        { //::osg::Object::setUserData
        
            typedef void ( ::osg::Object::*setUserData_function_type)( ::osg::Referenced * ) ;
            typedef void ( StateAttribute_wrapper::*default_setUserData_function_type)( ::osg::Referenced * ) ;
            
            StateAttribute_exposer.def( 
                "setUserData"
                , setUserData_function_type(&::osg::Object::setUserData)
                , default_setUserData_function_type(&StateAttribute_wrapper::default_setUserData)
                , ( bp::arg("obj") ) );
        
        }
    }

}
