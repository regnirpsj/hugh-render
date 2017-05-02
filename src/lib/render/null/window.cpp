// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/null/window.cpp                                                     */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "hugh/render/null/window.hpp"

// includes, system

//#include <>

// includes, project

#include <hugh/render/null/context.hpp>
#include <hugh/render/pass/base.hpp>

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
      
      // variables, exported
  
      // functions, exported
  
      /* explicit */
      window::window()
        : render::window::base()
      {
        TRACE("hugh::render::null:window::window");

        context* ctx(new context);

        dev_ctx_.reset(ctx);
        swp_ctx_.reset(ctx);
      }
      
      /* virtual */
      window::~window()
      {
        TRACE("hugh::render::null:window::~window");
      }

      /* virtual */ void
      window::render(unsigned a)
      {
        TRACE("hugh::render::null:window::render");

        for (unsigned i(0); i < a; ++i) {
          for (auto const& rp : render_passes_) {
            rp->execute(*(swp_ctx_.get()));
          }
        }
      }

      context&
      window::device_context() const
      {
        TRACE("hugh::render::null:window::device_context(get)");

        return *(dynamic_cast<context*>(dev_ctx_.get()));
      }
      
      context&
      window::swap_context() const
      {
        TRACE("hugh::render::null:window::swap_context(get)");
        
        return *(dynamic_cast<context*>(swp_ctx_.get()));
      }
      
    } // namespace null {

  } // namespace render {
  
} // namespace hugh {
