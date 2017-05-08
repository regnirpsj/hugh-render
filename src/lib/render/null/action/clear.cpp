// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/null/action/clear.cpp                                               */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "hugh/render/null/action/clear.hpp"

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
      
      namespace action {
      
        // variables, exported
  
        // functions, exported

        /* explicit */
        clear::clear(context& a)
          : base(a)
        {
          TRACE("hugh::render::null::action::clear::clear");
        }

        /* virtual */
        clear::~clear()
        {
          TRACE("hugh::render::null::action::clear::~clear");
        }      
      
        /* virtual */ void
        clear::do_execute(context::swap&)
        {
          TRACE("hugh::render::null::action::clear::do_execute");
        }
      
      } // namespace action {

    } // namespace null {
    
  } // namespace render {
  
} // namespace hugh {
