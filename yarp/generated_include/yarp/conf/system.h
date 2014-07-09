// -*- mode:C++; tab-width:4; c-basic-offset:4; indent-tabs-mode:nil -*-

/*
 * Copyright: (C) 2009 RobotCub Consortium
 * Author: Paul Fitzpatrick
 * CopyPolicy: Released under the terms of the LGPLv2.1 or later, see LGPL.TXT
 */

#ifndef YARP_CONFIG_SYSTEM_H
#define YARP_CONFIG_SYSTEM_H

#include <yarp/conf/numeric.h>

#define YARP_CMAKE_CONFIG

#define YARP_WRAP_STL_STRING
#define YARP_WRAP_STL_STRING_INLINE
#define YARP_HAS_ACE
/* #undef YARP_HAS_CXX11 */

// Use STL if C++11 is active, or if ACE is not available
#ifdef YARP_HAS_CXX11
#  define YARP_USE_STL 1
#endif

#ifndef YARP_HAS_ACE
#  ifndef YARP_USE_STL
#    define YARP_USE_STL 1
#  endif
#endif

#define ACE_ADDR_HAS_LOOPBACK_METHOD
#define ACE_HAS_STRING_HASH

#define YARP_HAS_EXECINFO

#define YARP_POINTER_SIZE 0

#endif
