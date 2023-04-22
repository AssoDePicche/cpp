FILENAME = ""
COMPILER = g++
COMPILER_FLAGS = -o $(FILENAME).exe

default: compile run

compile:
	$(COMPILER) $(FILENAME).cpp $(COMPILER_FLAGS)

clean:
	rm -f src/*/*/*.exe

run:
	$(FILENAME).exe
