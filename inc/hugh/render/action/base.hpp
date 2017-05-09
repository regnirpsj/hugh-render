// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/action/base.hpp                                                     */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_RENDER_ACTION_BASE_HPP)

#define HUGH_RENDER_ACTION_BASE_HPP

// includes, system

//#include <>

// includes, project

#include <hugh/render/context/device.hpp>
#include <hugh/render/interface/executable.hpp>
#include <hugh/render/interface/invalidatable.hpp>
#include <hugh/render/interface/resizable.hpp>

namespace hugh {

  namespace render {

    namespace action {
      
      // types, exported (class, enum, struct, union, typedef)

      class HUGH_RENDER_EXPORT base : public interface::executable,
                                      public interface::invalidatable,
                                      public interface::resizable,
                                      public support::printable,
                                      public support::refcounted<base> {

      public:
      
        virtual ~base();

        virtual void print_on(std::ostream&) const;

      protected:
        
        context::device& ctx_;
        
        explicit base(context::device&);

        virtual void do_invalidate();
        virtual void do_resize    (glm::uvec2 const& /* size */);
        
      };
    
      // variables, exported (extern)

      // functions, inlined (inline)
  
      // functions, exported (extern)

    } // namespace action {
        
  } // namespace render {
  
} // namespace hugh {

#endif // #if !defined(HUGH_RENDER_ACTION_BASE_HPP)
