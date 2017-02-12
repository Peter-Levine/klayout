
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
*  @file gsiDeclQPauseAnimation.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QPauseAnimation>
#include <QAnimationGroup>
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
// class QPauseAnimation

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QPauseAnimation::staticMetaObject);
}


// () const


static void _init_f_duration_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_duration_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QPauseAnimation *)cls)->duration ());
}


// void QPauseAnimation::setDuration(int msecs)


static void _init_f_setDuration_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("msecs");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDuration_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPauseAnimation *)cls)->setDuration (arg1);
}


// static QString QPauseAnimation::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QPauseAnimation::tr (arg1, arg2, arg3));
}


// static QString QPauseAnimation::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QPauseAnimation::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QPauseAnimation () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod (":duration", "@brief Method () const\nThis is a reimplementation of QAbstractAnimation::duration", true, &_init_f_duration_c0, &_call_f_duration_c0);
  methods += new qt_gsi::GenericMethod ("setDuration|duration=", "@brief Method void QPauseAnimation::setDuration(int msecs)\n", false, &_init_f_setDuration_767, &_call_f_setDuration_767);
  methods += gsi::qt_signal<int > ("currentLoopChanged(int)", "currentLoopChanged", gsi::arg("currentLoop"), "@brief Signal declaration for QPauseAnimation::currentLoopChanged(int currentLoop)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QPauseAnimation::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const qt_gsi::Converter<QAbstractAnimation::Direction>::target_type & > ("directionChanged(QAbstractAnimation::Direction)", "directionChanged", gsi::arg("arg1"), "@brief Signal declaration for QPauseAnimation::directionChanged(QAbstractAnimation::Direction)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("finished()", "finished", "@brief Signal declaration for QPauseAnimation::finished()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const qt_gsi::Converter<QAbstractAnimation::State>::target_type &, const qt_gsi::Converter<QAbstractAnimation::State>::target_type & > ("stateChanged(QAbstractAnimation::State, QAbstractAnimation::State)", "stateChanged", gsi::arg("newState"), gsi::arg("oldState"), "@brief Signal declaration for QPauseAnimation::stateChanged(QAbstractAnimation::State newState, QAbstractAnimation::State oldState)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QPauseAnimation::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QPauseAnimation::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QAbstractAnimation> &qtdecl_QAbstractAnimation ();

gsi::Class<QPauseAnimation> decl_QPauseAnimation (qtdecl_QAbstractAnimation (), "QPauseAnimation_Native",
  methods_QPauseAnimation (),
  "@hide\n@alias QPauseAnimation");

GSIQT_PUBLIC gsi::Class<QPauseAnimation> &qtdecl_QPauseAnimation () { return decl_QPauseAnimation; }

}


class QPauseAnimation_Adaptor : public QPauseAnimation, public qt_gsi::QtObjectBase
{
public:

  virtual ~QPauseAnimation_Adaptor();

  //  [adaptor ctor] QPauseAnimation::QPauseAnimation(QObject *parent)
  QPauseAnimation_Adaptor() : QPauseAnimation()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QPauseAnimation::QPauseAnimation(QObject *parent)
  QPauseAnimation_Adaptor(QObject *parent) : QPauseAnimation(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QPauseAnimation::QPauseAnimation(int msecs, QObject *parent)
  QPauseAnimation_Adaptor(int msecs) : QPauseAnimation(msecs)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QPauseAnimation::QPauseAnimation(int msecs, QObject *parent)
  QPauseAnimation_Adaptor(int msecs, QObject *parent) : QPauseAnimation(msecs, parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QPauseAnimation::isSignalConnected(const QMetaMethod &signal)
  bool fp_QPauseAnimation_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QPauseAnimation::isSignalConnected(signal);
  }

  //  [expose] int QPauseAnimation::receivers(const char *signal)
  int fp_QPauseAnimation_receivers_c1731 (const char *signal) const {
    return QPauseAnimation::receivers(signal);
  }

  //  [expose] QObject *QPauseAnimation::sender()
  QObject * fp_QPauseAnimation_sender_c0 () const {
    return QPauseAnimation::sender();
  }

  //  [expose] int QPauseAnimation::senderSignalIndex()
  int fp_QPauseAnimation_senderSignalIndex_c0 () const {
    return QPauseAnimation::senderSignalIndex();
  }

  //  [emitter impl] void QPauseAnimation::currentLoopChanged(int currentLoop)
  void emitter_QPauseAnimation_currentLoopChanged_767(int currentLoop)
  {
    emit QPauseAnimation::currentLoopChanged(currentLoop);
  }

  //  [emitter impl] void QPauseAnimation::destroyed(QObject *)
  void emitter_QPauseAnimation_destroyed_1302(QObject *arg1)
  {
    emit QPauseAnimation::destroyed(arg1);
  }

  //  [emitter impl] void QPauseAnimation::directionChanged(QAbstractAnimation::Direction)
  void emitter_QPauseAnimation_directionChanged_3310(QAbstractAnimation::Direction arg1)
  {
    emit QPauseAnimation::directionChanged(arg1);
  }

  //  [adaptor impl] int QPauseAnimation::duration()
  int cbs_duration_c0_0() const
  {
    return QPauseAnimation::duration();
  }

  virtual int duration() const
  {
    if (cb_duration_c0_0.can_issue()) {
      return cb_duration_c0_0.issue<QPauseAnimation_Adaptor, int>(&QPauseAnimation_Adaptor::cbs_duration_c0_0);
    } else {
      return QPauseAnimation::duration();
    }
  }

  //  [adaptor impl] bool QPauseAnimation::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QPauseAnimation::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QPauseAnimation_Adaptor, bool, QObject *, QEvent *>(&QPauseAnimation_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QPauseAnimation::eventFilter(arg1, arg2);
    }
  }

  //  [emitter impl] void QPauseAnimation::finished()
  void emitter_QPauseAnimation_finished_0()
  {
    emit QPauseAnimation::finished();
  }

  //  [emitter impl] void QPauseAnimation::stateChanged(QAbstractAnimation::State newState, QAbstractAnimation::State oldState)
  void emitter_QPauseAnimation_stateChanged_5680(QAbstractAnimation::State newState, QAbstractAnimation::State oldState)
  {
    emit QPauseAnimation::stateChanged(newState, oldState);
  }

  //  [adaptor impl] void QPauseAnimation::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QPauseAnimation::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QPauseAnimation_Adaptor, QChildEvent *>(&QPauseAnimation_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QPauseAnimation::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QPauseAnimation::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QPauseAnimation::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QPauseAnimation_Adaptor, QEvent *>(&QPauseAnimation_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QPauseAnimation::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QPauseAnimation::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QPauseAnimation::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QPauseAnimation_Adaptor, const QMetaMethod &>(&QPauseAnimation_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QPauseAnimation::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] bool QPauseAnimation::event(QEvent *e)
  bool cbs_event_1217_0(QEvent *e)
  {
    return QPauseAnimation::event(e);
  }

  virtual bool event(QEvent *e)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QPauseAnimation_Adaptor, bool, QEvent *>(&QPauseAnimation_Adaptor::cbs_event_1217_0, e);
    } else {
      return QPauseAnimation::event(e);
    }
  }

  //  [adaptor impl] void QPauseAnimation::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QPauseAnimation::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QPauseAnimation_Adaptor, QTimerEvent *>(&QPauseAnimation_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QPauseAnimation::timerEvent(arg1);
    }
  }

  //  [adaptor impl] void QPauseAnimation::updateCurrentTime(int)
  void cbs_updateCurrentTime_767_0(int arg1)
  {
    QPauseAnimation::updateCurrentTime(arg1);
  }

  virtual void updateCurrentTime(int arg1)
  {
    if (cb_updateCurrentTime_767_0.can_issue()) {
      cb_updateCurrentTime_767_0.issue<QPauseAnimation_Adaptor, int>(&QPauseAnimation_Adaptor::cbs_updateCurrentTime_767_0, arg1);
    } else {
      QPauseAnimation::updateCurrentTime(arg1);
    }
  }

  //  [adaptor impl] void QPauseAnimation::updateDirection(QAbstractAnimation::Direction direction)
  void cbs_updateDirection_3310_0(const qt_gsi::Converter<QAbstractAnimation::Direction>::target_type & direction)
  {
    QPauseAnimation::updateDirection(qt_gsi::QtToCppAdaptor<QAbstractAnimation::Direction>(direction).cref());
  }

  virtual void updateDirection(QAbstractAnimation::Direction direction)
  {
    if (cb_updateDirection_3310_0.can_issue()) {
      cb_updateDirection_3310_0.issue<QPauseAnimation_Adaptor, const qt_gsi::Converter<QAbstractAnimation::Direction>::target_type &>(&QPauseAnimation_Adaptor::cbs_updateDirection_3310_0, qt_gsi::CppToQtAdaptor<QAbstractAnimation::Direction>(direction));
    } else {
      QPauseAnimation::updateDirection(direction);
    }
  }

  //  [adaptor impl] void QPauseAnimation::updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState)
  void cbs_updateState_5680_0(const qt_gsi::Converter<QAbstractAnimation::State>::target_type & newState, const qt_gsi::Converter<QAbstractAnimation::State>::target_type & oldState)
  {
    QPauseAnimation::updateState(qt_gsi::QtToCppAdaptor<QAbstractAnimation::State>(newState).cref(), qt_gsi::QtToCppAdaptor<QAbstractAnimation::State>(oldState).cref());
  }

  virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState)
  {
    if (cb_updateState_5680_0.can_issue()) {
      cb_updateState_5680_0.issue<QPauseAnimation_Adaptor, const qt_gsi::Converter<QAbstractAnimation::State>::target_type &, const qt_gsi::Converter<QAbstractAnimation::State>::target_type &>(&QPauseAnimation_Adaptor::cbs_updateState_5680_0, qt_gsi::CppToQtAdaptor<QAbstractAnimation::State>(newState), qt_gsi::CppToQtAdaptor<QAbstractAnimation::State>(oldState));
    } else {
      QPauseAnimation::updateState(newState, oldState);
    }
  }

  gsi::Callback cb_duration_c0_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_timerEvent_1730_0;
  gsi::Callback cb_updateCurrentTime_767_0;
  gsi::Callback cb_updateDirection_3310_0;
  gsi::Callback cb_updateState_5680_0;
};

QPauseAnimation_Adaptor::~QPauseAnimation_Adaptor() { }

//  Constructor QPauseAnimation::QPauseAnimation(QObject *parent) (adaptor class)

static void _init_ctor_QPauseAnimation_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QPauseAnimation_Adaptor> ();
}

static void _call_ctor_QPauseAnimation_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? args.read<QObject * > (heap) : (QObject *)(0);
  ret.write<QPauseAnimation_Adaptor *> (new QPauseAnimation_Adaptor (arg1));
}


//  Constructor QPauseAnimation::QPauseAnimation(int msecs, QObject *parent) (adaptor class)

static void _init_ctor_QPauseAnimation_Adaptor_1961 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("msecs");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_1);
  decl->set_return_new<QPauseAnimation_Adaptor> ();
}

static void _call_ctor_QPauseAnimation_Adaptor_1961 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  QObject *arg2 = args ? args.read<QObject * > (heap) : (QObject *)(0);
  ret.write<QPauseAnimation_Adaptor *> (new QPauseAnimation_Adaptor (arg1, arg2));
}


// void QPauseAnimation::childEvent(QChildEvent *)

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
  ((QPauseAnimation_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QPauseAnimation_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// emitter void QPauseAnimation::currentLoopChanged(int currentLoop)

static void _init_emitter_currentLoopChanged_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("currentLoop");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_currentLoopChanged_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ((QPauseAnimation_Adaptor *)cls)->emitter_QPauseAnimation_currentLoopChanged_767 (arg1);
}


// void QPauseAnimation::customEvent(QEvent *)

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
  ((QPauseAnimation_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QPauseAnimation_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QPauseAnimation::destroyed(QObject *)

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
  ((QPauseAnimation_Adaptor *)cls)->emitter_QPauseAnimation_destroyed_1302 (arg1);
}


// emitter void QPauseAnimation::directionChanged(QAbstractAnimation::Direction)

static void _init_emitter_directionChanged_3310 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QAbstractAnimation::Direction>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_directionChanged_3310 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAbstractAnimation::Direction>::target_type & arg1 = args.read<const qt_gsi::Converter<QAbstractAnimation::Direction>::target_type & > (heap);
  ((QPauseAnimation_Adaptor *)cls)->emitter_QPauseAnimation_directionChanged_3310 (arg1);
}


// void QPauseAnimation::disconnectNotify(const QMetaMethod &signal)

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
  ((QPauseAnimation_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QPauseAnimation_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// int QPauseAnimation::duration()

static void _init_cbs_duration_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_cbs_duration_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QPauseAnimation_Adaptor *)cls)->cbs_duration_c0_0 ());
}

static void _set_callback_cbs_duration_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QPauseAnimation_Adaptor *)cls)->cb_duration_c0_0 = cb;
}


// bool QPauseAnimation::event(QEvent *e)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("e");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QPauseAnimation_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QPauseAnimation_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QPauseAnimation::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QPauseAnimation_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QPauseAnimation_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// emitter void QPauseAnimation::finished()

static void _init_emitter_finished_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_emitter_finished_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ((QPauseAnimation_Adaptor *)cls)->emitter_QPauseAnimation_finished_0 ();
}


// exposed bool QPauseAnimation::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QPauseAnimation_Adaptor *)cls)->fp_QPauseAnimation_isSignalConnected_c2394 (arg1));
}


// exposed int QPauseAnimation::receivers(const char *signal)

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
  ret.write<int > ((int)((QPauseAnimation_Adaptor *)cls)->fp_QPauseAnimation_receivers_c1731 (arg1));
}


// exposed QObject *QPauseAnimation::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QPauseAnimation_Adaptor *)cls)->fp_QPauseAnimation_sender_c0 ());
}


// exposed int QPauseAnimation::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QPauseAnimation_Adaptor *)cls)->fp_QPauseAnimation_senderSignalIndex_c0 ());
}


// emitter void QPauseAnimation::stateChanged(QAbstractAnimation::State newState, QAbstractAnimation::State oldState)

static void _init_emitter_stateChanged_5680 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("newState");
  decl->add_arg<const qt_gsi::Converter<QAbstractAnimation::State>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("oldState");
  decl->add_arg<const qt_gsi::Converter<QAbstractAnimation::State>::target_type & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_emitter_stateChanged_5680 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAbstractAnimation::State>::target_type & arg1 = args.read<const qt_gsi::Converter<QAbstractAnimation::State>::target_type & > (heap);
  const qt_gsi::Converter<QAbstractAnimation::State>::target_type & arg2 = args.read<const qt_gsi::Converter<QAbstractAnimation::State>::target_type & > (heap);
  ((QPauseAnimation_Adaptor *)cls)->emitter_QPauseAnimation_stateChanged_5680 (arg1, arg2);
}


// void QPauseAnimation::timerEvent(QTimerEvent *)

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
  ((QPauseAnimation_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QPauseAnimation_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


// void QPauseAnimation::updateCurrentTime(int)

static void _init_cbs_updateCurrentTime_767_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_updateCurrentTime_767_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPauseAnimation_Adaptor *)cls)->cbs_updateCurrentTime_767_0 (arg1);
}

static void _set_callback_cbs_updateCurrentTime_767_0 (void *cls, const gsi::Callback &cb)
{
  ((QPauseAnimation_Adaptor *)cls)->cb_updateCurrentTime_767_0 = cb;
}


// void QPauseAnimation::updateDirection(QAbstractAnimation::Direction direction)

static void _init_cbs_updateDirection_3310_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("direction");
  decl->add_arg<const qt_gsi::Converter<QAbstractAnimation::Direction>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_updateDirection_3310_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAbstractAnimation::Direction>::target_type & arg1 = args.read<const qt_gsi::Converter<QAbstractAnimation::Direction>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPauseAnimation_Adaptor *)cls)->cbs_updateDirection_3310_0 (arg1);
}

static void _set_callback_cbs_updateDirection_3310_0 (void *cls, const gsi::Callback &cb)
{
  ((QPauseAnimation_Adaptor *)cls)->cb_updateDirection_3310_0 = cb;
}


// void QPauseAnimation::updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState)

static void _init_cbs_updateState_5680_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("newState");
  decl->add_arg<const qt_gsi::Converter<QAbstractAnimation::State>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("oldState");
  decl->add_arg<const qt_gsi::Converter<QAbstractAnimation::State>::target_type & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_cbs_updateState_5680_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAbstractAnimation::State>::target_type & arg1 = args.read<const qt_gsi::Converter<QAbstractAnimation::State>::target_type & > (heap);
  const qt_gsi::Converter<QAbstractAnimation::State>::target_type & arg2 = args.read<const qt_gsi::Converter<QAbstractAnimation::State>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPauseAnimation_Adaptor *)cls)->cbs_updateState_5680_0 (arg1, arg2);
}

static void _set_callback_cbs_updateState_5680_0 (void *cls, const gsi::Callback &cb)
{
  ((QPauseAnimation_Adaptor *)cls)->cb_updateState_5680_0 = cb;
}


namespace gsi
{

gsi::Class<QPauseAnimation> &qtdecl_QPauseAnimation ();

static gsi::Methods methods_QPauseAnimation_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPauseAnimation::QPauseAnimation(QObject *parent)\nThis method creates an object of class QPauseAnimation.", &_init_ctor_QPauseAnimation_Adaptor_1302, &_call_ctor_QPauseAnimation_Adaptor_1302);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPauseAnimation::QPauseAnimation(int msecs, QObject *parent)\nThis method creates an object of class QPauseAnimation.", &_init_ctor_QPauseAnimation_Adaptor_1961, &_call_ctor_QPauseAnimation_Adaptor_1961);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QPauseAnimation::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("emit_currentLoopChanged", "@brief Emitter for signal void QPauseAnimation::currentLoopChanged(int currentLoop)\nCall this method to emit this signal.", false, &_init_emitter_currentLoopChanged_767, &_call_emitter_currentLoopChanged_767);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QPauseAnimation::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QPauseAnimation::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("emit_directionChanged", "@brief Emitter for signal void QPauseAnimation::directionChanged(QAbstractAnimation::Direction)\nCall this method to emit this signal.", false, &_init_emitter_directionChanged_3310, &_call_emitter_directionChanged_3310);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QPauseAnimation::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("duration", "@hide", true, &_init_cbs_duration_c0_0, &_call_cbs_duration_c0_0);
  methods += new qt_gsi::GenericMethod ("duration", "@brief Virtual method int QPauseAnimation::duration()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_duration_c0_0, &_call_cbs_duration_c0_0, &_set_callback_cbs_duration_c0_0);
  methods += new qt_gsi::GenericMethod ("*event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("*event", "@brief Virtual method bool QPauseAnimation::event(QEvent *e)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QPauseAnimation::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("emit_finished", "@brief Emitter for signal void QPauseAnimation::finished()\nCall this method to emit this signal.", false, &_init_emitter_finished_0, &_call_emitter_finished_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QPauseAnimation::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QPauseAnimation::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QPauseAnimation::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QPauseAnimation::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("emit_stateChanged", "@brief Emitter for signal void QPauseAnimation::stateChanged(QAbstractAnimation::State newState, QAbstractAnimation::State oldState)\nCall this method to emit this signal.", false, &_init_emitter_stateChanged_5680, &_call_emitter_stateChanged_5680);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QPauseAnimation::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*updateCurrentTime", "@hide", false, &_init_cbs_updateCurrentTime_767_0, &_call_cbs_updateCurrentTime_767_0);
  methods += new qt_gsi::GenericMethod ("*updateCurrentTime", "@brief Virtual method void QPauseAnimation::updateCurrentTime(int)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_updateCurrentTime_767_0, &_call_cbs_updateCurrentTime_767_0, &_set_callback_cbs_updateCurrentTime_767_0);
  methods += new qt_gsi::GenericMethod ("*updateDirection", "@hide", false, &_init_cbs_updateDirection_3310_0, &_call_cbs_updateDirection_3310_0);
  methods += new qt_gsi::GenericMethod ("*updateDirection", "@brief Virtual method void QPauseAnimation::updateDirection(QAbstractAnimation::Direction direction)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_updateDirection_3310_0, &_call_cbs_updateDirection_3310_0, &_set_callback_cbs_updateDirection_3310_0);
  methods += new qt_gsi::GenericMethod ("*updateState", "@hide", false, &_init_cbs_updateState_5680_0, &_call_cbs_updateState_5680_0);
  methods += new qt_gsi::GenericMethod ("*updateState", "@brief Virtual method void QPauseAnimation::updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_updateState_5680_0, &_call_cbs_updateState_5680_0, &_set_callback_cbs_updateState_5680_0);
  return methods;
}

gsi::Class<QPauseAnimation_Adaptor> decl_QPauseAnimation_Adaptor (qtdecl_QPauseAnimation (), "QPauseAnimation",
  methods_QPauseAnimation_Adaptor (),
  "@qt\n@brief Binding of QPauseAnimation");

}

