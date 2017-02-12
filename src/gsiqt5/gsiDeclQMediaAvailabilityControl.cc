
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
*  @file gsiDeclQMediaAvailabilityControl.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMediaAvailabilityControl>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QMediaAvailabilityControl

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QMediaAvailabilityControl::staticMetaObject);
}


// QMultimedia::AvailabilityStatus QMediaAvailabilityControl::availability()


static void _init_f_availability_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QMultimedia::AvailabilityStatus>::target_type > ();
}

static void _call_f_availability_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QMultimedia::AvailabilityStatus>::target_type > ((qt_gsi::Converter<QMultimedia::AvailabilityStatus>::target_type)qt_gsi::CppToQtAdaptor<QMultimedia::AvailabilityStatus>(((QMediaAvailabilityControl *)cls)->availability ()));
}


// static QString QMediaAvailabilityControl::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "__null");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args ? args.read<const char * > (heap) : (const char *)(__null);
  int arg3 = args ? args.read<int > (heap) : (int)(-1);
  ret.write<QString > ((QString)QMediaAvailabilityControl::tr (arg1, arg2, arg3));
}


// static QString QMediaAvailabilityControl::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "__null");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args ? args.read<const char * > (heap) : (const char *)(__null);
  int arg3 = args ? args.read<int > (heap) : (int)(-1);
  ret.write<QString > ((QString)QMediaAvailabilityControl::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QMediaAvailabilityControl () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("availability", "@brief Method QMultimedia::AvailabilityStatus QMediaAvailabilityControl::availability()\n", true, &_init_f_availability_c0, &_call_f_availability_c0);
  methods += gsi::qt_signal<const qt_gsi::Converter<QMultimedia::AvailabilityStatus>::target_type & > ("availabilityChanged(QMultimedia::AvailabilityStatus)", "availabilityChanged", gsi::arg("availability"), "@brief Signal declaration for QMediaAvailabilityControl::availabilityChanged(QMultimedia::AvailabilityStatus availability)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QMediaAvailabilityControl::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QMediaAvailabilityControl::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QMediaAvailabilityControl::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QMediaControl> &qtdecl_QMediaControl ();

gsi::Class<QMediaAvailabilityControl> decl_QMediaAvailabilityControl (qtdecl_QMediaControl (), "QMediaAvailabilityControl_Native",
  methods_QMediaAvailabilityControl (),
  "@hide\n@alias QMediaAvailabilityControl");

GSIQT_PUBLIC gsi::Class<QMediaAvailabilityControl> &qtdecl_QMediaAvailabilityControl () { return decl_QMediaAvailabilityControl; }

}


class QMediaAvailabilityControl_Adaptor : public QMediaAvailabilityControl, public qt_gsi::QtObjectBase
{
public:

  virtual ~QMediaAvailabilityControl_Adaptor();

  //  [expose] bool QMediaAvailabilityControl::isSignalConnected(const QMetaMethod &signal)
  bool fp_QMediaAvailabilityControl_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QMediaAvailabilityControl::isSignalConnected(signal);
  }

  //  [expose] int QMediaAvailabilityControl::receivers(const char *signal)
  int fp_QMediaAvailabilityControl_receivers_c1731 (const char *signal) const {
    return QMediaAvailabilityControl::receivers(signal);
  }

  //  [expose] QObject *QMediaAvailabilityControl::sender()
  QObject * fp_QMediaAvailabilityControl_sender_c0 () const {
    return QMediaAvailabilityControl::sender();
  }

  //  [expose] int QMediaAvailabilityControl::senderSignalIndex()
  int fp_QMediaAvailabilityControl_senderSignalIndex_c0 () const {
    return QMediaAvailabilityControl::senderSignalIndex();
  }

  //  [adaptor impl] QMultimedia::AvailabilityStatus QMediaAvailabilityControl::availability()
  qt_gsi::Converter<QMultimedia::AvailabilityStatus>::target_type cbs_availability_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("availability");
  }

  virtual QMultimedia::AvailabilityStatus availability() const
  {
    if (cb_availability_c0_0.can_issue()) {
      return qt_gsi::QtToCppAdaptor<QMultimedia::AvailabilityStatus>(cb_availability_c0_0.issue<QMediaAvailabilityControl_Adaptor, qt_gsi::Converter<QMultimedia::AvailabilityStatus>::target_type>(&QMediaAvailabilityControl_Adaptor::cbs_availability_c0_0)).cref();
    } else {
      throw qt_gsi::AbstractMethodCalledException("availability");
    }
  }

  //  [emitter impl] void QMediaAvailabilityControl::availabilityChanged(QMultimedia::AvailabilityStatus availability)
  void emitter_QMediaAvailabilityControl_availabilityChanged_3555(QMultimedia::AvailabilityStatus availability)
  {
    emit QMediaAvailabilityControl::availabilityChanged(availability);
  }

  //  [emitter impl] void QMediaAvailabilityControl::destroyed(QObject *)
  void emitter_QMediaAvailabilityControl_destroyed_1302(QObject *arg1)
  {
    emit QMediaAvailabilityControl::destroyed(arg1);
  }

  //  [adaptor impl] bool QMediaAvailabilityControl::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QMediaAvailabilityControl::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QMediaAvailabilityControl_Adaptor, bool, QEvent *>(&QMediaAvailabilityControl_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QMediaAvailabilityControl::event(arg1);
    }
  }

  //  [adaptor impl] bool QMediaAvailabilityControl::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QMediaAvailabilityControl::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QMediaAvailabilityControl_Adaptor, bool, QObject *, QEvent *>(&QMediaAvailabilityControl_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QMediaAvailabilityControl::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] void QMediaAvailabilityControl::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QMediaAvailabilityControl::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QMediaAvailabilityControl_Adaptor, QChildEvent *>(&QMediaAvailabilityControl_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QMediaAvailabilityControl::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QMediaAvailabilityControl::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QMediaAvailabilityControl::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QMediaAvailabilityControl_Adaptor, QEvent *>(&QMediaAvailabilityControl_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QMediaAvailabilityControl::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QMediaAvailabilityControl::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QMediaAvailabilityControl::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QMediaAvailabilityControl_Adaptor, const QMetaMethod &>(&QMediaAvailabilityControl_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QMediaAvailabilityControl::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QMediaAvailabilityControl::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QMediaAvailabilityControl::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QMediaAvailabilityControl_Adaptor, QTimerEvent *>(&QMediaAvailabilityControl_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QMediaAvailabilityControl::timerEvent(arg1);
    }
  }

  gsi::Callback cb_availability_c0_0;
  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QMediaAvailabilityControl_Adaptor::~QMediaAvailabilityControl_Adaptor() { }

// QMultimedia::AvailabilityStatus QMediaAvailabilityControl::availability()

static void _init_cbs_availability_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QMultimedia::AvailabilityStatus>::target_type > ();
}

static void _call_cbs_availability_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QMultimedia::AvailabilityStatus>::target_type > ((qt_gsi::Converter<QMultimedia::AvailabilityStatus>::target_type)((QMediaAvailabilityControl_Adaptor *)cls)->cbs_availability_c0_0 ());
}

static void _set_callback_cbs_availability_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaAvailabilityControl_Adaptor *)cls)->cb_availability_c0_0 = cb;
}


// emitter void QMediaAvailabilityControl::availabilityChanged(QMultimedia::AvailabilityStatus availability)

static void _init_emitter_availabilityChanged_3555 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("availability");
  decl->add_arg<const qt_gsi::Converter<QMultimedia::AvailabilityStatus>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_availabilityChanged_3555 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QMultimedia::AvailabilityStatus>::target_type & arg1 = args.read<const qt_gsi::Converter<QMultimedia::AvailabilityStatus>::target_type & > (heap);
  ((QMediaAvailabilityControl_Adaptor *)cls)->emitter_QMediaAvailabilityControl_availabilityChanged_3555 (arg1);
}


// void QMediaAvailabilityControl::childEvent(QChildEvent *)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaAvailabilityControl_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaAvailabilityControl_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QMediaAvailabilityControl::customEvent(QEvent *)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaAvailabilityControl_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaAvailabilityControl_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QMediaAvailabilityControl::destroyed(QObject *)

static void _init_emitter_destroyed_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_destroyed_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? args.read<QObject * > (heap) : (QObject *)(0);
  ((QMediaAvailabilityControl_Adaptor *)cls)->emitter_QMediaAvailabilityControl_destroyed_1302 (arg1);
}


// void QMediaAvailabilityControl::disconnectNotify(const QMetaMethod &signal)

static void _init_cbs_disconnectNotify_2394_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_2394_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = args.read<const QMetaMethod & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaAvailabilityControl_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaAvailabilityControl_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QMediaAvailabilityControl::event(QEvent *)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QMediaAvailabilityControl_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaAvailabilityControl_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QMediaAvailabilityControl::eventFilter(QObject *, QEvent *)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QMediaAvailabilityControl_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaAvailabilityControl_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QMediaAvailabilityControl::isSignalConnected(const QMetaMethod &signal)

static void _init_fp_isSignalConnected_c2394 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_fp_isSignalConnected_c2394 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = args.read<const QMetaMethod & > (heap);
  ret.write<bool > ((bool)((QMediaAvailabilityControl_Adaptor *)cls)->fp_QMediaAvailabilityControl_isSignalConnected_c2394 (arg1));
}


// exposed int QMediaAvailabilityControl::receivers(const char *signal)

static void _init_fp_receivers_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_fp_receivers_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  ret.write<int > ((int)((QMediaAvailabilityControl_Adaptor *)cls)->fp_QMediaAvailabilityControl_receivers_c1731 (arg1));
}


// exposed QObject *QMediaAvailabilityControl::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QMediaAvailabilityControl_Adaptor *)cls)->fp_QMediaAvailabilityControl_sender_c0 ());
}


// exposed int QMediaAvailabilityControl::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMediaAvailabilityControl_Adaptor *)cls)->fp_QMediaAvailabilityControl_senderSignalIndex_c0 ());
}


// void QMediaAvailabilityControl::timerEvent(QTimerEvent *)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaAvailabilityControl_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaAvailabilityControl_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QMediaAvailabilityControl> &qtdecl_QMediaAvailabilityControl ();

static gsi::Methods methods_QMediaAvailabilityControl_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("availability", "@hide", true, &_init_cbs_availability_c0_0, &_call_cbs_availability_c0_0);
  methods += new qt_gsi::GenericMethod ("availability", "@brief Virtual method QMultimedia::AvailabilityStatus QMediaAvailabilityControl::availability()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_availability_c0_0, &_call_cbs_availability_c0_0, &_set_callback_cbs_availability_c0_0);
  methods += new qt_gsi::GenericMethod ("emit_availabilityChanged", "@brief Emitter for signal void QMediaAvailabilityControl::availabilityChanged(QMultimedia::AvailabilityStatus availability)\nCall this method to emit this signal.", false, &_init_emitter_availabilityChanged_3555, &_call_emitter_availabilityChanged_3555);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QMediaAvailabilityControl::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QMediaAvailabilityControl::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QMediaAvailabilityControl::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QMediaAvailabilityControl::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QMediaAvailabilityControl::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QMediaAvailabilityControl::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QMediaAvailabilityControl::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QMediaAvailabilityControl::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QMediaAvailabilityControl::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QMediaAvailabilityControl::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QMediaAvailabilityControl::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QMediaAvailabilityControl_Adaptor> decl_QMediaAvailabilityControl_Adaptor (qtdecl_QMediaAvailabilityControl (), "QMediaAvailabilityControl",
  methods_QMediaAvailabilityControl_Adaptor (),
  "@qt\n@brief Binding of QMediaAvailabilityControl");

}

