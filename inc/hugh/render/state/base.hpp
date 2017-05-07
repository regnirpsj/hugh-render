// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/state/base.hpp                                                      */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_RENDER_STATE_BASE_HPP)

#define HUGH_RENDER_STATE_BASE_HPP

// includes, system

#include <memory>        // std::unique_ptr<>
#include <unordered_map> // std::unordered_map<>

// includes, project

#include <hugh/render/context/device.hpp>
#include <hugh/render/context/swap.hpp>
#include <hugh/render/statistics/cpu.hpp>

namespace hugh {

  namespace render {

    namespace state {
      
      // types, exported (class, enum, struct, union, typedef)

      class HUGH_RENDER_EXPORT base : public support::printable,
                                      public support::refcounted<base> {

      public:
      
        virtual ~base();

        void apply();        

        virtual void print_on(std::ostream&) const;

      protected:

        enum class stats {
          apply = 3
        };

        using statistics_cpu_map_type = std::unordered_map<stats, std::unique_ptr<statistics::cpu>>;
        
        context::device&        ctx_;
        statistics_cpu_map_type stats_cpu_;
        
        explicit base(context::device&);

        virtual void do_apply();
        
      };
    
      // variables, exported (extern)

      // functions, inlined (inline)
  
      // functions, exported (extern)

    } // namespace state {
        
  } // namespace render {
  
} // namespace hugh {

#endif // #if !defined(HUGH_RENDER_STATE_BASE_HPP)
