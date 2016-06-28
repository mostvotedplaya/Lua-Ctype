PREFIX  = /usr
LUALIB  = $(PREFIX)/lib64/lua/5.1
CFLAGS  = -O2 -Wall -fPIC -shared
TARGET  = ctype

all:
	$(CC) $(CFLAGS) -I$(INCLUDE) -o $(TARGET).so $(TARGET).c
clean:
	$(RM) $(TARGET).so
install:
	mv $(TARGET).so $(LUALIB)
