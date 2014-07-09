// -*- mode:C++; tab-width:4; c-basic-offset:4; indent-tabs-mode:nil -*-

/*
 * Copyright (C) 2013 iCub Facility
 * Authors: Paul Fitzpatrick
 * CopyPolicy: Released under the terms of the LGPLv2.1 or later, see LGPL.TXT
 *
 */

#ifndef _YARP2_TYPE_
#define _YARP2_TYPE_

#include <yarp/os/ConstString.h>

namespace yarp {
    namespace os {
        class Type;
    }
}

class YARP_OS_API yarp::os::Type {
public:
    Type() {}

    static Type byName(const char *name) {
        Type t;
        t.name = name;
        return t;
    }

    static Type byName(const char *name, const char *name_on_wire) {
        Type t;
        t.name = name;
        t.name_on_wire = name_on_wire;
        return t;
    }

    static Type byNameOnWire(const char *name_on_wire) {
        Type t;
        t.name = "yarp/bottle";
        t.name_on_wire = name_on_wire;
        return t;
    }

    static Type anon() {
        return Type();
    }
    
    ConstString getName() const {
        return name;
    }

    ConstString getNameOnWire() const {
        return name_on_wire;
    }

    bool hasName() const {
        return name!="";
    }

    bool isValid() const {
        return hasName();
    }

    ConstString toString() const {
        if (name_on_wire!="") {
            return name + ":" + name_on_wire;
        }
        if (name!="") return name;
        return "null";
    }
private:
    ConstString name;
    ConstString name_on_wire;
};

#endif
