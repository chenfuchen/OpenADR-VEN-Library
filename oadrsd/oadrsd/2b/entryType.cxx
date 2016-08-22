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

#include "entryType.hxx"

#include "personType.hxx"

#include "categoryType.hxx"

#include "contentType.hxx"

#include "idType.hxx"

#include "linkType.hxx"

#include "dateTimeType1.hxx"

#include "textType.hxx"

namespace Atom
{
  // entryType
  // 

  const entryType::author_sequence& entryType::
  author () const
  {
    return this->author_;
  }

  entryType::author_sequence& entryType::
  author ()
  {
    return this->author_;
  }

  void entryType::
  author (const author_sequence& s)
  {
    this->author_ = s;
  }

  const entryType::category_sequence& entryType::
  category () const
  {
    return this->category_;
  }

  entryType::category_sequence& entryType::
  category ()
  {
    return this->category_;
  }

  void entryType::
  category (const category_sequence& s)
  {
    this->category_ = s;
  }

  const entryType::content_sequence& entryType::
  content () const
  {
    return this->content_;
  }

  entryType::content_sequence& entryType::
  content ()
  {
    return this->content_;
  }

  void entryType::
  content (const content_sequence& s)
  {
    this->content_ = s;
  }

  const entryType::contributor_sequence& entryType::
  contributor () const
  {
    return this->contributor_;
  }

  entryType::contributor_sequence& entryType::
  contributor ()
  {
    return this->contributor_;
  }

  void entryType::
  contributor (const contributor_sequence& s)
  {
    this->contributor_ = s;
  }

  const entryType::id_sequence& entryType::
  id () const
  {
    return this->id_;
  }

  entryType::id_sequence& entryType::
  id ()
  {
    return this->id_;
  }

  void entryType::
  id (const id_sequence& s)
  {
    this->id_ = s;
  }

  const entryType::link_sequence& entryType::
  link () const
  {
    return this->link_;
  }

  entryType::link_sequence& entryType::
  link ()
  {
    return this->link_;
  }

  void entryType::
  link (const link_sequence& s)
  {
    this->link_ = s;
  }

  const entryType::published_sequence& entryType::
  published () const
  {
    return this->published_;
  }

  entryType::published_sequence& entryType::
  published ()
  {
    return this->published_;
  }

  void entryType::
  published (const published_sequence& s)
  {
    this->published_ = s;
  }

  const entryType::rights_sequence& entryType::
  rights () const
  {
    return this->rights_;
  }

  entryType::rights_sequence& entryType::
  rights ()
  {
    return this->rights_;
  }

  void entryType::
  rights (const rights_sequence& s)
  {
    this->rights_ = s;
  }

  const entryType::source_sequence& entryType::
  source () const
  {
    return this->source_;
  }

  entryType::source_sequence& entryType::
  source ()
  {
    return this->source_;
  }

  void entryType::
  source (const source_sequence& s)
  {
    this->source_ = s;
  }

  const entryType::summary_sequence& entryType::
  summary () const
  {
    return this->summary_;
  }

  entryType::summary_sequence& entryType::
  summary ()
  {
    return this->summary_;
  }

  void entryType::
  summary (const summary_sequence& s)
  {
    this->summary_ = s;
  }

  const entryType::title_sequence& entryType::
  title () const
  {
    return this->title_;
  }

  entryType::title_sequence& entryType::
  title ()
  {
    return this->title_;
  }

  void entryType::
  title (const title_sequence& s)
  {
    this->title_ = s;
  }

  const entryType::updated_sequence& entryType::
  updated () const
  {
    return this->updated_;
  }

  entryType::updated_sequence& entryType::
  updated ()
  {
    return this->updated_;
  }

  void entryType::
  updated (const updated_sequence& s)
  {
    this->updated_ = s;
  }

  const entryType::base_optional& entryType::
  base () const
  {
    return this->base_;
  }

  entryType::base_optional& entryType::
  base ()
  {
    return this->base_;
  }

  void entryType::
  base (const base_type& x)
  {
    this->base_.set (x);
  }

  void entryType::
  base (const base_optional& x)
  {
    this->base_ = x;
  }

  void entryType::
  base (::std::auto_ptr< base_type > x)
  {
    this->base_.set (x);
  }

  const entryType::lang_optional& entryType::
  lang () const
  {
    return this->lang_;
  }

  entryType::lang_optional& entryType::
  lang ()
  {
    return this->lang_;
  }

  void entryType::
  lang (const lang_type& x)
  {
    this->lang_.set (x);
  }

  void entryType::
  lang (const lang_optional& x)
  {
    this->lang_ = x;
  }

  void entryType::
  lang (::std::auto_ptr< lang_type > x)
  {
    this->lang_.set (x);
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

namespace Atom
{
  // entryType
  //

  entryType::
  entryType ()
  : ::xml_schema::type (),
    author_ (this),
    category_ (this),
    content_ (this),
    contributor_ (this),
    id_ (this),
    link_ (this),
    published_ (this),
    rights_ (this),
    source_ (this),
    summary_ (this),
    title_ (this),
    updated_ (this),
    base_ (this),
    lang_ (this)
  {
  }

  entryType::
  entryType (const entryType& x,
             ::xml_schema::flags f,
             ::xml_schema::container* c)
  : ::xml_schema::type (x, f, c),
    author_ (x.author_, f, this),
    category_ (x.category_, f, this),
    content_ (x.content_, f, this),
    contributor_ (x.contributor_, f, this),
    id_ (x.id_, f, this),
    link_ (x.link_, f, this),
    published_ (x.published_, f, this),
    rights_ (x.rights_, f, this),
    source_ (x.source_, f, this),
    summary_ (x.summary_, f, this),
    title_ (x.title_, f, this),
    updated_ (x.updated_, f, this),
    base_ (x.base_, f, this),
    lang_ (x.lang_, f, this)
  {
  }

  entryType::
  entryType (const ::xercesc::DOMElement& e,
             ::xml_schema::flags f,
             ::xml_schema::container* c)
  : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
    author_ (this),
    category_ (this),
    content_ (this),
    contributor_ (this),
    id_ (this),
    link_ (this),
    published_ (this),
    rights_ (this),
    source_ (this),
    summary_ (this),
    title_ (this),
    updated_ (this),
    base_ (this),
    lang_ (this)
  {
    if ((f & ::xml_schema::flags::base) == 0)
    {
      ::xsd::cxx::xml::dom::parser< char > p (e, true, true);
      this->parse (p, f);
    }
  }

  void entryType::
  parse (::xsd::cxx::xml::dom::parser< char >& p,
         ::xml_schema::flags f)
  {
    for (; p.more_elements (); p.next_element ())
    {
      const ::xercesc::DOMElement& i (p.cur_element ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      // author
      //
      {
        ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
          ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
            "author",
            "http://www.w3.org/2005/Atom",
            &::xsd::cxx::tree::factory_impl< author_type >,
            false, true, i, n, f, this));

        if (tmp.get () != 0)
        {
          ::std::auto_ptr< author_type > r (
            dynamic_cast< author_type* > (tmp.get ()));

          if (r.get ())
            tmp.release ();
          else
            throw ::xsd::cxx::tree::not_derived< char > ();

          this->author_.push_back (r);
          continue;
        }
      }

      // category
      //
      {
        ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
          ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
            "category",
            "http://www.w3.org/2005/Atom",
            &::xsd::cxx::tree::factory_impl< category_type >,
            false, true, i, n, f, this));

        if (tmp.get () != 0)
        {
          ::std::auto_ptr< category_type > r (
            dynamic_cast< category_type* > (tmp.get ()));

          if (r.get ())
            tmp.release ();
          else
            throw ::xsd::cxx::tree::not_derived< char > ();

          this->category_.push_back (r);
          continue;
        }
      }

      // content
      //
      {
        ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
          ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
            "content",
            "http://www.w3.org/2005/Atom",
            &::xsd::cxx::tree::factory_impl< content_type >,
            false, true, i, n, f, this));

        if (tmp.get () != 0)
        {
          ::std::auto_ptr< content_type > r (
            dynamic_cast< content_type* > (tmp.get ()));

          if (r.get ())
            tmp.release ();
          else
            throw ::xsd::cxx::tree::not_derived< char > ();

          this->content_.push_back (r);
          continue;
        }
      }

      // contributor
      //
      {
        ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
          ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
            "contributor",
            "http://www.w3.org/2005/Atom",
            &::xsd::cxx::tree::factory_impl< contributor_type >,
            false, true, i, n, f, this));

        if (tmp.get () != 0)
        {
          ::std::auto_ptr< contributor_type > r (
            dynamic_cast< contributor_type* > (tmp.get ()));

          if (r.get ())
            tmp.release ();
          else
            throw ::xsd::cxx::tree::not_derived< char > ();

          this->contributor_.push_back (r);
          continue;
        }
      }

      // id
      //
      {
        ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
          ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
            "id",
            "http://www.w3.org/2005/Atom",
            &::xsd::cxx::tree::factory_impl< id_type >,
            false, true, i, n, f, this));

        if (tmp.get () != 0)
        {
          ::std::auto_ptr< id_type > r (
            dynamic_cast< id_type* > (tmp.get ()));

          if (r.get ())
            tmp.release ();
          else
            throw ::xsd::cxx::tree::not_derived< char > ();

          this->id_.push_back (r);
          continue;
        }
      }

      // link
      //
      {
        ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
          ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
            "link",
            "http://www.w3.org/2005/Atom",
            &::xsd::cxx::tree::factory_impl< link_type >,
            false, true, i, n, f, this));

        if (tmp.get () != 0)
        {
          ::std::auto_ptr< link_type > r (
            dynamic_cast< link_type* > (tmp.get ()));

          if (r.get ())
            tmp.release ();
          else
            throw ::xsd::cxx::tree::not_derived< char > ();

          this->link_.push_back (r);
          continue;
        }
      }

      // published
      //
      {
        ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
          ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
            "published",
            "http://www.w3.org/2005/Atom",
            &::xsd::cxx::tree::factory_impl< published_type >,
            false, true, i, n, f, this));

        if (tmp.get () != 0)
        {
          ::std::auto_ptr< published_type > r (
            dynamic_cast< published_type* > (tmp.get ()));

          if (r.get ())
            tmp.release ();
          else
            throw ::xsd::cxx::tree::not_derived< char > ();

          this->published_.push_back (r);
          continue;
        }
      }

      // rights
      //
      {
        ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
          ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
            "rights",
            "http://www.w3.org/2005/Atom",
            &::xsd::cxx::tree::factory_impl< rights_type >,
            false, true, i, n, f, this));

        if (tmp.get () != 0)
        {
          ::std::auto_ptr< rights_type > r (
            dynamic_cast< rights_type* > (tmp.get ()));

          if (r.get ())
            tmp.release ();
          else
            throw ::xsd::cxx::tree::not_derived< char > ();

          this->rights_.push_back (r);
          continue;
        }
      }

      // source
      //
      {
        ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
          ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
            "source",
            "http://www.w3.org/2005/Atom",
            &::xsd::cxx::tree::factory_impl< source_type >,
            false, true, i, n, f, this));

        if (tmp.get () != 0)
        {
          ::std::auto_ptr< source_type > r (
            dynamic_cast< source_type* > (tmp.get ()));

          if (r.get ())
            tmp.release ();
          else
            throw ::xsd::cxx::tree::not_derived< char > ();

          this->source_.push_back (r);
          continue;
        }
      }

      // summary
      //
      {
        ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
          ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
            "summary",
            "http://www.w3.org/2005/Atom",
            &::xsd::cxx::tree::factory_impl< summary_type >,
            false, true, i, n, f, this));

        if (tmp.get () != 0)
        {
          ::std::auto_ptr< summary_type > r (
            dynamic_cast< summary_type* > (tmp.get ()));

          if (r.get ())
            tmp.release ();
          else
            throw ::xsd::cxx::tree::not_derived< char > ();

          this->summary_.push_back (r);
          continue;
        }
      }

      // title
      //
      {
        ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
          ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
            "title",
            "http://www.w3.org/2005/Atom",
            &::xsd::cxx::tree::factory_impl< title_type >,
            false, true, i, n, f, this));

        if (tmp.get () != 0)
        {
          ::std::auto_ptr< title_type > r (
            dynamic_cast< title_type* > (tmp.get ()));

          if (r.get ())
            tmp.release ();
          else
            throw ::xsd::cxx::tree::not_derived< char > ();

          this->title_.push_back (r);
          continue;
        }
      }

      // updated
      //
      {
        ::std::auto_ptr< ::xsd::cxx::tree::type > tmp (
          ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
            "updated",
            "http://www.w3.org/2005/Atom",
            &::xsd::cxx::tree::factory_impl< updated_type >,
            false, true, i, n, f, this));

        if (tmp.get () != 0)
        {
          ::std::auto_ptr< updated_type > r (
            dynamic_cast< updated_type* > (tmp.get ()));

          if (r.get ())
            tmp.release ();
          else
            throw ::xsd::cxx::tree::not_derived< char > ();

          this->updated_.push_back (r);
          continue;
        }
      }

      break;
    }

    while (p.more_attributes ())
    {
      const ::xercesc::DOMAttr& i (p.next_attribute ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      if (n.name () == "base" && n.namespace_ () == "http://www.w3.org/XML/1998/namespace")
      {
        this->base_.set (base_traits::create (i, f, this));
        continue;
      }

      if (n.name () == "lang" && n.namespace_ () == "http://www.w3.org/XML/1998/namespace")
      {
        this->lang_.set (lang_traits::create (i, f, this));
        continue;
      }
    }
  }

  entryType* entryType::
  _clone (::xml_schema::flags f,
          ::xml_schema::container* c) const
  {
    return new class entryType (*this, f, c);
  }

  entryType& entryType::
  operator= (const entryType& x)
  {
    if (this != &x)
    {
      static_cast< ::xml_schema::type& > (*this) = x;
      this->author_ = x.author_;
      this->category_ = x.category_;
      this->content_ = x.content_;
      this->contributor_ = x.contributor_;
      this->id_ = x.id_;
      this->link_ = x.link_;
      this->published_ = x.published_;
      this->rights_ = x.rights_;
      this->source_ = x.source_;
      this->summary_ = x.summary_;
      this->title_ = x.title_;
      this->updated_ = x.updated_;
      this->base_ = x.base_;
      this->lang_ = x.lang_;
    }

    return *this;
  }

  entryType::
  ~entryType ()
  {
  }

  static
  const ::xsd::cxx::tree::type_factory_initializer< 0, char, entryType >
  _xsd_entryType_type_factory_init (
    "entryType",
    "http://www.w3.org/2005/Atom");
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace Atom
{
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

namespace Atom
{
  void
  operator<< (::xercesc::DOMElement& e, const entryType& i)
  {
    e << static_cast< const ::xml_schema::type& > (i);

    // author
    //
    {
      ::xsd::cxx::tree::type_serializer_map< char >& tsm (
        ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

      for (entryType::author_const_iterator
           b (i.author ().begin ()), n (i.author ().end ());
           b != n; ++b)
      {
        if (typeid (entryType::author_type) == typeid (*b))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "author",
              "http://www.w3.org/2005/Atom",
              e));

          s << *b;
        }
        else
          tsm.serialize (
            "author",
            "http://www.w3.org/2005/Atom",
            false, true, e, *b);
      }
    }

    // category
    //
    {
      ::xsd::cxx::tree::type_serializer_map< char >& tsm (
        ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

      for (entryType::category_const_iterator
           b (i.category ().begin ()), n (i.category ().end ());
           b != n; ++b)
      {
        if (typeid (entryType::category_type) == typeid (*b))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "category",
              "http://www.w3.org/2005/Atom",
              e));

          s << *b;
        }
        else
          tsm.serialize (
            "category",
            "http://www.w3.org/2005/Atom",
            false, true, e, *b);
      }
    }

    // content
    //
    {
      ::xsd::cxx::tree::type_serializer_map< char >& tsm (
        ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

      for (entryType::content_const_iterator
           b (i.content ().begin ()), n (i.content ().end ());
           b != n; ++b)
      {
        if (typeid (entryType::content_type) == typeid (*b))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "content",
              "http://www.w3.org/2005/Atom",
              e));

          s << *b;
        }
        else
          tsm.serialize (
            "content",
            "http://www.w3.org/2005/Atom",
            false, true, e, *b);
      }
    }

    // contributor
    //
    {
      ::xsd::cxx::tree::type_serializer_map< char >& tsm (
        ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

      for (entryType::contributor_const_iterator
           b (i.contributor ().begin ()), n (i.contributor ().end ());
           b != n; ++b)
      {
        if (typeid (entryType::contributor_type) == typeid (*b))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "contributor",
              "http://www.w3.org/2005/Atom",
              e));

          s << *b;
        }
        else
          tsm.serialize (
            "contributor",
            "http://www.w3.org/2005/Atom",
            false, true, e, *b);
      }
    }

    // id
    //
    {
      ::xsd::cxx::tree::type_serializer_map< char >& tsm (
        ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

      for (entryType::id_const_iterator
           b (i.id ().begin ()), n (i.id ().end ());
           b != n; ++b)
      {
        if (typeid (entryType::id_type) == typeid (*b))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "id",
              "http://www.w3.org/2005/Atom",
              e));

          s << *b;
        }
        else
          tsm.serialize (
            "id",
            "http://www.w3.org/2005/Atom",
            false, true, e, *b);
      }
    }

    // link
    //
    {
      ::xsd::cxx::tree::type_serializer_map< char >& tsm (
        ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

      for (entryType::link_const_iterator
           b (i.link ().begin ()), n (i.link ().end ());
           b != n; ++b)
      {
        if (typeid (entryType::link_type) == typeid (*b))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "link",
              "http://www.w3.org/2005/Atom",
              e));

          s << *b;
        }
        else
          tsm.serialize (
            "link",
            "http://www.w3.org/2005/Atom",
            false, true, e, *b);
      }
    }

    // published
    //
    {
      ::xsd::cxx::tree::type_serializer_map< char >& tsm (
        ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

      for (entryType::published_const_iterator
           b (i.published ().begin ()), n (i.published ().end ());
           b != n; ++b)
      {
        if (typeid (entryType::published_type) == typeid (*b))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "published",
              "http://www.w3.org/2005/Atom",
              e));

          s << *b;
        }
        else
          tsm.serialize (
            "published",
            "http://www.w3.org/2005/Atom",
            false, true, e, *b);
      }
    }

    // rights
    //
    {
      ::xsd::cxx::tree::type_serializer_map< char >& tsm (
        ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

      for (entryType::rights_const_iterator
           b (i.rights ().begin ()), n (i.rights ().end ());
           b != n; ++b)
      {
        if (typeid (entryType::rights_type) == typeid (*b))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "rights",
              "http://www.w3.org/2005/Atom",
              e));

          s << *b;
        }
        else
          tsm.serialize (
            "rights",
            "http://www.w3.org/2005/Atom",
            false, true, e, *b);
      }
    }

    // source
    //
    {
      ::xsd::cxx::tree::type_serializer_map< char >& tsm (
        ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

      for (entryType::source_const_iterator
           b (i.source ().begin ()), n (i.source ().end ());
           b != n; ++b)
      {
        if (typeid (entryType::source_type) == typeid (*b))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "source",
              "http://www.w3.org/2005/Atom",
              e));

          s << *b;
        }
        else
          tsm.serialize (
            "source",
            "http://www.w3.org/2005/Atom",
            false, true, e, *b);
      }
    }

    // summary
    //
    {
      ::xsd::cxx::tree::type_serializer_map< char >& tsm (
        ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

      for (entryType::summary_const_iterator
           b (i.summary ().begin ()), n (i.summary ().end ());
           b != n; ++b)
      {
        if (typeid (entryType::summary_type) == typeid (*b))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "summary",
              "http://www.w3.org/2005/Atom",
              e));

          s << *b;
        }
        else
          tsm.serialize (
            "summary",
            "http://www.w3.org/2005/Atom",
            false, true, e, *b);
      }
    }

    // title
    //
    {
      ::xsd::cxx::tree::type_serializer_map< char >& tsm (
        ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

      for (entryType::title_const_iterator
           b (i.title ().begin ()), n (i.title ().end ());
           b != n; ++b)
      {
        if (typeid (entryType::title_type) == typeid (*b))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "title",
              "http://www.w3.org/2005/Atom",
              e));

          s << *b;
        }
        else
          tsm.serialize (
            "title",
            "http://www.w3.org/2005/Atom",
            false, true, e, *b);
      }
    }

    // updated
    //
    {
      ::xsd::cxx::tree::type_serializer_map< char >& tsm (
        ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

      for (entryType::updated_const_iterator
           b (i.updated ().begin ()), n (i.updated ().end ());
           b != n; ++b)
      {
        if (typeid (entryType::updated_type) == typeid (*b))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "updated",
              "http://www.w3.org/2005/Atom",
              e));

          s << *b;
        }
        else
          tsm.serialize (
            "updated",
            "http://www.w3.org/2005/Atom",
            false, true, e, *b);
      }
    }

    // base
    //
    if (i.base ())
    {
      ::xercesc::DOMAttr& a (
        ::xsd::cxx::xml::dom::create_attribute (
          "base",
          "http://www.w3.org/XML/1998/namespace",
          e));

      a << *i.base ();
    }

    // lang
    //
    if (i.lang ())
    {
      ::xercesc::DOMAttr& a (
        ::xsd::cxx::xml::dom::create_attribute (
          "lang",
          "http://www.w3.org/XML/1998/namespace",
          e));

      a << *i.lang ();
    }
  }

  static
  const ::xsd::cxx::tree::type_serializer_initializer< 0, char, entryType >
  _xsd_entryType_type_serializer_init (
    "entryType",
    "http://www.w3.org/2005/Atom");
}

// Begin epilogue.
//
//
// End epilogue.

#include <xsd/cxx/post.hxx>
