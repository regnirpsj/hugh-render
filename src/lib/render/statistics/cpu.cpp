// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016-2017 University of Hull                                                     */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/statistics/cpu.cpp                                                  */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "hugh/render/statistics/cpu.hpp"

// includes, system

#include <iomanip> // std::setprecision

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

    namespace statistics {
      
      // variables, exported
  
      // functions, exported

      /* virtual */
      cpu::data::~data()
      {
        TRACE("hugh::render::statistics::cpu::data::~data");
      }
      
      /* virtual */ void
      cpu::data::print_on(std::ostream& os) const
      {
        TRACE_NEVER("hugh::render::statistics::cpu::data::print_on");

        os << "["
           << std::fixed << std::setprecision(2)
           << rate_in_hz << "Hz,"
           << time_in_ns << "ns"
           << ']';
      }

      /* explicit */
      cpu::cpu()
        : base        (),
          rate_timer_ (),
          rate_       (rate_timer_.lapse()),
          stamp_timer_(),
          stamp_      (stamp_timer_.lapse())
      {
        TRACE("hugh::render::statistics::cpu::cpu");
      }

      /* virtual */
      cpu::~cpu()
      {
        TRACE("hugh::render::statistics::cpu::~cpu");
      }

      /* virtual */ std::unique_ptr<base::data>
      cpu::fetch() const
      {
        TRACE("hugh::render::statistics::cpu::fetch");

        base::fetch();

        static float const nano_to_sec(1000000000.0f);

        using std::chrono::duration_cast;
        using std::chrono::nanoseconds;
        
        cpu::data* result(new cpu::data);

        result->rate_in_hz = ((1.0f / duration_cast<nanoseconds>(rate_).count()) * nano_to_sec);
        result->time_in_ns = double(duration_cast<nanoseconds>(stamp_).count());
        
        return std::unique_ptr<base::data>(result);
      }

      /* virtual */ void
      cpu::start()
      {
        TRACE("hugh::render::statistics::cpu::start");

        rate_timer_ .reset();
        stamp_timer_.reset();
      }

      /* virtual */ void
      cpu::stop()
      {
        TRACE("hugh::render::statistics::cpu::stop");

        rate_  = rate_timer_ .lapse();
        stamp_ = stamp_timer_.lapse();

        rate_timer_.reset();
      }

      /* virtual */ bool
      cpu::done()
      {
        TRACE("hugh::render::statistics::cpu::done");

        return true;
      }

      /* virtual */ void
      cpu::update(bool)
      {
        TRACE("hugh::render::statistics::cpu::update");
      }

    } // namespace statistics {

  } //  namespace render {
  
} // namespace hugh {
