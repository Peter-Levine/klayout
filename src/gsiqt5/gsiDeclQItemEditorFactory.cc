
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
*  @file gsiDeclQItemEditorFactory.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QItemEditorFactory>
#include <QItemEditorCreatorBase>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QItemEditorFactory

// QWidget *QItemEditorFactory::createEditor(int userType, QWidget *parent)


static void _init_f_createEditor_c1974 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("userType");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("parent");
  decl->add_arg<QWidget * > (argspec_1);
  decl->set_return<QWidget * > ();
}

static void _call_f_createEditor_c1974 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  QWidget *arg2 = args.read<QWidget * > (heap);
  ret.write<QWidget * > ((QWidget *)((QItemEditorFactory *)cls)->createEditor (arg1, arg2));
}


// void QItemEditorFactory::registerEditor(int userType, QItemEditorCreatorBase *creator)


static void _init_f_registerEditor_3475 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("userType");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("creator");
  decl->add_arg<QItemEditorCreatorBase * > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_registerEditor_3475 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  QItemEditorCreatorBase *arg2 = args.read<QItemEditorCreatorBase * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QItemEditorFactory *)cls)->registerEditor (arg1, arg2);
}


// QByteArray QItemEditorFactory::valuePropertyName(int userType)


static void _init_f_valuePropertyName_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("userType");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QByteArray > ();
}

static void _call_f_valuePropertyName_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QByteArray > ((QByteArray)((QItemEditorFactory *)cls)->valuePropertyName (arg1));
}


// static const QItemEditorFactory *QItemEditorFactory::defaultFactory()


static void _init_f_defaultFactory_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QItemEditorFactory * > ();
}

static void _call_f_defaultFactory_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QItemEditorFactory * > ((const QItemEditorFactory *)QItemEditorFactory::defaultFactory ());
}


// static void QItemEditorFactory::setDefaultFactory(QItemEditorFactory *factory)


static void _init_f_setDefaultFactory_2445 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("factory");
  decl->add_arg<QItemEditorFactory * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDefaultFactory_2445 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QItemEditorFactory *arg1 = args.read<QItemEditorFactory * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QItemEditorFactory::setDefaultFactory (arg1);
}


namespace gsi
{

static gsi::Methods methods_QItemEditorFactory () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("createEditor", "@brief Method QWidget *QItemEditorFactory::createEditor(int userType, QWidget *parent)\n", true, &_init_f_createEditor_c1974, &_call_f_createEditor_c1974);
  methods += new qt_gsi::GenericMethod ("registerEditor", "@brief Method void QItemEditorFactory::registerEditor(int userType, QItemEditorCreatorBase *creator)\n", false, &_init_f_registerEditor_3475, &_call_f_registerEditor_3475);
  methods += new qt_gsi::GenericMethod ("valuePropertyName", "@brief Method QByteArray QItemEditorFactory::valuePropertyName(int userType)\n", true, &_init_f_valuePropertyName_c767, &_call_f_valuePropertyName_c767);
  methods += new qt_gsi::GenericStaticMethod (":defaultFactory", "@brief Static method const QItemEditorFactory *QItemEditorFactory::defaultFactory()\nThis method is static and can be called without an instance.", &_init_f_defaultFactory_0, &_call_f_defaultFactory_0);
  methods += new qt_gsi::GenericStaticMethod ("setDefaultFactory|defaultFactory=", "@brief Static method void QItemEditorFactory::setDefaultFactory(QItemEditorFactory *factory)\nThis method is static and can be called without an instance.", &_init_f_setDefaultFactory_2445, &_call_f_setDefaultFactory_2445);
  return methods;
}

gsi::Class<QItemEditorFactory> decl_QItemEditorFactory ("QItemEditorFactory_Native",
  methods_QItemEditorFactory (),
  "@hide\n@alias QItemEditorFactory");

GSIQT_PUBLIC gsi::Class<QItemEditorFactory> &qtdecl_QItemEditorFactory () { return decl_QItemEditorFactory; }

}


class QItemEditorFactory_Adaptor : public QItemEditorFactory, public qt_gsi::QtObjectBase
{
public:

  virtual ~QItemEditorFactory_Adaptor();

  //  [adaptor ctor] QItemEditorFactory::QItemEditorFactory()
  QItemEditorFactory_Adaptor() : QItemEditorFactory()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QWidget *QItemEditorFactory::createEditor(int userType, QWidget *parent)
  QWidget * cbs_createEditor_c1974_0(int userType, QWidget *parent) const
  {
    return QItemEditorFactory::createEditor(userType, parent);
  }

  virtual QWidget * createEditor(int userType, QWidget *parent) const
  {
    if (cb_createEditor_c1974_0.can_issue()) {
      return cb_createEditor_c1974_0.issue<QItemEditorFactory_Adaptor, QWidget *, int, QWidget *>(&QItemEditorFactory_Adaptor::cbs_createEditor_c1974_0, userType, parent);
    } else {
      return QItemEditorFactory::createEditor(userType, parent);
    }
  }

  //  [adaptor impl] QByteArray QItemEditorFactory::valuePropertyName(int userType)
  QByteArray cbs_valuePropertyName_c767_0(int userType) const
  {
    return QItemEditorFactory::valuePropertyName(userType);
  }

  virtual QByteArray valuePropertyName(int userType) const
  {
    if (cb_valuePropertyName_c767_0.can_issue()) {
      return cb_valuePropertyName_c767_0.issue<QItemEditorFactory_Adaptor, QByteArray, int>(&QItemEditorFactory_Adaptor::cbs_valuePropertyName_c767_0, userType);
    } else {
      return QItemEditorFactory::valuePropertyName(userType);
    }
  }

  gsi::Callback cb_createEditor_c1974_0;
  gsi::Callback cb_valuePropertyName_c767_0;
};

QItemEditorFactory_Adaptor::~QItemEditorFactory_Adaptor() { }

//  Constructor QItemEditorFactory::QItemEditorFactory() (adaptor class)

static void _init_ctor_QItemEditorFactory_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QItemEditorFactory_Adaptor> ();
}

static void _call_ctor_QItemEditorFactory_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QItemEditorFactory_Adaptor *> (new QItemEditorFactory_Adaptor ());
}


// QWidget *QItemEditorFactory::createEditor(int userType, QWidget *parent)

static void _init_cbs_createEditor_c1974_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("userType");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("parent");
  decl->add_arg<QWidget * > (argspec_1);
  decl->set_return<QWidget * > ();
}

static void _call_cbs_createEditor_c1974_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  QWidget *arg2 = args.read<QWidget * > (heap);
  ret.write<QWidget * > ((QWidget *)((QItemEditorFactory_Adaptor *)cls)->cbs_createEditor_c1974_0 (arg1, arg2));
}

static void _set_callback_cbs_createEditor_c1974_0 (void *cls, const gsi::Callback &cb)
{
  ((QItemEditorFactory_Adaptor *)cls)->cb_createEditor_c1974_0 = cb;
}


// QByteArray QItemEditorFactory::valuePropertyName(int userType)

static void _init_cbs_valuePropertyName_c767_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("userType");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QByteArray > ();
}

static void _call_cbs_valuePropertyName_c767_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QByteArray > ((QByteArray)((QItemEditorFactory_Adaptor *)cls)->cbs_valuePropertyName_c767_0 (arg1));
}

static void _set_callback_cbs_valuePropertyName_c767_0 (void *cls, const gsi::Callback &cb)
{
  ((QItemEditorFactory_Adaptor *)cls)->cb_valuePropertyName_c767_0 = cb;
}


namespace gsi
{

gsi::Class<QItemEditorFactory> &qtdecl_QItemEditorFactory ();

static gsi::Methods methods_QItemEditorFactory_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QItemEditorFactory::QItemEditorFactory()\nThis method creates an object of class QItemEditorFactory.", &_init_ctor_QItemEditorFactory_Adaptor_0, &_call_ctor_QItemEditorFactory_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("createEditor", "@hide", true, &_init_cbs_createEditor_c1974_0, &_call_cbs_createEditor_c1974_0);
  methods += new qt_gsi::GenericMethod ("createEditor", "@brief Virtual method QWidget *QItemEditorFactory::createEditor(int userType, QWidget *parent)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_createEditor_c1974_0, &_call_cbs_createEditor_c1974_0, &_set_callback_cbs_createEditor_c1974_0);
  methods += new qt_gsi::GenericMethod ("valuePropertyName", "@hide", true, &_init_cbs_valuePropertyName_c767_0, &_call_cbs_valuePropertyName_c767_0);
  methods += new qt_gsi::GenericMethod ("valuePropertyName", "@brief Virtual method QByteArray QItemEditorFactory::valuePropertyName(int userType)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_valuePropertyName_c767_0, &_call_cbs_valuePropertyName_c767_0, &_set_callback_cbs_valuePropertyName_c767_0);
  return methods;
}

gsi::Class<QItemEditorFactory_Adaptor> decl_QItemEditorFactory_Adaptor (qtdecl_QItemEditorFactory (), "QItemEditorFactory",
  methods_QItemEditorFactory_Adaptor (),
  "@qt\n@brief Binding of QItemEditorFactory");

}

