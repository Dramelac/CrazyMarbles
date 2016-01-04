/*
** Lua binding: bind_sfml_system
** Generated automatically by tolua++-1.0.92 on 06/08/11 11:07:38.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_bind_sfml_system_open (lua_State* tolua_S);

#include "SFML/System.hpp"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_sf__Vector3i (lua_State* tolua_S)
{
 sf::Vector3i* self = (sf::Vector3i*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_sf__Vector3f (lua_State* tolua_S)
{
 sf::Vector3f* self = (sf::Vector3f*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_sf__Vector2i (lua_State* tolua_S)
{
 sf::Vector2i* self = (sf::Vector2i*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_sf__Vector2f (lua_State* tolua_S)
{
 sf::Vector2f* self = (sf::Vector2f*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_sf__Clock (lua_State* tolua_S)
{
 sf::Clock* self = (sf::Clock*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"sf::Vector3i");
 tolua_usertype(tolua_S,"sf::Vector3f");
 tolua_usertype(tolua_S,"sf::Vector2i");
 tolua_usertype(tolua_S,"sf::Vector2f");
 tolua_usertype(tolua_S,"sf::Clock");
}

/* method: new of class  sf::Clock */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_system_sf_Clock_new00
static int tolua_bind_sfml_system_sf_Clock_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Clock",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Clock* tolua_ret = (sf::Clock*)  new sf::Clock();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Clock");
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

/* method: new_local of class  sf::Clock */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_system_sf_Clock_new00_local
static int tolua_bind_sfml_system_sf_Clock_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Clock",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Clock* tolua_ret = (sf::Clock*)  new sf::Clock();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Clock");
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

/* method: delete of class  sf::Clock */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_system_sf_Clock_delete00
static int tolua_bind_sfml_system_sf_Clock_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Clock",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Clock* self = (sf::Clock*)  tolua_tousertype(tolua_S,1,0);
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

/* method: GetElapsedTime of class  sf::Clock */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_system_sf_Clock_GetElapsedTime00
static int tolua_bind_sfml_system_sf_Clock_GetElapsedTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Clock",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Clock* self = (const sf::Clock*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetElapsedTime'",NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->GetElapsedTime();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetElapsedTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Reset of class  sf::Clock */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_system_sf_Clock_Reset00
static int tolua_bind_sfml_system_sf_Clock_Reset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Clock",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Clock* self = (sf::Clock*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Reset'",NULL);
#endif
  {
   self->Reset();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Reset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::Vector2f */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_system_sf_Vector2f_new00
static int tolua_bind_sfml_system_sf_Vector2f_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Vector2f* tolua_ret = (sf::Vector2f*)  new sf::Vector2f();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Vector2f");
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

/* method: new_local of class  sf::Vector2f */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_system_sf_Vector2f_new00_local
static int tolua_bind_sfml_system_sf_Vector2f_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Vector2f* tolua_ret = (sf::Vector2f*)  new sf::Vector2f();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Vector2f");
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

/* method: new of class  sf::Vector2f */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_system_sf_Vector2f_new01
static int tolua_bind_sfml_system_sf_Vector2f_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Vector2f",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float tolua_var_1 = ((float)  tolua_tonumber(tolua_S,2,0));
  float tolua_var_2 = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   sf::Vector2f* tolua_ret = (sf::Vector2f*)  new sf::Vector2f(tolua_var_1,tolua_var_2);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Vector2f");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_system_sf_Vector2f_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::Vector2f */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_system_sf_Vector2f_new01_local
static int tolua_bind_sfml_system_sf_Vector2f_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Vector2f",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float tolua_var_1 = ((float)  tolua_tonumber(tolua_S,2,0));
  float tolua_var_2 = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   sf::Vector2f* tolua_ret = (sf::Vector2f*)  new sf::Vector2f(tolua_var_1,tolua_var_2);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Vector2f");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_system_sf_Vector2f_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  sf::Vector2f */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_system_sf_Vector2f_delete00
static int tolua_bind_sfml_system_sf_Vector2f_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Vector2f* self = (sf::Vector2f*)  tolua_tousertype(tolua_S,1,0);
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

/* get function: x of class  sf::Vector2f */
#ifndef TOLUA_DISABLE_tolua_get_sf__Vector2f_x
static int tolua_get_sf__Vector2f_x(lua_State* tolua_S)
{
  sf::Vector2f* self = (sf::Vector2f*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  sf::Vector2f */
#ifndef TOLUA_DISABLE_tolua_set_sf__Vector2f_x
static int tolua_set_sf__Vector2f_x(lua_State* tolua_S)
{
  sf::Vector2f* self = (sf::Vector2f*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  sf::Vector2f */
#ifndef TOLUA_DISABLE_tolua_get_sf__Vector2f_y
static int tolua_get_sf__Vector2f_y(lua_State* tolua_S)
{
  sf::Vector2f* self = (sf::Vector2f*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  sf::Vector2f */
#ifndef TOLUA_DISABLE_tolua_set_sf__Vector2f_y
static int tolua_set_sf__Vector2f_y(lua_State* tolua_S)
{
  sf::Vector2f* self = (sf::Vector2f*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::Vector3f */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_system_sf_Vector3f_new00
static int tolua_bind_sfml_system_sf_Vector3f_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Vector3f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Vector3f* tolua_ret = (sf::Vector3f*)  new sf::Vector3f();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Vector3f");
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

/* method: new_local of class  sf::Vector3f */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_system_sf_Vector3f_new00_local
static int tolua_bind_sfml_system_sf_Vector3f_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Vector3f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Vector3f* tolua_ret = (sf::Vector3f*)  new sf::Vector3f();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Vector3f");
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

/* method: new of class  sf::Vector3f */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_system_sf_Vector3f_new01
static int tolua_bind_sfml_system_sf_Vector3f_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Vector3f",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float tolua_var_3 = ((float)  tolua_tonumber(tolua_S,2,0));
  float tolua_var_4 = ((float)  tolua_tonumber(tolua_S,3,0));
  float tolua_var_5 = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   sf::Vector3f* tolua_ret = (sf::Vector3f*)  new sf::Vector3f(tolua_var_3,tolua_var_4,tolua_var_5);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Vector3f");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_system_sf_Vector3f_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::Vector3f */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_system_sf_Vector3f_new01_local
static int tolua_bind_sfml_system_sf_Vector3f_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Vector3f",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float tolua_var_3 = ((float)  tolua_tonumber(tolua_S,2,0));
  float tolua_var_4 = ((float)  tolua_tonumber(tolua_S,3,0));
  float tolua_var_5 = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   sf::Vector3f* tolua_ret = (sf::Vector3f*)  new sf::Vector3f(tolua_var_3,tolua_var_4,tolua_var_5);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Vector3f");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_system_sf_Vector3f_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  sf::Vector3f */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_system_sf_Vector3f_delete00
static int tolua_bind_sfml_system_sf_Vector3f_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Vector3f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Vector3f* self = (sf::Vector3f*)  tolua_tousertype(tolua_S,1,0);
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

/* get function: x of class  sf::Vector3f */
#ifndef TOLUA_DISABLE_tolua_get_sf__Vector3f_x
static int tolua_get_sf__Vector3f_x(lua_State* tolua_S)
{
  sf::Vector3f* self = (sf::Vector3f*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  sf::Vector3f */
#ifndef TOLUA_DISABLE_tolua_set_sf__Vector3f_x
static int tolua_set_sf__Vector3f_x(lua_State* tolua_S)
{
  sf::Vector3f* self = (sf::Vector3f*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  sf::Vector3f */
#ifndef TOLUA_DISABLE_tolua_get_sf__Vector3f_y
static int tolua_get_sf__Vector3f_y(lua_State* tolua_S)
{
  sf::Vector3f* self = (sf::Vector3f*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  sf::Vector3f */
#ifndef TOLUA_DISABLE_tolua_set_sf__Vector3f_y
static int tolua_set_sf__Vector3f_y(lua_State* tolua_S)
{
  sf::Vector3f* self = (sf::Vector3f*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: z of class  sf::Vector3f */
#ifndef TOLUA_DISABLE_tolua_get_sf__Vector3f_z
static int tolua_get_sf__Vector3f_z(lua_State* tolua_S)
{
  sf::Vector3f* self = (sf::Vector3f*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'z'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->z);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: z of class  sf::Vector3f */
#ifndef TOLUA_DISABLE_tolua_set_sf__Vector3f_z
static int tolua_set_sf__Vector3f_z(lua_State* tolua_S)
{
  sf::Vector3f* self = (sf::Vector3f*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'z'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->z = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::Vector2i */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_system_sf_Vector2i_new00
static int tolua_bind_sfml_system_sf_Vector2i_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Vector2i",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Vector2i* tolua_ret = (sf::Vector2i*)  new sf::Vector2i();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Vector2i");
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

/* method: new_local of class  sf::Vector2i */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_system_sf_Vector2i_new00_local
static int tolua_bind_sfml_system_sf_Vector2i_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Vector2i",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Vector2i* tolua_ret = (sf::Vector2i*)  new sf::Vector2i();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Vector2i");
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

/* method: new of class  sf::Vector2i */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_system_sf_Vector2i_new01
static int tolua_bind_sfml_system_sf_Vector2i_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Vector2i",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int tolua_var_6 = ((int)  tolua_tonumber(tolua_S,2,0));
  int tolua_var_7 = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   sf::Vector2i* tolua_ret = (sf::Vector2i*)  new sf::Vector2i(tolua_var_6,tolua_var_7);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Vector2i");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_system_sf_Vector2i_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::Vector2i */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_system_sf_Vector2i_new01_local
static int tolua_bind_sfml_system_sf_Vector2i_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Vector2i",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int tolua_var_6 = ((int)  tolua_tonumber(tolua_S,2,0));
  int tolua_var_7 = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   sf::Vector2i* tolua_ret = (sf::Vector2i*)  new sf::Vector2i(tolua_var_6,tolua_var_7);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Vector2i");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_system_sf_Vector2i_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  sf::Vector2i */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_system_sf_Vector2i_delete00
static int tolua_bind_sfml_system_sf_Vector2i_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Vector2i",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Vector2i* self = (sf::Vector2i*)  tolua_tousertype(tolua_S,1,0);
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

/* get function: x of class  sf::Vector2i */
#ifndef TOLUA_DISABLE_tolua_get_sf__Vector2i_x
static int tolua_get_sf__Vector2i_x(lua_State* tolua_S)
{
  sf::Vector2i* self = (sf::Vector2i*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  sf::Vector2i */
#ifndef TOLUA_DISABLE_tolua_set_sf__Vector2i_x
static int tolua_set_sf__Vector2i_x(lua_State* tolua_S)
{
  sf::Vector2i* self = (sf::Vector2i*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  sf::Vector2i */
#ifndef TOLUA_DISABLE_tolua_get_sf__Vector2i_y
static int tolua_get_sf__Vector2i_y(lua_State* tolua_S)
{
  sf::Vector2i* self = (sf::Vector2i*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  sf::Vector2i */
#ifndef TOLUA_DISABLE_tolua_set_sf__Vector2i_y
static int tolua_set_sf__Vector2i_y(lua_State* tolua_S)
{
  sf::Vector2i* self = (sf::Vector2i*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::Vector3i */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_system_sf_Vector3i_new00
static int tolua_bind_sfml_system_sf_Vector3i_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Vector3i",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Vector3i* tolua_ret = (sf::Vector3i*)  new sf::Vector3i();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Vector3i");
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

/* method: new_local of class  sf::Vector3i */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_system_sf_Vector3i_new00_local
static int tolua_bind_sfml_system_sf_Vector3i_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Vector3i",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Vector3i* tolua_ret = (sf::Vector3i*)  new sf::Vector3i();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Vector3i");
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

/* method: new of class  sf::Vector3i */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_system_sf_Vector3i_new01
static int tolua_bind_sfml_system_sf_Vector3i_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Vector3i",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int tolua_var_8 = ((int)  tolua_tonumber(tolua_S,2,0));
  int tolua_var_9 = ((int)  tolua_tonumber(tolua_S,3,0));
  int tolua_var_10 = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   sf::Vector3i* tolua_ret = (sf::Vector3i*)  new sf::Vector3i(tolua_var_8,tolua_var_9,tolua_var_10);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Vector3i");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_system_sf_Vector3i_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::Vector3i */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_system_sf_Vector3i_new01_local
static int tolua_bind_sfml_system_sf_Vector3i_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Vector3i",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int tolua_var_8 = ((int)  tolua_tonumber(tolua_S,2,0));
  int tolua_var_9 = ((int)  tolua_tonumber(tolua_S,3,0));
  int tolua_var_10 = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   sf::Vector3i* tolua_ret = (sf::Vector3i*)  new sf::Vector3i(tolua_var_8,tolua_var_9,tolua_var_10);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Vector3i");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_system_sf_Vector3i_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  sf::Vector3i */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_system_sf_Vector3i_delete00
static int tolua_bind_sfml_system_sf_Vector3i_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Vector3i",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Vector3i* self = (sf::Vector3i*)  tolua_tousertype(tolua_S,1,0);
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

/* get function: x of class  sf::Vector3i */
#ifndef TOLUA_DISABLE_tolua_get_sf__Vector3i_x
static int tolua_get_sf__Vector3i_x(lua_State* tolua_S)
{
  sf::Vector3i* self = (sf::Vector3i*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  sf::Vector3i */
#ifndef TOLUA_DISABLE_tolua_set_sf__Vector3i_x
static int tolua_set_sf__Vector3i_x(lua_State* tolua_S)
{
  sf::Vector3i* self = (sf::Vector3i*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  sf::Vector3i */
#ifndef TOLUA_DISABLE_tolua_get_sf__Vector3i_y
static int tolua_get_sf__Vector3i_y(lua_State* tolua_S)
{
  sf::Vector3i* self = (sf::Vector3i*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  sf::Vector3i */
#ifndef TOLUA_DISABLE_tolua_set_sf__Vector3i_y
static int tolua_set_sf__Vector3i_y(lua_State* tolua_S)
{
  sf::Vector3i* self = (sf::Vector3i*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: z of class  sf::Vector3i */
#ifndef TOLUA_DISABLE_tolua_get_sf__Vector3i_z
static int tolua_get_sf__Vector3i_z(lua_State* tolua_S)
{
  sf::Vector3i* self = (sf::Vector3i*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'z'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->z);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: z of class  sf::Vector3i */
#ifndef TOLUA_DISABLE_tolua_set_sf__Vector3i_z
static int tolua_set_sf__Vector3i_z(lua_State* tolua_S)
{
  sf::Vector3i* self = (sf::Vector3i*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'z'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->z = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_bind_sfml_system_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"sf",0);
  tolua_beginmodule(tolua_S,"sf");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Clock","sf::Clock","",tolua_collect_sf__Clock);
   #else
   tolua_cclass(tolua_S,"Clock","sf::Clock","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Clock");
    tolua_function(tolua_S,"new",tolua_bind_sfml_system_sf_Clock_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_system_sf_Clock_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_system_sf_Clock_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_sfml_system_sf_Clock_delete00);
    tolua_function(tolua_S,"GetElapsedTime",tolua_bind_sfml_system_sf_Clock_GetElapsedTime00);
    tolua_function(tolua_S,"Reset",tolua_bind_sfml_system_sf_Clock_Reset00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Vector2f","sf::Vector2f","",tolua_collect_sf__Vector2f);
   #else
   tolua_cclass(tolua_S,"Vector2f","sf::Vector2f","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Vector2f");
    tolua_function(tolua_S,"new",tolua_bind_sfml_system_sf_Vector2f_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_system_sf_Vector2f_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_system_sf_Vector2f_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_system_sf_Vector2f_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_system_sf_Vector2f_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_system_sf_Vector2f_new01_local);
    tolua_function(tolua_S,"delete",tolua_bind_sfml_system_sf_Vector2f_delete00);
    tolua_variable(tolua_S,"x",tolua_get_sf__Vector2f_x,tolua_set_sf__Vector2f_x);
    tolua_variable(tolua_S,"y",tolua_get_sf__Vector2f_y,tolua_set_sf__Vector2f_y);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Vector3f","sf::Vector3f","",tolua_collect_sf__Vector3f);
   #else
   tolua_cclass(tolua_S,"Vector3f","sf::Vector3f","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Vector3f");
    tolua_function(tolua_S,"new",tolua_bind_sfml_system_sf_Vector3f_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_system_sf_Vector3f_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_system_sf_Vector3f_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_system_sf_Vector3f_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_system_sf_Vector3f_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_system_sf_Vector3f_new01_local);
    tolua_function(tolua_S,"delete",tolua_bind_sfml_system_sf_Vector3f_delete00);
    tolua_variable(tolua_S,"x",tolua_get_sf__Vector3f_x,tolua_set_sf__Vector3f_x);
    tolua_variable(tolua_S,"y",tolua_get_sf__Vector3f_y,tolua_set_sf__Vector3f_y);
    tolua_variable(tolua_S,"z",tolua_get_sf__Vector3f_z,tolua_set_sf__Vector3f_z);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Vector2i","sf::Vector2i","",tolua_collect_sf__Vector2i);
   #else
   tolua_cclass(tolua_S,"Vector2i","sf::Vector2i","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Vector2i");
    tolua_function(tolua_S,"new",tolua_bind_sfml_system_sf_Vector2i_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_system_sf_Vector2i_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_system_sf_Vector2i_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_system_sf_Vector2i_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_system_sf_Vector2i_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_system_sf_Vector2i_new01_local);
    tolua_function(tolua_S,"delete",tolua_bind_sfml_system_sf_Vector2i_delete00);
    tolua_variable(tolua_S,"x",tolua_get_sf__Vector2i_x,tolua_set_sf__Vector2i_x);
    tolua_variable(tolua_S,"y",tolua_get_sf__Vector2i_y,tolua_set_sf__Vector2i_y);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Vector3i","sf::Vector3i","",tolua_collect_sf__Vector3i);
   #else
   tolua_cclass(tolua_S,"Vector3i","sf::Vector3i","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Vector3i");
    tolua_function(tolua_S,"new",tolua_bind_sfml_system_sf_Vector3i_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_system_sf_Vector3i_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_system_sf_Vector3i_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_system_sf_Vector3i_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_system_sf_Vector3i_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_system_sf_Vector3i_new01_local);
    tolua_function(tolua_S,"delete",tolua_bind_sfml_system_sf_Vector3i_delete00);
    tolua_variable(tolua_S,"x",tolua_get_sf__Vector3i_x,tolua_set_sf__Vector3i_x);
    tolua_variable(tolua_S,"y",tolua_get_sf__Vector3i_y,tolua_set_sf__Vector3i_y);
    tolua_variable(tolua_S,"z",tolua_get_sf__Vector3i_z,tolua_set_sf__Vector3i_z);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_bind_sfml_system (lua_State* tolua_S) {
 return tolua_bind_sfml_system_open(tolua_S);
};
#endif

