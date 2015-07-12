// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osg.h"
#include "pair_double.pypp.hpp"

namespace bp = boost::python;

void register_pair_double_class(){

    bp::class_< std::pair< double, double > >( "pair_double", bp::init< >() )    
        .def( bp::init< double const &, double const & >(( bp::arg("_Val1"), bp::arg("_Val2") )) )    
        .def( 
            "swap"
            , (void ( ::std::pair<double, double>::* )( ::std::pair< double, double > & ) )( &::std::pair< double, double >::swap )
            , ( bp::arg("_Right") ) )    
        .def_readwrite( "first", &std::pair< double, double >::first )    
        .def_readwrite( "second", &std::pair< double, double >::second );

}