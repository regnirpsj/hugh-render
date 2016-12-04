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

//#include <>

// includes, project

#include <hugh/field/container.hpp>
#include <hugh/field/value/single.hpp>
#include <hugh/render/export.h>
#include <hugh/support/refcounted.hpp>

namespace hugh {

  namespace render {

    namespace context {
      
      // types, exported (class, enum, struct, union, typedef)

      class HUGH_RENDER_EXPORT base : public field::container,
                                      public support::refcounted<base> {

      public:
        
        virtual ~base() =0;
 
      protected:

        explicit base();
      
      };
    
      // variables, exported (extern)

      // functions, inlined (inline)
  
      // functions, exported (extern)

    } // namespace context {
        
  } // namespace render {
  
} // namespace hugh {

#endif // #if !defined(HUGH_RENDER_CONTEXT_BASE_HPP)
