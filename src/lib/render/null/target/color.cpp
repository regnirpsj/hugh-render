// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/null/target/color.cpp                                               */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "hugh/render/null/target/color.hpp"

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
      
      namespace target {
        
        // variables, exported
  
        // functions, exported

        /* explicit */
        color::color(context& a, glm::uvec2 const& b)
          : render::target::base(a, b)
        {
          TRACE("hugh::render::null:target::color::color");
        }
        
        /* virtual */
        color::~color()
        {
          TRACE("hugh::render::null:target::color::~color");
        }
          
        /* virtual */ void
        color::do_invalidate()
        {
          TRACE("hugh::render::null:target::color::do_invalidate");
        }

      } // namespace target {

    } // namespace null {

  } // namespace render {
  
} // namespace hugh {
