// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/vector.hpp"
#include "wrap_osg.h"
#include "audiostreams.pypp.hpp"

namespace bp = boost::python;

void register_AudioStreams_class(){

    { //::std::vector< osg::ref_ptr<osg::AudioStream> >
        typedef bp::class_< std::vector< osg::ref_ptr<osg::AudioStream> > > AudioStreams_exposer_t;
        AudioStreams_exposer_t AudioStreams_exposer = AudioStreams_exposer_t( "AudioStreams" );
        bp::scope AudioStreams_scope( AudioStreams_exposer );
        AudioStreams_exposer.def( bp::indexing::vector_suite< std::vector< osg::ref_ptr<osg::AudioStream> > >() );
    }

}
