// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/interface/executable.hpp                                            */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_RENDER_INTERFACE_EXECUTABLE_HPP)

#define HUGH_RENDER_INTERFACE_EXECUTABLE_HPP

// includes, system

//#include <>

// includes, project

#include <hugh/render/export.h>

namespace hugh {
  
  namespace render {
    
    namespace interface {
      
      // types, exported (class, enum, struct, union, typedef)

      class /* HUGH_RENDER_EXPORT */ executable {

      public:
        
        virtual ~executable();

        void execute();
      
      protected:

        explicit executable();

        virtual void do_execute() =0;
      
      };
      
      // variables, exported (extern)

      // functions, inlined (inline)
  
      // functions, exported (extern)
  
    } // namespace interface {

  } // namespace render {

} // namespace hugh {

#endif // #if !defined(HUGH_RENDER_INTERFACE_EXECUTABLE_HPP)
