// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/context/base.cpp                                                    */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "hugh/render/context/base.hpp"

// includes, system

#include <glm/gtx/io.hpp> // glm::operator<<
#include <ostream>        // std::ostream

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

    namespace context {
      
      // variables, exported
  
      // functions, exported

      /* virtual */
      base::~base()
      {
        TRACE("hugh::render::context::base::~base");
      }
      
      /* virtual */ glm::uvec2 const&
      base::size() const
      {
        TRACE("hugh::render::context::base::size(get)");

        return size_;
      }

      /* virtual */ glm::uvec2
      base::size(glm::uvec2 const& a)
      {
        TRACE("hugh::render::context::base::size(set)");

        glm::uvec2 const result(size_);

        size_ = a;
        
        return result;
      }

      /* virtual */ void
      base::print_on(std::ostream& os) const
      {
        TRACE_NEVER("hugh::render::context::base::print_on");

        os << '[' << size() << ']';
      }
      
      /* explicit */
      base::base(glm::uvec2 const& a)
        : support::printable       (),
          support::refcounted<base>(),
          size_                    (a)
      {
        TRACE("hugh::render::context::base::base");
      }
      
    } // namespace context {

  } // namespace render {
  
} // namespace hugh {
