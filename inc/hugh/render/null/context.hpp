// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/rener/null/context.hpp                                                     */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_RENDER_NULL_CONTEXT_HPP)

#define HUGH_RENDER_NULL_CONTEXT_HPP

// includes, system

//#include <>

// includes, project

#include <hugh/render/context/device.hpp>
#include <hugh/render/context/swap.hpp>

namespace hugh {

  namespace render {

    namespace null {
      
      // types, exported (class, enum, struct, union, typedef)

      class HUGH_RENDER_EXPORT context final : public render::context::device,
                                               public render::context::swap {

      public:

        explicit context(glm::uvec2 const& = glm::uvec2(1, 1));
        virtual ~context();
        
      };
      
      // variables, exported (extern)

      // functions, inlined (inline)
  
      // functions, exported (extern)

    } //namespace null {

  } // namespace null {
  
} // namespace hugh {

#endif // #if !defined(HUGH_RENDER_NULL_CONTEXT_HPP)
