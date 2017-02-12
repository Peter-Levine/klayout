
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
*  @file gsiDeclQDynamicPropertyChangeEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDynamicPropertyChangeEvent>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDynamicPropertyChangeEvent

// QByteArray QDynamicPropertyChangeEvent::propertyName()


static void _init_f_propertyName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_f_propertyName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)((QDynamicPropertyChangeEvent *)cls)->propertyName ());
}


namespace gsi
{

static gsi::Methods methods_QDynamicPropertyChangeEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("propertyName", "@brief Method QByteArray QDynamicPropertyChangeEvent::propertyName()\n", true, &_init_f_propertyName_c0, &_call_f_propertyName_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QDynamicPropertyChangeEvent> decl_QDynamicPropertyChangeEvent (qtdecl_QEvent (), "QDynamicPropertyChangeEvent_Native",
  methods_QDynamicPropertyChangeEvent (),
  "@hide\n@alias QDynamicPropertyChangeEvent");

GSIQT_PUBLIC gsi::Class<QDynamicPropertyChangeEvent> &qtdecl_QDynamicPropertyChangeEvent () { return decl_QDynamicPropertyChangeEvent; }

}


class QDynamicPropertyChangeEvent_Adaptor : public QDynamicPropertyChangeEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QDynamicPropertyChangeEvent_Adaptor();

  //  [adaptor ctor] QDynamicPropertyChangeEvent::QDynamicPropertyChangeEvent(const QByteArray &name)
  QDynamicPropertyChangeEvent_Adaptor(const QByteArray &name) : QDynamicPropertyChangeEvent(name)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QDynamicPropertyChangeEvent_Adaptor::~QDynamicPropertyChangeEvent_Adaptor() { }

//  Constructor QDynamicPropertyChangeEvent::QDynamicPropertyChangeEvent(const QByteArray &name) (adaptor class)

static void _init_ctor_QDynamicPropertyChangeEvent_Adaptor_2309 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return_new<QDynamicPropertyChangeEvent_Adaptor> ();
}

static void _call_ctor_QDynamicPropertyChangeEvent_Adaptor_2309 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  ret.write<QDynamicPropertyChangeEvent_Adaptor *> (new QDynamicPropertyChangeEvent_Adaptor (arg1));
}


namespace gsi
{

gsi::Class<QDynamicPropertyChangeEvent> &qtdecl_QDynamicPropertyChangeEvent ();

static gsi::Methods methods_QDynamicPropertyChangeEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDynamicPropertyChangeEvent::QDynamicPropertyChangeEvent(const QByteArray &name)\nThis method creates an object of class QDynamicPropertyChangeEvent.", &_init_ctor_QDynamicPropertyChangeEvent_Adaptor_2309, &_call_ctor_QDynamicPropertyChangeEvent_Adaptor_2309);
  return methods;
}

gsi::Class<QDynamicPropertyChangeEvent_Adaptor> decl_QDynamicPropertyChangeEvent_Adaptor (qtdecl_QDynamicPropertyChangeEvent (), "QDynamicPropertyChangeEvent",
  methods_QDynamicPropertyChangeEvent_Adaptor (),
  "@qt\n@brief Binding of QDynamicPropertyChangeEvent");

}

