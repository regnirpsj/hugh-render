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

//#include <>

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

      /* virtual */ void
      base::print_on(std::ostream& os) const
      {
        TRACE_NEVER("hugh::render::state::base::print_on");
        
        os << '['
           << ctx_
           << ']';
      }
      
      /* explicit */
      base::base(context::device& a)
        : interface::applicable    (),
          support::printable       (),
          support::refcounted<base>(),
          ctx_                     (a)
      {
        TRACE("hugh::render::state::base::base");
      }

    } // namespace state {

  } // namespace render {
  
} // namespace hugh {
