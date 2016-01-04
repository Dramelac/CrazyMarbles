#ifndef LOAD_BINDINGS_H
#define LOAD_BINDINGS_H
extern "C"
{
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
}

void loadBindings(lua_State *L);

#endif

