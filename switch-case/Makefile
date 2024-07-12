# Define the output executable and tools
EXE = sw-ca
CC = gcc
DEPS = lex.yy.c parser.tab.c
EXTRA = lex.yy.c parser.tab.c parser.tab.h
CFLAGS = 
LFLAGS = -lfl
BISON_FLAGS = -d

# The default target
all: $(EXE)

# Link the final executable
$(EXE): $(DEPS)
	$(CC) $(CFLAGS) -o $(EXE) $(DEPS) $(LFLAGS)

# Generate lex.yy.c from the .l file
lex.yy.c: scanner.l
	flex scanner.l

# Generate parser.tab.c and parser.tab.h from the .y file
parser.tab.c parser.tab.h: parser.y
	bison $(BISON_FLAGS) parser.y

# Clean up generated files
clean:
	rm -f $(EXTRA) $(EXE)
