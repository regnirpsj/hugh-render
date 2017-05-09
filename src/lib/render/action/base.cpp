// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016-2017 University of Hull                                                     */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/action/base.cpp                                                     */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "hugh/render/action/base.hpp"

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

    namespace action {
      
      // variables, exported
  
      // functions, exported

      /* virtual */
      base::~base()
      {
        TRACE("hugh::render::action::base::~base");
      }      

      /* virtual */ void
      base::print_on(std::ostream& os) const
      {
        TRACE_NEVER("hugh::render::action::base::print_on");

        os << '['
           << ctx_
           << ']';
      }

      /* explicit */
      base::base(context::device& a)
        : interface::executable    (),
          interface::invalidatable (),
          interface::resizable     (),
          support::printable       (),
          support::refcounted<base>(),
          ctx_                     (a)
      {
        TRACE("hugh::render::action::base::base");
      }

      /* virtual */ void
      base::do_invalidate()
      {
        TRACE("hugh::render::action::base::do_invalidate");
      }

      /* virtual */ void
      base::do_resize(glm::uvec2 const&)
      {
        TRACE("hugh::render::action::base::do_resize");
      }

    } // namespace action {

  } // namespace render {
  
} // namespace hugh {
