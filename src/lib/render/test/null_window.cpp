// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/test/null_window.cpp                                                */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// includes, system

#include <memory>  // std::unique_ptr<>
#include <sstream> // std::ostringstream

// includes, project

#include <hugh/render/null/pass/standard.hpp>
#include <hugh/render/null/window.hpp>

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

BOOST_AUTO_TEST_CASE(test_hugh_render_null_window_ctor)
{
  using namespace hugh::render::null;

  std::unique_ptr<window> const w(new window);
  
  BOOST_CHECK(nullptr != w);
}

BOOST_AUTO_TEST_CASE(test_hugh_render_null_window_context_get)
{
  using namespace hugh::render::null;

  std::unique_ptr<window> const w(new window);
  
  BOOST_CHECK(nullptr != w);
  BOOST_CHECK(&(w->device_context()) == &(w->swap_context()));
}

BOOST_AUTO_TEST_CASE(test_hugh_render_null_window_print_on)
{
  using namespace hugh::render::null;

  std::unique_ptr<window> const w(new window);
  std::ostringstream            ostr;

  ostr << *w;

  BOOST_CHECK       (!ostr.str().empty());
  BOOST_TEST_MESSAGE( ostr.str());
}

BOOST_AUTO_TEST_CASE(test_hugh_render_null_window_add_sub)
{
  using namespace hugh::render::null;

  std::unique_ptr<window> const        w(new window);
  boost::intrusive_ptr<pass::standard> p(new pass::standard(w->device_context()));
  
  w->add(p.get());

  {
    std::ostringstream ostr;

    ostr << *w;

    BOOST_CHECK       (!ostr.str().empty());
    BOOST_TEST_MESSAGE( ostr.str());
  }
  
  w->sub(p.get());

  {
    std::ostringstream ostr;

    ostr << *w;

    BOOST_CHECK       (!ostr.str().empty());
    BOOST_TEST_MESSAGE( ostr.str());
  }
}
