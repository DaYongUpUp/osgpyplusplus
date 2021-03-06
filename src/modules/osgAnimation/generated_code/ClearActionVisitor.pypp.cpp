// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osganimation.h"
#include "wrap_referenced.h"
#include "clearactionvisitor.pypp.hpp"

namespace bp = boost::python;

struct ClearActionVisitor_wrapper : osgAnimation::ClearActionVisitor, bp::wrapper< osgAnimation::ClearActionVisitor > {

    ClearActionVisitor_wrapper(::osgAnimation::ClearActionVisitor::ClearType type=::osgAnimation::ClearActionVisitor::BEFORE_FRAME )
    : osgAnimation::ClearActionVisitor( type )
      , bp::wrapper< osgAnimation::ClearActionVisitor >(){
        // constructor
    
    }

    virtual void apply( ::osgAnimation::Timeline & action ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(action) );
        else{
            this->osgAnimation::ClearActionVisitor::apply( boost::ref(action) );
        }
    }
    
    void default_apply( ::osgAnimation::Timeline & action ) {
        osgAnimation::ClearActionVisitor::apply( boost::ref(action) );
    }

    virtual void apply( ::osgAnimation::Action & action ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(action) );
        else{
            this->osgAnimation::ClearActionVisitor::apply( boost::ref(action) );
        }
    }
    
    void default_apply( ::osgAnimation::Action & action ) {
        osgAnimation::ClearActionVisitor::apply( boost::ref(action) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgAnimation::ClearActionVisitor::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgAnimation::ClearActionVisitor::className( );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgAnimation::ClearActionVisitor::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgAnimation::ClearActionVisitor::libraryName( );
    }

    virtual void apply( ::osgAnimation::ActionBlendIn & action ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(action) );
        else{
            this->osgAnimation::ActionVisitor::apply( boost::ref(action) );
        }
    }
    
    void default_apply( ::osgAnimation::ActionBlendIn & action ) {
        osgAnimation::ActionVisitor::apply( boost::ref(action) );
    }

    virtual void apply( ::osgAnimation::ActionBlendOut & action ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(action) );
        else{
            this->osgAnimation::ActionVisitor::apply( boost::ref(action) );
        }
    }
    
    void default_apply( ::osgAnimation::ActionBlendOut & action ) {
        osgAnimation::ActionVisitor::apply( boost::ref(action) );
    }

    virtual void apply( ::osgAnimation::ActionAnimation & action ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(action) );
        else{
            this->osgAnimation::ActionVisitor::apply( boost::ref(action) );
        }
    }
    
    void default_apply( ::osgAnimation::ActionAnimation & action ) {
        osgAnimation::ActionVisitor::apply( boost::ref(action) );
    }

    virtual void apply( ::osgAnimation::ActionStripAnimation & action ) {
        if( bp::override func_apply = this->get_override( "apply" ) )
            func_apply( boost::ref(action) );
        else{
            this->osgAnimation::ActionVisitor::apply( boost::ref(action) );
        }
    }
    
    void default_apply( ::osgAnimation::ActionStripAnimation & action ) {
        osgAnimation::ActionVisitor::apply( boost::ref(action) );
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

void register_ClearActionVisitor_class(){

    { //::osgAnimation::ClearActionVisitor
        typedef bp::class_< ClearActionVisitor_wrapper, bp::bases< osgAnimation::ActionVisitor >, osg::ref_ptr< ClearActionVisitor_wrapper >, boost::noncopyable > ClearActionVisitor_exposer_t;
        ClearActionVisitor_exposer_t ClearActionVisitor_exposer = ClearActionVisitor_exposer_t( "ClearActionVisitor", bp::init< bp::optional< osgAnimation::ClearActionVisitor::ClearType > >(( bp::arg("type")=(long)(::osgAnimation::ClearActionVisitor::BEFORE_FRAME) )) );
        bp::scope ClearActionVisitor_scope( ClearActionVisitor_exposer );
        bp::enum_< osgAnimation::ClearActionVisitor::ClearType>("ClearType")
            .value("BEFORE_FRAME", osgAnimation::ClearActionVisitor::BEFORE_FRAME)
            .value("AFTER_FRAME", osgAnimation::ClearActionVisitor::AFTER_FRAME)
            .export_values()
            ;
        bp::implicitly_convertible< osgAnimation::ClearActionVisitor::ClearType, osgAnimation::ClearActionVisitor >();
        { //::osgAnimation::ClearActionVisitor::apply
        
            typedef void ( ::osgAnimation::ClearActionVisitor::*apply_function_type)( ::osgAnimation::Timeline & ) ;
            typedef void ( ClearActionVisitor_wrapper::*default_apply_function_type)( ::osgAnimation::Timeline & ) ;
            
            ClearActionVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgAnimation::ClearActionVisitor::apply)
                , default_apply_function_type(&ClearActionVisitor_wrapper::default_apply)
                , ( bp::arg("action") ) );
        
        }
        { //::osgAnimation::ClearActionVisitor::apply
        
            typedef void ( ::osgAnimation::ClearActionVisitor::*apply_function_type)( ::osgAnimation::Action & ) ;
            typedef void ( ClearActionVisitor_wrapper::*default_apply_function_type)( ::osgAnimation::Action & ) ;
            
            ClearActionVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgAnimation::ClearActionVisitor::apply)
                , default_apply_function_type(&ClearActionVisitor_wrapper::default_apply)
                , ( bp::arg("action") ) );
        
        }
        { //::osgAnimation::ClearActionVisitor::className
        
            typedef char const * ( ::osgAnimation::ClearActionVisitor::*className_function_type)(  ) const;
            typedef char const * ( ClearActionVisitor_wrapper::*default_className_function_type)(  ) const;
            
            ClearActionVisitor_exposer.def( 
                "className"
                , className_function_type(&::osgAnimation::ClearActionVisitor::className)
                , default_className_function_type(&ClearActionVisitor_wrapper::default_className) );
        
        }
        { //::osgAnimation::ClearActionVisitor::libraryName
        
            typedef char const * ( ::osgAnimation::ClearActionVisitor::*libraryName_function_type)(  ) const;
            typedef char const * ( ClearActionVisitor_wrapper::*default_libraryName_function_type)(  ) const;
            
            ClearActionVisitor_exposer.def( 
                "libraryName"
                , libraryName_function_type(&::osgAnimation::ClearActionVisitor::libraryName)
                , default_libraryName_function_type(&ClearActionVisitor_wrapper::default_libraryName) );
        
        }
        { //::osgAnimation::ClearActionVisitor::setFrame
        
            typedef void ( ::osgAnimation::ClearActionVisitor::*setFrame_function_type)( unsigned int ) ;
            
            ClearActionVisitor_exposer.def( 
                "setFrame"
                , setFrame_function_type( &::osgAnimation::ClearActionVisitor::setFrame )
                , ( bp::arg("frame") ) );
        
        }
        { //::osgAnimation::ActionVisitor::apply
        
            typedef void ( ::osgAnimation::ActionVisitor::*apply_function_type)( ::osgAnimation::ActionBlendIn & ) ;
            typedef void ( ClearActionVisitor_wrapper::*default_apply_function_type)( ::osgAnimation::ActionBlendIn & ) ;
            
            ClearActionVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgAnimation::ActionVisitor::apply)
                , default_apply_function_type(&ClearActionVisitor_wrapper::default_apply)
                , ( bp::arg("action") ) );
        
        }
        { //::osgAnimation::ActionVisitor::apply
        
            typedef void ( ::osgAnimation::ActionVisitor::*apply_function_type)( ::osgAnimation::ActionBlendOut & ) ;
            typedef void ( ClearActionVisitor_wrapper::*default_apply_function_type)( ::osgAnimation::ActionBlendOut & ) ;
            
            ClearActionVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgAnimation::ActionVisitor::apply)
                , default_apply_function_type(&ClearActionVisitor_wrapper::default_apply)
                , ( bp::arg("action") ) );
        
        }
        { //::osgAnimation::ActionVisitor::apply
        
            typedef void ( ::osgAnimation::ActionVisitor::*apply_function_type)( ::osgAnimation::ActionAnimation & ) ;
            typedef void ( ClearActionVisitor_wrapper::*default_apply_function_type)( ::osgAnimation::ActionAnimation & ) ;
            
            ClearActionVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgAnimation::ActionVisitor::apply)
                , default_apply_function_type(&ClearActionVisitor_wrapper::default_apply)
                , ( bp::arg("action") ) );
        
        }
        { //::osgAnimation::ActionVisitor::apply
        
            typedef void ( ::osgAnimation::ActionVisitor::*apply_function_type)( ::osgAnimation::ActionStripAnimation & ) ;
            typedef void ( ClearActionVisitor_wrapper::*default_apply_function_type)( ::osgAnimation::ActionStripAnimation & ) ;
            
            ClearActionVisitor_exposer.def( 
                "apply"
                , apply_function_type(&::osgAnimation::ActionVisitor::apply)
                , default_apply_function_type(&ClearActionVisitor_wrapper::default_apply)
                , ( bp::arg("action") ) );
        
        }
    }

}
