// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/target/base.hpp                                                     */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_RENDER_TARGET_BASE_HPP)

#define HUGH_RENDER_TARGET_BASE_HPP

// includes, system

//#include <>

// includes, project

#include <hugh/render/context/device.hpp>
#include <hugh/render/interface/invalidatable.hpp>
#include <hugh/render/interface/resizable.hpp>

namespace hugh {

  namespace render {

    namespace target {
      
      // types, exported (class, enum, struct, union, typedef)

      class HUGH_RENDER_EXPORT base : public interface::invalidatable,
                                      public interface::resizable,
                                      public support::printable,
                                      public support::refcounted<base> {

      public:
      
        virtual ~base();

        virtual void print_on(std::ostream&) const;

      protected:

        context::device& ctx_;
        
        explicit base(context::device&  /* ctx  */,
                      glm::uvec2 const& /* size */ = glm::uvec2(1,1));
        
      };
    
      // variables, exported (extern)

      // functions, inlined (inline)
  
      // functions, exported (extern)

    } // namespace target {
        
  } // namespace render {
  
} // namespace hugh {

#endif // #if !defined(HUGH_RENDER_TARGET_BASE_HPP)
