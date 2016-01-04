#include "loadbindings.h"

int  tolua_bind_sfml_window_open (lua_State* tolua_S);
int  tolua_bind_sfml_system_open (lua_State* tolua_S);
int  tolua_bind_sfml_graphics_open (lua_State* tolua_S);
int  tolua_bind_sfml_audio_open (lua_State* tolua_S);
int  tolua_bind_random_open (lua_State* tolua_S);
int  tolua_bind_2disometric_open (lua_State* tolua_S);

void loadBindings(lua_State *L)
{
    tolua_bind_sfml_window_open(L);
    tolua_bind_sfml_system_open(L);
    tolua_bind_sfml_graphics_open(L);
    tolua_bind_sfml_audio_open(L);
    tolua_bind_random_open(L);
    tolua_bind_2disometric_open(L);
}

