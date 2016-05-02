// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/context/swap.cpp                                                    */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "hugh/render/context/swap.hpp"

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

    namespace context {
      
      // variables, exported
  
      // functions, exported

      /* virtual */
      swap::~swap()
      {
        TRACE("hugh::render::context::swap::~swap");
      }
      
      /* explicit */
      swap::swap(glm::uvec2 const& a)
        : base(a)
      {
        TRACE("hugh::render::context::swap::swap");
      }
      
    } // namespace context {

  } // namespace render {
  
} // namespace hugh {
