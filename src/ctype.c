#include <lua.h>
#include <lauxlib.h>
#include <string.h>
#include <ctype.h>

#define CTYPE( L, F ) \
        int result = 0; \
        if ( lua_isstring( L, 1 ) ) \
        { \
             const char *value = lua_tostring( L, 1 ); \
             int offset = 0; \
             int length = strlen( value ); \
             if ( length != 0 ) \
             { \
                  result = 1; \
                  while ( offset < length ) \
                  { \
                       if ( ! F( value[offset] ) ) \
                       { \
                            result = 0; \
                            break; \
                       } \
                       offset++; \
                  } \
             } \
        } \
	lua_pushboolean( L, result ); \
        return 1;\

int _isAlnum( lua_State *L )
{
    CTYPE( L, isalnum );
}

int _isAlpha( lua_State *L )
{
    CTYPE( L, isalpha );
}

int _isCntrl( lua_State *L )
{
    CTYPE( L, iscntrl );
}

int _isDigit( lua_State *L )
{
    CTYPE( L, isdigit );
}

int _isGraph( lua_State *L )
{
    CTYPE( L, isgraph );
}

int _isLower( lua_State *L )
{
    CTYPE( L, islower );
}

int _isPrint( lua_State *L )
{
    CTYPE( L, isprint );
}

int _isPunct( lua_State *L )
{
    CTYPE( L, ispunct );
}

int _isSpace( lua_State *L )
{
    CTYPE( L, isspace );
}

int _isUpper( lua_State *L )
{
    CTYPE( L, isupper );
}

int _isHex( lua_State *L )
{   
    CTYPE( L, isxdigit );
}

static const luaL_Reg R[] =
{
    {"isAlnum", _isAlnum},
    {"isAlpha", _isAlpha},
    {"isCntrl", _isCntrl},
    {"isDigit", _isDigit},
    {"isGraph", _isGraph},
    {"isLower", _isLower},
    {"isPrint", _isPrint},
    {"isPunct", _isPunct},
    {"isSpace", _isSpace},
    {"isUpper", _isUpper},
    {"isHex",   _isHex},
    {NULL, NULL} 
};

int luaopen_ctype( lua_State *L )
{
    luaL_openlib( L, "ctype", R, 0 );
    return 0;
}
