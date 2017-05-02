// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016-2017 University of Hull                                                     */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/window/base.cpp                                                     */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "hugh/render/window/base.hpp"

// includes, system

#include <algorithm> // std::find<>
#include <stdexcept> // std::logic_error
#include <ostream>   // std::ostream

// includes, project

#include <hugh/render/pass/base.hpp>
#include <hugh/support/io.hpp>

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

    namespace window {
      
      // variables, exported
  
      // functions, exported

      /* virtual */
      base::~base()
      {
        TRACE("hugh::render::window::base::~base");
      }
      
      /* virtual */ void
      base::render(unsigned)
      {
        TRACE("hugh::render::window::base::render");

        throw std::logic_error("pure virtual function "
                               "'hugh::render::window::base::render'"
                               " called");
      }

      context::device&
      base::device_context() const
      {
        TRACE("hugh::render::window::base::device_context");

        return *(dev_ctx_.get());
      }

      context::swap&
      base::swap_context() const
      {
        TRACE("hugh::render::window::base::swap_context");

        return *(swp_ctx_.get());
      }

      bool
      base::add(pass::base* a)
      {
        TRACE("hugh::render::window::base::add");

        bool result(false);
        auto found (std::find(render_passes_.begin(), render_passes_.end(), a));

        if (render_passes_.end() == found) {
          render_passes_.push_back(a);

          result = true;
        }
        
        return result;
      }

      bool
      base::sub(pass::base* a)
      {
        TRACE("hugh::render::window::base::sub");

        bool result(false);
        auto found (std::find(render_passes_.begin(), render_passes_.end(), a));

        if (render_passes_.end() != found) {
          render_passes_.erase(found);

          result = true;
        }
        
        return result;
      }

      /* virtual */ void
      base::print_on(std::ostream& os) const
      {
        TRACE_NEVER("hugh::render::window::base::print_on");
        
        using support::ostream::operator<<;

        os << '['
           << *(dev_ctx_.get()) << ','
           << *(swp_ctx_.get()) << ','
           << '\n'
           << render_passes_
           << ']';
      }

      /* explicit */
      base::base(context::device* a)
        : support::printable       (),
          support::refcounted<base>(),
          dev_ctx_                 (a),
          swp_ctx_                 (nullptr),
          render_passes_           ()
      {
        TRACE("hugh::render::window::base::base");
      }

      /* virtual */ bool
      base::redraw()
      {
        TRACE("hugh::render::window::base::redraw");

        render(1);
        
        return true;
      }

      /* virtual */ bool
      base::resize(glm::uvec2 const& a, bool)
      {
        TRACE("hugh::render::window::base::resize");

        /**
         *  1.  invalidate resources (and release them from swap chain)
         *  2.1 remove all render targets
         *  2.2 resize viewport
         *  2.3 resize swap chain
         *  3.  resize resources
         */

        // 1
        for (auto& rp : render_passes_) {
          rp->invalidate();
        }

        { // 2.1 + 2.2
          // dev_ctx_->size(a);
          // 2.3
          swp_ctx_->size = a;
        }

        // 3
        for (auto& rp : render_passes_) {
          rp->resize(a);
        }
    
        return true;
      }
      
    } // namespace window {

  } // namespace render {
  
} // namespace hugh {
