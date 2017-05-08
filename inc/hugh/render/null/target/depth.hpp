// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/null/target/depth.hpp                                               */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_RENDER_NULL_TARGET_DEPTH_HPP)

#define HUGH_RENDER_NULL_TARGET_DEPTH_HPP

// includes, system

//#include <>

// includes, project

#include <hugh/render/null/context.hpp>
#include <hugh/render/target/base.hpp>

namespace hugh {

  namespace render {

    namespace null {
      
      namespace target {
      
        // types, exported (class, enum, struct, union, typedef)

        class HUGH_RENDER_EXPORT depth final : public render::target::base {
          
        public:

          explicit depth(context&          /* ctx  */,
                         glm::uvec2 const& /* size */ = glm::uvec2(1,1));
          virtual ~depth();
          
        protected:
          
          virtual void do_invalidate();
          
        };
        
        // variables, exported (extern)

        // functions, inlined (inline)
  
        // functions, exported (extern)

      } // namespace target {

    } // namespace null {

  } // namespace render {
  
} // namespace hugh {

#endif // #if !defined(HUGH_RENDER_NULL_TARGET_DEPTH_HPP)
