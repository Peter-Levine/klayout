
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



#ifndef HDR_tlAssert
#define HDR_tlAssert

#include "tlCommon.h"

// For >=C++11, mark assertion_failed() with attribute [[noreturn]] and call std::terminate().
// Or else, throw int(0) to tell the compiler that the assertion will not return.
#if __cplusplus < 201103L
#define ATTRIB_ASSERT TL_PUBLIC
#define END_ASSERT throw int(0)
#else
#define ATTRIB_ASSERT [[noreturn]] TL_PUBLIC
#define END_ASSERT std::terminate()
#endif

namespace tl
{

/** 
 *  @brief The corresponding assert macro
 */

ATTRIB_ASSERT void assertion_failed (const char *filename, unsigned int line, const char *condition);

#define tl_assert(COND) if (!(COND)) { tl::assertion_failed (__FILE__, __LINE__, #COND); END_ASSERT; }

} // namespace tl

#endif

