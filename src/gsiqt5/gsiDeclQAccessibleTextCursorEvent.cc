
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
*  @file gsiDeclQAccessibleTextCursorEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAccessibleTextCursorEvent>
#include <QAccessibleInterface>
#include <QObject>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAccessibleTextCursorEvent

// int QAccessibleTextCursorEvent::cursorPosition()


static void _init_f_cursorPosition_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_cursorPosition_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAccessibleTextCursorEvent *)cls)->cursorPosition ());
}


// void QAccessibleTextCursorEvent::setCursorPosition(int position)


static void _init_f_setCursorPosition_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("position");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCursorPosition_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAccessibleTextCursorEvent *)cls)->setCursorPosition (arg1);
}


namespace gsi
{

static gsi::Methods methods_QAccessibleTextCursorEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod (":cursorPosition", "@brief Method int QAccessibleTextCursorEvent::cursorPosition()\n", true, &_init_f_cursorPosition_c0, &_call_f_cursorPosition_c0);
  methods += new qt_gsi::GenericMethod ("setCursorPosition|cursorPosition=", "@brief Method void QAccessibleTextCursorEvent::setCursorPosition(int position)\n", false, &_init_f_setCursorPosition_767, &_call_f_setCursorPosition_767);
  return methods;
}

gsi::Class<QAccessibleEvent> &qtdecl_QAccessibleEvent ();

gsi::Class<QAccessibleTextCursorEvent> decl_QAccessibleTextCursorEvent (qtdecl_QAccessibleEvent (), "QAccessibleTextCursorEvent_Native",
  methods_QAccessibleTextCursorEvent (),
  "@hide\n@alias QAccessibleTextCursorEvent");

GSIQT_PUBLIC gsi::Class<QAccessibleTextCursorEvent> &qtdecl_QAccessibleTextCursorEvent () { return decl_QAccessibleTextCursorEvent; }

}


class QAccessibleTextCursorEvent_Adaptor : public QAccessibleTextCursorEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAccessibleTextCursorEvent_Adaptor();

  //  [adaptor ctor] QAccessibleTextCursorEvent::QAccessibleTextCursorEvent(QObject *obj, int cursorPos)
  QAccessibleTextCursorEvent_Adaptor(QObject *obj, int cursorPos) : QAccessibleTextCursorEvent(obj, cursorPos)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QAccessibleTextCursorEvent::QAccessibleTextCursorEvent(QAccessibleInterface *iface, int cursorPos)
  QAccessibleTextCursorEvent_Adaptor(QAccessibleInterface *iface, int cursorPos) : QAccessibleTextCursorEvent(iface, cursorPos)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QAccessibleInterface *QAccessibleTextCursorEvent::accessibleInterface()
  QAccessibleInterface * cbs_accessibleInterface_c0_0() const
  {
    return QAccessibleTextCursorEvent::accessibleInterface();
  }

  virtual QAccessibleInterface * accessibleInterface() const
  {
    if (cb_accessibleInterface_c0_0.can_issue()) {
      return cb_accessibleInterface_c0_0.issue<QAccessibleTextCursorEvent_Adaptor, QAccessibleInterface *>(&QAccessibleTextCursorEvent_Adaptor::cbs_accessibleInterface_c0_0);
    } else {
      return QAccessibleTextCursorEvent::accessibleInterface();
    }
  }

  gsi::Callback cb_accessibleInterface_c0_0;
};

QAccessibleTextCursorEvent_Adaptor::~QAccessibleTextCursorEvent_Adaptor() { }

//  Constructor QAccessibleTextCursorEvent::QAccessibleTextCursorEvent(QObject *obj, int cursorPos) (adaptor class)

static void _init_ctor_QAccessibleTextCursorEvent_Adaptor_1961 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("obj");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("cursorPos");
  decl->add_arg<int > (argspec_1);
  decl->set_return_new<QAccessibleTextCursorEvent_Adaptor> ();
}

static void _call_ctor_QAccessibleTextCursorEvent_Adaptor_1961 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  int arg2 = args.read<int > (heap);
  ret.write<QAccessibleTextCursorEvent_Adaptor *> (new QAccessibleTextCursorEvent_Adaptor (arg1, arg2));
}


//  Constructor QAccessibleTextCursorEvent::QAccessibleTextCursorEvent(QAccessibleInterface *iface, int cursorPos) (adaptor class)

static void _init_ctor_QAccessibleTextCursorEvent_Adaptor_3281 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("iface");
  decl->add_arg<QAccessibleInterface * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("cursorPos");
  decl->add_arg<int > (argspec_1);
  decl->set_return_new<QAccessibleTextCursorEvent_Adaptor> ();
}

static void _call_ctor_QAccessibleTextCursorEvent_Adaptor_3281 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAccessibleInterface *arg1 = args.read<QAccessibleInterface * > (heap);
  int arg2 = args.read<int > (heap);
  ret.write<QAccessibleTextCursorEvent_Adaptor *> (new QAccessibleTextCursorEvent_Adaptor (arg1, arg2));
}


// QAccessibleInterface *QAccessibleTextCursorEvent::accessibleInterface()

static void _init_cbs_accessibleInterface_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAccessibleInterface * > ();
}

static void _call_cbs_accessibleInterface_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAccessibleInterface * > ((QAccessibleInterface *)((QAccessibleTextCursorEvent_Adaptor *)cls)->cbs_accessibleInterface_c0_0 ());
}

static void _set_callback_cbs_accessibleInterface_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleTextCursorEvent_Adaptor *)cls)->cb_accessibleInterface_c0_0 = cb;
}


namespace gsi
{

gsi::Class<QAccessibleTextCursorEvent> &qtdecl_QAccessibleTextCursorEvent ();

static gsi::Methods methods_QAccessibleTextCursorEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAccessibleTextCursorEvent::QAccessibleTextCursorEvent(QObject *obj, int cursorPos)\nThis method creates an object of class QAccessibleTextCursorEvent.", &_init_ctor_QAccessibleTextCursorEvent_Adaptor_1961, &_call_ctor_QAccessibleTextCursorEvent_Adaptor_1961);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAccessibleTextCursorEvent::QAccessibleTextCursorEvent(QAccessibleInterface *iface, int cursorPos)\nThis method creates an object of class QAccessibleTextCursorEvent.", &_init_ctor_QAccessibleTextCursorEvent_Adaptor_3281, &_call_ctor_QAccessibleTextCursorEvent_Adaptor_3281);
  methods += new qt_gsi::GenericMethod ("accessibleInterface", "@hide", true, &_init_cbs_accessibleInterface_c0_0, &_call_cbs_accessibleInterface_c0_0);
  methods += new qt_gsi::GenericMethod ("accessibleInterface", "@brief Virtual method QAccessibleInterface *QAccessibleTextCursorEvent::accessibleInterface()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_accessibleInterface_c0_0, &_call_cbs_accessibleInterface_c0_0, &_set_callback_cbs_accessibleInterface_c0_0);
  return methods;
}

gsi::Class<QAccessibleTextCursorEvent_Adaptor> decl_QAccessibleTextCursorEvent_Adaptor (qtdecl_QAccessibleTextCursorEvent (), "QAccessibleTextCursorEvent",
  methods_QAccessibleTextCursorEvent_Adaptor (),
  "@qt\n@brief Binding of QAccessibleTextCursorEvent");

}

