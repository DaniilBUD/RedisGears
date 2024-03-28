/*
 * version.h
 *
 *  Created on: Sep 17, 2018
 *      Author: meir
 */

#pragma once

#include <stdbool.h>

#define REDISGEARS_VERSION_MAJOR 1
#define REDISGEARS_VERSION_MINOR 2
#define REDISGEARS_VERSION_PATCH 9

#define STR1(a) #a
#define STR(e) STR1(e)

#define REDISGEARS_MODULE_VERSION \
  (REDISGEARS_VERSION_MAJOR * 10000 + REDISGEARS_VERSION_MINOR * 100 + REDISGEARS_VERSION_PATCH)

#define REDISGEARS_VERSION_STR STR(REDISGEARS_VERSION_MAJOR) "." STR(REDISGEARS_VERSION_MINOR) "." STR(REDISGEARS_VERSION_PATCH)

// API versions
#define REDISMODULE_APIVER_1 1

#define REDISGEARS_DATATYPE_VERSION 4
#define VERSION_WITH_COMMAND_READER_IN_ORDER 3
#define VERSION_WITH_ARG_TYPE 2
#define VERSION_WITH_COMMAND_HOOKS 4
#define VERSION_WITH_PLUGINS_NAMES 4
#define VERSION_WITH_HOOK_COMMANDS 4
#define VERSION_WITH_KEYS_READER_READ_CALLBACK 4
#define VERSION_WITH_UNREGISTER_CALLBACK 4
#define VERSION_WITH_CREATED_CALLBACK 4
#define REDISGEARS_DATATYPE_NAME "GEARS_DT0"

#define REDISGEARS_MODULE_NAME "rg"

