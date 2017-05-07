// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016-2017 University of Hull                                                     */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/pass/container.hpp                                                  */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_RENDER_PASS_CONTAINER_HPP)

#define HUGH_RENDER_PASS_CONTAINER_HPP

// includes, system

#include <boost/intrusive_ptr.hpp> // boost::intrusive_ptr<>
#include <vector>                  // std::vector<>

// includes, project

#include <hugh/render/pass/base.hpp>

namespace hugh {

  namespace render {

    namespace pass {
      
      // types, exported (class, enum, struct, union, typedef)

      class HUGH_RENDER_EXPORT container : public base {

      public:

        explicit container(context::device&);
        virtual ~container();

        bool add(action::base*);
        bool sub(action::base*);
        
        virtual void print_on(std::ostream&) const;

      protected:

        using render_action_list_type = std::vector<boost::intrusive_ptr<action::base>>;

        render_action_list_type actions_;
        
        virtual void do_execute   (context::swap&);
        virtual void do_invalidate();
        virtual void do_resize    (glm::uvec2 const& /* size */);

      };
    
      // variables, exported (extern)

      // functions, inlined (inline)
  
      // functions, exported (extern)

    } // namespace pass {
        
  } // namespace render {
  
} // namespace hugh {

#endif // #if !defined(HUGH_RENDER_PASS_CONTAINER_HPP)
