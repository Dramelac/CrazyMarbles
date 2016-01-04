/*
** Lua binding: bind_2disometric
** Generated automatically by tolua++-1.0.92 on 06/22/11 10:57:51.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_bind_2disometric_open (lua_State* tolua_S);

#include "../2disometric.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_DynamicLight (lua_State* tolua_S)
{
 DynamicLight* self = (DynamicLight*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_sf__Color (lua_State* tolua_S)
{
 sf::Color* self = (sf::Color*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_IsometricMap (lua_State* tolua_S)
{
 IsometricMap* self = (IsometricMap*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_IsometricMapSprite (lua_State* tolua_S)
{
 IsometricMapSprite* self = (IsometricMapSprite*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_sf__Vector2f (lua_State* tolua_S)
{
 sf::Vector2f* self = (sf::Vector2f*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_LightMap (lua_State* tolua_S)
{
 LightMap* self = (LightMap*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"sf::IntRect");
 tolua_usertype(tolua_S,"DynamicLight");
 tolua_usertype(tolua_S,"sf::Color");
 tolua_usertype(tolua_S,"IsometricMap");
 tolua_usertype(tolua_S,"LightMap");
 tolua_usertype(tolua_S,"sf::RenderWindow");
 tolua_usertype(tolua_S,"sf::Vector3f");
 tolua_usertype(tolua_S,"sf::Blend::Mode");
 tolua_usertype(tolua_S,"IsometricMapSprite");
 tolua_usertype(tolua_S,"sf::Vector2f");
 tolua_usertype(tolua_S,"sf::Image");
}

/* method: new of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_new00
static int tolua_bind_2disometric_IsometricMapSprite_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   IsometricMapSprite* tolua_ret = (IsometricMapSprite*)  new IsometricMapSprite();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"IsometricMapSprite");
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

/* method: new_local of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_new00_local
static int tolua_bind_2disometric_IsometricMapSprite_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   IsometricMapSprite* tolua_ret = (IsometricMapSprite*)  new IsometricMapSprite();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"IsometricMapSprite");
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

/* method: new of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_new01
static int tolua_bind_2disometric_IsometricMapSprite_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Image",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::Image* image = ((const sf::Image*)  tolua_tousertype(tolua_S,2,0));
  {
   IsometricMapSprite* tolua_ret = (IsometricMapSprite*)  new IsometricMapSprite(*image);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"IsometricMapSprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_2disometric_IsometricMapSprite_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_new01_local
static int tolua_bind_2disometric_IsometricMapSprite_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Image",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::Image* image = ((const sf::Image*)  tolua_tousertype(tolua_S,2,0));
  {
   IsometricMapSprite* tolua_ret = (IsometricMapSprite*)  new IsometricMapSprite(*image);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"IsometricMapSprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_2disometric_IsometricMapSprite_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_new02
static int tolua_bind_2disometric_IsometricMapSprite_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Image",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::Image* image = ((const sf::Image*)  tolua_tousertype(tolua_S,2,0));
  const sf::Vector2f* position = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,3,0));
  {
   IsometricMapSprite* tolua_ret = (IsometricMapSprite*)  new IsometricMapSprite(*image,*position);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"IsometricMapSprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_2disometric_IsometricMapSprite_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_new02_local
static int tolua_bind_2disometric_IsometricMapSprite_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Image",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::Image* image = ((const sf::Image*)  tolua_tousertype(tolua_S,2,0));
  const sf::Vector2f* position = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,3,0));
  {
   IsometricMapSprite* tolua_ret = (IsometricMapSprite*)  new IsometricMapSprite(*image,*position);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"IsometricMapSprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_2disometric_IsometricMapSprite_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_new03
static int tolua_bind_2disometric_IsometricMapSprite_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Image",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::Image* image = ((const sf::Image*)  tolua_tousertype(tolua_S,2,0));
  const sf::Vector2f* position = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,3,0));
  const sf::Vector2f* scale = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,4,0));
  float rotation = ((float)  tolua_tonumber(tolua_S,5,0.f));
  {
   IsometricMapSprite* tolua_ret = (IsometricMapSprite*)  new IsometricMapSprite(*image,*position,*scale,rotation);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"IsometricMapSprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_2disometric_IsometricMapSprite_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_new03_local
static int tolua_bind_2disometric_IsometricMapSprite_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Image",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::Image* image = ((const sf::Image*)  tolua_tousertype(tolua_S,2,0));
  const sf::Vector2f* position = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,3,0));
  const sf::Vector2f* scale = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,4,0));
  float rotation = ((float)  tolua_tonumber(tolua_S,5,0.f));
  {
   IsometricMapSprite* tolua_ret = (IsometricMapSprite*)  new IsometricMapSprite(*image,*position,*scale,rotation);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"IsometricMapSprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_2disometric_IsometricMapSprite_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_new04
static int tolua_bind_2disometric_IsometricMapSprite_new04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Image",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,6,"const sf::Color",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::Image* image = ((const sf::Image*)  tolua_tousertype(tolua_S,2,0));
  const sf::Vector2f* position = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,3,0));
  const sf::Vector2f* scale = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,4,0));
  float rotation = ((float)  tolua_tonumber(tolua_S,5,0));
  const sf::Color* color = ((const sf::Color*)  tolua_tousertype(tolua_S,6,0));
  {
   IsometricMapSprite* tolua_ret = (IsometricMapSprite*)  new IsometricMapSprite(*image,*position,*scale,rotation,*color);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"IsometricMapSprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_2disometric_IsometricMapSprite_new03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_new04_local
static int tolua_bind_2disometric_IsometricMapSprite_new04_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Image",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,6,"const sf::Color",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::Image* image = ((const sf::Image*)  tolua_tousertype(tolua_S,2,0));
  const sf::Vector2f* position = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,3,0));
  const sf::Vector2f* scale = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,4,0));
  float rotation = ((float)  tolua_tonumber(tolua_S,5,0));
  const sf::Color* color = ((const sf::Color*)  tolua_tousertype(tolua_S,6,0));
  {
   IsometricMapSprite* tolua_ret = (IsometricMapSprite*)  new IsometricMapSprite(*image,*position,*scale,rotation,*color);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"IsometricMapSprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_2disometric_IsometricMapSprite_new03_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_delete00
static int tolua_bind_2disometric_IsometricMapSprite_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMapSprite* self = (IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
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

/* method: SetWorldPosition of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_SetWorldPosition00
static int tolua_bind_2disometric_IsometricMapSprite_SetWorldPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMapSprite* self = (IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetWorldPosition'",NULL);
#endif
  {
   self->SetWorldPosition(x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetWorldPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetWorldPosition of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_SetWorldPosition01
static int tolua_bind_2disometric_IsometricMapSprite_SetWorldPosition01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  IsometricMapSprite* self = (IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
  const sf::Vector2f* position = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetWorldPosition'",NULL);
#endif
  {
   self->SetWorldPosition(*position);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_2disometric_IsometricMapSprite_SetWorldPosition00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetWorldPosition of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_GetWorldPosition00
static int tolua_bind_2disometric_IsometricMapSprite_GetWorldPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const IsometricMapSprite* self = (const IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetWorldPosition'",NULL);
#endif
  {
   sf::Vector2f tolua_ret = (sf::Vector2f)  self->GetWorldPosition();
   {
#ifdef __cplusplus
    void* tolua_obj = new sf::Vector2f(tolua_ret);
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::Vector2f");
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(sf::Vector2f));
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::Vector2f");
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetWorldPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetWorldZ of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_SetWorldZ00
static int tolua_bind_2disometric_IsometricMapSprite_SetWorldZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMapSprite* self = (IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
  float z = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetWorldZ'",NULL);
#endif
  {
   self->SetWorldZ(z);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetWorldZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetWorldZ of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_GetWorldZ00
static int tolua_bind_2disometric_IsometricMapSprite_GetWorldZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMapSprite* self = (IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetWorldZ'",NULL);
#endif
  {
   float tolua_ret = (float)  self->GetWorldZ();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetWorldZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUseLighting of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_setUseLighting00
static int tolua_bind_2disometric_IsometricMapSprite_setUseLighting00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMapSprite* self = (IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
  bool use = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUseLighting'",NULL);
#endif
  {
   self->setUseLighting(use);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUseLighting'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getUseLighting of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_getUseLighting00
static int tolua_bind_2disometric_IsometricMapSprite_getUseLighting00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMapSprite* self = (IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getUseLighting'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getUseLighting();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getUseLighting'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetPosition of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_SetPosition00
static int tolua_bind_2disometric_IsometricMapSprite_SetPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMapSprite* self = (IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetPosition'",NULL);
#endif
  {
   self->SetPosition(x,y);
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

/* method: SetPosition of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_SetPosition01
static int tolua_bind_2disometric_IsometricMapSprite_SetPosition01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  IsometricMapSprite* self = (IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
  const sf::Vector2f* position = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetPosition'",NULL);
#endif
  {
   self->SetPosition(*position);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_2disometric_IsometricMapSprite_SetPosition00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetX of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_SetX00
static int tolua_bind_2disometric_IsometricMapSprite_SetX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMapSprite* self = (IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetX'",NULL);
#endif
  {
   self->SetX(x);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetY of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_SetY00
static int tolua_bind_2disometric_IsometricMapSprite_SetY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMapSprite* self = (IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
  float y = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetY'",NULL);
#endif
  {
   self->SetY(y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetScale of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_SetScale00
static int tolua_bind_2disometric_IsometricMapSprite_SetScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMapSprite* self = (IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
  float sx = ((float)  tolua_tonumber(tolua_S,2,0));
  float sy = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetScale'",NULL);
#endif
  {
   self->SetScale(sx,sy);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetScale of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_SetScale01
static int tolua_bind_2disometric_IsometricMapSprite_SetScale01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  IsometricMapSprite* self = (IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
  const sf::Vector2f* scale = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetScale'",NULL);
#endif
  {
   self->SetScale(*scale);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_2disometric_IsometricMapSprite_SetScale00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetScaleX of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_SetScaleX00
static int tolua_bind_2disometric_IsometricMapSprite_SetScaleX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMapSprite* self = (IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
  float s = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetScaleX'",NULL);
#endif
  {
   self->SetScaleX(s);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetScaleX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetScaleY of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_SetScaleY00
static int tolua_bind_2disometric_IsometricMapSprite_SetScaleY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMapSprite* self = (IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
  float s = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetScaleY'",NULL);
#endif
  {
   self->SetScaleY(s);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetScaleY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetOrigin of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_SetOrigin00
static int tolua_bind_2disometric_IsometricMapSprite_SetOrigin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMapSprite* self = (IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetOrigin'",NULL);
#endif
  {
   self->SetOrigin(x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetOrigin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetOrigin of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_SetOrigin01
static int tolua_bind_2disometric_IsometricMapSprite_SetOrigin01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  IsometricMapSprite* self = (IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
  const sf::Vector2f* origin = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetOrigin'",NULL);
#endif
  {
   self->SetOrigin(*origin);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_2disometric_IsometricMapSprite_SetOrigin00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetRotation of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_SetRotation00
static int tolua_bind_2disometric_IsometricMapSprite_SetRotation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMapSprite* self = (IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
  float angle = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetRotation'",NULL);
#endif
  {
   self->SetRotation(angle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetRotation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetColor of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_SetColor00
static int tolua_bind_2disometric_IsometricMapSprite_SetColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Color",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMapSprite* self = (IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
  const sf::Color* color = ((const sf::Color*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetColor'",NULL);
#endif
  {
   self->SetColor(*color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetBlendMode of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_SetBlendMode00
static int tolua_bind_2disometric_IsometricMapSprite_SetBlendMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"sf::Blend::Mode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMapSprite* self = (IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
  sf::Blend::Mode mode = *((sf::Blend::Mode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetBlendMode'",NULL);
#endif
  {
   self->SetBlendMode(mode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetBlendMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPosition of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_GetPosition00
static int tolua_bind_2disometric_IsometricMapSprite_GetPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const IsometricMapSprite* self = (const IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetPosition'",NULL);
#endif
  {
   const sf::Vector2f& tolua_ret = (const sf::Vector2f&)  self->GetPosition();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const sf::Vector2f");
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

/* method: GetScale of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_GetScale00
static int tolua_bind_2disometric_IsometricMapSprite_GetScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const IsometricMapSprite* self = (const IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetScale'",NULL);
#endif
  {
   const sf::Vector2f& tolua_ret = (const sf::Vector2f&)  self->GetScale();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const sf::Vector2f");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetOrigin of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_GetOrigin00
static int tolua_bind_2disometric_IsometricMapSprite_GetOrigin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const IsometricMapSprite* self = (const IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetOrigin'",NULL);
#endif
  {
   const sf::Vector2f& tolua_ret = (const sf::Vector2f&)  self->GetOrigin();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const sf::Vector2f");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetOrigin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetRotation of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_GetRotation00
static int tolua_bind_2disometric_IsometricMapSprite_GetRotation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const IsometricMapSprite* self = (const IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetRotation'",NULL);
#endif
  {
   float tolua_ret = (float)  self->GetRotation();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetRotation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetColor of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_GetColor00
static int tolua_bind_2disometric_IsometricMapSprite_GetColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const IsometricMapSprite* self = (const IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetColor'",NULL);
#endif
  {
   const sf::Color& tolua_ret = (const sf::Color&)  self->GetColor();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const sf::Color");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetBlendMode of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_GetBlendMode00
static int tolua_bind_2disometric_IsometricMapSprite_GetBlendMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const IsometricMapSprite* self = (const IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetBlendMode'",NULL);
#endif
  {
   int tolua_ret = (int)  self->GetBlendMode();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetBlendMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Move of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_Move00
static int tolua_bind_2disometric_IsometricMapSprite_Move00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMapSprite* self = (IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
  float ox = ((float)  tolua_tonumber(tolua_S,2,0));
  float oy = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Move'",NULL);
#endif
  {
   self->Move(ox,oy);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Move'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Move of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_Move01
static int tolua_bind_2disometric_IsometricMapSprite_Move01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  IsometricMapSprite* self = (IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
  const sf::Vector2f* o = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Move'",NULL);
#endif
  {
   self->Move(*o);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_2disometric_IsometricMapSprite_Move00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Scale of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_Scale00
static int tolua_bind_2disometric_IsometricMapSprite_Scale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMapSprite* self = (IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
  float sx = ((float)  tolua_tonumber(tolua_S,2,0));
  float sy = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Scale'",NULL);
#endif
  {
   self->Scale(sx,sy);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Scale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Scale of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_Scale01
static int tolua_bind_2disometric_IsometricMapSprite_Scale01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  IsometricMapSprite* self = (IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
  const sf::Vector2f* s = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Scale'",NULL);
#endif
  {
   self->Scale(*s);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_2disometric_IsometricMapSprite_Scale00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Rotate of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_Rotate00
static int tolua_bind_2disometric_IsometricMapSprite_Rotate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMapSprite* self = (IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
  float angle = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Rotate'",NULL);
#endif
  {
   self->Rotate(angle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Rotate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: TransformToLocal of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_TransformToLocal00
static int tolua_bind_2disometric_IsometricMapSprite_TransformToLocal00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const IsometricMapSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const IsometricMapSprite* self = (const IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
  const sf::Vector2f* point = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TransformToLocal'",NULL);
#endif
  {
   sf::Vector2f tolua_ret = (sf::Vector2f)  self->TransformToLocal(*point);
   {
#ifdef __cplusplus
    void* tolua_obj = new sf::Vector2f(tolua_ret);
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::Vector2f");
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(sf::Vector2f));
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::Vector2f");
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'TransformToLocal'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: TransformToGlobal of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_TransformToGlobal00
static int tolua_bind_2disometric_IsometricMapSprite_TransformToGlobal00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const IsometricMapSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const IsometricMapSprite* self = (const IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
  const sf::Vector2f* point = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TransformToGlobal'",NULL);
#endif
  {
   sf::Vector2f tolua_ret = (sf::Vector2f)  self->TransformToGlobal(*point);
   {
#ifdef __cplusplus
    void* tolua_obj = new sf::Vector2f(tolua_ret);
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::Vector2f");
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(sf::Vector2f));
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::Vector2f");
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'TransformToGlobal'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetImage of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_SetImage00
static int tolua_bind_2disometric_IsometricMapSprite_SetImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Image",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMapSprite* self = (IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
  const sf::Image* img = ((const sf::Image*)  tolua_tousertype(tolua_S,2,0));
  bool adjust = ((bool)  tolua_toboolean(tolua_S,3,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetImage'",NULL);
#endif
  {
   self->SetImage(*img,adjust);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetSubRect of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_SetSubRect00
static int tolua_bind_2disometric_IsometricMapSprite_SetSubRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::IntRect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMapSprite* self = (IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
  const sf::IntRect* rect = ((const sf::IntRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetSubRect'",NULL);
#endif
  {
   self->SetSubRect(*rect);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetSubRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Resize of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_Resize00
static int tolua_bind_2disometric_IsometricMapSprite_Resize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMapSprite* self = (IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
  float w = ((float)  tolua_tonumber(tolua_S,2,0));
  float h = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Resize'",NULL);
#endif
  {
   self->Resize(w,h);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Resize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: FlipX of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_FlipX00
static int tolua_bind_2disometric_IsometricMapSprite_FlipX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMapSprite* self = (IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
  bool flipped = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'FlipX'",NULL);
#endif
  {
   self->FlipX(flipped);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FlipX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: FlipY of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_FlipY00
static int tolua_bind_2disometric_IsometricMapSprite_FlipY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMapSprite* self = (IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
  bool flipped = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'FlipY'",NULL);
#endif
  {
   self->FlipY(flipped);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FlipY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetImage of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_GetImage00
static int tolua_bind_2disometric_IsometricMapSprite_GetImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const IsometricMapSprite* self = (const IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetImage'",NULL);
#endif
  {
   const sf::Image* tolua_ret = (const sf::Image*)  self->GetImage();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"const sf::Image");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSubRect of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_GetSubRect00
static int tolua_bind_2disometric_IsometricMapSprite_GetSubRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const IsometricMapSprite* self = (const IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetSubRect'",NULL);
#endif
  {
   const sf::IntRect& tolua_ret = (const sf::IntRect&)  self->GetSubRect();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const sf::IntRect");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetSubRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSize of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_GetSize00
static int tolua_bind_2disometric_IsometricMapSprite_GetSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const IsometricMapSprite* self = (const IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetSize'",NULL);
#endif
  {
   sf::Vector2f tolua_ret = (sf::Vector2f)  self->GetSize();
   {
#ifdef __cplusplus
    void* tolua_obj = new sf::Vector2f(tolua_ret);
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::Vector2f");
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(sf::Vector2f));
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::Vector2f");
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPixel of class  IsometricMapSprite */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMapSprite_GetPixel00
static int tolua_bind_2disometric_IsometricMapSprite_GetPixel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMapSprite* self = (IsometricMapSprite*)  tolua_tousertype(tolua_S,1,0);
  unsigned int x = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int y = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetPixel'",NULL);
#endif
  {
   sf::Color tolua_ret = (sf::Color)  self->GetPixel(x,y);
   {
#ifdef __cplusplus
    void* tolua_obj = new sf::Color(tolua_ret);
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::Color");
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(sf::Color));
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::Color");
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPixel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  DynamicLight */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_DynamicLight_new00
static int tolua_bind_2disometric_DynamicLight_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"DynamicLight",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   DynamicLight* tolua_ret = (DynamicLight*)  new DynamicLight();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"DynamicLight");
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

/* method: new_local of class  DynamicLight */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_DynamicLight_new00_local
static int tolua_bind_2disometric_DynamicLight_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"DynamicLight",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   DynamicLight* tolua_ret = (DynamicLight*)  new DynamicLight();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"DynamicLight");
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

/* method: delete of class  DynamicLight */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_DynamicLight_delete00
static int tolua_bind_2disometric_DynamicLight_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"DynamicLight",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  DynamicLight* self = (DynamicLight*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setColor of class  DynamicLight */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_DynamicLight_setColor00
static int tolua_bind_2disometric_DynamicLight_setColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"DynamicLight",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  DynamicLight* self = (DynamicLight*)  tolua_tousertype(tolua_S,1,0);
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
  float g = ((float)  tolua_tonumber(tolua_S,3,0));
  float b = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'",NULL);
#endif
  {
   self->setColor(r,g,b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRadius of class  DynamicLight */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_DynamicLight_setRadius00
static int tolua_bind_2disometric_DynamicLight_setRadius00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"DynamicLight",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  DynamicLight* self = (DynamicLight*)  tolua_tousertype(tolua_S,1,0);
  float rad = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRadius'",NULL);
#endif
  {
   self->setRadius(rad);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRadius'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPosition of class  DynamicLight */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_DynamicLight_setPosition00
static int tolua_bind_2disometric_DynamicLight_setPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"DynamicLight",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  DynamicLight* self = (DynamicLight*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'",NULL);
#endif
  {
   self->setPosition(x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_position of class  DynamicLight */
#ifndef TOLUA_DISABLE_tolua_get_DynamicLight_m_position
static int tolua_get_DynamicLight_m_position(lua_State* tolua_S)
{
  DynamicLight* self = (DynamicLight*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_position'",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->m_position,"sf::Vector2f");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_position of class  DynamicLight */
#ifndef TOLUA_DISABLE_tolua_set_DynamicLight_m_position
static int tolua_set_DynamicLight_m_position(lua_State* tolua_S)
{
  DynamicLight* self = (DynamicLight*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_position'",NULL);
  if (!tolua_isusertype(tolua_S,2,"sf::Vector2f",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m_position = *((sf::Vector2f*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_color of class  DynamicLight */
#ifndef TOLUA_DISABLE_tolua_get_DynamicLight_m_color
static int tolua_get_DynamicLight_m_color(lua_State* tolua_S)
{
  DynamicLight* self = (DynamicLight*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_color'",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->m_color,"sf::Vector3f");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_color of class  DynamicLight */
#ifndef TOLUA_DISABLE_tolua_set_DynamicLight_m_color
static int tolua_set_DynamicLight_m_color(lua_State* tolua_S)
{
  DynamicLight* self = (DynamicLight*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_color'",NULL);
  if (!tolua_isusertype(tolua_S,2,"sf::Vector3f",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m_color = *((sf::Vector3f*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_radius of class  DynamicLight */
#ifndef TOLUA_DISABLE_tolua_get_DynamicLight_m_radius
static int tolua_get_DynamicLight_m_radius(lua_State* tolua_S)
{
  DynamicLight* self = (DynamicLight*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_radius'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->m_radius);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_radius of class  DynamicLight */
#ifndef TOLUA_DISABLE_tolua_set_DynamicLight_m_radius
static int tolua_set_DynamicLight_m_radius(lua_State* tolua_S)
{
  DynamicLight* self = (DynamicLight*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_radius'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m_radius = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  LightMap */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_LightMap_new00
static int tolua_bind_2disometric_LightMap_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LightMap",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
  int nodesize = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   LightMap* tolua_ret = (LightMap*)  new LightMap(w,h,nodesize);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"LightMap");
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

/* method: new_local of class  LightMap */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_LightMap_new00_local
static int tolua_bind_2disometric_LightMap_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"LightMap",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
  int nodesize = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   LightMap* tolua_ret = (LightMap*)  new LightMap(w,h,nodesize);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"LightMap");
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

/* method: delete of class  LightMap */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_LightMap_delete00
static int tolua_bind_2disometric_LightMap_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LightMap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LightMap* self = (LightMap*)  tolua_tousertype(tolua_S,1,0);
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

/* method: resize of class  LightMap */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_LightMap_resize00
static int tolua_bind_2disometric_LightMap_resize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LightMap",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LightMap* self = (LightMap*)  tolua_tousertype(tolua_S,1,0);
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resize'",NULL);
#endif
  {
   self->resize(w,h);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clearStatic of class  LightMap */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_LightMap_clearStatic00
static int tolua_bind_2disometric_LightMap_clearStatic00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LightMap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LightMap* self = (LightMap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clearStatic'",NULL);
#endif
  {
   self->clearStatic();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clearStatic'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clearDynamic of class  LightMap */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_LightMap_clearDynamic00
static int tolua_bind_2disometric_LightMap_clearDynamic00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LightMap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LightMap* self = (LightMap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clearDynamic'",NULL);
#endif
  {
   self->clearDynamic();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clearDynamic'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateRegion of class  LightMap */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_LightMap_updateRegion00
static int tolua_bind_2disometric_LightMap_updateRegion00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LightMap",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LightMap* self = (LightMap*)  tolua_tousertype(tolua_S,1,0);
  int sx = ((int)  tolua_tonumber(tolua_S,2,0));
  int sy = ((int)  tolua_tonumber(tolua_S,3,0));
  int num_nodes = ((int)  tolua_tonumber(tolua_S,4,0));
  int num_rows = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateRegion'",NULL);
#endif
  {
   self->updateRegion(sx,sy,num_nodes,num_rows);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateRegion'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: requestLight of class  LightMap */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_LightMap_requestLight00
static int tolua_bind_2disometric_LightMap_requestLight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LightMap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LightMap* self = (LightMap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'requestLight'",NULL);
#endif
  {
   DynamicLight* tolua_ret = (DynamicLight*)  self->requestLight();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"DynamicLight");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'requestLight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: releaseLight of class  LightMap */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_LightMap_releaseLight00
static int tolua_bind_2disometric_LightMap_releaseLight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LightMap",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"DynamicLight",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LightMap* self = (LightMap*)  tolua_tousertype(tolua_S,1,0);
  DynamicLight* light = ((DynamicLight*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'releaseLight'",NULL);
#endif
  {
   self->releaseLight(light);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'releaseLight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLightValue of class  LightMap */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_LightMap_getLightValue00
static int tolua_bind_2disometric_LightMap_getLightValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LightMap",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LightMap* self = (LightMap*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLightValue'",NULL);
#endif
  {
   sf::Color tolua_ret = (sf::Color)  self->getLightValue(x,y);
   {
#ifdef __cplusplus
    void* tolua_obj = new sf::Color(tolua_ret);
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::Color");
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(sf::Color));
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::Color");
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLightValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAmbient of class  LightMap */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_LightMap_setAmbient00
static int tolua_bind_2disometric_LightMap_setAmbient00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LightMap",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LightMap* self = (LightMap*)  tolua_tousertype(tolua_S,1,0);
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
  float g = ((float)  tolua_tonumber(tolua_S,3,0));
  float b = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAmbient'",NULL);
#endif
  {
   self->setAmbient(r,g,b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAmbient'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: debugPrintLights of class  LightMap */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_LightMap_debugPrintLights00
static int tolua_bind_2disometric_LightMap_debugPrintLights00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LightMap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LightMap* self = (LightMap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'debugPrintLights'",NULL);
#endif
  {
   self->debugPrintLights();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'debugPrintLights'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addStaticLightCell of class  LightMap */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_LightMap_addStaticLightCell00
static int tolua_bind_2disometric_LightMap_addStaticLightCell00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LightMap",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LightMap* self = (LightMap*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  float r = ((float)  tolua_tonumber(tolua_S,4,0));
  float g = ((float)  tolua_tonumber(tolua_S,5,0));
  float b = ((float)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addStaticLightCell'",NULL);
#endif
  {
   self->addStaticLightCell(x,y,r,g,b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addStaticLightCell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addStaticLightRadius of class  LightMap */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_LightMap_addStaticLightRadius00
static int tolua_bind_2disometric_LightMap_addStaticLightRadius00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LightMap",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LightMap* self = (LightMap*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  float r = ((float)  tolua_tonumber(tolua_S,4,0));
  float g = ((float)  tolua_tonumber(tolua_S,5,0));
  float b = ((float)  tolua_tonumber(tolua_S,6,0));
  float radius = ((float)  tolua_tonumber(tolua_S,7,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addStaticLightRadius'",NULL);
#endif
  {
   self->addStaticLightRadius(x,y,r,g,b,radius);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addStaticLightRadius'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  IsometricMap */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMap_new00
static int tolua_bind_2disometric_IsometricMap_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"IsometricMap",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
  int nodesize = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   IsometricMap* tolua_ret = (IsometricMap*)  new IsometricMap(w,h,nodesize);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"IsometricMap");
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

/* method: new_local of class  IsometricMap */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMap_new00_local
static int tolua_bind_2disometric_IsometricMap_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"IsometricMap",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
  int nodesize = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   IsometricMap* tolua_ret = (IsometricMap*)  new IsometricMap(w,h,nodesize);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"IsometricMap");
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

/* method: delete of class  IsometricMap */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMap_delete00
static int tolua_bind_2disometric_IsometricMap_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMap* self = (IsometricMap*)  tolua_tousertype(tolua_S,1,0);
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

/* method: projectMouseCoords of class  IsometricMap */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMap_projectMouseCoords00
static int tolua_bind_2disometric_IsometricMap_projectMouseCoords00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMap",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"sf::RenderWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMap* self = (IsometricMap*)  tolua_tousertype(tolua_S,1,0);
  int mx = ((int)  tolua_tonumber(tolua_S,2,0));
  int my = ((int)  tolua_tonumber(tolua_S,3,0));
  sf::RenderWindow* win = ((sf::RenderWindow*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'projectMouseCoords'",NULL);
#endif
  {
   sf::Vector2f tolua_ret = (sf::Vector2f)  self->projectMouseCoords(mx,my,win);
   {
#ifdef __cplusplus
    void* tolua_obj = new sf::Vector2f(tolua_ret);
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::Vector2f");
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(sf::Vector2f));
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::Vector2f");
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'projectMouseCoords'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resize of class  IsometricMap */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMap_resize00
static int tolua_bind_2disometric_IsometricMap_resize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMap",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMap* self = (IsometricMap*)  tolua_tousertype(tolua_S,1,0);
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resize'",NULL);
#endif
  {
   self->resize(w,h);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clear of class  IsometricMap */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMap_clear00
static int tolua_bind_2disometric_IsometricMap_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMap* self = (IsometricMap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clear'",NULL);
#endif
  {
   self->clear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertSprite of class  IsometricMap */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMap_insertSprite00
static int tolua_bind_2disometric_IsometricMap_insertSprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMap",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMap* self = (IsometricMap*)  tolua_tousertype(tolua_S,1,0);
  IsometricMapSprite* s = ((IsometricMapSprite*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertSprite'",NULL);
#endif
  {
   self->insertSprite(s);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insertSprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeSprite of class  IsometricMap */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMap_removeSprite00
static int tolua_bind_2disometric_IsometricMap_removeSprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMap",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"IsometricMapSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMap* self = (IsometricMap*)  tolua_tousertype(tolua_S,1,0);
  IsometricMapSprite* s = ((IsometricMapSprite*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeSprite'",NULL);
#endif
  {
   self->removeSprite(s);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeSprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: draw of class  IsometricMap */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMap_draw00
static int tolua_bind_2disometric_IsometricMap_draw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMap",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"sf::RenderWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMap* self = (IsometricMap*)  tolua_tousertype(tolua_S,1,0);
  sf::RenderWindow* win = ((sf::RenderWindow*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'draw'",NULL);
#endif
  {
   self->draw(win);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'draw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addLeftWall of class  IsometricMap */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMap_addLeftWall00
static int tolua_bind_2disometric_IsometricMap_addLeftWall00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMap",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMap* self = (IsometricMap*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  std::string name = ((std::string)  tolua_tocppstring(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addLeftWall'",NULL);
#endif
  {
   self->addLeftWall(x,y,name);
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addLeftWall'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addRightWall of class  IsometricMap */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMap_addRightWall00
static int tolua_bind_2disometric_IsometricMap_addRightWall00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMap",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMap* self = (IsometricMap*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  std::string name = ((std::string)  tolua_tocppstring(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addRightWall'",NULL);
#endif
  {
   self->addRightWall(x,y,name);
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addRightWall'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addFloor of class  IsometricMap */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMap_addFloor00
static int tolua_bind_2disometric_IsometricMap_addFloor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMap",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMap* self = (IsometricMap*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  std::string name = ((std::string)  tolua_tocppstring(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addFloor'",NULL);
#endif
  {
   self->addFloor(x,y,name);
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addFloor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addRoof of class  IsometricMap */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMap_addRoof00
static int tolua_bind_2disometric_IsometricMap_addRoof00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMap",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMap* self = (IsometricMap*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  std::string name = ((std::string)  tolua_tocppstring(tolua_S,4,0));
  float height = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addRoof'",NULL);
#endif
  {
   self->addRoof(x,y,name,height);
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addRoof'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLightMap of class  IsometricMap */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMap_getLightMap00
static int tolua_bind_2disometric_IsometricMap_getLightMap00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMap* self = (IsometricMap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLightMap'",NULL);
#endif
  {
   LightMap* tolua_ret = (LightMap*)  self->getLightMap();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"LightMap");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLightMap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCenter of class  IsometricMap */
#ifndef TOLUA_DISABLE_tolua_bind_2disometric_IsometricMap_setCenter00
static int tolua_bind_2disometric_IsometricMap_setCenter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"IsometricMap",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  IsometricMap* self = (IsometricMap*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCenter'",NULL);
#endif
  {
   self->setCenter(x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCenter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_bind_2disometric_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"IsometricMapSprite","IsometricMapSprite","",tolua_collect_IsometricMapSprite);
  #else
  tolua_cclass(tolua_S,"IsometricMapSprite","IsometricMapSprite","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"IsometricMapSprite");
   tolua_function(tolua_S,"new",tolua_bind_2disometric_IsometricMapSprite_new00);
   tolua_function(tolua_S,"new_local",tolua_bind_2disometric_IsometricMapSprite_new00_local);
   tolua_function(tolua_S,".call",tolua_bind_2disometric_IsometricMapSprite_new00_local);
   tolua_function(tolua_S,"new",tolua_bind_2disometric_IsometricMapSprite_new01);
   tolua_function(tolua_S,"new_local",tolua_bind_2disometric_IsometricMapSprite_new01_local);
   tolua_function(tolua_S,".call",tolua_bind_2disometric_IsometricMapSprite_new01_local);
   tolua_function(tolua_S,"new",tolua_bind_2disometric_IsometricMapSprite_new02);
   tolua_function(tolua_S,"new_local",tolua_bind_2disometric_IsometricMapSprite_new02_local);
   tolua_function(tolua_S,".call",tolua_bind_2disometric_IsometricMapSprite_new02_local);
   tolua_function(tolua_S,"new",tolua_bind_2disometric_IsometricMapSprite_new03);
   tolua_function(tolua_S,"new_local",tolua_bind_2disometric_IsometricMapSprite_new03_local);
   tolua_function(tolua_S,".call",tolua_bind_2disometric_IsometricMapSprite_new03_local);
   tolua_function(tolua_S,"new",tolua_bind_2disometric_IsometricMapSprite_new04);
   tolua_function(tolua_S,"new_local",tolua_bind_2disometric_IsometricMapSprite_new04_local);
   tolua_function(tolua_S,".call",tolua_bind_2disometric_IsometricMapSprite_new04_local);
   tolua_function(tolua_S,"delete",tolua_bind_2disometric_IsometricMapSprite_delete00);
   tolua_function(tolua_S,"SetWorldPosition",tolua_bind_2disometric_IsometricMapSprite_SetWorldPosition00);
   tolua_function(tolua_S,"SetWorldPosition",tolua_bind_2disometric_IsometricMapSprite_SetWorldPosition01);
   tolua_function(tolua_S,"GetWorldPosition",tolua_bind_2disometric_IsometricMapSprite_GetWorldPosition00);
   tolua_function(tolua_S,"SetWorldZ",tolua_bind_2disometric_IsometricMapSprite_SetWorldZ00);
   tolua_function(tolua_S,"GetWorldZ",tolua_bind_2disometric_IsometricMapSprite_GetWorldZ00);
   tolua_function(tolua_S,"setUseLighting",tolua_bind_2disometric_IsometricMapSprite_setUseLighting00);
   tolua_function(tolua_S,"getUseLighting",tolua_bind_2disometric_IsometricMapSprite_getUseLighting00);
   tolua_function(tolua_S,"SetPosition",tolua_bind_2disometric_IsometricMapSprite_SetPosition00);
   tolua_function(tolua_S,"SetPosition",tolua_bind_2disometric_IsometricMapSprite_SetPosition01);
   tolua_function(tolua_S,"SetX",tolua_bind_2disometric_IsometricMapSprite_SetX00);
   tolua_function(tolua_S,"SetY",tolua_bind_2disometric_IsometricMapSprite_SetY00);
   tolua_function(tolua_S,"SetScale",tolua_bind_2disometric_IsometricMapSprite_SetScale00);
   tolua_function(tolua_S,"SetScale",tolua_bind_2disometric_IsometricMapSprite_SetScale01);
   tolua_function(tolua_S,"SetScaleX",tolua_bind_2disometric_IsometricMapSprite_SetScaleX00);
   tolua_function(tolua_S,"SetScaleY",tolua_bind_2disometric_IsometricMapSprite_SetScaleY00);
   tolua_function(tolua_S,"SetOrigin",tolua_bind_2disometric_IsometricMapSprite_SetOrigin00);
   tolua_function(tolua_S,"SetOrigin",tolua_bind_2disometric_IsometricMapSprite_SetOrigin01);
   tolua_function(tolua_S,"SetRotation",tolua_bind_2disometric_IsometricMapSprite_SetRotation00);
   tolua_function(tolua_S,"SetColor",tolua_bind_2disometric_IsometricMapSprite_SetColor00);
   tolua_function(tolua_S,"SetBlendMode",tolua_bind_2disometric_IsometricMapSprite_SetBlendMode00);
   tolua_function(tolua_S,"GetPosition",tolua_bind_2disometric_IsometricMapSprite_GetPosition00);
   tolua_function(tolua_S,"GetScale",tolua_bind_2disometric_IsometricMapSprite_GetScale00);
   tolua_function(tolua_S,"GetOrigin",tolua_bind_2disometric_IsometricMapSprite_GetOrigin00);
   tolua_function(tolua_S,"GetRotation",tolua_bind_2disometric_IsometricMapSprite_GetRotation00);
   tolua_function(tolua_S,"GetColor",tolua_bind_2disometric_IsometricMapSprite_GetColor00);
   tolua_function(tolua_S,"GetBlendMode",tolua_bind_2disometric_IsometricMapSprite_GetBlendMode00);
   tolua_function(tolua_S,"Move",tolua_bind_2disometric_IsometricMapSprite_Move00);
   tolua_function(tolua_S,"Move",tolua_bind_2disometric_IsometricMapSprite_Move01);
   tolua_function(tolua_S,"Scale",tolua_bind_2disometric_IsometricMapSprite_Scale00);
   tolua_function(tolua_S,"Scale",tolua_bind_2disometric_IsometricMapSprite_Scale01);
   tolua_function(tolua_S,"Rotate",tolua_bind_2disometric_IsometricMapSprite_Rotate00);
   tolua_function(tolua_S,"TransformToLocal",tolua_bind_2disometric_IsometricMapSprite_TransformToLocal00);
   tolua_function(tolua_S,"TransformToGlobal",tolua_bind_2disometric_IsometricMapSprite_TransformToGlobal00);
   tolua_function(tolua_S,"SetImage",tolua_bind_2disometric_IsometricMapSprite_SetImage00);
   tolua_function(tolua_S,"SetSubRect",tolua_bind_2disometric_IsometricMapSprite_SetSubRect00);
   tolua_function(tolua_S,"Resize",tolua_bind_2disometric_IsometricMapSprite_Resize00);
   tolua_function(tolua_S,"FlipX",tolua_bind_2disometric_IsometricMapSprite_FlipX00);
   tolua_function(tolua_S,"FlipY",tolua_bind_2disometric_IsometricMapSprite_FlipY00);
   tolua_function(tolua_S,"GetImage",tolua_bind_2disometric_IsometricMapSprite_GetImage00);
   tolua_function(tolua_S,"GetSubRect",tolua_bind_2disometric_IsometricMapSprite_GetSubRect00);
   tolua_function(tolua_S,"GetSize",tolua_bind_2disometric_IsometricMapSprite_GetSize00);
   tolua_function(tolua_S,"GetPixel",tolua_bind_2disometric_IsometricMapSprite_GetPixel00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"DynamicLight","DynamicLight","",tolua_collect_DynamicLight);
  #else
  tolua_cclass(tolua_S,"DynamicLight","DynamicLight","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"DynamicLight");
   tolua_function(tolua_S,"new",tolua_bind_2disometric_DynamicLight_new00);
   tolua_function(tolua_S,"new_local",tolua_bind_2disometric_DynamicLight_new00_local);
   tolua_function(tolua_S,".call",tolua_bind_2disometric_DynamicLight_new00_local);
   tolua_function(tolua_S,"delete",tolua_bind_2disometric_DynamicLight_delete00);
   tolua_function(tolua_S,"setColor",tolua_bind_2disometric_DynamicLight_setColor00);
   tolua_function(tolua_S,"setRadius",tolua_bind_2disometric_DynamicLight_setRadius00);
   tolua_function(tolua_S,"setPosition",tolua_bind_2disometric_DynamicLight_setPosition00);
   tolua_variable(tolua_S,"m_position",tolua_get_DynamicLight_m_position,tolua_set_DynamicLight_m_position);
   tolua_variable(tolua_S,"m_color",tolua_get_DynamicLight_m_color,tolua_set_DynamicLight_m_color);
   tolua_variable(tolua_S,"m_radius",tolua_get_DynamicLight_m_radius,tolua_set_DynamicLight_m_radius);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"LightMap","LightMap","",tolua_collect_LightMap);
  #else
  tolua_cclass(tolua_S,"LightMap","LightMap","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"LightMap");
   tolua_function(tolua_S,"new",tolua_bind_2disometric_LightMap_new00);
   tolua_function(tolua_S,"new_local",tolua_bind_2disometric_LightMap_new00_local);
   tolua_function(tolua_S,".call",tolua_bind_2disometric_LightMap_new00_local);
   tolua_function(tolua_S,"delete",tolua_bind_2disometric_LightMap_delete00);
   tolua_function(tolua_S,"resize",tolua_bind_2disometric_LightMap_resize00);
   tolua_function(tolua_S,"clearStatic",tolua_bind_2disometric_LightMap_clearStatic00);
   tolua_function(tolua_S,"clearDynamic",tolua_bind_2disometric_LightMap_clearDynamic00);
   tolua_function(tolua_S,"updateRegion",tolua_bind_2disometric_LightMap_updateRegion00);
   tolua_function(tolua_S,"requestLight",tolua_bind_2disometric_LightMap_requestLight00);
   tolua_function(tolua_S,"releaseLight",tolua_bind_2disometric_LightMap_releaseLight00);
   tolua_function(tolua_S,"getLightValue",tolua_bind_2disometric_LightMap_getLightValue00);
   tolua_function(tolua_S,"setAmbient",tolua_bind_2disometric_LightMap_setAmbient00);
   tolua_function(tolua_S,"debugPrintLights",tolua_bind_2disometric_LightMap_debugPrintLights00);
   tolua_function(tolua_S,"addStaticLightCell",tolua_bind_2disometric_LightMap_addStaticLightCell00);
   tolua_function(tolua_S,"addStaticLightRadius",tolua_bind_2disometric_LightMap_addStaticLightRadius00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"IsometricMap","IsometricMap","",tolua_collect_IsometricMap);
  #else
  tolua_cclass(tolua_S,"IsometricMap","IsometricMap","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"IsometricMap");
   tolua_function(tolua_S,"new",tolua_bind_2disometric_IsometricMap_new00);
   tolua_function(tolua_S,"new_local",tolua_bind_2disometric_IsometricMap_new00_local);
   tolua_function(tolua_S,".call",tolua_bind_2disometric_IsometricMap_new00_local);
   tolua_function(tolua_S,"delete",tolua_bind_2disometric_IsometricMap_delete00);
   tolua_function(tolua_S,"projectMouseCoords",tolua_bind_2disometric_IsometricMap_projectMouseCoords00);
   tolua_function(tolua_S,"resize",tolua_bind_2disometric_IsometricMap_resize00);
   tolua_function(tolua_S,"clear",tolua_bind_2disometric_IsometricMap_clear00);
   tolua_function(tolua_S,"insertSprite",tolua_bind_2disometric_IsometricMap_insertSprite00);
   tolua_function(tolua_S,"removeSprite",tolua_bind_2disometric_IsometricMap_removeSprite00);
   tolua_function(tolua_S,"draw",tolua_bind_2disometric_IsometricMap_draw00);
   tolua_function(tolua_S,"addLeftWall",tolua_bind_2disometric_IsometricMap_addLeftWall00);
   tolua_function(tolua_S,"addRightWall",tolua_bind_2disometric_IsometricMap_addRightWall00);
   tolua_function(tolua_S,"addFloor",tolua_bind_2disometric_IsometricMap_addFloor00);
   tolua_function(tolua_S,"addRoof",tolua_bind_2disometric_IsometricMap_addRoof00);
   tolua_function(tolua_S,"getLightMap",tolua_bind_2disometric_IsometricMap_getLightMap00);
   tolua_function(tolua_S,"setCenter",tolua_bind_2disometric_IsometricMap_setCenter00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_bind_2disometric (lua_State* tolua_S) {
 return tolua_bind_2disometric_open(tolua_S);
};
#endif

