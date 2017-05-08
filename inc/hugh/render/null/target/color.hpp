// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/null/target/color.hpp                                               */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_RENDER_NULL_TARGET_COLOR_HPP)

#define HUGH_RENDER_NULL_TARGET_COLOR_HPP

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

        class HUGH_RENDER_EXPORT color final : public render::target::base {
          
        public:

          explicit color(context&          /* ctx  */,
                         glm::uvec2 const& /* size */ = glm::uvec2(1,1));
          virtual ~color();
          
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

#endif // #if !defined(HUGH_RENDER_NULL_TARGET_COLOR_HPP)
