/*
** Lua binding: bind_sfml_graphics
** Generated automatically by tolua++-1.0.92 on 06/08/11 19:57:23.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_bind_sfml_graphics_open (lua_State* tolua_S);

#include <SFML/Graphics.hpp>

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_sf__IntRect (lua_State* tolua_S)
{
 sf::IntRect* self = (sf::IntRect*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_sf__Shape (lua_State* tolua_S)
{
 sf::Shape* self = (sf::Shape*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_sf__Matrix3 (lua_State* tolua_S)
{
 sf::Matrix3* self = (sf::Matrix3*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_sf__Color (lua_State* tolua_S)
{
 sf::Color* self = (sf::Color*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_sf__View (lua_State* tolua_S)
{
 sf::View* self = (sf::View*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_sf__Text (lua_State* tolua_S)
{
 sf::Text* self = (sf::Text*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_sf__Shader (lua_State* tolua_S)
{
 sf::Shader* self = (sf::Shader*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_sf__RenderWindow (lua_State* tolua_S)
{
 sf::RenderWindow* self = (sf::RenderWindow*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_sf__Sprite (lua_State* tolua_S)
{
 sf::Sprite* self = (sf::Sprite*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_sf__Glyph (lua_State* tolua_S)
{
 sf::Glyph* self = (sf::Glyph*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_sf__String (lua_State* tolua_S)
{
 sf::String* self = (sf::String*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_sf__RenderImage (lua_State* tolua_S)
{
 sf::RenderImage* self = (sf::RenderImage*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_sf__Font (lua_State* tolua_S)
{
 sf::Font* self = (sf::Font*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_sf__FloatRect (lua_State* tolua_S)
{
 sf::FloatRect* self = (sf::FloatRect*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_sf__Vector2f (lua_State* tolua_S)
{
 sf::Vector2f* self = (sf::Vector2f*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_sf__Image (lua_State* tolua_S)
{
 sf::Image* self = (sf::Image*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"sf::Shape");
 tolua_usertype(tolua_S,"sf::Image");
 tolua_usertype(tolua_S,"sf::VideoMode");
 tolua_usertype(tolua_S,"wchar_t");
 tolua_usertype(tolua_S,"sf::Window");
 tolua_usertype(tolua_S,"sf::String");
 tolua_usertype(tolua_S,"sf::RenderTarget");
 tolua_usertype(tolua_S,"sf::Vector2f");
 tolua_usertype(tolua_S,"sf::FloatRect");
 tolua_usertype(tolua_S,"sf::View");
 tolua_usertype(tolua_S,"sf::RenderWindow");
 tolua_usertype(tolua_S,"sf::Color");
 tolua_usertype(tolua_S,"sf::Text");
 tolua_usertype(tolua_S,"sf::Sprite");
 tolua_usertype(tolua_S,"sf::Vector2i");
 tolua_usertype(tolua_S,"sf::ContextSettings");
 tolua_usertype(tolua_S,"sf::Shader");
 tolua_usertype(tolua_S,"sf::Glyph");
 tolua_usertype(tolua_S,"sf::IntRect");
 tolua_usertype(tolua_S,"sf::Vector3f");
 tolua_usertype(tolua_S,"sf::Font");
 tolua_usertype(tolua_S,"sf::Drawable");
 tolua_usertype(tolua_S,"sf::Matrix3");
 tolua_usertype(tolua_S,"sf::RenderImage");
}

/* method: new of class  sf::Color */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Color_new00
static int tolua_bind_sfml_graphics_sf_Color_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Color",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Color* tolua_ret = (sf::Color*)  new sf::Color();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Color");
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

/* method: new_local of class  sf::Color */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Color_new00_local
static int tolua_bind_sfml_graphics_sf_Color_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Color",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Color* tolua_ret = (sf::Color*)  new sf::Color();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Color");
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

/* method: new of class  sf::Color */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Color_new01
static int tolua_bind_sfml_graphics_sf_Color_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Color",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned char red = ((unsigned char)  tolua_tonumber(tolua_S,2,0));
  unsigned char green = ((unsigned char)  tolua_tonumber(tolua_S,3,0));
  unsigned char blu = ((unsigned char)  tolua_tonumber(tolua_S,4,0));
  unsigned char alpha = ((unsigned char)  tolua_tonumber(tolua_S,5,255));
  {
   sf::Color* tolua_ret = (sf::Color*)  new sf::Color(red,green,blu,alpha);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Color");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Color_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::Color */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Color_new01_local
static int tolua_bind_sfml_graphics_sf_Color_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Color",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned char red = ((unsigned char)  tolua_tonumber(tolua_S,2,0));
  unsigned char green = ((unsigned char)  tolua_tonumber(tolua_S,3,0));
  unsigned char blu = ((unsigned char)  tolua_tonumber(tolua_S,4,0));
  unsigned char alpha = ((unsigned char)  tolua_tonumber(tolua_S,5,255));
  {
   sf::Color* tolua_ret = (sf::Color*)  new sf::Color(red,green,blu,alpha);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Color");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Color_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: r of class  sf::Color */
#ifndef TOLUA_DISABLE_tolua_get_sf__Color_unsigned_r
static int tolua_get_sf__Color_unsigned_r(lua_State* tolua_S)
{
  sf::Color* self = (sf::Color*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'r'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->r);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: r of class  sf::Color */
#ifndef TOLUA_DISABLE_tolua_set_sf__Color_unsigned_r
static int tolua_set_sf__Color_unsigned_r(lua_State* tolua_S)
{
  sf::Color* self = (sf::Color*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'r'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->r = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: g of class  sf::Color */
#ifndef TOLUA_DISABLE_tolua_get_sf__Color_unsigned_g
static int tolua_get_sf__Color_unsigned_g(lua_State* tolua_S)
{
  sf::Color* self = (sf::Color*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'g'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->g);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: g of class  sf::Color */
#ifndef TOLUA_DISABLE_tolua_set_sf__Color_unsigned_g
static int tolua_set_sf__Color_unsigned_g(lua_State* tolua_S)
{
  sf::Color* self = (sf::Color*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'g'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->g = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: b of class  sf::Color */
#ifndef TOLUA_DISABLE_tolua_get_sf__Color_unsigned_b
static int tolua_get_sf__Color_unsigned_b(lua_State* tolua_S)
{
  sf::Color* self = (sf::Color*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'b'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->b);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: b of class  sf::Color */
#ifndef TOLUA_DISABLE_tolua_set_sf__Color_unsigned_b
static int tolua_set_sf__Color_unsigned_b(lua_State* tolua_S)
{
  sf::Color* self = (sf::Color*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'b'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->b = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: a of class  sf::Color */
#ifndef TOLUA_DISABLE_tolua_get_sf__Color_unsigned_a
static int tolua_get_sf__Color_unsigned_a(lua_State* tolua_S)
{
  sf::Color* self = (sf::Color*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'a'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->a);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: a of class  sf::Color */
#ifndef TOLUA_DISABLE_tolua_set_sf__Color_unsigned_a
static int tolua_set_sf__Color_unsigned_a(lua_State* tolua_S)
{
  sf::Color* self = (sf::Color*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'a'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->a = ((unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Black of class  sf::Color */
#ifndef TOLUA_DISABLE_tolua_get_sf__Color_Black
static int tolua_get_sf__Color_Black(lua_State* tolua_S)
{
  tolua_pushusertype(tolua_S,(void*)&sf::Color::Black,"const sf::Color");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: White of class  sf::Color */
#ifndef TOLUA_DISABLE_tolua_get_sf__Color_White
static int tolua_get_sf__Color_White(lua_State* tolua_S)
{
  tolua_pushusertype(tolua_S,(void*)&sf::Color::White,"const sf::Color");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Red of class  sf::Color */
#ifndef TOLUA_DISABLE_tolua_get_sf__Color_Red
static int tolua_get_sf__Color_Red(lua_State* tolua_S)
{
  tolua_pushusertype(tolua_S,(void*)&sf::Color::Red,"const sf::Color");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Green of class  sf::Color */
#ifndef TOLUA_DISABLE_tolua_get_sf__Color_Green
static int tolua_get_sf__Color_Green(lua_State* tolua_S)
{
  tolua_pushusertype(tolua_S,(void*)&sf::Color::Green,"const sf::Color");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Blue of class  sf::Color */
#ifndef TOLUA_DISABLE_tolua_get_sf__Color_Blue
static int tolua_get_sf__Color_Blue(lua_State* tolua_S)
{
  tolua_pushusertype(tolua_S,(void*)&sf::Color::Blue,"const sf::Color");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Yellow of class  sf::Color */
#ifndef TOLUA_DISABLE_tolua_get_sf__Color_Yellow
static int tolua_get_sf__Color_Yellow(lua_State* tolua_S)
{
  tolua_pushusertype(tolua_S,(void*)&sf::Color::Yellow,"const sf::Color");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Magenta of class  sf::Color */
#ifndef TOLUA_DISABLE_tolua_get_sf__Color_Magenta
static int tolua_get_sf__Color_Magenta(lua_State* tolua_S)
{
  tolua_pushusertype(tolua_S,(void*)&sf::Color::Magenta,"const sf::Color");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Cyan of class  sf::Color */
#ifndef TOLUA_DISABLE_tolua_get_sf__Color_Cyan
static int tolua_get_sf__Color_Cyan(lua_State* tolua_S)
{
  tolua_pushusertype(tolua_S,(void*)&sf::Color::Cyan,"const sf::Color");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetPosition of class  sf::Drawable */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Drawable_SetPosition00
static int tolua_bind_sfml_graphics_sf_Drawable_SetPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Drawable",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Drawable* self = (sf::Drawable*)  tolua_tousertype(tolua_S,1,0);
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

/* method: SetPosition of class  sf::Drawable */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Drawable_SetPosition01
static int tolua_bind_sfml_graphics_sf_Drawable_SetPosition01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Drawable",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::Drawable* self = (sf::Drawable*)  tolua_tousertype(tolua_S,1,0);
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
 return tolua_bind_sfml_graphics_sf_Drawable_SetPosition00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetX of class  sf::Drawable */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Drawable_SetX00
static int tolua_bind_sfml_graphics_sf_Drawable_SetX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Drawable",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Drawable* self = (sf::Drawable*)  tolua_tousertype(tolua_S,1,0);
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

/* method: SetY of class  sf::Drawable */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Drawable_SetY00
static int tolua_bind_sfml_graphics_sf_Drawable_SetY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Drawable",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Drawable* self = (sf::Drawable*)  tolua_tousertype(tolua_S,1,0);
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

/* method: SetScale of class  sf::Drawable */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Drawable_SetScale00
static int tolua_bind_sfml_graphics_sf_Drawable_SetScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Drawable",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Drawable* self = (sf::Drawable*)  tolua_tousertype(tolua_S,1,0);
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

/* method: SetScale of class  sf::Drawable */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Drawable_SetScale01
static int tolua_bind_sfml_graphics_sf_Drawable_SetScale01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Drawable",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::Drawable* self = (sf::Drawable*)  tolua_tousertype(tolua_S,1,0);
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
 return tolua_bind_sfml_graphics_sf_Drawable_SetScale00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetScaleX of class  sf::Drawable */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Drawable_SetScaleX00
static int tolua_bind_sfml_graphics_sf_Drawable_SetScaleX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Drawable",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Drawable* self = (sf::Drawable*)  tolua_tousertype(tolua_S,1,0);
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

/* method: SetScaleY of class  sf::Drawable */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Drawable_SetScaleY00
static int tolua_bind_sfml_graphics_sf_Drawable_SetScaleY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Drawable",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Drawable* self = (sf::Drawable*)  tolua_tousertype(tolua_S,1,0);
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

/* method: SetOrigin of class  sf::Drawable */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Drawable_SetOrigin00
static int tolua_bind_sfml_graphics_sf_Drawable_SetOrigin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Drawable",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Drawable* self = (sf::Drawable*)  tolua_tousertype(tolua_S,1,0);
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

/* method: SetOrigin of class  sf::Drawable */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Drawable_SetOrigin01
static int tolua_bind_sfml_graphics_sf_Drawable_SetOrigin01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Drawable",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::Drawable* self = (sf::Drawable*)  tolua_tousertype(tolua_S,1,0);
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
 return tolua_bind_sfml_graphics_sf_Drawable_SetOrigin00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetRotation of class  sf::Drawable */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Drawable_SetRotation00
static int tolua_bind_sfml_graphics_sf_Drawable_SetRotation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Drawable",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Drawable* self = (sf::Drawable*)  tolua_tousertype(tolua_S,1,0);
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

/* method: SetColor of class  sf::Drawable */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Drawable_SetColor00
static int tolua_bind_sfml_graphics_sf_Drawable_SetColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Drawable",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Color",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Drawable* self = (sf::Drawable*)  tolua_tousertype(tolua_S,1,0);
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

/* method: SetBlendMode of class  sf::Drawable */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Drawable_SetBlendMode00
static int tolua_bind_sfml_graphics_sf_Drawable_SetBlendMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Drawable",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Drawable* self = (sf::Drawable*)  tolua_tousertype(tolua_S,1,0);
  sf::Blend::Mode mode = ((sf::Blend::Mode) (int)  tolua_tonumber(tolua_S,2,0));
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

/* method: GetPosition of class  sf::Drawable */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Drawable_GetPosition00
static int tolua_bind_sfml_graphics_sf_Drawable_GetPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Drawable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Drawable* self = (const sf::Drawable*)  tolua_tousertype(tolua_S,1,0);
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

/* method: GetScale of class  sf::Drawable */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Drawable_GetScale00
static int tolua_bind_sfml_graphics_sf_Drawable_GetScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Drawable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Drawable* self = (const sf::Drawable*)  tolua_tousertype(tolua_S,1,0);
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

/* method: GetOrigin of class  sf::Drawable */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Drawable_GetOrigin00
static int tolua_bind_sfml_graphics_sf_Drawable_GetOrigin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Drawable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Drawable* self = (const sf::Drawable*)  tolua_tousertype(tolua_S,1,0);
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

/* method: GetRotation of class  sf::Drawable */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Drawable_GetRotation00
static int tolua_bind_sfml_graphics_sf_Drawable_GetRotation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Drawable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Drawable* self = (const sf::Drawable*)  tolua_tousertype(tolua_S,1,0);
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

/* method: GetColor of class  sf::Drawable */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Drawable_GetColor00
static int tolua_bind_sfml_graphics_sf_Drawable_GetColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Drawable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Drawable* self = (const sf::Drawable*)  tolua_tousertype(tolua_S,1,0);
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

/* method: GetBlendMode of class  sf::Drawable */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Drawable_GetBlendMode00
static int tolua_bind_sfml_graphics_sf_Drawable_GetBlendMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Drawable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Drawable* self = (const sf::Drawable*)  tolua_tousertype(tolua_S,1,0);
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

/* method: Move of class  sf::Drawable */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Drawable_Move00
static int tolua_bind_sfml_graphics_sf_Drawable_Move00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Drawable",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Drawable* self = (sf::Drawable*)  tolua_tousertype(tolua_S,1,0);
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

/* method: Move of class  sf::Drawable */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Drawable_Move01
static int tolua_bind_sfml_graphics_sf_Drawable_Move01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Drawable",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::Drawable* self = (sf::Drawable*)  tolua_tousertype(tolua_S,1,0);
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
 return tolua_bind_sfml_graphics_sf_Drawable_Move00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Scale of class  sf::Drawable */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Drawable_Scale00
static int tolua_bind_sfml_graphics_sf_Drawable_Scale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Drawable",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Drawable* self = (sf::Drawable*)  tolua_tousertype(tolua_S,1,0);
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

/* method: Scale of class  sf::Drawable */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Drawable_Scale01
static int tolua_bind_sfml_graphics_sf_Drawable_Scale01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Drawable",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::Drawable* self = (sf::Drawable*)  tolua_tousertype(tolua_S,1,0);
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
 return tolua_bind_sfml_graphics_sf_Drawable_Scale00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Rotate of class  sf::Drawable */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Drawable_Rotate00
static int tolua_bind_sfml_graphics_sf_Drawable_Rotate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Drawable",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Drawable* self = (sf::Drawable*)  tolua_tousertype(tolua_S,1,0);
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

/* method: TransformToLocal of class  sf::Drawable */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Drawable_TransformToLocal00
static int tolua_bind_sfml_graphics_sf_Drawable_TransformToLocal00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Drawable",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Drawable* self = (const sf::Drawable*)  tolua_tousertype(tolua_S,1,0);
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

/* method: TransformToGlobal of class  sf::Drawable */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Drawable_TransformToGlobal00
static int tolua_bind_sfml_graphics_sf_Drawable_TransformToGlobal00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Drawable",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Drawable* self = (const sf::Drawable*)  tolua_tousertype(tolua_S,1,0);
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

/* method: new of class  sf::Glyph */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Glyph_new00
static int tolua_bind_sfml_graphics_sf_Glyph_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Glyph",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Glyph* tolua_ret = (sf::Glyph*)  new sf::Glyph();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Glyph");
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

/* method: new_local of class  sf::Glyph */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Glyph_new00_local
static int tolua_bind_sfml_graphics_sf_Glyph_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Glyph",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Glyph* tolua_ret = (sf::Glyph*)  new sf::Glyph();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Glyph");
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

/* get function: Advance of class  sf::Glyph */
#ifndef TOLUA_DISABLE_tolua_get_sf__Glyph_Advance
static int tolua_get_sf__Glyph_Advance(lua_State* tolua_S)
{
  sf::Glyph* self = (sf::Glyph*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Advance'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->Advance);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Advance of class  sf::Glyph */
#ifndef TOLUA_DISABLE_tolua_set_sf__Glyph_Advance
static int tolua_set_sf__Glyph_Advance(lua_State* tolua_S)
{
  sf::Glyph* self = (sf::Glyph*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Advance'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Advance = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Bounds of class  sf::Glyph */
#ifndef TOLUA_DISABLE_tolua_get_sf__Glyph_Bounds
static int tolua_get_sf__Glyph_Bounds(lua_State* tolua_S)
{
  sf::Glyph* self = (sf::Glyph*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Bounds'",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->Bounds,"sf::IntRect");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Bounds of class  sf::Glyph */
#ifndef TOLUA_DISABLE_tolua_set_sf__Glyph_Bounds
static int tolua_set_sf__Glyph_Bounds(lua_State* tolua_S)
{
  sf::Glyph* self = (sf::Glyph*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Bounds'",NULL);
  if (!tolua_isusertype(tolua_S,2,"sf::IntRect",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Bounds = *((sf::IntRect*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: SubRect of class  sf::Glyph */
#ifndef TOLUA_DISABLE_tolua_get_sf__Glyph_SubRect
static int tolua_get_sf__Glyph_SubRect(lua_State* tolua_S)
{
  sf::Glyph* self = (sf::Glyph*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'SubRect'",NULL);
#endif
  tolua_pushusertype(tolua_S,(void*)&self->SubRect,"sf::IntRect");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: SubRect of class  sf::Glyph */
#ifndef TOLUA_DISABLE_tolua_set_sf__Glyph_SubRect
static int tolua_set_sf__Glyph_SubRect(lua_State* tolua_S)
{
  sf::Glyph* self = (sf::Glyph*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'SubRect'",NULL);
  if (!tolua_isusertype(tolua_S,2,"sf::IntRect",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->SubRect = *((sf::IntRect*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::Font */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Font_new00
static int tolua_bind_sfml_graphics_sf_Font_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Font",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Font* tolua_ret = (sf::Font*)  new sf::Font();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Font");
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

/* method: new_local of class  sf::Font */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Font_new00_local
static int tolua_bind_sfml_graphics_sf_Font_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Font",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Font* tolua_ret = (sf::Font*)  new sf::Font();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Font");
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

/* method: new of class  sf::Font */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Font_new01
static int tolua_bind_sfml_graphics_sf_Font_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Font",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Font",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::Font* copy = ((const sf::Font*)  tolua_tousertype(tolua_S,2,0));
  {
   sf::Font* tolua_ret = (sf::Font*)  new sf::Font(*copy);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Font");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Font_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::Font */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Font_new01_local
static int tolua_bind_sfml_graphics_sf_Font_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Font",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Font",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::Font* copy = ((const sf::Font*)  tolua_tousertype(tolua_S,2,0));
  {
   sf::Font* tolua_ret = (sf::Font*)  new sf::Font(*copy);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Font");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Font_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  sf::Font */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Font_delete00
static int tolua_bind_sfml_graphics_sf_Font_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Font",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Font* self = (sf::Font*)  tolua_tousertype(tolua_S,1,0);
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

/* method: LoadFromFile of class  sf::Font */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Font_LoadFromFile00
static int tolua_bind_sfml_graphics_sf_Font_LoadFromFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Font",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Font* self = (sf::Font*)  tolua_tousertype(tolua_S,1,0);
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

/* method: GetGlyph of class  sf::Font */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Font_GetGlyph00
static int tolua_bind_sfml_graphics_sf_Font_GetGlyph00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Font",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Font* self = (const sf::Font*)  tolua_tousertype(tolua_S,1,0);
  unsigned int codepoint = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int charsize = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  bool bold = ((bool)  tolua_toboolean(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetGlyph'",NULL);
#endif
  {
   const sf::Glyph& tolua_ret = (const sf::Glyph&)  self->GetGlyph(codepoint,charsize,bold);
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const sf::Glyph");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetGlyph'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetKerning of class  sf::Font */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Font_GetKerning00
static int tolua_bind_sfml_graphics_sf_Font_GetKerning00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Font",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Font* self = (const sf::Font*)  tolua_tousertype(tolua_S,1,0);
  unsigned int first = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int second = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  unsigned int charsize = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetKerning'",NULL);
#endif
  {
   int tolua_ret = (int)  self->GetKerning(first,second,charsize);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetKerning'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLineSpacing of class  sf::Font */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Font_GetLineSpacing00
static int tolua_bind_sfml_graphics_sf_Font_GetLineSpacing00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Font",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Font* self = (const sf::Font*)  tolua_tousertype(tolua_S,1,0);
  unsigned int charsize = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLineSpacing'",NULL);
#endif
  {
   int tolua_ret = (int)  self->GetLineSpacing(charsize);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLineSpacing'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetImage of class  sf::Font */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Font_GetImage00
static int tolua_bind_sfml_graphics_sf_Font_GetImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Font",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Font* self = (const sf::Font*)  tolua_tousertype(tolua_S,1,0);
  unsigned int charsize = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetImage'",NULL);
#endif
  {
   const sf::Image& tolua_ret = (const sf::Image&)  self->GetImage(charsize);
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const sf::Image");
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

/* method: GetDefaultFont of class  sf::Font */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Font_GetDefaultFont00
static int tolua_bind_sfml_graphics_sf_Font_GetDefaultFont00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Font",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   const sf::Font& tolua_ret = (const sf::Font&)  sf::Font::GetDefaultFont();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const sf::Font");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetDefaultFont'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::Image */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Image_new00
static int tolua_bind_sfml_graphics_sf_Image_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Image",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Image* tolua_ret = (sf::Image*)  new sf::Image();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Image");
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

/* method: new_local of class  sf::Image */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Image_new00_local
static int tolua_bind_sfml_graphics_sf_Image_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Image",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Image* tolua_ret = (sf::Image*)  new sf::Image();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Image");
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

/* method: new of class  sf::Image */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Image_new01
static int tolua_bind_sfml_graphics_sf_Image_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Image",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Image",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::Image* copy = ((const sf::Image*)  tolua_tousertype(tolua_S,2,0));
  {
   sf::Image* tolua_ret = (sf::Image*)  new sf::Image(*copy);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Image");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Image_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::Image */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Image_new01_local
static int tolua_bind_sfml_graphics_sf_Image_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Image",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Image",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::Image* copy = ((const sf::Image*)  tolua_tousertype(tolua_S,2,0));
  {
   sf::Image* tolua_ret = (sf::Image*)  new sf::Image(*copy);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Image");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Image_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  sf::Image */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Image_delete00
static int tolua_bind_sfml_graphics_sf_Image_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Image",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Image* self = (sf::Image*)  tolua_tousertype(tolua_S,1,0);
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

/* method: LoadFromFile of class  sf::Image */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Image_LoadFromFile00
static int tolua_bind_sfml_graphics_sf_Image_LoadFromFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Image",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Image* self = (sf::Image*)  tolua_tousertype(tolua_S,1,0);
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

/* method: SaveToFile of class  sf::Image */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Image_SaveToFile00
static int tolua_bind_sfml_graphics_sf_Image_SaveToFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Image",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Image* self = (sf::Image*)  tolua_tousertype(tolua_S,1,0);
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

/* method: Create of class  sf::Image */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Image_Create00
static int tolua_bind_sfml_graphics_sf_Image_Create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Image",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Image* self = (sf::Image*)  tolua_tousertype(tolua_S,1,0);
  unsigned int width = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int height = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Create'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Create(width,height);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
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

/* method: Create of class  sf::Image */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Image_Create01
static int tolua_bind_sfml_graphics_sf_Image_Create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Image",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"const sf::Color",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::Image* self = (sf::Image*)  tolua_tousertype(tolua_S,1,0);
  unsigned int width = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int height = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  const sf::Color* color = ((const sf::Color*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Create'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Create(width,height,*color);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Image_Create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateMaskFromColor of class  sf::Image */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Image_CreateMaskFromColor00
static int tolua_bind_sfml_graphics_sf_Image_CreateMaskFromColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Image",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Color",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Image* self = (sf::Image*)  tolua_tousertype(tolua_S,1,0);
  const sf::Color* color = ((const sf::Color*)  tolua_tousertype(tolua_S,2,0));
  unsigned char alpha = ((unsigned char)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CreateMaskFromColor'",NULL);
#endif
  {
   self->CreateMaskFromColor(*color,alpha);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CreateMaskFromColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Copy of class  sf::Image */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Image_Copy00
static int tolua_bind_sfml_graphics_sf_Image_Copy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Image",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Image",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Image* self = (sf::Image*)  tolua_tousertype(tolua_S,1,0);
  const sf::Image* source = ((const sf::Image*)  tolua_tousertype(tolua_S,2,0));
  unsigned int destx = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  unsigned int desty = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Copy'",NULL);
#endif
  {
   self->Copy(*source,destx,desty);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Copy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Copy of class  sf::Image */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Image_Copy01
static int tolua_bind_sfml_graphics_sf_Image_Copy01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Image",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Image",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"const sf::IntRect",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,6,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::Image* self = (sf::Image*)  tolua_tousertype(tolua_S,1,0);
  const sf::Image* source = ((const sf::Image*)  tolua_tousertype(tolua_S,2,0));
  unsigned int destx = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  unsigned int desty = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
  const sf::IntRect* sourcerect = ((const sf::IntRect*)  tolua_tousertype(tolua_S,5,0));
  bool applyalpha = ((bool)  tolua_toboolean(tolua_S,6,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Copy'",NULL);
#endif
  {
   self->Copy(*source,destx,desty,*sourcerect,applyalpha);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Image_Copy00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: CopyScreen of class  sf::Image */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Image_CopyScreen00
static int tolua_bind_sfml_graphics_sf_Image_CopyScreen00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Image",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"sf::RenderWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Image* self = (sf::Image*)  tolua_tousertype(tolua_S,1,0);
  sf::RenderWindow* window = ((sf::RenderWindow*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CopyScreen'",NULL);
#endif
  {
   self->CopyScreen(*window);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CopyScreen'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CopyScreen of class  sf::Image */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Image_CopyScreen01
static int tolua_bind_sfml_graphics_sf_Image_CopyScreen01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Image",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"sf::RenderWindow",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const sf::IntRect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::Image* self = (sf::Image*)  tolua_tousertype(tolua_S,1,0);
  sf::RenderWindow* window = ((sf::RenderWindow*)  tolua_tousertype(tolua_S,2,0));
  const sf::IntRect* sourceRect = ((const sf::IntRect*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CopyScreen'",NULL);
#endif
  {
   self->CopyScreen(*window,*sourceRect);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Image_CopyScreen00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetPixel of class  sf::Image */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Image_SetPixel00
static int tolua_bind_sfml_graphics_sf_Image_SetPixel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Image",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"const sf::Color",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Image* self = (sf::Image*)  tolua_tousertype(tolua_S,1,0);
  unsigned int x = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int y = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  const sf::Color* color = ((const sf::Color*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetPixel'",NULL);
#endif
  {
   self->SetPixel(x,y,*color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetPixel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPixel of class  sf::Image */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Image_GetPixel00
static int tolua_bind_sfml_graphics_sf_Image_GetPixel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Image",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Image* self = (const sf::Image*)  tolua_tousertype(tolua_S,1,0);
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

/* method: Bind of class  sf::Image */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Image_Bind00
static int tolua_bind_sfml_graphics_sf_Image_Bind00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Image",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Image* self = (const sf::Image*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Bind'",NULL);
#endif
  {
   self->Bind();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Bind'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetSmooth of class  sf::Image */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Image_SetSmooth00
static int tolua_bind_sfml_graphics_sf_Image_SetSmooth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Image",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Image* self = (sf::Image*)  tolua_tousertype(tolua_S,1,0);
  bool tolua_var_1 = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetSmooth'",NULL);
#endif
  {
   self->SetSmooth(tolua_var_1);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetSmooth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsSmooth of class  sf::Image */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Image_IsSmooth00
static int tolua_bind_sfml_graphics_sf_Image_IsSmooth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Image",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Image* self = (const sf::Image*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsSmooth'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsSmooth();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsSmooth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetWidth of class  sf::Image */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Image_GetWidth00
static int tolua_bind_sfml_graphics_sf_Image_GetWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Image",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Image* self = (const sf::Image*)  tolua_tousertype(tolua_S,1,0);
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

/* method: GetHeight of class  sf::Image */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Image_GetHeight00
static int tolua_bind_sfml_graphics_sf_Image_GetHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Image",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Image* self = (const sf::Image*)  tolua_tousertype(tolua_S,1,0);
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

/* method: GetTexCoords of class  sf::Image */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Image_GetTexCoords00
static int tolua_bind_sfml_graphics_sf_Image_GetTexCoords00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Image",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::IntRect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Image* self = (const sf::Image*)  tolua_tousertype(tolua_S,1,0);
  const sf::IntRect* rectangle = ((const sf::IntRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTexCoords'",NULL);
#endif
  {
   sf::FloatRect tolua_ret = (sf::FloatRect)  self->GetTexCoords(*rectangle);
   {
#ifdef __cplusplus
    void* tolua_obj = new sf::FloatRect(tolua_ret);
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::FloatRect");
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(sf::FloatRect));
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::FloatRect");
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTexCoords'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Matrix3_new00
static int tolua_bind_sfml_graphics_sf_Matrix3_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Matrix3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Matrix3* tolua_ret = (sf::Matrix3*)  new sf::Matrix3();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Matrix3");
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

/* method: new_local of class  sf::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Matrix3_new00_local
static int tolua_bind_sfml_graphics_sf_Matrix3_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Matrix3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Matrix3* tolua_ret = (sf::Matrix3*)  new sf::Matrix3();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Matrix3");
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

/* method: new of class  sf::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Matrix3_new01
static int tolua_bind_sfml_graphics_sf_Matrix3_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Matrix3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,10,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,11,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float a00 = ((float)  tolua_tonumber(tolua_S,2,0));
  float a01 = ((float)  tolua_tonumber(tolua_S,3,0));
  float a02 = ((float)  tolua_tonumber(tolua_S,4,0));
  float a10 = ((float)  tolua_tonumber(tolua_S,5,0));
  float a11 = ((float)  tolua_tonumber(tolua_S,6,0));
  float a12 = ((float)  tolua_tonumber(tolua_S,7,0));
  float a20 = ((float)  tolua_tonumber(tolua_S,8,0));
  float a21 = ((float)  tolua_tonumber(tolua_S,9,0));
  float a22 = ((float)  tolua_tonumber(tolua_S,10,0));
  {
   sf::Matrix3* tolua_ret = (sf::Matrix3*)  new sf::Matrix3(a00,a01,a02,a10,a11,a12,a20,a21,a22);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Matrix3");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Matrix3_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Matrix3_new01_local
static int tolua_bind_sfml_graphics_sf_Matrix3_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Matrix3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,10,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,11,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float a00 = ((float)  tolua_tonumber(tolua_S,2,0));
  float a01 = ((float)  tolua_tonumber(tolua_S,3,0));
  float a02 = ((float)  tolua_tonumber(tolua_S,4,0));
  float a10 = ((float)  tolua_tonumber(tolua_S,5,0));
  float a11 = ((float)  tolua_tonumber(tolua_S,6,0));
  float a12 = ((float)  tolua_tonumber(tolua_S,7,0));
  float a20 = ((float)  tolua_tonumber(tolua_S,8,0));
  float a21 = ((float)  tolua_tonumber(tolua_S,9,0));
  float a22 = ((float)  tolua_tonumber(tolua_S,10,0));
  {
   sf::Matrix3* tolua_ret = (sf::Matrix3*)  new sf::Matrix3(a00,a01,a02,a10,a11,a12,a20,a21,a22);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Matrix3");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Matrix3_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  sf::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Matrix3_delete00
static int tolua_bind_sfml_graphics_sf_Matrix3_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Matrix3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Matrix3* self = (sf::Matrix3*)  tolua_tousertype(tolua_S,1,0);
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

/* method: Transform of class  sf::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Matrix3_Transform00
static int tolua_bind_sfml_graphics_sf_Matrix3_Transform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Matrix3",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Matrix3* self = (const sf::Matrix3*)  tolua_tousertype(tolua_S,1,0);
  const sf::Vector2f* point = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Transform'",NULL);
#endif
  {
   sf::Vector2f tolua_ret = (sf::Vector2f)  self->Transform(*point);
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
 tolua_error(tolua_S,"#ferror in function 'Transform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetInverse of class  sf::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Matrix3_GetInverse00
static int tolua_bind_sfml_graphics_sf_Matrix3_GetInverse00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Matrix3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Matrix3* self = (const sf::Matrix3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetInverse'",NULL);
#endif
  {
   sf::Matrix3 tolua_ret = (sf::Matrix3)  self->GetInverse();
   {
#ifdef __cplusplus
    void* tolua_obj = new sf::Matrix3(tolua_ret);
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::Matrix3");
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(sf::Matrix3));
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::Matrix3");
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetInverse'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Transformation of class  sf::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Matrix3_Transformation00
static int tolua_bind_sfml_graphics_sf_Matrix3_Transformation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Matrix3",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Vector2f* origin = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,2,0));
  const sf::Vector2f* trans = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,3,0));
  float rot = ((float)  tolua_tonumber(tolua_S,4,0));
  const sf::Vector2f* scale = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,5,0));
  {
   sf::Matrix3 tolua_ret = (sf::Matrix3)  sf::Matrix3::Transformation(*origin,*trans,rot,*scale);
   {
#ifdef __cplusplus
    void* tolua_obj = new sf::Matrix3(tolua_ret);
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::Matrix3");
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(sf::Matrix3));
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::Matrix3");
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Transformation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Projection of class  sf::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Matrix3_Projection00
static int tolua_bind_sfml_graphics_sf_Matrix3_Projection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Matrix3",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Vector2f* center = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,2,0));
  const sf::Vector2f* size = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,3,0));
  float rot = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   sf::Matrix3 tolua_ret = (sf::Matrix3)  sf::Matrix3::Projection(*center,*size,rot);
   {
#ifdef __cplusplus
    void* tolua_obj = new sf::Matrix3(tolua_ret);
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::Matrix3");
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(sf::Matrix3));
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::Matrix3");
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Projection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Identity of class  sf::Matrix3 */
#ifndef TOLUA_DISABLE_tolua_get_sf__Matrix3_Identity
static int tolua_get_sf__Matrix3_Identity(lua_State* tolua_S)
{
  tolua_pushusertype(tolua_S,(void*)&sf::Matrix3::Identity,"const sf::Matrix3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::IntRect */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_IntRect_new00
static int tolua_bind_sfml_graphics_sf_IntRect_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::IntRect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::IntRect* tolua_ret = (sf::IntRect*)  new sf::IntRect();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::IntRect");
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

/* method: new_local of class  sf::IntRect */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_IntRect_new00_local
static int tolua_bind_sfml_graphics_sf_IntRect_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::IntRect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::IntRect* tolua_ret = (sf::IntRect*)  new sf::IntRect();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::IntRect");
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

/* method: new of class  sf::IntRect */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_IntRect_new01
static int tolua_bind_sfml_graphics_sf_IntRect_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::IntRect",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int left = ((int)  tolua_tonumber(tolua_S,2,0));
  int top = ((int)  tolua_tonumber(tolua_S,3,0));
  int width = ((int)  tolua_tonumber(tolua_S,4,0));
  int height = ((int)  tolua_tonumber(tolua_S,5,0));
  {
   sf::IntRect* tolua_ret = (sf::IntRect*)  new sf::IntRect(left,top,width,height);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::IntRect");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_IntRect_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::IntRect */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_IntRect_new01_local
static int tolua_bind_sfml_graphics_sf_IntRect_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::IntRect",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int left = ((int)  tolua_tonumber(tolua_S,2,0));
  int top = ((int)  tolua_tonumber(tolua_S,3,0));
  int width = ((int)  tolua_tonumber(tolua_S,4,0));
  int height = ((int)  tolua_tonumber(tolua_S,5,0));
  {
   sf::IntRect* tolua_ret = (sf::IntRect*)  new sf::IntRect(left,top,width,height);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::IntRect");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_IntRect_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::IntRect */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_IntRect_new02
static int tolua_bind_sfml_graphics_sf_IntRect_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::IntRect",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2i",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const sf::Vector2i",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::Vector2i* position = ((const sf::Vector2i*)  tolua_tousertype(tolua_S,2,0));
  const sf::Vector2i* size = ((const sf::Vector2i*)  tolua_tousertype(tolua_S,3,0));
  {
   sf::IntRect* tolua_ret = (sf::IntRect*)  new sf::IntRect(*position,*size);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::IntRect");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_IntRect_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::IntRect */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_IntRect_new02_local
static int tolua_bind_sfml_graphics_sf_IntRect_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::IntRect",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2i",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const sf::Vector2i",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::Vector2i* position = ((const sf::Vector2i*)  tolua_tousertype(tolua_S,2,0));
  const sf::Vector2i* size = ((const sf::Vector2i*)  tolua_tousertype(tolua_S,3,0));
  {
   sf::IntRect* tolua_ret = (sf::IntRect*)  new sf::IntRect(*position,*size);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::IntRect");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_IntRect_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::IntRect */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_IntRect_new03
static int tolua_bind_sfml_graphics_sf_IntRect_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::IntRect",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::IntRect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::IntRect* rectangle = ((const sf::IntRect*)  tolua_tousertype(tolua_S,2,0));
  {
   sf::IntRect* tolua_ret = (sf::IntRect*)  new sf::IntRect(*rectangle);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::IntRect");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_IntRect_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::IntRect */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_IntRect_new03_local
static int tolua_bind_sfml_graphics_sf_IntRect_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::IntRect",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::IntRect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::IntRect* rectangle = ((const sf::IntRect*)  tolua_tousertype(tolua_S,2,0));
  {
   sf::IntRect* tolua_ret = (sf::IntRect*)  new sf::IntRect(*rectangle);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::IntRect");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_IntRect_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  sf::IntRect */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_IntRect_delete00
static int tolua_bind_sfml_graphics_sf_IntRect_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::IntRect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::IntRect* self = (sf::IntRect*)  tolua_tousertype(tolua_S,1,0);
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

/* method: Contains of class  sf::IntRect */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_IntRect_Contains00
static int tolua_bind_sfml_graphics_sf_IntRect_Contains00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::IntRect",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::IntRect* self = (const sf::IntRect*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Contains'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Contains(x,y);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Contains'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Contains of class  sf::IntRect */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_IntRect_Contains01
static int tolua_bind_sfml_graphics_sf_IntRect_Contains01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::IntRect",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2i",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::IntRect* self = (const sf::IntRect*)  tolua_tousertype(tolua_S,1,0);
  const sf::Vector2i* point = ((const sf::Vector2i*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Contains'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Contains(*point);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_IntRect_Contains00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Intersects of class  sf::IntRect */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_IntRect_Intersects00
static int tolua_bind_sfml_graphics_sf_IntRect_Intersects00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::IntRect",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::IntRect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::IntRect* self = (const sf::IntRect*)  tolua_tousertype(tolua_S,1,0);
  const sf::IntRect* rect = ((const sf::IntRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Intersects'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Intersects(*rect);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Intersects'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Intersects of class  sf::IntRect */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_IntRect_Intersects01
static int tolua_bind_sfml_graphics_sf_IntRect_Intersects01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::IntRect",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::IntRect",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"sf::IntRect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::IntRect* self = (const sf::IntRect*)  tolua_tousertype(tolua_S,1,0);
  const sf::IntRect* rect = ((const sf::IntRect*)  tolua_tousertype(tolua_S,2,0));
  sf::IntRect* intersection = ((sf::IntRect*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Intersects'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Intersects(*rect,*intersection);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_IntRect_Intersects00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Left of class  sf::IntRect */
#ifndef TOLUA_DISABLE_tolua_get_sf__IntRect_Left
static int tolua_get_sf__IntRect_Left(lua_State* tolua_S)
{
  sf::IntRect* self = (sf::IntRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Left'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->Left);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Left of class  sf::IntRect */
#ifndef TOLUA_DISABLE_tolua_set_sf__IntRect_Left
static int tolua_set_sf__IntRect_Left(lua_State* tolua_S)
{
  sf::IntRect* self = (sf::IntRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Left'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Left = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Top of class  sf::IntRect */
#ifndef TOLUA_DISABLE_tolua_get_sf__IntRect_Top
static int tolua_get_sf__IntRect_Top(lua_State* tolua_S)
{
  sf::IntRect* self = (sf::IntRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Top'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->Top);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Top of class  sf::IntRect */
#ifndef TOLUA_DISABLE_tolua_set_sf__IntRect_Top
static int tolua_set_sf__IntRect_Top(lua_State* tolua_S)
{
  sf::IntRect* self = (sf::IntRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Top'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Top = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Width of class  sf::IntRect */
#ifndef TOLUA_DISABLE_tolua_get_sf__IntRect_Width
static int tolua_get_sf__IntRect_Width(lua_State* tolua_S)
{
  sf::IntRect* self = (sf::IntRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Width'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->Width);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Width of class  sf::IntRect */
#ifndef TOLUA_DISABLE_tolua_set_sf__IntRect_Width
static int tolua_set_sf__IntRect_Width(lua_State* tolua_S)
{
  sf::IntRect* self = (sf::IntRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Width'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Width = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Height of class  sf::IntRect */
#ifndef TOLUA_DISABLE_tolua_get_sf__IntRect_Height
static int tolua_get_sf__IntRect_Height(lua_State* tolua_S)
{
  sf::IntRect* self = (sf::IntRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Height'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->Height);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Height of class  sf::IntRect */
#ifndef TOLUA_DISABLE_tolua_set_sf__IntRect_Height
static int tolua_set_sf__IntRect_Height(lua_State* tolua_S)
{
  sf::IntRect* self = (sf::IntRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Height'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Height = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::FloatRect */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_FloatRect_new00
static int tolua_bind_sfml_graphics_sf_FloatRect_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::FloatRect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::FloatRect* tolua_ret = (sf::FloatRect*)  new sf::FloatRect();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::FloatRect");
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

/* method: new_local of class  sf::FloatRect */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_FloatRect_new00_local
static int tolua_bind_sfml_graphics_sf_FloatRect_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::FloatRect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::FloatRect* tolua_ret = (sf::FloatRect*)  new sf::FloatRect();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::FloatRect");
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

/* method: new of class  sf::FloatRect */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_FloatRect_new01
static int tolua_bind_sfml_graphics_sf_FloatRect_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::FloatRect",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float left = ((float)  tolua_tonumber(tolua_S,2,0));
  float top = ((float)  tolua_tonumber(tolua_S,3,0));
  float width = ((float)  tolua_tonumber(tolua_S,4,0));
  float height = ((float)  tolua_tonumber(tolua_S,5,0));
  {
   sf::FloatRect* tolua_ret = (sf::FloatRect*)  new sf::FloatRect(left,top,width,height);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::FloatRect");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_FloatRect_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::FloatRect */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_FloatRect_new01_local
static int tolua_bind_sfml_graphics_sf_FloatRect_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::FloatRect",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float left = ((float)  tolua_tonumber(tolua_S,2,0));
  float top = ((float)  tolua_tonumber(tolua_S,3,0));
  float width = ((float)  tolua_tonumber(tolua_S,4,0));
  float height = ((float)  tolua_tonumber(tolua_S,5,0));
  {
   sf::FloatRect* tolua_ret = (sf::FloatRect*)  new sf::FloatRect(left,top,width,height);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::FloatRect");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_FloatRect_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::FloatRect */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_FloatRect_new02
static int tolua_bind_sfml_graphics_sf_FloatRect_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::FloatRect",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::Vector2f* position = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,2,0));
  const sf::Vector2f* size = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,3,0));
  {
   sf::FloatRect* tolua_ret = (sf::FloatRect*)  new sf::FloatRect(*position,*size);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::FloatRect");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_FloatRect_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::FloatRect */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_FloatRect_new02_local
static int tolua_bind_sfml_graphics_sf_FloatRect_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::FloatRect",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::Vector2f* position = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,2,0));
  const sf::Vector2f* size = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,3,0));
  {
   sf::FloatRect* tolua_ret = (sf::FloatRect*)  new sf::FloatRect(*position,*size);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::FloatRect");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_FloatRect_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::FloatRect */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_FloatRect_new03
static int tolua_bind_sfml_graphics_sf_FloatRect_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::FloatRect",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::FloatRect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::FloatRect* rectangle = ((const sf::FloatRect*)  tolua_tousertype(tolua_S,2,0));
  {
   sf::FloatRect* tolua_ret = (sf::FloatRect*)  new sf::FloatRect(*rectangle);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::FloatRect");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_FloatRect_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::FloatRect */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_FloatRect_new03_local
static int tolua_bind_sfml_graphics_sf_FloatRect_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::FloatRect",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::FloatRect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::FloatRect* rectangle = ((const sf::FloatRect*)  tolua_tousertype(tolua_S,2,0));
  {
   sf::FloatRect* tolua_ret = (sf::FloatRect*)  new sf::FloatRect(*rectangle);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::FloatRect");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_FloatRect_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  sf::FloatRect */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_FloatRect_delete00
static int tolua_bind_sfml_graphics_sf_FloatRect_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::FloatRect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::FloatRect* self = (sf::FloatRect*)  tolua_tousertype(tolua_S,1,0);
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

/* method: Contains of class  sf::FloatRect */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_FloatRect_Contains00
static int tolua_bind_sfml_graphics_sf_FloatRect_Contains00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::FloatRect",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::FloatRect* self = (const sf::FloatRect*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Contains'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Contains(x,y);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Contains'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Contains of class  sf::FloatRect */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_FloatRect_Contains01
static int tolua_bind_sfml_graphics_sf_FloatRect_Contains01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::FloatRect",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::FloatRect* self = (const sf::FloatRect*)  tolua_tousertype(tolua_S,1,0);
  const sf::Vector2f* point = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Contains'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Contains(*point);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_FloatRect_Contains00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Intersects of class  sf::FloatRect */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_FloatRect_Intersects00
static int tolua_bind_sfml_graphics_sf_FloatRect_Intersects00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::FloatRect",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::FloatRect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::FloatRect* self = (const sf::FloatRect*)  tolua_tousertype(tolua_S,1,0);
  const sf::FloatRect* rect = ((const sf::FloatRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Intersects'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Intersects(*rect);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Intersects'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Intersects of class  sf::FloatRect */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_FloatRect_Intersects01
static int tolua_bind_sfml_graphics_sf_FloatRect_Intersects01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::FloatRect",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::FloatRect",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"sf::FloatRect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::FloatRect* self = (const sf::FloatRect*)  tolua_tousertype(tolua_S,1,0);
  const sf::FloatRect* rect = ((const sf::FloatRect*)  tolua_tousertype(tolua_S,2,0));
  sf::FloatRect* intersection = ((sf::FloatRect*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Intersects'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Intersects(*rect,*intersection);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_FloatRect_Intersects00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Left of class  sf::FloatRect */
#ifndef TOLUA_DISABLE_tolua_get_sf__FloatRect_Left
static int tolua_get_sf__FloatRect_Left(lua_State* tolua_S)
{
  sf::FloatRect* self = (sf::FloatRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Left'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->Left);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Left of class  sf::FloatRect */
#ifndef TOLUA_DISABLE_tolua_set_sf__FloatRect_Left
static int tolua_set_sf__FloatRect_Left(lua_State* tolua_S)
{
  sf::FloatRect* self = (sf::FloatRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Left'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Left = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Top of class  sf::FloatRect */
#ifndef TOLUA_DISABLE_tolua_get_sf__FloatRect_Top
static int tolua_get_sf__FloatRect_Top(lua_State* tolua_S)
{
  sf::FloatRect* self = (sf::FloatRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Top'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->Top);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Top of class  sf::FloatRect */
#ifndef TOLUA_DISABLE_tolua_set_sf__FloatRect_Top
static int tolua_set_sf__FloatRect_Top(lua_State* tolua_S)
{
  sf::FloatRect* self = (sf::FloatRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Top'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Top = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Width of class  sf::FloatRect */
#ifndef TOLUA_DISABLE_tolua_get_sf__FloatRect_Width
static int tolua_get_sf__FloatRect_Width(lua_State* tolua_S)
{
  sf::FloatRect* self = (sf::FloatRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Width'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->Width);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Width of class  sf::FloatRect */
#ifndef TOLUA_DISABLE_tolua_set_sf__FloatRect_Width
static int tolua_set_sf__FloatRect_Width(lua_State* tolua_S)
{
  sf::FloatRect* self = (sf::FloatRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Width'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Width = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Height of class  sf::FloatRect */
#ifndef TOLUA_DISABLE_tolua_get_sf__FloatRect_Height
static int tolua_get_sf__FloatRect_Height(lua_State* tolua_S)
{
  sf::FloatRect* self = (sf::FloatRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Height'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->Height);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Height of class  sf::FloatRect */
#ifndef TOLUA_DISABLE_tolua_set_sf__FloatRect_Height
static int tolua_set_sf__FloatRect_Height(lua_State* tolua_S)
{
  sf::FloatRect* self = (sf::FloatRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Height'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Height = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: Clear of class  sf::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderTarget_Clear00
static int tolua_bind_sfml_graphics_sf_RenderTarget_Clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::RenderTarget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::RenderTarget* self = (sf::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Clear'",NULL);
#endif
  {
   self->Clear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Clear of class  sf::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderTarget_Clear01
static int tolua_bind_sfml_graphics_sf_RenderTarget_Clear01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::RenderTarget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Color",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::RenderTarget* self = (sf::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
  const sf::Color* color = ((const sf::Color*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Clear'",NULL);
#endif
  {
   self->Clear(*color);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_RenderTarget_Clear00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Draw of class  sf::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderTarget_Draw00
static int tolua_bind_sfml_graphics_sf_RenderTarget_Draw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::RenderTarget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Drawable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::RenderTarget* self = (sf::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
  const sf::Drawable* object = ((const sf::Drawable*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Draw'",NULL);
#endif
  {
   self->Draw(*object);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Draw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Draw of class  sf::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderTarget_Draw01
static int tolua_bind_sfml_graphics_sf_RenderTarget_Draw01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::RenderTarget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Drawable",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const sf::Shader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::RenderTarget* self = (sf::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
  const sf::Drawable* object = ((const sf::Drawable*)  tolua_tousertype(tolua_S,2,0));
  const sf::Shader* shader = ((const sf::Shader*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Draw'",NULL);
#endif
  {
   self->Draw(*object,*shader);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_RenderTarget_Draw00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetWidth of class  sf::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderTarget_GetWidth00
static int tolua_bind_sfml_graphics_sf_RenderTarget_GetWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::RenderTarget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::RenderTarget* self = (sf::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
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

/* method: GetHeight of class  sf::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderTarget_GetHeight00
static int tolua_bind_sfml_graphics_sf_RenderTarget_GetHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::RenderTarget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::RenderTarget* self = (sf::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
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

/* method: SetView of class  sf::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderTarget_SetView00
static int tolua_bind_sfml_graphics_sf_RenderTarget_SetView00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::RenderTarget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::View",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::RenderTarget* self = (sf::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
  const sf::View* view = ((const sf::View*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetView'",NULL);
#endif
  {
   self->SetView(*view);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetView'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetView of class  sf::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderTarget_GetView00
static int tolua_bind_sfml_graphics_sf_RenderTarget_GetView00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::RenderTarget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::RenderTarget* self = (const sf::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetView'",NULL);
#endif
  {
   const sf::View& tolua_ret = (const sf::View&)  self->GetView();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const sf::View");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetView'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetView of class  sf::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderTarget_GetView01
static int tolua_bind_sfml_graphics_sf_RenderTarget_GetView01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::RenderTarget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::RenderTarget* self = (const sf::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetView'",NULL);
#endif
  {
   const sf::View& tolua_ret = (const sf::View&)  self->GetView();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const sf::View");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_RenderTarget_GetView00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetDefaultView of class  sf::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderTarget_GetDefaultView00
static int tolua_bind_sfml_graphics_sf_RenderTarget_GetDefaultView00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::RenderTarget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::RenderTarget* self = (const sf::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetDefaultView'",NULL);
#endif
  {
   const sf::View& tolua_ret = (const sf::View&)  self->GetDefaultView();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const sf::View");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetDefaultView'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetViewport of class  sf::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderTarget_GetViewport00
static int tolua_bind_sfml_graphics_sf_RenderTarget_GetViewport00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::RenderTarget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::View",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::RenderTarget* self = (const sf::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
  const sf::View* view = ((const sf::View*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetViewport'",NULL);
#endif
  {
   sf::IntRect tolua_ret = (sf::IntRect)  self->GetViewport(*view);
   {
#ifdef __cplusplus
    void* tolua_obj = new sf::IntRect(tolua_ret);
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::IntRect");
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(sf::IntRect));
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::IntRect");
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetViewport'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ConvertCoords of class  sf::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderTarget_ConvertCoords00
static int tolua_bind_sfml_graphics_sf_RenderTarget_ConvertCoords00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::RenderTarget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::RenderTarget* self = (const sf::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
  unsigned int x = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int y = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ConvertCoords'",NULL);
#endif
  {
   sf::Vector2f tolua_ret = (sf::Vector2f)  self->ConvertCoords(x,y);
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
 tolua_error(tolua_S,"#ferror in function 'ConvertCoords'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ConvertCoords of class  sf::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderTarget_ConvertCoords01
static int tolua_bind_sfml_graphics_sf_RenderTarget_ConvertCoords01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::RenderTarget",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"const sf::View",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::RenderTarget* self = (const sf::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
  unsigned int x = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int y = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  const sf::View* view = ((const sf::View*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ConvertCoords'",NULL);
#endif
  {
   sf::Vector2f tolua_ret = (sf::Vector2f)  self->ConvertCoords(x,y,*view);
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
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_RenderTarget_ConvertCoords00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: SaveGLStates of class  sf::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderTarget_SaveGLStates00
static int tolua_bind_sfml_graphics_sf_RenderTarget_SaveGLStates00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::RenderTarget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::RenderTarget* self = (sf::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SaveGLStates'",NULL);
#endif
  {
   self->SaveGLStates();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SaveGLStates'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: RestoreGLStates of class  sf::RenderTarget */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderTarget_RestoreGLStates00
static int tolua_bind_sfml_graphics_sf_RenderTarget_RestoreGLStates00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::RenderTarget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::RenderTarget* self = (sf::RenderTarget*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'RestoreGLStates'",NULL);
#endif
  {
   self->RestoreGLStates();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RestoreGLStates'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::RenderImage */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderImage_new00
static int tolua_bind_sfml_graphics_sf_RenderImage_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::RenderImage",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::RenderImage* tolua_ret = (sf::RenderImage*)  new sf::RenderImage();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::RenderImage");
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

/* method: new_local of class  sf::RenderImage */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderImage_new00_local
static int tolua_bind_sfml_graphics_sf_RenderImage_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::RenderImage",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::RenderImage* tolua_ret = (sf::RenderImage*)  new sf::RenderImage();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::RenderImage");
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

/* method: delete of class  sf::RenderImage */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderImage_delete00
static int tolua_bind_sfml_graphics_sf_RenderImage_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::RenderImage",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::RenderImage* self = (sf::RenderImage*)  tolua_tousertype(tolua_S,1,0);
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

/* method: Create of class  sf::RenderImage */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderImage_Create00
static int tolua_bind_sfml_graphics_sf_RenderImage_Create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::RenderImage",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::RenderImage* self = (sf::RenderImage*)  tolua_tousertype(tolua_S,1,0);
  unsigned int width = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int height = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  bool depth = ((bool)  tolua_toboolean(tolua_S,4,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Create'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Create(width,height,depth);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
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

/* method: SetSmooth of class  sf::RenderImage */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderImage_SetSmooth00
static int tolua_bind_sfml_graphics_sf_RenderImage_SetSmooth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::RenderImage",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::RenderImage* self = (sf::RenderImage*)  tolua_tousertype(tolua_S,1,0);
  bool tolua_var_2 = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetSmooth'",NULL);
#endif
  {
   self->SetSmooth(tolua_var_2);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetSmooth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsSmooth of class  sf::RenderImage */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderImage_IsSmooth00
static int tolua_bind_sfml_graphics_sf_RenderImage_IsSmooth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::RenderImage",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::RenderImage* self = (const sf::RenderImage*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsSmooth'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsSmooth();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsSmooth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetActive of class  sf::RenderImage */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderImage_SetActive00
static int tolua_bind_sfml_graphics_sf_RenderImage_SetActive00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::RenderImage",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::RenderImage* self = (sf::RenderImage*)  tolua_tousertype(tolua_S,1,0);
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

/* method: Display of class  sf::RenderImage */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderImage_Display00
static int tolua_bind_sfml_graphics_sf_RenderImage_Display00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::RenderImage",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::RenderImage* self = (sf::RenderImage*)  tolua_tousertype(tolua_S,1,0);
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

/* method: GetImage of class  sf::RenderImage */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderImage_GetImage00
static int tolua_bind_sfml_graphics_sf_RenderImage_GetImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::RenderImage",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::RenderImage* self = (const sf::RenderImage*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetImage'",NULL);
#endif
  {
   const sf::Image& tolua_ret = (const sf::Image&)  self->GetImage();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const sf::Image");
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

/* method: new of class  sf::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderWindow_new00
static int tolua_bind_sfml_graphics_sf_RenderWindow_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::RenderWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::RenderWindow* tolua_ret = (sf::RenderWindow*)  new sf::RenderWindow();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::RenderWindow");
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

/* method: new_local of class  sf::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderWindow_new00_local
static int tolua_bind_sfml_graphics_sf_RenderWindow_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::RenderWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::RenderWindow* tolua_ret = (sf::RenderWindow*)  new sf::RenderWindow();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::RenderWindow");
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

/* method: new of class  sf::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderWindow_new01
static int tolua_bind_sfml_graphics_sf_RenderWindow_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::RenderWindow",0,&tolua_err) ||
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
   sf::RenderWindow* tolua_ret = (sf::RenderWindow*)  new sf::RenderWindow(mode,title,style);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::RenderWindow");
   tolua_pushcppstring(tolua_S,(const char*)title);
  }
 }
 return 2;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_RenderWindow_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderWindow_new01_local
static int tolua_bind_sfml_graphics_sf_RenderWindow_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::RenderWindow",0,&tolua_err) ||
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
   sf::RenderWindow* tolua_ret = (sf::RenderWindow*)  new sf::RenderWindow(mode,title,style);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::RenderWindow");
   tolua_pushcppstring(tolua_S,(const char*)title);
  }
 }
 return 2;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_RenderWindow_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderWindow_new02
static int tolua_bind_sfml_graphics_sf_RenderWindow_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::RenderWindow",0,&tolua_err) ||
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
   sf::RenderWindow* tolua_ret = (sf::RenderWindow*)  new sf::RenderWindow(mode,title,style,*settings);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::RenderWindow");
   tolua_pushcppstring(tolua_S,(const char*)title);
  }
 }
 return 2;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_RenderWindow_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderWindow_new02_local
static int tolua_bind_sfml_graphics_sf_RenderWindow_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::RenderWindow",0,&tolua_err) ||
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
   sf::RenderWindow* tolua_ret = (sf::RenderWindow*)  new sf::RenderWindow(mode,title,style,*settings);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::RenderWindow");
   tolua_pushcppstring(tolua_S,(const char*)title);
  }
 }
 return 2;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_RenderWindow_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  sf::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderWindow_delete00
static int tolua_bind_sfml_graphics_sf_RenderWindow_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::RenderWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::RenderWindow* self = (sf::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
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

/* method: Create of class  sf::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderWindow_Create00
static int tolua_bind_sfml_graphics_sf_RenderWindow_Create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::RenderWindow",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"sf::VideoMode",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::RenderWindow* self = (sf::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
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

/* method: Create of class  sf::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderWindow_Create01
static int tolua_bind_sfml_graphics_sf_RenderWindow_Create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::RenderWindow",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"sf::VideoMode",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"const sf::ContextSettings",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::RenderWindow* self = (sf::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
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
 return tolua_bind_sfml_graphics_sf_RenderWindow_Create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Clear of class  sf::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderWindow_Clear00
static int tolua_bind_sfml_graphics_sf_RenderWindow_Clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::RenderWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::RenderWindow* self = (sf::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Clear'",NULL);
#endif
  {
   self->Clear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Clear of class  sf::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderWindow_Clear01
static int tolua_bind_sfml_graphics_sf_RenderWindow_Clear01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::RenderWindow",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Color",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::RenderWindow* self = (sf::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
  const sf::Color* color = ((const sf::Color*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Clear'",NULL);
#endif
  {
   self->Clear(*color);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_RenderWindow_Clear00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Draw of class  sf::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderWindow_Draw00
static int tolua_bind_sfml_graphics_sf_RenderWindow_Draw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::RenderWindow",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Drawable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::RenderWindow* self = (sf::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
  const sf::Drawable* object = ((const sf::Drawable*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Draw'",NULL);
#endif
  {
   self->Draw(*object);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Draw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Draw of class  sf::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderWindow_Draw01
static int tolua_bind_sfml_graphics_sf_RenderWindow_Draw01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::RenderWindow",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Drawable",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const sf::Shader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::RenderWindow* self = (sf::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
  const sf::Drawable* object = ((const sf::Drawable*)  tolua_tousertype(tolua_S,2,0));
  const sf::Shader* shader = ((const sf::Shader*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Draw'",NULL);
#endif
  {
   self->Draw(*object,*shader);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_RenderWindow_Draw00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetWidth of class  sf::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderWindow_GetWidth00
static int tolua_bind_sfml_graphics_sf_RenderWindow_GetWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::RenderWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::RenderWindow* self = (sf::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
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

/* method: GetHeight of class  sf::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderWindow_GetHeight00
static int tolua_bind_sfml_graphics_sf_RenderWindow_GetHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::RenderWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::RenderWindow* self = (sf::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
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

/* method: SetView of class  sf::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderWindow_SetView00
static int tolua_bind_sfml_graphics_sf_RenderWindow_SetView00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::RenderWindow",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::View",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::RenderWindow* self = (sf::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
  const sf::View* view = ((const sf::View*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetView'",NULL);
#endif
  {
   self->SetView(*view);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetView'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetView of class  sf::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderWindow_GetView00
static int tolua_bind_sfml_graphics_sf_RenderWindow_GetView00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::RenderWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::RenderWindow* self = (const sf::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetView'",NULL);
#endif
  {
   const sf::View& tolua_ret = (const sf::View&)  self->GetView();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const sf::View");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetView'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetView of class  sf::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderWindow_GetView01
static int tolua_bind_sfml_graphics_sf_RenderWindow_GetView01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::RenderWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::RenderWindow* self = (const sf::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetView'",NULL);
#endif
  {
   const sf::View& tolua_ret = (const sf::View&)  self->GetView();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const sf::View");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_RenderWindow_GetView00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetDefaultView of class  sf::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderWindow_GetDefaultView00
static int tolua_bind_sfml_graphics_sf_RenderWindow_GetDefaultView00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::RenderWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::RenderWindow* self = (const sf::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetDefaultView'",NULL);
#endif
  {
   const sf::View& tolua_ret = (const sf::View&)  self->GetDefaultView();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const sf::View");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetDefaultView'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetViewport of class  sf::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderWindow_GetViewport00
static int tolua_bind_sfml_graphics_sf_RenderWindow_GetViewport00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::RenderWindow",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::View",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::RenderWindow* self = (const sf::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
  const sf::View* view = ((const sf::View*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetViewport'",NULL);
#endif
  {
   sf::IntRect tolua_ret = (sf::IntRect)  self->GetViewport(*view);
   {
#ifdef __cplusplus
    void* tolua_obj = new sf::IntRect(tolua_ret);
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::IntRect");
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(sf::IntRect));
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::IntRect");
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetViewport'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ConvertCoords of class  sf::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderWindow_ConvertCoords00
static int tolua_bind_sfml_graphics_sf_RenderWindow_ConvertCoords00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::RenderWindow",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::RenderWindow* self = (const sf::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
  unsigned int x = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int y = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ConvertCoords'",NULL);
#endif
  {
   sf::Vector2f tolua_ret = (sf::Vector2f)  self->ConvertCoords(x,y);
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
 tolua_error(tolua_S,"#ferror in function 'ConvertCoords'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ConvertCoords of class  sf::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderWindow_ConvertCoords01
static int tolua_bind_sfml_graphics_sf_RenderWindow_ConvertCoords01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::RenderWindow",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"const sf::View",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::RenderWindow* self = (const sf::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
  unsigned int x = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int y = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  const sf::View* view = ((const sf::View*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ConvertCoords'",NULL);
#endif
  {
   sf::Vector2f tolua_ret = (sf::Vector2f)  self->ConvertCoords(x,y,*view);
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
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_RenderWindow_ConvertCoords00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: SaveGLStates of class  sf::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderWindow_SaveGLStates00
static int tolua_bind_sfml_graphics_sf_RenderWindow_SaveGLStates00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::RenderWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::RenderWindow* self = (sf::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SaveGLStates'",NULL);
#endif
  {
   self->SaveGLStates();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SaveGLStates'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: RestoreGLStates of class  sf::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_RenderWindow_RestoreGLStates00
static int tolua_bind_sfml_graphics_sf_RenderWindow_RestoreGLStates00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::RenderWindow",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::RenderWindow* self = (sf::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'RestoreGLStates'",NULL);
#endif
  {
   self->RestoreGLStates();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RestoreGLStates'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __sf of class  sf::RenderWindow */
#ifndef TOLUA_DISABLE_tolua_get_sf__RenderWindow___sf__RenderTarget__
static int tolua_get_sf__RenderWindow___sf__RenderTarget__(lua_State* tolua_S)
{
  sf::RenderWindow* self = (sf::RenderWindow*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__sf'",NULL);
#endif
#ifdef __cplusplus
  tolua_pushusertype(tolua_S,(void*)static_cast<sf::RenderTarget*>(self), "sf::RenderTarget");
#else
  tolua_pushusertype(tolua_S,(void*)((sf::RenderTarget*)self), "sf::RenderTarget");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::Shader */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shader_new00
static int tolua_bind_sfml_graphics_sf_Shader_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Shader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Shader* tolua_ret = (sf::Shader*)  new sf::Shader();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Shader");
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

/* method: new_local of class  sf::Shader */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shader_new00_local
static int tolua_bind_sfml_graphics_sf_Shader_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Shader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Shader* tolua_ret = (sf::Shader*)  new sf::Shader();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Shader");
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

/* method: new of class  sf::Shader */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shader_new01
static int tolua_bind_sfml_graphics_sf_Shader_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Shader",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Shader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::Shader* copy = ((const sf::Shader*)  tolua_tousertype(tolua_S,2,0));
  {
   sf::Shader* tolua_ret = (sf::Shader*)  new sf::Shader(*copy);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Shader");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Shader_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::Shader */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shader_new01_local
static int tolua_bind_sfml_graphics_sf_Shader_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Shader",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Shader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::Shader* copy = ((const sf::Shader*)  tolua_tousertype(tolua_S,2,0));
  {
   sf::Shader* tolua_ret = (sf::Shader*)  new sf::Shader(*copy);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Shader");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Shader_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  sf::Shader */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shader_delete00
static int tolua_bind_sfml_graphics_sf_Shader_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Shader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Shader* self = (sf::Shader*)  tolua_tousertype(tolua_S,1,0);
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

/* method: LoadFromFile of class  sf::Shader */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shader_LoadFromFile00
static int tolua_bind_sfml_graphics_sf_Shader_LoadFromFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Shader",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Shader* self = (sf::Shader*)  tolua_tousertype(tolua_S,1,0);
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

/* method: LoadFromMemory of class  sf::Shader */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shader_LoadFromMemory00
static int tolua_bind_sfml_graphics_sf_Shader_LoadFromMemory00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Shader",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Shader* self = (sf::Shader*)  tolua_tousertype(tolua_S,1,0);
  const std::string shader = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LoadFromMemory'",NULL);
#endif
  {
   bool tolua_ret = (bool)  self->LoadFromMemory(shader);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)shader);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LoadFromMemory'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetParameter of class  sf::Shader */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shader_SetParameter00
static int tolua_bind_sfml_graphics_sf_Shader_SetParameter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Shader",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Shader* self = (sf::Shader*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  float x = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetParameter'",NULL);
#endif
  {
   self->SetParameter(name,x);
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetParameter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetParameter of class  sf::Shader */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shader_SetParameter01
static int tolua_bind_sfml_graphics_sf_Shader_SetParameter01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Shader",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::Shader* self = (sf::Shader*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  float x = ((float)  tolua_tonumber(tolua_S,3,0));
  float y = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetParameter'",NULL);
#endif
  {
   self->SetParameter(name,x,y);
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Shader_SetParameter00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetParameter of class  sf::Shader */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shader_SetParameter02
static int tolua_bind_sfml_graphics_sf_Shader_SetParameter02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Shader",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::Shader* self = (sf::Shader*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  float x = ((float)  tolua_tonumber(tolua_S,3,0));
  float y = ((float)  tolua_tonumber(tolua_S,4,0));
  float z = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetParameter'",NULL);
#endif
  {
   self->SetParameter(name,x,y,z);
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Shader_SetParameter01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetParameter of class  sf::Shader */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shader_SetParameter03
static int tolua_bind_sfml_graphics_sf_Shader_SetParameter03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Shader",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::Shader* self = (sf::Shader*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  float x = ((float)  tolua_tonumber(tolua_S,3,0));
  float y = ((float)  tolua_tonumber(tolua_S,4,0));
  float z = ((float)  tolua_tonumber(tolua_S,5,0));
  float w = ((float)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetParameter'",NULL);
#endif
  {
   self->SetParameter(name,x,y,z,w);
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Shader_SetParameter02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetParameter of class  sf::Shader */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shader_SetParameter04
static int tolua_bind_sfml_graphics_sf_Shader_SetParameter04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Shader",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::Shader* self = (sf::Shader*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const sf::Vector2f* vector = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetParameter'",NULL);
#endif
  {
   self->SetParameter(name,*vector);
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Shader_SetParameter03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetParameter of class  sf::Shader */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shader_SetParameter05
static int tolua_bind_sfml_graphics_sf_Shader_SetParameter05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Shader",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const sf::Vector3f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::Shader* self = (sf::Shader*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const sf::Vector3f* vector = ((const sf::Vector3f*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetParameter'",NULL);
#endif
  {
   self->SetParameter(name,*vector);
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Shader_SetParameter04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetTexture of class  sf::Shader */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shader_SetTexture00
static int tolua_bind_sfml_graphics_sf_Shader_SetTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Shader",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const sf::Image",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Shader* self = (sf::Shader*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const sf::Image* texture = ((const sf::Image*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetTexture'",NULL);
#endif
  {
   self->SetTexture(name,*texture);
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetCurrentTexture of class  sf::Shader */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shader_SetCurrentTexture00
static int tolua_bind_sfml_graphics_sf_Shader_SetCurrentTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Shader",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Shader* self = (sf::Shader*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetCurrentTexture'",NULL);
#endif
  {
   self->SetCurrentTexture(name);
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetCurrentTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Bind of class  sf::Shader */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shader_Bind00
static int tolua_bind_sfml_graphics_sf_Shader_Bind00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Shader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Shader* self = (const sf::Shader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Bind'",NULL);
#endif
  {
   self->Bind();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Bind'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Unbind of class  sf::Shader */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shader_Unbind00
static int tolua_bind_sfml_graphics_sf_Shader_Unbind00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Shader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Shader* self = (const sf::Shader*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Unbind'",NULL);
#endif
  {
   self->Unbind();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Unbind'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsAvailable of class  sf::Shader */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shader_IsAvailable00
static int tolua_bind_sfml_graphics_sf_Shader_IsAvailable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Shader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   bool tolua_ret = (bool)  sf::Shader::IsAvailable();
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

/* method: new of class  sf::Shape */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shape_new00
static int tolua_bind_sfml_graphics_sf_Shape_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Shape",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Shape* tolua_ret = (sf::Shape*)  new sf::Shape();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Shape");
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

/* method: new_local of class  sf::Shape */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shape_new00_local
static int tolua_bind_sfml_graphics_sf_Shape_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Shape",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Shape* tolua_ret = (sf::Shape*)  new sf::Shape();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Shape");
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

/* method: delete of class  sf::Shape */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shape_delete00
static int tolua_bind_sfml_graphics_sf_Shape_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Shape",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Shape* self = (sf::Shape*)  tolua_tousertype(tolua_S,1,0);
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

/* method: AddPoint of class  sf::Shape */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shape_AddPoint00
static int tolua_bind_sfml_graphics_sf_Shape_AddPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Shape",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Shape* self = (sf::Shape*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddPoint'",NULL);
#endif
  {
   self->AddPoint(x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddPoint of class  sf::Shape */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shape_AddPoint01
static int tolua_bind_sfml_graphics_sf_Shape_AddPoint01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Shape",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"const sf::Color",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::Shape* self = (sf::Shape*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  const sf::Color* color = ((const sf::Color*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddPoint'",NULL);
#endif
  {
   self->AddPoint(x,y,*color);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Shape_AddPoint00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddPoint of class  sf::Shape */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shape_AddPoint02
static int tolua_bind_sfml_graphics_sf_Shape_AddPoint02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Shape",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"const sf::Color",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"const sf::Color",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::Shape* self = (sf::Shape*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  const sf::Color* color = ((const sf::Color*)  tolua_tousertype(tolua_S,4,0));
  const sf::Color* outline = ((const sf::Color*)  tolua_tousertype(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddPoint'",NULL);
#endif
  {
   self->AddPoint(x,y,*color,*outline);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Shape_AddPoint01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddPoint of class  sf::Shape */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shape_AddPoint03
static int tolua_bind_sfml_graphics_sf_Shape_AddPoint03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Shape",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::Shape* self = (sf::Shape*)  tolua_tousertype(tolua_S,1,0);
  const sf::Vector2f* pos = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddPoint'",NULL);
#endif
  {
   self->AddPoint(*pos);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Shape_AddPoint02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddPoint of class  sf::Shape */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shape_AddPoint04
static int tolua_bind_sfml_graphics_sf_Shape_AddPoint04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Shape",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const sf::Color",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::Shape* self = (sf::Shape*)  tolua_tousertype(tolua_S,1,0);
  const sf::Vector2f* pos = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,2,0));
  const sf::Color* color = ((const sf::Color*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddPoint'",NULL);
#endif
  {
   self->AddPoint(*pos,*color);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Shape_AddPoint03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddPoint of class  sf::Shape */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shape_AddPoint05
static int tolua_bind_sfml_graphics_sf_Shape_AddPoint05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Shape",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const sf::Color",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"const sf::Color",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::Shape* self = (sf::Shape*)  tolua_tousertype(tolua_S,1,0);
  const sf::Vector2f* pos = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,2,0));
  const sf::Color* color = ((const sf::Color*)  tolua_tousertype(tolua_S,3,0));
  const sf::Color* outline = ((const sf::Color*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddPoint'",NULL);
#endif
  {
   self->AddPoint(*pos,*color,*outline);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Shape_AddPoint04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPointsCount of class  sf::Shape */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shape_GetPointsCount00
static int tolua_bind_sfml_graphics_sf_Shape_GetPointsCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Shape",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Shape* self = (const sf::Shape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetPointsCount'",NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->GetPointsCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPointsCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: EnableFill of class  sf::Shape */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shape_EnableFill00
static int tolua_bind_sfml_graphics_sf_Shape_EnableFill00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Shape",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Shape* self = (sf::Shape*)  tolua_tousertype(tolua_S,1,0);
  bool enable = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'EnableFill'",NULL);
#endif
  {
   self->EnableFill(enable);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'EnableFill'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: EnableOutline of class  sf::Shape */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shape_EnableOutline00
static int tolua_bind_sfml_graphics_sf_Shape_EnableOutline00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Shape",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Shape* self = (sf::Shape*)  tolua_tousertype(tolua_S,1,0);
  bool enable = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'EnableOutline'",NULL);
#endif
  {
   self->EnableOutline(enable);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'EnableOutline'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetPointPosition of class  sf::Shape */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shape_SetPointPosition00
static int tolua_bind_sfml_graphics_sf_Shape_SetPointPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Shape",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Shape* self = (sf::Shape*)  tolua_tousertype(tolua_S,1,0);
  unsigned int index = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  float x = ((float)  tolua_tonumber(tolua_S,3,0));
  float y = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetPointPosition'",NULL);
#endif
  {
   self->SetPointPosition(index,x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetPointPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetPointPosition of class  sf::Shape */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shape_SetPointPosition01
static int tolua_bind_sfml_graphics_sf_Shape_SetPointPosition01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Shape",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::Shape* self = (sf::Shape*)  tolua_tousertype(tolua_S,1,0);
  unsigned int index = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  const sf::Vector2f* pos = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetPointPosition'",NULL);
#endif
  {
   self->SetPointPosition(index,*pos);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Shape_SetPointPosition00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetPointColor of class  sf::Shape */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shape_SetPointColor00
static int tolua_bind_sfml_graphics_sf_Shape_SetPointColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Shape",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const sf::Color",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Shape* self = (sf::Shape*)  tolua_tousertype(tolua_S,1,0);
  unsigned int index = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  const sf::Color* color = ((const sf::Color*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetPointColor'",NULL);
#endif
  {
   self->SetPointColor(index,*color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetPointColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetPointOutlineColor of class  sf::Shape */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shape_SetPointOutlineColor00
static int tolua_bind_sfml_graphics_sf_Shape_SetPointOutlineColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Shape",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const sf::Color",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Shape* self = (sf::Shape*)  tolua_tousertype(tolua_S,1,0);
  unsigned int index = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  const sf::Color* color = ((const sf::Color*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetPointOutlineColor'",NULL);
#endif
  {
   self->SetPointOutlineColor(index,*color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetPointOutlineColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetOutlineThickness of class  sf::Shape */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shape_SetOutlineThickness00
static int tolua_bind_sfml_graphics_sf_Shape_SetOutlineThickness00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Shape",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Shape* self = (sf::Shape*)  tolua_tousertype(tolua_S,1,0);
  float thickness = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetOutlineThickness'",NULL);
#endif
  {
   self->SetOutlineThickness(thickness);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetOutlineThickness'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPointPosition of class  sf::Shape */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shape_GetPointPosition00
static int tolua_bind_sfml_graphics_sf_Shape_GetPointPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Shape",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Shape* self = (const sf::Shape*)  tolua_tousertype(tolua_S,1,0);
  unsigned int index = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetPointPosition'",NULL);
#endif
  {
   const sf::Vector2f& tolua_ret = (const sf::Vector2f&)  self->GetPointPosition(index);
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const sf::Vector2f");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPointPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPointColor of class  sf::Shape */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shape_GetPointColor00
static int tolua_bind_sfml_graphics_sf_Shape_GetPointColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Shape",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Shape* self = (const sf::Shape*)  tolua_tousertype(tolua_S,1,0);
  unsigned int index = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetPointColor'",NULL);
#endif
  {
   const sf::Color& tolua_ret = (const sf::Color&)  self->GetPointColor(index);
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const sf::Color");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPointColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPointOutlineColor of class  sf::Shape */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shape_GetPointOutlineColor00
static int tolua_bind_sfml_graphics_sf_Shape_GetPointOutlineColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Shape",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Shape* self = (const sf::Shape*)  tolua_tousertype(tolua_S,1,0);
  unsigned int index = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetPointOutlineColor'",NULL);
#endif
  {
   const sf::Color& tolua_ret = (const sf::Color&)  self->GetPointOutlineColor(index);
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const sf::Color");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPointOutlineColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetOutlineThickness of class  sf::Shape */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Shape_GetOutlineThickness00
static int tolua_bind_sfml_graphics_sf_Shape_GetOutlineThickness00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Shape",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Shape* self = (const sf::Shape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetOutlineThickness'",NULL);
#endif
  {
   float tolua_ret = (float)  self->GetOutlineThickness();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetOutlineThickness'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::Sprite */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Sprite_new00
static int tolua_bind_sfml_graphics_sf_Sprite_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Sprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Sprite* tolua_ret = (sf::Sprite*)  new sf::Sprite();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Sprite");
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

/* method: new_local of class  sf::Sprite */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Sprite_new00_local
static int tolua_bind_sfml_graphics_sf_Sprite_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Sprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Sprite* tolua_ret = (sf::Sprite*)  new sf::Sprite();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Sprite");
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

/* method: new of class  sf::Sprite */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Sprite_new01
static int tolua_bind_sfml_graphics_sf_Sprite_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Sprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Image",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::Image* img = ((const sf::Image*)  tolua_tousertype(tolua_S,2,0));
  {
   sf::Sprite* tolua_ret = (sf::Sprite*)  new sf::Sprite(*img);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Sprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Sprite_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::Sprite */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Sprite_new01_local
static int tolua_bind_sfml_graphics_sf_Sprite_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Sprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Image",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::Image* img = ((const sf::Image*)  tolua_tousertype(tolua_S,2,0));
  {
   sf::Sprite* tolua_ret = (sf::Sprite*)  new sf::Sprite(*img);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Sprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Sprite_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::Sprite */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Sprite_new02
static int tolua_bind_sfml_graphics_sf_Sprite_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Sprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Image",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::Image* img = ((const sf::Image*)  tolua_tousertype(tolua_S,2,0));
  const sf::Vector2f* pos = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,3,0));
  {
   sf::Sprite* tolua_ret = (sf::Sprite*)  new sf::Sprite(*img,*pos);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Sprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Sprite_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::Sprite */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Sprite_new02_local
static int tolua_bind_sfml_graphics_sf_Sprite_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Sprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Image",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::Image* img = ((const sf::Image*)  tolua_tousertype(tolua_S,2,0));
  const sf::Vector2f* pos = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,3,0));
  {
   sf::Sprite* tolua_ret = (sf::Sprite*)  new sf::Sprite(*img,*pos);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Sprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Sprite_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::Sprite */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Sprite_new03
static int tolua_bind_sfml_graphics_sf_Sprite_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Sprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Image",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::Image* img = ((const sf::Image*)  tolua_tousertype(tolua_S,2,0));
  const sf::Vector2f* pos = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,3,0));
  const sf::Vector2f* scale = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,4,0));
  float rotation = ((float)  tolua_tonumber(tolua_S,5,0.0f));
  {
   sf::Sprite* tolua_ret = (sf::Sprite*)  new sf::Sprite(*img,*pos,*scale,rotation);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Sprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Sprite_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::Sprite */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Sprite_new03_local
static int tolua_bind_sfml_graphics_sf_Sprite_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Sprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Image",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::Image* img = ((const sf::Image*)  tolua_tousertype(tolua_S,2,0));
  const sf::Vector2f* pos = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,3,0));
  const sf::Vector2f* scale = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,4,0));
  float rotation = ((float)  tolua_tonumber(tolua_S,5,0.0f));
  {
   sf::Sprite* tolua_ret = (sf::Sprite*)  new sf::Sprite(*img,*pos,*scale,rotation);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Sprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Sprite_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::Sprite */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Sprite_new04
static int tolua_bind_sfml_graphics_sf_Sprite_new04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Sprite",0,&tolua_err) ||
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
  const sf::Image* img = ((const sf::Image*)  tolua_tousertype(tolua_S,2,0));
  const sf::Vector2f* pos = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,3,0));
  const sf::Vector2f* scale = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,4,0));
  float rotation = ((float)  tolua_tonumber(tolua_S,5,0));
  const sf::Color* color = ((const sf::Color*)  tolua_tousertype(tolua_S,6,0));
  {
   sf::Sprite* tolua_ret = (sf::Sprite*)  new sf::Sprite(*img,*pos,*scale,rotation,*color);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Sprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Sprite_new03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::Sprite */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Sprite_new04_local
static int tolua_bind_sfml_graphics_sf_Sprite_new04_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Sprite",0,&tolua_err) ||
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
  const sf::Image* img = ((const sf::Image*)  tolua_tousertype(tolua_S,2,0));
  const sf::Vector2f* pos = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,3,0));
  const sf::Vector2f* scale = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,4,0));
  float rotation = ((float)  tolua_tonumber(tolua_S,5,0));
  const sf::Color* color = ((const sf::Color*)  tolua_tousertype(tolua_S,6,0));
  {
   sf::Sprite* tolua_ret = (sf::Sprite*)  new sf::Sprite(*img,*pos,*scale,rotation,*color);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Sprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Sprite_new03_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  sf::Sprite */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Sprite_delete00
static int tolua_bind_sfml_graphics_sf_Sprite_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Sprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Sprite* self = (sf::Sprite*)  tolua_tousertype(tolua_S,1,0);
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

/* method: SetImage of class  sf::Sprite */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Sprite_SetImage00
static int tolua_bind_sfml_graphics_sf_Sprite_SetImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Sprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Image",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Sprite* self = (sf::Sprite*)  tolua_tousertype(tolua_S,1,0);
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

/* method: SetSubRect of class  sf::Sprite */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Sprite_SetSubRect00
static int tolua_bind_sfml_graphics_sf_Sprite_SetSubRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Sprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::IntRect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Sprite* self = (sf::Sprite*)  tolua_tousertype(tolua_S,1,0);
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

/* method: Resize of class  sf::Sprite */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Sprite_Resize00
static int tolua_bind_sfml_graphics_sf_Sprite_Resize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Sprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Sprite* self = (sf::Sprite*)  tolua_tousertype(tolua_S,1,0);
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

/* method: FlipX of class  sf::Sprite */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Sprite_FlipX00
static int tolua_bind_sfml_graphics_sf_Sprite_FlipX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Sprite",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Sprite* self = (sf::Sprite*)  tolua_tousertype(tolua_S,1,0);
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

/* method: FlipY of class  sf::Sprite */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Sprite_FlipY00
static int tolua_bind_sfml_graphics_sf_Sprite_FlipY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Sprite",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Sprite* self = (sf::Sprite*)  tolua_tousertype(tolua_S,1,0);
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

/* method: GetImage of class  sf::Sprite */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Sprite_GetImage00
static int tolua_bind_sfml_graphics_sf_Sprite_GetImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Sprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Sprite* self = (const sf::Sprite*)  tolua_tousertype(tolua_S,1,0);
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

/* method: GetSubRect of class  sf::Sprite */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Sprite_GetSubRect00
static int tolua_bind_sfml_graphics_sf_Sprite_GetSubRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Sprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Sprite* self = (const sf::Sprite*)  tolua_tousertype(tolua_S,1,0);
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

/* method: GetSize of class  sf::Sprite */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Sprite_GetSize00
static int tolua_bind_sfml_graphics_sf_Sprite_GetSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Sprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Sprite* self = (const sf::Sprite*)  tolua_tousertype(tolua_S,1,0);
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

/* method: GetPixel of class  sf::Sprite */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Sprite_GetPixel00
static int tolua_bind_sfml_graphics_sf_Sprite_GetPixel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Sprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Sprite* self = (sf::Sprite*)  tolua_tousertype(tolua_S,1,0);
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

/* method: new of class  sf::String */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_String_new00
static int tolua_bind_sfml_graphics_sf_String_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::String* tolua_ret = (sf::String*)  new sf::String();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::String");
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

/* method: new_local of class  sf::String */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_String_new00_local
static int tolua_bind_sfml_graphics_sf_String_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::String* tolua_ret = (sf::String*)  new sf::String();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::String");
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

/* method: new of class  sf::String */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_String_new01
static int tolua_bind_sfml_graphics_sf_String_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::String",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  char ansichar = ((char)  tolua_tonumber(tolua_S,2,0));
  {
   sf::String* tolua_ret = (sf::String*)  new sf::String(ansichar);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::String");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_String_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::String */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_String_new01_local
static int tolua_bind_sfml_graphics_sf_String_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::String",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  char ansichar = ((char)  tolua_tonumber(tolua_S,2,0));
  {
   sf::String* tolua_ret = (sf::String*)  new sf::String(ansichar);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::String");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_String_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::String */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_String_new02
static int tolua_bind_sfml_graphics_sf_String_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::String",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wchar_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wchar_t widchar = *((wchar_t*)  tolua_tousertype(tolua_S,2,0));
  {
   sf::String* tolua_ret = (sf::String*)  new sf::String(widchar);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::String");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_String_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::String */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_String_new02_local
static int tolua_bind_sfml_graphics_sf_String_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::String",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wchar_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  wchar_t widchar = *((wchar_t*)  tolua_tousertype(tolua_S,2,0));
  {
   sf::String* tolua_ret = (sf::String*)  new sf::String(widchar);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::String");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_String_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::String */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_String_new03
static int tolua_bind_sfml_graphics_sf_String_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::String",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned int utf32char = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  {
   sf::String* tolua_ret = (sf::String*)  new sf::String(utf32char);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::String");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_String_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::String */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_String_new03_local
static int tolua_bind_sfml_graphics_sf_String_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::String",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  unsigned int utf32char = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  {
   sf::String* tolua_ret = (sf::String*)  new sf::String(utf32char);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::String");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_String_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::String */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_String_new04
static int tolua_bind_sfml_graphics_sf_String_new04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::String",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* ansistring = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   sf::String* tolua_ret = (sf::String*)  new sf::String(ansistring);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::String");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_String_new03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::String */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_String_new04_local
static int tolua_bind_sfml_graphics_sf_String_new04_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::String",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* ansistring = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   sf::String* tolua_ret = (sf::String*)  new sf::String(ansistring);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::String");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_String_new03_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::String */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_String_new05
static int tolua_bind_sfml_graphics_sf_String_new05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::String",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const std::string ansistring = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  {
   sf::String* tolua_ret = (sf::String*)  new sf::String(ansistring);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::String");
   tolua_pushcppstring(tolua_S,(const char*)ansistring);
  }
 }
 return 2;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_String_new04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::String */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_String_new05_local
static int tolua_bind_sfml_graphics_sf_String_new05_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::String",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const std::string ansistring = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  {
   sf::String* tolua_ret = (sf::String*)  new sf::String(ansistring);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::String");
   tolua_pushcppstring(tolua_S,(const char*)ansistring);
  }
 }
 return 2;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_String_new04_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  sf::String */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_String_delete00
static int tolua_bind_sfml_graphics_sf_String_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::String* self = (sf::String*)  tolua_tousertype(tolua_S,1,0);
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

/* method: ToAnsiString of class  sf::String */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_String_ToAnsiString00
static int tolua_bind_sfml_graphics_sf_String_ToAnsiString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::String* self = (const sf::String*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ToAnsiString'",NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->ToAnsiString();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ToAnsiString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::Text */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Text_new00
static int tolua_bind_sfml_graphics_sf_Text_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Text",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Text* tolua_ret = (sf::Text*)  new sf::Text();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Text");
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

/* method: new_local of class  sf::Text */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Text_new00_local
static int tolua_bind_sfml_graphics_sf_Text_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Text",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::Text* tolua_ret = (sf::Text*)  new sf::Text();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Text");
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

/* method: new of class  sf::Text */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Text_new01
static int tolua_bind_sfml_graphics_sf_Text_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Text",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::String* s = ((const sf::String*)  tolua_tousertype(tolua_S,2,0));
  {
   sf::Text* tolua_ret = (sf::Text*)  new sf::Text(*s);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Text");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Text_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::Text */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Text_new01_local
static int tolua_bind_sfml_graphics_sf_Text_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Text",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::String* s = ((const sf::String*)  tolua_tousertype(tolua_S,2,0));
  {
   sf::Text* tolua_ret = (sf::Text*)  new sf::Text(*s);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Text");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Text_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::Text */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Text_new02
static int tolua_bind_sfml_graphics_sf_Text_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Text",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::String",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const sf::Font",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::String* s = ((const sf::String*)  tolua_tousertype(tolua_S,2,0));
  const sf::Font* font = ((const sf::Font*)  tolua_tousertype(tolua_S,3,0));
  unsigned int characterSize = ((unsigned int)  tolua_tonumber(tolua_S,4,30));
  {
   sf::Text* tolua_ret = (sf::Text*)  new sf::Text(*s,*font,characterSize);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::Text");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Text_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::Text */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Text_new02_local
static int tolua_bind_sfml_graphics_sf_Text_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::Text",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::String",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const sf::Font",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::String* s = ((const sf::String*)  tolua_tousertype(tolua_S,2,0));
  const sf::Font* font = ((const sf::Font*)  tolua_tousertype(tolua_S,3,0));
  unsigned int characterSize = ((unsigned int)  tolua_tonumber(tolua_S,4,30));
  {
   sf::Text* tolua_ret = (sf::Text*)  new sf::Text(*s,*font,characterSize);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::Text");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_Text_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  sf::Text */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Text_delete00
static int tolua_bind_sfml_graphics_sf_Text_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Text",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Text* self = (sf::Text*)  tolua_tousertype(tolua_S,1,0);
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

/* method: SetString of class  sf::Text */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Text_SetString00
static int tolua_bind_sfml_graphics_sf_Text_SetString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Text",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::String",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Text* self = (sf::Text*)  tolua_tousertype(tolua_S,1,0);
  const sf::String* s = ((const sf::String*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetString'",NULL);
#endif
  {
   self->SetString(*s);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetFont of class  sf::Text */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Text_SetFont00
static int tolua_bind_sfml_graphics_sf_Text_SetFont00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Text",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Font",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Text* self = (sf::Text*)  tolua_tousertype(tolua_S,1,0);
  const sf::Font* font = ((const sf::Font*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetFont'",NULL);
#endif
  {
   self->SetFont(*font);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetFont'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetCharacterSize of class  sf::Text */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Text_SetCharacterSize00
static int tolua_bind_sfml_graphics_sf_Text_SetCharacterSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Text",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Text* self = (sf::Text*)  tolua_tousertype(tolua_S,1,0);
  unsigned int size = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetCharacterSize'",NULL);
#endif
  {
   self->SetCharacterSize(size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetCharacterSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetStyle of class  sf::Text */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Text_SetStyle00
static int tolua_bind_sfml_graphics_sf_Text_SetStyle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::Text",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::Text* self = (sf::Text*)  tolua_tousertype(tolua_S,1,0);
  unsigned long style = ((unsigned long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetStyle'",NULL);
#endif
  {
   self->SetStyle(style);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetStyle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetString of class  sf::Text */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Text_GetString00
static int tolua_bind_sfml_graphics_sf_Text_GetString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Text",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Text* self = (const sf::Text*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetString'",NULL);
#endif
  {
   const sf::String& tolua_ret = (const sf::String&)  self->GetString();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const sf::String");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetFont of class  sf::Text */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Text_GetFont00
static int tolua_bind_sfml_graphics_sf_Text_GetFont00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Text",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Text* self = (const sf::Text*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetFont'",NULL);
#endif
  {
   const sf::Font& tolua_ret = (const sf::Font&)  self->GetFont();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const sf::Font");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetFont'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCharacterSize of class  sf::Text */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Text_GetCharacterSize00
static int tolua_bind_sfml_graphics_sf_Text_GetCharacterSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Text",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Text* self = (const sf::Text*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCharacterSize'",NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->GetCharacterSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCharacterSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetStyle of class  sf::Text */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Text_GetStyle00
static int tolua_bind_sfml_graphics_sf_Text_GetStyle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Text",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Text* self = (const sf::Text*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetStyle'",NULL);
#endif
  {
   unsigned long tolua_ret = (unsigned long)  self->GetStyle();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetStyle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCharacterPos of class  sf::Text */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Text_GetCharacterPos00
static int tolua_bind_sfml_graphics_sf_Text_GetCharacterPos00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Text",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Text* self = (const sf::Text*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCharacterPos'",NULL);
#endif
  {
   sf::Vector2f tolua_ret = (sf::Vector2f)  self->GetCharacterPos(index);
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
 tolua_error(tolua_S,"#ferror in function 'GetCharacterPos'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetRect of class  sf::Text */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_Text_GetRect00
static int tolua_bind_sfml_graphics_sf_Text_GetRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::Text",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::Text* self = (const sf::Text*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetRect'",NULL);
#endif
  {
   sf::FloatRect tolua_ret = (sf::FloatRect)  self->GetRect();
   {
#ifdef __cplusplus
    void* tolua_obj = new sf::FloatRect(tolua_ret);
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::FloatRect");
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(sf::FloatRect));
    tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"sf::FloatRect");
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::View */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_View_new00
static int tolua_bind_sfml_graphics_sf_View_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::View",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::View* tolua_ret = (sf::View*)  new sf::View();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::View");
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

/* method: new_local of class  sf::View */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_View_new00_local
static int tolua_bind_sfml_graphics_sf_View_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::View",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   sf::View* tolua_ret = (sf::View*)  new sf::View();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::View");
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

/* method: new of class  sf::View */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_View_new01
static int tolua_bind_sfml_graphics_sf_View_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::View",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::FloatRect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::FloatRect* rectangle = ((const sf::FloatRect*)  tolua_tousertype(tolua_S,2,0));
  {
   sf::View* tolua_ret = (sf::View*)  new sf::View(*rectangle);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::View");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_View_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::View */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_View_new01_local
static int tolua_bind_sfml_graphics_sf_View_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::View",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::FloatRect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::FloatRect* rectangle = ((const sf::FloatRect*)  tolua_tousertype(tolua_S,2,0));
  {
   sf::View* tolua_ret = (sf::View*)  new sf::View(*rectangle);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::View");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_View_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  sf::View */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_View_new02
static int tolua_bind_sfml_graphics_sf_View_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::View",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::Vector2f* center = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,2,0));
  const sf::Vector2f* size = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,3,0));
  {
   sf::View* tolua_ret = (sf::View*)  new sf::View(*center,*size);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"sf::View");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_View_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  sf::View */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_View_new02_local
static int tolua_bind_sfml_graphics_sf_View_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"sf::View",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const sf::Vector2f* center = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,2,0));
  const sf::Vector2f* size = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,3,0));
  {
   sf::View* tolua_ret = (sf::View*)  new sf::View(*center,*size);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"sf::View");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_View_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  sf::View */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_View_delete00
static int tolua_bind_sfml_graphics_sf_View_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::View",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::View* self = (sf::View*)  tolua_tousertype(tolua_S,1,0);
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

/* method: SetCenter of class  sf::View */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_View_SetCenter00
static int tolua_bind_sfml_graphics_sf_View_SetCenter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::View",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::View* self = (sf::View*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetCenter'",NULL);
#endif
  {
   self->SetCenter(x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetCenter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetCenter of class  sf::View */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_View_SetCenter01
static int tolua_bind_sfml_graphics_sf_View_SetCenter01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::View",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::View* self = (sf::View*)  tolua_tousertype(tolua_S,1,0);
  const sf::Vector2f* center = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetCenter'",NULL);
#endif
  {
   self->SetCenter(*center);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_View_SetCenter00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetSize of class  sf::View */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_View_SetSize00
static int tolua_bind_sfml_graphics_sf_View_SetSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::View",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::View* self = (sf::View*)  tolua_tousertype(tolua_S,1,0);
  float width = ((float)  tolua_tonumber(tolua_S,2,0));
  float height = ((float)  tolua_tonumber(tolua_S,3,0));
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

/* method: SetSize of class  sf::View */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_View_SetSize01
static int tolua_bind_sfml_graphics_sf_View_SetSize01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::View",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::View* self = (sf::View*)  tolua_tousertype(tolua_S,1,0);
  const sf::Vector2f* size = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetSize'",NULL);
#endif
  {
   self->SetSize(*size);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_View_SetSize00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetRotation of class  sf::View */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_View_SetRotation00
static int tolua_bind_sfml_graphics_sf_View_SetRotation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::View",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::View* self = (sf::View*)  tolua_tousertype(tolua_S,1,0);
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

/* method: SetViewport of class  sf::View */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_View_SetViewport00
static int tolua_bind_sfml_graphics_sf_View_SetViewport00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::View",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::FloatRect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::View* self = (sf::View*)  tolua_tousertype(tolua_S,1,0);
  const sf::FloatRect* vp = ((const sf::FloatRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetViewport'",NULL);
#endif
  {
   self->SetViewport(*vp);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetViewport'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCenter of class  sf::View */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_View_GetCenter00
static int tolua_bind_sfml_graphics_sf_View_GetCenter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::View",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::View* self = (const sf::View*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCenter'",NULL);
#endif
  {
   const sf::Vector2f& tolua_ret = (const sf::Vector2f&)  self->GetCenter();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const sf::Vector2f");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCenter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSize of class  sf::View */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_View_GetSize00
static int tolua_bind_sfml_graphics_sf_View_GetSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::View",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::View* self = (const sf::View*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetSize'",NULL);
#endif
  {
   const sf::Vector2f& tolua_ret = (const sf::Vector2f&)  self->GetSize();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const sf::Vector2f");
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

/* method: GetRotation of class  sf::View */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_View_GetRotation00
static int tolua_bind_sfml_graphics_sf_View_GetRotation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::View",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::View* self = (const sf::View*)  tolua_tousertype(tolua_S,1,0);
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

/* method: GetViewport of class  sf::View */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_View_GetViewport00
static int tolua_bind_sfml_graphics_sf_View_GetViewport00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::View",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::View* self = (const sf::View*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetViewport'",NULL);
#endif
  {
   const sf::FloatRect& tolua_ret = (const sf::FloatRect&)  self->GetViewport();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const sf::FloatRect");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetViewport'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Move of class  sf::View */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_View_Move00
static int tolua_bind_sfml_graphics_sf_View_Move00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::View",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::View* self = (sf::View*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Move'",NULL);
#endif
  {
   self->Move(x,y);
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

/* method: Move of class  sf::View */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_View_Move01
static int tolua_bind_sfml_graphics_sf_View_Move01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::View",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const sf::Vector2f",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  sf::View* self = (sf::View*)  tolua_tousertype(tolua_S,1,0);
  const sf::Vector2f* move = ((const sf::Vector2f*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Move'",NULL);
#endif
  {
   self->Move(*move);
  }
 }
 return 0;
tolua_lerror:
 return tolua_bind_sfml_graphics_sf_View_Move00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Rotate of class  sf::View */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_View_Rotate00
static int tolua_bind_sfml_graphics_sf_View_Rotate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::View",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::View* self = (sf::View*)  tolua_tousertype(tolua_S,1,0);
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

/* method: Zoom of class  sf::View */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_View_Zoom00
static int tolua_bind_sfml_graphics_sf_View_Zoom00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"sf::View",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  sf::View* self = (sf::View*)  tolua_tousertype(tolua_S,1,0);
  float factor = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Zoom'",NULL);
#endif
  {
   self->Zoom(factor);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Zoom'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetMatrix of class  sf::View */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_View_GetMatrix00
static int tolua_bind_sfml_graphics_sf_View_GetMatrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::View",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::View* self = (const sf::View*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetMatrix'",NULL);
#endif
  {
   const sf::Matrix3& tolua_ret = (const sf::Matrix3&)  self->GetMatrix();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const sf::Matrix3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetMatrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetInverseMatrix of class  sf::View */
#ifndef TOLUA_DISABLE_tolua_bind_sfml_graphics_sf_View_GetInverseMatrix00
static int tolua_bind_sfml_graphics_sf_View_GetInverseMatrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const sf::View",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const sf::View* self = (const sf::View*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetInverseMatrix'",NULL);
#endif
  {
   const sf::Matrix3& tolua_ret = (const sf::Matrix3&)  self->GetInverseMatrix();
   tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const sf::Matrix3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetInverseMatrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_bind_sfml_graphics_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"sf",0);
  tolua_beginmodule(tolua_S,"sf");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Color","sf::Color","",tolua_collect_sf__Color);
   #else
   tolua_cclass(tolua_S,"Color","sf::Color","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Color");
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_Color_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_Color_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_Color_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_Color_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_Color_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_Color_new01_local);
    tolua_variable(tolua_S,"r",tolua_get_sf__Color_unsigned_r,tolua_set_sf__Color_unsigned_r);
    tolua_variable(tolua_S,"g",tolua_get_sf__Color_unsigned_g,tolua_set_sf__Color_unsigned_g);
    tolua_variable(tolua_S,"b",tolua_get_sf__Color_unsigned_b,tolua_set_sf__Color_unsigned_b);
    tolua_variable(tolua_S,"a",tolua_get_sf__Color_unsigned_a,tolua_set_sf__Color_unsigned_a);
    tolua_variable(tolua_S,"Black",tolua_get_sf__Color_Black,NULL);
    tolua_variable(tolua_S,"White",tolua_get_sf__Color_White,NULL);
    tolua_variable(tolua_S,"Red",tolua_get_sf__Color_Red,NULL);
    tolua_variable(tolua_S,"Green",tolua_get_sf__Color_Green,NULL);
    tolua_variable(tolua_S,"Blue",tolua_get_sf__Color_Blue,NULL);
    tolua_variable(tolua_S,"Yellow",tolua_get_sf__Color_Yellow,NULL);
    tolua_variable(tolua_S,"Magenta",tolua_get_sf__Color_Magenta,NULL);
    tolua_variable(tolua_S,"Cyan",tolua_get_sf__Color_Cyan,NULL);
   tolua_endmodule(tolua_S);
   tolua_module(tolua_S,"Blend",0);
   tolua_beginmodule(tolua_S,"Blend");
    tolua_constant(tolua_S,"Alpha",sf::Blend::Alpha);
    tolua_constant(tolua_S,"Add",sf::Blend::Add);
    tolua_constant(tolua_S,"Multiply",sf::Blend::Multiply);
    tolua_constant(tolua_S,"None",sf::Blend::None);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"Drawable","sf::Drawable","",NULL);
   tolua_beginmodule(tolua_S,"Drawable");
    tolua_function(tolua_S,"SetPosition",tolua_bind_sfml_graphics_sf_Drawable_SetPosition00);
    tolua_function(tolua_S,"SetPosition",tolua_bind_sfml_graphics_sf_Drawable_SetPosition01);
    tolua_function(tolua_S,"SetX",tolua_bind_sfml_graphics_sf_Drawable_SetX00);
    tolua_function(tolua_S,"SetY",tolua_bind_sfml_graphics_sf_Drawable_SetY00);
    tolua_function(tolua_S,"SetScale",tolua_bind_sfml_graphics_sf_Drawable_SetScale00);
    tolua_function(tolua_S,"SetScale",tolua_bind_sfml_graphics_sf_Drawable_SetScale01);
    tolua_function(tolua_S,"SetScaleX",tolua_bind_sfml_graphics_sf_Drawable_SetScaleX00);
    tolua_function(tolua_S,"SetScaleY",tolua_bind_sfml_graphics_sf_Drawable_SetScaleY00);
    tolua_function(tolua_S,"SetOrigin",tolua_bind_sfml_graphics_sf_Drawable_SetOrigin00);
    tolua_function(tolua_S,"SetOrigin",tolua_bind_sfml_graphics_sf_Drawable_SetOrigin01);
    tolua_function(tolua_S,"SetRotation",tolua_bind_sfml_graphics_sf_Drawable_SetRotation00);
    tolua_function(tolua_S,"SetColor",tolua_bind_sfml_graphics_sf_Drawable_SetColor00);
    tolua_function(tolua_S,"SetBlendMode",tolua_bind_sfml_graphics_sf_Drawable_SetBlendMode00);
    tolua_function(tolua_S,"GetPosition",tolua_bind_sfml_graphics_sf_Drawable_GetPosition00);
    tolua_function(tolua_S,"GetScale",tolua_bind_sfml_graphics_sf_Drawable_GetScale00);
    tolua_function(tolua_S,"GetOrigin",tolua_bind_sfml_graphics_sf_Drawable_GetOrigin00);
    tolua_function(tolua_S,"GetRotation",tolua_bind_sfml_graphics_sf_Drawable_GetRotation00);
    tolua_function(tolua_S,"GetColor",tolua_bind_sfml_graphics_sf_Drawable_GetColor00);
    tolua_function(tolua_S,"GetBlendMode",tolua_bind_sfml_graphics_sf_Drawable_GetBlendMode00);
    tolua_function(tolua_S,"Move",tolua_bind_sfml_graphics_sf_Drawable_Move00);
    tolua_function(tolua_S,"Move",tolua_bind_sfml_graphics_sf_Drawable_Move01);
    tolua_function(tolua_S,"Scale",tolua_bind_sfml_graphics_sf_Drawable_Scale00);
    tolua_function(tolua_S,"Scale",tolua_bind_sfml_graphics_sf_Drawable_Scale01);
    tolua_function(tolua_S,"Rotate",tolua_bind_sfml_graphics_sf_Drawable_Rotate00);
    tolua_function(tolua_S,"TransformToLocal",tolua_bind_sfml_graphics_sf_Drawable_TransformToLocal00);
    tolua_function(tolua_S,"TransformToGlobal",tolua_bind_sfml_graphics_sf_Drawable_TransformToGlobal00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Glyph","sf::Glyph","",tolua_collect_sf__Glyph);
   #else
   tolua_cclass(tolua_S,"Glyph","sf::Glyph","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Glyph");
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_Glyph_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_Glyph_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_Glyph_new00_local);
    tolua_variable(tolua_S,"Advance",tolua_get_sf__Glyph_Advance,tolua_set_sf__Glyph_Advance);
    tolua_variable(tolua_S,"Bounds",tolua_get_sf__Glyph_Bounds,tolua_set_sf__Glyph_Bounds);
    tolua_variable(tolua_S,"SubRect",tolua_get_sf__Glyph_SubRect,tolua_set_sf__Glyph_SubRect);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Font","sf::Font","",tolua_collect_sf__Font);
   #else
   tolua_cclass(tolua_S,"Font","sf::Font","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Font");
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_Font_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_Font_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_Font_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_Font_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_Font_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_Font_new01_local);
    tolua_function(tolua_S,"delete",tolua_bind_sfml_graphics_sf_Font_delete00);
    tolua_function(tolua_S,"LoadFromFile",tolua_bind_sfml_graphics_sf_Font_LoadFromFile00);
    tolua_function(tolua_S,"GetGlyph",tolua_bind_sfml_graphics_sf_Font_GetGlyph00);
    tolua_function(tolua_S,"GetKerning",tolua_bind_sfml_graphics_sf_Font_GetKerning00);
    tolua_function(tolua_S,"GetLineSpacing",tolua_bind_sfml_graphics_sf_Font_GetLineSpacing00);
    tolua_function(tolua_S,"GetImage",tolua_bind_sfml_graphics_sf_Font_GetImage00);
    tolua_function(tolua_S,"GetDefaultFont",tolua_bind_sfml_graphics_sf_Font_GetDefaultFont00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Image","sf::Image","",tolua_collect_sf__Image);
   #else
   tolua_cclass(tolua_S,"Image","sf::Image","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Image");
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_Image_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_Image_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_Image_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_Image_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_Image_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_Image_new01_local);
    tolua_function(tolua_S,"delete",tolua_bind_sfml_graphics_sf_Image_delete00);
    tolua_function(tolua_S,"LoadFromFile",tolua_bind_sfml_graphics_sf_Image_LoadFromFile00);
    tolua_function(tolua_S,"SaveToFile",tolua_bind_sfml_graphics_sf_Image_SaveToFile00);
    tolua_function(tolua_S,"Create",tolua_bind_sfml_graphics_sf_Image_Create00);
    tolua_function(tolua_S,"Create",tolua_bind_sfml_graphics_sf_Image_Create01);
    tolua_function(tolua_S,"CreateMaskFromColor",tolua_bind_sfml_graphics_sf_Image_CreateMaskFromColor00);
    tolua_function(tolua_S,"Copy",tolua_bind_sfml_graphics_sf_Image_Copy00);
    tolua_function(tolua_S,"Copy",tolua_bind_sfml_graphics_sf_Image_Copy01);
    tolua_function(tolua_S,"CopyScreen",tolua_bind_sfml_graphics_sf_Image_CopyScreen00);
    tolua_function(tolua_S,"CopyScreen",tolua_bind_sfml_graphics_sf_Image_CopyScreen01);
    tolua_function(tolua_S,"SetPixel",tolua_bind_sfml_graphics_sf_Image_SetPixel00);
    tolua_function(tolua_S,"GetPixel",tolua_bind_sfml_graphics_sf_Image_GetPixel00);
    tolua_function(tolua_S,"Bind",tolua_bind_sfml_graphics_sf_Image_Bind00);
    tolua_function(tolua_S,"SetSmooth",tolua_bind_sfml_graphics_sf_Image_SetSmooth00);
    tolua_function(tolua_S,"IsSmooth",tolua_bind_sfml_graphics_sf_Image_IsSmooth00);
    tolua_function(tolua_S,"GetWidth",tolua_bind_sfml_graphics_sf_Image_GetWidth00);
    tolua_function(tolua_S,"GetHeight",tolua_bind_sfml_graphics_sf_Image_GetHeight00);
    tolua_function(tolua_S,"GetTexCoords",tolua_bind_sfml_graphics_sf_Image_GetTexCoords00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Matrix3","sf::Matrix3","",tolua_collect_sf__Matrix3);
   #else
   tolua_cclass(tolua_S,"Matrix3","sf::Matrix3","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Matrix3");
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_Matrix3_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_Matrix3_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_Matrix3_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_Matrix3_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_Matrix3_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_Matrix3_new01_local);
    tolua_function(tolua_S,"delete",tolua_bind_sfml_graphics_sf_Matrix3_delete00);
    tolua_function(tolua_S,"Transform",tolua_bind_sfml_graphics_sf_Matrix3_Transform00);
    tolua_function(tolua_S,"GetInverse",tolua_bind_sfml_graphics_sf_Matrix3_GetInverse00);
    tolua_function(tolua_S,"Transformation",tolua_bind_sfml_graphics_sf_Matrix3_Transformation00);
    tolua_function(tolua_S,"Projection",tolua_bind_sfml_graphics_sf_Matrix3_Projection00);
    tolua_variable(tolua_S,"Identity",tolua_get_sf__Matrix3_Identity,NULL);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"IntRect","sf::IntRect","",tolua_collect_sf__IntRect);
   #else
   tolua_cclass(tolua_S,"IntRect","sf::IntRect","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"IntRect");
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_IntRect_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_IntRect_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_IntRect_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_IntRect_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_IntRect_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_IntRect_new01_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_IntRect_new02);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_IntRect_new02_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_IntRect_new02_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_IntRect_new03);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_IntRect_new03_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_IntRect_new03_local);
    tolua_function(tolua_S,"delete",tolua_bind_sfml_graphics_sf_IntRect_delete00);
    tolua_function(tolua_S,"Contains",tolua_bind_sfml_graphics_sf_IntRect_Contains00);
    tolua_function(tolua_S,"Contains",tolua_bind_sfml_graphics_sf_IntRect_Contains01);
    tolua_function(tolua_S,"Intersects",tolua_bind_sfml_graphics_sf_IntRect_Intersects00);
    tolua_function(tolua_S,"Intersects",tolua_bind_sfml_graphics_sf_IntRect_Intersects01);
    tolua_variable(tolua_S,"Left",tolua_get_sf__IntRect_Left,tolua_set_sf__IntRect_Left);
    tolua_variable(tolua_S,"Top",tolua_get_sf__IntRect_Top,tolua_set_sf__IntRect_Top);
    tolua_variable(tolua_S,"Width",tolua_get_sf__IntRect_Width,tolua_set_sf__IntRect_Width);
    tolua_variable(tolua_S,"Height",tolua_get_sf__IntRect_Height,tolua_set_sf__IntRect_Height);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"FloatRect","sf::FloatRect","",tolua_collect_sf__FloatRect);
   #else
   tolua_cclass(tolua_S,"FloatRect","sf::FloatRect","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"FloatRect");
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_FloatRect_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_FloatRect_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_FloatRect_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_FloatRect_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_FloatRect_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_FloatRect_new01_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_FloatRect_new02);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_FloatRect_new02_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_FloatRect_new02_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_FloatRect_new03);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_FloatRect_new03_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_FloatRect_new03_local);
    tolua_function(tolua_S,"delete",tolua_bind_sfml_graphics_sf_FloatRect_delete00);
    tolua_function(tolua_S,"Contains",tolua_bind_sfml_graphics_sf_FloatRect_Contains00);
    tolua_function(tolua_S,"Contains",tolua_bind_sfml_graphics_sf_FloatRect_Contains01);
    tolua_function(tolua_S,"Intersects",tolua_bind_sfml_graphics_sf_FloatRect_Intersects00);
    tolua_function(tolua_S,"Intersects",tolua_bind_sfml_graphics_sf_FloatRect_Intersects01);
    tolua_variable(tolua_S,"Left",tolua_get_sf__FloatRect_Left,tolua_set_sf__FloatRect_Left);
    tolua_variable(tolua_S,"Top",tolua_get_sf__FloatRect_Top,tolua_set_sf__FloatRect_Top);
    tolua_variable(tolua_S,"Width",tolua_get_sf__FloatRect_Width,tolua_set_sf__FloatRect_Width);
    tolua_variable(tolua_S,"Height",tolua_get_sf__FloatRect_Height,tolua_set_sf__FloatRect_Height);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"RenderTarget","sf::RenderTarget","",NULL);
   tolua_beginmodule(tolua_S,"RenderTarget");
    tolua_function(tolua_S,"Clear",tolua_bind_sfml_graphics_sf_RenderTarget_Clear00);
    tolua_function(tolua_S,"Clear",tolua_bind_sfml_graphics_sf_RenderTarget_Clear01);
    tolua_function(tolua_S,"Draw",tolua_bind_sfml_graphics_sf_RenderTarget_Draw00);
    tolua_function(tolua_S,"Draw",tolua_bind_sfml_graphics_sf_RenderTarget_Draw01);
    tolua_function(tolua_S,"GetWidth",tolua_bind_sfml_graphics_sf_RenderTarget_GetWidth00);
    tolua_function(tolua_S,"GetHeight",tolua_bind_sfml_graphics_sf_RenderTarget_GetHeight00);
    tolua_function(tolua_S,"SetView",tolua_bind_sfml_graphics_sf_RenderTarget_SetView00);
    tolua_function(tolua_S,"GetView",tolua_bind_sfml_graphics_sf_RenderTarget_GetView00);
    tolua_function(tolua_S,"GetView",tolua_bind_sfml_graphics_sf_RenderTarget_GetView01);
    tolua_function(tolua_S,"GetDefaultView",tolua_bind_sfml_graphics_sf_RenderTarget_GetDefaultView00);
    tolua_function(tolua_S,"GetViewport",tolua_bind_sfml_graphics_sf_RenderTarget_GetViewport00);
    tolua_function(tolua_S,"ConvertCoords",tolua_bind_sfml_graphics_sf_RenderTarget_ConvertCoords00);
    tolua_function(tolua_S,"ConvertCoords",tolua_bind_sfml_graphics_sf_RenderTarget_ConvertCoords01);
    tolua_function(tolua_S,"SaveGLStates",tolua_bind_sfml_graphics_sf_RenderTarget_SaveGLStates00);
    tolua_function(tolua_S,"RestoreGLStates",tolua_bind_sfml_graphics_sf_RenderTarget_RestoreGLStates00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"RenderImage","sf::RenderImage","sf::RenderTarget",tolua_collect_sf__RenderImage);
   #else
   tolua_cclass(tolua_S,"RenderImage","sf::RenderImage","sf::RenderTarget",NULL);
   #endif
   tolua_beginmodule(tolua_S,"RenderImage");
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_RenderImage_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_RenderImage_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_RenderImage_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_sfml_graphics_sf_RenderImage_delete00);
    tolua_function(tolua_S,"Create",tolua_bind_sfml_graphics_sf_RenderImage_Create00);
    tolua_function(tolua_S,"SetSmooth",tolua_bind_sfml_graphics_sf_RenderImage_SetSmooth00);
    tolua_function(tolua_S,"IsSmooth",tolua_bind_sfml_graphics_sf_RenderImage_IsSmooth00);
    tolua_function(tolua_S,"SetActive",tolua_bind_sfml_graphics_sf_RenderImage_SetActive00);
    tolua_function(tolua_S,"Display",tolua_bind_sfml_graphics_sf_RenderImage_Display00);
    tolua_function(tolua_S,"GetImage",tolua_bind_sfml_graphics_sf_RenderImage_GetImage00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"RenderWindow","sf::RenderWindow","sf::Window",tolua_collect_sf__RenderWindow);
   #else
   tolua_cclass(tolua_S,"RenderWindow","sf::RenderWindow","sf::Window",NULL);
   #endif
   tolua_beginmodule(tolua_S,"RenderWindow");
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_RenderWindow_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_RenderWindow_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_RenderWindow_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_RenderWindow_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_RenderWindow_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_RenderWindow_new01_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_RenderWindow_new02);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_RenderWindow_new02_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_RenderWindow_new02_local);
    tolua_function(tolua_S,"delete",tolua_bind_sfml_graphics_sf_RenderWindow_delete00);
    tolua_function(tolua_S,"Create",tolua_bind_sfml_graphics_sf_RenderWindow_Create00);
    tolua_function(tolua_S,"Create",tolua_bind_sfml_graphics_sf_RenderWindow_Create01);
    tolua_function(tolua_S,"Clear",tolua_bind_sfml_graphics_sf_RenderWindow_Clear00);
    tolua_function(tolua_S,"Clear",tolua_bind_sfml_graphics_sf_RenderWindow_Clear01);
    tolua_function(tolua_S,"Draw",tolua_bind_sfml_graphics_sf_RenderWindow_Draw00);
    tolua_function(tolua_S,"Draw",tolua_bind_sfml_graphics_sf_RenderWindow_Draw01);
    tolua_function(tolua_S,"GetWidth",tolua_bind_sfml_graphics_sf_RenderWindow_GetWidth00);
    tolua_function(tolua_S,"GetHeight",tolua_bind_sfml_graphics_sf_RenderWindow_GetHeight00);
    tolua_function(tolua_S,"SetView",tolua_bind_sfml_graphics_sf_RenderWindow_SetView00);
    tolua_function(tolua_S,"GetView",tolua_bind_sfml_graphics_sf_RenderWindow_GetView00);
    tolua_function(tolua_S,"GetView",tolua_bind_sfml_graphics_sf_RenderWindow_GetView01);
    tolua_function(tolua_S,"GetDefaultView",tolua_bind_sfml_graphics_sf_RenderWindow_GetDefaultView00);
    tolua_function(tolua_S,"GetViewport",tolua_bind_sfml_graphics_sf_RenderWindow_GetViewport00);
    tolua_function(tolua_S,"ConvertCoords",tolua_bind_sfml_graphics_sf_RenderWindow_ConvertCoords00);
    tolua_function(tolua_S,"ConvertCoords",tolua_bind_sfml_graphics_sf_RenderWindow_ConvertCoords01);
    tolua_function(tolua_S,"SaveGLStates",tolua_bind_sfml_graphics_sf_RenderWindow_SaveGLStates00);
    tolua_function(tolua_S,"RestoreGLStates",tolua_bind_sfml_graphics_sf_RenderWindow_RestoreGLStates00);
    tolua_variable(tolua_S,"__sf__RenderTarget__",tolua_get_sf__RenderWindow___sf__RenderTarget__,NULL);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Shader","sf::Shader","",tolua_collect_sf__Shader);
   #else
   tolua_cclass(tolua_S,"Shader","sf::Shader","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Shader");
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_Shader_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_Shader_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_Shader_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_Shader_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_Shader_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_Shader_new01_local);
    tolua_function(tolua_S,"delete",tolua_bind_sfml_graphics_sf_Shader_delete00);
    tolua_function(tolua_S,"LoadFromFile",tolua_bind_sfml_graphics_sf_Shader_LoadFromFile00);
    tolua_function(tolua_S,"LoadFromMemory",tolua_bind_sfml_graphics_sf_Shader_LoadFromMemory00);
    tolua_function(tolua_S,"SetParameter",tolua_bind_sfml_graphics_sf_Shader_SetParameter00);
    tolua_function(tolua_S,"SetParameter",tolua_bind_sfml_graphics_sf_Shader_SetParameter01);
    tolua_function(tolua_S,"SetParameter",tolua_bind_sfml_graphics_sf_Shader_SetParameter02);
    tolua_function(tolua_S,"SetParameter",tolua_bind_sfml_graphics_sf_Shader_SetParameter03);
    tolua_function(tolua_S,"SetParameter",tolua_bind_sfml_graphics_sf_Shader_SetParameter04);
    tolua_function(tolua_S,"SetParameter",tolua_bind_sfml_graphics_sf_Shader_SetParameter05);
    tolua_function(tolua_S,"SetTexture",tolua_bind_sfml_graphics_sf_Shader_SetTexture00);
    tolua_function(tolua_S,"SetCurrentTexture",tolua_bind_sfml_graphics_sf_Shader_SetCurrentTexture00);
    tolua_function(tolua_S,"Bind",tolua_bind_sfml_graphics_sf_Shader_Bind00);
    tolua_function(tolua_S,"Unbind",tolua_bind_sfml_graphics_sf_Shader_Unbind00);
    tolua_function(tolua_S,"IsAvailable",tolua_bind_sfml_graphics_sf_Shader_IsAvailable00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Shape","sf::Shape","sf::Drawable",tolua_collect_sf__Shape);
   #else
   tolua_cclass(tolua_S,"Shape","sf::Shape","sf::Drawable",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Shape");
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_Shape_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_Shape_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_Shape_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_sfml_graphics_sf_Shape_delete00);
    tolua_function(tolua_S,"AddPoint",tolua_bind_sfml_graphics_sf_Shape_AddPoint00);
    tolua_function(tolua_S,"AddPoint",tolua_bind_sfml_graphics_sf_Shape_AddPoint01);
    tolua_function(tolua_S,"AddPoint",tolua_bind_sfml_graphics_sf_Shape_AddPoint02);
    tolua_function(tolua_S,"AddPoint",tolua_bind_sfml_graphics_sf_Shape_AddPoint03);
    tolua_function(tolua_S,"AddPoint",tolua_bind_sfml_graphics_sf_Shape_AddPoint04);
    tolua_function(tolua_S,"AddPoint",tolua_bind_sfml_graphics_sf_Shape_AddPoint05);
    tolua_function(tolua_S,"GetPointsCount",tolua_bind_sfml_graphics_sf_Shape_GetPointsCount00);
    tolua_function(tolua_S,"EnableFill",tolua_bind_sfml_graphics_sf_Shape_EnableFill00);
    tolua_function(tolua_S,"EnableOutline",tolua_bind_sfml_graphics_sf_Shape_EnableOutline00);
    tolua_function(tolua_S,"SetPointPosition",tolua_bind_sfml_graphics_sf_Shape_SetPointPosition00);
    tolua_function(tolua_S,"SetPointPosition",tolua_bind_sfml_graphics_sf_Shape_SetPointPosition01);
    tolua_function(tolua_S,"SetPointColor",tolua_bind_sfml_graphics_sf_Shape_SetPointColor00);
    tolua_function(tolua_S,"SetPointOutlineColor",tolua_bind_sfml_graphics_sf_Shape_SetPointOutlineColor00);
    tolua_function(tolua_S,"SetOutlineThickness",tolua_bind_sfml_graphics_sf_Shape_SetOutlineThickness00);
    tolua_function(tolua_S,"GetPointPosition",tolua_bind_sfml_graphics_sf_Shape_GetPointPosition00);
    tolua_function(tolua_S,"GetPointColor",tolua_bind_sfml_graphics_sf_Shape_GetPointColor00);
    tolua_function(tolua_S,"GetPointOutlineColor",tolua_bind_sfml_graphics_sf_Shape_GetPointOutlineColor00);
    tolua_function(tolua_S,"GetOutlineThickness",tolua_bind_sfml_graphics_sf_Shape_GetOutlineThickness00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Sprite","sf::Sprite","sf::Drawable",tolua_collect_sf__Sprite);
   #else
   tolua_cclass(tolua_S,"Sprite","sf::Sprite","sf::Drawable",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Sprite");
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_Sprite_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_Sprite_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_Sprite_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_Sprite_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_Sprite_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_Sprite_new01_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_Sprite_new02);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_Sprite_new02_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_Sprite_new02_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_Sprite_new03);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_Sprite_new03_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_Sprite_new03_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_Sprite_new04);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_Sprite_new04_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_Sprite_new04_local);
    tolua_function(tolua_S,"delete",tolua_bind_sfml_graphics_sf_Sprite_delete00);
    tolua_function(tolua_S,"SetImage",tolua_bind_sfml_graphics_sf_Sprite_SetImage00);
    tolua_function(tolua_S,"SetSubRect",tolua_bind_sfml_graphics_sf_Sprite_SetSubRect00);
    tolua_function(tolua_S,"Resize",tolua_bind_sfml_graphics_sf_Sprite_Resize00);
    tolua_function(tolua_S,"FlipX",tolua_bind_sfml_graphics_sf_Sprite_FlipX00);
    tolua_function(tolua_S,"FlipY",tolua_bind_sfml_graphics_sf_Sprite_FlipY00);
    tolua_function(tolua_S,"GetImage",tolua_bind_sfml_graphics_sf_Sprite_GetImage00);
    tolua_function(tolua_S,"GetSubRect",tolua_bind_sfml_graphics_sf_Sprite_GetSubRect00);
    tolua_function(tolua_S,"GetSize",tolua_bind_sfml_graphics_sf_Sprite_GetSize00);
    tolua_function(tolua_S,"GetPixel",tolua_bind_sfml_graphics_sf_Sprite_GetPixel00);
   tolua_endmodule(tolua_S);
   tolua_module(tolua_S,"Text",0);
   tolua_beginmodule(tolua_S,"Text");
    tolua_constant(tolua_S,"Regular",sf::Text::Regular);
    tolua_constant(tolua_S,"Bold",sf::Text::Bold);
    tolua_constant(tolua_S,"Italic",sf::Text::Italic);
    tolua_constant(tolua_S,"Underlined",sf::Text::Underlined);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"String","sf::String","",tolua_collect_sf__String);
   #else
   tolua_cclass(tolua_S,"String","sf::String","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"String");
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_String_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_String_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_String_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_String_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_String_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_String_new01_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_String_new02);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_String_new02_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_String_new02_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_String_new03);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_String_new03_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_String_new03_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_String_new04);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_String_new04_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_String_new04_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_String_new05);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_String_new05_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_String_new05_local);
    tolua_function(tolua_S,"delete",tolua_bind_sfml_graphics_sf_String_delete00);
    tolua_function(tolua_S,"ToAnsiString",tolua_bind_sfml_graphics_sf_String_ToAnsiString00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Text","sf::Text","sf::Drawable",tolua_collect_sf__Text);
   #else
   tolua_cclass(tolua_S,"Text","sf::Text","sf::Drawable",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Text");
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_Text_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_Text_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_Text_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_Text_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_Text_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_Text_new01_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_Text_new02);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_Text_new02_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_Text_new02_local);
    tolua_function(tolua_S,"delete",tolua_bind_sfml_graphics_sf_Text_delete00);
    tolua_function(tolua_S,"SetString",tolua_bind_sfml_graphics_sf_Text_SetString00);
    tolua_function(tolua_S,"SetFont",tolua_bind_sfml_graphics_sf_Text_SetFont00);
    tolua_function(tolua_S,"SetCharacterSize",tolua_bind_sfml_graphics_sf_Text_SetCharacterSize00);
    tolua_function(tolua_S,"SetStyle",tolua_bind_sfml_graphics_sf_Text_SetStyle00);
    tolua_function(tolua_S,"GetString",tolua_bind_sfml_graphics_sf_Text_GetString00);
    tolua_function(tolua_S,"GetFont",tolua_bind_sfml_graphics_sf_Text_GetFont00);
    tolua_function(tolua_S,"GetCharacterSize",tolua_bind_sfml_graphics_sf_Text_GetCharacterSize00);
    tolua_function(tolua_S,"GetStyle",tolua_bind_sfml_graphics_sf_Text_GetStyle00);
    tolua_function(tolua_S,"GetCharacterPos",tolua_bind_sfml_graphics_sf_Text_GetCharacterPos00);
    tolua_function(tolua_S,"GetRect",tolua_bind_sfml_graphics_sf_Text_GetRect00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"View","sf::View","",tolua_collect_sf__View);
   #else
   tolua_cclass(tolua_S,"View","sf::View","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"View");
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_View_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_View_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_View_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_View_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_View_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_View_new01_local);
    tolua_function(tolua_S,"new",tolua_bind_sfml_graphics_sf_View_new02);
    tolua_function(tolua_S,"new_local",tolua_bind_sfml_graphics_sf_View_new02_local);
    tolua_function(tolua_S,".call",tolua_bind_sfml_graphics_sf_View_new02_local);
    tolua_function(tolua_S,"delete",tolua_bind_sfml_graphics_sf_View_delete00);
    tolua_function(tolua_S,"SetCenter",tolua_bind_sfml_graphics_sf_View_SetCenter00);
    tolua_function(tolua_S,"SetCenter",tolua_bind_sfml_graphics_sf_View_SetCenter01);
    tolua_function(tolua_S,"SetSize",tolua_bind_sfml_graphics_sf_View_SetSize00);
    tolua_function(tolua_S,"SetSize",tolua_bind_sfml_graphics_sf_View_SetSize01);
    tolua_function(tolua_S,"SetRotation",tolua_bind_sfml_graphics_sf_View_SetRotation00);
    tolua_function(tolua_S,"SetViewport",tolua_bind_sfml_graphics_sf_View_SetViewport00);
    tolua_function(tolua_S,"GetCenter",tolua_bind_sfml_graphics_sf_View_GetCenter00);
    tolua_function(tolua_S,"GetSize",tolua_bind_sfml_graphics_sf_View_GetSize00);
    tolua_function(tolua_S,"GetRotation",tolua_bind_sfml_graphics_sf_View_GetRotation00);
    tolua_function(tolua_S,"GetViewport",tolua_bind_sfml_graphics_sf_View_GetViewport00);
    tolua_function(tolua_S,"Move",tolua_bind_sfml_graphics_sf_View_Move00);
    tolua_function(tolua_S,"Move",tolua_bind_sfml_graphics_sf_View_Move01);
    tolua_function(tolua_S,"Rotate",tolua_bind_sfml_graphics_sf_View_Rotate00);
    tolua_function(tolua_S,"Zoom",tolua_bind_sfml_graphics_sf_View_Zoom00);
    tolua_function(tolua_S,"GetMatrix",tolua_bind_sfml_graphics_sf_View_GetMatrix00);
    tolua_function(tolua_S,"GetInverseMatrix",tolua_bind_sfml_graphics_sf_View_GetInverseMatrix00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_bind_sfml_graphics (lua_State* tolua_S) {
 return tolua_bind_sfml_graphics_open(tolua_S);
};
#endif

