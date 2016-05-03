// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/test/stage_null.cpp                                                 */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// includes, system

#include <sstream> // std::ostringstream

// includes, project

#include <hugh/render/context/device.hpp>
#include <hugh/render/context/swap.hpp>
#include <hugh/render/stage/null.hpp>

#define HUGH_USE_TRACE
#undef HUGH_USE_TRACE
#include <hugh/support/trace.hpp>

// internal unnamed namespace

namespace {
  
  // types, internal (class, enum, struct, union, typedef)

  class ds_context : public hugh::render::context::device,
                     public hugh::render::context::swap {

  public:

    explicit ds_context(glm::uvec2 const& a = glm::uvec2(1,1))
      : hugh::render::context::base  (a),
        hugh::render::context::device(a),
        hugh::render::context::swap  (a)
    {}
    
  };
  
  // variables, internal
  
  // functions, internal

} // namespace {

#define BOOST_TEST_MAIN
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(test_hugh_render_stage_null_ctor)
{
  using namespace hugh::render;

  ds_context  c;
  stage::null n(c);
  
  BOOST_CHECK(true);
}

BOOST_AUTO_TEST_CASE(test_hugh_render_stage_null_print_on)
{
  using namespace hugh::render;

  ds_context         c;
  stage::null        n(c);
  std::ostringstream ostr;

  ostr << n;

  BOOST_CHECK       (!ostr.str().empty());
  BOOST_TEST_MESSAGE( ostr.str());
}

BOOST_AUTO_TEST_CASE(test_hugh_render_stage_null_active)
{
  using namespace hugh::render;

  ds_context  c;
  stage::null n(c);

  BOOST_CHECK(true == n.active());
  BOOST_CHECK(true == n.active(false));
  BOOST_CHECK(false == n.active());
}

BOOST_AUTO_TEST_CASE(test_hugh_render_stage_null_execute)
{
  using namespace hugh::render;

  ds_context  c;
  stage::null n(c);

  n.invalidate();
  n.resize    (c.size());
  n.execute   (c);
  
  BOOST_CHECK(true);
}
