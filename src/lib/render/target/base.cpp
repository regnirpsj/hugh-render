// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016-2017 University of Hull                                                     */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/target/base.cpp                                                     */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "hugh/render/target/base.hpp"

// includes, system

#include <glm/gtx/io.hpp> // glm::operator<<

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

    namespace target {
      
      // variables, exported
  
      // functions, exported

      /* virtual */
      base::~base()
      {
        TRACE("hugh::render::target::base::~base");
      }      

      /* virtual */ void
      base::print_on(std::ostream& os) const
      {
        TRACE_NEVER("hugh::render::target::base::print_on");
        
        os << '['
           << ctx_  << ','
           << size_
           << ']';
      }

      /* explicit */
      base::base(context::device& a, glm::uvec2 const& b)
        : interface::invalidatable (),
          interface::resizable     (b),
          support::printable       (),
          support::refcounted<base>(),
          ctx_                     (a)
      {
        TRACE("hugh::render::target::base::base");
      }

    } // namespace target {

  } // namespace render {
  
} // namespace hugh {
