// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/null/shader/tessellation.cpp                                        */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "hugh/render/null/shader/tessellation.hpp"

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

        namespace tessellation {
          
          // variables, exported
  
          // functions, exported
        
          /* explicit */
          control::control(context& a)
            : render::shader::base(a)
          {
            TRACE("hugh::render::null:shader::tessellation::control::control");
          }
        
          /* virtual */
          control::~control()
          {
            TRACE("hugh::render::null:shader::tessellation::control::~control");
          }

          /* virtual */ void
          control::do_activate()
          {
            TRACE("hugh::render::null:shader::tessellation::control::do_activate");
          }

          /* explicit */
          evaluation::evaluation(context& a)
            : render::shader::base(a)
          {
            TRACE("hugh::render::null:shader::tessellation::evaluation::evaluation");
          }
        
          /* virtual */
          evaluation::~evaluation()
          {
            TRACE("hugh::render::null:shader::tessellation::evaluation::~evaluation");
          }

          /* virtual */ void
          evaluation::do_activate()
          {
            TRACE("hugh::render::null:shader::tessellation::evaluation::do_activate");
          }
          
        } // namespace tessellation {
        
      } // namespace shader {

    } // namespace null {
    
  } // namespace render {
  
} // namespace hugh {
