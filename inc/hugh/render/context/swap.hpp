// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/context/swap.hpp                                                    */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_RENDER_CONTEXT_SWAP_HPP)

#define HUGH_RENDER_CONTEXT_SWAP_HPP

// includes, system

#include <glm/glm.hpp> // glm::uvec2

// includes, project

#include <hugh/field/adapter/single.hpp>
#include <hugh/render/context/base.hpp>
#include <hugh/render/interface/resizable.hpp>

namespace hugh {

  namespace render {

    namespace context {
      
      // types, exported (class, enum, struct, union, typedef)

      class HUGH_RENDER_EXPORT swap : virtual public base,
                                      public interface::resizable {

      public:

        field::adapter::single<glm::uvec2 const> size; //< size

        virtual ~swap();
        
      protected:
        
        explicit swap(glm::uvec2 const&);

        virtual void do_resize(glm::uvec2 const& /* size */);

      private:

        glm::uvec2 const& cb_get_size() const;
        glm::uvec2        cb_set_size(glm::uvec2 const&);
        
      };
    
      // variables, exported (extern)

      // functions, inlined (inline)
  
      // functions, exported (extern)

    } // namespace context {
        
  } // namespace render {
  
} // namespace hugh {

#endif // #if !defined(HUGH_RENDER_CONTEXT_SWAP_HPP)
