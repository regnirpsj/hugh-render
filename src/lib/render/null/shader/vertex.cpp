// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/null/shader/vertex.cpp                                              */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "hugh/render/null/shader/vertex.hpp"

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
        vertex::vertex(context& a)
          : render::shader::base(a)
        {
          TRACE("hugh::render::null:shader::vertex::vertex");
        }
        
        /* virtual */
        vertex::~vertex()
        {
          TRACE("hugh::render::null:shader::vertex::~vertex");
        }

        /* virtual */ void
        vertex::do_activate()
        {
          TRACE("hugh::render::null:shader::vertex::do_activate");
        }

      } // namespace shader {

    } // namespace null {
    
  } // namespace render {
  
} // namespace hugh {
