PREFIX  = /usr/local
LUALIB  = $(PREFIX)/lib/lua/5.1
CFLAGS  = -02 -Wall -fPIC -shared
TARGET  = ctype

all:
	$(CC) $(CFLAGS) -o $(TARGET).so $(TARGET).c
clean:
	$(RM) $(TARGET).so
install:
	mv $(TARGET).so $(LUALIB)
