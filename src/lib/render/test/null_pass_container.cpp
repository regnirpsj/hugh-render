// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016-2017 University of Hull                                                     */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/test/null_pass_container.cpp                                        */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// includes, system

#include <memory>  // std::unique_ptr<>
#include <sstream> // std::ostringstream

// includes, project

#include <hugh/render/null/action/clear.hpp>
#include <hugh/render/null/action/draw.hpp>
#include <hugh/render/null/action/swap.hpp>
#include <hugh/render/pass/container.hpp>

#define HUGH_USE_TRACE
#undef HUGH_USE_TRACE
#include <hugh/support/trace.hpp>

// internal unnamed namespace

namespace {
  
  // types, internal (class, enum, struct, union, typedef)

  // variables, internal

  unsigned const loop_limit(5);
  
  // functions, internal

} // namespace {

#define BOOST_TEST_MAIN
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(test_hugh_render_null_pass_container_ctor)
{
  TRACE("test_hugh_render_null_pass_container_ctor");
  
  using namespace hugh::render;

  null::context                    c;
  std::unique_ptr<pass::container> p(new pass::container(c));
  
  BOOST_CHECK(nullptr != p);
}

BOOST_AUTO_TEST_CASE(test_hugh_render_null_pass_container_print_on)
{
  TRACE("test_hugh_render_null_pass_container_print_on");
  
  using namespace hugh::render;

  null::context                    c;
  std::unique_ptr<pass::container> p(new pass::container(c));
  
  BOOST_CHECK(nullptr != p);

  p->add(new null::action::clear(c));
  p->add(new null::action::draw (c));
  p->add(new null::action::swap (c));
  
  for (unsigned i(0); i < loop_limit; ++i) {
    p->invalidate();
    p->resize    (*c.size);
    p->execute   (c);
  
    std::ostringstream ostr;

    ostr << *p;

    BOOST_CHECK       (!ostr.str().empty());
    BOOST_TEST_MESSAGE( ostr.str());
  }
}

BOOST_AUTO_TEST_CASE(test_hugh_render_null_pass_container_active)
{
  TRACE("test_hugh_render_null_pass_container_active");
  
  using namespace hugh::render;

  null::context                    c;
  std::unique_ptr<pass::container> p(new pass::container(c));
  
  BOOST_CHECK(nullptr != p);
  
  BOOST_CHECK( true == p->active());
  BOOST_CHECK( true == p->active(false));
  BOOST_CHECK(false == p->active());
}

BOOST_AUTO_TEST_CASE(test_hugh_render_null_pass_container_execute)
{
  TRACE("test_hugh_render_null_pass_container_execute");
  
  using namespace hugh::render;

  null::context                    c;
  std::unique_ptr<pass::container> p(new pass::container(c));
  
  BOOST_CHECK(nullptr != p);

  p->add(new null::action::clear(c));
  p->add(new null::action::draw (c));
  p->add(new null::action::swap (c));

  for (unsigned i(0); i < loop_limit; ++i) {
    p->invalidate();
    p->resize    (*c.size);
    p->execute   (c);
  }
}
