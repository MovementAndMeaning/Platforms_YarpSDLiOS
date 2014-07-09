// -*- mode:C++; tab-width:4; c-basic-offset:4; indent-tabs-mode:nil -*-

/*
 * Copyright (C) 2012 IITRBCS
 * Authors: Paul Fitzpatrick
 * CopyPolicy: Released under the terms of the LGPLv2.1 or later, see LGPL.TXT
 *
 */

#ifndef _YARP2_WIRESTATE_
#define _YARP2_WIRESTATE_

#include <yarp/os/api.h>

namespace yarp {
    namespace os {
        namespace idl {
            class WireState;
        }
    }
}

/**
 *
 * IDL-friendly state.
 *
 */
class YARP_OS_API yarp::os::idl::WireState {
public:
    int len;
    int code;
    bool need_ok;
    WireState *parent;

    WireState();

    bool isValid() const;
};


#endif
