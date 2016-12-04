// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/context/base.cpp                                                    */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "hugh/render/context/base.hpp"

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
      base::~base()
      {
        TRACE("hugh::render::context::base::~base");
      }      
      
      /* explicit */
      base::base()
        : field::container         (),
          support::refcounted<base>()
      {
        TRACE("hugh::render::context::base::base");
      }
      
    } // namespace context {

  } // namespace render {
  
} // namespace hugh {
