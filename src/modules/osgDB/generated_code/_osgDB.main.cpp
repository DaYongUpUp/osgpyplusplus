// This file has been generated by Py++.

#include "boost/python.hpp"

#include "__call_policies.pypp.hpp"

#include "__convenience.pypp.hpp"

#include "indexing_suite/value_traits.hpp"

#include "indexing_suite/container_suite.hpp"

#include "indexing_suite/vector.hpp"

#include "indexing_suite/map.hpp"

#include "indexing_suite/list.hpp"

#include "indexing_suite/deque.hpp"

#include "wrap_osgdb.h"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/_osgdb_enumerations.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/_osgdb_free_functions.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/_osgdb_global_variables.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/authenticationdetails.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/authenticationmap.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/basecompressor.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/baseserializer.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/basic_type_wrapper.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/children.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/compressormap.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/databasepager.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/dotosgwrapper.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/dynamiclibrary.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/externalfilewriter.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/field.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/fieldreader.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/fieldreaderiterator.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/filelocationcallback.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/filenamecomparator.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/filepathlist.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/findfilecallback.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/finishedobjectreadcallback.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/ifstream.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/imageoptions.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/imagepager.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/imageprocessor.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/imageprocessorlist.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/input.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/inputexception.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/inputiterator.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/inputstream.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/intlookup.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/list_less__osg_scope_ref_ptr_less_osgdb_scope_readerwriterinfo_greater___greater_.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/list_less__std_scope_string__greater_.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/map_less__int_comma__std_scope_string__greater_.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/map_less__std_scope_string_comma__int__greater_.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/objectglenum.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/objectmark.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/objectproperty.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/objectsset.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/objectwrapper.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/objectwrappermanager.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/ofstream.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/options.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/output.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/outputexception.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/outputiterator.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/outputstream.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/parameteroutput.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/pluginfunctionproxy.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/readerwriter.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/readerwriterinfo.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/readerwriterlist.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/readfilecallback.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/registercompressorproxy.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/registercustomwrapperproxy.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/registerdotosgwrapperproxy.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/registerwrapperproxy.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/registry.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/updatewrapperversionproxy.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/userlookuptableproxy.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/wrappermap.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/writefilecallback.pypp.hpp"

#include "f:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/xmlnode.pypp.hpp"

namespace bp = boost::python;

static boost::python::object writeHeightFieldFile_a4d0ffa9adfdd6e0112de20aadb853a0( ::osg::HeightField & hf, ::std::string const & filename ){
    bool result = ::osgDB::writeHeightFieldFile(hf, filename);
    return bp::object( result );
}

static boost::python::object writeHeightFieldFile_3110a869fbf62205f51b9a799e26845a( ::osg::HeightField & hf, ::std::string const & filename, ::osgDB::Options const * options ){
    bool result = ::osgDB::writeHeightFieldFile(hf, filename, options);
    return bp::object( result );
}

static boost::python::object writeImageFile_0572104a58011a7ddd41dfa1f9bb94d5( ::osg::Image & image, ::std::string const & filename ){
    bool result = ::osgDB::writeImageFile(image, filename);
    return bp::object( result );
}

static boost::python::object writeImageFile_10f8a171de3b3be3a44fc24113a5a5cb( ::osg::Image & image, ::std::string const & filename, ::osgDB::Options const * options ){
    bool result = ::osgDB::writeImageFile(image, filename, options);
    return bp::object( result );
}

static boost::python::object writeNodeFile_8e6b8986ff55b2fc734915c1e71ed28e( ::osg::Node & node, ::std::string const & filename ){
    bool result = ::osgDB::writeNodeFile(node, filename);
    return bp::object( result );
}

static boost::python::object writeNodeFile_94aad5feb87f445a8c9bd1d76feb7d39( ::osg::Node & node, ::std::string const & filename, ::osgDB::Options const * options ){
    bool result = ::osgDB::writeNodeFile(node, filename, options);
    return bp::object( result );
}

static boost::python::object writeObjectFile_f3d04fbc6184fc75bcfe72d1c88bb571( ::osg::Object & object, ::std::string const & filename ){
    bool result = ::osgDB::writeObjectFile(object, filename);
    return bp::object( result );
}

static boost::python::object writeObjectFile_b8b4a6539851c2a57a9019eda3ddb0d8( ::osg::Object & object, ::std::string const & filename, ::osgDB::Options const * options ){
    bool result = ::osgDB::writeObjectFile(object, filename, options);
    return bp::object( result );
}

static boost::python::object writeShaderFile_b068de8e0814ec3d353252d0f4b46083( ::osg::Shader & shader, ::std::string const & filename ){
    bool result = ::osgDB::writeShaderFile(shader, filename);
    return bp::object( result );
}

static boost::python::object writeShaderFile_61b1f8ccbf43222c0a979526c16e13b2( ::osg::Shader & shader, ::std::string const & filename, ::osgDB::Options const * options ){
    bool result = ::osgDB::writeShaderFile(shader, filename, options);
    return bp::object( result );
}

BOOST_PYTHON_MODULE(_osgDB){
    register_enumerations();

    register_Children_class();

    register_ReaderWriterList_class();

    register_ImageProcessorList_class();

    register_WrapperMap_class();

    register_CompressorMap_class();

    register_map_less__std_scope_string_comma__int__greater__class();

    register_ObjectsSet_class();

    register_map_less__int_comma__std_scope_string__greater__class();

    register_list_less__std_scope_string__greater__class();

    register_list_less__osg_scope_ref_ptr_less_osgDB_scope_ReaderWriterInfo_greater___greater__class();

    register_FilePathList_class();

    register_AuthenticationDetails_class();

    register_AuthenticationMap_class();

    register_BaseCompressor_class();

    register_BaseSerializer_class();

    register_DatabasePager_class();

    register_DotOsgWrapper_class();

    register_DynamicLibrary_class();

    register_ExternalFileWriter_class();

    register_Field_class();

    register_FieldReader_class();

    register_FieldReaderIterator_class();

    register_FileLocationCallback_class();

    register_FileNameComparator_class();

    register_FindFileCallback_class();

    register_FinishedObjectReadCallback_class();

    register_Options_class();

    register_ImageOptions_class();

    register_ImagePager_class();

    register_ImageProcessor_class();

    register_Input_class();

    register_InputException_class();

    register_InputIterator_class();

    register_InputStream_class();

    register_IntLookup_class();

    register_ObjectGLenum_class();

    register_ObjectMark_class();

    register_ObjectProperty_class();

    register_ObjectWrapper_class();

    register_ObjectWrapperManager_class();

    register_ofstream_class();

    register_Output_class();

    register_OutputException_class();

    register_OutputIterator_class();

    register_OutputStream_class();

    register_ParameterOutput_class();

    register_PluginFunctionProxy_class();

    register_ReaderWriter_class();

    register_ReadFileCallback_class();

    register_ReaderWriterInfo_class();

    register_RegisterCompressorProxy_class();

    register_RegisterCustomWrapperProxy_class();

    register_RegisterDotOsgWrapperProxy_class();

    register_RegisterWrapperProxy_class();

    register_Registry_class();

    register_UpdateWrapperVersionProxy_class();

    register_UserLookupTableProxy_class();

    register_WriteFileCallback_class();

    register_XmlNode_class();

    bp::implicitly_convertible< osgDB::XmlNode::Input, bool >();

    register_basic_type_wrapper_class();

    register_ifstream_class();

    { //::osgDB::writeHeightFieldFile
    
        typedef boost::python::object ( *writeHeightFieldFile_function_type )( ::osg::HeightField &,::std::string const & );
        
        bp::def( 
            "writeHeightFieldFile"
            , writeHeightFieldFile_function_type( &writeHeightFieldFile_a4d0ffa9adfdd6e0112de20aadb853a0 )
            , ( bp::arg("hf"), bp::arg("filename") ) );
    
    }

    { //::osgDB::writeHeightFieldFile
    
        typedef boost::python::object ( *writeHeightFieldFile_function_type )( ::osg::HeightField &,::std::string const &,::osgDB::Options const * );
        
        bp::def( 
            "writeHeightFieldFile"
            , writeHeightFieldFile_function_type( &writeHeightFieldFile_3110a869fbf62205f51b9a799e26845a )
            , ( bp::arg("hf"), bp::arg("filename"), bp::arg("options") ) );
    
    }

    { //::osgDB::writeImageFile
    
        typedef boost::python::object ( *writeImageFile_function_type )( ::osg::Image &,::std::string const & );
        
        bp::def( 
            "writeImageFile"
            , writeImageFile_function_type( &writeImageFile_0572104a58011a7ddd41dfa1f9bb94d5 )
            , ( bp::arg("image"), bp::arg("filename") ) );
    
    }

    { //::osgDB::writeImageFile
    
        typedef boost::python::object ( *writeImageFile_function_type )( ::osg::Image &,::std::string const &,::osgDB::Options const * );
        
        bp::def( 
            "writeImageFile"
            , writeImageFile_function_type( &writeImageFile_10f8a171de3b3be3a44fc24113a5a5cb )
            , ( bp::arg("image"), bp::arg("filename"), bp::arg("options") ) );
    
    }

    { //::osgDB::writeNodeFile
    
        typedef boost::python::object ( *writeNodeFile_function_type )( ::osg::Node &,::std::string const & );
        
        bp::def( 
            "writeNodeFile"
            , writeNodeFile_function_type( &writeNodeFile_8e6b8986ff55b2fc734915c1e71ed28e )
            , ( bp::arg("node"), bp::arg("filename") ) );
    
    }

    { //::osgDB::writeNodeFile
    
        typedef boost::python::object ( *writeNodeFile_function_type )( ::osg::Node &,::std::string const &,::osgDB::Options const * );
        
        bp::def( 
            "writeNodeFile"
            , writeNodeFile_function_type( &writeNodeFile_94aad5feb87f445a8c9bd1d76feb7d39 )
            , ( bp::arg("node"), bp::arg("filename"), bp::arg("options") ) );
    
    }

    { //::osgDB::writeObjectFile
    
        typedef boost::python::object ( *writeObjectFile_function_type )( ::osg::Object &,::std::string const & );
        
        bp::def( 
            "writeObjectFile"
            , writeObjectFile_function_type( &writeObjectFile_f3d04fbc6184fc75bcfe72d1c88bb571 )
            , ( bp::arg("object"), bp::arg("filename") ) );
    
    }

    { //::osgDB::writeObjectFile
    
        typedef boost::python::object ( *writeObjectFile_function_type )( ::osg::Object &,::std::string const &,::osgDB::Options const * );
        
        bp::def( 
            "writeObjectFile"
            , writeObjectFile_function_type( &writeObjectFile_b8b4a6539851c2a57a9019eda3ddb0d8 )
            , ( bp::arg("object"), bp::arg("filename"), bp::arg("options") ) );
    
    }

    { //::osgDB::writeShaderFile
    
        typedef boost::python::object ( *writeShaderFile_function_type )( ::osg::Shader &,::std::string const & );
        
        bp::def( 
            "writeShaderFile"
            , writeShaderFile_function_type( &writeShaderFile_b068de8e0814ec3d353252d0f4b46083 )
            , ( bp::arg("shader"), bp::arg("filename") ) );
    
    }

    { //::osgDB::writeShaderFile
    
        typedef boost::python::object ( *writeShaderFile_function_type )( ::osg::Shader &,::std::string const &,::osgDB::Options const * );
        
        bp::def( 
            "writeShaderFile"
            , writeShaderFile_function_type( &writeShaderFile_61b1f8ccbf43222c0a979526c16e13b2 )
            , ( bp::arg("shader"), bp::arg("filename"), bp::arg("options") ) );
    
    }

    register_global_variables();

    register_free_functions();
}

