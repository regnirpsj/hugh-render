// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/null/action/draw.hpp                                                */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_RENDER_NULL_ACTION_DRAW_HPP)

#define HUGH_RENDER_NULL_ACTION_DRAW_HPP

// includes, system

//#include <>

// includes, project

#include <hugh/render/null/context.hpp>
#include <hugh/render/action/base.hpp>

namespace hugh {

  namespace render {

    namespace null {
      
      namespace action {
      
        // types, exported (class, enum, struct, union, typedef)

        class HUGH_RENDER_EXPORT draw final : public render::action::base {

        public:

          explicit draw(context&);
          virtual ~draw();
        
        protected:

          virtual void do_execute(context::swap&);
        
        };
      
        // variables, exported (extern)

        // functions, inlined (inline)
  
        // functions, exported (extern)

      } // namespace action {

    } // namespace null {
    
  } // namespace render {
  
} // namespace hugh {

#endif // #if !defined(HUGH_RENDER_NULL_ACTION_DRAW_HPP)
