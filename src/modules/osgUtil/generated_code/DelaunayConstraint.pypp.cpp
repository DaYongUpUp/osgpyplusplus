// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgutil.h"
#include "wrap_referenced.h"
#include "delaunayconstraint.pypp.hpp"

namespace bp = boost::python;

struct DelaunayConstraint_wrapper : osgUtil::DelaunayConstraint, bp::wrapper< osgUtil::DelaunayConstraint > {

    DelaunayConstraint_wrapper( )
    : osgUtil::DelaunayConstraint( )
      , bp::wrapper< osgUtil::DelaunayConstraint >(){
        // null constructor
    
    }

    virtual bool contains( ::osg::Vec3 const & testpoint ) const  {
        if( bp::override func_contains = this->get_override( "contains" ) )
            return func_contains( boost::ref(testpoint) );
        else{
            return this->osgUtil::DelaunayConstraint::contains( boost::ref(testpoint) );
        }
    }
    
    bool default_contains( ::osg::Vec3 const & testpoint ) const  {
        return osgUtil::DelaunayConstraint::contains( boost::ref(testpoint) );
    }

    virtual bool outside( ::osg::Vec3 const & testpoint ) const  {
        if( bp::override func_outside = this->get_override( "outside" ) )
            return func_outside( boost::ref(testpoint) );
        else{
            return this->osgUtil::DelaunayConstraint::outside( boost::ref(testpoint) );
        }
    }
    
    bool default_outside( ::osg::Vec3 const & testpoint ) const  {
        return osgUtil::DelaunayConstraint::outside( boost::ref(testpoint) );
    }

    virtual void accept( ::osg::Drawable::AttributeFunctor & af ) {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(af) );
        else{
            this->osg::Geometry::accept( boost::ref(af) );
        }
    }
    
    void default_accept( ::osg::Drawable::AttributeFunctor & af ) {
        osg::Geometry::accept( boost::ref(af) );
    }

    virtual void accept( ::osg::Drawable::ConstAttributeFunctor & af ) const  {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(af) );
        else{
            this->osg::Geometry::accept( boost::ref(af) );
        }
    }
    
    void default_accept( ::osg::Drawable::ConstAttributeFunctor & af ) const  {
        osg::Geometry::accept( boost::ref(af) );
    }

    virtual void accept( ::osg::PrimitiveFunctor & pf ) const  {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(pf) );
        else{
            this->osg::Geometry::accept( boost::ref(pf) );
        }
    }
    
    void default_accept( ::osg::PrimitiveFunctor & pf ) const  {
        osg::Geometry::accept( boost::ref(pf) );
    }

    virtual void accept( ::osg::PrimitiveIndexFunctor & pf ) const  {
        if( bp::override func_accept = this->get_override( "accept" ) )
            func_accept( boost::ref(pf) );
        else{
            this->osg::Geometry::accept( boost::ref(pf) );
        }
    }
    
    void default_accept( ::osg::PrimitiveIndexFunctor & pf ) const  {
        osg::Geometry::accept( boost::ref(pf) );
    }

    virtual ::osg::Geometry * asGeometry(  ) {
        if( bp::override func_asGeometry = this->get_override( "asGeometry" ) )
            return func_asGeometry(  );
        else{
            return this->osg::Geometry::asGeometry(  );
        }
    }
    
    ::osg::Geometry * default_asGeometry(  ) {
        return osg::Geometry::asGeometry( );
    }

    virtual ::osg::Geometry const * asGeometry(  ) const  {
        if( bp::override func_asGeometry = this->get_override( "asGeometry" ) )
            return func_asGeometry(  );
        else{
            return this->osg::Geometry::asGeometry(  );
        }
    }
    
    ::osg::Geometry const * default_asGeometry(  ) const  {
        return osg::Geometry::asGeometry( );
    }

    virtual char const * className(  ) const  {
        if( bp::override func_className = this->get_override( "className" ) )
            return func_className(  );
        else{
            return this->osg::Geometry::className(  );
        }
    }
    
    char const * default_className(  ) const  {
        return osg::Geometry::className( );
    }

    virtual ::osg::Object * clone( ::osg::CopyOp const & copyop ) const  {
        if( bp::override func_clone = this->get_override( "clone" ) )
            return func_clone( boost::ref(copyop) );
        else{
            return this->osg::Geometry::clone( boost::ref(copyop) );
        }
    }
    
    ::osg::Object * default_clone( ::osg::CopyOp const & copyop ) const  {
        return osg::Geometry::clone( boost::ref(copyop) );
    }

    virtual ::osg::Object * cloneType(  ) const  {
        if( bp::override func_cloneType = this->get_override( "cloneType" ) )
            return func_cloneType(  );
        else{
            return this->osg::Geometry::cloneType(  );
        }
    }
    
    ::osg::Object * default_cloneType(  ) const  {
        return osg::Geometry::cloneType( );
    }

    virtual void compileGLObjects( ::osg::RenderInfo & renderInfo ) const  {
        if( bp::override func_compileGLObjects = this->get_override( "compileGLObjects" ) )
            func_compileGLObjects( boost::ref(renderInfo) );
        else{
            this->osg::Geometry::compileGLObjects( boost::ref(renderInfo) );
        }
    }
    
    void default_compileGLObjects( ::osg::RenderInfo & renderInfo ) const  {
        osg::Geometry::compileGLObjects( boost::ref(renderInfo) );
    }

    virtual ::osg::BoundingBox computeBound(  ) const  {
        if( bp::override func_computeBound = this->get_override( "computeBound" ) )
            return func_computeBound(  );
        else{
            return this->osg::Drawable::computeBound(  );
        }
    }
    
    ::osg::BoundingBox default_computeBound(  ) const  {
        return osg::Drawable::computeBound( );
    }

    virtual void computeDataVariance(  ) {
        if( bp::override func_computeDataVariance = this->get_override( "computeDataVariance" ) )
            func_computeDataVariance(  );
        else{
            this->osg::Drawable::computeDataVariance(  );
        }
    }
    
    void default_computeDataVariance(  ) {
        osg::Drawable::computeDataVariance( );
    }

    virtual void dirtyDisplayList(  ) {
        if( bp::override func_dirtyDisplayList = this->get_override( "dirtyDisplayList" ) )
            func_dirtyDisplayList(  );
        else{
            this->osg::Geometry::dirtyDisplayList(  );
        }
    }
    
    void default_dirtyDisplayList(  ) {
        osg::Geometry::dirtyDisplayList( );
    }

    virtual void drawImplementation( ::osg::RenderInfo & renderInfo ) const  {
        if( bp::override func_drawImplementation = this->get_override( "drawImplementation" ) )
            func_drawImplementation( boost::ref(renderInfo) );
        else{
            this->osg::Geometry::drawImplementation( boost::ref(renderInfo) );
        }
    }
    
    void default_drawImplementation( ::osg::RenderInfo & renderInfo ) const  {
        osg::Geometry::drawImplementation( boost::ref(renderInfo) );
    }

    virtual unsigned int getGLObjectSizeHint(  ) const  {
        if( bp::override func_getGLObjectSizeHint = this->get_override( "getGLObjectSizeHint" ) )
            return func_getGLObjectSizeHint(  );
        else{
            return this->osg::Geometry::getGLObjectSizeHint(  );
        }
    }
    
    unsigned int default_getGLObjectSizeHint(  ) const  {
        return osg::Geometry::getGLObjectSizeHint( );
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

    virtual bool isSameKindAs( ::osg::Object const * obj ) const  {
        if( bp::override func_isSameKindAs = this->get_override( "isSameKindAs" ) )
            return func_isSameKindAs( boost::python::ptr(obj) );
        else{
            return this->osg::Geometry::isSameKindAs( boost::python::ptr(obj) );
        }
    }
    
    bool default_isSameKindAs( ::osg::Object const * obj ) const  {
        return osg::Geometry::isSameKindAs( boost::python::ptr(obj) );
    }

    virtual char const * libraryName(  ) const  {
        if( bp::override func_libraryName = this->get_override( "libraryName" ) )
            return func_libraryName(  );
        else{
            return this->osg::Geometry::libraryName(  );
        }
    }
    
    char const * default_libraryName(  ) const  {
        return osg::Geometry::libraryName( );
    }

    virtual void resizeGLObjectBuffers( unsigned int maxSize ) {
        if( bp::override func_resizeGLObjectBuffers = this->get_override( "resizeGLObjectBuffers" ) )
            func_resizeGLObjectBuffers( maxSize );
        else{
            this->osg::Geometry::resizeGLObjectBuffers( maxSize );
        }
    }
    
    void default_resizeGLObjectBuffers( unsigned int maxSize ) {
        osg::Geometry::resizeGLObjectBuffers( maxSize );
    }

    virtual void setCullCallback( ::osg::Drawable::CullCallback * cc ) {
        if( bp::override func_setCullCallback = this->get_override( "setCullCallback" ) )
            func_setCullCallback( boost::python::ptr(cc) );
        else{
            this->osg::Drawable::setCullCallback( boost::python::ptr(cc) );
        }
    }
    
    void default_setCullCallback( ::osg::Drawable::CullCallback * cc ) {
        osg::Drawable::setCullCallback( boost::python::ptr(cc) );
    }

    virtual void setDrawCallback( ::osg::Drawable::DrawCallback * dc ) {
        if( bp::override func_setDrawCallback = this->get_override( "setDrawCallback" ) )
            func_setDrawCallback( boost::python::ptr(dc) );
        else{
            this->osg::Drawable::setDrawCallback( boost::python::ptr(dc) );
        }
    }
    
    void default_setDrawCallback( ::osg::Drawable::DrawCallback * dc ) {
        osg::Drawable::setDrawCallback( boost::python::ptr(dc) );
    }

    virtual void setEventCallback( ::osg::Drawable::EventCallback * ac ) {
        if( bp::override func_setEventCallback = this->get_override( "setEventCallback" ) )
            func_setEventCallback( boost::python::ptr(ac) );
        else{
            this->osg::Drawable::setEventCallback( boost::python::ptr(ac) );
        }
    }
    
    void default_setEventCallback( ::osg::Drawable::EventCallback * ac ) {
        osg::Drawable::setEventCallback( boost::python::ptr(ac) );
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
            this->osg::Drawable::setThreadSafeRefUnref( threadSafe );
        }
    }
    
    void default_setThreadSafeRefUnref( bool threadSafe ) {
        osg::Drawable::setThreadSafeRefUnref( threadSafe );
    }

    virtual void setUpdateCallback( ::osg::Drawable::UpdateCallback * ac ) {
        if( bp::override func_setUpdateCallback = this->get_override( "setUpdateCallback" ) )
            func_setUpdateCallback( boost::python::ptr(ac) );
        else{
            this->osg::Drawable::setUpdateCallback( boost::python::ptr(ac) );
        }
    }
    
    void default_setUpdateCallback( ::osg::Drawable::UpdateCallback * ac ) {
        osg::Drawable::setUpdateCallback( boost::python::ptr(ac) );
    }

    virtual void setUseVertexBufferObjects( bool flag ) {
        if( bp::override func_setUseVertexBufferObjects = this->get_override( "setUseVertexBufferObjects" ) )
            func_setUseVertexBufferObjects( flag );
        else{
            this->osg::Geometry::setUseVertexBufferObjects( flag );
        }
    }
    
    void default_setUseVertexBufferObjects( bool flag ) {
        osg::Geometry::setUseVertexBufferObjects( flag );
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

    virtual bool supports( ::osg::Drawable::AttributeFunctor const & arg0 ) const  {
        if( bp::override func_supports = this->get_override( "supports" ) )
            return func_supports( boost::ref(arg0) );
        else{
            return this->osg::Geometry::supports( boost::ref(arg0) );
        }
    }
    
    bool default_supports( ::osg::Drawable::AttributeFunctor const & arg0 ) const  {
        return osg::Geometry::supports( boost::ref(arg0) );
    }

    virtual bool supports( ::osg::Drawable::ConstAttributeFunctor const & arg0 ) const  {
        if( bp::override func_supports = this->get_override( "supports" ) )
            return func_supports( boost::ref(arg0) );
        else{
            return this->osg::Geometry::supports( boost::ref(arg0) );
        }
    }
    
    bool default_supports( ::osg::Drawable::ConstAttributeFunctor const & arg0 ) const  {
        return osg::Geometry::supports( boost::ref(arg0) );
    }

    virtual bool supports( ::osg::PrimitiveFunctor const & arg0 ) const  {
        if( bp::override func_supports = this->get_override( "supports" ) )
            return func_supports( boost::ref(arg0) );
        else{
            return this->osg::Geometry::supports( boost::ref(arg0) );
        }
    }
    
    bool default_supports( ::osg::PrimitiveFunctor const & arg0 ) const  {
        return osg::Geometry::supports( boost::ref(arg0) );
    }

    virtual bool supports( ::osg::PrimitiveIndexFunctor const & arg0 ) const  {
        if( bp::override func_supports = this->get_override( "supports" ) )
            return func_supports( boost::ref(arg0) );
        else{
            return this->osg::Geometry::supports( boost::ref(arg0) );
        }
    }
    
    bool default_supports( ::osg::PrimitiveIndexFunctor const & arg0 ) const  {
        return osg::Geometry::supports( boost::ref(arg0) );
    }

};

void register_DelaunayConstraint_class(){

    bp::class_< DelaunayConstraint_wrapper, bp::bases< ::osg::Geometry >, osg::ref_ptr< DelaunayConstraint_wrapper >, boost::noncopyable >( "DelaunayConstraint", bp::no_init )    
        .def( bp::init< >() )    
        .def( 
            "addtriangle"
            , (void ( ::osgUtil::DelaunayConstraint::* )( int,int,int ))( &::osgUtil::DelaunayConstraint::addtriangle )
            , ( bp::arg("i1"), bp::arg("i2"), bp::arg("i3") ) )    
        .def( 
            "contains"
            , (bool ( ::osgUtil::DelaunayConstraint::* )( ::osg::Vec3 const & )const)(&::osgUtil::DelaunayConstraint::contains)
            , (bool ( DelaunayConstraint_wrapper::* )( ::osg::Vec3 const & )const)(&DelaunayConstraint_wrapper::default_contains)
            , ( bp::arg("testpoint") ) )    
        .def( 
            "getPoints"
            , (::osg::Vec3Array * ( ::osgUtil::DelaunayConstraint::* )( ::osg::Vec3Array const * ))( &::osgUtil::DelaunayConstraint::getPoints )
            , ( bp::arg("points") )
            , bp::return_internal_reference< >() )    
        .def( 
            "getTriangles"
            , (::osg::DrawElementsUInt const * ( ::osgUtil::DelaunayConstraint::* )(  )const)( &::osgUtil::DelaunayConstraint::getTriangles )
            , bp::return_internal_reference< >() )    
        .def( 
            "getTriangles"
            , (::osg::DrawElementsUInt * ( ::osgUtil::DelaunayConstraint::* )(  ))( &::osgUtil::DelaunayConstraint::getTriangles )
            , bp::return_internal_reference< >() )    
        .def( 
            "handleOverlaps"
            , (void ( ::osgUtil::DelaunayConstraint::* )(  ))( &::osgUtil::DelaunayConstraint::handleOverlaps ) )    
        .def( 
            "makeDrawable"
            , (::osg::DrawElementsUInt * ( ::osgUtil::DelaunayConstraint::* )(  ))( &::osgUtil::DelaunayConstraint::makeDrawable )
            , bp::return_internal_reference< >() )    
        .def( 
            "merge"
            , (void ( ::osgUtil::DelaunayConstraint::* )( ::osgUtil::DelaunayConstraint * ))( &::osgUtil::DelaunayConstraint::merge )
            , ( bp::arg("dco") ) )    
        .def( 
            "outside"
            , (bool ( ::osgUtil::DelaunayConstraint::* )( ::osg::Vec3 const & )const)(&::osgUtil::DelaunayConstraint::outside)
            , (bool ( DelaunayConstraint_wrapper::* )( ::osg::Vec3 const & )const)(&DelaunayConstraint_wrapper::default_outside)
            , ( bp::arg("testpoint") ) )    
        .def( 
            "removeVerticesInside"
            , (void ( ::osgUtil::DelaunayConstraint::* )( ::osgUtil::DelaunayConstraint const * ))( &::osgUtil::DelaunayConstraint::removeVerticesInside )
            , ( bp::arg("dco") ) )    
        .def( 
            "windingNumber"
            , (float ( ::osgUtil::DelaunayConstraint::* )( ::osg::Vec3 const & )const)( &::osgUtil::DelaunayConstraint::windingNumber )
            , ( bp::arg("testpoint") ) );

}
