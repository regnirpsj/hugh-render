// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/null/stage/draw.cpp                                                 */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "hugh/render/null/stage/draw.hpp"

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
      
    namespace stage {
      
      // variables, exported
  
      // functions, exported

      /* explicit */
      draw::draw(context& a)
        : base(a)
      {
        TRACE("hugh::render::null::stage::draw::draw");
      }

      /* virtual */
      draw::~draw()
      {
        TRACE("hugh::render::null::stage::draw::~draw");
      }      
      
      /* virtual */ void
      draw::do_execute(context::swap&)
      {
        TRACE("hugh::render::null::stage::draw::do_execute");
      }
      
    } // namespace stage {

    } // namespace null {
    
  } // namespace render {
  
} // namespace hugh {
