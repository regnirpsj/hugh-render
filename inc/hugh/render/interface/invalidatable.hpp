// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/interface/invalidatable.hpp                                         */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_RENDER_INTERFACE_INVALIDATABLE_HPP)

#define HUGH_RENDER_INTERFACE_INVALIDATABLE_HPP

// includes, system

//#include <>

// includes, project

#include <hugh/render/export.h>

namespace hugh {
  
  namespace render {
    
    namespace interface {
      
      // types, exported (class, enum, struct, union, typedef)

      class /* HUGH_RENDER_EXPORT */ invalidatable {

      public:
        
        virtual ~invalidatable();

        void invalidate();
      
      protected:

        explicit invalidatable();

        virtual void do_invalidate() =0;
      
      };
      
      // variables, exported (extern)

      // functions, inlined (inline)
  
      // functions, exported (extern)
  
    } // namespace interface {

  } // namespace render {

} // namespace hugh {

#endif // #if !defined(HUGH_RENDER_INTERFACE_INVALIDATABLE_HPP)
