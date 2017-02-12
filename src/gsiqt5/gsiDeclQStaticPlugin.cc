
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
*  @file gsiDeclQStaticPlugin.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStaticPlugin>
#include <QJsonObject>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStaticPlugin

//  Constructor QStaticPlugin::QStaticPlugin()


static void _init_ctor_QStaticPlugin_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStaticPlugin> ();
}

static void _call_ctor_QStaticPlugin_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStaticPlugin *> (new QStaticPlugin ());
}


// QJsonObject QStaticPlugin::metaData()


static void _init_f_metaData_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonObject > ();
}

static void _call_f_metaData_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonObject > ((QJsonObject)((QStaticPlugin *)cls)->metaData ());
}



namespace gsi
{

static gsi::Methods methods_QStaticPlugin () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStaticPlugin::QStaticPlugin()\nThis method creates an object of class QStaticPlugin.", &_init_ctor_QStaticPlugin_0, &_call_ctor_QStaticPlugin_0);
  methods += new qt_gsi::GenericMethod ("metaData", "@brief Method QJsonObject QStaticPlugin::metaData()\n", true, &_init_f_metaData_c0, &_call_f_metaData_c0);
  return methods;
}

gsi::Class<QStaticPlugin> decl_QStaticPlugin ("QStaticPlugin",
  methods_QStaticPlugin (),
  "@qt\n@brief Binding of QStaticPlugin");


GSIQT_PUBLIC gsi::Class<QStaticPlugin> &qtdecl_QStaticPlugin () { return decl_QStaticPlugin; }

}

