# Define the output executable and tools
EXE = print
CC = gcc
DEPS = lex.yy.c print_parser.tab.c
EXTRA = lex.yy.c print_parser.tab.c print_parser.tab.h
CFLAGS = 
LFLAGS = -lfl
BISON_FLAGS = -d

# The default target
all: $(EXE)

# Link the final executable
$(EXE): $(DEPS)
	$(CC) $(CFLAGS) -o $(EXE) $(DEPS) $(LFLAGS)

# Generate lex.yy.c from the .l file
lex.yy.c: print_lex.l
	flex print_lex.l

# Generate print_parser.tab.c and print_parser.tab.h from the .y file
print_parser.tab.c print_parser.tab.h: print_parser.y
	bison $(BISON_FLAGS) print_parser.y

# Clean up generated files
clean:
	rm -f $(EXTRA) $(EXE)
