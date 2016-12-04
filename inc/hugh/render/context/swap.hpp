// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/context/swap.hpp                                                    */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_RENDER_CONTEXT_SWAP_HPP)

#define HUGH_RENDER_CONTEXT_SWAP_HPP

// includes, system

#include <glm/glm.hpp> // glm::*

// includes, project

#include <hugh/render/context/base.hpp>

namespace hugh {

  namespace render {

    namespace context {
      
      // types, exported (class, enum, struct, union, typedef)

      class HUGH_RENDER_EXPORT swap : virtual public base {

      public:

        field::value::single<glm::uvec2> size; //< size

        virtual ~swap() =0;
        
      protected:
        
        explicit swap(glm::uvec2 const&);
        
      };
    
      // variables, exported (extern)

      // functions, inlined (inline)
  
      // functions, exported (extern)

    } // namespace context {
        
  } // namespace render {
  
} // namespace hugh {

#endif // #if !defined(HUGH_RENDER_CONTEXT_SWAP_HPP)
