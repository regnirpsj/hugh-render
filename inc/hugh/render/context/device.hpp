// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/context/device.hpp                                                  */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_RENDER_CONTEXT_DEVICE_HPP)

#define HUGH_RENDER_CONTEXT_DEVICE_HPP

// includes, system

//#include <>

// includes, project

#include <hugh/render/context/base.hpp>

namespace hugh {

  namespace render {

    namespace context {
      
      // types, exported (class, enum, struct, union, typedef)

      class HUGH_RENDER_EXPORT device : virtual public base {

      public:
      
        virtual ~device() =0;
      
      protected:

        explicit device(glm::uvec2 const&);
      
      };
    
      // variables, exported (extern)

      // functions, inlined (inline)
  
      // functions, exported (extern)

    } // namespace context {
        
  } // namespace render {
  
} // namespace hugh {

#endif // #if !defined(HUGH_RENDER_CONTEXT_DEVICE_HPP)
