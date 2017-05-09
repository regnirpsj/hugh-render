// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/interface/invalidatable.cpp                                         */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "hugh/render/interface/invalidatable.hpp"

// includes, system

#include <stdexcept> // std::logic_error

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
    
    namespace interface {
      
      // variables, exported
  
      // functions, exported

      /* virtual */
      invalidatable::~invalidatable()
      {
        TRACE("hugh::render::interface::invalidatable::~invalidatable");
      }
      
      void
      invalidatable::invalidate()
      {
        TRACE("hugh::render::interface::invalidatable::invalidate");

        do_invalidate();
      }

      /* explicit */
      invalidatable::invalidatable()
      {
        TRACE("hugh::render::interface::invalidatable::invalidatable");
      }

      /* virtual */ void
      invalidatable::do_invalidate()
      {
        TRACE("hugh::render::interface::invalidatable::do_invalidate");

        throw std::logic_error("pure virtual function "
                               "'hugh::render::interface::invalidatable::do_invalidate'"
                               " called");
      }
      
    } // namespace interface {

  } // namespace render {
  
} // namespace hugh {
