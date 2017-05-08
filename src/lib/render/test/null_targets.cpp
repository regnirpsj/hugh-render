// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/test/null_targets.cpp                                               */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// includes, system

#include <memory>  // std::unique_ptr<>
#include <sstream> // std::ostringstream

// includes, project

#include <hugh/render/null/target/color.hpp>
#include <hugh/render/null/target/depth.hpp>

#define HUGH_USE_TRACE
#undef HUGH_USE_TRACE
#  include <hugh/support/trace.hpp>
#if defined(HUGH_USE_TRACE) || defined(HUGH_ALL_TRACE)
#  include <typeinfo>
#  include <hugh/support/type_info.hpp>
#endif

// internal unnamed namespace

namespace {
  
  // types, internal (class, enum, struct, union, typedef)

  // variables, internal
  
  // functions, internal

} // namespace {

#define BOOST_TEST_MAIN
#include <boost/test/unit_test.hpp>
#include <boost/test/test_case_template.hpp>
#include <boost/mpl/list.hpp>

using target_types = boost::mpl::list<hugh::render::null::target::color,
                                      hugh::render::null::target::depth>;

BOOST_AUTO_TEST_CASE_TEMPLATE(test_hugh_render_null_target_ctor, T, target_types)
{
  TRACE("test_hugh_render_null_target_ctor<" + hugh::support::demangle(typeid(T)) + ">");
  
  using namespace hugh::render::null;

  context                  c;
  std::unique_ptr<T> const a(new T(c));
  
  BOOST_CHECK(nullptr != a);
}
