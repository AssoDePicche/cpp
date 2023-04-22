FILENAME = ""
COMPILER = g++
COMPILER_FLAGS = -o $(FILENAME).exe

default: compile

compile:
	$(COMPILER) $(FILENAME).cpp $(COMPILER_FLAGS)

clean:
	rm -f src/*/*/*.exe
