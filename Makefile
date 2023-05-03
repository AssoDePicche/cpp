FILENAME =
COMPILER = g++
COMPILER_FLAGS = -O2 -Wall

default: compile run

compile:
	$(COMPILER) $(FILENAME).cpp $(COMPILER_FLAGS) -o $(FILENAME).exe

clean:
	rm -f src/*/*/*.exe

run:
	$(FILENAME).exe
