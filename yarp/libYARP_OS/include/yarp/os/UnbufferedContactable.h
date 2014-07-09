// -*- mode:C++; tab-width:4; c-basic-offset:4; indent-tabs-mode:nil -*-

/*
 * Copyright (C) 2013 iCub Facility
 * Authors: Paul Fitzpatrick
 * CopyPolicy: Released under the terms of the LGPLv2.1 or later, see LGPL.TXT
 *
 */

#ifndef _YARP2_UNBUFFEREDCONTACTABLE_
#define _YARP2_UNBUFFEREDCONTACTABLE_

#include <yarp/os/Contactable.h>

namespace yarp {
    namespace os {
        class UnbufferedContactable;
    }
}

/**
 * An abstract unbuffered port.
 *
 */
class YARP_OS_API yarp::os::UnbufferedContactable : public Contactable {
public:
    /**
     * Write an object to the port.
     * @param writer any object that knows how to write itself to a
     * network connection - see for example Bottle
     * @param callback object on which to call onCompletion() after write
     * is done (otherwise writer.onCompletion() is called)
     * @return true iff the object is successfully written
     */
    virtual bool write(PortWriter& writer, 
                       PortWriter *callback = 0 /*NULL*/) const = 0;

    /**
     * Write an object to the port, then expect one back.
     * @param writer any object that knows how to write itself to a
     * network connection - see for example Bottle
     * @param reader any object that knows how to read itself from a
     * network connection - see for example Bottle
     * @param callback object on which to call onCompletion() after write
     * is done (otherwise writer.onCompletion() is called)
     * @return true iff an object is successfully written and read
     */
    virtual bool write(PortWriter& writer, PortReader& reader,
                       PortWriter *callback = 0 /*NULL*/) const = 0;

    /**
     * Read an object from the port.
     * @param reader any object that knows how to read itself from a
     * network connection - see for example Bottle
     * @param willReply you must set this to true if you intend to call reply()
     * @return true iff the object is successfully read
     */
    virtual bool read(PortReader& reader, bool willReply = false) = 0;

    /**
     * Send an object as a reply to an object read from the port.
     * Only call this method if you set the willReply flag to
     * true when you called Port::read.
     * @param writer any object that knows how to write itself to a
     * network connection - see for example Bottle
     * @return true iff the object is successfully written
     */
    virtual bool reply(PortWriter& writer) = 0;

    /**
     * Same as reply(), but closes connection after reply.
     * This is useful for interoperation with XML/RPC clients
     * that do not expect to reuse a connection.
     *
     * @param writer any object that knows how to write itself to a
     * network connection - see for example Bottle
     * @return true iff the object is successfully written
     */
    virtual bool replyAndDrop(PortWriter& writer) = 0;
};

#endif

