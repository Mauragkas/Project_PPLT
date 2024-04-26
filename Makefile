# Name of the final executable
EXE = test

# Dependencies (files needed to build the EXE) 
DEPS = lex.yy.c test.tab.c

EXTRA = lex.yy.c test.tab.c test.tab.h

# Compiler and linker flags 
CFLAGS = 
LFLAGS = -lfl

BISON_FLAGS = -d -Wcounterexamples

# The "all" target, the default if you just run 'make'
all: $(EXE)

# Rule to create the executable from compiled object files
$(EXE): $(DEPS)
	gcc $(CFLAGS) $(DEPS) $(LFLAGS) -o $(EXE)

# Rule to generate lex.yy.c from test.l
lex.yy.c: test.l
	flex test.l

# Rule to generate test.tab.c and test.tab.h from test.y 
test.tab.c test.tab.h: test.y
	bison $(BISON_FLAGS) test.y

# Rule to clean up the directory
clean:
	rm -f $(EXE) $(EXTRA)