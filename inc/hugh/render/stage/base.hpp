// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/stage/base.hpp                                                      */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_RENDER_STAGE_BASE_HPP)

#define HUGH_RENDER_STAGE_BASE_HPP

// includes, system

//#include <>

// includes, project

#include <hugh/render/context/device.hpp>
#include <hugh/render/context/swap.hpp>

namespace hugh {

  namespace render {

    namespace stage {
      
      // types, exported (class, enum, struct, union, typedef)

      class HUGH_RENDER_EXPORT base : public support::printable,
                                      public support::refcounted<base> {

      public:
      
        virtual ~base();

        void execute(context::swap&);

        bool const& active() const;
        bool        active(bool);
        
        virtual void invalidate()                             =0;
        virtual void resize    (glm::uvec2 const& /* size */) =0;

        virtual void print_on(std::ostream&) const;

      protected:

        context::device& ctx_;
        bool             active_;
        
        explicit base(context::device&);

        virtual void do_execute(context::swap&) =0;
        
      };
    
      // variables, exported (extern)

      // functions, inlined (inline)
  
      // functions, exported (extern)

    } // namespace stage {
        
  } // namespace render {
  
} // namespace hugh {

#endif // #if !defined(HUGH_RENDER_STAGE_BASE_HPP)
