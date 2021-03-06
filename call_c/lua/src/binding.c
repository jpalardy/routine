
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>

#include "binding.h"
#include "code.h"

int luaopen_code(lua_State *L) {
  lua_register(L, "mult", binding_mult);
  return 0;
}

static int binding_mult(lua_State *L) {
  int x = lua_tonumber(L, 1);
  int y = lua_tonumber(L, 2);
  lua_pushnumber(L, mult(x, y));
  return 1;
}

