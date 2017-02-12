
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



#include "tlVariant.h"
#include "tlVariantUserClasses.h"
#include "tlObject.h"
#include "tlTypeTraits.h"
#include "gsiDecl.h"
#include "dbBox.h"
#include "dbLayerProperties.h"
#include "utHead.h"
#include <cstdio>

struct A 
{
  std::string a;
  const std::string &to_string () const { return a; }
};

struct AA
  : public tl::Object
{
  std::string a;
  static int ac;
  AA() { ac += 1; }
  ~AA() { ac -= 1; }
  const std::string &to_string () const { return a; }
};

int AA::ac = 0;

namespace tl
{
  template<> 
  class type_traits<A>
    : public type_traits<void>
  {
  public:
    typedef tl::true_tag supports_to_string;
    typedef tl::true_tag has_copy_constructor;
  };
}

struct B 
{
  int bb;
  std::string b;
  bool operator== (const B &d) const { return bb == d.bb; }
  bool operator< (const B &d) const { return bb < d.bb; }
  const std::string &to_string () const { return b; }
};

namespace tl
{
  template<> 
  class type_traits<B>
    : public type_traits<void>
  {
  public:
    typedef tl::true_tag supports_to_string;
    typedef tl::true_tag has_equal_operator;
    typedef tl::true_tag has_less_operator;
    typedef tl::true_tag has_copy_constructor;
  };
}

static tl::VariantUserClassImpl<A> a_class_instance;
static tl::VariantUserClassImpl<AA> aa_class_instance;
static tl::VariantUserClassImpl<B> b_class_instance;

//  This namespace separates the test structs from other objects
namespace 
{

TEST(1) 
{
  tl::Variant vv;

  {
  tl::Variant v;
  EXPECT_EQ (tl::to_string (v.to_qvariant ().toString ()), "");
  EXPECT_EQ (v.is_nil (), true);
  EXPECT_EQ (v.is_list (), false);
  EXPECT_EQ (v.is_cstring (), false);
  EXPECT_EQ (v.is_id (), false);
  EXPECT_EQ (v.is<short> (), false);
  EXPECT_EQ (v.is<unsigned short> (), false);
  EXPECT_EQ (v.is<int> (), false);
  EXPECT_EQ (v.is<unsigned int> (), false);
  EXPECT_EQ (v.is<short> (), false);
  EXPECT_EQ (v.is<unsigned short> (), false);
  EXPECT_EQ (v.is<unsigned char> (), false);
  EXPECT_EQ (v.is<signed char> (), false);
  EXPECT_EQ (v.is<long> (), false);
  EXPECT_EQ (v.is_char (), false);
  EXPECT_EQ (v.is_long (), false);
  EXPECT_EQ (v.is_ulong (), false);
  EXPECT_EQ (v.is_double (), false);
  EXPECT_EQ (v.to_parsable_string (), "nil");
  vv = v;
  EXPECT_EQ (vv == v, true);
  EXPECT_EQ (vv != v, false);
  tl::Variant vx;
  std::string s (v.to_parsable_string ());
  tl::Extractor ex (s.c_str ());
  ex.read (vx);
  ex.expect_end ();
  EXPECT_EQ (vx == v, true);
  }

  {
  tl::Variant v (1ul);
  EXPECT_EQ (tl::Variant (v.to_qvariant ()).to_parsable_string (), "#u1");
  EXPECT_EQ (v.is_nil (), false);
  EXPECT_EQ (v.is_list (), false);
  EXPECT_EQ (v.is_cstring (), false);
  EXPECT_EQ (v.is_id (), false);
  EXPECT_EQ (v.is_ulong (), true);
  EXPECT_EQ (v.is_long (), false);
  EXPECT_EQ (v.is_double (), false);
  EXPECT_EQ (v.to_parsable_string (), "#u1");
  EXPECT_EQ (v.to_long (), 1l);
  EXPECT_EQ (v.is<unsigned long> (), true);
  EXPECT_EQ (v.is<long> (), false);
  EXPECT_EQ (vv == v, false);
  EXPECT_EQ (vv != v, true);
  vv = v;
  EXPECT_EQ (vv == v, true);
  EXPECT_EQ (vv != v, false);
  tl::Variant vx;
  std::string s (v.to_parsable_string ());
  tl::Extractor ex (s.c_str ());
  ex.read (vx);
  ex.expect_end ();
  EXPECT_EQ (vx == v, true);
  }

  {
  tl::Variant v (2u);
  EXPECT_EQ (tl::Variant (v.to_qvariant ()).to_parsable_string (), "#u2");
  EXPECT_EQ (v.is_nil (), false);
  EXPECT_EQ (v.is_list (), false);
  EXPECT_EQ (v.is_cstring (), false);
  EXPECT_EQ (v.is<unsigned int> (), true);
  EXPECT_EQ (v.is<int> (), false);
  EXPECT_EQ (v.is<long> (), false);
  EXPECT_EQ (v.is<unsigned long> (), false);
  EXPECT_EQ (v.is<unsigned long> (), false);
  EXPECT_EQ (v.is<long> (), false);
  EXPECT_EQ (v.is_ulong (), true);
  EXPECT_EQ (v.is_long (), false);
  EXPECT_EQ (v.is_id (), false);
  EXPECT_EQ (v.is_double (), false);
  EXPECT_EQ (v.to_parsable_string (), "#u2");
  EXPECT_EQ (v.to_long (), 2l);
  EXPECT_EQ (vv == v, false);
  EXPECT_EQ (vv != v, true);
  vv = v;
  EXPECT_EQ (vv == v, true);
  EXPECT_EQ (vv != v, false);
  tl::Variant vx;
  std::string s (v.to_parsable_string ());
  tl::Extractor ex (s.c_str ());
  ex.read (vx);
  ex.expect_end ();
  EXPECT_EQ (vx == v, true);
  v.morph<unsigned long> ();
  EXPECT_EQ (vx == v, true);
  }

  {
  tl::Variant v (1);
  EXPECT_EQ (tl::Variant (v.to_qvariant ()).to_parsable_string (), "#1");
  EXPECT_EQ (v.is_nil (), false);
  EXPECT_EQ (v.is_list (), false);
  EXPECT_EQ (v.is_cstring (), false);
  EXPECT_EQ (v.is_long (), true);
  EXPECT_EQ (v.is_ulong (), false);
  EXPECT_EQ (v.is<long> (), false);
  EXPECT_EQ (v.is<unsigned long> (), false);
  EXPECT_EQ (v.is<int> (), true);
  EXPECT_EQ (v.is<unsigned int> (), false);
  EXPECT_EQ (v.is_double (), false);
  EXPECT_EQ (v.to_parsable_string (), "#1");
  EXPECT_EQ (v.to_long (), 1l);
  EXPECT_EQ (vv == v, false);
  EXPECT_EQ (vv != v, true);
  vv = v;
  EXPECT_EQ (vv == v, true);
  EXPECT_EQ (vv != v, false);
  tl::Variant vx;
  std::string s (v.to_parsable_string ());
  tl::Extractor ex (s.c_str ());
  ex.read (vx);
  ex.expect_end ();
  EXPECT_EQ (vx == v, true);
  v.morph<long> ();
  EXPECT_EQ (vx == v, true);
  }

  {
  tl::Variant v (2l);
  EXPECT_EQ (tl::Variant (v.to_qvariant ()).to_parsable_string (), "#2");
  EXPECT_EQ (v.is_nil (), false);
  EXPECT_EQ (v.is_list (), false);
  EXPECT_EQ (v.is_cstring (), false);
  EXPECT_EQ (v.is_long (), true);
  EXPECT_EQ (v.is_ulong (), false);
  EXPECT_EQ (v.is_id (), false);
  EXPECT_EQ (v.is_double (), false);
  EXPECT_EQ (v.is_char (), false);
  EXPECT_EQ (v.is<long> (), true);
  EXPECT_EQ (v.is<unsigned long> (), false);
  EXPECT_EQ (v.is<float> (), false);
  EXPECT_EQ (v.is<short> (), false);
  EXPECT_EQ (v.is<unsigned short> (), false);
  EXPECT_EQ (v.is<int> (), false);
  EXPECT_EQ (v.is<unsigned int> (), false);
  EXPECT_EQ (v.is<unsigned char> (), false);
  EXPECT_EQ (v.is<signed char> (), false);
  EXPECT_EQ (v.to_parsable_string (), "#2");
  EXPECT_EQ (v.to_long (), 2l);
  EXPECT_EQ (v.to_double (), 2.0);
  EXPECT_EQ (v.to_float (), 2.0);
  EXPECT_EQ (vv == v, false);
  EXPECT_EQ (vv != v, true);
  vv = v;
  EXPECT_EQ (vv == v, true);
  EXPECT_EQ (vv != v, false);
  tl::Variant vx;
  std::string s (v.to_parsable_string ());
  tl::Extractor ex (s.c_str ());
  ex.read (vx);
  ex.expect_end ();
  EXPECT_EQ (vx == v, true);
  }

  {
  tl::Variant v ((float)5.0);
  EXPECT_EQ (tl::Variant (v.to_qvariant ()).to_parsable_string (), "##5");
  EXPECT_EQ (v.is_nil (), false);
  EXPECT_EQ (v.is_list (), false);
  EXPECT_EQ (v.is_cstring (), false);
  EXPECT_EQ (v.is_long (), false);
  EXPECT_EQ (v.is_ulong (), false);
  EXPECT_EQ (v.is_char (), false);
  EXPECT_EQ (v.is_double (), true);
  EXPECT_EQ (v.is<long> (), false);
  EXPECT_EQ (v.is<unsigned long> (), false);
  EXPECT_EQ (v.is<double> (), false);
  EXPECT_EQ (v.is<float> (), true);
  EXPECT_EQ (v.is<short> (), false);
  EXPECT_EQ (v.is<unsigned short> (), false);
  EXPECT_EQ (v.is<int> (), false);
  EXPECT_EQ (v.is<unsigned int> (), false);
  EXPECT_EQ (v.is<unsigned char> (), false);
  EXPECT_EQ (v.is<signed char> (), false);
  EXPECT_EQ (v.is_id (), false);
  EXPECT_EQ (v.to_parsable_string (), "##5");
  EXPECT_EQ (v.to_double (), 5.0);
  EXPECT_EQ (v.to_float (), 5.0);
  EXPECT_EQ (vv == v, false);
  EXPECT_EQ (vv != v, true);
  vv = v;
  EXPECT_EQ (vv == v, true);
  EXPECT_EQ (vv != v, false);
  tl::Variant vx;
  std::string s (v.to_parsable_string ());
  tl::Extractor ex (s.c_str ());
  ex.read (vx);
  ex.expect_end ();
  EXPECT_EQ (vx == v, true);
  v.morph<double>();
  EXPECT_EQ (vx == v, true);
  }

  {
  tl::Variant v (5.0);
  EXPECT_EQ (tl::Variant (v.to_qvariant ()).to_parsable_string (), "##5");
  EXPECT_EQ (v.is_nil (), false);
  EXPECT_EQ (v.is_list (), false);
  EXPECT_EQ (v.is_cstring (), false);
  EXPECT_EQ (v.is_long (), false);
  EXPECT_EQ (v.is_ulong (), false);
  EXPECT_EQ (v.is_double (), true);
  EXPECT_EQ (v.is<long> (), false);
  EXPECT_EQ (v.is<unsigned long> (), false);
  EXPECT_EQ (v.is<float> (), false);
  EXPECT_EQ (v.is<short> (), false);
  EXPECT_EQ (v.is<unsigned short> (), false);
  EXPECT_EQ (v.is<int> (), false);
  EXPECT_EQ (v.is<unsigned int> (), false);
  EXPECT_EQ (v.is<short> (), false);
  EXPECT_EQ (v.is<unsigned short> (), false);
  EXPECT_EQ (v.is_char (), false);
  EXPECT_EQ (v.is<unsigned char> (), false);
  EXPECT_EQ (v.is<signed char> (), false);
  EXPECT_EQ (v.is_id (), false);
  EXPECT_EQ (v.to_parsable_string (), "##5");
  EXPECT_EQ (v.to_double (), 5.0);
  EXPECT_EQ (*(double *)v.native_ptr (), 5.0);
  EXPECT_EQ (vv == v, true);
  EXPECT_EQ (vv != v, false);
  vv = v;
  EXPECT_EQ (vv == v, true);
  EXPECT_EQ (vv != v, false);
  tl::Variant vx;
  std::string s (v.to_parsable_string ());
  tl::Extractor ex (s.c_str ());
  ex.read (vx);
  ex.expect_end ();
  EXPECT_EQ (vx == v, true);
  v.morph<float> ();
  EXPECT_EQ (*(float *)v.native_ptr (), 5.0);
  v.morph<int> ();
  EXPECT_EQ (*(int *)v.native_ptr (), 5);
  v.morph<long> ();
  EXPECT_EQ (*(long *)v.native_ptr (), 5);
  v.morph<long long> ();
  EXPECT_EQ (*(long long *)v.native_ptr (), 5);
  v.morph<unsigned long> ();
  EXPECT_EQ (*(unsigned long *)v.native_ptr (), 5);
  v.morph<unsigned int> ();
  EXPECT_EQ (*(unsigned int *)v.native_ptr (), 5);
  v.morph<unsigned short> ();
  EXPECT_EQ (*(unsigned short *)v.native_ptr (), 5);
  v.morph<unsigned char> ();
  EXPECT_EQ (*(unsigned char *)v.native_ptr (), 5);
  }

  {
  tl::Variant v((short)2);
  EXPECT_EQ (tl::Variant (v.to_qvariant ()).to_parsable_string (), "#2");
  EXPECT_EQ (v.is_nil (), false);
  EXPECT_EQ (v.is_list (), false);
  EXPECT_EQ (v.is_cstring (), false);
  EXPECT_EQ (v.is_id (), false);
  EXPECT_EQ (v.is<short> (), true);
  EXPECT_EQ (v.is<unsigned short> (), false);
  EXPECT_EQ (v.is<int> (), false);
  EXPECT_EQ (v.is<unsigned int> (), false);
  EXPECT_EQ (v.is<unsigned char> (), false);
  EXPECT_EQ (v.is<signed char> (), false);
  EXPECT_EQ (v.is<long> (), false);
  EXPECT_EQ (v.is<unsigned long> (), false);
  EXPECT_EQ (v.is_char (), false);
  EXPECT_EQ (v.is_long (), true);
  EXPECT_EQ (v.is_ulong (), false);
  EXPECT_EQ (v.is_double (), false);
  EXPECT_EQ (v.to_parsable_string (), "#2");
  vv = v;
  EXPECT_EQ (vv == v, true);
  EXPECT_EQ (vv != v, false);
  tl::Variant vx;
  std::string s (v.to_parsable_string ());
  tl::Extractor ex (s.c_str ());
  ex.read (vx);
  ex.expect_end ();
  EXPECT_EQ (vx == v, true);
  EXPECT_EQ (vx.is_long (), true);
  EXPECT_EQ (vx.is_ulong (), false);
  EXPECT_EQ (vx.is<long> (), true);
  EXPECT_EQ (vx.is<unsigned long> (), false);
  EXPECT_EQ (v.is<short> (), true);
  EXPECT_EQ (*(long *)vx.native_ptr(), 2);
  EXPECT_EQ (*(short *)v.native_ptr(), 2);
  v.morph<long>();
  EXPECT_EQ (vx == v, true);
  EXPECT_EQ (vx.is_long (), true);
  EXPECT_EQ (v.is_long (), true);
  EXPECT_EQ (*(long *)vx.native_ptr(), 2);
  EXPECT_EQ (*(long *)v.native_ptr(), 2);
  }

  {
  tl::Variant v((unsigned short)2);
  EXPECT_EQ (tl::Variant (v.to_qvariant ()).to_parsable_string (), "#u2");
  EXPECT_EQ (v.is_nil (), false);
  EXPECT_EQ (v.is_list (), false);
  EXPECT_EQ (v.is_cstring (), false);
  EXPECT_EQ (v.is_id (), false);
  EXPECT_EQ (v.is_char (), false);
  EXPECT_EQ (v.is_long (), false);
  EXPECT_EQ (v.is_ulong (), true);
  EXPECT_EQ (v.is_double (), false);
  EXPECT_EQ (v.is<short> (), false);
  EXPECT_EQ (v.is<unsigned short> (), true);
  EXPECT_EQ (v.is<int> (), false);
  EXPECT_EQ (v.is<unsigned int> (), false);
  EXPECT_EQ (v.is<unsigned char> (), false);
  EXPECT_EQ (v.is<signed char> (), false);
  EXPECT_EQ (v.is<long> (), false);
  EXPECT_EQ (v.is<unsigned long> (), false);
  EXPECT_EQ (v.to_parsable_string (), "#u2");
  vv = v;
  EXPECT_EQ (vv == v, true);
  EXPECT_EQ (vv != v, false);
  tl::Variant vx;
  std::string s (v.to_parsable_string ());
  tl::Extractor ex (s.c_str ());
  ex.read (vx);
  ex.expect_end ();
  EXPECT_EQ (vx == v, true);
  EXPECT_EQ (vx.is_ulong (), true);
  EXPECT_EQ (v.is<unsigned short> (), true);
  EXPECT_EQ (*(unsigned long *)vx.native_ptr(), 2);
  EXPECT_EQ (*(unsigned short *)v.native_ptr(), 2);
  v.morph<unsigned long>();
  EXPECT_EQ (vx == v, true);
  EXPECT_EQ (vx.is_ulong (), true);
  EXPECT_EQ (v.is_ulong (), true);
  EXPECT_EQ (*(long *)vx.native_ptr(), 2);
  EXPECT_EQ (*(long *)v.native_ptr(), 2);
  }

  {
  tl::Variant v ("hal'l\"o");
  EXPECT_EQ (tl::Variant (v.to_qvariant ()).to_parsable_string (), "'hal\\'l\"o'");
  EXPECT_EQ (v.is_nil (), false);
  EXPECT_EQ (v.is_list (), false);
  EXPECT_EQ (v.is_cstring (), true);
  EXPECT_EQ (v.is_long (), false);
  EXPECT_EQ (v.is_ulong (), false);
  EXPECT_EQ (v.is_double (), false);
  EXPECT_EQ (v.is_id (), false);
  EXPECT_EQ (v.to_parsable_string (), "'hal\\'l\"o'");
  EXPECT_EQ (std::string (v.to_string ()), "hal'l\"o");
  EXPECT_EQ (vv == v, false);
  EXPECT_EQ (vv != v, true);
  vv = v;
  EXPECT_EQ (vv == v, true);
  EXPECT_EQ (vv != v, false);
  tl::Variant vx;
  std::string s (v.to_parsable_string ());
  tl::Extractor ex (s.c_str ());
  ex.read (vx);
  ex.expect_end ();
  EXPECT_EQ (vx.is_stdstring (), true);
  EXPECT_EQ (vx == v, true);
  vx.morph<const char *>();
  EXPECT_EQ (vx == v, true);
  }

  {
  tl::Variant v (tl::to_qstring ("hal'l\"o"));
  EXPECT_EQ (tl::Variant (v.to_qvariant ()).to_parsable_string (), "'hal\\'l\"o'");
  EXPECT_EQ (v.is_nil (), false);
  EXPECT_EQ (v.is_list (), false);
  EXPECT_EQ (v.is_cstring (), false);
  EXPECT_EQ (v.is_qstring (), true);
  EXPECT_EQ (v.is_stdstring (), false);
  EXPECT_EQ (v.is_long (), false);
  EXPECT_EQ (v.is_ulong (), false);
  EXPECT_EQ (v.is_double (), false);
  EXPECT_EQ (v.is_id (), false);
  EXPECT_EQ (std::string (v.to_string ()), "hal'l\"o");
  EXPECT_EQ (tl::to_string (*(QString *)v.native_ptr ()), "hal'l\"o");
  v.morph<std::string> ();
  EXPECT_EQ (v.is_cstring (), false);
  EXPECT_EQ (v.is_qstring (), false);
  EXPECT_EQ (v.is_stdstring (), true);
  EXPECT_EQ (std::string (v.to_string ()), "hal'l\"o");
  EXPECT_EQ (*(std::string *)v.native_ptr (), "hal'l\"o");
  v.morph<const char *> ();
  EXPECT_EQ (v.is_cstring (), true);
  EXPECT_EQ (v.is_qstring (), false);
  EXPECT_EQ (v.is_stdstring (), false);
  EXPECT_EQ (std::string (v.to_string ()), "hal'l\"o");
  EXPECT_EQ (std::string ((const char *)v.native_ptr ()), "hal'l\"o");
  }

  {
  long a[3] = { 1, 5, 25 };
  tl::Variant v (a, a + 3);
  EXPECT_EQ (tl::Variant (v.to_qvariant ()).to_parsable_string (), "(#1,#5,#25)");
  EXPECT_EQ (v.is_nil (), false);
  EXPECT_EQ (v.is_list (), true);
  EXPECT_EQ (v.is_cstring (), false);
  EXPECT_EQ (v.is_long (), false);
  EXPECT_EQ (v.is_ulong (), false);
  EXPECT_EQ (v.is_longlong (), false);
  EXPECT_EQ (v.is_ulonglong (), false);
  EXPECT_EQ (v.is_id (), false);
  EXPECT_EQ (v.is_cstring (), false);
  EXPECT_EQ (v.is_double (), false);
  EXPECT_EQ (v.to_parsable_string (), "(#1,#5,#25)");
  EXPECT_EQ (v.get_list ().size (), 3);
  EXPECT_EQ (v.begin ()->is_long (), true);
  EXPECT_EQ (v.begin ()->to_long (), 1);
  EXPECT_EQ (v.begin ()[1].is_long (), true);
  EXPECT_EQ (v.begin ()[1].to_long (), 5);
  EXPECT_EQ (v.begin ()[2].is_long (), true);
  EXPECT_EQ (v.begin ()[2].to_long (), 25);
  EXPECT_EQ (v.begin () + 3 == v.end (), true);
  EXPECT_EQ (vv == v, false);
  EXPECT_EQ (vv != v, true);
  vv = v;
  EXPECT_EQ (vv == v, true);
  EXPECT_EQ (vv != v, false);
  tl::Variant vx;
  std::string s (v.to_parsable_string ());
  tl::Extractor ex (s.c_str ());
  ex.read (vx);
  ex.expect_end ();
  EXPECT_EQ (vx == v, true);
  }

  {
  tl::Variant v ((long long) 17);
  EXPECT_EQ (tl::Variant (v.to_qvariant ()).to_parsable_string (), "#l17");
  EXPECT_EQ (v.is_nil (), false);
  EXPECT_EQ (v.is_list (), false);
  EXPECT_EQ (v.is_cstring (), false);
  EXPECT_EQ (v.is_id (), false);
  EXPECT_EQ (v.is_long (), false);
  EXPECT_EQ (v.is_ulong (), false);
  EXPECT_EQ (v.is_longlong (), true);
  EXPECT_EQ (v.is_ulonglong (), false);
  EXPECT_EQ (v.is_cstring (), false);
  EXPECT_EQ (v.is_double (), false);
  EXPECT_EQ (v.to_parsable_string (), "#l17");
  tl::Variant vx;
  std::string s (v.to_parsable_string ());
  tl::Extractor ex (s.c_str ());
  ex.read (vx);
  ex.expect_end ();
  EXPECT_EQ (vx == v, true);
  }

  {
  tl::Variant v ((unsigned long long) 17);
  EXPECT_EQ (tl::Variant (v.to_qvariant ()).to_parsable_string (), "#lu17");
  EXPECT_EQ (v.is_nil (), false);
  EXPECT_EQ (v.is_list (), false);
  EXPECT_EQ (v.is_cstring (), false);
  EXPECT_EQ (v.is_id (), false);
  EXPECT_EQ (v.is_long (), false);
  EXPECT_EQ (v.is_ulong (), false);
  EXPECT_EQ (v.is_ulonglong (), true);
  EXPECT_EQ (v.is_longlong (), false);
  EXPECT_EQ (v.is_cstring (), false);
  EXPECT_EQ (v.is_double (), false);
  EXPECT_EQ (v.to_parsable_string (), "#lu17");
  tl::Variant vx;
  std::string s (v.to_parsable_string ());
  tl::Extractor ex (s.c_str ());
  ex.read (vx);
  ex.expect_end ();
  EXPECT_EQ (vx == v, true);
  }

  {
  tl::Variant v (17, true);
  EXPECT_EQ (tl::Variant (v.to_qvariant ()).to_parsable_string (), "#u17");
  EXPECT_EQ (v.is_nil (), false);
  EXPECT_EQ (v.is_list (), false);
  EXPECT_EQ (v.is_cstring (), false);
  EXPECT_EQ (v.is_id (), true);
  EXPECT_EQ (v.is_long (), false);
  EXPECT_EQ (v.is_ulong (), false);
  EXPECT_EQ (v.is_ulonglong (), false);
  EXPECT_EQ (v.is_longlong (), false);
  EXPECT_EQ (v.is_cstring (), false);
  EXPECT_EQ (v.is_double (), false);
  EXPECT_EQ (v.to_parsable_string (), "[id17]");
  }

  {
  tl::Variant v = tl::Variant::empty_array ();
  EXPECT_EQ (tl::Variant (v.to_qvariant ()).to_parsable_string (), "{}");
  EXPECT_EQ (v.is_nil (), false);
  EXPECT_EQ (v.is_list (), false);
  EXPECT_EQ (v.is_array (), true);
  EXPECT_EQ (v.is_cstring (), false);
  EXPECT_EQ (v.is_id (), false);
  EXPECT_EQ (v.is_long (), false);
  EXPECT_EQ (v.is_ulong (), false);
  EXPECT_EQ (v.is_ulonglong (), false);
  EXPECT_EQ (v.is_longlong (), false);
  EXPECT_EQ (v.is_cstring (), false);
  EXPECT_EQ (v.is_double (), false);
  EXPECT_EQ (v.to_parsable_string (), "{}");
  v.insert (tl::Variant (1), tl::Variant ("A"));
  EXPECT_EQ (v.to_parsable_string (), "{#1=>\'A\'}");
  v.insert (tl::Variant ("B"), tl::Variant (17));
  EXPECT_EQ (v.to_parsable_string (), "{#1=>\'A\',\'B\'=>#17}");
  EXPECT_EQ (tl::Variant (v.to_qvariant ()).to_parsable_string (), "{\'1\'=>\'A\',\'B\'=>#17}");
  tl::Variant *x;
  x = v.find (tl::Variant ("B"));
  EXPECT_EQ (x != 0, true);
  EXPECT_EQ (x->to_parsable_string (), "#17");
  x = v.find (tl::Variant (1l));
  EXPECT_EQ (x != 0, true);
  EXPECT_EQ (x->to_parsable_string (), "\'A\'");
  x = v.find (tl::Variant ("C"));
  EXPECT_EQ (x == 0, true);
  x = v.find (tl::Variant (1));
  EXPECT_EQ (x != 0, true);
  EXPECT_EQ (x->to_parsable_string (), "\'A\'");
  x = v.find (tl::Variant ("C"));
  EXPECT_EQ (x == 0, true);
  x = v.find (tl::Variant ());
  EXPECT_EQ (x == 0, true);
  x = v.find (tl::Variant (17l));
  EXPECT_EQ (x == 0, true);
  tl::Variant vx;
  std::string s (v.to_parsable_string ());
  tl::Extractor ex (s.c_str ());
  ex.read (vx);
  ex.expect_end ();
  EXPECT_EQ (vx.to_parsable_string (), "{#1=>\'A\',\'B\'=>#17}");
  EXPECT_EQ (vx == v, true);
  }

}

TEST(2)
{
  bool err = false;

  A a;
  a.a = "A member";
  B b;
  b.b = "B member";
  b.bb = 112;
  B b2;
  b2.b = "B2 member";
  b2.bb = 110;

  tl::Variant v2;
  //  note: because the UT's are defined outside the main DLL, A is also defined outside
  //  the main DLL. To access the right instance, we need to use dll_local_instance
  tl::Variant v (new A (a), &a_class_instance, true);
  EXPECT_EQ (v.is_nil (), false);
  EXPECT_EQ (v.is_list (), false);
  EXPECT_EQ (v.is_cstring (), false);
  EXPECT_EQ (v.is_long (), false);
  EXPECT_EQ (v.is_ulong (), false);
  EXPECT_EQ (v.is_cstring (), false);
  EXPECT_EQ (v.is_double (), false);
  EXPECT_EQ (v.is_user (), true);
  EXPECT_EQ (v.is_user<A> (), true);
  EXPECT_EQ (v.is_user<B> (), false);
  EXPECT_EQ (v.to_user<A> ().a, a.a);
  tl::Variant vv;
  EXPECT_EQ (vv == v, false);
  EXPECT_EQ (vv != v, true);
  vv = v;
  // not working yet: EXPECT_EQ (vv == v, true);
  // not working yet: EXPECT_EQ (vv != v, false);
  EXPECT_EQ (vv.is_user (), true);
  EXPECT_EQ (vv.to_user<A> ().a, a.a);
  err = false;
  try {
    EXPECT_EQ (vv.to_user<B> ().b, b.b);
  } catch (...) {
    err = true;
  }
  EXPECT_EQ (err, true);

  v = tl::Variant (new B(b), &b_class_instance, true);
  v2 = tl::Variant (new B(b2), &b_class_instance, true);
  EXPECT_EQ (vv == v, false);
  EXPECT_EQ (vv != v, true);
  vv = v;
  EXPECT_EQ (vv == v, true);
  EXPECT_EQ (vv != v, false);
  EXPECT_EQ (v2 == v, false);
  EXPECT_EQ (v2 != v, true);
  EXPECT_EQ (v2 < v, true);
  EXPECT_EQ (v < v2, false);
  EXPECT_EQ (vv.is_user (), true);
  EXPECT_EQ (vv.is_user<B> (), true);
  EXPECT_EQ (vv.is_user<A> (), false);
  err = false;
  try {
    EXPECT_EQ (vv.to_user<A> ().a, a.a);
  } catch (...) {
    err = true;
  }
  EXPECT_EQ (err, true);
  EXPECT_EQ (vv.to_user<B> ().b, b.b);
  EXPECT_EQ (vv.to_user<B> ().bb, b.bb);

  //  deep copy for owned objects
  v = tl::Variant (new B(), &b_class_instance, true);
  v.to_user<B> ().bb = 42;
  v2 = v;

  EXPECT_EQ (v.to_user<B> ().bb, 42);
  EXPECT_EQ (v2.to_user<B> ().bb, 42);

  v.to_user<B> ().bb += 1;
  EXPECT_EQ (v.to_user<B> ().bb, 43);
  EXPECT_EQ (v2.to_user<B> ().bb, 42);

  b = B ();
  b.bb = 17;

  B *b1 = 0;

  v = tl::Variant ();
  v.set_user (b1 = new B(b), &b_class_instance, true);
  v2 = v;

  EXPECT_EQ (v.to_user<B> ().bb, b1->bb);
  EXPECT_EQ (v2.to_user<B> ().bb, b1->bb);

  b1->bb += 1;
  EXPECT_EQ (v.to_user<B> ().bb, b1->bb);
  EXPECT_EQ (v2.to_user<B> ().bb, b1->bb - 1);

  b = B ();
  b.bb = 17;

  v = tl::Variant (&b, &b_class_instance, false);
  v2 = v;
  EXPECT_EQ (v.to_user<B> ().bb, b.bb);
  EXPECT_EQ (v2.to_user<B> ().bb, b.bb);

  b.bb += 1;
  EXPECT_EQ (v.to_user<B> ().bb, b.bb);
  EXPECT_EQ (v2.to_user<B> ().bb, b.bb);

  //  tl::Object based objects
  AA::ac = 0;

  AA *aa;

  //  shallow copy for tl::Object based objects
  v = tl::Variant (aa = new AA (), &aa_class_instance, true);
  EXPECT_EQ (AA::ac, 1);
  v2 = v;
  EXPECT_EQ (AA::ac, 1);

  aa->a = "u";
  EXPECT_EQ (v.to_user<AA> ().a, "u");
  EXPECT_EQ (v2.to_user<AA> ().a, "u");

  v = tl::Variant ();
  EXPECT_EQ (AA::ac, 1);
  v2 = tl::Variant ();
  EXPECT_EQ (AA::ac, 0);

  //  shallow copy for tl::Object based objects
  std::auto_ptr<AA> aptr (new AA ());

  v = tl::Variant (aptr.get (), &aa_class_instance, false);
  EXPECT_EQ (AA::ac, 1);
  v2 = v;
  EXPECT_EQ (AA::ac, 1);

  aptr->a = "x";
  EXPECT_EQ (v.to_user<AA> ().a, "x");
  EXPECT_EQ (v2.to_user<AA> ().a, "x");

  v = tl::Variant ();
  EXPECT_EQ (AA::ac, 1);
  v2 = tl::Variant ();
  EXPECT_EQ (AA::ac, 1);

  v = tl::Variant (aptr.get (), &aa_class_instance, false);
  EXPECT_EQ (AA::ac, 1);
  v2 = v;
  EXPECT_EQ (AA::ac, 1);
  EXPECT_EQ (v.to_user<AA> ().a, "x");
  EXPECT_EQ (v2.to_user<AA> ().a, "x");

  aptr.reset (0);
  EXPECT_EQ (v.to_user (), 0);
  EXPECT_EQ (v2.to_user (), 0);
}

TEST(3)
{
  tl::Variant v;
  v = tl::Variant::make_variant (db::Box (db::Point (0, 10), db::Point (20, 30)));
  EXPECT_EQ (v.is_user<db::Box> (), true)
  EXPECT_EQ (v.to_parsable_string (), "[box:(0,10;20,30)]");

  std::string s = v.to_parsable_string () + "," + tl::Variant (15.0).to_parsable_string ();
  tl::Variant vv;
  tl::Extractor ex (s.c_str ());
  ex.read (vv);
  ex.test (",");
  ex.read (v);
  EXPECT_EQ (vv.is_user<db::Box> (), true)
  EXPECT_EQ (vv.to_parsable_string (), "[box:(0,10;20,30)]");
  EXPECT_EQ ((int)v.type_code (), (int)tl::Variant::t_double);
  EXPECT_EQ (std::string(v.to_string()), "15");
}

TEST(4)
{
  //  backward compatibility check
  std::string s = "[box:(0,10;20,30)],##15";
  tl::Variant vv;
  tl::Variant v;
  tl::Extractor ex (s.c_str ());
  ex.read (vv);
  ex.test (",");
  ex.read (v);
  EXPECT_EQ (vv.is_user<db::Box> (), true)
  EXPECT_EQ (vv.to_parsable_string (), "[box:(0,10;20,30)]");
  EXPECT_EQ ((int)v.type_code (), (int)tl::Variant::t_double);
  EXPECT_EQ (std::string(v.to_string()), "15");
}

TEST(5)
{
  //  backward compatibility check
  std::string s = "[Box:(0,10;20,30)],##15";
  tl::Variant vv;
  tl::Variant v;
  tl::Extractor ex (s.c_str ());
  ex.read (vv);
  ex.test (",");
  ex.read (v);
  EXPECT_EQ (vv.is_user<db::Box> (), true)
  EXPECT_EQ (vv.to_parsable_string (), "[box:(0,10;20,30)]");
  EXPECT_EQ ((int)v.type_code (), (int)tl::Variant::t_double);
  EXPECT_EQ (std::string(v.to_string()), "15");
}

TEST(6)
{
  //  backward compatibility check
  std::string s = "[layer:1/0],##15";
  tl::Variant vv;
  tl::Variant v;
  tl::Extractor ex (s.c_str ());
  ex.read (vv);
  ex.test (",");
  ex.read (v);
  EXPECT_EQ (vv.is_user<db::LayerProperties> (), true)
  EXPECT_EQ (vv.to_parsable_string (), "[layer:1/0]");
  EXPECT_EQ ((int)v.type_code (), (int)tl::Variant::t_double);
  EXPECT_EQ (std::string(v.to_string()), "15");
}

TEST(7)
{
  //  backward compatibility check
  std::string s = "[LayerInfo:1/0],##15";
  tl::Variant vv;
  tl::Variant v;
  tl::Extractor ex (s.c_str ());
  ex.read (vv);
  ex.test (",");
  ex.read (v);
  EXPECT_EQ (vv.is_user<db::LayerProperties> (), true)
  EXPECT_EQ (vv.to_parsable_string (), "[layer:1/0]");
  EXPECT_EQ ((int)v.type_code (), (int)tl::Variant::t_double);
  EXPECT_EQ (std::string(v.to_string()), "15");
}

TEST(8)
{
  std::string s = "'1',#1";
  tl::Variant v1;
  tl::Variant v2;
  tl::Extractor ex (s.c_str ());
  ex.read (v1);
  ex.test (",");
  ex.read (v2);
  EXPECT_EQ (v1 == tl::Variant ("1"), true);
  EXPECT_EQ (v2 == tl::Variant (1), true);
  EXPECT_EQ (v2 == v1, false);
  EXPECT_EQ (v1 == v1, true);
  EXPECT_EQ (v2 == v2, true);
  EXPECT_EQ (v2 < v1, true);
  EXPECT_EQ (v1 < v2, false);
  EXPECT_EQ (v1 < v1, false);
  EXPECT_EQ (v2 < v2, false);
}

}



