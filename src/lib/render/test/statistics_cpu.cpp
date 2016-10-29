// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/test/statistics_cpu.cpp                                             */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

// includes, system

//#include <>

// includes, project

#include <hugh/render/statistics/cpu.hpp>

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

BOOST_AUTO_TEST_CASE(test_hugh_render_statistics_cpu_ctor)
{
  using namespace hugh::render;

  statistics::cpu sc;
  
  BOOST_CHECK(true);
}

BOOST_AUTO_TEST_CASE(test_hugh_render_statistics_cpu_guard)
{
  using namespace hugh::render;
  using namespace hugh;
  using std::chrono::duration_cast;
  using std::chrono::microseconds;
  using std::chrono::nanoseconds;
  
  support::clock::duration const d(microseconds(1));
  statistics::cpu sc;

  {
    statistics::guard const sg(sc);
    
    support::sleep(d);
  } // ~sg

  std::unique_ptr<statistics::base::data> sd (std::move(sc.fetch()));
  statistics::cpu::data const*            scd(dynamic_cast<statistics::cpu::data*>(sd.get()));

  BOOST_CHECK(duration_cast<nanoseconds>(d).count() <= scd->time_in_ns);
  BOOST_TEST_MESSAGE("sc:" << *scd);
}

BOOST_AUTO_TEST_CASE(test_hugh_render_statistics_cpu_fetch)
{
  using namespace hugh::render;
  using namespace hugh;
  using std::chrono::duration_cast;
  using std::chrono::microseconds;
  using std::chrono::nanoseconds;

  unsigned const                 l(10);
  support::clock::duration const d(microseconds(10));
  statistics::cpu                sc0;

  {
    statistics::guard const sg0(sc0);
    statistics::cpu         sc1;
  
    for (unsigned i(0); i < l; ++i) {
      {
        statistics::guard const sg1(sc1);

        support::sleep(d);
      } // ~sg1
    
      std::unique_ptr<statistics::base::data> sd (std::move(sc1.fetch()));
      statistics::cpu::data const*            scd(dynamic_cast<statistics::cpu::data*>(sd.get()));
  
      BOOST_CHECK       (duration_cast<nanoseconds>(d).count() <= scd->time_in_ns);
      BOOST_TEST_MESSAGE("sc0:" << *scd);
    }
  } // ~sg0

  std::unique_ptr<statistics::base::data> sd (std::move(sc0.fetch()));
  statistics::cpu::data const*            scd(dynamic_cast<statistics::cpu::data*>(sd.get()));
  
  BOOST_CHECK       ((l * duration_cast<nanoseconds>(d).count()) <= scd->time_in_ns);
  BOOST_TEST_MESSAGE("sc1:" << *scd);
}
