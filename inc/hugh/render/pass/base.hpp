// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/pass/base.hpp                                                       */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_RENDER_PASS_BASE_HPP)

#define HUGH_RENDER_PASS_BASE_HPP

// includes, system

//#include <>

// includes, project

#include <hugh/render/stage/base.hpp>

namespace hugh {

  namespace render {

    namespace pass {
      
      // types, exported (class, enum, struct, union, typedef)

      class HUGH_RENDER_EXPORT base : public stage::base {

      public:
      
        virtual ~base() =0;

      protected:
        
        explicit base(context::device&);

      };
    
      // variables, exported (extern)

      // functions, inlined (inline)
  
      // functions, exported (extern)

    } // namespace pass {
        
  } // namespace render {
  
} // namespace hugh {

#endif // #if !defined(HUGH_RENDER_PASS_BASE_HPP)

