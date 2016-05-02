// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/stage/base.cpp                                                      */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "hugh/render/stage/base.hpp"

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

    namespace stage {
      
      // variables, exported
  
      // functions, exported

      /* virtual */
      base::~base()
      {
        TRACE("hugh::render::stage::base::~base");
      }
      
      void
      base::execute(context::swap& a)
      {
        TRACE("hugh::render::stage::base::execute");

        if (active_) {
          do_execute(a);
        }
      }

      bool const&
      base::active() const
      {
        TRACE("hugh::render::stage::base::active(get)");

        return active_;
      }

      bool
      base::active(bool a)
      {
        TRACE("hugh::render::stage::base::active(set)");

        bool const result(active_);

        active_ = a;
        
        return result;
      }

      /* virtual */ void
      base::invalidate()
      {
        TRACE("hugh::render::stage::base::invalidate");

        throw std::logic_error("pure virtual function "
                               "'hugh::render::stage::base::invalidate'"
                               " called");
      }

      /* virtual */ void
      base::resize(glm::uvec2 const&)
      {
        TRACE("hugh::render::stage::base::resize");

        throw std::logic_error("pure virtual function "
                               "'hugh::render::stage::base::resize'"
                               " called");
      }

      /* virtual */ void
      base::print_on(std::ostream& os) const
      {
        TRACE_NEVER("hugh::render::stage::base::print_on");

        os << '[' << ctx_ << ',' << ((active_) ? "" : "!") << "active" << ']';
      }

      /* explicit */
      base::base(context::device& a)
        : support::printable       (),
          support::refcounted<base>(),
          ctx_                     (a),
          active_                  ()
      {
        TRACE("hugh::render::stage::base::base");
      }

      /* virtual */ void
      base::do_execute(context::swap&)
      {
        TRACE("hugh::render::stage::base::do_execute");

        throw std::logic_error("pure virtual function "
                               "'hugh::render::stage::base::do_execute'"
                               " called");
      }
      
    } // namespace stage {

  } // namespace render {
  
} // namespace hugh {
