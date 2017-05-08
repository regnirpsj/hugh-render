// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016-2017 University of Hull                                                     */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/target/base.cpp                                                     */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "hugh/render/target/base.hpp"

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

    namespace target {
      
      // variables, exported
  
      // functions, exported

      /* virtual */
      base::~base()
      {
        TRACE("hugh::render::target::base::~base");
      }      
      
      /* virtual */ void
      base::invalidate()
      {
        TRACE("hugh::render::target::base::invalidate");

        statistics::guard const sg(*stats_cpu_[stats::invalidate]);

        do_invalidate();
      }

      /* virtual */ void
      base::resize(glm::uvec2 const& a)
      {
        TRACE("hugh::render::target::base::resize");

        statistics::guard const sg(*stats_cpu_[stats::resize]);

        do_resize(a);
      }

      /* virtual */ void
      base::print_on(std::ostream& os) const
      {
        TRACE_NEVER("hugh::render::target::base::print_on");

        os << '['
           << ctx_                                                    << ','
           << "invd:" << *(stats_cpu_.at(stats::invalidate)->fetch()) << ','
           << "resz:" << *(stats_cpu_.at(stats::resize)    ->fetch())
           << ']';
      }

      /* explicit */
      base::base(context::device& a, glm::uvec2 const& b)
        : support::printable       (),
          support::refcounted<base>(),
          ctx_                     (a),
          stats_cpu_               (),
          size_                    (b)
      {
        TRACE("hugh::render::target::base::base");

        stats_cpu_[stats::invalidate].reset(new statistics::cpu);
        stats_cpu_[stats::resize]    .reset(new statistics::cpu);
      }
      
      /* virtual */ void
      base::do_invalidate()
      {
        TRACE("hugh::render::target::base::do_invalidate");
        
        throw std::logic_error("pure virtual function "
                               "'hugh::render::target::base::do_invalidate'"
                               " called");
      }

      /* virtual */ void
      base::do_resize(glm::uvec2 const& a)
      {
        TRACE("hugh::render::target::base::do_resize");
        
        size_ = a;
      }

    } // namespace target {

  } // namespace render {
  
} // namespace hugh {
