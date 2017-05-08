// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/null/shader/vertex.hpp                                              */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_RENDER_NULL_SHADER_VERTEX_HPP)

#define HUGH_RENDER_NULL_SHADER_VERTEX_HPP

// includes, system

//#include <>

// includes, project

#include <hugh/render/null/context.hpp>
#include <hugh/render/shader/base.hpp>

namespace hugh {
  
  namespace render {

    namespace null {
      
      namespace shader {

        // types, exported (class, enum, struct, union, typedef)

        class HUGH_RENDER_EXPORT vertex final : public render::shader::base {

        public:

          explicit vertex(context&);
          virtual ~vertex();

        protected:

          virtual void do_activate();
          
        };
        
        // variables, exported (extern)

        // functions, inlined (inline)
  
        // functions, exported (extern)

      } // namespace shader {

    } // namespace null {
    
  } // namespace render {
  
} // namespace hugh {

#endif // #if !defined(HUGH_RENDER_NULL_SHADER_VERTEX_HPP)
