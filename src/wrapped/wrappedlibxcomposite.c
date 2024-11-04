#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _GNU_SOURCE         /* See feature_test_macros(7) */
#include <dlfcn.h>

#include "wrappedlibs.h"

#include "wrapper.h"
#include "bridge.h"
#include "librarian/library_private.h"
#include "x64emu.h"
#include "debug.h"

const char* libxcompositeName = "libXcomposite.so.1";
#define ALTNAME "libXcomposite.so"

#define LIBNAME libxcomposite

#include "wrappedlib_init.h"

