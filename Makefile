#LIB_PATH = /usr/local/lib

LDFLAGS=-lpthread -lm

# Use the g++ compiler
CC = g++

# Look for this debug flag
DEBUG_FLAGS = -g -Wall
STL = -std=c++11
CFLAGS = $(DEBUG_FLAGS) -O2 $(STL)

# Name your executable
EXE = 				\

# This tells the compiler where to put the compiler generated object files
OBJ = 				\

EXEOBJ = obj/tester.o	\

all: bootstrap $(EXE)
# Rule to build the executable
$(EXE): $(OBJ) $(EXEOBJ) src/*.hpp
	@echo "  LD	$@"
	@ $(CC) $(CFLAGS) -o $@ $(OBJ) obj/$@.o $(LDFLAGS)

# Rule to build all of our object files
obj/%.o: src/%.cpp
	@echo "  CXX	$@" 
	@ $(CC) $(CFLAGS) -c $< -o $@

obj/%.o: src/%.c
	@echo "  CC	$@"
	@ ${CC} ${CFLAGS} -c $< -o $@

bootstrap:
	@ mkdir -p obj

clean:
	rm -f $(EXE)
	rm -f obj/*.o
	rmdir obj