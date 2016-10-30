// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/statistics/base.cpp                                                 */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "hugh/render/statistics/base.hpp"

// includes, system

#include <ostream> // std::ostream

// includes, project

//#include <>

#define HUGH_USE_TRACE
#undef HUGH_USE_TRACE
#include <hugh/support/trace.hpp>

// internal unnamed namespace

namespace {
  
  // types, internal (class, enum, struct, union, typedef)

  // variables, internal
  
  // functions, internal

} // namespace {

namespace hugh {

  namespace render {

    namespace statistics {
      
      // variables, exported
  
      // functions, exported

      /* virtual */
      base::data::~data()
      {
        TRACE("hugh::render::statistics::base::data::~data");
      }

      /* virtual */ void
      base::data::print_on(std::ostream& os) const
      {
        TRACE_NEVER("hugh::render::statistics::base::data::print_on");

        os << "[hugh::render::statistics::base::data]";
      }
      
      /* virtual */
      base::~base()
      {
        TRACE("hugh::render::statistics::base::~base");
      }
      
      /* virtual */ std::unique_ptr<base::data>
      base::fetch() const
      {
        TRACE("hugh::render::statistics::base::fetch");
        
        const_cast<base*>(this)->update();
        
        return std::unique_ptr<base::data>(new base::data);
      }
      
      /* virtual */ void
      base::print_on(std::ostream& os) const
      {
        TRACE_NEVER("hugh::render::statistics::base::print_on");

        os << '['
           << *(fetch())
           << ']';
      }
      
      /* explicit */
      base::base()
        : boost::noncopyable(),
          support::printable(),
          updated_          (true)
      {
        TRACE("hugh::render::statistics::base::base");
      }
      
      /* virtual */ void
      base::start()
      {
        TRACE("hugh::render::statistics::base::start");
      }

      /* virtual */ void
      base::stop()
      {
        TRACE("hugh::render::statistics::base::stop");
      }
      
      /* virtual */ bool
      base::done()
      {
        TRACE("hugh::render::statistics::base::done");
        
        return false;
      }
      
      /* virtual */ void
      base::update(bool force_update)
      {
        TRACE("hugh::render::statistics::base::update");
        
        if (!updated_ || force_update) {
          updated_ = done();
        }
      }
      
      /* explicit */
      guard::guard(base& a, bool b)
        : boost::noncopyable(),
        stats_            (a),
        enabled_          (b)
      {
        TRACE("hugh::render::statistics::guard::guard");
        
        if (enabled_) {
          stats_.start();
        }
      }
      
      guard::~guard()
      {
        TRACE("hugh::render::statistics::guard::~guard");
        
        if (enabled_) {
          static bool const force_update(true);
          
          stats_.stop  ();
          stats_.update(force_update);
        }
      }
  
    } // namespace statistics {

  } //  namespace render {
  
} // namespace hugh {
