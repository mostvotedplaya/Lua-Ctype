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

All function calls will expect a string value and will return a boolean value.

## isAlnum

> Checks for alphanumeric characters.

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

> Checks for alphabetic characters.

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

> Checks for control characters.

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

> Checks for numerical characters.

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

> Checks for lowercase characters.

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

> Checks for printable characters.


## isPunct

>  Checks for any printable characters which are not whitespace or alphanumeric character.

## isSpace

> Checks for whitespace characters.

## isUpper

> Checks for uppercase characters.

## isHex

> Checks for characters representing a hexadecimal digit.
