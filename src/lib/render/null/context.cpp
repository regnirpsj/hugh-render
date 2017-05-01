// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/null/context.cpp                                                    */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "hugh/render/null/context.hpp"

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

    namespace null {
      
      // variables, exported
  
      // functions, exported

      /* explicit */
      context::context(glm::uvec2 const& a)
        : render::context::device(),
          render::context::swap  (a)
      {
        TRACE("hugh::render::null::context::context");
      }
      
      /* virtual */
      context::~context()
      {
        TRACE("hugh::render::null::context::~context");
      }
      
    } //namespace null {

  } // namespace null {
          
} // namespace hugh {
