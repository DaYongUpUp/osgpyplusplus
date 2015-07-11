// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osgdb.h"
#include "field.pypp.hpp"

namespace bp = boost::python;

struct Field_wrapper : osgDB::Field, bp::wrapper< osgDB::Field > {

    Field_wrapper( )
    : osgDB::Field( )
      , bp::wrapper< osgDB::Field >(){
        // null constructor
    
    }

    Field_wrapper(::osgDB::Field const & field )
    : osgDB::Field( boost::ref(field) )
      , bp::wrapper< osgDB::Field >(){
        // copy constructor
    
    }

};

void register_Field_class(){

    { //::osgDB::Field
        typedef bp::class_< Field_wrapper > Field_exposer_t;
        Field_exposer_t Field_exposer = Field_exposer_t( "Field", bp::init< >() );
        bp::scope Field_scope( Field_exposer );
        bp::scope().attr("MIN_CACHE_SIZE") = (int)osgDB::Field::MIN_CACHE_SIZE;
        bp::enum_< osgDB::Field::FieldType>("FieldType")
            .value("OPEN_BRACKET", osgDB::Field::OPEN_BRACKET)
            .value("CLOSE_BRACKET", osgDB::Field::CLOSE_BRACKET)
            .value("STRING", osgDB::Field::STRING)
            .value("WORD", osgDB::Field::WORD)
            .value("REAL", osgDB::Field::REAL)
            .value("INTEGER", osgDB::Field::INTEGER)
            .value("BLANK", osgDB::Field::BLANK)
            .value("UNINITIALISED", osgDB::Field::UNINITIALISED)
            .export_values()
            ;
        Field_exposer.def( bp::init< osgDB::Field const & >(( bp::arg("field") )) );
        { //::osgDB::Field::addChar
        
            typedef void ( ::osgDB::Field::*addChar_function_type )( char ) ;
            
            Field_exposer.def( 
                "addChar"
                , addChar_function_type( &::osgDB::Field::addChar )
                , ( bp::arg("c") ) );
        
        }
        { //::osgDB::Field::calculateFieldType
        
            typedef ::osgDB::Field::FieldType ( *calculateFieldType_function_type )( char const *,bool );
            
            Field_exposer.def( 
                "calculateFieldType"
                , calculateFieldType_function_type( &::osgDB::Field::calculateFieldType )
                , ( bp::arg("str"), bp::arg("withinQuotes")=(bool)(false) ) );
        
        }
        { //::osgDB::Field::getFieldType
        
            typedef ::osgDB::Field::FieldType ( ::osgDB::Field::*getFieldType_function_type )(  ) const;
            
            Field_exposer.def( 
                "getFieldType"
                , getFieldType_function_type( &::osgDB::Field::getFieldType ) );
        
        }
        { //::osgDB::Field::getFloat
        
            typedef bool ( ::osgDB::Field::*getFloat_function_type )( float & ) const;
            
            Field_exposer.def( 
                "getFloat"
                , getFloat_function_type( &::osgDB::Field::getFloat )
                , ( bp::arg("f") ) );
        
        }
        { //::osgDB::Field::getFloat
        
            typedef bool ( ::osgDB::Field::*getFloat_function_type )( double & ) const;
            
            Field_exposer.def( 
                "getFloat"
                , getFloat_function_type( &::osgDB::Field::getFloat )
                , ( bp::arg("f") ) );
        
        }
        { //::osgDB::Field::getInt
        
            typedef bool ( ::osgDB::Field::*getInt_function_type )( int & ) const;
            
            Field_exposer.def( 
                "getInt"
                , getInt_function_type( &::osgDB::Field::getInt )
                , ( bp::arg("i") ) );
        
        }
        { //::osgDB::Field::getNoCharacters
        
            typedef int ( ::osgDB::Field::*getNoCharacters_function_type )(  ) const;
            
            Field_exposer.def( 
                "getNoCharacters"
                , getNoCharacters_function_type( &::osgDB::Field::getNoCharacters ) );
        
        }
        { //::osgDB::Field::getNoNestedBrackets
        
            typedef int ( ::osgDB::Field::*getNoNestedBrackets_function_type )(  ) ;
            
            Field_exposer.def( 
                "getNoNestedBrackets"
                , getNoNestedBrackets_function_type( &::osgDB::Field::getNoNestedBrackets ) );
        
        }
        { //::osgDB::Field::getStr
        
            typedef char const * ( ::osgDB::Field::*getStr_function_type )(  ) const;
            
            Field_exposer.def( 
                "getStr"
                , getStr_function_type( &::osgDB::Field::getStr ) );
        
        }
        { //::osgDB::Field::getUInt
        
            typedef bool ( ::osgDB::Field::*getUInt_function_type )( unsigned int & ) const;
            
            Field_exposer.def( 
                "getUInt"
                , getUInt_function_type( &::osgDB::Field::getUInt )
                , ( bp::arg("i") ) );
        
        }
        { //::osgDB::Field::getWithinQuotes
        
            typedef bool ( ::osgDB::Field::*getWithinQuotes_function_type )(  ) ;
            
            Field_exposer.def( 
                "getWithinQuotes"
                , getWithinQuotes_function_type( &::osgDB::Field::getWithinQuotes ) );
        
        }
        { //::osgDB::Field::isCloseBracket
        
            typedef bool ( ::osgDB::Field::*isCloseBracket_function_type )(  ) const;
            
            Field_exposer.def( 
                "isCloseBracket"
                , isCloseBracket_function_type( &::osgDB::Field::isCloseBracket ) );
        
        }
        { //::osgDB::Field::isFloat
        
            typedef bool ( ::osgDB::Field::*isFloat_function_type )(  ) const;
            
            Field_exposer.def( 
                "isFloat"
                , isFloat_function_type( &::osgDB::Field::isFloat ) );
        
        }
        { //::osgDB::Field::isInt
        
            typedef bool ( ::osgDB::Field::*isInt_function_type )(  ) const;
            
            Field_exposer.def( 
                "isInt"
                , isInt_function_type( &::osgDB::Field::isInt ) );
        
        }
        { //::osgDB::Field::isOpenBracket
        
            typedef bool ( ::osgDB::Field::*isOpenBracket_function_type )(  ) const;
            
            Field_exposer.def( 
                "isOpenBracket"
                , isOpenBracket_function_type( &::osgDB::Field::isOpenBracket ) );
        
        }
        { //::osgDB::Field::isQuotedString
        
            typedef bool ( ::osgDB::Field::*isQuotedString_function_type )(  ) const;
            
            Field_exposer.def( 
                "isQuotedString"
                , isQuotedString_function_type( &::osgDB::Field::isQuotedString ) );
        
        }
        { //::osgDB::Field::isString
        
            typedef bool ( ::osgDB::Field::*isString_function_type )(  ) const;
            
            Field_exposer.def( 
                "isString"
                , isString_function_type( &::osgDB::Field::isString ) );
        
        }
        { //::osgDB::Field::isUInt
        
            typedef bool ( ::osgDB::Field::*isUInt_function_type )(  ) const;
            
            Field_exposer.def( 
                "isUInt"
                , isUInt_function_type( &::osgDB::Field::isUInt ) );
        
        }
        { //::osgDB::Field::isValid
        
            typedef bool ( ::osgDB::Field::*isValid_function_type )(  ) const;
            
            Field_exposer.def( 
                "isValid"
                , isValid_function_type( &::osgDB::Field::isValid ) );
        
        }
        { //::osgDB::Field::isWord
        
            typedef bool ( ::osgDB::Field::*isWord_function_type )(  ) const;
            
            Field_exposer.def( 
                "isWord"
                , isWord_function_type( &::osgDB::Field::isWord ) );
        
        }
        { //::osgDB::Field::matchFloat
        
            typedef bool ( ::osgDB::Field::*matchFloat_function_type )( float ) const;
            
            Field_exposer.def( 
                "matchFloat"
                , matchFloat_function_type( &::osgDB::Field::matchFloat )
                , ( bp::arg("f") ) );
        
        }
        { //::osgDB::Field::matchInt
        
            typedef bool ( ::osgDB::Field::*matchInt_function_type )( int ) const;
            
            Field_exposer.def( 
                "matchInt"
                , matchInt_function_type( &::osgDB::Field::matchInt )
                , ( bp::arg("i") ) );
        
        }
        { //::osgDB::Field::matchString
        
            typedef bool ( ::osgDB::Field::*matchString_function_type )( char const * ) const;
            
            Field_exposer.def( 
                "matchString"
                , matchString_function_type( &::osgDB::Field::matchString )
                , ( bp::arg("str") ) );
        
        }
        { //::osgDB::Field::matchString
        
            typedef bool ( ::osgDB::Field::*matchString_function_type )( char const *,int ) const;
            
            Field_exposer.def( 
                "matchString"
                , matchString_function_type( &::osgDB::Field::matchString )
                , ( bp::arg("str"), bp::arg("noCharacters") ) );
        
        }
        { //::osgDB::Field::matchUInt
        
            typedef bool ( ::osgDB::Field::*matchUInt_function_type )( unsigned int ) const;
            
            Field_exposer.def( 
                "matchUInt"
                , matchUInt_function_type( &::osgDB::Field::matchUInt )
                , ( bp::arg("i") ) );
        
        }
        { //::osgDB::Field::matchWord
        
            typedef bool ( ::osgDB::Field::*matchWord_function_type )( char const * ) const;
            
            Field_exposer.def( 
                "matchWord"
                , matchWord_function_type( &::osgDB::Field::matchWord )
                , ( bp::arg("str") ) );
        
        }
        { //::osgDB::Field::matchWord
        
            typedef bool ( ::osgDB::Field::*matchWord_function_type )( char const *,int ) const;
            
            Field_exposer.def( 
                "matchWord"
                , matchWord_function_type( &::osgDB::Field::matchWord )
                , ( bp::arg("str"), bp::arg("noCharacters") ) );
        
        }
        { //::osgDB::Field::operator=
        
            typedef ::osgDB::Field & ( ::osgDB::Field::*assign_function_type )( ::osgDB::Field const & ) ;
            
            Field_exposer.def( 
                "assign"
                , assign_function_type(&::osgDB::Field::operator=)
                , ( bp::arg("ic") )
                , bp::return_self< >() );
        
        }
        { //::osgDB::Field::reset
        
            typedef void ( ::osgDB::Field::*reset_function_type )(  ) ;
            
            Field_exposer.def( 
                "reset"
                , reset_function_type( &::osgDB::Field::reset ) );
        
        }
        { //::osgDB::Field::setNoNestedBrackets
        
            typedef void ( ::osgDB::Field::*setNoNestedBrackets_function_type )( int ) ;
            
            Field_exposer.def( 
                "setNoNestedBrackets"
                , setNoNestedBrackets_function_type( &::osgDB::Field::setNoNestedBrackets )
                , ( bp::arg("no") ) );
        
        }
        { //::osgDB::Field::setWithinQuotes
        
            typedef void ( ::osgDB::Field::*setWithinQuotes_function_type )( bool ) ;
            
            Field_exposer.def( 
                "setWithinQuotes"
                , setWithinQuotes_function_type( &::osgDB::Field::setWithinQuotes )
                , ( bp::arg("withinQuotes")=(bool)(true) ) );
        
        }
        Field_exposer.staticmethod( "calculateFieldType" );
    }

}
