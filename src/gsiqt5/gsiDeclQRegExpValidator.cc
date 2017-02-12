
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
*  @file gsiDeclQRegExpValidator.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QRegExpValidator>
#include <QChildEvent>
#include <QEvent>
#include <QLocale>
#include <QMetaMethod>
#include <QObject>
#include <QRegExp>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QRegExpValidator

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QRegExpValidator::staticMetaObject);
}


// const QRegExp &QRegExpValidator::regExp()


static void _init_f_regExp_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QRegExp & > ();
}

static void _call_f_regExp_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QRegExp & > ((const QRegExp &)((QRegExpValidator *)cls)->regExp ());
}


// void QRegExpValidator::setRegExp(const QRegExp &rx)


static void _init_f_setRegExp_1981 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rx");
  decl->add_arg<const QRegExp & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setRegExp_1981 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegExp &arg1 = args.read<const QRegExp & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QRegExpValidator *)cls)->setRegExp (arg1);
}


// (QString &, int &) const


static void _init_f_validate_c2171 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("input");
  decl->add_arg<QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("pos");
  decl->add_arg<int & > (argspec_1);
  decl->set_return<qt_gsi::Converter<QValidator::State>::target_type > ();
}

static void _call_f_validate_c2171 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QString &arg1 = args.read<QString & > (heap);
  int &arg2 = args.read<int & > (heap);
  ret.write<qt_gsi::Converter<QValidator::State>::target_type > ((qt_gsi::Converter<QValidator::State>::target_type)qt_gsi::CppToQtAdaptor<QValidator::State>(((QRegExpValidator *)cls)->validate (arg1, arg2)));
}


// static QString QRegExpValidator::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QRegExpValidator::tr (arg1, arg2, arg3));
}


// static QString QRegExpValidator::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QRegExpValidator::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QRegExpValidator () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod (":regExp", "@brief Method const QRegExp &QRegExpValidator::regExp()\n", true, &_init_f_regExp_c0, &_call_f_regExp_c0);
  methods += new qt_gsi::GenericMethod ("setRegExp|regExp=", "@brief Method void QRegExpValidator::setRegExp(const QRegExp &rx)\n", false, &_init_f_setRegExp_1981, &_call_f_setRegExp_1981);
  methods += new qt_gsi::GenericMethod ("validate", "@brief Method (QString &, int &) const\nThis is a reimplementation of QValidator::validate", true, &_init_f_validate_c2171, &_call_f_validate_c2171);
  methods += gsi::qt_signal ("changed()", "changed", "@brief Signal declaration for QRegExpValidator::changed()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QRegExpValidator::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QRegExp & > ("regExpChanged(const QRegExp &)", "regExpChanged", gsi::arg("regExp"), "@brief Signal declaration for QRegExpValidator::regExpChanged(const QRegExp &regExp)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QRegExpValidator::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QRegExpValidator::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QValidator> &qtdecl_QValidator ();

gsi::Class<QRegExpValidator> decl_QRegExpValidator (qtdecl_QValidator (), "QRegExpValidator_Native",
  methods_QRegExpValidator (),
  "@hide\n@alias QRegExpValidator");

GSIQT_PUBLIC gsi::Class<QRegExpValidator> &qtdecl_QRegExpValidator () { return decl_QRegExpValidator; }

}


class QRegExpValidator_Adaptor : public QRegExpValidator, public qt_gsi::QtObjectBase
{
public:

  virtual ~QRegExpValidator_Adaptor();

  //  [adaptor ctor] QRegExpValidator::QRegExpValidator(QObject *parent)
  QRegExpValidator_Adaptor() : QRegExpValidator()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QRegExpValidator::QRegExpValidator(QObject *parent)
  QRegExpValidator_Adaptor(QObject *parent) : QRegExpValidator(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QRegExpValidator::QRegExpValidator(const QRegExp &rx, QObject *parent)
  QRegExpValidator_Adaptor(const QRegExp &rx) : QRegExpValidator(rx)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QRegExpValidator::QRegExpValidator(const QRegExp &rx, QObject *parent)
  QRegExpValidator_Adaptor(const QRegExp &rx, QObject *parent) : QRegExpValidator(rx, parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QRegExpValidator::isSignalConnected(const QMetaMethod &signal)
  bool fp_QRegExpValidator_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QRegExpValidator::isSignalConnected(signal);
  }

  //  [expose] int QRegExpValidator::receivers(const char *signal)
  int fp_QRegExpValidator_receivers_c1731 (const char *signal) const {
    return QRegExpValidator::receivers(signal);
  }

  //  [expose] QObject *QRegExpValidator::sender()
  QObject * fp_QRegExpValidator_sender_c0 () const {
    return QRegExpValidator::sender();
  }

  //  [expose] int QRegExpValidator::senderSignalIndex()
  int fp_QRegExpValidator_senderSignalIndex_c0 () const {
    return QRegExpValidator::senderSignalIndex();
  }

  //  [emitter impl] void QRegExpValidator::changed()
  void emitter_QRegExpValidator_changed_0()
  {
    emit QRegExpValidator::changed();
  }

  //  [emitter impl] void QRegExpValidator::destroyed(QObject *)
  void emitter_QRegExpValidator_destroyed_1302(QObject *arg1)
  {
    emit QRegExpValidator::destroyed(arg1);
  }

  //  [adaptor impl] bool QRegExpValidator::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QRegExpValidator::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QRegExpValidator_Adaptor, bool, QEvent *>(&QRegExpValidator_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QRegExpValidator::event(arg1);
    }
  }

  //  [adaptor impl] bool QRegExpValidator::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QRegExpValidator::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QRegExpValidator_Adaptor, bool, QObject *, QEvent *>(&QRegExpValidator_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QRegExpValidator::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] void QRegExpValidator::fixup(QString &)
  void cbs_fixup_c1330_0(QString &arg1) const
  {
    QRegExpValidator::fixup(arg1);
  }

  virtual void fixup(QString &arg1) const
  {
    if (cb_fixup_c1330_0.can_issue()) {
      cb_fixup_c1330_0.issue<QRegExpValidator_Adaptor, QString &>(&QRegExpValidator_Adaptor::cbs_fixup_c1330_0, arg1);
    } else {
      QRegExpValidator::fixup(arg1);
    }
  }

  //  [emitter impl] void QRegExpValidator::regExpChanged(const QRegExp &regExp)
  void emitter_QRegExpValidator_regExpChanged_1981(const QRegExp &regExp)
  {
    emit QRegExpValidator::regExpChanged(regExp);
  }

  //  [adaptor impl] QValidator::State QRegExpValidator::validate(QString &input, int &pos)
  qt_gsi::Converter<QValidator::State>::target_type cbs_validate_c2171_0(QString &input, int &pos) const
  {
    return qt_gsi::CppToQtAdaptor<QValidator::State>(QRegExpValidator::validate(input, pos));
  }

  virtual QValidator::State validate(QString &input, int &pos) const
  {
    if (cb_validate_c2171_0.can_issue()) {
      return qt_gsi::QtToCppAdaptor<QValidator::State>(cb_validate_c2171_0.issue<QRegExpValidator_Adaptor, qt_gsi::Converter<QValidator::State>::target_type, QString &, int &>(&QRegExpValidator_Adaptor::cbs_validate_c2171_0, input, pos)).cref();
    } else {
      return QRegExpValidator::validate(input, pos);
    }
  }

  //  [adaptor impl] void QRegExpValidator::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QRegExpValidator::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QRegExpValidator_Adaptor, QChildEvent *>(&QRegExpValidator_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QRegExpValidator::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QRegExpValidator::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QRegExpValidator::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QRegExpValidator_Adaptor, QEvent *>(&QRegExpValidator_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QRegExpValidator::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QRegExpValidator::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QRegExpValidator::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QRegExpValidator_Adaptor, const QMetaMethod &>(&QRegExpValidator_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QRegExpValidator::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QRegExpValidator::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QRegExpValidator::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QRegExpValidator_Adaptor, QTimerEvent *>(&QRegExpValidator_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QRegExpValidator::timerEvent(arg1);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_fixup_c1330_0;
  gsi::Callback cb_validate_c2171_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QRegExpValidator_Adaptor::~QRegExpValidator_Adaptor() { }

//  Constructor QRegExpValidator::QRegExpValidator(QObject *parent) (adaptor class)

static void _init_ctor_QRegExpValidator_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QRegExpValidator_Adaptor> ();
}

static void _call_ctor_QRegExpValidator_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? args.read<QObject * > (heap) : (QObject *)(0);
  ret.write<QRegExpValidator_Adaptor *> (new QRegExpValidator_Adaptor (arg1));
}


//  Constructor QRegExpValidator::QRegExpValidator(const QRegExp &rx, QObject *parent) (adaptor class)

static void _init_ctor_QRegExpValidator_Adaptor_3175 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rx");
  decl->add_arg<const QRegExp & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_1);
  decl->set_return_new<QRegExpValidator_Adaptor> ();
}

static void _call_ctor_QRegExpValidator_Adaptor_3175 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegExp &arg1 = args.read<const QRegExp & > (heap);
  QObject *arg2 = args ? args.read<QObject * > (heap) : (QObject *)(0);
  ret.write<QRegExpValidator_Adaptor *> (new QRegExpValidator_Adaptor (arg1, arg2));
}


// emitter void QRegExpValidator::changed()

static void _init_emitter_changed_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_emitter_changed_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ((QRegExpValidator_Adaptor *)cls)->emitter_QRegExpValidator_changed_0 ();
}


// void QRegExpValidator::childEvent(QChildEvent *)

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
  ((QRegExpValidator_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QRegExpValidator_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QRegExpValidator::customEvent(QEvent *)

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
  ((QRegExpValidator_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QRegExpValidator_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QRegExpValidator::destroyed(QObject *)

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
  ((QRegExpValidator_Adaptor *)cls)->emitter_QRegExpValidator_destroyed_1302 (arg1);
}


// void QRegExpValidator::disconnectNotify(const QMetaMethod &signal)

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
  ((QRegExpValidator_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QRegExpValidator_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QRegExpValidator::event(QEvent *)

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
  ret.write<bool > ((bool)((QRegExpValidator_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QRegExpValidator_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QRegExpValidator::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QRegExpValidator_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QRegExpValidator_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// void QRegExpValidator::fixup(QString &)

static void _init_cbs_fixup_c1330_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_fixup_c1330_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QString &arg1 = args.read<QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QRegExpValidator_Adaptor *)cls)->cbs_fixup_c1330_0 (arg1);
}

static void _set_callback_cbs_fixup_c1330_0 (void *cls, const gsi::Callback &cb)
{
  ((QRegExpValidator_Adaptor *)cls)->cb_fixup_c1330_0 = cb;
}


// exposed bool QRegExpValidator::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QRegExpValidator_Adaptor *)cls)->fp_QRegExpValidator_isSignalConnected_c2394 (arg1));
}


// exposed int QRegExpValidator::receivers(const char *signal)

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
  ret.write<int > ((int)((QRegExpValidator_Adaptor *)cls)->fp_QRegExpValidator_receivers_c1731 (arg1));
}


// emitter void QRegExpValidator::regExpChanged(const QRegExp &regExp)

static void _init_emitter_regExpChanged_1981 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("regExp");
  decl->add_arg<const QRegExp & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_regExpChanged_1981 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegExp &arg1 = args.read<const QRegExp & > (heap);
  ((QRegExpValidator_Adaptor *)cls)->emitter_QRegExpValidator_regExpChanged_1981 (arg1);
}


// exposed QObject *QRegExpValidator::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QRegExpValidator_Adaptor *)cls)->fp_QRegExpValidator_sender_c0 ());
}


// exposed int QRegExpValidator::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QRegExpValidator_Adaptor *)cls)->fp_QRegExpValidator_senderSignalIndex_c0 ());
}


// void QRegExpValidator::timerEvent(QTimerEvent *)

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
  ((QRegExpValidator_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QRegExpValidator_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


// QValidator::State QRegExpValidator::validate(QString &input, int &pos)

static void _init_cbs_validate_c2171_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("input");
  decl->add_arg<QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("pos");
  decl->add_arg<int & > (argspec_1);
  decl->set_return<qt_gsi::Converter<QValidator::State>::target_type > ();
}

static void _call_cbs_validate_c2171_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QString &arg1 = args.read<QString & > (heap);
  int &arg2 = args.read<int & > (heap);
  ret.write<qt_gsi::Converter<QValidator::State>::target_type > ((qt_gsi::Converter<QValidator::State>::target_type)((QRegExpValidator_Adaptor *)cls)->cbs_validate_c2171_0 (arg1, arg2));
}

static void _set_callback_cbs_validate_c2171_0 (void *cls, const gsi::Callback &cb)
{
  ((QRegExpValidator_Adaptor *)cls)->cb_validate_c2171_0 = cb;
}


namespace gsi
{

gsi::Class<QRegExpValidator> &qtdecl_QRegExpValidator ();

static gsi::Methods methods_QRegExpValidator_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QRegExpValidator::QRegExpValidator(QObject *parent)\nThis method creates an object of class QRegExpValidator.", &_init_ctor_QRegExpValidator_Adaptor_1302, &_call_ctor_QRegExpValidator_Adaptor_1302);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QRegExpValidator::QRegExpValidator(const QRegExp &rx, QObject *parent)\nThis method creates an object of class QRegExpValidator.", &_init_ctor_QRegExpValidator_Adaptor_3175, &_call_ctor_QRegExpValidator_Adaptor_3175);
  methods += new qt_gsi::GenericMethod ("emit_changed", "@brief Emitter for signal void QRegExpValidator::changed()\nCall this method to emit this signal.", false, &_init_emitter_changed_0, &_call_emitter_changed_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QRegExpValidator::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QRegExpValidator::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QRegExpValidator::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QRegExpValidator::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QRegExpValidator::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QRegExpValidator::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("fixup", "@hide", true, &_init_cbs_fixup_c1330_0, &_call_cbs_fixup_c1330_0);
  methods += new qt_gsi::GenericMethod ("fixup", "@brief Virtual method void QRegExpValidator::fixup(QString &)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_fixup_c1330_0, &_call_cbs_fixup_c1330_0, &_set_callback_cbs_fixup_c1330_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QRegExpValidator::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QRegExpValidator::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("emit_regExpChanged", "@brief Emitter for signal void QRegExpValidator::regExpChanged(const QRegExp &regExp)\nCall this method to emit this signal.", false, &_init_emitter_regExpChanged_1981, &_call_emitter_regExpChanged_1981);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QRegExpValidator::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QRegExpValidator::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QRegExpValidator::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("validate", "@hide", true, &_init_cbs_validate_c2171_0, &_call_cbs_validate_c2171_0);
  methods += new qt_gsi::GenericMethod ("validate", "@brief Virtual method QValidator::State QRegExpValidator::validate(QString &input, int &pos)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_validate_c2171_0, &_call_cbs_validate_c2171_0, &_set_callback_cbs_validate_c2171_0);
  return methods;
}

gsi::Class<QRegExpValidator_Adaptor> decl_QRegExpValidator_Adaptor (qtdecl_QRegExpValidator (), "QRegExpValidator",
  methods_QRegExpValidator_Adaptor (),
  "@qt\n@brief Binding of QRegExpValidator");

}

