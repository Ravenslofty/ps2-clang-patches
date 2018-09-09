# 1 "<built-in>"
# 1 "../../../../../newlib/libm/common/sf_lrint.c"

/* @(#)sf_lrint.c 5.1 93/09/24 */
/*
 * ====================================================
 * Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
 *
 * Developed at SunPro, a Sun Microsystems, Inc. business.
 * Permission to use, copy, modify, and distribute this
 * software is freely granted, provided that this notice 
 * is preserved.
 * ====================================================
 */

/*
 * lrintf(x)
 * Return x rounded to integral value according to the prevailing
 * rounding mode.
 * Method:
 *	Using floating addition.
 * Exception:
 *	Inexact flag raised if x not equal to lrintf(x).
 */

#if 0 /* expanded by -frewrite-includes */
#include "fdlibm.h"
#endif /* expanded by -frewrite-includes */
# 24 "../../../../../newlib/libm/common/sf_lrint.c"
# 1 "../../../../../newlib/libm/common/fdlibm.h" 1

/* @(#)fdlibm.h 5.1 93/09/24 */
/*
 * ====================================================
 * Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
 *
 * Developed at SunPro, a Sun Microsystems, Inc. business.
 * Permission to use, copy, modify, and distribute this
 * software is freely granted, provided that this notice 
 * is preserved.
 * ====================================================
 */

/* REDHAT LOCAL: Include files.  */
#if 0 /* expanded by -frewrite-includes */
#include <math.h>
#endif /* expanded by -frewrite-includes */
# 15 "../../../../../newlib/libm/common/fdlibm.h"
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 1 3
#ifndef  _MATH_H_

#define  _MATH_H_

#if 0 /* expanded by -frewrite-includes */
#include <sys/reent.h>
#endif /* expanded by -frewrite-includes */
# 5 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 1 3
/* This header file provides the reentrancy.  */

/* WARNING: All identifiers here must begin with an underscore.  This file is
   included by stdio.h and others and we therefore must only use identifiers
   in the namespace allotted to us.  */

#ifndef _SYS_REENT_H_
#ifdef __cplusplus
extern "C" {
#endif
# 11 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3
#define _SYS_REENT_H_

#if 0 /* expanded by -frewrite-includes */
#include <_ansi.h>
#endif /* expanded by -frewrite-includes */
# 13 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/_ansi.h" 1 3
/* Provide support for both ANSI and non-ANSI environments.  */

/* To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */

#ifndef	_ANSIDECL_H_
#define	_ANSIDECL_H_

#if 0 /* expanded by -frewrite-includes */
#include <newlib.h>
#endif /* expanded by -frewrite-includes */
# 10 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/_ansi.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/build/mips3el-none-elf/newlib/targ-include/newlib.h" 1 3
/* newlib.h.  Generated from newlib.hin by configure.  */
/* newlib.hin.  Manually edited from the output of autoheader to
   remove all PACKAGE_ macros which will collide with any user
   package using newlib header files and having its own package name,
   version, etc...  */
#ifndef __NEWLIB_H__

#define __NEWLIB_H__ 1

/* EL/IX level */
/* #undef _ELIX_LEVEL */

/* Newlib version */
#if 0 /* expanded by -frewrite-includes */
#include <_newlib_version.h>
#endif /* expanded by -frewrite-includes */
# 14 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/build/mips3el-none-elf/newlib/targ-include/newlib.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/build/mips3el-none-elf/newlib/targ-include/_newlib_version.h" 1 3
/* _newlib_version.h.  Generated from _newlib_version.hin by configure.  */
/* Version macros for internal and downstream use. */
#ifndef _NEWLIB_VERSION_H__
#define _NEWLIB_VERSION_H__ 1

#define _NEWLIB_VERSION "3.0.0"
#define __NEWLIB__ 3
#define __NEWLIB_MINOR__ 0
#define __NEWLIB_PATCHLEVEL__ 0

#endif /* !_NEWLIB_VERSION_H__ */
# 12 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/build/mips3el-none-elf/newlib/targ-include/_newlib_version.h" 3

# 15 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/build/mips3el-none-elf/newlib/targ-include/newlib.h" 2 3

/* C99 formats support (such as %a, %zu, ...) in IO functions like
 * printf/scanf enabled */
/* #undef _WANT_IO_C99_FORMATS */

/* long long type support in IO functions like printf/scanf enabled */
#define _WANT_IO_LONG_LONG 1

/* Register application finalization function using atexit. */
/* #undef _WANT_REGISTER_FINI */

/* long double type support in IO functions like printf/scanf enabled */
/* #undef _WANT_IO_LONG_DOUBLE */

/* Positional argument support in printf functions enabled.  */
/* #undef _WANT_IO_POS_ARGS */

/* Optional reentrant struct support.  Used mostly on platforms with
   very restricted storage.  */
/* #undef _WANT_REENT_SMALL */

/* Multibyte supported */
/* #undef _MB_CAPABLE */

/* MB_LEN_MAX */
#define _MB_LEN_MAX 1

/* ICONV enabled */
/* #undef _ICONV_ENABLED */

/* Enable ICONV external CCS files loading capabilities */
/* #undef _ICONV_ENABLE_EXTERNAL_CCS */

/* Define if the linker supports .preinit_array/.init_array/.fini_array
 * sections.  */
/* #undef HAVE_INITFINI_ARRAY */

/* True if atexit() may dynamically allocate space for cleanup
   functions.  */
#define _ATEXIT_DYNAMIC_ALLOC 1

/* True if long double supported.  */
/* #undef _HAVE_LONG_DOUBLE */

/* Define if compiler supports -fno-tree-loop-distribute-patterns. */
/* #undef _HAVE_CC_INHIBIT_LOOP_TO_LIBCALL */

/* True if long double supported and it is equal to double.  */
/* #undef _LDBL_EQ_DBL */
 
/* Define if ivo supported in streamio.  */
#define _FVWRITE_IN_STREAMIO 1

/* Define if fseek functions support seek optimization.  */
#define _FSEEK_OPTIMIZATION 1

/* Define if wide char orientation is supported.  */
#define _WIDE_ORIENT 1

/* Define if unbuffered stream file optimization is supported.  */
#define _UNBUF_STREAM_OPT 1

/* Define if lite version of exit supported.  */
/* #undef _LITE_EXIT */

/* Define if declare atexit data as global.  */
/* #undef _REENT_GLOBAL_ATEXIT */

/* Define to move the stdio stream FILE objects out of struct _reent and make
   them global.  The stdio stream pointers of struct _reent are initialized to
   point to the global stdio FILE stream objects. */
/* #undef _WANT_REENT_GLOBAL_STDIO_STREAMS */

/* Define if small footprint nano-formatted-IO implementation used.  */
/* #undef _NANO_FORMATTED_IO */

/* Define if using retargetable functions for default lock routines.  */
/* #undef _RETARGETABLE_LOCKING */

/* Define to use type long for time_t.  */
/* #undef _WANT_USE_LONG_TIME_T */

/*
 * Iconv encodings enabled ("to" direction)
 */
/* #undef _ICONV_TO_ENCODING_BIG5 */
/* #undef _ICONV_TO_ENCODING_CP775 */
/* #undef _ICONV_TO_ENCODING_CP850 */
/* #undef _ICONV_TO_ENCODING_CP852 */
/* #undef _ICONV_TO_ENCODING_CP855 */
/* #undef _ICONV_TO_ENCODING_CP866 */
/* #undef _ICONV_TO_ENCODING_EUC_JP */
/* #undef _ICONV_TO_ENCODING_EUC_TW */
/* #undef _ICONV_TO_ENCODING_EUC_KR */
/* #undef _ICONV_TO_ENCODING_ISO_8859_1 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_10 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_11 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_13 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_14 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_15 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_2 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_3 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_4 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_5 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_6 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_7 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_8 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_9 */
/* #undef _ICONV_TO_ENCODING_ISO_IR_111 */
/* #undef _ICONV_TO_ENCODING_KOI8_R */
/* #undef _ICONV_TO_ENCODING_KOI8_RU */
/* #undef _ICONV_TO_ENCODING_KOI8_U */
/* #undef _ICONV_TO_ENCODING_KOI8_UNI */
/* #undef _ICONV_TO_ENCODING_UCS_2 */
/* #undef _ICONV_TO_ENCODING_UCS_2_INTERNAL */
/* #undef _ICONV_TO_ENCODING_UCS_2BE */
/* #undef _ICONV_TO_ENCODING_UCS_2LE */
/* #undef _ICONV_TO_ENCODING_UCS_4 */
/* #undef _ICONV_TO_ENCODING_UCS_4_INTERNAL */
/* #undef _ICONV_TO_ENCODING_UCS_4BE */
/* #undef _ICONV_TO_ENCODING_UCS_4LE */
/* #undef _ICONV_TO_ENCODING_US_ASCII */
/* #undef _ICONV_TO_ENCODING_UTF_16 */
/* #undef _ICONV_TO_ENCODING_UTF_16BE */
/* #undef _ICONV_TO_ENCODING_UTF_16LE */
/* #undef _ICONV_TO_ENCODING_UTF_8 */
/* #undef _ICONV_TO_ENCODING_WIN_1250 */
/* #undef _ICONV_TO_ENCODING_WIN_1251 */
/* #undef _ICONV_TO_ENCODING_WIN_1252 */
/* #undef _ICONV_TO_ENCODING_WIN_1253 */
/* #undef _ICONV_TO_ENCODING_WIN_1254 */
/* #undef _ICONV_TO_ENCODING_WIN_1255 */
/* #undef _ICONV_TO_ENCODING_WIN_1256 */
/* #undef _ICONV_TO_ENCODING_WIN_1257 */
/* #undef _ICONV_TO_ENCODING_WIN_1258 */

/*
 * Iconv encodings enabled ("from" direction)
 */
/* #undef _ICONV_FROM_ENCODING_BIG5 */
/* #undef _ICONV_FROM_ENCODING_CP775 */
/* #undef _ICONV_FROM_ENCODING_CP850 */
/* #undef _ICONV_FROM_ENCODING_CP852 */
/* #undef _ICONV_FROM_ENCODING_CP855 */
/* #undef _ICONV_FROM_ENCODING_CP866 */
/* #undef _ICONV_FROM_ENCODING_EUC_JP */
/* #undef _ICONV_FROM_ENCODING_EUC_TW */
/* #undef _ICONV_FROM_ENCODING_EUC_KR */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_1 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_10 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_11 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_13 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_14 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_15 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_2 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_3 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_4 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_5 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_6 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_7 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_8 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_9 */
/* #undef _ICONV_FROM_ENCODING_ISO_IR_111 */
/* #undef _ICONV_FROM_ENCODING_KOI8_R */
/* #undef _ICONV_FROM_ENCODING_KOI8_RU */
/* #undef _ICONV_FROM_ENCODING_KOI8_U */
/* #undef _ICONV_FROM_ENCODING_KOI8_UNI */
/* #undef _ICONV_FROM_ENCODING_UCS_2 */
/* #undef _ICONV_FROM_ENCODING_UCS_2_INTERNAL */
/* #undef _ICONV_FROM_ENCODING_UCS_2BE */
/* #undef _ICONV_FROM_ENCODING_UCS_2LE */
/* #undef _ICONV_FROM_ENCODING_UCS_4 */
/* #undef _ICONV_FROM_ENCODING_UCS_4_INTERNAL */
/* #undef _ICONV_FROM_ENCODING_UCS_4BE */
/* #undef _ICONV_FROM_ENCODING_UCS_4LE */
/* #undef _ICONV_FROM_ENCODING_US_ASCII */
/* #undef _ICONV_FROM_ENCODING_UTF_16 */
/* #undef _ICONV_FROM_ENCODING_UTF_16BE */
/* #undef _ICONV_FROM_ENCODING_UTF_16LE */
/* #undef _ICONV_FROM_ENCODING_UTF_8 */
/* #undef _ICONV_FROM_ENCODING_WIN_1250 */
/* #undef _ICONV_FROM_ENCODING_WIN_1251 */
/* #undef _ICONV_FROM_ENCODING_WIN_1252 */
/* #undef _ICONV_FROM_ENCODING_WIN_1253 */
/* #undef _ICONV_FROM_ENCODING_WIN_1254 */
/* #undef _ICONV_FROM_ENCODING_WIN_1255 */
/* #undef _ICONV_FROM_ENCODING_WIN_1256 */
/* #undef _ICONV_FROM_ENCODING_WIN_1257 */
/* #undef _ICONV_FROM_ENCODING_WIN_1258 */

#endif /* !__NEWLIB_H__ */
# 206 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/build/mips3el-none-elf/newlib/targ-include/newlib.h" 3

# 11 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/_ansi.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/config.h>
#endif /* expanded by -frewrite-includes */
# 11 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/_ansi.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 1 3
#ifndef __SYS_CONFIG_H__
#define __SYS_CONFIG_H__

#if 0 /* expanded by -frewrite-includes */
#include <machine/ieeefp.h>  /* floating point macros */
#endif /* expanded by -frewrite-includes */
# 4 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 1 3
#ifndef __IEEE_BIG_ENDIAN
#ifndef __IEEE_LITTLE_ENDIAN

/* This file can define macros to choose variations of the IEEE float
   format:

   _FLT_LARGEST_EXPONENT_IS_NORMAL

	Defined if the float format uses the largest exponent for finite
	numbers rather than NaN and infinity representations.  Such a
	format cannot represent NaNs or infinities at all, but it's FLT_MAX
	is twice the IEEE value.

   _FLT_NO_DENORMALS

	Defined if the float format does not support IEEE denormals.  Every
	float with a zero exponent is taken to be a zero representation.
 
   ??? At the moment, there are no equivalent macros above for doubles and
   the macros are not fully supported by --enable-newlib-hw-fp.

   __IEEE_BIG_ENDIAN

        Defined if the float format is big endian.  This is mutually exclusive
        with __IEEE_LITTLE_ENDIAN.

   __IEEE_LITTLE_ENDIAN
 
        Defined if the float format is little endian.  This is mutually exclusive
        with __IEEE_BIG_ENDIAN.

   Note that one of __IEEE_BIG_ENDIAN or __IEEE_LITTLE_ENDIAN must be specified for a
   platform or error will occur.

   __IEEE_BYTES_LITTLE_ENDIAN

        This flag is used in conjunction with __IEEE_BIG_ENDIAN to describe a situation 
	whereby multiple words of an IEEE floating point are in big endian order, but the
	words themselves are little endian with respect to the bytes.

   _DOUBLE_IS_32BITS 

        This is used on platforms that support double by using the 32-bit IEEE
        float type.

   _FLOAT_ARG

        This represents what type a float arg is passed as.  It is used when the type is
        not promoted to double.
	

   __OBSOLETE_MATH_DEFAULT

	Default value for __OBSOLETE_MATH if that's not set by the user.
	It should be set here based on predefined feature macros.

   __OBSOLETE_MATH

	If set to 1 then some new math code will be disabled and older libm
	code will be used instead.  This is necessary because the new math
	code does not support all targets, it assumes that the toolchain has
	ISO C99 support (hexfloat literals, standard fenv semantics), the
	target has IEEE-754 conforming binary32 float and binary64 double
	(not mixed endian) representation, standard SNaN representation,
	double and single precision arithmetics has similar latency and it
	has no legacy SVID matherr support, only POSIX errno and fenv
	exception based error handling.
*/

#if (defined(__arm__) || defined(__thumb__)) && !defined(__MAVERICK__)
/* ARM traditionally used big-endian words; and within those words the
   byte ordering was big or little endian depending upon the target.
   Modern floating-point formats are naturally ordered; in this case
   __VFP_FP__ will be defined, even if soft-float.  */
#ifdef __VFP_FP__
# ifdef __ARMEL__
#  define __IEEE_LITTLE_ENDIAN
# else
# 79 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#  define __IEEE_BIG_ENDIAN
# endif
# 81 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
# if __ARM_FP & 0x8
#  define __OBSOLETE_MATH_DEFAULT 0
# endif
# 84 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#else
# 85 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
# define __IEEE_BIG_ENDIAN
# ifdef __ARMEL__
#  define __IEEE_BYTES_LITTLE_ENDIAN
# endif
# 89 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 90 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 91 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#if defined (__aarch64__)
#if defined (__AARCH64EL__)
#define __IEEE_LITTLE_ENDIAN
#else
# 96 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_BIG_ENDIAN
#endif
# 98 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __OBSOLETE_MATH_DEFAULT 0
#endif
# 100 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __epiphany__
#define __IEEE_LITTLE_ENDIAN
#define Sudden_Underflow 1
#endif
# 105 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __hppa__
#define __IEEE_BIG_ENDIAN
#endif
# 109 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __nds32__
#ifdef __big_endian__
#define __IEEE_BIG_ENDIAN
#else
# 114 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 116 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 117 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __SPU__
#define __IEEE_BIG_ENDIAN

#define isfinite(__y) \
	(__extension__ ({int __cy; \
		(sizeof (__y) == sizeof (float))  ? (1) : \
		(__cy = fpclassify(__y)) != FP_INFINITE && __cy != FP_NAN;}))

#define isinf(__x) ((sizeof (__x) == sizeof (float))  ?  (0) : __isinfd(__x))
#define isnan(__x) ((sizeof (__x) == sizeof (float))  ?  (0) : __isnand(__x))

/*
 * Macros for use in ieeefp.h. We can't just define the real ones here
 * (like those above) as we have name space issues when this is *not*
 * included via generic the ieeefp.h.
 */
#define __ieeefp_isnanf(x)	0
#define __ieeefp_isinff(x)	0
#define __ieeefp_finitef(x)	1
#endif
# 138 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __sparc__
#ifdef __LITTLE_ENDIAN_DATA__
#define __IEEE_LITTLE_ENDIAN
#else
# 143 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_BIG_ENDIAN
#endif
# 145 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 146 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#if defined(__m68k__) || defined(__mc68000__)
#define __IEEE_BIG_ENDIAN
#endif
# 150 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#if defined(__mc68hc11__) || defined(__mc68hc12__) || defined(__mc68hc1x__)
#define __IEEE_BIG_ENDIAN
#ifdef __HAVE_SHORT_DOUBLE__
# define _DOUBLE_IS_32BITS
#endif
# 156 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 157 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#if defined (__H8300__) || defined (__H8300H__) || defined (__H8300S__) || defined (__H8500__) || defined (__H8300SX__)
#define __IEEE_BIG_ENDIAN
#define _FLOAT_ARG float
#define _DOUBLE_IS_32BITS
#endif
# 163 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#if defined (__xc16x__) || defined (__xc16xL__) || defined (__xc16xS__)
#define __IEEE_LITTLE_ENDIAN
#define _FLOAT_ARG float
#define _DOUBLE_IS_32BITS
#endif
# 169 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3


#ifdef __sh__
#ifdef __LITTLE_ENDIAN__
#define __IEEE_LITTLE_ENDIAN
#else
# 175 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_BIG_ENDIAN
#endif
# 177 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#if defined(__SH2E__) || defined(__SH3E__) || defined(__SH4_SINGLE_ONLY__) || defined(__SH2A_SINGLE_ONLY__)
#define _DOUBLE_IS_32BITS
#endif
# 180 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 181 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef _AM29K
#define __IEEE_BIG_ENDIAN
#endif
# 185 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef _WIN32
#define __IEEE_LITTLE_ENDIAN
#endif
# 189 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __i386__
#define __IEEE_LITTLE_ENDIAN
#endif
# 193 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __riscv
#define __IEEE_LITTLE_ENDIAN
#endif
# 197 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __i960__
#define __IEEE_LITTLE_ENDIAN
#endif
# 201 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __lm32__
#define __IEEE_BIG_ENDIAN
#endif
# 205 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __M32R__
#define __IEEE_BIG_ENDIAN
#endif
# 209 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __nvptx__
#define __IEEE_LITTLE_ENDIAN
#endif
# 213 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#if defined(_C4x) || defined(_C3x)
#define __IEEE_BIG_ENDIAN
#define _DOUBLE_IS_32BITS
#endif
# 218 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __TMS320C6X__
#ifdef _BIG_ENDIAN
#define __IEEE_BIG_ENDIAN
#else
# 223 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 225 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 226 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __TIC80__
#define __IEEE_LITTLE_ENDIAN
#endif
# 230 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MIPSEL__
#define __IEEE_LITTLE_ENDIAN
#endif
# 234 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#ifdef __MIPSEB__
#define __IEEE_BIG_ENDIAN
#endif
# 237 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MMIX__
#define __IEEE_BIG_ENDIAN
#endif
# 241 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __D30V__
#define __IEEE_BIG_ENDIAN
#endif
# 245 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

/* necv70 was __IEEE_LITTLE_ENDIAN. */

#ifdef __W65__
#define __IEEE_LITTLE_ENDIAN
#define _DOUBLE_IS_32BITS
#endif
# 252 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#if defined(__Z8001__) || defined(__Z8002__)
#define __IEEE_BIG_ENDIAN
#endif
# 256 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __m88k__
#define __IEEE_BIG_ENDIAN
#endif
# 260 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mn10300__
#define __IEEE_LITTLE_ENDIAN
#endif
# 264 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mn10200__
#define __IEEE_LITTLE_ENDIAN
#define _DOUBLE_IS_32BITS
#endif
# 269 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __v800
#define __IEEE_LITTLE_ENDIAN
#endif
# 273 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __v850
#define __IEEE_LITTLE_ENDIAN
#endif
# 277 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __D10V__
#define __IEEE_BIG_ENDIAN
#if __DOUBLE__ == 32
#define _DOUBLE_IS_32BITS
#endif
# 283 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 284 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __PPC__
#if (defined(_BIG_ENDIAN) && _BIG_ENDIAN) || (defined(_AIX) && _AIX)
#define __IEEE_BIG_ENDIAN
#else
# 289 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#if (defined(_LITTLE_ENDIAN) && _LITTLE_ENDIAN) || (defined(__sun__) && __sun__) || (defined(_WIN32) && _WIN32)
#define __IEEE_LITTLE_ENDIAN
#endif
# 292 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 293 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 294 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __xstormy16__
#define __IEEE_LITTLE_ENDIAN
#endif
# 298 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __arc__
#ifdef __big_endian__
#define __IEEE_BIG_ENDIAN
#else
# 303 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 305 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 306 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __CRX__
#define __IEEE_LITTLE_ENDIAN
#endif
# 310 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __fr30__
#define __IEEE_BIG_ENDIAN
#endif
# 314 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __FT32__
#define __IEEE_LITTLE_ENDIAN
#endif
# 318 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mcore__
#define __IEEE_BIG_ENDIAN
#endif
# 322 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mt__
#define __IEEE_BIG_ENDIAN
#endif
# 326 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __frv__
#define __IEEE_BIG_ENDIAN
#endif
# 330 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __moxie__
#ifdef __MOXIE_BIG_ENDIAN__
#define __IEEE_BIG_ENDIAN
#else
# 335 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 337 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 338 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __ia64__
#ifdef __BIG_ENDIAN__
#define __IEEE_BIG_ENDIAN
#else
# 343 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 345 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 346 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __AVR__
#define __IEEE_LITTLE_ENDIAN
#define _DOUBLE_IS_32BITS
#endif
# 351 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#if defined(__or1k__) || defined(__OR1K__) || defined(__OR1KND__)
#define __IEEE_BIG_ENDIAN
#endif
# 355 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __IP2K__
#define __IEEE_BIG_ENDIAN
#define __SMALL_BITFIELDS
#define _DOUBLE_IS_32BITS
#endif
# 361 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __iq2000__
#define __IEEE_BIG_ENDIAN
#endif
# 365 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MAVERICK__
#ifdef __ARMEL__
#  define __IEEE_LITTLE_ENDIAN
#else  /* must be __ARMEB__ */
# 370 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#  define __IEEE_BIG_ENDIAN
#endif /* __ARMEL__ */
# 372 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif /* __MAVERICK__ */
# 373 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __m32c__
#define __IEEE_LITTLE_ENDIAN
#define __SMALL_BITFIELDS
#endif
# 378 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __CRIS__
#define __IEEE_LITTLE_ENDIAN
#endif
# 382 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __BFIN__
#define __IEEE_LITTLE_ENDIAN
#endif
# 386 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __x86_64__
#define __IEEE_LITTLE_ENDIAN
#endif
# 390 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mep__
#ifdef __LITTLE_ENDIAN__
#define __IEEE_LITTLE_ENDIAN
#else
# 395 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_BIG_ENDIAN
#endif
# 397 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 398 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MICROBLAZE__
#ifndef __MICROBLAZEEL__
#define __IEEE_BIG_ENDIAN
#else
# 403 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 405 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 406 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MSP430__
#define __IEEE_LITTLE_ENDIAN
#define __SMALL_BITFIELDS	/* 16 Bit INT */
#endif
# 411 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __RL78__
#define __IEEE_LITTLE_ENDIAN
#define __SMALL_BITFIELDS	/* 16 Bit INT */
#ifndef __RL78_64BIT_DOUBLES__
#define _DOUBLE_IS_32BITS
#endif
# 418 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 419 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __RX__

#ifdef __RX_BIG_ENDIAN__
#define __IEEE_BIG_ENDIAN
#else
# 425 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 427 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifndef __RX_64BIT_DOUBLES__
#define _DOUBLE_IS_32BITS
#endif
# 431 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __RX_16BIT_INTS__
#define __SMALL_BITFIELDS
#endif
# 435 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#endif
# 437 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#if (defined(__CR16__) || defined(__CR16C__) ||defined(__CR16CP__))
#define __IEEE_LITTLE_ENDIAN
#define __SMALL_BITFIELDS	/* 16 Bit INT */
#endif
# 442 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __NIOS2__
# ifdef __nios2_big_endian__
#  define __IEEE_BIG_ENDIAN
# else
# 447 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#  define __IEEE_LITTLE_ENDIAN
# endif
# 449 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 450 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __VISIUM__
#define __IEEE_BIG_ENDIAN
#endif
# 454 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __CYGWIN__
#define __OBSOLETE_MATH_DEFAULT 0
#endif
# 458 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifndef __OBSOLETE_MATH_DEFAULT
/* Use old math code by default.  */
#define __OBSOLETE_MATH_DEFAULT 1
#endif
# 463 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#ifndef __OBSOLETE_MATH
#define __OBSOLETE_MATH __OBSOLETE_MATH_DEFAULT
#endif
# 466 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifndef __IEEE_BIG_ENDIAN
#ifndef __IEEE_LITTLE_ENDIAN
#error Endianess not declared!!
#endif /* not __IEEE_LITTLE_ENDIAN */
# 471 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif /* not __IEEE_BIG_ENDIAN */
# 472 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#endif /* not __IEEE_LITTLE_ENDIAN */
# 474 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif /* not __IEEE_BIG_ENDIAN */
# 475 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

# 5 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/features.h>	/* POSIX defs */
#endif /* expanded by -frewrite-includes */
# 5 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 1 3
/*
 *  Written by Joel Sherrill <joel@OARcorp.com>.
 *
 *  COPYRIGHT (c) 1989-2014.
 *
 *  On-Line Applications Research Corporation (OAR).
 *
 *  Permission to use, copy, modify, and distribute this software for any
 *  purpose without fee is hereby granted, provided that this entire notice
 *  is included in all copies of any software which is or includes a copy
 *  or modification of this software.
 *
 *  THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 *  WARRANTY.  IN PARTICULAR,  THE AUTHOR MAKES NO REPRESENTATION
 *  OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY OF THIS
 *  SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 *  $Id$
 */

#ifndef _SYS_FEATURES_H
#define _SYS_FEATURES_H

#ifdef __cplusplus
extern "C" {
#endif
# 27 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3

#if 0 /* expanded by -frewrite-includes */
#include <_newlib_version.h>
#endif /* expanded by -frewrite-includes */
# 28 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
# 29 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3

/* Macro to test version of GCC.  Returns 0 for non-GCC or too old GCC. */
#ifndef __GNUC_PREREQ
# if defined __GNUC__ && defined __GNUC_MINOR__
#  define __GNUC_PREREQ(maj, min) \
	((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
# else
# 36 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#  define __GNUC_PREREQ(maj, min) 0
# endif
# 38 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#endif /* __GNUC_PREREQ */
# 39 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
/* Version with trailing underscores for BSD compatibility. */
#define	__GNUC_PREREQ__(ma, mi)	__GNUC_PREREQ(ma, mi)


/*
 * Feature test macros control which symbols are exposed by the system
 * headers.  Any of these must be defined before including any headers.
 *
 * __STRICT_ANSI__ (defined by gcc -ansi, -std=c90, -std=c99, or -std=c11)
 *	ISO C
 *
 * _POSIX_SOURCE (deprecated by _POSIX_C_SOURCE=1)
 * _POSIX_C_SOURCE >= 1
 * 	POSIX.1-1990
 *
 * _POSIX_C_SOURCE >= 2
 * 	POSIX.2-1992
 *
 * _POSIX_C_SOURCE >= 199309L
 * 	POSIX.1b-1993 Real-time extensions
 *
 * _POSIX_C_SOURCE >= 199506L
 * 	POSIX.1c-1995 Threads extensions
 *
 * _POSIX_C_SOURCE >= 200112L
 * 	POSIX.1-2001 and C99
 *
 * _POSIX_C_SOURCE >= 200809L
 * 	POSIX.1-2008
 *
 * _XOPEN_SOURCE
 *	POSIX.1-1990 and XPG4
 *
 * _XOPEN_SOURCE_EXTENDED
 *	SUSv1 (POSIX.2-1992 plus XPG4v2)
 *
 * _XOPEN_SOURCE >= 500
 *	SUSv2 (POSIX.1c-1995 plus XSI)
 *
 * _XOPEN_SOURCE >= 600
 *	SUSv3 (POSIX.1-2001 plus XSI) and C99
 *
 * _XOPEN_SOURCE >= 700
 *	SUSv4 (POSIX.1-2008 plus XSI)
 *
 * _ISOC99_SOURCE or gcc -std=c99 or g++
 * 	ISO C99
 *
 * _ISOC11_SOURCE or gcc -std=c11 or g++ -std=c++11
 * 	ISO C11
 *
 * _ATFILE_SOURCE (implied by _POSIX_C_SOURCE >= 200809L)
 *	"at" functions
 *
 * _LARGEFILE_SOURCE (deprecated by _XOPEN_SOURCE >= 500)
 *	fseeko, ftello
 *
 * _GNU_SOURCE
 * 	All of the above plus GNU extensions
 *
 * _BSD_SOURCE (deprecated by _DEFAULT_SOURCE)
 * _SVID_SOURCE (deprecated by _DEFAULT_SOURCE)
 * _DEFAULT_SOURCE (or none of the above)
 * 	POSIX-1.2008 with BSD and SVr4 extensions
 *
 * _FORTIFY_SOURCE = 1 or 2
 * 	Object Size Checking function wrappers
 */

#ifdef _GNU_SOURCE
#undef _ATFILE_SOURCE
#define	_ATFILE_SOURCE		1
#undef	_DEFAULT_SOURCE
#define	_DEFAULT_SOURCE		1
#undef _ISOC99_SOURCE
#define	_ISOC99_SOURCE		1
#undef _ISOC11_SOURCE
#define	_ISOC11_SOURCE		1
#undef _POSIX_SOURCE
#define	_POSIX_SOURCE		1
#undef _POSIX_C_SOURCE
#define	_POSIX_C_SOURCE		200809L
#undef _XOPEN_SOURCE
#define	_XOPEN_SOURCE		700
#undef _XOPEN_SOURCE_EXTENDED
#define	_XOPEN_SOURCE_EXTENDED	1
#endif /* _GNU_SOURCE */
# 126 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3

#if defined(_BSD_SOURCE) || defined(_SVID_SOURCE) || \
   (!defined(__STRICT_ANSI__) && !defined(_ANSI_SOURCE) && \
   !defined(_ISOC99_SOURCE) && !defined(_POSIX_SOURCE) && \
   !defined(_POSIX_C_SOURCE) && !defined(_XOPEN_SOURCE))
#undef _DEFAULT_SOURCE
#define	_DEFAULT_SOURCE		1
#endif
# 134 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3

#if defined(_DEFAULT_SOURCE)
#undef _POSIX_SOURCE
#define	_POSIX_SOURCE		1
#undef _POSIX_C_SOURCE
#define	_POSIX_C_SOURCE		200809L
#endif
# 141 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3

#if !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE) && \
  ((!defined(__STRICT_ANSI__) && !defined(_ANSI_SOURCE)) || \
   (_XOPEN_SOURCE - 0) >= 500)
#define	_POSIX_SOURCE		1
#if !defined(_XOPEN_SOURCE) || (_XOPEN_SOURCE - 0) >= 700
#define	_POSIX_C_SOURCE		200809L
#elif (_XOPEN_SOURCE - 0) >= 600
# 149 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#define	_POSIX_C_SOURCE		200112L
#elif (_XOPEN_SOURCE - 0) >= 500
# 151 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#define	_POSIX_C_SOURCE		199506L
#elif (_XOPEN_SOURCE - 0) < 500
# 153 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#define	_POSIX_C_SOURCE		2
#endif
# 155 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#endif
# 156 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3

#if defined(_POSIX_C_SOURCE) && _POSIX_C_SOURCE >= 200809
#undef _ATFILE_SOURCE
#define	_ATFILE_SOURCE		1
#endif
# 161 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3

/*
 * The following private macros are used throughout the headers to control
 * which symbols should be exposed.  They are for internal use only, as
 * indicated by the leading double underscore, and must never be used outside
 * of these headers.
 *
 * __POSIX_VISIBLE
 * 	any version of POSIX.1; enabled by default, or with _POSIX_SOURCE,
 * 	any value of _POSIX_C_SOURCE, or _XOPEN_SOURCE >= 500.
 *
 * __POSIX_VISIBLE >= 2
 * 	POSIX.2-1992; enabled by default, with _POSIX_C_SOURCE >= 2,
 * 	or _XOPEN_SOURCE >= 500.
 *
 * __POSIX_VISIBLE >= 199309
 * 	POSIX.1b-1993; enabled by default, with _POSIX_C_SOURCE >= 199309L,
 * 	or _XOPEN_SOURCE >= 500.
 *
 * __POSIX_VISIBLE >= 199506
 * 	POSIX.1c-1995; enabled by default, with _POSIX_C_SOURCE >= 199506L,
 * 	or _XOPEN_SOURCE >= 500.
 *
 * __POSIX_VISIBLE >= 200112
 * 	POSIX.1-2001; enabled by default, with _POSIX_C_SOURCE >= 200112L,
 * 	or _XOPEN_SOURCE >= 600.
 *
 * __POSIX_VISIBLE >= 200809
 * 	POSIX.1-2008; enabled by default, with _POSIX_C_SOURCE >= 200809L,
 * 	or _XOPEN_SOURCE >= 700.
 *
 * __XSI_VISIBLE
 *	XPG4 XSI extensions; enabled with any version of _XOPEN_SOURCE.
 *
 * __XSI_VISIBLE >= 4
 *	SUSv1 XSI extensions; enabled with both _XOPEN_SOURCE and
 * 	_XOPEN_SOURCE_EXTENDED together.
 *
 * __XSI_VISIBLE >= 500
 *	SUSv2 XSI extensions; enabled with _XOPEN_SOURCE >= 500.
 *
 * __XSI_VISIBLE >= 600
 *	SUSv3 XSI extensions; enabled with _XOPEN_SOURCE >= 600.
 *
 * __XSI_VISIBLE >= 700
 *	SUSv4 XSI extensions; enabled with _XOPEN_SOURCE >= 700.
 *
 * __ISO_C_VISIBLE >= 1999
 * 	ISO C99; enabled with gcc -std=c99 or newer (on by default since GCC 5),
 * 	any version of C++, or with _ISOC99_SOURCE, _POSIX_C_SOURCE >= 200112L,
 * 	or _XOPEN_SOURCE >= 600.
 *
 * __ISO_C_VISIBLE >= 2011
 * 	ISO C11; enabled with gcc -std=c11 or newer (on by default since GCC 5),
 * 	g++ -std=c++11 or newer (on by default since GCC 6), or with
 * 	_ISOC11_SOURCE.
 *
 * __ATFILE_VISIBLE
 *	"at" functions; enabled by default, with _ATFILE_SOURCE,
 * 	_POSIX_C_SOURCE >= 200809L, or _XOPEN_SOURCE >= 700.
 *
 * __LARGEFILE_VISIBLE
 *	fseeko, ftello; enabled with _LARGEFILE_SOURCE or _XOPEN_SOURCE >= 500.
 *
 * __BSD_VISIBLE
 * 	BSD extensions; enabled by default, or with _BSD_SOURCE.
 *
 * __SVID_VISIBLE
 * 	SVr4 extensions; enabled by default, or with _SVID_SOURCE.
 *
 * __MISC_VISIBLE
 * 	Extensions found in both BSD and SVr4 (shorthand for
 * 	(__BSD_VISIBLE || __SVID_VISIBLE)), or newlib-specific
 * 	extensions; enabled by default.
 *
 * __GNU_VISIBLE
 * 	GNU extensions; enabled with _GNU_SOURCE.
 *
 * __SSP_FORTIFY_LEVEL
 * 	Object Size Checking; defined to 0 (off), 1, or 2.
 *
 * In all cases above, "enabled by default" means either by defining
 * _DEFAULT_SOURCE, or by not defining any of the public feature test macros.
 */

#ifdef _ATFILE_SOURCE
#define	__ATFILE_VISIBLE	1
#else
# 249 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#define	__ATFILE_VISIBLE	0
#endif
# 251 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3

#ifdef _DEFAULT_SOURCE
#define	__BSD_VISIBLE		1
#else
# 255 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#define	__BSD_VISIBLE		0
#endif
# 257 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3

#ifdef _GNU_SOURCE
#define	__GNU_VISIBLE		1
#else
# 261 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#define	__GNU_VISIBLE		0
#endif
# 263 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3

#if defined(_ISOC11_SOURCE) || \
  (__STDC_VERSION__ - 0) >= 201112L || (__cplusplus - 0) >= 201103L
#define	__ISO_C_VISIBLE		2011
#elif defined(_ISOC99_SOURCE) || (_POSIX_C_SOURCE - 0) >= 200112L || \
  (__STDC_VERSION__ - 0) >= 199901L || defined(__cplusplus)
# 269 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#define	__ISO_C_VISIBLE		1999
#else
# 271 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#define	__ISO_C_VISIBLE		1990
#endif
# 273 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3

#if defined(_LARGEFILE_SOURCE) || (_XOPEN_SOURCE - 0) >= 500
#define	__LARGEFILE_VISIBLE	1
#else
# 277 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#define	__LARGEFILE_VISIBLE	0
#endif
# 279 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3

#ifdef _DEFAULT_SOURCE
#define	__MISC_VISIBLE		1
#else
# 283 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#define	__MISC_VISIBLE		0
#endif
# 285 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3

#if (_POSIX_C_SOURCE - 0) >= 200809L
#define	__POSIX_VISIBLE		200809
#elif (_POSIX_C_SOURCE - 0) >= 200112L
# 289 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#define	__POSIX_VISIBLE		200112
#elif (_POSIX_C_SOURCE - 0) >= 199506L
# 291 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#define	__POSIX_VISIBLE		199506
#elif (_POSIX_C_SOURCE - 0) >= 199309L
# 293 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#define	__POSIX_VISIBLE		199309
#elif (_POSIX_C_SOURCE - 0) >= 2 || defined(_XOPEN_SOURCE)
# 295 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#define	__POSIX_VISIBLE		199209
#elif defined(_POSIX_SOURCE) || defined(_POSIX_C_SOURCE)
# 297 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#define	__POSIX_VISIBLE		199009
#else
# 299 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#define	__POSIX_VISIBLE		0
#endif
# 301 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3

#ifdef _DEFAULT_SOURCE
#define	__SVID_VISIBLE		1
#else
# 305 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#define	__SVID_VISIBLE		0
#endif
# 307 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3

#if (_XOPEN_SOURCE - 0) >= 700
#define	__XSI_VISIBLE		700
#elif (_XOPEN_SOURCE - 0) >= 600
# 311 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#define	__XSI_VISIBLE		600
#elif (_XOPEN_SOURCE - 0) >= 500
# 313 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#define	__XSI_VISIBLE		500
#elif defined(_XOPEN_SOURCE) && defined(_XOPEN_SOURCE_EXTENDED)
# 315 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#define	__XSI_VISIBLE		4
#elif defined(_XOPEN_SOURCE)
# 317 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#define	__XSI_VISIBLE		1
#else
# 319 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#define	__XSI_VISIBLE		0
#endif
# 321 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3

#if _FORTIFY_SOURCE > 0 && !defined(__cplusplus) && !defined(__lint__) && \
   (__OPTIMIZE__ > 0 || defined(__clang__)) && __GNUC_PREREQ__(4, 1)
#  if _FORTIFY_SOURCE > 1
#    define __SSP_FORTIFY_LEVEL 2
#  else
# 327 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#    define __SSP_FORTIFY_LEVEL 1
#  endif
# 329 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#else
# 330 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#  define __SSP_FORTIFY_LEVEL 0
#endif
# 332 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3

/* RTEMS adheres to POSIX -- 1003.1b with some features from annexes.  */

#ifdef __rtems__
#define _POSIX_JOB_CONTROL     		1
#define _POSIX_SAVED_IDS       		1
#define _POSIX_VERSION			199309L
#define _POSIX_ASYNCHRONOUS_IO		1
#define _POSIX_FSYNC			1
#define _POSIX_MAPPED_FILES		1
#define _POSIX_MEMLOCK			1
#define _POSIX_MEMLOCK_RANGE		1
#define _POSIX_MEMORY_PROTECTION	1
#define _POSIX_MESSAGE_PASSING		1
#define _POSIX_MONOTONIC_CLOCK		200112L
#define _POSIX_CLOCK_SELECTION		200112L
#define _POSIX_PRIORITIZED_IO		1
#define _POSIX_PRIORITY_SCHEDULING	1
#define _POSIX_REALTIME_SIGNALS		1
#define _POSIX_SEMAPHORES		1
#define _POSIX_SHARED_MEMORY_OBJECTS	1
#define _POSIX_SYNCHRONIZED_IO		1
#define _POSIX_TIMERS			1
#define _POSIX_BARRIERS                 200112L
#define _POSIX_READER_WRITER_LOCKS      200112L
#define _POSIX_SPIN_LOCKS               200112L


/* In P1003.1b but defined by drafts at least as early as P1003.1c/D10  */
#define _POSIX_THREADS				1
#define _POSIX_THREAD_ATTR_STACKADDR		1
#define _POSIX_THREAD_ATTR_STACKSIZE		1
#define _POSIX_THREAD_PRIORITY_SCHEDULING	1
#define _POSIX_THREAD_PRIO_INHERIT		1
#define _POSIX_THREAD_PRIO_PROTECT		1
#define _POSIX_THREAD_PROCESS_SHARED		1
#define _POSIX_THREAD_SAFE_FUNCTIONS		1

/* P1003.4b/D8 defines the constants below this comment. */
#define _POSIX_SPAWN				1
#define _POSIX_TIMEOUTS				1
#define _POSIX_CPUTIME				1
#define _POSIX_THREAD_CPUTIME			1
#define _POSIX_SPORADIC_SERVER			1
#define _POSIX_THREAD_SPORADIC_SERVER		1
#define _POSIX_DEVICE_CONTROL			1
#define _POSIX_DEVCTL_DIRECTION			1
#define _POSIX_INTERRUPT_CONTROL		1
#define _POSIX_ADVISORY_INFO			1

/* UNIX98 added some new pthread mutex attributes */
#define _UNIX98_THREAD_MUTEX_ATTRIBUTES         1

/* POSIX 1003.26-2003 defined device control method */
#define _POSIX_26_VERSION			200312L

#endif
# 389 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3

/* XMK loosely adheres to POSIX -- 1003.1 */
#ifdef __XMK__
#define _POSIX_THREADS				1
#define _POSIX_THREAD_PRIORITY_SCHEDULING	1
#endif
# 395 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3


#ifdef __svr4__
# define _POSIX_JOB_CONTROL     1
# define _POSIX_SAVED_IDS       1
# define _POSIX_VERSION 199009L
#endif
# 402 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3

#ifdef __CYGWIN__

#if __POSIX_VISIBLE >= 200809
#define _POSIX_VERSION				200809L
#define _POSIX2_VERSION				200809L
#elif __POSIX_VISIBLE >= 200112
# 409 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#define _POSIX_VERSION				200112L
#define _POSIX2_VERSION				200112L
#elif __POSIX_VISIBLE >= 199506
# 412 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#define _POSIX_VERSION				199506L
#define _POSIX2_VERSION				199506L
#elif __POSIX_VISIBLE >= 199309
# 415 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#define _POSIX_VERSION				199309L
#define _POSIX2_VERSION				199209L
#elif __POSIX_VISIBLE >= 199209
# 418 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#define _POSIX_VERSION				199009L
#define _POSIX2_VERSION				199209L
#elif __POSIX_VISIBLE
# 421 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#define _POSIX_VERSION				199009L
#endif
# 423 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#if __XSI_VISIBLE >= 4
#define _XOPEN_VERSION				__XSI_VISIBLE
#endif
# 426 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3

#define _POSIX_ADVISORY_INFO			200809L
#define _POSIX_ASYNCHRONOUS_IO			200809L
#define _POSIX_BARRIERS				200809L
#define _POSIX_CHOWN_RESTRICTED			     1
#define _POSIX_CLOCK_SELECTION			200809L
#define _POSIX_CPUTIME				200809L
#define _POSIX_FSYNC				200809L
#define _POSIX_IPV6				200809L
#define _POSIX_JOB_CONTROL			     1
#define _POSIX_MAPPED_FILES			200809L
/* #define _POSIX_MEMLOCK			    -1 */
#define _POSIX_MEMLOCK_RANGE			200809L
#define _POSIX_MEMORY_PROTECTION		200809L
#define _POSIX_MESSAGE_PASSING			200809L
#define _POSIX_MONOTONIC_CLOCK			200809L
#define _POSIX_NO_TRUNC				     1
/* #define _POSIX_PRIORITIZED_IO		    -1 */
#define _POSIX_PRIORITY_SCHEDULING		200809L
#define _POSIX_RAW_SOCKETS			200809L
#define _POSIX_READER_WRITER_LOCKS		200809L
#define _POSIX_REALTIME_SIGNALS			200809L
#define _POSIX_REGEXP				     1
#define _POSIX_SAVED_IDS			     1
#define _POSIX_SEMAPHORES			200809L
#define _POSIX_SHARED_MEMORY_OBJECTS		200809L
#define _POSIX_SHELL				     1
#define _POSIX_SPAWN				200809L
#define _POSIX_SPIN_LOCKS			200809L
/* #define _POSIX_SPORADIC_SERVER		    -1 */
#define _POSIX_SYNCHRONIZED_IO			200809L
#define _POSIX_THREAD_ATTR_STACKADDR		200809L
#define _POSIX_THREAD_ATTR_STACKSIZE		200809L
#define _POSIX_THREAD_CPUTIME			200809L
/* #define _POSIX_THREAD_PRIO_INHERIT		    -1 */
/* #define _POSIX_THREAD_PRIO_PROTECT		    -1 */
#define _POSIX_THREAD_PRIORITY_SCHEDULING	200809L
#define _POSIX_THREAD_PROCESS_SHARED		200809L
#define _POSIX_THREAD_SAFE_FUNCTIONS		200809L
/* #define _POSIX_THREAD_SPORADIC_SERVER	    -1 */
#define _POSIX_THREADS				200809L
#define _POSIX_TIMEOUTS				200809L
#define _POSIX_TIMERS				200809L
/* #define _POSIX_TRACE				    -1 */
/* #define _POSIX_TRACE_EVENT_FILTER		    -1 */
/* #define _POSIX_TRACE_INHERIT			    -1 */
/* #define _POSIX_TRACE_LOG			    -1 */
/* #define _POSIX_TYPED_MEMORY_OBJECTS		    -1 */
#define _POSIX_VDISABLE				   '\0'

#if __POSIX_VISIBLE >= 2
#define _POSIX2_C_VERSION			_POSIX2_VERSION
#define _POSIX2_C_BIND				_POSIX2_VERSION
#define _POSIX2_C_DEV				_POSIX2_VERSION
#define _POSIX2_CHAR_TERM			_POSIX2_VERSION
/* #define _POSIX2_FORT_DEV			    -1 */
/* #define _POSIX2_FORT_RUN			    -1 */
/* #define _POSIX2_LOCALEDEF			    -1 */
/* #define _POSIX2_PBS				    -1 */
/* #define _POSIX2_PBS_ACCOUNTING		    -1 */
/* #define _POSIX2_PBS_CHECKPOINT		    -1 */
/* #define _POSIX2_PBS_LOCATE			    -1 */
/* #define _POSIX2_PBS_MESSAGE			    -1 */
/* #define _POSIX2_PBS_TRACK			    -1 */
#define _POSIX2_SW_DEV				_POSIX2_VERSION
#define _POSIX2_UPE				_POSIX2_VERSION
#endif /* __POSIX_VISIBLE >= 2 */
# 493 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3

#define _POSIX_V6_ILP32_OFF32			    -1
#ifdef __LP64__
#define _POSIX_V6_ILP32_OFFBIG			    -1
#define _POSIX_V6_LP64_OFF64			     1
#define _POSIX_V6_LPBIG_OFFBIG			     1
#else
# 500 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#define _POSIX_V6_ILP32_OFFBIG			     1
#define _POSIX_V6_LP64_OFF64			    -1
#define _POSIX_V6_LPBIG_OFFBIG			    -1
#endif
# 504 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#define _POSIX_V7_ILP32_OFF32			_POSIX_V6_ILP32_OFF32
#define _POSIX_V7_ILP32_OFFBIG			_POSIX_V6_ILP32_OFFBIG
#define _POSIX_V7_LP64_OFF64			_POSIX_V6_LP64_OFF64
#define _POSIX_V7_LPBIG_OFFBIG			_POSIX_V6_LPBIG_OFFBIG
#define _XBS5_ILP32_OFF32			_POSIX_V6_ILP32_OFF32
#define _XBS5_ILP32_OFFBIG			_POSIX_V6_ILP32_OFFBIG
#define _XBS5_LP64_OFF64			_POSIX_V6_LP64_OFF64
#define _XBS5_LPBIG_OFFBIG			_POSIX_V6_LPBIG_OFFBIG

#if __XSI_VISIBLE
#define _XOPEN_CRYPT				     1
#define _XOPEN_ENH_I18N				     1
/* #define _XOPEN_LEGACY			    -1 */
/* #define _XOPEN_REALTIME			    -1 */
/* #define _XOPEN_REALTIME_THREADS		    -1 */
#define _XOPEN_SHM				     1
/* #define _XOPEN_STREAMS			    -1 */
/* #define _XOPEN_UNIX				    -1 */
#endif /* __XSI_VISIBLE */
# 523 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3

/* The value corresponds to UNICODE version 5.2, which is the current
   state of newlib's wide char conversion functions. */
#define __STDC_ISO_10646__ 200910L

#endif /* __CYGWIN__ */
# 529 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3

#ifdef __cplusplus
}
#endif
# 533 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
#endif /* _SYS_FEATURES_H */
# 534 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/features.h" 3
# 6 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 2 3

#ifdef __aarch64__
#define MALLOC_ALIGNMENT 16
#endif
# 10 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

/* exceptions first */
#if defined(__H8500__) || defined(__W65__)
#define __SMALL_BITFIELDS
/* ???  This conditional is true for the h8500 and the w65, defining H8300
   in those cases probably isn't the right thing to do.  */
#define H8300 1
#endif
# 18 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

/* 16 bit integer machines */
#if defined(__Z8001__) || defined(__Z8002__) || defined(__H8500__) || defined(__W65__) || defined (__mn10200__) || defined (__AVR__)

#undef INT_MAX
#undef UINT_MAX
#define INT_MAX 32767
#define UINT_MAX 65535
#endif
# 27 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

#if defined (__H8300__) || defined (__H8300H__) || defined(__H8300S__) || defined (__H8300SX__)
#define __SMALL_BITFIELDS
#define H8300 1
#undef INT_MAX
#undef UINT_MAX
#define INT_MAX __INT_MAX__
#define UINT_MAX (__INT_MAX__ * 2U + 1)
#endif
# 36 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

#if (defined(__CR16__) || defined(__CR16C__) ||defined(__CR16CP__))
#ifndef __INT32__
#define __SMALL_BITFIELDS      
#undef INT_MAX
#undef UINT_MAX
#define INT_MAX 32767
#define UINT_MAX (__INT_MAX__ * 2U + 1)
#else /* INT32 */
# 45 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3
#undef INT_MAX
#undef UINT_MAX
#define INT_MAX 2147483647
#define UINT_MAX (__INT_MAX__ * 2U + 1)
#endif /* INT32 */
# 50 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

#endif /* CR16C */
# 52 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

#if defined (__xc16x__) || defined (__xc16xL__) || defined (__xc16xS__)
#define __SMALL_BITFIELDS
#endif
# 56 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

#ifdef __W65__
#define __SMALL_BITFIELDS
#endif
# 60 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

#if defined(__D10V__)
#define __SMALL_BITFIELDS
#undef INT_MAX
#undef UINT_MAX
#define INT_MAX __INT_MAX__
#define UINT_MAX (__INT_MAX__ * 2U + 1)
#define _POINTER_INT short
#endif
# 69 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

#if defined(__mc68hc11__) || defined(__mc68hc12__) || defined(__mc68hc1x__)
#undef INT_MAX
#undef UINT_MAX
#define INT_MAX __INT_MAX__
#define UINT_MAX (__INT_MAX__ * 2U + 1)
#define _POINTER_INT short
#endif
# 77 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

#if defined(__m68k__) || defined(__mc68000__) || defined(__riscv)
#define _READ_WRITE_RETURN_TYPE _ssize_t
#endif
# 81 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

#ifdef ___AM29K__
#define _FLOAT_RET double
#endif
# 85 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

#ifdef __i386__
#ifndef __unix__
/* in other words, go32 */
#define _FLOAT_RET double
#endif
# 91 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3
#if defined(__linux__) || defined(__RDOS__)
/* we want the reentrancy structure to be returned by a function */
#define __DYNAMIC_REENT__
#define HAVE_GETDATE
#define _READ_WRITE_RETURN_TYPE _ssize_t
#define __LARGE64_FILES 1
/* we use some glibc header files so turn on glibc large file feature */
#define _LARGEFILE64_SOURCE 1
#endif
# 100 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3
#endif
# 101 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

#ifdef __mn10200__
#define __SMALL_BITFIELDS
#endif
# 105 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

#ifdef __AVR__
#define __SMALL_BITFIELDS
#define _POINTER_INT short
#endif
# 110 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

#ifdef __v850
#define __ATTRIBUTE_IMPURE_PTR__ __attribute__((__sda__))
#endif
# 114 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

/* For the PowerPC eabi, force the _impure_ptr to be in .sdata */
#if defined(__PPC__)
#if defined(_CALL_SYSV)
#define __ATTRIBUTE_IMPURE_PTR__ __attribute__((__section__(".sdata")))
#endif
# 120 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3
#ifdef __SPE__
#define _LONG_DOUBLE double
#endif
# 123 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3
#endif
# 124 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

/* Configure small REENT structure for Xilinx MicroBlaze platforms */
#if defined (__MICROBLAZE__)
#ifndef _REENT_SMALL
#define _REENT_SMALL
#endif
# 130 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3
/* Xilinx XMK uses Unix98 mutex */
#ifdef __XMK__
#define _UNIX98_THREAD_MUTEX_ATTRIBUTES
#endif
# 134 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3
#endif
# 135 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

#if defined(__mips__) && !defined(__rtems__)
#define __ATTRIBUTE_IMPURE_PTR__ __attribute__((__section__(".sdata")))
#endif
# 139 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

#ifdef __xstormy16__
#define __SMALL_BITFIELDS
#undef INT_MAX
#undef UINT_MAX
#define INT_MAX __INT_MAX__
#define UINT_MAX (__INT_MAX__ * 2U + 1)
#define MALLOC_ALIGNMENT 8
#define _POINTER_INT short
#define __BUFSIZ__ 16
#define _REENT_SMALL
#endif
# 151 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

#if defined __MSP430__
#ifndef _REENT_SMALL
#define _REENT_SMALL
#endif
# 156 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

#define __BUFSIZ__ 256
#define __SMALL_BITFIELDS

#ifdef __MSP430X_LARGE__
#define _POINTER_INT long
#else
# 163 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3
#define _POINTER_INT int
#endif
# 165 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3
#endif
# 166 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

#ifdef __m32c__
#define __SMALL_BITFIELDS
#undef INT_MAX
#undef UINT_MAX
#define INT_MAX __INT_MAX__
#define UINT_MAX (__INT_MAX__ * 2U + 1)
#define MALLOC_ALIGNMENT 8
#if defined(__r8c_cpu__) || defined(__m16c_cpu__)
#define _POINTER_INT short
#else
# 177 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3
#define _POINTER_INT long
#endif
# 179 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3
#define __BUFSIZ__ 16
#define _REENT_SMALL
#endif /* __m32c__ */
# 182 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

#ifdef __SPU__
#define MALLOC_ALIGNMENT 16
#define __CUSTOM_FILE_IO__
#endif
# 187 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

#if defined(__or1k__) || defined(__or1knd__)
#define __DYNAMIC_REENT__
#endif
# 191 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

/* This block should be kept in sync with GCC's limits.h.  The point
   of having these definitions here is to not include limits.h, which
   would pollute the user namespace, while still using types of the
   the correct widths when deciding how to define __int32_t and
   __int64_t.  */
#ifndef __INT_MAX__
# ifdef INT_MAX
#  define __INT_MAX__ INT_MAX
# else
# 201 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3
#  define __INT_MAX__ 2147483647
# endif
# 203 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3
#endif
# 204 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

#ifndef __LONG_MAX__
# ifdef LONG_MAX
#  define __LONG_MAX__ LONG_MAX
# else
# 209 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3
#  if defined (__alpha__) || (defined (__sparc__) && defined(__arch64__)) \
      || defined (__sparcv9)
#   define __LONG_MAX__ 9223372036854775807L
#  else
# 213 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3
#   define __LONG_MAX__ 2147483647L
#  endif /* __alpha__ || sparc64 */
# 215 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3
# endif
# 216 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3
#endif
# 217 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3
/* End of block that should be kept in sync with GCC's limits.h.  */

#ifndef _POINTER_INT
#define _POINTER_INT long
#endif
# 222 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

#ifdef __frv__
#define __ATTRIBUTE_IMPURE_PTR__ __attribute__((__section__(".sdata")))
#endif
# 226 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3
#undef __RAND_MAX
#if __INT_MAX__ == 32767
#define __RAND_MAX 32767
#else
# 230 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3
#define __RAND_MAX 0x7fffffff
#endif
# 232 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

#if defined(__CYGWIN__)
#if 0 /* expanded by -frewrite-includes */
#include <cygwin/config.h>
#endif /* expanded by -frewrite-includes */
# 234 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3
# 235 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3
#endif
# 236 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

#if defined(__rtems__)
#define __FILENAME_MAX__ 255
#define _READ_WRITE_RETURN_TYPE _ssize_t
#define __DYNAMIC_REENT__
#define _REENT_GLOBAL_ATEXIT
#define _REENT_GLOBAL_STDIO_STREAMS
#endif
# 244 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

#ifndef __EXPORT
#define __EXPORT
#endif
# 248 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

#ifndef __IMPORT
#define __IMPORT
#endif
# 252 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

/* Define return type of read/write routines.  In POSIX, the return type
   for read()/write() is "ssize_t" but legacy newlib code has been using
   "int" for some time.  If not specified, "int" is defaulted.  */
#ifndef _READ_WRITE_RETURN_TYPE
#define _READ_WRITE_RETURN_TYPE int
#endif
# 259 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3
/* Define `count' parameter of read/write routines.  In POSIX, the `count'
   parameter is "size_t" but legacy newlib code has been using "int" for some
   time.  If not specified, "int" is defaulted.  */
#ifndef _READ_WRITE_BUFSIZE_TYPE
#define _READ_WRITE_BUFSIZE_TYPE int
#endif
# 265 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

#ifndef __WCHAR_MAX__
#if __INT_MAX__ == 32767 || defined (_WIN32)
#define __WCHAR_MAX__ 0xffffu
#endif
# 270 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3
#endif
# 271 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

/* See if small reent asked for at configuration time and
   is not chosen by the platform by default.  */
#ifdef _WANT_REENT_SMALL
#ifndef _REENT_SMALL
#define _REENT_SMALL
#endif
# 278 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3
#endif
# 279 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

#ifdef _WANT_REENT_GLOBAL_STDIO_STREAMS
#ifndef _REENT_GLOBAL_STDIO_STREAMS
#define _REENT_GLOBAL_STDIO_STREAMS
#endif
# 284 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3
#endif
# 285 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

#ifdef _WANT_USE_LONG_TIME_T
#ifndef _USE_LONG_TIME_T
#define _USE_LONG_TIME_T
#endif
# 290 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3
#endif
# 291 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

/* If _MB_EXTENDED_CHARSETS_ALL is set, we want all of the extended
   charsets.  The extended charsets add a few functions and a couple
   of tables of a few K each. */
#ifdef _MB_EXTENDED_CHARSETS_ALL
#define _MB_EXTENDED_CHARSETS_ISO 1
#define _MB_EXTENDED_CHARSETS_WINDOWS 1
#endif
# 299 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3

#endif /* __SYS_CONFIG_H__ */
# 301 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/config.h" 3
# 12 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/_ansi.h" 2 3

/*  ISO C++.  */

#ifdef __cplusplus
#if !(defined(_BEGIN_STD_C) && defined(_END_STD_C))
#ifdef _HAVE_STD_CXX
#define _BEGIN_STD_C namespace std { extern "C" {
#define _END_STD_C  } }
#else
# 21 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/_ansi.h" 3
#define _BEGIN_STD_C extern "C" {
#define _END_STD_C  }
#endif
# 24 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/_ansi.h" 3
#if __GNUC_PREREQ (3, 3)
#define _NOTHROW __attribute__ ((__nothrow__))
#else
# 27 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/_ansi.h" 3
#define _NOTHROW throw()
#endif
# 29 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/_ansi.h" 3
#endif
# 30 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/_ansi.h" 3
#else
# 31 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/_ansi.h" 3
#define _BEGIN_STD_C
#define _END_STD_C
#define _NOTHROW
#endif
# 35 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/_ansi.h" 3

#ifndef _LONG_DOUBLE
#define _LONG_DOUBLE long double
#endif
# 39 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/_ansi.h" 3

/* Support gcc's __attribute__ facility.  */

#ifdef __GNUC__
#define _ATTRIBUTE(attrs) __attribute__ (attrs)
#else
# 45 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/_ansi.h" 3
#define _ATTRIBUTE(attrs)
#endif
# 47 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/_ansi.h" 3

/*  The traditional meaning of 'extern inline' for GCC is not
  to emit the function body unless the address is explicitly
  taken.  However this behaviour is changing to match the C99
  standard, which uses 'extern inline' to indicate that the
  function body *must* be emitted.  Likewise, a function declared
  without either 'extern' or 'static' defaults to extern linkage
  (C99 6.2.2p5), and the compiler may choose whether to use the
  inline version or call the extern linkage version (6.7.4p6).
  If we are using GCC, but do not have the new behaviour, we need
  to use extern inline; if we are using a new GCC with the
  C99-compatible behaviour, or a non-GCC compiler (which we will
  have to hope is C99, since there is no other way to achieve the
  effect of omitting the function if it isn't referenced) we use
  'static inline', which c99 defines to mean more-or-less the same
  as the Gnu C 'extern inline'.  */
#if defined(__GNUC__) && !defined(__GNUC_STDC_INLINE__)
/* We're using GCC, but without the new C99-compatible behaviour.  */
#define _ELIDABLE_INLINE extern __inline__ _ATTRIBUTE ((__always_inline__))
#else
# 67 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/_ansi.h" 3
/* We're using GCC in C99 mode, or an unknown compiler which
  we just have to hope obeys the C99 semantics of inline.  */
#define _ELIDABLE_INLINE static __inline__
#endif
# 71 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/_ansi.h" 3

#if __GNUC_PREREQ (3, 1)
#define _NOINLINE		__attribute__ ((__noinline__))
#define _NOINLINE_STATIC	_NOINLINE static
#else
# 76 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/_ansi.h" 3
/* On non-GNU compilers and GCC prior to version 3.1 the compiler can't be
   trusted not to inline if it is static. */
#define _NOINLINE
#define _NOINLINE_STATIC
#endif
# 81 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/_ansi.h" 3

#endif /* _ANSIDECL_H_ */
# 83 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/_ansi.h" 3
# 14 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 14 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 1 3
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

#if !defined(__STDDEF_H) || defined(__need_ptrdiff_t) ||                       \
    defined(__need_size_t) || defined(__need_wchar_t) ||                       \
    defined(__need_NULL) || defined(__need_wint_t)

#if !defined(__need_ptrdiff_t) && !defined(__need_size_t) &&                   \
    !defined(__need_wchar_t) && !defined(__need_NULL) &&                       \
    !defined(__need_wint_t)
/* Always define miscellaneous pieces when modules are available. */
#if !__has_feature(modules)
#define __STDDEF_H
#endif
# 37 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#define __need_ptrdiff_t
#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#define __need_STDDEF_H_misc
/* __need_wint_t is intentionally not defined here. */
#endif
# 44 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

#if defined(__need_ptrdiff_t)
#if !defined(_PTRDIFF_T) || __has_feature(modules)
/* Always define ptrdiff_t when modules are available. */
#if !__has_feature(modules)
#define _PTRDIFF_T
#endif
# 51 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif
# 53 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#undef __need_ptrdiff_t
#endif /* defined(__need_ptrdiff_t) */
# 55 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

#if defined(__need_size_t)
#if !defined(_SIZE_T) || __has_feature(modules)
/* Always define size_t when modules are available. */
#if !__has_feature(modules)
#define _SIZE_T
#endif
# 62 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
typedef __SIZE_TYPE__ size_t;
#endif
# 64 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#undef __need_size_t
#endif /*defined(__need_size_t) */
# 66 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

#if defined(__need_STDDEF_H_misc)
/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
#if (defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1 && \
     !defined(_RSIZE_T)) || __has_feature(modules)
/* Always define rsize_t when modules are available. */
#if !__has_feature(modules)
#define _RSIZE_T
#endif
# 76 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
typedef __SIZE_TYPE__ rsize_t;
#endif
# 78 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#endif /* defined(__need_STDDEF_H_misc) */
# 79 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

#if defined(__need_wchar_t)
#ifndef __cplusplus
/* Always define wchar_t when modules are available. */
#if !defined(_WCHAR_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WCHAR_T
#if defined(_MSC_EXTENSIONS)
#define _WCHAR_T_DEFINED
#endif
# 89 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#endif
# 90 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
typedef __WCHAR_TYPE__ wchar_t;
#endif
# 92 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#endif
# 93 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#undef __need_wchar_t
#endif /* defined(__need_wchar_t) */
# 95 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

#if defined(__need_NULL)
#undef NULL
#ifdef __cplusplus
#  if !defined(__MINGW32__) && !defined(_MSC_VER)
#    define NULL __null
#  else
# 102 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#    define NULL 0
#  endif
# 104 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#else
# 105 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#  define NULL ((void*)0)
#endif
# 107 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#ifdef __cplusplus
#if defined(_MSC_EXTENSIONS) && defined(_NATIVE_NULLPTR_SUPPORTED)
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
# 112 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#endif
# 113 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#undef __need_NULL
#endif /* defined(__need_NULL) */
# 115 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

#if defined(__need_STDDEF_H_misc)
#if __STDC_VERSION__ >= 201112L || __cplusplus >= 201103L
#if 0 /* expanded by -frewrite-includes */
#include "__stddef_max_align_t.h"
#endif /* expanded by -frewrite-includes */
# 118 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/__stddef_max_align_t.h" 1 3
/*===---- __stddef_max_align_t.h - Definition of max_align_t for modules ---===
 *
 * Copyright (c) 2014 Chandler Carruth
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

#ifndef __CLANG_MAX_ALIGN_T_DEFINED
#define __CLANG_MAX_ALIGN_T_DEFINED

#if defined(_MSC_VER)
typedef double max_align_t;
#elif defined(__APPLE__)
# 32 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/__stddef_max_align_t.h" 3
typedef long double max_align_t;
#else
# 34 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/__stddef_max_align_t.h" 3
// Define 'max_align_t' to match the GCC definition.
typedef struct {
  long long __clang_max_align_nonce1
      __attribute__((__aligned__(__alignof__(long long))));
  long double __clang_max_align_nonce2
      __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
#endif
# 42 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/__stddef_max_align_t.h" 3

#endif
# 44 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/__stddef_max_align_t.h" 3
# 119 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 2 3
#endif
# 120 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#define offsetof(t, d) __builtin_offsetof(t, d)
#undef __need_STDDEF_H_misc
#endif  /* defined(__need_STDDEF_H_misc) */
# 123 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#if defined(__need_wint_t)
/* Always define wint_t when modules are available. */
#if !defined(_WINT_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WINT_T
#endif
# 132 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
typedef __WINT_TYPE__ wint_t;
#endif
# 134 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#undef __need_wint_t
#endif /* __need_wint_t */
# 136 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

#endif
# 138 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
# 15 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/_types.h>
#endif /* expanded by -frewrite-includes */
# 15 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 1 3
/* ANSI C namespace clean utility typedefs */

/* This file defines various typedefs needed by the system calls that support
   the C library.  Basically, they're just the POSIX versions with an '_'
   prepended.  Targets shall use <machine/_types.h> to define their own
   internal types if desired.

   There are three define patterns used for type definitions.  Lets assume
   xyz_t is a user type.

   The internal type definition uses __machine_xyz_t_defined.  It is defined by
   <machine/_types.h> to disable a default definition in <sys/_types.h>. It
   must not be used in other files.

   User type definitions are guarded by __xyz_t_defined in glibc and
   _XYZ_T_DECLARED in BSD compatible systems.
*/

#ifndef	_SYS__TYPES_H
#define _SYS__TYPES_H

#if 0 /* expanded by -frewrite-includes */
#include <newlib.h>
#endif /* expanded by -frewrite-includes */
# 22 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3
# 23 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/config.h>
#endif /* expanded by -frewrite-includes */
# 23 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3
# 24 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <machine/_types.h>
#endif /* expanded by -frewrite-includes */
# 24 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_types.h" 1 3
/*
 *  $Id$
 */

#ifndef _MACHINE__TYPES_H
#define _MACHINE__TYPES_H
#if 0 /* expanded by -frewrite-includes */
#include <machine/_default_types.h>
#endif /* expanded by -frewrite-includes */
# 7 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_types.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 1 3
/*
 *  $Id$
 */

#ifndef _MACHINE__DEFAULT_TYPES_H
#define _MACHINE__DEFAULT_TYPES_H

#if 0 /* expanded by -frewrite-includes */
#include <sys/features.h>
#endif /* expanded by -frewrite-includes */
# 8 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
# 9 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3

/*
 * Guess on types by examining *_MIN / *_MAX defines.
 */
#if __GNUC_PREREQ (3, 3)
/* GCC >= 3.3.0 has __<val>__ implicitly defined. */
#define __EXP(x) __##x##__
#else
# 17 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
/* Fall back to POSIX versions from <limits.h> */
#define __EXP(x) x
#if 0 /* expanded by -frewrite-includes */
#include <limits.h>
#endif /* expanded by -frewrite-includes */
# 19 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
# 20 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
#endif
# 21 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3

/* Check if "long long" is 64bit wide */
/* Modern GCCs provide __LONG_LONG_MAX__, SUSv3 wants LLONG_MAX */
#if ( defined(__LONG_LONG_MAX__) && (__LONG_LONG_MAX__ > 0x7fffffff) ) \
  || ( defined(LLONG_MAX) && (LLONG_MAX > 0x7fffffff) )
#define __have_longlong64 1
#endif
# 28 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3

/* Check if "long" is 64bit or 32bit wide */
#if __EXP(LONG_MAX) > 0x7fffffff
#define __have_long64 1
#elif __EXP(LONG_MAX) == 0x7fffffff && !defined(__SPU__)
# 33 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
#define __have_long32 1
#endif
# 35 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3

#ifdef __cplusplus
extern "C" {
#endif
# 39 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3

#ifdef __INT8_TYPE__
typedef __INT8_TYPE__ __int8_t;
#ifdef __UINT8_TYPE__
typedef __UINT8_TYPE__ __uint8_t;
#else
# 45 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned __INT8_TYPE__ __uint8_t;
#endif
# 47 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
#define ___int8_t_defined 1
#elif __EXP(SCHAR_MAX) == 0x7f
# 49 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef signed char __int8_t ;
typedef unsigned char __uint8_t ;
#define ___int8_t_defined 1
#endif
# 53 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3

#ifdef __INT16_TYPE__
typedef __INT16_TYPE__ __int16_t;
#ifdef __UINT16_TYPE__
typedef __UINT16_TYPE__ __uint16_t;
#else
# 59 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned __INT16_TYPE__ __uint16_t;
#endif
# 61 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
#define ___int16_t_defined 1
#elif __EXP(INT_MAX) == 0x7fff
# 63 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef signed int __int16_t;
typedef unsigned int __uint16_t;
#define ___int16_t_defined 1
#elif __EXP(SHRT_MAX) == 0x7fff
# 67 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef signed short __int16_t;
typedef unsigned short __uint16_t;
#define ___int16_t_defined 1
#elif __EXP(SCHAR_MAX) == 0x7fff
# 71 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef signed char __int16_t;
typedef unsigned char __uint16_t;
#define ___int16_t_defined 1
#endif
# 75 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3

#ifdef __INT32_TYPE__
typedef __INT32_TYPE__ __int32_t;
#ifdef __UINT32_TYPE__
typedef __UINT32_TYPE__ __uint32_t;
#else
# 81 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned __INT32_TYPE__ __uint32_t;
#endif
# 83 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
#define ___int32_t_defined 1
#elif __EXP(INT_MAX) == 0x7fffffffL
# 85 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
#define ___int32_t_defined 1
#elif __EXP(LONG_MAX) == 0x7fffffffL
# 89 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef signed long __int32_t;
typedef unsigned long __uint32_t;
#define ___int32_t_defined 1
#elif __EXP(SHRT_MAX) == 0x7fffffffL
# 93 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef signed short __int32_t;
typedef unsigned short __uint32_t;
#define ___int32_t_defined 1
#elif __EXP(SCHAR_MAX) == 0x7fffffffL
# 97 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef signed char __int32_t;
typedef unsigned char __uint32_t;
#define ___int32_t_defined 1
#endif
# 101 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3

#ifdef __INT64_TYPE__
typedef __INT64_TYPE__ __int64_t;
#ifdef __UINT64_TYPE__
typedef __UINT64_TYPE__ __uint64_t;
#else
# 107 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned __INT64_TYPE__ __uint64_t;
#endif
# 109 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
#define ___int64_t_defined 1
#elif __EXP(LONG_MAX) > 0x7fffffff
# 111 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef signed long __int64_t;
typedef unsigned long __uint64_t;
#define ___int64_t_defined 1

/* GCC has __LONG_LONG_MAX__ */
#elif  defined(__LONG_LONG_MAX__) && (__LONG_LONG_MAX__ > 0x7fffffff)
# 117 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef signed long long __int64_t;
typedef unsigned long long __uint64_t;
#define ___int64_t_defined 1

/* POSIX mandates LLONG_MAX in <limits.h> */
#elif  defined(LLONG_MAX) && (LLONG_MAX > 0x7fffffff)
# 123 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef signed long long __int64_t;
typedef unsigned long long __uint64_t;
#define ___int64_t_defined 1

#elif  __EXP(INT_MAX) > 0x7fffffff
# 128 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef signed int __int64_t;
typedef unsigned int __uint64_t;
#define ___int64_t_defined 1
#endif
# 132 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3

#ifdef __INT_LEAST8_TYPE__
typedef __INT_LEAST8_TYPE__ __int_least8_t;
#ifdef __UINT_LEAST8_TYPE__
typedef __UINT_LEAST8_TYPE__ __uint_least8_t;
#else
# 138 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned __INT_LEAST8_TYPE__ __uint_least8_t;
#endif
# 140 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
#define ___int_least8_t_defined 1
#elif defined(___int8_t_defined)
# 142 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
#define ___int_least8_t_defined 1
#elif defined(___int16_t_defined)
# 146 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef __int16_t __int_least8_t;
typedef __uint16_t __uint_least8_t;
#define ___int_least8_t_defined 1
#elif defined(___int32_t_defined)
# 150 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef __int32_t __int_least8_t;
typedef __uint32_t __uint_least8_t;
#define ___int_least8_t_defined 1
#elif defined(___int64_t_defined)
# 154 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef __int64_t __int_least8_t;
typedef __uint64_t __uint_least8_t;
#define ___int_least8_t_defined 1
#endif
# 158 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3

#ifdef __INT_LEAST16_TYPE__
typedef __INT_LEAST16_TYPE__ __int_least16_t;
#ifdef __UINT_LEAST16_TYPE__
typedef __UINT_LEAST16_TYPE__ __uint_least16_t;
#else
# 164 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned __INT_LEAST16_TYPE__ __uint_least16_t;
#endif
# 166 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
#define ___int_least16_t_defined 1
#elif defined(___int16_t_defined)
# 168 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
#define ___int_least16_t_defined 1
#elif defined(___int32_t_defined)
# 172 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef __int32_t __int_least16_t;
typedef __uint32_t __uint_least16_t;
#define ___int_least16_t_defined 1
#elif defined(___int64_t_defined)
# 176 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef __int64_t __int_least16_t;
typedef __uint64_t __uint_least16_t;
#define ___int_least16_t_defined 1
#endif
# 180 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3

#ifdef __INT_LEAST32_TYPE__
typedef __INT_LEAST32_TYPE__ __int_least32_t;
#ifdef __UINT_LEAST32_TYPE__
typedef __UINT_LEAST32_TYPE__ __uint_least32_t;
#else
# 186 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned __INT_LEAST32_TYPE__ __uint_least32_t;
#endif
# 188 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
#define ___int_least32_t_defined 1
#elif defined(___int32_t_defined)
# 190 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
#define ___int_least32_t_defined 1
#elif defined(___int64_t_defined)
# 194 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef __int64_t __int_least32_t;
typedef __uint64_t __uint_least32_t;
#define ___int_least32_t_defined 1
#endif
# 198 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3

#ifdef __INT_LEAST64_TYPE__
typedef __INT_LEAST64_TYPE__ __int_least64_t;
#ifdef __UINT_LEAST64_TYPE__
typedef __UINT_LEAST64_TYPE__ __uint_least64_t;
#else
# 204 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned __INT_LEAST64_TYPE__ __uint_least64_t;
#endif
# 206 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
#define ___int_least64_t_defined 1
#elif defined(___int64_t_defined)
# 208 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;
#define ___int_least64_t_defined 1
#endif
# 212 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3

#if defined(__INTMAX_TYPE__)
typedef __INTMAX_TYPE__ __intmax_t;
#elif __have_longlong64
# 216 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef signed long long __intmax_t;
#else
# 218 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef signed long __intmax_t;
#endif
# 220 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3

#if defined(__UINTMAX_TYPE__)
typedef __UINTMAX_TYPE__ __uintmax_t;
#elif __have_longlong64
# 224 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned long long __uintmax_t;
#else
# 226 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned long __uintmax_t;
#endif
# 228 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3

#ifdef __INTPTR_TYPE__
typedef __INTPTR_TYPE__ __intptr_t;
#ifdef __UINTPTR_TYPE__
typedef __UINTPTR_TYPE__ __uintptr_t;
#else
# 234 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned __INTPTR_TYPE__ __uintptr_t;
#endif
# 236 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
#elif defined(__PTRDIFF_TYPE__)
# 237 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef __PTRDIFF_TYPE__ __intptr_t;
typedef unsigned __PTRDIFF_TYPE__ __uintptr_t;
#else
# 240 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
typedef long __intptr_t;
typedef unsigned long __uintptr_t;
#endif
# 243 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3

#undef __EXP

#ifdef __cplusplus
}
#endif
# 249 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3

#endif /* _MACHINE__DEFAULT_TYPES_H */
# 251 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_default_types.h" 3
# 8 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_types.h" 2 3
#endif
# 9 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_types.h" 3
# 25 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/lock.h>
#endif /* expanded by -frewrite-includes */
# 25 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/lock.h" 1 3
#ifndef __SYS_LOCK_H__
#define __SYS_LOCK_H__

/* dummy lock routines for single-threaded aps */

#if 0 /* expanded by -frewrite-includes */
#include <newlib.h>
#endif /* expanded by -frewrite-includes */
# 6 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/lock.h" 3
# 7 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/lock.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <_ansi.h>
#endif /* expanded by -frewrite-includes */
# 7 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/lock.h" 3
# 8 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/lock.h" 3

#if !defined(_RETARGETABLE_LOCKING)

typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;

#define __LOCK_INIT(class,lock) static int lock = 0;
#define __LOCK_INIT_RECURSIVE(class,lock) static int lock = 0;
#define __lock_init(lock) ((void) 0)
#define __lock_init_recursive(lock) ((void) 0)
#define __lock_close(lock) ((void) 0)
#define __lock_close_recursive(lock) ((void) 0)
#define __lock_acquire(lock) ((void) 0)
#define __lock_acquire_recursive(lock) ((void) 0)
#define __lock_try_acquire(lock) ((void) 0)
#define __lock_try_acquire_recursive(lock) ((void) 0)
#define __lock_release(lock) ((void) 0)
#define __lock_release_recursive(lock) ((void) 0)

#else
# 28 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/lock.h" 3

#ifdef __cplusplus
extern "C" {
#endif
# 32 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/lock.h" 3

struct __lock;
typedef struct __lock * _LOCK_T;
#define _LOCK_RECURSIVE_T _LOCK_T

#define __LOCK_INIT(class,lock) extern struct __lock __lock_ ## lock; \
	class _LOCK_T lock = &__lock_ ## lock
#define __LOCK_INIT_RECURSIVE(class,lock) __LOCK_INIT(class,lock)

extern void __retarget_lock_init(_LOCK_T *lock);
#define __lock_init(lock) __retarget_lock_init(&lock)
extern void __retarget_lock_init_recursive(_LOCK_T *lock);
#define __lock_init_recursive(lock) __retarget_lock_init_recursive(&lock)
extern void __retarget_lock_close(_LOCK_T lock);
#define __lock_close(lock) __retarget_lock_close(lock)
extern void __retarget_lock_close_recursive(_LOCK_T lock);
#define __lock_close_recursive(lock) __retarget_lock_close_recursive(lock)
extern void __retarget_lock_acquire(_LOCK_T lock);
#define __lock_acquire(lock) __retarget_lock_acquire(lock)
extern void __retarget_lock_acquire_recursive(_LOCK_T lock);
#define __lock_acquire_recursive(lock) __retarget_lock_acquire_recursive(lock)
extern int __retarget_lock_try_acquire(_LOCK_T lock);
#define __lock_try_acquire(lock) __retarget_lock_try_acquire(lock)
extern int __retarget_lock_try_acquire_recursive(_LOCK_T lock);
#define __lock_try_acquire_recursive(lock) \
  __retarget_lock_try_acquire_recursive(lock)
extern void __retarget_lock_release(_LOCK_T lock);
#define __lock_release(lock) __retarget_lock_release(lock)
extern void __retarget_lock_release_recursive(_LOCK_T lock);
#define __lock_release_recursive(lock) __retarget_lock_release_recursive(lock)

#ifdef __cplusplus
}
#endif
# 66 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/lock.h" 3

#endif /* !defined(_RETARGETABLE_LOCKING) */
# 68 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/lock.h" 3

#endif /* __SYS_LOCK_H__ */
# 70 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/lock.h" 3
# 26 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 2 3

#ifndef __machine_blkcnt_t_defined
typedef long __blkcnt_t;
#endif
# 30 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_blksize_t_defined
typedef long __blksize_t;
#endif
# 34 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_fsblkcnt_t_defined
typedef __uint64_t __fsblkcnt_t;
#endif
# 38 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_fsfilcnt_t_defined
typedef __uint32_t __fsfilcnt_t;
#endif
# 42 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_off_t_defined
typedef long _off_t;
#endif
# 46 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3

#if defined(__XMK__)
typedef signed char __pid_t;
#else
# 50 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3
typedef int __pid_t;
#endif
# 52 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_dev_t_defined
typedef short __dev_t;
#endif
# 56 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_uid_t_defined
typedef unsigned short __uid_t;
#endif
# 60 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3
#ifndef __machine_gid_t_defined
typedef unsigned short __gid_t;
#endif
# 63 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_id_t_defined
typedef __uint32_t __id_t;
#endif
# 67 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_ino_t_defined
#if (defined(__i386__) && (defined(GO32) || defined(__MSDOS__))) || \
    defined(__sparc__) || defined(__SPU__)
typedef unsigned long __ino_t;
#else
# 73 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3
typedef unsigned short __ino_t;
#endif
# 75 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3
#endif
# 76 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_mode_t_defined
#if defined(__i386__) && (defined(GO32) || defined(__MSDOS__))
typedef int __mode_t;
#else
# 81 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3
#if defined(__sparc__) && !defined(__sparc_v9__)
#ifdef __svr4__
typedef unsigned long __mode_t;
#else
# 85 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3
typedef unsigned short __mode_t;
#endif
# 87 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3
#else
# 88 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3
typedef __uint32_t __mode_t;
#endif
# 90 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3
#endif
# 91 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3
#endif
# 92 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_off64_t_defined
__extension__ typedef long long _off64_t;
#endif
# 96 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3

#if defined(__CYGWIN__) && !defined(__LP64__)
typedef _off64_t __off_t;
#else
# 100 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3
typedef _off_t __off_t;
#endif
# 102 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3

typedef _off64_t __loff_t;

#ifndef __machine_key_t_defined
typedef long __key_t;
#endif
# 108 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3

/*
 * We need fpos_t for the following, but it doesn't have a leading "_",
 * so we use _fpos_t instead.
 */
#ifndef __machine_fpos_t_defined
typedef long _fpos_t;		/* XXX must match off_t in <sys/types.h> */
				/* (and must be `long' for now) */
#endif
# 117 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3

#ifdef __LARGE64_FILES
#ifndef __machine_fpos64_t_defined
typedef _off64_t _fpos64_t;
#endif
# 122 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3
#endif
# 123 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3

/* Defined by GCC provided <stddef.h> */
#undef __size_t

#ifndef __machine_size_t_defined
#ifdef __SIZE_TYPE__
typedef __SIZE_TYPE__ __size_t;
#else
# 131 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3
#if defined(__INT_MAX__) && __INT_MAX__ == 2147483647
typedef unsigned int __size_t;
#else
# 134 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3
typedef unsigned long __size_t;
#endif
# 136 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3
#endif
# 137 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3
#endif
# 138 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_ssize_t_defined
#ifdef __SIZE_TYPE__
/* If __SIZE_TYPE__ is defined (gcc) we define ssize_t based on size_t.
   We simply change "unsigned" to "signed" for this single definition
   to make sure ssize_t and size_t only differ by their signedness. */
#define unsigned signed
typedef __SIZE_TYPE__ _ssize_t;
#undef unsigned
#else
# 148 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3
#if defined(__INT_MAX__) && __INT_MAX__ == 2147483647
typedef int _ssize_t;
#else
# 151 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3
typedef long _ssize_t;
#endif
# 153 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3
#endif
# 154 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3
#endif
# 155 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3

typedef _ssize_t __ssize_t;

#define __need_wint_t
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 159 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 1 3
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

#if !defined(__STDDEF_H) || defined(__need_ptrdiff_t) ||                       \
    defined(__need_size_t) || defined(__need_wchar_t) ||                       \
    defined(__need_NULL) || defined(__need_wint_t)

#if !defined(__need_ptrdiff_t) && !defined(__need_size_t) &&                   \
    !defined(__need_wchar_t) && !defined(__need_NULL) &&                       \
    !defined(__need_wint_t)
/* Always define miscellaneous pieces when modules are available. */
#if !__has_feature(modules)
#define __STDDEF_H
#endif
# 37 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#define __need_ptrdiff_t
#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#define __need_STDDEF_H_misc
/* __need_wint_t is intentionally not defined here. */
#endif
# 44 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

#if defined(__need_ptrdiff_t)
#if !defined(_PTRDIFF_T) || __has_feature(modules)
/* Always define ptrdiff_t when modules are available. */
#if !__has_feature(modules)
#define _PTRDIFF_T
#endif
# 51 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif
# 53 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#undef __need_ptrdiff_t
#endif /* defined(__need_ptrdiff_t) */
# 55 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

#if defined(__need_size_t)
#if !defined(_SIZE_T) || __has_feature(modules)
/* Always define size_t when modules are available. */
#if !__has_feature(modules)
#define _SIZE_T
#endif
# 62 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
typedef __SIZE_TYPE__ size_t;
#endif
# 64 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#undef __need_size_t
#endif /*defined(__need_size_t) */
# 66 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

#if defined(__need_STDDEF_H_misc)
/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
#if (defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1 && \
     !defined(_RSIZE_T)) || __has_feature(modules)
/* Always define rsize_t when modules are available. */
#if !__has_feature(modules)
#define _RSIZE_T
#endif
# 76 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
typedef __SIZE_TYPE__ rsize_t;
#endif
# 78 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#endif /* defined(__need_STDDEF_H_misc) */
# 79 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

#if defined(__need_wchar_t)
#ifndef __cplusplus
/* Always define wchar_t when modules are available. */
#if !defined(_WCHAR_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WCHAR_T
#if defined(_MSC_EXTENSIONS)
#define _WCHAR_T_DEFINED
#endif
# 89 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#endif
# 90 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
typedef __WCHAR_TYPE__ wchar_t;
#endif
# 92 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#endif
# 93 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#undef __need_wchar_t
#endif /* defined(__need_wchar_t) */
# 95 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

#if defined(__need_NULL)
#undef NULL
#ifdef __cplusplus
#  if !defined(__MINGW32__) && !defined(_MSC_VER)
#    define NULL __null
#  else
# 102 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#    define NULL 0
#  endif
# 104 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#else
# 105 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#  define NULL ((void*)0)
#endif
# 107 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#ifdef __cplusplus
#if defined(_MSC_EXTENSIONS) && defined(_NATIVE_NULLPTR_SUPPORTED)
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
# 112 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#endif
# 113 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#undef __need_NULL
#endif /* defined(__need_NULL) */
# 115 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

#if defined(__need_STDDEF_H_misc)
#if __STDC_VERSION__ >= 201112L || __cplusplus >= 201103L
#if 0 /* expanded by -frewrite-includes */
#include "__stddef_max_align_t.h"
#endif /* expanded by -frewrite-includes */
# 118 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
# 119 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#endif
# 120 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#define offsetof(t, d) __builtin_offsetof(t, d)
#undef __need_STDDEF_H_misc
#endif  /* defined(__need_STDDEF_H_misc) */
# 123 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#if defined(__need_wint_t)
/* Always define wint_t when modules are available. */
#if !defined(_WINT_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WINT_T
#endif
# 132 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
typedef __WINT_TYPE__ wint_t;
#endif
# 134 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#undef __need_wint_t
#endif /* __need_wint_t */
# 136 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

#endif
# 138 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
# 160 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 2 3

#ifndef __machine_mbstate_t_defined
/* Conversion state information.  */
typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;		/* Value so far.  */
} _mbstate_t;
#endif
# 173 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_flock_t_defined
typedef _LOCK_RECURSIVE_T _flock_t;
#endif
# 177 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_iconv_t_defined
/* Iconv descriptor type */
typedef void *_iconv_t;
#endif
# 182 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_clock_t_defined
#define	_CLOCK_T_	unsigned long	/* clock() */
#endif
# 186 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3

typedef	_CLOCK_T_	__clock_t;

#if defined(_USE_LONG_TIME_T) || __LONG_MAX__ > 0x7fffffffL
#define	_TIME_T_ long
#else
# 192 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3
#define	_TIME_T_ __int_least64_t
#endif
# 194 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3
typedef	_TIME_T_	__time_t;

#ifndef __machine_clockid_t_defined
#define	_CLOCKID_T_ 	unsigned long
#endif
# 199 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3

typedef	_CLOCKID_T_	__clockid_t;

#define	_TIMER_T_	unsigned long
typedef	_TIMER_T_	__timer_t;

#ifndef __machine_sa_family_t_defined
typedef	__uint8_t	__sa_family_t;
#endif
# 208 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_socklen_t_defined
typedef	__uint32_t	__socklen_t;
#endif
# 212 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3

typedef	unsigned short	__nlink_t;
typedef	long		__suseconds_t;	/* microseconds (signed) */
typedef	unsigned long	__useconds_t;	/* microseconds (unsigned) */

#ifdef __GNUCLIKE_BUILTIN_VARARGS
typedef	__builtin_va_list	__va_list;
#else
# 220 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3
typedef	char *			__va_list;
#endif /* __GNUCLIKE_BUILTIN_VARARGS */
# 222 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3

#endif	/* _SYS__TYPES_H */
# 224 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_types.h" 3
# 16 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 2 3

#define _NULL 0

#ifndef __Long
#if __LONG_MAX__ == 2147483647L
#define __Long long
typedef unsigned __Long __ULong;
#elif __INT_MAX__ == 2147483647
# 24 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3
#define __Long int
typedef unsigned __Long __ULong;
#endif
# 27 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3
#endif
# 28 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3

#if !defined( __Long)
#if 0 /* expanded by -frewrite-includes */
#include <sys/types.h>
#endif /* expanded by -frewrite-includes */
# 30 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3
# 31 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3
#endif
# 32 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3

#ifndef __Long
#define __Long __int32_t
typedef __uint32_t __ULong;
#endif
# 37 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3

struct _reent;

struct __locale_t;

/*
 * If _REENT_SMALL is defined, we make struct _reent as small as possible,
 * by having nearly everything possible allocated at first use.
 */

struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};

/* needed by reentrant structure */
struct __tm
{
  int   __tm_sec;
  int   __tm_min;
  int   __tm_hour;
  int   __tm_mday;
  int   __tm_mon;
  int   __tm_year;
  int   __tm_wday;
  int   __tm_yday;
  int   __tm_isdst;
};

/*
 * atexit() support.
 */

#define	_ATEXIT_SIZE 32	/* must be at least 32 to guarantee ANSI conformance */

struct _on_exit_args {
	void *  _fnargs[_ATEXIT_SIZE];	        /* user fn args */
	void *	_dso_handle[_ATEXIT_SIZE];
	/* Bitmask is set if user function takes arguments.  */
	__ULong _fntypes;           	        /* type of exit routine -
				   Must have at least _ATEXIT_SIZE bits */
	/* Bitmask is set if function was registered via __cxa_atexit.  */
	__ULong _is_cxa;
};

#ifdef _REENT_SMALL
struct _atexit {
	struct	_atexit *_next;			/* next in list */
	int	_ind;				/* next index in this table */
	void	(*_fns[_ATEXIT_SIZE])(void);	/* the table itself */
        struct _on_exit_args * _on_exit_args_ptr;
};
# define _ATEXIT_INIT {_NULL, 0, {_NULL}, _NULL}
#else
# 93 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3
struct _atexit {
	struct	_atexit *_next;			/* next in list */
	int	_ind;				/* next index in this table */
	/* Some entries may already have been called, and will be NULL.  */
	void	(*_fns[_ATEXIT_SIZE])(void);	/* the table itself */
        struct _on_exit_args _on_exit_args;
};
# define _ATEXIT_INIT {_NULL, 0, {_NULL}, {{_NULL}, {_NULL}, 0, 0}}
#endif
# 102 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3

#ifdef _REENT_GLOBAL_ATEXIT
# define _REENT_INIT_ATEXIT
#else
# 106 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3
# define _REENT_INIT_ATEXIT \
  _NULL, _ATEXIT_INIT,
#endif
# 109 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3

/*
 * Stdio buffers.
 *
 * This and __FILE are defined here because we need them for struct _reent,
 * but we don't want stdio.h included when stdlib.h is.
 */

struct __sbuf {
	unsigned char *_base;
	int	_size;
};

/*
 * Stdio state variables.
 *
 * The following always hold:
 *
 *	if (_flags&(__SLBF|__SWR)) == (__SLBF|__SWR),
 *		_lbfsize is -_bf._size, else _lbfsize is 0
 *	if _flags&__SRD, _w is 0
 *	if _flags&__SWR, _r is 0
 *
 * This ensures that the getc and putc macros (or inline functions) never
 * try to write or read from a file that is in `read' or `write' mode.
 * (Moreover, they can, and do, automatically switch from read mode to
 * write mode, and back, on "r+" and "w+" files.)
 *
 * _lbfsize is used only to make the inline line-buffered output stream
 * code as compact as possible.
 *
 * _ub, _up, and _ur are used when ungetc() pushes back more characters
 * than fit in the current _bf, or when ungetc() pushes back a character
 * that does not match the previous one in _bf.  When this happens,
 * _ub._base becomes non-nil (i.e., a stream has ungetc() data iff
 * _ub._base!=NULL) and _up and _ur save the current values of _p and _r.
 */

#if defined(_REENT_SMALL) && !defined(_REENT_GLOBAL_STDIO_STREAMS)
/*
 * struct __sFILE_fake is the start of a struct __sFILE, with only the
 * minimal fields allocated.  In __sinit() we really allocate the 3
 * standard streams, etc., and point away from this fake.
 */
struct __sFILE_fake {
  unsigned char *_p;	/* current position in (some) buffer */
  int	_r;		/* read space left for getc() */
  int	_w;		/* write space left for putc() */
  short	_flags;		/* flags, below; this FILE is free if 0 */
  short	_file;		/* fileno, if Unix descriptor, else -1 */
  struct __sbuf _bf;	/* the buffer (at least 1 byte, if !NULL) */
  int	_lbfsize;	/* 0 or -_bf._size, for inline putc */

  struct _reent *_data;
};

/* Following is needed both in libc/stdio and libc/stdlib so we put it
 * here instead of libc/stdio/local.h where it was previously. */

extern void   __sinit (struct _reent *);

# define _REENT_SMALL_CHECK_INIT(ptr)		\
  do						\
    {						\
      if ((ptr) && !(ptr)->__sdidinit)		\
	__sinit (ptr);				\
    }						\
  while (0)
#else /* _REENT_SMALL && !_REENT_GLOBAL_STDIO_STREAMS */
# 178 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3
# define _REENT_SMALL_CHECK_INIT(ptr) /* nothing */
#endif /* _REENT_SMALL && !_REENT_GLOBAL_STDIO_STREAMS */
# 180 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3

struct __sFILE {
  unsigned char *_p;	/* current position in (some) buffer */
  int	_r;		/* read space left for getc() */
  int	_w;		/* write space left for putc() */
  short	_flags;		/* flags, below; this FILE is free if 0 */
  short	_file;		/* fileno, if Unix descriptor, else -1 */
  struct __sbuf _bf;	/* the buffer (at least 1 byte, if !NULL) */
  int	_lbfsize;	/* 0 or -_bf._size, for inline putc */

#ifdef _REENT_SMALL
  struct _reent *_data;
#endif
# 193 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3

  /* operations */
  void *	_cookie;	/* cookie passed to io functions */

  _READ_WRITE_RETURN_TYPE (*_read) (struct _reent *, void *,
					   char *, _READ_WRITE_BUFSIZE_TYPE);
  _READ_WRITE_RETURN_TYPE (*_write) (struct _reent *, void *,
					    const char *,
					    _READ_WRITE_BUFSIZE_TYPE);
  _fpos_t (*_seek) (struct _reent *, void *, _fpos_t, int);
  int (*_close) (struct _reent *, void *);

  /* separate buffer for long sequences of ungetc() */
  struct __sbuf _ub;	/* ungetc buffer */
  unsigned char *_up;	/* saved _p when _p is doing ungetc data */
  int	_ur;		/* saved _r when _r is counting ungetc data */

  /* tricks to meet minimum requirements even when malloc() fails */
  unsigned char _ubuf[3];	/* guarantee an ungetc() buffer */
  unsigned char _nbuf[1];	/* guarantee a getc() buffer */

  /* separate buffer for fgetline() when line crosses buffer boundary */
  struct __sbuf _lb;	/* buffer for fgetline() */

  /* Unix stdio files get aligned to block boundaries on fseek() */
  int	_blksize;	/* stat.st_blksize (may be != _bf._size) */
  _off_t _offset;	/* current lseek offset */

#ifndef _REENT_SMALL
  struct _reent *_data;	/* Here for binary compatibility? Remove? */
#endif
# 224 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3

#ifndef __SINGLE_THREAD__
  _flock_t _lock;	/* for thread-safety locking */
#endif
# 228 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3
  _mbstate_t _mbstate;	/* for wide char stdio functions. */
  int   _flags2;        /* for future use */
};

#ifdef __CUSTOM_FILE_IO__

/* Get custom _FILE definition.  */
#if 0 /* expanded by -frewrite-includes */
#include <sys/custom_file.h>
#endif /* expanded by -frewrite-includes */
# 235 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3
# 236 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3

#else /* !__CUSTOM_FILE_IO__ */
# 238 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3
#ifdef __LARGE64_FILES
struct __sFILE64 {
  unsigned char *_p;	/* current position in (some) buffer */
  int	_r;		/* read space left for getc() */
  int	_w;		/* write space left for putc() */
  short	_flags;		/* flags, below; this FILE is free if 0 */
  short	_file;		/* fileno, if Unix descriptor, else -1 */
  struct __sbuf _bf;	/* the buffer (at least 1 byte, if !NULL) */
  int	_lbfsize;	/* 0 or -_bf._size, for inline putc */

  struct _reent *_data;

  /* operations */
  void *	_cookie;	/* cookie passed to io functions */

  _READ_WRITE_RETURN_TYPE (*_read) (struct _reent *, void *,
					   char *, _READ_WRITE_BUFSIZE_TYPE);
  _READ_WRITE_RETURN_TYPE (*_write) (struct _reent *, void *,
					    const char *,
					    _READ_WRITE_BUFSIZE_TYPE);
  _fpos_t (*_seek) (struct _reent *, void *, _fpos_t, int);
  int (*_close) (struct _reent *, void *);

  /* separate buffer for long sequences of ungetc() */
  struct __sbuf _ub;	/* ungetc buffer */
  unsigned char *_up;	/* saved _p when _p is doing ungetc data */
  int	_ur;		/* saved _r when _r is counting ungetc data */

  /* tricks to meet minimum requirements even when malloc() fails */
  unsigned char _ubuf[3];	/* guarantee an ungetc() buffer */
  unsigned char _nbuf[1];	/* guarantee a getc() buffer */

  /* separate buffer for fgetline() when line crosses buffer boundary */
  struct __sbuf _lb;	/* buffer for fgetline() */

  /* Unix stdio files get aligned to block boundaries on fseek() */
  int	_blksize;	/* stat.st_blksize (may be != _bf._size) */
  int   _flags2;        /* for future use */

  _off64_t _offset;     /* current lseek offset */
  _fpos64_t (*_seek64) (struct _reent *, void *, _fpos64_t, int);

#ifndef __SINGLE_THREAD__
  _flock_t _lock;	/* for thread-safety locking */
#endif
# 283 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3
  _mbstate_t _mbstate;	/* for wide char stdio functions. */
};
typedef struct __sFILE64 __FILE;
#else
# 287 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3
typedef struct __sFILE   __FILE;
#endif /* __LARGE64_FILES */
# 289 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3
#endif /* !__CUSTOM_FILE_IO__ */
# 290 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3

struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};

/*
 * rand48 family support
 *
 * Copyright (c) 1993 Martin Birgmeier
 * All rights reserved.
 *
 * You may redistribute unmodified or modified versions of this source
 * code provided that the above copyright notice and this and the
 * following conditions are retained.
 *
 * This software is provided ``as is'', and comes with no warranties
 * of any kind. I shall in no event be liable for anything that happens
 * to anyone/anything when using this software.
 */
#define        _RAND48_SEED_0  (0x330e)
#define        _RAND48_SEED_1  (0xabcd)
#define        _RAND48_SEED_2  (0x1234)
#define        _RAND48_MULT_0  (0xe66d)
#define        _RAND48_MULT_1  (0xdeec)
#define        _RAND48_MULT_2  (0x0005)
#define        _RAND48_ADD     (0x000b)
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;
#ifdef _REENT_SMALL
  /* Put this in here as well, for good luck.  */
  __extension__ unsigned long long _rand_next;
#endif
# 327 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3
};

/* How big the some arrays are.  */
#define _REENT_EMERGENCY_SIZE 25
#define _REENT_ASCTIME_SIZE 26
#define _REENT_SIGNAL_SIZE 24

/*
 * struct _reent
 *
 * This structure contains *all* globals needed by the library.
 * It's raison d'etre is to facilitate threads by making all library routines
 * reentrant.  IE: All state information is contained here.
 */

#ifdef _REENT_SMALL

struct _mprec
{
  /* used by mprec routines */
  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;
};


struct _misc_reent
{
  /* miscellaneous reentrant data */
  char *_strtok_last;
  _mbstate_t _mblen_state;
  _mbstate_t _wctomb_state;
  _mbstate_t _mbtowc_state;
  char _l64a_buf[8];
  int _getdate_err;
  _mbstate_t _mbrlen_state;
  _mbstate_t _mbrtowc_state;
  _mbstate_t _mbsrtowcs_state;
  _mbstate_t _wcrtomb_state;
  _mbstate_t _wcsrtombs_state;
};

/* This version of _reent is laid out with "int"s in pairs, to help
 * ports with 16-bit int's but 32-bit pointers, align nicely.  */
struct _reent
{
  /* As an exception to the above put _errno first for binary
     compatibility with non _REENT_SMALL targets.  */
  int _errno;			/* local copy of errno */

  /* FILE is a big struct and may change over time.  To try to achieve binary
     compatibility with future versions, put stdin,stdout,stderr here.
     These are pointers into member __sf defined below.  */
  __FILE *_stdin, *_stdout, *_stderr;	/* XXX */

  int  _inc;			/* used by tmpnam */

  char *_emergency;

  int __sdidinit;		/* 1 means stdio has been init'd */

  int _unspecified_locale_info;	/* unused, reserved for locale stuff */
  struct __locale_t *_locale;/* per-thread locale */

  struct _mprec *_mp;

  void (*__cleanup) (struct _reent *);

  int _gamma_signgam;

  /* used by some fp conversion routines */
  int _cvtlen;			/* should be size_t */
  char *_cvtbuf;

  struct _rand48 *_r48;
  struct __tm *_localtime_buf;
  char *_asctime_buf;

  /* signal info */
  void (**(_sig_func))(int);

# ifndef _REENT_GLOBAL_ATEXIT
  /* atexit stuff */
  struct _atexit *_atexit;
  struct _atexit _atexit0;
# endif
# 414 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3

  struct _glue __sglue;			/* root of glue chain */
  __FILE *__sf;			        /* file descriptors */
  struct _misc_reent *_misc;            /* strtok, multibyte states */
  char *_signal_buf;                    /* strsignal */
};

#ifdef _REENT_GLOBAL_STDIO_STREAMS
extern __FILE __sf[3];

# define _REENT_INIT(var) \
  { 0, \
    &__sf[0], \
    &__sf[1], \
    &__sf[2], \
    0,   \
    _NULL, \
    0, \
    0, \
    _NULL, \
    _NULL, \
    _NULL, \
    0, \
    0, \
    _NULL, \
    _NULL, \
    _NULL, \
    _NULL, \
    _NULL, \
    _REENT_INIT_ATEXIT \
    {_NULL, 0, _NULL}, \
    _NULL, \
    _NULL, \
    _NULL \
  }

#define _REENT_INIT_PTR_ZEROED(var) \
  { (var)->_stdin = &__sf[0]; \
    (var)->_stdout = &__sf[1]; \
    (var)->_stderr = &__sf[2]; \
  }

#else /* _REENT_GLOBAL_STDIO_STREAMS */
# 457 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3

extern const struct __sFILE_fake __sf_fake_stdin;
extern const struct __sFILE_fake __sf_fake_stdout;
extern const struct __sFILE_fake __sf_fake_stderr;

# define _REENT_INIT(var) \
  { 0, \
    (__FILE *)&__sf_fake_stdin, \
    (__FILE *)&__sf_fake_stdout, \
    (__FILE *)&__sf_fake_stderr, \
    0, \
    _NULL, \
    0, \
    0, \
    _NULL, \
    _NULL, \
    _NULL, \
    0, \
    0, \
    _NULL, \
    _NULL, \
    _NULL, \
    _NULL, \
    _NULL, \
    _REENT_INIT_ATEXIT \
    {_NULL, 0, _NULL}, \
    _NULL, \
    _NULL, \
    _NULL \
  }

#define _REENT_INIT_PTR_ZEROED(var) \
  { (var)->_stdin = (__FILE *)&__sf_fake_stdin; \
    (var)->_stdout = (__FILE *)&__sf_fake_stdout; \
    (var)->_stderr = (__FILE *)&__sf_fake_stderr; \
  }

#endif /* _REENT_GLOBAL_STDIO_STREAMS */
# 495 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3

/* Only add assert() calls if we are specified to debug.  */
#ifdef _REENT_CHECK_DEBUG
#if 0 /* expanded by -frewrite-includes */
#include <assert.h>
#endif /* expanded by -frewrite-includes */
# 498 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3
# 499 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3
#define __reent_assert(x) assert(x)
#else
# 501 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3
#define __reent_assert(x) ((void)0)
#endif
# 503 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3

#ifdef __CUSTOM_FILE_IO__
#error Custom FILE I/O and _REENT_SMALL not currently supported.
#endif
# 507 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3

/* Generic _REENT check macro.  */
#define _REENT_CHECK(var, what, type, size, init) do { \
  struct _reent *_r = (var); \
  if (_r->what == NULL) { \
    _r->what = (type)malloc(size); \
    __reent_assert(_r->what); \
    init; \
  } \
} while (0)

#define _REENT_CHECK_TM(var) \
  _REENT_CHECK(var, _localtime_buf, struct __tm *, sizeof *((var)->_localtime_buf), \
    /* nothing */)

#define _REENT_CHECK_ASCTIME_BUF(var) \
  _REENT_CHECK(var, _asctime_buf, char *, _REENT_ASCTIME_SIZE, \
    memset((var)->_asctime_buf, 0, _REENT_ASCTIME_SIZE))

/* Handle the dynamically allocated rand48 structure. */
#define _REENT_INIT_RAND48(var) do { \
  struct _reent *_r = (var); \
  _r->_r48->_seed[0] = _RAND48_SEED_0; \
  _r->_r48->_seed[1] = _RAND48_SEED_1; \
  _r->_r48->_seed[2] = _RAND48_SEED_2; \
  _r->_r48->_mult[0] = _RAND48_MULT_0; \
  _r->_r48->_mult[1] = _RAND48_MULT_1; \
  _r->_r48->_mult[2] = _RAND48_MULT_2; \
  _r->_r48->_add = _RAND48_ADD; \
  _r->_r48->_rand_next = 1; \
} while (0)
#define _REENT_CHECK_RAND48(var) \
  _REENT_CHECK(var, _r48, struct _rand48 *, sizeof *((var)->_r48), _REENT_INIT_RAND48((var)))

#define _REENT_INIT_MP(var) do { \
  struct _reent *_r = (var); \
  _r->_mp->_result_k = 0; \
  _r->_mp->_result = _r->_mp->_p5s = _NULL; \
  _r->_mp->_freelist = _NULL; \
} while (0)
#define _REENT_CHECK_MP(var) \
  _REENT_CHECK(var, _mp, struct _mprec *, sizeof *((var)->_mp), _REENT_INIT_MP(var))

#define _REENT_CHECK_EMERGENCY(var) \
  _REENT_CHECK(var, _emergency, char *, _REENT_EMERGENCY_SIZE, /* nothing */)

#define _REENT_INIT_MISC(var) do { \
  struct _reent *_r = (var); \
  _r->_misc->_strtok_last = _NULL; \
  _r->_misc->_mblen_state.__count = 0; \
  _r->_misc->_mblen_state.__value.__wch = 0; \
  _r->_misc->_wctomb_state.__count = 0; \
  _r->_misc->_wctomb_state.__value.__wch = 0; \
  _r->_misc->_mbtowc_state.__count = 0; \
  _r->_misc->_mbtowc_state.__value.__wch = 0; \
  _r->_misc->_mbrlen_state.__count = 0; \
  _r->_misc->_mbrlen_state.__value.__wch = 0; \
  _r->_misc->_mbrtowc_state.__count = 0; \
  _r->_misc->_mbrtowc_state.__value.__wch = 0; \
  _r->_misc->_mbsrtowcs_state.__count = 0; \
  _r->_misc->_mbsrtowcs_state.__value.__wch = 0; \
  _r->_misc->_wcrtomb_state.__count = 0; \
  _r->_misc->_wcrtomb_state.__value.__wch = 0; \
  _r->_misc->_wcsrtombs_state.__count = 0; \
  _r->_misc->_wcsrtombs_state.__value.__wch = 0; \
  _r->_misc->_l64a_buf[0] = '\0'; \
  _r->_misc->_getdate_err = 0; \
} while (0)
#define _REENT_CHECK_MISC(var) \
  _REENT_CHECK(var, _misc, struct _misc_reent *, sizeof *((var)->_misc), _REENT_INIT_MISC(var))

#define _REENT_CHECK_SIGNAL_BUF(var) \
  _REENT_CHECK(var, _signal_buf, char *, _REENT_SIGNAL_SIZE, /* nothing */)

#define _REENT_SIGNGAM(ptr)	((ptr)->_gamma_signgam)
#define _REENT_RAND_NEXT(ptr)	((ptr)->_r48->_rand_next)
#define _REENT_RAND48_SEED(ptr)	((ptr)->_r48->_seed)
#define _REENT_RAND48_MULT(ptr)	((ptr)->_r48->_mult)
#define _REENT_RAND48_ADD(ptr)	((ptr)->_r48->_add)
#define _REENT_MP_RESULT(ptr)	((ptr)->_mp->_result)
#define _REENT_MP_RESULT_K(ptr)	((ptr)->_mp->_result_k)
#define _REENT_MP_P5S(ptr)	((ptr)->_mp->_p5s)
#define _REENT_MP_FREELIST(ptr)	((ptr)->_mp->_freelist)
#define _REENT_ASCTIME_BUF(ptr)	((ptr)->_asctime_buf)
#define _REENT_TM(ptr)		((ptr)->_localtime_buf)
#define _REENT_EMERGENCY(ptr)	((ptr)->_emergency)
#define _REENT_STRTOK_LAST(ptr)	((ptr)->_misc->_strtok_last)
#define _REENT_MBLEN_STATE(ptr)	((ptr)->_misc->_mblen_state)
#define _REENT_MBTOWC_STATE(ptr)((ptr)->_misc->_mbtowc_state)
#define _REENT_WCTOMB_STATE(ptr)((ptr)->_misc->_wctomb_state)
#define _REENT_MBRLEN_STATE(ptr) ((ptr)->_misc->_mbrlen_state)
#define _REENT_MBRTOWC_STATE(ptr) ((ptr)->_misc->_mbrtowc_state)
#define _REENT_MBSRTOWCS_STATE(ptr) ((ptr)->_misc->_mbsrtowcs_state)
#define _REENT_WCRTOMB_STATE(ptr) ((ptr)->_misc->_wcrtomb_state)
#define _REENT_WCSRTOMBS_STATE(ptr) ((ptr)->_misc->_wcsrtombs_state)
#define _REENT_L64A_BUF(ptr)    ((ptr)->_misc->_l64a_buf)
#define _REENT_GETDATE_ERR_P(ptr) (&((ptr)->_misc->_getdate_err))
#define _REENT_SIGNAL_BUF(ptr)  ((ptr)->_signal_buf)

#else /* !_REENT_SMALL */
# 607 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3

struct _reent
{
  int _errno;			/* local copy of errno */

  /* FILE is a big struct and may change over time.  To try to achieve binary
     compatibility with future versions, put stdin,stdout,stderr here.
     These are pointers into member __sf defined below.  */
  __FILE *_stdin, *_stdout, *_stderr;

  int  _inc;			/* used by tmpnam */
  char _emergency[_REENT_EMERGENCY_SIZE];

  /* TODO */
  int _unspecified_locale_info;	/* unused, reserved for locale stuff */
  struct __locale_t *_locale;/* per-thread locale */

  int __sdidinit;		/* 1 means stdio has been init'd */

  void (*__cleanup) (struct _reent *);

  /* used by mprec routines */
  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;

  /* used by some fp conversion routines */
  int _cvtlen;			/* should be size_t */
  char *_cvtbuf;

  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[_REENT_ASCTIME_SIZE];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[_REENT_SIGNAL_SIZE];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
	  int _h_errno;
        } _reent;
  /* Two next two fields were once used by malloc.  They are no longer
     used. They are used to preserve the space used before so as to
     allow addition of new reent fields and keep binary compatibility.   */
      struct
        {
#define _N_LISTS 30
          unsigned char * _nextf[_N_LISTS];
          unsigned int _nmalloc[_N_LISTS];
        } _unused;
    } _new;

# ifndef _REENT_GLOBAL_ATEXIT
  /* atexit stuff */
  struct _atexit *_atexit;	/* points to head of LIFO stack */
  struct _atexit _atexit0;	/* one guaranteed table, required by ANSI */
# endif
# 678 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3

  /* signal info */
  void (**(_sig_func))(int);

  /* These are here last so that __FILE can grow without changing the offsets
     of the above members (on the off chance that future binary compatibility
     would be broken otherwise).  */
  struct _glue __sglue;		/* root of glue chain */
# ifndef _REENT_GLOBAL_STDIO_STREAMS
  __FILE __sf[3];  		/* first three file descriptors */
# endif
# 689 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3
};

#ifdef _REENT_GLOBAL_STDIO_STREAMS
extern __FILE __sf[3];
#define _REENT_STDIO_STREAM(var, index) &__sf[index]
#else
# 695 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3
#define _REENT_STDIO_STREAM(var, index) &(var)->__sf[index]
#endif
# 697 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3

#define _REENT_INIT(var) \
  { 0, \
    _REENT_STDIO_STREAM(&(var), 0), \
    _REENT_STDIO_STREAM(&(var), 1), \
    _REENT_STDIO_STREAM(&(var), 2), \
    0, \
    "", \
    0, \
    _NULL, \
    0, \
    _NULL, \
    _NULL, \
    0, \
    _NULL, \
    _NULL, \
    0, \
    _NULL, \
    { \
      { \
        0, \
        _NULL, \
        "", \
        {0, 0, 0, 0, 0, 0, 0, 0, 0}, \
        0, \
        1, \
        { \
          {_RAND48_SEED_0, _RAND48_SEED_1, _RAND48_SEED_2}, \
          {_RAND48_MULT_0, _RAND48_MULT_1, _RAND48_MULT_2}, \
          _RAND48_ADD \
        }, \
        {0, {0}}, \
        {0, {0}}, \
        {0, {0}}, \
        "", \
        "", \
        0, \
        {0, {0}}, \
        {0, {0}}, \
        {0, {0}}, \
        {0, {0}}, \
        {0, {0}} \
      } \
    }, \
    _REENT_INIT_ATEXIT \
    _NULL, \
    {_NULL, 0, _NULL} \
  }

#define _REENT_INIT_PTR_ZEROED(var) \
  { (var)->_stdin = _REENT_STDIO_STREAM(var, 0); \
    (var)->_stdout = _REENT_STDIO_STREAM(var, 1); \
    (var)->_stderr = _REENT_STDIO_STREAM(var, 2); \
    (var)->_new._reent._rand_next = 1; \
    (var)->_new._reent._r48._seed[0] = _RAND48_SEED_0; \
    (var)->_new._reent._r48._seed[1] = _RAND48_SEED_1; \
    (var)->_new._reent._r48._seed[2] = _RAND48_SEED_2; \
    (var)->_new._reent._r48._mult[0] = _RAND48_MULT_0; \
    (var)->_new._reent._r48._mult[1] = _RAND48_MULT_1; \
    (var)->_new._reent._r48._mult[2] = _RAND48_MULT_2; \
    (var)->_new._reent._r48._add = _RAND48_ADD; \
  }

#define _REENT_CHECK_RAND48(ptr)	/* nothing */
#define _REENT_CHECK_MP(ptr)		/* nothing */
#define _REENT_CHECK_TM(ptr)		/* nothing */
#define _REENT_CHECK_ASCTIME_BUF(ptr)	/* nothing */
#define _REENT_CHECK_EMERGENCY(ptr)	/* nothing */
#define _REENT_CHECK_MISC(ptr)	        /* nothing */
#define _REENT_CHECK_SIGNAL_BUF(ptr)	/* nothing */

#define _REENT_SIGNGAM(ptr)	((ptr)->_new._reent._gamma_signgam)
#define _REENT_RAND_NEXT(ptr)	((ptr)->_new._reent._rand_next)
#define _REENT_RAND48_SEED(ptr)	((ptr)->_new._reent._r48._seed)
#define _REENT_RAND48_MULT(ptr)	((ptr)->_new._reent._r48._mult)
#define _REENT_RAND48_ADD(ptr)	((ptr)->_new._reent._r48._add)
#define _REENT_MP_RESULT(ptr)	((ptr)->_result)
#define _REENT_MP_RESULT_K(ptr)	((ptr)->_result_k)
#define _REENT_MP_P5S(ptr)	((ptr)->_p5s)
#define _REENT_MP_FREELIST(ptr)	((ptr)->_freelist)
#define _REENT_ASCTIME_BUF(ptr)	((ptr)->_new._reent._asctime_buf)
#define _REENT_TM(ptr)		(&(ptr)->_new._reent._localtime_buf)
#define _REENT_EMERGENCY(ptr)	((ptr)->_emergency)
#define _REENT_STRTOK_LAST(ptr)	((ptr)->_new._reent._strtok_last)
#define _REENT_MBLEN_STATE(ptr)	((ptr)->_new._reent._mblen_state)
#define _REENT_MBTOWC_STATE(ptr)((ptr)->_new._reent._mbtowc_state)
#define _REENT_WCTOMB_STATE(ptr)((ptr)->_new._reent._wctomb_state)
#define _REENT_MBRLEN_STATE(ptr)((ptr)->_new._reent._mbrlen_state)
#define _REENT_MBRTOWC_STATE(ptr)((ptr)->_new._reent._mbrtowc_state)
#define _REENT_MBSRTOWCS_STATE(ptr)((ptr)->_new._reent._mbsrtowcs_state)
#define _REENT_WCRTOMB_STATE(ptr)((ptr)->_new._reent._wcrtomb_state)
#define _REENT_WCSRTOMBS_STATE(ptr)((ptr)->_new._reent._wcsrtombs_state)
#define _REENT_L64A_BUF(ptr)    ((ptr)->_new._reent._l64a_buf)
#define _REENT_SIGNAL_BUF(ptr)  ((ptr)->_new._reent._signal_buf)
#define _REENT_GETDATE_ERR_P(ptr) (&((ptr)->_new._reent._getdate_err))

#endif /* !_REENT_SMALL */
# 794 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3

#define _REENT_INIT_PTR(var) \
  { memset((var), 0, sizeof(*(var))); \
    _REENT_INIT_PTR_ZEROED(var); \
  }

/* This value is used in stdlib/misc.c.  reent/reent.c has to know it
   as well to make sure the freelist is correctly free'd.  Therefore
   we define it here, rather than in stdlib/misc.c, as before. */
#define _Kmax (sizeof (size_t) << 3)

/*
 * All references to struct _reent are via this pointer.
 * Internally, newlib routines that need to reference it should use _REENT.
 */

#ifndef __ATTRIBUTE_IMPURE_PTR__
#define __ATTRIBUTE_IMPURE_PTR__
#endif
# 813 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3

extern struct _reent *_impure_ptr __ATTRIBUTE_IMPURE_PTR__;
extern struct _reent *const _global_impure_ptr __ATTRIBUTE_IMPURE_PTR__;

void _reclaim_reent (struct _reent *);

/* #define _REENT_ONLY define this to get only reentrant routines */

#if defined(__DYNAMIC_REENT__) && !defined(__SINGLE_THREAD__)
#ifndef __getreent
  struct _reent * __getreent (void);
#endif
# 825 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3
# define _REENT (__getreent())
#else /* __SINGLE_THREAD__ || !__DYNAMIC_REENT__ */
# 827 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3
# define _REENT _impure_ptr
#endif /* __SINGLE_THREAD__ || !__DYNAMIC_REENT__ */
# 829 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3

#define _GLOBAL_REENT _global_impure_ptr

#ifdef _REENT_GLOBAL_ATEXIT
extern struct _atexit *_global_atexit; /* points to head of LIFO stack */
# define _GLOBAL_ATEXIT _global_atexit
#else
# 836 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3
# define _GLOBAL_ATEXIT (_GLOBAL_REENT->_atexit)
#endif
# 838 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3

#ifdef __cplusplus
}
#endif
# 842 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3
#endif /* _SYS_REENT_H_ */
# 843 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3
# 6 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/cdefs.h>
#endif /* expanded by -frewrite-includes */
# 6 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 1 3
/* libc/sys/linux/sys/cdefs.h - Helper macros for K&R vs. ANSI C compat. */

/* Written 2000 by Werner Almesberger */

/*-
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright (c) 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Berkeley Software Design, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)cdefs.h	8.8 (Berkeley) 1/9/95
 * $FreeBSD$
 */

#ifndef	_SYS_CDEFS_H_
#define	_SYS_CDEFS_H_

#if 0 /* expanded by -frewrite-includes */
#include <machine/_default_types.h>
#endif /* expanded by -frewrite-includes */
# 45 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
# 46 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/features.h>
#endif /* expanded by -frewrite-includes */
# 46 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
# 47 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 47 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 1 3
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

#if !defined(__STDDEF_H) || defined(__need_ptrdiff_t) ||                       \
    defined(__need_size_t) || defined(__need_wchar_t) ||                       \
    defined(__need_NULL) || defined(__need_wint_t)

#if !defined(__need_ptrdiff_t) && !defined(__need_size_t) &&                   \
    !defined(__need_wchar_t) && !defined(__need_NULL) &&                       \
    !defined(__need_wint_t)
/* Always define miscellaneous pieces when modules are available. */
#if !__has_feature(modules)
#define __STDDEF_H
#endif
# 37 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#define __need_ptrdiff_t
#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#define __need_STDDEF_H_misc
/* __need_wint_t is intentionally not defined here. */
#endif
# 44 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

#if defined(__need_ptrdiff_t)
#if !defined(_PTRDIFF_T) || __has_feature(modules)
/* Always define ptrdiff_t when modules are available. */
#if !__has_feature(modules)
#define _PTRDIFF_T
#endif
# 51 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif
# 53 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#undef __need_ptrdiff_t
#endif /* defined(__need_ptrdiff_t) */
# 55 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

#if defined(__need_size_t)
#if !defined(_SIZE_T) || __has_feature(modules)
/* Always define size_t when modules are available. */
#if !__has_feature(modules)
#define _SIZE_T
#endif
# 62 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
typedef __SIZE_TYPE__ size_t;
#endif
# 64 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#undef __need_size_t
#endif /*defined(__need_size_t) */
# 66 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

#if defined(__need_STDDEF_H_misc)
/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
#if (defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1 && \
     !defined(_RSIZE_T)) || __has_feature(modules)
/* Always define rsize_t when modules are available. */
#if !__has_feature(modules)
#define _RSIZE_T
#endif
# 76 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
typedef __SIZE_TYPE__ rsize_t;
#endif
# 78 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#endif /* defined(__need_STDDEF_H_misc) */
# 79 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

#if defined(__need_wchar_t)
#ifndef __cplusplus
/* Always define wchar_t when modules are available. */
#if !defined(_WCHAR_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WCHAR_T
#if defined(_MSC_EXTENSIONS)
#define _WCHAR_T_DEFINED
#endif
# 89 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#endif
# 90 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
typedef __WCHAR_TYPE__ wchar_t;
#endif
# 92 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#endif
# 93 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#undef __need_wchar_t
#endif /* defined(__need_wchar_t) */
# 95 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

#if defined(__need_NULL)
#undef NULL
#ifdef __cplusplus
#  if !defined(__MINGW32__) && !defined(_MSC_VER)
#    define NULL __null
#  else
# 102 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#    define NULL 0
#  endif
# 104 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#else
# 105 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#  define NULL ((void*)0)
#endif
# 107 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#ifdef __cplusplus
#if defined(_MSC_EXTENSIONS) && defined(_NATIVE_NULLPTR_SUPPORTED)
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
# 112 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#endif
# 113 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#undef __need_NULL
#endif /* defined(__need_NULL) */
# 115 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

#if defined(__need_STDDEF_H_misc)
#if __STDC_VERSION__ >= 201112L || __cplusplus >= 201103L
#if 0 /* expanded by -frewrite-includes */
#include "__stddef_max_align_t.h"
#endif /* expanded by -frewrite-includes */
# 118 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
# 119 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#endif
# 120 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#define offsetof(t, d) __builtin_offsetof(t, d)
#undef __need_STDDEF_H_misc
#endif  /* defined(__need_STDDEF_H_misc) */
# 123 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#if defined(__need_wint_t)
/* Always define wint_t when modules are available. */
#if !defined(_WINT_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WINT_T
#endif
# 132 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
typedef __WINT_TYPE__ wint_t;
#endif
# 134 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#undef __need_wint_t
#endif /* __need_wint_t */
# 136 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

#endif
# 138 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
# 48 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 2 3

#define __PMT(args)	args
#define __DOTS    	, ...
#define __THROW

#ifdef __GNUC__
# define __ASMNAME(cname)  __XSTRING (__USER_LABEL_PREFIX__) cname
#endif
# 56 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#define __ptr_t void *
#define __long_double_t  long double

#define __attribute_malloc__
#define __attribute_pure__
#define __attribute_format_strfmon__(a,b)
#define __flexarr      [0]

#ifndef __BOUNDED_POINTERS__
# define __bounded      /* nothing */
# define __unbounded    /* nothing */
# define __ptrvalue     /* nothing */
#endif
# 70 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

/*
 * Testing against Clang-specific extensions.
 */
#ifndef	__has_attribute
#define	__has_attribute(x)	0
#endif
# 77 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#ifndef	__has_extension
#define	__has_extension		__has_feature
#endif
# 80 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#ifndef	__has_feature
#define	__has_feature(x)	0
#endif
# 83 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#ifndef	__has_include
#define	__has_include(x)	0
#endif
# 86 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#ifndef	__has_builtin
#define	__has_builtin(x)	0
#endif
# 89 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#if defined(__cplusplus)
#define	__BEGIN_DECLS	extern "C" {
#define	__END_DECLS	}
#else
# 94 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define	__BEGIN_DECLS
#define	__END_DECLS
#endif
# 97 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

/*
 * This code has been put in place to help reduce the addition of
 * compiler specific defines in FreeBSD code.  It helps to aid in
 * having a compiler-agnostic source tree.
 */

#if defined(__GNUC__) || defined(__INTEL_COMPILER)

#if __GNUC__ >= 3 || defined(__INTEL_COMPILER)
#define	__GNUCLIKE_ASM 3
#define	__GNUCLIKE_MATH_BUILTIN_CONSTANTS
#else
# 110 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define	__GNUCLIKE_ASM 2
#endif
# 112 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define	__GNUCLIKE___TYPEOF 1
#define	__GNUCLIKE___OFFSETOF 1
#define	__GNUCLIKE___SECTION 1

#ifndef __INTEL_COMPILER
#define	__GNUCLIKE_CTOR_SECTION_HANDLING 1
#endif
# 119 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#define	__GNUCLIKE_BUILTIN_CONSTANT_P 1
#if defined(__INTEL_COMPILER) && defined(__cplusplus) && \
   __INTEL_COMPILER < 800
#undef __GNUCLIKE_BUILTIN_CONSTANT_P
#endif
# 125 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#if (__GNUC_MINOR__ > 95 || __GNUC__ >= 3)
#define	__GNUCLIKE_BUILTIN_VARARGS 1
#define	__GNUCLIKE_BUILTIN_STDARG 1
#define	__GNUCLIKE_BUILTIN_VAALIST 1
#endif
# 131 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#if defined(__GNUC__)
#define	__GNUC_VA_LIST_COMPATIBILITY 1
#endif
# 135 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

/*
 * Compiler memory barriers, specific to gcc and clang.
 */
#if defined(__GNUC__)
#define	__compiler_membar()	__asm __volatile(" " : : : "memory")
#endif
# 142 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#ifndef __INTEL_COMPILER
#define	__GNUCLIKE_BUILTIN_NEXT_ARG 1
#define	__GNUCLIKE_MATH_BUILTIN_RELOPS
#endif
# 147 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#define	__GNUCLIKE_BUILTIN_MEMCPY 1

/* XXX: if __GNUC__ >= 2: not tested everywhere originally, where replaced */
#define	__CC_SUPPORTS_INLINE 1
#define	__CC_SUPPORTS___INLINE 1
#define	__CC_SUPPORTS___INLINE__ 1

#define	__CC_SUPPORTS___FUNC__ 1
#define	__CC_SUPPORTS_WARNING 1

#define	__CC_SUPPORTS_VARADIC_XXX 1 /* see varargs.h */

#define	__CC_SUPPORTS_DYNAMIC_ARRAY_INIT 1

#endif /* __GNUC__ || __INTEL_COMPILER */
# 163 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

/*
 * The __CONCAT macro is used to concatenate parts of symbol names, e.g.
 * with "#define OLD(foo) __CONCAT(old,foo)", OLD(foo) produces oldfoo.
 * The __CONCAT macro is a bit tricky to use if it must work in non-ANSI
 * mode -- there must be no spaces between its arguments, and for nested
 * __CONCAT's, all the __CONCAT's must be at the left.  __CONCAT can also
 * concatenate double-quoted strings produced by the __STRING macro, but
 * this only works with ANSI C.
 *
 * __XSTRING is like __STRING, but it expands any macros in its argument
 * first.  It is only available with ANSI C.
 */
#if defined(__STDC__) || defined(__cplusplus)
#define	__P(protos)	protos		/* full-blown ANSI C */
#define	__CONCAT1(x,y)	x ## y
#define	__CONCAT(x,y)	__CONCAT1(x,y)
#define	__STRING(x)	#x		/* stringify without expanding x */
#define	__XSTRING(x)	__STRING(x)	/* expand x, then stringify */

#define	__const		const		/* define reserved names to standard */
#define	__signed	signed
#define	__volatile	volatile
#if defined(__cplusplus)
#define	__inline	inline		/* convert to C++ keyword */
#else
# 189 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#if !(defined(__CC_SUPPORTS___INLINE))
#define	__inline			/* delete GCC keyword */
#endif /* ! __CC_SUPPORTS___INLINE */
# 192 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#endif /* !__cplusplus */
# 193 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#else	/* !(__STDC__ || __cplusplus) */
# 195 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define	__P(protos)	()		/* traditional C preprocessor */
#define	__CONCAT(x,y)	x/**/y
#define	__STRING(x)	"x"

#if !defined(__CC_SUPPORTS___INLINE)
#define	__const				/* delete pseudo-ANSI C keywords */
#define	__inline
#define	__signed
#define	__volatile
/*
 * In non-ANSI C environments, new programs will want ANSI-only C keywords
 * deleted from the program and old programs will want them left alone.
 * When using a compiler other than gcc, programs using the ANSI C keywords
 * const, inline etc. as normal identifiers should define -DNO_ANSI_KEYWORDS.
 * When using "gcc -traditional", we assume that this is the intent; if
 * __GNUC__ is defined but __STDC__ is not, we leave the new keywords alone.
 */
#ifndef	NO_ANSI_KEYWORDS
#define	const				/* delete ANSI C keywords */
#define	inline
#define	signed
#define	volatile
#endif	/* !NO_ANSI_KEYWORDS */
# 218 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#endif	/* !__CC_SUPPORTS___INLINE */
# 219 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#endif	/* !(__STDC__ || __cplusplus) */
# 220 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

/*
 * Compiler-dependent macros to help declare dead (non-returning) and
 * pure (no side effects) functions, and unused variables.  They are
 * null except for versions of gcc that are known to support the features
 * properly (old versions of gcc-2 supported the dead and pure features
 * in a different (wrong) way).  If we do not provide an implementation
 * for a given compiler, let the compile fail if it is told to use
 * a feature that we cannot live without.
 */
#define	__weak_symbol	__attribute__((__weak__))
#if !__GNUC_PREREQ__(2, 5) && !defined(__INTEL_COMPILER)
#define	__dead2
#define	__pure2
#define	__unused
#endif
# 236 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#if __GNUC__ == 2 && __GNUC_MINOR__ >= 5 && __GNUC_MINOR__ < 7 && !defined(__INTEL_COMPILER)
#define	__dead2		__attribute__((__noreturn__))
#define	__pure2		__attribute__((__const__))
#define	__unused
/* XXX Find out what to do for __packed, __aligned and __section */
#endif
# 242 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#if __GNUC_PREREQ__(2, 7) || defined(__INTEL_COMPILER)
#define	__dead2		__attribute__((__noreturn__))
#define	__pure2		__attribute__((__const__))
#define	__unused	__attribute__((__unused__))
#define	__used		__attribute__((__used__))
#define	__packed	__attribute__((__packed__))
#define	__aligned(x)	__attribute__((__aligned__(x)))
#define	__section(x)	__attribute__((__section__(x)))
#endif
# 251 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#if __GNUC_PREREQ__(4, 3) || __has_attribute(__alloc_size__)
#define	__alloc_size(x)	__attribute__((__alloc_size__(x)))
#define	__alloc_size2(n, x)	__attribute__((__alloc_size__(n, x)))
#else
# 255 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define	__alloc_size(x)
#define	__alloc_size2(n, x)
#endif
# 258 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#if __GNUC_PREREQ__(4, 9) || __has_attribute(__alloc_align__)
#define	__alloc_align(x)	__attribute__((__alloc_align__(x)))
#else
# 261 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define	__alloc_align(x)
#endif
# 263 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#if !__GNUC_PREREQ__(2, 95)
#define	__alignof(x)	__offsetof(struct { char __a; x __b; }, __b)
#endif
# 267 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

/*
 * Keywords added in C11.
 */

#if !defined(__STDC_VERSION__) || __STDC_VERSION__ < 201112L

#if !__has_extension(c_alignas)
#if (defined(__cplusplus) && __cplusplus >= 201103L) || \
    __has_extension(cxx_alignas)
#define	_Alignas(x)		alignas(x)
#else
# 279 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
/* XXX: Only emulates _Alignas(constant-expression); not _Alignas(type-name). */
#define	_Alignas(x)		__aligned(x)
#endif
# 282 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#endif
# 283 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#if defined(__cplusplus) && __cplusplus >= 201103L
#define	_Alignof(x)		alignof(x)
#else
# 287 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define	_Alignof(x)		__alignof(x)
#endif
# 289 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#if !defined(__cplusplus) && !__has_extension(c_atomic) && \
    !__has_extension(cxx_atomic)
/*
 * No native support for _Atomic(). Place object in structure to prevent
 * most forms of direct non-atomic access.
 */
#define	_Atomic(T)		struct { T volatile __val; }
#endif
# 298 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#if defined(__cplusplus) && __cplusplus >= 201103L
#define	_Noreturn		[[noreturn]]
#else
# 302 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define	_Noreturn		__dead2
#endif
# 304 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#if !__has_extension(c_static_assert)
#if (defined(__cplusplus) && __cplusplus >= 201103L) || \
    __has_extension(cxx_static_assert)
#define	_Static_assert(x, y)	static_assert(x, y)
#elif __GNUC_PREREQ__(4,6) && !defined(__cplusplus)
# 310 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
/* Nothing, gcc 4.6 and higher has _Static_assert built-in */
#elif defined(__COUNTER__)
# 312 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define	_Static_assert(x, y)	__Static_assert(x, __COUNTER__)
#define	__Static_assert(x, y)	___Static_assert(x, y)
#define	___Static_assert(x, y)	typedef char __assert_ ## y[(x) ? 1 : -1] \
				__unused
#else
# 317 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define	_Static_assert(x, y)	struct __hack
#endif
# 319 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#endif
# 320 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#if !__has_extension(c_thread_local)
/*
 * XXX: Some compilers (Clang 3.3, GCC 4.7) falsely announce C++11 mode
 * without actually supporting the thread_local keyword. Don't check for
 * the presence of C++11 when defining _Thread_local.
 */
#if /* (defined(__cplusplus) && __cplusplus >= 201103L) || */ \
    __has_extension(cxx_thread_local)
#define	_Thread_local		thread_local
#else
# 331 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define	_Thread_local		__thread
#endif
# 333 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#endif
# 334 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#endif /* __STDC_VERSION__ || __STDC_VERSION__ < 201112L */
# 336 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

/*
 * Emulation of C11 _Generic().  Unlike the previously defined C11
 * keywords, it is not possible to implement this using exactly the same
 * syntax.  Therefore implement something similar under the name
 * __generic().  Unlike _Generic(), this macro can only distinguish
 * between a single type, so it requires nested invocations to
 * distinguish multiple cases.
 */

#if (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L) || \
    __has_extension(c_generic_selections)
#define	__generic(expr, t, yes, no)					\
	_Generic(expr, t: yes, default: no)
#elif __GNUC_PREREQ__(3, 1) && !defined(__cplusplus)
# 351 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define	__generic(expr, t, yes, no)					\
	__builtin_choose_expr(						\
	    __builtin_types_compatible_p(__typeof(expr), t), yes, no)
#endif
# 355 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

/*
 * C99 Static array indices in function parameter declarations.  Syntax such as:
 * void bar(int myArray[static 10]);
 * is allowed in C99 but not in C++.  Define __min_size appropriately so
 * headers using it can be compiled in either language.  Use like this:
 * void bar(int myArray[__min_size(10)]);
 */
#if !defined(__cplusplus) && \
    (defined(__clang__) || __GNUC_PREREQ__(4, 6)) && \
    (!defined(__STDC_VERSION__) || (__STDC_VERSION__ >= 199901))
#define __min_size(x)	static (x)
#else
# 368 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define __min_size(x)	(x)
#endif
# 370 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#if __GNUC_PREREQ__(2, 96)
#define	__malloc_like	__attribute__((__malloc__))
#define	__pure		__attribute__((__pure__))
#else
# 375 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define	__malloc_like
#define	__pure
#endif
# 378 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#if __GNUC_PREREQ__(3, 1) || (defined(__INTEL_COMPILER) && __INTEL_COMPILER >= 800)
#define	__always_inline	__inline__ __attribute__((__always_inline__))
#else
# 382 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define	__always_inline
#endif
# 384 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#if __GNUC_PREREQ__(3, 1)
#define	__noinline	__attribute__ ((__noinline__))
#else
# 388 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define	__noinline
#endif
# 390 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#if __GNUC_PREREQ__(3, 3)
#define	__nonnull(x)	__attribute__((__nonnull__ x))
#define	__nonnull_all	__attribute__((__nonnull__))
#else
# 395 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define	__nonnull(x)
#define	__nonnull_all
#endif
# 398 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#if __GNUC_PREREQ__(3, 4)
#define	__fastcall	__attribute__((__fastcall__))
#define	__result_use_check	__attribute__((__warn_unused_result__))
#else
# 403 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define	__fastcall
#define	__result_use_check
#endif
# 406 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#if __GNUC_PREREQ__(4, 1)
#define	__returns_twice	__attribute__((__returns_twice__))
#else
# 410 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define	__returns_twice
#endif
# 412 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#if __GNUC_PREREQ__(4, 6) || __has_builtin(__builtin_unreachable)
#define	__unreachable()	__builtin_unreachable()
#else
# 416 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define	__unreachable()	((void)0)
#endif
# 418 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

/* XXX: should use `#if __STDC_VERSION__ < 199901'. */
#if !__GNUC_PREREQ__(2, 7) && !defined(__INTEL_COMPILER)
#define	__func__	NULL
#endif
# 423 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

/*
 * GCC 2.95 provides `__restrict' as an extension to C90 to support the
 * C99-specific `restrict' type qualifier.  We happen to use `__restrict' as
 * a way to define the `restrict' type qualifier without disturbing older
 * software that is unaware of C99 keywords.
 */
#if !(__GNUC__ == 2 && __GNUC_MINOR__ == 95)
#if !defined(__STDC_VERSION__) || __STDC_VERSION__ < 199901
#define	__restrict
#else
# 434 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define	__restrict	restrict
#endif
# 436 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#endif
# 437 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

/*
 * GNU C version 2.96 adds explicit branch prediction so that
 * the CPU back-end can hint the processor and also so that
 * code blocks can be reordered such that the predicted path
 * sees a more linear flow, thus improving cache behavior, etc.
 *
 * The following two macros provide us with a way to utilize this
 * compiler feature.  Use __predict_true() if you expect the expression
 * to evaluate to true, and __predict_false() if you expect the
 * expression to evaluate to false.
 *
 * A few notes about usage:
 *
 *	* Generally, __predict_false() error condition checks (unless
 *	  you have some _strong_ reason to do otherwise, in which case
 *	  document it), and/or __predict_true() `no-error' condition
 *	  checks, assuming you want to optimize for the no-error case.
 *
 *	* Other than that, if you don't know the likelihood of a test
 *	  succeeding from empirical or other `hard' evidence, don't
 *	  make predictions.
 *
 *	* These are meant to be used in places that are run `a lot'.
 *	  It is wasteful to make predictions in code that is run
 *	  seldomly (e.g. at subsystem initialization time) as the
 *	  basic block reordering that this affects can often generate
 *	  larger code.
 */
#if __GNUC_PREREQ__(2, 96)
#define	__predict_true(exp)     __builtin_expect((exp), 1)
#define	__predict_false(exp)    __builtin_expect((exp), 0)
#else
# 470 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define	__predict_true(exp)     (exp)
#define	__predict_false(exp)    (exp)
#endif
# 473 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#if __GNUC_PREREQ__(4, 0)
#define	__null_sentinel	__attribute__((__sentinel__))
#define	__exported	__attribute__((__visibility__("default")))
/* Only default visibility is supported on PE/COFF targets. */
#ifndef __CYGWIN__
#define	__hidden	__attribute__((__visibility__("hidden")))
#else
# 481 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define	__hidden
#endif
# 483 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#else
# 484 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define	__null_sentinel
#define	__exported
#define	__hidden
#endif
# 488 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#define __offsetof(type, field)	offsetof(type, field)
#define	__rangeof(type, start, end) \
	(__offsetof(type, end) - __offsetof(type, start))

/*
 * Given the pointer x to the member m of the struct s, return
 * a pointer to the containing structure.  When using GCC, we first
 * assign pointer x to a local variable, to check that its type is
 * compatible with member m.
 */
#if __GNUC_PREREQ__(3, 1)
#define	__containerof(x, s, m) ({					\
	const volatile __typeof(((s *)0)->m) *__x = (x);		\
	__DEQUALIFY(s *, (const volatile char *)__x - __offsetof(s, m));\
})
#else
# 505 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define	__containerof(x, s, m)						\
	__DEQUALIFY(s *, (const volatile char *)(x) - __offsetof(s, m))
#endif
# 508 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

/*
 * Compiler-dependent macros to declare that functions take printf-like
 * or scanf-like arguments.  They are null except for versions of gcc
 * that are known to support the features properly (old versions of gcc-2
 * didn't permit keeping the keywords out of the application namespace).
 */
#if !__GNUC_PREREQ__(2, 7) && !defined(__INTEL_COMPILER)
#define	__printflike(fmtarg, firstvararg)
#define	__scanflike(fmtarg, firstvararg)
#define	__format_arg(fmtarg)
#define	__strfmonlike(fmtarg, firstvararg)
#define	__strftimelike(fmtarg, firstvararg)
#else
# 522 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define	__printflike(fmtarg, firstvararg) \
	    __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define	__scanflike(fmtarg, firstvararg) \
	    __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))
#define	__format_arg(fmtarg)	__attribute__((__format_arg__ (fmtarg)))
#define	__strfmonlike(fmtarg, firstvararg) \
	    __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))
#define	__strftimelike(fmtarg, firstvararg) \
	    __attribute__((__format__ (__strftime__, fmtarg, firstvararg)))
#endif
# 532 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

/* Compiler-dependent macros that rely on FreeBSD-specific extensions. */
#if defined(__FreeBSD_cc_version) && __FreeBSD_cc_version >= 300001 && \
    defined(__GNUC__) && !defined(__INTEL_COMPILER)
#define	__printf0like(fmtarg, firstvararg) \
	    __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#else
# 539 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define	__printf0like(fmtarg, firstvararg)
#endif
# 541 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#if defined(__GNUC__) || defined(__INTEL_COMPILER)
#ifndef __INTEL_COMPILER
#define	__strong_reference(sym,aliassym)	\
	extern __typeof (sym) aliassym __attribute__ ((__alias__ (#sym)))
#endif
# 547 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#ifdef __ELF__
#ifdef __STDC__
#define	__weak_reference(sym,alias)	\
	__asm__(".weak " #alias);	\
	__asm__(".equ "  #alias ", " #sym)
#define	__warn_references(sym,msg)	\
	__asm__(".section .gnu.warning." #sym);	\
	__asm__(".asciz \"" msg "\"");	\
	__asm__(".previous")
#define	__sym_compat(sym,impl,verid)	\
	__asm__(".symver " #impl ", " #sym "@" #verid)
#define	__sym_default(sym,impl,verid)	\
	__asm__(".symver " #impl ", " #sym "@@" #verid)
#else
# 561 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define	__weak_reference(sym,alias)	\
	__asm__(".weak alias");		\
	__asm__(".equ alias, sym")
#define	__warn_references(sym,msg)	\
	__asm__(".section .gnu.warning.sym"); \
	__asm__(".asciz \"msg\"");	\
	__asm__(".previous")
#define	__sym_compat(sym,impl,verid)	\
	__asm__(".symver impl, sym@verid")
#define	__sym_default(impl,sym,verid)	\
	__asm__(".symver impl, sym@@verid")
#endif	/* __STDC__ */
# 573 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#else	/* !__ELF__ */
# 574 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#ifdef __STDC__
#define	__weak_reference(sym,alias)	\
	__asm__(".stabs \"_" #alias "\",11,0,0,0");	\
	__asm__(".stabs \"_" #sym "\",1,0,0,0")
#define	__warn_references(sym,msg)	\
	__asm__(".stabs \"" msg "\",30,0,0,0");		\
	__asm__(".stabs \"_" #sym "\",1,0,0,0")
#else
# 582 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define	__weak_reference(sym,alias)	\
	__asm__(".stabs \"_/**/alias\",11,0,0,0");	\
	__asm__(".stabs \"_/**/sym\",1,0,0,0")
#define	__warn_references(sym,msg)	\
	__asm__(".stabs msg,30,0,0,0");			\
	__asm__(".stabs \"_/**/sym\",1,0,0,0")
#endif	/* __STDC__ */
# 589 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#endif	/* __ELF__ */
# 590 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#endif	/* __GNUC__ || __INTEL_COMPILER */
# 591 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#ifndef	__FBSDID
#define	__FBSDID(s)	struct __hack
#endif
# 595 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#ifndef	__RCSID
#define	__RCSID(s)	struct __hack
#endif
# 599 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#ifndef	__RCSID_SOURCE
#define	__RCSID_SOURCE(s)	struct __hack
#endif
# 603 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#ifndef	__SCCSID
#define	__SCCSID(s)	struct __hack
#endif
# 607 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#ifndef	__COPYRIGHT
#define	__COPYRIGHT(s)	struct __hack
#endif
# 611 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#ifndef	__DECONST
#define	__DECONST(type, var)	((type)(__uintptr_t)(const void *)(var))
#endif
# 615 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#ifndef	__DEVOLATILE
#define	__DEVOLATILE(type, var)	((type)(__uintptr_t)(volatile void *)(var))
#endif
# 619 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

#ifndef	__DEQUALIFY
#define	__DEQUALIFY(type, var)	((type)(__uintptr_t)(const volatile void *)(var))
#endif
# 623 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

/*
 * Nullability qualifiers: currently only supported by Clang.
 */
#if !(defined(__clang__) && __has_feature(nullability))
#define	_Nonnull
#define	_Nullable
#define	_Null_unspecified
#define	__NULLABILITY_PRAGMA_PUSH
#define	__NULLABILITY_PRAGMA_POP
#else
# 634 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define	__NULLABILITY_PRAGMA_PUSH _Pragma("clang diagnostic push")	\
	_Pragma("clang diagnostic ignored \"-Wnullability-completeness\"")
#define	__NULLABILITY_PRAGMA_POP _Pragma("clang diagnostic pop")
#endif
# 638 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

/*
 * Type Safety Checking
 *
 * Clang provides additional attributes to enable checking type safety
 * properties that cannot be enforced by the C type system. 
 */

#if __has_attribute(__argument_with_type_tag__) && \
    __has_attribute(__type_tag_for_datatype__)
#define	__arg_type_tag(arg_kind, arg_idx, type_tag_idx) \
	    __attribute__((__argument_with_type_tag__(arg_kind, arg_idx, type_tag_idx)))
#define	__datatype_type_tag(kind, type) \
	    __attribute__((__type_tag_for_datatype__(kind, type)))
#else
# 653 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define	__arg_type_tag(arg_kind, arg_idx, type_tag_idx)
#define	__datatype_type_tag(kind, type)
#endif
# 656 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

/*
 * Lock annotations.
 *
 * Clang provides support for doing basic thread-safety tests at
 * compile-time, by marking which locks will/should be held when
 * entering/leaving a functions.
 *
 * Furthermore, it is also possible to annotate variables and structure
 * members to enforce that they are only accessed when certain locks are
 * held.
 */

#if __has_extension(c_thread_safety_attributes)
#define	__lock_annotate(x)	__attribute__((x))
#else
# 672 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
#define	__lock_annotate(x)
#endif
# 674 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3

/* Structure implements a lock. */
/* FIXME: Use __lockable__, etc. to avoid colliding with user namespace macros,
 * once clang is fixed: https://bugs.llvm.org/show_bug.cgi?id=34319 */
#define	__lockable		__lock_annotate(lockable)

/* Function acquires an exclusive or shared lock. */
#define	__locks_exclusive(...) \
	__lock_annotate(exclusive_lock_function(__VA_ARGS__))
#define	__locks_shared(...) \
	__lock_annotate(shared_lock_function(__VA_ARGS__))

/* Function attempts to acquire an exclusive or shared lock. */
#define	__trylocks_exclusive(...) \
	__lock_annotate(exclusive_trylock_function(__VA_ARGS__))
#define	__trylocks_shared(...) \
	__lock_annotate(shared_trylock_function(__VA_ARGS__))

/* Function releases a lock. */
#define	__unlocks(...)		__lock_annotate(unlock_function(__VA_ARGS__))

/* Function asserts that an exclusive or shared lock is held. */
#define	__asserts_exclusive(...) \
	__lock_annotate(assert_exclusive_lock(__VA_ARGS__))
#define	__asserts_shared(...) \
	__lock_annotate(assert_shared_lock(__VA_ARGS__))

/* Function requires that an exclusive or shared lock is or is not held. */
#define	__requires_exclusive(...) \
	__lock_annotate(exclusive_locks_required(__VA_ARGS__))
#define	__requires_shared(...) \
	__lock_annotate(shared_locks_required(__VA_ARGS__))
#define	__requires_unlocked(...) \
	__lock_annotate(locks_excluded(__VA_ARGS__))

/* Function should not be analyzed. */
#define	__no_lock_analysis	__lock_annotate(no_thread_safety_analysis)

/* Guard variables and structure members by lock. */
#define	__guarded_by(x)		__lock_annotate(guarded_by(x))
#define	__pt_guarded_by(x)	__lock_annotate(pt_guarded_by(x))

#endif /* !_SYS_CDEFS_H_ */
# 717 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/cdefs.h" 3
# 7 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <machine/ieeefp.h>
#endif /* expanded by -frewrite-includes */
# 7 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 1 3
#ifndef __IEEE_BIG_ENDIAN
#ifndef __IEEE_LITTLE_ENDIAN

/* This file can define macros to choose variations of the IEEE float
   format:

   _FLT_LARGEST_EXPONENT_IS_NORMAL

	Defined if the float format uses the largest exponent for finite
	numbers rather than NaN and infinity representations.  Such a
	format cannot represent NaNs or infinities at all, but it's FLT_MAX
	is twice the IEEE value.

   _FLT_NO_DENORMALS

	Defined if the float format does not support IEEE denormals.  Every
	float with a zero exponent is taken to be a zero representation.
 
   ??? At the moment, there are no equivalent macros above for doubles and
   the macros are not fully supported by --enable-newlib-hw-fp.

   __IEEE_BIG_ENDIAN

        Defined if the float format is big endian.  This is mutually exclusive
        with __IEEE_LITTLE_ENDIAN.

   __IEEE_LITTLE_ENDIAN
 
        Defined if the float format is little endian.  This is mutually exclusive
        with __IEEE_BIG_ENDIAN.

   Note that one of __IEEE_BIG_ENDIAN or __IEEE_LITTLE_ENDIAN must be specified for a
   platform or error will occur.

   __IEEE_BYTES_LITTLE_ENDIAN

        This flag is used in conjunction with __IEEE_BIG_ENDIAN to describe a situation 
	whereby multiple words of an IEEE floating point are in big endian order, but the
	words themselves are little endian with respect to the bytes.

   _DOUBLE_IS_32BITS 

        This is used on platforms that support double by using the 32-bit IEEE
        float type.

   _FLOAT_ARG

        This represents what type a float arg is passed as.  It is used when the type is
        not promoted to double.
	

   __OBSOLETE_MATH_DEFAULT

	Default value for __OBSOLETE_MATH if that's not set by the user.
	It should be set here based on predefined feature macros.

   __OBSOLETE_MATH

	If set to 1 then some new math code will be disabled and older libm
	code will be used instead.  This is necessary because the new math
	code does not support all targets, it assumes that the toolchain has
	ISO C99 support (hexfloat literals, standard fenv semantics), the
	target has IEEE-754 conforming binary32 float and binary64 double
	(not mixed endian) representation, standard SNaN representation,
	double and single precision arithmetics has similar latency and it
	has no legacy SVID matherr support, only POSIX errno and fenv
	exception based error handling.
*/

#if (defined(__arm__) || defined(__thumb__)) && !defined(__MAVERICK__)
/* ARM traditionally used big-endian words; and within those words the
   byte ordering was big or little endian depending upon the target.
   Modern floating-point formats are naturally ordered; in this case
   __VFP_FP__ will be defined, even if soft-float.  */
#ifdef __VFP_FP__
# ifdef __ARMEL__
#  define __IEEE_LITTLE_ENDIAN
# else
# 79 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#  define __IEEE_BIG_ENDIAN
# endif
# 81 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
# if __ARM_FP & 0x8
#  define __OBSOLETE_MATH_DEFAULT 0
# endif
# 84 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#else
# 85 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
# define __IEEE_BIG_ENDIAN
# ifdef __ARMEL__
#  define __IEEE_BYTES_LITTLE_ENDIAN
# endif
# 89 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 90 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 91 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#if defined (__aarch64__)
#if defined (__AARCH64EL__)
#define __IEEE_LITTLE_ENDIAN
#else
# 96 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_BIG_ENDIAN
#endif
# 98 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __OBSOLETE_MATH_DEFAULT 0
#endif
# 100 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __epiphany__
#define __IEEE_LITTLE_ENDIAN
#define Sudden_Underflow 1
#endif
# 105 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __hppa__
#define __IEEE_BIG_ENDIAN
#endif
# 109 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __nds32__
#ifdef __big_endian__
#define __IEEE_BIG_ENDIAN
#else
# 114 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 116 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 117 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __SPU__
#define __IEEE_BIG_ENDIAN

#define isfinite(__y) \
	(__extension__ ({int __cy; \
		(sizeof (__y) == sizeof (float))  ? (1) : \
		(__cy = fpclassify(__y)) != FP_INFINITE && __cy != FP_NAN;}))

#define isinf(__x) ((sizeof (__x) == sizeof (float))  ?  (0) : __isinfd(__x))
#define isnan(__x) ((sizeof (__x) == sizeof (float))  ?  (0) : __isnand(__x))

/*
 * Macros for use in ieeefp.h. We can't just define the real ones here
 * (like those above) as we have name space issues when this is *not*
 * included via generic the ieeefp.h.
 */
#define __ieeefp_isnanf(x)	0
#define __ieeefp_isinff(x)	0
#define __ieeefp_finitef(x)	1
#endif
# 138 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __sparc__
#ifdef __LITTLE_ENDIAN_DATA__
#define __IEEE_LITTLE_ENDIAN
#else
# 143 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_BIG_ENDIAN
#endif
# 145 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 146 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#if defined(__m68k__) || defined(__mc68000__)
#define __IEEE_BIG_ENDIAN
#endif
# 150 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#if defined(__mc68hc11__) || defined(__mc68hc12__) || defined(__mc68hc1x__)
#define __IEEE_BIG_ENDIAN
#ifdef __HAVE_SHORT_DOUBLE__
# define _DOUBLE_IS_32BITS
#endif
# 156 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 157 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#if defined (__H8300__) || defined (__H8300H__) || defined (__H8300S__) || defined (__H8500__) || defined (__H8300SX__)
#define __IEEE_BIG_ENDIAN
#define _FLOAT_ARG float
#define _DOUBLE_IS_32BITS
#endif
# 163 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#if defined (__xc16x__) || defined (__xc16xL__) || defined (__xc16xS__)
#define __IEEE_LITTLE_ENDIAN
#define _FLOAT_ARG float
#define _DOUBLE_IS_32BITS
#endif
# 169 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3


#ifdef __sh__
#ifdef __LITTLE_ENDIAN__
#define __IEEE_LITTLE_ENDIAN
#else
# 175 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_BIG_ENDIAN
#endif
# 177 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#if defined(__SH2E__) || defined(__SH3E__) || defined(__SH4_SINGLE_ONLY__) || defined(__SH2A_SINGLE_ONLY__)
#define _DOUBLE_IS_32BITS
#endif
# 180 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 181 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef _AM29K
#define __IEEE_BIG_ENDIAN
#endif
# 185 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef _WIN32
#define __IEEE_LITTLE_ENDIAN
#endif
# 189 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __i386__
#define __IEEE_LITTLE_ENDIAN
#endif
# 193 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __riscv
#define __IEEE_LITTLE_ENDIAN
#endif
# 197 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __i960__
#define __IEEE_LITTLE_ENDIAN
#endif
# 201 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __lm32__
#define __IEEE_BIG_ENDIAN
#endif
# 205 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __M32R__
#define __IEEE_BIG_ENDIAN
#endif
# 209 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __nvptx__
#define __IEEE_LITTLE_ENDIAN
#endif
# 213 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#if defined(_C4x) || defined(_C3x)
#define __IEEE_BIG_ENDIAN
#define _DOUBLE_IS_32BITS
#endif
# 218 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __TMS320C6X__
#ifdef _BIG_ENDIAN
#define __IEEE_BIG_ENDIAN
#else
# 223 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 225 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 226 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __TIC80__
#define __IEEE_LITTLE_ENDIAN
#endif
# 230 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MIPSEL__
#define __IEEE_LITTLE_ENDIAN
#endif
# 234 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#ifdef __MIPSEB__
#define __IEEE_BIG_ENDIAN
#endif
# 237 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MMIX__
#define __IEEE_BIG_ENDIAN
#endif
# 241 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __D30V__
#define __IEEE_BIG_ENDIAN
#endif
# 245 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

/* necv70 was __IEEE_LITTLE_ENDIAN. */

#ifdef __W65__
#define __IEEE_LITTLE_ENDIAN
#define _DOUBLE_IS_32BITS
#endif
# 252 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#if defined(__Z8001__) || defined(__Z8002__)
#define __IEEE_BIG_ENDIAN
#endif
# 256 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __m88k__
#define __IEEE_BIG_ENDIAN
#endif
# 260 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mn10300__
#define __IEEE_LITTLE_ENDIAN
#endif
# 264 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mn10200__
#define __IEEE_LITTLE_ENDIAN
#define _DOUBLE_IS_32BITS
#endif
# 269 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __v800
#define __IEEE_LITTLE_ENDIAN
#endif
# 273 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __v850
#define __IEEE_LITTLE_ENDIAN
#endif
# 277 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __D10V__
#define __IEEE_BIG_ENDIAN
#if __DOUBLE__ == 32
#define _DOUBLE_IS_32BITS
#endif
# 283 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 284 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __PPC__
#if (defined(_BIG_ENDIAN) && _BIG_ENDIAN) || (defined(_AIX) && _AIX)
#define __IEEE_BIG_ENDIAN
#else
# 289 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#if (defined(_LITTLE_ENDIAN) && _LITTLE_ENDIAN) || (defined(__sun__) && __sun__) || (defined(_WIN32) && _WIN32)
#define __IEEE_LITTLE_ENDIAN
#endif
# 292 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 293 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 294 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __xstormy16__
#define __IEEE_LITTLE_ENDIAN
#endif
# 298 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __arc__
#ifdef __big_endian__
#define __IEEE_BIG_ENDIAN
#else
# 303 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 305 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 306 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __CRX__
#define __IEEE_LITTLE_ENDIAN
#endif
# 310 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __fr30__
#define __IEEE_BIG_ENDIAN
#endif
# 314 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __FT32__
#define __IEEE_LITTLE_ENDIAN
#endif
# 318 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mcore__
#define __IEEE_BIG_ENDIAN
#endif
# 322 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mt__
#define __IEEE_BIG_ENDIAN
#endif
# 326 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __frv__
#define __IEEE_BIG_ENDIAN
#endif
# 330 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __moxie__
#ifdef __MOXIE_BIG_ENDIAN__
#define __IEEE_BIG_ENDIAN
#else
# 335 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 337 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 338 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __ia64__
#ifdef __BIG_ENDIAN__
#define __IEEE_BIG_ENDIAN
#else
# 343 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 345 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 346 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __AVR__
#define __IEEE_LITTLE_ENDIAN
#define _DOUBLE_IS_32BITS
#endif
# 351 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#if defined(__or1k__) || defined(__OR1K__) || defined(__OR1KND__)
#define __IEEE_BIG_ENDIAN
#endif
# 355 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __IP2K__
#define __IEEE_BIG_ENDIAN
#define __SMALL_BITFIELDS
#define _DOUBLE_IS_32BITS
#endif
# 361 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __iq2000__
#define __IEEE_BIG_ENDIAN
#endif
# 365 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MAVERICK__
#ifdef __ARMEL__
#  define __IEEE_LITTLE_ENDIAN
#else  /* must be __ARMEB__ */
# 370 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#  define __IEEE_BIG_ENDIAN
#endif /* __ARMEL__ */
# 372 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif /* __MAVERICK__ */
# 373 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __m32c__
#define __IEEE_LITTLE_ENDIAN
#define __SMALL_BITFIELDS
#endif
# 378 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __CRIS__
#define __IEEE_LITTLE_ENDIAN
#endif
# 382 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __BFIN__
#define __IEEE_LITTLE_ENDIAN
#endif
# 386 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __x86_64__
#define __IEEE_LITTLE_ENDIAN
#endif
# 390 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mep__
#ifdef __LITTLE_ENDIAN__
#define __IEEE_LITTLE_ENDIAN
#else
# 395 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_BIG_ENDIAN
#endif
# 397 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 398 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MICROBLAZE__
#ifndef __MICROBLAZEEL__
#define __IEEE_BIG_ENDIAN
#else
# 403 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 405 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 406 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MSP430__
#define __IEEE_LITTLE_ENDIAN
#define __SMALL_BITFIELDS	/* 16 Bit INT */
#endif
# 411 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __RL78__
#define __IEEE_LITTLE_ENDIAN
#define __SMALL_BITFIELDS	/* 16 Bit INT */
#ifndef __RL78_64BIT_DOUBLES__
#define _DOUBLE_IS_32BITS
#endif
# 418 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 419 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __RX__

#ifdef __RX_BIG_ENDIAN__
#define __IEEE_BIG_ENDIAN
#else
# 425 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 427 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifndef __RX_64BIT_DOUBLES__
#define _DOUBLE_IS_32BITS
#endif
# 431 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __RX_16BIT_INTS__
#define __SMALL_BITFIELDS
#endif
# 435 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#endif
# 437 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#if (defined(__CR16__) || defined(__CR16C__) ||defined(__CR16CP__))
#define __IEEE_LITTLE_ENDIAN
#define __SMALL_BITFIELDS	/* 16 Bit INT */
#endif
# 442 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __NIOS2__
# ifdef __nios2_big_endian__
#  define __IEEE_BIG_ENDIAN
# else
# 447 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#  define __IEEE_LITTLE_ENDIAN
# endif
# 449 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 450 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __VISIUM__
#define __IEEE_BIG_ENDIAN
#endif
# 454 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __CYGWIN__
#define __OBSOLETE_MATH_DEFAULT 0
#endif
# 458 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifndef __OBSOLETE_MATH_DEFAULT
/* Use old math code by default.  */
#define __OBSOLETE_MATH_DEFAULT 1
#endif
# 463 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#ifndef __OBSOLETE_MATH
#define __OBSOLETE_MATH __OBSOLETE_MATH_DEFAULT
#endif
# 466 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifndef __IEEE_BIG_ENDIAN
#ifndef __IEEE_LITTLE_ENDIAN
#error Endianess not declared!!
#endif /* not __IEEE_LITTLE_ENDIAN */
# 471 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif /* not __IEEE_BIG_ENDIAN */
# 472 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#endif /* not __IEEE_LITTLE_ENDIAN */
# 474 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif /* not __IEEE_BIG_ENDIAN */
# 475 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

# 8 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include "_ansi.h"
#endif /* expanded by -frewrite-includes */
# 8 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
# 9 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

_BEGIN_STD_C

/* Natural log of 2 */
#define _M_LN2        0.693147180559945309417

#if __GNUC_PREREQ (3, 3)
 /* gcc >= 3.3 implicitly defines builtins for HUGE_VALx values.  */

# ifndef HUGE_VAL
#  define HUGE_VAL (__builtin_huge_val())
# endif
# 21 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

# ifndef HUGE_VALF
#  define HUGE_VALF (__builtin_huge_valf())
# endif
# 25 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

# ifndef HUGE_VALL
#  define HUGE_VALL (__builtin_huge_vall())
# endif
# 29 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

# ifndef INFINITY
#  define INFINITY (__builtin_inff())
# endif
# 33 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

# ifndef NAN
#  define NAN (__builtin_nanf(""))
# endif
# 37 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

#else /* !gcc >= 3.3  */
# 39 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

 /*      No builtins.  Use fixed defines instead.  (All 3 HUGE plus the INFINITY
  * and NAN macros are required to be constant expressions.  Using a variable--
  * even a static const--does not meet this requirement, as it cannot be
  * evaluated at translation time.)
  *      The infinities are done using numbers that are far in excess of
  * something that would be expected to be encountered in a floating-point
  * implementation.  (A more certain way uses values from float.h, but that is
  * avoided because system includes are not supposed to include each other.)
  *      This method might produce warnings from some compilers.  (It does in
  * newer GCCs, but not for ones that would hit this #else.)  If this happens,
  * please report details to the Newlib mailing list.  */

 #ifndef HUGE_VAL
  #define HUGE_VAL (1.0e999999999)
 #endif
# 55 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

 #ifndef HUGE_VALF
  #define HUGE_VALF (1.0e999999999F)
 #endif
# 59 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

 #if !defined(HUGE_VALL)  &&  defined(_HAVE_LONG_DOUBLE)
  #define HUGE_VALL (1.0e999999999L)
 #endif
# 63 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

 #if !defined(INFINITY)
  #define INFINITY (HUGE_VALF)
 #endif
# 67 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

 #if !defined(NAN)
  #if defined(__GNUC__)  &&  defined(__cplusplus)
    /* Exception:  older g++ versions warn about the divide by 0 used in the
     * normal case (even though older gccs do not).  This trick suppresses the
     * warning, but causes errors for plain gcc, so is only used in the one
     * special case.  */
    static const union { __ULong __i[1]; float __d; } __Nanf = {0x7FC00000};
    #define NAN (__Nanf.__d)
  #else
# 77 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
    #define NAN (0.0F/0.0F)
  #endif
# 79 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
 #endif
# 80 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

#endif /* !gcc >= 3.3  */
# 82 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

/* Reentrant ANSI C functions.  */

#ifndef __math_68881
extern double atan (double);
extern double cos (double);
extern double sin (double);
extern double tan (double);
extern double tanh (double);
extern double frexp (double, int *);
extern double modf (double, double *);
extern double ceil (double);
extern double fabs (double);
extern double floor (double);
#endif /* ! defined (__math_68881) */
# 97 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

/* Non reentrant ANSI C functions.  */

#ifndef _REENT_ONLY
#ifndef __math_68881
extern double acos (double);
extern double asin (double);
extern double atan2 (double, double);
extern double cosh (double);
extern double sinh (double);
extern double exp (double);
extern double ldexp (double, int);
extern double log (double);
extern double log10 (double);
extern double pow (double, double);
extern double sqrt (double);
extern double fmod (double, double);
#endif /* ! defined (__math_68881) */
# 115 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
#endif /* ! defined (_REENT_ONLY) */
# 116 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

#if __MISC_VISIBLE
extern int finite (double);
extern int finitef (float);
extern int finitel (long double);
extern int isinff (float);
extern int isnanf (float);
#ifdef __CYGWIN__ /* not implemented in newlib yet */
extern int isinfl (long double);
extern int isnanl (long double);
#endif
# 127 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
#if !defined(__cplusplus) || __cplusplus < 201103L
extern int isinf (double);
#endif
# 130 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
#endif /* __MISC_VISIBLE */
# 131 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
#if (__MISC_VISIBLE || (__XSI_VISIBLE && __XSI_VISIBLE < 600)) \
  && (!defined(__cplusplus) || __cplusplus < 201103L)
extern int isnan (double);
#endif
# 135 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

#if __ISO_C_VISIBLE >= 1999
/* ISO C99 types and macros. */

/* FIXME:  FLT_EVAL_METHOD should somehow be gotten from float.h (which is hard,
 * considering that the standard says the includes it defines should not
 * include other includes that it defines) and that value used.  (This can be
 * solved, but autoconf has a bug which makes the solution more difficult, so
 * it has been skipped for now.)  */
#if !defined(FLT_EVAL_METHOD) && defined(__FLT_EVAL_METHOD__)
  #define FLT_EVAL_METHOD __FLT_EVAL_METHOD__
  #define __TMP_FLT_EVAL_METHOD
#endif /* FLT_EVAL_METHOD */
# 148 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
#if defined FLT_EVAL_METHOD
  #if FLT_EVAL_METHOD == 0
    typedef float  float_t;
    typedef double double_t;
   #elif FLT_EVAL_METHOD == 1
# 153 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
    typedef double float_t;
    typedef double double_t;
   #elif FLT_EVAL_METHOD == 2
# 156 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
    typedef long double float_t;
    typedef long double double_t;
   #else
# 159 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
    /* Implementation-defined.  Assume float_t and double_t have been
     * defined previously for this configuration (e.g. config.h). */
  #endif
# 162 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
#else
# 163 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
    /* Assume basic definitions.  */
    typedef float  float_t;
    typedef double double_t;
#endif
# 167 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
#if defined(__TMP_FLT_EVAL_METHOD)
  #undef FLT_EVAL_METHOD
#endif
# 170 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

#define FP_NAN         0
#define FP_INFINITE    1
#define FP_ZERO        2
#define FP_SUBNORMAL   3
#define FP_NORMAL      4

#ifndef FP_ILOGB0
# define FP_ILOGB0 (-__INT_MAX__)
#endif
# 180 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
#ifndef FP_ILOGBNAN
# define FP_ILOGBNAN __INT_MAX__
#endif
# 183 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

#ifndef MATH_ERRNO
# define MATH_ERRNO 1
#endif
# 187 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
#ifndef MATH_ERREXCEPT
# define MATH_ERREXCEPT 2
#endif
# 190 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
#ifndef math_errhandling
# define math_errhandling MATH_ERRNO
#endif
# 193 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

extern int __isinff (float x);
extern int __isinfd (double x);
extern int __isnanf (float x);
extern int __isnand (double x);
extern int __fpclassifyf (float x);
extern int __fpclassifyd (double x);
extern int __signbitf (float x);
extern int __signbitd (double x);

/* Note: isinf and isnan were once functions in newlib that took double
 *       arguments.  C99 specifies that these names are reserved for macros
 *       supporting multiple floating point types.  Thus, they are
 *       now defined as macros.  Implementations of the old functions
 *       taking double arguments still exist for compatibility purposes
 *       (prototypes for them are earlier in this header).  */

#if __GNUC_PREREQ (4, 4)
  #define fpclassify(__x) (__builtin_fpclassify (FP_NAN, FP_INFINITE, \
						 FP_NORMAL, FP_SUBNORMAL, \
						 FP_ZERO, __x))
  #ifndef isfinite
    #define isfinite(__x)	(__builtin_isfinite (__x))
  #endif
# 217 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
  #ifndef isinf
    #define isinf(__x) (__builtin_isinf_sign (__x))
  #endif
# 220 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
  #ifndef isnan
    #define isnan(__x) (__builtin_isnan (__x))
  #endif
# 223 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
  #define isnormal(__x) (__builtin_isnormal (__x))
#else
# 225 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
  #define fpclassify(__x) \
	  ((sizeof(__x) == sizeof(float))  ? __fpclassifyf(__x) : \
	  __fpclassifyd(__x))
  #ifndef isfinite
    #define isfinite(__y) \
	    (__extension__ ({int __cy = fpclassify(__y); \
			     __cy != FP_INFINITE && __cy != FP_NAN;}))
  #endif
# 233 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
  #ifndef isinf
    #define isinf(__x) (fpclassify(__x) == FP_INFINITE)
  #endif
# 236 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
  #ifndef isnan
    #define isnan(__x) (fpclassify(__x) == FP_NAN)
  #endif
# 239 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
  #define isnormal(__x) (fpclassify(__x) == FP_NORMAL)
#endif
# 241 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

#if __GNUC_PREREQ (4, 0)
  #if defined(_HAVE_LONG_DOUBLE)
    #define signbit(__x) \
	    ((sizeof(__x) == sizeof(float))  ? __builtin_signbitf(__x) : \
	     (sizeof(__x) == sizeof(double)) ? __builtin_signbit (__x) : \
					       __builtin_signbitl(__x))
  #else
# 249 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
    #define signbit(__x) \
	    ((sizeof(__x) == sizeof(float))  ? __builtin_signbitf(__x) : \
					       __builtin_signbit (__x))
  #endif
# 253 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
#else
# 254 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
  #define signbit(__x) \
	  ((sizeof(__x) == sizeof(float))  ?  __signbitf(__x) : \
		  __signbitd(__x))
#endif
# 258 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

#if __GNUC_PREREQ (2, 97)
#define isgreater(__x,__y)	(__builtin_isgreater (__x, __y))
#define isgreaterequal(__x,__y)	(__builtin_isgreaterequal (__x, __y))
#define isless(__x,__y)		(__builtin_isless (__x, __y))
#define islessequal(__x,__y)	(__builtin_islessequal (__x, __y))
#define islessgreater(__x,__y)	(__builtin_islessgreater (__x, __y))
#define isunordered(__x,__y)	(__builtin_isunordered (__x, __y))
#else
# 267 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
#define isgreater(x,y) \
          (__extension__ ({__typeof__(x) __x = (x); __typeof__(y) __y = (y); \
                           !isunordered(__x,__y) && (__x > __y);}))
#define isgreaterequal(x,y) \
          (__extension__ ({__typeof__(x) __x = (x); __typeof__(y) __y = (y); \
                           !isunordered(__x,__y) && (__x >= __y);}))
#define isless(x,y) \
          (__extension__ ({__typeof__(x) __x = (x); __typeof__(y) __y = (y); \
                           !isunordered(__x,__y) && (__x < __y);}))
#define islessequal(x,y) \
          (__extension__ ({__typeof__(x) __x = (x); __typeof__(y) __y = (y); \
                           !isunordered(__x,__y) && (__x <= __y);}))
#define islessgreater(x,y) \
          (__extension__ ({__typeof__(x) __x = (x); __typeof__(y) __y = (y); \
                           !isunordered(__x,__y) && (__x < __y || __x > __y);}))

#define isunordered(a,b) \
          (__extension__ ({__typeof__(a) __a = (a); __typeof__(b) __b = (b); \
                           fpclassify(__a) == FP_NAN || fpclassify(__b) == FP_NAN;}))
#endif
# 287 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

/* Non ANSI double precision functions.  */

extern double infinity (void);
extern double nan (const char *);
extern double copysign (double, double);
extern double logb (double);
extern int ilogb (double);

extern double asinh (double);
extern double cbrt (double);
extern double nextafter (double, double);
extern double rint (double);
extern double scalbn (double, int);

extern double exp2 (double);
extern double scalbln (double, long int);
extern double tgamma (double);
extern double nearbyint (double);
extern long int lrint (double);
extern long long int llrint (double);
extern double round (double);
extern long int lround (double);
extern long long int llround (double);
extern double trunc (double);
extern double remquo (double, double, int *);
extern double fdim (double, double);
extern double fmax (double, double);
extern double fmin (double, double);
extern double fma (double, double, double);

#ifndef __math_68881
extern double log1p (double);
extern double expm1 (double);
#endif /* ! defined (__math_68881) */
# 322 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

#ifndef _REENT_ONLY
extern double acosh (double);
extern double atanh (double);
extern double remainder (double, double);
extern double gamma (double);
extern double lgamma (double);
extern double erf (double);
extern double erfc (double);
extern double log2 (double);
#if !defined(__cplusplus)
#define log2(x) (log (x) / _M_LN2)
#endif
# 335 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

#ifndef __math_68881
extern double hypot (double, double);
#endif
# 339 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

#endif /* ! defined (_REENT_ONLY) */
# 341 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

/* Single precision versions of ANSI functions.  */

extern float atanf (float);
extern float cosf (float);
extern float sinf (float);
extern float tanf (float);
extern float tanhf (float);
extern float frexpf (float, int *);
extern float modff (float, float *);
extern float ceilf (float);
extern float fabsf (float);
extern float floorf (float);

#ifndef _REENT_ONLY
extern float acosf (float);
extern float asinf (float);
extern float atan2f (float, float);
extern float coshf (float);
extern float sinhf (float);
extern float expf (float);
extern float ldexpf (float, int);
extern float logf (float);
extern float log10f (float);
extern float powf (float, float);
extern float sqrtf (float);
extern float fmodf (float, float);
#endif /* ! defined (_REENT_ONLY) */
# 369 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

/* Other single precision functions.  */

extern float exp2f (float);
extern float scalblnf (float, long int);
extern float tgammaf (float);
extern float nearbyintf (float);
extern long int lrintf (float);
extern long long int llrintf (float);
extern float roundf (float);
extern long int lroundf (float);
extern long long int llroundf (float);
extern float truncf (float);
extern float remquof (float, float, int *);
extern float fdimf (float, float);
extern float fmaxf (float, float);
extern float fminf (float, float);
extern float fmaf (float, float, float);

extern float infinityf (void);
extern float nanf (const char *);
extern float copysignf (float, float);
extern float logbf (float);
extern int ilogbf (float);

extern float asinhf (float);
extern float cbrtf (float);
extern float nextafterf (float, float);
extern float rintf (float);
extern float scalbnf (float, int);
extern float log1pf (float);
extern float expm1f (float);

#ifndef _REENT_ONLY
extern float acoshf (float);
extern float atanhf (float);
extern float remainderf (float, float);
extern float gammaf (float);
extern float lgammaf (float);
extern float erff (float);
extern float erfcf (float);
extern float log2f (float);
extern float hypotf (float, float);
#endif /* ! defined (_REENT_ONLY) */
# 413 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

/* Newlib doesn't fully support long double math functions so far.
   On platforms where long double equals double the long double functions
   simply call the double functions.  On Cygwin the long double functions
   are implemented independently from newlib to be able to use optimized
   assembler functions despite using the Microsoft x86_64 ABI. */
#if defined (_LDBL_EQ_DBL) || defined (__CYGWIN__)
/* Reentrant ANSI C functions.  */
#ifndef __math_68881
extern long double atanl (long double);
extern long double cosl (long double);
extern long double sinl (long double);
extern long double tanl (long double);
extern long double tanhl (long double);
extern long double frexpl (long double, int *);
extern long double modfl (long double, long double *);
extern long double ceill (long double);
extern long double fabsl (long double);
extern long double floorl (long double);
extern long double log1pl (long double);
extern long double expm1l (long double);
#endif /* ! defined (__math_68881) */
# 435 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
/* Non reentrant ANSI C functions.  */
#ifndef _REENT_ONLY
#ifndef __math_68881
extern long double acosl (long double);
extern long double asinl (long double);
extern long double atan2l (long double, long double);
extern long double coshl (long double);
extern long double sinhl (long double);
extern long double expl (long double);
extern long double ldexpl (long double, int);
extern long double logl (long double);
extern long double log10l (long double);
extern long double powl (long double, long double);
extern long double sqrtl (long double);
extern long double fmodl (long double, long double);
extern long double hypotl (long double, long double);
#endif /* ! defined (__math_68881) */
# 452 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
#endif /* ! defined (_REENT_ONLY) */
# 453 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
extern long double copysignl (long double, long double);
extern long double nanl (const char *);
extern int ilogbl (long double);
extern long double asinhl (long double);
extern long double cbrtl (long double);
extern long double nextafterl (long double, long double);
extern float nexttowardf (float, long double);
extern double nexttoward (double, long double);
extern long double nexttowardl (long double, long double);
extern long double logbl (long double);
extern long double log2l (long double);
extern long double rintl (long double);
extern long double scalbnl (long double, int);
extern long double exp2l (long double);
extern long double scalblnl (long double, long);
extern long double tgammal (long double);
extern long double nearbyintl (long double);
extern long int lrintl (long double);
extern long long int llrintl (long double);
extern long double roundl (long double);
extern long lroundl (long double);
extern long long int llroundl (long double);
extern long double truncl (long double);
extern long double remquol (long double, long double, int *);
extern long double fdiml (long double, long double);
extern long double fmaxl (long double, long double);
extern long double fminl (long double, long double);
extern long double fmal (long double, long double, long double);
#ifndef _REENT_ONLY
extern long double acoshl (long double);
extern long double atanhl (long double);
extern long double remainderl (long double, long double);
extern long double lgammal (long double);
extern long double erfl (long double);
extern long double erfcl (long double);
#endif /* ! defined (_REENT_ONLY) */
# 489 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
#else /* !_LDBL_EQ_DBL && !__CYGWIN__ */
# 490 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
extern long double hypotl (long double, long double);
extern long double sqrtl (long double);
#ifdef __i386__
/* Other long double precision functions.  */
extern _LONG_DOUBLE rintl (_LONG_DOUBLE);
extern long int lrintl (_LONG_DOUBLE);
extern long long int llrintl (_LONG_DOUBLE);
#endif /* __i386__ */
# 498 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
#endif /* !_LDBL_EQ_DBL && !__CYGWIN__ */
# 499 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

#endif /* __ISO_C_VISIBLE >= 1999 */
# 501 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

#if __MISC_VISIBLE
extern double drem (double, double);
extern float dremf (float, float);
#ifdef __CYGWIN__
extern float dreml (long double, long double);
#endif /* __CYGWIN__ */
# 508 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
extern double gamma_r (double, int *);
extern double lgamma_r (double, int *);
extern float gammaf_r (float, int *);
extern float lgammaf_r (float, int *);
#endif
# 513 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

#if __MISC_VISIBLE || __XSI_VISIBLE
extern double y0 (double);
extern double y1 (double);
extern double yn (int, double);
extern double j0 (double);
extern double j1 (double);
extern double jn (int, double);
#endif
# 522 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

#if __MISC_VISIBLE || __XSI_VISIBLE >= 600
extern float y0f (float);
extern float y1f (float);
extern float ynf (int, float);
extern float j0f (float);
extern float j1f (float);
extern float jnf (int, float);
#endif
# 531 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

/* GNU extensions */
#if __GNU_VISIBLE
extern void sincos (double, double *, double *);
extern void sincosf (float, float *, float *);
#ifdef __CYGWIN__
extern void sincosl (long double, long double *, long double *);
#endif /* __CYGWIN__ */
# 539 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
# ifndef exp10
extern double exp10 (double);
# endif
# 542 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
# ifndef pow10
extern double pow10 (double);
# endif
# 545 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
# ifndef exp10f
extern float exp10f (float);
# endif
# 548 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
# ifndef pow10f
extern float pow10f (float);
# endif
# 551 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
#ifdef __CYGWIN__
# ifndef exp10l
extern float exp10l (float);
# endif
# 555 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
# ifndef pow10l
extern float pow10l (float);
# endif
# 558 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
#endif /* __CYGWIN__ */
# 559 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
#endif /* __GNU_VISIBLE */
# 560 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

#if __MISC_VISIBLE || __XSI_VISIBLE
/* The gamma functions use a global variable, signgam.  */
#ifndef _REENT_ONLY
#define signgam (*__signgam())
extern int *__signgam (void);
#endif /* ! defined (_REENT_ONLY) */
# 567 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

#define __signgam_r(ptr) _REENT_SIGNGAM(ptr)
#endif /* __MISC_VISIBLE || __XSI_VISIBLE */
# 570 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

#if __SVID_VISIBLE
/* The exception structure passed to the matherr routine.  */
/* We have a problem when using C++ since `exception' is a reserved
   name in C++.  */
#ifdef __cplusplus
struct __exception
#else
# 578 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
struct exception
#endif
# 580 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
{
  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
  int err;
};

#ifdef __cplusplus
extern int matherr (struct __exception *e);
#else
# 592 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
extern int matherr (struct exception *e);
#endif
# 594 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

/* Values for the type field of struct exception.  */

#define DOMAIN 1
#define SING 2
#define OVERFLOW 3
#define UNDERFLOW 4
#define TLOSS 5
#define PLOSS 6

#endif /* __SVID_VISIBLE */
# 605 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

/* Useful constants.  */

#if __BSD_VISIBLE || __XSI_VISIBLE

#define MAXFLOAT	3.40282347e+38F

#define M_E		2.7182818284590452354
#define M_LOG2E		1.4426950408889634074
#define M_LOG10E	0.43429448190325182765
#define M_LN2		_M_LN2
#define M_LN10		2.30258509299404568402
#define M_PI		3.14159265358979323846
#define M_PI_2		1.57079632679489661923
#define M_PI_4		0.78539816339744830962
#define M_1_PI		0.31830988618379067154
#define M_2_PI		0.63661977236758134308
#define M_2_SQRTPI	1.12837916709551257390
#define M_SQRT2		1.41421356237309504880
#define M_SQRT1_2	0.70710678118654752440

#endif
# 627 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

#if __BSD_VISIBLE

#define M_TWOPI         (M_PI * 2.0)
#define M_3PI_4		2.3561944901923448370E0
#define M_SQRTPI        1.77245385090551602792981
#define M_LN2LO         1.9082149292705877000E-10
#define M_LN2HI         6.9314718036912381649E-1
#define M_SQRT3	1.73205080756887719000
#define M_IVLN10        0.43429448190325182765 /* 1 / log(10) */
#define M_LOG2_E        _M_LN2
#define M_INVLN2        1.4426950408889633870E0  /* 1 / log(2) */

/* Global control over fdlibm error handling.  */

enum __fdlibm_version
{
  __fdlibm_ieee = -1,
  __fdlibm_svid,
  __fdlibm_xopen,
  __fdlibm_posix
};

#define _LIB_VERSION_TYPE enum __fdlibm_version
#define _LIB_VERSION __fdlib_version

extern __IMPORT _LIB_VERSION_TYPE _LIB_VERSION;

#define _IEEE_  __fdlibm_ieee
#define _SVID_  __fdlibm_svid
#define _XOPEN_ __fdlibm_xopen
#define _POSIX_ __fdlibm_posix

#endif /* __BSD_VISIBLE */
# 661 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

_END_STD_C

#ifdef __FAST_MATH__
#if 0 /* expanded by -frewrite-includes */
#include <machine/fastmath.h>
#endif /* expanded by -frewrite-includes */
# 665 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
# 666 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
#endif
# 667 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3

#endif /* _MATH_H_ */
# 669 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
# 16 "../../../../../newlib/libm/common/fdlibm.h" 2
#if 0 /* expanded by -frewrite-includes */
#include <sys/types.h>
#endif /* expanded by -frewrite-includes */
# 16 "../../../../../newlib/libm/common/fdlibm.h"
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 1 3
/* unified sys/types.h: 
   start with sef's sysvi386 version.
   merge go32 version -- a few ifdefs.
   h8300hms, h8300xray, and sysvnecv70 disagree on the following types:

   typedef int gid_t;
   typedef int uid_t;
   typedef int dev_t;
   typedef int ino_t;
   typedef int mode_t;
   typedef int caddr_t;

   however, these aren't "reasonable" values, the sysvi386 ones make far 
   more sense, and should work sufficiently well (in particular, h8300 
   doesn't have a stat, and the necv70 doesn't matter.) -- eichin
 */

#ifndef _SYS_TYPES_H

#if 0 /* expanded by -frewrite-includes */
#include <_ansi.h>
#endif /* expanded by -frewrite-includes */
# 20 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3
# 21 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/cdefs.h>
#endif /* expanded by -frewrite-includes */
# 21 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3
# 22 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <machine/_types.h>
#endif /* expanded by -frewrite-includes */
# 22 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3
# 23 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3

/* BSD types permitted by POSIX and always exposed as in Glibc.  Only provided
   for backward compatibility with BSD code.  The uintN_t standard types should
   be preferred in new code. */
#if ___int8_t_defined
typedef __uint8_t	u_int8_t;
#endif
# 30 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3
#if ___int16_t_defined
typedef __uint16_t	u_int16_t;
#endif 
# 33 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3
#if ___int32_t_defined
typedef __uint32_t	u_int32_t;
#endif
# 36 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3
#if ___int64_t_defined
typedef __uint64_t	u_int64_t;
#endif
# 39 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3
typedef int register_t;
#define __BIT_TYPES_DEFINED__ 1

#if defined(__rtems__) || defined(__XMK__)
/*
 *  The following section is RTEMS specific and is needed to more
 *  closely match the types defined in the BSD sys/types.h.
 *  This is needed to let the RTEMS/BSD TCP/IP stack compile.
 */

/* deprecated */
#if ___int64_t_defined
typedef	__uint64_t	u_quad_t;
typedef	__int64_t	quad_t;
typedef	quad_t *	qaddr_t;
#endif
# 55 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3

#endif /* __rtems__ || __XMK__ */
# 57 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3

#ifndef __need_inttypes

#define _SYS_TYPES_H
/* <stddef.h> must be before <sys/_types.h> for __size_t considerations */
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 62 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 1 3
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

#if !defined(__STDDEF_H) || defined(__need_ptrdiff_t) ||                       \
    defined(__need_size_t) || defined(__need_wchar_t) ||                       \
    defined(__need_NULL) || defined(__need_wint_t)

#if !defined(__need_ptrdiff_t) && !defined(__need_size_t) &&                   \
    !defined(__need_wchar_t) && !defined(__need_NULL) &&                       \
    !defined(__need_wint_t)
/* Always define miscellaneous pieces when modules are available. */
#if !__has_feature(modules)
#define __STDDEF_H
#endif
# 37 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#define __need_ptrdiff_t
#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#define __need_STDDEF_H_misc
/* __need_wint_t is intentionally not defined here. */
#endif
# 44 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

#if defined(__need_ptrdiff_t)
#if !defined(_PTRDIFF_T) || __has_feature(modules)
/* Always define ptrdiff_t when modules are available. */
#if !__has_feature(modules)
#define _PTRDIFF_T
#endif
# 51 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif
# 53 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#undef __need_ptrdiff_t
#endif /* defined(__need_ptrdiff_t) */
# 55 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

#if defined(__need_size_t)
#if !defined(_SIZE_T) || __has_feature(modules)
/* Always define size_t when modules are available. */
#if !__has_feature(modules)
#define _SIZE_T
#endif
# 62 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
typedef __SIZE_TYPE__ size_t;
#endif
# 64 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#undef __need_size_t
#endif /*defined(__need_size_t) */
# 66 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

#if defined(__need_STDDEF_H_misc)
/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
#if (defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1 && \
     !defined(_RSIZE_T)) || __has_feature(modules)
/* Always define rsize_t when modules are available. */
#if !__has_feature(modules)
#define _RSIZE_T
#endif
# 76 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
typedef __SIZE_TYPE__ rsize_t;
#endif
# 78 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#endif /* defined(__need_STDDEF_H_misc) */
# 79 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

#if defined(__need_wchar_t)
#ifndef __cplusplus
/* Always define wchar_t when modules are available. */
#if !defined(_WCHAR_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WCHAR_T
#if defined(_MSC_EXTENSIONS)
#define _WCHAR_T_DEFINED
#endif
# 89 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#endif
# 90 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
typedef __WCHAR_TYPE__ wchar_t;
#endif
# 92 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#endif
# 93 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#undef __need_wchar_t
#endif /* defined(__need_wchar_t) */
# 95 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

#if defined(__need_NULL)
#undef NULL
#ifdef __cplusplus
#  if !defined(__MINGW32__) && !defined(_MSC_VER)
#    define NULL __null
#  else
# 102 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#    define NULL 0
#  endif
# 104 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#else
# 105 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#  define NULL ((void*)0)
#endif
# 107 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#ifdef __cplusplus
#if defined(_MSC_EXTENSIONS) && defined(_NATIVE_NULLPTR_SUPPORTED)
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
# 112 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#endif
# 113 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#undef __need_NULL
#endif /* defined(__need_NULL) */
# 115 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

#if defined(__need_STDDEF_H_misc)
#if __STDC_VERSION__ >= 201112L || __cplusplus >= 201103L
#if 0 /* expanded by -frewrite-includes */
#include "__stddef_max_align_t.h"
#endif /* expanded by -frewrite-includes */
# 118 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
# 119 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#endif
# 120 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#define offsetof(t, d) __builtin_offsetof(t, d)
#undef __need_STDDEF_H_misc
#endif  /* defined(__need_STDDEF_H_misc) */
# 123 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#if defined(__need_wint_t)
/* Always define wint_t when modules are available. */
#if !defined(_WINT_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WINT_T
#endif
# 132 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
typedef __WINT_TYPE__ wint_t;
#endif
# 134 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
#undef __need_wint_t
#endif /* __need_wint_t */
# 136 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3

#endif
# 138 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stddef.h" 3
# 63 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/_types.h>
#endif /* expanded by -frewrite-includes */
# 63 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3
# 64 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/_stdint.h>
#endif /* expanded by -frewrite-includes */
# 64 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_stdint.h" 1 3
/*
 * Copyright (c) 2004, 2005 by
 * Ralf Corsepius, Ulm/Germany. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */

#ifndef _SYS__STDINT_H
#define _SYS__STDINT_H

#if 0 /* expanded by -frewrite-includes */
#include <machine/_default_types.h>
#endif /* expanded by -frewrite-includes */
# 12 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_stdint.h" 3
# 13 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_stdint.h" 3

#ifdef __cplusplus
extern "C" {
#endif
# 17 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_stdint.h" 3

#ifdef ___int8_t_defined
#ifndef _INT8_T_DECLARED
typedef __int8_t int8_t ;
#define _INT8_T_DECLARED
#endif
# 23 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_stdint.h" 3
#ifndef _UINT8_T_DECLARED
typedef __uint8_t uint8_t ;
#define _UINT8_T_DECLARED
#endif
# 27 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_stdint.h" 3
#define __int8_t_defined 1
#endif /* ___int8_t_defined */
# 29 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_stdint.h" 3

#ifdef ___int16_t_defined
#ifndef _INT16_T_DECLARED
typedef __int16_t int16_t ;
#define _INT16_T_DECLARED
#endif
# 35 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_stdint.h" 3
#ifndef _UINT16_T_DECLARED
typedef __uint16_t uint16_t ;
#define _UINT16_T_DECLARED
#endif
# 39 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_stdint.h" 3
#define __int16_t_defined 1
#endif /* ___int16_t_defined */
# 41 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_stdint.h" 3

#ifdef ___int32_t_defined
#ifndef _INT32_T_DECLARED
typedef __int32_t int32_t ;
#define _INT32_T_DECLARED
#endif
# 47 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_stdint.h" 3
#ifndef _UINT32_T_DECLARED
typedef __uint32_t uint32_t ;
#define _UINT32_T_DECLARED
#endif
# 51 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_stdint.h" 3
#define __int32_t_defined 1
#endif /* ___int32_t_defined */
# 53 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_stdint.h" 3

#ifdef ___int64_t_defined
#ifndef _INT64_T_DECLARED
typedef __int64_t int64_t ;
#define _INT64_T_DECLARED
#endif
# 59 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_stdint.h" 3
#ifndef _UINT64_T_DECLARED
typedef __uint64_t uint64_t ;
#define _UINT64_T_DECLARED
#endif
# 63 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_stdint.h" 3
#define __int64_t_defined 1
#endif /* ___int64_t_defined */
# 65 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_stdint.h" 3

#ifndef _INTMAX_T_DECLARED
typedef __intmax_t intmax_t;
#define _INTMAX_T_DECLARED
#endif
# 70 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_stdint.h" 3

#ifndef _UINTMAX_T_DECLARED
typedef __uintmax_t uintmax_t;
#define _UINTMAX_T_DECLARED
#endif
# 75 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_stdint.h" 3

#ifndef _INTPTR_T_DECLARED
typedef __intptr_t intptr_t;
#define _INTPTR_T_DECLARED
#endif
# 80 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_stdint.h" 3

#ifndef _UINTPTR_T_DECLARED
typedef __uintptr_t uintptr_t;
#define _UINTPTR_T_DECLARED
#endif
# 85 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_stdint.h" 3

#ifdef __cplusplus
}
#endif
# 89 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_stdint.h" 3

#endif /* _SYS__STDINT_H */
# 91 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_stdint.h" 3
# 65 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 2 3

#if __BSD_VISIBLE
#if 0 /* expanded by -frewrite-includes */
#include <machine/endian.h>
#endif /* expanded by -frewrite-includes */
# 67 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/endian.h" 1 3
#ifndef __MACHINE_ENDIAN_H__
#define	__MACHINE_ENDIAN_H__

#if 0 /* expanded by -frewrite-includes */
#include <sys/cdefs.h>
#endif /* expanded by -frewrite-includes */
# 4 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/endian.h" 3
# 5 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/endian.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/_types.h>
#endif /* expanded by -frewrite-includes */
# 5 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/endian.h" 3
# 6 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/endian.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <machine/_endian.h>
#endif /* expanded by -frewrite-includes */
# 6 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/endian.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_endian.h" 1 3
#ifndef __MACHINE_ENDIAN_H__
#error "must be included via <machine/endian.h>"
#endif /* !__MACHINE_ENDIAN_H__ */
# 4 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_endian.h" 3

#if 0 /* expanded by -frewrite-includes */
#include <sys/config.h>
#endif /* expanded by -frewrite-includes */
# 5 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_endian.h" 3
# 6 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_endian.h" 3

#ifdef __PPC__
/* Get rid of GCC builtin defines on PowerPC */
#ifdef _BIG_ENDIAN
#undef _BIG_ENDIAN
#endif
# 12 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_endian.h" 3
#ifdef _LITTLE_ENDIAN
#undef _LITTLE_ENDIAN
#endif
# 15 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_endian.h" 3
#endif /* __PPC__ */
# 16 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_endian.h" 3

#ifndef _LITTLE_ENDIAN
#define	_LITTLE_ENDIAN	1234
#endif
# 20 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_endian.h" 3

#ifndef _BIG_ENDIAN
#define	_BIG_ENDIAN	4321
#endif
# 24 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_endian.h" 3

#ifndef _PDP_ENDIAN
#define	_PDP_ENDIAN	3412
#endif
# 28 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_endian.h" 3

#ifndef _BYTE_ORDER
#if defined(__IEEE_LITTLE_ENDIAN) || defined(__IEEE_BYTES_LITTLE_ENDIAN)
#define	_BYTE_ORDER	_LITTLE_ENDIAN
#else
# 33 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_endian.h" 3
#define	_BYTE_ORDER	_BIG_ENDIAN
#endif
# 35 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_endian.h" 3
#endif
# 36 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/_endian.h" 3
# 7 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/endian.h" 2 3

#if _BYTE_ORDER == _LITTLE_ENDIAN
#define	_QUAD_HIGHWORD	1
#define	_QUAD_LOWWORD	0
#else
# 12 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/endian.h" 3
#define	_QUAD_HIGHWORD	0
#define	_QUAD_LOWWORD	1
#endif
# 15 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/endian.h" 3

#if __BSD_VISIBLE
#define	LITTLE_ENDIAN	_LITTLE_ENDIAN
#define	BIG_ENDIAN	_BIG_ENDIAN
#define	PDP_ENDIAN	_PDP_ENDIAN
#define	BYTE_ORDER	_BYTE_ORDER
#endif
# 22 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/endian.h" 3

#ifdef __GNUC__
#define	__bswap16(_x)	__builtin_bswap16(_x)
#define	__bswap32(_x)	__builtin_bswap32(_x)
#define	__bswap64(_x)	__builtin_bswap64(_x)
#else /* __GNUC__ */
# 28 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/endian.h" 3
static __inline __uint16_t
__bswap16(__uint16_t _x)
{

	return ((__uint16_t)((_x >> 8) | ((_x << 8) & 0xff00)));
}

static __inline __uint32_t
__bswap32(__uint32_t _x)
{

	return ((__uint32_t)((_x >> 24) | ((_x >> 8) & 0xff00) |
	    ((_x << 8) & 0xff0000) | ((_x << 24) & 0xff000000)));
}

static __inline __uint64_t
__bswap64(__uint64_t _x)
{

	return ((__uint64_t)((_x >> 56) | ((_x >> 40) & 0xff00) |
	    ((_x >> 24) & 0xff0000) | ((_x >> 8) & 0xff000000) |
	    ((_x << 8) & ((__uint64_t)0xff << 32)) |
	    ((_x << 24) & ((__uint64_t)0xff << 40)) |
	    ((_x << 40) & ((__uint64_t)0xff << 48)) | ((_x << 56))));
}
#endif /* !__GNUC__ */
# 54 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/endian.h" 3

#ifndef __machine_host_to_from_network_defined
#if _BYTE_ORDER == _LITTLE_ENDIAN
#define	__htonl(_x)	__bswap32(_x)
#define	__htons(_x)	__bswap16(_x)
#define	__ntohl(_x)	__bswap32(_x)
#define	__ntohs(_x)	__bswap16(_x)
#else
# 62 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/endian.h" 3
#define	__htonl(_x)	((__uint32_t)(_x))
#define	__htons(_x)	((__uint16_t)(_x))
#define	__ntohl(_x)	((__uint32_t)(_x))
#define	__ntohs(_x)	((__uint16_t)(_x))
#endif
# 67 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/endian.h" 3
#endif /* __machine_host_to_from_network_defined */
# 68 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/endian.h" 3

#endif /* __MACHINE_ENDIAN_H__ */
# 70 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/endian.h" 3
# 68 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/select.h>
#endif /* expanded by -frewrite-includes */
# 68 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/select.h" 1 3
#ifndef _SYS_SELECT_H
#define _SYS_SELECT_H

/* We don't define fd_set and friends if we are compiling POSIX
   source, or if we have included (or may include as indicated
   by __USE_W32_SOCKETS) the W32api winsock[2].h header which
   defines Windows versions of them.   Note that a program which
   includes the W32api winsock[2].h header must know what it is doing;
   it must not call the Cygwin select function.
*/
# if !(defined (_WINSOCK_H) || defined (_WINSOCKAPI_) || defined (__USE_W32_SOCKETS))

#if 0 /* expanded by -frewrite-includes */
#include <sys/cdefs.h>
#endif /* expanded by -frewrite-includes */
# 13 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/select.h" 3
# 14 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/select.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/_sigset.h>
#endif /* expanded by -frewrite-includes */
# 14 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/select.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_sigset.h" 1 3
/*-
 * Copyright (c) 1982, 1986, 1989, 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 * (c) UNIX System Laboratories, Inc.
 * All or some portions of this file are derived from material licensed
 * to the University of California by American Telephone and Telegraph
 * Co. or Unix System Laboratories, Inc. and are reproduced herein with
 * the permission of UNIX System Laboratories, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)signal.h	8.4 (Berkeley) 5/4/95
 * $FreeBSD$
 */

#ifndef _SYS__SIGSET_H_
#define	_SYS__SIGSET_H_

typedef unsigned long __sigset_t;

#endif /* !_SYS__SIGSET_H_ */
# 44 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_sigset.h" 3
# 15 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/select.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/_timeval.h>
#endif /* expanded by -frewrite-includes */
# 15 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/select.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_timeval.h" 1 3
/*-
 * Copyright (c) 2002 Mike Barcroft <mike@FreeBSD.org>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * $FreeBSD$
 */

#ifndef _SYS__TIMEVAL_H_
#define _SYS__TIMEVAL_H_

#if 0 /* expanded by -frewrite-includes */
#include <sys/_types.h>
#endif /* expanded by -frewrite-includes */
# 32 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_timeval.h" 3
# 33 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_timeval.h" 3

#ifndef _SUSECONDS_T_DECLARED
typedef	__suseconds_t	suseconds_t;
#define	_SUSECONDS_T_DECLARED
#endif
# 38 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_timeval.h" 3

#if !defined(__time_t_defined) && !defined(_TIME_T_DECLARED)
typedef	_TIME_T_	time_t;
#define	__time_t_defined
#define	_TIME_T_DECLARED
#endif
# 44 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_timeval.h" 3

/* This define is also used outside of Newlib, e.g. in MinGW-w64 */
#ifndef _TIMEVAL_DEFINED
#define _TIMEVAL_DEFINED

/*
 * Structure returned by gettimeofday(2) system call, and used in other calls.
 */
struct timeval {
	time_t		tv_sec;		/* seconds */
	suseconds_t	tv_usec;	/* and microseconds */
};

#if __BSD_VISIBLE
#ifndef _KERNEL			/* NetBSD/OpenBSD compatible interfaces */

#define	timerclear(tvp)		((tvp)->tv_sec = (tvp)->tv_usec = 0)
#define	timerisset(tvp)		((tvp)->tv_sec || (tvp)->tv_usec)
#define	timercmp(tvp, uvp, cmp)					\
	(((tvp)->tv_sec == (uvp)->tv_sec) ?				\
	    ((tvp)->tv_usec cmp (uvp)->tv_usec) :			\
	    ((tvp)->tv_sec cmp (uvp)->tv_sec))
#define	timeradd(tvp, uvp, vvp)						\
	do {								\
		(vvp)->tv_sec = (tvp)->tv_sec + (uvp)->tv_sec;		\
		(vvp)->tv_usec = (tvp)->tv_usec + (uvp)->tv_usec;	\
		if ((vvp)->tv_usec >= 1000000) {			\
			(vvp)->tv_sec++;				\
			(vvp)->tv_usec -= 1000000;			\
		}							\
	} while (0)
#define	timersub(tvp, uvp, vvp)						\
	do {								\
		(vvp)->tv_sec = (tvp)->tv_sec - (uvp)->tv_sec;		\
		(vvp)->tv_usec = (tvp)->tv_usec - (uvp)->tv_usec;	\
		if ((vvp)->tv_usec < 0) {				\
			(vvp)->tv_sec--;				\
			(vvp)->tv_usec += 1000000;			\
		}							\
	} while (0)
#endif
# 85 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_timeval.h" 3
#endif /* __BSD_VISIBLE */
# 86 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_timeval.h" 3

#endif /* _TIMEVAL_DEFINED */
# 88 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_timeval.h" 3

#endif /* !_SYS__TIMEVAL_H_ */
# 90 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_timeval.h" 3
# 16 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/select.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/timespec.h>
#endif /* expanded by -frewrite-includes */
# 16 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/select.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/timespec.h" 1 3
/*-
 * Copyright (c) 1982, 1986, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)time.h	8.5 (Berkeley) 5/4/95
 * from: FreeBSD: src/sys/sys/time.h,v 1.43 2000/03/20 14:09:05 phk Exp
 *	$FreeBSD$
 */

#ifndef _SYS_TIMESPEC_H_
#define _SYS_TIMESPEC_H_

#if 0 /* expanded by -frewrite-includes */
#include <sys/cdefs.h>
#endif /* expanded by -frewrite-includes */
# 37 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/timespec.h" 3
# 38 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/timespec.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/_timespec.h>
#endif /* expanded by -frewrite-includes */
# 38 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/timespec.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_timespec.h" 1 3
/*-
 * Copyright (c) 1982, 1986, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)time.h	8.5 (Berkeley) 5/4/95
 * from: FreeBSD: src/sys/sys/time.h,v 1.43 2000/03/20 14:09:05 phk Exp
 *	$FreeBSD$
 */

#ifndef _SYS__TIMESPEC_H_
#define	_SYS__TIMESPEC_H_

#if 0 /* expanded by -frewrite-includes */
#include <sys/_types.h>
#endif /* expanded by -frewrite-includes */
# 37 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_timespec.h" 3
# 38 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_timespec.h" 3

#if !defined(__time_t_defined) && !defined(_TIME_T_DECLARED)
typedef	_TIME_T_	time_t;
#define	__time_t_defined
#define	_TIME_T_DECLARED
#endif
# 44 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_timespec.h" 3

struct timespec {
	time_t	tv_sec;		/* seconds */
	long	tv_nsec;	/* and nanoseconds */
};

#endif /* !_SYS__TIMESPEC_H_ */
# 51 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_timespec.h" 3
# 39 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/timespec.h" 2 3

#if __BSD_VISIBLE
#define	TIMEVAL_TO_TIMESPEC(tv, ts)					\
	do {								\
		(ts)->tv_sec = (tv)->tv_sec;				\
		(ts)->tv_nsec = (tv)->tv_usec * 1000;			\
	} while (0)
#define	TIMESPEC_TO_TIMEVAL(tv, ts)					\
	do {								\
		(tv)->tv_sec = (ts)->tv_sec;				\
		(tv)->tv_usec = (ts)->tv_nsec / 1000;			\
	} while (0)

#endif /* __BSD_VISIBLE */
# 53 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/timespec.h" 3

/*
 * Structure defined by POSIX.1b to be like a itimerval, but with
 * timespecs. Used in the timer_*() system calls.
 */
struct itimerspec {
	struct timespec  it_interval;
	struct timespec  it_value;
};

#endif /* _SYS_TIMESPEC_H_ */
# 64 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/timespec.h" 3
# 17 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/select.h" 2 3

#if !defined(_SIGSET_T_DECLARED)
#define	_SIGSET_T_DECLARED
typedef	__sigset_t	sigset_t;
#endif
# 22 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/select.h" 3

#  define _SYS_TYPES_FD_SET
/*
 * Select uses bit masks of file descriptors in longs.
 * These macros manipulate such bit fields (the filesystem macros use chars).
 * FD_SETSIZE may be defined by the user, but the default here
 * should be >= NOFILE (param.h).
 */
#  ifndef	FD_SETSIZE
#	define	FD_SETSIZE	64
#  endif
# 33 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/select.h" 3

typedef	unsigned long	fd_mask;
#  define	NFDBITS	(sizeof (fd_mask) * 8)	/* bits per mask */
#  ifndef	_howmany
#	define	_howmany(x,y)	(((x)+((y)-1))/(y))
#  endif
# 39 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/select.h" 3

/* We use a macro for fd_set so that including Sockets.h afterwards
   can work.  */
typedef	struct _types_fd_set {
	fd_mask	fds_bits[_howmany(FD_SETSIZE, NFDBITS)];
} _types_fd_set;

#define fd_set _types_fd_set

#  define	FD_SET(n, p)	((p)->fds_bits[(n)/NFDBITS] |= (1L << ((n) % NFDBITS)))
#  define	FD_CLR(n, p)	((p)->fds_bits[(n)/NFDBITS] &= ~(1L << ((n) % NFDBITS)))
#  define	FD_ISSET(n, p)	((p)->fds_bits[(n)/NFDBITS] & (1L << ((n) % NFDBITS)))
#  define	FD_ZERO(p)	(__extension__ (void)({ \
     size_t __i; \
     char *__tmp = (char *)p; \
     for (__i = 0; __i < sizeof (*(p)); ++__i) \
       *__tmp++ = 0; \
}))

#if !defined (__INSIDE_CYGWIN_NET__)

__BEGIN_DECLS

int select __P ((int __n, fd_set *__readfds, fd_set *__writefds,
		 fd_set *__exceptfds, struct timeval *__timeout));
#if __POSIX_VISIBLE >= 200112
int pselect __P ((int __n, fd_set *__readfds, fd_set *__writefds,
		  fd_set *__exceptfds, const struct timespec *__timeout,
		  const sigset_t *__set));
#endif
# 69 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/select.h" 3

__END_DECLS

#endif /* !__INSIDE_CYGWIN_NET__ */
# 73 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/select.h" 3

#endif /* !(_WINSOCK_H || _WINSOCKAPI_ || __USE_W32_SOCKETS) */
# 75 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/select.h" 3

#endif /* sys/select.h */
# 77 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/select.h" 3
# 69 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 2 3
#  define	physadr		physadr_t
#  define	quad		quad_t

#ifndef _IN_ADDR_T_DECLARED
typedef	__uint32_t	in_addr_t;	/* base type for internet address */
#define	_IN_ADDR_T_DECLARED
#endif
# 76 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3

#ifndef _IN_PORT_T_DECLARED
typedef	__uint16_t	in_port_t;
#define	_IN_PORT_T_DECLARED
#endif
# 81 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3
#endif /* __BSD_VISIBLE */
# 82 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3

#if __MISC_VISIBLE
#ifndef _BSDTYPES_DEFINED
/* also defined in mingw/gmon.h and in w32api/winsock[2].h */
#ifndef __u_char_defined
typedef	unsigned char	u_char;
#define __u_char_defined
#endif
# 90 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3
#ifndef __u_short_defined
typedef	unsigned short	u_short;
#define __u_short_defined
#endif
# 94 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3
#ifndef __u_int_defined
typedef	unsigned int	u_int;
#define __u_int_defined
#endif
# 98 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3
#ifndef __u_long_defined
typedef	unsigned long	u_long;
#define __u_long_defined
#endif
# 102 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3
#define _BSDTYPES_DEFINED
#endif
# 104 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3
#endif	/*__BSD_VISIBLE || __CYGWIN__ */
# 105 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3

#if __MISC_VISIBLE
typedef	unsigned short	ushort;		/* System V compatibility */
typedef	unsigned int	uint;		/* System V compatibility */
typedef	unsigned long	ulong;		/* System V compatibility */
#endif
# 111 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3

#ifndef _BLKCNT_T_DECLARED
typedef	__blkcnt_t	blkcnt_t;
#define	_BLKCNT_T_DECLARED
#endif
# 116 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3

#ifndef _BLKSIZE_T_DECLARED
typedef	__blksize_t	blksize_t;
#define	_BLKSIZE_T_DECLARED
#endif
# 121 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3

#if !defined(__clock_t_defined) && !defined(_CLOCK_T_DECLARED)
typedef	_CLOCK_T_	clock_t;
#define	__clock_t_defined
#define	_CLOCK_T_DECLARED
#endif
# 127 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3

#if !defined(__time_t_defined) && !defined(_TIME_T_DECLARED)
typedef	_TIME_T_	time_t;
#define	__time_t_defined
#define	_TIME_T_DECLARED
#endif
# 133 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3

#ifndef __daddr_t_defined
typedef	long	daddr_t;
#define __daddr_t_defined
#endif
# 138 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3
#ifndef __caddr_t_defined
typedef	char *	caddr_t;
#define __caddr_t_defined
#endif
# 142 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3

#ifndef _FSBLKCNT_T_DECLARED		/* for statvfs() */
typedef	__fsblkcnt_t	fsblkcnt_t;
typedef	__fsfilcnt_t	fsfilcnt_t;
#define	_FSBLKCNT_T_DECLARED
#endif
# 148 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3

#ifndef _ID_T_DECLARED
typedef	__id_t		id_t;		/* can hold a uid_t or pid_t */
#define	_ID_T_DECLARED
#endif
# 153 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3

#ifndef _INO_T_DECLARED
typedef	__ino_t		ino_t;		/* inode number */
#define	_INO_T_DECLARED
#endif
# 158 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3

#if defined(__i386__) && (defined(GO32) || defined(__MSDOS__))
typedef	char *		addr_t;
typedef unsigned long vm_offset_t;
typedef unsigned long vm_size_t;
#endif /* __i386__ && (GO32 || __MSDOS__) */
# 164 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3

/*
 * All these should be machine specific - right now they are all broken.
 * However, for all of Cygnus' embedded targets, we want them to all be
 * the same.  Otherwise things like sizeof (struct stat) might depend on
 * how the file was compiled (e.g. -mint16 vs -mint32, etc.).
 */

#ifndef _OFF_T_DECLARED
typedef	__off_t		off_t;		/* file offset */
#define	_OFF_T_DECLARED
#endif
# 176 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3
#ifndef _DEV_T_DECLARED
typedef	__dev_t		dev_t;		/* device number or struct cdev */
#define	_DEV_T_DECLARED
#endif
# 180 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3
#ifndef _UID_T_DECLARED
typedef	__uid_t		uid_t;		/* user id */
#define	_UID_T_DECLARED
#endif
# 184 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3
#ifndef _GID_T_DECLARED
typedef	__gid_t		gid_t;		/* group id */
#define	_GID_T_DECLARED
#endif
# 188 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3

#ifndef _PID_T_DECLARED
typedef	__pid_t		pid_t;		/* process id */
#define	_PID_T_DECLARED
#endif
# 193 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3

#ifndef _KEY_T_DECLARED
typedef	__key_t		key_t;		/* IPC key */
#define	_KEY_T_DECLARED
#endif
# 198 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3

#ifndef _SSIZE_T_DECLARED
typedef _ssize_t ssize_t;
#define	_SSIZE_T_DECLARED
#endif
# 203 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3

#ifndef _MODE_T_DECLARED
typedef	__mode_t	mode_t;		/* permissions */
#define	_MODE_T_DECLARED
#endif
# 208 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3

#ifndef _NLINK_T_DECLARED
typedef	__nlink_t	nlink_t;	/* link count */
#define	_NLINK_T_DECLARED
#endif
# 213 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3

#if !defined(__clockid_t_defined) && !defined(_CLOCKID_T_DECLARED)
typedef	__clockid_t	clockid_t;
#define	__clockid_t_defined
#define	_CLOCKID_T_DECLARED
#endif
# 219 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3

#if !defined(__timer_t_defined) && !defined(_TIMER_T_DECLARED)
typedef	__timer_t	timer_t;
#define	__timer_t_defined
#define	_TIMER_T_DECLARED
#endif
# 225 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3

#ifndef _USECONDS_T_DECLARED
typedef	__useconds_t	useconds_t;	/* microseconds (unsigned) */
#define	_USECONDS_T_DECLARED
#endif
# 230 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3

#ifndef _SUSECONDS_T_DECLARED
typedef	__suseconds_t	suseconds_t;
#define	_SUSECONDS_T_DECLARED
#endif
# 235 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3

typedef	__int64_t	sbintime_t;

#if 0 /* expanded by -frewrite-includes */
#include <sys/features.h>
#endif /* expanded by -frewrite-includes */
# 238 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3
# 239 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/_pthreadtypes.h>
#endif /* expanded by -frewrite-includes */
# 239 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_pthreadtypes.h" 1 3
/*
 *  Written by Joel Sherrill <joel.sherrill@OARcorp.com>.
 *
 *  COPYRIGHT (c) 1989-2013, 2015.
 *  On-Line Applications Research Corporation (OAR).
 *
 *  Permission to use, copy, modify, and distribute this software for any
 *  purpose without fee is hereby granted, provided that this entire notice
 *  is included in all copies of any software which is or includes a copy
 *  or modification of this software.
 *
 *  THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 *  WARRANTY.  IN PARTICULAR,  THE AUTHOR MAKES NO REPRESENTATION
 *  OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY OF THIS
 *  SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 */

#ifndef _SYS__PTHREADTYPES_H_
#define	_SYS__PTHREADTYPES_H_

#if defined(_POSIX_THREADS) || __POSIX_VISIBLE >= 199506

#if 0 /* expanded by -frewrite-includes */
#include <sys/sched.h>
#endif /* expanded by -frewrite-includes */
# 23 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_pthreadtypes.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/sched.h" 1 3
/*
 *  Written by Joel Sherrill <joel@OARcorp.com>.
 *
 *  COPYRIGHT (c) 1989-2010.
 *  On-Line Applications Research Corporation (OAR).
 *
 *  Permission to use, copy, modify, and distribute this software for any
 *  purpose without fee is hereby granted, provided that this entire notice
 *  is included in all copies of any software which is or includes a copy
 *  or modification of this software.
 *
 *  THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 *  WARRANTY.  IN PARTICULAR,  THE AUTHOR MAKES NO REPRESENTATION
 *  OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY OF THIS
 *  SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 *  $Id$
 */


#ifndef _SYS_SCHED_H_
#define _SYS_SCHED_H_

#if 0 /* expanded by -frewrite-includes */
#include <sys/_timespec.h>
#endif /* expanded by -frewrite-includes */
# 24 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/sched.h" 3
# 25 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/sched.h" 3

#ifdef __cplusplus
extern "C" {
#endif
# 29 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/sched.h" 3

/* Scheduling Policies */
/* Open Group Specifications Issue 6 */
#if defined(__CYGWIN__)
#define SCHED_OTHER    3
#else
# 35 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/sched.h" 3
#define SCHED_OTHER    0
#endif
# 37 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/sched.h" 3

#define SCHED_FIFO     1
#define SCHED_RR       2

#if defined(_POSIX_SPORADIC_SERVER)
#define SCHED_SPORADIC 4
#endif
# 44 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/sched.h" 3

/* Scheduling Parameters */
/* Open Group Specifications Issue 6 */

struct sched_param {
  int sched_priority;           /* Process execution scheduling priority */

#if defined(_POSIX_SPORADIC_SERVER) || defined(_POSIX_THREAD_SPORADIC_SERVER)
  int sched_ss_low_priority;    /* Low scheduling priority for sporadic */
                                /*   server */
  struct timespec sched_ss_repl_period;
                                /* Replenishment period for sporadic server */
  struct timespec sched_ss_init_budget;
                               /* Initial budget for sporadic server */
  int sched_ss_max_repl;       /* Maximum pending replenishments for */
                               /* sporadic server */
#endif
# 61 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/sched.h" 3
};

#ifdef __cplusplus
}
#endif
# 66 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/sched.h" 3

#endif
# 68 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/sched.h" 3
/* end of include file */

# 24 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_pthreadtypes.h" 2 3

/*
 *  2.5 Primitive System Data Types,  P1003.1c/D10, p. 19.
 */

#if defined(__XMK__)
typedef unsigned int pthread_t;          /* identify a thread */
#else
# 32 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_pthreadtypes.h" 3
typedef __uint32_t pthread_t;            /* identify a thread */
#endif
# 34 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_pthreadtypes.h" 3

/* P1003.1c/D10, p. 118-119 */
#define PTHREAD_SCOPE_PROCESS 0
#define PTHREAD_SCOPE_SYSTEM  1

/* P1003.1c/D10, p. 111 */
#define PTHREAD_INHERIT_SCHED  1      /* scheduling policy and associated */
                                      /*   attributes are inherited from */
                                      /*   the calling thread. */
#define PTHREAD_EXPLICIT_SCHED 2      /* set from provided attribute object */

/* P1003.1c/D10, p. 141 */
#define PTHREAD_CREATE_DETACHED 0
#define PTHREAD_CREATE_JOINABLE  1

#if defined(__XMK__)
typedef struct pthread_attr_s {
  int contentionscope;
  struct sched_param schedparam;
  int  detachstate;
  void *stackaddr;
  size_t stacksize;
} pthread_attr_t;

#define PTHREAD_STACK_MIN       200

#else /* !defined(__XMK__) */
# 61 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_pthreadtypes.h" 3
typedef struct {
  int is_initialized;
  void *stackaddr;
  int stacksize;
  int contentionscope;
  int inheritsched;
  int schedpolicy;
  struct sched_param schedparam;

  /* P1003.4b/D8, p. 54 adds cputime_clock_allowed attribute.  */
#if defined(_POSIX_THREAD_CPUTIME)
  int  cputime_clock_allowed;  /* see time.h */
#endif
# 74 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_pthreadtypes.h" 3
  int  detachstate;
} pthread_attr_t;

#endif /* !defined(__XMK__) */
# 78 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_pthreadtypes.h" 3

#if defined(_POSIX_THREAD_PROCESS_SHARED)
/* NOTE: P1003.1c/D10, p. 81 defines following values for process_shared.  */

#define PTHREAD_PROCESS_PRIVATE 0 /* visible within only the creating process */
#define PTHREAD_PROCESS_SHARED  1 /* visible too all processes with access to */
                                  /*   the memory where the resource is */
                                  /*   located */
#endif
# 87 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_pthreadtypes.h" 3

#if defined(_POSIX_THREAD_PRIO_PROTECT)
/* Mutexes */

/* Values for blocking protocol. */

#define PTHREAD_PRIO_NONE    0
#define PTHREAD_PRIO_INHERIT 1
#define PTHREAD_PRIO_PROTECT 2
#endif
# 97 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_pthreadtypes.h" 3

#if defined(_UNIX98_THREAD_MUTEX_ATTRIBUTES)

/* Values for mutex type */

/* The following defines are part of the X/Open System Interface (XSI). */

/*
 * This type of mutex does not detect deadlock. A thread attempting to
 * relock this mutex without first unlocking it shall deadlock. Attempting
 * to unlock a mutex locked by a different thread results in undefined
 * behavior.  Attempting to unlock an unlocked mutex results in undefined
 * behavior.
 */
#define PTHREAD_MUTEX_NORMAL     0

/*
 * A thread attempting to relock this mutex without first unlocking
 * it shall succeed in locking the mutex.  The relocking deadlock which
 * can occur with mutexes of type PTHREAD_MUTEX_NORMAL cannot occur with
 * this type of mutex.  Multiple locks of this mutex shall require the
 * same number of unlocks to release the mutex before another thread can
 * acquire the mutex. A thread attempting to unlock a mutex which another
 * thread has locked shall return with an error.  A thread attempting to
 * unlock an unlocked mutex shall return with an error.
 */
#define PTHREAD_MUTEX_RECURSIVE  1

/*
 * This type of mutex provides error checking. A thread attempting
 * to relock this mutex without first unlocking it shall return with an
 * error. A thread attempting to unlock a mutex which another thread has
 * locked shall return with an error. A thread attempting to unlock an
 * unlocked mutex shall return with an error.
 */
#define PTHREAD_MUTEX_ERRORCHECK 2

/*
 * Attempting to recursively lock a mutex of this type results
 * in undefined behavior. Attempting to unlock a mutex of this type
 * which was not locked by the calling thread results in undefined
 * behavior. Attempting to unlock a mutex of this type which is not locked
 * results in undefined behavior. An implementation may map this mutex to
 * one of the other mutex types.
 */
#define PTHREAD_MUTEX_DEFAULT    3

#endif /* !defined(_UNIX98_THREAD_MUTEX_ATTRIBUTES) */
# 145 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_pthreadtypes.h" 3

#if defined(__XMK__)
typedef unsigned int pthread_mutex_t;    /* identify a mutex */

typedef struct {
  int type;
} pthread_mutexattr_t;

#else /* !defined(__XMK__) */
# 154 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_pthreadtypes.h" 3
typedef __uint32_t pthread_mutex_t;      /* identify a mutex */

typedef struct {
  int   is_initialized;
#if defined(_POSIX_THREAD_PROCESS_SHARED)
  int   process_shared;  /* allow mutex to be shared amongst processes */
#endif
# 161 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_pthreadtypes.h" 3
#if defined(_POSIX_THREAD_PRIO_PROTECT)
  int   prio_ceiling;
  int   protocol;
#endif
# 165 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_pthreadtypes.h" 3
#if defined(_UNIX98_THREAD_MUTEX_ATTRIBUTES)
  int type;
#endif
# 168 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_pthreadtypes.h" 3
  int   recursive;
} pthread_mutexattr_t;
#endif /* !defined(__XMK__) */
# 171 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_pthreadtypes.h" 3

#define _PTHREAD_MUTEX_INITIALIZER ((pthread_mutex_t) 0xFFFFFFFF)

/* Condition Variables */

typedef __uint32_t pthread_cond_t;       /* identify a condition variable */

#define _PTHREAD_COND_INITIALIZER ((pthread_cond_t) 0xFFFFFFFF)

typedef struct {
  int      is_initialized;
  clock_t  clock;             /* specifiy clock for timeouts */
#if defined(_POSIX_THREAD_PROCESS_SHARED)
  int      process_shared;    /* allow this to be shared amongst processes */
#endif
# 186 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_pthreadtypes.h" 3
} pthread_condattr_t;         /* a condition attribute object */

/* Keys */

typedef __uint32_t pthread_key_t;        /* thread-specific data keys */

typedef struct {
  int   is_initialized;  /* is this structure initialized? */
  int   init_executed;   /* has the initialization routine been run? */
} pthread_once_t;       /* dynamic package initialization */

#define _PTHREAD_ONCE_INIT  { 1, 0 }  /* is initialized and not run */
#endif /* defined(_POSIX_THREADS) || __POSIX_VISIBLE >= 199506 */
# 199 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_pthreadtypes.h" 3

/* POSIX Barrier Types */

#if defined(_POSIX_BARRIERS)
typedef __uint32_t pthread_barrier_t;        /* POSIX Barrier Object */
typedef struct {
  int   is_initialized;  /* is this structure initialized? */
#if defined(_POSIX_THREAD_PROCESS_SHARED)
  int   process_shared;       /* allow this to be shared amongst processes */
#endif
# 209 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_pthreadtypes.h" 3
} pthread_barrierattr_t;
#endif /* defined(_POSIX_BARRIERS) */
# 211 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_pthreadtypes.h" 3

/* POSIX Spin Lock Types */

#if defined(_POSIX_SPIN_LOCKS)
typedef __uint32_t pthread_spinlock_t;        /* POSIX Spin Lock Object */
#endif /* defined(_POSIX_SPIN_LOCKS) */
# 217 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_pthreadtypes.h" 3

/* POSIX Reader/Writer Lock Types */

#if defined(_POSIX_READER_WRITER_LOCKS)
typedef __uint32_t pthread_rwlock_t;         /* POSIX RWLock Object */

#define _PTHREAD_RWLOCK_INITIALIZER ((pthread_rwlock_t) 0xFFFFFFFF)

typedef struct {
  int   is_initialized;       /* is this structure initialized? */
#if defined(_POSIX_THREAD_PROCESS_SHARED)
  int   process_shared;       /* allow this to be shared amongst processes */
#endif
# 230 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_pthreadtypes.h" 3
} pthread_rwlockattr_t;
#endif /* defined(_POSIX_READER_WRITER_LOCKS) */
# 232 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_pthreadtypes.h" 3

#endif /* ! _SYS__PTHREADTYPES_H_ */
# 234 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_pthreadtypes.h" 3
# 240 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <machine/types.h>
#endif /* expanded by -frewrite-includes */
# 240 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/types.h" 1 3
/*
 * Newlib targets may provide an own version of this file in their machine
 * directory to add custom user types for <sys/types.h>.
 */
#ifndef _SYS_TYPES_H
#error "must be included via <sys/types.h>"
#endif /* !_SYS_TYPES_H */
# 8 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/types.h" 3
# 241 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 2 3

#endif  /* !__need_inttypes */
# 243 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3

#undef __need_inttypes

#endif	/* _SYS_TYPES_H */
# 247 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/types.h" 3
# 17 "../../../../../newlib/libm/common/fdlibm.h" 2
#if 0 /* expanded by -frewrite-includes */
#include <machine/ieeefp.h>
#endif /* expanded by -frewrite-includes */
# 17 "../../../../../newlib/libm/common/fdlibm.h"
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 1 3
#ifndef __IEEE_BIG_ENDIAN
#ifndef __IEEE_LITTLE_ENDIAN

/* This file can define macros to choose variations of the IEEE float
   format:

   _FLT_LARGEST_EXPONENT_IS_NORMAL

	Defined if the float format uses the largest exponent for finite
	numbers rather than NaN and infinity representations.  Such a
	format cannot represent NaNs or infinities at all, but it's FLT_MAX
	is twice the IEEE value.

   _FLT_NO_DENORMALS

	Defined if the float format does not support IEEE denormals.  Every
	float with a zero exponent is taken to be a zero representation.
 
   ??? At the moment, there are no equivalent macros above for doubles and
   the macros are not fully supported by --enable-newlib-hw-fp.

   __IEEE_BIG_ENDIAN

        Defined if the float format is big endian.  This is mutually exclusive
        with __IEEE_LITTLE_ENDIAN.

   __IEEE_LITTLE_ENDIAN
 
        Defined if the float format is little endian.  This is mutually exclusive
        with __IEEE_BIG_ENDIAN.

   Note that one of __IEEE_BIG_ENDIAN or __IEEE_LITTLE_ENDIAN must be specified for a
   platform or error will occur.

   __IEEE_BYTES_LITTLE_ENDIAN

        This flag is used in conjunction with __IEEE_BIG_ENDIAN to describe a situation 
	whereby multiple words of an IEEE floating point are in big endian order, but the
	words themselves are little endian with respect to the bytes.

   _DOUBLE_IS_32BITS 

        This is used on platforms that support double by using the 32-bit IEEE
        float type.

   _FLOAT_ARG

        This represents what type a float arg is passed as.  It is used when the type is
        not promoted to double.
	

   __OBSOLETE_MATH_DEFAULT

	Default value for __OBSOLETE_MATH if that's not set by the user.
	It should be set here based on predefined feature macros.

   __OBSOLETE_MATH

	If set to 1 then some new math code will be disabled and older libm
	code will be used instead.  This is necessary because the new math
	code does not support all targets, it assumes that the toolchain has
	ISO C99 support (hexfloat literals, standard fenv semantics), the
	target has IEEE-754 conforming binary32 float and binary64 double
	(not mixed endian) representation, standard SNaN representation,
	double and single precision arithmetics has similar latency and it
	has no legacy SVID matherr support, only POSIX errno and fenv
	exception based error handling.
*/

#if (defined(__arm__) || defined(__thumb__)) && !defined(__MAVERICK__)
/* ARM traditionally used big-endian words; and within those words the
   byte ordering was big or little endian depending upon the target.
   Modern floating-point formats are naturally ordered; in this case
   __VFP_FP__ will be defined, even if soft-float.  */
#ifdef __VFP_FP__
# ifdef __ARMEL__
#  define __IEEE_LITTLE_ENDIAN
# else
# 79 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#  define __IEEE_BIG_ENDIAN
# endif
# 81 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
# if __ARM_FP & 0x8
#  define __OBSOLETE_MATH_DEFAULT 0
# endif
# 84 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#else
# 85 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
# define __IEEE_BIG_ENDIAN
# ifdef __ARMEL__
#  define __IEEE_BYTES_LITTLE_ENDIAN
# endif
# 89 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 90 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 91 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#if defined (__aarch64__)
#if defined (__AARCH64EL__)
#define __IEEE_LITTLE_ENDIAN
#else
# 96 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_BIG_ENDIAN
#endif
# 98 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __OBSOLETE_MATH_DEFAULT 0
#endif
# 100 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __epiphany__
#define __IEEE_LITTLE_ENDIAN
#define Sudden_Underflow 1
#endif
# 105 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __hppa__
#define __IEEE_BIG_ENDIAN
#endif
# 109 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __nds32__
#ifdef __big_endian__
#define __IEEE_BIG_ENDIAN
#else
# 114 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 116 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 117 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __SPU__
#define __IEEE_BIG_ENDIAN

#define isfinite(__y) \
	(__extension__ ({int __cy; \
		(sizeof (__y) == sizeof (float))  ? (1) : \
		(__cy = fpclassify(__y)) != FP_INFINITE && __cy != FP_NAN;}))

#define isinf(__x) ((sizeof (__x) == sizeof (float))  ?  (0) : __isinfd(__x))
#define isnan(__x) ((sizeof (__x) == sizeof (float))  ?  (0) : __isnand(__x))

/*
 * Macros for use in ieeefp.h. We can't just define the real ones here
 * (like those above) as we have name space issues when this is *not*
 * included via generic the ieeefp.h.
 */
#define __ieeefp_isnanf(x)	0
#define __ieeefp_isinff(x)	0
#define __ieeefp_finitef(x)	1
#endif
# 138 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __sparc__
#ifdef __LITTLE_ENDIAN_DATA__
#define __IEEE_LITTLE_ENDIAN
#else
# 143 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_BIG_ENDIAN
#endif
# 145 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 146 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#if defined(__m68k__) || defined(__mc68000__)
#define __IEEE_BIG_ENDIAN
#endif
# 150 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#if defined(__mc68hc11__) || defined(__mc68hc12__) || defined(__mc68hc1x__)
#define __IEEE_BIG_ENDIAN
#ifdef __HAVE_SHORT_DOUBLE__
# define _DOUBLE_IS_32BITS
#endif
# 156 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 157 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#if defined (__H8300__) || defined (__H8300H__) || defined (__H8300S__) || defined (__H8500__) || defined (__H8300SX__)
#define __IEEE_BIG_ENDIAN
#define _FLOAT_ARG float
#define _DOUBLE_IS_32BITS
#endif
# 163 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#if defined (__xc16x__) || defined (__xc16xL__) || defined (__xc16xS__)
#define __IEEE_LITTLE_ENDIAN
#define _FLOAT_ARG float
#define _DOUBLE_IS_32BITS
#endif
# 169 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3


#ifdef __sh__
#ifdef __LITTLE_ENDIAN__
#define __IEEE_LITTLE_ENDIAN
#else
# 175 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_BIG_ENDIAN
#endif
# 177 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#if defined(__SH2E__) || defined(__SH3E__) || defined(__SH4_SINGLE_ONLY__) || defined(__SH2A_SINGLE_ONLY__)
#define _DOUBLE_IS_32BITS
#endif
# 180 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 181 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef _AM29K
#define __IEEE_BIG_ENDIAN
#endif
# 185 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef _WIN32
#define __IEEE_LITTLE_ENDIAN
#endif
# 189 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __i386__
#define __IEEE_LITTLE_ENDIAN
#endif
# 193 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __riscv
#define __IEEE_LITTLE_ENDIAN
#endif
# 197 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __i960__
#define __IEEE_LITTLE_ENDIAN
#endif
# 201 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __lm32__
#define __IEEE_BIG_ENDIAN
#endif
# 205 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __M32R__
#define __IEEE_BIG_ENDIAN
#endif
# 209 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __nvptx__
#define __IEEE_LITTLE_ENDIAN
#endif
# 213 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#if defined(_C4x) || defined(_C3x)
#define __IEEE_BIG_ENDIAN
#define _DOUBLE_IS_32BITS
#endif
# 218 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __TMS320C6X__
#ifdef _BIG_ENDIAN
#define __IEEE_BIG_ENDIAN
#else
# 223 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 225 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 226 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __TIC80__
#define __IEEE_LITTLE_ENDIAN
#endif
# 230 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MIPSEL__
#define __IEEE_LITTLE_ENDIAN
#endif
# 234 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#ifdef __MIPSEB__
#define __IEEE_BIG_ENDIAN
#endif
# 237 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MMIX__
#define __IEEE_BIG_ENDIAN
#endif
# 241 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __D30V__
#define __IEEE_BIG_ENDIAN
#endif
# 245 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

/* necv70 was __IEEE_LITTLE_ENDIAN. */

#ifdef __W65__
#define __IEEE_LITTLE_ENDIAN
#define _DOUBLE_IS_32BITS
#endif
# 252 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#if defined(__Z8001__) || defined(__Z8002__)
#define __IEEE_BIG_ENDIAN
#endif
# 256 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __m88k__
#define __IEEE_BIG_ENDIAN
#endif
# 260 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mn10300__
#define __IEEE_LITTLE_ENDIAN
#endif
# 264 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mn10200__
#define __IEEE_LITTLE_ENDIAN
#define _DOUBLE_IS_32BITS
#endif
# 269 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __v800
#define __IEEE_LITTLE_ENDIAN
#endif
# 273 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __v850
#define __IEEE_LITTLE_ENDIAN
#endif
# 277 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __D10V__
#define __IEEE_BIG_ENDIAN
#if __DOUBLE__ == 32
#define _DOUBLE_IS_32BITS
#endif
# 283 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 284 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __PPC__
#if (defined(_BIG_ENDIAN) && _BIG_ENDIAN) || (defined(_AIX) && _AIX)
#define __IEEE_BIG_ENDIAN
#else
# 289 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#if (defined(_LITTLE_ENDIAN) && _LITTLE_ENDIAN) || (defined(__sun__) && __sun__) || (defined(_WIN32) && _WIN32)
#define __IEEE_LITTLE_ENDIAN
#endif
# 292 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 293 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 294 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __xstormy16__
#define __IEEE_LITTLE_ENDIAN
#endif
# 298 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __arc__
#ifdef __big_endian__
#define __IEEE_BIG_ENDIAN
#else
# 303 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 305 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 306 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __CRX__
#define __IEEE_LITTLE_ENDIAN
#endif
# 310 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __fr30__
#define __IEEE_BIG_ENDIAN
#endif
# 314 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __FT32__
#define __IEEE_LITTLE_ENDIAN
#endif
# 318 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mcore__
#define __IEEE_BIG_ENDIAN
#endif
# 322 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mt__
#define __IEEE_BIG_ENDIAN
#endif
# 326 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __frv__
#define __IEEE_BIG_ENDIAN
#endif
# 330 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __moxie__
#ifdef __MOXIE_BIG_ENDIAN__
#define __IEEE_BIG_ENDIAN
#else
# 335 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 337 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 338 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __ia64__
#ifdef __BIG_ENDIAN__
#define __IEEE_BIG_ENDIAN
#else
# 343 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 345 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 346 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __AVR__
#define __IEEE_LITTLE_ENDIAN
#define _DOUBLE_IS_32BITS
#endif
# 351 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#if defined(__or1k__) || defined(__OR1K__) || defined(__OR1KND__)
#define __IEEE_BIG_ENDIAN
#endif
# 355 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __IP2K__
#define __IEEE_BIG_ENDIAN
#define __SMALL_BITFIELDS
#define _DOUBLE_IS_32BITS
#endif
# 361 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __iq2000__
#define __IEEE_BIG_ENDIAN
#endif
# 365 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MAVERICK__
#ifdef __ARMEL__
#  define __IEEE_LITTLE_ENDIAN
#else  /* must be __ARMEB__ */
# 370 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#  define __IEEE_BIG_ENDIAN
#endif /* __ARMEL__ */
# 372 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif /* __MAVERICK__ */
# 373 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __m32c__
#define __IEEE_LITTLE_ENDIAN
#define __SMALL_BITFIELDS
#endif
# 378 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __CRIS__
#define __IEEE_LITTLE_ENDIAN
#endif
# 382 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __BFIN__
#define __IEEE_LITTLE_ENDIAN
#endif
# 386 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __x86_64__
#define __IEEE_LITTLE_ENDIAN
#endif
# 390 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mep__
#ifdef __LITTLE_ENDIAN__
#define __IEEE_LITTLE_ENDIAN
#else
# 395 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_BIG_ENDIAN
#endif
# 397 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 398 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MICROBLAZE__
#ifndef __MICROBLAZEEL__
#define __IEEE_BIG_ENDIAN
#else
# 403 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 405 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 406 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MSP430__
#define __IEEE_LITTLE_ENDIAN
#define __SMALL_BITFIELDS	/* 16 Bit INT */
#endif
# 411 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __RL78__
#define __IEEE_LITTLE_ENDIAN
#define __SMALL_BITFIELDS	/* 16 Bit INT */
#ifndef __RL78_64BIT_DOUBLES__
#define _DOUBLE_IS_32BITS
#endif
# 418 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 419 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __RX__

#ifdef __RX_BIG_ENDIAN__
#define __IEEE_BIG_ENDIAN
#else
# 425 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 427 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifndef __RX_64BIT_DOUBLES__
#define _DOUBLE_IS_32BITS
#endif
# 431 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __RX_16BIT_INTS__
#define __SMALL_BITFIELDS
#endif
# 435 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#endif
# 437 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#if (defined(__CR16__) || defined(__CR16C__) ||defined(__CR16CP__))
#define __IEEE_LITTLE_ENDIAN
#define __SMALL_BITFIELDS	/* 16 Bit INT */
#endif
# 442 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __NIOS2__
# ifdef __nios2_big_endian__
#  define __IEEE_BIG_ENDIAN
# else
# 447 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#  define __IEEE_LITTLE_ENDIAN
# endif
# 449 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 450 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __VISIUM__
#define __IEEE_BIG_ENDIAN
#endif
# 454 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __CYGWIN__
#define __OBSOLETE_MATH_DEFAULT 0
#endif
# 458 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifndef __OBSOLETE_MATH_DEFAULT
/* Use old math code by default.  */
#define __OBSOLETE_MATH_DEFAULT 1
#endif
# 463 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#ifndef __OBSOLETE_MATH
#define __OBSOLETE_MATH __OBSOLETE_MATH_DEFAULT
#endif
# 466 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#ifndef __IEEE_BIG_ENDIAN
#ifndef __IEEE_LITTLE_ENDIAN
#error Endianess not declared!!
#endif /* not __IEEE_LITTLE_ENDIAN */
# 471 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif /* not __IEEE_BIG_ENDIAN */
# 472 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

#endif /* not __IEEE_LITTLE_ENDIAN */
# 474 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3
#endif /* not __IEEE_BIG_ENDIAN */
# 475 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/ieeefp.h" 3

# 18 "../../../../../newlib/libm/common/fdlibm.h" 2

/* REDHAT LOCAL: Default to XOPEN_MODE.  */
#define _XOPEN_MODE

/* Most routines need to check whether a float is finite, infinite, or not a
   number, and many need to know whether the result of an operation will
   overflow.  These conditions depend on whether the largest exponent is
   used for NaNs & infinities, or whether it's used for finite numbers.  The
   macros below wrap up that kind of information:

   FLT_UWORD_IS_FINITE(X)
	True if a positive float with bitmask X is finite.

   FLT_UWORD_IS_NAN(X)
	True if a positive float with bitmask X is not a number.

   FLT_UWORD_IS_INFINITE(X)
	True if a positive float with bitmask X is +infinity.

   FLT_UWORD_MAX
	The bitmask of FLT_MAX.

   FLT_UWORD_HALF_MAX
	The bitmask of FLT_MAX/2.

   FLT_UWORD_EXP_MAX
	The bitmask of the largest finite exponent (129 if the largest
	exponent is used for finite numbers, 128 otherwise).

   FLT_UWORD_LOG_MAX
	The bitmask of log(FLT_MAX), rounded down.  This value is the largest
	input that can be passed to exp() without producing overflow.

   FLT_UWORD_LOG_2MAX
	The bitmask of log(2*FLT_MAX), rounded down.  This value is the
	largest input than can be passed to cosh() without producing
	overflow.

   FLT_LARGEST_EXP
	The largest biased exponent that can be used for finite numbers
	(255 if the largest exponent is used for finite numbers, 254
	otherwise) */

#ifdef _FLT_LARGEST_EXPONENT_IS_NORMAL
#define FLT_UWORD_IS_FINITE(x) 1
#define FLT_UWORD_IS_NAN(x) 0
#define FLT_UWORD_IS_INFINITE(x) 0
#define FLT_UWORD_MAX 0x7fffffff
#define FLT_UWORD_EXP_MAX 0x43010000
#define FLT_UWORD_LOG_MAX 0x42b2d4fc
#define FLT_UWORD_LOG_2MAX 0x42b437e0
#define HUGE ((float)0X1.FFFFFEP128)
#else
# 71 "../../../../../newlib/libm/common/fdlibm.h"
#define FLT_UWORD_IS_FINITE(x) ((x)<0x7f800000L)
#define FLT_UWORD_IS_NAN(x) ((x)>0x7f800000L)
#define FLT_UWORD_IS_INFINITE(x) ((x)==0x7f800000L)
#define FLT_UWORD_MAX 0x7f7fffffL
#define FLT_UWORD_EXP_MAX 0x43000000
#define FLT_UWORD_LOG_MAX 0x42b17217
#define FLT_UWORD_LOG_2MAX 0x42b2d4fc
#define HUGE ((float)3.40282346638528860e+38)
#endif
# 80 "../../../../../newlib/libm/common/fdlibm.h"
#define FLT_UWORD_HALF_MAX (FLT_UWORD_MAX-(1L<<23))
#define FLT_LARGEST_EXP (FLT_UWORD_MAX>>23)

/* Many routines check for zero and subnormal numbers.  Such things depend
   on whether the target supports denormals or not:

   FLT_UWORD_IS_ZERO(X)
	True if a positive float with bitmask X is +0.	Without denormals,
	any float with a zero exponent is a +0 representation.	With
	denormals, the only +0 representation is a 0 bitmask.

   FLT_UWORD_IS_SUBNORMAL(X)
	True if a non-zero positive float with bitmask X is subnormal.
	(Routines should check for zeros first.)

   FLT_UWORD_MIN
	The bitmask of the smallest float above +0.  Call this number
	REAL_FLT_MIN...

   FLT_UWORD_EXP_MIN
	The bitmask of the float representation of REAL_FLT_MIN's exponent.

   FLT_UWORD_LOG_MIN
	The bitmask of |log(REAL_FLT_MIN)|, rounding down.

   FLT_SMALLEST_EXP
	REAL_FLT_MIN's exponent - EXP_BIAS (1 if denormals are not supported,
	-22 if they are).
*/

#ifdef _FLT_NO_DENORMALS
#define FLT_UWORD_IS_ZERO(x) ((x)<0x00800000L)
#define FLT_UWORD_IS_SUBNORMAL(x) 0
#define FLT_UWORD_MIN 0x00800000
#define FLT_UWORD_EXP_MIN 0x42fc0000
#define FLT_UWORD_LOG_MIN 0x42aeac50
#define FLT_SMALLEST_EXP 1
#else
# 118 "../../../../../newlib/libm/common/fdlibm.h"
#define FLT_UWORD_IS_ZERO(x) ((x)==0)
#define FLT_UWORD_IS_SUBNORMAL(x) ((x)<0x00800000L)
#define FLT_UWORD_MIN 0x00000001
#define FLT_UWORD_EXP_MIN 0x43160000
#define FLT_UWORD_LOG_MIN 0x42cff1b5
#define FLT_SMALLEST_EXP -22
#endif
# 125 "../../../../../newlib/libm/common/fdlibm.h"

#ifdef __STDC__
#undef __P
#define	__P(p)	p
#else
# 130 "../../../../../newlib/libm/common/fdlibm.h"
#define	__P(p)	()
#endif
# 132 "../../../../../newlib/libm/common/fdlibm.h"

/* 
 * set X_TLOSS = pi*2**52, which is possibly defined in <values.h>
 * (one may replace the following line by "#include <values.h>")
 */

#define X_TLOSS		1.41484755040568800000e+16 

/* Functions that are not documented, and are not in <math.h>.  */

#ifdef _SCALB_INT
extern double scalb __P((double, int));
#else
# 145 "../../../../../newlib/libm/common/fdlibm.h"
extern double scalb __P((double, double));
#endif
# 147 "../../../../../newlib/libm/common/fdlibm.h"
extern double significand __P((double));

extern long double __ieee754_hypotl __P((long double, long double));

/* ieee style elementary functions */
extern double __ieee754_sqrt __P((double));			
extern double __ieee754_acos __P((double));			
extern double __ieee754_acosh __P((double));			
extern double __ieee754_log __P((double));			
extern double __ieee754_atanh __P((double));			
extern double __ieee754_asin __P((double));			
extern double __ieee754_atan2 __P((double,double));			
extern double __ieee754_exp __P((double));
extern double __ieee754_cosh __P((double));
extern double __ieee754_fmod __P((double,double));
extern double __ieee754_pow __P((double,double));
extern double __ieee754_lgamma_r __P((double,int *));
extern double __ieee754_gamma_r __P((double,int *));
extern double __ieee754_log10 __P((double));
extern double __ieee754_sinh __P((double));
extern double __ieee754_hypot __P((double,double));
extern double __ieee754_j0 __P((double));
extern double __ieee754_j1 __P((double));
extern double __ieee754_y0 __P((double));
extern double __ieee754_y1 __P((double));
extern double __ieee754_jn __P((int,double));
extern double __ieee754_yn __P((int,double));
extern double __ieee754_remainder __P((double,double));
extern __int32_t __ieee754_rem_pio2 __P((double,double*));
#ifdef _SCALB_INT
extern double __ieee754_scalb __P((double,int));
#else
# 179 "../../../../../newlib/libm/common/fdlibm.h"
extern double __ieee754_scalb __P((double,double));
#endif
# 181 "../../../../../newlib/libm/common/fdlibm.h"

/* fdlibm kernel function */
extern double __kernel_standard __P((double,double,int));
extern double __kernel_sin __P((double,double,int));
extern double __kernel_cos __P((double,double));
extern double __kernel_tan __P((double,double,int));
extern int    __kernel_rem_pio2 __P((double*,double*,int,int,int,const __int32_t*));

/* Undocumented float functions.  */
#ifdef _SCALB_INT
extern float scalbf __P((float, int));
#else
# 193 "../../../../../newlib/libm/common/fdlibm.h"
extern float scalbf __P((float, float));
#endif
# 195 "../../../../../newlib/libm/common/fdlibm.h"
extern float significandf __P((float));

/* ieee style elementary float functions */
extern float __ieee754_sqrtf __P((float));			
extern float __ieee754_acosf __P((float));			
extern float __ieee754_acoshf __P((float));			
extern float __ieee754_logf __P((float));			
extern float __ieee754_atanhf __P((float));			
extern float __ieee754_asinf __P((float));			
extern float __ieee754_atan2f __P((float,float));			
extern float __ieee754_expf __P((float));
extern float __ieee754_coshf __P((float));
extern float __ieee754_fmodf __P((float,float));
extern float __ieee754_powf __P((float,float));
extern float __ieee754_lgammaf_r __P((float,int *));
extern float __ieee754_gammaf_r __P((float,int *));
extern float __ieee754_log10f __P((float));
extern float __ieee754_sinhf __P((float));
extern float __ieee754_hypotf __P((float,float));
extern float __ieee754_j0f __P((float));
extern float __ieee754_j1f __P((float));
extern float __ieee754_y0f __P((float));
extern float __ieee754_y1f __P((float));
extern float __ieee754_jnf __P((int,float));
extern float __ieee754_ynf __P((int,float));
extern float __ieee754_remainderf __P((float,float));
extern __int32_t __ieee754_rem_pio2f __P((float,float*));
#ifdef _SCALB_INT
extern float __ieee754_scalbf __P((float,int));
#else
# 225 "../../../../../newlib/libm/common/fdlibm.h"
extern float __ieee754_scalbf __P((float,float));
#endif
# 227 "../../../../../newlib/libm/common/fdlibm.h"

#if !__OBSOLETE_MATH
/* The new math code does not provide separate wrapper function
   for error handling, so the extern symbol is called directly.
   This is valid as long as there are no namespace issues (the
   extern symbol is reserved whenever the caller is reserved)
   and there are no observable error handling side effects.  */
# define __ieee754_exp(x) exp(x)
# define __ieee754_log(x) log(x)
# define __ieee754_pow(x,y) pow(x,y)
# define __ieee754_expf(x) expf(x)
# define __ieee754_logf(x) logf(x)
# define __ieee754_powf(x,y) powf(x,y)
#endif
# 241 "../../../../../newlib/libm/common/fdlibm.h"

/* float versions of fdlibm kernel functions */
extern float __kernel_sinf __P((float,float,int));
extern float __kernel_cosf __P((float,float));
extern float __kernel_tanf __P((float,float,int));
extern int   __kernel_rem_pio2f __P((float*,float*,int,int,int,const __int32_t*));

/* The original code used statements like
	n0 = ((*(int*)&one)>>29)^1;		* index of high word *
	ix0 = *(n0+(int*)&x);			* high word of x *
	ix1 = *((1-n0)+(int*)&x);		* low word of x *
   to dig two 32 bit words out of the 64 bit IEEE floating point
   value.  That is non-ANSI, and, moreover, the gcc instruction
   scheduler gets it wrong.  We instead use the following macros.
   Unlike the original code, we determine the endianness at compile
   time, not at run time; I don't see much benefit to selecting
   endianness at run time.  */

#ifndef __IEEE_BIG_ENDIAN
#ifndef __IEEE_LITTLE_ENDIAN
 #error Must define endianness
#endif
# 263 "../../../../../newlib/libm/common/fdlibm.h"
#endif
# 264 "../../../../../newlib/libm/common/fdlibm.h"

/* A union which permits us to convert between a double and two 32 bit
   ints.  */

#ifdef __IEEE_BIG_ENDIAN

typedef union 
{
  double value;
  struct 
  {
    __uint32_t msw;
    __uint32_t lsw;
  } parts;
} ieee_double_shape_type;

#endif
# 281 "../../../../../newlib/libm/common/fdlibm.h"

#ifdef __IEEE_LITTLE_ENDIAN

typedef union 
{
  double value;
  struct 
  {
    __uint32_t lsw;
    __uint32_t msw;
  } parts;
} ieee_double_shape_type;

#endif
# 295 "../../../../../newlib/libm/common/fdlibm.h"

/* Get two 32 bit ints from a double.  */

#define EXTRACT_WORDS(ix0,ix1,d)				\
do {								\
  ieee_double_shape_type ew_u;					\
  ew_u.value = (d);						\
  (ix0) = ew_u.parts.msw;					\
  (ix1) = ew_u.parts.lsw;					\
} while (0)

/* Get the more significant 32 bit int from a double.  */

#define GET_HIGH_WORD(i,d)					\
do {								\
  ieee_double_shape_type gh_u;					\
  gh_u.value = (d);						\
  (i) = gh_u.parts.msw;						\
} while (0)

/* Get the less significant 32 bit int from a double.  */

#define GET_LOW_WORD(i,d)					\
do {								\
  ieee_double_shape_type gl_u;					\
  gl_u.value = (d);						\
  (i) = gl_u.parts.lsw;						\
} while (0)

/* Set a double from two 32 bit ints.  */

#define INSERT_WORDS(d,ix0,ix1)					\
do {								\
  ieee_double_shape_type iw_u;					\
  iw_u.parts.msw = (ix0);					\
  iw_u.parts.lsw = (ix1);					\
  (d) = iw_u.value;						\
} while (0)

/* Set the more significant 32 bits of a double from an int.  */

#define SET_HIGH_WORD(d,v)					\
do {								\
  ieee_double_shape_type sh_u;					\
  sh_u.value = (d);						\
  sh_u.parts.msw = (v);						\
  (d) = sh_u.value;						\
} while (0)

/* Set the less significant 32 bits of a double from an int.  */

#define SET_LOW_WORD(d,v)					\
do {								\
  ieee_double_shape_type sl_u;					\
  sl_u.value = (d);						\
  sl_u.parts.lsw = (v);						\
  (d) = sl_u.value;						\
} while (0)

/* A union which permits us to convert between a float and a 32 bit
   int.  */

typedef union
{
  float value;
  __uint32_t word;
} ieee_float_shape_type;

/* Get a 32 bit int from a float.  */

#define GET_FLOAT_WORD(i,d)					\
do {								\
  ieee_float_shape_type gf_u;					\
  gf_u.value = (d);						\
  (i) = gf_u.word;						\
} while (0)

/* Set a float from a 32 bit int.  */

#define SET_FLOAT_WORD(d,i)					\
do {								\
  ieee_float_shape_type sf_u;					\
  sf_u.word = (i);						\
  (d) = sf_u.value;						\
} while (0)

/* Macros to avoid undefined behaviour that can arise if the amount
   of a shift is exactly equal to the size of the shifted operand.  */

#define SAFE_LEFT_SHIFT(op,amt)					\
  (((amt) < 8 * sizeof(op)) ? ((op) << (amt)) : 0)

#define SAFE_RIGHT_SHIFT(op,amt)				\
  (((amt) < 8 * sizeof(op)) ? ((op) >> (amt)) : 0)

#ifdef  _COMPLEX_H

/*
 * Quoting from ISO/IEC 9899:TC2:
 *
 * 6.2.5.13 Types
 * Each complex type has the same representation and alignment requirements as
 * an array type containing exactly two elements of the corresponding real type;
 * the first element is equal to the real part, and the second element to the
 * imaginary part, of the complex number.
 */
typedef union {
        float complex z;
        float parts[2];
} float_complex;

typedef union {
        double complex z;
        double parts[2];
} double_complex;

typedef union {
        long double complex z;
        long double parts[2];
} long_double_complex;

#define REAL_PART(z)    ((z).parts[0])
#define IMAG_PART(z)    ((z).parts[1])

#endif  /* _COMPLEX_H */
# 420 "../../../../../newlib/libm/common/fdlibm.h"

# 25 "../../../../../newlib/libm/common/sf_lrint.c" 2

#ifdef __STDC__
static const float
#else
# 29 "../../../../../newlib/libm/common/sf_lrint.c"
static float 
#endif
# 31 "../../../../../newlib/libm/common/sf_lrint.c"
/* Adding a float, x, to 2^23 will cause the result to be rounded based on
   the fractional part of x, according to the implementation's current rounding
   mode.  2^23 is the smallest float that can be represented using all 23 significant
   digits. */
TWO23[2]={
  8.3886080000e+06, /* 0x4b000000 */
 -8.3886080000e+06, /* 0xcb000000 */
};

#ifdef __STDC__
	long int lrintf(float x)
#else
# 43 "../../../../../newlib/libm/common/sf_lrint.c"
	long int lrintf(x)
	float x;
#endif
# 46 "../../../../../newlib/libm/common/sf_lrint.c"
{
  __int32_t j0,sx;
  __uint32_t i0;
  float t;
  volatile float w;
  long int result;

  GET_FLOAT_WORD(i0,x);

  /* Extract sign bit. */
  sx = (i0 >> 31);

  /* Extract exponent field. */
  j0 = ((i0 & 0x7f800000) >> 23) - 127;
  
  if (j0 < (int)(sizeof (long int) * 8) - 1)
    {
      if (j0 < -1)
        return 0;
      else if (j0 >= 23)
        result = (long int) ((i0 & 0x7fffff) | 0x800000) << (j0 - 23);
      else
        {
          w = TWO23[sx] + x;
          t = w - TWO23[sx];
          GET_FLOAT_WORD (i0, t);
          /* Detect the all-zeros representation of plus and
             minus zero, which fails the calculation below. */
          if ((i0 & ~(1L << 31)) == 0)
              return 0;
          j0 = ((i0 >> 23) & 0xff) - 0x7f;
          i0 &= 0x7fffff;
          i0 |= 0x800000;
          result = i0 >> (23 - j0);
        }
    }
  else
    {
      return (long int) x;
    }
  return sx ? -result : result;
}

#ifdef _DOUBLE_IS_32BITS

#ifdef __STDC__
	long int lrint(double x)
#else
# 94 "../../../../../newlib/libm/common/sf_lrint.c"
	long int lrint(x)
	double x;
#endif
# 97 "../../../../../newlib/libm/common/sf_lrint.c"
{
  return lrintf((float) x);
}

#endif /* defined(_DOUBLE_IS_32BITS) */
# 102 "../../../../../newlib/libm/common/sf_lrint.c"
