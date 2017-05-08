// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/null/shader/compute.cpp                                             */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "hugh/render/null/shader/compute.hpp"

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
        compute::compute(context& a)
          : render::shader::base(a)
        {
          TRACE("hugh::render::null:shader::compute::compute");
        }
        
        /* virtual */
        compute::~compute()
        {
          TRACE("hugh::render::null:shader::compute::~compute");
        }

        void
        compute::dispatch(glm::uvec3 const&)
        {
          TRACE("hugh::render::null:shader::compute::dispatch");
        }
        
        /* virtual */ void
        compute::do_activate()
        {
          TRACE("hugh::render::null:shader::compute::do_activate");
        }

      } // namespace shader {

    } // namespace null {
    
  } // namespace render {
  
} // namespace hugh {
