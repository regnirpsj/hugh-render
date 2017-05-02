// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/null/window.hpp                                                     */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_RENDER_NULL_WINDOW_HPP)

#define HUGH_RENDER_NULL_WINDOW_HPP

// includes, system

//#include <>

// includes, project

#include <hugh/render/null/context.hpp>
#include <hugh/render/window/base.hpp>

namespace hugh {

  namespace render {

    namespace null {
      
      // types, exported (class, enum, struct, union, typedef)

      class HUGH_RENDER_EXPORT window final : public render::window::base {

      public:

        explicit window();
        virtual ~window();

        virtual void render(unsigned /* #frames */);

        context& device_context() const;
        context&   swap_context() const;
        
      };
      
      // variables, exported (extern)

      // functions, inlined (inline)
  
      // functions, exported (extern)

    } // namespace null {

  } // namespace render {
  
} // namespace hugh {

#endif // #if !defined(HUGH_RENDER_NULL_WINDOW_HPP)
