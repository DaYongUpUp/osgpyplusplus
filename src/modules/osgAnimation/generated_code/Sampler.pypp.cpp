// This file has been generated by Py++.

#include "boost/python.hpp"
#include "wrap_osganimation.h"
#include "wrap_referenced.h"
#include "sampler.pypp.hpp"

namespace bp = boost::python;

struct Sampler_wrapper : osgAnimation::Sampler, bp::wrapper< osgAnimation::Sampler > {

    Sampler_wrapper()
    : osgAnimation::Sampler()
      , bp::wrapper< osgAnimation::Sampler >(){
        // null constructor
        
    }

    virtual ::osgAnimation::KeyframeContainer * getKeyframeContainer(  ){
        bp::override func_getKeyframeContainer = this->get_override( "getKeyframeContainer" );
        return func_getKeyframeContainer(  );
    }

    virtual ::osgAnimation::KeyframeContainer const * getKeyframeContainer(  ) const {
        bp::override func_getKeyframeContainer = this->get_override( "getKeyframeContainer" );
        return func_getKeyframeContainer(  );
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

void register_Sampler_class(){

    bp::class_< Sampler_wrapper, bp::bases< ::osg::Referenced >, osg::ref_ptr< Sampler_wrapper >, boost::noncopyable >( "Sampler", bp::no_init )    
        .def( 
            "getKeyframeContainer"
            , bp::pure_virtual( (::osgAnimation::KeyframeContainer * ( ::osgAnimation::Sampler::* )(  ))(&::osgAnimation::Sampler::getKeyframeContainer) )
            , bp::return_internal_reference< >() )    
        .def( 
            "getKeyframeContainer"
            , bp::pure_virtual( (::osgAnimation::KeyframeContainer const * ( ::osgAnimation::Sampler::* )(  )const)(&::osgAnimation::Sampler::getKeyframeContainer) )
            , bp::return_internal_reference< >() );

}
