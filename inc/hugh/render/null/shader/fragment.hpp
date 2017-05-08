// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/null/shader/fragment.hpp                                            */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_RENDER_NULL_SHADER_FRAGMENT_HPP)

#define HUGH_RENDER_NULL_SHADER_FRAGMENT_HPP

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

        class HUGH_RENDER_EXPORT fragment final : public render::shader::base {

        public:

          explicit fragment(context&);
          virtual ~fragment();

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

#endif // #if !defined(HUGH_RENDER_NULL_SHADER_FRAGMENT_HPP)
