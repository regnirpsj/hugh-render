// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/state/base.cpp                                                      */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "hugh/render/state/base.hpp"

// includes, system

#include <stdexcept> // std::logic_error

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
    
    namespace state {
        
      // variables, exported
  
      // functions, exported
  
      /* virtual */
      base::~base()
      {
        TRACE("hugh::render::state::base::~base");
      }
      
      void
      base::apply()
      {
        TRACE("hugh::render::state::base::apply");
        
        statistics::guard const sg(*stats_cpu_[stats::apply]);

        do_apply();
      }

      /* virtual */ void
      base::print_on(std::ostream& os) const
      {
        TRACE_NEVER("hugh::render::state::base::print_on");
        
        os << '['
           << ctx_                                               << ','
           << "aply:" << *(stats_cpu_.at(stats::apply)->fetch()) << ','
           << ']';
      }
      
      /* explicit */
      base::base(context::device& a)
        : support::printable       (),
          support::refcounted<base>(),
          ctx_                     (a),
          stats_cpu_               ()
      {
        TRACE("hugh::render::state::base::base");

        stats_cpu_[stats::apply].reset(new statistics::cpu);
      }

      /* virtual */ void
      base::do_apply()
      {
        TRACE("hugh::render::state::base::do_apply");

        throw std::logic_error("pure virtual function "
                               "'hugh::render::state::base::do_apply'"
                               " called");
      }

    } // namespace state {

  } // namespace render {
  
} // namespace hugh {
