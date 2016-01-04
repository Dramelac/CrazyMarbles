/*
** Lua binding: bind_random
** Generated automatically by tolua++-1.0.92 on 06/02/11 21:43:03.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_bind_random_open (lua_State* tolua_S);

#include "../random/random_global.h"
#include "../random/random_gen.h"
#include "../random/cont_random.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_random_gen__CBasePRNG (lua_State* tolua_S)
{
 random_gen::CBasePRNG* self = (random_gen::CBasePRNG*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_random_gen__Xorshift (lua_State* tolua_S)
{
 random_gen::Xorshift* self = (random_gen::Xorshift*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_random_gen__CContinuousRandomSequenceGradient (lua_State* tolua_S)
{
 random_gen::CContinuousRandomSequenceGradient* self = (random_gen::CContinuousRandomSequenceGradient*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_random_gen__LCG (lua_State* tolua_S)
{
 random_gen::LCG* self = (random_gen::LCG*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_random_gen__CContinuousRandomSequence (lua_State* tolua_S)
{
 random_gen::CContinuousRandomSequence* self = (random_gen::CContinuousRandomSequence*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_random_gen__CMWC4096 (lua_State* tolua_S)
{
 random_gen::CMWC4096* self = (random_gen::CMWC4096*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_random_gen__MWC256 (lua_State* tolua_S)
{
 random_gen::MWC256* self = (random_gen::MWC256*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}

static int tolua_collect_random_gen__KISS (lua_State* tolua_S)
{
 random_gen::KISS* self = (random_gen::KISS*) tolua_tousertype(tolua_S,1,0);
	delete self;
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"random_gen::CBasePRNG");
 tolua_usertype(tolua_S,"random_gen::Xorshift");
 tolua_usertype(tolua_S,"random_gen::CContinuousRandomSequenceGradient");
 tolua_usertype(tolua_S,"random_gen::LCG");
 tolua_usertype(tolua_S,"random_gen::CContinuousRandomSequence");
 tolua_usertype(tolua_S,"random_gen::CMWC4096");
 tolua_usertype(tolua_S,"random_gen::MWC256");
 tolua_usertype(tolua_S,"random_gen::KISS");
}

/* function: randInt */
#ifndef TOLUA_DISABLE_tolua_bind_random_randInt00
static int tolua_bind_random_randInt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   unsigned int tolua_ret = (unsigned int)  randInt();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'randInt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: setSeed */
#ifndef TOLUA_DISABLE_tolua_bind_random_setSeed00
static int tolua_bind_random_setSeed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned int Seed = ((unsigned int)  tolua_tonumber(tolua_S,1,0));
  {
   setSeed(Seed);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSeed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: setSeedTime */
#ifndef TOLUA_DISABLE_tolua_bind_random_setSeedTime00
static int tolua_bind_random_setSeedTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   setSeedTime();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSeedTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: randTarget */
#ifndef TOLUA_DISABLE_tolua_bind_random_randTarget00
static int tolua_bind_random_randTarget00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned int Target = ((unsigned int)  tolua_tonumber(tolua_S,1,0));
  {
   unsigned int tolua_ret = (unsigned int)  randTarget(Target);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'randTarget'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rand01 */
#ifndef TOLUA_DISABLE_tolua_bind_random_rand0100
static int tolua_bind_random_rand0100(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   double tolua_ret = (double)  rand01();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rand01'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: randRange */
#ifndef TOLUA_DISABLE_tolua_bind_random_randRange00
static int tolua_bind_random_randRange00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned int Low = ((unsigned int)  tolua_tonumber(tolua_S,1,0));
  unsigned int High = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  {
   unsigned int tolua_ret = (unsigned int)  randRange(Low,High);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'randRange'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: diceRoll */
#ifndef TOLUA_DISABLE_tolua_bind_random_diceRoll00
static int tolua_bind_random_diceRoll00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned int Dice = ((unsigned int)  tolua_tonumber(tolua_S,1,0));
  unsigned int Sides = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  {
   unsigned int tolua_ret = (unsigned int)  diceRoll(Dice,Sides);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'diceRoll'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  random_gen::CBasePRNG */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_CBasePRNG_delete00
static int tolua_bind_random_random_gen_CBasePRNG_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"random_gen::CBasePRNG",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  random_gen::CBasePRNG* self = (random_gen::CBasePRNG*)  tolua_tousertype(tolua_S,1,0);
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

/* method: get of class  random_gen::CBasePRNG */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_CBasePRNG_get00
static int tolua_bind_random_random_gen_CBasePRNG_get00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"random_gen::CBasePRNG",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  random_gen::CBasePRNG* self = (random_gen::CBasePRNG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get'",NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->get();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSeed of class  random_gen::CBasePRNG */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_CBasePRNG_setSeed00
static int tolua_bind_random_random_gen_CBasePRNG_setSeed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"random_gen::CBasePRNG",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  random_gen::CBasePRNG* self = (random_gen::CBasePRNG*)  tolua_tousertype(tolua_S,1,0);
  unsigned int s = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSeed'",NULL);
#endif
  {
   self->setSeed(s);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSeed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSeedTime of class  random_gen::CBasePRNG */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_CBasePRNG_setSeedTime00
static int tolua_bind_random_random_gen_CBasePRNG_setSeedTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"random_gen::CBasePRNG",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  random_gen::CBasePRNG* self = (random_gen::CBasePRNG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSeedTime'",NULL);
#endif
  {
   self->setSeedTime();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSeedTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTarget of class  random_gen::CBasePRNG */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_CBasePRNG_getTarget00
static int tolua_bind_random_random_gen_CBasePRNG_getTarget00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"random_gen::CBasePRNG",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  random_gen::CBasePRNG* self = (random_gen::CBasePRNG*)  tolua_tousertype(tolua_S,1,0);
  unsigned int t = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTarget'",NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getTarget(t);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTarget'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRange of class  random_gen::CBasePRNG */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_CBasePRNG_getRange00
static int tolua_bind_random_random_gen_CBasePRNG_getRange00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"random_gen::CBasePRNG",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  random_gen::CBasePRNG* self = (random_gen::CBasePRNG*)  tolua_tousertype(tolua_S,1,0);
  unsigned int low = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int high = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRange'",NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getRange(low,high);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRange'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get01 of class  random_gen::CBasePRNG */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_CBasePRNG_get0100
static int tolua_bind_random_random_gen_CBasePRNG_get0100(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"random_gen::CBasePRNG",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  random_gen::CBasePRNG* self = (random_gen::CBasePRNG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get01'",NULL);
#endif
  {
   double tolua_ret = (double)  self->get01();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get01'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  random_gen::LCG */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_LCG_new00
static int tolua_bind_random_random_gen_LCG_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"random_gen::LCG",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   random_gen::LCG* tolua_ret = (random_gen::LCG*)  new random_gen::LCG();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"random_gen::LCG");
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

/* method: new_local of class  random_gen::LCG */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_LCG_new00_local
static int tolua_bind_random_random_gen_LCG_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"random_gen::LCG",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   random_gen::LCG* tolua_ret = (random_gen::LCG*)  new random_gen::LCG();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"random_gen::LCG");
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

/* method: delete of class  random_gen::LCG */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_LCG_delete00
static int tolua_bind_random_random_gen_LCG_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"random_gen::LCG",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  random_gen::LCG* self = (random_gen::LCG*)  tolua_tousertype(tolua_S,1,0);
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

/* method: new of class  random_gen::KISS */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_KISS_new00
static int tolua_bind_random_random_gen_KISS_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"random_gen::KISS",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   random_gen::KISS* tolua_ret = (random_gen::KISS*)  new random_gen::KISS();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"random_gen::KISS");
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

/* method: new_local of class  random_gen::KISS */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_KISS_new00_local
static int tolua_bind_random_random_gen_KISS_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"random_gen::KISS",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   random_gen::KISS* tolua_ret = (random_gen::KISS*)  new random_gen::KISS();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"random_gen::KISS");
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

/* method: delete of class  random_gen::KISS */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_KISS_delete00
static int tolua_bind_random_random_gen_KISS_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"random_gen::KISS",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  random_gen::KISS* self = (random_gen::KISS*)  tolua_tousertype(tolua_S,1,0);
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

/* method: new of class  random_gen::Xorshift */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_Xorshift_new00
static int tolua_bind_random_random_gen_Xorshift_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"random_gen::Xorshift",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   random_gen::Xorshift* tolua_ret = (random_gen::Xorshift*)  new random_gen::Xorshift();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"random_gen::Xorshift");
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

/* method: new_local of class  random_gen::Xorshift */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_Xorshift_new00_local
static int tolua_bind_random_random_gen_Xorshift_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"random_gen::Xorshift",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   random_gen::Xorshift* tolua_ret = (random_gen::Xorshift*)  new random_gen::Xorshift();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"random_gen::Xorshift");
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

/* method: delete of class  random_gen::Xorshift */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_Xorshift_delete00
static int tolua_bind_random_random_gen_Xorshift_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"random_gen::Xorshift",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  random_gen::Xorshift* self = (random_gen::Xorshift*)  tolua_tousertype(tolua_S,1,0);
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

/* method: new of class  random_gen::MWC256 */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_MWC256_new00
static int tolua_bind_random_random_gen_MWC256_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"random_gen::MWC256",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   random_gen::MWC256* tolua_ret = (random_gen::MWC256*)  new random_gen::MWC256();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"random_gen::MWC256");
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

/* method: new_local of class  random_gen::MWC256 */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_MWC256_new00_local
static int tolua_bind_random_random_gen_MWC256_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"random_gen::MWC256",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   random_gen::MWC256* tolua_ret = (random_gen::MWC256*)  new random_gen::MWC256();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"random_gen::MWC256");
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

/* method: delete of class  random_gen::MWC256 */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_MWC256_delete00
static int tolua_bind_random_random_gen_MWC256_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"random_gen::MWC256",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  random_gen::MWC256* self = (random_gen::MWC256*)  tolua_tousertype(tolua_S,1,0);
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

/* method: new of class  random_gen::CMWC4096 */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_CMWC4096_new00
static int tolua_bind_random_random_gen_CMWC4096_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"random_gen::CMWC4096",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   random_gen::CMWC4096* tolua_ret = (random_gen::CMWC4096*)  new random_gen::CMWC4096();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"random_gen::CMWC4096");
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

/* method: new_local of class  random_gen::CMWC4096 */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_CMWC4096_new00_local
static int tolua_bind_random_random_gen_CMWC4096_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"random_gen::CMWC4096",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   random_gen::CMWC4096* tolua_ret = (random_gen::CMWC4096*)  new random_gen::CMWC4096();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"random_gen::CMWC4096");
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

/* method: delete of class  random_gen::CMWC4096 */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_CMWC4096_delete00
static int tolua_bind_random_random_gen_CMWC4096_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"random_gen::CMWC4096",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  random_gen::CMWC4096* self = (random_gen::CMWC4096*)  tolua_tousertype(tolua_S,1,0);
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

/* method: new of class  random_gen::CContinuousRandomSequence */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_CContinuousRandomSequence_new00
static int tolua_bind_random_random_gen_CContinuousRandomSequence_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"random_gen::CContinuousRandomSequence",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   random_gen::CContinuousRandomSequence* tolua_ret = (random_gen::CContinuousRandomSequence*)  new random_gen::CContinuousRandomSequence();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"random_gen::CContinuousRandomSequence");
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

/* method: new_local of class  random_gen::CContinuousRandomSequence */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_CContinuousRandomSequence_new00_local
static int tolua_bind_random_random_gen_CContinuousRandomSequence_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"random_gen::CContinuousRandomSequence",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   random_gen::CContinuousRandomSequence* tolua_ret = (random_gen::CContinuousRandomSequence*)  new random_gen::CContinuousRandomSequence();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"random_gen::CContinuousRandomSequence");
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

/* method: new of class  random_gen::CContinuousRandomSequence */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_CContinuousRandomSequence_new01
static int tolua_bind_random_random_gen_CContinuousRandomSequence_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"random_gen::CContinuousRandomSequence",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  double freq = ((double)  tolua_tonumber(tolua_S,2,0));
  double amp = ((double)  tolua_tonumber(tolua_S,3,0));
  int interptype = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   random_gen::CContinuousRandomSequence* tolua_ret = (random_gen::CContinuousRandomSequence*)  new random_gen::CContinuousRandomSequence(freq,amp,interptype);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"random_gen::CContinuousRandomSequence");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_random_random_gen_CContinuousRandomSequence_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  random_gen::CContinuousRandomSequence */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_CContinuousRandomSequence_new01_local
static int tolua_bind_random_random_gen_CContinuousRandomSequence_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"random_gen::CContinuousRandomSequence",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  double freq = ((double)  tolua_tonumber(tolua_S,2,0));
  double amp = ((double)  tolua_tonumber(tolua_S,3,0));
  int interptype = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   random_gen::CContinuousRandomSequence* tolua_ret = (random_gen::CContinuousRandomSequence*)  new random_gen::CContinuousRandomSequence(freq,amp,interptype);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"random_gen::CContinuousRandomSequence");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_random_random_gen_CContinuousRandomSequence_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSampleRate of class  random_gen::CContinuousRandomSequence */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_CContinuousRandomSequence_setSampleRate00
static int tolua_bind_random_random_gen_CContinuousRandomSequence_setSampleRate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"random_gen::CContinuousRandomSequence",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  random_gen::CContinuousRandomSequence* self = (random_gen::CContinuousRandomSequence*)  tolua_tousertype(tolua_S,1,0);
  double rate = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSampleRate'",NULL);
#endif
  {
   self->setSampleRate(rate);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSampleRate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFrequency of class  random_gen::CContinuousRandomSequence */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_CContinuousRandomSequence_setFrequency00
static int tolua_bind_random_random_gen_CContinuousRandomSequence_setFrequency00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"random_gen::CContinuousRandomSequence",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  random_gen::CContinuousRandomSequence* self = (random_gen::CContinuousRandomSequence*)  tolua_tousertype(tolua_S,1,0);
  double freq = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFrequency'",NULL);
#endif
  {
   self->setFrequency(freq);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFrequency'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAmplitude of class  random_gen::CContinuousRandomSequence */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_CContinuousRandomSequence_setAmplitude00
static int tolua_bind_random_random_gen_CContinuousRandomSequence_setAmplitude00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"random_gen::CContinuousRandomSequence",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  random_gen::CContinuousRandomSequence* self = (random_gen::CContinuousRandomSequence*)  tolua_tousertype(tolua_S,1,0);
  double amp = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAmplitude'",NULL);
#endif
  {
   self->setAmplitude(amp);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAmplitude'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setInterpType of class  random_gen::CContinuousRandomSequence */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_CContinuousRandomSequence_setInterpType00
static int tolua_bind_random_random_gen_CContinuousRandomSequence_setInterpType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"random_gen::CContinuousRandomSequence",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  random_gen::CContinuousRandomSequence* self = (random_gen::CContinuousRandomSequence*)  tolua_tousertype(tolua_S,1,0);
  int interp = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInterpType'",NULL);
#endif
  {
   self->setInterpType(interp);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInterpType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reset of class  random_gen::CContinuousRandomSequence */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_CContinuousRandomSequence_reset00
static int tolua_bind_random_random_gen_CContinuousRandomSequence_reset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"random_gen::CContinuousRandomSequence",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  random_gen::CContinuousRandomSequence* self = (random_gen::CContinuousRandomSequence*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reset'",NULL);
#endif
  {
   self->reset();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getValue of class  random_gen::CContinuousRandomSequence */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_CContinuousRandomSequence_getValue00
static int tolua_bind_random_random_gen_CContinuousRandomSequence_getValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"random_gen::CContinuousRandomSequence",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  random_gen::CContinuousRandomSequence* self = (random_gen::CContinuousRandomSequence*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getValue'",NULL);
#endif
  {
   double tolua_ret = (double)  self->getValue();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  random_gen::CContinuousRandomSequenceGradient */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_new00
static int tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"random_gen::CContinuousRandomSequenceGradient",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   random_gen::CContinuousRandomSequenceGradient* tolua_ret = (random_gen::CContinuousRandomSequenceGradient*)  new random_gen::CContinuousRandomSequenceGradient();
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"random_gen::CContinuousRandomSequenceGradient");
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

/* method: new_local of class  random_gen::CContinuousRandomSequenceGradient */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_new00_local
static int tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"random_gen::CContinuousRandomSequenceGradient",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   random_gen::CContinuousRandomSequenceGradient* tolua_ret = (random_gen::CContinuousRandomSequenceGradient*)  new random_gen::CContinuousRandomSequenceGradient();
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"random_gen::CContinuousRandomSequenceGradient");
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

/* method: new of class  random_gen::CContinuousRandomSequenceGradient */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_new01
static int tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"random_gen::CContinuousRandomSequenceGradient",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  double freq = ((double)  tolua_tonumber(tolua_S,2,0));
  double amp = ((double)  tolua_tonumber(tolua_S,3,0));
  int interptype = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   random_gen::CContinuousRandomSequenceGradient* tolua_ret = (random_gen::CContinuousRandomSequenceGradient*)  new random_gen::CContinuousRandomSequenceGradient(freq,amp,interptype);
   tolua_pushusertype(tolua_S,(void*)tolua_ret,"random_gen::CContinuousRandomSequenceGradient");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  random_gen::CContinuousRandomSequenceGradient */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_new01_local
static int tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"random_gen::CContinuousRandomSequenceGradient",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  double freq = ((double)  tolua_tonumber(tolua_S,2,0));
  double amp = ((double)  tolua_tonumber(tolua_S,3,0));
  int interptype = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   random_gen::CContinuousRandomSequenceGradient* tolua_ret = (random_gen::CContinuousRandomSequenceGradient*)  new random_gen::CContinuousRandomSequenceGradient(freq,amp,interptype);
   tolua_pushusertype_and_takeownership(tolua_S,(void *)tolua_ret,"random_gen::CContinuousRandomSequenceGradient");
  }
 }
 return 1;
tolua_lerror:
 return tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSampleRate of class  random_gen::CContinuousRandomSequenceGradient */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_setSampleRate00
static int tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_setSampleRate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"random_gen::CContinuousRandomSequenceGradient",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  random_gen::CContinuousRandomSequenceGradient* self = (random_gen::CContinuousRandomSequenceGradient*)  tolua_tousertype(tolua_S,1,0);
  double rate = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSampleRate'",NULL);
#endif
  {
   self->setSampleRate(rate);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSampleRate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFrequency of class  random_gen::CContinuousRandomSequenceGradient */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_setFrequency00
static int tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_setFrequency00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"random_gen::CContinuousRandomSequenceGradient",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  random_gen::CContinuousRandomSequenceGradient* self = (random_gen::CContinuousRandomSequenceGradient*)  tolua_tousertype(tolua_S,1,0);
  double freq = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFrequency'",NULL);
#endif
  {
   self->setFrequency(freq);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFrequency'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAmplitude of class  random_gen::CContinuousRandomSequenceGradient */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_setAmplitude00
static int tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_setAmplitude00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"random_gen::CContinuousRandomSequenceGradient",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  random_gen::CContinuousRandomSequenceGradient* self = (random_gen::CContinuousRandomSequenceGradient*)  tolua_tousertype(tolua_S,1,0);
  double amp = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAmplitude'",NULL);
#endif
  {
   self->setAmplitude(amp);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAmplitude'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setInterpType of class  random_gen::CContinuousRandomSequenceGradient */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_setInterpType00
static int tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_setInterpType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"random_gen::CContinuousRandomSequenceGradient",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  random_gen::CContinuousRandomSequenceGradient* self = (random_gen::CContinuousRandomSequenceGradient*)  tolua_tousertype(tolua_S,1,0);
  int interp = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInterpType'",NULL);
#endif
  {
   self->setInterpType(interp);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInterpType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reset of class  random_gen::CContinuousRandomSequenceGradient */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_reset00
static int tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_reset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"random_gen::CContinuousRandomSequenceGradient",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  random_gen::CContinuousRandomSequenceGradient* self = (random_gen::CContinuousRandomSequenceGradient*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reset'",NULL);
#endif
  {
   self->reset();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getValue of class  random_gen::CContinuousRandomSequenceGradient */
#ifndef TOLUA_DISABLE_tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_getValue00
static int tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_getValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"random_gen::CContinuousRandomSequenceGradient",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  random_gen::CContinuousRandomSequenceGradient* self = (random_gen::CContinuousRandomSequenceGradient*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getValue'",NULL);
#endif
  {
   double tolua_ret = (double)  self->getValue();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_bind_random_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_function(tolua_S,"randInt",tolua_bind_random_randInt00);
  tolua_function(tolua_S,"setSeed",tolua_bind_random_setSeed00);
  tolua_function(tolua_S,"setSeedTime",tolua_bind_random_setSeedTime00);
  tolua_function(tolua_S,"randTarget",tolua_bind_random_randTarget00);
  tolua_function(tolua_S,"rand01",tolua_bind_random_rand0100);
  tolua_function(tolua_S,"randRange",tolua_bind_random_randRange00);
  tolua_function(tolua_S,"diceRoll",tolua_bind_random_diceRoll00);
  tolua_module(tolua_S,"random_gen",0);
  tolua_beginmodule(tolua_S,"random_gen");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CBasePRNG","random_gen::CBasePRNG","",tolua_collect_random_gen__CBasePRNG);
   #else
   tolua_cclass(tolua_S,"CBasePRNG","random_gen::CBasePRNG","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CBasePRNG");
    tolua_function(tolua_S,"delete",tolua_bind_random_random_gen_CBasePRNG_delete00);
    tolua_function(tolua_S,"get",tolua_bind_random_random_gen_CBasePRNG_get00);
    tolua_function(tolua_S,"setSeed",tolua_bind_random_random_gen_CBasePRNG_setSeed00);
    tolua_function(tolua_S,"setSeedTime",tolua_bind_random_random_gen_CBasePRNG_setSeedTime00);
    tolua_function(tolua_S,"getTarget",tolua_bind_random_random_gen_CBasePRNG_getTarget00);
    tolua_function(tolua_S,"getRange",tolua_bind_random_random_gen_CBasePRNG_getRange00);
    tolua_function(tolua_S,"get01",tolua_bind_random_random_gen_CBasePRNG_get0100);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"LCG","random_gen::LCG","random_gen::CBasePRNG",tolua_collect_random_gen__LCG);
   #else
   tolua_cclass(tolua_S,"LCG","random_gen::LCG","random_gen::CBasePRNG",NULL);
   #endif
   tolua_beginmodule(tolua_S,"LCG");
    tolua_function(tolua_S,"new",tolua_bind_random_random_gen_LCG_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_random_random_gen_LCG_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_random_random_gen_LCG_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_random_random_gen_LCG_delete00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"KISS","random_gen::KISS","random_gen::CBasePRNG",tolua_collect_random_gen__KISS);
   #else
   tolua_cclass(tolua_S,"KISS","random_gen::KISS","random_gen::CBasePRNG",NULL);
   #endif
   tolua_beginmodule(tolua_S,"KISS");
    tolua_function(tolua_S,"new",tolua_bind_random_random_gen_KISS_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_random_random_gen_KISS_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_random_random_gen_KISS_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_random_random_gen_KISS_delete00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Xorshift","random_gen::Xorshift","random_gen::CBasePRNG",tolua_collect_random_gen__Xorshift);
   #else
   tolua_cclass(tolua_S,"Xorshift","random_gen::Xorshift","random_gen::CBasePRNG",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Xorshift");
    tolua_function(tolua_S,"new",tolua_bind_random_random_gen_Xorshift_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_random_random_gen_Xorshift_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_random_random_gen_Xorshift_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_random_random_gen_Xorshift_delete00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"MWC256","random_gen::MWC256","random_gen::CBasePRNG",tolua_collect_random_gen__MWC256);
   #else
   tolua_cclass(tolua_S,"MWC256","random_gen::MWC256","random_gen::CBasePRNG",NULL);
   #endif
   tolua_beginmodule(tolua_S,"MWC256");
    tolua_function(tolua_S,"new",tolua_bind_random_random_gen_MWC256_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_random_random_gen_MWC256_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_random_random_gen_MWC256_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_random_random_gen_MWC256_delete00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CMWC4096","random_gen::CMWC4096","random_gen::CBasePRNG",tolua_collect_random_gen__CMWC4096);
   #else
   tolua_cclass(tolua_S,"CMWC4096","random_gen::CMWC4096","random_gen::CBasePRNG",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CMWC4096");
    tolua_function(tolua_S,"new",tolua_bind_random_random_gen_CMWC4096_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_random_random_gen_CMWC4096_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_random_random_gen_CMWC4096_new00_local);
    tolua_function(tolua_S,"delete",tolua_bind_random_random_gen_CMWC4096_delete00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CContinuousRandomSequence","random_gen::CContinuousRandomSequence","",tolua_collect_random_gen__CContinuousRandomSequence);
   #else
   tolua_cclass(tolua_S,"CContinuousRandomSequence","random_gen::CContinuousRandomSequence","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CContinuousRandomSequence");
    tolua_function(tolua_S,"new",tolua_bind_random_random_gen_CContinuousRandomSequence_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_random_random_gen_CContinuousRandomSequence_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_random_random_gen_CContinuousRandomSequence_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_random_random_gen_CContinuousRandomSequence_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_random_random_gen_CContinuousRandomSequence_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_random_random_gen_CContinuousRandomSequence_new01_local);
    tolua_function(tolua_S,"setSampleRate",tolua_bind_random_random_gen_CContinuousRandomSequence_setSampleRate00);
    tolua_function(tolua_S,"setFrequency",tolua_bind_random_random_gen_CContinuousRandomSequence_setFrequency00);
    tolua_function(tolua_S,"setAmplitude",tolua_bind_random_random_gen_CContinuousRandomSequence_setAmplitude00);
    tolua_function(tolua_S,"setInterpType",tolua_bind_random_random_gen_CContinuousRandomSequence_setInterpType00);
    tolua_function(tolua_S,"reset",tolua_bind_random_random_gen_CContinuousRandomSequence_reset00);
    tolua_function(tolua_S,"getValue",tolua_bind_random_random_gen_CContinuousRandomSequence_getValue00);
    tolua_constant(tolua_S,"NONE",random_gen::CContinuousRandomSequence::NONE);
    tolua_constant(tolua_S,"LINEAR",random_gen::CContinuousRandomSequence::LINEAR);
    tolua_constant(tolua_S,"CUBIC",random_gen::CContinuousRandomSequence::CUBIC);
    tolua_constant(tolua_S,"QUINTIC",random_gen::CContinuousRandomSequence::QUINTIC);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CContinuousRandomSequenceGradient","random_gen::CContinuousRandomSequenceGradient","",tolua_collect_random_gen__CContinuousRandomSequenceGradient);
   #else
   tolua_cclass(tolua_S,"CContinuousRandomSequenceGradient","random_gen::CContinuousRandomSequenceGradient","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CContinuousRandomSequenceGradient");
    tolua_function(tolua_S,"new",tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_new00);
    tolua_function(tolua_S,"new_local",tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_new00_local);
    tolua_function(tolua_S,".call",tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_new00_local);
    tolua_function(tolua_S,"new",tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_new01);
    tolua_function(tolua_S,"new_local",tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_new01_local);
    tolua_function(tolua_S,".call",tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_new01_local);
    tolua_function(tolua_S,"setSampleRate",tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_setSampleRate00);
    tolua_function(tolua_S,"setFrequency",tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_setFrequency00);
    tolua_function(tolua_S,"setAmplitude",tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_setAmplitude00);
    tolua_function(tolua_S,"setInterpType",tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_setInterpType00);
    tolua_function(tolua_S,"reset",tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_reset00);
    tolua_function(tolua_S,"getValue",tolua_bind_random_random_gen_CContinuousRandomSequenceGradient_getValue00);
    tolua_constant(tolua_S,"NONE",random_gen::CContinuousRandomSequenceGradient::NONE);
    tolua_constant(tolua_S,"LINEAR",random_gen::CContinuousRandomSequenceGradient::LINEAR);
    tolua_constant(tolua_S,"CUBIC",random_gen::CContinuousRandomSequenceGradient::CUBIC);
    tolua_constant(tolua_S,"QUINTIC",random_gen::CContinuousRandomSequenceGradient::QUINTIC);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_bind_random (lua_State* tolua_S) {
 return tolua_bind_random_open(tolua_S);
};
#endif

