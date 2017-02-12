
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
*  @file gsiDeclQStyleOptionTitleBar.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStyleOptionTitleBar>
#include <QStyleOption>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStyleOptionTitleBar

//  Constructor QStyleOptionTitleBar::QStyleOptionTitleBar()


static void _init_ctor_QStyleOptionTitleBar_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStyleOptionTitleBar> ();
}

static void _call_ctor_QStyleOptionTitleBar_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStyleOptionTitleBar *> (new QStyleOptionTitleBar ());
}


//  Constructor QStyleOptionTitleBar::QStyleOptionTitleBar(const QStyleOptionTitleBar &other)


static void _init_ctor_QStyleOptionTitleBar_3347 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionTitleBar & > (argspec_0);
  decl->set_return_new<QStyleOptionTitleBar> ();
}

static void _call_ctor_QStyleOptionTitleBar_3347 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionTitleBar &arg1 = args.read<const QStyleOptionTitleBar & > (heap);
  ret.write<QStyleOptionTitleBar *> (new QStyleOptionTitleBar (arg1));
}



namespace gsi
{

static gsi::Methods methods_QStyleOptionTitleBar () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionTitleBar::QStyleOptionTitleBar()\nThis method creates an object of class QStyleOptionTitleBar.", &_init_ctor_QStyleOptionTitleBar_0, &_call_ctor_QStyleOptionTitleBar_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionTitleBar::QStyleOptionTitleBar(const QStyleOptionTitleBar &other)\nThis method creates an object of class QStyleOptionTitleBar.", &_init_ctor_QStyleOptionTitleBar_3347, &_call_ctor_QStyleOptionTitleBar_3347);
  return methods;
}

gsi::Class<QStyleOptionComplex> &qtdecl_QStyleOptionComplex ();

gsi::Class<QStyleOptionTitleBar> decl_QStyleOptionTitleBar (qtdecl_QStyleOptionComplex (), "QStyleOptionTitleBar",
  methods_QStyleOptionTitleBar (),
  "@qt\n@brief Binding of QStyleOptionTitleBar");


GSIQT_PUBLIC gsi::Class<QStyleOptionTitleBar> &qtdecl_QStyleOptionTitleBar () { return decl_QStyleOptionTitleBar; }

}

