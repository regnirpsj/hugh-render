// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/context/swap.cpp                                                    */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// include i/f header

#include "hugh/render/context/swap.hpp"

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
      swap::~swap()
      {
        TRACE("hugh::render::context::swap::~swap");
      }
      
      /* explicit */
      swap::swap(glm::uvec2 const& a)
        : base                (),
          interface::resizable(a),
          size                (*this, "size",
                               std::bind(&swap::cb_get_size, this),
                               std::bind(&swap::cb_set_size, this, std::placeholders::_1))
      {
        TRACE("hugh::render::context::swap::swap");
      }
      
      /* virtual */ void
      swap::do_resize(glm::uvec2 const& a)
      {
        TRACE("hugh::render::context::swap::do_resize");
        
        size_ = a;
      }
      
      glm::uvec2 const&
      swap::cb_get_size() const
      {
        TRACE("hugh::render::context::swap::cb_get_size");
        
        return size_;
      }
      
      glm::uvec2
      swap::cb_set_size(glm::uvec2 const& a)
      {
        TRACE("hugh::render::context::swap::cb_set_size");
        
        glm::uvec2 const result(size_);

        resize(a);

        return result;
      }

    } // namespace context {

  } // namespace render {
  
} // namespace hugh {
