# 1 "<built-in>"
# 1 "../../../../../newlib/libm/complex/cephes_subrf.c"
/* $NetBSD: cephes_subrf.c,v 1.1 2007/08/20 16:01:34 drochner Exp $ */

/*-
 * Copyright (c) 2007 The NetBSD Foundation, Inc.
 * All rights reserved.
 *
 * This code is derived from software written by Stephen L. Moshier.
 * It is redistributed by the NetBSD Foundation by permission of the author.
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
 * THIS SOFTWARE IS PROVIDED BY THE NETBSD FOUNDATION, INC. AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE FOUNDATION OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * imported and modified include for newlib 2010/10/03 
 * Marco Atzeri <marco_atzeri@yahoo.it>
 */

#if 0 /* expanded by -frewrite-includes */
#include <complex.h>
#endif /* expanded by -frewrite-includes */
# 35 "../../../../../newlib/libm/complex/cephes_subrf.c"
# 1 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/complex.h" 1 3
/* $NetBSD: complex.h,v 1.3 2010/09/15 16:11:30 christos Exp $ */

/*
 * Written by Matthias Drochner.
 * Public domain.
 */

#ifndef	_COMPLEX_H
#define	_COMPLEX_H

#define complex _Complex
#define _Complex_I 1.0fi
#define I _Complex_I

#if 0 /* expanded by -frewrite-includes */
#include <sys/cdefs.h>
#endif /* expanded by -frewrite-includes */
# 15 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/complex.h" 3
# 1 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 1 3
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
# 45 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
# 1 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 1 3
/*
 *  $Id$
 */

#ifndef _MACHINE__DEFAULT_TYPES_H
#define _MACHINE__DEFAULT_TYPES_H

#if 0 /* expanded by -frewrite-includes */
#include <sys/features.h>
#endif /* expanded by -frewrite-includes */
# 8 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
# 1 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 1 3
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
# 27 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3

#if 0 /* expanded by -frewrite-includes */
#include <_newlib_version.h>
#endif /* expanded by -frewrite-includes */
# 28 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
# 1 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/build/mips3el-scei-elf/newlib/targ-include/_newlib_version.h" 1 3
/* _newlib_version.h.  Generated from _newlib_version.hin by configure.  */
/* Version macros for internal and downstream use. */
#ifndef _NEWLIB_VERSION_H__
#define _NEWLIB_VERSION_H__ 1

#define _NEWLIB_VERSION "3.0.0"
#define __NEWLIB__ 3
#define __NEWLIB_MINOR__ 0
#define __NEWLIB_PATCHLEVEL__ 0

#endif /* !_NEWLIB_VERSION_H__ */
# 12 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/build/mips3el-scei-elf/newlib/targ-include/_newlib_version.h" 3

# 29 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 2 3

/* Macro to test version of GCC.  Returns 0 for non-GCC or too old GCC. */
#ifndef __GNUC_PREREQ
# if defined __GNUC__ && defined __GNUC_MINOR__
#  define __GNUC_PREREQ(maj, min) \
	((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
# else
# 36 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#  define __GNUC_PREREQ(maj, min) 0
# endif
# 38 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#endif /* __GNUC_PREREQ */
# 39 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
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
# 126 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3

#if defined(_BSD_SOURCE) || defined(_SVID_SOURCE) || \
   (!defined(__STRICT_ANSI__) && !defined(_ANSI_SOURCE) && \
   !defined(_ISOC99_SOURCE) && !defined(_POSIX_SOURCE) && \
   !defined(_POSIX_C_SOURCE) && !defined(_XOPEN_SOURCE))
#undef _DEFAULT_SOURCE
#define	_DEFAULT_SOURCE		1
#endif
# 134 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3

#if defined(_DEFAULT_SOURCE)
#undef _POSIX_SOURCE
#define	_POSIX_SOURCE		1
#undef _POSIX_C_SOURCE
#define	_POSIX_C_SOURCE		200809L
#endif
# 141 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3

#if !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE) && \
  ((!defined(__STRICT_ANSI__) && !defined(_ANSI_SOURCE)) || \
   (_XOPEN_SOURCE - 0) >= 500)
#define	_POSIX_SOURCE		1
#if !defined(_XOPEN_SOURCE) || (_XOPEN_SOURCE - 0) >= 700
#define	_POSIX_C_SOURCE		200809L
#elif (_XOPEN_SOURCE - 0) >= 600
# 149 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#define	_POSIX_C_SOURCE		200112L
#elif (_XOPEN_SOURCE - 0) >= 500
# 151 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#define	_POSIX_C_SOURCE		199506L
#elif (_XOPEN_SOURCE - 0) < 500
# 153 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#define	_POSIX_C_SOURCE		2
#endif
# 155 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#endif
# 156 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3

#if defined(_POSIX_C_SOURCE) && _POSIX_C_SOURCE >= 200809
#undef _ATFILE_SOURCE
#define	_ATFILE_SOURCE		1
#endif
# 161 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3

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
# 249 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#define	__ATFILE_VISIBLE	0
#endif
# 251 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3

#ifdef _DEFAULT_SOURCE
#define	__BSD_VISIBLE		1
#else
# 255 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#define	__BSD_VISIBLE		0
#endif
# 257 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3

#ifdef _GNU_SOURCE
#define	__GNU_VISIBLE		1
#else
# 261 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#define	__GNU_VISIBLE		0
#endif
# 263 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3

#if defined(_ISOC11_SOURCE) || \
  (__STDC_VERSION__ - 0) >= 201112L || (__cplusplus - 0) >= 201103L
#define	__ISO_C_VISIBLE		2011
#elif defined(_ISOC99_SOURCE) || (_POSIX_C_SOURCE - 0) >= 200112L || \
  (__STDC_VERSION__ - 0) >= 199901L || defined(__cplusplus)
# 269 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#define	__ISO_C_VISIBLE		1999
#else
# 271 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#define	__ISO_C_VISIBLE		1990
#endif
# 273 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3

#if defined(_LARGEFILE_SOURCE) || (_XOPEN_SOURCE - 0) >= 500
#define	__LARGEFILE_VISIBLE	1
#else
# 277 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#define	__LARGEFILE_VISIBLE	0
#endif
# 279 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3

#ifdef _DEFAULT_SOURCE
#define	__MISC_VISIBLE		1
#else
# 283 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#define	__MISC_VISIBLE		0
#endif
# 285 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3

#if (_POSIX_C_SOURCE - 0) >= 200809L
#define	__POSIX_VISIBLE		200809
#elif (_POSIX_C_SOURCE - 0) >= 200112L
# 289 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#define	__POSIX_VISIBLE		200112
#elif (_POSIX_C_SOURCE - 0) >= 199506L
# 291 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#define	__POSIX_VISIBLE		199506
#elif (_POSIX_C_SOURCE - 0) >= 199309L
# 293 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#define	__POSIX_VISIBLE		199309
#elif (_POSIX_C_SOURCE - 0) >= 2 || defined(_XOPEN_SOURCE)
# 295 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#define	__POSIX_VISIBLE		199209
#elif defined(_POSIX_SOURCE) || defined(_POSIX_C_SOURCE)
# 297 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#define	__POSIX_VISIBLE		199009
#else
# 299 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#define	__POSIX_VISIBLE		0
#endif
# 301 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3

#ifdef _DEFAULT_SOURCE
#define	__SVID_VISIBLE		1
#else
# 305 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#define	__SVID_VISIBLE		0
#endif
# 307 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3

#if (_XOPEN_SOURCE - 0) >= 700
#define	__XSI_VISIBLE		700
#elif (_XOPEN_SOURCE - 0) >= 600
# 311 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#define	__XSI_VISIBLE		600
#elif (_XOPEN_SOURCE - 0) >= 500
# 313 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#define	__XSI_VISIBLE		500
#elif defined(_XOPEN_SOURCE) && defined(_XOPEN_SOURCE_EXTENDED)
# 315 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#define	__XSI_VISIBLE		4
#elif defined(_XOPEN_SOURCE)
# 317 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#define	__XSI_VISIBLE		1
#else
# 319 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#define	__XSI_VISIBLE		0
#endif
# 321 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3

#if _FORTIFY_SOURCE > 0 && !defined(__cplusplus) && !defined(__lint__) && \
   (__OPTIMIZE__ > 0 || defined(__clang__)) && __GNUC_PREREQ__(4, 1)
#  if _FORTIFY_SOURCE > 1
#    define __SSP_FORTIFY_LEVEL 2
#  else
# 327 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#    define __SSP_FORTIFY_LEVEL 1
#  endif
# 329 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#else
# 330 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#  define __SSP_FORTIFY_LEVEL 0
#endif
# 332 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3

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
# 389 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3

/* XMK loosely adheres to POSIX -- 1003.1 */
#ifdef __XMK__
#define _POSIX_THREADS				1
#define _POSIX_THREAD_PRIORITY_SCHEDULING	1
#endif
# 395 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3


#ifdef __svr4__
# define _POSIX_JOB_CONTROL     1
# define _POSIX_SAVED_IDS       1
# define _POSIX_VERSION 199009L
#endif
# 402 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3

#ifdef __CYGWIN__

#if __POSIX_VISIBLE >= 200809
#define _POSIX_VERSION				200809L
#define _POSIX2_VERSION				200809L
#elif __POSIX_VISIBLE >= 200112
# 409 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#define _POSIX_VERSION				200112L
#define _POSIX2_VERSION				200112L
#elif __POSIX_VISIBLE >= 199506
# 412 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#define _POSIX_VERSION				199506L
#define _POSIX2_VERSION				199506L
#elif __POSIX_VISIBLE >= 199309
# 415 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#define _POSIX_VERSION				199309L
#define _POSIX2_VERSION				199209L
#elif __POSIX_VISIBLE >= 199209
# 418 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#define _POSIX_VERSION				199009L
#define _POSIX2_VERSION				199209L
#elif __POSIX_VISIBLE
# 421 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#define _POSIX_VERSION				199009L
#endif
# 423 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#if __XSI_VISIBLE >= 4
#define _XOPEN_VERSION				__XSI_VISIBLE
#endif
# 426 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3

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
# 493 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3

#define _POSIX_V6_ILP32_OFF32			    -1
#ifdef __LP64__
#define _POSIX_V6_ILP32_OFFBIG			    -1
#define _POSIX_V6_LP64_OFF64			     1
#define _POSIX_V6_LPBIG_OFFBIG			     1
#else
# 500 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#define _POSIX_V6_ILP32_OFFBIG			     1
#define _POSIX_V6_LP64_OFF64			    -1
#define _POSIX_V6_LPBIG_OFFBIG			    -1
#endif
# 504 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
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
# 523 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3

/* The value corresponds to UNICODE version 5.2, which is the current
   state of newlib's wide char conversion functions. */
#define __STDC_ISO_10646__ 200910L

#endif /* __CYGWIN__ */
# 529 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3

#ifdef __cplusplus
}
#endif
# 533 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
#endif /* _SYS_FEATURES_H */
# 534 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/features.h" 3
# 9 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 2 3

/*
 * Guess on types by examining *_MIN / *_MAX defines.
 */
#if __GNUC_PREREQ (3, 3)
/* GCC >= 3.3.0 has __<val>__ implicitly defined. */
#define __EXP(x) __##x##__
#else
# 17 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
/* Fall back to POSIX versions from <limits.h> */
#define __EXP(x) x
#if 0 /* expanded by -frewrite-includes */
#include <limits.h>
#endif /* expanded by -frewrite-includes */
# 19 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
# 20 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
#endif
# 21 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3

/* Check if "long long" is 64bit wide */
/* Modern GCCs provide __LONG_LONG_MAX__, SUSv3 wants LLONG_MAX */
#if ( defined(__LONG_LONG_MAX__) && (__LONG_LONG_MAX__ > 0x7fffffff) ) \
  || ( defined(LLONG_MAX) && (LLONG_MAX > 0x7fffffff) )
#define __have_longlong64 1
#endif
# 28 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3

/* Check if "long" is 64bit or 32bit wide */
#if __EXP(LONG_MAX) > 0x7fffffff
#define __have_long64 1
#elif __EXP(LONG_MAX) == 0x7fffffff && !defined(__SPU__)
# 33 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
#define __have_long32 1
#endif
# 35 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3

#ifdef __cplusplus
extern "C" {
#endif
# 39 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3

#ifdef __INT8_TYPE__
typedef __INT8_TYPE__ __int8_t;
#ifdef __UINT8_TYPE__
typedef __UINT8_TYPE__ __uint8_t;
#else
# 45 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned __INT8_TYPE__ __uint8_t;
#endif
# 47 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
#define ___int8_t_defined 1
#elif __EXP(SCHAR_MAX) == 0x7f
# 49 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef signed char __int8_t ;
typedef unsigned char __uint8_t ;
#define ___int8_t_defined 1
#endif
# 53 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3

#ifdef __INT16_TYPE__
typedef __INT16_TYPE__ __int16_t;
#ifdef __UINT16_TYPE__
typedef __UINT16_TYPE__ __uint16_t;
#else
# 59 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned __INT16_TYPE__ __uint16_t;
#endif
# 61 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
#define ___int16_t_defined 1
#elif __EXP(INT_MAX) == 0x7fff
# 63 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef signed int __int16_t;
typedef unsigned int __uint16_t;
#define ___int16_t_defined 1
#elif __EXP(SHRT_MAX) == 0x7fff
# 67 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef signed short __int16_t;
typedef unsigned short __uint16_t;
#define ___int16_t_defined 1
#elif __EXP(SCHAR_MAX) == 0x7fff
# 71 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef signed char __int16_t;
typedef unsigned char __uint16_t;
#define ___int16_t_defined 1
#endif
# 75 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3

#ifdef __INT32_TYPE__
typedef __INT32_TYPE__ __int32_t;
#ifdef __UINT32_TYPE__
typedef __UINT32_TYPE__ __uint32_t;
#else
# 81 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned __INT32_TYPE__ __uint32_t;
#endif
# 83 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
#define ___int32_t_defined 1
#elif __EXP(INT_MAX) == 0x7fffffffL
# 85 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
#define ___int32_t_defined 1
#elif __EXP(LONG_MAX) == 0x7fffffffL
# 89 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef signed long __int32_t;
typedef unsigned long __uint32_t;
#define ___int32_t_defined 1
#elif __EXP(SHRT_MAX) == 0x7fffffffL
# 93 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef signed short __int32_t;
typedef unsigned short __uint32_t;
#define ___int32_t_defined 1
#elif __EXP(SCHAR_MAX) == 0x7fffffffL
# 97 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef signed char __int32_t;
typedef unsigned char __uint32_t;
#define ___int32_t_defined 1
#endif
# 101 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3

#ifdef __INT64_TYPE__
typedef __INT64_TYPE__ __int64_t;
#ifdef __UINT64_TYPE__
typedef __UINT64_TYPE__ __uint64_t;
#else
# 107 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned __INT64_TYPE__ __uint64_t;
#endif
# 109 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
#define ___int64_t_defined 1
#elif __EXP(LONG_MAX) > 0x7fffffff
# 111 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef signed long __int64_t;
typedef unsigned long __uint64_t;
#define ___int64_t_defined 1

/* GCC has __LONG_LONG_MAX__ */
#elif  defined(__LONG_LONG_MAX__) && (__LONG_LONG_MAX__ > 0x7fffffff)
# 117 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef signed long long __int64_t;
typedef unsigned long long __uint64_t;
#define ___int64_t_defined 1

/* POSIX mandates LLONG_MAX in <limits.h> */
#elif  defined(LLONG_MAX) && (LLONG_MAX > 0x7fffffff)
# 123 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef signed long long __int64_t;
typedef unsigned long long __uint64_t;
#define ___int64_t_defined 1

#elif  __EXP(INT_MAX) > 0x7fffffff
# 128 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef signed int __int64_t;
typedef unsigned int __uint64_t;
#define ___int64_t_defined 1
#endif
# 132 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3

#ifdef __INT_LEAST8_TYPE__
typedef __INT_LEAST8_TYPE__ __int_least8_t;
#ifdef __UINT_LEAST8_TYPE__
typedef __UINT_LEAST8_TYPE__ __uint_least8_t;
#else
# 138 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned __INT_LEAST8_TYPE__ __uint_least8_t;
#endif
# 140 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
#define ___int_least8_t_defined 1
#elif defined(___int8_t_defined)
# 142 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
#define ___int_least8_t_defined 1
#elif defined(___int16_t_defined)
# 146 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef __int16_t __int_least8_t;
typedef __uint16_t __uint_least8_t;
#define ___int_least8_t_defined 1
#elif defined(___int32_t_defined)
# 150 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef __int32_t __int_least8_t;
typedef __uint32_t __uint_least8_t;
#define ___int_least8_t_defined 1
#elif defined(___int64_t_defined)
# 154 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef __int64_t __int_least8_t;
typedef __uint64_t __uint_least8_t;
#define ___int_least8_t_defined 1
#endif
# 158 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3

#ifdef __INT_LEAST16_TYPE__
typedef __INT_LEAST16_TYPE__ __int_least16_t;
#ifdef __UINT_LEAST16_TYPE__
typedef __UINT_LEAST16_TYPE__ __uint_least16_t;
#else
# 164 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned __INT_LEAST16_TYPE__ __uint_least16_t;
#endif
# 166 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
#define ___int_least16_t_defined 1
#elif defined(___int16_t_defined)
# 168 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
#define ___int_least16_t_defined 1
#elif defined(___int32_t_defined)
# 172 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef __int32_t __int_least16_t;
typedef __uint32_t __uint_least16_t;
#define ___int_least16_t_defined 1
#elif defined(___int64_t_defined)
# 176 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef __int64_t __int_least16_t;
typedef __uint64_t __uint_least16_t;
#define ___int_least16_t_defined 1
#endif
# 180 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3

#ifdef __INT_LEAST32_TYPE__
typedef __INT_LEAST32_TYPE__ __int_least32_t;
#ifdef __UINT_LEAST32_TYPE__
typedef __UINT_LEAST32_TYPE__ __uint_least32_t;
#else
# 186 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned __INT_LEAST32_TYPE__ __uint_least32_t;
#endif
# 188 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
#define ___int_least32_t_defined 1
#elif defined(___int32_t_defined)
# 190 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
#define ___int_least32_t_defined 1
#elif defined(___int64_t_defined)
# 194 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef __int64_t __int_least32_t;
typedef __uint64_t __uint_least32_t;
#define ___int_least32_t_defined 1
#endif
# 198 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3

#ifdef __INT_LEAST64_TYPE__
typedef __INT_LEAST64_TYPE__ __int_least64_t;
#ifdef __UINT_LEAST64_TYPE__
typedef __UINT_LEAST64_TYPE__ __uint_least64_t;
#else
# 204 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned __INT_LEAST64_TYPE__ __uint_least64_t;
#endif
# 206 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
#define ___int_least64_t_defined 1
#elif defined(___int64_t_defined)
# 208 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;
#define ___int_least64_t_defined 1
#endif
# 212 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3

#if defined(__INTMAX_TYPE__)
typedef __INTMAX_TYPE__ __intmax_t;
#elif __have_longlong64
# 216 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef signed long long __intmax_t;
#else
# 218 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef signed long __intmax_t;
#endif
# 220 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3

#if defined(__UINTMAX_TYPE__)
typedef __UINTMAX_TYPE__ __uintmax_t;
#elif __have_longlong64
# 224 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned long long __uintmax_t;
#else
# 226 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned long __uintmax_t;
#endif
# 228 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3

#ifdef __INTPTR_TYPE__
typedef __INTPTR_TYPE__ __intptr_t;
#ifdef __UINTPTR_TYPE__
typedef __UINTPTR_TYPE__ __uintptr_t;
#else
# 234 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef unsigned __INTPTR_TYPE__ __uintptr_t;
#endif
# 236 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
#elif defined(__PTRDIFF_TYPE__)
# 237 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef __PTRDIFF_TYPE__ __intptr_t;
typedef unsigned __PTRDIFF_TYPE__ __uintptr_t;
#else
# 240 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
typedef long __intptr_t;
typedef unsigned long __uintptr_t;
#endif
# 243 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3

#undef __EXP

#ifdef __cplusplus
}
#endif
# 249 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3

#endif /* _MACHINE__DEFAULT_TYPES_H */
# 251 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_default_types.h" 3
# 46 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/features.h>
#endif /* expanded by -frewrite-includes */
# 46 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
# 47 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 47 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
# 1 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 1 3 4
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
# 37 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#define __need_ptrdiff_t
#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#define __need_STDDEF_H_misc
/* __need_wint_t is intentionally not defined here. */
#endif
# 44 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4

#if defined(__need_ptrdiff_t)
#if !defined(_PTRDIFF_T) || __has_feature(modules)
/* Always define ptrdiff_t when modules are available. */
#if !__has_feature(modules)
#define _PTRDIFF_T
#endif
# 51 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif
# 53 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#undef __need_ptrdiff_t
#endif /* defined(__need_ptrdiff_t) */
# 55 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4

#if defined(__need_size_t)
#if !defined(_SIZE_T) || __has_feature(modules)
/* Always define size_t when modules are available. */
#if !__has_feature(modules)
#define _SIZE_T
#endif
# 62 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ size_t;
#endif
# 64 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#undef __need_size_t
#endif /*defined(__need_size_t) */
# 66 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
#if (defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1 && \
     !defined(_RSIZE_T)) || __has_feature(modules)
/* Always define rsize_t when modules are available. */
#if !__has_feature(modules)
#define _RSIZE_T
#endif
# 76 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ rsize_t;
#endif
# 78 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#endif /* defined(__need_STDDEF_H_misc) */
# 79 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4

#if defined(__need_wchar_t)
#ifndef __cplusplus
/* Always define wchar_t when modules are available. */
#if !defined(_WCHAR_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WCHAR_T
#if defined(_MSC_EXTENSIONS)
#define _WCHAR_T_DEFINED
#endif
# 89 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#endif
# 90 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
typedef __WCHAR_TYPE__ wchar_t;
#endif
# 92 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#endif
# 93 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#undef __need_wchar_t
#endif /* defined(__need_wchar_t) */
# 95 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4

#if defined(__need_NULL)
#undef NULL
#ifdef __cplusplus
#  if !defined(__MINGW32__) && !defined(_MSC_VER)
#    define NULL __null
#  else
# 102 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#    define NULL 0
#  endif
# 104 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#else
# 105 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#  define NULL ((void*)0)
#endif
# 107 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#ifdef __cplusplus
#if defined(_MSC_EXTENSIONS) && defined(_NATIVE_NULLPTR_SUPPORTED)
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
# 112 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#endif
# 113 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#undef __need_NULL
#endif /* defined(__need_NULL) */
# 115 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
#if __STDC_VERSION__ >= 201112L || __cplusplus >= 201103L
#if 0 /* expanded by -frewrite-includes */
#include "__stddef_max_align_t.h"
#endif /* expanded by -frewrite-includes */
# 118 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
# 1 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/__stddef_max_align_t.h" 1 3 4
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
# 32 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/__stddef_max_align_t.h" 3 4
typedef long double max_align_t;
#else
# 34 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/__stddef_max_align_t.h" 3 4
// Define 'max_align_t' to match the GCC definition.
typedef struct {
  long long __clang_max_align_nonce1
      __attribute__((__aligned__(__alignof__(long long))));
  long double __clang_max_align_nonce2
      __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
#endif
# 42 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/__stddef_max_align_t.h" 3 4

#endif
# 44 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/__stddef_max_align_t.h" 3 4
# 119 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 2 3 4
#endif
# 120 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#define offsetof(t, d) __builtin_offsetof(t, d)
#undef __need_STDDEF_H_misc
#endif  /* defined(__need_STDDEF_H_misc) */
# 123 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4

/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#if defined(__need_wint_t)
/* Always define wint_t when modules are available. */
#if !defined(_WINT_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WINT_T
#endif
# 132 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
typedef __WINT_TYPE__ wint_t;
#endif
# 134 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#undef __need_wint_t
#endif /* __need_wint_t */
# 136 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4

#endif
# 138 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
# 48 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 2 3

#define __PMT(args)	args
#define __DOTS    	, ...
#define __THROW

#ifdef __GNUC__
# define __ASMNAME(cname)  __XSTRING (__USER_LABEL_PREFIX__) cname
#endif
# 56 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

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
# 70 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

/*
 * Testing against Clang-specific extensions.
 */
#ifndef	__has_attribute
#define	__has_attribute(x)	0
#endif
# 77 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#ifndef	__has_extension
#define	__has_extension		__has_feature
#endif
# 80 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#ifndef	__has_feature
#define	__has_feature(x)	0
#endif
# 83 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#ifndef	__has_include
#define	__has_include(x)	0
#endif
# 86 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#ifndef	__has_builtin
#define	__has_builtin(x)	0
#endif
# 89 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

#if defined(__cplusplus)
#define	__BEGIN_DECLS	extern "C" {
#define	__END_DECLS	}
#else
# 94 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#define	__BEGIN_DECLS
#define	__END_DECLS
#endif
# 97 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

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
# 110 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#define	__GNUCLIKE_ASM 2
#endif
# 112 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#define	__GNUCLIKE___TYPEOF 1
#define	__GNUCLIKE___OFFSETOF 1
#define	__GNUCLIKE___SECTION 1

#ifndef __INTEL_COMPILER
#define	__GNUCLIKE_CTOR_SECTION_HANDLING 1
#endif
# 119 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

#define	__GNUCLIKE_BUILTIN_CONSTANT_P 1
#if defined(__INTEL_COMPILER) && defined(__cplusplus) && \
   __INTEL_COMPILER < 800
#undef __GNUCLIKE_BUILTIN_CONSTANT_P
#endif
# 125 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

#if (__GNUC_MINOR__ > 95 || __GNUC__ >= 3)
#define	__GNUCLIKE_BUILTIN_VARARGS 1
#define	__GNUCLIKE_BUILTIN_STDARG 1
#define	__GNUCLIKE_BUILTIN_VAALIST 1
#endif
# 131 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

#if defined(__GNUC__)
#define	__GNUC_VA_LIST_COMPATIBILITY 1
#endif
# 135 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

/*
 * Compiler memory barriers, specific to gcc and clang.
 */
#if defined(__GNUC__)
#define	__compiler_membar()	__asm __volatile(" " : : : "memory")
#endif
# 142 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

#ifndef __INTEL_COMPILER
#define	__GNUCLIKE_BUILTIN_NEXT_ARG 1
#define	__GNUCLIKE_MATH_BUILTIN_RELOPS
#endif
# 147 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

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
# 163 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

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
# 189 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#if !(defined(__CC_SUPPORTS___INLINE))
#define	__inline			/* delete GCC keyword */
#endif /* ! __CC_SUPPORTS___INLINE */
# 192 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#endif /* !__cplusplus */
# 193 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

#else	/* !(__STDC__ || __cplusplus) */
# 195 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
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
# 218 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#endif	/* !__CC_SUPPORTS___INLINE */
# 219 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#endif	/* !(__STDC__ || __cplusplus) */
# 220 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

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
# 236 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#if __GNUC__ == 2 && __GNUC_MINOR__ >= 5 && __GNUC_MINOR__ < 7 && !defined(__INTEL_COMPILER)
#define	__dead2		__attribute__((__noreturn__))
#define	__pure2		__attribute__((__const__))
#define	__unused
/* XXX Find out what to do for __packed, __aligned and __section */
#endif
# 242 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#if __GNUC_PREREQ__(2, 7) || defined(__INTEL_COMPILER)
#define	__dead2		__attribute__((__noreturn__))
#define	__pure2		__attribute__((__const__))
#define	__unused	__attribute__((__unused__))
#define	__used		__attribute__((__used__))
#define	__packed	__attribute__((__packed__))
#define	__aligned(x)	__attribute__((__aligned__(x)))
#define	__section(x)	__attribute__((__section__(x)))
#endif
# 251 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#if __GNUC_PREREQ__(4, 3) || __has_attribute(__alloc_size__)
#define	__alloc_size(x)	__attribute__((__alloc_size__(x)))
#define	__alloc_size2(n, x)	__attribute__((__alloc_size__(n, x)))
#else
# 255 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#define	__alloc_size(x)
#define	__alloc_size2(n, x)
#endif
# 258 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#if __GNUC_PREREQ__(4, 9) || __has_attribute(__alloc_align__)
#define	__alloc_align(x)	__attribute__((__alloc_align__(x)))
#else
# 261 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#define	__alloc_align(x)
#endif
# 263 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

#if !__GNUC_PREREQ__(2, 95)
#define	__alignof(x)	__offsetof(struct { char __a; x __b; }, __b)
#endif
# 267 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

/*
 * Keywords added in C11.
 */

#if !defined(__STDC_VERSION__) || __STDC_VERSION__ < 201112L

#if !__has_extension(c_alignas)
#if (defined(__cplusplus) && __cplusplus >= 201103L) || \
    __has_extension(cxx_alignas)
#define	_Alignas(x)		alignas(x)
#else
# 279 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
/* XXX: Only emulates _Alignas(constant-expression); not _Alignas(type-name). */
#define	_Alignas(x)		__aligned(x)
#endif
# 282 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#endif
# 283 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

#if defined(__cplusplus) && __cplusplus >= 201103L
#define	_Alignof(x)		alignof(x)
#else
# 287 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#define	_Alignof(x)		__alignof(x)
#endif
# 289 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

#if !defined(__cplusplus) && !__has_extension(c_atomic) && \
    !__has_extension(cxx_atomic)
/*
 * No native support for _Atomic(). Place object in structure to prevent
 * most forms of direct non-atomic access.
 */
#define	_Atomic(T)		struct { T volatile __val; }
#endif
# 298 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

#if defined(__cplusplus) && __cplusplus >= 201103L
#define	_Noreturn		[[noreturn]]
#else
# 302 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#define	_Noreturn		__dead2
#endif
# 304 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

#if !__has_extension(c_static_assert)
#if (defined(__cplusplus) && __cplusplus >= 201103L) || \
    __has_extension(cxx_static_assert)
#define	_Static_assert(x, y)	static_assert(x, y)
#elif __GNUC_PREREQ__(4,6) && !defined(__cplusplus)
# 310 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
/* Nothing, gcc 4.6 and higher has _Static_assert built-in */
#elif defined(__COUNTER__)
# 312 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#define	_Static_assert(x, y)	__Static_assert(x, __COUNTER__)
#define	__Static_assert(x, y)	___Static_assert(x, y)
#define	___Static_assert(x, y)	typedef char __assert_ ## y[(x) ? 1 : -1] \
				__unused
#else
# 317 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#define	_Static_assert(x, y)	struct __hack
#endif
# 319 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#endif
# 320 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

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
# 331 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#define	_Thread_local		__thread
#endif
# 333 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#endif
# 334 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

#endif /* __STDC_VERSION__ || __STDC_VERSION__ < 201112L */
# 336 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

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
# 351 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#define	__generic(expr, t, yes, no)					\
	__builtin_choose_expr(						\
	    __builtin_types_compatible_p(__typeof(expr), t), yes, no)
#endif
# 355 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

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
# 368 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#define __min_size(x)	(x)
#endif
# 370 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

#if __GNUC_PREREQ__(2, 96)
#define	__malloc_like	__attribute__((__malloc__))
#define	__pure		__attribute__((__pure__))
#else
# 375 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#define	__malloc_like
#define	__pure
#endif
# 378 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

#if __GNUC_PREREQ__(3, 1) || (defined(__INTEL_COMPILER) && __INTEL_COMPILER >= 800)
#define	__always_inline	__inline__ __attribute__((__always_inline__))
#else
# 382 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#define	__always_inline
#endif
# 384 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

#if __GNUC_PREREQ__(3, 1)
#define	__noinline	__attribute__ ((__noinline__))
#else
# 388 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#define	__noinline
#endif
# 390 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

#if __GNUC_PREREQ__(3, 3)
#define	__nonnull(x)	__attribute__((__nonnull__ x))
#define	__nonnull_all	__attribute__((__nonnull__))
#else
# 395 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#define	__nonnull(x)
#define	__nonnull_all
#endif
# 398 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

#if __GNUC_PREREQ__(3, 4)
#define	__fastcall	__attribute__((__fastcall__))
#define	__result_use_check	__attribute__((__warn_unused_result__))
#else
# 403 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#define	__fastcall
#define	__result_use_check
#endif
# 406 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

#if __GNUC_PREREQ__(4, 1)
#define	__returns_twice	__attribute__((__returns_twice__))
#else
# 410 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#define	__returns_twice
#endif
# 412 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

#if __GNUC_PREREQ__(4, 6) || __has_builtin(__builtin_unreachable)
#define	__unreachable()	__builtin_unreachable()
#else
# 416 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#define	__unreachable()	((void)0)
#endif
# 418 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

/* XXX: should use `#if __STDC_VERSION__ < 199901'. */
#if !__GNUC_PREREQ__(2, 7) && !defined(__INTEL_COMPILER)
#define	__func__	NULL
#endif
# 423 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

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
# 434 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#define	__restrict	restrict
#endif
# 436 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#endif
# 437 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

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
# 470 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#define	__predict_true(exp)     (exp)
#define	__predict_false(exp)    (exp)
#endif
# 473 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

#if __GNUC_PREREQ__(4, 0)
#define	__null_sentinel	__attribute__((__sentinel__))
#define	__exported	__attribute__((__visibility__("default")))
/* Only default visibility is supported on PE/COFF targets. */
#ifndef __CYGWIN__
#define	__hidden	__attribute__((__visibility__("hidden")))
#else
# 481 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#define	__hidden
#endif
# 483 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#else
# 484 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#define	__null_sentinel
#define	__exported
#define	__hidden
#endif
# 488 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

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
# 505 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#define	__containerof(x, s, m)						\
	__DEQUALIFY(s *, (const volatile char *)(x) - __offsetof(s, m))
#endif
# 508 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

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
# 522 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
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
# 532 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

/* Compiler-dependent macros that rely on FreeBSD-specific extensions. */
#if defined(__FreeBSD_cc_version) && __FreeBSD_cc_version >= 300001 && \
    defined(__GNUC__) && !defined(__INTEL_COMPILER)
#define	__printf0like(fmtarg, firstvararg) \
	    __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#else
# 539 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#define	__printf0like(fmtarg, firstvararg)
#endif
# 541 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

#if defined(__GNUC__) || defined(__INTEL_COMPILER)
#ifndef __INTEL_COMPILER
#define	__strong_reference(sym,aliassym)	\
	extern __typeof (sym) aliassym __attribute__ ((__alias__ (#sym)))
#endif
# 547 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
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
# 561 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
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
# 573 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#else	/* !__ELF__ */
# 574 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#ifdef __STDC__
#define	__weak_reference(sym,alias)	\
	__asm__(".stabs \"_" #alias "\",11,0,0,0");	\
	__asm__(".stabs \"_" #sym "\",1,0,0,0")
#define	__warn_references(sym,msg)	\
	__asm__(".stabs \"" msg "\",30,0,0,0");		\
	__asm__(".stabs \"_" #sym "\",1,0,0,0")
#else
# 582 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#define	__weak_reference(sym,alias)	\
	__asm__(".stabs \"_/**/alias\",11,0,0,0");	\
	__asm__(".stabs \"_/**/sym\",1,0,0,0")
#define	__warn_references(sym,msg)	\
	__asm__(".stabs msg,30,0,0,0");			\
	__asm__(".stabs \"_/**/sym\",1,0,0,0")
#endif	/* __STDC__ */
# 589 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#endif	/* __ELF__ */
# 590 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#endif	/* __GNUC__ || __INTEL_COMPILER */
# 591 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

#ifndef	__FBSDID
#define	__FBSDID(s)	struct __hack
#endif
# 595 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

#ifndef	__RCSID
#define	__RCSID(s)	struct __hack
#endif
# 599 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

#ifndef	__RCSID_SOURCE
#define	__RCSID_SOURCE(s)	struct __hack
#endif
# 603 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

#ifndef	__SCCSID
#define	__SCCSID(s)	struct __hack
#endif
# 607 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

#ifndef	__COPYRIGHT
#define	__COPYRIGHT(s)	struct __hack
#endif
# 611 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

#ifndef	__DECONST
#define	__DECONST(type, var)	((type)(__uintptr_t)(const void *)(var))
#endif
# 615 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

#ifndef	__DEVOLATILE
#define	__DEVOLATILE(type, var)	((type)(__uintptr_t)(volatile void *)(var))
#endif
# 619 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

#ifndef	__DEQUALIFY
#define	__DEQUALIFY(type, var)	((type)(__uintptr_t)(const volatile void *)(var))
#endif
# 623 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

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
# 634 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#define	__NULLABILITY_PRAGMA_PUSH _Pragma("clang diagnostic push")	\
	_Pragma("clang diagnostic ignored \"-Wnullability-completeness\"")
#define	__NULLABILITY_PRAGMA_POP _Pragma("clang diagnostic pop")
#endif
# 638 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

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
# 653 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#define	__arg_type_tag(arg_kind, arg_idx, type_tag_idx)
#define	__datatype_type_tag(kind, type)
#endif
# 656 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

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
# 672 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
#define	__lock_annotate(x)
#endif
# 674 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3

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
# 717 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/cdefs.h" 3
# 16 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/complex.h" 2 3

__BEGIN_DECLS

/* 7.3.5 Trigonometric functions */
/* 7.3.5.1 The cacos functions */
double complex cacos(double complex);
float complex cacosf(float complex);

/* 7.3.5.2 The casin functions */
double complex casin(double complex);
float complex casinf(float complex);
long double complex casinl(long double complex);

/* 7.3.5.1 The catan functions */
double complex catan(double complex);
float complex catanf(float complex);
long double complex catanl(long double complex);

/* 7.3.5.1 The ccos functions */
double complex ccos(double complex);
float complex ccosf(float complex);

/* 7.3.5.1 The csin functions */
double complex csin(double complex);
float complex csinf(float complex);

/* 7.3.5.1 The ctan functions */
double complex ctan(double complex);
float complex ctanf(float complex);

/* 7.3.6 Hyperbolic functions */
/* 7.3.6.1 The cacosh functions */
double complex cacosh(double complex);
float complex cacoshf(float complex);

/* 7.3.6.2 The casinh functions */
double complex casinh(double complex);
float complex casinhf(float complex);

/* 7.3.6.3 The catanh functions */
double complex catanh(double complex);
float complex catanhf(float complex);

/* 7.3.6.4 The ccosh functions */
double complex ccosh(double complex);
float complex ccoshf(float complex);

/* 7.3.6.5 The csinh functions */
double complex csinh(double complex);
float complex csinhf(float complex);

/* 7.3.6.6 The ctanh functions */
double complex ctanh(double complex);
float complex ctanhf(float complex);

/* 7.3.7 Exponential and logarithmic functions */
/* 7.3.7.1 The cexp functions */
double complex cexp(double complex);
float complex cexpf(float complex);

/* 7.3.7.2 The clog functions */
double complex clog(double complex);
float complex clogf(float complex);
long double complex clogl(long double complex);

/* 7.3.8 Power and absolute-value functions */
/* 7.3.8.1 The cabs functions */
/*#ifndef __LIBM0_SOURCE__ */
/* avoid conflict with historical cabs(struct complex) */
/* double cabs(double complex) __RENAME(__c99_cabs);
   float cabsf(float complex) __RENAME(__c99_cabsf);
   #endif
*/
long double cabsl(long double complex) ;
double cabs(double complex) ;
float cabsf(float complex) ;

/* 7.3.8.2 The cpow functions */
double complex cpow(double complex, double complex);
float complex cpowf(float complex, float complex);

/* 7.3.8.3 The csqrt functions */
double complex csqrt(double complex);
float complex csqrtf(float complex);
long double complex csqrtl(long double complex);

/* 7.3.9 Manipulation functions */
/* 7.3.9.1 The carg functions */ 
double carg(double complex);
float cargf(float complex);
long double cargl(long double complex);

/* 7.3.9.2 The cimag functions */
double cimag(double complex);
float cimagf(float complex);
long double cimagl(long double complex);

/* 7.3.9.3 The conj functions */
double complex conj(double complex);
float complex conjf(float complex);

/* 7.3.9.4 The cproj functions */
double complex cproj(double complex);
float complex cprojf(float complex);

/* 7.3.9.5 The creal functions */
double creal(double complex);
float crealf(float complex);
long double creall(long double complex);

#if __GNU_VISIBLE
double complex clog10(double complex);
float complex clog10f(float complex);
#endif
# 130 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/complex.h" 3

#if defined(__CYGWIN__)
long double complex cacosl(long double complex);
long double complex ccosl(long double complex);
long double complex csinl(long double complex);
long double complex ctanl(long double complex);
long double complex cacoshl(long double complex);
long double complex casinhl(long double complex);
long double complex catanhl(long double complex);
long double complex ccoshl(long double complex);
long double complex csinhl(long double complex);
long double complex ctanhl(long double complex);
long double complex cexpl(long double complex);
long double complex cpowl(long double complex, long double complex);
long double complex conjl(long double complex);
long double complex cprojl(long double complex);
#if __GNU_VISIBLE
long double complex clog10l(long double complex);
#endif
# 149 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/complex.h" 3
#endif /* __CYGWIN__ */
# 150 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/complex.h" 3

__END_DECLS

#endif	/* ! _COMPLEX_H */
# 154 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/complex.h" 3
# 36 "../../../../../newlib/libm/complex/cephes_subrf.c" 2
#if 0 /* expanded by -frewrite-includes */
#include <math.h>
#endif /* expanded by -frewrite-includes */
# 36 "../../../../../newlib/libm/complex/cephes_subrf.c"
# 1 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 1 3
#ifndef  _MATH_H_

#define  _MATH_H_

#if 0 /* expanded by -frewrite-includes */
#include <sys/reent.h>
#endif /* expanded by -frewrite-includes */
# 5 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
# 1 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 1 3
/* This header file provides the reentrancy.  */

/* WARNING: All identifiers here must begin with an underscore.  This file is
   included by stdio.h and others and we therefore must only use identifiers
   in the namespace allotted to us.  */

#ifndef _SYS_REENT_H_
#ifdef __cplusplus
extern "C" {
#endif
# 11 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3
#define _SYS_REENT_H_

#if 0 /* expanded by -frewrite-includes */
#include <_ansi.h>
#endif /* expanded by -frewrite-includes */
# 13 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3
# 1 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/_ansi.h" 1 3
/* Provide support for both ANSI and non-ANSI environments.  */

/* To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */

#ifndef	_ANSIDECL_H_
#define	_ANSIDECL_H_

#if 0 /* expanded by -frewrite-includes */
#include <newlib.h>
#endif /* expanded by -frewrite-includes */
# 10 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/_ansi.h" 3
# 1 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/build/mips3el-scei-elf/newlib/targ-include/newlib.h" 1 3
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
# 14 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/build/mips3el-scei-elf/newlib/targ-include/newlib.h" 3
# 15 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/build/mips3el-scei-elf/newlib/targ-include/newlib.h" 3

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
#define _HAVE_LONG_DOUBLE 1

/* Define if compiler supports -fno-tree-loop-distribute-patterns. */
/* #undef _HAVE_CC_INHIBIT_LOOP_TO_LIBCALL */

/* True if long double supported and it is equal to double.  */
#define _LDBL_EQ_DBL 1
 
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
# 206 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/build/mips3el-scei-elf/newlib/targ-include/newlib.h" 3

# 11 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/_ansi.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/config.h>
#endif /* expanded by -frewrite-includes */
# 11 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/_ansi.h" 3
# 1 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 1 3
#ifndef __SYS_CONFIG_H__
#define __SYS_CONFIG_H__

#if 0 /* expanded by -frewrite-includes */
#include <machine/ieeefp.h>  /* floating point macros */
#endif /* expanded by -frewrite-includes */
# 4 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3
# 1 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 1 3
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
# 79 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#  define __IEEE_BIG_ENDIAN
# endif
# 81 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
# if __ARM_FP & 0x8
#  define __OBSOLETE_MATH_DEFAULT 0
# endif
# 84 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#else
# 85 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
# define __IEEE_BIG_ENDIAN
# ifdef __ARMEL__
#  define __IEEE_BYTES_LITTLE_ENDIAN
# endif
# 89 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 90 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 91 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#if defined (__aarch64__)
#if defined (__AARCH64EL__)
#define __IEEE_LITTLE_ENDIAN
#else
# 96 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_BIG_ENDIAN
#endif
# 98 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#define __OBSOLETE_MATH_DEFAULT 0
#endif
# 100 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __epiphany__
#define __IEEE_LITTLE_ENDIAN
#define Sudden_Underflow 1
#endif
# 105 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __hppa__
#define __IEEE_BIG_ENDIAN
#endif
# 109 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __nds32__
#ifdef __big_endian__
#define __IEEE_BIG_ENDIAN
#else
# 114 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 116 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 117 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

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
# 138 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __sparc__
#ifdef __LITTLE_ENDIAN_DATA__
#define __IEEE_LITTLE_ENDIAN
#else
# 143 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_BIG_ENDIAN
#endif
# 145 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 146 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#if defined(__m68k__) || defined(__mc68000__)
#define __IEEE_BIG_ENDIAN
#endif
# 150 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#if defined(__mc68hc11__) || defined(__mc68hc12__) || defined(__mc68hc1x__)
#define __IEEE_BIG_ENDIAN
#ifdef __HAVE_SHORT_DOUBLE__
# define _DOUBLE_IS_32BITS
#endif
# 156 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 157 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#if defined (__H8300__) || defined (__H8300H__) || defined (__H8300S__) || defined (__H8500__) || defined (__H8300SX__)
#define __IEEE_BIG_ENDIAN
#define _FLOAT_ARG float
#define _DOUBLE_IS_32BITS
#endif
# 163 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#if defined (__xc16x__) || defined (__xc16xL__) || defined (__xc16xS__)
#define __IEEE_LITTLE_ENDIAN
#define _FLOAT_ARG float
#define _DOUBLE_IS_32BITS
#endif
# 169 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3


#ifdef __sh__
#ifdef __LITTLE_ENDIAN__
#define __IEEE_LITTLE_ENDIAN
#else
# 175 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_BIG_ENDIAN
#endif
# 177 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#if defined(__SH2E__) || defined(__SH3E__) || defined(__SH4_SINGLE_ONLY__) || defined(__SH2A_SINGLE_ONLY__)
#define _DOUBLE_IS_32BITS
#endif
# 180 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 181 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef _AM29K
#define __IEEE_BIG_ENDIAN
#endif
# 185 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef _WIN32
#define __IEEE_LITTLE_ENDIAN
#endif
# 189 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __i386__
#define __IEEE_LITTLE_ENDIAN
#endif
# 193 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __riscv
#define __IEEE_LITTLE_ENDIAN
#endif
# 197 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __i960__
#define __IEEE_LITTLE_ENDIAN
#endif
# 201 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __lm32__
#define __IEEE_BIG_ENDIAN
#endif
# 205 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __M32R__
#define __IEEE_BIG_ENDIAN
#endif
# 209 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __nvptx__
#define __IEEE_LITTLE_ENDIAN
#endif
# 213 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#if defined(_C4x) || defined(_C3x)
#define __IEEE_BIG_ENDIAN
#define _DOUBLE_IS_32BITS
#endif
# 218 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __TMS320C6X__
#ifdef _BIG_ENDIAN
#define __IEEE_BIG_ENDIAN
#else
# 223 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 225 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 226 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __TIC80__
#define __IEEE_LITTLE_ENDIAN
#endif
# 230 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MIPSEL__
#define __IEEE_LITTLE_ENDIAN
#endif
# 234 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#ifdef __MIPSEB__
#define __IEEE_BIG_ENDIAN
#endif
# 237 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MMIX__
#define __IEEE_BIG_ENDIAN
#endif
# 241 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __D30V__
#define __IEEE_BIG_ENDIAN
#endif
# 245 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

/* necv70 was __IEEE_LITTLE_ENDIAN. */

#ifdef __W65__
#define __IEEE_LITTLE_ENDIAN
#define _DOUBLE_IS_32BITS
#endif
# 252 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#if defined(__Z8001__) || defined(__Z8002__)
#define __IEEE_BIG_ENDIAN
#endif
# 256 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __m88k__
#define __IEEE_BIG_ENDIAN
#endif
# 260 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mn10300__
#define __IEEE_LITTLE_ENDIAN
#endif
# 264 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mn10200__
#define __IEEE_LITTLE_ENDIAN
#define _DOUBLE_IS_32BITS
#endif
# 269 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __v800
#define __IEEE_LITTLE_ENDIAN
#endif
# 273 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __v850
#define __IEEE_LITTLE_ENDIAN
#endif
# 277 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __D10V__
#define __IEEE_BIG_ENDIAN
#if __DOUBLE__ == 32
#define _DOUBLE_IS_32BITS
#endif
# 283 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 284 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __PPC__
#if (defined(_BIG_ENDIAN) && _BIG_ENDIAN) || (defined(_AIX) && _AIX)
#define __IEEE_BIG_ENDIAN
#else
# 289 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#if (defined(_LITTLE_ENDIAN) && _LITTLE_ENDIAN) || (defined(__sun__) && __sun__) || (defined(_WIN32) && _WIN32)
#define __IEEE_LITTLE_ENDIAN
#endif
# 292 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 293 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 294 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __xstormy16__
#define __IEEE_LITTLE_ENDIAN
#endif
# 298 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __arc__
#ifdef __big_endian__
#define __IEEE_BIG_ENDIAN
#else
# 303 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 305 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 306 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __CRX__
#define __IEEE_LITTLE_ENDIAN
#endif
# 310 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __fr30__
#define __IEEE_BIG_ENDIAN
#endif
# 314 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __FT32__
#define __IEEE_LITTLE_ENDIAN
#endif
# 318 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mcore__
#define __IEEE_BIG_ENDIAN
#endif
# 322 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mt__
#define __IEEE_BIG_ENDIAN
#endif
# 326 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __frv__
#define __IEEE_BIG_ENDIAN
#endif
# 330 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __moxie__
#ifdef __MOXIE_BIG_ENDIAN__
#define __IEEE_BIG_ENDIAN
#else
# 335 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 337 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 338 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __ia64__
#ifdef __BIG_ENDIAN__
#define __IEEE_BIG_ENDIAN
#else
# 343 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 345 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 346 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __AVR__
#define __IEEE_LITTLE_ENDIAN
#define _DOUBLE_IS_32BITS
#endif
# 351 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#if defined(__or1k__) || defined(__OR1K__) || defined(__OR1KND__)
#define __IEEE_BIG_ENDIAN
#endif
# 355 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __IP2K__
#define __IEEE_BIG_ENDIAN
#define __SMALL_BITFIELDS
#define _DOUBLE_IS_32BITS
#endif
# 361 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __iq2000__
#define __IEEE_BIG_ENDIAN
#endif
# 365 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MAVERICK__
#ifdef __ARMEL__
#  define __IEEE_LITTLE_ENDIAN
#else  /* must be __ARMEB__ */
# 370 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#  define __IEEE_BIG_ENDIAN
#endif /* __ARMEL__ */
# 372 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif /* __MAVERICK__ */
# 373 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __m32c__
#define __IEEE_LITTLE_ENDIAN
#define __SMALL_BITFIELDS
#endif
# 378 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __CRIS__
#define __IEEE_LITTLE_ENDIAN
#endif
# 382 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __BFIN__
#define __IEEE_LITTLE_ENDIAN
#endif
# 386 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __x86_64__
#define __IEEE_LITTLE_ENDIAN
#endif
# 390 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mep__
#ifdef __LITTLE_ENDIAN__
#define __IEEE_LITTLE_ENDIAN
#else
# 395 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_BIG_ENDIAN
#endif
# 397 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 398 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MICROBLAZE__
#ifndef __MICROBLAZEEL__
#define __IEEE_BIG_ENDIAN
#else
# 403 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 405 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 406 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MSP430__
#define __IEEE_LITTLE_ENDIAN
#define __SMALL_BITFIELDS	/* 16 Bit INT */
#endif
# 411 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __RL78__
#define __IEEE_LITTLE_ENDIAN
#define __SMALL_BITFIELDS	/* 16 Bit INT */
#ifndef __RL78_64BIT_DOUBLES__
#define _DOUBLE_IS_32BITS
#endif
# 418 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 419 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __RX__

#ifdef __RX_BIG_ENDIAN__
#define __IEEE_BIG_ENDIAN
#else
# 425 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 427 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifndef __RX_64BIT_DOUBLES__
#define _DOUBLE_IS_32BITS
#endif
# 431 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __RX_16BIT_INTS__
#define __SMALL_BITFIELDS
#endif
# 435 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#endif
# 437 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#if (defined(__CR16__) || defined(__CR16C__) ||defined(__CR16CP__))
#define __IEEE_LITTLE_ENDIAN
#define __SMALL_BITFIELDS	/* 16 Bit INT */
#endif
# 442 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __NIOS2__
# ifdef __nios2_big_endian__
#  define __IEEE_BIG_ENDIAN
# else
# 447 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#  define __IEEE_LITTLE_ENDIAN
# endif
# 449 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 450 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __VISIUM__
#define __IEEE_BIG_ENDIAN
#endif
# 454 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __CYGWIN__
#define __OBSOLETE_MATH_DEFAULT 0
#endif
# 458 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifndef __OBSOLETE_MATH_DEFAULT
/* Use old math code by default.  */
#define __OBSOLETE_MATH_DEFAULT 1
#endif
# 463 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#ifndef __OBSOLETE_MATH
#define __OBSOLETE_MATH __OBSOLETE_MATH_DEFAULT
#endif
# 466 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifndef __IEEE_BIG_ENDIAN
#ifndef __IEEE_LITTLE_ENDIAN
#error Endianess not declared!!
#endif /* not __IEEE_LITTLE_ENDIAN */
# 471 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif /* not __IEEE_BIG_ENDIAN */
# 472 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#endif /* not __IEEE_LITTLE_ENDIAN */
# 474 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif /* not __IEEE_BIG_ENDIAN */
# 475 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

# 5 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/features.h>	/* POSIX defs */
#endif /* expanded by -frewrite-includes */
# 5 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3
# 6 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

#ifdef __aarch64__
#define MALLOC_ALIGNMENT 16
#endif
# 10 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

/* exceptions first */
#if defined(__H8500__) || defined(__W65__)
#define __SMALL_BITFIELDS
/* ???  This conditional is true for the h8500 and the w65, defining H8300
   in those cases probably isn't the right thing to do.  */
#define H8300 1
#endif
# 18 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

/* 16 bit integer machines */
#if defined(__Z8001__) || defined(__Z8002__) || defined(__H8500__) || defined(__W65__) || defined (__mn10200__) || defined (__AVR__)

#undef INT_MAX
#undef UINT_MAX
#define INT_MAX 32767
#define UINT_MAX 65535
#endif
# 27 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

#if defined (__H8300__) || defined (__H8300H__) || defined(__H8300S__) || defined (__H8300SX__)
#define __SMALL_BITFIELDS
#define H8300 1
#undef INT_MAX
#undef UINT_MAX
#define INT_MAX __INT_MAX__
#define UINT_MAX (__INT_MAX__ * 2U + 1)
#endif
# 36 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

#if (defined(__CR16__) || defined(__CR16C__) ||defined(__CR16CP__))
#ifndef __INT32__
#define __SMALL_BITFIELDS      
#undef INT_MAX
#undef UINT_MAX
#define INT_MAX 32767
#define UINT_MAX (__INT_MAX__ * 2U + 1)
#else /* INT32 */
# 45 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3
#undef INT_MAX
#undef UINT_MAX
#define INT_MAX 2147483647
#define UINT_MAX (__INT_MAX__ * 2U + 1)
#endif /* INT32 */
# 50 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

#endif /* CR16C */
# 52 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

#if defined (__xc16x__) || defined (__xc16xL__) || defined (__xc16xS__)
#define __SMALL_BITFIELDS
#endif
# 56 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

#ifdef __W65__
#define __SMALL_BITFIELDS
#endif
# 60 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

#if defined(__D10V__)
#define __SMALL_BITFIELDS
#undef INT_MAX
#undef UINT_MAX
#define INT_MAX __INT_MAX__
#define UINT_MAX (__INT_MAX__ * 2U + 1)
#define _POINTER_INT short
#endif
# 69 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

#if defined(__mc68hc11__) || defined(__mc68hc12__) || defined(__mc68hc1x__)
#undef INT_MAX
#undef UINT_MAX
#define INT_MAX __INT_MAX__
#define UINT_MAX (__INT_MAX__ * 2U + 1)
#define _POINTER_INT short
#endif
# 77 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

#if defined(__m68k__) || defined(__mc68000__) || defined(__riscv)
#define _READ_WRITE_RETURN_TYPE _ssize_t
#endif
# 81 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

#ifdef ___AM29K__
#define _FLOAT_RET double
#endif
# 85 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

#ifdef __i386__
#ifndef __unix__
/* in other words, go32 */
#define _FLOAT_RET double
#endif
# 91 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3
#if defined(__linux__) || defined(__RDOS__)
/* we want the reentrancy structure to be returned by a function */
#define __DYNAMIC_REENT__
#define HAVE_GETDATE
#define _READ_WRITE_RETURN_TYPE _ssize_t
#define __LARGE64_FILES 1
/* we use some glibc header files so turn on glibc large file feature */
#define _LARGEFILE64_SOURCE 1
#endif
# 100 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3
#endif
# 101 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

#ifdef __mn10200__
#define __SMALL_BITFIELDS
#endif
# 105 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

#ifdef __AVR__
#define __SMALL_BITFIELDS
#define _POINTER_INT short
#endif
# 110 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

#ifdef __v850
#define __ATTRIBUTE_IMPURE_PTR__ __attribute__((__sda__))
#endif
# 114 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

/* For the PowerPC eabi, force the _impure_ptr to be in .sdata */
#if defined(__PPC__)
#if defined(_CALL_SYSV)
#define __ATTRIBUTE_IMPURE_PTR__ __attribute__((__section__(".sdata")))
#endif
# 120 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3
#ifdef __SPE__
#define _LONG_DOUBLE double
#endif
# 123 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3
#endif
# 124 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

/* Configure small REENT structure for Xilinx MicroBlaze platforms */
#if defined (__MICROBLAZE__)
#ifndef _REENT_SMALL
#define _REENT_SMALL
#endif
# 130 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3
/* Xilinx XMK uses Unix98 mutex */
#ifdef __XMK__
#define _UNIX98_THREAD_MUTEX_ATTRIBUTES
#endif
# 134 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3
#endif
# 135 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

#if defined(__mips__) && !defined(__rtems__)
#define __ATTRIBUTE_IMPURE_PTR__ __attribute__((__section__(".sdata")))
#endif
# 139 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

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
# 151 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

#if defined __MSP430__
#ifndef _REENT_SMALL
#define _REENT_SMALL
#endif
# 156 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

#define __BUFSIZ__ 256
#define __SMALL_BITFIELDS

#ifdef __MSP430X_LARGE__
#define _POINTER_INT long
#else
# 163 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3
#define _POINTER_INT int
#endif
# 165 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3
#endif
# 166 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

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
# 177 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3
#define _POINTER_INT long
#endif
# 179 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3
#define __BUFSIZ__ 16
#define _REENT_SMALL
#endif /* __m32c__ */
# 182 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

#ifdef __SPU__
#define MALLOC_ALIGNMENT 16
#define __CUSTOM_FILE_IO__
#endif
# 187 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

#if defined(__or1k__) || defined(__or1knd__)
#define __DYNAMIC_REENT__
#endif
# 191 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

/* This block should be kept in sync with GCC's limits.h.  The point
   of having these definitions here is to not include limits.h, which
   would pollute the user namespace, while still using types of the
   the correct widths when deciding how to define __int32_t and
   __int64_t.  */
#ifndef __INT_MAX__
# ifdef INT_MAX
#  define __INT_MAX__ INT_MAX
# else
# 201 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3
#  define __INT_MAX__ 2147483647
# endif
# 203 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3
#endif
# 204 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

#ifndef __LONG_MAX__
# ifdef LONG_MAX
#  define __LONG_MAX__ LONG_MAX
# else
# 209 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3
#  if defined (__alpha__) || (defined (__sparc__) && defined(__arch64__)) \
      || defined (__sparcv9)
#   define __LONG_MAX__ 9223372036854775807L
#  else
# 213 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3
#   define __LONG_MAX__ 2147483647L
#  endif /* __alpha__ || sparc64 */
# 215 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3
# endif
# 216 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3
#endif
# 217 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3
/* End of block that should be kept in sync with GCC's limits.h.  */

#ifndef _POINTER_INT
#define _POINTER_INT long
#endif
# 222 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

#ifdef __frv__
#define __ATTRIBUTE_IMPURE_PTR__ __attribute__((__section__(".sdata")))
#endif
# 226 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3
#undef __RAND_MAX
#if __INT_MAX__ == 32767
#define __RAND_MAX 32767
#else
# 230 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3
#define __RAND_MAX 0x7fffffff
#endif
# 232 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

#if defined(__CYGWIN__)
#if 0 /* expanded by -frewrite-includes */
#include <cygwin/config.h>
#endif /* expanded by -frewrite-includes */
# 234 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3
# 235 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3
#endif
# 236 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

#if defined(__rtems__)
#define __FILENAME_MAX__ 255
#define _READ_WRITE_RETURN_TYPE _ssize_t
#define __DYNAMIC_REENT__
#define _REENT_GLOBAL_ATEXIT
#define _REENT_GLOBAL_STDIO_STREAMS
#endif
# 244 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

#ifndef __EXPORT
#define __EXPORT
#endif
# 248 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

#ifndef __IMPORT
#define __IMPORT
#endif
# 252 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

/* Define return type of read/write routines.  In POSIX, the return type
   for read()/write() is "ssize_t" but legacy newlib code has been using
   "int" for some time.  If not specified, "int" is defaulted.  */
#ifndef _READ_WRITE_RETURN_TYPE
#define _READ_WRITE_RETURN_TYPE int
#endif
# 259 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3
/* Define `count' parameter of read/write routines.  In POSIX, the `count'
   parameter is "size_t" but legacy newlib code has been using "int" for some
   time.  If not specified, "int" is defaulted.  */
#ifndef _READ_WRITE_BUFSIZE_TYPE
#define _READ_WRITE_BUFSIZE_TYPE int
#endif
# 265 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

#ifndef __WCHAR_MAX__
#if __INT_MAX__ == 32767 || defined (_WIN32)
#define __WCHAR_MAX__ 0xffffu
#endif
# 270 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3
#endif
# 271 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

/* See if small reent asked for at configuration time and
   is not chosen by the platform by default.  */
#ifdef _WANT_REENT_SMALL
#ifndef _REENT_SMALL
#define _REENT_SMALL
#endif
# 278 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3
#endif
# 279 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

#ifdef _WANT_REENT_GLOBAL_STDIO_STREAMS
#ifndef _REENT_GLOBAL_STDIO_STREAMS
#define _REENT_GLOBAL_STDIO_STREAMS
#endif
# 284 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3
#endif
# 285 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

#ifdef _WANT_USE_LONG_TIME_T
#ifndef _USE_LONG_TIME_T
#define _USE_LONG_TIME_T
#endif
# 290 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3
#endif
# 291 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

/* If _MB_EXTENDED_CHARSETS_ALL is set, we want all of the extended
   charsets.  The extended charsets add a few functions and a couple
   of tables of a few K each. */
#ifdef _MB_EXTENDED_CHARSETS_ALL
#define _MB_EXTENDED_CHARSETS_ISO 1
#define _MB_EXTENDED_CHARSETS_WINDOWS 1
#endif
# 299 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3

#endif /* __SYS_CONFIG_H__ */
# 301 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/config.h" 3
# 12 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/_ansi.h" 2 3

/*  ISO C++.  */

#ifdef __cplusplus
#if !(defined(_BEGIN_STD_C) && defined(_END_STD_C))
#ifdef _HAVE_STD_CXX
#define _BEGIN_STD_C namespace std { extern "C" {
#define _END_STD_C  } }
#else
# 21 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/_ansi.h" 3
#define _BEGIN_STD_C extern "C" {
#define _END_STD_C  }
#endif
# 24 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/_ansi.h" 3
#if __GNUC_PREREQ (3, 3)
#define _NOTHROW __attribute__ ((__nothrow__))
#else
# 27 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/_ansi.h" 3
#define _NOTHROW throw()
#endif
# 29 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/_ansi.h" 3
#endif
# 30 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/_ansi.h" 3
#else
# 31 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/_ansi.h" 3
#define _BEGIN_STD_C
#define _END_STD_C
#define _NOTHROW
#endif
# 35 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/_ansi.h" 3

#ifndef _LONG_DOUBLE
#define _LONG_DOUBLE long double
#endif
# 39 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/_ansi.h" 3

/* Support gcc's __attribute__ facility.  */

#ifdef __GNUC__
#define _ATTRIBUTE(attrs) __attribute__ (attrs)
#else
# 45 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/_ansi.h" 3
#define _ATTRIBUTE(attrs)
#endif
# 47 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/_ansi.h" 3

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
# 67 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/_ansi.h" 3
/* We're using GCC in C99 mode, or an unknown compiler which
  we just have to hope obeys the C99 semantics of inline.  */
#define _ELIDABLE_INLINE static __inline__
#endif
# 71 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/_ansi.h" 3

#if __GNUC_PREREQ (3, 1)
#define _NOINLINE		__attribute__ ((__noinline__))
#define _NOINLINE_STATIC	_NOINLINE static
#else
# 76 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/_ansi.h" 3
/* On non-GNU compilers and GCC prior to version 3.1 the compiler can't be
   trusted not to inline if it is static. */
#define _NOINLINE
#define _NOINLINE_STATIC
#endif
# 81 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/_ansi.h" 3

#endif /* _ANSIDECL_H_ */
# 83 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/_ansi.h" 3
# 14 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 14 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3
# 1 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 1 3 4
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
# 37 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#define __need_ptrdiff_t
#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#define __need_STDDEF_H_misc
/* __need_wint_t is intentionally not defined here. */
#endif
# 44 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4

#if defined(__need_ptrdiff_t)
#if !defined(_PTRDIFF_T) || __has_feature(modules)
/* Always define ptrdiff_t when modules are available. */
#if !__has_feature(modules)
#define _PTRDIFF_T
#endif
# 51 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif
# 53 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#undef __need_ptrdiff_t
#endif /* defined(__need_ptrdiff_t) */
# 55 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4

#if defined(__need_size_t)
#if !defined(_SIZE_T) || __has_feature(modules)
/* Always define size_t when modules are available. */
#if !__has_feature(modules)
#define _SIZE_T
#endif
# 62 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ size_t;
#endif
# 64 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#undef __need_size_t
#endif /*defined(__need_size_t) */
# 66 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
#if (defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1 && \
     !defined(_RSIZE_T)) || __has_feature(modules)
/* Always define rsize_t when modules are available. */
#if !__has_feature(modules)
#define _RSIZE_T
#endif
# 76 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ rsize_t;
#endif
# 78 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#endif /* defined(__need_STDDEF_H_misc) */
# 79 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4

#if defined(__need_wchar_t)
#ifndef __cplusplus
/* Always define wchar_t when modules are available. */
#if !defined(_WCHAR_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WCHAR_T
#if defined(_MSC_EXTENSIONS)
#define _WCHAR_T_DEFINED
#endif
# 89 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#endif
# 90 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
typedef __WCHAR_TYPE__ wchar_t;
#endif
# 92 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#endif
# 93 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#undef __need_wchar_t
#endif /* defined(__need_wchar_t) */
# 95 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4

#if defined(__need_NULL)
#undef NULL
#ifdef __cplusplus
#  if !defined(__MINGW32__) && !defined(_MSC_VER)
#    define NULL __null
#  else
# 102 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#    define NULL 0
#  endif
# 104 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#else
# 105 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#  define NULL ((void*)0)
#endif
# 107 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#ifdef __cplusplus
#if defined(_MSC_EXTENSIONS) && defined(_NATIVE_NULLPTR_SUPPORTED)
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
# 112 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#endif
# 113 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#undef __need_NULL
#endif /* defined(__need_NULL) */
# 115 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
#if __STDC_VERSION__ >= 201112L || __cplusplus >= 201103L
#if 0 /* expanded by -frewrite-includes */
#include "__stddef_max_align_t.h"
#endif /* expanded by -frewrite-includes */
# 118 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
# 119 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#endif
# 120 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#define offsetof(t, d) __builtin_offsetof(t, d)
#undef __need_STDDEF_H_misc
#endif  /* defined(__need_STDDEF_H_misc) */
# 123 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4

/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#if defined(__need_wint_t)
/* Always define wint_t when modules are available. */
#if !defined(_WINT_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WINT_T
#endif
# 132 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
typedef __WINT_TYPE__ wint_t;
#endif
# 134 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#undef __need_wint_t
#endif /* __need_wint_t */
# 136 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4

#endif
# 138 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
# 15 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/_types.h>
#endif /* expanded by -frewrite-includes */
# 15 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3
# 1 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 1 3
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
# 22 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3
# 23 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/config.h>
#endif /* expanded by -frewrite-includes */
# 23 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3
# 24 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <machine/_types.h>
#endif /* expanded by -frewrite-includes */
# 24 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3
# 1 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_types.h" 1 3
/*
 *  $Id$
 */

#ifndef _MACHINE__TYPES_H
#define _MACHINE__TYPES_H
#if 0 /* expanded by -frewrite-includes */
#include <machine/_default_types.h>
#endif /* expanded by -frewrite-includes */
# 7 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_types.h" 3
# 8 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_types.h" 3
#endif
# 9 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/_types.h" 3
# 25 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/lock.h>
#endif /* expanded by -frewrite-includes */
# 25 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3
# 1 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/lock.h" 1 3
#ifndef __SYS_LOCK_H__
#define __SYS_LOCK_H__

/* dummy lock routines for single-threaded aps */

#if 0 /* expanded by -frewrite-includes */
#include <newlib.h>
#endif /* expanded by -frewrite-includes */
# 6 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/lock.h" 3
# 7 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/lock.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <_ansi.h>
#endif /* expanded by -frewrite-includes */
# 7 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/lock.h" 3
# 8 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/lock.h" 3

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
# 28 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/lock.h" 3

#ifdef __cplusplus
extern "C" {
#endif
# 32 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/lock.h" 3

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
# 66 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/lock.h" 3

#endif /* !defined(_RETARGETABLE_LOCKING) */
# 68 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/lock.h" 3

#endif /* __SYS_LOCK_H__ */
# 70 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/lock.h" 3
# 26 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 2 3

#ifndef __machine_blkcnt_t_defined
typedef long __blkcnt_t;
#endif
# 30 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_blksize_t_defined
typedef long __blksize_t;
#endif
# 34 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_fsblkcnt_t_defined
typedef __uint64_t __fsblkcnt_t;
#endif
# 38 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_fsfilcnt_t_defined
typedef __uint32_t __fsfilcnt_t;
#endif
# 42 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_off_t_defined
typedef long _off_t;
#endif
# 46 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3

#if defined(__XMK__)
typedef signed char __pid_t;
#else
# 50 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3
typedef int __pid_t;
#endif
# 52 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_dev_t_defined
typedef short __dev_t;
#endif
# 56 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_uid_t_defined
typedef unsigned short __uid_t;
#endif
# 60 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3
#ifndef __machine_gid_t_defined
typedef unsigned short __gid_t;
#endif
# 63 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_id_t_defined
typedef __uint32_t __id_t;
#endif
# 67 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_ino_t_defined
#if (defined(__i386__) && (defined(GO32) || defined(__MSDOS__))) || \
    defined(__sparc__) || defined(__SPU__)
typedef unsigned long __ino_t;
#else
# 73 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3
typedef unsigned short __ino_t;
#endif
# 75 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3
#endif
# 76 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_mode_t_defined
#if defined(__i386__) && (defined(GO32) || defined(__MSDOS__))
typedef int __mode_t;
#else
# 81 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3
#if defined(__sparc__) && !defined(__sparc_v9__)
#ifdef __svr4__
typedef unsigned long __mode_t;
#else
# 85 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3
typedef unsigned short __mode_t;
#endif
# 87 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3
#else
# 88 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3
typedef __uint32_t __mode_t;
#endif
# 90 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3
#endif
# 91 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3
#endif
# 92 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_off64_t_defined
__extension__ typedef long long _off64_t;
#endif
# 96 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3

#if defined(__CYGWIN__) && !defined(__LP64__)
typedef _off64_t __off_t;
#else
# 100 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3
typedef _off_t __off_t;
#endif
# 102 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3

typedef _off64_t __loff_t;

#ifndef __machine_key_t_defined
typedef long __key_t;
#endif
# 108 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3

/*
 * We need fpos_t for the following, but it doesn't have a leading "_",
 * so we use _fpos_t instead.
 */
#ifndef __machine_fpos_t_defined
typedef long _fpos_t;		/* XXX must match off_t in <sys/types.h> */
				/* (and must be `long' for now) */
#endif
# 117 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3

#ifdef __LARGE64_FILES
#ifndef __machine_fpos64_t_defined
typedef _off64_t _fpos64_t;
#endif
# 122 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3
#endif
# 123 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3

/* Defined by GCC provided <stddef.h> */
#undef __size_t

#ifndef __machine_size_t_defined
#ifdef __SIZE_TYPE__
typedef __SIZE_TYPE__ __size_t;
#else
# 131 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3
#if defined(__INT_MAX__) && __INT_MAX__ == 2147483647
typedef unsigned int __size_t;
#else
# 134 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3
typedef unsigned long __size_t;
#endif
# 136 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3
#endif
# 137 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3
#endif
# 138 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_ssize_t_defined
#ifdef __SIZE_TYPE__
/* If __SIZE_TYPE__ is defined (gcc) we define ssize_t based on size_t.
   We simply change "unsigned" to "signed" for this single definition
   to make sure ssize_t and size_t only differ by their signedness. */
#define unsigned signed
typedef __SIZE_TYPE__ _ssize_t;
#undef unsigned
#else
# 148 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3
#if defined(__INT_MAX__) && __INT_MAX__ == 2147483647
typedef int _ssize_t;
#else
# 151 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3
typedef long _ssize_t;
#endif
# 153 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3
#endif
# 154 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3
#endif
# 155 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3

typedef _ssize_t __ssize_t;

#define __need_wint_t
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 159 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3
# 1 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 1 3 4
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
# 37 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#define __need_ptrdiff_t
#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#define __need_STDDEF_H_misc
/* __need_wint_t is intentionally not defined here. */
#endif
# 44 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4

#if defined(__need_ptrdiff_t)
#if !defined(_PTRDIFF_T) || __has_feature(modules)
/* Always define ptrdiff_t when modules are available. */
#if !__has_feature(modules)
#define _PTRDIFF_T
#endif
# 51 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif
# 53 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#undef __need_ptrdiff_t
#endif /* defined(__need_ptrdiff_t) */
# 55 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4

#if defined(__need_size_t)
#if !defined(_SIZE_T) || __has_feature(modules)
/* Always define size_t when modules are available. */
#if !__has_feature(modules)
#define _SIZE_T
#endif
# 62 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ size_t;
#endif
# 64 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#undef __need_size_t
#endif /*defined(__need_size_t) */
# 66 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
#if (defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1 && \
     !defined(_RSIZE_T)) || __has_feature(modules)
/* Always define rsize_t when modules are available. */
#if !__has_feature(modules)
#define _RSIZE_T
#endif
# 76 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ rsize_t;
#endif
# 78 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#endif /* defined(__need_STDDEF_H_misc) */
# 79 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4

#if defined(__need_wchar_t)
#ifndef __cplusplus
/* Always define wchar_t when modules are available. */
#if !defined(_WCHAR_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WCHAR_T
#if defined(_MSC_EXTENSIONS)
#define _WCHAR_T_DEFINED
#endif
# 89 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#endif
# 90 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
typedef __WCHAR_TYPE__ wchar_t;
#endif
# 92 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#endif
# 93 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#undef __need_wchar_t
#endif /* defined(__need_wchar_t) */
# 95 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4

#if defined(__need_NULL)
#undef NULL
#ifdef __cplusplus
#  if !defined(__MINGW32__) && !defined(_MSC_VER)
#    define NULL __null
#  else
# 102 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#    define NULL 0
#  endif
# 104 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#else
# 105 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#  define NULL ((void*)0)
#endif
# 107 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#ifdef __cplusplus
#if defined(_MSC_EXTENSIONS) && defined(_NATIVE_NULLPTR_SUPPORTED)
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
# 112 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#endif
# 113 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#undef __need_NULL
#endif /* defined(__need_NULL) */
# 115 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
#if __STDC_VERSION__ >= 201112L || __cplusplus >= 201103L
#if 0 /* expanded by -frewrite-includes */
#include "__stddef_max_align_t.h"
#endif /* expanded by -frewrite-includes */
# 118 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
# 119 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#endif
# 120 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#define offsetof(t, d) __builtin_offsetof(t, d)
#undef __need_STDDEF_H_misc
#endif  /* defined(__need_STDDEF_H_misc) */
# 123 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4

/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#if defined(__need_wint_t)
/* Always define wint_t when modules are available. */
#if !defined(_WINT_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WINT_T
#endif
# 132 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
typedef __WINT_TYPE__ wint_t;
#endif
# 134 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
#undef __need_wint_t
#endif /* __need_wint_t */
# 136 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4

#endif
# 138 "/home/matthew_r_brades_googlemail_com/sysprefix/lib/clang/8.0.0/include/stddef.h" 3 4
# 160 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 2 3

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
# 173 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_flock_t_defined
typedef _LOCK_RECURSIVE_T _flock_t;
#endif
# 177 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_iconv_t_defined
/* Iconv descriptor type */
typedef void *_iconv_t;
#endif
# 182 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_clock_t_defined
#define	_CLOCK_T_	unsigned long	/* clock() */
#endif
# 186 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3

typedef	_CLOCK_T_	__clock_t;

#if defined(_USE_LONG_TIME_T) || __LONG_MAX__ > 0x7fffffffL
#define	_TIME_T_ long
#else
# 192 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3
#define	_TIME_T_ __int_least64_t
#endif
# 194 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3
typedef	_TIME_T_	__time_t;

#ifndef __machine_clockid_t_defined
#define	_CLOCKID_T_ 	unsigned long
#endif
# 199 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3

typedef	_CLOCKID_T_	__clockid_t;

#define	_TIMER_T_	unsigned long
typedef	_TIMER_T_	__timer_t;

#ifndef __machine_sa_family_t_defined
typedef	__uint8_t	__sa_family_t;
#endif
# 208 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3

#ifndef __machine_socklen_t_defined
typedef	__uint32_t	__socklen_t;
#endif
# 212 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3

typedef	int		__nl_item;
typedef	unsigned short	__nlink_t;
typedef	long		__suseconds_t;	/* microseconds (signed) */
typedef	unsigned long	__useconds_t;	/* microseconds (unsigned) */

#ifdef __GNUCLIKE_BUILTIN_VARARGS
typedef	__builtin_va_list	__va_list;
#else
# 221 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3
typedef	char *			__va_list;
#endif /* __GNUCLIKE_BUILTIN_VARARGS */
# 223 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3

#endif	/* _SYS__TYPES_H */
# 225 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/_types.h" 3
# 16 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 2 3

#define _NULL 0

#ifndef __Long
#if __LONG_MAX__ == 2147483647L
#define __Long long
typedef unsigned __Long __ULong;
#elif __INT_MAX__ == 2147483647
# 24 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3
#define __Long int
typedef unsigned __Long __ULong;
#endif
# 27 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3
#endif
# 28 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3

#if !defined( __Long)
#if 0 /* expanded by -frewrite-includes */
#include <sys/types.h>
#endif /* expanded by -frewrite-includes */
# 30 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3
# 31 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3
#endif
# 32 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3

#ifndef __Long
#define __Long __int32_t
typedef __uint32_t __ULong;
#endif
# 37 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3

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
# 93 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3
struct _atexit {
	struct	_atexit *_next;			/* next in list */
	int	_ind;				/* next index in this table */
	/* Some entries may already have been called, and will be NULL.  */
	void	(*_fns[_ATEXIT_SIZE])(void);	/* the table itself */
        struct _on_exit_args _on_exit_args;
};
# define _ATEXIT_INIT {_NULL, 0, {_NULL}, {{_NULL}, {_NULL}, 0, 0}}
#endif
# 102 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3

#ifdef _REENT_GLOBAL_ATEXIT
# define _REENT_INIT_ATEXIT
#else
# 106 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3
# define _REENT_INIT_ATEXIT \
  _NULL, _ATEXIT_INIT,
#endif
# 109 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3

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
# 178 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3
# define _REENT_SMALL_CHECK_INIT(ptr) /* nothing */
#endif /* _REENT_SMALL && !_REENT_GLOBAL_STDIO_STREAMS */
# 180 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3

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
# 193 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3

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
# 224 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3

#ifndef __SINGLE_THREAD__
  _flock_t _lock;	/* for thread-safety locking */
#endif
# 228 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3
  _mbstate_t _mbstate;	/* for wide char stdio functions. */
  int   _flags2;        /* for future use */
};

#ifdef __CUSTOM_FILE_IO__

/* Get custom _FILE definition.  */
#if 0 /* expanded by -frewrite-includes */
#include <sys/custom_file.h>
#endif /* expanded by -frewrite-includes */
# 235 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3
# 236 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3

#else /* !__CUSTOM_FILE_IO__ */
# 238 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3
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
# 283 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3
  _mbstate_t _mbstate;	/* for wide char stdio functions. */
};
typedef struct __sFILE64 __FILE;
#else
# 287 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3
typedef struct __sFILE   __FILE;
#endif /* __LARGE64_FILES */
# 289 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3
#endif /* !__CUSTOM_FILE_IO__ */
# 290 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3

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
# 327 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3
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
# 414 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3

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
# 457 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3

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
# 495 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3

/* Only add assert() calls if we are specified to debug.  */
#ifdef _REENT_CHECK_DEBUG
#if 0 /* expanded by -frewrite-includes */
#include <assert.h>
#endif /* expanded by -frewrite-includes */
# 498 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3
# 499 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3
#define __reent_assert(x) assert(x)
#else
# 501 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3
#define __reent_assert(x) ((void)0)
#endif
# 503 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3

#ifdef __CUSTOM_FILE_IO__
#error Custom FILE I/O and _REENT_SMALL not currently supported.
#endif
# 507 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3

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
# 607 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3

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
# 678 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3

  /* signal info */
  void (**(_sig_func))(int);

  /* These are here last so that __FILE can grow without changing the offsets
     of the above members (on the off chance that future binary compatibility
     would be broken otherwise).  */
  struct _glue __sglue;		/* root of glue chain */
# ifndef _REENT_GLOBAL_STDIO_STREAMS
  __FILE __sf[3];  		/* first three file descriptors */
# endif
# 689 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3
};

#ifdef _REENT_GLOBAL_STDIO_STREAMS
extern __FILE __sf[3];
#define _REENT_STDIO_STREAM(var, index) &__sf[index]
#else
# 695 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3
#define _REENT_STDIO_STREAM(var, index) &(var)->__sf[index]
#endif
# 697 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3

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
# 794 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3

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
# 813 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3

extern struct _reent *_impure_ptr __ATTRIBUTE_IMPURE_PTR__;
extern struct _reent *_global_impure_ptr __ATTRIBUTE_IMPURE_PTR__;

void _reclaim_reent (struct _reent *);

/* #define _REENT_ONLY define this to get only reentrant routines */

#if defined(__DYNAMIC_REENT__) && !defined(__SINGLE_THREAD__)
#ifndef __getreent
  struct _reent * __getreent (void);
#endif
# 825 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3
# define _REENT (__getreent())
#else /* __SINGLE_THREAD__ || !__DYNAMIC_REENT__ */
# 827 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3
# define _REENT _impure_ptr
#endif /* __SINGLE_THREAD__ || !__DYNAMIC_REENT__ */
# 829 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3

#define _GLOBAL_REENT _global_impure_ptr

#ifdef _REENT_GLOBAL_ATEXIT
extern struct _atexit *_global_atexit; /* points to head of LIFO stack */
# define _GLOBAL_ATEXIT _global_atexit
#else
# 836 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3
# define _GLOBAL_ATEXIT (_GLOBAL_REENT->_atexit)
#endif
# 838 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3

#ifdef __cplusplus
}
#endif
# 842 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3
#endif /* _SYS_REENT_H_ */
# 843 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/sys/reent.h" 3
# 6 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <sys/cdefs.h>
#endif /* expanded by -frewrite-includes */
# 6 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
# 7 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <machine/ieeefp.h>
#endif /* expanded by -frewrite-includes */
# 7 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
# 1 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 1 3
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
# 79 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#  define __IEEE_BIG_ENDIAN
# endif
# 81 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
# if __ARM_FP & 0x8
#  define __OBSOLETE_MATH_DEFAULT 0
# endif
# 84 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#else
# 85 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
# define __IEEE_BIG_ENDIAN
# ifdef __ARMEL__
#  define __IEEE_BYTES_LITTLE_ENDIAN
# endif
# 89 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 90 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 91 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#if defined (__aarch64__)
#if defined (__AARCH64EL__)
#define __IEEE_LITTLE_ENDIAN
#else
# 96 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_BIG_ENDIAN
#endif
# 98 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#define __OBSOLETE_MATH_DEFAULT 0
#endif
# 100 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __epiphany__
#define __IEEE_LITTLE_ENDIAN
#define Sudden_Underflow 1
#endif
# 105 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __hppa__
#define __IEEE_BIG_ENDIAN
#endif
# 109 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __nds32__
#ifdef __big_endian__
#define __IEEE_BIG_ENDIAN
#else
# 114 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 116 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 117 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

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
# 138 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __sparc__
#ifdef __LITTLE_ENDIAN_DATA__
#define __IEEE_LITTLE_ENDIAN
#else
# 143 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_BIG_ENDIAN
#endif
# 145 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 146 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#if defined(__m68k__) || defined(__mc68000__)
#define __IEEE_BIG_ENDIAN
#endif
# 150 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#if defined(__mc68hc11__) || defined(__mc68hc12__) || defined(__mc68hc1x__)
#define __IEEE_BIG_ENDIAN
#ifdef __HAVE_SHORT_DOUBLE__
# define _DOUBLE_IS_32BITS
#endif
# 156 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 157 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#if defined (__H8300__) || defined (__H8300H__) || defined (__H8300S__) || defined (__H8500__) || defined (__H8300SX__)
#define __IEEE_BIG_ENDIAN
#define _FLOAT_ARG float
#define _DOUBLE_IS_32BITS
#endif
# 163 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#if defined (__xc16x__) || defined (__xc16xL__) || defined (__xc16xS__)
#define __IEEE_LITTLE_ENDIAN
#define _FLOAT_ARG float
#define _DOUBLE_IS_32BITS
#endif
# 169 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3


#ifdef __sh__
#ifdef __LITTLE_ENDIAN__
#define __IEEE_LITTLE_ENDIAN
#else
# 175 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_BIG_ENDIAN
#endif
# 177 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#if defined(__SH2E__) || defined(__SH3E__) || defined(__SH4_SINGLE_ONLY__) || defined(__SH2A_SINGLE_ONLY__)
#define _DOUBLE_IS_32BITS
#endif
# 180 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 181 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef _AM29K
#define __IEEE_BIG_ENDIAN
#endif
# 185 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef _WIN32
#define __IEEE_LITTLE_ENDIAN
#endif
# 189 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __i386__
#define __IEEE_LITTLE_ENDIAN
#endif
# 193 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __riscv
#define __IEEE_LITTLE_ENDIAN
#endif
# 197 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __i960__
#define __IEEE_LITTLE_ENDIAN
#endif
# 201 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __lm32__
#define __IEEE_BIG_ENDIAN
#endif
# 205 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __M32R__
#define __IEEE_BIG_ENDIAN
#endif
# 209 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __nvptx__
#define __IEEE_LITTLE_ENDIAN
#endif
# 213 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#if defined(_C4x) || defined(_C3x)
#define __IEEE_BIG_ENDIAN
#define _DOUBLE_IS_32BITS
#endif
# 218 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __TMS320C6X__
#ifdef _BIG_ENDIAN
#define __IEEE_BIG_ENDIAN
#else
# 223 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 225 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 226 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __TIC80__
#define __IEEE_LITTLE_ENDIAN
#endif
# 230 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MIPSEL__
#define __IEEE_LITTLE_ENDIAN
#endif
# 234 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#ifdef __MIPSEB__
#define __IEEE_BIG_ENDIAN
#endif
# 237 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MMIX__
#define __IEEE_BIG_ENDIAN
#endif
# 241 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __D30V__
#define __IEEE_BIG_ENDIAN
#endif
# 245 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

/* necv70 was __IEEE_LITTLE_ENDIAN. */

#ifdef __W65__
#define __IEEE_LITTLE_ENDIAN
#define _DOUBLE_IS_32BITS
#endif
# 252 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#if defined(__Z8001__) || defined(__Z8002__)
#define __IEEE_BIG_ENDIAN
#endif
# 256 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __m88k__
#define __IEEE_BIG_ENDIAN
#endif
# 260 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mn10300__
#define __IEEE_LITTLE_ENDIAN
#endif
# 264 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mn10200__
#define __IEEE_LITTLE_ENDIAN
#define _DOUBLE_IS_32BITS
#endif
# 269 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __v800
#define __IEEE_LITTLE_ENDIAN
#endif
# 273 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __v850
#define __IEEE_LITTLE_ENDIAN
#endif
# 277 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __D10V__
#define __IEEE_BIG_ENDIAN
#if __DOUBLE__ == 32
#define _DOUBLE_IS_32BITS
#endif
# 283 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 284 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __PPC__
#if (defined(_BIG_ENDIAN) && _BIG_ENDIAN) || (defined(_AIX) && _AIX)
#define __IEEE_BIG_ENDIAN
#else
# 289 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#if (defined(_LITTLE_ENDIAN) && _LITTLE_ENDIAN) || (defined(__sun__) && __sun__) || (defined(_WIN32) && _WIN32)
#define __IEEE_LITTLE_ENDIAN
#endif
# 292 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 293 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 294 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __xstormy16__
#define __IEEE_LITTLE_ENDIAN
#endif
# 298 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __arc__
#ifdef __big_endian__
#define __IEEE_BIG_ENDIAN
#else
# 303 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 305 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 306 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __CRX__
#define __IEEE_LITTLE_ENDIAN
#endif
# 310 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __fr30__
#define __IEEE_BIG_ENDIAN
#endif
# 314 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __FT32__
#define __IEEE_LITTLE_ENDIAN
#endif
# 318 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mcore__
#define __IEEE_BIG_ENDIAN
#endif
# 322 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mt__
#define __IEEE_BIG_ENDIAN
#endif
# 326 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __frv__
#define __IEEE_BIG_ENDIAN
#endif
# 330 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __moxie__
#ifdef __MOXIE_BIG_ENDIAN__
#define __IEEE_BIG_ENDIAN
#else
# 335 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 337 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 338 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __ia64__
#ifdef __BIG_ENDIAN__
#define __IEEE_BIG_ENDIAN
#else
# 343 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 345 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 346 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __AVR__
#define __IEEE_LITTLE_ENDIAN
#define _DOUBLE_IS_32BITS
#endif
# 351 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#if defined(__or1k__) || defined(__OR1K__) || defined(__OR1KND__)
#define __IEEE_BIG_ENDIAN
#endif
# 355 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __IP2K__
#define __IEEE_BIG_ENDIAN
#define __SMALL_BITFIELDS
#define _DOUBLE_IS_32BITS
#endif
# 361 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __iq2000__
#define __IEEE_BIG_ENDIAN
#endif
# 365 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MAVERICK__
#ifdef __ARMEL__
#  define __IEEE_LITTLE_ENDIAN
#else  /* must be __ARMEB__ */
# 370 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#  define __IEEE_BIG_ENDIAN
#endif /* __ARMEL__ */
# 372 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif /* __MAVERICK__ */
# 373 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __m32c__
#define __IEEE_LITTLE_ENDIAN
#define __SMALL_BITFIELDS
#endif
# 378 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __CRIS__
#define __IEEE_LITTLE_ENDIAN
#endif
# 382 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __BFIN__
#define __IEEE_LITTLE_ENDIAN
#endif
# 386 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __x86_64__
#define __IEEE_LITTLE_ENDIAN
#endif
# 390 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __mep__
#ifdef __LITTLE_ENDIAN__
#define __IEEE_LITTLE_ENDIAN
#else
# 395 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_BIG_ENDIAN
#endif
# 397 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 398 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MICROBLAZE__
#ifndef __MICROBLAZEEL__
#define __IEEE_BIG_ENDIAN
#else
# 403 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 405 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 406 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __MSP430__
#define __IEEE_LITTLE_ENDIAN
#define __SMALL_BITFIELDS	/* 16 Bit INT */
#endif
# 411 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __RL78__
#define __IEEE_LITTLE_ENDIAN
#define __SMALL_BITFIELDS	/* 16 Bit INT */
#ifndef __RL78_64BIT_DOUBLES__
#define _DOUBLE_IS_32BITS
#endif
# 418 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 419 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __RX__

#ifdef __RX_BIG_ENDIAN__
#define __IEEE_BIG_ENDIAN
#else
# 425 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN
#endif
# 427 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifndef __RX_64BIT_DOUBLES__
#define _DOUBLE_IS_32BITS
#endif
# 431 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __RX_16BIT_INTS__
#define __SMALL_BITFIELDS
#endif
# 435 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#endif
# 437 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#if (defined(__CR16__) || defined(__CR16C__) ||defined(__CR16CP__))
#define __IEEE_LITTLE_ENDIAN
#define __SMALL_BITFIELDS	/* 16 Bit INT */
#endif
# 442 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __NIOS2__
# ifdef __nios2_big_endian__
#  define __IEEE_BIG_ENDIAN
# else
# 447 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#  define __IEEE_LITTLE_ENDIAN
# endif
# 449 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif
# 450 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __VISIUM__
#define __IEEE_BIG_ENDIAN
#endif
# 454 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifdef __CYGWIN__
#define __OBSOLETE_MATH_DEFAULT 0
#endif
# 458 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifndef __OBSOLETE_MATH_DEFAULT
/* Use old math code by default.  */
#define __OBSOLETE_MATH_DEFAULT 1
#endif
# 463 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#ifndef __OBSOLETE_MATH
#define __OBSOLETE_MATH __OBSOLETE_MATH_DEFAULT
#endif
# 466 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#ifndef __IEEE_BIG_ENDIAN
#ifndef __IEEE_LITTLE_ENDIAN
#error Endianess not declared!!
#endif /* not __IEEE_LITTLE_ENDIAN */
# 471 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif /* not __IEEE_BIG_ENDIAN */
# 472 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

#endif /* not __IEEE_LITTLE_ENDIAN */
# 474 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3
#endif /* not __IEEE_BIG_ENDIAN */
# 475 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/machine/ieeefp.h" 3

# 8 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include "_ansi.h"
#endif /* expanded by -frewrite-includes */
# 8 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
# 9 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

_BEGIN_STD_C

/* Natural log of 2 */
#define _M_LN2        0.693147180559945309417

#if __GNUC_PREREQ (3, 3)
 /* gcc >= 3.3 implicitly defines builtins for HUGE_VALx values.  */

# ifndef HUGE_VAL
#  define HUGE_VAL (__builtin_huge_val())
# endif
# 21 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

# ifndef HUGE_VALF
#  define HUGE_VALF (__builtin_huge_valf())
# endif
# 25 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

# ifndef HUGE_VALL
#  define HUGE_VALL (__builtin_huge_vall())
# endif
# 29 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

# ifndef INFINITY
#  define INFINITY (__builtin_inff())
# endif
# 33 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

# ifndef NAN
#  define NAN (__builtin_nanf(""))
# endif
# 37 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

#else /* !gcc >= 3.3  */
# 39 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

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
# 55 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

 #ifndef HUGE_VALF
  #define HUGE_VALF (1.0e999999999F)
 #endif
# 59 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

 #if !defined(HUGE_VALL)  &&  defined(_HAVE_LONG_DOUBLE)
  #define HUGE_VALL (1.0e999999999L)
 #endif
# 63 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

 #if !defined(INFINITY)
  #define INFINITY (HUGE_VALF)
 #endif
# 67 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

 #if !defined(NAN)
  #if defined(__GNUC__)  &&  defined(__cplusplus)
    /* Exception:  older g++ versions warn about the divide by 0 used in the
     * normal case (even though older gccs do not).  This trick suppresses the
     * warning, but causes errors for plain gcc, so is only used in the one
     * special case.  */
    static const union { __ULong __i[1]; float __d; } __Nanf = {0x7FC00000};
    #define NAN (__Nanf.__d)
  #else
# 77 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
    #define NAN (0.0F/0.0F)
  #endif
# 79 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
 #endif
# 80 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

#endif /* !gcc >= 3.3  */
# 82 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

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
# 97 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

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
# 115 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
#endif /* ! defined (_REENT_ONLY) */
# 116 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

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
# 127 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
#if !defined(__cplusplus) || __cplusplus < 201103L
extern int isinf (double);
#endif
# 130 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
#endif /* __MISC_VISIBLE */
# 131 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
#if (__MISC_VISIBLE || (__XSI_VISIBLE && __XSI_VISIBLE < 600)) \
  && (!defined(__cplusplus) || __cplusplus < 201103L)
extern int isnan (double);
#endif
# 135 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

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
# 148 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
#if defined FLT_EVAL_METHOD
  #if FLT_EVAL_METHOD == 0
    typedef float  float_t;
    typedef double double_t;
   #elif FLT_EVAL_METHOD == 1
# 153 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
    typedef double float_t;
    typedef double double_t;
   #elif FLT_EVAL_METHOD == 2
# 156 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
    typedef long double float_t;
    typedef long double double_t;
   #else
# 159 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
    /* Implementation-defined.  Assume float_t and double_t have been
     * defined previously for this configuration (e.g. config.h). */
  #endif
# 162 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
#else
# 163 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
    /* Assume basic definitions.  */
    typedef float  float_t;
    typedef double double_t;
#endif
# 167 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
#if defined(__TMP_FLT_EVAL_METHOD)
  #undef FLT_EVAL_METHOD
#endif
# 170 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

#define FP_NAN         0
#define FP_INFINITE    1
#define FP_ZERO        2
#define FP_SUBNORMAL   3
#define FP_NORMAL      4

#ifndef FP_ILOGB0
# define FP_ILOGB0 (-__INT_MAX__)
#endif
# 180 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
#ifndef FP_ILOGBNAN
# define FP_ILOGBNAN __INT_MAX__
#endif
# 183 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

#ifndef MATH_ERRNO
# define MATH_ERRNO 1
#endif
# 187 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
#ifndef MATH_ERREXCEPT
# define MATH_ERREXCEPT 2
#endif
# 190 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
#ifndef math_errhandling
# define math_errhandling MATH_ERRNO
#endif
# 193 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

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
# 217 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
  #ifndef isinf
    #define isinf(__x) (__builtin_isinf_sign (__x))
  #endif
# 220 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
  #ifndef isnan
    #define isnan(__x) (__builtin_isnan (__x))
  #endif
# 223 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
  #define isnormal(__x) (__builtin_isnormal (__x))
#else
# 225 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
  #define fpclassify(__x) \
	  ((sizeof(__x) == sizeof(float))  ? __fpclassifyf(__x) : \
	  __fpclassifyd(__x))
  #ifndef isfinite
    #define isfinite(__y) \
	    (__extension__ ({int __cy = fpclassify(__y); \
			     __cy != FP_INFINITE && __cy != FP_NAN;}))
  #endif
# 233 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
  #ifndef isinf
    #define isinf(__x) (fpclassify(__x) == FP_INFINITE)
  #endif
# 236 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
  #ifndef isnan
    #define isnan(__x) (fpclassify(__x) == FP_NAN)
  #endif
# 239 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
  #define isnormal(__x) (fpclassify(__x) == FP_NORMAL)
#endif
# 241 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

#if __GNUC_PREREQ (4, 0)
  #if defined(_HAVE_LONG_DOUBLE)
    #define signbit(__x) \
	    ((sizeof(__x) == sizeof(float))  ? __builtin_signbitf(__x) : \
	     (sizeof(__x) == sizeof(double)) ? __builtin_signbit (__x) : \
					       __builtin_signbitl(__x))
  #else
# 249 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
    #define signbit(__x) \
	    ((sizeof(__x) == sizeof(float))  ? __builtin_signbitf(__x) : \
					       __builtin_signbit (__x))
  #endif
# 253 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
#else
# 254 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
  #define signbit(__x) \
	  ((sizeof(__x) == sizeof(float))  ?  __signbitf(__x) : \
		  __signbitd(__x))
#endif
# 258 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

#if __GNUC_PREREQ (2, 97)
#define isgreater(__x,__y)	(__builtin_isgreater (__x, __y))
#define isgreaterequal(__x,__y)	(__builtin_isgreaterequal (__x, __y))
#define isless(__x,__y)		(__builtin_isless (__x, __y))
#define islessequal(__x,__y)	(__builtin_islessequal (__x, __y))
#define islessgreater(__x,__y)	(__builtin_islessgreater (__x, __y))
#define isunordered(__x,__y)	(__builtin_isunordered (__x, __y))
#else
# 267 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
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
# 287 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

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
# 322 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

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
# 335 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

#ifndef __math_68881
extern double hypot (double, double);
#endif
# 339 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

#endif /* ! defined (_REENT_ONLY) */
# 341 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

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
# 369 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

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
# 413 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

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
# 435 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
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
# 452 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
#endif /* ! defined (_REENT_ONLY) */
# 453 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
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
# 489 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
#else /* !_LDBL_EQ_DBL && !__CYGWIN__ */
# 490 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
extern long double hypotl (long double, long double);
extern long double sqrtl (long double);
#ifdef __i386__
/* Other long double precision functions.  */
extern _LONG_DOUBLE rintl (_LONG_DOUBLE);
extern long int lrintl (_LONG_DOUBLE);
extern long long int llrintl (_LONG_DOUBLE);
#endif /* __i386__ */
# 498 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
#endif /* !_LDBL_EQ_DBL && !__CYGWIN__ */
# 499 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

#endif /* __ISO_C_VISIBLE >= 1999 */
# 501 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

#if __MISC_VISIBLE
extern double drem (double, double);
extern float dremf (float, float);
#ifdef __CYGWIN__
extern float dreml (long double, long double);
#endif /* __CYGWIN__ */
# 508 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
extern double gamma_r (double, int *);
extern double lgamma_r (double, int *);
extern float gammaf_r (float, int *);
extern float lgammaf_r (float, int *);
#endif
# 513 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

#if __MISC_VISIBLE || __XSI_VISIBLE
extern double y0 (double);
extern double y1 (double);
extern double yn (int, double);
extern double j0 (double);
extern double j1 (double);
extern double jn (int, double);
#endif
# 522 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

#if __MISC_VISIBLE || __XSI_VISIBLE >= 600
extern float y0f (float);
extern float y1f (float);
extern float ynf (int, float);
extern float j0f (float);
extern float j1f (float);
extern float jnf (int, float);
#endif
# 531 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

/* GNU extensions */
#if __GNU_VISIBLE
extern void sincos (double, double *, double *);
extern void sincosf (float, float *, float *);
#ifdef __CYGWIN__
extern void sincosl (long double, long double *, long double *);
#endif /* __CYGWIN__ */
# 539 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
# ifndef exp10
extern double exp10 (double);
# endif
# 542 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
# ifndef pow10
extern double pow10 (double);
# endif
# 545 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
# ifndef exp10f
extern float exp10f (float);
# endif
# 548 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
# ifndef pow10f
extern float pow10f (float);
# endif
# 551 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
#ifdef __CYGWIN__
# ifndef exp10l
extern float exp10l (float);
# endif
# 555 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
# ifndef pow10l
extern float pow10l (float);
# endif
# 558 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
#endif /* __CYGWIN__ */
# 559 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
#endif /* __GNU_VISIBLE */
# 560 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

#if __MISC_VISIBLE || __XSI_VISIBLE
/* The gamma functions use a global variable, signgam.  */
#ifndef _REENT_ONLY
#define signgam (*__signgam())
extern int *__signgam (void);
#endif /* ! defined (_REENT_ONLY) */
# 567 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

#define __signgam_r(ptr) _REENT_SIGNGAM(ptr)
#endif /* __MISC_VISIBLE || __XSI_VISIBLE */
# 570 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

#if __SVID_VISIBLE
/* The exception structure passed to the matherr routine.  */
/* We have a problem when using C++ since `exception' is a reserved
   name in C++.  */
#ifdef __cplusplus
struct __exception
#else
# 578 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
struct exception
#endif
# 580 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
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
# 592 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
extern int matherr (struct exception *e);
#endif
# 594 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

/* Values for the type field of struct exception.  */

#define DOMAIN 1
#define SING 2
#define OVERFLOW 3
#define UNDERFLOW 4
#define TLOSS 5
#define PLOSS 6

#endif /* __SVID_VISIBLE */
# 605 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

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
# 627 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

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
# 661 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

_END_STD_C

#ifdef __FAST_MATH__
#if 0 /* expanded by -frewrite-includes */
#include <machine/fastmath.h>
#endif /* expanded by -frewrite-includes */
# 665 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
# 666 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
#endif
# 667 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3

#endif /* _MATH_H_ */
# 669 "/home/matthew_r_brades_googlemail_com/newlib-3.0.0.20180831/newlib/libc/include/math.h" 3
# 37 "../../../../../newlib/libm/complex/cephes_subrf.c" 2
#if 0 /* expanded by -frewrite-includes */
#include "cephes_subrf.h"
#endif /* expanded by -frewrite-includes */
# 37 "../../../../../newlib/libm/complex/cephes_subrf.c"
# 1 "../../../../../newlib/libm/complex/cephes_subrf.h" 1
/* $NetBSD: cephes_subrf.h,v 1.1 2007/08/20 16:01:34 drochner Exp $ */

void _cchshf(float, float *, float *);
float _redupif(float);
float _ctansf(float complex);
# 38 "../../../../../newlib/libm/complex/cephes_subrf.c" 2

/* calculate cosh and sinh */

void
_cchshf(float x, float *c, float *s)
{
	float e, ei;

	if (fabsf(x) <= 0.5f) {
		*c = coshf(x);
		*s = sinhf(x);
	} else {
		e = expf(x);
		ei = 0.5f / e;
		e = 0.5f * e;
		*s = e - ei;
		*c = e + ei;
	}
}

/* Program to subtract nearest integer multiple of PI */

/* extended precision value of PI: */
static const double DP1 =  3.140625;
static const double DP2 =  9.67502593994140625E-4;
static const double DP3 =  1.509957990978376432E-7;
#define MACHEPF 3.0e-8

float
_redupif(float x)
{
	float t;
	long i;

	t = x / (float)M_PI;
	if (t >= 0.0f)
		t += 0.5f;
	else
		t -= 0.5f;

	i = t;	/* the multiple */
	t = i;
	t = ((x - t * DP1) - t * DP2) - t * DP3;
	return t;
}

/* Taylor series expansion for cosh(2y) - cos(2x) */

float
_ctansf(float complex z)
{
	float f, x, x2, y, y2, rn, t, d;

	x = fabsf(2.0f * crealf(z));
	y = fabsf(2.0f * cimagf(z));

	x = _redupif(x);

	x = x * x;
	y = y * y;
	x2 = 1.0f;
	y2 = 1.0f;
	f = 1.0f;
	rn = 0.0f;
	d = 0.0f;
	do {
		rn += 1.0f;
		f *= rn;
		rn += 1.0f;
		f *= rn;
		x2 *= x;
		y2 *= y;
		t = y2 + x2;
		t /= f;
		d += t;

		rn += 1.0f;
		f *= rn;
		rn += 1.0f;
		f *= rn;
		x2 *= x;
		y2 *= y;
		t = y2 - x2;
		t /= f;
		d += t;
	} while (fabsf(t/d) > MACHEPF);
	return d;
}
