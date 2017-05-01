// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/null/pass/standard.cpp                                              */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "hugh/render/null/pass/standard.hpp"

// includes, system

//#include <>

// includes, project

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

    namespace null {
      
      namespace pass {
      
        // variables, exported
  
        // functions, exported
      
        /* explicit */
        standard::standard(context& a)
          : render::pass::base(a),
            clear_            (a),
            draw_             (a),
            swap_             (a)
        {
          TRACE("hugh::render::null::pass::standard::standard");
        }
        
        /* virtual */
        standard::~standard()
        {
          TRACE("hugh::render::null::pass::standard::~standard");
        }

        /* virtual */ void
        standard::print_on(std::ostream& os) const
        {
          TRACE_NEVER("hugh::render::null::pass::standard::print_on");

          render::pass::base::print_on(os);
          
          os << support::ostream::remove(1)
             << ','
             << clear_ << ','
             << draw_  << ','
             << swap_  << ']';
          
        }
        
        /* virtual */ void
        standard::do_execute(context::swap& a)
        {
          TRACE("hugh::render::null::pass::standard::do_execute");

          clear_.execute(a);
          draw_ .execute(a);
          swap_ .execute(a);
        }

        /* virtual */ void
        standard::do_invalidate()
        {
          TRACE("hugh::render::null::pass::standard::do_invalidate");

          clear_.invalidate();
          draw_ .invalidate();
          swap_ .invalidate();
        }

        /* virtual */ void
        standard::do_resize(glm::uvec2 const& a)
        {
          TRACE("hugh::render::null::pass::standard::do_resize");

          clear_.resize(a);
          draw_ .resize(a);
          swap_ .resize(a);
        }
        
      } // namespace pass {

    } // namespace null {
    
  } // namespace render {
  
} // namespace hugh {
