// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "wrap_osgdb.h"
#include "wrap_referenced.h"
#include "writefilecallback.pypp.hpp"

namespace bp = boost::python;

struct WriteFileCallback_wrapper : osgDB::WriteFileCallback, bp::wrapper< osgDB::WriteFileCallback > {

    WriteFileCallback_wrapper()
    : osgDB::WriteFileCallback()
      , bp::wrapper< osgDB::WriteFileCallback >(){
        // null constructor
        
    }

    virtual ::osgDB::ReaderWriter::WriteResult writeHeightField( ::osg::HeightField const & obj, ::std::string const & fileName, ::osgDB::Options const * options ) {
        namespace bpl = boost::python;
        if( bpl::override func_writeHeightField = this->get_override( "writeHeightField" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_writeHeightField.ptr(), obj, fileName, options );
            return bpl::extract< ::osgDB::ReaderWriter::WriteResult >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return osgDB::WriteFileCallback::writeHeightField( boost::ref(obj), fileName, boost::python::ptr(options) );
        }
    }
    
    static boost::python::object default_writeHeightField( ::osgDB::WriteFileCallback & inst, ::osg::HeightField & obj, ::std::string const & fileName, ::osgDB::Options const * options ){
        osgDB::ReaderWriter::WriteResult result;
        if( dynamic_cast< WriteFileCallback_wrapper * >( boost::addressof( inst ) ) ){
            result = inst.::osgDB::WriteFileCallback::writeHeightField(obj, fileName, options);
        }
        else{
            result = inst.writeHeightField(obj, fileName, options);
        }
        return bp::object( result );
    }

    virtual ::osgDB::ReaderWriter::WriteResult writeImage( ::osg::Image const & obj, ::std::string const & fileName, ::osgDB::Options const * options ) {
        namespace bpl = boost::python;
        if( bpl::override func_writeImage = this->get_override( "writeImage" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_writeImage.ptr(), obj, fileName, options );
            return bpl::extract< ::osgDB::ReaderWriter::WriteResult >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return osgDB::WriteFileCallback::writeImage( boost::ref(obj), fileName, boost::python::ptr(options) );
        }
    }
    
    static boost::python::object default_writeImage( ::osgDB::WriteFileCallback & inst, ::osg::Image & obj, ::std::string const & fileName, ::osgDB::Options const * options ){
        osgDB::ReaderWriter::WriteResult result;
        if( dynamic_cast< WriteFileCallback_wrapper * >( boost::addressof( inst ) ) ){
            result = inst.::osgDB::WriteFileCallback::writeImage(obj, fileName, options);
        }
        else{
            result = inst.writeImage(obj, fileName, options);
        }
        return bp::object( result );
    }

    virtual ::osgDB::ReaderWriter::WriteResult writeNode( ::osg::Node const & obj, ::std::string const & fileName, ::osgDB::Options const * options ) {
        namespace bpl = boost::python;
        if( bpl::override func_writeNode = this->get_override( "writeNode" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_writeNode.ptr(), obj, fileName, options );
            return bpl::extract< ::osgDB::ReaderWriter::WriteResult >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return osgDB::WriteFileCallback::writeNode( boost::ref(obj), fileName, boost::python::ptr(options) );
        }
    }
    
    static boost::python::object default_writeNode( ::osgDB::WriteFileCallback & inst, ::osg::Node & obj, ::std::string const & fileName, ::osgDB::Options const * options ){
        osgDB::ReaderWriter::WriteResult result;
        if( dynamic_cast< WriteFileCallback_wrapper * >( boost::addressof( inst ) ) ){
            result = inst.::osgDB::WriteFileCallback::writeNode(obj, fileName, options);
        }
        else{
            result = inst.writeNode(obj, fileName, options);
        }
        return bp::object( result );
    }

    virtual ::osgDB::ReaderWriter::WriteResult writeObject( ::osg::Object const & obj, ::std::string const & fileName, ::osgDB::Options const * options ) {
        namespace bpl = boost::python;
        if( bpl::override func_writeObject = this->get_override( "writeObject" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_writeObject.ptr(), obj, fileName, options );
            return bpl::extract< ::osgDB::ReaderWriter::WriteResult >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return osgDB::WriteFileCallback::writeObject( boost::ref(obj), fileName, boost::python::ptr(options) );
        }
    }
    
    static boost::python::object default_writeObject( ::osgDB::WriteFileCallback & inst, ::osg::Object & obj, ::std::string const & fileName, ::osgDB::Options const * options ){
        osgDB::ReaderWriter::WriteResult result;
        if( dynamic_cast< WriteFileCallback_wrapper * >( boost::addressof( inst ) ) ){
            result = inst.::osgDB::WriteFileCallback::writeObject(obj, fileName, options);
        }
        else{
            result = inst.writeObject(obj, fileName, options);
        }
        return bp::object( result );
    }

    virtual ::osgDB::ReaderWriter::WriteResult writeShader( ::osg::Shader const & obj, ::std::string const & fileName, ::osgDB::Options const * options ) {
        namespace bpl = boost::python;
        if( bpl::override func_writeShader = this->get_override( "writeShader" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_writeShader.ptr(), obj, fileName, options );
            return bpl::extract< ::osgDB::ReaderWriter::WriteResult >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
            return osgDB::WriteFileCallback::writeShader( boost::ref(obj), fileName, boost::python::ptr(options) );
        }
    }
    
    static boost::python::object default_writeShader( ::osgDB::WriteFileCallback & inst, ::osg::Shader & obj, ::std::string const & fileName, ::osgDB::Options const * options ){
        osgDB::ReaderWriter::WriteResult result;
        if( dynamic_cast< WriteFileCallback_wrapper * >( boost::addressof( inst ) ) ){
            result = inst.::osgDB::WriteFileCallback::writeShader(obj, fileName, options);
        }
        else{
            result = inst.writeShader(obj, fileName, options);
        }
        return bp::object( result );
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

void register_WriteFileCallback_class(){

    bp::class_< WriteFileCallback_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< WriteFileCallback_wrapper >, boost::noncopyable >( "WriteFileCallback", bp::no_init )    
        .def( 
            "writeHeightField"
            , (boost::python::object (*)( ::osgDB::WriteFileCallback &,::osg::HeightField &,::std::string const &,::osgDB::Options const * ))( &WriteFileCallback_wrapper::default_writeHeightField )
            , ( bp::arg("inst"), bp::arg("obj"), bp::arg("fileName"), bp::arg("options") ) )    
        .def( 
            "writeImage"
            , (boost::python::object (*)( ::osgDB::WriteFileCallback &,::osg::Image &,::std::string const &,::osgDB::Options const * ))( &WriteFileCallback_wrapper::default_writeImage )
            , ( bp::arg("inst"), bp::arg("obj"), bp::arg("fileName"), bp::arg("options") ) )    
        .def( 
            "writeNode"
            , (boost::python::object (*)( ::osgDB::WriteFileCallback &,::osg::Node &,::std::string const &,::osgDB::Options const * ))( &WriteFileCallback_wrapper::default_writeNode )
            , ( bp::arg("inst"), bp::arg("obj"), bp::arg("fileName"), bp::arg("options") ) )    
        .def( 
            "writeObject"
            , (boost::python::object (*)( ::osgDB::WriteFileCallback &,::osg::Object &,::std::string const &,::osgDB::Options const * ))( &WriteFileCallback_wrapper::default_writeObject )
            , ( bp::arg("inst"), bp::arg("obj"), bp::arg("fileName"), bp::arg("options") ) )    
        .def( 
            "writeShader"
            , (boost::python::object (*)( ::osgDB::WriteFileCallback &,::osg::Shader &,::std::string const &,::osgDB::Options const * ))( &WriteFileCallback_wrapper::default_writeShader )
            , ( bp::arg("inst"), bp::arg("obj"), bp::arg("fileName"), bp::arg("options") ) );

}
