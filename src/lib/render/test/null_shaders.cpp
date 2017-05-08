// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/test/null_shaders.cpp                                               */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// includes, system

#include <memory>  // std::unique_ptr<>
#include <sstream> // std::ostringstream

// includes, project

#include <hugh/render/null/shader/compute.hpp>
#include <hugh/render/null/shader/fragment.hpp>
#include <hugh/render/null/shader/geometry.hpp>
#include <hugh/render/null/shader/tessellation.hpp>
#include <hugh/render/null/shader/vertex.hpp>

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

using shader_types_ctor = boost::mpl::list<hugh::render::null::shader::compute,
                                           hugh::render::null::shader::fragment,
                                           hugh::render::null::shader::geometry,
                                           hugh::render::null::shader::tessellation::control,
                                           hugh::render::null::shader::tessellation::evaluation,
                                           hugh::render::null::shader::vertex>;

BOOST_AUTO_TEST_CASE_TEMPLATE(test_hugh_render_null_shader_ctor, T, shader_types_ctor)
{
  TRACE("test_hugh_render_null_shader_ctor<" + hugh::support::demangle(typeid(T)) + ">");
  
  using namespace hugh::render::null;

  context                  c;
  std::unique_ptr<T> const a(new T(c));
  
  BOOST_CHECK(nullptr != a);
}

using shader_types_activate = boost::mpl::list<hugh::render::null::shader::fragment,
                                               hugh::render::null::shader::geometry,
                                               hugh::render::null::shader::tessellation::control,
                                               hugh::render::null::shader::tessellation::evaluation,
                                               hugh::render::null::shader::vertex>;

BOOST_AUTO_TEST_CASE_TEMPLATE(test_hugh_render_null_shader_activate, T, shader_types_activate)
{
  TRACE("test_hugh_render_null_shader_activate<" + hugh::support::demangle(typeid(T)) + ">");
  
  using namespace hugh::render::null;

  context                  c;
  std::unique_ptr<T> const a(new T(c));
  
  BOOST_CHECK(nullptr != a);

  a->activate();
}

using shader_types_dispatch = boost::mpl::list<hugh::render::null::shader::compute>;

BOOST_AUTO_TEST_CASE_TEMPLATE(test_hugh_render_null_shader_dispatch, T, shader_types_dispatch)
{
  TRACE("test_hugh_render_null_shader_dispatch<" + hugh::support::demangle(typeid(T)) + ">");
  
  using namespace hugh::render::null;

  context                  c;
  std::unique_ptr<T> const a(new T(c));
  
  BOOST_CHECK(nullptr != a);

  a->dispatch(glm::uvec3(512, 32, 0));
}
