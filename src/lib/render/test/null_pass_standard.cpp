// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016-2017 University of Hull                                                     */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/test/null_pass_standard.cpp                                         */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// includes, system

#include <memory>  // std::unique_ptr<>
#include <sstream> // std::ostringstream

// includes, project

#include <hugh/render/null/pass/standard.hpp>

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

BOOST_AUTO_TEST_CASE(test_hugh_render_null_pass_standard_ctor)
{
  TRACE("test_hugh_render_null_pass_standard_ctor");
  
  using namespace hugh::render::null;

  context                         c;
  std::unique_ptr<pass::standard> pn(new pass::standard(c));
  
  BOOST_CHECK(nullptr != pn);
}

BOOST_AUTO_TEST_CASE(test_hugh_render_null_pass_standard_print_on)
{
  TRACE("test_hugh_render_null_pass_standard_print_on");
  
  using namespace hugh::render::null;

  context                         c;
  std::unique_ptr<pass::standard> pn(new pass::standard(c));
  
  BOOST_CHECK(nullptr != pn);

  for (unsigned i(0); i < 5; ++i) {
    pn->invalidate();
    pn->resize    (*c.size);
    pn->execute   (c);
  }
  
  std::ostringstream ostr;

  ostr << *pn;

  BOOST_CHECK       (!ostr.str().empty());
  BOOST_TEST_MESSAGE( ostr.str());
}

BOOST_AUTO_TEST_CASE(test_hugh_render_null_pass_standard_active)
{
  TRACE("test_hugh_render_null_pass_standard_active");
  
  using namespace hugh::render::null;

  context                         c;
  std::unique_ptr<pass::standard> pn(new pass::standard(c));
  
  BOOST_CHECK(nullptr != pn);

  BOOST_CHECK( true == pn->active());
  BOOST_CHECK( true == pn->active(false));
  BOOST_CHECK(false == pn->active());
}

BOOST_AUTO_TEST_CASE(test_hugh_render_null_pass_standard_execute)
{
  TRACE("test_hugh_render_null_pass_standard_execute");
  
  using namespace hugh::render::null;

  context                         c;
  std::unique_ptr<pass::standard> pn(new pass::standard(c));
  
  BOOST_CHECK(nullptr != pn);

  pn->invalidate();
  pn->resize    (*c.size);
  pn->execute   (c);
}
