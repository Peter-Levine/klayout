
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
*  @file gsiDeclQAbstractNativeEventFilter.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAbstractNativeEventFilter>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAbstractNativeEventFilter

// bool QAbstractNativeEventFilter::nativeEventFilter(const QByteArray &eventType, void *message, long int *result)


static void _init_f_nativeEventFilter_4678 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("eventType");
  decl->add_arg<const QByteArray & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("message");
  decl->add_arg<void * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("result");
  decl->add_arg<long int * > (argspec_2);
  decl->set_return<bool > ();
}

static void _call_f_nativeEventFilter_4678 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  void *arg2 = args.read<void * > (heap);
  long int *arg3 = args.read<long int * > (heap);
  ret.write<bool > ((bool)((QAbstractNativeEventFilter *)cls)->nativeEventFilter (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QAbstractNativeEventFilter () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("nativeEventFilter", "@brief Method bool QAbstractNativeEventFilter::nativeEventFilter(const QByteArray &eventType, void *message, long int *result)\n", false, &_init_f_nativeEventFilter_4678, &_call_f_nativeEventFilter_4678);
  return methods;
}

gsi::Class<QAbstractNativeEventFilter> decl_QAbstractNativeEventFilter ("QAbstractNativeEventFilter_Native",
  methods_QAbstractNativeEventFilter (),
  "@hide\n@alias QAbstractNativeEventFilter");

GSIQT_PUBLIC gsi::Class<QAbstractNativeEventFilter> &qtdecl_QAbstractNativeEventFilter () { return decl_QAbstractNativeEventFilter; }

}


class QAbstractNativeEventFilter_Adaptor : public QAbstractNativeEventFilter, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAbstractNativeEventFilter_Adaptor();

  //  [adaptor ctor] QAbstractNativeEventFilter::QAbstractNativeEventFilter()
  QAbstractNativeEventFilter_Adaptor() : QAbstractNativeEventFilter()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] bool QAbstractNativeEventFilter::nativeEventFilter(const QByteArray &eventType, void *message, long int *result)
  bool cbs_nativeEventFilter_4678_0(const QByteArray &eventType, void *message, long int *result)
  {
    __SUPPRESS_UNUSED_WARNING (eventType);
    __SUPPRESS_UNUSED_WARNING (message);
    __SUPPRESS_UNUSED_WARNING (result);
    throw qt_gsi::AbstractMethodCalledException("nativeEventFilter");
  }

  virtual bool nativeEventFilter(const QByteArray &eventType, void *message, long int *result)
  {
    if (cb_nativeEventFilter_4678_0.can_issue()) {
      return cb_nativeEventFilter_4678_0.issue<QAbstractNativeEventFilter_Adaptor, bool, const QByteArray &, void *, long int *>(&QAbstractNativeEventFilter_Adaptor::cbs_nativeEventFilter_4678_0, eventType, message, result);
    } else {
      throw qt_gsi::AbstractMethodCalledException("nativeEventFilter");
    }
  }

  gsi::Callback cb_nativeEventFilter_4678_0;
};

QAbstractNativeEventFilter_Adaptor::~QAbstractNativeEventFilter_Adaptor() { }

//  Constructor QAbstractNativeEventFilter::QAbstractNativeEventFilter() (adaptor class)

static void _init_ctor_QAbstractNativeEventFilter_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QAbstractNativeEventFilter_Adaptor> ();
}

static void _call_ctor_QAbstractNativeEventFilter_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAbstractNativeEventFilter_Adaptor *> (new QAbstractNativeEventFilter_Adaptor ());
}


// bool QAbstractNativeEventFilter::nativeEventFilter(const QByteArray &eventType, void *message, long int *result)

static void _init_cbs_nativeEventFilter_4678_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("eventType");
  decl->add_arg<const QByteArray & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("message");
  decl->add_arg<void * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("result");
  decl->add_arg<long int * > (argspec_2);
  decl->set_return<bool > ();
}

static void _call_cbs_nativeEventFilter_4678_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  void *arg2 = args.read<void * > (heap);
  long int *arg3 = args.read<long int * > (heap);
  ret.write<bool > ((bool)((QAbstractNativeEventFilter_Adaptor *)cls)->cbs_nativeEventFilter_4678_0 (arg1, arg2, arg3));
}

static void _set_callback_cbs_nativeEventFilter_4678_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractNativeEventFilter_Adaptor *)cls)->cb_nativeEventFilter_4678_0 = cb;
}


namespace gsi
{

gsi::Class<QAbstractNativeEventFilter> &qtdecl_QAbstractNativeEventFilter ();

static gsi::Methods methods_QAbstractNativeEventFilter_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAbstractNativeEventFilter::QAbstractNativeEventFilter()\nThis method creates an object of class QAbstractNativeEventFilter.", &_init_ctor_QAbstractNativeEventFilter_Adaptor_0, &_call_ctor_QAbstractNativeEventFilter_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("nativeEventFilter", "@hide", false, &_init_cbs_nativeEventFilter_4678_0, &_call_cbs_nativeEventFilter_4678_0);
  methods += new qt_gsi::GenericMethod ("nativeEventFilter", "@brief Virtual method bool QAbstractNativeEventFilter::nativeEventFilter(const QByteArray &eventType, void *message, long int *result)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_nativeEventFilter_4678_0, &_call_cbs_nativeEventFilter_4678_0, &_set_callback_cbs_nativeEventFilter_4678_0);
  return methods;
}

gsi::Class<QAbstractNativeEventFilter_Adaptor> decl_QAbstractNativeEventFilter_Adaptor (qtdecl_QAbstractNativeEventFilter (), "QAbstractNativeEventFilter",
  methods_QAbstractNativeEventFilter_Adaptor (),
  "@qt\n@brief Binding of QAbstractNativeEventFilter");

}

