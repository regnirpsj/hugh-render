// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2017 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/null/pass/standard.hpp                                              */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_RENDER_NULL_PASS_STANDARD_HPP)

#define HUGH_RENDER_NULL_PASS_STANDARD_HPP

// includes, system

//#include <>

// includes, project

#include <hugh/render/null/context.hpp>
#include <hugh/render/null/stage/clear.hpp>
#include <hugh/render/null/stage/draw.hpp>
#include <hugh/render/null/stage/swap.hpp>
#include <hugh/render/pass/base.hpp>

namespace hugh {

  namespace render {

    namespace null {
      
      namespace pass {
      
        // types, exported (class, enum, struct, union, typedef)

        class HUGH_RENDER_EXPORT standard final : public render::pass::base {

        public:

          explicit standard(context&);
          virtual ~standard();

          virtual void print_on(std::ostream&) const;
          
        protected:
        
          virtual void do_execute   (context::swap&);
          virtual void do_invalidate();
          virtual void do_resize    (glm::uvec2 const& /* size */);

        private:

          stage::clear clear_;
          stage::draw  draw_;
          stage::swap  swap_;
          
        };
    
        // variables, exported (extern)

        // functions, inlined (inline)
  
        // functions, exported (extern)

      } // namespace pass {

    } // namespace null {
    
  } // namespace render {
  
} // namespace hugh {

#endif // #if !defined(HUGH_RENDER_NULL_PASS_STANDARD_HPP)
