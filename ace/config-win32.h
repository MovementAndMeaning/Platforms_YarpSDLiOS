/* -*- C++ -*- */
//=============================================================================
/**
 *  @file   config-win32.h
 *
 *  $Id: config-win32.h 96943 2013-03-30 09:42:31Z mcorino $
 *
 *  @brief  Microsoft Windows configuration file.
 *
 *  This file is the ACE configuration file for all of Microsoft Windows
 *  platforms that ACE runs on.  Based on preprocessor definitions, it
 *  includes other more specific configuration files.
 *
 *  @author Darrell Brunsch <brunsch@cs.wustl.edu>
 */
//=============================================================================

#ifndef ACE_CONFIG_WIN32_H
#define ACE_CONFIG_WIN32_H
#include /**/ "ace/pre.h"

// NOTE: Please do not add anything besides #include's here.  Put other stuff
//       (definitions, etc.) in the included headers

#include "ace/config-win32-common.h"

// Include the config-win32-* file specific to the compiler
#if defined (_MSC_VER)
# include "ace/config-win32-msvc.h"
#elif defined (ACE_HAS_CEGCC) //need to be prior to MINGW32
# include "ace/config-win32-cegcc.h"
#elif defined (__MINGW32__)
# if defined (__MINGW64_VERSION_MAJOR)
#   include "ace/config-win32-mingw64.h"
# else
#   include "ace/config-win32-mingw.h"
# endif
#elif defined (__DMC__)
#    include "ace/config-win32-dmc.h"
#else
#    error Compiler is not supported
#endif

#include /**/ "ace/post.h"
#endif /* ACE_CONFIG_WIN32_H */

