// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/statistics/base.hpp                                                 */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_RENDER_STATISTICS_BASE_HPP)

#define HUGH_RENDER_STATISTICS_BASE_HPP

// includes, system

#include <boost/noncopyable.hpp> // boost::noncopyable
#include <memory>                // std::unique_ptr<>

// includes, project

#include <hugh/render/export.h>
#include <hugh/support/printable.hpp>

namespace hugh {

  namespace render {

    namespace statistics {
      
      // types, exported (class, enum, struct, union, typedef)

      class guard;
      
      class HUGH_RENDER_EXPORT base : private boost::noncopyable,
                                      public support::printable {

      public:

        class HUGH_RENDER_EXPORT data : public support::printable {

        public:

          virtual ~data();
        
          virtual data& operator+=(data const&);

          virtual void print_on(std::ostream&) const;
        
        };
        
        virtual ~base() =0;

        virtual std::unique_ptr<data> fetch() const;
        
        virtual void print_on(std::ostream&) const;
 
      protected:

        friend class statistics::guard;

        bool updated_;
        
        explicit base();

        virtual void start ();
        virtual void stop  ();
        virtual bool done  ();
        virtual void update(bool /* force update */ = false);

      };

      class HUGH_RENDER_EXPORT guard : private boost::noncopyable {

      public:

        explicit guard(base& /* stats object */,
                       bool  /* enabled      */ = true);
        ~guard();

      private:

        base& stats_;
        bool  enabled_;

      };
      
      // variables, exported (extern)

      // functions, inlined (inline)
  
      // functions, exported (extern)

    } // namespace statistics {

  } //  namespace render {
  
} // namespace hugh {

#endif // #if !defined(HUGH_RENDER_STATISTICS_BASE_HPP)
