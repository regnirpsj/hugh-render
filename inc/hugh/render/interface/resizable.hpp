// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/interface/resizable.hpp                                             */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_RENDER_INTERFACE_RESIZABLE_HPP)

#define HUGH_RENDER_INTERFACE_RESIZABLE_HPP

// includes, system

#include <glm/glm.hpp> // glm::uvec2

// includes, project

#include <hugh/render/export.h>

namespace hugh {
  
  namespace render {
    
    namespace interface {
      
      // types, exported (class, enum, struct, union, typedef)

      class /* HUGH_RENDER_EXPORT */ resizable {

      public:
        
        virtual ~resizable();

        void resize(glm::uvec2 const& /* size */);
      
      protected:

        glm::uvec2 size_;
        
        explicit resizable(glm::uvec2 const& /* size */ = glm::uvec2(0,0));

        virtual void do_resize(glm::uvec2 const& /* size */) =0;
      
      };
      
      // variables, exported (extern)

      // functions, inlined (inline)
  
      // functions, exported (extern)
  
    } // namespace interface {

  } // namespace render {

} // namespace hugh {

#endif // #if !defined(HUGH_RENDER_INTERFACE_RESIZABLE_HPP)
