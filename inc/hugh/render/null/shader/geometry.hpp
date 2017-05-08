// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/null/shader/geometry.hpp                                            */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_RENDER_NULL_SHADER_GEOMETRY_HPP)

#define HUGH_RENDER_NULL_SHADER_GEOMETRY_HPP

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

        class HUGH_RENDER_EXPORT geometry final : public render::shader::base {

        public:

          explicit geometry(context&);
          virtual ~geometry();

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

#endif // #if !defined(HUGH_RENDER_NULL_SHADER_GEOMETRY_HPP)
