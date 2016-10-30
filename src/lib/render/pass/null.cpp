// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/pass/null.cpp                                                       */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "hugh/render/pass/null.hpp"

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

    namespace pass {
      
      // variables, exported
  
      // functions, exported

      /* explicit */
      null::null(context::device& a)
        : base(a)
      {
        TRACE("hugh::render::pass::null::null");
      }
      
      /* virtual */
      null::~null()
      {
        TRACE("hugh::render::pass::null::~null");
      }      

      /* virtual */ void
      null::do_execute(context::swap&)
      {
        TRACE("hugh::render::pass::null::do_execute");
      }

      /* virtual */ void
      null::do_invalidate()
      {
        TRACE("hugh::render::pass::null::do_invalidate");
      }

      /* virtual */ void
      null::do_resize(glm::uvec2 const&)
      {
        TRACE("hugh::render::pass::null::do_resize");
      }
      
    } // namespace pass {

  } // namespace render {
  
} // namespace hugh {
