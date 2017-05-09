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
    
    namespace shader {
        
      // variables, exported
  
      // functions, exported
  
      /* virtual */
      base::~base()
      {
        TRACE("hugh::render::shader::base::~base");
      }
      
      /* virtual */ void
      base::print_on(std::ostream& os) const
      {
        TRACE_NEVER("hugh::render::shader::base::print_on");
        
        os << '['
           << ctx_
           << ']';
      }
      
      /* explicit */
      base::base(context::device& a)
        : interface::activatable   (),
          support::printable       (),
          support::refcounted<base>(),
          ctx_                     (a)
      {
        TRACE("hugh::render::shader::base::base");
      }

    } // namespace shader {

  } // namespace render {
  
} // namespace hugh {
