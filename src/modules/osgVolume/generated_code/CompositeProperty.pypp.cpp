// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgvolume.h"
#include "wrap_referenced.h"
#include "compositeproperty.pypp.hpp"

namespace bp = boost::python;

struct CompositeProperty_wrapper : osgVolume::CompositeProperty, bp::wrapper< osgVolume::CompositeProperty > {

    CompositeProperty_wrapper( )
    : osgVolume::CompositeProperty( )
      , bp::wrapper< osgVolume::CompositeProperty >(){
        // null constructor
    
    }

    virtual void accept( ::osgVolume::PropertyVisitor & pv ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(pv) );
        else{
            this->osgVolume::CompositeProperty::accept( boost::ref(pv) );
        }
    }
    
    void default_accept( ::osgVolume::PropertyVisitor & pv ) {
        osgVolume::CompositeProperty::accept( boost::ref(pv) );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osgVolume::CompositeProperty::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osgVolume::CompositeProperty::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osgVolume::CompositeProperty::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osgVolume::CompositeProperty::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osgVolume::CompositeProperty::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osgVolume::CompositeProperty::cloneType( );
    }

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osgVolume::CompositeProperty::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osgVolume::CompositeProperty::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osgVolume::CompositeProperty::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osgVolume::CompositeProperty::libraryName( );
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

void register_CompositeProperty_class(){

    bp::class_< CompositeProperty_wrapper, bp::bases< osgVolume::Property >, osg::ref_ptr< CompositeProperty_wrapper >, boost::noncopyable >( "CompositeProperty", bp::no_init )    
        .def( bp::init< >() )    
        .def( 
            "accept"
            , (void ( ::osgVolume::CompositeProperty::* )( ::osgVolume::PropertyVisitor & ))(&::osgVolume::CompositeProperty::accept)
            , (void ( CompositeProperty_wrapper::* )( ::osgVolume::PropertyVisitor & ))(&CompositeProperty_wrapper::default_accept)
            , ( bp::arg("pv") ) )    
        .def( 
            "addProperty"
            , (void ( ::osgVolume::CompositeProperty::* )( ::osgVolume::Property * ))( &::osgVolume::CompositeProperty::addProperty )
            , ( bp::arg("property") ) )    
        .def( 
            "className"
            , (char const * ( ::osgVolume::CompositeProperty::* )(  )const)(&::osgVolume::CompositeProperty::className)
            , (char const * ( CompositeProperty_wrapper::* )(  )const)(&CompositeProperty_wrapper::default_className) )    
        .def( 
            "clear"
            , (void ( ::osgVolume::CompositeProperty::* )(  ))( &::osgVolume::CompositeProperty::clear ) )    
        .def( 
            "clone"
            , (::osg::Object * ( ::osgVolume::CompositeProperty::* )( ::osg::CopyOp const & )const)(&::osgVolume::CompositeProperty::clone)
            , (::osg::Object * ( CompositeProperty_wrapper::* )( ::osg::CopyOp const & )const)(&CompositeProperty_wrapper::default_clone)
            , ( bp::arg("copyop") )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "cloneType"
            , (::osg::Object * ( ::osgVolume::CompositeProperty::* )(  )const)(&::osgVolume::CompositeProperty::cloneType)
            , (::osg::Object * ( CompositeProperty_wrapper::* )(  )const)(&CompositeProperty_wrapper::default_cloneType)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "getNumProperties"
            , (unsigned int ( ::osgVolume::CompositeProperty::* )(  )const)( &::osgVolume::CompositeProperty::getNumProperties ) )    
        .def( 
            "getProperty"
            , (::osgVolume::Property * ( ::osgVolume::CompositeProperty::* )( unsigned int ))( &::osgVolume::CompositeProperty::getProperty )
            , ( bp::arg("i") )
            , bp::return_internal_reference< >() )    
        .def( 
            "getProperty"
            , (::osgVolume::Property const * ( ::osgVolume::CompositeProperty::* )( unsigned int )const)( &::osgVolume::CompositeProperty::getProperty )
            , ( bp::arg("i") )
            , bp::return_internal_reference< >() )    
        .def( 
            "isSameKindAs"
            , (bool ( ::osgVolume::CompositeProperty::* )( ::osg::Object const * )const)(&::osgVolume::CompositeProperty::isSameKindAs)
            , (bool ( CompositeProperty_wrapper::* )( ::osg::Object const * )const)(&CompositeProperty_wrapper::default_isSameKindAs)
            , ( bp::arg("obj") ) )    
        .def( 
            "libraryName"
            , (char const * ( ::osgVolume::CompositeProperty::* )(  )const)(&::osgVolume::CompositeProperty::libraryName)
            , (char const * ( CompositeProperty_wrapper::* )(  )const)(&CompositeProperty_wrapper::default_libraryName) )    
        .def( 
            "removeProperty"
            , (void ( ::osgVolume::CompositeProperty::* )( unsigned int ))( &::osgVolume::CompositeProperty::removeProperty )
            , ( bp::arg("i") ) )    
        .def( 
            "setProperty"
            , (void ( ::osgVolume::CompositeProperty::* )( unsigned int,::osgVolume::Property * ))( &::osgVolume::CompositeProperty::setProperty )
            , ( bp::arg("i"), bp::arg("property") ) );

}
