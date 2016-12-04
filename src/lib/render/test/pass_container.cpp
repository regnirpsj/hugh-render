// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/test/pass_container.cpp                                             */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// includes, system

#include <memory>  // std::unique_ptr<>

// includes, project

#include <hugh/render/context/device.hpp>
#include <hugh/render/context/swap.hpp>
#include <hugh/render/pass/container.hpp>
#include <hugh/render/pass/null.hpp>
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
      : hugh::render::context::device(),
        hugh::render::context::swap  (a)
    {}
    
  };
  
  // variables, internal
  
  // functions, internal

} // namespace {

#define BOOST_TEST_MAIN
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(test_hugh_render_pass_container_ctor)
{
  using namespace hugh::render;

  ds_context                       c;
  std::unique_ptr<pass::container> pc(new pass::container(c));
  
  BOOST_CHECK(nullptr != pc);
}

BOOST_AUTO_TEST_CASE(test_hugh_render_pass_container_print_on)
{
  using namespace hugh::render;

  ds_context                       c;
  std::unique_ptr<pass::container> pc(new pass::container(c));
  
  BOOST_CHECK(nullptr != pc);

  std::ostringstream ostr;

  ostr << *pc;

  BOOST_CHECK       (!ostr.str().empty());
  BOOST_TEST_MESSAGE( ostr.str());
}

BOOST_AUTO_TEST_CASE(test_hugh_render_pass_container_execute)
{
  using namespace hugh::render;

  ds_context      c;
  std::unique_ptr<pass::container> pc(new pass::container(c));
  
  BOOST_CHECK(nullptr != pc);

  pc->invalidate();
  pc->resize    (*c.size);
  pc->execute   (c);
}

BOOST_AUTO_TEST_CASE(test_hugh_render_pass_container_add_sub)
{
  using namespace hugh::render;

  ds_context                       c;
  std::unique_ptr<pass::container> pc(new pass::container(c));
  
  BOOST_CHECK(nullptr != pc);

  {
    boost::intrusive_ptr<stage::base> s(new stage::null(c));

    pc->add(s.get());

    {
      boost::intrusive_ptr<pass::base> p(new pass::null(c));

      pc->add(p.get());
      pc->add(p.get());
      
      {
        std::ostringstream ostr;

        ostr << *pc;

        BOOST_CHECK       (!ostr.str().empty());
        BOOST_TEST_MESSAGE( ostr.str());
      }

      pc->invalidate();
      pc->resize    (*c.size);
      pc->execute   (c);

      pc->active(false);

      pc->invalidate();
      pc->resize    (*c.size);
      pc->execute   (c);
    }

    pc->sub(s.get());
    pc->sub(s.get());
  }

  {
    std::ostringstream ostr;

    ostr << *pc;

    BOOST_CHECK       (!ostr.str().empty());
    BOOST_TEST_MESSAGE( ostr.str());
  }
}
