
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
*  @file gsiDeclQEnableSharedFromThis.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QEnableSharedFromThis>
#include "gsiQt.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QEnableSharedFromThis

// QSharedPointer<T> QEnableSharedFromThis::sharedFromThis()


static void _init_f_sharedFromThis_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSharedPointer<T> > ();
}

static void _call_f_sharedFromThis_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSharedPointer<T> > ((QSharedPointer<T>)((QEnableSharedFromThis *)cls)->sharedFromThis ());
}

static qt_gsi::GenericMethod *_create_f_sharedFromThis_0 ()
{
  return new qt_gsi::GenericMethod ("sharedFromThis", "@brief Method QSharedPointer<T> QEnableSharedFromThis::sharedFromThis()\n", false, &_init_f_sharedFromThis_0, &_call_f_sharedFromThis_0);
}

// QSharedPointer<const T> QEnableSharedFromThis::sharedFromThis()


static void _init_f_sharedFromThis_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSharedPointer<const T> > ();
}

static void _call_f_sharedFromThis_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSharedPointer<const T> > ((QSharedPointer<const T>)((QEnableSharedFromThis *)cls)->sharedFromThis ());
}

static qt_gsi::GenericMethod *_create_f_sharedFromThis_c0 ()
{
  return new qt_gsi::GenericMethod ("sharedFromThis", "@brief Method QSharedPointer<const T> QEnableSharedFromThis::sharedFromThis()\n", true, &_init_f_sharedFromThis_c0, &_call_f_sharedFromThis_c0);
}


namespace gsi
{
gsi::Class<QEnableSharedFromThis> decl_QEnableSharedFromThis ("QEnableSharedFromThis",
  gsi::Methods(_create_f_sharedFromThis_0 ()) +
  gsi::Methods(_create_f_sharedFromThis_c0 ()),
  "@qt\n@brief Binding of QEnableSharedFromThis");

}

