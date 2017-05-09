// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/interface/resizable.cpp                                             */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "hugh/render/interface/resizable.hpp"

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
      resizable::~resizable()
      {
        TRACE("hugh::render::interface::resizable::~resizable");
      }
      
      void
      resizable::resize(glm::uvec2 const& a)
      {
        TRACE("hugh::render::interface::resizable::resize");

        do_resize(a);
      }

      /* explicit */
      resizable::resizable(glm::uvec2 const& a)
        : size_(a)
      {
        TRACE("hugh::render::interface::resizable::resizable");
      }

      /* virtual */ void
      resizable::do_resize(glm::uvec2 const&)
      {
        TRACE("hugh::render::interface::resizable::do_resize");

        throw std::logic_error("pure virtual function "
                               "'hugh::render::interface::resizable::do_resize'"
                               " called");
      }
      
    } // namespace interface {

  } // namespace render {
  
} // namespace hugh {
