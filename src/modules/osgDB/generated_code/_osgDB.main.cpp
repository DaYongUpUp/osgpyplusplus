// This file has been generated by Py++.

#include "boost/python.hpp"

#include "__call_policies.pypp.hpp"

#include "indexing_suite/value_traits.hpp"

#include "indexing_suite/container_suite.hpp"

#include "indexing_suite/vector.hpp"

#include "indexing_suite/map.hpp"

#include "indexing_suite/list.hpp"

#include "indexing_suite/deque.hpp"

#include "wrap_osgdb.h"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/_osgdb_enumerations.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/_osgdb_free_functions.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/_osgdb_global_variables.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/authenticationdetails.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/authenticationmap.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/basecompressor.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/baseserializer.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/basic_type_wrapper.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/children.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/compressormap.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/databasepager.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/dotosgwrapper.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/dynamiclibrary.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/externalfilewriter.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/field.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/fieldreader.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/fieldreaderiterator.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/filelocationcallback.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/filenamecomparator.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/filepathlist.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/findfilecallback.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/finishedobjectreadcallback.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/ifstream.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/imageoptions.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/imagepager.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/imageprocessor.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/input.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/inputexception.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/inputiterator.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/inputstream.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/intlookup.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/list_less__osg_scope_ref_ptr_less_osgdb_scope_readerwriterinfo_greater___greater_.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/list_less__std_scope_string__greater_.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/map_less__int_comma__std_scope_string__greater_.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/map_less__std_scope_string_comma__int__greater_.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/objectglenum.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/objectmark.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/objectproperty.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/objectsset.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/objectwrapper.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/objectwrappermanager.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/ofstream.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/options.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/output.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/outputexception.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/outputiterator.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/outputstream.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/parameteroutput.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/pluginfunctionproxy.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/readerwriterinfo.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/readfilecallback.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/registercompressorproxy.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/registercustomwrapperproxy.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/registerdotosgwrapperproxy.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/registerwrapperproxy.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/updatewrapperversionproxy.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/userlookuptableproxy.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/wrappermap.pypp.hpp"

#include "c:/users/cmbruns/git/osgpyplusplus/src/modules/osgdb/generated_code/xmlnode.pypp.hpp"

namespace bp = boost::python;

BOOST_PYTHON_MODULE(_osgDB){
    register_enumerations();

    register_Children_class();

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

    register_ReadFileCallback_class();

    register_ReaderWriterInfo_class();

    register_RegisterCompressorProxy_class();

    register_RegisterCustomWrapperProxy_class();

    register_RegisterDotOsgWrapperProxy_class();

    register_RegisterWrapperProxy_class();

    register_UpdateWrapperVersionProxy_class();

    register_UserLookupTableProxy_class();

    register_XmlNode_class();

    bp::implicitly_convertible< osgDB::XmlNode::Input, bool >();

    register_basic_type_wrapper_class();

    register_ifstream_class();

    register_global_variables();

    register_free_functions();
}

