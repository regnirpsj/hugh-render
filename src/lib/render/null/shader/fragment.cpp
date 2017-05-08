// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/null/shader/fragment.cpp                                            */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "hugh/render/null/shader/fragment.hpp"

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
        fragment::fragment(context& a)
          : render::shader::base(a)
        {
          TRACE("hugh::render::null:shader::fragment::fragment");
        }
        
        /* virtual */
        fragment::~fragment()
        {
          TRACE("hugh::render::null:shader::fragment::~fragment");
        }

        /* virtual */ void
        fragment::do_activate()
        {
          TRACE("hugh::render::null:shader::fragment::do_activate");
        }

      } // namespace shader {

    } // namespace null {
    
  } // namespace render {
  
} // namespace hugh {
