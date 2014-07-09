// -*- mode:C++; tab-width:4; c-basic-offset:4; indent-tabs-mode:nil -*-

/*
 * Copyright: (C) 2013 iCub Facility
 * Author: Paul Fitzpatrick
 * CopyPolicy: Released under the terms of the LGPLv2.1 or later, see LGPL.TXT
 */

#ifndef YARP_CONFIG_NUMERIC_H
#define YARP_CONFIG_NUMERIC_H

#define YARP_HAVE_SYS_TYPES_H
#define YARP_HAVE_STDDEF_H

#ifdef YARP_HAVE_SYS_TYPES_H
#  include <sys/types.h>
#endif
#ifdef YARP_HAVE_STDDEF_H
#  include <stddef.h>
#endif

#ifdef YARP_INT16
#undef YARP_INT16
#endif

#ifdef YARP_INT32
#undef YARP_INT32
#endif

#ifdef YARP_INT64
#undef YARP_INT64
#endif

#ifdef YARP_FLOAT32
#undef YARP_FLOAT32
#endif

#ifdef YARP_FLOAT64
#undef YARP_FLOAT64
#endif

#ifdef YARP_BIG_ENDIAN
#undef YARP_BIG_ENDIAN
#endif

#ifdef YARP_LITTLE_ENDIAN
#undef YARP_LITTLE_ENDIAN
#endif

#ifdef YARP_SSIZE_T
#undef YARP_SSIZE_T
#endif

#define YARP_INT16 short
#define YARP_INT32 int
#define YARP_INT64 long long
#define YARP_FLOAT32 float
#define YARP_FLOAT64 double

/* #undef YARP_BIG_ENDIAN */
#define YARP_LITTLE_ENDIAN

#define YARP_SSIZE_T ssize_t

#endif
