// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/test/context.cpp                                                    */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// includes, system

#include <memory>  // std::unique_ptr<>
#include <sstream> // std::ostringstream

// includes, project

#include <hugh/render/context/device.hpp>
#include <hugh/render/context/swap.hpp>

#define HUGH_USE_TRACE
#undef HUGH_USE_TRACE
#include <hugh/support/trace.hpp>

// internal unnamed namespace

namespace {
  
  // types, internal (class, enum, struct, union, typedef)

  class dev_ctx : public hugh::render::context::device {

  public:

    explicit dev_ctx()
      : hugh::render::context::device()
    {}
    
  };
  
  class swp_ctx : public hugh::render::context::swap {

  public:

    explicit swp_ctx(glm::uvec2 const& a = glm::uvec2(1,1))
      : hugh::render::context::swap(a)
    {}
    
  };
  
  // variables, internal
  
  // functions, internal

} // namespace {

#define BOOST_TEST_MAIN
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(test_hugh_render_context_device_ctor)
{
  using namespace hugh::render;

  std::unique_ptr<context::base> const ctx(new dev_ctx);
  
  BOOST_CHECK(nullptr != ctx);
}

BOOST_AUTO_TEST_CASE(test_hugh_render_context_device_print_on)
{
  using namespace hugh::render;

  std::unique_ptr<context::base> const ctx(new dev_ctx);
  std::ostringstream                   ostr;

  ostr << *ctx;

  BOOST_CHECK       (!ostr.str().empty());
  BOOST_TEST_MESSAGE( ostr.str());
}

BOOST_AUTO_TEST_CASE(test_hugh_render_context_swap_ctor)
{
  using namespace hugh::render;

  std::unique_ptr<context::base> const ctx(new swp_ctx);
  
  BOOST_CHECK(nullptr != ctx);
}

BOOST_AUTO_TEST_CASE(test_hugh_render_context_swap_print_on)
{
  using namespace hugh::render;

  std::unique_ptr<context::base> const ctx(new swp_ctx);
  std::ostringstream                   ostr;

  ostr << *ctx;

  BOOST_CHECK       (!ostr.str().empty());
  BOOST_TEST_MESSAGE( ostr.str());
}

BOOST_AUTO_TEST_CASE(test_hugh_render_context_swap_size)
{
  using namespace hugh::render;

  glm::uvec2 const               s1  (12,34);
  glm::uvec2 const               s2  (56,78);
  std::unique_ptr<context::swap> ctx(new swp_ctx(s1));
  
  BOOST_CHECK(s1 == *ctx->size);

  ctx->size = s2;
  
  BOOST_CHECK(s2 == *ctx->size);
}
