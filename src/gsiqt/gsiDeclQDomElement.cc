
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2017 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQDomElement.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDomElement>
#include <QDomAttr>
#include <QDomCDATASection>
#include <QDomCharacterData>
#include <QDomComment>
#include <QDomDocument>
#include <QDomDocumentFragment>
#include <QDomDocumentType>
#include <QDomEntity>
#include <QDomEntityReference>
#include <QDomNamedNodeMap>
#include <QDomNode>
#include <QDomNodeList>
#include <QDomNotation>
#include <QDomProcessingInstruction>
#include <QDomText>
#include <QTextStream>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDomElement

//  Constructor QDomElement::QDomElement()


static void _init_ctor_QDomElement_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QDomElement> ();
}

static void _call_ctor_QDomElement_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDomElement *> (new QDomElement ());
}


//  Constructor QDomElement::QDomElement(const QDomElement &x)


static void _init_ctor_QDomElement_2396 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<const QDomElement & > (argspec_0);
  decl->set_return_new<QDomElement> ();
}

static void _call_ctor_QDomElement_2396 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomElement &arg1 = args.read<const QDomElement & > (heap);
  ret.write<QDomElement *> (new QDomElement (arg1));
}


// QString QDomElement::attribute(const QString &name, const QString &defValue)


static void _init_f_attribute_c3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("defValue", true, "QString()");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_attribute_c3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args ? args.read<const QString & > (heap) : (const QString &)(QString());
  ret.write<QString > ((QString)((QDomElement *)cls)->attribute (arg1, arg2));
}


// QString QDomElement::attributeNS(const QString nsURI, const QString &localName, const QString &defValue)


static void _init_f_attributeNS_c5677 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("nsURI");
  decl->add_arg<const QString > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("localName");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("defValue", true, "QString()");
  decl->add_arg<const QString & > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_attributeNS_c5677 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString arg1 = args.read<const QString > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  const QString &arg3 = args ? args.read<const QString & > (heap) : (const QString &)(QString());
  ret.write<QString > ((QString)((QDomElement *)cls)->attributeNS (arg1, arg2, arg3));
}


// QDomAttr QDomElement::attributeNode(const QString &name)


static void _init_f_attributeNode_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QDomAttr > ();
}

static void _call_f_attributeNode_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QDomAttr > ((QDomAttr)((QDomElement *)cls)->attributeNode (arg1));
}


// QDomAttr QDomElement::attributeNodeNS(const QString &nsURI, const QString &localName)


static void _init_f_attributeNodeNS_3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("nsURI");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("localName");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QDomAttr > ();
}

static void _call_f_attributeNodeNS_3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  ret.write<QDomAttr > ((QDomAttr)((QDomElement *)cls)->attributeNodeNS (arg1, arg2));
}


// () const


static void _init_f_attributes_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDomNamedNodeMap > ();
}

static void _call_f_attributes_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDomNamedNodeMap > ((QDomNamedNodeMap)((QDomElement *)cls)->attributes ());
}


// QDomNodeList QDomElement::elementsByTagName(const QString &tagname)


static void _init_f_elementsByTagName_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("tagname");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QDomNodeList > ();
}

static void _call_f_elementsByTagName_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QDomNodeList > ((QDomNodeList)((QDomElement *)cls)->elementsByTagName (arg1));
}


// QDomNodeList QDomElement::elementsByTagNameNS(const QString &nsURI, const QString &localName)


static void _init_f_elementsByTagNameNS_c3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("nsURI");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("localName");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QDomNodeList > ();
}

static void _call_f_elementsByTagNameNS_c3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  ret.write<QDomNodeList > ((QDomNodeList)((QDomElement *)cls)->elementsByTagNameNS (arg1, arg2));
}


// bool QDomElement::hasAttribute(const QString &name)


static void _init_f_hasAttribute_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_hasAttribute_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)((QDomElement *)cls)->hasAttribute (arg1));
}


// bool QDomElement::hasAttributeNS(const QString &nsURI, const QString &localName)


static void _init_f_hasAttributeNS_c3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("nsURI");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("localName");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_hasAttributeNS_c3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)((QDomElement *)cls)->hasAttributeNS (arg1, arg2));
}


// () const


static void _init_f_nodeType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QDomNode::NodeType>::target_type > ();
}

static void _call_f_nodeType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QDomNode::NodeType>::target_type > ((qt_gsi::Converter<QDomNode::NodeType>::target_type)qt_gsi::CppToQtAdaptor<QDomNode::NodeType>(((QDomElement *)cls)->nodeType ()));
}


// (const QDomElement &)


static void _init_f_operator_eq__2396 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QDomElement & > (argspec_0);
  decl->set_return<QDomElement & > ();
}

static void _call_f_operator_eq__2396 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomElement &arg1 = args.read<const QDomElement & > (heap);
  ret.write<QDomElement & > ((QDomElement &)((QDomElement *)cls)->operator= (arg1));
}


// void QDomElement::removeAttribute(const QString &name)


static void _init_f_removeAttribute_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_removeAttribute_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDomElement *)cls)->removeAttribute (arg1);
}


// void QDomElement::removeAttributeNS(const QString &nsURI, const QString &localName)


static void _init_f_removeAttributeNS_3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("nsURI");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("localName");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_removeAttributeNS_3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDomElement *)cls)->removeAttributeNS (arg1, arg2);
}


// QDomAttr QDomElement::removeAttributeNode(const QDomAttr &oldAttr)


static void _init_f_removeAttributeNode_2093 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("oldAttr");
  decl->add_arg<const QDomAttr & > (argspec_0);
  decl->set_return<QDomAttr > ();
}

static void _call_f_removeAttributeNode_2093 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomAttr &arg1 = args.read<const QDomAttr & > (heap);
  ret.write<QDomAttr > ((QDomAttr)((QDomElement *)cls)->removeAttributeNode (arg1));
}


// void QDomElement::setAttribute(const QString &name, const QString &value)


static void _init_f_setAttribute_3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setAttribute_3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDomElement *)cls)->setAttribute (arg1, arg2);
}


// void QDomElement::setAttribute(const QString &name, qlonglong value)


static void _init_f_setAttribute_3330 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<qlonglong > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setAttribute_3330 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  qlonglong arg2 = args.read<qlonglong > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDomElement *)cls)->setAttribute (arg1, arg2);
}


// void QDomElement::setAttribute(const QString &name, qulonglong value)


static void _init_f_setAttribute_3447 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<qulonglong > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setAttribute_3447 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  qulonglong arg2 = args.read<qulonglong > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDomElement *)cls)->setAttribute (arg1, arg2);
}


// void QDomElement::setAttribute(const QString &name, int value)


static void _init_f_setAttribute_2684 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setAttribute_2684 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  int arg2 = args.read<int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDomElement *)cls)->setAttribute (arg1, arg2);
}


// void QDomElement::setAttribute(const QString &name, unsigned int value)


static void _init_f_setAttribute_3689 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<unsigned int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setAttribute_3689 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  unsigned int arg2 = args.read<unsigned int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDomElement *)cls)->setAttribute (arg1, arg2);
}


// void QDomElement::setAttribute(const QString &name, float value)


static void _init_f_setAttribute_2887 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<float > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setAttribute_2887 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  float arg2 = args.read<float > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDomElement *)cls)->setAttribute (arg1, arg2);
}


// void QDomElement::setAttribute(const QString &name, double value)


static void _init_f_setAttribute_2988 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<double > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setAttribute_2988 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  double arg2 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDomElement *)cls)->setAttribute (arg1, arg2);
}


// void QDomElement::setAttributeNS(const QString nsURI, const QString &qName, const QString &value)


static void _init_f_setAttributeNS_5677 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("nsURI");
  decl->add_arg<const QString > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("qName");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("value");
  decl->add_arg<const QString & > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_setAttributeNS_5677 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString arg1 = args.read<const QString > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  const QString &arg3 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDomElement *)cls)->setAttributeNS (arg1, arg2, arg3);
}


// void QDomElement::setAttributeNS(const QString nsURI, const QString &qName, int value)


static void _init_f_setAttributeNS_4419 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("nsURI");
  decl->add_arg<const QString > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("qName");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("value");
  decl->add_arg<int > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_setAttributeNS_4419 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString arg1 = args.read<const QString > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  int arg3 = args.read<int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDomElement *)cls)->setAttributeNS (arg1, arg2, arg3);
}


// void QDomElement::setAttributeNS(const QString nsURI, const QString &qName, unsigned int value)


static void _init_f_setAttributeNS_5424 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("nsURI");
  decl->add_arg<const QString > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("qName");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("value");
  decl->add_arg<unsigned int > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_setAttributeNS_5424 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString arg1 = args.read<const QString > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  unsigned int arg3 = args.read<unsigned int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDomElement *)cls)->setAttributeNS (arg1, arg2, arg3);
}


// void QDomElement::setAttributeNS(const QString nsURI, const QString &qName, qlonglong value)


static void _init_f_setAttributeNS_5065 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("nsURI");
  decl->add_arg<const QString > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("qName");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("value");
  decl->add_arg<qlonglong > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_setAttributeNS_5065 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString arg1 = args.read<const QString > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  qlonglong arg3 = args.read<qlonglong > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDomElement *)cls)->setAttributeNS (arg1, arg2, arg3);
}


// void QDomElement::setAttributeNS(const QString nsURI, const QString &qName, qulonglong value)


static void _init_f_setAttributeNS_5182 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("nsURI");
  decl->add_arg<const QString > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("qName");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("value");
  decl->add_arg<qulonglong > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_setAttributeNS_5182 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString arg1 = args.read<const QString > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  qulonglong arg3 = args.read<qulonglong > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDomElement *)cls)->setAttributeNS (arg1, arg2, arg3);
}


// void QDomElement::setAttributeNS(const QString nsURI, const QString &qName, double value)


static void _init_f_setAttributeNS_4723 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("nsURI");
  decl->add_arg<const QString > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("qName");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("value");
  decl->add_arg<double > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_setAttributeNS_4723 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString arg1 = args.read<const QString > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  double arg3 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDomElement *)cls)->setAttributeNS (arg1, arg2, arg3);
}


// QDomAttr QDomElement::setAttributeNode(const QDomAttr &newAttr)


static void _init_f_setAttributeNode_2093 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("newAttr");
  decl->add_arg<const QDomAttr & > (argspec_0);
  decl->set_return<QDomAttr > ();
}

static void _call_f_setAttributeNode_2093 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomAttr &arg1 = args.read<const QDomAttr & > (heap);
  ret.write<QDomAttr > ((QDomAttr)((QDomElement *)cls)->setAttributeNode (arg1));
}


// QDomAttr QDomElement::setAttributeNodeNS(const QDomAttr &newAttr)


static void _init_f_setAttributeNodeNS_2093 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("newAttr");
  decl->add_arg<const QDomAttr & > (argspec_0);
  decl->set_return<QDomAttr > ();
}

static void _call_f_setAttributeNodeNS_2093 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomAttr &arg1 = args.read<const QDomAttr & > (heap);
  ret.write<QDomAttr > ((QDomAttr)((QDomElement *)cls)->setAttributeNodeNS (arg1));
}


// void QDomElement::setTagName(const QString &name)


static void _init_f_setTagName_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTagName_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDomElement *)cls)->setTagName (arg1);
}


// QString QDomElement::tagName()


static void _init_f_tagName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_tagName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QDomElement *)cls)->tagName ());
}


// QString QDomElement::text()


static void _init_f_text_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_text_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QDomElement *)cls)->text ());
}



namespace gsi
{

static gsi::Methods methods_QDomElement () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDomElement::QDomElement()\nThis method creates an object of class QDomElement.", &_init_ctor_QDomElement_0, &_call_ctor_QDomElement_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDomElement::QDomElement(const QDomElement &x)\nThis method creates an object of class QDomElement.", &_init_ctor_QDomElement_2396, &_call_ctor_QDomElement_2396);
  methods += new qt_gsi::GenericMethod ("attribute", "@brief Method QString QDomElement::attribute(const QString &name, const QString &defValue)\n", true, &_init_f_attribute_c3942, &_call_f_attribute_c3942);
  methods += new qt_gsi::GenericMethod ("attributeNS", "@brief Method QString QDomElement::attributeNS(const QString nsURI, const QString &localName, const QString &defValue)\n", true, &_init_f_attributeNS_c5677, &_call_f_attributeNS_c5677);
  methods += new qt_gsi::GenericMethod ("attributeNode", "@brief Method QDomAttr QDomElement::attributeNode(const QString &name)\n", false, &_init_f_attributeNode_2025, &_call_f_attributeNode_2025);
  methods += new qt_gsi::GenericMethod ("attributeNodeNS", "@brief Method QDomAttr QDomElement::attributeNodeNS(const QString &nsURI, const QString &localName)\n", false, &_init_f_attributeNodeNS_3942, &_call_f_attributeNodeNS_3942);
  methods += new qt_gsi::GenericMethod ("attributes", "@brief Method () const\n", true, &_init_f_attributes_c0, &_call_f_attributes_c0);
  methods += new qt_gsi::GenericMethod ("elementsByTagName", "@brief Method QDomNodeList QDomElement::elementsByTagName(const QString &tagname)\n", true, &_init_f_elementsByTagName_c2025, &_call_f_elementsByTagName_c2025);
  methods += new qt_gsi::GenericMethod ("elementsByTagNameNS", "@brief Method QDomNodeList QDomElement::elementsByTagNameNS(const QString &nsURI, const QString &localName)\n", true, &_init_f_elementsByTagNameNS_c3942, &_call_f_elementsByTagNameNS_c3942);
  methods += new qt_gsi::GenericMethod ("hasAttribute", "@brief Method bool QDomElement::hasAttribute(const QString &name)\n", true, &_init_f_hasAttribute_c2025, &_call_f_hasAttribute_c2025);
  methods += new qt_gsi::GenericMethod ("hasAttributeNS", "@brief Method bool QDomElement::hasAttributeNS(const QString &nsURI, const QString &localName)\n", true, &_init_f_hasAttributeNS_c3942, &_call_f_hasAttributeNS_c3942);
  methods += new qt_gsi::GenericMethod ("nodeType", "@brief Method () const\n", true, &_init_f_nodeType_c0, &_call_f_nodeType_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method (const QDomElement &)\n", false, &_init_f_operator_eq__2396, &_call_f_operator_eq__2396);
  methods += new qt_gsi::GenericMethod ("removeAttribute", "@brief Method void QDomElement::removeAttribute(const QString &name)\n", false, &_init_f_removeAttribute_2025, &_call_f_removeAttribute_2025);
  methods += new qt_gsi::GenericMethod ("removeAttributeNS", "@brief Method void QDomElement::removeAttributeNS(const QString &nsURI, const QString &localName)\n", false, &_init_f_removeAttributeNS_3942, &_call_f_removeAttributeNS_3942);
  methods += new qt_gsi::GenericMethod ("removeAttributeNode", "@brief Method QDomAttr QDomElement::removeAttributeNode(const QDomAttr &oldAttr)\n", false, &_init_f_removeAttributeNode_2093, &_call_f_removeAttributeNode_2093);
  methods += new qt_gsi::GenericMethod ("setAttribute", "@brief Method void QDomElement::setAttribute(const QString &name, const QString &value)\n", false, &_init_f_setAttribute_3942, &_call_f_setAttribute_3942);
  methods += new qt_gsi::GenericMethod ("setAttribute_ll|attribute_ll=", "@brief Method void QDomElement::setAttribute(const QString &name, qlonglong value)\n", false, &_init_f_setAttribute_3330, &_call_f_setAttribute_3330);
  methods += new qt_gsi::GenericMethod ("setAttribute_ull|attribute_ull=", "@brief Method void QDomElement::setAttribute(const QString &name, qulonglong value)\n", false, &_init_f_setAttribute_3447, &_call_f_setAttribute_3447);
  methods += new qt_gsi::GenericMethod ("setAttribute_i|attribute_i=", "@brief Method void QDomElement::setAttribute(const QString &name, int value)\n", false, &_init_f_setAttribute_2684, &_call_f_setAttribute_2684);
  methods += new qt_gsi::GenericMethod ("setAttribute_ui|attribute_ui=", "@brief Method void QDomElement::setAttribute(const QString &name, unsigned int value)\n", false, &_init_f_setAttribute_3689, &_call_f_setAttribute_3689);
  methods += new qt_gsi::GenericMethod ("setAttribute_f|attribute_f=", "@brief Method void QDomElement::setAttribute(const QString &name, float value)\n", false, &_init_f_setAttribute_2887, &_call_f_setAttribute_2887);
  methods += new qt_gsi::GenericMethod ("setAttribute_d|attribute_d=", "@brief Method void QDomElement::setAttribute(const QString &name, double value)\n", false, &_init_f_setAttribute_2988, &_call_f_setAttribute_2988);
  methods += new qt_gsi::GenericMethod ("setAttributeNS", "@brief Method void QDomElement::setAttributeNS(const QString nsURI, const QString &qName, const QString &value)\n", false, &_init_f_setAttributeNS_5677, &_call_f_setAttributeNS_5677);
  methods += new qt_gsi::GenericMethod ("setAttributeNS_i|attributeNS_i=", "@brief Method void QDomElement::setAttributeNS(const QString nsURI, const QString &qName, int value)\n", false, &_init_f_setAttributeNS_4419, &_call_f_setAttributeNS_4419);
  methods += new qt_gsi::GenericMethod ("setAttributeNS_ui|attributeNS_ui=", "@brief Method void QDomElement::setAttributeNS(const QString nsURI, const QString &qName, unsigned int value)\n", false, &_init_f_setAttributeNS_5424, &_call_f_setAttributeNS_5424);
  methods += new qt_gsi::GenericMethod ("setAttributeNS_ll|attributeNS_ll=", "@brief Method void QDomElement::setAttributeNS(const QString nsURI, const QString &qName, qlonglong value)\n", false, &_init_f_setAttributeNS_5065, &_call_f_setAttributeNS_5065);
  methods += new qt_gsi::GenericMethod ("setAttributeNS_ull|attributeNS_ull=", "@brief Method void QDomElement::setAttributeNS(const QString nsURI, const QString &qName, qulonglong value)\n", false, &_init_f_setAttributeNS_5182, &_call_f_setAttributeNS_5182);
  methods += new qt_gsi::GenericMethod ("setAttributeNS_d|attributeNS_d=", "@brief Method void QDomElement::setAttributeNS(const QString nsURI, const QString &qName, double value)\n", false, &_init_f_setAttributeNS_4723, &_call_f_setAttributeNS_4723);
  methods += new qt_gsi::GenericMethod ("setAttributeNode", "@brief Method QDomAttr QDomElement::setAttributeNode(const QDomAttr &newAttr)\n", false, &_init_f_setAttributeNode_2093, &_call_f_setAttributeNode_2093);
  methods += new qt_gsi::GenericMethod ("setAttributeNodeNS", "@brief Method QDomAttr QDomElement::setAttributeNodeNS(const QDomAttr &newAttr)\n", false, &_init_f_setAttributeNodeNS_2093, &_call_f_setAttributeNodeNS_2093);
  methods += new qt_gsi::GenericMethod ("setTagName|tagName=", "@brief Method void QDomElement::setTagName(const QString &name)\n", false, &_init_f_setTagName_2025, &_call_f_setTagName_2025);
  methods += new qt_gsi::GenericMethod (":tagName", "@brief Method QString QDomElement::tagName()\n", true, &_init_f_tagName_c0, &_call_f_tagName_c0);
  methods += new qt_gsi::GenericMethod ("text", "@brief Method QString QDomElement::text()\n", true, &_init_f_text_c0, &_call_f_text_c0);
  return methods;
}

gsi::Class<QDomNode> &qtdecl_QDomNode ();

gsi::Class<QDomElement> decl_QDomElement (qtdecl_QDomNode (), "QDomElement",
  methods_QDomElement (),
  "@qt\n@brief Binding of QDomElement");


GSIQT_PUBLIC gsi::Class<QDomElement> &qtdecl_QDomElement () { return decl_QDomElement; }

}

