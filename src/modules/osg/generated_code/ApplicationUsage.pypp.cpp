// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "wrap_referenced.h"
#include "applicationusage.pypp.hpp"

namespace bp = boost::python;

struct ApplicationUsage_wrapper : osg::ApplicationUsage, bp::wrapper< osg::ApplicationUsage > {

    ApplicationUsage_wrapper( )
    : osg::ApplicationUsage( )
      , bp::wrapper< osg::ApplicationUsage >(){
        // null constructor
    
    }

    ApplicationUsage_wrapper(::std::string const & commandLineUsage )
    : osg::ApplicationUsage( commandLineUsage )
      , bp::wrapper< osg::ApplicationUsage >(){
        // constructor
    
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

void register_ApplicationUsage_class(){

    { //::osg::ApplicationUsage
        typedef bp::class_< ApplicationUsage_wrapper, bp::bases< osg::Referenced >, osg::ref_ptr< ::osg::ApplicationUsage >, boost::noncopyable > ApplicationUsage_exposer_t;
        ApplicationUsage_exposer_t ApplicationUsage_exposer = ApplicationUsage_exposer_t( "ApplicationUsage", bp::no_init );
        bp::scope ApplicationUsage_scope( ApplicationUsage_exposer );
        bp::enum_< osg::ApplicationUsage::Type>("Type")
            .value("NO_HELP", osg::ApplicationUsage::NO_HELP)
            .value("COMMAND_LINE_OPTION", osg::ApplicationUsage::COMMAND_LINE_OPTION)
            .value("ENVIRONMENTAL_VARIABLE", osg::ApplicationUsage::ENVIRONMENTAL_VARIABLE)
            .value("KEYBOARD_MOUSE_BINDING", osg::ApplicationUsage::KEYBOARD_MOUSE_BINDING)
            .value("HELP_ALL", osg::ApplicationUsage::HELP_ALL)
            .export_values()
            ;
        ApplicationUsage_exposer.def( bp::init< >() );
        ApplicationUsage_exposer.def( bp::init< std::string const & >(( bp::arg("commandLineUsage") )) );
        bp::implicitly_convertible< std::string const &, osg::ApplicationUsage >();
        { //::osg::ApplicationUsage::addCommandLineOption
        
            typedef void ( ::osg::ApplicationUsage::*addCommandLineOption_function_type)( ::std::string const &,::std::string const &,::std::string const & ) ;
            
            ApplicationUsage_exposer.def( 
                "addCommandLineOption"
                , addCommandLineOption_function_type( &::osg::ApplicationUsage::addCommandLineOption )
                , ( bp::arg("option"), bp::arg("explanation"), bp::arg("defaultValue")="" ) );
        
        }
        { //::osg::ApplicationUsage::addEnvironmentalVariable
        
            typedef void ( ::osg::ApplicationUsage::*addEnvironmentalVariable_function_type)( ::std::string const &,::std::string const &,::std::string const & ) ;
            
            ApplicationUsage_exposer.def( 
                "addEnvironmentalVariable"
                , addEnvironmentalVariable_function_type( &::osg::ApplicationUsage::addEnvironmentalVariable )
                , ( bp::arg("option"), bp::arg("explanation"), bp::arg("defaultValue")="" ) );
        
        }
        { //::osg::ApplicationUsage::addKeyboardMouseBinding
        
            typedef void ( ::osg::ApplicationUsage::*addKeyboardMouseBinding_function_type)( ::std::string const &,int,::std::string const & ) ;
            
            ApplicationUsage_exposer.def( 
                "addKeyboardMouseBinding"
                , addKeyboardMouseBinding_function_type( &::osg::ApplicationUsage::addKeyboardMouseBinding )
                , ( bp::arg("prefix"), bp::arg("key"), bp::arg("explanation") ) );
        
        }
        { //::osg::ApplicationUsage::addKeyboardMouseBinding
        
            typedef void ( ::osg::ApplicationUsage::*addKeyboardMouseBinding_function_type)( int,::std::string const & ) ;
            
            ApplicationUsage_exposer.def( 
                "addKeyboardMouseBinding"
                , addKeyboardMouseBinding_function_type( &::osg::ApplicationUsage::addKeyboardMouseBinding )
                , ( bp::arg("key"), bp::arg("explanation") ) );
        
        }
        { //::osg::ApplicationUsage::addKeyboardMouseBinding
        
            typedef void ( ::osg::ApplicationUsage::*addKeyboardMouseBinding_function_type)( ::std::string const &,::std::string const & ) ;
            
            ApplicationUsage_exposer.def( 
                "addKeyboardMouseBinding"
                , addKeyboardMouseBinding_function_type( &::osg::ApplicationUsage::addKeyboardMouseBinding )
                , ( bp::arg("option"), bp::arg("explanation") ) );
        
        }
        { //::osg::ApplicationUsage::addUsageExplanation
        
            typedef void ( ::osg::ApplicationUsage::*addUsageExplanation_function_type)( ::osg::ApplicationUsage::Type,::std::string const &,::std::string const & ) ;
            
            ApplicationUsage_exposer.def( 
                "addUsageExplanation"
                , addUsageExplanation_function_type( &::osg::ApplicationUsage::addUsageExplanation )
                , ( bp::arg("type"), bp::arg("option"), bp::arg("explanation") ) );
        
        }
        { //::osg::ApplicationUsage::getApplicationName
        
            typedef ::std::string const & ( ::osg::ApplicationUsage::*getApplicationName_function_type)(  ) const;
            
            ApplicationUsage_exposer.def( 
                "getApplicationName"
                , getApplicationName_function_type( &::osg::ApplicationUsage::getApplicationName )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::osg::ApplicationUsage::getCommandLineOptions
        
            typedef ::std::map< std::string, std::string > const & ( ::osg::ApplicationUsage::*getCommandLineOptions_function_type)(  ) const;
            
            ApplicationUsage_exposer.def( 
                "getCommandLineOptions"
                , getCommandLineOptions_function_type( &::osg::ApplicationUsage::getCommandLineOptions )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::ApplicationUsage::getCommandLineOptionsDefaults
        
            typedef ::std::map< std::string, std::string > const & ( ::osg::ApplicationUsage::*getCommandLineOptionsDefaults_function_type)(  ) const;
            
            ApplicationUsage_exposer.def( 
                "getCommandLineOptionsDefaults"
                , getCommandLineOptionsDefaults_function_type( &::osg::ApplicationUsage::getCommandLineOptionsDefaults )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::ApplicationUsage::getCommandLineUsage
        
            typedef ::std::string const & ( ::osg::ApplicationUsage::*getCommandLineUsage_function_type)(  ) const;
            
            ApplicationUsage_exposer.def( 
                "getCommandLineUsage"
                , getCommandLineUsage_function_type( &::osg::ApplicationUsage::getCommandLineUsage )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::osg::ApplicationUsage::getDescription
        
            typedef ::std::string const & ( ::osg::ApplicationUsage::*getDescription_function_type)(  ) const;
            
            ApplicationUsage_exposer.def( 
                "getDescription"
                , getDescription_function_type( &::osg::ApplicationUsage::getDescription )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::osg::ApplicationUsage::getEnvironmentalVariables
        
            typedef ::std::map< std::string, std::string > const & ( ::osg::ApplicationUsage::*getEnvironmentalVariables_function_type)(  ) const;
            
            ApplicationUsage_exposer.def( 
                "getEnvironmentalVariables"
                , getEnvironmentalVariables_function_type( &::osg::ApplicationUsage::getEnvironmentalVariables )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::ApplicationUsage::getEnvironmentalVariablesDefaults
        
            typedef ::std::map< std::string, std::string > const & ( ::osg::ApplicationUsage::*getEnvironmentalVariablesDefaults_function_type)(  ) const;
            
            ApplicationUsage_exposer.def( 
                "getEnvironmentalVariablesDefaults"
                , getEnvironmentalVariablesDefaults_function_type( &::osg::ApplicationUsage::getEnvironmentalVariablesDefaults )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::ApplicationUsage::getFormattedString
        
            typedef void ( ::osg::ApplicationUsage::*getFormattedString_function_type)( ::std::string &,::std::map< std::string, std::string > const &,unsigned int,bool,::std::map< std::string, std::string > const & ) ;
            
            ApplicationUsage_exposer.def( 
                "getFormattedString"
                , getFormattedString_function_type( &::osg::ApplicationUsage::getFormattedString )
                , ( bp::arg("str"), bp::arg("um"), bp::arg("widthOfOutput")=(unsigned int)(80), bp::arg("showDefaults")=(bool)(false), bp::arg("ud")=std::map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<const std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >() ) );
        
        }
        { //::osg::ApplicationUsage::getKeyboardMouseBindings
        
            typedef ::std::map< std::string, std::string > const & ( ::osg::ApplicationUsage::*getKeyboardMouseBindings_function_type)(  ) const;
            
            ApplicationUsage_exposer.def( 
                "getKeyboardMouseBindings"
                , getKeyboardMouseBindings_function_type( &::osg::ApplicationUsage::getKeyboardMouseBindings )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::ApplicationUsage::instance
        
            typedef ::osg::ApplicationUsage * ( *instance_function_type )(  );
            
            ApplicationUsage_exposer.def( 
                "instance"
                , instance_function_type( &::osg::ApplicationUsage::instance )
                , bp::return_internal_reference< >() );
        
        }
        { //::osg::ApplicationUsage::setApplicationName
        
            typedef void ( ::osg::ApplicationUsage::*setApplicationName_function_type)( ::std::string const & ) ;
            
            ApplicationUsage_exposer.def( 
                "setApplicationName"
                , setApplicationName_function_type( &::osg::ApplicationUsage::setApplicationName )
                , ( bp::arg("name") )
                , " The ApplicationName is often displayed when logging errors, and frequently incorporated into the Description (below)." );
        
        }
        { //::osg::ApplicationUsage::setCommandLineOptions
        
            typedef void ( ::osg::ApplicationUsage::*setCommandLineOptions_function_type)( ::std::map< std::string, std::string > const & ) ;
            
            ApplicationUsage_exposer.def( 
                "setCommandLineOptions"
                , setCommandLineOptions_function_type( &::osg::ApplicationUsage::setCommandLineOptions )
                , ( bp::arg("usageMap") ) );
        
        }
        { //::osg::ApplicationUsage::setCommandLineOptionsDefaults
        
            typedef void ( ::osg::ApplicationUsage::*setCommandLineOptionsDefaults_function_type)( ::std::map< std::string, std::string > const & ) ;
            
            ApplicationUsage_exposer.def( 
                "setCommandLineOptionsDefaults"
                , setCommandLineOptionsDefaults_function_type( &::osg::ApplicationUsage::setCommandLineOptionsDefaults )
                , ( bp::arg("usageMap") ) );
        
        }
        { //::osg::ApplicationUsage::setCommandLineUsage
        
            typedef void ( ::osg::ApplicationUsage::*setCommandLineUsage_function_type)( ::std::string const & ) ;
            
            ApplicationUsage_exposer.def( 
                "setCommandLineUsage"
                , setCommandLineUsage_function_type( &::osg::ApplicationUsage::setCommandLineUsage )
                , ( bp::arg("explanation") ) );
        
        }
        { //::osg::ApplicationUsage::setDescription
        
            typedef void ( ::osg::ApplicationUsage::*setDescription_function_type)( ::std::string const & ) ;
            
            ApplicationUsage_exposer.def( 
                "setDescription"
                , setDescription_function_type( &::osg::ApplicationUsage::setDescription )
                , ( bp::arg("desc") )
                , " If non-empty, the Description is typically shown by the Help Handler\n as text on the Help display (which also lists keyboard abbreviations." );
        
        }
        { //::osg::ApplicationUsage::setEnvironmentalVariables
        
            typedef void ( ::osg::ApplicationUsage::*setEnvironmentalVariables_function_type)( ::std::map< std::string, std::string > const & ) ;
            
            ApplicationUsage_exposer.def( 
                "setEnvironmentalVariables"
                , setEnvironmentalVariables_function_type( &::osg::ApplicationUsage::setEnvironmentalVariables )
                , ( bp::arg("usageMap") ) );
        
        }
        { //::osg::ApplicationUsage::setEnvironmentalVariablesDefaults
        
            typedef void ( ::osg::ApplicationUsage::*setEnvironmentalVariablesDefaults_function_type)( ::std::map< std::string, std::string > const & ) ;
            
            ApplicationUsage_exposer.def( 
                "setEnvironmentalVariablesDefaults"
                , setEnvironmentalVariablesDefaults_function_type( &::osg::ApplicationUsage::setEnvironmentalVariablesDefaults )
                , ( bp::arg("usageMap") ) );
        
        }
        { //::osg::ApplicationUsage::setKeyboardMouseBindings
        
            typedef void ( ::osg::ApplicationUsage::*setKeyboardMouseBindings_function_type)( ::std::map< std::string, std::string > const & ) ;
            
            ApplicationUsage_exposer.def( 
                "setKeyboardMouseBindings"
                , setKeyboardMouseBindings_function_type( &::osg::ApplicationUsage::setKeyboardMouseBindings )
                , ( bp::arg("usageMap") ) );
        
        }
        { //::osg::ApplicationUsage::write
        
            typedef void ( ::osg::ApplicationUsage::*write_function_type)( ::std::ostream &,::std::map< std::string, std::string > const &,unsigned int,bool,::std::map< std::string, std::string > const & ) ;
            
            ApplicationUsage_exposer.def( 
                "write"
                , write_function_type( &::osg::ApplicationUsage::write )
                , ( bp::arg("output"), bp::arg("um"), bp::arg("widthOfOutput")=(unsigned int)(80), bp::arg("showDefaults")=(bool)(false), bp::arg("ud")=std::map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<const std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >() ) );
        
        }
        { //::osg::ApplicationUsage::write
        
            typedef void ( ::osg::ApplicationUsage::*write_function_type)( ::std::ostream &,unsigned int,unsigned int,bool ) ;
            
            ApplicationUsage_exposer.def( 
                "write"
                , write_function_type( &::osg::ApplicationUsage::write )
                , ( bp::arg("output"), bp::arg("type")=(unsigned int)((unsigned int)(::osg::ApplicationUsage::COMMAND_LINE_OPTION)), bp::arg("widthOfOutput")=(unsigned int)(80), bp::arg("showDefaults")=(bool)(false) ) );
        
        }
        { //::osg::ApplicationUsage::writeEnvironmentSettings
        
            typedef void ( ::osg::ApplicationUsage::*writeEnvironmentSettings_function_type)( ::std::ostream & ) ;
            
            ApplicationUsage_exposer.def( 
                "writeEnvironmentSettings"
                , writeEnvironmentSettings_function_type( &::osg::ApplicationUsage::writeEnvironmentSettings )
                , ( bp::arg("output") ) );
        
        }
        { //::osg::Referenced::setThreadSafeRefUnref
        
            typedef void ( ::osg::Referenced::*setThreadSafeRefUnref_function_type)( bool ) ;
            typedef void ( ApplicationUsage_wrapper::*default_setThreadSafeRefUnref_function_type)( bool ) ;
            
            ApplicationUsage_exposer.def( 
                "setThreadSafeRefUnref"
                , setThreadSafeRefUnref_function_type(&::osg::Referenced::setThreadSafeRefUnref)
                , default_setThreadSafeRefUnref_function_type(&ApplicationUsage_wrapper::default_setThreadSafeRefUnref)
                , ( bp::arg("threadSafe") ) );
        
        }
        ApplicationUsage_exposer.staticmethod( "instance" );
    }

}
