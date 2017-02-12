
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
*  @file gsiDeclQAudioOutputSelectorControl.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAudioOutputSelectorControl>
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
// class QAudioOutputSelectorControl

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QAudioOutputSelectorControl::staticMetaObject);
}


// QString QAudioOutputSelectorControl::activeOutput()


static void _init_f_activeOutput_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_activeOutput_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QAudioOutputSelectorControl *)cls)->activeOutput ());
}


// QList<QString> QAudioOutputSelectorControl::availableOutputs()


static void _init_f_availableOutputs_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QString> > ();
}

static void _call_f_availableOutputs_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QString> > ((QList<QString>)((QAudioOutputSelectorControl *)cls)->availableOutputs ());
}


// QString QAudioOutputSelectorControl::defaultOutput()


static void _init_f_defaultOutput_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_defaultOutput_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QAudioOutputSelectorControl *)cls)->defaultOutput ());
}


// QString QAudioOutputSelectorControl::outputDescription(const QString &name)


static void _init_f_outputDescription_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_outputDescription_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QString > ((QString)((QAudioOutputSelectorControl *)cls)->outputDescription (arg1));
}


// void QAudioOutputSelectorControl::setActiveOutput(const QString &name)


static void _init_f_setActiveOutput_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setActiveOutput_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioOutputSelectorControl *)cls)->setActiveOutput (arg1);
}


// static QString QAudioOutputSelectorControl::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QAudioOutputSelectorControl::tr (arg1, arg2, arg3));
}


// static QString QAudioOutputSelectorControl::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QAudioOutputSelectorControl::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QAudioOutputSelectorControl () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod (":activeOutput", "@brief Method QString QAudioOutputSelectorControl::activeOutput()\n", true, &_init_f_activeOutput_c0, &_call_f_activeOutput_c0);
  methods += new qt_gsi::GenericMethod ("availableOutputs", "@brief Method QList<QString> QAudioOutputSelectorControl::availableOutputs()\n", true, &_init_f_availableOutputs_c0, &_call_f_availableOutputs_c0);
  methods += new qt_gsi::GenericMethod ("defaultOutput", "@brief Method QString QAudioOutputSelectorControl::defaultOutput()\n", true, &_init_f_defaultOutput_c0, &_call_f_defaultOutput_c0);
  methods += new qt_gsi::GenericMethod ("outputDescription", "@brief Method QString QAudioOutputSelectorControl::outputDescription(const QString &name)\n", true, &_init_f_outputDescription_c2025, &_call_f_outputDescription_c2025);
  methods += new qt_gsi::GenericMethod ("setActiveOutput|activeOutput=", "@brief Method void QAudioOutputSelectorControl::setActiveOutput(const QString &name)\n", false, &_init_f_setActiveOutput_2025, &_call_f_setActiveOutput_2025);
  methods += gsi::qt_signal<const QString & > ("activeOutputChanged(const QString &)", "activeOutputChanged", gsi::arg("name"), "@brief Signal declaration for QAudioOutputSelectorControl::activeOutputChanged(const QString &name)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("availableOutputsChanged()", "availableOutputsChanged", "@brief Signal declaration for QAudioOutputSelectorControl::availableOutputsChanged()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QAudioOutputSelectorControl::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QAudioOutputSelectorControl::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QAudioOutputSelectorControl::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QMediaControl> &qtdecl_QMediaControl ();

gsi::Class<QAudioOutputSelectorControl> decl_QAudioOutputSelectorControl (qtdecl_QMediaControl (), "QAudioOutputSelectorControl_Native",
  methods_QAudioOutputSelectorControl (),
  "@hide\n@alias QAudioOutputSelectorControl");

GSIQT_PUBLIC gsi::Class<QAudioOutputSelectorControl> &qtdecl_QAudioOutputSelectorControl () { return decl_QAudioOutputSelectorControl; }

}


class QAudioOutputSelectorControl_Adaptor : public QAudioOutputSelectorControl, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAudioOutputSelectorControl_Adaptor();

  //  [expose] bool QAudioOutputSelectorControl::isSignalConnected(const QMetaMethod &signal)
  bool fp_QAudioOutputSelectorControl_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QAudioOutputSelectorControl::isSignalConnected(signal);
  }

  //  [expose] int QAudioOutputSelectorControl::receivers(const char *signal)
  int fp_QAudioOutputSelectorControl_receivers_c1731 (const char *signal) const {
    return QAudioOutputSelectorControl::receivers(signal);
  }

  //  [expose] QObject *QAudioOutputSelectorControl::sender()
  QObject * fp_QAudioOutputSelectorControl_sender_c0 () const {
    return QAudioOutputSelectorControl::sender();
  }

  //  [expose] int QAudioOutputSelectorControl::senderSignalIndex()
  int fp_QAudioOutputSelectorControl_senderSignalIndex_c0 () const {
    return QAudioOutputSelectorControl::senderSignalIndex();
  }

  //  [adaptor impl] QString QAudioOutputSelectorControl::activeOutput()
  QString cbs_activeOutput_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("activeOutput");
  }

  virtual QString activeOutput() const
  {
    if (cb_activeOutput_c0_0.can_issue()) {
      return cb_activeOutput_c0_0.issue<QAudioOutputSelectorControl_Adaptor, QString>(&QAudioOutputSelectorControl_Adaptor::cbs_activeOutput_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("activeOutput");
    }
  }

  //  [emitter impl] void QAudioOutputSelectorControl::activeOutputChanged(const QString &name)
  void emitter_QAudioOutputSelectorControl_activeOutputChanged_2025(const QString &name)
  {
    emit QAudioOutputSelectorControl::activeOutputChanged(name);
  }

  //  [adaptor impl] QList<QString> QAudioOutputSelectorControl::availableOutputs()
  QList<QString> cbs_availableOutputs_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("availableOutputs");
  }

  virtual QList<QString> availableOutputs() const
  {
    if (cb_availableOutputs_c0_0.can_issue()) {
      return cb_availableOutputs_c0_0.issue<QAudioOutputSelectorControl_Adaptor, QList<QString> >(&QAudioOutputSelectorControl_Adaptor::cbs_availableOutputs_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("availableOutputs");
    }
  }

  //  [emitter impl] void QAudioOutputSelectorControl::availableOutputsChanged()
  void emitter_QAudioOutputSelectorControl_availableOutputsChanged_0()
  {
    emit QAudioOutputSelectorControl::availableOutputsChanged();
  }

  //  [adaptor impl] QString QAudioOutputSelectorControl::defaultOutput()
  QString cbs_defaultOutput_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("defaultOutput");
  }

  virtual QString defaultOutput() const
  {
    if (cb_defaultOutput_c0_0.can_issue()) {
      return cb_defaultOutput_c0_0.issue<QAudioOutputSelectorControl_Adaptor, QString>(&QAudioOutputSelectorControl_Adaptor::cbs_defaultOutput_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("defaultOutput");
    }
  }

  //  [emitter impl] void QAudioOutputSelectorControl::destroyed(QObject *)
  void emitter_QAudioOutputSelectorControl_destroyed_1302(QObject *arg1)
  {
    emit QAudioOutputSelectorControl::destroyed(arg1);
  }

  //  [adaptor impl] bool QAudioOutputSelectorControl::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QAudioOutputSelectorControl::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QAudioOutputSelectorControl_Adaptor, bool, QEvent *>(&QAudioOutputSelectorControl_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QAudioOutputSelectorControl::event(arg1);
    }
  }

  //  [adaptor impl] bool QAudioOutputSelectorControl::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QAudioOutputSelectorControl::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QAudioOutputSelectorControl_Adaptor, bool, QObject *, QEvent *>(&QAudioOutputSelectorControl_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QAudioOutputSelectorControl::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] QString QAudioOutputSelectorControl::outputDescription(const QString &name)
  QString cbs_outputDescription_c2025_0(const QString &name) const
  {
    __SUPPRESS_UNUSED_WARNING (name);
    throw qt_gsi::AbstractMethodCalledException("outputDescription");
  }

  virtual QString outputDescription(const QString &name) const
  {
    if (cb_outputDescription_c2025_0.can_issue()) {
      return cb_outputDescription_c2025_0.issue<QAudioOutputSelectorControl_Adaptor, QString, const QString &>(&QAudioOutputSelectorControl_Adaptor::cbs_outputDescription_c2025_0, name);
    } else {
      throw qt_gsi::AbstractMethodCalledException("outputDescription");
    }
  }

  //  [adaptor impl] void QAudioOutputSelectorControl::setActiveOutput(const QString &name)
  void cbs_setActiveOutput_2025_0(const QString &name)
  {
    __SUPPRESS_UNUSED_WARNING (name);
    throw qt_gsi::AbstractMethodCalledException("setActiveOutput");
  }

  virtual void setActiveOutput(const QString &name)
  {
    if (cb_setActiveOutput_2025_0.can_issue()) {
      cb_setActiveOutput_2025_0.issue<QAudioOutputSelectorControl_Adaptor, const QString &>(&QAudioOutputSelectorControl_Adaptor::cbs_setActiveOutput_2025_0, name);
    } else {
      throw qt_gsi::AbstractMethodCalledException("setActiveOutput");
    }
  }

  //  [adaptor impl] void QAudioOutputSelectorControl::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QAudioOutputSelectorControl::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QAudioOutputSelectorControl_Adaptor, QChildEvent *>(&QAudioOutputSelectorControl_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QAudioOutputSelectorControl::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QAudioOutputSelectorControl::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QAudioOutputSelectorControl::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QAudioOutputSelectorControl_Adaptor, QEvent *>(&QAudioOutputSelectorControl_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QAudioOutputSelectorControl::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QAudioOutputSelectorControl::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QAudioOutputSelectorControl::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QAudioOutputSelectorControl_Adaptor, const QMetaMethod &>(&QAudioOutputSelectorControl_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QAudioOutputSelectorControl::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QAudioOutputSelectorControl::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QAudioOutputSelectorControl::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QAudioOutputSelectorControl_Adaptor, QTimerEvent *>(&QAudioOutputSelectorControl_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QAudioOutputSelectorControl::timerEvent(arg1);
    }
  }

  gsi::Callback cb_activeOutput_c0_0;
  gsi::Callback cb_availableOutputs_c0_0;
  gsi::Callback cb_defaultOutput_c0_0;
  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_outputDescription_c2025_0;
  gsi::Callback cb_setActiveOutput_2025_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QAudioOutputSelectorControl_Adaptor::~QAudioOutputSelectorControl_Adaptor() { }

// QString QAudioOutputSelectorControl::activeOutput()

static void _init_cbs_activeOutput_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_cbs_activeOutput_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QAudioOutputSelectorControl_Adaptor *)cls)->cbs_activeOutput_c0_0 ());
}

static void _set_callback_cbs_activeOutput_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioOutputSelectorControl_Adaptor *)cls)->cb_activeOutput_c0_0 = cb;
}


// emitter void QAudioOutputSelectorControl::activeOutputChanged(const QString &name)

static void _init_emitter_activeOutputChanged_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_activeOutputChanged_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ((QAudioOutputSelectorControl_Adaptor *)cls)->emitter_QAudioOutputSelectorControl_activeOutputChanged_2025 (arg1);
}


// QList<QString> QAudioOutputSelectorControl::availableOutputs()

static void _init_cbs_availableOutputs_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QString> > ();
}

static void _call_cbs_availableOutputs_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QString> > ((QList<QString>)((QAudioOutputSelectorControl_Adaptor *)cls)->cbs_availableOutputs_c0_0 ());
}

static void _set_callback_cbs_availableOutputs_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioOutputSelectorControl_Adaptor *)cls)->cb_availableOutputs_c0_0 = cb;
}


// emitter void QAudioOutputSelectorControl::availableOutputsChanged()

static void _init_emitter_availableOutputsChanged_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_emitter_availableOutputsChanged_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ((QAudioOutputSelectorControl_Adaptor *)cls)->emitter_QAudioOutputSelectorControl_availableOutputsChanged_0 ();
}


// void QAudioOutputSelectorControl::childEvent(QChildEvent *)

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
  ((QAudioOutputSelectorControl_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioOutputSelectorControl_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QAudioOutputSelectorControl::customEvent(QEvent *)

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
  ((QAudioOutputSelectorControl_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioOutputSelectorControl_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// QString QAudioOutputSelectorControl::defaultOutput()

static void _init_cbs_defaultOutput_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_cbs_defaultOutput_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QAudioOutputSelectorControl_Adaptor *)cls)->cbs_defaultOutput_c0_0 ());
}

static void _set_callback_cbs_defaultOutput_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioOutputSelectorControl_Adaptor *)cls)->cb_defaultOutput_c0_0 = cb;
}


// emitter void QAudioOutputSelectorControl::destroyed(QObject *)

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
  ((QAudioOutputSelectorControl_Adaptor *)cls)->emitter_QAudioOutputSelectorControl_destroyed_1302 (arg1);
}


// void QAudioOutputSelectorControl::disconnectNotify(const QMetaMethod &signal)

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
  ((QAudioOutputSelectorControl_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioOutputSelectorControl_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QAudioOutputSelectorControl::event(QEvent *)

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
  ret.write<bool > ((bool)((QAudioOutputSelectorControl_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioOutputSelectorControl_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QAudioOutputSelectorControl::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QAudioOutputSelectorControl_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioOutputSelectorControl_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QAudioOutputSelectorControl::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QAudioOutputSelectorControl_Adaptor *)cls)->fp_QAudioOutputSelectorControl_isSignalConnected_c2394 (arg1));
}


// QString QAudioOutputSelectorControl::outputDescription(const QString &name)

static void _init_cbs_outputDescription_c2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_cbs_outputDescription_c2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QString > ((QString)((QAudioOutputSelectorControl_Adaptor *)cls)->cbs_outputDescription_c2025_0 (arg1));
}

static void _set_callback_cbs_outputDescription_c2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioOutputSelectorControl_Adaptor *)cls)->cb_outputDescription_c2025_0 = cb;
}


// exposed int QAudioOutputSelectorControl::receivers(const char *signal)

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
  ret.write<int > ((int)((QAudioOutputSelectorControl_Adaptor *)cls)->fp_QAudioOutputSelectorControl_receivers_c1731 (arg1));
}


// exposed QObject *QAudioOutputSelectorControl::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QAudioOutputSelectorControl_Adaptor *)cls)->fp_QAudioOutputSelectorControl_sender_c0 ());
}


// exposed int QAudioOutputSelectorControl::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAudioOutputSelectorControl_Adaptor *)cls)->fp_QAudioOutputSelectorControl_senderSignalIndex_c0 ());
}


// void QAudioOutputSelectorControl::setActiveOutput(const QString &name)

static void _init_cbs_setActiveOutput_2025_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setActiveOutput_2025_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioOutputSelectorControl_Adaptor *)cls)->cbs_setActiveOutput_2025_0 (arg1);
}

static void _set_callback_cbs_setActiveOutput_2025_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioOutputSelectorControl_Adaptor *)cls)->cb_setActiveOutput_2025_0 = cb;
}


// void QAudioOutputSelectorControl::timerEvent(QTimerEvent *)

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
  ((QAudioOutputSelectorControl_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioOutputSelectorControl_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QAudioOutputSelectorControl> &qtdecl_QAudioOutputSelectorControl ();

static gsi::Methods methods_QAudioOutputSelectorControl_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("activeOutput", "@hide", true, &_init_cbs_activeOutput_c0_0, &_call_cbs_activeOutput_c0_0);
  methods += new qt_gsi::GenericMethod ("activeOutput", "@brief Virtual method QString QAudioOutputSelectorControl::activeOutput()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_activeOutput_c0_0, &_call_cbs_activeOutput_c0_0, &_set_callback_cbs_activeOutput_c0_0);
  methods += new qt_gsi::GenericMethod ("emit_activeOutputChanged", "@brief Emitter for signal void QAudioOutputSelectorControl::activeOutputChanged(const QString &name)\nCall this method to emit this signal.", false, &_init_emitter_activeOutputChanged_2025, &_call_emitter_activeOutputChanged_2025);
  methods += new qt_gsi::GenericMethod ("availableOutputs", "@hide", true, &_init_cbs_availableOutputs_c0_0, &_call_cbs_availableOutputs_c0_0);
  methods += new qt_gsi::GenericMethod ("availableOutputs", "@brief Virtual method QList<QString> QAudioOutputSelectorControl::availableOutputs()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_availableOutputs_c0_0, &_call_cbs_availableOutputs_c0_0, &_set_callback_cbs_availableOutputs_c0_0);
  methods += new qt_gsi::GenericMethod ("emit_availableOutputsChanged", "@brief Emitter for signal void QAudioOutputSelectorControl::availableOutputsChanged()\nCall this method to emit this signal.", false, &_init_emitter_availableOutputsChanged_0, &_call_emitter_availableOutputsChanged_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QAudioOutputSelectorControl::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QAudioOutputSelectorControl::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("defaultOutput", "@hide", true, &_init_cbs_defaultOutput_c0_0, &_call_cbs_defaultOutput_c0_0);
  methods += new qt_gsi::GenericMethod ("defaultOutput", "@brief Virtual method QString QAudioOutputSelectorControl::defaultOutput()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_defaultOutput_c0_0, &_call_cbs_defaultOutput_c0_0, &_set_callback_cbs_defaultOutput_c0_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QAudioOutputSelectorControl::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QAudioOutputSelectorControl::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QAudioOutputSelectorControl::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QAudioOutputSelectorControl::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QAudioOutputSelectorControl::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("outputDescription", "@hide", true, &_init_cbs_outputDescription_c2025_0, &_call_cbs_outputDescription_c2025_0);
  methods += new qt_gsi::GenericMethod ("outputDescription", "@brief Virtual method QString QAudioOutputSelectorControl::outputDescription(const QString &name)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_outputDescription_c2025_0, &_call_cbs_outputDescription_c2025_0, &_set_callback_cbs_outputDescription_c2025_0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QAudioOutputSelectorControl::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QAudioOutputSelectorControl::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QAudioOutputSelectorControl::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("setActiveOutput", "@hide", false, &_init_cbs_setActiveOutput_2025_0, &_call_cbs_setActiveOutput_2025_0);
  methods += new qt_gsi::GenericMethod ("setActiveOutput", "@brief Virtual method void QAudioOutputSelectorControl::setActiveOutput(const QString &name)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setActiveOutput_2025_0, &_call_cbs_setActiveOutput_2025_0, &_set_callback_cbs_setActiveOutput_2025_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QAudioOutputSelectorControl::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QAudioOutputSelectorControl_Adaptor> decl_QAudioOutputSelectorControl_Adaptor (qtdecl_QAudioOutputSelectorControl (), "QAudioOutputSelectorControl",
  methods_QAudioOutputSelectorControl_Adaptor (),
  "@qt\n@brief Binding of QAudioOutputSelectorControl");

}

