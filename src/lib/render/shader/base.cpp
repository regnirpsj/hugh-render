// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/shader/base.cpp                                                     */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "hugh/render/shader/base.hpp"

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
    
    namespace shader {
        
      // variables, exported
  
      // functions, exported
  
      /* virtual */
      base::~base()
      {
        TRACE("hugh::render::shader::base::~base");
      }
      
      void
      base::activate()
      {
        TRACE("hugh::render::shader::base::activate");
        
        statistics::guard const sg(*stats_cpu_[stats::activate]);

        do_activate();
      }

      /* virtual */ void
      base::print_on(std::ostream& os) const
      {
        TRACE_NEVER("hugh::render::shader::base::print_on");
        
        os << '['
           << ctx_                                               << ','
           << "aply:" << *(stats_cpu_.at(stats::activate)->fetch()) << ','
           << ']';
      }
      
      /* explicit */
      base::base(context::device& a)
        : support::printable       (),
          support::refcounted<base>(),
          ctx_                     (a),
          stats_cpu_               ()
      {
        TRACE("hugh::render::shader::base::base");

        stats_cpu_[stats::activate].reset(new statistics::cpu);
      }

      /* virtual */ void
      base::do_activate()
      {
        TRACE("hugh::render::shader::base::do_activate");

        throw std::logic_error("pure virtual function "
                               "'hugh::render::shader::base::do_activate'"
                               " called");
      }

    } // namespace shader {

  } // namespace render {
  
} // namespace hugh {
