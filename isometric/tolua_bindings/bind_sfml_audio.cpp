/*
** Lua binding: bind_sfml_audio
** Generated automatically by tolua++-1.0.92 on 06/08/11 12:24:05.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_bind_sfml_audio_open (lua_State* tolua_S);

#include <SFML/Audio.hpp>

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_sf__Music (lua_State* tolua_S)
{
 sf::Music* self = (sf::Music*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_sf__Vector3f (lua_State* tolua_S)
{
 sf::Vector3f* self = (sf::Vector3f*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_sf__SoundBufferRecorder (lua_State* tolua_S)
{
 sf::SoundBufferRecorder* self = (sf::SoundBufferRecorder*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_sf__SoundBuffer (lua_State* tolua_S)
{
 sf::SoundBuffer* self = (sf::SoundBuffer*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_sf__Sound (lua_State* tolua_S)
{
 sf::Sound* self = (sf::Sound*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"sf::Listener");
 tolua_usertype(tolua_S,"sf::SoundBufferRecorder");
 tolua_usertype(tolua_S,"sf::SoundRecorder");
 tolua_usertype(tolua_S,"sf::Music");
 tolua_usertype(tolua_S,"sf::SoundSource");
 tolua_usertype(tolua_S,"sf::Sound");
 tolua_usertype(tolua_S,"sf::SoundStream");
 tolua_usertype(tolua_S,"sf::SoundBuffer");
 tolua_usertype(tolua_S,"sf::Vector3f");
}

/* method: SetGlobalVolume of class  sf::Listener */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_Listener_SetGlobalVolume00
static int tolua_bind_sfml_audio_sf_Listener_SetGlobalVolume00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Listener",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float volume = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   sf::Listener::SetGlobalVolume(volume);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetGlobalVolume'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetGlobalVolume of class  sf::Listener */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_Listener_GetGlobalVolume00
static int tolua_bind_sfml_audio_sf_Listener_GetGlobalVolume00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Listener",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   float tolua_ret = (float)  sf::Listener::GetGlobalVolume();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetGlobalVolume'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetPosition of class  sf::Listener */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_Listener_SetPosition00
static int tolua_bind_sfml_audio_sf_Listener_SetPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Listener",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  float z = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   sf::Listener::SetPosition(x,y,z);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetPosition of class  sf::Listener */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_Listener_SetPosition01
static int tolua_bind_sfml_audio_sf_Listener_SetPosition01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Listener",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector3f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::Vector3f* pos = ((const sf::Vector3f*)  tolua_tousertype(tolua_S,2,0));
  {
   sf::Listener::SetPosition(*pos);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_sfml_audio_sf_Listener_SetPosition00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPosition of class  sf::Listener */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_Listener_GetPosition00
static int tolua_bind_sfml_audio_sf_Listener_GetPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Listener",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Vector3f tolua_ret = (sf::Vector3f)  sf::Listener::GetPosition();
   {
#ifdef __cplusplus
    void* tolua_obj = new sf::Vector3f(tolua_ret);
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::Vector3f");
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(sf::Vector3f));
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::Vector3f");
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetDirection of class  sf::Listener */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_Listener_SetDirection00
static int tolua_bind_sfml_audio_sf_Listener_SetDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Listener",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector3f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Vector3f* dir = ((const sf::Vector3f*)  tolua_tousertype(tolua_S,2,0));
  {
   sf::Listener::SetDirection(*dir);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetDirection of class  sf::Listener */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_Listener_SetDirection01
static int tolua_bind_sfml_audio_sf_Listener_SetDirection01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Listener",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  float z = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   sf::Listener::SetDirection(x,y,z);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_sfml_audio_sf_Listener_SetDirection00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetDirection of class  sf::Listener */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_Listener_GetDirection00
static int tolua_bind_sfml_audio_sf_Listener_GetDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Listener",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Vector3f tolua_ret = (sf::Vector3f)  sf::Listener::GetDirection();
   {
#ifdef __cplusplus
    void* tolua_obj = new sf::Vector3f(tolua_ret);
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::Vector3f");
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(sf::Vector3f));
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::Vector3f");
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetPitch of class  sf::SoundSource */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundSource_SetPitch00
static int tolua_bind_sfml_audio_sf_SoundSource_SetPitch00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::SoundSource",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::SoundSource* self = (sf::SoundSource*)  tolua_tousertype(tolua_S,1,0);
  float pitch = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetPitch'",NULL);
#endif
  {
   self->SetPitch(pitch);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetPitch'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetVolume of class  sf::SoundSource */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundSource_SetVolume00
static int tolua_bind_sfml_audio_sf_SoundSource_SetVolume00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::SoundSource",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::SoundSource* self = (sf::SoundSource*)  tolua_tousertype(tolua_S,1,0);
  float volume = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetVolume'",NULL);
#endif
  {
   self->SetVolume(volume);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetVolume'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetPosition of class  sf::SoundSource */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundSource_SetPosition00
static int tolua_bind_sfml_audio_sf_SoundSource_SetPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::SoundSource",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::SoundSource* self = (sf::SoundSource*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  float z = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetPosition'",NULL);
#endif
  {
   self->SetPosition(x,y,z);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetPosition of class  sf::SoundSource */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundSource_SetPosition01
static int tolua_bind_sfml_audio_sf_SoundSource_SetPosition01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::SoundSource",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector3f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::SoundSource* self = (sf::SoundSource*)  tolua_tousertype(tolua_S,1,0);
  const sf::Vector3f* pos = ((const sf::Vector3f*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetPosition'",NULL);
#endif
  {
   self->SetPosition(*pos);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_sfml_audio_sf_SoundSource_SetPosition00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetRelativeToListener of class  sf::SoundSource */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundSource_SetRelativeToListener00
static int tolua_bind_sfml_audio_sf_SoundSource_SetRelativeToListener00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::SoundSource",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::SoundSource* self = (sf::SoundSource*)  tolua_tousertype(tolua_S,1,0);
  bool relative = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetRelativeToListener'",NULL);
#endif
  {
   self->SetRelativeToListener(relative);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetRelativeToListener'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetMinDistance of class  sf::SoundSource */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundSource_SetMinDistance00
static int tolua_bind_sfml_audio_sf_SoundSource_SetMinDistance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::SoundSource",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::SoundSource* self = (sf::SoundSource*)  tolua_tousertype(tolua_S,1,0);
  float distance = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetMinDistance'",NULL);
#endif
  {
   self->SetMinDistance(distance);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetMinDistance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetAttenuation of class  sf::SoundSource */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundSource_SetAttenuation00
static int tolua_bind_sfml_audio_sf_SoundSource_SetAttenuation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::SoundSource",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::SoundSource* self = (sf::SoundSource*)  tolua_tousertype(tolua_S,1,0);
  float attenuation = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetAttenuation'",NULL);
#endif
  {
   self->SetAttenuation(attenuation);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetAttenuation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPitch of class  sf::SoundSource */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundSource_GetPitch00
static int tolua_bind_sfml_audio_sf_SoundSource_GetPitch00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::SoundSource",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::SoundSource* self = (const sf::SoundSource*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetPitch'",NULL);
#endif
  {
   float tolua_ret = (float)  self->GetPitch();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPitch'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetVolume of class  sf::SoundSource */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundSource_GetVolume00
static int tolua_bind_sfml_audio_sf_SoundSource_GetVolume00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::SoundSource",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::SoundSource* self = (const sf::SoundSource*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetVolume'",NULL);
#endif
  {
   float tolua_ret = (float)  self->GetVolume();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetVolume'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPosition of class  sf::SoundSource */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundSource_GetPosition00
static int tolua_bind_sfml_audio_sf_SoundSource_GetPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::SoundSource",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::SoundSource* self = (const sf::SoundSource*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetPosition'",NULL);
#endif
  {
   sf::Vector3f tolua_ret = (sf::Vector3f)  self->GetPosition();
   {
#ifdef __cplusplus
    void* tolua_obj = new sf::Vector3f(tolua_ret);
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::Vector3f");
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(sf::Vector3f));
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::Vector3f");
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsRelativeToListener of class  sf::SoundSource */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundSource_IsRelativeToListener00
static int tolua_bind_sfml_audio_sf_SoundSource_IsRelativeToListener00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::SoundSource",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::SoundSource* self = (const sf::SoundSource*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsRelativeToListener'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsRelativeToListener();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsRelativeToListener'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetMinDistance of class  sf::SoundSource */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundSource_GetMinDistance00
static int tolua_bind_sfml_audio_sf_SoundSource_GetMinDistance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::SoundSource",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::SoundSource* self = (const sf::SoundSource*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetMinDistance'",NULL);
#endif
  {
   float tolua_ret = (float)  self->GetMinDistance();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetMinDistance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetAttenuation of class  sf::SoundSource */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundSource_GetAttenuation00
static int tolua_bind_sfml_audio_sf_SoundSource_GetAttenuation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::SoundSource",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::SoundSource* self = (const sf::SoundSource*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetAttenuation'",NULL);
#endif
  {
   float tolua_ret = (float)  self->GetAttenuation();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetAttenuation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Play of class  sf::SoundStream */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundStream_Play00
static int tolua_bind_sfml_audio_sf_SoundStream_Play00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::SoundStream",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::SoundStream* self = (sf::SoundStream*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Play'",NULL);
#endif
  {
   self->Play();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Play'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Pause of class  sf::SoundStream */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundStream_Pause00
static int tolua_bind_sfml_audio_sf_SoundStream_Pause00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::SoundStream",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::SoundStream* self = (sf::SoundStream*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Pause'",NULL);
#endif
  {
   self->Pause();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Pause'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Stop of class  sf::SoundStream */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundStream_Stop00
static int tolua_bind_sfml_audio_sf_SoundStream_Stop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::SoundStream",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::SoundStream* self = (sf::SoundStream*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Stop'",NULL);
#endif
  {
   self->Stop();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Stop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetChannelsCount of class  sf::SoundStream */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundStream_GetChannelsCount00
static int tolua_bind_sfml_audio_sf_SoundStream_GetChannelsCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::SoundStream",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::SoundStream* self = (const sf::SoundStream*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetChannelsCount'",NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->GetChannelsCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetChannelsCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSampleRate of class  sf::SoundStream */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundStream_GetSampleRate00
static int tolua_bind_sfml_audio_sf_SoundStream_GetSampleRate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::SoundStream",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::SoundStream* self = (const sf::SoundStream*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetSampleRate'",NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->GetSampleRate();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetSampleRate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetStatus of class  sf::SoundStream */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundStream_GetStatus00
static int tolua_bind_sfml_audio_sf_SoundStream_GetStatus00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::SoundStream",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::SoundStream* self = (const sf::SoundStream*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetStatus'",NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->GetStatus();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetStatus'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetPlayingOffset of class  sf::SoundStream */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundStream_SetPlayingOffset00
static int tolua_bind_sfml_audio_sf_SoundStream_SetPlayingOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::SoundStream",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::SoundStream* self = (sf::SoundStream*)  tolua_tousertype(tolua_S,1,0);
  unsigned int timeoffset = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetPlayingOffset'",NULL);
#endif
  {
   self->SetPlayingOffset(timeoffset);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetPlayingOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPlayingOffset of class  sf::SoundStream */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundStream_GetPlayingOffset00
static int tolua_bind_sfml_audio_sf_SoundStream_GetPlayingOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::SoundStream",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::SoundStream* self = (const sf::SoundStream*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetPlayingOffset'",NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->GetPlayingOffset();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPlayingOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetLoop of class  sf::SoundStream */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundStream_SetLoop00
static int tolua_bind_sfml_audio_sf_SoundStream_SetLoop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::SoundStream",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::SoundStream* self = (sf::SoundStream*)  tolua_tousertype(tolua_S,1,0);
  bool loop = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetLoop'",NULL);
#endif
  {
   self->SetLoop(loop);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetLoop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLoop of class  sf::SoundStream */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundStream_GetLoop00
static int tolua_bind_sfml_audio_sf_SoundStream_GetLoop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::SoundStream",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::SoundStream* self = (const sf::SoundStream*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLoop'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetLoop();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLoop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::Music */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_Music_new00
static int tolua_bind_sfml_audio_sf_Music_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Music",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Music* tolua_ret = (sf::Music*)  new sf::Music();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Music");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::Music */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_Music_new00_local
static int tolua_bind_sfml_audio_sf_Music_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Music",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Music* tolua_ret = (sf::Music*)  new sf::Music();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Music");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  sf::Music */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_Music_delete00
static int tolua_bind_sfml_audio_sf_Music_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Music",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Music* self = (sf::Music*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: OpenFromFile of class  sf::Music */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_Music_OpenFromFile00
static int tolua_bind_sfml_audio_sf_Music_OpenFromFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Music",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Music* self = (sf::Music*)  tolua_tousertype(tolua_S,1,0);
  const std::string filename = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'OpenFromFile'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->OpenFromFile(filename);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)filename);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'OpenFromFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetDuration of class  sf::Music */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_Music_GetDuration00
static int tolua_bind_sfml_audio_sf_Music_GetDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Music",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Music* self = (const sf::Music*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetDuration'",NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->GetDuration();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::SoundBuffer */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundBuffer_new00
static int tolua_bind_sfml_audio_sf_SoundBuffer_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::SoundBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::SoundBuffer* tolua_ret = (sf::SoundBuffer*)  new sf::SoundBuffer();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::SoundBuffer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::SoundBuffer */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundBuffer_new00_local
static int tolua_bind_sfml_audio_sf_SoundBuffer_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::SoundBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::SoundBuffer* tolua_ret = (sf::SoundBuffer*)  new sf::SoundBuffer();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::SoundBuffer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::SoundBuffer */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundBuffer_new01
static int tolua_bind_sfml_audio_sf_SoundBuffer_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::SoundBuffer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::SoundBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::SoundBuffer* copy = ((const sf::SoundBuffer*)  tolua_tousertype(tolua_S,2,0));
  {
   sf::SoundBuffer* tolua_ret = (sf::SoundBuffer*)  new sf::SoundBuffer(*copy);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::SoundBuffer");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_audio_sf_SoundBuffer_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::SoundBuffer */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundBuffer_new01_local
static int tolua_bind_sfml_audio_sf_SoundBuffer_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::SoundBuffer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::SoundBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::SoundBuffer* copy = ((const sf::SoundBuffer*)  tolua_tousertype(tolua_S,2,0));
  {
   sf::SoundBuffer* tolua_ret = (sf::SoundBuffer*)  new sf::SoundBuffer(*copy);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::SoundBuffer");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_audio_sf_SoundBuffer_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  sf::SoundBuffer */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundBuffer_delete00
static int tolua_bind_sfml_audio_sf_SoundBuffer_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::SoundBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::SoundBuffer* self = (sf::SoundBuffer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LoadFromFile of class  sf::SoundBuffer */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundBuffer_LoadFromFile00
static int tolua_bind_sfml_audio_sf_SoundBuffer_LoadFromFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::SoundBuffer",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::SoundBuffer* self = (sf::SoundBuffer*)  tolua_tousertype(tolua_S,1,0);
  const std::string filename = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LoadFromFile'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->LoadFromFile(filename);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)filename);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LoadFromFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SaveToFile of class  sf::SoundBuffer */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundBuffer_SaveToFile00
static int tolua_bind_sfml_audio_sf_SoundBuffer_SaveToFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::SoundBuffer",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::SoundBuffer* self = (const sf::SoundBuffer*)  tolua_tousertype(tolua_S,1,0);
  const std::string filename = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SaveToFile'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->SaveToFile(filename);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)filename);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SaveToFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSamplesCount of class  sf::SoundBuffer */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundBuffer_GetSamplesCount00
static int tolua_bind_sfml_audio_sf_SoundBuffer_GetSamplesCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::SoundBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::SoundBuffer* self = (const sf::SoundBuffer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetSamplesCount'",NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->GetSamplesCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetSamplesCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSampleRate of class  sf::SoundBuffer */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundBuffer_GetSampleRate00
static int tolua_bind_sfml_audio_sf_SoundBuffer_GetSampleRate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::SoundBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::SoundBuffer* self = (const sf::SoundBuffer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetSampleRate'",NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->GetSampleRate();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetSampleRate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetChannelsCount of class  sf::SoundBuffer */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundBuffer_GetChannelsCount00
static int tolua_bind_sfml_audio_sf_SoundBuffer_GetChannelsCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::SoundBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::SoundBuffer* self = (const sf::SoundBuffer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetChannelsCount'",NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->GetChannelsCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetChannelsCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetDuration of class  sf::SoundBuffer */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundBuffer_GetDuration00
static int tolua_bind_sfml_audio_sf_SoundBuffer_GetDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::SoundBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::SoundBuffer* self = (const sf::SoundBuffer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetDuration'",NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->GetDuration();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::Sound */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_Sound_new00
static int tolua_bind_sfml_audio_sf_Sound_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Sound",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Sound* tolua_ret = (sf::Sound*)  new sf::Sound();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Sound");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::Sound */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_Sound_new00_local
static int tolua_bind_sfml_audio_sf_Sound_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Sound",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Sound* tolua_ret = (sf::Sound*)  new sf::Sound();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Sound");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::Sound */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_Sound_new01
static int tolua_bind_sfml_audio_sf_Sound_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Sound",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::SoundBuffer",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::SoundBuffer* buf = ((const sf::SoundBuffer*)  tolua_tousertype(tolua_S,2,0));
  bool loop = ((bool)  tolua_toboolean(tolua_S,3,false));
  float pitch = ((float)  tolua_tonumber(tolua_S,4,1.0f));
  float volume = ((float)  tolua_tonumber(tolua_S,5,100.0f));
  {
   sf::Sound* tolua_ret = (sf::Sound*)  new sf::Sound(*buf,loop,pitch,volume);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Sound");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_audio_sf_Sound_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::Sound */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_Sound_new01_local
static int tolua_bind_sfml_audio_sf_Sound_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Sound",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::SoundBuffer",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::SoundBuffer* buf = ((const sf::SoundBuffer*)  tolua_tousertype(tolua_S,2,0));
  bool loop = ((bool)  tolua_toboolean(tolua_S,3,false));
  float pitch = ((float)  tolua_tonumber(tolua_S,4,1.0f));
  float volume = ((float)  tolua_tonumber(tolua_S,5,100.0f));
  {
   sf::Sound* tolua_ret = (sf::Sound*)  new sf::Sound(*buf,loop,pitch,volume);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Sound");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_audio_sf_Sound_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::Sound */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_Sound_new02
static int tolua_bind_sfml_audio_sf_Sound_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Sound",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::SoundBuffer",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,6,"const sf::Vector3f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::SoundBuffer* buf = ((const sf::SoundBuffer*)  tolua_tousertype(tolua_S,2,0));
  bool loop = ((bool)  tolua_toboolean(tolua_S,3,0));
  float pitch = ((float)  tolua_tonumber(tolua_S,4,0));
  float volume = ((float)  tolua_tonumber(tolua_S,5,0));
  const sf::Vector3f* pos = ((const sf::Vector3f*)  tolua_tousertype(tolua_S,6,0));
  {
   sf::Sound* tolua_ret = (sf::Sound*)  new sf::Sound(*buf,loop,pitch,volume,*pos);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Sound");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_audio_sf_Sound_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::Sound */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_Sound_new02_local
static int tolua_bind_sfml_audio_sf_Sound_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Sound",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::SoundBuffer",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,6,"const sf::Vector3f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::SoundBuffer* buf = ((const sf::SoundBuffer*)  tolua_tousertype(tolua_S,2,0));
  bool loop = ((bool)  tolua_toboolean(tolua_S,3,0));
  float pitch = ((float)  tolua_tonumber(tolua_S,4,0));
  float volume = ((float)  tolua_tonumber(tolua_S,5,0));
  const sf::Vector3f* pos = ((const sf::Vector3f*)  tolua_tousertype(tolua_S,6,0));
  {
   sf::Sound* tolua_ret = (sf::Sound*)  new sf::Sound(*buf,loop,pitch,volume,*pos);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Sound");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_audio_sf_Sound_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::Sound */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_Sound_new03
static int tolua_bind_sfml_audio_sf_Sound_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Sound",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Sound",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::Sound* copy = ((const sf::Sound*)  tolua_tousertype(tolua_S,2,0));
  {
   sf::Sound* tolua_ret = (sf::Sound*)  new sf::Sound(*copy);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Sound");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_audio_sf_Sound_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::Sound */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_Sound_new03_local
static int tolua_bind_sfml_audio_sf_Sound_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Sound",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Sound",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::Sound* copy = ((const sf::Sound*)  tolua_tousertype(tolua_S,2,0));
  {
   sf::Sound* tolua_ret = (sf::Sound*)  new sf::Sound(*copy);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Sound");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_audio_sf_Sound_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  sf::Sound */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_Sound_delete00
static int tolua_bind_sfml_audio_sf_Sound_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Sound",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Sound* self = (sf::Sound*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Start of class  sf::SoundRecorder */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundRecorder_Start00
static int tolua_bind_sfml_audio_sf_SoundRecorder_Start00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::SoundRecorder",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::SoundRecorder* self = (sf::SoundRecorder*)  tolua_tousertype(tolua_S,1,0);
  unsigned int samplerate = ((unsigned int)  tolua_tonumber(tolua_S,2,44100));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Start'",NULL);
#endif
  {
   self->Start(samplerate);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Start'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Stop of class  sf::SoundRecorder */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundRecorder_Stop00
static int tolua_bind_sfml_audio_sf_SoundRecorder_Stop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::SoundRecorder",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::SoundRecorder* self = (sf::SoundRecorder*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Stop'",NULL);
#endif
  {
   self->Stop();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Stop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSampleRate of class  sf::SoundRecorder */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundRecorder_GetSampleRate00
static int tolua_bind_sfml_audio_sf_SoundRecorder_GetSampleRate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::SoundRecorder",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::SoundRecorder* self = (const sf::SoundRecorder*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetSampleRate'",NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->GetSampleRate();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetSampleRate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsAvailable of class  sf::SoundRecorder */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundRecorder_IsAvailable00
static int tolua_bind_sfml_audio_sf_SoundRecorder_IsAvailable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::SoundRecorder",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   bool tolua_ret = (bool)  sf::SoundRecorder::IsAvailable();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsAvailable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::SoundBufferRecorder */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundBufferRecorder_new00
static int tolua_bind_sfml_audio_sf_SoundBufferRecorder_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::SoundBufferRecorder",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::SoundBufferRecorder* tolua_ret = (sf::SoundBufferRecorder*)  new sf::SoundBufferRecorder();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::SoundBufferRecorder");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::SoundBufferRecorder */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundBufferRecorder_new00_local
static int tolua_bind_sfml_audio_sf_SoundBufferRecorder_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::SoundBufferRecorder",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::SoundBufferRecorder* tolua_ret = (sf::SoundBufferRecorder*)  new sf::SoundBufferRecorder();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::SoundBufferRecorder");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  sf::SoundBufferRecorder */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundBufferRecorder_delete00
static int tolua_bind_sfml_audio_sf_SoundBufferRecorder_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::SoundBufferRecorder",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::SoundBufferRecorder* self = (sf::SoundBufferRecorder*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
  delete self;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetBuffer of class  sf::SoundBufferRecorder */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_audio_sf_SoundBufferRecorder_GetBuffer00
static int tolua_bind_sfml_audio_sf_SoundBufferRecorder_GetBuffer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::SoundBufferRecorder",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::SoundBufferRecorder* self = (const sf::SoundBufferRecorder*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetBuffer'",NULL);
#endif
  {
   const sf::SoundBuffer& tolua_ret = (const sf::SoundBuffer&)  self->GetBuffer();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const sf::SoundBuffer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetBuffer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_bind_sfml_audio_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"sf",0);
  tolua_beginmodule(tolua_S,"sf");
   tolua_cclass(tolua_S,"Listener","sf::Listener","",NULL);
   tolua_beginmodule(tolua_S,"Listener");
    tolua_function(tolua_S,"SetGlobalVolume",tolua_bind_sfml_audio_sf_Listener_SetGlobalVolume00);
    tolua_function(tolua_S,"GetGlobalVolume",tolua_bind_sfml_audio_sf_Listener_GetGlobalVolume00);
    tolua_function(tolua_S,"SetPosition",tolua_bind_sfml_audio_sf_Listener_SetPosition00);
    tolua_function(tolua_S,"SetPosition",tolua_bind_sfml_audio_sf_Listener_SetPosition01);
    tolua_function(tolua_S,"GetPosition",tolua_bind_sfml_audio_sf_Listener_GetPosition00);
    tolua_function(tolua_S,"SetDirection",tolua_bind_sfml_audio_sf_Listener_SetDirection00);
    tolua_function(tolua_S,"SetDirection",tolua_bind_sfml_audio_sf_Listener_SetDirection01);
    tolua_function(tolua_S,"GetDirection",tolua_bind_sfml_audio_sf_Listener_GetDirection00);
   tolua_endmodule(tolua_S);
   tolua_module(tolua_S,"SoundSource",0);
   tolua_beginmodule(tolua_S,"SoundSource");
    tolua_constant(tolua_S,"Stopped",sf::SoundSource::Stopped);
    tolua_constant(tolua_S,"Paused",sf::SoundSource::Paused);
    tolua_constant(tolua_S,"Playing",sf::SoundSource::Playing);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"SoundSource","sf::SoundSource","",NULL);
   tolua_beginmodule(tolua_S,"SoundSource");
    tolua_function(tolua_S,"SetPitch",tolua_bind_sfml_audio_sf_SoundSource_SetPitch00);
    tolua_function(tolua_S,"SetVolume",tolua_bind_sfml_audio_sf_SoundSource_SetVolume00);
    tolua_function(tolua_S,"SetPosition",tolua_bind_sfml_audio_sf_SoundSource_SetPosition00);
    tolua_function(tolua_S,"SetPosition",tolua_bind_sfml_audio_sf_SoundSource_SetPosition01);
    tolua_function(tolua_S,"SetRelativeToListener",tolua_bind_sfml_audio_sf_SoundSource_SetRelativeToListener00);
    tolua_function(tolua_S,"SetMinDistance",tolua_bind_sfml_audio_sf_SoundSource_SetMinDistance00);
    tolua_function(tolua_S,"SetAttenuation",tolua_bind_sfml_audio_sf_SoundSource_SetAttenuation00);
    tolua_function(tolua_S,"GetPitch",tolua_bind_sfml_audio_sf_SoundSource_GetPitch00);
    tolua_function(tolua_S,"GetVolume",tolua_bind_sfml_audio_sf_SoundSource_GetVolume00);
    tolua_function(tolua_S,"GetPosition",tolua_bind_sfml_audio_sf_SoundSource_GetPosition00);
    tolua_function(tolua_S,"IsRelativeToListener",tolua_bind_sfml_audio_sf_SoundSource_IsRelativeToListener00);
    tolua_function(tolua_S,"GetMinDistance",tolua_bind_sfml_audio_sf_SoundSource_GetMinDistance00);
    tolua_function(tolua_S,"GetAttenuation",tolua_bind_sfml_audio_sf_SoundSource_GetAttenuation00);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"SoundStream","sf::SoundStream","sf::SoundSource",NULL);
   tolua_beginmodule(tolua_S,"SoundStream");
    tolua_function(tolua_S,"Play",tolua_bind_sfml_audio_sf_SoundStream_Play00);
    tolua_function(tolua_S,"Pause",tolua_bind_sfml_audio_sf_SoundStream_Pause00);
    tolua_function(tolua_S,"Stop",tolua_bind_sfml_audio_sf_SoundStream_Stop00);
    tolua_function(tolua_S,"GetChannelsCount",tolua_bind_sfml_audio_sf_SoundStream_GetChannelsCount00);
    tolua_function(tolua_S,"GetSampleRate",tolua_bind_sfml_audio_sf_SoundStream_GetSampleRate00);
    tolua_function(tolua_S,"GetStatus",tolua_bind_sfml_audio_sf_SoundStream_GetStatus00);
    tolua_function(tolua_S,"SetPlayingOffset",tolua_bind_sfml_audio_sf_SoundStream_SetPlayingOffset00);
    tolua_function(tolua_S,"GetPlayingOffset",tolua_bind_sfml_audio_sf_SoundStream_GetPlayingOffset00);
    tolua_function(tolua_S,"SetLoop",tolua_bind_sfml_audio_sf_SoundStream_SetLoop00);
    tolua_function(tolua_S,"GetLoop",tolua_bind_sfml_audio_sf_SoundStream_GetLoop00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Music","sf::Music","sf::SoundStream",tolua_collect_sf__Music);
   #else
   tolua_cclass(tolua_S,"Music","sf::Music","sf::SoundStream",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Music");
    tolua_function(tolua_S,"new",tolua_bind_sfml_audio_sf_Music_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_audio_sf_Music_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_audio_sf_Music_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_sfml_audio_sf_Music_delete00);
    tolua_function(tolua_S,"OpenFromFile",tolua_bind_sfml_audio_sf_Music_OpenFromFile00);
    tolua_function(tolua_S,"GetDuration",tolua_bind_sfml_audio_sf_Music_GetDuration00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"SoundBuffer","sf::SoundBuffer","",tolua_collect_sf__SoundBuffer);
   #else
   tolua_cclass(tolua_S,"SoundBuffer","sf::SoundBuffer","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"SoundBuffer");
    tolua_function(tolua_S,"new",tolua_bind_sfml_audio_sf_SoundBuffer_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_audio_sf_SoundBuffer_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_audio_sf_SoundBuffer_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_audio_sf_SoundBuffer_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_audio_sf_SoundBuffer_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_audio_sf_SoundBuffer_new01_local);
    tolua_function(tolua_S,"delete",tolua_bind_sfml_audio_sf_SoundBuffer_delete00);
    tolua_function(tolua_S,"LoadFromFile",tolua_bind_sfml_audio_sf_SoundBuffer_LoadFromFile00);
    tolua_function(tolua_S,"SaveToFile",tolua_bind_sfml_audio_sf_SoundBuffer_SaveToFile00);
    tolua_function(tolua_S,"GetSamplesCount",tolua_bind_sfml_audio_sf_SoundBuffer_GetSamplesCount00);
    tolua_function(tolua_S,"GetSampleRate",tolua_bind_sfml_audio_sf_SoundBuffer_GetSampleRate00);
    tolua_function(tolua_S,"GetChannelsCount",tolua_bind_sfml_audio_sf_SoundBuffer_GetChannelsCount00);
    tolua_function(tolua_S,"GetDuration",tolua_bind_sfml_audio_sf_SoundBuffer_GetDuration00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Sound","sf::Sound","sf::SoundSource",tolua_collect_sf__Sound);
   #else
   tolua_cclass(tolua_S,"Sound","sf::Sound","sf::SoundSource",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Sound");
    tolua_function(tolua_S,"new",tolua_bind_sfml_audio_sf_Sound_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_audio_sf_Sound_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_audio_sf_Sound_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_audio_sf_Sound_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_audio_sf_Sound_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_audio_sf_Sound_new01_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_audio_sf_Sound_new02);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_audio_sf_Sound_new02_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_audio_sf_Sound_new02_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_audio_sf_Sound_new03);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_audio_sf_Sound_new03_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_audio_sf_Sound_new03_local);
    tolua_function(tolua_S,"delete",tolua_bind_sfml_audio_sf_Sound_delete00);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"SoundRecorder","sf::SoundRecorder","",NULL);
   tolua_beginmodule(tolua_S,"SoundRecorder");
    tolua_function(tolua_S,"Start",tolua_bind_sfml_audio_sf_SoundRecorder_Start00);
    tolua_function(tolua_S,"Stop",tolua_bind_sfml_audio_sf_SoundRecorder_Stop00);
    tolua_function(tolua_S,"GetSampleRate",tolua_bind_sfml_audio_sf_SoundRecorder_GetSampleRate00);
    tolua_function(tolua_S,"IsAvailable",tolua_bind_sfml_audio_sf_SoundRecorder_IsAvailable00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"SoundBufferRecorder","sf::SoundBufferRecorder","sf::SoundRecorder",tolua_collect_sf__SoundBufferRecorder);
   #else
   tolua_cclass(tolua_S,"SoundBufferRecorder","sf::SoundBufferRecorder","sf::SoundRecorder",NULL);
   #endif
   tolua_beginmodule(tolua_S,"SoundBufferRecorder");
    tolua_function(tolua_S,"new",tolua_bind_sfml_audio_sf_SoundBufferRecorder_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_audio_sf_SoundBufferRecorder_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_audio_sf_SoundBufferRecorder_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_sfml_audio_sf_SoundBufferRecorder_delete00);
    tolua_function(tolua_S,"GetBuffer",tolua_bind_sfml_audio_sf_SoundBufferRecorder_GetBuffer00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_bind_sfml_audio (lua_State* tolua_S) {
 return tolua_bind_sfml_audio_open(tolua_S);
};
#endif

