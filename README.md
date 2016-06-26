# Lua-Ctype

This module provides some new functionality:

    ctype.isAlnum()
    ctype.isAlpha()
    ctype.isCntrl()
    ctype.isDigit()
    ctype.isGraph()
    ctype.isLower()
    ctype.isPrint()
    ctype.isPunct()
    ctype.isSpace()
    ctype.isUpper()
    ctype.isHex()

> All function calls will expect a string value and will return a boolean value.

## isAlnum

> Checks for just alphanumeric characters.

Example:

```
local ctype = require("ctype")

if ctype.isAlnum("ABC12345")
then
   print("Yes")
else
   print("No")
end
```

## isAlpha

> Checks for just alphabetic characters.

Example:

```
local ctype = require("ctype")

if ctype.isAlpha("ABCabc")
then
   print("Yes")
else
   print("No")
end
```

## isCntrl

> Checks for just control characters.

Example:

```
local ctype = require("ctype")

if ctype.isCntrl("\n\r\t")
then
   print("Yes")
else
   print("No")
end
```

## isDigit

> Checks for just numerical characters.

Example:

```
local ctype = require("ctype")

if ctype.isDigit("12345")
then
   print("Yes")
else
   print("No")
end
```

## isGraph

> Checks for any printable characters except space.

Example:

```
local ctype = require("ctype")

if ctype.isGraph("ABC")
then
   print("Yes")
else
   print("No")
end
```

## isLower

> Checks for just lowercase characters.

Example:

```
local ctype = require("ctype")

if ctype.isLower("abc")
then
   print("Yes")
else
   print("No")
end
```

## isPrint

> Checks for just printable characters.

Example:

```
local ctype = require("ctype")

if ctype.isPrint("Lee")
then
   print("Yes")
else
   print("No")
end
```

## isPunct

>  Checks for any printable characters which are not whitespace or alphanumeric character.

Example:

```
local ctype = require("ctype")

if ctype.isPunct("@")
then
   print("Yes")
else
   print("No")
end
```

## isSpace

> Checks for just whitespace characters.

Example:

```
local ctype = require("ctype")

if ctype.isSpace(" ")
then
   print("Yes")
else
   print("No")
end
```

## isUpper

> Checks for just uppercase characters.

Example:

```
local ctype = require("ctype")

if ctype.isUpper("ABCDEFGH")
then
   print("Yes")
else
   print("No")
end
```

## isHex

> Checks for just characters representing a hexadecimal digit.

Example:

```
local ctype = require("ctype")

if ctype.isHex("ABCDEF0123456789")
then
   print("Yes")
else
   print("No")
end
```

## Installation

Standard

```
git clone git://github.com/mostvotedplaya/Lua-Ctype.git
cd Lua-Ctype/src
make
make install
```
