// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/shader/base.hpp                                                     */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_RENDER_SHADER_BASE_HPP)

#define HUGH_RENDER_SHADER_BASE_HPP

// includes, system

//#include <>

// includes, project

#include <hugh/render/context/device.hpp>
#include <hugh/render/interface/activatable.hpp>

namespace hugh {

  namespace render {

    namespace shader {
      
      // types, exported (class, enum, struct, union, typedef)

      class HUGH_RENDER_EXPORT base : public interface::activatable,
                                      public support::printable,
                                      public support::refcounted<base> {

      public:
      
        virtual ~base();

        virtual void print_on(std::ostream&) const;

      protected:
        
        context::device& ctx_;
        
        explicit base(context::device&);
        
      };
    
      // variables, exported (extern)

      // functions, inlined (inline)
  
      // functions, exported (extern)

    } // namespace shader {
        
  } // namespace render {
  
} // namespace hugh {

#endif // #if !defined(HUGH_RENDER_SHADER_BASE_HPP)
