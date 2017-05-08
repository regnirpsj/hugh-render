// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/test/null_states.cpp                                                */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// includes, system

#include <memory>  // std::unique_ptr<>
#include <sstream> // std::ostringstream

// includes, project

#include <hugh/render/null/state/blend.hpp>
#include <hugh/render/null/state/depth_stencil.hpp>
#include <hugh/render/null/state/raster.hpp>
#include <hugh/render/null/state/sampler.hpp>

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

using state_types = boost::mpl::list<hugh::render::null::state::blend,
                                     hugh::render::null::state::depth_stencil,
                                     hugh::render::null::state::raster,
                                     hugh::render::null::state::sampler>;

BOOST_AUTO_TEST_CASE_TEMPLATE(test_hugh_render_null_state_ctor, T, state_types)
{
  TRACE("test_hugh_render_null_state_ctor<" + hugh::support::demangle(typeid(T)) + ">");

  using namespace hugh::render::null;

  context                  c;
  std::unique_ptr<T> const a(new T(c));
  
  BOOST_CHECK(nullptr != a);
}
