// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/interface/executable.cpp                                            */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "hugh/render/interface/executable.hpp"

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
      executable::~executable()
      {
        TRACE("hugh::render::interface::executable::~executable");
      }
      
      void
      executable::execute(context::swap& a)
      {
        TRACE("hugh::render::interface::executable::execute");

        do_execute(a);
      }

      /* explicit */
      executable::executable()
      {
        TRACE("hugh::render::interface::executable::executable");
      }

      /* virtual */ void
      executable::do_execute(context::swap&)
      {
        TRACE("hugh::render::interface::executable::do_execute");

        throw std::logic_error("pure virtual function "
                               "'hugh::render::interface::executable::do_execute'"
                               " called");
      }

    } // namespace interface {

  } // namespace render {
  
} // namespace hugh {
