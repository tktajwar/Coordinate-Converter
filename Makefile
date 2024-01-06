# Compiler
CC = cc

# Flags
CFLAGS = -Wall -Wextra

# Target binary
TARGET = coordinate_converter

# Files
SRC = $(TARGET).c to_cartesian.c to_cylindrical.c
OBJ = ${SRC:.c=.o}

# Debug build options
debug: CFLAGS += -g
debug: all

# Release build options
release: CFLAGS += -O2
release: all

# Default make
all: options $(TARGET)

# Output compiler options
options:
	@echo ${TARGET} build options:
	@echo "CFLAGS = ${CFLAGS}"
	@echo "CC     = ${CC}"

# Remake
remake: clean all

# Make target
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

# Compile to objects
%.o: %.c
	$(CC) $(CFLAGS) -c $<

# Clean object and binary directories
clean:
	$(RM) *.o $(TARGET)
