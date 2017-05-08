// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/null/shader/geometry.cpp                                            */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "hugh/render/null/shader/geometry.hpp"

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
      
      namespace shader {
        
        // variables, exported
  
        // functions, exported
        
        /* explicit */
        geometry::geometry(context& a)
          : render::shader::base(a)
        {
          TRACE("hugh::render::null:shader::geometry::geometry");
        }
        
        /* virtual */
        geometry::~geometry()
        {
          TRACE("hugh::render::null:shader::geometry::~geometry");
        }

        /* virtual */ void
        geometry::do_activate()
        {
          TRACE("hugh::render::null:shader::geometry::do_activate");
        }

      } // namespace shader {

    } // namespace null {
    
  } // namespace render {
  
} // namespace hugh {
