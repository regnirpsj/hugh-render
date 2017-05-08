// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/null/state/sampler.hpp                                              */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_RENDER_NULL_STATE_SAMPLER_HPP)

#define HUGH_RENDER_NULL_STATE_SAMPLER_HPP

// includes, system

//#include <>

// includes, project

#include <hugh/render/null/context.hpp>
#include <hugh/render/state/base.hpp>

namespace hugh {

  namespace render {

    namespace null {
      
      namespace state {
      
        // types, exported (class, enum, struct, union, typedef)

        class HUGH_RENDER_EXPORT sampler final : public render::state::base {
          
        public:

          explicit sampler(context&);
          virtual ~sampler();
          
        protected:
          
          virtual void do_apply();
          
        };
        
        // variables, exported (extern)

        // functions, inlined (inline)
  
        // functions, exported (extern)

      } // namespace state {

    } // namespace null {

  } // namespace render {
  
} // namespace hugh {

#endif // #if !defined(HUGH_RENDER_NULL_STATE_SAMPLER_HPP)
