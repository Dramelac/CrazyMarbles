/*
** Lua binding: bind_sfml_window
** Generated automatically by tolua++-1.0.92 on 06/08/11 20:05:29.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_bind_sfml_window_open (lua_State* tolua_S);

#include <SFML/Window.hpp>
#include <vector>
#include "../sfml_extensions.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_sf__Window (lua_State* tolua_S)
{
 sf::Window* self = (sf::Window*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_sf__Event (lua_State* tolua_S)
{
 sf::Event* self = (sf::Event*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_sf__ContextSettings (lua_State* tolua_S)
{
 sf::ContextSettings* self = (sf::ContextSettings*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_sf__Input (lua_State* tolua_S)
{
 sf::Input* self = (sf::Input*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_sf__VideoMode (lua_State* tolua_S)
{
 sf::VideoMode* self = (sf::VideoMode*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"sf::Event::MouseWheelEvent");
 tolua_usertype(tolua_S,"sf::Event");
 tolua_usertype(tolua_S,"sf::VideoMode");
 tolua_usertype(tolua_S,"sf::Event::KeyEvent");
 tolua_usertype(tolua_S,"sf::Input");
 tolua_usertype(tolua_S,"sf::Event::MouseMoveEvent");
 tolua_usertype(tolua_S,"sf::Window");
 tolua_usertype(tolua_S,"sf::Event::JoyMoveEvent");
 tolua_usertype(tolua_S,"sf::Event::TextEvent");
 tolua_usertype(tolua_S,"sf::ContextSettings");
 tolua_usertype(tolua_S,"sf::Event::SizeEvent");
 tolua_usertype(tolua_S,"sf::Event::JoyButtonEvent");
 tolua_usertype(tolua_S,"sf::Event::MouseButtonEvent");
}

/* method: new of class  sf::Event */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Event_new00
static int tolua_bind_sfml_window_sf_Event_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Event",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Event* tolua_ret = (sf::Event*)  new sf::Event();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Event");
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

/* method: new_local of class  sf::Event */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Event_new00_local
static int tolua_bind_sfml_window_sf_Event_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Event",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Event* tolua_ret = (sf::Event*)  new sf::Event();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Event");
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

/* method: delete of class  sf::Event */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Event_delete00
static int tolua_bind_sfml_window_sf_Event_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Event",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Event* self = (sf::Event*)  tolua_tousertype(tolua_S,1,0);
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

/* get function: Code of class  KeyEvent */
#ifndef TOLUA_DISABLE_tolua_get_sf__Event__KeyEvent_Code
static int tolua_get_sf__Event__KeyEvent_Code(lua_State* tolua_S)
{
  sf::Event::KeyEvent* self = (sf::Event::KeyEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Code'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->Code);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Code of class  KeyEvent */
#ifndef TOLUA_DISABLE_tolua_set_sf__Event__KeyEvent_Code
static int tolua_set_sf__Event__KeyEvent_Code(lua_State* tolua_S)
{
  sf::Event::KeyEvent* self = (sf::Event::KeyEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Code'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Code = ((sf::Key::Code) (int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Alt of class  KeyEvent */
#ifndef TOLUA_DISABLE_tolua_get_sf__Event__KeyEvent_Alt
static int tolua_get_sf__Event__KeyEvent_Alt(lua_State* tolua_S)
{
  sf::Event::KeyEvent* self = (sf::Event::KeyEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Alt'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->Alt);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Alt of class  KeyEvent */
#ifndef TOLUA_DISABLE_tolua_set_sf__Event__KeyEvent_Alt
static int tolua_set_sf__Event__KeyEvent_Alt(lua_State* tolua_S)
{
  sf::Event::KeyEvent* self = (sf::Event::KeyEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Alt'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Alt = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Control of class  KeyEvent */
#ifndef TOLUA_DISABLE_tolua_get_sf__Event__KeyEvent_Control
static int tolua_get_sf__Event__KeyEvent_Control(lua_State* tolua_S)
{
  sf::Event::KeyEvent* self = (sf::Event::KeyEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Control'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->Control);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Control of class  KeyEvent */
#ifndef TOLUA_DISABLE_tolua_set_sf__Event__KeyEvent_Control
static int tolua_set_sf__Event__KeyEvent_Control(lua_State* tolua_S)
{
  sf::Event::KeyEvent* self = (sf::Event::KeyEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Control'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Control = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Shift of class  KeyEvent */
#ifndef TOLUA_DISABLE_tolua_get_sf__Event__KeyEvent_Shift
static int tolua_get_sf__Event__KeyEvent_Shift(lua_State* tolua_S)
{
  sf::Event::KeyEvent* self = (sf::Event::KeyEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Shift'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->Shift);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Shift of class  KeyEvent */
#ifndef TOLUA_DISABLE_tolua_set_sf__Event__KeyEvent_Shift
static int tolua_set_sf__Event__KeyEvent_Shift(lua_State* tolua_S)
{
  sf::Event::KeyEvent* self = (sf::Event::KeyEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Shift'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Shift = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Unicode of class  TextEvent */
#ifndef TOLUA_DISABLE_tolua_get_sf__Event__TextEvent_unsigned_Unicode
static int tolua_get_sf__Event__TextEvent_unsigned_Unicode(lua_State* tolua_S)
{
  sf::Event::TextEvent* self = (sf::Event::TextEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Unicode'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->Unicode);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Unicode of class  TextEvent */
#ifndef TOLUA_DISABLE_tolua_set_sf__Event__TextEvent_unsigned_Unicode
static int tolua_set_sf__Event__TextEvent_unsigned_Unicode(lua_State* tolua_S)
{
  sf::Event::TextEvent* self = (sf::Event::TextEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Unicode'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Unicode = ((unsigned int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: X of class  MouseMoveEvent */
#ifndef TOLUA_DISABLE_tolua_get_sf__Event__MouseMoveEvent_X
static int tolua_get_sf__Event__MouseMoveEvent_X(lua_State* tolua_S)
{
  sf::Event::MouseMoveEvent* self = (sf::Event::MouseMoveEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'X'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->X);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: X of class  MouseMoveEvent */
#ifndef TOLUA_DISABLE_tolua_set_sf__Event__MouseMoveEvent_X
static int tolua_set_sf__Event__MouseMoveEvent_X(lua_State* tolua_S)
{
  sf::Event::MouseMoveEvent* self = (sf::Event::MouseMoveEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'X'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->X = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Y of class  MouseMoveEvent */
#ifndef TOLUA_DISABLE_tolua_get_sf__Event__MouseMoveEvent_Y
static int tolua_get_sf__Event__MouseMoveEvent_Y(lua_State* tolua_S)
{
  sf::Event::MouseMoveEvent* self = (sf::Event::MouseMoveEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->Y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Y of class  MouseMoveEvent */
#ifndef TOLUA_DISABLE_tolua_set_sf__Event__MouseMoveEvent_Y
static int tolua_set_sf__Event__MouseMoveEvent_Y(lua_State* tolua_S)
{
  sf::Event::MouseMoveEvent* self = (sf::Event::MouseMoveEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Y = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Button of class  MouseButtonEvent */
#ifndef TOLUA_DISABLE_tolua_get_sf__Event__MouseButtonEvent_Button
static int tolua_get_sf__Event__MouseButtonEvent_Button(lua_State* tolua_S)
{
  sf::Event::MouseButtonEvent* self = (sf::Event::MouseButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Button'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->Button);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Button of class  MouseButtonEvent */
#ifndef TOLUA_DISABLE_tolua_set_sf__Event__MouseButtonEvent_Button
static int tolua_set_sf__Event__MouseButtonEvent_Button(lua_State* tolua_S)
{
  sf::Event::MouseButtonEvent* self = (sf::Event::MouseButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Button'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Button = ((sf::Mouse::Button) (int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: X of class  MouseButtonEvent */
#ifndef TOLUA_DISABLE_tolua_get_sf__Event__MouseButtonEvent_X
static int tolua_get_sf__Event__MouseButtonEvent_X(lua_State* tolua_S)
{
  sf::Event::MouseButtonEvent* self = (sf::Event::MouseButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'X'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->X);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: X of class  MouseButtonEvent */
#ifndef TOLUA_DISABLE_tolua_set_sf__Event__MouseButtonEvent_X
static int tolua_set_sf__Event__MouseButtonEvent_X(lua_State* tolua_S)
{
  sf::Event::MouseButtonEvent* self = (sf::Event::MouseButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'X'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->X = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Y of class  MouseButtonEvent */
#ifndef TOLUA_DISABLE_tolua_get_sf__Event__MouseButtonEvent_Y
static int tolua_get_sf__Event__MouseButtonEvent_Y(lua_State* tolua_S)
{
  sf::Event::MouseButtonEvent* self = (sf::Event::MouseButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->Y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Y of class  MouseButtonEvent */
#ifndef TOLUA_DISABLE_tolua_set_sf__Event__MouseButtonEvent_Y
static int tolua_set_sf__Event__MouseButtonEvent_Y(lua_State* tolua_S)
{
  sf::Event::MouseButtonEvent* self = (sf::Event::MouseButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Y = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Delta of class  MouseWheelEvent */
#ifndef TOLUA_DISABLE_tolua_get_sf__Event__MouseWheelEvent_Delta
static int tolua_get_sf__Event__MouseWheelEvent_Delta(lua_State* tolua_S)
{
  sf::Event::MouseWheelEvent* self = (sf::Event::MouseWheelEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Delta'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->Delta);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Delta of class  MouseWheelEvent */
#ifndef TOLUA_DISABLE_tolua_set_sf__Event__MouseWheelEvent_Delta
static int tolua_set_sf__Event__MouseWheelEvent_Delta(lua_State* tolua_S)
{
  sf::Event::MouseWheelEvent* self = (sf::Event::MouseWheelEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Delta'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Delta = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: JoystickId of class  JoyMoveEvent */
#ifndef TOLUA_DISABLE_tolua_get_sf__Event__JoyMoveEvent_unsigned_JoystickId
static int tolua_get_sf__Event__JoyMoveEvent_unsigned_JoystickId(lua_State* tolua_S)
{
  sf::Event::JoyMoveEvent* self = (sf::Event::JoyMoveEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'JoystickId'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->JoystickId);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: JoystickId of class  JoyMoveEvent */
#ifndef TOLUA_DISABLE_tolua_set_sf__Event__JoyMoveEvent_unsigned_JoystickId
static int tolua_set_sf__Event__JoyMoveEvent_unsigned_JoystickId(lua_State* tolua_S)
{
  sf::Event::JoyMoveEvent* self = (sf::Event::JoyMoveEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'JoystickId'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->JoystickId = ((unsigned int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Axis of class  JoyMoveEvent */
#ifndef TOLUA_DISABLE_tolua_get_sf__Event__JoyMoveEvent_Axis
static int tolua_get_sf__Event__JoyMoveEvent_Axis(lua_State* tolua_S)
{
  sf::Event::JoyMoveEvent* self = (sf::Event::JoyMoveEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Axis'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->Axis);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Axis of class  JoyMoveEvent */
#ifndef TOLUA_DISABLE_tolua_set_sf__Event__JoyMoveEvent_Axis
static int tolua_set_sf__Event__JoyMoveEvent_Axis(lua_State* tolua_S)
{
  sf::Event::JoyMoveEvent* self = (sf::Event::JoyMoveEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Axis'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Axis = ((sf::Joy::Axis) (int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Position of class  JoyMoveEvent */
#ifndef TOLUA_DISABLE_tolua_get_sf__Event__JoyMoveEvent_Position
static int tolua_get_sf__Event__JoyMoveEvent_Position(lua_State* tolua_S)
{
  sf::Event::JoyMoveEvent* self = (sf::Event::JoyMoveEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Position'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->Position);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Position of class  JoyMoveEvent */
#ifndef TOLUA_DISABLE_tolua_set_sf__Event__JoyMoveEvent_Position
static int tolua_set_sf__Event__JoyMoveEvent_Position(lua_State* tolua_S)
{
  sf::Event::JoyMoveEvent* self = (sf::Event::JoyMoveEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Position'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Position = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: JoystickId of class  JoyButtonEvent */
#ifndef TOLUA_DISABLE_tolua_get_sf__Event__JoyButtonEvent_unsigned_JoystickId
static int tolua_get_sf__Event__JoyButtonEvent_unsigned_JoystickId(lua_State* tolua_S)
{
  sf::Event::JoyButtonEvent* self = (sf::Event::JoyButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'JoystickId'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->JoystickId);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: JoystickId of class  JoyButtonEvent */
#ifndef TOLUA_DISABLE_tolua_set_sf__Event__JoyButtonEvent_unsigned_JoystickId
static int tolua_set_sf__Event__JoyButtonEvent_unsigned_JoystickId(lua_State* tolua_S)
{
  sf::Event::JoyButtonEvent* self = (sf::Event::JoyButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'JoystickId'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->JoystickId = ((unsigned int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Button of class  JoyButtonEvent */
#ifndef TOLUA_DISABLE_tolua_get_sf__Event__JoyButtonEvent_unsigned_Button
static int tolua_get_sf__Event__JoyButtonEvent_unsigned_Button(lua_State* tolua_S)
{
  sf::Event::JoyButtonEvent* self = (sf::Event::JoyButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Button'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->Button);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Button of class  JoyButtonEvent */
#ifndef TOLUA_DISABLE_tolua_set_sf__Event__JoyButtonEvent_unsigned_Button
static int tolua_set_sf__Event__JoyButtonEvent_unsigned_Button(lua_State* tolua_S)
{
  sf::Event::JoyButtonEvent* self = (sf::Event::JoyButtonEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Button'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Button = ((unsigned int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Width of class  SizeEvent */
#ifndef TOLUA_DISABLE_tolua_get_sf__Event__SizeEvent_unsigned_Width
static int tolua_get_sf__Event__SizeEvent_unsigned_Width(lua_State* tolua_S)
{
  sf::Event::SizeEvent* self = (sf::Event::SizeEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Width'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->Width);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Width of class  SizeEvent */
#ifndef TOLUA_DISABLE_tolua_set_sf__Event__SizeEvent_unsigned_Width
static int tolua_set_sf__Event__SizeEvent_unsigned_Width(lua_State* tolua_S)
{
  sf::Event::SizeEvent* self = (sf::Event::SizeEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Width'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Width = ((unsigned int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Height of class  SizeEvent */
#ifndef TOLUA_DISABLE_tolua_get_sf__Event__SizeEvent_unsigned_Height
static int tolua_get_sf__Event__SizeEvent_unsigned_Height(lua_State* tolua_S)
{
  sf::Event::SizeEvent* self = (sf::Event::SizeEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Height'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->Height);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Height of class  SizeEvent */
#ifndef TOLUA_DISABLE_tolua_set_sf__Event__SizeEvent_unsigned_Height
static int tolua_set_sf__Event__SizeEvent_unsigned_Height(lua_State* tolua_S)
{
  sf::Event::SizeEvent* self = (sf::Event::SizeEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Height'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Height = ((unsigned int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Type of class  sf::Event */
#ifndef TOLUA_DISABLE_tolua_get_sf__Event_Type
static int tolua_get_sf__Event_Type(lua_State* tolua_S)
{
  sf::Event* self = (sf::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Type'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->Type);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Type of class  sf::Event */
#ifndef TOLUA_DISABLE_tolua_set_sf__Event_Type
static int tolua_set_sf__Event_Type(lua_State* tolua_S)
{
  sf::Event* self = (sf::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Type'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Type = ((sf::Event::EventType) (int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Key of class  sf::Event */
#ifndef TOLUA_DISABLE_tolua_get_sf__Event_Key
static int tolua_get_sf__Event_Key(lua_State* tolua_S)
{
  sf::Event* self = (sf::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Key'",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->Key,"sf::Event::KeyEvent");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Key of class  sf::Event */
#ifndef TOLUA_DISABLE_tolua_set_sf__Event_Key
static int tolua_set_sf__Event_Key(lua_State* tolua_S)
{
  sf::Event* self = (sf::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Key'",NULL);
  if (!tolua_isusertype(tolua_S,2,"sf::Event::KeyEvent",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Key = *((sf::Event::KeyEvent*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Text of class  sf::Event */
#ifndef TOLUA_DISABLE_tolua_get_sf__Event_Text
static int tolua_get_sf__Event_Text(lua_State* tolua_S)
{
  sf::Event* self = (sf::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Text'",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->Text,"sf::Event::TextEvent");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Text of class  sf::Event */
#ifndef TOLUA_DISABLE_tolua_set_sf__Event_Text
static int tolua_set_sf__Event_Text(lua_State* tolua_S)
{
  sf::Event* self = (sf::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Text'",NULL);
  if (!tolua_isusertype(tolua_S,2,"sf::Event::TextEvent",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Text = *((sf::Event::TextEvent*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: MouseMove of class  sf::Event */
#ifndef TOLUA_DISABLE_tolua_get_sf__Event_MouseMove
static int tolua_get_sf__Event_MouseMove(lua_State* tolua_S)
{
  sf::Event* self = (sf::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'MouseMove'",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->MouseMove,"sf::Event::MouseMoveEvent");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: MouseMove of class  sf::Event */
#ifndef TOLUA_DISABLE_tolua_set_sf__Event_MouseMove
static int tolua_set_sf__Event_MouseMove(lua_State* tolua_S)
{
  sf::Event* self = (sf::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'MouseMove'",NULL);
  if (!tolua_isusertype(tolua_S,2,"sf::Event::MouseMoveEvent",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->MouseMove = *((sf::Event::MouseMoveEvent*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: MouseButton of class  sf::Event */
#ifndef TOLUA_DISABLE_tolua_get_sf__Event_MouseButton
static int tolua_get_sf__Event_MouseButton(lua_State* tolua_S)
{
  sf::Event* self = (sf::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'MouseButton'",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->MouseButton,"sf::Event::MouseButtonEvent");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: MouseButton of class  sf::Event */
#ifndef TOLUA_DISABLE_tolua_set_sf__Event_MouseButton
static int tolua_set_sf__Event_MouseButton(lua_State* tolua_S)
{
  sf::Event* self = (sf::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'MouseButton'",NULL);
  if (!tolua_isusertype(tolua_S,2,"sf::Event::MouseButtonEvent",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->MouseButton = *((sf::Event::MouseButtonEvent*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: MouseWheel of class  sf::Event */
#ifndef TOLUA_DISABLE_tolua_get_sf__Event_MouseWheel
static int tolua_get_sf__Event_MouseWheel(lua_State* tolua_S)
{
  sf::Event* self = (sf::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'MouseWheel'",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->MouseWheel,"sf::Event::MouseWheelEvent");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: MouseWheel of class  sf::Event */
#ifndef TOLUA_DISABLE_tolua_set_sf__Event_MouseWheel
static int tolua_set_sf__Event_MouseWheel(lua_State* tolua_S)
{
  sf::Event* self = (sf::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'MouseWheel'",NULL);
  if (!tolua_isusertype(tolua_S,2,"sf::Event::MouseWheelEvent",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->MouseWheel = *((sf::Event::MouseWheelEvent*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: JoyMove of class  sf::Event */
#ifndef TOLUA_DISABLE_tolua_get_sf__Event_JoyMove
static int tolua_get_sf__Event_JoyMove(lua_State* tolua_S)
{
  sf::Event* self = (sf::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'JoyMove'",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->JoyMove,"sf::Event::JoyMoveEvent");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: JoyMove of class  sf::Event */
#ifndef TOLUA_DISABLE_tolua_set_sf__Event_JoyMove
static int tolua_set_sf__Event_JoyMove(lua_State* tolua_S)
{
  sf::Event* self = (sf::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'JoyMove'",NULL);
  if (!tolua_isusertype(tolua_S,2,"sf::Event::JoyMoveEvent",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->JoyMove = *((sf::Event::JoyMoveEvent*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: JoyButton of class  sf::Event */
#ifndef TOLUA_DISABLE_tolua_get_sf__Event_JoyButton
static int tolua_get_sf__Event_JoyButton(lua_State* tolua_S)
{
  sf::Event* self = (sf::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'JoyButton'",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->JoyButton,"sf::Event::JoyButtonEvent");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: JoyButton of class  sf::Event */
#ifndef TOLUA_DISABLE_tolua_set_sf__Event_JoyButton
static int tolua_set_sf__Event_JoyButton(lua_State* tolua_S)
{
  sf::Event* self = (sf::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'JoyButton'",NULL);
  if (!tolua_isusertype(tolua_S,2,"sf::Event::JoyButtonEvent",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->JoyButton = *((sf::Event::JoyButtonEvent*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Size of class  sf::Event */
#ifndef TOLUA_DISABLE_tolua_get_sf__Event_Size
static int tolua_get_sf__Event_Size(lua_State* tolua_S)
{
  sf::Event* self = (sf::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Size'",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->Size,"sf::Event::SizeEvent");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Size of class  sf::Event */
#ifndef TOLUA_DISABLE_tolua_set_sf__Event_Size
static int tolua_set_sf__Event_Size(lua_State* tolua_S)
{
  sf::Event* self = (sf::Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Size'",NULL);
  if (!tolua_isusertype(tolua_S,2,"sf::Event::SizeEvent",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Size = *((sf::Event::SizeEvent*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::VideoMode */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_VideoMode_new00
static int tolua_bind_sfml_window_sf_VideoMode_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::VideoMode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::VideoMode* tolua_ret = (sf::VideoMode*)  new sf::VideoMode();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::VideoMode");
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

/* method: new_local of class  sf::VideoMode */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_VideoMode_new00_local
static int tolua_bind_sfml_window_sf_VideoMode_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::VideoMode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::VideoMode* tolua_ret = (sf::VideoMode*)  new sf::VideoMode();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::VideoMode");
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

/* method: new of class  sf::VideoMode */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_VideoMode_new01
static int tolua_bind_sfml_window_sf_VideoMode_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::VideoMode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned int width = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int height = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  unsigned int bits_per_pixel = ((unsigned int)  tolua_tonumber(tolua_S,4,32));
  {
   sf::VideoMode* tolua_ret = (sf::VideoMode*)  new sf::VideoMode(width,height,bits_per_pixel);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::VideoMode");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_window_sf_VideoMode_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::VideoMode */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_VideoMode_new01_local
static int tolua_bind_sfml_window_sf_VideoMode_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::VideoMode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned int width = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int height = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  unsigned int bits_per_pixel = ((unsigned int)  tolua_tonumber(tolua_S,4,32));
  {
   sf::VideoMode* tolua_ret = (sf::VideoMode*)  new sf::VideoMode(width,height,bits_per_pixel);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::VideoMode");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_window_sf_VideoMode_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  sf::VideoMode */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_VideoMode_delete00
static int tolua_bind_sfml_window_sf_VideoMode_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::VideoMode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::VideoMode* self = (sf::VideoMode*)  tolua_tousertype(tolua_S,1,0);
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

/* method: GetDesktopMode of class  sf::VideoMode */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_VideoMode_GetDesktopMode00
static int tolua_bind_sfml_window_sf_VideoMode_GetDesktopMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::VideoMode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::VideoMode tolua_ret = (sf::VideoMode)  sf::VideoMode::GetDesktopMode();
   {
#ifdef __cplusplus
    void* tolua_obj = new sf::VideoMode(tolua_ret);
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::VideoMode");
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(sf::VideoMode));
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::VideoMode");
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetDesktopMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsValid of class  sf::VideoMode */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_VideoMode_IsValid00
static int tolua_bind_sfml_window_sf_VideoMode_IsValid00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::VideoMode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::VideoMode* self = (sf::VideoMode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsValid'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsValid();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsValid'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Width of class  sf::VideoMode */
#ifndef TOLUA_DISABLE_tolua_get_sf__VideoMode_unsigned_Width
static int tolua_get_sf__VideoMode_unsigned_Width(lua_State* tolua_S)
{
  sf::VideoMode* self = (sf::VideoMode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Width'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->Width);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Width of class  sf::VideoMode */
#ifndef TOLUA_DISABLE_tolua_set_sf__VideoMode_unsigned_Width
static int tolua_set_sf__VideoMode_unsigned_Width(lua_State* tolua_S)
{
  sf::VideoMode* self = (sf::VideoMode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Width'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Width = ((unsigned int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Height of class  sf::VideoMode */
#ifndef TOLUA_DISABLE_tolua_get_sf__VideoMode_unsigned_Height
static int tolua_get_sf__VideoMode_unsigned_Height(lua_State* tolua_S)
{
  sf::VideoMode* self = (sf::VideoMode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Height'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->Height);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Height of class  sf::VideoMode */
#ifndef TOLUA_DISABLE_tolua_set_sf__VideoMode_unsigned_Height
static int tolua_set_sf__VideoMode_unsigned_Height(lua_State* tolua_S)
{
  sf::VideoMode* self = (sf::VideoMode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Height'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Height = ((unsigned int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: BitsPerPixel of class  sf::VideoMode */
#ifndef TOLUA_DISABLE_tolua_get_sf__VideoMode_unsigned_BitsPerPixel
static int tolua_get_sf__VideoMode_unsigned_BitsPerPixel(lua_State* tolua_S)
{
  sf::VideoMode* self = (sf::VideoMode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'BitsPerPixel'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->BitsPerPixel);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: BitsPerPixel of class  sf::VideoMode */
#ifndef TOLUA_DISABLE_tolua_set_sf__VideoMode_unsigned_BitsPerPixel
static int tolua_set_sf__VideoMode_unsigned_BitsPerPixel(lua_State* tolua_S)
{
  sf::VideoMode* self = (sf::VideoMode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'BitsPerPixel'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->BitsPerPixel = ((unsigned int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* function: sf::GetFullscreenModes */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_GetFullscreenModes00
static int tolua_bind_sfml_window_sf_GetFullscreenModes00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_istable(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int maxnummodes = ((int)  tolua_tonumber(tolua_S,1,0));
#ifdef __cplusplus
  sf::VideoMode* modes = new sf::VideoMode[maxnummodes];
#else
  sf::VideoMode* modes = (sf::VideoMode*) malloc((maxnummodes)*sizeof(sf::VideoMode));
#endif
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isusertypearray(tolua_S,2,"sf::VideoMode",maxnummodes,0,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<maxnummodes;i++)
    modes[i] = *((sf::VideoMode*)  tolua_tofieldusertype(tolua_S,2,i+1,0));
   }
  }
  {
   int tolua_ret = (int)  sf::GetFullscreenModes(maxnummodes,modes);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
  {
   int i;
   for(i=0; i<maxnummodes;i++)
   {
#ifdef __cplusplus
    void* tolua_obj = new sf::VideoMode(modes[i]);
    tolua_pushfieldusertype_and_takeownership(tolua_S,2,i+1,tolua_obj,"sf::VideoMode");
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)& modes[i],sizeof(sf::VideoMode));
    tolua_pushfieldusertype(tolua_S,2,i+1,tolua_obj,"sf::VideoMode");
#endif
   }
  }
#ifdef __cplusplus
  delete [] modes;
#else
  free(modes);
#endif
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetFullscreenModes'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: DepthBits of class  sf::ContextSettings */
#ifndef TOLUA_DISABLE_tolua_get_sf__ContextSettings_unsigned_DepthBits
static int tolua_get_sf__ContextSettings_unsigned_DepthBits(lua_State* tolua_S)
{
  sf::ContextSettings* self = (sf::ContextSettings*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'DepthBits'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->DepthBits);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: DepthBits of class  sf::ContextSettings */
#ifndef TOLUA_DISABLE_tolua_set_sf__ContextSettings_unsigned_DepthBits
static int tolua_set_sf__ContextSettings_unsigned_DepthBits(lua_State* tolua_S)
{
  sf::ContextSettings* self = (sf::ContextSettings*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'DepthBits'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->DepthBits = ((unsigned int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: StencilBits of class  sf::ContextSettings */
#ifndef TOLUA_DISABLE_tolua_get_sf__ContextSettings_unsigned_StencilBits
static int tolua_get_sf__ContextSettings_unsigned_StencilBits(lua_State* tolua_S)
{
  sf::ContextSettings* self = (sf::ContextSettings*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'StencilBits'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->StencilBits);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: StencilBits of class  sf::ContextSettings */
#ifndef TOLUA_DISABLE_tolua_set_sf__ContextSettings_unsigned_StencilBits
static int tolua_set_sf__ContextSettings_unsigned_StencilBits(lua_State* tolua_S)
{
  sf::ContextSettings* self = (sf::ContextSettings*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'StencilBits'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->StencilBits = ((unsigned int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: AntialiasingLevel of class  sf::ContextSettings */
#ifndef TOLUA_DISABLE_tolua_get_sf__ContextSettings_unsigned_AntialiasingLevel
static int tolua_get_sf__ContextSettings_unsigned_AntialiasingLevel(lua_State* tolua_S)
{
  sf::ContextSettings* self = (sf::ContextSettings*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'AntialiasingLevel'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->AntialiasingLevel);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: AntialiasingLevel of class  sf::ContextSettings */
#ifndef TOLUA_DISABLE_tolua_set_sf__ContextSettings_unsigned_AntialiasingLevel
static int tolua_set_sf__ContextSettings_unsigned_AntialiasingLevel(lua_State* tolua_S)
{
  sf::ContextSettings* self = (sf::ContextSettings*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'AntialiasingLevel'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->AntialiasingLevel = ((unsigned int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: MajorVersion of class  sf::ContextSettings */
#ifndef TOLUA_DISABLE_tolua_get_sf__ContextSettings_unsigned_MajorVersion
static int tolua_get_sf__ContextSettings_unsigned_MajorVersion(lua_State* tolua_S)
{
  sf::ContextSettings* self = (sf::ContextSettings*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'MajorVersion'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->MajorVersion);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: MajorVersion of class  sf::ContextSettings */
#ifndef TOLUA_DISABLE_tolua_set_sf__ContextSettings_unsigned_MajorVersion
static int tolua_set_sf__ContextSettings_unsigned_MajorVersion(lua_State* tolua_S)
{
  sf::ContextSettings* self = (sf::ContextSettings*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'MajorVersion'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->MajorVersion = ((unsigned int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: MinorVersion of class  sf::ContextSettings */
#ifndef TOLUA_DISABLE_tolua_get_sf__ContextSettings_unsigned_MinorVersion
static int tolua_get_sf__ContextSettings_unsigned_MinorVersion(lua_State* tolua_S)
{
  sf::ContextSettings* self = (sf::ContextSettings*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'MinorVersion'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->MinorVersion);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: MinorVersion of class  sf::ContextSettings */
#ifndef TOLUA_DISABLE_tolua_set_sf__ContextSettings_unsigned_MinorVersion
static int tolua_set_sf__ContextSettings_unsigned_MinorVersion(lua_State* tolua_S)
{
  sf::ContextSettings* self = (sf::ContextSettings*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'MinorVersion'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->MinorVersion = ((unsigned int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::ContextSettings */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_ContextSettings_new00
static int tolua_bind_sfml_window_sf_ContextSettings_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::ContextSettings",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned int depth = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int stencil = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  unsigned int antialiasing = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
  unsigned int major = ((unsigned int)  tolua_tonumber(tolua_S,5,2));
  unsigned int minor = ((unsigned int)  tolua_tonumber(tolua_S,6,0));
  {
   sf::ContextSettings* tolua_ret = (sf::ContextSettings*)  new sf::ContextSettings(depth,stencil,antialiasing,major,minor);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::ContextSettings");
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

/* method: new_local of class  sf::ContextSettings */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_ContextSettings_new00_local
static int tolua_bind_sfml_window_sf_ContextSettings_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::ContextSettings",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned int depth = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int stencil = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  unsigned int antialiasing = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
  unsigned int major = ((unsigned int)  tolua_tonumber(tolua_S,5,2));
  unsigned int minor = ((unsigned int)  tolua_tonumber(tolua_S,6,0));
  {
   sf::ContextSettings* tolua_ret = (sf::ContextSettings*)  new sf::ContextSettings(depth,stencil,antialiasing,major,minor);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::ContextSettings");
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

/* method: delete of class  sf::ContextSettings */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_ContextSettings_delete00
static int tolua_bind_sfml_window_sf_ContextSettings_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::ContextSettings",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::ContextSettings* self = (sf::ContextSettings*)  tolua_tousertype(tolua_S,1,0);
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

/* method: new of class  sf::Window */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Window_new00
static int tolua_bind_sfml_window_sf_Window_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Window* tolua_ret = (sf::Window*)  new sf::Window();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Window");
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

/* method: new_local of class  sf::Window */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Window_new00_local
static int tolua_bind_sfml_window_sf_Window_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Window* tolua_ret = (sf::Window*)  new sf::Window();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Window");
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

/* method: new of class  sf::Window */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Window_new01
static int tolua_bind_sfml_window_sf_Window_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Window",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"sf::VideoMode",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::VideoMode mode = *((sf::VideoMode*)  tolua_tousertype(tolua_S,2,0));
  const std::string title = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  unsigned long style = ((unsigned long)  tolua_tonumber(tolua_S,4,sf::Style::Default));
  {
   sf::Window* tolua_ret = (sf::Window*)  new sf::Window(mode,title,style);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Window");
   tolua_pushcppstring(tolua_S,(const char*)title);
  }
 }
 return 2;
tolua_lerror:
 return tolua_bind_sfml_window_sf_Window_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::Window */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Window_new01_local
static int tolua_bind_sfml_window_sf_Window_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Window",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"sf::VideoMode",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::VideoMode mode = *((sf::VideoMode*)  tolua_tousertype(tolua_S,2,0));
  const std::string title = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  unsigned long style = ((unsigned long)  tolua_tonumber(tolua_S,4,sf::Style::Default));
  {
   sf::Window* tolua_ret = (sf::Window*)  new sf::Window(mode,title,style);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Window");
   tolua_pushcppstring(tolua_S,(const char*)title);
  }
 }
 return 2;
tolua_lerror:
 return tolua_bind_sfml_window_sf_Window_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::Window */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Window_new02
static int tolua_bind_sfml_window_sf_Window_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Window",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"sf::VideoMode",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"const sf::ContextSettings",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::VideoMode mode = *((sf::VideoMode*)  tolua_tousertype(tolua_S,2,0));
  const std::string title = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  unsigned long style = ((unsigned long)  tolua_tonumber(tolua_S,4,0));
  const sf::ContextSettings* settings = ((const sf::ContextSettings*)  tolua_tousertype(tolua_S,5,0));
  {
   sf::Window* tolua_ret = (sf::Window*)  new sf::Window(mode,title,style,*settings);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Window");
   tolua_pushcppstring(tolua_S,(const char*)title);
  }
 }
 return 2;
tolua_lerror:
 return tolua_bind_sfml_window_sf_Window_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::Window */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Window_new02_local
static int tolua_bind_sfml_window_sf_Window_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Window",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"sf::VideoMode",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"const sf::ContextSettings",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::VideoMode mode = *((sf::VideoMode*)  tolua_tousertype(tolua_S,2,0));
  const std::string title = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  unsigned long style = ((unsigned long)  tolua_tonumber(tolua_S,4,0));
  const sf::ContextSettings* settings = ((const sf::ContextSettings*)  tolua_tousertype(tolua_S,5,0));
  {
   sf::Window* tolua_ret = (sf::Window*)  new sf::Window(mode,title,style,*settings);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Window");
   tolua_pushcppstring(tolua_S,(const char*)title);
  }
 }
 return 2;
tolua_lerror:
 return tolua_bind_sfml_window_sf_Window_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  sf::Window */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Window_delete00
static int tolua_bind_sfml_window_sf_Window_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Window* self = (sf::Window*)  tolua_tousertype(tolua_S,1,0);
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

/* method: Create of class  sf::Window */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Window_Create00
static int tolua_bind_sfml_window_sf_Window_Create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Window",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"sf::VideoMode",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Window* self = (sf::Window*)  tolua_tousertype(tolua_S,1,0);
  sf::VideoMode mode = *((sf::VideoMode*)  tolua_tousertype(tolua_S,2,0));
  const std::string title = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  unsigned long style = ((unsigned long)  tolua_tonumber(tolua_S,4,sf::Style::Default));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Create'",NULL);
#endif
  {
   self->Create(mode,title,style);
   tolua_pushcppstring(tolua_S,(const char*)title);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Create of class  sf::Window */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Window_Create01
static int tolua_bind_sfml_window_sf_Window_Create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Window",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"sf::VideoMode",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"const sf::ContextSettings",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::Window* self = (sf::Window*)  tolua_tousertype(tolua_S,1,0);
  sf::VideoMode mode = *((sf::VideoMode*)  tolua_tousertype(tolua_S,2,0));
  const std::string title = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  unsigned long style = ((unsigned long)  tolua_tonumber(tolua_S,4,0));
  const sf::ContextSettings* settings = ((const sf::ContextSettings*)  tolua_tousertype(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Create'",NULL);
#endif
  {
   self->Create(mode,title,style,*settings);
   tolua_pushcppstring(tolua_S,(const char*)title);
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_window_sf_Window_Create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Close of class  sf::Window */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Window_Close00
static int tolua_bind_sfml_window_sf_Window_Close00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Window* self = (sf::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Close'",NULL);
#endif
  {
   self->Close();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Close'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsOpened of class  sf::Window */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Window_IsOpened00
static int tolua_bind_sfml_window_sf_Window_IsOpened00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Window* self = (const sf::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsOpened'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsOpened();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsOpened'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetWidth of class  sf::Window */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Window_GetWidth00
static int tolua_bind_sfml_window_sf_Window_GetWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Window* self = (const sf::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetWidth'",NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->GetWidth();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetHeight of class  sf::Window */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Window_GetHeight00
static int tolua_bind_sfml_window_sf_Window_GetHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Window* self = (const sf::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetHeight'",NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->GetHeight();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetHeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSettings of class  sf::Window */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Window_GetSettings00
static int tolua_bind_sfml_window_sf_Window_GetSettings00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Window* self = (const sf::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetSettings'",NULL);
#endif
  {
   sf::ContextSettings& tolua_ret = (sf::ContextSettings&)  self->GetSettings();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"sf::ContextSettings");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetSettings'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: PollEvent of class  sf::Window */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Window_PollEvent00
static int tolua_bind_sfml_window_sf_Window_PollEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Window",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"sf::Event",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Window* self = (sf::Window*)  tolua_tousertype(tolua_S,1,0);
  sf::Event* event = ((sf::Event*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'PollEvent'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->PollEvent(*event);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PollEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: WaitEvent of class  sf::Window */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Window_WaitEvent00
static int tolua_bind_sfml_window_sf_Window_WaitEvent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Window",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"sf::Event",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Window* self = (sf::Window*)  tolua_tousertype(tolua_S,1,0);
  sf::Event* event = ((sf::Event*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'WaitEvent'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->WaitEvent(*event);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'WaitEvent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: EnableVerticalSync of class  sf::Window */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Window_EnableVerticalSync00
static int tolua_bind_sfml_window_sf_Window_EnableVerticalSync00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Window",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Window* self = (sf::Window*)  tolua_tousertype(tolua_S,1,0);
  bool tolua_var_1 = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'EnableVerticalSync'",NULL);
#endif
  {
   self->EnableVerticalSync(tolua_var_1);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'EnableVerticalSync'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ShowMouseCursor of class  sf::Window */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Window_ShowMouseCursor00
static int tolua_bind_sfml_window_sf_Window_ShowMouseCursor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Window",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Window* self = (sf::Window*)  tolua_tousertype(tolua_S,1,0);
  bool tolua_var_2 = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ShowMouseCursor'",NULL);
#endif
  {
   self->ShowMouseCursor(tolua_var_2);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ShowMouseCursor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetCursorPosition of class  sf::Window */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Window_SetCursorPosition00
static int tolua_bind_sfml_window_sf_Window_SetCursorPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Window",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Window* self = (sf::Window*)  tolua_tousertype(tolua_S,1,0);
  unsigned int x = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int y = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetCursorPosition'",NULL);
#endif
  {
   self->SetCursorPosition(x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetCursorPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetPosition of class  sf::Window */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Window_SetPosition00
static int tolua_bind_sfml_window_sf_Window_SetPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Window",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Window* self = (sf::Window*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
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

/* method: SetSize of class  sf::Window */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Window_SetSize00
static int tolua_bind_sfml_window_sf_Window_SetSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Window",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Window* self = (sf::Window*)  tolua_tousertype(tolua_S,1,0);
  unsigned int width = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int height = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetSize'",NULL);
#endif
  {
   self->SetSize(width,height);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetTitle of class  sf::Window */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Window_SetTitle00
static int tolua_bind_sfml_window_sf_Window_SetTitle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Window",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Window* self = (sf::Window*)  tolua_tousertype(tolua_S,1,0);
  const std::string title = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetTitle'",NULL);
#endif
  {
   self->SetTitle(title);
   tolua_pushcppstring(tolua_S,(const char*)title);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetTitle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Show of class  sf::Window */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Window_Show00
static int tolua_bind_sfml_window_sf_Window_Show00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Window",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Window* self = (sf::Window*)  tolua_tousertype(tolua_S,1,0);
  bool tolua_var_3 = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Show'",NULL);
#endif
  {
   self->Show(tolua_var_3);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Show'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: EnableKeyRepeat of class  sf::Window */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Window_EnableKeyRepeat00
static int tolua_bind_sfml_window_sf_Window_EnableKeyRepeat00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Window",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Window* self = (sf::Window*)  tolua_tousertype(tolua_S,1,0);
  bool tolua_var_4 = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'EnableKeyRepeat'",NULL);
#endif
  {
   self->EnableKeyRepeat(tolua_var_4);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'EnableKeyRepeat'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetActive of class  sf::Window */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Window_SetActive00
static int tolua_bind_sfml_window_sf_Window_SetActive00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Window",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Window* self = (const sf::Window*)  tolua_tousertype(tolua_S,1,0);
  bool active = ((bool)  tolua_toboolean(tolua_S,2,true));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetActive'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->SetActive(active);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetActive'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Display of class  sf::Window */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Window_Display00
static int tolua_bind_sfml_window_sf_Window_Display00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Window* self = (sf::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Display'",NULL);
#endif
  {
   self->Display();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Display'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetInput of class  sf::Window */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Window_GetInput00
static int tolua_bind_sfml_window_sf_Window_GetInput00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Window* self = (const sf::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetInput'",NULL);
#endif
  {
   const sf::Input& tolua_ret = (const sf::Input&)  self->GetInput();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const sf::Input");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetInput'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetFramerateLimit of class  sf::Window */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Window_SetFramerateLimit00
static int tolua_bind_sfml_window_sf_Window_SetFramerateLimit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Window",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Window* self = (sf::Window*)  tolua_tousertype(tolua_S,1,0);
  unsigned int limit = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetFramerateLimit'",NULL);
#endif
  {
   self->SetFramerateLimit(limit);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetFramerateLimit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetFrameTime of class  sf::Window */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Window_GetFrameTime00
static int tolua_bind_sfml_window_sf_Window_GetFrameTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Window",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Window* self = (const sf::Window*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetFrameTime'",NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->GetFrameTime();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetFrameTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetJoystickThreshold of class  sf::Window */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Window_SetJoystickThreshold00
static int tolua_bind_sfml_window_sf_Window_SetJoystickThreshold00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Window",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Window* self = (sf::Window*)  tolua_tousertype(tolua_S,1,0);
  float threshold = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetJoystickThreshold'",NULL);
#endif
  {
   self->SetJoystickThreshold(threshold);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetJoystickThreshold'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::Input */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Input_new00
static int tolua_bind_sfml_window_sf_Input_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Input",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Input* tolua_ret = (sf::Input*)  new sf::Input();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Input");
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

/* method: new_local of class  sf::Input */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Input_new00_local
static int tolua_bind_sfml_window_sf_Input_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Input",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Input* tolua_ret = (sf::Input*)  new sf::Input();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Input");
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

/* method: IsKeyDown of class  sf::Input */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Input_IsKeyDown00
static int tolua_bind_sfml_window_sf_Input_IsKeyDown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Input",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Input* self = (const sf::Input*)  tolua_tousertype(tolua_S,1,0);
  sf::Key::Code key = ((sf::Key::Code) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsKeyDown'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsKeyDown(key);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsKeyDown'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsMouseButtonDown of class  sf::Input */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Input_IsMouseButtonDown00
static int tolua_bind_sfml_window_sf_Input_IsMouseButtonDown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Input",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Input* self = (const sf::Input*)  tolua_tousertype(tolua_S,1,0);
  sf::Mouse::Button button = ((sf::Mouse::Button) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsMouseButtonDown'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsMouseButtonDown(button);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsMouseButtonDown'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsJoystickButtonDown of class  sf::Input */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Input_IsJoystickButtonDown00
static int tolua_bind_sfml_window_sf_Input_IsJoystickButtonDown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Input",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Input* self = (const sf::Input*)  tolua_tousertype(tolua_S,1,0);
  unsigned int joystick = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int button = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsJoystickButtonDown'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsJoystickButtonDown(joystick,button);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsJoystickButtonDown'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetMouseX of class  sf::Input */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Input_GetMouseX00
static int tolua_bind_sfml_window_sf_Input_GetMouseX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Input",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Input* self = (const sf::Input*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetMouseX'",NULL);
#endif
  {
   int tolua_ret = (int)  self->GetMouseX();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetMouseX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetMouseY of class  sf::Input */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Input_GetMouseY00
static int tolua_bind_sfml_window_sf_Input_GetMouseY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Input",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Input* self = (const sf::Input*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetMouseY'",NULL);
#endif
  {
   int tolua_ret = (int)  self->GetMouseY();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetMouseY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetJoystickAxis of class  sf::Input */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_window_sf_Input_GetJoystickAxis00
static int tolua_bind_sfml_window_sf_Input_GetJoystickAxis00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Input",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Input* self = (const sf::Input*)  tolua_tousertype(tolua_S,1,0);
  unsigned int joystick = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  sf::Joy::Axis axis = ((sf::Joy::Axis) (int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetJoystickAxis'",NULL);
#endif
  {
   float tolua_ret = (float)  self->GetJoystickAxis(joystick,axis);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetJoystickAxis'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_bind_sfml_window_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"sf",0);
  tolua_beginmodule(tolua_S,"sf");
   tolua_module(tolua_S,"Key",0);
   tolua_beginmodule(tolua_S,"Key");
    tolua_constant(tolua_S,"A",sf::Key::A);
    tolua_constant(tolua_S,"B",sf::Key::B);
    tolua_constant(tolua_S,"C",sf::Key::C);
    tolua_constant(tolua_S,"D",sf::Key::D);
    tolua_constant(tolua_S,"E",sf::Key::E);
    tolua_constant(tolua_S,"F",sf::Key::F);
    tolua_constant(tolua_S,"G",sf::Key::G);
    tolua_constant(tolua_S,"H",sf::Key::H);
    tolua_constant(tolua_S,"I",sf::Key::I);
    tolua_constant(tolua_S,"J",sf::Key::J);
    tolua_constant(tolua_S,"K",sf::Key::K);
    tolua_constant(tolua_S,"L",sf::Key::L);
    tolua_constant(tolua_S,"M",sf::Key::M);
    tolua_constant(tolua_S,"N",sf::Key::N);
    tolua_constant(tolua_S,"O",sf::Key::O);
    tolua_constant(tolua_S,"P",sf::Key::P);
    tolua_constant(tolua_S,"Q",sf::Key::Q);
    tolua_constant(tolua_S,"R",sf::Key::R);
    tolua_constant(tolua_S,"S",sf::Key::S);
    tolua_constant(tolua_S,"T",sf::Key::T);
    tolua_constant(tolua_S,"U",sf::Key::U);
    tolua_constant(tolua_S,"V",sf::Key::V);
    tolua_constant(tolua_S,"W",sf::Key::W);
    tolua_constant(tolua_S,"X",sf::Key::X);
    tolua_constant(tolua_S,"Y",sf::Key::Y);
    tolua_constant(tolua_S,"Z",sf::Key::Z);
    tolua_constant(tolua_S,"Num0",sf::Key::Num0);
    tolua_constant(tolua_S,"Num1",sf::Key::Num1);
    tolua_constant(tolua_S,"Num2",sf::Key::Num2);
    tolua_constant(tolua_S,"Num3",sf::Key::Num3);
    tolua_constant(tolua_S,"Num4",sf::Key::Num4);
    tolua_constant(tolua_S,"Num5",sf::Key::Num5);
    tolua_constant(tolua_S,"Num6",sf::Key::Num6);
    tolua_constant(tolua_S,"Num7",sf::Key::Num7);
    tolua_constant(tolua_S,"Num8",sf::Key::Num8);
    tolua_constant(tolua_S,"Num9",sf::Key::Num9);
    tolua_constant(tolua_S,"Escape",sf::Key::Escape);
    tolua_constant(tolua_S,"LControl",sf::Key::LControl);
    tolua_constant(tolua_S,"LShift",sf::Key::LShift);
    tolua_constant(tolua_S,"LAlt",sf::Key::LAlt);
    tolua_constant(tolua_S,"LSystem",sf::Key::LSystem);
    tolua_constant(tolua_S,"RControl",sf::Key::RControl);
    tolua_constant(tolua_S,"RShift",sf::Key::RShift);
    tolua_constant(tolua_S,"RAlt",sf::Key::RAlt);
    tolua_constant(tolua_S,"RSystem",sf::Key::RSystem);
    tolua_constant(tolua_S,"Menu",sf::Key::Menu);
    tolua_constant(tolua_S,"LBracket",sf::Key::LBracket);
    tolua_constant(tolua_S,"RBracket",sf::Key::RBracket);
    tolua_constant(tolua_S,"SemiColon",sf::Key::SemiColon);
    tolua_constant(tolua_S,"Comma",sf::Key::Comma);
    tolua_constant(tolua_S,"Period",sf::Key::Period);
    tolua_constant(tolua_S,"Quote",sf::Key::Quote);
    tolua_constant(tolua_S,"Slash",sf::Key::Slash);
    tolua_constant(tolua_S,"BackSlash",sf::Key::BackSlash);
    tolua_constant(tolua_S,"Tilde",sf::Key::Tilde);
    tolua_constant(tolua_S,"Equal",sf::Key::Equal);
    tolua_constant(tolua_S,"Dash",sf::Key::Dash);
    tolua_constant(tolua_S,"Space",sf::Key::Space);
    tolua_constant(tolua_S,"Return",sf::Key::Return);
    tolua_constant(tolua_S,"Back",sf::Key::Back);
    tolua_constant(tolua_S,"Tab",sf::Key::Tab);
    tolua_constant(tolua_S,"PageUp",sf::Key::PageUp);
    tolua_constant(tolua_S,"PageDown",sf::Key::PageDown);
    tolua_constant(tolua_S,"End",sf::Key::End);
    tolua_constant(tolua_S,"Home",sf::Key::Home);
    tolua_constant(tolua_S,"Insert",sf::Key::Insert);
    tolua_constant(tolua_S,"Delete",sf::Key::Delete);
    tolua_constant(tolua_S,"Add",sf::Key::Add);
    tolua_constant(tolua_S,"Subtract",sf::Key::Subtract);
    tolua_constant(tolua_S,"Multiply",sf::Key::Multiply);
    tolua_constant(tolua_S,"Divide",sf::Key::Divide);
    tolua_constant(tolua_S,"Left",sf::Key::Left);
    tolua_constant(tolua_S,"Right",sf::Key::Right);
    tolua_constant(tolua_S,"Up",sf::Key::Up);
    tolua_constant(tolua_S,"Down",sf::Key::Down);
    tolua_constant(tolua_S,"Numpad0",sf::Key::Numpad0);
    tolua_constant(tolua_S,"Numpad1",sf::Key::Numpad1);
    tolua_constant(tolua_S,"Numpad2",sf::Key::Numpad2);
    tolua_constant(tolua_S,"Numpad3",sf::Key::Numpad3);
    tolua_constant(tolua_S,"Numpad4",sf::Key::Numpad4);
    tolua_constant(tolua_S,"Numpad5",sf::Key::Numpad5);
    tolua_constant(tolua_S,"Numpad6",sf::Key::Numpad6);
    tolua_constant(tolua_S,"Numpad7",sf::Key::Numpad7);
    tolua_constant(tolua_S,"Numpad8",sf::Key::Numpad8);
    tolua_constant(tolua_S,"Numpad9",sf::Key::Numpad9);
    tolua_constant(tolua_S,"F1",sf::Key::F1);
    tolua_constant(tolua_S,"F2",sf::Key::F2);
    tolua_constant(tolua_S,"F3",sf::Key::F3);
    tolua_constant(tolua_S,"F4",sf::Key::F4);
    tolua_constant(tolua_S,"F5",sf::Key::F5);
    tolua_constant(tolua_S,"F6",sf::Key::F6);
    tolua_constant(tolua_S,"F7",sf::Key::F7);
    tolua_constant(tolua_S,"F8",sf::Key::F8);
    tolua_constant(tolua_S,"F9",sf::Key::F9);
    tolua_constant(tolua_S,"F10",sf::Key::F10);
    tolua_constant(tolua_S,"F11",sf::Key::F11);
    tolua_constant(tolua_S,"F12",sf::Key::F12);
    tolua_constant(tolua_S,"F13",sf::Key::F13);
    tolua_constant(tolua_S,"F14",sf::Key::F14);
    tolua_constant(tolua_S,"F15",sf::Key::F15);
    tolua_constant(tolua_S,"Pause",sf::Key::Pause);
    tolua_constant(tolua_S,"Count",sf::Key::Count);
   tolua_endmodule(tolua_S);
   tolua_module(tolua_S,"Mouse",0);
   tolua_beginmodule(tolua_S,"Mouse");
    tolua_constant(tolua_S,"Left",sf::Mouse::Left);
    tolua_constant(tolua_S,"Right",sf::Mouse::Right);
    tolua_constant(tolua_S,"Middle",sf::Mouse::Middle);
    tolua_constant(tolua_S,"XButton1",sf::Mouse::XButton1);
    tolua_constant(tolua_S,"XButton2",sf::Mouse::XButton2);
    tolua_constant(tolua_S,"ButtonCount",sf::Mouse::ButtonCount);
   tolua_endmodule(tolua_S);
   tolua_module(tolua_S,"Joy",0);
   tolua_beginmodule(tolua_S,"Joy");
    tolua_constant(tolua_S,"AxisX",sf::Joy::AxisX);
    tolua_constant(tolua_S,"AxisY",sf::Joy::AxisY);
    tolua_constant(tolua_S,"AxisZ",sf::Joy::AxisZ);
    tolua_constant(tolua_S,"AxisR",sf::Joy::AxisR);
    tolua_constant(tolua_S,"AxisU",sf::Joy::AxisU);
    tolua_constant(tolua_S,"AxisV",sf::Joy::AxisV);
    tolua_constant(tolua_S,"AxisPOV",sf::Joy::AxisPOV);
    tolua_constant(tolua_S,"Count",sf::Joy::Count);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Event","sf::Event","",tolua_collect_sf__Event);
   #else
   tolua_cclass(tolua_S,"Event","sf::Event","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Event");
    tolua_function(tolua_S,"new",tolua_bind_sfml_window_sf_Event_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_window_sf_Event_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_window_sf_Event_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_sfml_window_sf_Event_delete00);
    tolua_cclass(tolua_S,"KeyEvent","sf::Event::KeyEvent","",NULL);
    tolua_beginmodule(tolua_S,"KeyEvent");
     tolua_variable(tolua_S,"Code",tolua_get_sf__Event__KeyEvent_Code,tolua_set_sf__Event__KeyEvent_Code);
     tolua_variable(tolua_S,"Alt",tolua_get_sf__Event__KeyEvent_Alt,tolua_set_sf__Event__KeyEvent_Alt);
     tolua_variable(tolua_S,"Control",tolua_get_sf__Event__KeyEvent_Control,tolua_set_sf__Event__KeyEvent_Control);
     tolua_variable(tolua_S,"Shift",tolua_get_sf__Event__KeyEvent_Shift,tolua_set_sf__Event__KeyEvent_Shift);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"TextEvent","sf::Event::TextEvent","",NULL);
    tolua_beginmodule(tolua_S,"TextEvent");
     tolua_variable(tolua_S,"Unicode",tolua_get_sf__Event__TextEvent_unsigned_Unicode,tolua_set_sf__Event__TextEvent_unsigned_Unicode);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"MouseMoveEvent","sf::Event::MouseMoveEvent","",NULL);
    tolua_beginmodule(tolua_S,"MouseMoveEvent");
     tolua_variable(tolua_S,"X",tolua_get_sf__Event__MouseMoveEvent_X,tolua_set_sf__Event__MouseMoveEvent_X);
     tolua_variable(tolua_S,"Y",tolua_get_sf__Event__MouseMoveEvent_Y,tolua_set_sf__Event__MouseMoveEvent_Y);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"MouseButtonEvent","sf::Event::MouseButtonEvent","",NULL);
    tolua_beginmodule(tolua_S,"MouseButtonEvent");
     tolua_variable(tolua_S,"Button",tolua_get_sf__Event__MouseButtonEvent_Button,tolua_set_sf__Event__MouseButtonEvent_Button);
     tolua_variable(tolua_S,"X",tolua_get_sf__Event__MouseButtonEvent_X,tolua_set_sf__Event__MouseButtonEvent_X);
     tolua_variable(tolua_S,"Y",tolua_get_sf__Event__MouseButtonEvent_Y,tolua_set_sf__Event__MouseButtonEvent_Y);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"MouseWheelEvent","sf::Event::MouseWheelEvent","",NULL);
    tolua_beginmodule(tolua_S,"MouseWheelEvent");
     tolua_variable(tolua_S,"Delta",tolua_get_sf__Event__MouseWheelEvent_Delta,tolua_set_sf__Event__MouseWheelEvent_Delta);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"JoyMoveEvent","sf::Event::JoyMoveEvent","",NULL);
    tolua_beginmodule(tolua_S,"JoyMoveEvent");
     tolua_variable(tolua_S,"JoystickId",tolua_get_sf__Event__JoyMoveEvent_unsigned_JoystickId,tolua_set_sf__Event__JoyMoveEvent_unsigned_JoystickId);
     tolua_variable(tolua_S,"Axis",tolua_get_sf__Event__JoyMoveEvent_Axis,tolua_set_sf__Event__JoyMoveEvent_Axis);
     tolua_variable(tolua_S,"Position",tolua_get_sf__Event__JoyMoveEvent_Position,tolua_set_sf__Event__JoyMoveEvent_Position);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"JoyButtonEvent","sf::Event::JoyButtonEvent","",NULL);
    tolua_beginmodule(tolua_S,"JoyButtonEvent");
     tolua_variable(tolua_S,"JoystickId",tolua_get_sf__Event__JoyButtonEvent_unsigned_JoystickId,tolua_set_sf__Event__JoyButtonEvent_unsigned_JoystickId);
     tolua_variable(tolua_S,"Button",tolua_get_sf__Event__JoyButtonEvent_unsigned_Button,tolua_set_sf__Event__JoyButtonEvent_unsigned_Button);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"SizeEvent","sf::Event::SizeEvent","",NULL);
    tolua_beginmodule(tolua_S,"SizeEvent");
     tolua_variable(tolua_S,"Width",tolua_get_sf__Event__SizeEvent_unsigned_Width,tolua_set_sf__Event__SizeEvent_unsigned_Width);
     tolua_variable(tolua_S,"Height",tolua_get_sf__Event__SizeEvent_unsigned_Height,tolua_set_sf__Event__SizeEvent_unsigned_Height);
    tolua_endmodule(tolua_S);
    tolua_constant(tolua_S,"Closed",sf::Event::Closed);
    tolua_constant(tolua_S,"Resized",sf::Event::Resized);
    tolua_constant(tolua_S,"LostFocus",sf::Event::LostFocus);
    tolua_constant(tolua_S,"GainedFocus",sf::Event::GainedFocus);
    tolua_constant(tolua_S,"TextEntered",sf::Event::TextEntered);
    tolua_constant(tolua_S,"KeyPressed",sf::Event::KeyPressed);
    tolua_constant(tolua_S,"KeyReleased",sf::Event::KeyReleased);
    tolua_constant(tolua_S,"MouseWheelMoved",sf::Event::MouseWheelMoved);
    tolua_constant(tolua_S,"MouseButtonPressed",sf::Event::MouseButtonPressed);
    tolua_constant(tolua_S,"MouseButtonReleased",sf::Event::MouseButtonReleased);
    tolua_constant(tolua_S,"MouseMoved",sf::Event::MouseMoved);
    tolua_constant(tolua_S,"MouseEntered",sf::Event::MouseEntered);
    tolua_constant(tolua_S,"MouseLeft",sf::Event::MouseLeft);
    tolua_constant(tolua_S,"JoyButtonPressed",sf::Event::JoyButtonPressed);
    tolua_constant(tolua_S,"JoyButtonReleased",sf::Event::JoyButtonReleased);
    tolua_constant(tolua_S,"JoyMoved",sf::Event::JoyMoved);
    tolua_variable(tolua_S,"Type",tolua_get_sf__Event_Type,tolua_set_sf__Event_Type);
    tolua_variable(tolua_S,"Key",tolua_get_sf__Event_Key,tolua_set_sf__Event_Key);
    tolua_variable(tolua_S,"Text",tolua_get_sf__Event_Text,tolua_set_sf__Event_Text);
    tolua_variable(tolua_S,"MouseMove",tolua_get_sf__Event_MouseMove,tolua_set_sf__Event_MouseMove);
    tolua_variable(tolua_S,"MouseButton",tolua_get_sf__Event_MouseButton,tolua_set_sf__Event_MouseButton);
    tolua_variable(tolua_S,"MouseWheel",tolua_get_sf__Event_MouseWheel,tolua_set_sf__Event_MouseWheel);
    tolua_variable(tolua_S,"JoyMove",tolua_get_sf__Event_JoyMove,tolua_set_sf__Event_JoyMove);
    tolua_variable(tolua_S,"JoyButton",tolua_get_sf__Event_JoyButton,tolua_set_sf__Event_JoyButton);
    tolua_variable(tolua_S,"Size",tolua_get_sf__Event_Size,tolua_set_sf__Event_Size);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"VideoMode","sf::VideoMode","",tolua_collect_sf__VideoMode);
   #else
   tolua_cclass(tolua_S,"VideoMode","sf::VideoMode","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"VideoMode");
    tolua_function(tolua_S,"new",tolua_bind_sfml_window_sf_VideoMode_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_window_sf_VideoMode_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_window_sf_VideoMode_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_window_sf_VideoMode_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_window_sf_VideoMode_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_window_sf_VideoMode_new01_local);
    tolua_function(tolua_S,"delete",tolua_bind_sfml_window_sf_VideoMode_delete00);
    tolua_function(tolua_S,"GetDesktopMode",tolua_bind_sfml_window_sf_VideoMode_GetDesktopMode00);
    tolua_function(tolua_S,"IsValid",tolua_bind_sfml_window_sf_VideoMode_IsValid00);
    tolua_variable(tolua_S,"Width",tolua_get_sf__VideoMode_unsigned_Width,tolua_set_sf__VideoMode_unsigned_Width);
    tolua_variable(tolua_S,"Height",tolua_get_sf__VideoMode_unsigned_Height,tolua_set_sf__VideoMode_unsigned_Height);
    tolua_variable(tolua_S,"BitsPerPixel",tolua_get_sf__VideoMode_unsigned_BitsPerPixel,tolua_set_sf__VideoMode_unsigned_BitsPerPixel);
   tolua_endmodule(tolua_S);
   tolua_function(tolua_S,"GetFullscreenModes",tolua_bind_sfml_window_sf_GetFullscreenModes00);
   tolua_constant(tolua_S,"Style::None",sf::Style::None);
   tolua_constant(tolua_S,"Style::Titlebar",sf::Style::Titlebar);
   tolua_constant(tolua_S,"Style::Resize",sf::Style::Resize);
   tolua_constant(tolua_S,"Style::Close",sf::Style::Close);
   tolua_constant(tolua_S,"Style::Fullscreen",sf::Style::Fullscreen);
   tolua_constant(tolua_S,"Style::Default",sf::Style::Default);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"ContextSettings","sf::ContextSettings","",tolua_collect_sf__ContextSettings);
   #else
   tolua_cclass(tolua_S,"ContextSettings","sf::ContextSettings","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"ContextSettings");
    tolua_variable(tolua_S,"DepthBits",tolua_get_sf__ContextSettings_unsigned_DepthBits,tolua_set_sf__ContextSettings_unsigned_DepthBits);
    tolua_variable(tolua_S,"StencilBits",tolua_get_sf__ContextSettings_unsigned_StencilBits,tolua_set_sf__ContextSettings_unsigned_StencilBits);
    tolua_variable(tolua_S,"AntialiasingLevel",tolua_get_sf__ContextSettings_unsigned_AntialiasingLevel,tolua_set_sf__ContextSettings_unsigned_AntialiasingLevel);
    tolua_variable(tolua_S,"MajorVersion",tolua_get_sf__ContextSettings_unsigned_MajorVersion,tolua_set_sf__ContextSettings_unsigned_MajorVersion);
    tolua_variable(tolua_S,"MinorVersion",tolua_get_sf__ContextSettings_unsigned_MinorVersion,tolua_set_sf__ContextSettings_unsigned_MinorVersion);
    tolua_function(tolua_S,"new",tolua_bind_sfml_window_sf_ContextSettings_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_window_sf_ContextSettings_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_window_sf_ContextSettings_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_sfml_window_sf_ContextSettings_delete00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Window","sf::Window","",tolua_collect_sf__Window);
   #else
   tolua_cclass(tolua_S,"Window","sf::Window","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Window");
    tolua_function(tolua_S,"new",tolua_bind_sfml_window_sf_Window_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_window_sf_Window_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_window_sf_Window_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_window_sf_Window_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_window_sf_Window_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_window_sf_Window_new01_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_window_sf_Window_new02);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_window_sf_Window_new02_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_window_sf_Window_new02_local);
    tolua_function(tolua_S,"delete",tolua_bind_sfml_window_sf_Window_delete00);
    tolua_function(tolua_S,"Create",tolua_bind_sfml_window_sf_Window_Create00);
    tolua_function(tolua_S,"Create",tolua_bind_sfml_window_sf_Window_Create01);
    tolua_function(tolua_S,"Close",tolua_bind_sfml_window_sf_Window_Close00);
    tolua_function(tolua_S,"IsOpened",tolua_bind_sfml_window_sf_Window_IsOpened00);
    tolua_function(tolua_S,"GetWidth",tolua_bind_sfml_window_sf_Window_GetWidth00);
    tolua_function(tolua_S,"GetHeight",tolua_bind_sfml_window_sf_Window_GetHeight00);
    tolua_function(tolua_S,"GetSettings",tolua_bind_sfml_window_sf_Window_GetSettings00);
    tolua_function(tolua_S,"PollEvent",tolua_bind_sfml_window_sf_Window_PollEvent00);
    tolua_function(tolua_S,"WaitEvent",tolua_bind_sfml_window_sf_Window_WaitEvent00);
    tolua_function(tolua_S,"EnableVerticalSync",tolua_bind_sfml_window_sf_Window_EnableVerticalSync00);
    tolua_function(tolua_S,"ShowMouseCursor",tolua_bind_sfml_window_sf_Window_ShowMouseCursor00);
    tolua_function(tolua_S,"SetCursorPosition",tolua_bind_sfml_window_sf_Window_SetCursorPosition00);
    tolua_function(tolua_S,"SetPosition",tolua_bind_sfml_window_sf_Window_SetPosition00);
    tolua_function(tolua_S,"SetSize",tolua_bind_sfml_window_sf_Window_SetSize00);
    tolua_function(tolua_S,"SetTitle",tolua_bind_sfml_window_sf_Window_SetTitle00);
    tolua_function(tolua_S,"Show",tolua_bind_sfml_window_sf_Window_Show00);
    tolua_function(tolua_S,"EnableKeyRepeat",tolua_bind_sfml_window_sf_Window_EnableKeyRepeat00);
    tolua_function(tolua_S,"SetActive",tolua_bind_sfml_window_sf_Window_SetActive00);
    tolua_function(tolua_S,"Display",tolua_bind_sfml_window_sf_Window_Display00);
    tolua_function(tolua_S,"GetInput",tolua_bind_sfml_window_sf_Window_GetInput00);
    tolua_function(tolua_S,"SetFramerateLimit",tolua_bind_sfml_window_sf_Window_SetFramerateLimit00);
    tolua_function(tolua_S,"GetFrameTime",tolua_bind_sfml_window_sf_Window_GetFrameTime00);
    tolua_function(tolua_S,"SetJoystickThreshold",tolua_bind_sfml_window_sf_Window_SetJoystickThreshold00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Input","sf::Input","",tolua_collect_sf__Input);
   #else
   tolua_cclass(tolua_S,"Input","sf::Input","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Input");
    tolua_function(tolua_S,"new",tolua_bind_sfml_window_sf_Input_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_window_sf_Input_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_window_sf_Input_new00_local);
    tolua_function(tolua_S,"IsKeyDown",tolua_bind_sfml_window_sf_Input_IsKeyDown00);
    tolua_function(tolua_S,"IsMouseButtonDown",tolua_bind_sfml_window_sf_Input_IsMouseButtonDown00);
    tolua_function(tolua_S,"IsJoystickButtonDown",tolua_bind_sfml_window_sf_Input_IsJoystickButtonDown00);
    tolua_function(tolua_S,"GetMouseX",tolua_bind_sfml_window_sf_Input_GetMouseX00);
    tolua_function(tolua_S,"GetMouseY",tolua_bind_sfml_window_sf_Input_GetMouseY00);
    tolua_function(tolua_S,"GetJoystickAxis",tolua_bind_sfml_window_sf_Input_GetJoystickAxis00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_bind_sfml_window (lua_State* tolua_S) {
 return tolua_bind_sfml_window_open(tolua_S);
};
#endif

