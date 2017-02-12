
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
*  @file gsiDeclQJsonObject.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QJsonObject>
#include <QJsonValue>
#include <QJsonValueRef>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QJsonObject

//  Constructor QJsonObject::QJsonObject()


static void _init_ctor_QJsonObject_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QJsonObject> ();
}

static void _call_ctor_QJsonObject_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonObject *> (new QJsonObject ());
}


//  Constructor QJsonObject::QJsonObject(const QJsonObject &other)


static void _init_ctor_QJsonObject_2403 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonObject & > (argspec_0);
  decl->set_return_new<QJsonObject> ();
}

static void _call_ctor_QJsonObject_2403 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonObject &arg1 = args.read<const QJsonObject & > (heap);
  ret.write<QJsonObject *> (new QJsonObject (arg1));
}


// QJsonObject::iterator QJsonObject::begin()


static void _init_f_begin_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonObject::iterator > ();
}

static void _call_f_begin_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonObject::iterator > ((QJsonObject::iterator)((QJsonObject *)cls)->begin ());
}


// QJsonObject::const_iterator QJsonObject::begin()


static void _init_f_begin_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonObject::const_iterator > ();
}

static void _call_f_begin_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonObject::const_iterator > ((QJsonObject::const_iterator)((QJsonObject *)cls)->begin ());
}


// QJsonObject::const_iterator QJsonObject::constBegin()


static void _init_f_constBegin_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonObject::const_iterator > ();
}

static void _call_f_constBegin_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonObject::const_iterator > ((QJsonObject::const_iterator)((QJsonObject *)cls)->constBegin ());
}


// QJsonObject::const_iterator QJsonObject::constEnd()


static void _init_f_constEnd_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonObject::const_iterator > ();
}

static void _call_f_constEnd_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonObject::const_iterator > ((QJsonObject::const_iterator)((QJsonObject *)cls)->constEnd ());
}


// QJsonObject::const_iterator QJsonObject::constFind(const QString &key)


static void _init_f_constFind_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QJsonObject::const_iterator > ();
}

static void _call_f_constFind_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QJsonObject::const_iterator > ((QJsonObject::const_iterator)((QJsonObject *)cls)->constFind (arg1));
}


// bool QJsonObject::contains(const QString &key)


static void _init_f_contains_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_contains_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)((QJsonObject *)cls)->contains (arg1));
}


// int QJsonObject::count()


static void _init_f_count_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_count_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QJsonObject *)cls)->count ());
}


// bool QJsonObject::empty()


static void _init_f_empty_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_empty_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QJsonObject *)cls)->empty ());
}


// QJsonObject::iterator QJsonObject::end()


static void _init_f_end_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonObject::iterator > ();
}

static void _call_f_end_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonObject::iterator > ((QJsonObject::iterator)((QJsonObject *)cls)->end ());
}


// QJsonObject::const_iterator QJsonObject::end()


static void _init_f_end_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonObject::const_iterator > ();
}

static void _call_f_end_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonObject::const_iterator > ((QJsonObject::const_iterator)((QJsonObject *)cls)->end ());
}


// QJsonObject::iterator QJsonObject::erase(QJsonObject::iterator it)


static void _init_f_erase_2516 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("it");
  decl->add_arg<QJsonObject::iterator > (argspec_0);
  decl->set_return<QJsonObject::iterator > ();
}

static void _call_f_erase_2516 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QJsonObject::iterator arg1 = args.read<QJsonObject::iterator > (heap);
  ret.write<QJsonObject::iterator > ((QJsonObject::iterator)((QJsonObject *)cls)->erase (arg1));
}


// QJsonObject::iterator QJsonObject::find(const QString &key)


static void _init_f_find_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QJsonObject::iterator > ();
}

static void _call_f_find_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QJsonObject::iterator > ((QJsonObject::iterator)((QJsonObject *)cls)->find (arg1));
}


// QJsonObject::const_iterator QJsonObject::find(const QString &key)


static void _init_f_find_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QJsonObject::const_iterator > ();
}

static void _call_f_find_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QJsonObject::const_iterator > ((QJsonObject::const_iterator)((QJsonObject *)cls)->find (arg1));
}


// QJsonObject::iterator QJsonObject::insert(const QString &key, const QJsonValue &value)


static void _init_f_insert_4230 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QJsonValue & > (argspec_1);
  decl->set_return<QJsonObject::iterator > ();
}

static void _call_f_insert_4230 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QJsonValue &arg2 = args.read<const QJsonValue & > (heap);
  ret.write<QJsonObject::iterator > ((QJsonObject::iterator)((QJsonObject *)cls)->insert (arg1, arg2));
}


// bool QJsonObject::isEmpty()


static void _init_f_isEmpty_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isEmpty_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QJsonObject *)cls)->isEmpty ());
}


// QStringList QJsonObject::keys()


static void _init_f_keys_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_keys_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QJsonObject *)cls)->keys ());
}


// int QJsonObject::length()


static void _init_f_length_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_length_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QJsonObject *)cls)->length ());
}


// QJsonObject &QJsonObject::operator =(const QJsonObject &other)


static void _init_f_operator_eq__2403 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonObject & > (argspec_0);
  decl->set_return<QJsonObject & > ();
}

static void _call_f_operator_eq__2403 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonObject &arg1 = args.read<const QJsonObject & > (heap);
  ret.write<QJsonObject & > ((QJsonObject &)((QJsonObject *)cls)->operator = (arg1));
}


// bool QJsonObject::operator!=(const QJsonObject &other)


static void _init_f_operator_excl__eq__c2403 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonObject & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2403 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonObject &arg1 = args.read<const QJsonObject & > (heap);
  ret.write<bool > ((bool)((QJsonObject *)cls)->operator!= (arg1));
}


// bool QJsonObject::operator==(const QJsonObject &other)


static void _init_f_operator_eq__eq__c2403 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonObject & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2403 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonObject &arg1 = args.read<const QJsonObject & > (heap);
  ret.write<bool > ((bool)((QJsonObject *)cls)->operator== (arg1));
}


// QJsonValue QJsonObject::operator[](const QString &key)


static void _init_f_operator_index__c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QJsonValue > ();
}

static void _call_f_operator_index__c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QJsonValue > ((QJsonValue)((QJsonObject *)cls)->operator[] (arg1));
}


// QJsonValueRef QJsonObject::operator[](const QString &key)


static void _init_f_operator_index__2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QJsonValueRef > ();
}

static void _call_f_operator_index__2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QJsonValueRef > ((QJsonValueRef)((QJsonObject *)cls)->operator[] (arg1));
}


// void QJsonObject::remove(const QString &key)


static void _init_f_remove_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_remove_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QJsonObject *)cls)->remove (arg1);
}


// int QJsonObject::size()


static void _init_f_size_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_size_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QJsonObject *)cls)->size ());
}


// QJsonValue QJsonObject::take(const QString &key)


static void _init_f_take_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QJsonValue > ();
}

static void _call_f_take_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QJsonValue > ((QJsonValue)((QJsonObject *)cls)->take (arg1));
}


// QHash<QString, QVariant> QJsonObject::toVariantHash()


static void _init_f_toVariantHash_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QHash<QString, QVariant> > ();
}

static void _call_f_toVariantHash_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QHash<QString, QVariant> > ((QHash<QString, QVariant>)((QJsonObject *)cls)->toVariantHash ());
}


// QMap<QString, QVariant> QJsonObject::toVariantMap()


static void _init_f_toVariantMap_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QMap<QString, QVariant> > ();
}

static void _call_f_toVariantMap_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMap<QString, QVariant> > ((QMap<QString, QVariant>)((QJsonObject *)cls)->toVariantMap ());
}


// QJsonValue QJsonObject::value(const QString &key)


static void _init_f_value_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QJsonValue > ();
}

static void _call_f_value_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QJsonValue > ((QJsonValue)((QJsonObject *)cls)->value (arg1));
}


// static QJsonObject QJsonObject::fromVariantHash(const QHash<QString, QVariant> &map)


static void _init_f_fromVariantHash_3610 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("map");
  decl->add_arg<const QHash<QString, QVariant> & > (argspec_0);
  decl->set_return<QJsonObject > ();
}

static void _call_f_fromVariantHash_3610 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QHash<QString, QVariant> &arg1 = args.read<const QHash<QString, QVariant> & > (heap);
  ret.write<QJsonObject > ((QJsonObject)QJsonObject::fromVariantHash (arg1));
}


// static QJsonObject QJsonObject::fromVariantMap(const QMap<QString, QVariant> &map)


static void _init_f_fromVariantMap_3508 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("map");
  decl->add_arg<const QMap<QString, QVariant> & > (argspec_0);
  decl->set_return<QJsonObject > ();
}

static void _call_f_fromVariantMap_3508 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMap<QString, QVariant> &arg1 = args.read<const QMap<QString, QVariant> & > (heap);
  ret.write<QJsonObject > ((QJsonObject)QJsonObject::fromVariantMap (arg1));
}



namespace gsi
{

static gsi::Methods methods_QJsonObject () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QJsonObject::QJsonObject()\nThis method creates an object of class QJsonObject.", &_init_ctor_QJsonObject_0, &_call_ctor_QJsonObject_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QJsonObject::QJsonObject(const QJsonObject &other)\nThis method creates an object of class QJsonObject.", &_init_ctor_QJsonObject_2403, &_call_ctor_QJsonObject_2403);
  methods += new qt_gsi::GenericMethod ("begin", "@brief Method QJsonObject::iterator QJsonObject::begin()\n", false, &_init_f_begin_0, &_call_f_begin_0);
  methods += new qt_gsi::GenericMethod ("begin", "@brief Method QJsonObject::const_iterator QJsonObject::begin()\n", true, &_init_f_begin_c0, &_call_f_begin_c0);
  methods += new qt_gsi::GenericMethod ("constBegin", "@brief Method QJsonObject::const_iterator QJsonObject::constBegin()\n", true, &_init_f_constBegin_c0, &_call_f_constBegin_c0);
  methods += new qt_gsi::GenericMethod ("constEnd", "@brief Method QJsonObject::const_iterator QJsonObject::constEnd()\n", true, &_init_f_constEnd_c0, &_call_f_constEnd_c0);
  methods += new qt_gsi::GenericMethod ("constFind", "@brief Method QJsonObject::const_iterator QJsonObject::constFind(const QString &key)\n", true, &_init_f_constFind_c2025, &_call_f_constFind_c2025);
  methods += new qt_gsi::GenericMethod ("contains", "@brief Method bool QJsonObject::contains(const QString &key)\n", true, &_init_f_contains_c2025, &_call_f_contains_c2025);
  methods += new qt_gsi::GenericMethod ("count", "@brief Method int QJsonObject::count()\n", true, &_init_f_count_c0, &_call_f_count_c0);
  methods += new qt_gsi::GenericMethod ("empty", "@brief Method bool QJsonObject::empty()\n", true, &_init_f_empty_c0, &_call_f_empty_c0);
  methods += new qt_gsi::GenericMethod ("end", "@brief Method QJsonObject::iterator QJsonObject::end()\n", false, &_init_f_end_0, &_call_f_end_0);
  methods += new qt_gsi::GenericMethod ("end", "@brief Method QJsonObject::const_iterator QJsonObject::end()\n", true, &_init_f_end_c0, &_call_f_end_c0);
  methods += new qt_gsi::GenericMethod ("erase", "@brief Method QJsonObject::iterator QJsonObject::erase(QJsonObject::iterator it)\n", false, &_init_f_erase_2516, &_call_f_erase_2516);
  methods += new qt_gsi::GenericMethod ("find", "@brief Method QJsonObject::iterator QJsonObject::find(const QString &key)\n", false, &_init_f_find_2025, &_call_f_find_2025);
  methods += new qt_gsi::GenericMethod ("find", "@brief Method QJsonObject::const_iterator QJsonObject::find(const QString &key)\n", true, &_init_f_find_c2025, &_call_f_find_c2025);
  methods += new qt_gsi::GenericMethod ("insert", "@brief Method QJsonObject::iterator QJsonObject::insert(const QString &key, const QJsonValue &value)\n", false, &_init_f_insert_4230, &_call_f_insert_4230);
  methods += new qt_gsi::GenericMethod ("isEmpty?", "@brief Method bool QJsonObject::isEmpty()\n", true, &_init_f_isEmpty_c0, &_call_f_isEmpty_c0);
  methods += new qt_gsi::GenericMethod ("keys", "@brief Method QStringList QJsonObject::keys()\n", true, &_init_f_keys_c0, &_call_f_keys_c0);
  methods += new qt_gsi::GenericMethod ("length", "@brief Method int QJsonObject::length()\n", true, &_init_f_length_c0, &_call_f_length_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QJsonObject &QJsonObject::operator =(const QJsonObject &other)\n", false, &_init_f_operator_eq__2403, &_call_f_operator_eq__2403);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QJsonObject::operator!=(const QJsonObject &other)\n", true, &_init_f_operator_excl__eq__c2403, &_call_f_operator_excl__eq__c2403);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QJsonObject::operator==(const QJsonObject &other)\n", true, &_init_f_operator_eq__eq__c2403, &_call_f_operator_eq__eq__c2403);
  methods += new qt_gsi::GenericMethod ("[]", "@brief Method QJsonValue QJsonObject::operator[](const QString &key)\n", true, &_init_f_operator_index__c2025, &_call_f_operator_index__c2025);
  methods += new qt_gsi::GenericMethod ("[]", "@brief Method QJsonValueRef QJsonObject::operator[](const QString &key)\n", false, &_init_f_operator_index__2025, &_call_f_operator_index__2025);
  methods += new qt_gsi::GenericMethod ("remove", "@brief Method void QJsonObject::remove(const QString &key)\n", false, &_init_f_remove_2025, &_call_f_remove_2025);
  methods += new qt_gsi::GenericMethod ("size", "@brief Method int QJsonObject::size()\n", true, &_init_f_size_c0, &_call_f_size_c0);
  methods += new qt_gsi::GenericMethod ("take", "@brief Method QJsonValue QJsonObject::take(const QString &key)\n", false, &_init_f_take_2025, &_call_f_take_2025);
  methods += new qt_gsi::GenericMethod ("toVariantHash", "@brief Method QHash<QString, QVariant> QJsonObject::toVariantHash()\n", true, &_init_f_toVariantHash_c0, &_call_f_toVariantHash_c0);
  methods += new qt_gsi::GenericMethod ("toVariantMap", "@brief Method QMap<QString, QVariant> QJsonObject::toVariantMap()\n", true, &_init_f_toVariantMap_c0, &_call_f_toVariantMap_c0);
  methods += new qt_gsi::GenericMethod ("value", "@brief Method QJsonValue QJsonObject::value(const QString &key)\n", true, &_init_f_value_c2025, &_call_f_value_c2025);
  methods += new qt_gsi::GenericStaticMethod ("fromVariantHash", "@brief Static method QJsonObject QJsonObject::fromVariantHash(const QHash<QString, QVariant> &map)\nThis method is static and can be called without an instance.", &_init_f_fromVariantHash_3610, &_call_f_fromVariantHash_3610);
  methods += new qt_gsi::GenericStaticMethod ("fromVariantMap", "@brief Static method QJsonObject QJsonObject::fromVariantMap(const QMap<QString, QVariant> &map)\nThis method is static and can be called without an instance.", &_init_f_fromVariantMap_3508, &_call_f_fromVariantMap_3508);
  return methods;
}

gsi::Class<QJsonObject> decl_QJsonObject ("QJsonObject",
  methods_QJsonObject (),
  "@qt\n@brief Binding of QJsonObject");


GSIQT_PUBLIC gsi::Class<QJsonObject> &qtdecl_QJsonObject () { return decl_QJsonObject; }

}

