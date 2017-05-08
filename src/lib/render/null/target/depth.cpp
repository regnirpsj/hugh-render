// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/null/target/depth.cpp                                               */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "hugh/render/null/target/depth.hpp"

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
        depth::depth(context& a, glm::uvec2 const& b)
          : render::target::base(a, b)
        {
          TRACE("hugh::render::null:target::depth::depth");
        }
        
        /* virtual */
        depth::~depth()
        {
          TRACE("hugh::render::null:target::depth::~depth");
        }
          
        /* virtual */ void
        depth::do_invalidate()
        {
          TRACE("hugh::render::null:target::depth::do_invalidate");
        }

      } // namespace target {

    } // namespace null {

  } // namespace render {
  
} // namespace hugh {
