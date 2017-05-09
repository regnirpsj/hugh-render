// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/test/null_context.cpp                                               */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// includes, system

#include <memory>  // std::unique_ptr<>
#include <sstream> // std::ostringstream

// includes, project

#include <hugh/render/null/context.hpp>

#define HUGH_USE_TRACE
#undef HUGH_USE_TRACE
#include <hugh/support/trace.hpp>

// internal unnamed namespace

namespace {
  
  // types, internal (class, enum, struct, union, typedef)

  // variables, internal
  
  // functions, internal

} // namespace {

#define BOOST_TEST_MAIN
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(test_hugh_render_null_context_ctor)
{
  TRACE("test_hugh_render_null_context_ctor");
  
  using namespace hugh::render::null;

  std::unique_ptr<context> const ctx(new context);
  
  BOOST_CHECK(nullptr != ctx);
}

BOOST_AUTO_TEST_CASE(test_hugh_render_null_context_print_on)
{
  TRACE("test_hugh_render_null_context_print_on");
  
  using namespace hugh::render::null;

  std::unique_ptr<context> const ctx(new context);
  std::ostringstream             ostr;

  ostr << *ctx;

  BOOST_CHECK       (!ostr.str().empty());
  BOOST_TEST_MESSAGE( ostr.str());
}

BOOST_AUTO_TEST_CASE(test_hugh_render_null_context_size)
{
  TRACE("test_hugh_render_null_context_size");
  
  using namespace hugh::render::null;

  glm::uvec2 const         s1  (12,34);
  glm::uvec2 const         s2  (56,78);
  std::unique_ptr<context> ctx(new context(s1));
  
  BOOST_CHECK(s1 == *ctx->size);

  ctx->size = s2;
  
  BOOST_CHECK(s2 == *ctx->size);
}

BOOST_AUTO_TEST_CASE(test_hugh_render_null_context_resize)
{
  TRACE("test_hugh_render_null_context_resize");
  
  using namespace hugh::render::null;

  glm::uvec2 const         s1  (12,34);
  glm::uvec2 const         s2  (56,78);
  std::unique_ptr<context> ctx(new context(s1));
  
  BOOST_CHECK(s1 == *ctx->size);

  ctx->resize(s2);
  
  BOOST_CHECK(s2 == *ctx->size);
}
