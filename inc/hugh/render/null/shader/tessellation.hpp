// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/null/shader/tessellation.hpp                                        */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_RENDER_NULL_SHADER_TESSELLATION_HPP)

#define HUGH_RENDER_NULL_SHADER_TESSELLATION_HPP

// includes, system

//#include <>

// includes, project

#include <hugh/render/null/context.hpp>
#include <hugh/render/shader/base.hpp>

namespace hugh {
  
  namespace render {

    namespace null {
      
      namespace shader {

        namespace tessellation {
          
          // types, exported (class, enum, struct, union, typedef)

          class HUGH_RENDER_EXPORT control final : public render::shader::base {

          public:

            explicit control(context&);
            virtual ~control();

          protected:

            virtual void do_activate();
          
          };
        
          class HUGH_RENDER_EXPORT evaluation final : public render::shader::base {

          public:

            explicit evaluation(context&);
            virtual ~evaluation();

          protected:

            virtual void do_activate();
          
          };
          
          // variables, exported (extern)

          // functions, inlined (inline)
  
          // functions, exported (extern)

        } // namespace tessellation {

        using hull   = tessellation::control;
        using domain = tessellation::evaluation;
        
      } // namespace shader {

    } // namespace null {
    
  } // namespace render {
  
} // namespace hugh {

#endif // #if !defined(HUGH_RENDER_NULL_SHADER_TESSELLATION_HPP)
