// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/stage/null.hpp                                                      */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_RENDER_STAGE_NULL_HPP)

#define HUGH_RENDER_STAGE_NULL_HPP

// includes, system

//#include <>

// includes, project

#include <hugh/render/stage/base.hpp>

namespace hugh {

  namespace render {

    namespace stage {
      
      // types, exported (class, enum, struct, union, typedef)

      class HUGH_RENDER_EXPORT null : public base {

      public:

        explicit null(context::device&);
        virtual ~null();

        virtual void invalidate()                             =0;
        virtual void resize    (glm::uvec2 const& /* size */) =0;

      protected:        

        virtual void do_execute(context::swap&);
        
      };
    
      // variables, exported (extern)

      // functions, inlined (inline)
  
      // functions, exported (extern)

    } // namespace stage {
        
  } // namespace render {
  
} // namespace hugh {

#endif // #if !defined(HUGH_RENDER_STAGE_NULL_HPP)
