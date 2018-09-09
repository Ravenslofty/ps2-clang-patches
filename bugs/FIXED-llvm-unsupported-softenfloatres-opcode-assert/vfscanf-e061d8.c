# 1 "<built-in>"
# 1 "../../../../../newlib/libc/stdio/vfscanf.c"
/*-
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that the above copyright notice and this paragraph are
 * duplicated in all such forms and that any documentation,
 * advertising materials, and other materials related to such
 * distribution and use acknowledge that the software was developed
 * by the University of California, Berkeley.  The name of the
 * University may not be used to endorse or promote products derived
 * from this software without specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

/*
FUNCTION
<<vfscanf>>, <<vscanf>>, <<vsscanf>>---format argument list

INDEX
	vfscanf
INDEX
	_vfscanf_r
INDEX
	vscanf
INDEX
	_vscanf_r
INDEX
	vsscanf
INDEX
	_vsscanf_r

SYNOPSIS
	#include <stdio.h>
	#include <stdarg.h>
	int vscanf(const char *<[fmt]>, va_list <[list]>);
	int vfscanf(FILE *<[fp]>, const char *<[fmt]>, va_list <[list]>);
	int vsscanf(const char *<[str]>, const char *<[fmt]>, va_list <[list]>);

	int _vscanf_r(struct _reent *<[reent]>, const char *<[fmt]>,
                       va_list <[list]>);
	int _vfscanf_r(struct _reent *<[reent]>, FILE *<[fp]>, const char *<[fmt]>,
                       va_list <[list]>);
	int _vsscanf_r(struct _reent *<[reent]>, const char *<[str]>,
                       const char *<[fmt]>, va_list <[list]>);

DESCRIPTION
<<vscanf>>, <<vfscanf>>, and <<vsscanf>> are (respectively) variants
of <<scanf>>, <<fscanf>>, and <<sscanf>>.  They differ only in
allowing their caller to pass the variable argument list as a
<<va_list>> object (initialized by <<va_start>>) rather than
directly accepting a variable number of arguments.

RETURNS
The return values are consistent with the corresponding functions:
<<vscanf>> returns the number of input fields successfully scanned,
converted, and stored; the return value does not include scanned
fields which were not stored.

If <<vscanf>> attempts to read at end-of-file, the return value
is <<EOF>>.

If no fields were stored, the return value is <<0>>.

The routines <<_vscanf_r>>, <<_vfscanf_f>>, and <<_vsscanf_r>> are
reentrant versions which take an additional first parameter which points to the
reentrancy structure.

PORTABILITY
These are GNU extensions.

Supporting OS subroutines required:
*/

#if 0 /* expanded by -frewrite-includes */
#include <_ansi.h>
#endif /* expanded by -frewrite-includes */
# 77 "../../../../../newlib/libc/stdio/vfscanf.c"
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
# 78 "../../../../../newlib/libc/stdio/vfscanf.c" 2
#if 0 /* expanded by -frewrite-includes */
#include <reent.h>
#endif /* expanded by -frewrite-includes */
# 78 "../../../../../newlib/libc/stdio/vfscanf.c"
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/reent.h" 1 3
/* This header file provides the reentrancy.  */

/* The reentrant system calls here serve two purposes:

   1) Provide reentrant versions of the system calls the ANSI C library
      requires.
   2) Provide these system calls in a namespace clean way.

   It is intended that *all* system calls that the ANSI C library needs
   be declared here.  It documents them all in one place.  All library access
   to the system is via some form of these functions.

   The target may provide the needed syscalls by any of the following:

   1) Define the reentrant versions of the syscalls directly.
      (eg: _open_r, _close_r, etc.).  Please keep the namespace clean.
      When you do this, set "syscall_dir" to "syscalls" and add
      -DREENTRANT_SYSCALLS_PROVIDED to newlib_cflags in configure.host.

   2) Define namespace clean versions of the system calls by prefixing
      them with '_' (eg: _open, _close, etc.).  Technically, there won't be
      true reentrancy at the syscall level, but the library will be namespace
      clean.
      When you do this, set "syscall_dir" to "syscalls" in configure.host.

   3) Define or otherwise provide the regular versions of the syscalls
      (eg: open, close, etc.).  The library won't be reentrant nor namespace
      clean, but at least it will work.
      When you do this, add -DMISSING_SYSCALL_NAMES to newlib_cflags in
      configure.host.

   4) Define or otherwise provide the regular versions of the syscalls,
      and do not supply functional interfaces for any of the reentrant
      calls. With this method, the reentrant syscalls are redefined to
      directly call the regular system call without the reentrancy argument.
      When you do this, specify both -DREENTRANT_SYSCALLS_PROVIDED and 
      -DMISSING_SYSCALL_NAMES via newlib_cflags in configure.host and do
      not specify "syscall_dir".

   Stubs of the reentrant versions of the syscalls exist in the libc/reent
   source directory and are provided if REENTRANT_SYSCALLS_PROVIDED isn't 
   defined.  These stubs call the native system calls: _open, _close, etc. 
   if MISSING_SYSCALL_NAMES is *not* defined, otherwise they call the
   non-underscored versions: open, close, etc. when MISSING_SYSCALL_NAMES
   *is* defined.

   By default, newlib functions call the reentrant syscalls internally,
   passing a reentrancy structure as an argument.  This reentrancy structure
   contains data that is thread-specific.  For example, the errno value is
   kept in the reentrancy structure.  If multiple threads exist, each will
   keep a separate errno value which is intuitive since the application flow
   cannot check for failure reliably otherwise.

   The reentrant syscalls are either provided by the platform, by the 
   libc/reent stubs, or in the case of both MISSING_SYSCALL_NAMES and 
   REENTRANT_SYSCALLS_PROVIDED being defined, the calls are redefined to
   simply call the regular syscalls with no reentrancy struct argument.

   A single-threaded application does not need to worry about the reentrancy
   structure.  It is used internally.  

   A multi-threaded application needs either to manually manage reentrancy 
   structures or use dynamic reentrancy.
   
   Manually managing reentrancy structures entails calling special reentrant
   versions of newlib functions that have an additional reentrancy argument.
   For example, _printf_r.  By convention, the first argument is the
   reentrancy structure.  By default, the normal version of the function
   uses the default reentrancy structure: _REENT.  The reentrancy structure
   is passed internally, eventually to the reentrant syscalls themselves.
   How the structures are stored and accessed in this model is up to the
   application.

   Dynamic reentrancy is specified by the __DYNAMIC_REENT__ flag.  This
   flag denotes setting up a macro to replace _REENT with a function call
   to __getreent().  This function needs to be implemented by the platform
   and it is meant to return the reentrancy structure for the current
   thread.  When the regular C functions (e.g. printf) go to call internal
   routines with the default _REENT structure, they end up calling with 
   the reentrancy structure for the thread.  Thus, application code does not
   need to call the _r routines nor worry about reentrancy structures.  */

/* WARNING: All identifiers here must begin with an underscore.  This file is
   included by stdio.h and others and we therefore must only use identifiers
   in the namespace allotted to us.  */

#ifndef _REENT_H_
#ifdef __cplusplus
extern "C" {
#endif
# 91 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/reent.h" 3
#define _REENT_H_

#if 0 /* expanded by -frewrite-includes */
#include <sys/reent.h>
#endif /* expanded by -frewrite-includes */
# 93 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/reent.h" 3
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
# 14 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/reent.h" 3
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
# 94 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/reent.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/_types.h>
#endif /* expanded by -frewrite-includes */
# 94 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/reent.h" 3
# 95 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/reent.h" 3

#define __need_size_t
#define __need_ptrdiff_t
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 98 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/reent.h" 3
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
# 99 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/reent.h" 2 3

/* FIXME: not namespace clean */
struct stat;
struct tms;
struct timeval;
struct timezone;

#if defined(REENTRANT_SYSCALLS_PROVIDED) && defined(MISSING_SYSCALL_NAMES)

#define _close_r(__reent, __fd)                   close(__fd)
#define _execve_r(__reent, __f, __arg, __env)     execve(__f, __arg, __env)
#define _fcntl_r(__reent, __fd, __cmd, __arg)     fcntl(__fd, __cmd, __arg)
#define _fork_r(__reent)                          fork()
#define _fstat_r(__reent, __fdes, __stat)         fstat(__fdes, __stat)
#define _getpid_r(__reent)                        getpid()
#define _isatty_r(__reent, __desc)                isatty(__desc)
#define _kill_r(__reent, __pid, __signal)         kill(__pid, __signal)
#define _link_r(__reent, __oldpath, __newpath)    link(__oldpath, __newpath)
#define _lseek_r(__reent, __fdes, __off, __w)     lseek(__fdes, __off, __w)
#define _mkdir_r(__reent, __path, __m)		  mkdir(__path, __m)
#define _open_r(__reent, __path, __flag, __m)     open(__path, __flag, __m)
#define _read_r(__reent, __fd, __buff, __cnt)     read(__fd, __buff, __cnt)
#define _rename_r(__reent, __old, __new)	  rename(__old, __new)
#define _sbrk_r(__reent, __incr)                  sbrk(__incr)
#define _stat_r(__reent, __path, __buff)          stat(__path, __buff)
#define _times_r(__reent, __time)                 times(__time)
#define _unlink_r(__reent, __path)                unlink(__path)
#define _wait_r(__reent, __status)                wait(__status)
#define _write_r(__reent, __fd, __buff, __cnt)    write(__fd, __buff, __cnt)
#define _gettimeofday_r(__reent, __tp, __tzp)     gettimeofday(__tp, __tzp)

#ifdef __LARGE64_FILES
#define _lseek64_r(__reent, __fd, __off, __w)     lseek64(__fd, __off, __w)
#define _fstat64_r(__reent, __fd, __buff)         fstat64(__fd, __buff)
#define _open64_r(__reent, __path, __flag, __m)   open64(__path, __flag, __m)
#endif
# 135 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/reent.h" 3

#else
# 137 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/reent.h" 3
/* Reentrant versions of system calls.  */

extern int _close_r (struct _reent *, int);
extern int _execve_r (struct _reent *, const char *, char *const *, char *const *);
extern int _fcntl_r (struct _reent *, int, int, int);
extern int _fork_r (struct _reent *);
extern int _fstat_r (struct _reent *, int, struct stat *);
extern int _getpid_r (struct _reent *);
extern int _isatty_r (struct _reent *, int);
extern int _kill_r (struct _reent *, int, int);
extern int _link_r (struct _reent *, const char *, const char *);
extern _off_t _lseek_r (struct _reent *, int, _off_t, int);
extern int _mkdir_r (struct _reent *, const char *, int);
extern int _open_r (struct _reent *, const char *, int, int);
extern _ssize_t _read_r (struct _reent *, int, void *, size_t);
extern int _rename_r (struct _reent *, const char *, const char *);
extern void *_sbrk_r (struct _reent *, ptrdiff_t);
extern int _stat_r (struct _reent *, const char *, struct stat *);
extern _CLOCK_T_ _times_r (struct _reent *, struct tms *);
extern int _unlink_r (struct _reent *, const char *);
extern int _wait_r (struct _reent *, int *);
extern _ssize_t _write_r (struct _reent *, int, const void *, size_t);

/* This one is not guaranteed to be available on all targets.  */
extern int _gettimeofday_r (struct _reent *, struct timeval *__tp, void *__tzp);

#ifdef __LARGE64_FILES


#if defined(__CYGWIN__)
#define stat64 stat
#endif
# 169 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/reent.h" 3
struct stat64;

extern _off64_t _lseek64_r (struct _reent *, int, _off64_t, int);
extern int _fstat64_r (struct _reent *, int, struct stat64 *);
extern int _open64_r (struct _reent *, const char *, int, int);
extern int _stat64_r (struct _reent *, const char *, struct stat64 *);

/* Don't pollute namespace if not building newlib. */
#if defined (__CYGWIN__) && !defined (_COMPILING_NEWLIB)
#undef stat64
#endif
# 180 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/reent.h" 3

#endif
# 182 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/reent.h" 3

#endif
# 184 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/reent.h" 3

#ifdef __cplusplus
}
#endif
# 188 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/reent.h" 3
#endif /* _REENT_H_ */
# 189 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/reent.h" 3
# 79 "../../../../../newlib/libc/stdio/vfscanf.c" 2
#if 0 /* expanded by -frewrite-includes */
#include <newlib.h>
#endif /* expanded by -frewrite-includes */
# 79 "../../../../../newlib/libc/stdio/vfscanf.c"
# 80 "../../../../../newlib/libc/stdio/vfscanf.c"
#if 0 /* expanded by -frewrite-includes */
#include <ctype.h>
#endif /* expanded by -frewrite-includes */
# 80 "../../../../../newlib/libc/stdio/vfscanf.c"
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/ctype.h" 1 3
#ifndef _CTYPE_H_
#define _CTYPE_H_

#if 0 /* expanded by -frewrite-includes */
#include "_ansi.h"
#endif /* expanded by -frewrite-includes */
# 4 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/ctype.h" 3
# 5 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/ctype.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/cdefs.h>
#endif /* expanded by -frewrite-includes */
# 5 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/ctype.h" 3
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
# 6 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/ctype.h" 2 3

#if __POSIX_VISIBLE >= 200809 || __MISC_VISIBLE || defined (_COMPILING_NEWLIB)
#if 0 /* expanded by -frewrite-includes */
#include <xlocale.h>
#endif /* expanded by -frewrite-includes */
# 8 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/ctype.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/xlocale.h" 1 3
/* Definition of opaque POSIX-1.2008 type locale_t for userspace. */

#ifndef	_XLOCALE_H
#define _XLOCALE_H

#if 0 /* expanded by -frewrite-includes */
#include <newlib.h>
#endif /* expanded by -frewrite-includes */
# 6 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/xlocale.h" 3
# 7 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/xlocale.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/config.h>
#endif /* expanded by -frewrite-includes */
# 7 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/xlocale.h" 3
# 8 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/xlocale.h" 3

struct __locale_t;
typedef struct __locale_t *locale_t;

#endif	/* _XLOCALE_H */
# 13 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/xlocale.h" 3
# 9 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/ctype.h" 2 3
#endif
# 10 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/ctype.h" 3

_BEGIN_STD_C

int isalnum (int __c);
int isalpha (int __c);
int iscntrl (int __c);
int isdigit (int __c);
int isgraph (int __c);
int islower (int __c);
int isprint (int __c);
int ispunct (int __c);
int isspace (int __c);
int isupper (int __c);
int isxdigit (int __c);
int tolower (int __c);
int toupper (int __c);

#if __ISO_C_VISIBLE >= 1999
int isblank (int __c);
#endif
# 30 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/ctype.h" 3

#if __MISC_VISIBLE || __XSI_VISIBLE
int isascii (int __c);
int toascii (int __c);
#define _tolower(__c) ((unsigned char)(__c) - 'A' + 'a')
#define _toupper(__c) ((unsigned char)(__c) - 'a' + 'A')
#endif
# 37 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/ctype.h" 3

#if __POSIX_VISIBLE >= 200809
extern int isalnum_l (int __c, locale_t __l);
extern int isalpha_l (int __c, locale_t __l);
extern int isblank_l (int __c, locale_t __l);
extern int iscntrl_l (int __c, locale_t __l);
extern int isdigit_l (int __c, locale_t __l);
extern int isgraph_l (int __c, locale_t __l);
extern int islower_l (int __c, locale_t __l);
extern int isprint_l (int __c, locale_t __l);
extern int ispunct_l (int __c, locale_t __l);
extern int isspace_l (int __c, locale_t __l);
extern int isupper_l (int __c, locale_t __l);
extern int isxdigit_l(int __c, locale_t __l);
extern int tolower_l (int __c, locale_t __l);
extern int toupper_l (int __c, locale_t __l);
#endif
# 54 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/ctype.h" 3

#if __MISC_VISIBLE
extern int isascii_l (int __c, locale_t __l);
extern int toascii_l (int __c, locale_t __l);
#endif
# 59 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/ctype.h" 3

#define	_U	01
#define	_L	02
#define	_N	04
#define	_S	010
#define _P	020
#define _C	040
#define _X	0100
#define	_B	0200

const char *__locale_ctype_ptr (void);
# define __CTYPE_PTR	(__locale_ctype_ptr ())

#ifndef __cplusplus
/* These macros are intentionally written in a manner that will trigger
   a gcc -Wall warning if the user mistakenly passes a 'char' instead
   of an int containing an 'unsigned char'.  Note that the sizeof will
   always be 1, which is what we want for mapping EOF to __CTYPE_PTR[0];
   the use of a raw index inside the sizeof triggers the gcc warning if
   __c was of type char, and sizeof masks side effects of the extra __c.
   Meanwhile, the real index to __CTYPE_PTR+1 must be cast to int,
   since isalpha(0x100000001LL) must equal isalpha(1), rather than being
   an out-of-bounds reference on a 64-bit machine.  */
#define __ctype_lookup(__c) ((__CTYPE_PTR+sizeof(""[__c]))[(int)(__c)])

#define	isalpha(__c)	(__ctype_lookup(__c)&(_U|_L))
#define	isupper(__c)	((__ctype_lookup(__c)&(_U|_L))==_U)
#define	islower(__c)	((__ctype_lookup(__c)&(_U|_L))==_L)
#define	isdigit(__c)	(__ctype_lookup(__c)&_N)
#define	isxdigit(__c)	(__ctype_lookup(__c)&(_X|_N))
#define	isspace(__c)	(__ctype_lookup(__c)&_S)
#define ispunct(__c)	(__ctype_lookup(__c)&_P)
#define isalnum(__c)	(__ctype_lookup(__c)&(_U|_L|_N))
#define isprint(__c)	(__ctype_lookup(__c)&(_P|_U|_L|_N|_B))
#define	isgraph(__c)	(__ctype_lookup(__c)&(_P|_U|_L|_N))
#define iscntrl(__c)	(__ctype_lookup(__c)&_C)

#if defined(__GNUC__) && __ISO_C_VISIBLE >= 1999
#define isblank(__c) \
  __extension__ ({ __typeof__ (__c) __x = (__c);		\
        (__ctype_lookup(__x)&_B) || (int) (__x) == '\t';})
#endif
# 101 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/ctype.h" 3

#if __POSIX_VISIBLE >= 200809
const char *__locale_ctype_ptr_l (locale_t);
#define __ctype_lookup_l(__c,__l) ((__locale_ctype_ptr_l(__l)+sizeof(""[__c]))[(int)(__c)])

#define	isalpha_l(__c,__l)	(__ctype_lookup_l(__c,__l)&(_U|_L))
#define	isupper_l(__c,__l)	((__ctype_lookup_l(__c,__l)&(_U|_L))==_U)
#define	islower_l(__c,__l)	((__ctype_lookup_l(__c,__l)&(_U|_L))==_L)
#define	isdigit_l(__c,__l)	(__ctype_lookup_l(__c,__l)&_N)
#define	isxdigit_l(__c,__l)	(__ctype_lookup_l(__c,__l)&(_X|_N))
#define	isspace_l(__c,__l)	(__ctype_lookup_l(__c,__l)&_S)
#define ispunct_l(__c,__l)	(__ctype_lookup_l(__c,__l)&_P)
#define isalnum_l(__c,__l)	(__ctype_lookup_l(__c,__l)&(_U|_L|_N))
#define isprint_l(__c,__l)	(__ctype_lookup_l(__c,__l)&(_P|_U|_L|_N|_B))
#define	isgraph_l(__c,__l)	(__ctype_lookup_l(__c,__l)&(_P|_U|_L|_N))
#define iscntrl_l(__c,__l)	(__ctype_lookup_l(__c,__l)&_C)

#if defined(__GNUC__)
#define isblank_l(__c, __l) \
  __extension__ ({ __typeof__ (__c) __x = (__c);		\
        (__ctype_lookup_l(__x,__l)&_B) || (int) (__x) == '\t';})
#endif
# 123 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/ctype.h" 3

#endif /* __POSIX_VISIBLE >= 200809 */
# 125 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/ctype.h" 3

#if __MISC_VISIBLE || __XSI_VISIBLE
#define isascii(__c)	((unsigned)(__c)<=0177)
#define toascii(__c)	((__c)&0177)
#endif
# 130 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/ctype.h" 3

#if __MISC_VISIBLE
#define isascii_l(__c,__l)	((__l),(unsigned)(__c)<=0177)
#define toascii_l(__c,__l)	((__l),(__c)&0177)
#endif
# 135 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/ctype.h" 3

/* Non-gcc versions will get the library versions, and will be
   slightly slower.  These macros are not NLS-aware so they are
   disabled if the system supports the extended character sets. */
# if defined(__GNUC__)
#  if !defined (_MB_EXTENDED_CHARSETS_ISO) && !defined (_MB_EXTENDED_CHARSETS_WINDOWS)
#   define toupper(__c) \
  __extension__ ({ __typeof__ (__c) __x = (__c);	\
      islower (__x) ? (int) __x - 'a' + 'A' : (int) __x;})
#   define tolower(__c) \
  __extension__ ({ __typeof__ (__c) __x = (__c);	\
      isupper (__x) ? (int) __x - 'A' + 'a' : (int) __x;})
#  else /* _MB_EXTENDED_CHARSETS* */
# 148 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/ctype.h" 3
/* Allow a gcc warning if the user passed 'char', but defer to the
   function.  */
#   define toupper(__c) \
  __extension__ ({ __typeof__ (__c) __x = (__c);	\
      (void) __CTYPE_PTR[__x]; (toupper) (__x);})
#   define tolower(__c) \
  __extension__ ({ __typeof__ (__c) __x = (__c);	\
      (void) __CTYPE_PTR[__x]; (tolower) (__x);})
#  endif /* _MB_EXTENDED_CHARSETS* */
# 157 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/ctype.h" 3
# endif /* __GNUC__ */
# 158 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/ctype.h" 3

#if __POSIX_VISIBLE >= 200809
#endif /* __POSIX_VISIBLE >= 200809 */
# 161 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/ctype.h" 3

#endif /* !__cplusplus */
# 163 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/ctype.h" 3

/* For C++ backward-compatibility only.  */
extern	__IMPORT const char	_ctype_[];

_END_STD_C

#endif /* _CTYPE_H_ */
# 170 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/ctype.h" 3
# 81 "../../../../../newlib/libc/stdio/vfscanf.c" 2
#if 0 /* expanded by -frewrite-includes */
#include <wctype.h>
#endif /* expanded by -frewrite-includes */
# 81 "../../../../../newlib/libc/stdio/vfscanf.c"
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wctype.h" 1 3
#ifndef _WCTYPE_H_
#define _WCTYPE_H_

#if 0 /* expanded by -frewrite-includes */
#include <_ansi.h>
#endif /* expanded by -frewrite-includes */
# 4 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wctype.h" 3
# 5 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wctype.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/_types.h>
#endif /* expanded by -frewrite-includes */
# 5 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wctype.h" 3
# 6 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wctype.h" 3

#define __need_wint_t
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 8 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wctype.h" 3
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
# 9 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wctype.h" 2 3

#if __POSIX_VISIBLE >= 200809
#if 0 /* expanded by -frewrite-includes */
#include <xlocale.h>
#endif /* expanded by -frewrite-includes */
# 11 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wctype.h" 3
# 12 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wctype.h" 3
#endif
# 13 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wctype.h" 3

#ifndef WEOF
# define WEOF ((wint_t)-1)
#endif
# 17 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wctype.h" 3

_BEGIN_STD_C

#ifndef _WCTYPE_T
#define _WCTYPE_T
typedef int wctype_t;
#endif
# 24 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wctype.h" 3

#ifndef _WCTRANS_T
#define _WCTRANS_T
typedef int wctrans_t;
#endif
# 29 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wctype.h" 3

int	iswalpha (wint_t);
int	iswalnum (wint_t);
#if __ISO_C_VISIBLE >= 1999
int	iswblank (wint_t);
#endif
# 35 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wctype.h" 3
int	iswcntrl (wint_t);
int	iswctype (wint_t, wctype_t);
int	iswdigit (wint_t);
int	iswgraph (wint_t);
int	iswlower (wint_t);
int	iswprint (wint_t);
int	iswpunct (wint_t);
int	iswspace (wint_t);
int	iswupper (wint_t);
int	iswxdigit (wint_t);
wint_t	towctrans (wint_t, wctrans_t);
wint_t	towupper (wint_t);
wint_t	towlower (wint_t);
wctrans_t wctrans (const char *);
wctype_t wctype (const char *);

#if __POSIX_VISIBLE >= 200809
extern int	iswalpha_l (wint_t, locale_t);
extern int	iswalnum_l (wint_t, locale_t);
extern int	iswblank_l (wint_t, locale_t);
extern int	iswcntrl_l (wint_t, locale_t);
extern int	iswctype_l (wint_t, wctype_t, locale_t);
extern int	iswdigit_l (wint_t, locale_t);
extern int	iswgraph_l (wint_t, locale_t);
extern int	iswlower_l (wint_t, locale_t);
extern int	iswprint_l (wint_t, locale_t);
extern int	iswpunct_l (wint_t, locale_t);
extern int	iswspace_l (wint_t, locale_t);
extern int	iswupper_l (wint_t, locale_t);
extern int	iswxdigit_l (wint_t, locale_t);
extern wint_t	towctrans_l (wint_t, wctrans_t, locale_t);
extern wint_t	towupper_l (wint_t, locale_t);
extern wint_t	towlower_l (wint_t, locale_t);
extern wctrans_t wctrans_l (const char *, locale_t);
extern wctype_t wctype_l (const char *, locale_t);
#endif
# 71 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wctype.h" 3

_END_STD_C

#endif /* _WCTYPE_H_ */
# 75 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wctype.h" 3
# 82 "../../../../../newlib/libc/stdio/vfscanf.c" 2
#if 0 /* expanded by -frewrite-includes */
#include <stdio.h>
#endif /* expanded by -frewrite-includes */
# 82 "../../../../../newlib/libc/stdio/vfscanf.c"
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 1 3
/*
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that the above copyright notice and this paragraph are
 * duplicated in all such forms and that any documentation,
 * advertising materials, and other materials related to such
 * distribution and use acknowledge that the software was developed
 * by the University of California, Berkeley.  The name of the
 * University may not be used to endorse or promote products derived
 * from this software without specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 *
 *	@(#)stdio.h	5.3 (Berkeley) 3/15/86
 */

/*
 * NB: to fit things in six character monocase externals, the
 * stdio code uses the prefix `__s' for stdio objects, typically
 * followed by a three-character attempt at a mnemonic.
 */

#ifndef _STDIO_H_
#define	_STDIO_H_

#if 0 /* expanded by -frewrite-includes */
#include "_ansi.h"
#endif /* expanded by -frewrite-includes */
# 29 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
# 30 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

#define	_FSTDIO			/* ``function stdio'' */

#define __need_size_t
#define __need_NULL
#if 0 /* expanded by -frewrite-includes */
#include <sys/cdefs.h>
#endif /* expanded by -frewrite-includes */
# 35 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
# 36 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 36 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
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
# 37 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 2 3

/* typedef only __gnuc_va_list, used throughout the header */
#define __need___va_list
#if 0 /* expanded by -frewrite-includes */
#include <stdarg.h>
#endif /* expanded by -frewrite-includes */
# 40 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdarg.h" 1 3
/*===---- stdarg.h - Variable argument handling ----------------------------===
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

#ifndef __STDARG_H
#define __STDARG_H

#ifndef _VA_LIST
typedef __builtin_va_list va_list;
#define _VA_LIST
#endif
# 33 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdarg.h" 3
#define va_start(ap, param) __builtin_va_start(ap, param)
#define va_end(ap)          __builtin_va_end(ap)
#define va_arg(ap, type)    __builtin_va_arg(ap, type)

/* GCC always defines __va_copy, but does not define va_copy unless in c99 mode
 * or -ansi is not specified, since it was not part of C90.
 */
#define __va_copy(d,s) __builtin_va_copy(d,s)

#if __STDC_VERSION__ >= 199901L || __cplusplus >= 201103L || !defined(__STRICT_ANSI__)
#define va_copy(dest, src)  __builtin_va_copy(dest, src)
#endif
# 45 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdarg.h" 3

#ifndef __GNUC_VA_LIST
#define __GNUC_VA_LIST 1
typedef __builtin_va_list __gnuc_va_list;
#endif
# 50 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdarg.h" 3

#endif /* __STDARG_H */
# 52 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdarg.h" 3
# 41 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 2 3

/* typedef va_list only when required */
#if __POSIX_VISIBLE >= 200809 || __XSI_VISIBLE
#ifdef __GNUC__
#ifndef _VA_LIST_DEFINED
typedef __gnuc_va_list va_list;
#define _VA_LIST_DEFINED
#endif
# 49 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#else /* !__GNUC__ */
# 50 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <stdarg.h>
#endif /* expanded by -frewrite-includes */
# 50 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
# 51 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#endif
# 52 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#endif /* __POSIX_VISIBLE >= 200809 || __XSI_VISIBLE */
# 53 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

/*
 * <sys/reent.h> defines __FILE, _fpos_t.
 * They must be defined there because struct _reent needs them (and we don't
 * want reent.h to include this file.
 */

#if 0 /* expanded by -frewrite-includes */
#include <sys/reent.h>
#endif /* expanded by -frewrite-includes */
# 60 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
# 61 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/types.h>
#endif /* expanded by -frewrite-includes */
# 61 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
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
# 62 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 2 3

_BEGIN_STD_C

#if !defined(__FILE_defined)
typedef __FILE FILE;
# define __FILE_defined
#endif
# 69 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

#ifdef __CYGWIN__
typedef _fpos64_t fpos_t;
#else
# 73 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
typedef _fpos_t fpos_t;
#ifdef __LARGE64_FILES
typedef _fpos64_t fpos64_t;
#endif
# 77 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#endif /* !__CYGWIN__ */
# 78 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

#if 0 /* expanded by -frewrite-includes */
#include <sys/stdio.h>
#endif /* expanded by -frewrite-includes */
# 79 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/stdio.h" 1 3
#ifndef _NEWLIB_STDIO_H
#define _NEWLIB_STDIO_H

#if 0 /* expanded by -frewrite-includes */
#include <sys/lock.h>
#endif /* expanded by -frewrite-includes */
# 4 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/stdio.h" 3
# 5 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/stdio.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/reent.h>
#endif /* expanded by -frewrite-includes */
# 5 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/stdio.h" 3
# 6 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/stdio.h" 3

/* Internal locking macros, used to protect stdio functions.  In the
   general case, expand to nothing. Use __SSTR flag in FILE _flags to
   detect if FILE is private to sprintf/sscanf class of functions; if
   set then do nothing as lock is not initialised. */
#if !defined(_flockfile)
#ifndef __SINGLE_THREAD__
#  define _flockfile(fp) (((fp)->_flags & __SSTR) ? 0 : __lock_acquire_recursive((fp)->_lock))
#else
# 15 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/stdio.h" 3
#  define _flockfile(fp)	((void) 0)
#endif
# 17 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/stdio.h" 3
#endif
# 18 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/stdio.h" 3

#if !defined(_funlockfile)
#ifndef __SINGLE_THREAD__
#  define _funlockfile(fp) (((fp)->_flags & __SSTR) ? 0 : __lock_release_recursive((fp)->_lock))
#else
# 23 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/stdio.h" 3
#  define _funlockfile(fp)	((void) 0)
#endif
# 25 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/stdio.h" 3
#endif
# 26 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/stdio.h" 3

#endif /* _NEWLIB_STDIO_H */
# 28 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/stdio.h" 3
# 80 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 2 3

#define	__SLBF	0x0001		/* line buffered */
#define	__SNBF	0x0002		/* unbuffered */
#define	__SRD	0x0004		/* OK to read */
#define	__SWR	0x0008		/* OK to write */
	/* RD and WR are never simultaneously asserted */
#define	__SRW	0x0010		/* open for reading & writing */
#define	__SEOF	0x0020		/* found EOF */
#define	__SERR	0x0040		/* found error */
#define	__SMBF	0x0080		/* _buf is from malloc */
#define	__SAPP	0x0100		/* fdopen()ed in append mode - so must  write to end */
#define	__SSTR	0x0200		/* this is an sprintf/snprintf string */
#define	__SOPT	0x0400		/* do fseek() optimisation */
#define	__SNPT	0x0800		/* do not do fseek() optimisation */
#define	__SOFF	0x1000		/* set iff _offset is in fact correct */
#define	__SORD	0x2000		/* true => stream orientation (byte/wide) decided */
#if defined(__CYGWIN__)
#  define __SCLE  0x4000        /* convert line endings CR/LF <-> NL */
#endif
# 99 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#define	__SL64	0x8000		/* is 64-bit offset large file */

/* _flags2 flags */
#define	__SNLK  0x0001		/* stdio functions do not lock streams themselves */
#define	__SWID	0x2000		/* true => stream orientation wide, false => byte, only valid if __SORD in _flags is true */

/*
 * The following three definitions are for ANSI C, which took them
 * from System V, which stupidly took internal interface macros and
 * made them official arguments to setvbuf(), without renaming them.
 * Hence, these ugly _IOxxx names are *supposed* to appear in user code.
 *
 * Although these happen to match their counterparts above, the
 * implementation does not rely on that (so these could be renumbered).
 */
#define	_IOFBF	0		/* setvbuf should set fully buffered */
#define	_IOLBF	1		/* setvbuf should set line buffered */
#define	_IONBF	2		/* setvbuf should set unbuffered */

#define	EOF	(-1)

#ifdef __BUFSIZ__
#define	BUFSIZ		__BUFSIZ__
#else
# 123 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#define	BUFSIZ		1024
#endif
# 125 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

#ifdef __FOPEN_MAX__
#define FOPEN_MAX	__FOPEN_MAX__
#else
# 129 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#define	FOPEN_MAX	20
#endif
# 131 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

#ifdef __FILENAME_MAX__
#define FILENAME_MAX    __FILENAME_MAX__
#else
# 135 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#define	FILENAME_MAX	1024
#endif
# 137 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

#ifdef __L_tmpnam__
#define L_tmpnam	__L_tmpnam__
#else
# 141 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#define	L_tmpnam	FILENAME_MAX
#endif
# 143 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

#if __BSD_VISIBLE || __XSI_VISIBLE
#define P_tmpdir        "/tmp"
#endif
# 147 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

#ifndef SEEK_SET
#define	SEEK_SET	0	/* set file offset to offset */
#endif
# 151 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#ifndef SEEK_CUR
#define	SEEK_CUR	1	/* set file offset to current plus offset */
#endif
# 154 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#ifndef SEEK_END
#define	SEEK_END	2	/* set file offset to EOF plus offset */
#endif
# 157 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

#define	TMP_MAX		26

#define	stdin	(_REENT->_stdin)
#define	stdout	(_REENT->_stdout)
#define	stderr	(_REENT->_stderr)

#define _stdin_r(x)	((x)->_stdin)
#define _stdout_r(x)	((x)->_stdout)
#define _stderr_r(x)	((x)->_stderr)

/*
 * Functions defined in ANSI C standard.
 */

#ifndef __VALIST
#ifdef __GNUC__
#define __VALIST __gnuc_va_list
#else
# 176 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#define __VALIST char*
#endif
# 178 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#endif
# 179 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

#if __POSIX_VISIBLE
char *	ctermid (char *);
#endif
# 183 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#if __XSI_VISIBLE && __XSI_VISIBLE < 600
char *	cuserid (char *);
#endif
# 186 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
FILE *	tmpfile (void);
char *	tmpnam (char *);
#if __BSD_VISIBLE || __XSI_VISIBLE || __POSIX_VISIBLE >= 200112
char *	tempnam (const char *, const char *);
#endif
# 191 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
int	fclose (FILE *);
int	fflush (FILE *);
FILE *	freopen (const char *__restrict, const char *__restrict, FILE *__restrict);
void	setbuf (FILE *__restrict, char *__restrict);
int	setvbuf (FILE *__restrict, char *__restrict, int, size_t);
int	fprintf (FILE *__restrict, const char *__restrict, ...)
               _ATTRIBUTE ((__format__ (__printf__, 2, 3)));
int	fscanf (FILE *__restrict, const char *__restrict, ...)
               _ATTRIBUTE ((__format__ (__scanf__, 2, 3)));
int	printf (const char *__restrict, ...)
               _ATTRIBUTE ((__format__ (__printf__, 1, 2)));
int	scanf (const char *__restrict, ...)
               _ATTRIBUTE ((__format__ (__scanf__, 1, 2)));
int	sscanf (const char *__restrict, const char *__restrict, ...)
               _ATTRIBUTE ((__format__ (__scanf__, 2, 3)));
int	vfprintf (FILE *__restrict, const char *__restrict, __VALIST)
               _ATTRIBUTE ((__format__ (__printf__, 2, 0)));
int	vprintf (const char *, __VALIST)
               _ATTRIBUTE ((__format__ (__printf__, 1, 0)));
int	vsprintf (char *__restrict, const char *__restrict, __VALIST)
               _ATTRIBUTE ((__format__ (__printf__, 2, 0)));
int	fgetc (FILE *);
char *  fgets (char *__restrict, int, FILE *__restrict);
int	fputc (int, FILE *);
int	fputs (const char *__restrict, FILE *__restrict);
int	getc (FILE *);
int	getchar (void);
char *  gets (char *);
int	putc (int, FILE *);
int	putchar (int);
int	puts (const char *);
int	ungetc (int, FILE *);
size_t	fread (void *__restrict, size_t _size, size_t _n, FILE *__restrict);
size_t	fwrite (const void *__restrict , size_t _size, size_t _n, FILE *);
#ifdef _COMPILING_NEWLIB
int	fgetpos (FILE *, _fpos_t *);
#else
# 228 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
int	fgetpos (FILE *__restrict, fpos_t *__restrict);
#endif
# 230 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
int	fseek (FILE *, long, int);
#ifdef _COMPILING_NEWLIB
int	fsetpos (FILE *, const _fpos_t *);
#else
# 234 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
int	fsetpos (FILE *, const fpos_t *);
#endif
# 236 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
long	ftell ( FILE *);
void	rewind (FILE *);
void	clearerr (FILE *);
int	feof (FILE *);
int	ferror (FILE *);
void    perror (const char *);
#ifndef _REENT_ONLY
FILE *	fopen (const char *__restrict _name, const char *__restrict _type);
int	sprintf (char *__restrict, const char *__restrict, ...)
               _ATTRIBUTE ((__format__ (__printf__, 2, 3)));
int	remove (const char *);
int	rename (const char *, const char *);
#ifdef _COMPILING_NEWLIB
int	_rename (const char *, const char *);
#endif
# 251 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#endif
# 252 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#if __LARGEFILE_VISIBLE || __POSIX_VISIBLE >= 200112
#ifdef _COMPILING_NEWLIB
int	fseeko (FILE *, _off_t, int);
_off_t	ftello (FILE *);
#else
# 257 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
int	fseeko (FILE *, off_t, int);
off_t	ftello (FILE *);
#endif
# 260 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#endif
# 261 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#if __GNU_VISIBLE
int	fcloseall (void);
#endif
# 264 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#ifndef _REENT_ONLY
#if __ISO_C_VISIBLE >= 1999
int	snprintf (char *__restrict, size_t, const char *__restrict, ...)
               _ATTRIBUTE ((__format__ (__printf__, 3, 4)));
int	vsnprintf (char *__restrict, size_t, const char *__restrict, __VALIST)
               _ATTRIBUTE ((__format__ (__printf__, 3, 0)));
int	vfscanf (FILE *__restrict, const char *__restrict, __VALIST)
               _ATTRIBUTE ((__format__ (__scanf__, 2, 0)));
int	vscanf (const char *, __VALIST)
               _ATTRIBUTE ((__format__ (__scanf__, 1, 0)));
int	vsscanf (const char *__restrict, const char *__restrict, __VALIST)
               _ATTRIBUTE ((__format__ (__scanf__, 2, 0)));
#endif
# 277 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#if __GNU_VISIBLE
int	asprintf (char **__restrict, const char *__restrict, ...)
               _ATTRIBUTE ((__format__ (__printf__, 2, 3)));
int	vasprintf (char **, const char *, __VALIST)
               _ATTRIBUTE ((__format__ (__printf__, 2, 0)));
#endif
# 283 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#if __MISC_VISIBLE /* Newlib-specific */
int	asiprintf (char **, const char *, ...)
               _ATTRIBUTE ((__format__ (__printf__, 2, 3)));
char *	asniprintf (char *, size_t *, const char *, ...)
               _ATTRIBUTE ((__format__ (__printf__, 3, 4)));
char *	asnprintf (char *__restrict, size_t *__restrict, const char *__restrict, ...)
               _ATTRIBUTE ((__format__ (__printf__, 3, 4)));
#ifndef diprintf
int	diprintf (int, const char *, ...)
               _ATTRIBUTE ((__format__ (__printf__, 2, 3)));
#endif
# 294 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
int	fiprintf (FILE *, const char *, ...)
               _ATTRIBUTE ((__format__ (__printf__, 2, 3)));
int	fiscanf (FILE *, const char *, ...)
               _ATTRIBUTE ((__format__ (__scanf__, 2, 3)));
int	iprintf (const char *, ...)
               _ATTRIBUTE ((__format__ (__printf__, 1, 2)));
int	iscanf (const char *, ...)
               _ATTRIBUTE ((__format__ (__scanf__, 1, 2)));
int	siprintf (char *, const char *, ...)
               _ATTRIBUTE ((__format__ (__printf__, 2, 3)));
int	siscanf (const char *, const char *, ...)
               _ATTRIBUTE ((__format__ (__scanf__, 2, 3)));
int	sniprintf (char *, size_t, const char *, ...)
               _ATTRIBUTE ((__format__ (__printf__, 3, 4)));
int	vasiprintf (char **, const char *, __VALIST)
               _ATTRIBUTE ((__format__ (__printf__, 2, 0)));
char *	vasniprintf (char *, size_t *, const char *, __VALIST)
               _ATTRIBUTE ((__format__ (__printf__, 3, 0)));
char *	vasnprintf (char *, size_t *, const char *, __VALIST)
               _ATTRIBUTE ((__format__ (__printf__, 3, 0)));
int	vdiprintf (int, const char *, __VALIST)
               _ATTRIBUTE ((__format__ (__printf__, 2, 0)));
int	vfiprintf (FILE *, const char *, __VALIST)
               _ATTRIBUTE ((__format__ (__printf__, 2, 0)));
int	vfiscanf (FILE *, const char *, __VALIST)
               _ATTRIBUTE ((__format__ (__scanf__, 2, 0)));
int	viprintf (const char *, __VALIST)
               _ATTRIBUTE ((__format__ (__printf__, 1, 0)));
int	viscanf (const char *, __VALIST)
               _ATTRIBUTE ((__format__ (__scanf__, 1, 0)));
int	vsiprintf (char *, const char *, __VALIST)
               _ATTRIBUTE ((__format__ (__printf__, 2, 0)));
int	vsiscanf (const char *, const char *, __VALIST)
               _ATTRIBUTE ((__format__ (__scanf__, 2, 0)));
int	vsniprintf (char *, size_t, const char *, __VALIST)
               _ATTRIBUTE ((__format__ (__printf__, 3, 0)));
#endif /* __MISC_VISIBLE */
# 331 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#endif /* !_REENT_ONLY */
# 332 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

/*
 * Routines in POSIX 1003.1:2001.
 */

#if __POSIX_VISIBLE
#ifndef _REENT_ONLY
FILE *	fdopen (int, const char *);
#endif
# 341 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
int	fileno (FILE *);
#endif
# 343 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#if __MISC_VISIBLE || __POSIX_VISIBLE >= 199209
int	pclose (FILE *);
FILE *  popen (const char *, const char *);
#endif
# 347 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

#if __BSD_VISIBLE
void    setbuffer (FILE *, char *, int);
int	setlinebuf (FILE *);
#endif
# 352 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

#if __MISC_VISIBLE || (__XSI_VISIBLE && __POSIX_VISIBLE < 200112)
int	getw (FILE *);
int	putw (int, FILE *);
#endif
# 357 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#if __MISC_VISIBLE || __POSIX_VISIBLE
int	getc_unlocked (FILE *);
int	getchar_unlocked (void);
void	flockfile (FILE *);
int	ftrylockfile (FILE *);
void	funlockfile (FILE *);
int	putc_unlocked (int, FILE *);
int	putchar_unlocked (int);
#endif
# 366 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

/*
 * Routines in POSIX 1003.1:200x.
 */

#if __POSIX_VISIBLE >= 200809
# ifndef _REENT_ONLY
#  ifndef dprintf
int	dprintf (int, const char *__restrict, ...)
               _ATTRIBUTE ((__format__ (__printf__, 2, 3)));
#  endif
# 377 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
FILE *	fmemopen (void *__restrict, size_t, const char *__restrict);
/* getdelim - see __getdelim for now */
/* getline - see __getline for now */
FILE *	open_memstream (char **, size_t *);
int	vdprintf (int, const char *__restrict, __VALIST)
               _ATTRIBUTE ((__format__ (__printf__, 2, 0)));
# endif
# 384 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#endif
# 385 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#if __ATFILE_VISIBLE
int	renameat (int, const char *, int, const char *);
# ifdef __CYGWIN__
int	renameat2 (int, const char *, int, const char *, unsigned int);
# endif
# 390 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#endif
# 391 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

/*
 * Recursive versions of the above.
 */

int	_asiprintf_r (struct _reent *, char **, const char *, ...)
               _ATTRIBUTE ((__format__ (__printf__, 3, 4)));
char *	_asniprintf_r (struct _reent *, char *, size_t *, const char *, ...)
               _ATTRIBUTE ((__format__ (__printf__, 4, 5)));
char *	_asnprintf_r (struct _reent *, char *__restrict, size_t *__restrict, const char *__restrict, ...)
               _ATTRIBUTE ((__format__ (__printf__, 4, 5)));
int	_asprintf_r (struct _reent *, char **__restrict, const char *__restrict, ...)
               _ATTRIBUTE ((__format__ (__printf__, 3, 4)));
int	_diprintf_r (struct _reent *, int, const char *, ...)
               _ATTRIBUTE ((__format__ (__printf__, 3, 4)));
int	_dprintf_r (struct _reent *, int, const char *__restrict, ...)
               _ATTRIBUTE ((__format__ (__printf__, 3, 4)));
int	_fclose_r (struct _reent *, FILE *);
int	_fcloseall_r (struct _reent *);
FILE *	_fdopen_r (struct _reent *, int, const char *);
int	_fflush_r (struct _reent *, FILE *);
int	_fgetc_r (struct _reent *, FILE *);
int	_fgetc_unlocked_r (struct _reent *, FILE *);
char *  _fgets_r (struct _reent *, char *__restrict, int, FILE *__restrict);
char *  _fgets_unlocked_r (struct _reent *, char *__restrict, int, FILE *__restrict);
#ifdef _COMPILING_NEWLIB
int	_fgetpos_r (struct _reent *, FILE *__restrict, _fpos_t *__restrict);
int	_fsetpos_r (struct _reent *, FILE *, const _fpos_t *);
#else
# 420 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
int	_fgetpos_r (struct _reent *, FILE *, fpos_t *);
int	_fsetpos_r (struct _reent *, FILE *, const fpos_t *);
#endif
# 423 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
int	_fiprintf_r (struct _reent *, FILE *, const char *, ...)
               _ATTRIBUTE ((__format__ (__printf__, 3, 4)));
int	_fiscanf_r (struct _reent *, FILE *, const char *, ...)
               _ATTRIBUTE ((__format__ (__scanf__, 3, 4)));
FILE *	_fmemopen_r (struct _reent *, void *__restrict, size_t, const char *__restrict);
FILE *	_fopen_r (struct _reent *, const char *__restrict, const char *__restrict);
FILE *	_freopen_r (struct _reent *, const char *__restrict, const char *__restrict, FILE *__restrict);
int	_fprintf_r (struct _reent *, FILE *__restrict, const char *__restrict, ...)
               _ATTRIBUTE ((__format__ (__printf__, 3, 4)));
int	_fpurge_r (struct _reent *, FILE *);
int	_fputc_r (struct _reent *, int, FILE *);
int	_fputc_unlocked_r (struct _reent *, int, FILE *);
int	_fputs_r (struct _reent *, const char *__restrict, FILE *__restrict);
int	_fputs_unlocked_r (struct _reent *, const char *__restrict, FILE *__restrict);
size_t	_fread_r (struct _reent *, void *__restrict, size_t _size, size_t _n, FILE *__restrict);
size_t	_fread_unlocked_r (struct _reent *, void *__restrict, size_t _size, size_t _n, FILE *__restrict);
int	_fscanf_r (struct _reent *, FILE *__restrict, const char *__restrict, ...)
               _ATTRIBUTE ((__format__ (__scanf__, 3, 4)));
int	_fseek_r (struct _reent *, FILE *, long, int);
int	_fseeko_r (struct _reent *, FILE *, _off_t, int);
long	_ftell_r (struct _reent *, FILE *);
_off_t	_ftello_r (struct _reent *, FILE *);
void	_rewind_r (struct _reent *, FILE *);
size_t	_fwrite_r (struct _reent *, const void *__restrict, size_t _size, size_t _n, FILE *__restrict);
size_t	_fwrite_unlocked_r (struct _reent *, const void *__restrict, size_t _size, size_t _n, FILE *__restrict);
int	_getc_r (struct _reent *, FILE *);
int	_getc_unlocked_r (struct _reent *, FILE *);
int	_getchar_r (struct _reent *);
int	_getchar_unlocked_r (struct _reent *);
char *	_gets_r (struct _reent *, char *);
int	_iprintf_r (struct _reent *, const char *, ...)
               _ATTRIBUTE ((__format__ (__printf__, 2, 3)));
int	_iscanf_r (struct _reent *, const char *, ...)
               _ATTRIBUTE ((__format__ (__scanf__, 2, 3)));
FILE *	_open_memstream_r (struct _reent *, char **, size_t *);
void	_perror_r (struct _reent *, const char *);
int	_printf_r (struct _reent *, const char *__restrict, ...)
               _ATTRIBUTE ((__format__ (__printf__, 2, 3)));
int	_putc_r (struct _reent *, int, FILE *);
int	_putc_unlocked_r (struct _reent *, int, FILE *);
int	_putchar_unlocked_r (struct _reent *, int);
int	_putchar_r (struct _reent *, int);
int	_puts_r (struct _reent *, const char *);
int	_remove_r (struct _reent *, const char *);
int	_rename_r (struct _reent *,
			   const char *_old, const char *_new);
int	_scanf_r (struct _reent *, const char *__restrict, ...)
               _ATTRIBUTE ((__format__ (__scanf__, 2, 3)));
int	_siprintf_r (struct _reent *, char *, const char *, ...)
               _ATTRIBUTE ((__format__ (__printf__, 3, 4)));
int	_siscanf_r (struct _reent *, const char *, const char *, ...)
               _ATTRIBUTE ((__format__ (__scanf__, 3, 4)));
int	_sniprintf_r (struct _reent *, char *, size_t, const char *, ...)
               _ATTRIBUTE ((__format__ (__printf__, 4, 5)));
int	_snprintf_r (struct _reent *, char *__restrict, size_t, const char *__restrict, ...)
               _ATTRIBUTE ((__format__ (__printf__, 4, 5)));
int	_sprintf_r (struct _reent *, char *__restrict, const char *__restrict, ...)
               _ATTRIBUTE ((__format__ (__printf__, 3, 4)));
int	_sscanf_r (struct _reent *, const char *__restrict, const char *__restrict, ...)
               _ATTRIBUTE ((__format__ (__scanf__, 3, 4)));
char *	_tempnam_r (struct _reent *, const char *, const char *);
FILE *	_tmpfile_r (struct _reent *);
char *	_tmpnam_r (struct _reent *, char *);
int	_ungetc_r (struct _reent *, int, FILE *);
int	_vasiprintf_r (struct _reent *, char **, const char *, __VALIST)
               _ATTRIBUTE ((__format__ (__printf__, 3, 0)));
char *	_vasniprintf_r (struct _reent*, char *, size_t *, const char *, __VALIST)
               _ATTRIBUTE ((__format__ (__printf__, 4, 0)));
char *	_vasnprintf_r (struct _reent*, char *, size_t *, const char *, __VALIST)
               _ATTRIBUTE ((__format__ (__printf__, 4, 0)));
int	_vasprintf_r (struct _reent *, char **, const char *, __VALIST)
               _ATTRIBUTE ((__format__ (__printf__, 3, 0)));
int	_vdiprintf_r (struct _reent *, int, const char *, __VALIST)
               _ATTRIBUTE ((__format__ (__printf__, 3, 0)));
int	_vdprintf_r (struct _reent *, int, const char *__restrict, __VALIST)
               _ATTRIBUTE ((__format__ (__printf__, 3, 0)));
int	_vfiprintf_r (struct _reent *, FILE *, const char *, __VALIST)
               _ATTRIBUTE ((__format__ (__printf__, 3, 0)));
int	_vfiscanf_r (struct _reent *, FILE *, const char *, __VALIST)
               _ATTRIBUTE ((__format__ (__scanf__, 3, 0)));
int	_vfprintf_r (struct _reent *, FILE *__restrict, const char *__restrict, __VALIST)
               _ATTRIBUTE ((__format__ (__printf__, 3, 0)));
int	_vfscanf_r (struct _reent *, FILE *__restrict, const char *__restrict, __VALIST)
               _ATTRIBUTE ((__format__ (__scanf__, 3, 0)));
int	_viprintf_r (struct _reent *, const char *, __VALIST)
               _ATTRIBUTE ((__format__ (__printf__, 2, 0)));
int	_viscanf_r (struct _reent *, const char *, __VALIST)
               _ATTRIBUTE ((__format__ (__scanf__, 2, 0)));
int	_vprintf_r (struct _reent *, const char *__restrict, __VALIST)
               _ATTRIBUTE ((__format__ (__printf__, 2, 0)));
int	_vscanf_r (struct _reent *, const char *__restrict, __VALIST)
               _ATTRIBUTE ((__format__ (__scanf__, 2, 0)));
int	_vsiprintf_r (struct _reent *, char *, const char *, __VALIST)
               _ATTRIBUTE ((__format__ (__printf__, 3, 0)));
int	_vsiscanf_r (struct _reent *, const char *, const char *, __VALIST)
               _ATTRIBUTE ((__format__ (__scanf__, 3, 0)));
int	_vsniprintf_r (struct _reent *, char *, size_t, const char *, __VALIST)
               _ATTRIBUTE ((__format__ (__printf__, 4, 0)));
int	_vsnprintf_r (struct _reent *, char *__restrict, size_t, const char *__restrict, __VALIST)
               _ATTRIBUTE ((__format__ (__printf__, 4, 0)));
int	_vsprintf_r (struct _reent *, char *__restrict, const char *__restrict, __VALIST)
               _ATTRIBUTE ((__format__ (__printf__, 3, 0)));
int	_vsscanf_r (struct _reent *, const char *__restrict, const char *__restrict, __VALIST)
               _ATTRIBUTE ((__format__ (__scanf__, 3, 0)));

/* Other extensions.  */

int	fpurge (FILE *);
ssize_t __getdelim (char **, size_t *, int, FILE *);
ssize_t __getline (char **, size_t *, FILE *);

#if __MISC_VISIBLE
void	clearerr_unlocked (FILE *);
int	feof_unlocked (FILE *);
int	ferror_unlocked (FILE *);
int	fileno_unlocked (FILE *);
int	fflush_unlocked (FILE *);
int	fgetc_unlocked (FILE *);
int	fputc_unlocked (int, FILE *);
size_t	fread_unlocked (void *__restrict, size_t _size, size_t _n, FILE *__restrict);
size_t	fwrite_unlocked (const void *__restrict , size_t _size, size_t _n, FILE *);
#endif
# 545 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

#if __GNU_VISIBLE
char *  fgets_unlocked (char *__restrict, int, FILE *__restrict);
int	fputs_unlocked (const char *__restrict, FILE *__restrict);
#endif
# 550 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

#ifdef __LARGE64_FILES
#if !defined(__CYGWIN__) || defined(_COMPILING_NEWLIB)
FILE *	fdopen64 (int, const char *);
FILE *  fopen64 (const char *, const char *);
FILE *  freopen64 (const char *, const char *, FILE *);
_off64_t ftello64 (FILE *);
_off64_t fseeko64 (FILE *, _off64_t, int);
int     fgetpos64 (FILE *, _fpos64_t *);
int     fsetpos64 (FILE *, const _fpos64_t *);
FILE *  tmpfile64 (void);

FILE *	_fdopen64_r (struct _reent *, int, const char *);
FILE *  _fopen64_r (struct _reent *,const char *, const char *);
FILE *  _freopen64_r (struct _reent *, const char *, const char *, FILE *);
_off64_t _ftello64_r (struct _reent *, FILE *);
_off64_t _fseeko64_r (struct _reent *, FILE *, _off64_t, int);
int     _fgetpos64_r (struct _reent *, FILE *, _fpos64_t *);
int     _fsetpos64_r (struct _reent *, FILE *, const _fpos64_t *);
FILE *  _tmpfile64_r (struct _reent *);
#endif /* !__CYGWIN__ */
# 571 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#endif /* __LARGE64_FILES */
# 572 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

/*
 * Routines internal to the implementation.
 */

int	__srget_r (struct _reent *, FILE *);
int	__swbuf_r (struct _reent *, int, FILE *);

/*
 * Stdio function-access interface.
 */

#if __BSD_VISIBLE
# ifdef __LARGE64_FILES
FILE	*funopen (const void *__cookie,
		int (*__readfn)(void *__c, char *__buf,
				_READ_WRITE_BUFSIZE_TYPE __n),
		int (*__writefn)(void *__c, const char *__buf,
				 _READ_WRITE_BUFSIZE_TYPE __n),
		_fpos64_t (*__seekfn)(void *__c, _fpos64_t __off, int __whence),
		int (*__closefn)(void *__c));
FILE	*_funopen_r (struct _reent *, const void *__cookie,
		int (*__readfn)(void *__c, char *__buf,
				_READ_WRITE_BUFSIZE_TYPE __n),
		int (*__writefn)(void *__c, const char *__buf,
				 _READ_WRITE_BUFSIZE_TYPE __n),
		_fpos64_t (*__seekfn)(void *__c, _fpos64_t __off, int __whence),
		int (*__closefn)(void *__c));
# else
# 601 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
FILE	*funopen (const void *__cookie,
		int (*__readfn)(void *__cookie, char *__buf,
				_READ_WRITE_BUFSIZE_TYPE __n),
		int (*__writefn)(void *__cookie, const char *__buf,
				 _READ_WRITE_BUFSIZE_TYPE __n),
		fpos_t (*__seekfn)(void *__cookie, fpos_t __off, int __whence),
		int (*__closefn)(void *__cookie));
FILE	*_funopen_r (struct _reent *, const void *__cookie,
		int (*__readfn)(void *__cookie, char *__buf,
				_READ_WRITE_BUFSIZE_TYPE __n),
		int (*__writefn)(void *__cookie, const char *__buf,
				 _READ_WRITE_BUFSIZE_TYPE __n),
		fpos_t (*__seekfn)(void *__cookie, fpos_t __off, int __whence),
		int (*__closefn)(void *__cookie));
# endif /* !__LARGE64_FILES */
# 616 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

# define	fropen(__cookie, __fn) funopen(__cookie, __fn, (int (*)())0, \
					       (fpos_t (*)())0, (int (*)())0)
# define	fwopen(__cookie, __fn) funopen(__cookie, (int (*)())0, __fn, \
					       (fpos_t (*)())0, (int (*)())0)
#endif /* __BSD_VISIBLE */
# 622 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

#if __GNU_VISIBLE
typedef ssize_t cookie_read_function_t(void *__cookie, char *__buf, size_t __n);
typedef ssize_t cookie_write_function_t(void *__cookie, const char *__buf,
					size_t __n);
# ifdef __LARGE64_FILES
typedef int cookie_seek_function_t(void *__cookie, _off64_t *__off,
				   int __whence);
# else
# 631 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
typedef int cookie_seek_function_t(void *__cookie, off_t *__off, int __whence);
# endif /* !__LARGE64_FILES */
# 633 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
typedef int cookie_close_function_t(void *__cookie);
typedef struct
{
  /* These four struct member names are dictated by Linux; hopefully,
     they don't conflict with any macros.  */
  cookie_read_function_t  *read;
  cookie_write_function_t *write;
  cookie_seek_function_t  *seek;
  cookie_close_function_t *close;
} cookie_io_functions_t;
FILE *fopencookie (void *__cookie,
		const char *__mode, cookie_io_functions_t __functions);
FILE *_fopencookie_r (struct _reent *, void *__cookie,
		const char *__mode, cookie_io_functions_t __functions);
#endif /* __GNU_VISIBLE */
# 648 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

#ifndef __CUSTOM_FILE_IO__
/*
 * The __sfoo macros are here so that we can 
 * define function versions in the C library.
 */
#define       __sgetc_raw_r(__ptr, __f) (--(__f)->_r < 0 ? __srget_r(__ptr, __f) : (int)(*(__f)->_p++))

#ifdef __SCLE
/*  For a platform with CR/LF, additional logic is required by
  __sgetc_r which would otherwise simply be a macro; therefore we
  use an inlined function.  The function is only meant to be inlined
  in place as used and the function body should never be emitted.  

  There are two possible means to this end when compiling with GCC,
  one when compiling with a standard C99 compiler, and for other
  compilers we're just stuck.  At the moment, this issue only
  affects the Cygwin target, so we'll most likely be using GCC. */

_ELIDABLE_INLINE int __sgetc_r(struct _reent *__ptr, FILE *__p);

_ELIDABLE_INLINE int __sgetc_r(struct _reent *__ptr, FILE *__p)
  {
    int __c = __sgetc_raw_r(__ptr, __p);
    if ((__p->_flags & __SCLE) && (__c == '\r'))
      {
      int __c2 = __sgetc_raw_r(__ptr, __p);
      if (__c2 == '\n')
        __c = __c2;
      else
        ungetc(__c2, __p);
      }
    return __c;
  }
#else
# 683 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#define __sgetc_r(__ptr, __p) __sgetc_raw_r(__ptr, __p)
#endif
# 685 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

#ifdef __GNUC__
_ELIDABLE_INLINE int __sputc_r(struct _reent *_ptr, int _c, FILE *_p) {
#ifdef __SCLE
	if ((_p->_flags & __SCLE) && _c == '\n')
	  __sputc_r (_ptr, '\r', _p);
#endif
# 692 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
	if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
		return (*_p->_p++ = _c);
	else
		return (__swbuf_r(_ptr, _c, _p));
}
#else
# 698 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
/*
 * This has been tuned to generate reasonable code on the vax using pcc
 */
#define       __sputc_raw_r(__ptr, __c, __p) \
	(--(__p)->_w < 0 ? \
		(__p)->_w >= (__p)->_lbfsize ? \
			(*(__p)->_p = (__c)), *(__p)->_p != '\n' ? \
				(int)*(__p)->_p++ : \
				__swbuf_r(__ptr, '\n', __p) : \
			__swbuf_r(__ptr, (int)(__c), __p) : \
		(*(__p)->_p = (__c), (int)*(__p)->_p++))
#ifdef __SCLE
#define __sputc_r(__ptr, __c, __p) \
        ((((__p)->_flags & __SCLE) && ((__c) == '\n')) \
          ? __sputc_raw_r(__ptr, '\r', (__p)) : 0 , \
        __sputc_raw_r((__ptr), (__c), (__p)))
#else
# 715 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#define __sputc_r(__ptr, __c, __p) __sputc_raw_r(__ptr, __c, __p)
#endif
# 717 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#endif
# 718 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

#define	__sfeof(p)	((int)(((p)->_flags & __SEOF) != 0))
#define	__sferror(p)	((int)(((p)->_flags & __SERR) != 0))
#define	__sclearerr(p)	((void)((p)->_flags &= ~(__SERR|__SEOF)))
#define	__sfileno(p)	((p)->_file)

#ifndef __cplusplus
#ifndef _REENT_SMALL
#define	feof(p)		__sfeof(p)
#define	ferror(p)	__sferror(p)
#define	clearerr(p)	__sclearerr(p)

#if __MISC_VISIBLE
#define	feof_unlocked(p)	__sfeof(p)
#define	ferror_unlocked(p)	__sferror(p)
#define	clearerr_unlocked(p)	__sclearerr(p)
#endif /* __MISC_VISIBLE */
# 735 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#endif /* _REENT_SMALL */
# 736 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

#if 0 /* __POSIX_VISIBLE - FIXME: must initialize stdio first, use fn */
#define	fileno(p)	__sfileno(p)
#endif
# 740 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

static __inline int
_getchar_unlocked(void)
{
	struct _reent *_ptr;

	_ptr = _REENT;
	return (__sgetc_r(_ptr, _stdin_r(_ptr)));
}

static __inline int
_putchar_unlocked(int _c)
{
	struct _reent *_ptr;

	_ptr = _REENT;
	return (__sputc_r(_ptr, _c, _stdout_r(_ptr)));
}

#ifdef __SINGLE_THREAD__
#define	getc(_p)	__sgetc_r(_REENT, _p)
#define	putc(_c, _p)	__sputc_r(_REENT, _c, _p)
#define	getchar()	_getchar_unlocked()
#define	putchar(_c)	_putchar_unlocked(_c)
#endif /* __SINGLE_THREAD__ */
# 765 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

#if __MISC_VISIBLE || __POSIX_VISIBLE
#define	getchar_unlocked()	_getchar_unlocked()
#define	putchar_unlocked(_c)	_putchar_unlocked(_c)
#endif
# 770 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#endif /* __cplusplus */
# 771 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

#if __MISC_VISIBLE
/* fast always-buffered version, true iff error */
#define	fast_putc(x,p) (--(p)->_w < 0 ? \
	__swbuf_r(_REENT, (int)(x), p) == EOF : (*(p)->_p = (x), (p)->_p++, 0))
#endif
# 777 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

#if __GNU_VISIBLE || (__XSI_VISIBLE && __XSI_VISIBLE < 600)
#define	L_cuserid	9		/* posix says it goes in stdio.h :( */
#endif
# 781 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#if __POSIX_VISIBLE
#define L_ctermid       16
#endif
# 784 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

#else /* __CUSTOM_FILE_IO__ */
# 786 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

#define	getchar()	getc(stdin)
#define	putchar(x)	putc(x, stdout)

#if __MISC_VISIBLE || __POSIX_VISIBLE
#define	getchar_unlocked()	getc_unlocked(stdin)
#define	putchar_unlocked(x)	putc_unlocked(x, stdout)
#endif
# 794 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

#endif /* !__CUSTOM_FILE_IO__ */
# 796 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

_END_STD_C

#if __SSP_FORTIFY_LEVEL > 0
#if 0 /* expanded by -frewrite-includes */
#include <ssp/stdio.h>
#endif /* expanded by -frewrite-includes */
# 800 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
# 801 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
#endif
# 802 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3

#endif /* _STDIO_H_ */
# 804 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdio.h" 3
# 83 "../../../../../newlib/libc/stdio/vfscanf.c" 2
#if 0 /* expanded by -frewrite-includes */
#include <stdlib.h>
#endif /* expanded by -frewrite-includes */
# 83 "../../../../../newlib/libc/stdio/vfscanf.c"
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 1 3
/*
 * stdlib.h
 *
 * Definitions for common types, variables, and functions.
 */

#ifndef _STDLIB_H_
#define _STDLIB_H_

#if 0 /* expanded by -frewrite-includes */
#include <machine/ieeefp.h>
#endif /* expanded by -frewrite-includes */
# 10 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
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

# 11 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include "_ansi.h"
#endif /* expanded by -frewrite-includes */
# 11 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
# 12 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3

#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 16 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
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
# 17 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 2 3

#if 0 /* expanded by -frewrite-includes */
#include <sys/reent.h>
#endif /* expanded by -frewrite-includes */
# 18 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
# 19 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/cdefs.h>
#endif /* expanded by -frewrite-includes */
# 19 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
# 20 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <machine/stdlib.h>
#endif /* expanded by -frewrite-includes */
# 20 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/stdlib.h" 1 3
#ifndef	_MACHSTDLIB_H_
#define	_MACHSTDLIB_H_

/* place holder so platforms may add stdlib.h extensions */

#endif	/* _MACHSTDLIB_H_ */
# 7 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/machine/stdlib.h" 3


# 21 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 2 3
#ifndef __STRICT_ANSI__
#if 0 /* expanded by -frewrite-includes */
#include <alloca.h>
#endif /* expanded by -frewrite-includes */
# 22 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/alloca.h" 1 3
/* libc/include/alloca.h - Allocate memory on stack */

/* Written 2000 by Werner Almesberger */
/* Rearranged for general inclusion by stdlib.h.
   2001, Corinna Vinschen <vinschen@redhat.com> */

#ifndef _NEWLIB_ALLOCA_H
#define _NEWLIB_ALLOCA_H

#if 0 /* expanded by -frewrite-includes */
#include "_ansi.h"
#endif /* expanded by -frewrite-includes */
# 10 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/alloca.h" 3
# 11 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/alloca.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/reent.h>
#endif /* expanded by -frewrite-includes */
# 11 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/alloca.h" 3
# 12 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/alloca.h" 3

#undef alloca

#ifdef __GNUC__
#define alloca(size) __builtin_alloca(size)
#else
# 18 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/alloca.h" 3
void * alloca (size_t);
#endif
# 20 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/alloca.h" 3

#endif
# 22 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/alloca.h" 3
# 23 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 2 3
#endif
# 24 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3

#ifdef __CYGWIN__
#if 0 /* expanded by -frewrite-includes */
#include <cygwin/stdlib.h>
#endif /* expanded by -frewrite-includes */
# 26 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
# 27 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
#endif
# 28 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3

#if __GNU_VISIBLE
#if 0 /* expanded by -frewrite-includes */
#include <xlocale.h>
#endif /* expanded by -frewrite-includes */
# 30 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
# 31 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
#endif
# 32 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3

_BEGIN_STD_C

typedef struct 
{
  int quot; /* quotient */
  int rem; /* remainder */
} div_t;

typedef struct 
{
  long quot; /* quotient */
  long rem; /* remainder */
} ldiv_t;

#if __ISO_C_VISIBLE >= 1999
typedef struct
{
  long long int quot; /* quotient */
  long long int rem; /* remainder */
} lldiv_t;
#endif
# 54 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3

#ifndef __compar_fn_t_defined
#define __compar_fn_t_defined
typedef int (*__compar_fn_t) (const void *, const void *);
#endif
# 59 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3

#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

#define RAND_MAX __RAND_MAX

int	__locale_mb_cur_max (void);

#define MB_CUR_MAX __locale_mb_cur_max()

void	abort (void) _ATTRIBUTE ((__noreturn__));
int	abs (int);
#if __BSD_VISIBLE
__uint32_t arc4random (void);
__uint32_t arc4random_uniform (__uint32_t);
void    arc4random_buf (void *, size_t);
#endif
# 76 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
int	atexit (void (*__func)(void));
double	atof (const char *__nptr);
#if __MISC_VISIBLE
float	atoff (const char *__nptr);
#endif
# 81 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
int	atoi (const char *__nptr);
int	_atoi_r (struct _reent *, const char *__nptr);
long	atol (const char *__nptr);
long	_atol_r (struct _reent *, const char *__nptr);
void *	bsearch (const void *__key,
		       const void *__base,
		       size_t __nmemb,
		       size_t __size,
		       __compar_fn_t _compar);
void	*calloc(size_t, size_t) __malloc_like __result_use_check
	     __alloc_size2(1, 2) _NOTHROW;
div_t	div (int __numer, int __denom);
void	exit (int __status) _ATTRIBUTE ((__noreturn__));
void	free (void *) _NOTHROW;
char *  getenv (const char *__string);
char *	_getenv_r (struct _reent *, const char *__string);
char *	_findenv (const char *, int *);
char *	_findenv_r (struct _reent *, const char *, int *);
#if __POSIX_VISIBLE >= 200809
extern char *suboptarg;			/* getsubopt(3) external variable */
int	getsubopt (char **, char * const *, char **);
#endif
# 103 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
long	labs (long);
ldiv_t	ldiv (long __numer, long __denom);
void	*malloc(size_t) __malloc_like __result_use_check __alloc_size(1) _NOTHROW;
int	mblen (const char *, size_t);
int	_mblen_r (struct _reent *, const char *, size_t, _mbstate_t *);
int	mbtowc (wchar_t *__restrict, const char *__restrict, size_t);
int	_mbtowc_r (struct _reent *, wchar_t *__restrict, const char *__restrict, size_t, _mbstate_t *);
int	wctomb (char *, wchar_t);
int	_wctomb_r (struct _reent *, char *, wchar_t, _mbstate_t *);
size_t	mbstowcs (wchar_t *__restrict, const char *__restrict, size_t);
size_t	_mbstowcs_r (struct _reent *, wchar_t *__restrict, const char *__restrict, size_t, _mbstate_t *);
size_t	wcstombs (char *__restrict, const wchar_t *__restrict, size_t);
size_t	_wcstombs_r (struct _reent *, char *__restrict, const wchar_t *__restrict, size_t, _mbstate_t *);
#ifndef _REENT_ONLY
#if __BSD_VISIBLE || __POSIX_VISIBLE >= 200809
char *	mkdtemp (char *);
#endif
# 120 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
#if __GNU_VISIBLE
int	mkostemp (char *, int);
int	mkostemps (char *, int, int);
#endif
# 124 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
#if __MISC_VISIBLE || __POSIX_VISIBLE >= 200112 || __XSI_VISIBLE >= 4
int	mkstemp (char *);
#endif
# 127 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
#if __MISC_VISIBLE
int	mkstemps (char *, int);
#endif
# 130 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
#if __BSD_VISIBLE || (__XSI_VISIBLE >= 4 && __POSIX_VISIBLE < 200112)
char *	mktemp (char *) _ATTRIBUTE ((__deprecated__("the use of `mktemp' is dangerous; use `mkstemp' instead")));
#endif
# 133 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
#endif /* !_REENT_ONLY */
# 134 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
char *	_mkdtemp_r (struct _reent *, char *);
int	_mkostemp_r (struct _reent *, char *, int);
int	_mkostemps_r (struct _reent *, char *, int, int);
int	_mkstemp_r (struct _reent *, char *);
int	_mkstemps_r (struct _reent *, char *, int);
char *	_mktemp_r (struct _reent *, char *) _ATTRIBUTE ((__deprecated__("the use of `mktemp' is dangerous; use `mkstemp' instead")));
void	qsort (void *__base, size_t __nmemb, size_t __size, __compar_fn_t _compar);
int	rand (void);
void	*realloc(void *, size_t) __result_use_check __alloc_size(2) _NOTHROW;
#if __BSD_VISIBLE
void	*reallocarray(void *, size_t, size_t) __result_use_check __alloc_size2(2, 3);
void	*reallocf(void *, size_t) __result_use_check __alloc_size(2);
#endif
# 147 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
#if __BSD_VISIBLE || __XSI_VISIBLE >= 4
char *	realpath (const char *__restrict path, char *__restrict resolved_path);
#endif
# 150 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
#if __BSD_VISIBLE
int	rpmatch (const char *response);
#endif
# 153 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
#if __XSI_VISIBLE
void	setkey (const char *__key);
#endif
# 156 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
void	srand (unsigned __seed);
double	strtod (const char *__restrict __n, char **__restrict __end_PTR);
double	_strtod_r (struct _reent *,const char *__restrict __n, char **__restrict __end_PTR);
#if __ISO_C_VISIBLE >= 1999
float	strtof (const char *__restrict __n, char **__restrict __end_PTR);
#endif
# 162 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
#if __MISC_VISIBLE
/* the following strtodf interface is deprecated...use strtof instead */
# ifndef strtodf
#  define strtodf strtof
# endif
# 167 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
#endif
# 168 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
long	strtol (const char *__restrict __n, char **__restrict __end_PTR, int __base);
long	_strtol_r (struct _reent *,const char *__restrict __n, char **__restrict __end_PTR, int __base);
unsigned long strtoul (const char *__restrict __n, char **__restrict __end_PTR, int __base);
unsigned long _strtoul_r (struct _reent *,const char *__restrict __n, char **__restrict __end_PTR, int __base);

#if __GNU_VISIBLE
double	strtod_l (const char *__restrict, char **__restrict, locale_t);
float	strtof_l (const char *__restrict, char **__restrict, locale_t);
#ifdef _HAVE_LONG_DOUBLE
extern long double strtold_l (const char *__restrict, char **__restrict,
			      locale_t);
#endif /* _HAVE_LONG_DOUBLE */
# 180 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
long	strtol_l (const char *__restrict, char **__restrict, int, locale_t);
unsigned long strtoul_l (const char *__restrict, char **__restrict, int,
			 locale_t __loc);
long long strtoll_l (const char *__restrict, char **__restrict, int, locale_t);
unsigned long long strtoull_l (const char *__restrict, char **__restrict, int,
			       locale_t __loc);
#endif
# 187 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3

int	system (const char *__string);

#if __SVID_VISIBLE || __XSI_VISIBLE >= 4
long    a64l (const char *__input);
char *  l64a (long __input);
char *  _l64a_r (struct _reent *,long __input);
#endif
# 195 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
#if __MISC_VISIBLE
int	on_exit (void (*__func)(int, void *),void *__arg);
#endif
# 198 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
#if __ISO_C_VISIBLE >= 1999
void	_Exit (int __status) _ATTRIBUTE ((__noreturn__));
#endif
# 201 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
#if __SVID_VISIBLE || __XSI_VISIBLE
int	putenv (char *__string);
#endif
# 204 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
int	_putenv_r (struct _reent *, char *__string);
void *	_reallocf_r (struct _reent *, void *, size_t);
#if __BSD_VISIBLE || __POSIX_VISIBLE >= 200112
int	setenv (const char *__string, const char *__value, int __overwrite);
#endif
# 209 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
int	_setenv_r (struct _reent *, const char *__string, const char *__value, int __overwrite);

#if __XSI_VISIBLE >= 4 && __POSIX_VISIBLE < 200112
char *	gcvt (double,int,char *);
char *	gcvtf (float,int,char *);
char *	fcvt (double,int,int *,int *);
char *	fcvtf (float,int,int *,int *);
char *	ecvt (double,int,int *,int *);
char *	ecvtbuf (double, int, int*, int*, char *);
char *	fcvtbuf (double, int, int*, int*, char *);
char *	ecvtf (float,int,int *,int *);
#endif
# 221 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
char *	__itoa (int, char *, int);
char *	__utoa (unsigned, char *, int);
#if __MISC_VISIBLE
char *	itoa (int, char *, int);
char *	utoa (unsigned, char *, int);
#endif
# 227 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
#if __POSIX_VISIBLE
int	rand_r (unsigned *__seed);
#endif
# 230 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3

#if __SVID_VISIBLE || __XSI_VISIBLE
double drand48 (void);
double _drand48_r (struct _reent *);
double erand48 (unsigned short [3]);
double _erand48_r (struct _reent *, unsigned short [3]);
long   jrand48 (unsigned short [3]);
long   _jrand48_r (struct _reent *, unsigned short [3]);
void  lcong48 (unsigned short [7]);
void  _lcong48_r (struct _reent *, unsigned short [7]);
long   lrand48 (void);
long   _lrand48_r (struct _reent *);
long   mrand48 (void);
long   _mrand48_r (struct _reent *);
long   nrand48 (unsigned short [3]);
long   _nrand48_r (struct _reent *, unsigned short [3]);
unsigned short *
       seed48 (unsigned short [3]);
unsigned short *
       _seed48_r (struct _reent *, unsigned short [3]);
void  srand48 (long);
void  _srand48_r (struct _reent *, long);
#endif /* __SVID_VISIBLE || __XSI_VISIBLE */
# 253 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
#if __SVID_VISIBLE || __XSI_VISIBLE >= 4 || __BSD_VISIBLE
char *	initstate (unsigned, char *, size_t);
long	random (void);
char *	setstate (char *);
void	srandom (unsigned);
#endif
# 259 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
#if __ISO_C_VISIBLE >= 1999
long long atoll (const char *__nptr);
#endif
# 262 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
long long _atoll_r (struct _reent *, const char *__nptr);
#if __ISO_C_VISIBLE >= 1999
long long llabs (long long);
lldiv_t	lldiv (long long __numer, long long __denom);
long long strtoll (const char *__restrict __n, char **__restrict __end_PTR, int __base);
#endif
# 268 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
long long _strtoll_r (struct _reent *, const char *__restrict __n, char **__restrict __end_PTR, int __base);
#if __ISO_C_VISIBLE >= 1999
unsigned long long strtoull (const char *__restrict __n, char **__restrict __end_PTR, int __base);
#endif
# 272 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
unsigned long long _strtoull_r (struct _reent *, const char *__restrict __n, char **__restrict __end_PTR, int __base);

#ifndef __CYGWIN__
#if __MISC_VISIBLE
void	cfree (void *);
#endif
# 278 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
#if __BSD_VISIBLE || __POSIX_VISIBLE >= 200112
int	unsetenv (const char *__string);
#endif
# 281 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
int	_unsetenv_r (struct _reent *, const char *__string);
#endif /* !__CYGWIN__ */
# 283 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3

#if __POSIX_VISIBLE >= 200112
int __nonnull ((1)) posix_memalign (void **, size_t, size_t);
#endif
# 287 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3

char *	_dtoa_r (struct _reent *, double, int, int, int *, int*, char**);
#ifndef __CYGWIN__
void *	_malloc_r (struct _reent *, size_t) _NOTHROW;
void *	_calloc_r (struct _reent *, size_t, size_t) _NOTHROW;
void	_free_r (struct _reent *, void *) _NOTHROW;
void *	_realloc_r (struct _reent *, void *, size_t) _NOTHROW;
void	_mstats_r (struct _reent *, char *);
#endif
# 296 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
int	_system_r (struct _reent *, const char *);

void	__eprintf (const char *, const char *, unsigned int, const char *);

/* There are two common qsort_r variants.  If you request
   _BSD_SOURCE, you get the BSD version; otherwise you get the GNU
   version.  We want that #undef qsort_r will still let you
   invoke the underlying function, but that requires gcc support. */
#if __GNU_VISIBLE
void	qsort_r (void *__base, size_t __nmemb, size_t __size, int (*_compar)(const void *, const void *, void *), void *__thunk);
#elif __BSD_VISIBLE
# 307 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
# ifdef __GNUC__
void	qsort_r (void *__base, size_t __nmemb, size_t __size, void *__thunk, int (*_compar)(void *, const void *, const void *))
             __asm__ (__ASMNAME ("__bsd_qsort_r"));
# else
# 311 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
void	__bsd_qsort_r (void *__base, size_t __nmemb, size_t __size, void *__thunk, int (*_compar)(void *, const void *, const void *));
#  define qsort_r __bsd_qsort_r
# endif
# 314 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
#endif
# 315 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3

/* On platforms where long double equals double.  */
#ifdef _HAVE_LONG_DOUBLE
extern long double _strtold_r (struct _reent *, const char *__restrict, char **__restrict);
#if __ISO_C_VISIBLE >= 1999
extern long double strtold (const char *__restrict, char **__restrict);
#endif
# 322 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
#endif /* _HAVE_LONG_DOUBLE */
# 323 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3

/*
 * If we're in a mode greater than C99, expose C11 functions.
 */
#if __ISO_C_VISIBLE >= 2011
void *	aligned_alloc(size_t, size_t) __malloc_like __alloc_align(1)
	    __alloc_size(2);
int	at_quick_exit(void (*)(void));
_Noreturn void
	quick_exit(int);
#endif /* __ISO_C_VISIBLE >= 2011 */
# 334 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3

_END_STD_C

#if __SSP_FORTIFY_LEVEL > 0
#if 0 /* expanded by -frewrite-includes */
#include <ssp/stdlib.h>
#endif /* expanded by -frewrite-includes */
# 338 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
# 339 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
#endif
# 340 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3

#endif /* _STDLIB_H_ */
# 342 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdlib.h" 3
# 84 "../../../../../newlib/libc/stdio/vfscanf.c" 2
#if 0 /* expanded by -frewrite-includes */
#include <stdint.h>
#endif /* expanded by -frewrite-includes */
# 84 "../../../../../newlib/libc/stdio/vfscanf.c"
# 1 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h" 1
/*===---- stdint.h - Standard header for sized integer types --------------===*\
 *
 * Copyright (c) 2009 Chris Lattner
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
\*===----------------------------------------------------------------------===*/

#ifndef __CLANG_STDINT_H
#define __CLANG_STDINT_H

/* If we're hosted, fall back to the system's stdint.h, which might have
 * additional definitions.
 */
#if __STDC_HOSTED__ && (1)/*__has_include_next(<stdint.h>)*/

// C99 7.18.3 Limits of other integer types
//
//  Footnote 219, 220: C++ implementations should define these macros only when
//  __STDC_LIMIT_MACROS is defined before <stdint.h> is included.
//
//  Footnote 222: C++ implementations should define these macros only when
//  __STDC_CONSTANT_MACROS is defined before <stdint.h> is included.
//
// C++11 [cstdint.syn]p2:
//
//  The macros defined by <cstdint> are provided unconditionally. In particular,
//  the symbols __STDC_LIMIT_MACROS and __STDC_CONSTANT_MACROS (mentioned in
//  footnotes 219, 220, and 222 in the C standard) play no role in C++.
//
// C11 removed the problematic footnotes.
//
// Work around this inconsistency by always defining those macros in C++ mode,
// so that a C library implementation which follows the C99 standard can be
// used in C++.
# ifdef __cplusplus
#  if !defined(__STDC_LIMIT_MACROS)
#   define __STDC_LIMIT_MACROS
#   define __STDC_LIMIT_MACROS_DEFINED_BY_CLANG
#  endif
# 57 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
#  if !defined(__STDC_CONSTANT_MACROS)
#   define __STDC_CONSTANT_MACROS
#   define __STDC_CONSTANT_MACROS_DEFINED_BY_CLANG
#  endif
# 61 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
# endif
# 62 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"

#if 0 /* expanded by -frewrite-includes */
# include_next <stdint.h>
#endif /* expanded by -frewrite-includes */
# 63 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 1 3
/*
 * Copyright (c) 2004, 2005 by
 * Ralf Corsepius, Ulm/Germany. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */

#ifndef _STDINT_H
#define _STDINT_H

#if 0 /* expanded by -frewrite-includes */
#include <machine/_default_types.h>
#endif /* expanded by -frewrite-includes */
# 12 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
# 13 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/_intsup.h>
#endif /* expanded by -frewrite-includes */
# 13 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 1 3
/*
 * Copyright (c) 2004, 2005 by
 * Ralf Corsepius, Ulm/Germany. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */

#ifndef _SYS__INTSUP_H
#define _SYS__INTSUP_H

#if 0 /* expanded by -frewrite-includes */
#include <sys/features.h>
#endif /* expanded by -frewrite-includes */
# 12 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
# 13 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3

#if __GNUC_PREREQ (3, 2)
/* gcc > 3.2 implicitly defines the values we are interested */
#define __STDINT_EXP(x) __##x##__
#else
# 18 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __STDINT_EXP(x) x
#if 0 /* expanded by -frewrite-includes */
#include <limits.h>
#endif /* expanded by -frewrite-includes */
# 19 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
# 20 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#endif
# 21 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3

/* Determine how intptr_t and intN_t fastN_t and leastN_t are defined by gcc
   for this target.  This is used to determine the correct printf() constant in
   inttypes.h and other  constants in stdint.h.
   So we end up with
   ?(signed|unsigned) char == 0
   ?(signed|unsigned) short == 1
   ?(signed|unsigned) int == 2
   ?(signed|unsigned) short int == 3
   ?(signed|unsigned) long == 4
   ?(signed|unsigned) long int == 6
   ?(signed|unsigned) long long == 8
   ?(signed|unsigned) long long int == 10
 */
#pragma push_macro("signed")
#pragma push_macro("unsigned")
#pragma push_macro("char")
#pragma push_macro("short")
#pragma push_macro("__int20")
#pragma push_macro("int")
#pragma push_macro("long")
#undef signed
#undef unsigned
#undef char
#undef short
#undef int
#undef __int20
#undef long
#define signed +0
#define unsigned +0
#define char +0
#define short +1
#define __int20 +2
#define int +2
#define long +4
#if (__INTPTR_TYPE__ == 8 || __INTPTR_TYPE__ == 10)
#define _INTPTR_EQ_LONGLONG
#elif (__INTPTR_TYPE__ == 4 || __INTPTR_TYPE__ == 6)
# 59 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define _INTPTR_EQ_LONG
/* Note - the tests for _INTPTR_EQ_INT and _INTPTR_EQ_SHORT are currently
   redundant as the values are not used.  But one day they may be needed
   and so the tests remain.  */
#elif __INTPTR_TYPE__ == 2
# 64 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define _INTPTR_EQ_INT
#elif (__INTPTR_TYPE__ == 1 || __INTPTR_TYPE__ == 3)
# 66 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define _INTPTR_EQ_SHORT
#else
# 68 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#error "Unable to determine type definition of intptr_t"
#endif
# 70 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#if (__INT32_TYPE__ == 4 || __INT32_TYPE__ == 6)
#define _INT32_EQ_LONG
#elif __INT32_TYPE__ == 2
# 73 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
/* Nothing to define because int32_t is safe to print as an int. */
#else
# 75 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#error "Unable to determine type definition of int32_t"
#endif
# 77 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3

#if (__INT8_TYPE__ == 0)
#define __INT8 "hh"
#elif (__INT8_TYPE__ == 1 || __INT8_TYPE__ == 3)
# 81 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __INT8 "h"
#elif (__INT8_TYPE__ == 2)
# 83 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __INT8
#elif (__INT8_TYPE__ == 4 || __INT8_TYPE__ == 6)
# 85 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __INT8 "l"
#elif (__INT8_TYPE__ == 8 || __INT8_TYPE__ == 10)
# 87 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __INT8 "ll"
#endif
# 89 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#if (__INT16_TYPE__ == 1 || __INT16_TYPE__ == 3)
#define __INT16 "h"
#elif (__INT16_TYPE__ == 2)
# 92 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __INT16
#elif (__INT16_TYPE__ == 4 || __INT16_TYPE__ == 6)
# 94 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __INT16 "l"
#elif (__INT16_TYPE__ == 8 || __INT16_TYPE__ == 10)
# 96 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __INT16 "ll"
#endif
# 98 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#if (__INT32_TYPE__ == 2)
#define __INT32
#elif (__INT32_TYPE__ == 4 || __INT32_TYPE__ == 6)
# 101 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __INT32 "l"
#elif (__INT32_TYPE__ == 8 || __INT32_TYPE__ == 10)
# 103 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __INT32 "ll"
#endif
# 105 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#if (__INT64_TYPE__ == 2)
#define __INT64
#elif (__INT64_TYPE__ == 4 || __INT64_TYPE__ == 6)
# 108 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __INT64 "l"
#elif (__INT64_TYPE__ == 8 || __INT64_TYPE__ == 10)
# 110 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __INT64 "ll"
#endif
# 112 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#if (__INT_FAST8_TYPE__ == 0)
#define __FAST8 "hh"
#elif (__INT_FAST8_TYPE__ == 1 || __INT_FAST8_TYPE__ == 3)
# 115 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __FAST8 "h"
#elif (__INT_FAST8_TYPE__ == 2)
# 117 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __FAST8
#elif (__INT_FAST8_TYPE__ == 4 || __INT_FAST8_TYPE__ == 6)
# 119 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __FAST8 "l"
#elif (__INT_FAST8_TYPE__ == 8 || __INT_FAST8_TYPE__ == 10)
# 121 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __FAST8 "ll"
#endif
# 123 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#if (__INT_FAST16_TYPE__ == 1 || __INT_FAST16_TYPE__ == 3)
#define __FAST16 "h"
#elif (__INT_FAST16_TYPE__ == 2)
# 126 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __FAST16
#elif (__INT_FAST16_TYPE__ == 4 || __INT_FAST16_TYPE__ == 6)
# 128 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __FAST16 "l"
#elif (__INT_FAST16_TYPE__ == 8 || __INT_FAST16_TYPE__ == 10)
# 130 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __FAST16 "ll"
#endif
# 132 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#if (__INT_FAST32_TYPE__ == 2)
#define __FAST32
#elif (__INT_FAST32_TYPE__ == 4 || __INT_FAST32_TYPE__ == 6)
# 135 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __FAST32 "l"
#elif (__INT_FAST32_TYPE__ == 8 || __INT_FAST32_TYPE__ == 10)
# 137 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __FAST32 "ll"
#endif
# 139 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#if (__INT_FAST64_TYPE__ == 2)
#define __FAST64
#elif (__INT_FAST64_TYPE__ == 4 || __INT_FAST64_TYPE__ == 6)
# 142 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __FAST64 "l"
#elif (__INT_FAST64_TYPE__ == 8 || __INT_FAST64_TYPE__ == 10)
# 144 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __FAST64 "ll"
#endif
# 146 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3

#if (__INT_LEAST8_TYPE__ == 0)
#define __LEAST8 "hh"
#elif (__INT_LEAST8_TYPE__ == 1 || __INT_LEAST8_TYPE__ == 3)
# 150 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __LEAST8 "h"
#elif (__INT_LEAST8_TYPE__ == 2)
# 152 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __LEAST8
#elif (__INT_LEAST8_TYPE__ == 4 || __INT_LEAST8_TYPE__ == 6)
# 154 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __LEAST8 "l"
#elif (__INT_LEAST8_TYPE__ == 8 || __INT_LEAST8_TYPE__ == 10)
# 156 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __LEAST8 "ll"
#endif
# 158 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#if (__INT_LEAST16_TYPE__ == 1 || __INT_LEAST16_TYPE__ == 3)
#define __LEAST16 "h"
#elif (__INT_LEAST16_TYPE__ == 2)
# 161 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __LEAST16
#elif (__INT_LEAST16_TYPE__ == 4 || __INT_LEAST16_TYPE__ == 6)
# 163 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __LEAST16 "l"
#elif (__INT_LEAST16_TYPE__ == 8 || __INT_LEAST16_TYPE__ == 10)
# 165 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __LEAST16 "ll"
#endif
# 167 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#if (__INT_LEAST32_TYPE__ == 2)
#define __LEAST32
#elif (__INT_LEAST32_TYPE__ == 4 || __INT_LEAST32_TYPE__ == 6)
# 170 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __LEAST32 "l"
#elif (__INT_LEAST32_TYPE__ == 8 || __INT_LEAST32_TYPE__ == 10)
# 172 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __LEAST32 "ll"
#endif
# 174 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#if (__INT_LEAST64_TYPE__ == 2)
#define __LEAST64
#elif (__INT_LEAST64_TYPE__ == 4 || __INT_LEAST64_TYPE__ == 6)
# 177 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __LEAST64 "l"
#elif (__INT_LEAST64_TYPE__ == 8 || __INT_LEAST64_TYPE__ == 10)
# 179 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#define __LEAST64 "ll"
#endif
# 181 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
#undef signed
#undef unsigned
#undef char
#undef short
#undef int
#undef long
#pragma pop_macro("signed")
#pragma pop_macro("unsigned")
#pragma pop_macro("char")
#pragma pop_macro("short")
#pragma pop_macro("__int20")
#pragma pop_macro("int")
#pragma pop_macro("long")

#endif /* _SYS__INTSUP_H */
# 196 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/_intsup.h" 3
# 14 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/_stdint.h>
#endif /* expanded by -frewrite-includes */
# 14 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
# 15 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

#ifdef __cplusplus
extern "C" {
#endif
# 19 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

#ifdef ___int_least8_t_defined
typedef __int_least8_t int_least8_t;
typedef __uint_least8_t uint_least8_t;
#define __int_least8_t_defined 1
#endif
# 25 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

#ifdef ___int_least16_t_defined
typedef __int_least16_t int_least16_t;
typedef __uint_least16_t uint_least16_t;
#define __int_least16_t_defined 1
#endif
# 31 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

#ifdef ___int_least32_t_defined
typedef __int_least32_t int_least32_t;
typedef __uint_least32_t uint_least32_t;
#define __int_least32_t_defined 1
#endif
# 37 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

#ifdef ___int_least64_t_defined
typedef __int_least64_t int_least64_t;
typedef __uint_least64_t uint_least64_t;
#define __int_least64_t_defined 1
#endif
# 43 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

/*
 * Fastest minimum-width integer types
 *
 * Assume int to be the fastest type for all types with a width 
 * less than __INT_MAX__ rsp. INT_MAX
 */
#ifdef __INT_FAST8_TYPE__
  typedef __INT_FAST8_TYPE__ int_fast8_t;
  typedef __UINT_FAST8_TYPE__ uint_fast8_t;
#define __int_fast8_t_defined 1
#elif __STDINT_EXP(INT_MAX) >= 0x7f
# 55 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
  typedef signed int int_fast8_t;
  typedef unsigned int uint_fast8_t;
#define __int_fast8_t_defined 1
#endif
# 59 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

#ifdef __INT_FAST16_TYPE__
  typedef __INT_FAST16_TYPE__ int_fast16_t;
  typedef __UINT_FAST16_TYPE__ uint_fast16_t;
#define __int_fast16_t_defined 1
#elif __STDINT_EXP(INT_MAX) >= 0x7fff
# 65 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
  typedef signed int int_fast16_t;
  typedef unsigned int uint_fast16_t;
#define __int_fast16_t_defined 1
#endif
# 69 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

#ifdef __INT_FAST32_TYPE__
  typedef __INT_FAST32_TYPE__ int_fast32_t;
  typedef __UINT_FAST32_TYPE__ uint_fast32_t;
#define __int_fast32_t_defined 1
#elif __STDINT_EXP(INT_MAX) >= 0x7fffffff
# 75 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
  typedef signed int int_fast32_t;
  typedef unsigned int uint_fast32_t;
#define __int_fast32_t_defined 1
#endif
# 79 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

#ifdef __INT_FAST64_TYPE__
  typedef __INT_FAST64_TYPE__ int_fast64_t;
  typedef __UINT_FAST64_TYPE__ uint_fast64_t;
#define __int_fast64_t_defined 1
#elif __STDINT_EXP(INT_MAX) > 0x7fffffff
# 85 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
  typedef signed int int_fast64_t;
  typedef unsigned int uint_fast64_t;
#define __int_fast64_t_defined 1
#endif
# 89 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

/*
 * Fall back to [u]int_least<N>_t for [u]int_fast<N>_t types
 * not having been defined, yet.
 * Leave undefined, if [u]int_least<N>_t should not be available.
 */
#if !__int_fast8_t_defined
#if __int_least8_t_defined
  typedef int_least8_t int_fast8_t;
  typedef uint_least8_t uint_fast8_t;
#define __int_fast8_t_defined 1
#endif
# 101 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#endif
# 102 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

#if !__int_fast16_t_defined
#if __int_least16_t_defined
  typedef int_least16_t int_fast16_t;
  typedef uint_least16_t uint_fast16_t;
#define __int_fast16_t_defined 1
#endif
# 109 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#endif
# 110 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

#if !__int_fast32_t_defined
#if __int_least32_t_defined
  typedef int_least32_t int_fast32_t;
  typedef uint_least32_t uint_fast32_t;
#define __int_fast32_t_defined 1
#endif
# 117 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#endif
# 118 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

#if !__int_fast64_t_defined
#if __int_least64_t_defined
  typedef int_least64_t int_fast64_t;
  typedef uint_least64_t uint_fast64_t;
#define __int_fast64_t_defined 1
#endif
# 125 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#endif
# 126 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

#ifdef __INTPTR_TYPE__
#define INTPTR_MIN (-__INTPTR_MAX__ - 1)
#define INTPTR_MAX (__INTPTR_MAX__)
#define UINTPTR_MAX (__UINTPTR_MAX__)
#elif defined(__PTRDIFF_TYPE__)
# 132 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#define INTPTR_MAX PTRDIFF_MAX
#define INTPTR_MIN PTRDIFF_MIN
#ifdef __UINTPTR_MAX__
#define UINTPTR_MAX (__UINTPTR_MAX__)
#else
# 137 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#define UINTPTR_MAX (2UL * PTRDIFF_MAX + 1)
#endif
# 139 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#else
# 140 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
/*
 * Fallback to hardcoded values, 
 * should be valid on cpu's with 32bit int/32bit void*
 */
#define INTPTR_MAX (__STDINT_EXP(LONG_MAX))
#define INTPTR_MIN (-__STDINT_EXP(LONG_MAX) - 1)
#define UINTPTR_MAX (__STDINT_EXP(LONG_MAX) * 2UL + 1)
#endif
# 148 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

/* Limits of Specified-Width Integer Types */

#ifdef __INT8_MAX__
#define INT8_MIN (-__INT8_MAX__ - 1)
#define INT8_MAX (__INT8_MAX__)
#define UINT8_MAX (__UINT8_MAX__)
#elif defined(__int8_t_defined)
# 156 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#define INT8_MIN 	(-128)
#define INT8_MAX 	 (127)
#define UINT8_MAX 	 (255)
#endif
# 160 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

#ifdef __INT_LEAST8_MAX__
#define INT_LEAST8_MIN (-__INT_LEAST8_MAX__ - 1)
#define INT_LEAST8_MAX (__INT_LEAST8_MAX__)
#define UINT_LEAST8_MAX (__UINT_LEAST8_MAX__)
#elif defined(__int_least8_t_defined)
# 166 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#define INT_LEAST8_MIN 	(-128)
#define INT_LEAST8_MAX 	 (127)
#define UINT_LEAST8_MAX	 (255)
#else
# 170 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#error required type int_least8_t missing
#endif
# 172 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

#ifdef __INT16_MAX__
#define INT16_MIN (-__INT16_MAX__ - 1)
#define INT16_MAX (__INT16_MAX__)
#define UINT16_MAX (__UINT16_MAX__)
#elif defined(__int16_t_defined)
# 178 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#define INT16_MIN 	(-32768)
#define INT16_MAX 	 (32767)
#define UINT16_MAX 	 (65535)
#endif
# 182 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

#ifdef __INT_LEAST16_MAX__
#define INT_LEAST16_MIN (-__INT_LEAST16_MAX__ - 1)
#define INT_LEAST16_MAX (__INT_LEAST16_MAX__)
#define UINT_LEAST16_MAX (__UINT_LEAST16_MAX__)
#elif defined(__int_least16_t_defined)
# 188 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#define INT_LEAST16_MIN	(-32768)
#define INT_LEAST16_MAX	 (32767)
#define UINT_LEAST16_MAX (65535)
#else
# 192 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#error required type int_least16_t missing
#endif
# 194 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

#ifdef __INT32_MAX__
#define INT32_MIN (-__INT32_MAX__ - 1)
#define INT32_MAX (__INT32_MAX__)
#define UINT32_MAX (__UINT32_MAX__)
#elif defined(__int32_t_defined)
# 200 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#if defined (_INT32_EQ_LONG)
#define INT32_MIN 	 (-2147483647L-1)
#define INT32_MAX 	 (2147483647L)
#define UINT32_MAX       (4294967295UL)
#else
# 205 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#define INT32_MIN 	 (-2147483647-1)
#define INT32_MAX 	 (2147483647)
#define UINT32_MAX       (4294967295U)
#endif
# 209 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#endif
# 210 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

#ifdef __INT_LEAST32_MAX__
#define INT_LEAST32_MIN (-__INT_LEAST32_MAX__ - 1)
#define INT_LEAST32_MAX (__INT_LEAST32_MAX__)
#define UINT_LEAST32_MAX (__UINT_LEAST32_MAX__)
#elif defined(__int_least32_t_defined)
# 216 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#if defined (_INT32_EQ_LONG)
#define INT_LEAST32_MIN  (-2147483647L-1)
#define INT_LEAST32_MAX  (2147483647L)
#define UINT_LEAST32_MAX (4294967295UL)
#else
# 221 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#define INT_LEAST32_MIN  (-2147483647-1)
#define INT_LEAST32_MAX  (2147483647)
#define UINT_LEAST32_MAX (4294967295U)
#endif
# 225 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#else
# 226 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#error required type int_least32_t missing
#endif
# 228 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

#ifdef __INT64_MAX__
#define INT64_MIN (-__INT64_MAX__ - 1)
#define INT64_MAX (__INT64_MAX__)
#define UINT64_MAX (__UINT64_MAX__)
#elif defined(__int64_t_defined)
# 234 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#if __have_long64
#define INT64_MIN 	(-9223372036854775807L-1L)
#define INT64_MAX 	 (9223372036854775807L)
#define UINT64_MAX 	(18446744073709551615U)
#elif __have_longlong64
# 239 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#define INT64_MIN 	(-9223372036854775807LL-1LL)
#define INT64_MAX 	 (9223372036854775807LL)
#define UINT64_MAX 	(18446744073709551615ULL)
#endif
# 243 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#endif
# 244 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

#ifdef __INT_LEAST64_MAX__
#define INT_LEAST64_MIN (-__INT_LEAST64_MAX__ - 1)
#define INT_LEAST64_MAX (__INT_LEAST64_MAX__)
#define UINT_LEAST64_MAX (__UINT_LEAST64_MAX__)
#elif defined(__int_least64_t_defined)
# 250 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#if __have_long64
#define INT_LEAST64_MIN  (-9223372036854775807L-1L)
#define INT_LEAST64_MAX  (9223372036854775807L)
#define UINT_LEAST64_MAX (18446744073709551615U)
#elif __have_longlong64
# 255 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#define INT_LEAST64_MIN  (-9223372036854775807LL-1LL)
#define INT_LEAST64_MAX  (9223372036854775807LL)
#define UINT_LEAST64_MAX (18446744073709551615ULL)
#endif
# 259 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#endif
# 260 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

#ifdef __INT_FAST8_MAX__
#define INT_FAST8_MIN (-__INT_FAST8_MAX__ - 1)
#define INT_FAST8_MAX (__INT_FAST8_MAX__)
#define UINT_FAST8_MAX (__UINT_FAST8_MAX__)
#elif defined(__int_fast8_t_defined)
# 266 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#if __STDINT_EXP(INT_MAX) >= 0x7f
#define INT_FAST8_MIN	(-__STDINT_EXP(INT_MAX)-1)
#define INT_FAST8_MAX	(__STDINT_EXP(INT_MAX))
#define UINT_FAST8_MAX	(__STDINT_EXP(INT_MAX)*2U+1U)
#else
# 271 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#define INT_FAST8_MIN	INT_LEAST8_MIN
#define INT_FAST8_MAX	INT_LEAST8_MAX
#define UINT_FAST8_MAX	UINT_LEAST8_MAX
#endif
# 275 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#endif
# 276 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

#ifdef __INT_FAST16_MAX__
#define INT_FAST16_MIN (-__INT_FAST16_MAX__ - 1)
#define INT_FAST16_MAX (__INT_FAST16_MAX__)
#define UINT_FAST16_MAX (__UINT_FAST16_MAX__)
#elif defined(__int_fast16_t_defined)
# 282 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#if __STDINT_EXP(INT_MAX) >= 0x7fff
#define INT_FAST16_MIN	(-__STDINT_EXP(INT_MAX)-1)
#define INT_FAST16_MAX	(__STDINT_EXP(INT_MAX))
#define UINT_FAST16_MAX	(__STDINT_EXP(INT_MAX)*2U+1U)
#else
# 287 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#define INT_FAST16_MIN	INT_LEAST16_MIN
#define INT_FAST16_MAX	INT_LEAST16_MAX
#define UINT_FAST16_MAX	UINT_LEAST16_MAX
#endif
# 291 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#endif
# 292 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

#ifdef __INT_FAST32_MAX__
#define INT_FAST32_MIN (-__INT_FAST32_MAX__ - 1)
#define INT_FAST32_MAX (__INT_FAST32_MAX__)
#define UINT_FAST32_MAX (__UINT_FAST32_MAX__)
#elif defined(__int_fast32_t_defined)
# 298 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#if __STDINT_EXP(INT_MAX) >= 0x7fffffff
#define INT_FAST32_MIN	(-__STDINT_EXP(INT_MAX)-1)
#define INT_FAST32_MAX	(__STDINT_EXP(INT_MAX))
#define UINT_FAST32_MAX	(__STDINT_EXP(INT_MAX)*2U+1U)
#else
# 303 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#define INT_FAST32_MIN	INT_LEAST32_MIN
#define INT_FAST32_MAX	INT_LEAST32_MAX
#define UINT_FAST32_MAX	UINT_LEAST32_MAX
#endif
# 307 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#endif
# 308 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

#ifdef __INT_FAST64_MAX__
#define INT_FAST64_MIN (-__INT_FAST64_MAX__ - 1)
#define INT_FAST64_MAX (__INT_FAST64_MAX__)
#define UINT_FAST64_MAX (__UINT_FAST64_MAX__)
#elif defined(__int_fast64_t_defined)
# 314 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#if __STDINT_EXP(INT_MAX) > 0x7fffffff
#define INT_FAST64_MIN	(-__STDINT_EXP(INT_MAX)-1)
#define INT_FAST64_MAX	(__STDINT_EXP(INT_MAX))
#define UINT_FAST64_MAX	(__STDINT_EXP(INT_MAX)*2U+1U)
#else
# 319 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#define INT_FAST64_MIN	INT_LEAST64_MIN
#define INT_FAST64_MAX	INT_LEAST64_MAX
#define UINT_FAST64_MAX	UINT_LEAST64_MAX
#endif
# 323 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#endif
# 324 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

#ifdef __INTMAX_MAX__
#define INTMAX_MAX (__INTMAX_MAX__)
#define INTMAX_MIN (-INTMAX_MAX - 1)
#elif defined(__INTMAX_TYPE__)
# 329 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
/* All relevant GCC versions prefer long to long long for intmax_t.  */
#define INTMAX_MAX INT64_MAX
#define INTMAX_MIN INT64_MIN
#endif
# 333 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

#ifdef __UINTMAX_MAX__
#define UINTMAX_MAX (__UINTMAX_MAX__)
#elif defined(__UINTMAX_TYPE__)
# 337 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
/* All relevant GCC versions prefer long to long long for intmax_t.  */
#define UINTMAX_MAX UINT64_MAX
#endif
# 340 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

/* This must match size_t in stddef.h, currently long unsigned int */
#ifdef __SIZE_MAX__
#define SIZE_MAX (__SIZE_MAX__)
#else
# 345 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#define SIZE_MAX (__STDINT_EXP(LONG_MAX) * 2UL + 1)
#endif
# 347 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

/* This must match sig_atomic_t in <signal.h> (currently int) */
#define SIG_ATOMIC_MIN (-__STDINT_EXP(INT_MAX) - 1)
#define SIG_ATOMIC_MAX (__STDINT_EXP(INT_MAX))

/* This must match ptrdiff_t  in <stddef.h> (currently long int) */
#ifdef __PTRDIFF_MAX__
#define PTRDIFF_MAX (__PTRDIFF_MAX__)
#else
# 356 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#define PTRDIFF_MAX (__STDINT_EXP(LONG_MAX))
#endif
# 358 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#define PTRDIFF_MIN (-PTRDIFF_MAX - 1)

/* This must match definition in <wchar.h> */
#ifndef WCHAR_MIN
#ifdef __WCHAR_MIN__
#define WCHAR_MIN (__WCHAR_MIN__)
#elif defined(__WCHAR_UNSIGNED__) || (L'\0' - 1 > 0)
# 365 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#define WCHAR_MIN (0 + L'\0')
#else
# 367 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#define WCHAR_MIN (-0x7fffffff - 1 + L'\0')
#endif
# 369 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#endif
# 370 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

/* This must match definition in <wchar.h> */
#ifndef WCHAR_MAX
#ifdef __WCHAR_MAX__
#define WCHAR_MAX (__WCHAR_MAX__)
#elif defined(__WCHAR_UNSIGNED__) || (L'\0' - 1 > 0)
# 376 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#define WCHAR_MAX (0xffffffffu + L'\0')
#else
# 378 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#define WCHAR_MAX (0x7fffffff + L'\0')
#endif
# 380 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#endif
# 381 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

/* wint_t is unsigned int on almost all GCC targets.  */
#ifdef __WINT_MAX__
#define WINT_MAX (__WINT_MAX__)
#else
# 386 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#define WINT_MAX (__STDINT_EXP(INT_MAX) * 2U + 1U)
#endif
# 388 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#ifdef __WINT_MIN__
#define WINT_MIN (__WINT_MIN__)
#else
# 391 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#define WINT_MIN (0U)
#endif
# 393 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

/** Macros for minimum-width integer constant expressions */
#ifdef __INT8_C
#define INT8_C(x) __INT8_C(x)
#define UINT8_C(x) __UINT8_C(x)
#else
# 399 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#define INT8_C(x)	x
#if __STDINT_EXP(INT_MAX) > 0x7f
#define UINT8_C(x)	x
#else
# 403 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#define UINT8_C(x)	x##U
#endif
# 405 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#endif
# 406 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

#ifdef __INT16_C
#define INT16_C(x) __INT16_C(x)
#define UINT16_C(x) __UINT16_C(x)
#else
# 411 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#define INT16_C(x)	x
#if __STDINT_EXP(INT_MAX) > 0x7fff
#define UINT16_C(x)	x
#else
# 415 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#define UINT16_C(x)	x##U
#endif
# 417 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#endif
# 418 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

#ifdef __INT32_C
#define INT32_C(x) __INT32_C(x)
#define UINT32_C(x) __UINT32_C(x)
#else
# 423 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#if defined (_INT32_EQ_LONG)
#define INT32_C(x)	x##L
#define UINT32_C(x)	x##UL
#else
# 427 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#define INT32_C(x)	x
#define UINT32_C(x)	x##U
#endif
# 430 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#endif
# 431 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

#ifdef __INT64_C
#define INT64_C(x) __INT64_C(x)
#define UINT64_C(x) __UINT64_C(x)
#else
# 436 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#if __int64_t_defined
#if __have_long64
#define INT64_C(x)	x##L
#define UINT64_C(x)	x##UL
#else
# 441 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#define INT64_C(x)	x##LL
#define UINT64_C(x)	x##ULL
#endif
# 444 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#endif
# 445 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#endif
# 446 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

/** Macros for greatest-width integer constant expression */
#ifdef __INTMAX_C
#define INTMAX_C(x) __INTMAX_C(x)
#define UINTMAX_C(x) __UINTMAX_C(x)
#else
# 452 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#if __have_long64
#define INTMAX_C(x)	x##L
#define UINTMAX_C(x)	x##UL
#else
# 456 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#define INTMAX_C(x)	x##LL
#define UINTMAX_C(x)	x##ULL
#endif
# 459 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
#endif
# 460 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3


#ifdef __cplusplus
}
#endif
# 465 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3

#endif /* _STDINT_H */
# 467 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/stdint.h" 3
# 64 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h" 2

# ifdef __STDC_LIMIT_MACROS_DEFINED_BY_CLANG
#  undef __STDC_LIMIT_MACROS
#  undef __STDC_LIMIT_MACROS_DEFINED_BY_CLANG
# endif
# 69 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
# ifdef __STDC_CONSTANT_MACROS_DEFINED_BY_CLANG
#  undef __STDC_CONSTANT_MACROS
#  undef __STDC_CONSTANT_MACROS_DEFINED_BY_CLANG
# endif
# 73 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"

#else
# 75 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"

/* C99 7.18.1.1 Exact-width integer types.
 * C99 7.18.1.2 Minimum-width integer types.
 * C99 7.18.1.3 Fastest minimum-width integer types.
 *
 * The standard requires that exact-width type be defined for 8-, 16-, 32-, and
 * 64-bit types if they are implemented. Other exact width types are optional.
 * This implementation defines an exact-width types for every integer width
 * that is represented in the standard integer types.
 *
 * The standard also requires minimum-width types be defined for 8-, 16-, 32-,
 * and 64-bit widths regardless of whether there are corresponding exact-width
 * types.
 *
 * To accommodate targets that are missing types that are exactly 8, 16, 32, or
 * 64 bits wide, this implementation takes an approach of cascading
 * redefinitions, redefining __int_leastN_t to successively smaller exact-width
 * types. It is therefore important that the types are defined in order of
 * descending widths.
 *
 * We currently assume that the minimum-width types and the fastest
 * minimum-width types are the same. This is allowed by the standard, but is
 * suboptimal.
 *
 * In violation of the standard, some targets do not implement a type that is
 * wide enough to represent all of the required widths (8-, 16-, 32-, 64-bit).
 * To accommodate these targets, a required minimum-width type is only
 * defined if there exists an exact-width type of equal or greater width.
 */

#ifdef __INT64_TYPE__
# ifndef __int8_t_defined /* glibc sys/types.h also defines int64_t*/
typedef __INT64_TYPE__ int64_t;
# endif /* __int8_t_defined */
# 109 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
typedef __UINT64_TYPE__ uint64_t;
# define __int_least64_t int64_t
# define __uint_least64_t uint64_t
# define __int_least32_t int64_t
# define __uint_least32_t uint64_t
# define __int_least16_t int64_t
# define __uint_least16_t uint64_t
# define __int_least8_t int64_t
# define __uint_least8_t uint64_t
#endif /* __INT64_TYPE__ */
# 119 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"

#ifdef __int_least64_t
typedef __int_least64_t int_least64_t;
typedef __uint_least64_t uint_least64_t;
typedef __int_least64_t int_fast64_t;
typedef __uint_least64_t uint_fast64_t;
#endif /* __int_least64_t */
# 126 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"

#ifdef __INT56_TYPE__
typedef __INT56_TYPE__ int56_t;
typedef __UINT56_TYPE__ uint56_t;
typedef int56_t int_least56_t;
typedef uint56_t uint_least56_t;
typedef int56_t int_fast56_t;
typedef uint56_t uint_fast56_t;
# define __int_least32_t int56_t
# define __uint_least32_t uint56_t
# define __int_least16_t int56_t
# define __uint_least16_t uint56_t
# define __int_least8_t int56_t
# define __uint_least8_t uint56_t
#endif /* __INT56_TYPE__ */
# 141 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"


#ifdef __INT48_TYPE__
typedef __INT48_TYPE__ int48_t;
typedef __UINT48_TYPE__ uint48_t;
typedef int48_t int_least48_t;
typedef uint48_t uint_least48_t;
typedef int48_t int_fast48_t;
typedef uint48_t uint_fast48_t;
# define __int_least32_t int48_t
# define __uint_least32_t uint48_t
# define __int_least16_t int48_t
# define __uint_least16_t uint48_t
# define __int_least8_t int48_t
# define __uint_least8_t uint48_t
#endif /* __INT48_TYPE__ */
# 157 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"


#ifdef __INT40_TYPE__
typedef __INT40_TYPE__ int40_t;
typedef __UINT40_TYPE__ uint40_t;
typedef int40_t int_least40_t;
typedef uint40_t uint_least40_t;
typedef int40_t int_fast40_t;
typedef uint40_t uint_fast40_t;
# define __int_least32_t int40_t
# define __uint_least32_t uint40_t
# define __int_least16_t int40_t
# define __uint_least16_t uint40_t
# define __int_least8_t int40_t
# define __uint_least8_t uint40_t
#endif /* __INT40_TYPE__ */
# 173 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"


#ifdef __INT32_TYPE__

# ifndef __int8_t_defined /* glibc sys/types.h also defines int32_t*/
typedef __INT32_TYPE__ int32_t;
# endif /* __int8_t_defined */
# 180 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"

# ifndef __uint32_t_defined  /* more glibc compatibility */
# define __uint32_t_defined
typedef __UINT32_TYPE__ uint32_t;
# endif /* __uint32_t_defined */
# 185 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"

# define __int_least32_t int32_t
# define __uint_least32_t uint32_t
# define __int_least16_t int32_t
# define __uint_least16_t uint32_t
# define __int_least8_t int32_t
# define __uint_least8_t uint32_t
#endif /* __INT32_TYPE__ */
# 193 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"

#ifdef __int_least32_t
typedef __int_least32_t int_least32_t;
typedef __uint_least32_t uint_least32_t;
typedef __int_least32_t int_fast32_t;
typedef __uint_least32_t uint_fast32_t;
#endif /* __int_least32_t */
# 200 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"

#ifdef __INT24_TYPE__
typedef __INT24_TYPE__ int24_t;
typedef __UINT24_TYPE__ uint24_t;
typedef int24_t int_least24_t;
typedef uint24_t uint_least24_t;
typedef int24_t int_fast24_t;
typedef uint24_t uint_fast24_t;
# define __int_least16_t int24_t
# define __uint_least16_t uint24_t
# define __int_least8_t int24_t
# define __uint_least8_t uint24_t
#endif /* __INT24_TYPE__ */
# 213 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"

#ifdef __INT16_TYPE__
#ifndef __int8_t_defined /* glibc sys/types.h also defines int16_t*/
typedef __INT16_TYPE__ int16_t;
#endif /* __int8_t_defined */
# 218 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
typedef __UINT16_TYPE__ uint16_t;
# define __int_least16_t int16_t
# define __uint_least16_t uint16_t
# define __int_least8_t int16_t
# define __uint_least8_t uint16_t
#endif /* __INT16_TYPE__ */
# 224 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"

#ifdef __int_least16_t
typedef __int_least16_t int_least16_t;
typedef __uint_least16_t uint_least16_t;
typedef __int_least16_t int_fast16_t;
typedef __uint_least16_t uint_fast16_t;
#endif /* __int_least16_t */
# 231 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"


#ifdef __INT8_TYPE__
#ifndef __int8_t_defined  /* glibc sys/types.h also defines int8_t*/
typedef __INT8_TYPE__ int8_t;
#endif /* __int8_t_defined */
# 237 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
typedef __UINT8_TYPE__ uint8_t;
# define __int_least8_t int8_t
# define __uint_least8_t uint8_t
#endif /* __INT8_TYPE__ */
# 241 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"

#ifdef __int_least8_t
typedef __int_least8_t int_least8_t;
typedef __uint_least8_t uint_least8_t;
typedef __int_least8_t int_fast8_t;
typedef __uint_least8_t uint_fast8_t;
#endif /* __int_least8_t */
# 248 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"

/* prevent glibc sys/types.h from defining conflicting types */
#ifndef __int8_t_defined
# define __int8_t_defined
#endif /* __int8_t_defined */
# 253 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"

/* C99 7.18.1.4 Integer types capable of holding object pointers.
 */
#define __stdint_join3(a,b,c) a ## b ## c

#ifndef _INTPTR_T
#ifndef __intptr_t_defined
typedef __INTPTR_TYPE__ intptr_t;
#define __intptr_t_defined
#define _INTPTR_T
#endif
# 264 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
#endif
# 265 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"

#ifndef _UINTPTR_T
typedef __UINTPTR_TYPE__ uintptr_t;
#define _UINTPTR_T
#endif
# 270 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"

/* C99 7.18.1.5 Greatest-width integer types.
 */
typedef __INTMAX_TYPE__  intmax_t;
typedef __UINTMAX_TYPE__ uintmax_t;

/* C99 7.18.4 Macros for minimum-width integer constants.
 *
 * The standard requires that integer constant macros be defined for all the
 * minimum-width types defined above. As 8-, 16-, 32-, and 64-bit minimum-width
 * types are required, the corresponding integer constant macros are defined
 * here. This implementation also defines minimum-width types for every other
 * integer width that the target implements, so corresponding macros are
 * defined below, too.
 *
 * These macros are defined using the same successive-shrinking approach as
 * the type definitions above. It is likewise important that macros are defined
 * in order of decending width.
 *
 * Note that C++ should not check __STDC_CONSTANT_MACROS here, contrary to the
 * claims of the C standard (see C++ 18.3.1p2, [cstdint.syn]).
 */

#define __int_c_join(a, b) a ## b
#define __int_c(v, suffix) __int_c_join(v, suffix)
#define __uint_c(v, suffix) __int_c_join(v##U, suffix)


#ifdef __INT64_TYPE__
# ifdef __INT64_C_SUFFIX__
#  define __int64_c_suffix __INT64_C_SUFFIX__
#  define __int32_c_suffix __INT64_C_SUFFIX__
#  define __int16_c_suffix __INT64_C_SUFFIX__
#  define  __int8_c_suffix __INT64_C_SUFFIX__
# else
# 305 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
#  undef __int64_c_suffix
#  undef __int32_c_suffix
#  undef __int16_c_suffix
#  undef  __int8_c_suffix
# endif /* __INT64_C_SUFFIX__ */
# 310 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
#endif /* __INT64_TYPE__ */
# 311 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"

#ifdef __int_least64_t
# ifdef __int64_c_suffix
#  define INT64_C(v) __int_c(v, __int64_c_suffix)
#  define UINT64_C(v) __uint_c(v, __int64_c_suffix)
# else
# 317 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
#  define INT64_C(v) v
#  define UINT64_C(v) v ## U
# endif /* __int64_c_suffix */
# 320 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
#endif /* __int_least64_t */
# 321 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"


#ifdef __INT56_TYPE__
# ifdef __INT56_C_SUFFIX__
#  define INT56_C(v) __int_c(v, __INT56_C_SUFFIX__)
#  define UINT56_C(v) __uint_c(v, __INT56_C_SUFFIX__)
#  define __int32_c_suffix __INT56_C_SUFFIX__
#  define __int16_c_suffix __INT56_C_SUFFIX__
#  define __int8_c_suffix  __INT56_C_SUFFIX__
# else
# 331 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
#  define INT56_C(v) v
#  define UINT56_C(v) v ## U
#  undef __int32_c_suffix
#  undef __int16_c_suffix
#  undef  __int8_c_suffix
# endif /* __INT56_C_SUFFIX__ */
# 337 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
#endif /* __INT56_TYPE__ */
# 338 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"


#ifdef __INT48_TYPE__
# ifdef __INT48_C_SUFFIX__
#  define INT48_C(v) __int_c(v, __INT48_C_SUFFIX__)
#  define UINT48_C(v) __uint_c(v, __INT48_C_SUFFIX__)
#  define __int32_c_suffix __INT48_C_SUFFIX__
#  define __int16_c_suffix __INT48_C_SUFFIX__
#  define __int8_c_suffix  __INT48_C_SUFFIX__
# else
# 348 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
#  define INT48_C(v) v
#  define UINT48_C(v) v ## U
#  undef __int32_c_suffix
#  undef __int16_c_suffix
#  undef  __int8_c_suffix
# endif /* __INT48_C_SUFFIX__ */
# 354 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
#endif /* __INT48_TYPE__ */
# 355 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"


#ifdef __INT40_TYPE__
# ifdef __INT40_C_SUFFIX__
#  define INT40_C(v) __int_c(v, __INT40_C_SUFFIX__)
#  define UINT40_C(v) __uint_c(v, __INT40_C_SUFFIX__)
#  define __int32_c_suffix __INT40_C_SUFFIX__
#  define __int16_c_suffix __INT40_C_SUFFIX__
#  define __int8_c_suffix  __INT40_C_SUFFIX__
# else
# 365 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
#  define INT40_C(v) v
#  define UINT40_C(v) v ## U
#  undef __int32_c_suffix
#  undef __int16_c_suffix
#  undef  __int8_c_suffix
# endif /* __INT40_C_SUFFIX__ */
# 371 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
#endif /* __INT40_TYPE__ */
# 372 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"


#ifdef __INT32_TYPE__
# ifdef __INT32_C_SUFFIX__
#  define __int32_c_suffix __INT32_C_SUFFIX__
#  define __int16_c_suffix __INT32_C_SUFFIX__
#  define __int8_c_suffix  __INT32_C_SUFFIX__
#else
# 380 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
#  undef __int32_c_suffix
#  undef __int16_c_suffix
#  undef  __int8_c_suffix
# endif /* __INT32_C_SUFFIX__ */
# 384 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
#endif /* __INT32_TYPE__ */
# 385 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"

#ifdef __int_least32_t
# ifdef __int32_c_suffix
#  define INT32_C(v) __int_c(v, __int32_c_suffix)
#  define UINT32_C(v) __uint_c(v, __int32_c_suffix)
# else
# 391 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
#  define INT32_C(v) v
#  define UINT32_C(v) v ## U
# endif /* __int32_c_suffix */
# 394 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
#endif /* __int_least32_t */
# 395 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"


#ifdef __INT24_TYPE__
# ifdef __INT24_C_SUFFIX__
#  define INT24_C(v) __int_c(v, __INT24_C_SUFFIX__)
#  define UINT24_C(v) __uint_c(v, __INT24_C_SUFFIX__)
#  define __int16_c_suffix __INT24_C_SUFFIX__
#  define __int8_c_suffix  __INT24_C_SUFFIX__
# else
# 404 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
#  define INT24_C(v) v
#  define UINT24_C(v) v ## U
#  undef __int16_c_suffix
#  undef  __int8_c_suffix
# endif /* __INT24_C_SUFFIX__ */
# 409 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
#endif /* __INT24_TYPE__ */
# 410 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"


#ifdef __INT16_TYPE__
# ifdef __INT16_C_SUFFIX__
#  define __int16_c_suffix __INT16_C_SUFFIX__
#  define __int8_c_suffix  __INT16_C_SUFFIX__
#else
# 417 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
#  undef __int16_c_suffix
#  undef  __int8_c_suffix
# endif /* __INT16_C_SUFFIX__ */
# 420 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
#endif /* __INT16_TYPE__ */
# 421 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"

#ifdef __int_least16_t
# ifdef __int16_c_suffix
#  define INT16_C(v) __int_c(v, __int16_c_suffix)
#  define UINT16_C(v) __uint_c(v, __int16_c_suffix)
# else
# 427 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
#  define INT16_C(v) v
#  define UINT16_C(v) v ## U
# endif /* __int16_c_suffix */
# 430 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
#endif /* __int_least16_t */
# 431 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"


#ifdef __INT8_TYPE__
# ifdef __INT8_C_SUFFIX__
#  define __int8_c_suffix __INT8_C_SUFFIX__
#else
# 437 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
#  undef  __int8_c_suffix
# endif /* __INT8_C_SUFFIX__ */
# 439 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
#endif /* __INT8_TYPE__ */
# 440 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"

#ifdef __int_least8_t
# ifdef __int8_c_suffix
#  define INT8_C(v) __int_c(v, __int8_c_suffix)
#  define UINT8_C(v) __uint_c(v, __int8_c_suffix)
# else
# 446 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
#  define INT8_C(v) v
#  define UINT8_C(v) v ## U
# endif /* __int8_c_suffix */
# 449 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
#endif /* __int_least8_t */
# 450 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"


/* C99 7.18.2.1 Limits of exact-width integer types.
 * C99 7.18.2.2 Limits of minimum-width integer types.
 * C99 7.18.2.3 Limits of fastest minimum-width integer types.
 *
 * The presence of limit macros are completely optional in C99.  This
 * implementation defines limits for all of the types (exact- and
 * minimum-width) that it defines above, using the limits of the minimum-width
 * type for any types that do not have exact-width representations.
 *
 * As in the type definitions, this section takes an approach of
 * successive-shrinking to determine which limits to use for the standard (8,
 * 16, 32, 64) bit widths when they don't have exact representations. It is
 * therefore important that the definitions be kept in order of decending
 * widths.
 *
 * Note that C++ should not check __STDC_LIMIT_MACROS here, contrary to the
 * claims of the C standard (see C++ 18.3.1p2, [cstdint.syn]).
 */

#ifdef __INT64_TYPE__
# define INT64_MAX           INT64_C( 9223372036854775807)
# define INT64_MIN         (-INT64_C( 9223372036854775807)-1)
# define UINT64_MAX         UINT64_C(18446744073709551615)
# define __INT_LEAST64_MIN   INT64_MIN
# define __INT_LEAST64_MAX   INT64_MAX
# define __UINT_LEAST64_MAX UINT64_MAX
# define __INT_LEAST32_MIN   INT64_MIN
# define __INT_LEAST32_MAX   INT64_MAX
# define __UINT_LEAST32_MAX UINT64_MAX
# define __INT_LEAST16_MIN   INT64_MIN
# define __INT_LEAST16_MAX   INT64_MAX
# define __UINT_LEAST16_MAX UINT64_MAX
# define __INT_LEAST8_MIN    INT64_MIN
# define __INT_LEAST8_MAX    INT64_MAX
# define __UINT_LEAST8_MAX  UINT64_MAX
#endif /* __INT64_TYPE__ */
# 488 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"

#ifdef __INT_LEAST64_MIN
# define INT_LEAST64_MIN   __INT_LEAST64_MIN
# define INT_LEAST64_MAX   __INT_LEAST64_MAX
# define UINT_LEAST64_MAX __UINT_LEAST64_MAX
# define INT_FAST64_MIN    __INT_LEAST64_MIN
# define INT_FAST64_MAX    __INT_LEAST64_MAX
# define UINT_FAST64_MAX  __UINT_LEAST64_MAX
#endif /* __INT_LEAST64_MIN */
# 497 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"


#ifdef __INT56_TYPE__
# define INT56_MAX           INT56_C(36028797018963967)
# define INT56_MIN         (-INT56_C(36028797018963967)-1)
# define UINT56_MAX         UINT56_C(72057594037927935)
# define INT_LEAST56_MIN     INT56_MIN
# define INT_LEAST56_MAX     INT56_MAX
# define UINT_LEAST56_MAX   UINT56_MAX
# define INT_FAST56_MIN      INT56_MIN
# define INT_FAST56_MAX      INT56_MAX
# define UINT_FAST56_MAX    UINT56_MAX
# define __INT_LEAST32_MIN   INT56_MIN
# define __INT_LEAST32_MAX   INT56_MAX
# define __UINT_LEAST32_MAX UINT56_MAX
# define __INT_LEAST16_MIN   INT56_MIN
# define __INT_LEAST16_MAX   INT56_MAX
# define __UINT_LEAST16_MAX UINT56_MAX
# define __INT_LEAST8_MIN    INT56_MIN
# define __INT_LEAST8_MAX    INT56_MAX
# define __UINT_LEAST8_MAX  UINT56_MAX
#endif /* __INT56_TYPE__ */
# 519 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"


#ifdef __INT48_TYPE__
# define INT48_MAX           INT48_C(140737488355327)
# define INT48_MIN         (-INT48_C(140737488355327)-1)
# define UINT48_MAX         UINT48_C(281474976710655)
# define INT_LEAST48_MIN     INT48_MIN
# define INT_LEAST48_MAX     INT48_MAX
# define UINT_LEAST48_MAX   UINT48_MAX
# define INT_FAST48_MIN      INT48_MIN
# define INT_FAST48_MAX      INT48_MAX
# define UINT_FAST48_MAX    UINT48_MAX
# define __INT_LEAST32_MIN   INT48_MIN
# define __INT_LEAST32_MAX   INT48_MAX
# define __UINT_LEAST32_MAX UINT48_MAX
# define __INT_LEAST16_MIN   INT48_MIN
# define __INT_LEAST16_MAX   INT48_MAX
# define __UINT_LEAST16_MAX UINT48_MAX
# define __INT_LEAST8_MIN    INT48_MIN
# define __INT_LEAST8_MAX    INT48_MAX
# define __UINT_LEAST8_MAX  UINT48_MAX
#endif /* __INT48_TYPE__ */
# 541 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"


#ifdef __INT40_TYPE__
# define INT40_MAX           INT40_C(549755813887)
# define INT40_MIN         (-INT40_C(549755813887)-1)
# define UINT40_MAX         UINT40_C(1099511627775)
# define INT_LEAST40_MIN     INT40_MIN
# define INT_LEAST40_MAX     INT40_MAX
# define UINT_LEAST40_MAX   UINT40_MAX
# define INT_FAST40_MIN      INT40_MIN
# define INT_FAST40_MAX      INT40_MAX
# define UINT_FAST40_MAX    UINT40_MAX
# define __INT_LEAST32_MIN   INT40_MIN
# define __INT_LEAST32_MAX   INT40_MAX
# define __UINT_LEAST32_MAX UINT40_MAX
# define __INT_LEAST16_MIN   INT40_MIN
# define __INT_LEAST16_MAX   INT40_MAX
# define __UINT_LEAST16_MAX UINT40_MAX
# define __INT_LEAST8_MIN    INT40_MIN
# define __INT_LEAST8_MAX    INT40_MAX
# define __UINT_LEAST8_MAX  UINT40_MAX
#endif /* __INT40_TYPE__ */
# 563 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"


#ifdef __INT32_TYPE__
# define INT32_MAX           INT32_C(2147483647)
# define INT32_MIN         (-INT32_C(2147483647)-1)
# define UINT32_MAX         UINT32_C(4294967295)
# define __INT_LEAST32_MIN   INT32_MIN
# define __INT_LEAST32_MAX   INT32_MAX
# define __UINT_LEAST32_MAX UINT32_MAX
# define __INT_LEAST16_MIN   INT32_MIN
# define __INT_LEAST16_MAX   INT32_MAX
# define __UINT_LEAST16_MAX UINT32_MAX
# define __INT_LEAST8_MIN    INT32_MIN
# define __INT_LEAST8_MAX    INT32_MAX
# define __UINT_LEAST8_MAX  UINT32_MAX
#endif /* __INT32_TYPE__ */
# 579 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"

#ifdef __INT_LEAST32_MIN
# define INT_LEAST32_MIN   __INT_LEAST32_MIN
# define INT_LEAST32_MAX   __INT_LEAST32_MAX
# define UINT_LEAST32_MAX __UINT_LEAST32_MAX
# define INT_FAST32_MIN    __INT_LEAST32_MIN
# define INT_FAST32_MAX    __INT_LEAST32_MAX
# define UINT_FAST32_MAX  __UINT_LEAST32_MAX
#endif /* __INT_LEAST32_MIN */
# 588 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"


#ifdef __INT24_TYPE__
# define INT24_MAX           INT24_C(8388607)
# define INT24_MIN         (-INT24_C(8388607)-1)
# define UINT24_MAX         UINT24_C(16777215)
# define INT_LEAST24_MIN     INT24_MIN
# define INT_LEAST24_MAX     INT24_MAX
# define UINT_LEAST24_MAX   UINT24_MAX
# define INT_FAST24_MIN      INT24_MIN
# define INT_FAST24_MAX      INT24_MAX
# define UINT_FAST24_MAX    UINT24_MAX
# define __INT_LEAST16_MIN   INT24_MIN
# define __INT_LEAST16_MAX   INT24_MAX
# define __UINT_LEAST16_MAX UINT24_MAX
# define __INT_LEAST8_MIN    INT24_MIN
# define __INT_LEAST8_MAX    INT24_MAX
# define __UINT_LEAST8_MAX  UINT24_MAX
#endif /* __INT24_TYPE__ */
# 607 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"


#ifdef __INT16_TYPE__
#define INT16_MAX            INT16_C(32767)
#define INT16_MIN          (-INT16_C(32767)-1)
#define UINT16_MAX          UINT16_C(65535)
# define __INT_LEAST16_MIN   INT16_MIN
# define __INT_LEAST16_MAX   INT16_MAX
# define __UINT_LEAST16_MAX UINT16_MAX
# define __INT_LEAST8_MIN    INT16_MIN
# define __INT_LEAST8_MAX    INT16_MAX
# define __UINT_LEAST8_MAX  UINT16_MAX
#endif /* __INT16_TYPE__ */
# 620 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"

#ifdef __INT_LEAST16_MIN
# define INT_LEAST16_MIN   __INT_LEAST16_MIN
# define INT_LEAST16_MAX   __INT_LEAST16_MAX
# define UINT_LEAST16_MAX __UINT_LEAST16_MAX
# define INT_FAST16_MIN    __INT_LEAST16_MIN
# define INT_FAST16_MAX    __INT_LEAST16_MAX
# define UINT_FAST16_MAX  __UINT_LEAST16_MAX
#endif /* __INT_LEAST16_MIN */
# 629 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"


#ifdef __INT8_TYPE__
# define INT8_MAX            INT8_C(127)
# define INT8_MIN          (-INT8_C(127)-1)
# define UINT8_MAX          UINT8_C(255)
# define __INT_LEAST8_MIN    INT8_MIN
# define __INT_LEAST8_MAX    INT8_MAX
# define __UINT_LEAST8_MAX  UINT8_MAX
#endif /* __INT8_TYPE__ */
# 639 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"

#ifdef __INT_LEAST8_MIN
# define INT_LEAST8_MIN   __INT_LEAST8_MIN
# define INT_LEAST8_MAX   __INT_LEAST8_MAX
# define UINT_LEAST8_MAX __UINT_LEAST8_MAX
# define INT_FAST8_MIN    __INT_LEAST8_MIN
# define INT_FAST8_MAX    __INT_LEAST8_MAX
# define UINT_FAST8_MAX  __UINT_LEAST8_MAX
#endif /* __INT_LEAST8_MIN */
# 648 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"

/* Some utility macros */
#define  __INTN_MIN(n)  __stdint_join3( INT, n, _MIN)
#define  __INTN_MAX(n)  __stdint_join3( INT, n, _MAX)
#define __UINTN_MAX(n)  __stdint_join3(UINT, n, _MAX)
#define  __INTN_C(n, v) __stdint_join3( INT, n, _C(v))
#define __UINTN_C(n, v) __stdint_join3(UINT, n, _C(v))

/* C99 7.18.2.4 Limits of integer types capable of holding object pointers. */
/* C99 7.18.3 Limits of other integer types. */

#define  INTPTR_MIN  (-__INTPTR_MAX__-1)
#define  INTPTR_MAX    __INTPTR_MAX__
#define UINTPTR_MAX   __UINTPTR_MAX__
#define PTRDIFF_MIN (-__PTRDIFF_MAX__-1)
#define PTRDIFF_MAX   __PTRDIFF_MAX__
#define    SIZE_MAX      __SIZE_MAX__

/* ISO9899:2011 7.20 (C11 Annex K): Define RSIZE_MAX if __STDC_WANT_LIB_EXT1__
 * is enabled. */
#if defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1
#define   RSIZE_MAX            (SIZE_MAX >> 1)
#endif
# 671 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"

/* C99 7.18.2.5 Limits of greatest-width integer types. */
#define  INTMAX_MIN (-__INTMAX_MAX__-1)
#define  INTMAX_MAX   __INTMAX_MAX__
#define UINTMAX_MAX  __UINTMAX_MAX__

/* C99 7.18.3 Limits of other integer types. */
#define SIG_ATOMIC_MIN __INTN_MIN(__SIG_ATOMIC_WIDTH__)
#define SIG_ATOMIC_MAX __INTN_MAX(__SIG_ATOMIC_WIDTH__)
#ifdef __WINT_UNSIGNED__
# define WINT_MIN       __UINTN_C(__WINT_WIDTH__, 0)
# define WINT_MAX       __UINTN_MAX(__WINT_WIDTH__)
#else
# 684 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
# define WINT_MIN       __INTN_MIN(__WINT_WIDTH__)
# define WINT_MAX       __INTN_MAX(__WINT_WIDTH__)
#endif
# 687 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"

#ifndef WCHAR_MAX
# define WCHAR_MAX __WCHAR_MAX__
#endif
# 691 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
#ifndef WCHAR_MIN
# if __WCHAR_MAX__ == __INTN_MAX(__WCHAR_WIDTH__)
#  define WCHAR_MIN __INTN_MIN(__WCHAR_WIDTH__)
# else
# 695 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
#  define WCHAR_MIN __UINTN_C(__WCHAR_WIDTH__, 0)
# endif
# 697 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
#endif
# 698 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"

/* 7.18.4.2 Macros for greatest-width integer constants. */
#define  INTMAX_C(v) __int_c(v,  __INTMAX_C_SUFFIX__)
#define UINTMAX_C(v) __int_c(v, __UINTMAX_C_SUFFIX__)

#endif /* __STDC_HOSTED__ */
# 704 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
#endif /* __CLANG_STDINT_H */
# 705 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/stdint.h"
# 85 "../../../../../newlib/libc/stdio/vfscanf.c" 2
#if 0 /* expanded by -frewrite-includes */
#include <limits.h>
#endif /* expanded by -frewrite-includes */
# 85 "../../../../../newlib/libc/stdio/vfscanf.c"
# 1 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/limits.h" 1
/*===---- limits.h - Standard header for integer sizes --------------------===*\
 *
 * Copyright (c) 2009 Chris Lattner
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
\*===----------------------------------------------------------------------===*/

#ifndef __CLANG_LIMITS_H
#define __CLANG_LIMITS_H

/* The system's limits.h may, in turn, try to #include_next GCC's limits.h.
   Avert this #include_next madness. */
#if defined __GNUC__ && !defined _GCC_LIMITS_H_
#define _GCC_LIMITS_H_
#endif
# 33 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/limits.h"

/* System headers include a number of constants from POSIX in <limits.h>.
   Include it if we're hosted. */
#if __STDC_HOSTED__ && (1)/*__has_include_next(<limits.h>)*/
#if 0 /* expanded by -frewrite-includes */
#include_next <limits.h>
#endif /* expanded by -frewrite-includes */
# 37 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/limits.h"
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/limits.h" 1 3
#ifndef _LIBC_LIMITS_H_
# define _LIBC_LIMITS_H_	1

#if 0 /* expanded by -frewrite-includes */
#include <newlib.h>
#endif /* expanded by -frewrite-includes */
# 4 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/limits.h" 3
# 5 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/limits.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/cdefs.h>
#endif /* expanded by -frewrite-includes */
# 5 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/limits.h" 3
# 6 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/limits.h" 3

# ifdef _MB_LEN_MAX
#  define MB_LEN_MAX	_MB_LEN_MAX
# else
# 10 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/limits.h" 3
#  define MB_LEN_MAX    1
# endif
# 12 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/limits.h" 3

/* Maximum number of positional arguments, if _WANT_IO_POS_ARGS.  */
# ifndef NL_ARGMAX
#  define NL_ARGMAX 32
# endif
# 17 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/limits.h" 3

/* if do not have #include_next support, then we
   have to define the limits here. */
# if !defined __GNUC__ || __GNUC__ < 2

#  ifndef _LIMITS_H
#   define _LIMITS_H	1

#if 0 /* expanded by -frewrite-includes */
#   include <sys/config.h>
#endif /* expanded by -frewrite-includes */
# 25 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/limits.h" 3
# 26 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/limits.h" 3

/* Number of bits in a `char'.  */
#   undef CHAR_BIT
#   define CHAR_BIT 8

/* Minimum and maximum values a `signed char' can hold.  */
#   undef SCHAR_MIN
#   define SCHAR_MIN (-128)
#   undef SCHAR_MAX
#   define SCHAR_MAX 127

/* Maximum value an `unsigned char' can hold.  (Minimum is 0).  */
#   undef UCHAR_MAX
#   define UCHAR_MAX 255

/* Minimum and maximum values a `char' can hold.  */
#   ifdef __CHAR_UNSIGNED__
#    undef CHAR_MIN
#    define CHAR_MIN 0
#    undef CHAR_MAX
#    define CHAR_MAX 255
#   else
# 48 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/limits.h" 3
#    undef CHAR_MIN
#    define CHAR_MIN (-128)
#    undef CHAR_MAX
#    define CHAR_MAX 127
#   endif
# 53 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/limits.h" 3

/* Minimum and maximum values a `signed short int' can hold.  */
#   undef SHRT_MIN
/* For the sake of 16 bit hosts, we may not use -32768 */
#   define SHRT_MIN (-32767-1)
#   undef SHRT_MAX
#   define SHRT_MAX 32767

/* Maximum value an `unsigned short int' can hold.  (Minimum is 0).  */
#   undef USHRT_MAX
#   define USHRT_MAX 65535

/* Minimum and maximum values a `signed int' can hold.  */
#   ifndef __INT_MAX__
#    define __INT_MAX__ 2147483647
#   endif
# 69 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/limits.h" 3
#   undef INT_MIN
#   define INT_MIN (-INT_MAX-1)
#   undef INT_MAX
#   define INT_MAX __INT_MAX__

/* Maximum value an `unsigned int' can hold.  (Minimum is 0).  */
#   undef UINT_MAX
#   define UINT_MAX (INT_MAX * 2U + 1)

/* Minimum and maximum values a `signed long int' can hold.
   (Same as `int').  */
#   ifndef __LONG_MAX__
#    if defined (__alpha__) || (defined (__sparc__) && defined(__arch64__)) || defined (__sparcv9)
#     define __LONG_MAX__ 9223372036854775807L
#    else
# 84 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/limits.h" 3
#     define __LONG_MAX__ 2147483647L
#    endif /* __alpha__ || sparc64 */
# 86 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/limits.h" 3
#   endif
# 87 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/limits.h" 3
#   undef LONG_MIN
#   define LONG_MIN (-LONG_MAX-1)
#   undef LONG_MAX
#   define LONG_MAX __LONG_MAX__

/* Maximum value an `unsigned long int' can hold.  (Minimum is 0).  */
#   undef ULONG_MAX
#   define ULONG_MAX (LONG_MAX * 2UL + 1)

#   ifndef __LONG_LONG_MAX__
#    define __LONG_LONG_MAX__ 9223372036854775807LL
#   endif
# 99 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/limits.h" 3

#   if __ISO_C_VISIBLE >= 1999
/* Minimum and maximum values a `signed long long int' can hold.  */
#    undef LLONG_MIN
#    define LLONG_MIN (-LLONG_MAX-1)
#    undef LLONG_MAX
#    define LLONG_MAX __LONG_LONG_MAX__

/* Maximum value an `unsigned long long int' can hold.  (Minimum is 0).  */
#    undef ULLONG_MAX
#    define ULLONG_MAX (LLONG_MAX * 2ULL + 1)
#   endif
# 111 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/limits.h" 3

#  if __GNU_VISIBLE
/* Minimum and maximum values a `signed long long int' can hold.  */
#    undef LONG_LONG_MIN
#    define LONG_LONG_MIN (-LONG_LONG_MAX-1)
#    undef LONG_LONG_MAX
#    define LONG_LONG_MAX __LONG_LONG_MAX__

/* Maximum value an `unsigned long long int' can hold.  (Minimum is 0).  */
#    undef ULONG_LONG_MAX
#    define ULONG_LONG_MAX (LONG_LONG_MAX * 2ULL + 1)
#   endif
# 123 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/limits.h" 3

#  endif /* _LIMITS_H  */
# 125 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/limits.h" 3
# endif	 /* GCC 2.  */
# 126 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/limits.h" 3

#endif	 /* !_LIBC_LIMITS_H_ */
# 128 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/limits.h" 3

#if defined __GNUC__ && !defined _GCC_LIMITS_H_
/* `_GCC_LIMITS_H_' is what GCC's file defines.  */
#if 0 /* expanded by -frewrite-includes */
# include_next <limits.h>
#endif /* expanded by -frewrite-includes */
# 131 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/limits.h" 3
# 132 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/limits.h" 3
#endif /* __GNUC__ && !_GCC_LIMITS_H_ */
# 133 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/limits.h" 3

#ifndef _POSIX2_RE_DUP_MAX
/* The maximum number of repeated occurrences of a regular expression
 *    permitted when using the interval notation `\{M,N\}'.  */
#define _POSIX2_RE_DUP_MAX              255
#endif /* _POSIX2_RE_DUP_MAX  */
# 139 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/limits.h" 3

#ifndef ARG_MAX
#define ARG_MAX		4096
#endif
# 143 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/limits.h" 3

#ifndef PATH_MAX
#define PATH_MAX	4096
#endif
# 147 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/limits.h" 3
# 38 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/limits.h" 2
#endif
# 39 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/limits.h"

/* Many system headers try to "help us out" by defining these.  No really, we
   know how big each datatype is. */
#undef  SCHAR_MIN
#undef  SCHAR_MAX
#undef  UCHAR_MAX
#undef  SHRT_MIN
#undef  SHRT_MAX
#undef  USHRT_MAX
#undef  INT_MIN
#undef  INT_MAX
#undef  UINT_MAX
#undef  LONG_MIN
#undef  LONG_MAX
#undef  ULONG_MAX

#undef  CHAR_BIT
#undef  CHAR_MIN
#undef  CHAR_MAX

/* C90/99 5.2.4.2.1 */
#define SCHAR_MAX __SCHAR_MAX__
#define SHRT_MAX  __SHRT_MAX__
#define INT_MAX   __INT_MAX__
#define LONG_MAX  __LONG_MAX__

#define SCHAR_MIN (-__SCHAR_MAX__-1)
#define SHRT_MIN  (-__SHRT_MAX__ -1)
#define INT_MIN   (-__INT_MAX__  -1)
#define LONG_MIN  (-__LONG_MAX__ -1L)

#define UCHAR_MAX (__SCHAR_MAX__*2  +1)
#define USHRT_MAX (__SHRT_MAX__ *2  +1)
#define UINT_MAX  (__INT_MAX__  *2U +1U)
#define ULONG_MAX (__LONG_MAX__ *2UL+1UL)

#ifndef MB_LEN_MAX
#define MB_LEN_MAX 1
#endif
# 78 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/limits.h"

#define CHAR_BIT  __CHAR_BIT__

#ifdef __CHAR_UNSIGNED__  /* -funsigned-char */
#define CHAR_MIN 0
#define CHAR_MAX UCHAR_MAX
#else
# 85 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/limits.h"
#define CHAR_MIN SCHAR_MIN
#define CHAR_MAX __SCHAR_MAX__
#endif
# 88 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/limits.h"

/* C99 5.2.4.2.1: Added long long.
   C++11 18.3.3.2: same contents as the Standard C Library header <limits.h>.
 */
#if __STDC_VERSION__ >= 199901L || __cplusplus >= 201103L

#undef  LLONG_MIN
#undef  LLONG_MAX
#undef  ULLONG_MAX

#define LLONG_MAX  __LONG_LONG_MAX__
#define LLONG_MIN  (-__LONG_LONG_MAX__-1LL)
#define ULLONG_MAX (__LONG_LONG_MAX__*2ULL+1ULL)
#endif
# 102 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/limits.h"

/* LONG_LONG_MIN/LONG_LONG_MAX/ULONG_LONG_MAX are a GNU extension.  It's too bad
   that we don't have something like #pragma poison that could be used to
   deprecate a macro - the code should just use LLONG_MAX and friends.
 */
#if defined(__GNU_LIBRARY__) ? defined(__USE_GNU) : !defined(__STRICT_ANSI__)

#undef   LONG_LONG_MIN
#undef   LONG_LONG_MAX
#undef   ULONG_LONG_MAX

#define LONG_LONG_MAX  __LONG_LONG_MAX__
#define LONG_LONG_MIN  (-__LONG_LONG_MAX__-1LL)
#define ULONG_LONG_MAX (__LONG_LONG_MAX__*2ULL+1ULL)
#endif
# 117 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/limits.h"

#endif /* __CLANG_LIMITS_H */
# 119 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/limits.h"
# 86 "../../../../../newlib/libc/stdio/vfscanf.c" 2
#if 0 /* expanded by -frewrite-includes */
#include <wchar.h>
#endif /* expanded by -frewrite-includes */
# 86 "../../../../../newlib/libc/stdio/vfscanf.c"
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 1 3
#ifndef _WCHAR_H_
#define _WCHAR_H_

#if 0 /* expanded by -frewrite-includes */
#include <_ansi.h>
#endif /* expanded by -frewrite-includes */
# 4 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
# 5 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3

#if 0 /* expanded by -frewrite-includes */
#include <sys/reent.h>
#endif /* expanded by -frewrite-includes */
# 6 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
# 7 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3

#define __need_size_t
#define __need_wchar_t
#define __need_wint_t
#define __need_NULL
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 12 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
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
# 13 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 2 3

/* For _mbstate_t definition. */
#if 0 /* expanded by -frewrite-includes */
#include <sys/_types.h>
#endif /* expanded by -frewrite-includes */
# 15 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
# 16 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/cdefs.h>
#endif /* expanded by -frewrite-includes */
# 16 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
# 17 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
/* For __STDC_ISO_10646__ */
#if 0 /* expanded by -frewrite-includes */
#include <sys/features.h>
#endif /* expanded by -frewrite-includes */
# 18 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
# 19 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3

/* typedef only __gnuc_va_list, used throughout the header */
#define __need___va_list
#if 0 /* expanded by -frewrite-includes */
#include <stdarg.h>
#endif /* expanded by -frewrite-includes */
# 22 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
# 23 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3

/* typedef va_list only when required */
#if __POSIX_VISIBLE >= 200809 || __XSI_VISIBLE
#ifdef __GNUC__
#ifndef _VA_LIST_DEFINED
typedef __gnuc_va_list va_list;
#define _VA_LIST_DEFINED
#endif
# 31 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
#else /* !__GNUC__ */
# 32 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <stdarg.h>
#endif /* expanded by -frewrite-includes */
# 32 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
# 33 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
#endif
# 34 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
#endif /* __POSIX_VISIBLE >= 200809 || __XSI_VISIBLE */
# 35 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3

#if __XSI_VISIBLE /* && __XSI_VISIBLE < 800 */ && !__GNU_VISIBLE
#if 0 /* expanded by -frewrite-includes */
#include <wctype.h>
#endif /* expanded by -frewrite-includes */
# 37 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
# 38 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
#endif
# 39 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3

#ifndef WEOF
# define WEOF ((wint_t)-1)
#endif
# 43 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3

/* This must match definition in <stdint.h> */
#ifndef WCHAR_MIN
#ifdef __WCHAR_MIN__
#define WCHAR_MIN __WCHAR_MIN__
#elif defined(__WCHAR_UNSIGNED__) || (L'\0' - 1 > 0)
# 49 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
#define WCHAR_MIN (0 + L'\0')
#else
# 51 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
#define WCHAR_MIN (-0x7fffffff - 1 + L'\0')
#endif
# 53 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
#endif
# 54 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3

/* This must match definition in <stdint.h> */
#ifndef WCHAR_MAX
#ifdef __WCHAR_MAX__
#define WCHAR_MAX __WCHAR_MAX__
#elif defined(__WCHAR_UNSIGNED__) || (L'\0' - 1 > 0)
# 60 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
#define WCHAR_MAX (0xffffffffu + L'\0')
#else
# 62 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
#define WCHAR_MAX (0x7fffffff + L'\0')
#endif
# 64 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
#endif
# 65 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3

#if __POSIX_VISIBLE >= 200809
#if 0 /* expanded by -frewrite-includes */
#include <xlocale.h>
#endif /* expanded by -frewrite-includes */
# 67 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
# 68 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
#endif
# 69 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3

_BEGIN_STD_C

#if __POSIX_VISIBLE >= 200809 || _XSI_VISIBLE
/* As in stdio.h, <sys/reent.h> defines __FILE. */
#if !defined(__FILE_defined)
typedef __FILE FILE;
# define __FILE_defined
#endif
# 78 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
#endif
# 79 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3

/* As required by POSIX.1-2008, declare tm as incomplete type.
   The actual definition is in time.h. */
struct tm;

#ifndef _MBSTATE_T
#define _MBSTATE_T
typedef _mbstate_t mbstate_t;
#endif /* _MBSTATE_T */
# 88 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3

wint_t	btowc (int);
int	wctob (wint_t);
size_t	mbrlen (const char *__restrict, size_t, mbstate_t *__restrict);
size_t	mbrtowc (wchar_t *__restrict, const char *__restrict, size_t,
						mbstate_t *__restrict);
size_t	_mbrtowc_r (struct _reent *, wchar_t * , const char * , 
			size_t, mbstate_t *);
int	mbsinit (const mbstate_t *);
#if __POSIX_VISIBLE >= 200809
size_t	mbsnrtowcs (wchar_t *__restrict, const char **__restrict,
				size_t, size_t, mbstate_t *__restrict);
#endif
# 101 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
size_t	_mbsnrtowcs_r (struct _reent *, wchar_t * , const char ** ,
			size_t, size_t, mbstate_t *);
size_t	mbsrtowcs (wchar_t *__restrict, const char **__restrict, size_t,
				mbstate_t *__restrict);
size_t	_mbsrtowcs_r (struct _reent *, wchar_t * , const char ** , size_t, mbstate_t *);
size_t	wcrtomb (char *__restrict, wchar_t, mbstate_t *__restrict);
size_t	_wcrtomb_r (struct _reent *, char * , wchar_t, mbstate_t *);
#if __POSIX_VISIBLE >= 200809
size_t	wcsnrtombs (char *__restrict, const wchar_t **__restrict,
				size_t, size_t, mbstate_t *__restrict);
#endif
# 112 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
size_t	_wcsnrtombs_r (struct _reent *, char * , const wchar_t ** , 
			size_t, size_t, mbstate_t *);
size_t	wcsrtombs (char *__restrict, const wchar_t **__restrict,
				size_t, mbstate_t *__restrict);
size_t	_wcsrtombs_r (struct _reent *, char * , const wchar_t ** , 
			size_t, mbstate_t *);
#if __POSIX_VISIBLE >= 200809
int	wcscasecmp (const wchar_t *, const wchar_t *);
#endif
# 121 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
wchar_t	*wcscat (wchar_t *__restrict, const wchar_t *__restrict);
wchar_t	*wcschr (const wchar_t *, wchar_t);
int	wcscmp (const wchar_t *, const wchar_t *);
int	wcscoll (const wchar_t *, const wchar_t *);
wchar_t	*wcscpy (wchar_t *__restrict, const wchar_t *__restrict);
#if __POSIX_VISIBLE >= 200809
wchar_t	*wcpcpy (wchar_t *__restrict,
				 const wchar_t *__restrict);
wchar_t	*wcsdup (const wchar_t *);
#endif
# 131 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
wchar_t	*_wcsdup_r (struct _reent *, const wchar_t * );
size_t	wcscspn (const wchar_t *, const wchar_t *);
size_t  wcsftime (wchar_t *__restrict, size_t,
				const wchar_t *__restrict, const struct tm *__restrict);
#if __GNU_VISIBLE
size_t  wcsftime_l (wchar_t *__restrict, size_t, const wchar_t *__restrict,
		    const struct tm *__restrict, locale_t);
#endif
# 139 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
size_t	wcslcat (wchar_t *, const wchar_t *, size_t);
size_t	wcslcpy (wchar_t *, const wchar_t *, size_t);
size_t	wcslen (const wchar_t *);
#if __POSIX_VISIBLE >= 200809
int	wcsncasecmp (const wchar_t *, const wchar_t *, size_t);
#endif
# 145 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
wchar_t	*wcsncat (wchar_t *__restrict,
				 const wchar_t *__restrict, size_t);
int	wcsncmp (const wchar_t *, const wchar_t *, size_t);
wchar_t	*wcsncpy (wchar_t *__restrict,
				 const wchar_t *__restrict, size_t);
#if __POSIX_VISIBLE >= 200809
wchar_t	*wcpncpy (wchar_t *__restrict,
				 const wchar_t *__restrict, size_t);
size_t	wcsnlen (const wchar_t *, size_t);
#endif
# 155 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
wchar_t	*wcspbrk (const wchar_t *, const wchar_t *);
wchar_t	*wcsrchr (const wchar_t *, wchar_t);
size_t	wcsspn (const wchar_t *, const wchar_t *);
wchar_t	*wcsstr (const wchar_t *__restrict,
				 const wchar_t *__restrict);
wchar_t	*wcstok (wchar_t *__restrict, const wchar_t *__restrict,
				 wchar_t **__restrict);
double wcstod (const wchar_t *__restrict, wchar_t **__restrict);
double _wcstod_r (struct _reent *, const wchar_t *, wchar_t **);
#if __ISO_C_VISIBLE >= 1999
float wcstof (const wchar_t *__restrict, wchar_t **__restrict);
#endif
# 167 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
float _wcstof_r (struct _reent *, const wchar_t *, wchar_t **);
#if __XSI_VISIBLE
int	wcswidth (const wchar_t *, size_t);
#endif
# 171 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
size_t	wcsxfrm (wchar_t *__restrict, const wchar_t *__restrict,
				size_t);
#if __POSIX_VISIBLE >= 200809
extern int wcscasecmp_l (const wchar_t *, const wchar_t *, locale_t);
extern int wcsncasecmp_l (const wchar_t *, const wchar_t *, size_t, locale_t);
extern int wcscoll_l (const wchar_t *, const wchar_t *, locale_t);
extern size_t wcsxfrm_l (wchar_t *__restrict, const wchar_t *__restrict, size_t,
			 locale_t);
#endif
# 180 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3

#if __XSI_VISIBLE
int	wcwidth (const wchar_t);
#endif
# 184 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
wchar_t	*wmemchr (const wchar_t *, wchar_t, size_t);
int	wmemcmp (const wchar_t *, const wchar_t *, size_t);
wchar_t	*wmemcpy (wchar_t *__restrict, const wchar_t *__restrict,
				 size_t);
wchar_t	*wmemmove (wchar_t *, const wchar_t *, size_t);
#if __GNU_VISIBLE
wchar_t	*wmempcpy (wchar_t *__restrict, const wchar_t *__restrict,
				 size_t);
#endif
# 193 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
wchar_t	*wmemset (wchar_t *, wchar_t, size_t);

long    wcstol (const wchar_t *__restrict, wchar_t **__restrict, int);
#if __ISO_C_VISIBLE >= 1999
long long wcstoll (const wchar_t *__restrict, wchar_t **__restrict,
				  int);
#endif
# 200 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
unsigned long wcstoul (const wchar_t *__restrict, wchar_t **__restrict,
					  int);
#if __ISO_C_VISIBLE >= 1999
unsigned long long wcstoull (const wchar_t *__restrict,
						   wchar_t **__restrict, int);
#endif
# 206 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
long    _wcstol_r (struct _reent *, const wchar_t *, wchar_t **, int);
long long _wcstoll_r (struct _reent *, const wchar_t *, wchar_t **, int);
unsigned long _wcstoul_r (struct _reent *, const wchar_t *, wchar_t **, int);
unsigned long long _wcstoull_r (struct _reent *, const wchar_t *, wchar_t **, int);
#if __ISO_C_VISIBLE >= 1999
long double wcstold (const wchar_t *, wchar_t **);
#endif
# 213 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3

#if __GNU_VISIBLE
long wcstol_l (const wchar_t *__restrict, wchar_t **__restrict, int, locale_t);
long long wcstoll_l (const wchar_t *__restrict, wchar_t **__restrict, int,
		     locale_t);
unsigned long wcstoul_l (const wchar_t *__restrict, wchar_t **__restrict, int,
			 locale_t);
unsigned long long wcstoull_l (const wchar_t *__restrict, wchar_t **__restrict,
			       int, locale_t);
double wcstod_l (const wchar_t *, wchar_t **, locale_t);
float wcstof_l (const wchar_t *, wchar_t **, locale_t);
long double wcstold_l (const wchar_t *, wchar_t **, locale_t);
#endif
# 226 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3

wint_t fgetwc (__FILE *);
wchar_t *fgetws (wchar_t *__restrict, int, __FILE *__restrict);
wint_t fputwc (wchar_t, __FILE *);
int fputws (const wchar_t *__restrict, __FILE *__restrict);
#if __ISO_C_VISIBLE >= 1999 || __XSI_VISIBLE >= 500
int fwide (__FILE *, int);
#endif
# 234 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
wint_t getwc (__FILE *);
wint_t getwchar (void);
wint_t putwc (wchar_t, __FILE *);
wint_t putwchar (wchar_t);
wint_t ungetwc (wint_t wc, __FILE *);

wint_t _fgetwc_r (struct _reent *, __FILE *);
wint_t _fgetwc_unlocked_r (struct _reent *, __FILE *);
wchar_t *_fgetws_r (struct _reent *, wchar_t *, int, __FILE *);
wchar_t *_fgetws_unlocked_r (struct _reent *, wchar_t *, int, __FILE *);
wint_t _fputwc_r (struct _reent *, wchar_t, __FILE *);
wint_t _fputwc_unlocked_r (struct _reent *, wchar_t, __FILE *);
int _fputws_r (struct _reent *, const wchar_t *, __FILE *);
int _fputws_unlocked_r (struct _reent *, const wchar_t *, __FILE *);
int _fwide_r (struct _reent *, __FILE *, int);
wint_t _getwc_r (struct _reent *, __FILE *);
wint_t _getwc_unlocked_r (struct _reent *, __FILE *);
wint_t _getwchar_r (struct _reent *ptr);
wint_t _getwchar_unlocked_r (struct _reent *ptr);
wint_t _putwc_r (struct _reent *, wchar_t, __FILE *);
wint_t _putwc_unlocked_r (struct _reent *, wchar_t, __FILE *);
wint_t _putwchar_r (struct _reent *, wchar_t);
wint_t _putwchar_unlocked_r (struct _reent *, wchar_t);
wint_t _ungetwc_r (struct _reent *, wint_t wc, __FILE *);

#if __GNU_VISIBLE
wint_t fgetwc_unlocked (__FILE *);
wchar_t *fgetws_unlocked (wchar_t *__restrict, int, __FILE *__restrict);
wint_t fputwc_unlocked (wchar_t, __FILE *);
int fputws_unlocked (const wchar_t *__restrict, __FILE *__restrict);
wint_t getwc_unlocked (__FILE *);
wint_t getwchar_unlocked (void);
wint_t putwc_unlocked (wchar_t, __FILE *);
wint_t putwchar_unlocked (wchar_t);
#endif
# 269 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3

#if __POSIX_VISIBLE >= 200809
__FILE *open_wmemstream (wchar_t **, size_t *);
#endif
# 273 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
__FILE *_open_wmemstream_r (struct _reent *, wchar_t **, size_t *);

#ifndef __VALIST
#ifdef __GNUC__
#define __VALIST __gnuc_va_list
#else
# 279 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
#define __VALIST char*
#endif
# 281 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
#endif
# 282 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3

#if __ISO_C_VISIBLE >= 1999 || __XSI_VISIBLE >= 500
int	fwprintf (__FILE *__restrict, const wchar_t *__restrict, ...);
int	swprintf (wchar_t *__restrict, size_t,
			const wchar_t *__restrict, ...);
int	vfwprintf (__FILE *__restrict, const wchar_t *__restrict,
			__VALIST);
int	vswprintf (wchar_t *__restrict, size_t,
			const wchar_t *__restrict, __VALIST);
int	vwprintf (const wchar_t *__restrict, __VALIST);
int	wprintf (const wchar_t *__restrict, ...);
#endif
# 294 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3

int	_fwprintf_r (struct _reent *, __FILE *, const wchar_t *, ...);
int	_swprintf_r (struct _reent *, wchar_t *, size_t, const wchar_t *, ...);
int	_vfwprintf_r (struct _reent *, __FILE *, const wchar_t *, __VALIST);
int	_vswprintf_r (struct _reent *, wchar_t *, size_t, const wchar_t *, __VALIST);
int	_vwprintf_r (struct _reent *, const wchar_t *, __VALIST);
int	_wprintf_r (struct _reent *, const wchar_t *, ...);

#if __ISO_C_VISIBLE >= 1999 || __XSI_VISIBLE >= 500
int	fwscanf (__FILE *__restrict, const wchar_t *__restrict, ...);
int	swscanf (const wchar_t *__restrict,
			const wchar_t *__restrict, ...);
int	vfwscanf (__FILE *__restrict, const wchar_t *__restrict,
			__VALIST);
int	vswscanf (const wchar_t *__restrict, const wchar_t *__restrict,
			__VALIST);
int	vwscanf (const wchar_t *__restrict, __VALIST);
int	wscanf (const wchar_t *__restrict, ...);
#endif
# 313 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3

int	_fwscanf_r (struct _reent *, __FILE *, const wchar_t *, ...);
int	_swscanf_r (struct _reent *, const wchar_t *, const wchar_t *, ...);
int	_vfwscanf_r (struct _reent *, __FILE *, const wchar_t *, __VALIST);
int	_vswscanf_r (struct _reent *, const wchar_t *, const wchar_t *, __VALIST);
int	_vwscanf_r (struct _reent *, const wchar_t *, __VALIST);
int	_wscanf_r (struct _reent *, const wchar_t *, ...);

#define getwc(fp)	fgetwc(fp)
#define putwc(wc,fp)	fputwc((wc), (fp))
#define getwchar()	fgetwc(_REENT->_stdin)
#define putwchar(wc)	fputwc((wc), _REENT->_stdout)

#if __GNU_VISIBLE
#define getwc_unlocked(fp)	fgetwc_unlocked(fp)
#define putwc_unlocked(wc,fp)	fputwc_unlocked((wc), (fp))
#define getwchar_unlocked()	fgetwc_unlocked(_REENT->_stdin)
#define putwchar_unlocked(wc)	fputwc_unlocked((wc), _REENT->_stdout)
#endif
# 332 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3

_END_STD_C

#if __SSP_FORTIFY_LEVEL > 0
#if 0 /* expanded by -frewrite-includes */
#include <ssp/wchar.h>
#endif /* expanded by -frewrite-includes */
# 336 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
# 337 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
#endif
# 338 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3

#endif /* _WCHAR_H_ */
# 340 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/wchar.h" 3
# 87 "../../../../../newlib/libc/stdio/vfscanf.c" 2
#if 0 /* expanded by -frewrite-includes */
#include <string.h>
#endif /* expanded by -frewrite-includes */
# 87 "../../../../../newlib/libc/stdio/vfscanf.c"
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 1 3
/*
 * string.h
 *
 * Definitions for memory and string functions.
 */

#ifndef _STRING_H_
#define	_STRING_H_

#if 0 /* expanded by -frewrite-includes */
#include "_ansi.h"
#endif /* expanded by -frewrite-includes */
# 10 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
# 11 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/reent.h>
#endif /* expanded by -frewrite-includes */
# 11 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
# 12 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/cdefs.h>
#endif /* expanded by -frewrite-includes */
# 12 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
# 13 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/features.h>
#endif /* expanded by -frewrite-includes */
# 13 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
# 14 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3

#define __need_size_t
#define __need_NULL
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 17 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
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
# 18 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 2 3

#if __POSIX_VISIBLE >= 200809
#if 0 /* expanded by -frewrite-includes */
#include <xlocale.h>
#endif /* expanded by -frewrite-includes */
# 20 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
# 21 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
#endif
# 22 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3

#if __BSD_VISIBLE
#if 0 /* expanded by -frewrite-includes */
#include <strings.h>
#endif /* expanded by -frewrite-includes */
# 24 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/strings.h" 1 3
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
 * $FreeBSD: head/include/strings.h 272673 2014-10-07 04:54:11Z delphij $
 */

#ifndef _STRINGS_H_
#define	_STRINGS_H_

#if 0 /* expanded by -frewrite-includes */
#include <sys/cdefs.h>
#endif /* expanded by -frewrite-includes */
# 32 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/strings.h" 3
# 33 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/strings.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/_types.h>
#endif /* expanded by -frewrite-includes */
# 33 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/strings.h" 3
# 34 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/strings.h" 3

#if __POSIX_VISIBLE >= 200809
#if 0 /* expanded by -frewrite-includes */
#include <xlocale.h>
#endif /* expanded by -frewrite-includes */
# 36 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/strings.h" 3
# 37 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/strings.h" 3
#endif
# 38 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/strings.h" 3

#ifndef _SIZE_T_DECLARED
typedef	__size_t	size_t;
#define	_SIZE_T_DECLARED
#endif
# 43 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/strings.h" 3

__BEGIN_DECLS
#if __BSD_VISIBLE || __POSIX_VISIBLE <= 200112
int	 bcmp(const void *, const void *, size_t) __pure;	/* LEGACY */
void	 bcopy(const void *, void *, size_t);			/* LEGACY */
void	 bzero(void *, size_t);					/* LEGACY */
#endif
# 50 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/strings.h" 3
#if __BSD_VISIBLE
void	 explicit_bzero(void *, size_t);
#endif
# 53 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/strings.h" 3
#if __MISC_VISIBLE || __POSIX_VISIBLE < 200809 || __XSI_VISIBLE >= 700
int	 ffs(int) __pure2;
#endif
# 56 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/strings.h" 3
#if __BSD_VISIBLE
int	 ffsl(long) __pure2;
int	 ffsll(long long) __pure2;
int	 fls(int) __pure2;
int	 flsl(long) __pure2;
int	 flsll(long long) __pure2;
#endif
# 63 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/strings.h" 3
#if __BSD_VISIBLE || __POSIX_VISIBLE <= 200112
char	*index(const char *, int) __pure;			/* LEGACY */
char	*rindex(const char *, int) __pure;			/* LEGACY */
#endif
# 67 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/strings.h" 3
int	 strcasecmp(const char *, const char *) __pure;
int	 strncasecmp(const char *, const char *, size_t) __pure;

#if __POSIX_VISIBLE >= 200809
int	 strcasecmp_l (const char *, const char *, locale_t);
int	 strncasecmp_l (const char *, const char *, size_t, locale_t);
#endif
# 74 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/strings.h" 3
__END_DECLS

#if __SSP_FORTIFY_LEVEL > 0
#if 0 /* expanded by -frewrite-includes */
#include <ssp/strings.h>
#endif /* expanded by -frewrite-includes */
# 77 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/strings.h" 3
# 78 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/strings.h" 3
#endif
# 79 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/strings.h" 3

#endif /* _STRINGS_H_ */
# 81 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/strings.h" 3
# 25 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 2 3
#endif
# 26 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3

_BEGIN_STD_C

void *	 memchr (const void *, int, size_t);
int 	 memcmp (const void *, const void *, size_t);
void *	 memcpy (void *__restrict, const void *__restrict, size_t);
void *	 memmove (void *, const void *, size_t);
void *	 memset (void *, int, size_t);
char 	*strcat (char *__restrict, const char *__restrict);
char 	*strchr (const char *, int);
int	 strcmp (const char *, const char *);
int	 strcoll (const char *, const char *);
char 	*strcpy (char *__restrict, const char *__restrict);
size_t	 strcspn (const char *, const char *);
char 	*strerror (int);
size_t	 strlen (const char *);
char 	*strncat (char *__restrict, const char *__restrict, size_t);
int	 strncmp (const char *, const char *, size_t);
char 	*strncpy (char *__restrict, const char *__restrict, size_t);
char 	*strpbrk (const char *, const char *);
char 	*strrchr (const char *, int);
size_t	 strspn (const char *, const char *);
char 	*strstr (const char *, const char *);
#ifndef _REENT_ONLY
char 	*strtok (char *__restrict, const char *__restrict);
#endif
# 52 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
size_t	 strxfrm (char *__restrict, const char *__restrict, size_t);

#if __POSIX_VISIBLE >= 200809
int	 strcoll_l (const char *, const char *, locale_t);
char	*strerror_l (int, locale_t);
size_t	 strxfrm_l (char *__restrict, const char *__restrict, size_t, locale_t);
#endif
# 59 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
#if __MISC_VISIBLE || __POSIX_VISIBLE
char 	*strtok_r (char *__restrict, const char *__restrict, char **__restrict);
#endif
# 62 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
#if __BSD_VISIBLE
int	 timingsafe_bcmp (const void *, const void *, size_t);
int	 timingsafe_memcmp (const void *, const void *, size_t);
#endif
# 66 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
#if __MISC_VISIBLE || __POSIX_VISIBLE
void *	 memccpy (void *__restrict, const void *__restrict, int, size_t);
#endif
# 69 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
#if __GNU_VISIBLE
void *	 mempcpy (void *, const void *, size_t);
void *	 memmem (const void *, size_t, const void *, size_t);
void *	 memrchr (const void *, int, size_t);
void *	 rawmemchr (const void *, int);
#endif
# 75 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
#if __POSIX_VISIBLE >= 200809
char 	*stpcpy (char *__restrict, const char *__restrict);
char 	*stpncpy (char *__restrict, const char *__restrict, size_t);
#endif
# 79 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
#if __GNU_VISIBLE
char	*strcasestr (const char *, const char *);
char 	*strchrnul (const char *, int);
#endif
# 83 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
#if __MISC_VISIBLE || __POSIX_VISIBLE >= 200809 || __XSI_VISIBLE >= 4
char 	*strdup (const char *);
#endif
# 86 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
char 	*_strdup_r (struct _reent *, const char *);
#if __POSIX_VISIBLE >= 200809
char 	*strndup (const char *, size_t);
#endif
# 90 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
char 	*_strndup_r (struct _reent *, const char *, size_t);

/* There are two common strerror_r variants.  If you request
   _GNU_SOURCE, you get the GNU version; otherwise you get the POSIX
   version.  POSIX requires that #undef strerror_r will still let you
   invoke the underlying function, but that requires gcc support.  */
#if __GNU_VISIBLE
char	*strerror_r (int, char *, size_t);
#elif __POSIX_VISIBLE >= 200112
# 99 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
# ifdef __GNUC__
int	strerror_r (int, char *, size_t)
#ifdef __ASMNAME
             __asm__ (__ASMNAME ("__xpg_strerror_r"))
#endif
# 104 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
  ;
# else
# 106 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
int	__xpg_strerror_r (int, char *, size_t);
#  define strerror_r __xpg_strerror_r
# endif
# 109 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
#endif
# 110 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3

/* Reentrant version of strerror.  */
char *	_strerror_r (struct _reent *, int, int, int *);

#if __BSD_VISIBLE
size_t	strlcat (char *, const char *, size_t);
size_t	strlcpy (char *, const char *, size_t);
#endif
# 118 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
#if __POSIX_VISIBLE >= 200809
size_t	 strnlen (const char *, size_t);
#endif
# 121 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
#if __BSD_VISIBLE
char 	*strsep (char **, const char *);
#endif
# 124 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
#if __BSD_VISIBLE
char    *strnstr(const char *, const char *, size_t) __pure;
#endif
# 127 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3

#if __MISC_VISIBLE
char	*strlwr (char *);
char	*strupr (char *);
#endif
# 132 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3

#ifndef DEFS_H	/* Kludge to work around problem compiling in gdb */
char	*strsignal (int __signo);
#endif
# 136 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3

#ifdef __CYGWIN__
int	strtosigno (const char *__name);
#endif
# 140 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3

#if __GNU_VISIBLE
int	 strverscmp (const char *, const char *);
#endif
# 144 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3

#if __GNU_VISIBLE && defined(__GNUC__)
#define strdupa(__s) \
	(__extension__ ({const char *__sin = (__s); \
			 size_t __len = strlen (__sin) + 1; \
			 char * __sout = (char *) __builtin_alloca (__len); \
			 (char *) memcpy (__sout, __sin, __len);}))
#define strndupa(__s, __n) \
	(__extension__ ({const char *__sin = (__s); \
			 size_t __len = strnlen (__sin, (__n)) + 1; \
			 char *__sout = (char *) __builtin_alloca (__len); \
			 __sout[__len-1] = '\0'; \
			 (char *) memcpy (__sout, __sin, __len-1);}))
#endif /* __GNU_VISIBLE && __GNUC__ */
# 158 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3

/* There are two common basename variants.  If you do NOT #include <libgen.h>
   and you do

     #define _GNU_SOURCE
     #include <string.h>

   you get the GNU version.  Otherwise you get the POSIX versionfor which you
   should #include <libgen.h>i for the function prototype.  POSIX requires that
   #undef basename will still let you invoke the underlying function.  However,
   this also implies that the POSIX version is used in this case.  That's made
   sure here. */
#if __GNU_VISIBLE && !defined(basename)
# define basename basename
char	*__nonnull ((1)) basename (const char *) __asm__(__ASMNAME("__gnu_basename"));
#endif
# 174 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3

#if 0 /* expanded by -frewrite-includes */
#include <sys/string.h>
#endif /* expanded by -frewrite-includes */
# 175 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/string.h" 1 3
/* This is a dummy <sys/string.h> used as a placeholder for
   systems that need to have a special header file.  */
# 176 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 2 3

_END_STD_C

#if __SSP_FORTIFY_LEVEL > 0
#if 0 /* expanded by -frewrite-includes */
#include <ssp/string.h>
#endif /* expanded by -frewrite-includes */
# 180 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
# 181 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
#endif
# 182 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3

#endif /* _STRING_H_ */
# 184 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/string.h" 3
# 88 "../../../../../newlib/libc/stdio/vfscanf.c" 2
#if 0 /* expanded by -frewrite-includes */
#include <stdarg.h>
#endif /* expanded by -frewrite-includes */
# 88 "../../../../../newlib/libc/stdio/vfscanf.c"
# 89 "../../../../../newlib/libc/stdio/vfscanf.c"
#if 0 /* expanded by -frewrite-includes */
#include <errno.h>
#endif /* expanded by -frewrite-includes */
# 89 "../../../../../newlib/libc/stdio/vfscanf.c"
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/errno.h" 1 3
#ifndef __ERRNO_H__
#define __ERRNO_H__

#ifndef __error_t_defined
typedef int error_t;
#define __error_t_defined 1
#endif
# 8 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/errno.h" 3

#if 0 /* expanded by -frewrite-includes */
#include <sys/errno.h>
#endif /* expanded by -frewrite-includes */
# 9 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/errno.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/errno.h" 1 3
/* errno is not a global variable, because that would make using it
   non-reentrant.  Instead, its address is returned by the function
   __errno.  */

#ifndef _SYS_ERRNO_H_
#ifdef __cplusplus
extern "C" {
#endif
# 9 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/errno.h" 3
#define _SYS_ERRNO_H_

#if 0 /* expanded by -frewrite-includes */
#include <sys/reent.h>
#endif /* expanded by -frewrite-includes */
# 11 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/errno.h" 3
# 12 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/errno.h" 3

#ifndef _REENT_ONLY
#define errno (*__errno())
extern int *__errno (void);
#endif
# 17 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/errno.h" 3

/* Please don't use these variables directly.
   Use strerror instead. */
extern __IMPORT const char * const _sys_errlist[];
extern __IMPORT int _sys_nerr;
#ifdef __CYGWIN__
extern __IMPORT const char * const sys_errlist[];
extern __IMPORT int sys_nerr;
extern __IMPORT char *program_invocation_name;
extern __IMPORT char *program_invocation_short_name;
#endif
# 28 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/errno.h" 3

#define __errno_r(ptr) ((ptr)->_errno)

#define	EPERM 1		/* Not owner */
#define	ENOENT 2	/* No such file or directory */
#define	ESRCH 3		/* No such process */
#define	EINTR 4		/* Interrupted system call */
#define	EIO 5		/* I/O error */
#define	ENXIO 6		/* No such device or address */
#define	E2BIG 7		/* Arg list too long */
#define	ENOEXEC 8	/* Exec format error */
#define	EBADF 9		/* Bad file number */
#define	ECHILD 10	/* No children */
#define	EAGAIN 11	/* No more processes */
#define	ENOMEM 12	/* Not enough space */
#define	EACCES 13	/* Permission denied */
#define	EFAULT 14	/* Bad address */
#ifdef __LINUX_ERRNO_EXTENSIONS__
#define	ENOTBLK 15	/* Block device required */
#endif
# 48 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/errno.h" 3
#define	EBUSY 16	/* Device or resource busy */
#define	EEXIST 17	/* File exists */
#define	EXDEV 18	/* Cross-device link */
#define	ENODEV 19	/* No such device */
#define	ENOTDIR 20	/* Not a directory */
#define	EISDIR 21	/* Is a directory */
#define	EINVAL 22	/* Invalid argument */
#define	ENFILE 23	/* Too many open files in system */
#define	EMFILE 24	/* File descriptor value too large */
#define	ENOTTY 25	/* Not a character device */
#define	ETXTBSY 26	/* Text file busy */
#define	EFBIG 27	/* File too large */
#define	ENOSPC 28	/* No space left on device */
#define	ESPIPE 29	/* Illegal seek */
#define	EROFS 30	/* Read-only file system */
#define	EMLINK 31	/* Too many links */
#define	EPIPE 32	/* Broken pipe */
#define	EDOM 33		/* Mathematics argument out of domain of function */
#define	ERANGE 34	/* Result too large */
#define	ENOMSG 35	/* No message of desired type */
#define	EIDRM 36	/* Identifier removed */
#ifdef __LINUX_ERRNO_EXTENSIONS__
#define	ECHRNG 37	/* Channel number out of range */
#define	EL2NSYNC 38	/* Level 2 not synchronized */
#define	EL3HLT 39	/* Level 3 halted */
#define	EL3RST 40	/* Level 3 reset */
#define	ELNRNG 41	/* Link number out of range */
#define	EUNATCH 42	/* Protocol driver not attached */
#define	ENOCSI 43	/* No CSI structure available */
#define	EL2HLT 44	/* Level 2 halted */
#endif
# 79 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/errno.h" 3
#define	EDEADLK 45	/* Deadlock */
#define	ENOLCK 46	/* No lock */
#ifdef __LINUX_ERRNO_EXTENSIONS__
#define EBADE 50	/* Invalid exchange */
#define EBADR 51	/* Invalid request descriptor */
#define EXFULL 52	/* Exchange full */
#define ENOANO 53	/* No anode */
#define EBADRQC 54	/* Invalid request code */
#define EBADSLT 55	/* Invalid slot */
#define EDEADLOCK 56	/* File locking deadlock error */
#define EBFONT 57	/* Bad font file fmt */
#endif
# 91 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/errno.h" 3
#define ENOSTR 60	/* Not a stream */
#define ENODATA 61	/* No data (for no delay io) */
#define ETIME 62	/* Stream ioctl timeout */
#define ENOSR 63	/* No stream resources */
#ifdef __LINUX_ERRNO_EXTENSIONS__
#define ENONET 64	/* Machine is not on the network */
#define ENOPKG 65	/* Package not installed */
#define EREMOTE 66	/* The object is remote */
#endif
# 100 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/errno.h" 3
#define ENOLINK 67	/* Virtual circuit is gone */
#ifdef __LINUX_ERRNO_EXTENSIONS__
#define EADV 68		/* Advertise error */
#define ESRMNT 69	/* Srmount error */
#define	ECOMM 70	/* Communication error on send */
#endif
# 106 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/errno.h" 3
#define EPROTO 71	/* Protocol error */
#define	EMULTIHOP 74	/* Multihop attempted */
#ifdef __LINUX_ERRNO_EXTENSIONS__
#define	ELBIN 75	/* Inode is remote (not really error) */
#define	EDOTDOT 76	/* Cross mount point (not really error) */
#endif
# 112 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/errno.h" 3
#define EBADMSG 77	/* Bad message */
#define EFTYPE 79	/* Inappropriate file type or format */
#ifdef __LINUX_ERRNO_EXTENSIONS__
#define ENOTUNIQ 80	/* Given log. name not unique */
#define EBADFD 81	/* f.d. invalid for this operation */
#define EREMCHG 82	/* Remote address changed */
#define ELIBACC 83	/* Can't access a needed shared lib */
#define ELIBBAD 84	/* Accessing a corrupted shared lib */
#define ELIBSCN 85	/* .lib section in a.out corrupted */
#define ELIBMAX 86	/* Attempting to link in too many libs */
#define ELIBEXEC 87	/* Attempting to exec a shared library */
#endif
# 124 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/errno.h" 3
#define ENOSYS 88	/* Function not implemented */
#ifdef __CYGWIN__
#define ENMFILE 89      /* No more files */
#endif
# 128 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/errno.h" 3
#define ENOTEMPTY 90	/* Directory not empty */
#define ENAMETOOLONG 91	/* File or path name too long */
#define ELOOP 92	/* Too many symbolic links */
#define EOPNOTSUPP 95	/* Operation not supported on socket */
#define EPFNOSUPPORT 96 /* Protocol family not supported */
#define ECONNRESET 104  /* Connection reset by peer */
#define ENOBUFS 105	/* No buffer space available */
#define EAFNOSUPPORT 106 /* Address family not supported by protocol family */
#define EPROTOTYPE 107	/* Protocol wrong type for socket */
#define ENOTSOCK 108	/* Socket operation on non-socket */
#define ENOPROTOOPT 109	/* Protocol not available */
#ifdef __LINUX_ERRNO_EXTENSIONS__
#define ESHUTDOWN 110	/* Can't send after socket shutdown */
#endif
# 142 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/errno.h" 3
#define ECONNREFUSED 111	/* Connection refused */
#define EADDRINUSE 112		/* Address already in use */
#define ECONNABORTED 113	/* Software caused connection abort */
#define ENETUNREACH 114		/* Network is unreachable */
#define ENETDOWN 115		/* Network interface is not configured */
#define ETIMEDOUT 116		/* Connection timed out */
#define EHOSTDOWN 117		/* Host is down */
#define EHOSTUNREACH 118	/* Host is unreachable */
#define EINPROGRESS 119		/* Connection already in progress */
#define EALREADY 120		/* Socket already connected */
#define EDESTADDRREQ 121	/* Destination address required */
#define EMSGSIZE 122		/* Message too long */
#define EPROTONOSUPPORT 123	/* Unknown protocol */
#ifdef __LINUX_ERRNO_EXTENSIONS__
#define ESOCKTNOSUPPORT 124	/* Socket type not supported */
#endif
# 158 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/errno.h" 3
#define EADDRNOTAVAIL 125	/* Address not available */
#define ENETRESET 126		/* Connection aborted by network */
#define EISCONN 127		/* Socket is already connected */
#define ENOTCONN 128		/* Socket is not connected */
#define ETOOMANYREFS 129
#ifdef __LINUX_ERRNO_EXTENSIONS__
#define EPROCLIM 130
#define EUSERS 131
#endif
# 167 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/errno.h" 3
#define EDQUOT 132
#define ESTALE 133
#define ENOTSUP 134		/* Not supported */
#ifdef __LINUX_ERRNO_EXTENSIONS__
#define ENOMEDIUM 135   /* No medium (in tape drive) */
#endif
# 173 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/errno.h" 3
#ifdef __CYGWIN__
#define ENOSHARE 136    /* No such host or network path */
#define ECASECLASH 137  /* Filename exists with different case */
#endif
# 177 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/errno.h" 3
#define EILSEQ 138		/* Illegal byte sequence */
#define EOVERFLOW 139	/* Value too large for defined data type */
#define ECANCELED 140	/* Operation canceled */
#define ENOTRECOVERABLE 141	/* State not recoverable */
#define EOWNERDEAD 142	/* Previous owner died */
#ifdef __LINUX_ERRNO_EXTENSIONS__
#define ESTRPIPE 143	/* Streams pipe error */
#endif
# 185 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/errno.h" 3
#define EWOULDBLOCK EAGAIN	/* Operation would block */

#define __ELASTERROR 2000	/* Users can add values starting here */

#ifdef __cplusplus
}
#endif
# 192 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/errno.h" 3
#endif /* _SYS_ERRNO_H */
# 193 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/errno.h" 3
# 10 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/errno.h" 2 3

#endif /* !__ERRNO_H__ */
# 12 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/errno.h" 3
# 90 "../../../../../newlib/libc/stdio/vfscanf.c" 2
#if 0 /* expanded by -frewrite-includes */
#include "local.h"
#endif /* expanded by -frewrite-includes */
# 90 "../../../../../newlib/libc/stdio/vfscanf.c"
# 1 "../../../../../newlib/libc/stdio/local.h" 1
/*
 * Copyright (c) 1990, 2007 The Regents of the University of California.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that the above copyright notice and this paragraph are
 * duplicated in all such forms and that any documentation,
 * advertising materials, and other materials related to such
 * distribution and use acknowledge that the software was developed
 * by the University of California, Berkeley.  The name of the
 * University may not be used to endorse or promote products derived
 * from this software without specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 *
 *	%W% (UofMD/Berkeley) %G%
 */

/*
 * Information local to this implementation of stdio,
 * in particular, macros and private variables.
 */

#if 0 /* expanded by -frewrite-includes */
#include <_ansi.h>
#endif /* expanded by -frewrite-includes */
# 25 "../../../../../newlib/libc/stdio/local.h"
# 26 "../../../../../newlib/libc/stdio/local.h"
#if 0 /* expanded by -frewrite-includes */
#include <reent.h>
#endif /* expanded by -frewrite-includes */
# 26 "../../../../../newlib/libc/stdio/local.h"
# 27 "../../../../../newlib/libc/stdio/local.h"
#if 0 /* expanded by -frewrite-includes */
#include <stdarg.h>
#endif /* expanded by -frewrite-includes */
# 27 "../../../../../newlib/libc/stdio/local.h"
# 28 "../../../../../newlib/libc/stdio/local.h"
#if 0 /* expanded by -frewrite-includes */
#include <stdlib.h>
#endif /* expanded by -frewrite-includes */
# 28 "../../../../../newlib/libc/stdio/local.h"
# 29 "../../../../../newlib/libc/stdio/local.h"
#if 0 /* expanded by -frewrite-includes */
#include <unistd.h>
#endif /* expanded by -frewrite-includes */
# 29 "../../../../../newlib/libc/stdio/local.h"
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/unistd.h" 1 3
#ifndef _UNISTD_H_
#define _UNISTD_H_

#if 0 /* expanded by -frewrite-includes */
# include <sys/unistd.h>
#endif /* expanded by -frewrite-includes */
# 4 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/unistd.h" 3
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 1 3
#ifndef _SYS_UNISTD_H
#define _SYS_UNISTD_H

#ifdef __cplusplus
extern "C" {
#endif
# 7 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3

#if 0 /* expanded by -frewrite-includes */
#include <_ansi.h>
#endif /* expanded by -frewrite-includes */
# 8 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
# 9 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#define __need_size_t
#define __need_ptrdiff_t
#if 0 /* expanded by -frewrite-includes */
#include <sys/cdefs.h>
#endif /* expanded by -frewrite-includes */
# 11 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
# 12 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/types.h>
#endif /* expanded by -frewrite-includes */
# 12 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
# 13 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/_types.h>
#endif /* expanded by -frewrite-includes */
# 13 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
# 14 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 14 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
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
# 15 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 2 3

extern char **environ;

void	_exit (int __status) _ATTRIBUTE ((__noreturn__));

int	access (const char *__path, int __amode);
unsigned  alarm (unsigned __secs);
int     chdir (const char *__path);
int     chmod (const char *__path, mode_t __mode);
#if !defined(__INSIDE_CYGWIN__)
int     chown (const char *__path, uid_t __owner, gid_t __group);
#endif
# 27 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __BSD_VISIBLE || (__XSI_VISIBLE >= 4 && __POSIX_VISIBLE < 200112)
int     chroot (const char *__path);
#endif
# 30 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
int     close (int __fildes);
#if __POSIX_VISIBLE >= 199209
size_t	confstr (int __name, char *__buf, size_t __len);
#endif
# 34 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __XSI_VISIBLE
char *  crypt (const char *__key, const char *__salt);
#endif
# 37 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __XSI_VISIBLE && __XSI_VISIBLE < 700
char *  ctermid (char *__s);
#endif
# 40 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __XSI_VISIBLE && __XSI_VISIBLE < 600
char *  cuserid (char *__s);
#endif
# 43 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __BSD_VISIBLE || (__XSI_VISIBLE && __XSI_VISIBLE < 500)
int	daemon (int nochdir, int noclose);
#endif
# 46 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
int     dup (int __fildes);
int     dup2 (int __fildes, int __fildes2);
#if __GNU_VISIBLE
int     dup3 (int __fildes, int __fildes2, int flags);
int	eaccess (const char *__path, int __mode);
#endif
# 52 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __XSI_VISIBLE
void	encrypt (char *__block, int __edflag);
#endif
# 55 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __BSD_VISIBLE || (__XSI_VISIBLE && __XSI_VISIBLE < 500)
void	endusershell (void);
#endif
# 58 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __GNU_VISIBLE
int	euidaccess (const char *__path, int __mode);
#endif
# 61 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
int     execl (const char *__path, const char *, ...);
int     execle (const char *__path, const char *, ...);
int     execlp (const char *__file, const char *, ...);
#if __MISC_VISIBLE
int     execlpe (const char *__file, const char *, ...);
#endif
# 67 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
int     execv (const char *__path, char * const __argv[]);
int     execve (const char *__path, char * const __argv[], char * const __envp[]);
int     execvp (const char *__file, char * const __argv[]);
#if __GNU_VISIBLE
int     execvpe (const char *__file, char * const __argv[], char * const __envp[]);
#endif
# 73 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __ATFILE_VISIBLE
int	faccessat (int __dirfd, const char *__path, int __mode, int __flags);
#endif
# 76 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __BSD_VISIBLE || __XSI_VISIBLE >= 4 || __POSIX_VISIBLE >= 200809
int     fchdir (int __fildes);
#endif
# 79 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __POSIX_VISIBLE >= 199309
int     fchmod (int __fildes, mode_t __mode);
#endif
# 82 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if !defined(__INSIDE_CYGWIN__)
#if __BSD_VISIBLE || __XSI_VISIBLE >= 4 || __POSIX_VISIBLE >= 200809
int     fchown (int __fildes, uid_t __owner, gid_t __group);
#endif
# 86 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#endif
# 87 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __ATFILE_VISIBLE
int	fchownat (int __dirfd, const char *__path, uid_t __owner, gid_t __group, int __flags);
#endif
# 90 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __POSIX_VISIBLE >= 200809
int	fexecve (int __fd, char * const __argv[], char * const __envp[]);
#endif
# 93 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
pid_t   fork (void);
long    fpathconf (int __fd, int __name);
int     fsync (int __fd);
#if __POSIX_VISIBLE >= 199309
int     fdatasync (int __fd);
#endif
# 99 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __GNU_VISIBLE
char *  get_current_dir_name (void);
#endif
# 102 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
char *  getcwd (char *__buf, size_t __size);
#if __BSD_VISIBLE || (__XSI_VISIBLE && __XSI_VISIBLE < 500)
int	getdomainname  (char *__name, size_t __len);
#endif
# 106 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __BSD_VISIBLE
int     getentropy (void *, size_t);
#endif
# 109 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if !defined(__INSIDE_CYGWIN__)
gid_t   getegid (void);
uid_t   geteuid (void);
gid_t   getgid (void);
#endif
# 114 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
int     getgroups (int __gidsetsize, gid_t __grouplist[]);
#if __BSD_VISIBLE || __XSI_VISIBLE >= 4
long    gethostid (void);
#endif
# 118 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
char *  getlogin (void);
#if defined(_POSIX_THREAD_SAFE_FUNCTIONS)
int getlogin_r (char *name, size_t namesize) ;
#endif
# 122 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __BSD_VISIBLE || (__XSI_VISIBLE && __POSIX_VISIBLE < 200112)
char *  getpass (const char *__prompt);
int	getpagesize (void);
#endif
# 126 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __BSD_VISIBLE
int    getpeereid (int, uid_t *, gid_t *);
#endif
# 129 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __POSIX_VISIBLE >= 200809 || __XSI_VISIBLE >= 4
pid_t   getpgid (pid_t);
#endif
# 132 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
pid_t   getpgrp (void);
pid_t   getpid (void);
pid_t   getppid (void);
#if __POSIX_VISIBLE >= 200809 || __XSI_VISIBLE >= 4
pid_t   getsid (pid_t);
#endif
# 138 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if !defined(__INSIDE_CYGWIN__)
uid_t   getuid (void);
#endif
# 141 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __BSD_VISIBLE || (__XSI_VISIBLE && __XSI_VISIBLE < 500)
char *	getusershell (void);
#endif
# 144 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __BSD_VISIBLE || (__XSI_VISIBLE >= 4 && __POSIX_VISIBLE < 200809)
char *  getwd (char *__buf);
#endif
# 147 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __BSD_VISIBLE
int	iruserok (unsigned long raddr, int superuser, const char *ruser, const char *luser);
#endif
# 150 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
int     isatty (int __fildes);
#if __BSD_VISIBLE
int        issetugid (void);
#endif
# 154 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if !defined(__INSIDE_CYGWIN__)
#if __BSD_VISIBLE || __XSI_VISIBLE >= 4 || __POSIX_VISIBLE >= 200809
int     lchown (const char *__path, uid_t __owner, gid_t __group);
#endif
# 158 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#endif
# 159 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
int     link (const char *__path1, const char *__path2);
#if __ATFILE_VISIBLE
int     linkat (int __dirfd1, const char *__path1, int __dirfd2, const char *__path2, int __flags);
#endif
# 163 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __MISC_VISIBLE || __XSI_VISIBLE
int	nice (int __nice_value);
#endif
# 166 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if !defined(__INSIDE_CYGWIN__)
off_t   lseek (int __fildes, off_t __offset, int __whence);
#endif
# 169 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __MISC_VISIBLE || __XSI_VISIBLE >= 4
#define F_ULOCK	0
#define F_LOCK	1
#define F_TLOCK	2
#define F_TEST	3
int     lockf (int __fd, int __cmd, off_t __len);
#endif
# 176 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
long    pathconf (const char *__path, int __name);
int     pause (void);
#if __POSIX_VISIBLE >= 199506
int	pthread_atfork (void (*)(void), void (*)(void), void (*)(void));
#endif
# 181 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
int     pipe (int __fildes[2]);
#if __GNU_VISIBLE
int     pipe2 (int __fildes[2], int flags);
#endif
# 185 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __POSIX_VISIBLE >= 200809 || __XSI_VISIBLE >= 500
ssize_t pread (int __fd, void *__buf, size_t __nbytes, off_t __offset);
ssize_t pwrite (int __fd, const void *__buf, size_t __nbytes, off_t __offset);
#endif
# 189 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
_READ_WRITE_RETURN_TYPE read (int __fd, void *__buf, size_t __nbyte);
#if __BSD_VISIBLE
int	rresvport (int *__alport);
int	revoke (char *__path);
#endif
# 194 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
int     rmdir (const char *__path);
#if __BSD_VISIBLE
int	ruserok (const char *rhost, int superuser, const char *ruser, const char *luser);
#endif
# 198 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __BSD_VISIBLE || (__XSI_VISIBLE >= 4 && __POSIX_VISIBLE < 200112)
void *  sbrk (ptrdiff_t __incr);
#endif
# 201 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if !defined(__INSIDE_CYGWIN__)
#if __BSD_VISIBLE || __POSIX_VISIBLE >= 200112
int     setegid (gid_t __gid);
int     seteuid (uid_t __uid);
#endif
# 206 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
int     setgid (gid_t __gid);
#endif
# 208 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __BSD_VISIBLE
int	setgroups (int ngroups, const gid_t *grouplist);
#endif
# 211 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __BSD_VISIBLE || (__XSI_VISIBLE && __XSI_VISIBLE < 500)
int	sethostname (const char *, size_t);
#endif
# 214 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
int     setpgid (pid_t __pid, pid_t __pgid);
#if __SVID_VISIBLE || __XSI_VISIBLE >= 500
int     setpgrp (void);
#endif
# 218 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if (__BSD_VISIBLE || __XSI_VISIBLE >= 4) && !defined(__INSIDE_CYGWIN__)
int	setregid (gid_t __rgid, gid_t __egid);
int	setreuid (uid_t __ruid, uid_t __euid);
#endif
# 222 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
pid_t   setsid (void);
#if !defined(__INSIDE_CYGWIN__)
int     setuid (uid_t __uid);
#endif
# 226 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __BSD_VISIBLE || (__XSI_VISIBLE && __XSI_VISIBLE < 500)
void	setusershell (void);
#endif
# 229 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
unsigned sleep (unsigned int __seconds);
#if __XSI_VISIBLE
void    swab (const void *__restrict, void *__restrict, ssize_t);
#endif
# 233 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
long    sysconf (int __name);
pid_t   tcgetpgrp (int __fildes);
int     tcsetpgrp (int __fildes, pid_t __pgrp_id);
char *  ttyname (int __fildes);
int     ttyname_r (int, char *, size_t);
int     unlink (const char *__path);
#if __XSI_VISIBLE >= 500 && __POSIX_VISIBLE < 200809 || __BSD_VISIBLE
int 	usleep (useconds_t __useconds);
#endif
# 242 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __BSD_VISIBLE
int     vhangup (void);
#endif
# 245 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
_READ_WRITE_RETURN_TYPE write (int __fd, const void *__buf, size_t __nbyte);

#ifdef __CYGWIN__
# define __UNISTD_GETOPT__
#if 0 /* expanded by -frewrite-includes */
# include <getopt.h>
#endif /* expanded by -frewrite-includes */
# 249 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
# 250 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
# undef __UNISTD_GETOPT__
#else
# 252 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
extern char *optarg;			/* getopt(3) external variables */
extern int optind, opterr, optopt;
int	 getopt(int, char * const [], const char *);
extern int optreset;			/* getopt(3) external variable */
#endif
# 257 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3

#if __BSD_VISIBLE || (__XSI_VISIBLE >= 4 && __POSIX_VISIBLE < 200809)
pid_t   vfork (void);
#endif
# 261 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3

#ifdef _COMPILING_NEWLIB
/* Provide prototypes for most of the _<systemcall> names that are
   provided in newlib for some compilers.  */
int     _close (int __fildes);
pid_t   _fork (void);
pid_t   _getpid (void);
int	_isatty (int __fildes);
int     _link (const char *__path1, const char *__path2);
_off_t   _lseek (int __fildes, _off_t __offset, int __whence);
#ifdef __LARGE64_FILES
_off64_t _lseek64 (int __filedes, _off64_t __offset, int __whence);
#endif
# 274 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
_READ_WRITE_RETURN_TYPE _read (int __fd, void *__buf, size_t __nbyte);
void *  _sbrk (ptrdiff_t __incr);
int     _unlink (const char *__path);
_READ_WRITE_RETURN_TYPE _write (int __fd, const void *__buf, size_t __nbyte);
int     _execve (const char *__path, char * const __argv[], char * const __envp[]);
#endif
# 280 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3

#if !defined(__INSIDE_CYGWIN__)
#if __POSIX_VISIBLE >= 200112 || __XSI_VISIBLE >= 500
int     ftruncate (int __fd, off_t __length);
#endif
# 285 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __POSIX_VISIBLE >= 200809 || __XSI_VISIBLE >= 500
int     truncate (const char *, off_t __length);
#endif
# 288 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#endif
# 289 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3

#if __BSD_VISIBLE || __POSIX_VISIBLE < 200112
int	getdtablesize (void);
#endif
# 293 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __BSD_VISIBLE || __POSIX_VISIBLE >= 200809 || __XSI_VISIBLE >= 500
useconds_t ualarm (useconds_t __useconds, useconds_t __interval);
#endif
# 296 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3

#if __BSD_VISIBLE || __POSIX_VISIBLE >= 200112 || __XSI_VISIBLE >= 500
#if !(defined  (_WINSOCK_H) || defined (_WINSOCKAPI_) || defined (__USE_W32_SOCKETS))
/* winsock[2].h defines as __stdcall, and with int as 2nd arg */
 int	gethostname (char *__name, size_t __len);
#endif
# 302 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#endif
# 303 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3

#if __MISC_VISIBLE
int	setdtablesize (int);
#endif
# 307 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3

#if __BSD_VISIBLE || __XSI_VISIBLE >= 500
void    sync (void);
#endif
# 311 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3

#if __BSD_VISIBLE || __POSIX_VISIBLE >= 200112 || __XSI_VISIBLE >= 4
ssize_t readlink (const char *__restrict __path,
                          char *__restrict __buf, size_t __buflen);
int     symlink (const char *__name1, const char *__name2);
#endif
# 317 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#if __ATFILE_VISIBLE
ssize_t        readlinkat (int __dirfd1, const char *__restrict __path,
                            char *__restrict __buf, size_t __buflen);
int	symlinkat (const char *, int, const char *);
int	unlinkat (int, const char *, int);
#endif
# 323 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3

#define	F_OK	0
#define	R_OK	4
#define	W_OK	2
#define	X_OK	1

# define	SEEK_SET	0
# define	SEEK_CUR	1
# define	SEEK_END	2

#if 0 /* expanded by -frewrite-includes */
#include <sys/features.h>
#endif /* expanded by -frewrite-includes */
# 333 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
# 334 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3

#define STDIN_FILENO    0       /* standard input file descriptor */
#define STDOUT_FILENO   1       /* standard output file descriptor */
#define STDERR_FILENO   2       /* standard error file descriptor */

/*
 *  sysconf values per IEEE Std 1003.1, 2008 Edition
 */

#define _SC_ARG_MAX                       0
#define _SC_CHILD_MAX                     1
#define _SC_CLK_TCK                       2
#define _SC_NGROUPS_MAX                   3
#define _SC_OPEN_MAX                      4
#define _SC_JOB_CONTROL                   5
#define _SC_SAVED_IDS                     6
#define _SC_VERSION                       7
#define _SC_PAGESIZE                      8
#define _SC_PAGE_SIZE                     _SC_PAGESIZE
/* These are non-POSIX values we accidentally introduced in 2000 without
   guarding them.  Keeping them unguarded for backward compatibility. */
#define _SC_NPROCESSORS_CONF              9
#define _SC_NPROCESSORS_ONLN             10
#define _SC_PHYS_PAGES                   11
#define _SC_AVPHYS_PAGES                 12
/* End of non-POSIX values. */
#define _SC_MQ_OPEN_MAX                  13
#define _SC_MQ_PRIO_MAX                  14
#define _SC_RTSIG_MAX                    15
#define _SC_SEM_NSEMS_MAX                16
#define _SC_SEM_VALUE_MAX                17
#define _SC_SIGQUEUE_MAX                 18
#define _SC_TIMER_MAX                    19
#define _SC_TZNAME_MAX                   20
#define _SC_ASYNCHRONOUS_IO              21
#define _SC_FSYNC                        22
#define _SC_MAPPED_FILES                 23
#define _SC_MEMLOCK                      24
#define _SC_MEMLOCK_RANGE                25
#define _SC_MEMORY_PROTECTION            26
#define _SC_MESSAGE_PASSING              27
#define _SC_PRIORITIZED_IO               28
#define _SC_REALTIME_SIGNALS             29
#define _SC_SEMAPHORES                   30
#define _SC_SHARED_MEMORY_OBJECTS        31
#define _SC_SYNCHRONIZED_IO              32
#define _SC_TIMERS                       33
#define _SC_AIO_LISTIO_MAX               34
#define _SC_AIO_MAX                      35
#define _SC_AIO_PRIO_DELTA_MAX           36
#define _SC_DELAYTIMER_MAX               37
#define _SC_THREAD_KEYS_MAX              38
#define _SC_THREAD_STACK_MIN             39
#define _SC_THREAD_THREADS_MAX           40
#define _SC_TTY_NAME_MAX                 41
#define _SC_THREADS                      42
#define _SC_THREAD_ATTR_STACKADDR        43
#define _SC_THREAD_ATTR_STACKSIZE        44
#define _SC_THREAD_PRIORITY_SCHEDULING   45
#define _SC_THREAD_PRIO_INHERIT          46
/* _SC_THREAD_PRIO_PROTECT was _SC_THREAD_PRIO_CEILING in early drafts */
#define _SC_THREAD_PRIO_PROTECT          47
#define _SC_THREAD_PRIO_CEILING          _SC_THREAD_PRIO_PROTECT
#define _SC_THREAD_PROCESS_SHARED        48
#define _SC_THREAD_SAFE_FUNCTIONS        49
#define _SC_GETGR_R_SIZE_MAX             50
#define _SC_GETPW_R_SIZE_MAX             51
#define _SC_LOGIN_NAME_MAX               52
#define _SC_THREAD_DESTRUCTOR_ITERATIONS 53
#define _SC_ADVISORY_INFO                54
#define _SC_ATEXIT_MAX                   55
#define _SC_BARRIERS                     56
#define _SC_BC_BASE_MAX                  57
#define _SC_BC_DIM_MAX                   58
#define _SC_BC_SCALE_MAX                 59
#define _SC_BC_STRING_MAX                60
#define _SC_CLOCK_SELECTION              61
#define _SC_COLL_WEIGHTS_MAX             62
#define _SC_CPUTIME                      63
#define _SC_EXPR_NEST_MAX                64
#define _SC_HOST_NAME_MAX                65
#define _SC_IOV_MAX                      66
#define _SC_IPV6                         67
#define _SC_LINE_MAX                     68
#define _SC_MONOTONIC_CLOCK              69
#define _SC_RAW_SOCKETS                  70
#define _SC_READER_WRITER_LOCKS          71
#define _SC_REGEXP                       72
#define _SC_RE_DUP_MAX                   73
#define _SC_SHELL                        74
#define _SC_SPAWN                        75
#define _SC_SPIN_LOCKS                   76
#define _SC_SPORADIC_SERVER              77
#define _SC_SS_REPL_MAX                  78
#define _SC_SYMLOOP_MAX                  79
#define _SC_THREAD_CPUTIME               80
#define _SC_THREAD_SPORADIC_SERVER       81
#define _SC_TIMEOUTS                     82
#define _SC_TRACE                        83
#define _SC_TRACE_EVENT_FILTER           84
#define _SC_TRACE_EVENT_NAME_MAX         85
#define _SC_TRACE_INHERIT                86
#define _SC_TRACE_LOG                    87
#define _SC_TRACE_NAME_MAX               88
#define _SC_TRACE_SYS_MAX                89
#define _SC_TRACE_USER_EVENT_MAX         90
#define _SC_TYPED_MEMORY_OBJECTS         91
#define _SC_V7_ILP32_OFF32               92
#define _SC_V6_ILP32_OFF32               _SC_V7_ILP32_OFF32
#define _SC_XBS5_ILP32_OFF32             _SC_V7_ILP32_OFF32
#define _SC_V7_ILP32_OFFBIG              93
#define _SC_V6_ILP32_OFFBIG              _SC_V7_ILP32_OFFBIG
#define _SC_XBS5_ILP32_OFFBIG            _SC_V7_ILP32_OFFBIG
#define _SC_V7_LP64_OFF64                94
#define _SC_V6_LP64_OFF64                _SC_V7_LP64_OFF64
#define _SC_XBS5_LP64_OFF64              _SC_V7_LP64_OFF64
#define _SC_V7_LPBIG_OFFBIG              95
#define _SC_V6_LPBIG_OFFBIG              _SC_V7_LPBIG_OFFBIG
#define _SC_XBS5_LPBIG_OFFBIG            _SC_V7_LPBIG_OFFBIG
#define _SC_XOPEN_CRYPT                  96
#define _SC_XOPEN_ENH_I18N               97
#define _SC_XOPEN_LEGACY                 98
#define _SC_XOPEN_REALTIME               99
#define _SC_STREAM_MAX                  100
#define _SC_PRIORITY_SCHEDULING         101
#define _SC_XOPEN_REALTIME_THREADS      102
#define _SC_XOPEN_SHM                   103
#define _SC_XOPEN_STREAMS               104
#define _SC_XOPEN_UNIX                  105
#define _SC_XOPEN_VERSION               106
#define _SC_2_CHAR_TERM                 107
#define _SC_2_C_BIND                    108
#define _SC_2_C_DEV                     109
#define _SC_2_FORT_DEV                  110
#define _SC_2_FORT_RUN                  111
#define _SC_2_LOCALEDEF                 112
#define _SC_2_PBS                       113
#define _SC_2_PBS_ACCOUNTING            114
#define _SC_2_PBS_CHECKPOINT            115
#define _SC_2_PBS_LOCATE                116
#define _SC_2_PBS_MESSAGE               117
#define _SC_2_PBS_TRACK                 118
#define _SC_2_SW_DEV                    119
#define _SC_2_UPE                       120
#define _SC_2_VERSION                   121
#define _SC_THREAD_ROBUST_PRIO_INHERIT  122
#define _SC_THREAD_ROBUST_PRIO_PROTECT  123
#define _SC_XOPEN_UUCP                  124
#define _SC_LEVEL1_ICACHE_SIZE          125
#define _SC_LEVEL1_ICACHE_ASSOC         126
#define _SC_LEVEL1_ICACHE_LINESIZE      127
#define _SC_LEVEL1_DCACHE_SIZE          128
#define _SC_LEVEL1_DCACHE_ASSOC         129
#define _SC_LEVEL1_DCACHE_LINESIZE      130
#define _SC_LEVEL2_CACHE_SIZE           131
#define _SC_LEVEL2_CACHE_ASSOC          132
#define _SC_LEVEL2_CACHE_LINESIZE       133
#define _SC_LEVEL3_CACHE_SIZE           134
#define _SC_LEVEL3_CACHE_ASSOC          135
#define _SC_LEVEL3_CACHE_LINESIZE       136
#define _SC_LEVEL4_CACHE_SIZE           137
#define _SC_LEVEL4_CACHE_ASSOC          138
#define _SC_LEVEL4_CACHE_LINESIZE       139
#define _SC_POSIX_26_VERSION            140

/*
 *  pathconf values per IEEE Std 1003.1, 2008 Edition
 */

#define _PC_LINK_MAX                      0
#define _PC_MAX_CANON                     1
#define _PC_MAX_INPUT                     2
#define _PC_NAME_MAX                      3
#define _PC_PATH_MAX                      4
#define _PC_PIPE_BUF                      5
#define _PC_CHOWN_RESTRICTED              6
#define _PC_NO_TRUNC                      7
#define _PC_VDISABLE                      8
#define _PC_ASYNC_IO                      9
#define _PC_PRIO_IO                      10
#define _PC_SYNC_IO                      11
#define _PC_FILESIZEBITS                 12
#define _PC_2_SYMLINKS                   13
#define _PC_SYMLINK_MAX                  14
#define _PC_ALLOC_SIZE_MIN               15
#define _PC_REC_INCR_XFER_SIZE           16
#define _PC_REC_MAX_XFER_SIZE            17
#define _PC_REC_MIN_XFER_SIZE            18
#define _PC_REC_XFER_ALIGN               19
#define _PC_TIMESTAMP_RESOLUTION         20
#ifdef __CYGWIN__
/* Ask for POSIX permission bits support. */
#define _PC_POSIX_PERMISSIONS            90
/* Ask for full POSIX permission support including uid/gid settings. */
#define _PC_POSIX_SECURITY               91
#define _PC_CASE_INSENSITIVE             92
#endif
# 531 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3

/*
 *  confstr values per IEEE Std 1003.1, 2004 Edition
 */

#ifdef __CYGWIN__	/* Only defined on Cygwin for now. */
#define _CS_PATH                               0
#define _CS_POSIX_V7_ILP32_OFF32_CFLAGS        1
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS       _CS_POSIX_V7_ILP32_OFF32_CFLAGS
#define _CS_XBS5_ILP32_OFF32_CFLAGS           _CS_POSIX_V7_ILP32_OFF32_CFLAGS
#define _CS_POSIX_V7_ILP32_OFF32_LDFLAGS       2
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS      _CS_POSIX_V7_ILP32_OFF32_LDFLAGS
#define _CS_XBS5_ILP32_OFF32_LDFLAGS          _CS_POSIX_V7_ILP32_OFF32_LDFLAGS
#define _CS_POSIX_V7_ILP32_OFF32_LIBS          3
#define _CS_POSIX_V6_ILP32_OFF32_LIBS         _CS_POSIX_V7_ILP32_OFF32_LIBS
#define _CS_XBS5_ILP32_OFF32_LIBS             _CS_POSIX_V7_ILP32_OFF32_LIBS
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS         4
#define _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS       5
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS      _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS          _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS
#define _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS      6
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS     _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS         _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS
#define _CS_POSIX_V7_ILP32_OFFBIG_LIBS         7
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS        _CS_POSIX_V7_ILP32_OFFBIG_LIBS
#define _CS_XBS5_ILP32_OFFBIG_LIBS            _CS_POSIX_V7_ILP32_OFFBIG_LIBS
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS        8
#define _CS_POSIX_V7_LP64_OFF64_CFLAGS         9
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS        _CS_POSIX_V7_LP64_OFF64_CFLAGS
#define _CS_XBS5_LP64_OFF64_CFLAGS            _CS_POSIX_V7_LP64_OFF64_CFLAGS
#define _CS_POSIX_V7_LP64_OFF64_LDFLAGS       10
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS       _CS_POSIX_V7_LP64_OFF64_LDFLAGS
#define _CS_XBS5_LP64_OFF64_LDFLAGS           _CS_POSIX_V7_LP64_OFF64_LDFLAGS
#define _CS_POSIX_V7_LP64_OFF64_LIBS          11
#define _CS_POSIX_V6_LP64_OFF64_LIBS          _CS_POSIX_V7_LP64_OFF64_LIBS
#define _CS_XBS5_LP64_OFF64_LIBS              _CS_POSIX_V7_LP64_OFF64_LIBS
#define _CS_XBS5_LP64_OFF64_LINTFLAGS         12
#define _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS      13
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS      _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS          _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS
#define _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS     14
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS     _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS         _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS
#define _CS_POSIX_V7_LPBIG_OFFBIG_LIBS        15
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS        _CS_POSIX_V7_LPBIG_OFFBIG_LIBS
#define _CS_XBS5_LPBIG_OFFBIG_LIBS            _CS_POSIX_V7_LPBIG_OFFBIG_LIBS
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS       16
#define _CS_POSIX_V7_WIDTH_RESTRICTED_ENVS    17
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS    _CS_POSIX_V7_WIDTH_RESTRICTED_ENVS
#define _CS_XBS5_WIDTH_RESTRICTED_ENVS        _CS_POSIX_V7_WIDTH_RESTRICTED_ENVS
#define _CS_POSIX_V7_THREADS_CFLAGS           18
#define _CS_POSIX_V7_THREADS_LDFLAGS          19
#define _CS_V7_ENV                            20
#define _CS_V6_ENV                            _CS_V7_ENV
#define _CS_LFS_CFLAGS                        21
#define _CS_LFS_LDFLAGS                       22
#define _CS_LFS_LIBS                          23
#define _CS_LFS_LINTFLAGS                     24
#endif
# 590 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3

#ifdef __cplusplus
}
#endif
# 594 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3

#if __SSP_FORTIFY_LEVEL > 0
#if 0 /* expanded by -frewrite-includes */
#include <ssp/unistd.h>
#endif /* expanded by -frewrite-includes */
# 596 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
# 597 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
#endif
# 598 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3

#endif /* _SYS_UNISTD_H */
# 600 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/sys/unistd.h" 3
# 5 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/unistd.h" 2 3

#endif /* _UNISTD_H_ */
# 7 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/unistd.h" 3
# 30 "../../../../../newlib/libc/stdio/local.h" 2
#if 0 /* expanded by -frewrite-includes */
#include <stdio.h>
#endif /* expanded by -frewrite-includes */
# 30 "../../../../../newlib/libc/stdio/local.h"
# 31 "../../../../../newlib/libc/stdio/local.h"
#ifdef __SCLE
#if 0 /* expanded by -frewrite-includes */
# include <io.h>
#endif /* expanded by -frewrite-includes */
# 32 "../../../../../newlib/libc/stdio/local.h"
# 33 "../../../../../newlib/libc/stdio/local.h"
#endif
# 34 "../../../../../newlib/libc/stdio/local.h"

/* The following define determines if the per-reent stdin, stdout and stderr
   streams are closed during _reclaim_reent().  The stdin, stdout and stderr
   streams are initialized to use file descriptors 0, 1 and 2 respectively.  In
   case _STDIO_CLOSE_PER_REENT_STD_STREAMS is defined these file descriptors
   will be closed via close() provided the owner of the reent structure
   triggerd the on demand reent initilization, see CHECK_INIT(). */
#if !defined(__tirtos__)
#define _STDIO_CLOSE_PER_REENT_STD_STREAMS
#endif
# 44 "../../../../../newlib/libc/stdio/local.h"

/* The following macros are supposed to replace calls to _flockfile/_funlockfile
   and __sfp_lock_acquire/__sfp_lock_release.  In case of multi-threaded
   environments using pthreads, it's not sufficient to lock the stdio functions
   against concurrent threads accessing the same data, the locking must also be
   secured against thread cancellation.

   The below macros have to be used in pairs.  The _newlib_XXX_start macro
   starts with a opening curly brace, the _newlib_XXX_end macro ends with a
   closing curly brace, so the start macro and the end macro mark the code
   start and end of a critical section.  In case the code leaves the critical
   section before reaching the end of the critical section's code end, use
   the appropriate _newlib_XXX_exit macro. */

#if !defined (__SINGLE_THREAD__) && defined (_POSIX_THREADS) \
    && !defined (__rtems__)
#define _STDIO_WITH_THREAD_CANCELLATION_SUPPORT
#endif
# 62 "../../../../../newlib/libc/stdio/local.h"

#if defined(__SINGLE_THREAD__) || defined(__IMPL_UNLOCKED__)

# define _newlib_flockfile_start(_fp)
# define _newlib_flockfile_exit(_fp)
# define _newlib_flockfile_end(_fp)
# define _newlib_sfp_lock_start()
# define _newlib_sfp_lock_exit()
# define _newlib_sfp_lock_end()

#elif defined(_STDIO_WITH_THREAD_CANCELLATION_SUPPORT)
# 73 "../../../../../newlib/libc/stdio/local.h"
#if 0 /* expanded by -frewrite-includes */
#include <pthread.h>
#endif /* expanded by -frewrite-includes */
# 73 "../../../../../newlib/libc/stdio/local.h"
# 74 "../../../../../newlib/libc/stdio/local.h"

/* Start a stream oriented critical section: */
# define _newlib_flockfile_start(_fp) \
	{ \
	  int __oldfpcancel; \
	  pthread_setcancelstate (PTHREAD_CANCEL_DISABLE, &__oldfpcancel); \
	  if (!(_fp->_flags2 & __SNLK)) \
	    _flockfile (_fp)

/* Exit from a stream oriented critical section prematurely: */
# define _newlib_flockfile_exit(_fp) \
	  if (!(_fp->_flags2 & __SNLK)) \
	    _funlockfile (_fp); \
	  pthread_setcancelstate (__oldfpcancel, &__oldfpcancel);

/* End a stream oriented critical section: */
# define _newlib_flockfile_end(_fp) \
	  if (!(_fp->_flags2 & __SNLK)) \
	    _funlockfile (_fp); \
	  pthread_setcancelstate (__oldfpcancel, &__oldfpcancel); \
	}

/* Start a stream list oriented critical section: */
# define _newlib_sfp_lock_start() \
	{ \
	  int __oldsfpcancel; \
	  pthread_setcancelstate (PTHREAD_CANCEL_DISABLE, &__oldsfpcancel); \
	  __sfp_lock_acquire ()

/* Exit from a stream list oriented critical section prematurely: */
# define _newlib_sfp_lock_exit() \
	  __sfp_lock_release (); \
	  pthread_setcancelstate (__oldsfpcancel, &__oldsfpcancel);

/* End a stream list oriented critical section: */
# define _newlib_sfp_lock_end() \
	  __sfp_lock_release (); \
	  pthread_setcancelstate (__oldsfpcancel, &__oldsfpcancel); \
	}

#else /* !__SINGLE_THREAD__ && !__IMPL_UNLOCKED__ && !_STDIO_WITH_THREAD_CANCELLATION_SUPPORT */
# 115 "../../../../../newlib/libc/stdio/local.h"

# define _newlib_flockfile_start(_fp) \
	{ \
		if (!(_fp->_flags2 & __SNLK)) \
		  _flockfile (_fp)

# define _newlib_flockfile_exit(_fp) \
		if (!(_fp->_flags2 & __SNLK)) \
		  _funlockfile(_fp); \

# define _newlib_flockfile_end(_fp) \
		if (!(_fp->_flags2 & __SNLK)) \
		  _funlockfile(_fp); \
	}

# define _newlib_sfp_lock_start() \
	{ \
		__sfp_lock_acquire ()

# define _newlib_sfp_lock_exit() \
		__sfp_lock_release ();

# define _newlib_sfp_lock_end() \
		__sfp_lock_release (); \
	}

#endif /* __SINGLE_THREAD__ || __IMPL_UNLOCKED__ */
# 142 "../../../../../newlib/libc/stdio/local.h"

extern wint_t __fgetwc (struct _reent *, FILE *);
extern wint_t __fputwc (struct _reent *, wchar_t, FILE *);
extern u_char *__sccl (char *, u_char *fmt);
extern int    __svfscanf_r (struct _reent *,FILE *, const char *,va_list);
extern int    __ssvfscanf_r (struct _reent *,FILE *, const char *,va_list);
extern int    __svfiscanf_r (struct _reent *,FILE *, const char *,va_list);
extern int    __ssvfiscanf_r (struct _reent *,FILE *, const char *,va_list);
extern int    __svfwscanf_r (struct _reent *,FILE *, const wchar_t *,va_list);
extern int    __ssvfwscanf_r (struct _reent *,FILE *, const wchar_t *,va_list);
extern int    __svfiwscanf_r (struct _reent *,FILE *, const wchar_t *,va_list);
extern int    __ssvfiwscanf_r (struct _reent *,FILE *, const wchar_t *,va_list);
int	      _svfprintf_r (struct _reent *, FILE *, const char *, 
				  va_list)
               			_ATTRIBUTE ((__format__ (__printf__, 3, 0)));
int	      _svfiprintf_r (struct _reent *, FILE *, const char *, 
				  va_list)
               			_ATTRIBUTE ((__format__ (__printf__, 3, 0)));
int	      _svfwprintf_r (struct _reent *, FILE *, const wchar_t *, 
				  va_list);
int	      _svfiwprintf_r (struct _reent *, FILE *, const wchar_t *, 
				  va_list);
extern FILE  *__sfp (struct _reent *);
extern int    __sflags (struct _reent *,const char*, int*);
extern int    __sflush_r (struct _reent *,FILE *);
#ifdef _STDIO_BSD_SEMANTICS
extern int    __sflushw_r (struct _reent *,FILE *);
#endif
# 170 "../../../../../newlib/libc/stdio/local.h"
extern int    __srefill_r (struct _reent *,FILE *);
extern _READ_WRITE_RETURN_TYPE __sread (struct _reent *, void *, char *,
					       _READ_WRITE_BUFSIZE_TYPE);
extern _READ_WRITE_RETURN_TYPE __seofread (struct _reent *, void *,
						  char *,
						  _READ_WRITE_BUFSIZE_TYPE);
extern _READ_WRITE_RETURN_TYPE __swrite (struct _reent *, void *,
						const char *,
						_READ_WRITE_BUFSIZE_TYPE);
extern _fpos_t __sseek (struct _reent *, void *, _fpos_t, int);
extern int    __sclose (struct _reent *, void *);
extern int    __stextmode (int);
extern void   __sinit (struct _reent *);
extern void   _cleanup_r (struct _reent *);
extern void   __smakebuf_r (struct _reent *, FILE *);
extern int    __swhatbuf_r (struct _reent *, FILE *, size_t *, int *);
extern int    _fwalk (struct _reent *, int (*)(FILE *));
extern int    _fwalk_reent (struct _reent *, int (*)(struct _reent *, FILE *));
struct _glue * __sfmoreglue (struct _reent *,int n);
extern int __submore (struct _reent *, FILE *);

#ifdef __LARGE64_FILES
extern _fpos64_t __sseek64 (struct _reent *, void *, _fpos64_t, int);
extern _READ_WRITE_RETURN_TYPE __swrite64 (struct _reent *, void *,
						  const char *,
						  _READ_WRITE_BUFSIZE_TYPE);
#endif
# 197 "../../../../../newlib/libc/stdio/local.h"

/* Called by the main entry point fns to ensure stdio has been initialized.  */

#if defined(_REENT_SMALL) && !defined(_REENT_GLOBAL_STDIO_STREAMS)
#define CHECK_INIT(ptr, fp) \
  do								\
    {								\
      struct _reent *_check_init_ptr = (ptr);			\
      if ((_check_init_ptr) && !(_check_init_ptr)->__sdidinit)	\
	__sinit (_check_init_ptr);				\
      if ((fp) == (FILE *)&__sf_fake_stdin)			\
	(fp) = _stdin_r(_check_init_ptr);			\
      else if ((fp) == (FILE *)&__sf_fake_stdout)		\
	(fp) = _stdout_r(_check_init_ptr);			\
      else if ((fp) == (FILE *)&__sf_fake_stderr)		\
	(fp) = _stderr_r(_check_init_ptr);			\
    }								\
  while (0)
#else /* !_REENT_SMALL || _REENT_GLOBAL_STDIO_STREAMS */
# 216 "../../../../../newlib/libc/stdio/local.h"
#define CHECK_INIT(ptr, fp) \
  do								\
    {								\
      struct _reent *_check_init_ptr = (ptr);			\
      if ((_check_init_ptr) && !(_check_init_ptr)->__sdidinit)	\
	__sinit (_check_init_ptr);				\
    }								\
  while (0)
#endif /* !_REENT_SMALL || _REENT_GLOBAL_STDIO_STREAMS */
# 225 "../../../../../newlib/libc/stdio/local.h"

#define CHECK_STD_INIT(ptr) \
  do								\
    {								\
      struct _reent *_check_init_ptr = (ptr);			\
      if ((_check_init_ptr) && !(_check_init_ptr)->__sdidinit)	\
	__sinit (_check_init_ptr);				\
    }								\
  while (0)

/* Return true and set errno and stream error flag iff the given FILE
   cannot be written now.  */

#define	cantwrite(ptr, fp)                                     \
  ((((fp)->_flags & __SWR) == 0 || (fp)->_bf._base == NULL) && \
   __swsetup_r(ptr, fp))

/* Test whether the given stdio file has an active ungetc buffer;
   release such a buffer, without restoring ordinary unread data.  */

#define	HASUB(fp) ((fp)->_ub._base != NULL)
#define	FREEUB(ptr, fp) {                    \
	if ((fp)->_ub._base != (fp)->_ubuf) \
		_free_r(ptr, (char *)(fp)->_ub._base); \
	(fp)->_ub._base = NULL; \
}

/* Test for an fgetline() buffer.  */

#define	HASLB(fp) ((fp)->_lb._base != NULL)
#define	FREELB(ptr, fp) { _free_r(ptr,(char *)(fp)->_lb._base); \
      (fp)->_lb._base = NULL; }

#ifdef _WIDE_ORIENT
/*
 * Set the orientation for a stream. If o > 0, the stream has wide-
 * orientation. If o < 0, the stream has byte-orientation.
 */
#define ORIENT(fp,ori)					\
  do								\
    {								\
      if (!((fp)->_flags & __SORD))	\
	{							\
	  (fp)->_flags |= __SORD;				\
	  if (ori > 0)						\
	    (fp)->_flags2 |= __SWID;				\
	  else							\
	    (fp)->_flags2 &= ~__SWID;				\
	}							\
    }								\
  while (0)
#else
# 277 "../../../../../newlib/libc/stdio/local.h"
#define ORIENT(fp,ori)
#endif
# 279 "../../../../../newlib/libc/stdio/local.h"

/* WARNING: _dcvt is defined in the stdlib directory, not here!  */

char *_dcvt (struct _reent *, char *, double, int, int, char, int);
char *_sicvt (char *, short, char);
char *_icvt (char *, int, char);
char *_licvt (char *, long, char);
#ifdef __GNUC__
char *_llicvt (char *, long long, char);
#endif
# 289 "../../../../../newlib/libc/stdio/local.h"

#define CVT_BUF_SIZE 128

#define	NDYNAMIC 4	/* add four more whenever necessary */

#ifdef __SINGLE_THREAD__
#define __sfp_lock_acquire()
#define __sfp_lock_release()
#define __sinit_lock_acquire()
#define __sinit_lock_release()
#else
# 300 "../../../../../newlib/libc/stdio/local.h"
void __sfp_lock_acquire (void);
void __sfp_lock_release (void);
void __sinit_lock_acquire (void);
void __sinit_lock_release (void);
#endif
# 305 "../../../../../newlib/libc/stdio/local.h"

/* Types used in positional argument support in vfprinf/vfwprintf.
   The implementation is char/wchar_t dependent but the class and state
   tables are only defined once in vfprintf.c. */
typedef enum __packed {
  ZERO,   /* '0' */
  DIGIT,  /* '1-9' */
  DOLLAR, /* '$' */
  MODFR,  /* spec modifier */
  SPEC,   /* format specifier */
  DOT,    /* '.' */
  STAR,   /* '*' */
  FLAG,   /* format flag */
  OTHER,  /* all other chars */
  MAX_CH_CLASS /* place-holder */
} __CH_CLASS;

typedef enum __packed {
  START,  /* start */
  SFLAG,  /* seen a flag */
  WDIG,   /* seen digits in width area */
  WIDTH,  /* processed width */
  SMOD,   /* seen spec modifier */
  SDOT,   /* seen dot */
  VARW,   /* have variable width specifier */
  VARP,   /* have variable precision specifier */
  PREC,   /* processed precision */
  VWDIG,  /* have digits in variable width specification */
  VPDIG,  /* have digits in variable precision specification */
  DONE,   /* done */
  MAX_STATE, /* place-holder */
} __STATE;

typedef enum __packed {
  NOOP,  /* do nothing */
  NUMBER, /* build a number from digits */
  SKIPNUM, /* skip over digits */
  GETMOD,  /* get and process format modifier */
  GETARG,  /* get and process argument */
  GETPW,   /* get variable precision or width */
  GETPWB,  /* get variable precision or width and pushback fmt char */
  GETPOS,  /* get positional parameter value */
  PWPOS,   /* get positional parameter value for variable width or precision */
} __ACTION;

extern const __CH_CLASS __chclass[256];
extern const __STATE __state_table[MAX_STATE][MAX_CH_CLASS];
extern const __ACTION __action_table[MAX_STATE][MAX_CH_CLASS];
# 91 "../../../../../newlib/libc/stdio/vfscanf.c" 2
#if 0 /* expanded by -frewrite-includes */
#include "../stdlib/local.h"
#endif /* expanded by -frewrite-includes */
# 91 "../../../../../newlib/libc/stdio/vfscanf.c"
# 1 "../../../../../newlib/libc/stdio/../stdlib/local.h" 1
/* Misc. local definitions for libc/stdlib */

#ifndef _LOCAL_H_
#define _LOCAL_H_

char *	_gcvt (struct _reent *, double , int , char *, char, int);

#if 0 /* expanded by -frewrite-includes */
#include "../locale/setlocale.h"
#endif /* expanded by -frewrite-includes */
# 8 "../../../../../newlib/libc/stdio/../stdlib/local.h"
# 1 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h" 1
/*-
 * Copyright (C) 1997 by Andrey A. Chernov, Moscow, Russia.
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
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND
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
 * $FreeBSD: src/lib/libc/locale/setlocale.h,v 1.4 2001/12/20 18:28:52 phantom Exp $
 */

#ifndef _SETLOCALE_H_
#define	_SETLOCALE_H_

#if 0 /* expanded by -frewrite-includes */
#include <_ansi.h>
#endif /* expanded by -frewrite-includes */
# 32 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
# 33 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
#if 0 /* expanded by -frewrite-includes */
#include <sys/cdefs.h>
#endif /* expanded by -frewrite-includes */
# 33 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
# 34 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
#if 0 /* expanded by -frewrite-includes */
#include <limits.h>
#endif /* expanded by -frewrite-includes */
# 34 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
# 35 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
#if 0 /* expanded by -frewrite-includes */
#include <string.h>
#endif /* expanded by -frewrite-includes */
# 35 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
# 36 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
#if 0 /* expanded by -frewrite-includes */
#include <stdlib.h>
#endif /* expanded by -frewrite-includes */
# 36 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
# 37 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
#if 0 /* expanded by -frewrite-includes */
#include <wchar.h>
#endif /* expanded by -frewrite-includes */
# 37 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
# 38 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
#if 0 /* expanded by -frewrite-includes */
#include <locale.h>
#endif /* expanded by -frewrite-includes */
# 38 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/locale.h" 1 3
/*
	locale.h
	Values appropriate for the formatting of monetary and other
	numberic quantities.
*/

#ifndef _LOCALE_H_
#define _LOCALE_H_

#if 0 /* expanded by -frewrite-includes */
#include "_ansi.h"
#endif /* expanded by -frewrite-includes */
# 10 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/locale.h" 3
# 11 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/locale.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/cdefs.h>
#endif /* expanded by -frewrite-includes */
# 11 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/locale.h" 3
# 12 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/locale.h" 3

#define __need_NULL
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 14 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/locale.h" 3
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
# 15 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/locale.h" 2 3

#define LC_ALL	    0
#define LC_COLLATE  1
#define LC_CTYPE    2
#define LC_MONETARY 3
#define LC_NUMERIC  4
#define LC_TIME     5
#define LC_MESSAGES 6

#if __POSIX_VISIBLE >= 200809 || defined (_COMPILING_NEWLIB)

#if 0 /* expanded by -frewrite-includes */
#include <xlocale.h>
#endif /* expanded by -frewrite-includes */
# 26 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/locale.h" 3
# 27 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/locale.h" 3

#define LC_ALL_MASK		(1 << LC_ALL)
#define LC_COLLATE_MASK		(1 << LC_COLLATE)
#define LC_CTYPE_MASK		(1 << LC_CTYPE)
#define LC_MONETARY_MASK	(1 << LC_MONETARY)
#define LC_NUMERIC_MASK		(1 << LC_NUMERIC)
#define LC_TIME_MASK		(1 << LC_TIME)
#define LC_MESSAGES_MASK	(1 << LC_MESSAGES)

#define LC_GLOBAL_LOCALE	((struct __locale_t *) -1)

#endif /* __POSIX_VISIBLE >= 200809 */
# 39 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/locale.h" 3

_BEGIN_STD_C

struct lconv
{
  char *decimal_point;
  char *thousands_sep;
  char *grouping;
  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;
  char p_cs_precedes;
  char p_sep_by_space;
  char n_cs_precedes;
  char n_sep_by_space;
  char p_sign_posn;
  char n_sign_posn;
  char int_n_cs_precedes;
  char int_n_sep_by_space;
  char int_n_sign_posn;
  char int_p_cs_precedes;
  char int_p_sep_by_space;
  char int_p_sign_posn;
};

struct _reent;
char *_setlocale_r (struct _reent *, int, const char *);
struct lconv *_localeconv_r (struct _reent *);

struct __locale_t *_newlocale_r (struct _reent *, int, const char *,
				 struct __locale_t *);
void _freelocale_r (struct _reent *, struct __locale_t *);
struct __locale_t *_duplocale_r (struct _reent *, struct __locale_t *);
struct __locale_t *_uselocale_r (struct _reent *, struct __locale_t *);

#ifndef _REENT_ONLY

char *setlocale (int, const char *);
struct lconv *localeconv (void);

#if __POSIX_VISIBLE >= 200809
locale_t newlocale (int, const char *, locale_t);
void freelocale (locale_t);
locale_t duplocale (locale_t);
locale_t uselocale (locale_t);
#endif /* __POSIX_VISIBLE >= 200809 */
# 91 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/locale.h" 3

#endif /* _REENT_ONLY */
# 93 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/locale.h" 3

_END_STD_C

#endif /* _LOCALE_H_ */
# 97 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/locale.h" 3
# 39 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h" 2

__BEGIN_DECLS

#define ENCODING_LEN 31
#define CATEGORY_LEN 11
#define _LC_LAST      7

#ifdef __CYGWIN__
struct lc_collate_T
{
  __uint32_t	 lcid;
  int	       (*mbtowc) (struct _reent *, wchar_t *, const char *, size_t,
			  mbstate_t *);
  char		 codeset[ENCODING_LEN + 1];
};
extern const struct lc_collate_T _C_collate_locale;
#endif
# 56 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"

struct lc_ctype_T
{
  const char	*codeset;	 /* codeset for mbtowc conversion */
  const char	*mb_cur_max;
#ifdef __HAVE_LOCALE_INFO_EXTENDED__
  const char	*outdigits[10];
  const wchar_t	*woutdigits[10];
#endif
# 65 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
};
extern const struct lc_ctype_T _C_ctype_locale;

struct lc_monetary_T
{
  const char	*int_curr_symbol;
  const char	*currency_symbol;
  const char	*mon_decimal_point;
  const char	*mon_thousands_sep;
  const char	*mon_grouping;
  const char	*positive_sign;
  const char	*negative_sign;
  const char	*int_frac_digits;
  const char	*frac_digits;
  const char	*p_cs_precedes;
  const char	*p_sep_by_space;
  const char	*n_cs_precedes;
  const char	*n_sep_by_space;
  const char	*p_sign_posn;
  const char	*n_sign_posn;
#ifdef __HAVE_LOCALE_INFO_EXTENDED__
  const char	*int_p_cs_precedes;
  const char	*int_p_sep_by_space;
  const char	*int_n_cs_precedes;
  const char	*int_n_sep_by_space;
  const char	*int_p_sign_posn;
  const char	*int_n_sign_posn;
  const char	*codeset;	 /* codeset for mbtowc conversion */
  const wchar_t	*wint_curr_symbol;
  const wchar_t	*wcurrency_symbol;
  const wchar_t	*wmon_decimal_point;
  const wchar_t	*wmon_thousands_sep;
  const wchar_t	*wpositive_sign;
  const wchar_t	*wnegative_sign;
#endif
# 100 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
};
extern const struct lc_monetary_T _C_monetary_locale;

struct lc_numeric_T
{
  const char	*decimal_point;
  const char	*thousands_sep;
  const char	*grouping;
#ifdef __HAVE_LOCALE_INFO_EXTENDED__
  const char	*codeset;	 /* codeset for mbtowc conversion */
  const wchar_t	*wdecimal_point;
  const wchar_t	*wthousands_sep;
#endif
# 113 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
};
extern const struct lc_numeric_T _C_numeric_locale;

struct lc_time_T
{
  const char	*mon[12];
  const char	*month[12];
  const char	*wday[7];
  const char	*weekday[7];
  const char	*X_fmt;
  const char	*x_fmt;
  const char	*c_fmt;
  const char	*am_pm[2];
  const char	*date_fmt;
  const char	*alt_month[12];	/* unused */
  const char	*md_order;
  const char	*ampm_fmt;
  const char	*era;
  const char	*era_d_fmt;
  const char	*era_d_t_fmt;
  const char	*era_t_fmt;
  const char	*alt_digits;
#ifdef __HAVE_LOCALE_INFO_EXTENDED__
  const char	*codeset;	 /* codeset for mbtowc conversion */
  const wchar_t	*wmon[12];
  const wchar_t	*wmonth[12];
  const wchar_t	*wwday[7];
  const wchar_t	*wweekday[7];
  const wchar_t	*wX_fmt;
  const wchar_t	*wx_fmt;
  const wchar_t	*wc_fmt;
  const wchar_t	*wam_pm[2];
  const wchar_t	*wdate_fmt;
  const wchar_t	*wampm_fmt;
  const wchar_t	*wera;
  const wchar_t	*wera_d_fmt;
  const wchar_t	*wera_d_t_fmt;
  const wchar_t	*wera_t_fmt;
  const wchar_t	*walt_digits;
#endif
# 153 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
};
extern const struct lc_time_T _C_time_locale;

struct	lc_messages_T
{
  const char	*yesexpr;
  const char	*noexpr;
  const char	*yesstr;
  const char	*nostr;
#ifdef __HAVE_LOCALE_INFO_EXTENDED__
  const char	*codeset;	 /* codeset for mbtowc conversion */
  const wchar_t	*wyesexpr;
  const wchar_t	*wnoexpr;
  const wchar_t	*wyesstr;
  const wchar_t	*wnostr;
#endif
# 169 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
};
extern const struct lc_messages_T _C_messages_locale;

struct __lc_cats
{
  const void	*ptr;
  char		*buf;
};

struct __locale_t
{
  char			 categories[_LC_LAST][ENCODING_LEN + 1];
  int			(*wctomb) (struct _reent *, char *, wchar_t,
				   mbstate_t *);
  int			(*mbtowc) (struct _reent *, wchar_t *,
				   const char *, size_t, mbstate_t *);
  int			 cjk_lang;
  char			*ctype_ptr;
  struct lconv		 lconv;
#ifndef __HAVE_LOCALE_INFO__
  char			 mb_cur_max[2];
  char			 ctype_codeset[ENCODING_LEN + 1];
  char			 message_codeset[ENCODING_LEN + 1];
#else
# 193 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
  struct __lc_cats	 lc_cat[_LC_LAST];
#endif
# 195 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
};

#ifdef _MB_CAPABLE
extern char *__loadlocale (struct __locale_t *, int, const char *);
extern const char *__get_locale_env(struct _reent *, int);
#endif /* _MB_CAPABLE */
# 201 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"

extern struct lconv *__localeconv_l (struct __locale_t *locale);

extern size_t _wcsnrtombs_l (struct _reent *, char *, const wchar_t **,
			     size_t, size_t, mbstate_t *, struct __locale_t *);

/* In POSIX terms the global locale is the process-wide locale.  Use this
   function to always refer to the global locale. */
_ELIDABLE_INLINE struct __locale_t *
__get_global_locale ()
{
  extern struct __locale_t __global_locale;
  return &__global_locale;
}

/* Per REENT locale.  This is newlib-internal. */
_ELIDABLE_INLINE struct __locale_t *
__get_locale_r (struct _reent *r)
{
  return r->_locale;
}

/* In POSIX terms the current locale is the locale used by all functions
   using locale info without providing a locale as parameter (*_l functions).
   The current locale is either the locale of the current thread, if the
   thread called uselocale, or the global locale if not. */
_ELIDABLE_INLINE struct __locale_t *
__get_current_locale (void)
{
  return _REENT->_locale ?: __get_global_locale ();
}

/* Only access fixed "C" locale using this function.  Fake for !_MB_CAPABLE
   targets by returning ptr to globale locale. */
_ELIDABLE_INLINE struct __locale_t *
__get_C_locale (void)
{
#ifndef _MB_CAPABLE
  return __get_global_locale ();
#else
# 241 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
  extern const struct __locale_t __C_locale;
  return (struct __locale_t *) &__C_locale;
#endif
# 244 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
}

#ifdef __CYGWIN__
_ELIDABLE_INLINE const struct lc_collate_T *
__get_collate_locale (struct __locale_t *locale)
{
  return (const struct lc_collate_T *) locale->lc_cat[LC_COLLATE].ptr;
}

_ELIDABLE_INLINE const struct lc_collate_T *
__get_current_collate_locale (void)
{
  return (const struct lc_collate_T *)
	 __get_current_locale ()->lc_cat[LC_COLLATE].ptr;
}
#endif
# 260 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"

#ifdef __HAVE_LOCALE_INFO__
_ELIDABLE_INLINE const struct lc_ctype_T *
__get_ctype_locale (struct __locale_t *locale)
{
  return (const struct lc_ctype_T *) (locale)->lc_cat[LC_CTYPE].ptr;
}

_ELIDABLE_INLINE const struct lc_ctype_T *
__get_current_ctype_locale (void)
{
  return (const struct lc_ctype_T *)
	 __get_current_locale ()->lc_cat[LC_CTYPE].ptr;
}
#endif
# 275 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"

_ELIDABLE_INLINE int
__locale_mb_cur_max_l (struct __locale_t *locale)
{
#ifdef __HAVE_LOCALE_INFO__
  return __get_ctype_locale (locale)->mb_cur_max[0];
#else
# 282 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
  return locale->mb_cur_max[0];
#endif
# 284 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
}

#ifdef __HAVE_LOCALE_INFO__
_ELIDABLE_INLINE const struct lc_monetary_T *
__get_monetary_locale (struct __locale_t *locale)
{
  return (const struct lc_monetary_T *) (locale)->lc_cat[LC_MONETARY].ptr;
}

_ELIDABLE_INLINE const struct lc_monetary_T *
__get_current_monetary_locale (void)
{
  return (const struct lc_monetary_T *)
	 __get_current_locale ()->lc_cat[LC_MONETARY].ptr;
}

_ELIDABLE_INLINE const struct lc_numeric_T *
__get_numeric_locale (struct __locale_t *locale)
{
  return (const struct lc_numeric_T *) (locale)->lc_cat[LC_NUMERIC].ptr;
}

_ELIDABLE_INLINE const struct lc_numeric_T *
__get_current_numeric_locale (void)
{
  return (const struct lc_numeric_T *)
	 __get_current_locale ()->lc_cat[LC_NUMERIC].ptr;
}

_ELIDABLE_INLINE const struct lc_time_T *
__get_time_locale (struct __locale_t *locale)
{
  return (const struct lc_time_T *) (locale)->lc_cat[LC_TIME].ptr;
}

_ELIDABLE_INLINE const struct lc_time_T *
__get_current_time_locale (void)
{
  return (const struct lc_time_T *)
	 __get_current_locale ()->lc_cat[LC_TIME].ptr;
}

_ELIDABLE_INLINE const struct lc_messages_T *
__get_messages_locale (struct __locale_t *locale)
{
  return (const struct lc_messages_T *) (locale)->lc_cat[LC_MESSAGES].ptr;
}

_ELIDABLE_INLINE const struct lc_messages_T *
__get_current_messages_locale (void)
{
  return (const struct lc_messages_T *)
	 __get_current_locale ()->lc_cat[LC_MESSAGES].ptr;
}
#else /* ! __HAVE_LOCALE_INFO__ */
# 339 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
_ELIDABLE_INLINE const struct lc_monetary_T *
__get_monetary_locale (struct __locale_t *locale)
{
  return &_C_monetary_locale;
}

_ELIDABLE_INLINE const struct lc_monetary_T *
__get_current_monetary_locale (void)
{
  return &_C_monetary_locale;
}

_ELIDABLE_INLINE const struct lc_numeric_T *
__get_numeric_locale (struct __locale_t *locale)
{
  return &_C_numeric_locale;
}

_ELIDABLE_INLINE const struct lc_numeric_T *
__get_current_numeric_locale (void)
{
  return &_C_numeric_locale;
}

_ELIDABLE_INLINE const struct lc_time_T *
__get_time_locale (struct __locale_t *locale)
{
  return &_C_time_locale;
}

_ELIDABLE_INLINE const struct lc_time_T *
__get_current_time_locale (void)
{
  return &_C_time_locale;
}

_ELIDABLE_INLINE const struct lc_messages_T *
__get_messages_locale (struct __locale_t *locale)
{
  return &_C_messages_locale;
}

_ELIDABLE_INLINE const struct lc_messages_T *
__get_current_messages_locale (void)
{
  return &_C_messages_locale;
}
#endif /* !__HAVE_LOCALE_INFO__ */
# 387 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"

_ELIDABLE_INLINE const char *
__locale_charset (struct __locale_t *locale)
{
#ifdef __HAVE_LOCALE_INFO__
  return __get_ctype_locale (locale)->codeset;
#else
# 394 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
  return locale->ctype_codeset;
#endif
# 396 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
}

_ELIDABLE_INLINE const char *
__current_locale_charset (void)
{
#ifdef __HAVE_LOCALE_INFO__
  return __get_current_ctype_locale ()->codeset;
#else
# 404 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
  return __get_current_locale ()->ctype_codeset;
#endif
# 406 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
}

_ELIDABLE_INLINE const char *
__locale_msgcharset (void)
{
#ifdef __HAVE_LOCALE_INFO__
  return (char *) __get_current_messages_locale ()->codeset;
#else
# 414 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
  return (char *) __get_current_locale ()->message_codeset;
#endif
# 416 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
}

_ELIDABLE_INLINE int
__locale_cjk_lang (void)
{
  return __get_current_locale ()->cjk_lang;
}

int __ctype_load_locale (struct __locale_t *, const char *, void *,
			 const char *, int);
int __monetary_load_locale (struct __locale_t *, const char *, void *,
			    const char *);
int __numeric_load_locale (struct __locale_t *, const char *, void *,
			   const char *);
int __time_load_locale (struct __locale_t *, const char *, void *,
			const char *);
int __messages_load_locale (struct __locale_t *, const char *, void *,
			    const char *);
#ifdef __CYGWIN__
int __collate_load_locale (struct __locale_t *, const char *, void *,
			   const char *);

extern void __set_charset_from_locale (const char *locale, char *charset);
extern char *__set_locale_from_locale_alias (const char *, char *);
#endif
# 441 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"

__END_DECLS

#endif /* !_SETLOCALE_H_ */
# 445 "../../../../../newlib/libc/stdio/../stdlib/../locale/setlocale.h"
# 9 "../../../../../newlib/libc/stdio/../stdlib/local.h" 2

#ifndef __machine_mbstate_t_defined
#if 0 /* expanded by -frewrite-includes */
#include <wchar.h>
#endif /* expanded by -frewrite-includes */
# 11 "../../../../../newlib/libc/stdio/../stdlib/local.h"
# 12 "../../../../../newlib/libc/stdio/../stdlib/local.h"
#endif
# 13 "../../../../../newlib/libc/stdio/../stdlib/local.h"

typedef int wctomb_f (struct _reent *, char *, wchar_t, mbstate_t *);
typedef wctomb_f *wctomb_p;

wctomb_f __ascii_wctomb;
#ifdef _MB_CAPABLE
wctomb_f __utf8_wctomb;
wctomb_f __sjis_wctomb;
wctomb_f __eucjp_wctomb;
wctomb_f __jis_wctomb;
wctomb_p __iso_wctomb (int val);
wctomb_p __cp_wctomb (int val);
#ifdef __CYGWIN__
wctomb_f __gbk_wctomb;
wctomb_f __kr_wctomb;
wctomb_f __big5_wctomb;
#endif
# 30 "../../../../../newlib/libc/stdio/../stdlib/local.h"
#endif
# 31 "../../../../../newlib/libc/stdio/../stdlib/local.h"

#define __WCTOMB (__get_current_locale ()->wctomb)

typedef int mbtowc_f (struct _reent *, wchar_t *, const char *, size_t,
		      mbstate_t *);
typedef mbtowc_f *mbtowc_p;

mbtowc_f __ascii_mbtowc;
#ifdef _MB_CAPABLE
mbtowc_f __utf8_mbtowc;
mbtowc_f __sjis_mbtowc;
mbtowc_f __eucjp_mbtowc;
mbtowc_f __jis_mbtowc;
mbtowc_p __iso_mbtowc (int val);
mbtowc_p __cp_mbtowc (int val);
#ifdef __CYGWIN__
mbtowc_f __gbk_mbtowc;
mbtowc_f __kr_mbtowc;
mbtowc_f __big5_mbtowc;
#endif
# 51 "../../../../../newlib/libc/stdio/../stdlib/local.h"
#endif
# 52 "../../../../../newlib/libc/stdio/../stdlib/local.h"

#define __MBTOWC (__get_current_locale ()->mbtowc)

extern wchar_t __iso_8859_conv[14][0x60];
int __iso_8859_val_index (int);
int __iso_8859_index (const char *);

extern wchar_t __cp_conv[][0x80];
int __cp_val_index (int);
int __cp_index (const char *);

#endif
# 64 "../../../../../newlib/libc/stdio/../stdlib/local.h"
# 92 "../../../../../newlib/libc/stdio/vfscanf.c" 2

#ifdef INTEGER_ONLY
#define VFSCANF vfiscanf
#define _VFSCANF_R _vfiscanf_r
#define __SVFSCANF __svfiscanf
#ifdef STRING_ONLY
#  define __SVFSCANF_R __ssvfiscanf_r
#else
# 100 "../../../../../newlib/libc/stdio/vfscanf.c"
#  define __SVFSCANF_R __svfiscanf_r
#endif
# 102 "../../../../../newlib/libc/stdio/vfscanf.c"
#else
# 103 "../../../../../newlib/libc/stdio/vfscanf.c"
#define VFSCANF vfscanf
#define _VFSCANF_R _vfscanf_r
#define __SVFSCANF __svfscanf
#ifdef STRING_ONLY
#  define __SVFSCANF_R __ssvfscanf_r
#else
# 109 "../../../../../newlib/libc/stdio/vfscanf.c"
#  define __SVFSCANF_R __svfscanf_r
#endif
# 111 "../../../../../newlib/libc/stdio/vfscanf.c"
#ifndef NO_FLOATING_POINT
#define FLOATING_POINT
#endif
# 114 "../../../../../newlib/libc/stdio/vfscanf.c"
#endif
# 115 "../../../../../newlib/libc/stdio/vfscanf.c"

#ifdef STRING_ONLY
#undef _newlib_flockfile_start
#undef _newlib_flockfile_exit
#undef _newlib_flockfile_end
#define _newlib_flockfile_start(x) {}
#define _newlib_flockfile_exit(x) {}
#define _newlib_flockfile_end(x) {}
#define _ungetc_r _sungetc_r
#define __srefill_r __ssrefill_r
#define _fread_r _sfread_r
#endif
# 127 "../../../../../newlib/libc/stdio/vfscanf.c"

#ifdef FLOATING_POINT
#if 0 /* expanded by -frewrite-includes */
#include <math.h>
#endif /* expanded by -frewrite-includes */
# 129 "../../../../../newlib/libc/stdio/vfscanf.c"
# 1 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 1 3
#ifndef  _MATH_H_

#define  _MATH_H_

#if 0 /* expanded by -frewrite-includes */
#include <sys/reent.h>
#endif /* expanded by -frewrite-includes */
# 5 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
# 6 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/cdefs.h>
#endif /* expanded by -frewrite-includes */
# 6 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
# 7 "/media/tatokis/Lain/lainux/ps2clang/newlib-3.0.0.20180802/newlib/libc/include/math.h" 3
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
# 130 "../../../../../newlib/libc/stdio/vfscanf.c" 2
#if 0 /* expanded by -frewrite-includes */
#include <float.h>
#endif /* expanded by -frewrite-includes */
# 130 "../../../../../newlib/libc/stdio/vfscanf.c"
# 1 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/float.h" 1
/*===---- float.h - Characteristics of floating point types ----------------===
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

#ifndef __FLOAT_H
#define __FLOAT_H

/* If we're on MinGW, fall back to the system's float.h, which might have
 * additional definitions provided for Windows.
 * For more details see http://msdn.microsoft.com/en-us/library/y0ybw9fy.aspx
 *
 * Also fall back on Darwin to allow additional definitions and
 * implementation-defined values.
 */
#if (defined(__APPLE__) || (defined(__MINGW32__) || defined(_MSC_VER))) && \
    __STDC_HOSTED__ && (0)/*__has_include_next(<float.h>)*/

/* Prior to Apple's 10.7 SDK, float.h SDK header used to apply an extra level
 * of #include_next<float.h> to keep Metrowerks compilers happy. Avoid this
 * extra indirection.
 */
#ifdef __APPLE__
#define _FLOAT_H_
#endif
# 44 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/float.h"

#if 0 /* expanded by -frewrite-includes */
#  include_next <float.h>
#endif /* expanded by -frewrite-includes */
# 45 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/float.h"
# 46 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/float.h"

/* Undefine anything that we'll be redefining below. */
#  undef FLT_EVAL_METHOD
#  undef FLT_ROUNDS
#  undef FLT_RADIX
#  undef FLT_MANT_DIG
#  undef DBL_MANT_DIG
#  undef LDBL_MANT_DIG
#  if __STDC_VERSION__ >= 199901L || !defined(__STRICT_ANSI__)
#    undef DECIMAL_DIG
#  endif
# 57 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/float.h"
#  undef FLT_DIG
#  undef DBL_DIG
#  undef LDBL_DIG
#  undef FLT_MIN_EXP
#  undef DBL_MIN_EXP
#  undef LDBL_MIN_EXP
#  undef FLT_MIN_10_EXP
#  undef DBL_MIN_10_EXP
#  undef LDBL_MIN_10_EXP
#  undef FLT_MAX_EXP
#  undef DBL_MAX_EXP
#  undef LDBL_MAX_EXP
#  undef FLT_MAX_10_EXP
#  undef DBL_MAX_10_EXP
#  undef LDBL_MAX_10_EXP
#  undef FLT_MAX
#  undef DBL_MAX
#  undef LDBL_MAX
#  undef FLT_EPSILON
#  undef DBL_EPSILON
#  undef LDBL_EPSILON
#  undef FLT_MIN
#  undef DBL_MIN
#  undef LDBL_MIN
#  if __STDC_VERSION__ >= 201112L || !defined(__STRICT_ANSI__)
#    undef FLT_TRUE_MIN
#    undef DBL_TRUE_MIN
#    undef LDBL_TRUE_MIN
#    undef FLT_DECIMAL_DIG
#    undef DBL_DECIMAL_DIG
#    undef LDBL_DECIMAL_DIG
#  endif
# 89 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/float.h"
#endif
# 90 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/float.h"

/* Characteristics of floating point types, C99 5.2.4.2.2 */

#define FLT_EVAL_METHOD __FLT_EVAL_METHOD__
#define FLT_ROUNDS (__builtin_flt_rounds())
#define FLT_RADIX __FLT_RADIX__

#define FLT_MANT_DIG __FLT_MANT_DIG__
#define DBL_MANT_DIG __DBL_MANT_DIG__
#define LDBL_MANT_DIG __LDBL_MANT_DIG__

#if __STDC_VERSION__ >= 199901L || !defined(__STRICT_ANSI__)
#  define DECIMAL_DIG __DECIMAL_DIG__
#endif
# 104 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/float.h"

#define FLT_DIG __FLT_DIG__
#define DBL_DIG __DBL_DIG__
#define LDBL_DIG __LDBL_DIG__

#define FLT_MIN_EXP __FLT_MIN_EXP__
#define DBL_MIN_EXP __DBL_MIN_EXP__
#define LDBL_MIN_EXP __LDBL_MIN_EXP__

#define FLT_MIN_10_EXP __FLT_MIN_10_EXP__
#define DBL_MIN_10_EXP __DBL_MIN_10_EXP__
#define LDBL_MIN_10_EXP __LDBL_MIN_10_EXP__

#define FLT_MAX_EXP __FLT_MAX_EXP__
#define DBL_MAX_EXP __DBL_MAX_EXP__
#define LDBL_MAX_EXP __LDBL_MAX_EXP__

#define FLT_MAX_10_EXP __FLT_MAX_10_EXP__
#define DBL_MAX_10_EXP __DBL_MAX_10_EXP__
#define LDBL_MAX_10_EXP __LDBL_MAX_10_EXP__

#define FLT_MAX __FLT_MAX__
#define DBL_MAX __DBL_MAX__
#define LDBL_MAX __LDBL_MAX__

#define FLT_EPSILON __FLT_EPSILON__
#define DBL_EPSILON __DBL_EPSILON__
#define LDBL_EPSILON __LDBL_EPSILON__

#define FLT_MIN __FLT_MIN__
#define DBL_MIN __DBL_MIN__
#define LDBL_MIN __LDBL_MIN__

#if __STDC_VERSION__ >= 201112L || !defined(__STRICT_ANSI__)
#  define FLT_TRUE_MIN __FLT_DENORM_MIN__
#  define DBL_TRUE_MIN __DBL_DENORM_MIN__
#  define LDBL_TRUE_MIN __LDBL_DENORM_MIN__
#  define FLT_DECIMAL_DIG __FLT_DECIMAL_DIG__
#  define DBL_DECIMAL_DIG __DBL_DECIMAL_DIG__
#  define LDBL_DECIMAL_DIG __LDBL_DECIMAL_DIG__
#endif
# 145 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/float.h"

#ifdef __STDC_WANT_IEC_60559_TYPES_EXT__
#  define FLT16_MANT_DIG    __FLT16_MANT_DIG__
#  define FLT16_DECIMAL_DIG __FLT16_DECIMAL_DIG__
#  define FLT16_DIG         __FLT16_DIG__
#  define FLT16_MIN_EXP     __FLT16_MIN_EXP__
#  define FLT16_MIN_10_EXP  __FLT16_MIN_10_EXP__
#  define FLT16_MAX_EXP     __FLT16_MAX_EXP__
#  define FLT16_MAX_10_EXP  __FLT16_MAX_10_EXP__
#  define FLT16_MAX         __FLT16_MAX__
#  define FLT16_EPSILON     __FLT16_EPSILON__
#  define FLT16_MIN         __FLT16_MIN__
#  define FLT16_TRUE_MIN    __FLT16_TRUE_MIN__
#endif /* __STDC_WANT_IEC_60559_TYPES_EXT__ */
# 159 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/float.h"

#endif /* __FLOAT_H */
# 161 "/media/tatokis/Lain/lainux/ps2clang/ee/lib/clang/7.0.0/include/float.h"
# 131 "../../../../../newlib/libc/stdio/vfscanf.c" 2
#if 0 /* expanded by -frewrite-includes */
#include <locale.h>
#endif /* expanded by -frewrite-includes */
# 131 "../../../../../newlib/libc/stdio/vfscanf.c"
# 132 "../../../../../newlib/libc/stdio/vfscanf.c"

/* Currently a test is made to see if long double processing is warranted.
   This could be changed in the future should the _ldtoa_r code be
   preferred over _dtoa_r.  */
#define _NO_LONGDBL
#if defined _WANT_IO_LONG_DOUBLE && (LDBL_MANT_DIG > DBL_MANT_DIG)
#undef _NO_LONGDBL
#endif
# 140 "../../../../../newlib/libc/stdio/vfscanf.c"

#if 0 /* expanded by -frewrite-includes */
#include "floatio.h"
#endif /* expanded by -frewrite-includes */
# 141 "../../../../../newlib/libc/stdio/vfscanf.c"
# 1 "../../../../../newlib/libc/stdio/floatio.h" 1
/*
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that the above copyright notice and this paragraph are
 * duplicated in all such forms and that any documentation,
 * advertising materials, and other materials related to such
 * distribution and use acknowledge that the software was developed
 * by the University of California, Berkeley.  The name of the
 * University may not be used to endorse or promote products derived
 * from this software without specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 *
 *	%W% (Berkeley) %G%
 */

/*
 * Floating point scanf/printf (input/output) definitions.
 */

#ifdef _NO_LONGDBL
/* 11-bit exponent (VAX G floating point) is 308 decimal digits */
#define	MAXEXP		308
#else  /* !_NO_LONGDBL */
# 28 "../../../../../newlib/libc/stdio/floatio.h"
/* 15-bit exponent (Intel extended floating point) is 4932 decimal digits */
#define MAXEXP          4932
#endif /* !_NO_LONGDBL */
# 31 "../../../../../newlib/libc/stdio/floatio.h"
/* 128 bit fraction takes up 39 decimal digits; max reasonable precision */
#define	MAXFRACT	39
# 142 "../../../../../newlib/libc/stdio/vfscanf.c" 2

#define BUF (MAXEXP+MAXFRACT+MB_LEN_MAX+2) /* decimal point + sign + NUL */

/* An upper bound for how long a long prints in decimal.  4 / 13 approximates
   log (2).  Add one char for roundoff compensation and one for the sign.  */
#define MAX_LONG_LEN ((CHAR_BIT * sizeof (long)  - 1) * 4 / 13 + 2)
#else
# 149 "../../../../../newlib/libc/stdio/vfscanf.c"
#define	BUF	40
#endif
# 151 "../../../../../newlib/libc/stdio/vfscanf.c"

#define _NO_LONGLONG
#if defined _WANT_IO_LONG_LONG \
	&& (defined __GNUC__ || __STDC_VERSION__ >= 199901L)
# undef _NO_LONGLONG
#endif
# 157 "../../../../../newlib/libc/stdio/vfscanf.c"

#define _NO_POS_ARGS
#ifdef _WANT_IO_POS_ARGS
# undef _NO_POS_ARGS
# ifdef NL_ARGMAX
#  define MAX_POS_ARGS NL_ARGMAX
# else
# 164 "../../../../../newlib/libc/stdio/vfscanf.c"
#  define MAX_POS_ARGS 32
# endif
# 166 "../../../../../newlib/libc/stdio/vfscanf.c"

static void * get_arg (int, va_list *, int *, void **);
#endif /* _WANT_IO_POS_ARGS */
# 169 "../../../../../newlib/libc/stdio/vfscanf.c"

/*
 * Flags used during conversion.
 */

#define	LONG		0x01	/* l: long or double */
#define	LONGDBL		0x02	/* L/ll: long double or long long */
#define	SHORT		0x04	/* h: short */
#define CHAR		0x08	/* hh: 8 bit integer */
#define	SUPPRESS	0x10	/* suppress assignment */
#define	POINTER		0x20	/* weird %p pointer (`fake hex') */
#define	NOSKIP		0x40	/* do not skip blanks */
#define	MALLOC 		0x80	/* handle 'm' modifier */

/*
 * The following are used in numeric conversions only:
 * SIGNOK, NDIGITS, DPTOK, and EXPOK are for floating point;
 * SIGNOK, NDIGITS, PFXOK, and NZDIGITS are for integral.
 */

#define	SIGNOK		0x80	/* +/- is (still) legal */
#define	NDIGITS		0x100	/* no digits detected */

#define	DPTOK		0x200	/* (float) decimal point is still legal */
#define	EXPOK		0x400	/* (float) exponent (e+3, etc) still legal */

#define	PFXOK		0x200	/* 0x prefix is (still) legal */
#define	NZDIGITS	0x400	/* no zero digits detected */
#define	NNZDIGITS	0x800	/* no non-zero digits detected */

/*
 * Conversion types.
 */

#define	CT_CHAR		0	/* %c conversion */
#define	CT_CCL		1	/* %[...] conversion */
#define	CT_STRING	2	/* %s conversion */
#define	CT_INT		3	/* integer, i.e., strtol or strtoul */
#define	CT_FLOAT	4	/* floating, i.e., strtod */

#define u_char unsigned char
#define u_long unsigned long

#ifndef _NO_LONGLONG
typedef unsigned long long u_long_long;
#endif
# 215 "../../../../../newlib/libc/stdio/vfscanf.c"

/*
 * vfscanf
 */

#define BufferEmpty (fp->_r <= 0 && __srefill_r(rptr, fp))

#ifndef STRING_ONLY

#ifndef _REENT_ONLY

int
VFSCANF (register FILE *fp,
       const char *fmt,
       va_list ap)
{
  struct _reent *reent = _REENT;

  CHECK_INIT(reent, fp);
  return __SVFSCANF_R (reent, fp, fmt, ap);
}

int
__SVFSCANF (register FILE *fp,
       char const *fmt0,
       va_list ap)
{
  return __SVFSCANF_R (_REENT, fp, fmt0, ap);
}

#endif /* !_REENT_ONLY */
# 246 "../../../../../newlib/libc/stdio/vfscanf.c"

int
_VFSCANF_R (struct _reent *data,
       register FILE *fp,
       const char *fmt,
       va_list ap)
{
  CHECK_INIT(data, fp);
  return __SVFSCANF_R (data, fp, fmt, ap);
}
#endif /* !STRING_ONLY */
# 257 "../../../../../newlib/libc/stdio/vfscanf.c"

#if defined (STRING_ONLY) && defined (INTEGER_ONLY)
/* When dealing with the sscanf family, we don't want to use the
 * regular ungetc which will drag in file I/O items we don't need.
 * So, we create our own trimmed-down version.  */
int
_sungetc_r (struct _reent *data,
	int c,
	register FILE *fp)
{
  if (c == EOF)
    return (EOF);

  /* After ungetc, we won't be at eof anymore */
  fp->_flags &= ~__SEOF;
  c = (unsigned char) c;

  /*
   * If we are in the middle of ungetc'ing, just continue.
   * This may require expanding the current ungetc buffer.
   */

  if (HASUB (fp))
    {
      if (fp->_r >= fp->_ub._size && __submore (data, fp))
        {
          return EOF;
        }
      *--fp->_p = c;
      fp->_r++;
      return c;
    }

  /*
   * If we can handle this by simply backing up, do so,
   * but never replace the original character.
   * (This makes sscanf() work when scanning `const' data.)
   */

  if (fp->_bf._base != NULL && fp->_p > fp->_bf._base && fp->_p[-1] == c)
    {
      fp->_p--;
      fp->_r++;
      return c;
    }

  /*
   * Create an ungetc buffer.
   * Initially, we will use the `reserve' buffer.
   */

  fp->_ur = fp->_r;
  fp->_up = fp->_p;
  fp->_ub._base = fp->_ubuf;
  fp->_ub._size = sizeof (fp->_ubuf);
  fp->_ubuf[sizeof (fp->_ubuf) - 1] = c;
  fp->_p = &fp->_ubuf[sizeof (fp->_ubuf) - 1];
  fp->_r = 1;
  return c;
}

/* String only version of __srefill_r for sscanf family.  */
int
__ssrefill_r (struct _reent * ptr,
       register FILE * fp)
{
  /*
   * Our only hope of further input is the ungetc buffer.
   * If there is anything in that buffer to read, return.
   */
  if (HASUB (fp))
    {
      FREEUB (ptr, fp);
      if ((fp->_r = fp->_ur) != 0)
        {
          fp->_p = fp->_up;
	  return 0;
        }
    }

  /* Otherwise we are out of character input.  */
  fp->_p = fp->_bf._base;
  fp->_r = 0;
  fp->_flags |= __SEOF;
  return EOF;
}

size_t
_sfread_r (struct _reent * ptr,
       void *buf,
       size_t size,
       size_t count,
       FILE * fp)
{
  register size_t resid;
  register char *p;
  register int r;
  size_t total;

  if ((resid = count * size) == 0)
    return 0;

  total = resid;
  p = buf;

  while (resid > (r = fp->_r))
    {
      (void) memcpy ((void *) p, (void *) fp->_p, (size_t) r);
      fp->_p += r;
      fp->_r = 0;
      p += r;
      resid -= r;
      if (__ssrefill_r (ptr, fp))
        {
          /* no more input: return partial result */
          return (total - resid) / size;
        }
    }
  (void) memcpy ((void *) p, (void *) fp->_p, resid);
  fp->_r -= resid;
  fp->_p += resid;
  return count;
}
#else /* !STRING_ONLY || !INTEGER_ONLY */
# 381 "../../../../../newlib/libc/stdio/vfscanf.c"
int _sungetc_r (struct _reent *, int, register FILE *);
int __ssrefill_r (struct _reent *, register FILE *);
size_t _sfread_r (struct _reent *, void *buf, size_t, size_t, FILE *);
#endif /* !STRING_ONLY || !INTEGER_ONLY */
# 385 "../../../../../newlib/libc/stdio/vfscanf.c"

static inline int
__wctob (struct _reent *rptr, wint_t wc)
{
  mbstate_t mbs;
  unsigned char pmb[MB_LEN_MAX];

  if (wc == WEOF)
    return EOF;
  memset (&mbs, '\0', sizeof (mbs));
  return __WCTOMB (rptr, (char *) pmb, wc, &mbs) == 1 ? (int) pmb[0] : 0;
}

int
__SVFSCANF_R (struct _reent *rptr,
       register FILE *fp,
       char const *fmt0,
       va_list ap)
{
  register u_char *fmt = (u_char *) fmt0;
  register int c;		/* character from format, or conversion */
  register size_t width;	/* field width, or 0 */
  register char *p;		/* points into all kinds of strings */
  register int n;		/* handy integer */
  register int flags;		/* flags as defined above */
  register char *p0;		/* saves original value of p when necessary */
  int nassigned;		/* number of fields assigned */
  int nread;			/* number of characters consumed from fp */
#ifndef _NO_POS_ARGS
  int N;			/* arg number */
  int arg_index = 0;		/* index into args processed directly */
  int numargs = 0;		/* number of varargs read */
  void *args[MAX_POS_ARGS];	/* positional args read */
  int is_pos_arg;		/* is current format positional? */
#endif
# 420 "../../../../../newlib/libc/stdio/vfscanf.c"
  int base = 0;			/* base argument to strtol/strtoul */
  int nbytes = 1;               /* number of bytes read from fmt string */
  wchar_t wc;                   /* wchar to use to read format string */
  wchar_t *wcp;                 /* handy wide character pointer */
  size_t mbslen;                /* length of converted multibyte sequence */
#ifdef _MB_CAPABLE
  mbstate_t state;              /* value to keep track of multibyte state */
#endif
# 428 "../../../../../newlib/libc/stdio/vfscanf.c"
#ifdef _WANT_IO_C99_FORMATS
#define _WANT_IO_POSIX_EXTENSIONS
#endif
# 431 "../../../../../newlib/libc/stdio/vfscanf.c"
#ifdef _WANT_IO_POSIX_EXTENSIONS
  /* POSIX requires that fscanf frees all allocated strings from 'm'
     conversions in case it returns EOF.  m_ptr is used to keep track.
     It will be allocated on the stack the first time an 'm' conversion
     takes place, and it will be free'd on return from the function.
     This implementation tries to save space by only allocating 8
     pointer slots at a time.  Most scenarios should never have to call
     realloc again.  This implementation allows only up to 65528 'm'
     conversions per fscanf invocation for now.  That should be enough
     for almost all scenarios, right? */
  struct m_ptrs {
    void ***m_arr;		/* Array of pointer args to 'm' conversion */
    uint16_t m_siz;		/* Number of slots in m_arr */
    uint16_t m_cnt;		/* Number of valid entries in m_arr */
  } *m_ptr = NULL;
  #define init_m_ptr()							\
    do									\
      {									\
	if (!m_ptr)							\
	  {								\
	    m_ptr = (struct m_ptrs *) alloca (sizeof *m_ptr);		\
	    m_ptr->m_arr = NULL;					\
	    m_ptr->m_siz = 0;						\
	    m_ptr->m_cnt = 0;						\
	  }								\
      }									\
    while (0)
  #define push_m_ptr(arg)						\
    do									\
      {									\
	if (m_ptr->m_cnt >= m_ptr->m_siz)				\
	  {								\
	    void ***n = NULL;						\
									\
	    if (m_ptr->m_siz + 8 > 0 && m_ptr->m_siz + 8 < UINT16_MAX)	\
	      n = (void ***) realloc (m_ptr->m_arr,			\
				      (m_ptr->m_siz + 8) *		\
				      sizeof (void **));		\
	    if (!n)							\
	      {								\
		nassigned = EOF;					\
		goto match_failure;					\
	      }								\
	    m_ptr->m_arr = n;						\
	    m_ptr->m_siz += 8;						\
	  }								\
	m_ptr->m_arr[m_ptr->m_cnt++] = (void **) (arg);				\
      }									\
    while (0)
  #define alloc_m_ptr(_type, _p, _p0, _p_p, _w)				\
    ({									\
      _p_p = GET_ARG (N, ap, _type **);					\
      if (!_p_p)							\
	goto match_failure;						\
      _p0 = (_type *) malloc ((_w) * sizeof (_type));			\
      if (!_p0)								\
	{								\
	  nassigned = EOF;						\
	  goto match_failure;						\
	}								\
      *_p_p = _p0;							\
      push_m_ptr (_p_p);						\
      _p = _p0;								\
      _w;								\
    })
  /* For systems with wchar_t == 2 (UTF-16) check if there's room for
     at least 2 wchar_t's (surrogate pairs). */
  #define realloc_m_ptr(_type, _p, _p0, _p_p, _w)			\
    ({									\
      size_t _nw = (_w);						\
      ptrdiff_t _dif = _p - _p0;					\
      if (_p_p &&							\
	  ((sizeof (_type) == 2 && _dif >= _nw - 1)			\
	   || _dif >= _nw))						\
	{								\
	  _p0 = (_type *) realloc (_p0, (_nw << 1) * sizeof (_type));			\
	  if (!_p0)							\
	    {								\
	      nassigned = EOF;						\
	      goto match_failure;					\
	    }								\
	  _p = _p0 + _dif;						\
	  *_p_p = _p0;							\
	  _nw <<= 1;							\
	}								\
      _nw;								\
    })
  #define shrink_m_ptr(_type, _p_p, _w, _cw)				\
    ({									\
	size_t _nw = (_w);						\
	if (_p_p && _nw < _cw)						\
	  {								\
	    _type *_np_p = (_type *)					\
			   realloc (*_p_p, _nw * sizeof (_type));	\
	    if (_np_p)							\
	      *_p_p = _np_p;						\
	  }								\
    })
  #define free_m_ptr()							\
    do									\
      {									\
	if (m_ptr)							\
	  {								\
	    if (nassigned == EOF)					\
	      {								\
		int i;							\
		for (i = 0; i < m_ptr->m_cnt; ++i)			\
		  {							\
		    free (*m_ptr->m_arr[i]);				\
		    *m_ptr->m_arr[i] = NULL;				\
		  }							\
	      }								\
	    if (m_ptr->m_arr)						\
	      free (m_ptr->m_arr);					\
	  }								\
      }									\
    while (0)
#endif
# 549 "../../../../../newlib/libc/stdio/vfscanf.c"

  #define CCFN_PARAMS	(struct _reent *, const char *, char **, int)
  u_long (*ccfn)CCFN_PARAMS=0;	/* conversion function (strtol/strtoul) */
  char ccltab[256];		/* character class table for %[...] */
  char buf[BUF];		/* buffer for numeric conversions */
  unsigned char *lptr;          /* literal pointer */

  char *cp;
  short *sp;
  int *ip;
#ifdef FLOATING_POINT
  float *flp;
  _LONG_DOUBLE *ldp;
  double *dp;
#endif
# 564 "../../../../../newlib/libc/stdio/vfscanf.c"
  long *lp;
#ifndef _NO_LONGLONG
  long long *llp;
#endif
# 568 "../../../../../newlib/libc/stdio/vfscanf.c"

  /* `basefix' is used to avoid `if' tests in the integer scanner */
  static const short basefix[17] =
    {10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

  /* Macro to support positional arguments */
#ifndef _NO_POS_ARGS
# define GET_ARG(n, ap, type)					\
  ((type) (is_pos_arg						\
	   ? (n < numargs					\
	      ? args[n]						\
	      : get_arg (n, &ap, &numargs, args))		\
	   : (arg_index++ < numargs				\
	      ? args[n]						\
	      : (numargs < MAX_POS_ARGS				\
		 ? args[numargs++] = va_arg (ap, void *)	\
		 : va_arg (ap, void *)))))
#else
# 586 "../../../../../newlib/libc/stdio/vfscanf.c"
# define GET_ARG(n, ap, type) (va_arg (ap, type))
#endif
# 588 "../../../../../newlib/libc/stdio/vfscanf.c"

  _newlib_flockfile_start (fp);

  ORIENT (fp, -1);

  nassigned = 0;
  nread = 0;
#ifdef _MB_CAPABLE
  memset (&state, 0, sizeof (state));
#endif
# 598 "../../../../../newlib/libc/stdio/vfscanf.c"

  for (;;)
    {
#ifndef _MB_CAPABLE
      wc = *fmt;
#else
# 604 "../../../../../newlib/libc/stdio/vfscanf.c"
      nbytes = __MBTOWC (rptr, &wc, (char *) fmt, MB_CUR_MAX, &state);
      if (nbytes < 0) {
	wc = 0xFFFD; /* Unicode replacement character */
	nbytes = 1;
	memset (&state, 0, sizeof (state));
      }
#endif
# 611 "../../../../../newlib/libc/stdio/vfscanf.c"
      fmt += nbytes;

      if (wc == 0)
	goto all_done;
      if (nbytes == 1 && isspace (wc))
	{
	  for (;;)
	    {
	      if (BufferEmpty || !isspace (*fp->_p))
		break;
	      nread++, fp->_r--, fp->_p++;
	    }
	  continue;
	}
      if (wc != '%')
	goto literal;
      width = 0;
      flags = 0;
#ifndef _NO_POS_ARGS
      N = arg_index;
      is_pos_arg = 0;
#endif
# 633 "../../../../../newlib/libc/stdio/vfscanf.c"

      /*
       * switch on the format.  continue if done; break once format
       * type is derived.
       */

    again:
      c = *fmt++;

      switch (c)
	{
	case '%':
	literal:
          lptr = fmt - nbytes;
          for (n = 0; n < nbytes; ++n)
            {
	      if (BufferEmpty)
	        goto input_failure;
	      if (*fp->_p != *lptr)
	        goto match_failure;
	      fp->_r--, fp->_p++;
	      nread++;
              ++lptr;
            }
	  continue;

	case '*':
	  if ((flags & (CHAR | SHORT | LONG | LONGDBL | SUPPRESS | MALLOC))
	      || width)
	    goto match_failure;
	  flags |= SUPPRESS;
	  goto again;
	case 'l':
	  if (flags & (CHAR | SHORT | LONG | LONGDBL))
	    goto match_failure;
#if defined _WANT_IO_C99_FORMATS || !defined _NO_LONGLONG
	  if (*fmt == 'l')	/* Check for 'll' = long long (SUSv3) */
	    {
	      ++fmt;
	      flags |= LONGDBL;
	    }
	  else
#endif
# 676 "../../../../../newlib/libc/stdio/vfscanf.c"
	    flags |= LONG;
	  goto again;
	case 'L':
	  if (flags & (CHAR | SHORT | LONG | LONGDBL))
	    goto match_failure;
	  flags |= LONGDBL;
	  goto again;
	case 'h':
	  if (flags & (CHAR | SHORT | LONG | LONGDBL))
	    goto match_failure;
#ifdef _WANT_IO_C99_FORMATS
	  if (*fmt == 'h')	/* Check for 'hh' = char int (SUSv3) */
	    {
	      ++fmt;
	      flags |= CHAR;
	    }
	  else
#endif
# 694 "../../../../../newlib/libc/stdio/vfscanf.c"
	    flags |= SHORT;
	  goto again;
#ifdef _WANT_IO_C99_FORMATS
	case 'j': /* intmax_t */
	  if (flags & (CHAR | SHORT | LONG | LONGDBL))
	    goto match_failure;
	  if (sizeof (intmax_t) == sizeof (long))
	    flags |= LONG;
	  else
	    flags |= LONGDBL;
	  goto again;
	case 't': /* ptrdiff_t */
	  if (flags & (CHAR | SHORT | LONG | LONGDBL))
	    goto match_failure;
	  if (sizeof (ptrdiff_t) < sizeof (int))
	    /* POSIX states ptrdiff_t is 16 or more bits, as
	       is short.  */
	    flags |= SHORT;
	  else if (sizeof (ptrdiff_t) == sizeof (int))
	    /* no flag needed */;
	  else if (sizeof (ptrdiff_t) <= sizeof (long))
	    flags |= LONG;
	  else
	    /* POSIX states that at least one programming
	       environment must support ptrdiff_t no wider than
	       long, but that means other environments can
	       have ptrdiff_t as wide as long long.  */
	    flags |= LONGDBL;
	  goto again;
	case 'z': /* size_t */
	  if (flags & (CHAR | SHORT | LONG | LONGDBL))
	    goto match_failure;
	  if (sizeof (size_t) < sizeof (int))
	    /* POSIX states size_t is 16 or more bits, as is short.  */
	    flags |= SHORT;
	  else if (sizeof (size_t) == sizeof (int))
	    /* no flag needed */;
	  else if (sizeof (size_t) <= sizeof (long))
	    flags |= LONG;
	  else
	    /* POSIX states that at least one programming
	       environment must support size_t no wider than
	       long, but that means other environments can
	       have size_t as wide as long long.  */
	    flags |= LONGDBL;
	  goto again;
#endif /* _WANT_IO_C99_FORMATS */
# 741 "../../../../../newlib/libc/stdio/vfscanf.c"
#ifdef _WANT_IO_POSIX_EXTENSIONS
	case 'm':
	  if (flags & (CHAR | SHORT | LONG | LONGDBL | MALLOC))
	    goto match_failure;
	  init_m_ptr ();
	  flags |= MALLOC;
	  goto again;
#endif
# 749 "../../../../../newlib/libc/stdio/vfscanf.c"

	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	  if (flags & (CHAR | SHORT | LONG | LONGDBL | MALLOC))
	    goto match_failure;
	  width = width * 10 + c - '0';
	  goto again;

#ifndef _NO_POS_ARGS
	case '$':
	  if (flags & (CHAR | SHORT | LONG | LONGDBL | SUPPRESS | MALLOC))
	    goto match_failure;
	  if (width <= MAX_POS_ARGS)
	    {
	      N = width - 1;
	      is_pos_arg = 1;
	      width = 0;
	      goto again;
	    }
	  rptr->_errno = EINVAL;
	  goto input_failure;
#endif /* !_NO_POS_ARGS */
# 779 "../../../../../newlib/libc/stdio/vfscanf.c"

	  /*
	   * Conversions. Those marked `compat' are for
	   * 4.[123]BSD compatibility.
	   *
	   * (According to ANSI, E and X formats are supposed to
	   * the same as e and x.  Sorry about that.)
	   */

	case 'D':		/* compat */
	  flags |= LONG;
	  /* FALLTHROUGH */
	case 'd':
	  c = CT_INT;
	  ccfn = (u_long (*)CCFN_PARAMS)_strtol_r;
	  base = 10;
	  break;

	case 'i':
	  c = CT_INT;
	  ccfn = (u_long (*)CCFN_PARAMS)_strtol_r;
	  base = 0;
	  break;

	case 'O':		/* compat */
	  flags |= LONG;
	  /* FALLTHROUGH */
	case 'o':
	  c = CT_INT;
	  ccfn = _strtoul_r;
	  base = 8;
	  break;

	case 'u':
	  c = CT_INT;
	  ccfn = _strtoul_r;
	  base = 10;
	  break;

	case 'X':
	case 'x':
	  flags |= PFXOK;	/* enable 0x prefixing */
	  c = CT_INT;
	  ccfn = _strtoul_r;
	  base = 16;
	  break;

#ifdef FLOATING_POINT
# ifdef _WANT_IO_C99_FORMATS
	case 'a':
	case 'A':
	case 'F':
# endif
# 832 "../../../../../newlib/libc/stdio/vfscanf.c"
	case 'E':
	case 'G':
	case 'e':
	case 'f':
	case 'g':
	  c = CT_FLOAT;
	  break;
#endif
# 840 "../../../../../newlib/libc/stdio/vfscanf.c"

#ifdef _WANT_IO_C99_FORMATS
	case 'S':
	  flags |= LONG;
	  /* FALLTHROUGH */
#endif
# 846 "../../../../../newlib/libc/stdio/vfscanf.c"

	case 's':
	  c = CT_STRING;
	  break;

	case '[':
	  fmt = (u_char *) __sccl (ccltab, (unsigned char *) fmt);
	  flags |= NOSKIP;
	  c = CT_CCL;
	  break;

#ifdef _WANT_IO_C99_FORMATS
	case 'C':
	  flags |= LONG;
	  /* FALLTHROUGH */
#endif
# 862 "../../../../../newlib/libc/stdio/vfscanf.c"

	case 'c':
	  flags |= NOSKIP;
	  c = CT_CHAR;
	  break;

	case 'p':		/* pointer format is like hex */
	  flags |= POINTER | PFXOK;
	  c = CT_INT;
	  ccfn = _strtoul_r;
	  base = 16;
	  break;

	case 'n':
	  if (flags & SUPPRESS)	/* ??? */
	    continue;
#ifdef _WANT_IO_C99_FORMATS
	  if (flags & CHAR)
	    {
	      cp = GET_ARG (N, ap, char *);
	      *cp = nread;
	    }
	  else
#endif
# 886 "../../../../../newlib/libc/stdio/vfscanf.c"
	  if (flags & SHORT)
	    {
	      sp = GET_ARG (N, ap, short *);
	      *sp = nread;
	    }
	  else if (flags & LONG)
	    {
	      lp = GET_ARG (N, ap, long *);
	      *lp = nread;
	    }
#ifndef _NO_LONGLONG
	  else if (flags & LONGDBL)
	    {
	      llp = GET_ARG (N, ap, long long*);
	      *llp = nread;
	    }
#endif
# 903 "../../../../../newlib/libc/stdio/vfscanf.c"
	  else
	    {
	      ip = GET_ARG (N, ap, int *);
	      *ip = nread;
	    }
	  continue;

	default:
	  goto match_failure;
	}

      /*
       * We have a conversion that requires input.
       */
      if (BufferEmpty)
	goto input_failure;

      /*
       * Consume leading white space, except for formats that
       * suppress this.
       */
      if ((flags & NOSKIP) == 0)
	{
	  while (isspace (*fp->_p))
	    {
	      nread++;
	      if (--fp->_r > 0)
		fp->_p++;
	      else
	      if (__srefill_r (rptr, fp))
		goto input_failure;
	    }
	  /*
	   * Note that there is at least one character in the
	   * buffer, so conversions that do not set NOSKIP ca
	   * no longer result in an input failure.
	   */
	}

      /*
       * Do the conversion.
       */
      switch (c)
	{

	case CT_CHAR:
	  /* scan arbitrary characters (sets NOSKIP) */
	  if (width == 0)
	    width = 1;
#if !defined(_ELIX_LEVEL) || _ELIX_LEVEL >= 2
          if (flags & LONG)
            {
#ifdef _WANT_IO_POSIX_EXTENSIONS
	      wchar_t **wcp_p = NULL;
	      wchar_t *wcp0 = NULL;
	      size_t wcp_siz = 0;
#endif
# 960 "../../../../../newlib/libc/stdio/vfscanf.c"
              mbstate_t state;
              if (flags & SUPPRESS)
                wcp = NULL;
#ifdef _WANT_IO_POSIX_EXTENSIONS
	      else if (flags & MALLOC)
		wcp_siz = alloc_m_ptr (wchar_t, wcp, wcp0, wcp_p, 32);
#endif
# 967 "../../../../../newlib/libc/stdio/vfscanf.c"
              else
                wcp = GET_ARG (N, ap, wchar_t *);
              n = 0;
              while (width != 0)
                {
                  if (n == MB_CUR_MAX)
                    goto input_failure;
                  buf[n++] = *fp->_p;
                  fp->_r -= 1;
                  fp->_p += 1;
		  /* Got a high surrogate, allow low surrogate to slip
		     through */
		  if (mbslen != 3 || state.__count != 4)
		    memset (&state, 0, sizeof (mbstate_t));
                  if ((mbslen = _mbrtowc_r (rptr, wcp, buf, n, &state))
                                                         == (size_t)-1)
                    goto input_failure; /* Invalid sequence */
                  if (mbslen == 0 && !(flags & SUPPRESS))
                    *wcp = L'\0';
                  if (mbslen != (size_t)-2) /* Incomplete sequence */
                    {
                      nread += n;
		      /* Handle high surrogate */
		      if (mbslen != 3 || state.__count != 4)
			width -= 1;
                      if (!(flags & SUPPRESS))
			{
#ifdef _WANT_IO_POSIX_EXTENSIONS
			  wcp_siz = realloc_m_ptr (wchar_t, wcp, wcp0, wcp_p,
						   wcp_siz);
#endif
# 998 "../../../../../newlib/libc/stdio/vfscanf.c"
			  wcp++;
			}
                      n = 0;
                    }
                  if (BufferEmpty)
	            {
                      if (n != 0)
                        goto input_failure;
                      break;
                    }
                }
#ifdef _WANT_IO_POSIX_EXTENSIONS
	      shrink_m_ptr (wchar_t, wcp_p, wcp - wcp0, wcp_siz);
#endif
# 1012 "../../../../../newlib/libc/stdio/vfscanf.c"
              if (!(flags & SUPPRESS))
                nassigned++;
            }
          else
#endif /* ELIX_LEVEL */
# 1017 "../../../../../newlib/libc/stdio/vfscanf.c"
	  if (flags & SUPPRESS)
	    {
	      size_t sum = 0;
	      for (;;)
		{
		  if ((n = fp->_r) < (int)width)
		    {
		      sum += n;
		      width -= n;
		      fp->_p += n;
		      if (__srefill_r (rptr, fp))
			{
			  if (sum == 0)
			    goto input_failure;
			  break;
			}
		    }
		  else
		    {
		      sum += width;
		      fp->_r -= width;
		      fp->_p += width;
		      break;
		    }
		}
	      nread += sum;
	    }
	  else
	    {
	      size_t r;
#ifdef _WANT_IO_POSIX_EXTENSIONS
	      char **p_p = NULL;
	      if (flags & MALLOC)
		alloc_m_ptr (char, p, p0, p_p, width);
	      else
#endif
# 1053 "../../../../../newlib/libc/stdio/vfscanf.c"
		p = GET_ARG (N, ap, char *);
	      r = _fread_r (rptr, p, 1, width, fp);
	      if (r == 0)
		goto input_failure;
#ifdef _WANT_IO_POSIX_EXTENSIONS
	      shrink_m_ptr (char, p_p, r, width);
#endif
# 1060 "../../../../../newlib/libc/stdio/vfscanf.c"
	      nread += r;
	      nassigned++;
	    }
	  break;

	case CT_CCL:
	  /* scan a (nonempty) character class (sets NOSKIP) */
	  if (width == 0)
	    width = SIZE_MAX;
	  /* take only those things in the class */
#if !defined(_ELIX_LEVEL) || _ELIX_LEVEL >= 2
	  if (flags & LONG)
	    {
#ifdef _WANT_IO_POSIX_EXTENSIONS
	      wchar_t **wcp_p = NULL;
	      wchar_t *wcp0 = NULL;
	      size_t wcp_siz = 0;
#endif
# 1078 "../../../../../newlib/libc/stdio/vfscanf.c"
              mbstate_t state;
              if (flags & SUPPRESS)
                wcp = &wc;
#ifdef _WANT_IO_POSIX_EXTENSIONS
	      else if (flags & MALLOC)
		wcp_siz = alloc_m_ptr (wchar_t, wcp, wcp0, wcp_p, 32);
#endif
# 1085 "../../../../../newlib/libc/stdio/vfscanf.c"
              else
		wcp = GET_ARG (N, ap, wchar_t *);
              n = 0;
              while (width != 0) {
                  if (n == MB_CUR_MAX)
                    goto input_failure;
                  buf[n++] = *fp->_p;
                  fp->_r -= 1;
                  fp->_p += 1;
		  /* Got a high surrogate, allow low surrogate to slip
		     through */
		  if (mbslen != 3 || state.__count != 4)
		    memset (&state, 0, sizeof (mbstate_t));
                  if ((mbslen = _mbrtowc_r (rptr, wcp, buf, n, &state))
                                                        == (size_t)-1)
                    goto input_failure;
                  if (mbslen == 0)
                    *wcp = L'\0';
                  if (mbslen != (size_t)-2) /* Incomplete sequence */
                    {
                      if (!ccltab[__wctob (rptr, *wcp)])
                        {
                          while (n != 0)
                            _ungetc_r (rptr, (unsigned char) buf[--n], fp);
                          break;
                        }
                      nread += n;
		      /* Handle high surrogate */
		      if (mbslen != 3 || state.__count != 4)
			width -= 1;
                      if ((flags & SUPPRESS) == 0)
			{
			  wcp += 1;
#ifdef _WANT_IO_POSIX_EXTENSIONS
			  wcp_siz = realloc_m_ptr (wchar_t, wcp, wcp0, wcp_p,
						   wcp_siz);
#endif
# 1122 "../../../../../newlib/libc/stdio/vfscanf.c"
			}
                      n = 0;
                    }
                  if (BufferEmpty)
                    {
                      if (n != 0)
                        goto input_failure;
                      break;
                    }
                }
              if (!(flags & SUPPRESS))
                {
                  *wcp = L'\0';
#ifdef _WANT_IO_POSIX_EXTENSIONS
		  shrink_m_ptr (wchar_t, wcp_p, wcp - wcp0 + 1, wcp_siz);
#endif
# 1138 "../../../../../newlib/libc/stdio/vfscanf.c"
                  nassigned++;
                }
	    }
	  else
#endif /* ELIX_LEVEL */
# 1143 "../../../../../newlib/libc/stdio/vfscanf.c"
	  if (flags & SUPPRESS)
	    {
	      n = 0;
	      while (ccltab[*fp->_p])
		{
		  n++, fp->_r--, fp->_p++;
		  if (--width == 0)
		    break;
		  if (BufferEmpty)
		    {
		      if (n == 0)
			goto input_failure;
		      break;
		    }
		}
	      if (n == 0)
		goto match_failure;
	      nread += n;
	    }
	  else
	    {
#ifdef _WANT_IO_POSIX_EXTENSIONS
	      char **p_p = NULL;
	      size_t p_siz = 0;

	      if (flags & MALLOC)
		p_siz = alloc_m_ptr (char, p, p0, p_p, 32);
	      else
#endif
# 1172 "../../../../../newlib/libc/stdio/vfscanf.c"
		p0 = p = GET_ARG (N, ap, char *);
	      while (ccltab[*fp->_p])
		{
		  fp->_r--;
		  *p++ = *fp->_p++;
#ifdef _WANT_IO_POSIX_EXTENSIONS
		  p_siz = realloc_m_ptr (char, p, p0, p_p, p_siz);
#endif
# 1180 "../../../../../newlib/libc/stdio/vfscanf.c"
		  if (--width == 0)
		    break;
		  if (BufferEmpty)
		    {
		      if (p == p0)
			goto input_failure;
		      break;
		    }
		}
	      n = p - p0;
	      if (n == 0)
		goto match_failure;
	      *p = 0;
#ifdef _WANT_IO_POSIX_EXTENSIONS
	      shrink_m_ptr (char, p_p, n + 1, p_siz);
#endif
# 1196 "../../../../../newlib/libc/stdio/vfscanf.c"
	      nassigned++;
	      nread += n;
	    }
	  break;

	case CT_STRING:
	  /* like CCL, but zero-length string OK, & no NOSKIP */
	  if (width == 0)
	    width = SIZE_MAX;
#if !defined(_ELIX_LEVEL) || _ELIX_LEVEL >= 2
          if (flags & LONG)
            {
#ifdef _WANT_IO_POSIX_EXTENSIONS
	      wchar_t **wcp_p = NULL;
	      wchar_t *wcp0 = NULL;
	      size_t wcp_siz = 0;
#endif
# 1213 "../../../../../newlib/libc/stdio/vfscanf.c"
              /* Process %S and %ls placeholders */
              mbstate_t state;
              if (flags & SUPPRESS)
                wcp = &wc;
#ifdef _WANT_IO_POSIX_EXTENSIONS
	      else if (flags & MALLOC)
		wcp_siz = alloc_m_ptr (wchar_t, wcp, wcp0, wcp_p, 32);
#endif
# 1221 "../../../../../newlib/libc/stdio/vfscanf.c"
              else
		wcp = GET_ARG (N, ap, wchar_t *);
              n = 0;
              while (!isspace (*fp->_p) && width != 0)
                {
                  if (n == MB_CUR_MAX)
                    goto input_failure;
                  buf[n++] = *fp->_p;
                  fp->_r -= 1;
                  fp->_p += 1;
		  /* Got a high surrogate, allow low surrogate to slip
		     through */
		  if (mbslen != 3 || state.__count != 4)
		    memset (&state, 0, sizeof (mbstate_t));
                  if ((mbslen = _mbrtowc_r (rptr, wcp, buf, n, &state))
                                                        == (size_t)-1)
                    goto input_failure;
                  if (mbslen == 0)
                    *wcp = L'\0';
                  if (mbslen != (size_t)-2) /* Incomplete sequence */
                    {
                      if (iswspace(*wcp))
                        {
                          while (n != 0)
                            _ungetc_r (rptr, (unsigned char) buf[--n], fp);
                          break;
                        }
                      nread += n;
		      /* Handle high surrogate */
		      if (mbslen != 3 || state.__count != 4)
			width -= 1;
                      if ((flags & SUPPRESS) == 0)
			{
			  wcp += 1;
#ifdef _WANT_IO_POSIX_EXTENSIONS
			  wcp_siz = realloc_m_ptr (wchar_t, wcp, wcp0, wcp_p,
						   wcp_siz);
#endif
# 1259 "../../../../../newlib/libc/stdio/vfscanf.c"
			}
                      n = 0;
                    }
                  if (BufferEmpty)
                    {
                      if (n != 0)
                        goto input_failure;
                      break;
                    }
                }
              if (!(flags & SUPPRESS))
                {
                  *wcp = L'\0';
#ifdef _WANT_IO_POSIX_EXTENSIONS
		  shrink_m_ptr (wchar_t, wcp_p, wcp - wcp0 + 1, wcp_siz);
#endif
# 1275 "../../../../../newlib/libc/stdio/vfscanf.c"
                  nassigned++;
                }
            }
          else
#endif
# 1280 "../../../../../newlib/libc/stdio/vfscanf.c"
	  if (flags & SUPPRESS)
	    {
	      n = 0;
	      while (!isspace (*fp->_p))
		{
		  n++, fp->_r--, fp->_p++;
		  if (--width == 0)
		    break;
		  if (BufferEmpty)
		    break;
		}
	      nread += n;
	    }
	  else
	    {
#ifdef _WANT_IO_POSIX_EXTENSIONS
	      char **p_p = NULL;
	      size_t p_siz = 0;

	      if (flags & MALLOC)
		p_siz = alloc_m_ptr (char, p, p0, p_p, 32);
	      else
#endif
# 1303 "../../../../../newlib/libc/stdio/vfscanf.c"
		p0 = GET_ARG (N, ap, char *);
	      p = p0;
	      while (!isspace (*fp->_p))
		{
		  fp->_r--;
		  *p++ = *fp->_p++;
#ifdef _WANT_IO_POSIX_EXTENSIONS
		  p_siz = realloc_m_ptr (char, p, p0, p_p, p_siz);
#endif
# 1312 "../../../../../newlib/libc/stdio/vfscanf.c"
		  if (--width == 0)
		    break;
		  if (BufferEmpty)
		    break;
		}
	      *p = 0;
#ifdef _WANT_IO_POSIX_EXTENSIONS
	      shrink_m_ptr (char, p_p, p - p0 + 1, p_siz);
#endif
# 1321 "../../../../../newlib/libc/stdio/vfscanf.c"
	      nread += p - p0;
	      nassigned++;
	    }
	  continue;

	case CT_INT:
	{
	  /* scan an integer as if by strtol/strtoul */
	  unsigned width_left = 0;
	  int skips = 0;
#ifdef hardway
	  if (width == 0 || width > sizeof (buf) - 1)
#else
# 1334 "../../../../../newlib/libc/stdio/vfscanf.c"
	  /* size_t is unsigned, hence this optimisation */
	  if (width - 1 > sizeof (buf) - 2)
#endif
# 1337 "../../../../../newlib/libc/stdio/vfscanf.c"
	    {
	      width_left = width - (sizeof (buf) - 1);
	      width = sizeof (buf) - 1;
	    }
	  flags |= SIGNOK | NDIGITS | NZDIGITS | NNZDIGITS;
	  for (p = buf; width; width--)
	    {
	      c = *fp->_p;
	      /*
	       * Switch on the character; `goto ok' if we
	       * accept it as a part of number.
	       */
	      switch (c)
		{
		  /*
		   * The digit 0 is always legal, but is special.
		   * For %i conversions, if no digits (zero or nonzero)
		   * have been scanned (only signs), we will have base==0.
		   * In that case, we should set it to 8 and enable 0x
		   * prefixing. Also, if we have not scanned zero digits
		   * before this, do not turn off prefixing (someone else
		   * will turn it off if we have scanned any nonzero digits).
		   */
		case '0':
		  if (! (flags & NNZDIGITS))
		    goto ok;
		  if (base == 0)
		    {
		      base = 8;
		      flags |= PFXOK;
		    }
		  if (flags & NZDIGITS)
		    {
		      flags &= ~(SIGNOK | NZDIGITS | NDIGITS);
		      goto ok;
		    }
		  flags &= ~(SIGNOK | PFXOK | NDIGITS);
		  if (width_left)
		    {
		      width_left--;
		      width++;
		    }
		  ++skips;
		  goto skip;

		  /* 1 through 7 always legal */
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		  base = basefix[base];
		  flags &= ~(SIGNOK | PFXOK | NDIGITS | NNZDIGITS);
		  goto ok;

		  /* digits 8 and 9 ok iff decimal or hex */
		case '8':
		case '9':
		  base = basefix[base];
		  if (base <= 8)
		    break;	/* not legal here */
		  flags &= ~(SIGNOK | PFXOK | NDIGITS | NNZDIGITS);
		  goto ok;

		  /* letters ok iff hex */
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F':
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f':
		  /* no need to fix base here */
		  if (base <= 10)
		    break;	/* not legal here */
		  flags &= ~(SIGNOK | PFXOK | NDIGITS | NNZDIGITS);
		  goto ok;

		  /* sign ok only as first character */
		case '+':
		case '-':
		  if (flags & SIGNOK)
		    {
		      flags &= ~SIGNOK;
		      goto ok;
		    }
		  break;

		  /* x ok iff flag still set & single 0 seen */
		case 'x':
		case 'X':
		  if ((flags & (PFXOK | NZDIGITS)) == PFXOK)
		    {
		      base = 16;/* if %i */
		      flags &= ~PFXOK;
		      /* We must reset the NZDIGITS and NDIGITS
			 flags that would have been unset by seeing
			 the zero that preceded the X or x.  */
		      flags |= NZDIGITS | NDIGITS;
		      goto ok;
		    }
		  break;
		}

	      /*
	       * If we got here, c is not a legal character
	       * for a number.  Stop accumulating digits.
	       */
	      break;
	    ok:
	      /*
	       * c is legal: store it and look at the next.
	       */
	      *p++ = c;
	    skip:
	      if (--fp->_r > 0)
		fp->_p++;
	      else
	      if (__srefill_r (rptr, fp))
		break;		/* EOF */
	    }
	  /*
	   * If we had only a sign, it is no good; push back the sign.
	   * If the number ends in `x', it was [sign] '0' 'x', so push back
	   * the x and treat it as [sign] '0'.
	   * Use of ungetc here and below assumes ASCII encoding; we are only
	   * pushing back 7-bit characters, so casting to unsigned char is
	   * not necessary.
	   */
	  if (flags & NDIGITS)
	    {
	      if (p > buf)
		_ungetc_r (rptr, *--p, fp); /* [-+xX] */
	      if (p == buf)
		goto match_failure;
	    }
	  if ((flags & SUPPRESS) == 0)
	    {
	      u_long res;

	      *p = 0;
	      res = (*ccfn) (rptr, buf, (char **) NULL, base);
	      if (flags & POINTER)
		{
		  void **vp = GET_ARG (N, ap, void **);
#ifndef _NO_LONGLONG
		  if (sizeof (uintptr_t) > sizeof (u_long))
		    {
		      u_long_long resll;
		      resll = _strtoull_r (rptr, buf, (char **) NULL, base);
		      *vp = (void *) (uintptr_t) resll;
		    }
		  else
#endif /* !_NO_LONGLONG */
# 1498 "../../../../../newlib/libc/stdio/vfscanf.c"
		    *vp = (void *) (uintptr_t) res;
		}
#ifdef _WANT_IO_C99_FORMATS
	      else if (flags & CHAR)
		{
		  cp = GET_ARG (N, ap, char *);
		  *cp = res;
		}
#endif
# 1507 "../../../../../newlib/libc/stdio/vfscanf.c"
	      else if (flags & SHORT)
		{
		  sp = GET_ARG (N, ap, short *);
		  *sp = res;
		}
	      else if (flags & LONG)
		{
		  lp = GET_ARG (N, ap, long *);
		  *lp = res;
		}
#ifndef _NO_LONGLONG
	      else if (flags & LONGDBL)
		{
		  u_long_long resll;
		  if (ccfn == _strtoul_r)
		    resll = _strtoull_r (rptr, buf, (char **) NULL, base);
		  else
		    resll = _strtoll_r (rptr, buf, (char **) NULL, base);
		  llp = GET_ARG (N, ap, long long*);
		  *llp = resll;
		}
#endif
# 1529 "../../../../../newlib/libc/stdio/vfscanf.c"
	      else
		{
		  ip = GET_ARG (N, ap, int *);
		  *ip = res;
		}
	      nassigned++;
	    }
	  nread += p - buf + skips;
	  break;
	}
#ifdef FLOATING_POINT
	case CT_FLOAT:
	{
	  /* scan a floating point number as if by strtod */
	  /* This code used to assume that the number of digits is reasonable.
	     However, ANSI / ISO C makes no such stipulation; we have to get
	     exact results even when there is an unreasonable amount of
	     leading zeroes.  */
	  long leading_zeroes = 0;
	  long zeroes, exp_adjust;
	  char *exp_start = NULL;
	  unsigned width_left = 0;
	  char nancount = 0;
	  char infcount = 0;
	  const char *decpt = _localeconv_r (rptr)->decimal_point;
#ifdef _MB_CAPABLE
	  int decptpos = 0;
#endif
# 1557 "../../../../../newlib/libc/stdio/vfscanf.c"
#ifdef hardway
	  if (width == 0 || width > sizeof (buf) - 1)
#else
# 1560 "../../../../../newlib/libc/stdio/vfscanf.c"
	  /* size_t is unsigned, hence this optimisation */
	  if (width - 1 > sizeof (buf) - 2)
#endif
# 1563 "../../../../../newlib/libc/stdio/vfscanf.c"
	    {
	      width_left = width - (sizeof (buf) - 1);
	      width = sizeof (buf) - 1;
	    }
	  flags |= SIGNOK | NDIGITS | DPTOK | EXPOK;
	  zeroes = 0;
	  exp_adjust = 0;
	  for (p = buf; width; )
	    {
	      c = *fp->_p;
	      /*
	       * This code mimicks the integer conversion
	       * code, but is much simpler.
	       */
	      switch (c)
		{
		case '0':
		  if (flags & NDIGITS)
		    {
		      flags &= ~SIGNOK;
		      zeroes++;
		      if (width_left)
			{
			  width_left--;
			  width++;
			}
		      goto fskip;
		    }
		  /* Fall through.  */
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		  if (nancount + infcount == 0)
		    {
		      flags &= ~(SIGNOK | NDIGITS);
		      goto fok;
		    }
		  break;

		case '+':
		case '-':
		  if (flags & SIGNOK)
		    {
		      flags &= ~SIGNOK;
		      goto fok;
		    }
		  break;
		case 'n':
		case 'N':
		  if (nancount == 0 && zeroes == 0
		      && (flags & (NDIGITS | DPTOK | EXPOK)) ==
				  (NDIGITS | DPTOK | EXPOK))
		    {
		      flags &= ~(SIGNOK | DPTOK | EXPOK | NDIGITS);
		      nancount = 1;
		      goto fok;
		    }
		  if (nancount == 2)
		    {
		      nancount = 3;
		      goto fok;
		    }
		  if (infcount == 1 || infcount == 4)
		    {
		      infcount++;
		      goto fok;
		    }
		  break;
		case 'a':
		case 'A':
		  if (nancount == 1)
		    {
		      nancount = 2;
		      goto fok;
		    }
		  break;
		case 'i':
		case 'I':
		  if (infcount == 0 && zeroes == 0
		      && (flags & (NDIGITS | DPTOK | EXPOK)) ==
				  (NDIGITS | DPTOK | EXPOK))
		    {
		      flags &= ~(SIGNOK | DPTOK | EXPOK | NDIGITS);
		      infcount = 1;
		      goto fok;
		    }
		  if (infcount == 3 || infcount == 5)
		    {
		      infcount++;
		      goto fok;
		    }
		  break;
		case 'f':
		case 'F':
		  if (infcount == 2)
		    {
		      infcount = 3;
		      goto fok;
		    }
		  break;
		case 't':
		case 'T':
		  if (infcount == 6)
		    {
		      infcount = 7;
		      goto fok;
		    }
		  break;
		case 'y':
		case 'Y':
		  if (infcount == 7)
		    {
		      infcount = 8;
		      goto fok;
		    }
		  break;
		case 'e':
		case 'E':
		  /* no exponent without some digits */
		  if ((flags & (NDIGITS | EXPOK)) == EXPOK
		      || ((flags & EXPOK) && zeroes))
		    {
		      if (! (flags & DPTOK))
			{
			  exp_adjust = zeroes - leading_zeroes;
			  exp_start = p;
			}
		      flags =
			(flags & ~(EXPOK | DPTOK)) |
			SIGNOK | NDIGITS;
		      zeroes = 0;
		      goto fok;
		    }
		  break;
		default:
#ifndef _MB_CAPABLE
		  if ((unsigned char) c == (unsigned char) decpt[0]
		      && (flags & DPTOK))
		    {
		      flags &= ~(SIGNOK | DPTOK);
		      leading_zeroes = zeroes;
		      goto fok;
		    }
		  break;
#else
# 1714 "../../../../../newlib/libc/stdio/vfscanf.c"
		  if (flags & DPTOK)
		    {
		      while ((unsigned char) c
			     == (unsigned char) decpt[decptpos])
			{
			  if (decpt[++decptpos] == '\0')
			    {
			      /* We read the complete decpt seq. */
			      flags &= ~(SIGNOK | DPTOK);
			      leading_zeroes = zeroes;
			      p = stpncpy (p, decpt, decptpos);
			      decptpos = 0;
			      goto fskip;
			    }
			  ++nread;
			  if (--fp->_r > 0)
			    fp->_p++;
			  else if (__srefill_r (rptr, fp))
			    break;		/* EOF */
			  c = *fp->_p;
			}
		      if (decptpos > 0)
			{
			  /* We read part of a multibyte decimal point,
			     but the rest is invalid or we're at EOF,
			     so back off. */
			  while (decptpos-- > 0)
			    {
			      _ungetc_r (rptr, (unsigned char) decpt[decptpos],
					 fp);
			      --nread;
			    }
			}
		    }
		  break;
#endif
# 1750 "../../../../../newlib/libc/stdio/vfscanf.c"
		}
	      break;
	    fok:
	      *p++ = c;
	    fskip:
	      width--;
	      ++nread;
	      if (--fp->_r > 0)
		fp->_p++;
	      else
	      if (__srefill_r (rptr, fp))
		break;		/* EOF */
	    }
	  if (zeroes)
	    flags &= ~NDIGITS;
	  /* We may have a 'N' or possibly even [sign] 'N' 'a' as the
	     start of 'NaN', only to run out of chars before it was
	     complete (or having encountered a non-matching char).  So
	     check here if we have an outstanding nancount, and if so
	     put back the chars we did swallow and treat as a failed
	     match.

	     FIXME - we still don't handle NAN([0xdigits]).  */
	  if (nancount - 1U < 2U) /* nancount && nancount < 3 */
	    {
	      /* Newlib's ungetc works even if we called __srefill in
		 the middle of a partial parse, but POSIX does not
		 guarantee that in all implementations of ungetc.  */
	      while (p > buf)
		{
		  _ungetc_r (rptr, *--p, fp); /* [-+nNaA] */
		  --nread;
		}
	      goto match_failure;
	    }
	  /* Likewise for 'inf' and 'infinity'.	 But be careful that
	     'infinite' consumes only 3 characters, leaving the stream
	     at the second 'i'.	 */
	  if (infcount - 1U < 7U) /* infcount && infcount < 8 */
	    {
	      if (infcount >= 3) /* valid 'inf', but short of 'infinity' */
		while (infcount-- > 3)
		  {
		    _ungetc_r (rptr, *--p, fp); /* [iInNtT] */
		    --nread;
		  }
	      else
		{
		  while (p > buf)
		    {
		      _ungetc_r (rptr, *--p, fp); /* [-+iInN] */
		      --nread;
		    }
		  goto match_failure;
		}
	    }
	  /*
	   * If no digits, might be missing exponent digits
	   * (just give back the exponent) or might be missing
	   * regular digits, but had sign and/or decimal point.
	   */
	  if (flags & NDIGITS)
	    {
	      if (flags & EXPOK)
		{
		  /* no digits at all */
		  while (p > buf)
		    {
		      _ungetc_r (rptr, *--p, fp); /* [-+.] */
		      --nread;
		    }
		  goto match_failure;
		}
	      /* just a bad exponent (e and maybe sign) */
	      c = *--p;
	      --nread;
	      if (c != 'e' && c != 'E')
		{
		  _ungetc_r (rptr, c, fp); /* [-+] */
		  c = *--p;
		  --nread;
		}
	      _ungetc_r (rptr, c, fp); /* [eE] */
	    }
	  if ((flags & SUPPRESS) == 0)
	    {
	      double res = 0;
#ifdef _NO_LONGDBL
#define QUAD_RES res;
#else  /* !_NO_LONG_DBL */
# 1840 "../../../../../newlib/libc/stdio/vfscanf.c"
	      long double qres = 0;
#define QUAD_RES qres;
#endif /* !_NO_LONG_DBL */
# 1843 "../../../../../newlib/libc/stdio/vfscanf.c"
	      long new_exp = 0;

	      *p = 0;
	      if ((flags & (DPTOK | EXPOK)) == EXPOK)
		{
		  exp_adjust = zeroes - leading_zeroes;
		  new_exp = -exp_adjust;
		  exp_start = p;
		}
	      else if (exp_adjust)
                new_exp = _strtol_r (rptr, (exp_start + 1), NULL, 10) - exp_adjust;
	      if (exp_adjust)
		{

		  /* If there might not be enough space for the new exponent,
		     truncate some trailing digits to make room.  */
		  if (exp_start >= buf + sizeof (buf) - MAX_LONG_LEN)
		    exp_start = buf + sizeof (buf) - MAX_LONG_LEN - 1;
                 sprintf (exp_start, "e%ld", new_exp);
		}

	      /* FIXME: Is that still true?
	         Current _strtold routine is markedly slower than
	         _strtod_r.  Only use it if we have a long double
	         result.  */
#ifndef _NO_LONGDBL /* !_NO_LONGDBL */
	      if (flags & LONGDBL)
		qres = _strtold_r (rptr, buf, NULL);
	      else
#endif
# 1873 "../../../../../newlib/libc/stdio/vfscanf.c"
	        res = _strtod_r (rptr, buf, NULL);

	      if (flags & LONG)
		{
		  dp = GET_ARG (N, ap, double *);
		  *dp = res;
		}
	      else if (flags & LONGDBL)
		{
		  ldp = GET_ARG (N, ap, _LONG_DOUBLE *);
		  *ldp = QUAD_RES;
		}
	      else
		{
		  flp = GET_ARG (N, ap, float *);
		  if (isnan (res))
		    *flp = nanf (NULL);
		  else
		    *flp = res;
		}
	      nassigned++;
	    }
	  break;
	}
#endif /* FLOATING_POINT */
# 1898 "../../../../../newlib/libc/stdio/vfscanf.c"
	}
    }
input_failure:
  /* On read failure, return EOF failure regardless of matches; errno
     should have been set prior to here.  On EOF failure (including
     invalid format string), return EOF if no matches yet, else number
     of matches made prior to failure.  */
  nassigned = nassigned && !(fp->_flags & __SERR) ? nassigned : EOF;
match_failure:
all_done:
  /* Return number of matches, which can be 0 on match failure.  */
  _newlib_flockfile_end (fp);
#ifdef _WANT_IO_POSIX_EXTENSIONS
  free_m_ptr ();
#endif
# 1913 "../../../../../newlib/libc/stdio/vfscanf.c"
  return nassigned;
}

#ifndef _NO_POS_ARGS
/* Process all intermediate arguments.  Fortunately, with scanf, all
   intermediate arguments are sizeof(void*), so we don't need to scan
   ahead in the format string.  */
static void *
get_arg (int n, va_list *ap, int *numargs_p, void **args)
{
  int numargs = *numargs_p;
  while (n >= numargs)
    args[numargs++] = va_arg (*ap, void *);
  *numargs_p = numargs;
  return args[n];
}
#endif /* !_NO_POS_ARGS */
# 1930 "../../../../../newlib/libc/stdio/vfscanf.c"
