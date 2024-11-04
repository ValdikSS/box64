#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _GNU_SOURCE         /* See feature_test_macros(7) */
#include <dlfcn.h>

#include "wrappedlibs.h"

#include "debug.h"
#include "wrapper.h"
#include "bridge.h"
#include "librarian/library_private.h"
#include "x64emu.h"

const char* gstcontrollerName = "libgstcontroller-1.0.so.0";
#define ALTNAME "libgstcontroller-1.0.so"

#define LIBNAME gstcontroller

#define PRE_INIT    \
    if(box64_nogtk) \
        return -1;

#include "wrappedlib_init.h"
