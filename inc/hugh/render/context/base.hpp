// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/context/base.hpp                                                    */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_RENDER_CONTEXT_BASE_HPP)

#define HUGH_RENDER_CONTEXT_BASE_HPP

// includes, system

#include <glm/glm.hpp>

// includes, project

#include <hugh/render/export.h>
#include <hugh/support/printable.hpp>
#include <hugh/support/refcounted.hpp>

namespace hugh {

  namespace render {

    namespace context {
      
      // types, exported (class, enum, struct, union, typedef)

      class HUGH_RENDER_EXPORT base : public support::printable,
                                      public support::refcounted<base> {

      public:
        
        virtual ~base() =0;

        virtual glm::uvec2 const& size() const;
        virtual glm::uvec2        size(glm::uvec2 const&);
     
        virtual void print_on(std::ostream&) const;
 
      protected:

        glm::uvec2 size_;

        explicit base(glm::uvec2 const&);
      
      };
    
      // variables, exported (extern)

      // functions, inlined (inline)
  
      // functions, exported (extern)

    } // namespace context {
        
  } // namespace render {
  
} // namespace hugh {

#endif // #if !defined(HUGH_RENDER_CONTEXT_BASE_HPP)
