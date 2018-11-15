#include "example.h"
#include "redismodule.h"
#include <assert.h>
#include "redistar.h"
#include <string.h>
#include "redistar_memory.h"

int Example_CommandCallback(RedisModuleCtx *ctx, RedisModuleString **argv, int argc){
    FlatExecutionPlan* rsctx = RSM_CreateCtx("example", KeysReader, RS_STRDUP("*"));
    RSM_Run(rsctx, NULL, NULL);
    return REDISMODULE_OK;
}
