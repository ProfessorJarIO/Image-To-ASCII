# Define the compiler
CC = gcc

# Define the compiler flags
CFLAGS = -I./stb

# Define the linker flags
LDFLAGS = -lm

# Define the source files
SRCS = main.c ascii-art.c

# Define the output executable
TARGET = a.out

# Define the build target

all: $(TARGET)

# Rule for building the target
$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS) $(LDFLAGS)

# Clean rule to remove generated files
clean:
	rm -f $(TARGET)
