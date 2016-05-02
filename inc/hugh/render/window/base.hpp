// -*- Mode:C++ -*-

/**************************************************************************************************/
/*                                                                                                */
/* Copyright (C) 2016 University of Hull                                                          */
/*                                                                                                */
/**************************************************************************************************/
/*                                                                                                */
/*  module     :  hugh/render/window/base.hpp                                                     */
/*  project    :                                                                                  */
/*  description:                                                                                  */
/*                                                                                                */
/**************************************************************************************************/

#if !defined(HUGH_RENDER_WINDOW_BASE_HPP)

#define HUGH_RENDER_WINDOW_BASE_HPP

// includes, system

#include <boost/intrusive_ptr.hpp> // boost::intrusive_ptr<>
#include <vector>                  // std::vector<>

// includes, project

#include <hugh/render/context/device.hpp>
#include <hugh/render/context/swap.hpp>

namespace hugh {

  namespace render {

    namespace pass {
      
      class base;

    } // namespace pass {
    
    namespace window {
      
      // types, exported (class, enum, struct, union, typedef)

      class HUGH_RENDER_EXPORT base : public support::printable,
                                      public support::refcounted<base> {

      public:
        
        virtual ~base();

        virtual void render(unsigned /* #frames */) =0;

        context::device& device_context() const;
        context::swap&   swap_context() const;
        
        bool add(pass::base*);
        bool sub(pass::base*);
      
        virtual void print_on(std::ostream&) const;

      protected:

        using render_pass_list_type = std::vector<boost::intrusive_ptr<pass::base>>;

        boost::intrusive_ptr<context::device> dev_ctx_;
        boost::intrusive_ptr<context::swap>   swp_ctx_;
        render_pass_list_type                 render_passes_;
      
        explicit base(context::device* = nullptr);

        virtual bool redraw();
        virtual bool resize(glm::uvec2 const& /* size */, bool /* minimized */);
        
      };
    
      // variables, exported (extern)

      // functions, inlined (inline)
  
      // functions, exported (extern)

    } // namespace window {
    
  } // namespace render {
  
} // namespace hugh {

#endif // #if !defined(HUGH_RENDER_WINDOW_BASE_HPP)
