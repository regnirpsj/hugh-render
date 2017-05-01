// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/null/stage/swap.hpp                                                 */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_RENDER_NULL_STAGE_SWAP_HPP)

#define HUGH_RENDER_NULL_STAGE_SWAP_HPP

// includes, system

//#include <>

// includes, project

#include <hugh/render/null/context.hpp>
#include <hugh/render/stage/base.hpp>

namespace hugh {

  namespace render {

    namespace null {
      
      namespace stage {
      
        // types, exported (class, enum, struct, union, typedef)

        class HUGH_RENDER_EXPORT swap final : public render::stage::base {

        public:

          explicit swap(context&);
          virtual ~swap();
        
        protected:

          virtual void do_execute(context::swap&);
        
        };
      
        // variables, exported (extern)

        // functions, inlined (inline)
  
        // functions, exported (extern)

      } // namespace stage {

    } // namespace null {
    
  } // namespace render {
  
} // namespace hugh {

#endif // #if !defined(HUGH_RENDER_NULL_STAGE_SWAP_HPP)
