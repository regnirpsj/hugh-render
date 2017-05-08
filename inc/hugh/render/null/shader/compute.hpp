// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/null/shader/compute.hpp                                             */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_RENDER_NULL_SHADER_COMPUTE_HPP)

#define HUGH_RENDER_NULL_SHADER_COMPUTE_HPP

// includes, system

#include <glm/glm.hpp> // glm::uvec3

// includes, project

#include <hugh/render/null/context.hpp>
#include <hugh/render/shader/base.hpp>

namespace hugh {
  
  namespace render {

    namespace null {
      
      namespace shader {

        // types, exported (class, enum, struct, union, typedef)

        class HUGH_RENDER_EXPORT compute final : public render::shader::base {

        public:

          explicit compute(context&);
          virtual ~compute();

          void activate() =delete;

          void dispatch(glm::uvec3 const& /* size */ = glm::uvec3(1,0,0));
          
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

#endif // #if !defined(HUGH_RENDER_NULL_SHADER_COMPUTE_HPP)
