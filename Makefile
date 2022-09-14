CC          = gcc
CFLAGS		= -c -Wall
LDFLAGS		= -Werror
SOURCES		= estructura.c
INCLUDES	= -I.
OBJECTS		= $(SOURCES:.c=.o)
TARGET		= Estru_Memo

all: $(SOURCES) $(TARGET)

$(TARGET): $(OBJECTS) 
	$(CC) $(OBJECTS) $(LDFLAGS) -o $@  

.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) $< -o $@

clean:
	rm -rf $(OBJECTS) $(TARGET)