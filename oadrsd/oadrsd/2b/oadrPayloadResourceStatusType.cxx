// Copyright (c) 2005-2011 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

#include <xsd/cxx/pre.hxx>

// Begin prologue.
//
//
// End prologue.

#include "oadrPayloadResourceStatusType.hxx"

#include "oadrLoadControlStateType.hxx"

namespace oadr2b
{
  namespace oadr
  {
    // oadrPayloadResourceStatusType
    // 

    const oadrPayloadResourceStatusType::oadrOnline_type& oadrPayloadResourceStatusType::
    oadrOnline () const
    {
      return this->oadrOnline_.get ();
    }

    oadrPayloadResourceStatusType::oadrOnline_type& oadrPayloadResourceStatusType::
    oadrOnline ()
    {
      return this->oadrOnline_.get ();
    }

    void oadrPayloadResourceStatusType::
    oadrOnline (const oadrOnline_type& x)
    {
      this->oadrOnline_.set (x);
    }

    const oadrPayloadResourceStatusType::oadrManualOverride_type& oadrPayloadResourceStatusType::
    oadrManualOverride () const
    {
      return this->oadrManualOverride_.get ();
    }

    oadrPayloadResourceStatusType::oadrManualOverride_type& oadrPayloadResourceStatusType::
    oadrManualOverride ()
    {
      return this->oadrManualOverride_.get ();
    }

    void oadrPayloadResourceStatusType::
    oadrManualOverride (const oadrManualOverride_type& x)
    {
      this->oadrManualOverride_.set (x);
    }

    const oadrPayloadResourceStatusType::oadrLoadControlState_optional& oadrPayloadResourceStatusType::
    oadrLoadControlState () const
    {
      return this->oadrLoadControlState_;
    }

    oadrPayloadResourceStatusType::oadrLoadControlState_optional& oadrPayloadResourceStatusType::
    oadrLoadControlState ()
    {
      return this->oadrLoadControlState_;
    }

    void oadrPayloadResourceStatusType::
    oadrLoadControlState (const oadrLoadControlState_type& x)
    {
      this->oadrLoadControlState_.set (x);
    }

    void oadrPayloadResourceStatusType::
    oadrLoadControlState (const oadrLoadControlState_optional& x)
    {
      this->oadrLoadControlState_ = x;
    }

    void oadrPayloadResourceStatusType::
    oadrLoadControlState (::std::auto_ptr< oadrLoadControlState_type > x)
    {
      this->oadrLoadControlState_.set (x);
    }
  }
}

#include <xsd/cxx/xml/dom/parsing-source.hxx>

#include <xsd/cxx/tree/type-factory-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_factory_plate< 0, char >
  type_factory_plate_init;
}

namespace oadr2b
{
  namespace oadr
  {
    // oadrPayloadResourceStatusType
    //

    oadrPayloadResourceStatusType::
    oadrPayloadResourceStatusType (const oadrOnline_type& oadrOnline,
                                   const oadrManualOverride_type& oadrManualOverride)
    : ::oadr2b::ei::PayloadBaseType (),
      oadrOnline_ (oadrOnline, this),
      oadrManualOverride_ (oadrManualOverride, this),
      oadrLoadControlState_ (this)
    {
    }

    oadrPayloadResourceStatusType::
    oadrPayloadResourceStatusType (const oadrPayloadResourceStatusType& x,
                                   ::xml_schema::flags f,
                                   ::xml_schema::container* c)
    : ::oadr2b::ei::PayloadBaseType (x, f, c),
      oadrOnline_ (x.oadrOnline_, f, this),
      oadrManualOverride_ (x.oadrManualOverride_, f, this),
      oadrLoadControlState_ (x.oadrLoadControlState_, f, this)
    {
    }

    oadrPayloadResourceStatusType::
    oadrPayloadResourceStatusType (const ::xercesc::DOMElement& e,
                                   ::xml_schema::flags f,
                                   ::xml_schema::container* c)
    : ::oadr2b::ei::PayloadBaseType (e, f | ::xml_schema::flags::base, c),
      oadrOnline_ (this),
      oadrManualOverride_ (this),
      oadrLoadControlState_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false);
        this->parse (p, f);
      }
    }

    void oadrPayloadResourceStatusType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_elements (); p.next_element ())
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // oadrOnline
        //
        if (n.name () == "oadrOnline" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          if (!oadrOnline_.present ())
          {
            this->oadrOnline_.set (oadrOnline_traits::create (i, f, this));
            continue;
          }
        }

        // oadrManualOverride
        //
        if (n.name () == "oadrManualOverride" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          if (!oadrManualOverride_.present ())
          {
            this->oadrManualOverride_.set (oadrManualOverride_traits::create (i, f, this));
            continue;
          }
        }

        // oadrLoadControlState
        //
        {
          ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "oadrLoadControlState",
              "http://openadr.org/oadr-2.0b/2012/07",
              &::xsd::cxx::tree::factory_impl< oadrLoadControlState_type >,
              true, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            if (!this->oadrLoadControlState_)
            {
              ::std::auto_ptr< oadrLoadControlState_type > r (
                dynamic_cast< oadrLoadControlState_type* > (tmp.get ()));

              if (r.get ())
                tmp.release ();
              else
                throw ::xsd::cxx::tree::not_derived< char > ();

              this->oadrLoadControlState_.set (r);
              continue;
            }
          }
        }

        break;
      }

      if (!oadrOnline_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "oadrOnline",
          "http://openadr.org/oadr-2.0b/2012/07");
      }

      if (!oadrManualOverride_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "oadrManualOverride",
          "http://openadr.org/oadr-2.0b/2012/07");
      }
    }

    oadrPayloadResourceStatusType* oadrPayloadResourceStatusType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class oadrPayloadResourceStatusType (*this, f, c);
    }

    oadrPayloadResourceStatusType& oadrPayloadResourceStatusType::
    operator= (const oadrPayloadResourceStatusType& x)
    {
      if (this != &x)
      {
        static_cast< ::oadr2b::ei::PayloadBaseType& > (*this) = x;
        this->oadrOnline_ = x.oadrOnline_;
        this->oadrManualOverride_ = x.oadrManualOverride_;
        this->oadrLoadControlState_ = x.oadrLoadControlState_;
      }

      return *this;
    }

    oadrPayloadResourceStatusType::
    ~oadrPayloadResourceStatusType ()
    {
    }

    static
    const ::xsd::cxx::tree::type_factory_initializer< 0, char, oadrPayloadResourceStatusType >
    _xsd_oadrPayloadResourceStatusType_type_factory_init (
      "oadrPayloadResourceStatusType",
      "http://openadr.org/oadr-2.0b/2012/07");
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace oadr2b
{
  namespace oadr
  {
  }
}

#include <ostream>
#include <xsd/cxx/tree/error-handler.hxx>
#include <xsd/cxx/xml/dom/serialization-source.hxx>

#include <xsd/cxx/tree/type-serializer-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_serializer_plate< 0, char >
  type_serializer_plate_init;
}

namespace oadr2b
{
  namespace oadr
  {
    void
    operator<< (::xercesc::DOMElement& e, const oadrPayloadResourceStatusType& i)
    {
      e << static_cast< const ::oadr2b::ei::PayloadBaseType& > (i);

      // oadrOnline
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "oadrOnline",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << i.oadrOnline ();
      }

      // oadrManualOverride
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "oadrManualOverride",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << i.oadrManualOverride ();
      }

      // oadrLoadControlState
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        if (i.oadrLoadControlState ())
        {
          const oadrPayloadResourceStatusType::oadrLoadControlState_type& x (*i.oadrLoadControlState ());
          if (typeid (oadrPayloadResourceStatusType::oadrLoadControlState_type) == typeid (x))
          {
            ::xercesc::DOMElement& s (
              ::xsd::cxx::xml::dom::create_element (
                "oadrLoadControlState",
                "http://openadr.org/oadr-2.0b/2012/07",
                e));

            s << x;
          }
          else
            tsm.serialize (
              "oadrLoadControlState",
              "http://openadr.org/oadr-2.0b/2012/07",
              true, true, e, x);
        }
      }
    }

    static
    const ::xsd::cxx::tree::type_serializer_initializer< 0, char, oadrPayloadResourceStatusType >
    _xsd_oadrPayloadResourceStatusType_type_serializer_init (
      "oadrPayloadResourceStatusType",
      "http://openadr.org/oadr-2.0b/2012/07");
  }
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsd/cxx/post.hxx>
