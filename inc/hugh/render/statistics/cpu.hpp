// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016-2017 University of Hull                                                     */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/statistics/cpu.hpp                                                  */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_RENDER_STATISTICS_CPU_HPP)

#define HUGH_RENDER_STATISTICS_CPU_HPP

// includes, system

//#include <>

// includes, project

#include <hugh/render/statistics/base.hpp>
#include <hugh/support/chrono.hpp>

namespace hugh {

  namespace render {

    namespace statistics {
      
      // types, exported (class, enum, struct, union, typedef)

      class HUGH_RENDER_EXPORT cpu : public base {

      public:

        class data : virtual public base::data {

        public:

          float  rate_in_hz;
          double time_in_ns;
        
          virtual ~data();

          virtual void print_on(std::ostream&) const;

        };
        
        explicit cpu();
        virtual ~cpu();

        virtual std::unique_ptr<base::data> fetch() const;

      protected:

        support::timer           rate_timer_;
        support::timer::duration rate_;
        support::timer           stamp_timer_;
        support::timer::duration stamp_;
        
        virtual void start ();
        virtual void stop  ();
        virtual bool done  ();
        virtual void update(bool /* force update */ = false);
      
      };
      
      // variables, exported (extern)

      // functions, inlined (inline)
  
      // functions, exported (extern)

    } // namespace statistics {

  } //  namespace render {
  
} // namespace hugh {

#endif // #if !defined(HUGH_RENDER_STATISTICS_CPU_HPP)
