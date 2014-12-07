/* ISC license. */

#ifndef GIDSTUFF_H
#define GIDSTUFF_H

#include "uint32.h"

#define GID_FMT UINT32_FMT
#define gid_fmt(s, u) uint32_fmt(s, u)
#define gid_scan(s, u) uint32_scan(s, u)
#define gid_fmtlist(s, tab, n) uint32_fmtlist(s, tab, n)
#define gid_scanlist(tab, max, s, num) uint32_scanlist(tab, max, s, num)

#endif
