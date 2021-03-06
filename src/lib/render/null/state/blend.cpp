// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/null/state/blend.cpp                                                */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "hugh/render/null/state/blend.hpp"

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
      
      namespace state {
        
        // variables, exported
  
        // functions, exported

        /* explicit */
        blend::blend(context& a)
          : render::state::base(a)
        {
          TRACE("hugh::render::null:state::blend::blend");
        }
        
        /* virtual */
        blend::~blend()
        {
          TRACE("hugh::render::null:state::blend::~blend");
        }
          
        /* virtual */ void
        blend::do_apply()
        {
          TRACE("hugh::render::null:state::blend::do_apply");
        }
        
      } // namespace state {

    } // namespace null {

  } // namespace render {
  
} // namespace hugh {
