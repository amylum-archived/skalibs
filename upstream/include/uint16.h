/* ISC license. */

#ifndef UINT16_H
#define UINT16_H

#include "uint64.h"

#include <stdint.h>
typedef uint16_t uint16 ;

#define uint16_little_endian(s, n)
#define uint16_big_endian(s, n) uint16_reverse((s), (n))


extern void uint16_pack (char *, uint16) ;
extern void uint16_pack_big (char *, uint16) ;
extern void uint16_unpack (char const *, uint16 *) ;
extern void uint16_unpack_big (char const *, uint16 *) ;
extern void uint16_reverse (char *, unsigned int) ;

#define UINT16_FMT 6
#define UINT16_OFMT 7
#define UINT16_XFMT 5
#define UINT16_BFMT 17

#define uint16_fmt_base(s, u, b) uint64_fmt_base(s, (uint64)(uint16)(u), b)
#define uint160_fmt_base(s, u, n, b) uint640_fmt_base(s, (uint64)(uint16)(u), n, b)

#define uint16_fmt(s, u) uint64_fmt(s, (uint64)(uint16)(u))
#define uint160_fmt(s, u, n) uint64_fmt(s, (uint64)(uint16)(u), n)
#define uint16_ofmt(s, o) uint64_ofmt(s, (uint64)(uint16)(o))
#define uint160_ofmt(s, o, n) uint64_ofmt(s, (uint64)(uint16)(o), n)
#define uint16_xfmt(s, x) uint64_xfmt(s, (uint64)(uint16)(x))
#define uint160_xfmt(s, x, n) uint64_xfmt(s, (uint64)(uint16)(x), n)
#define uint16_bfmt(s, b) uint64_bfmt(s, (uint64)(uint16)(b))
#define uint160_bfmt(s, b, n) uint64_bfmt(s, (uint64)(uint16)(b), n)

extern unsigned int uint16_fmtlist (char *, uint16 const *, unsigned int) ;

extern unsigned int uint16_scan_base (char const *, uint16 *, unsigned char) ;
extern unsigned int uint160_scan_base (char const *, uint16 *, unsigned char) ;
#define uint16_scan(s, u) uint16_scan_base(s, (u), 10)
#define uint160_scan(s, u) uint160_scan_base(s, (u), 10)
#define uint16_oscan(s, u) uint16_scan_base(s, (u), 8)
#define uint160_oscan(s, u) uint160_scan_base(s, (u), 8)
#define uint16_xscan(s, u) uint16_scan_base(s, (u), 16)
#define uint160_xscan(s, u) uint160_scan_base(s, (u), 16)
#define uint16_bscan(s, u) uint16_scan_base(s, (u), 2)
#define uint160_bscan(s, u) uint160_scan_base(s, (u), 2)

extern unsigned int uint16_scanlist (uint16 *, unsigned int, char const *, unsigned int *) ;

#endif
