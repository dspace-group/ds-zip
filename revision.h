/*
  revision.h - Zip 3

  Copyright 2023, dSPACE GmbH, All rights reserved.

  See the accompanying file LICENSE.
*/
/*
 *  revision.h by Mark Adler.
 */

#ifndef __revision_h
#define __revision_h 1

/* For api version checking */
#define Z_MAJORVER   3
#define Z_MINORVER   0
#define Z_PATCHLEVEL 2
#define Z_BETALEVEL "i BETA"

#define VERSION "3.0.2"
#define REVDATE "June 26th 2023"

#define DW_MAJORVER    Z_MAJORVER
#define DW_MINORVER    Z_MINORVER
#define DW_PATCHLEVEL  Z_PATCHLEVEL

#ifndef IZ_COMPANY_NAME               /* might be already defined... */
#  define IZ_COMPANY_NAME "dSPACE GmbH"
#endif

#if !defined(WINDLL) && !defined(IZ_VERSION_SYMBOLS_ONLY)
/* Copyright notice for binary executables--this notice only applies to
 * those (zip, zipcloak, zipsplit, and zipnote), not to this file
 * (revision.h).
 */

#ifndef DEFCPYRT
/* copyright[] et.al. get defined only once ! */
/* keep array sizes in sync with number of text */
/* lines in the array definitions below !!      */
extern ZCONST char *copyright[1];
extern ZCONST char * far swlicense[50];
extern ZCONST char * far versinfolines[7];
extern ZCONST char * far cryptnote[7];

#else /* DEFCPYRT */

ZCONST char *copyright[] = {
"Copyright 2023, dSPACE GmbH. - Type '%s \"-L\"' for software license."
/* XXX still necessary ???? */
#ifdef AZTEC_C
,        /* extremely lame compiler bug workaround */
#endif
};

ZCONST char * far versinfolines[] = {
"This is %s %s (%s)",
"Copyright 2023, dSPACE GmbH, All rights reserved.",
""
};

/* new notice - 4 March 2007 */
ZCONST char * far cryptnote[] = {
"Encryption notice:",
"\tThe encryption code of this program is not copyrighted and is",
"\tput in the public domain.  It was originally written in Europe",
"\tand, to the best of our knowledge, can be freely distributed",
"\tin both source and object forms from any country, including",
"\tthe USA under License Exception TSU of the U.S. Export",
"\tAdministration Regulations (section 740.13(e)) of 6 June 2002."
};

ZCONST char * far swlicense[] = {
"",
"BSD 3-Clause License",
"",
"Copyright 2023, dSPACE GmbH, All rights reserved.",
"",
"Redistribution and use in source and binary forms, with or without",
"modification, are permitted provided that the following conditions are met:",
"",
"1. Redistributions of source code must retain the above copyright notice, this",
"   list of conditions and the following disclaimer.",
"",
"2. Redistributions in binary form must reproduce the above copyright notice,",
"   this list of conditions and the following disclaimer in the documentation",
"   and/or other materials provided with the distribution.",
"",
"3. Neither the name of the copyright holder nor the names of its",
"   contributors may be used to endorse or promote products derived from",
"   this software without specific prior written permission.",
"",
"THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS \"AS IS\"",
"AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE",
"IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE",
"DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE",
"FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL",
"DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR",
"SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER",
"CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,",
"OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE",
"OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.",
"",
"------------------------------------------------------------------------------",
"ds-zip is based on Info-ZIP (http://www.info-zip.org). ",
"Changes are made due to security issues:",
"  - Removed options -T and -TT",
"See https://nvd.nist.gov/vuln/detail/CVE-2018-13410 for details",
"",
};
#endif /* DEFCPYRT */
#endif /* !WINDLL && !IZ_VERSION_SYMBOLS_ONLY */
#endif /* !__revision_h */
