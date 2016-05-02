// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/pass/container.cpp                                                  */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "hugh/render/pass/container.hpp"

// includes, system

#include <algorithm> // std::find<>
#include <ostream>   // std::ostream

// includes, project

#include <hugh/support/io_utils.hpp>

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

    namespace pass {
      
      // variables, exported
  
      // functions, exported

      /* explicit */
      container::container(context::device& a)
        : base   (a),
          stages_()
      {
        TRACE("hugh::render::pass::container::container");
      }
      
      /* virtual */
      container::~container()
      {
        TRACE("hugh::render::pass::container::~container");
      }

      bool
      container::add(stage::base* a)
      {
        TRACE("hugh::render::pass::container::add");
        
        bool result(false);
        auto found (std::find(stages_.begin(), stages_.end(), a));

        if (stages_.end() == found) {
          stages_.push_back(a);

          result = true;
        }
        
        return result;
      }
      
      bool
      container::sub(stage::base* a)
      {
        TRACE("hugh::render::pass::container::sub");
        
        bool result(false);
        auto found (std::find(stages_.begin(), stages_.end(), a));

        if (stages_.end() != found) {
          stages_.erase(found);

          result = true;
        }
        
        return result;
      }
      
      /* virtual */ void
      container::invalidate()
      {
        TRACE("hugh::render::pass::container::invalidate");

        for (auto& s : stages_) {
          s->invalidate();
        }
      }

      /* virtual */ void
      container::resize(glm::uvec2 const& a)
      {
        TRACE("hugh::render::pass::container::resize");

        for (auto& s : stages_) {
          s->resize(a);
        }
      }

      /* virtual */ void
      container::print_on(std::ostream& os) const
      {
        TRACE_NEVER("hugh::render::pass::container::print_on");

        base::print_on(os);

        using support::ostream::remove;
        using support::ostream::operator<<;

        os << remove(1) << ',' << stages_ << ']';
      }
      
      /* virtual */ void
      container::do_execute(context::swap& a)
      {
        TRACE("hugh::render::pass::container::do_execute");

        if (active_) {
          for (auto& s : stages_) {
            s->execute(a);
          }
        }
      }
      
    } // namespace pass {

  } // namespace render {
  
} // namespace hugh {
